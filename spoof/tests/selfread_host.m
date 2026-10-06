// Calls POSIX from a different Mach-O image: tests actual dyld interposition.
#import <Foundation/Foundation.h>
#import <dispatch/dispatch.h>
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <unistd.h>

extern NSString *SS06SelfReadTestHistory(void);
extern NSString *SS06SelfReadTestClipboard(void);
extern void SS06SelfReadTestReset(void);
extern void SS06SelfReadTestSetClipboardCallback(void (*callback)(void));

#if SS06_SELFBLOCK_HOST
// Définies par l'interposeur compilé avec SS06_SELFREAD_BLOCK=1.
extern void SS06SelfReadAttestationWindowOpen(void);
extern void SS06SelfReadAttestationWindowClose(void);
static NSUInteger SS06CountBlockedLines(void)
{
    return [SS06SelfReadTestHistory() componentsSeparatedByString:@"op_result=blocked"].count - 1;
}
#endif

#define CHECK(condition) do { if (!(condition)) { fprintf(stderr, "FAIL selfread line %d: %s errno=%d\n", __LINE__, #condition, errno); return 1; } } while (0)
static int ClipboardFD;
static int ClipboardCallbacks, ClipboardReadFailures;
static void ClipboardRead(void)
{
    ++ClipboardCallbacks;
    char data[4];
    errno = ERANGE;
    if (pread(ClipboardFD, data, sizeof(data), 0x1788) != 4 || errno != ERANGE) ++ClipboardReadFailures;
}
static void Drain(void)
{
    __block BOOL done = NO;
    dispatch_async(dispatch_get_main_queue(), ^{ done = YES; });
    NSDate *deadline = [NSDate dateWithTimeIntervalSinceNow:5];
    while (!done && deadline.timeIntervalSinceNow > 0)
        [[NSRunLoop currentRunLoop] runUntilDate:[NSDate dateWithTimeIntervalSinceNow:0.01]];
}

int main(void)
{
    @autoreleasepool {
        Drain(); // Includes the diagnostic's initial installation retry.
        char directory[] = "/tmp/ss06-selfread-XXXXXX";
        CHECK(mkdtemp(directory) != NULL);
        NSString *app = [NSString stringWithFormat:@"%s/Snapchat.app", directory];
        CHECK(mkdir(app.fileSystemRepresentation, 0700) == 0);
        NSString *mainPath = [app stringByAppendingPathComponent:@"Snapchat"];
        NSString *otherPath = [app stringByAppendingPathComponent:@"Snapchat.extra"];
        NSString *infoPath = [app stringByAppendingPathComponent:@"Info.plist"];
        mode_t oldMask = umask(0);
        SS06SelfReadTestReset();
        errno = EDOM;
        int fd = open(mainPath.fileSystemRepresentation, O_CREAT | O_EXCL | O_RDWR, 0640);
        int openedErrno = errno;
        umask(oldMask);
        CHECK(fd >= 0 && openedErrno == EDOM);
        struct stat info;
        CHECK(fstat(fd, &info) == 0 && (info.st_mode & 0777) == 0640);
        CHECK([SS06SelfReadTestHistory() containsString:@"selfread op=open"]);
        CHECK([SS06SelfReadTestHistory() containsString:@"offset=0x0"]);
        const off_t fileSize = 0x134db9c0LL + 16384;
        CHECK(ftruncate(fd, fileSize) == 0); // Sparse synthetic file, not the app binary.
        const unsigned char marker[4] = {0x31, 0x42, 0x53, 0x64};
        CHECK(pwrite(fd, marker, 4, 0x1788) == 4);
        CHECK(pwrite(fd, marker, 4, 0x28000) == 4);
        CHECK(pwrite(fd, marker, 4, 0x134db9c0) == 4);

        unsigned char buffer[4096];
        SS06SelfReadTestReset();
        CHECK(lseek(fd, 0x1788, SEEK_SET) == 0x1788);
        errno = EDOM;
        CHECK(read(fd, buffer, 4) == 4 && errno == EDOM && memcmp(buffer, marker, 4) == 0);
        CHECK(lseek(fd, 0, SEEK_CUR) == 0x178c);
        CHECK([SS06SelfReadTestHistory() containsString:@"offset=0x1788"]);
        CHECK([SS06SelfReadTestHistory() containsString:@"requested=4 result=4 read_bytes=4 mapped_bytes=0"]);
        errno = ERANGE;
        CHECK(pread(fd, buffer, 4, 0x134db9c0) == 4 && errno == ERANGE && memcmp(buffer, marker, 4) == 0);
        CHECK(lseek(fd, 0, SEEK_CUR) == 0x178c); // pread leaves the cursor unchanged.
        CHECK([SS06SelfReadTestHistory() containsString:@"offset=0x134db9c0"]);
        CHECK(lseek(fd, 0x28000, SEEK_SET) == 0x28000);
        CHECK(read(fd, buffer, sizeof(buffer)) == 4096);
        CHECK(read(fd, buffer, sizeof(buffer)) == 4096);
        CHECK([SS06SelfReadTestHistory() containsString:@"offset=0x28000"]);
        CHECK([SS06SelfReadTestHistory() containsString:@"offset=0x29000"]);
        CHECK([SS06SelfReadTestHistory() containsString:@"requested=4096 result=4096 read_bytes=4096"]);

        errno = EDOM;
        void *mapping = mmap(NULL, 4096, PROT_READ, MAP_PRIVATE, fd, 0x28000);
        CHECK(mapping != MAP_FAILED && errno == EDOM && memcmp(mapping, marker, 4) == 0);
        CHECK([SS06SelfReadTestHistory() containsString:@"op=mmap"]);
        CHECK([SS06SelfReadTestHistory() containsString:@"requested=4096 result=0 read_bytes=0 mapped_bytes=4096"]);
        CHECK(munmap(mapping, 4096) == 0);
        errno = 0;
        CHECK(mmap(NULL, 4096, PROT_READ, MAP_PRIVATE, fd, 1) == MAP_FAILED && errno == EINVAL);
        CHECK([SS06SelfReadTestHistory() containsString:@"result=-1 read_bytes=0 mapped_bytes=0"]);
        CHECK(pread(fd, buffer, 64, fileSize - 2) == 2);
        CHECK([SS06SelfReadTestHistory() containsString:@"requested=64 result=2 read_bytes=2"]);
        CHECK(lseek(fd, fileSize, SEEK_SET) == fileSize && read(fd, buffer, 64) == 0);
        CHECK([SS06SelfReadTestHistory() containsString:@"requested=64 result=0 read_bytes=0"]);

        SS06SelfReadTestReset();
        FILE *stream = fopen(mainPath.fileSystemRepresentation, "rb");
        CHECK(stream != NULL && [SS06SelfReadTestHistory() containsString:@"op=fopen"]);
        CHECK(![SS06SelfReadTestHistory() containsString:@"op=open"]); // No duplicate from libc internals.
        CHECK(pread(fileno(stream), buffer, 4, 0x1788) == 4 && memcmp(buffer, marker, 4) == 0);
        CHECK(fclose(stream) == 0);
        int writeOnly = open(mainPath.fileSystemRepresentation, O_WRONLY);
        CHECK(writeOnly >= 0);
        errno = 0;
        CHECK(read(writeOnly, buffer, 4) == -1 && errno == EBADF);
        CHECK(close(writeOnly) == 0);
        int duplicate = fcntl(fd, F_DUPFD, 100);
        CHECK(duplicate >= 0);
        SS06SelfReadTestReset();
        CHECK(pread(duplicate, buffer, 4, 0x1788) == 4);
        CHECK([SS06SelfReadTestHistory() containsString:@"op=pread"]);
        CHECK(close(duplicate) == 0);

        // Non-target paths and a descriptor number reused for another file stay silent.
        SS06SelfReadTestReset();
        int other = open(otherPath.fileSystemRepresentation, O_CREAT | O_RDWR, 0600);
        int metadata = open(infoPath.fileSystemRepresentation, O_CREAT | O_RDWR, 0600);
        CHECK(other >= 0 && metadata >= 0);
        CHECK(write(other, marker, 4) == 4 && lseek(other, 0, SEEK_SET) == 0);
        CHECK(read(other, buffer, 4) == 4);
        CHECK(dup2(other, duplicate) == duplicate);
        CHECK(pread(duplicate, buffer, 4, 0) == 4);
        CHECK(SS06SelfReadTestHistory().length == 0);
        CHECK(close(duplicate) == 0 && close(metadata) == 0 && close(other) == 0);
        errno = 0;
        CHECK(read(-1, buffer, 4) == -1 && errno == EBADF && SS06SelfReadTestHistory().length == 0);

        // Clipboard-side I/O must be suppressed, otherwise it could log itself forever.
        Drain();
        SS06SelfReadTestReset();
        ClipboardFD = fd;
        SS06SelfReadTestSetClipboardCallback(ClipboardRead);
        CHECK(read(fd, buffer, 0) == 0);
        NSString *before = SS06SelfReadTestHistory();
        Drain();
        CHECK(ClipboardCallbacks > 0 && ClipboardReadFailures == 0);
        CHECK([before isEqualToString:SS06SelfReadTestHistory()]);
        CHECK([SS06SelfReadTestClipboard() isEqualToString:before]);
        CHECK([before hasPrefix:@"[SS06LogOnly] "]);
        SS06SelfReadTestSetClipboardCallback(NULL);

#if SS06_SELFBLOCK_HOST
        // selfblock : le mappage du principal échoue seulement pendant la fenêtre
        // d'attestation ; les autres fichiers restent mappables en toute circonstance.
        SS06SelfReadTestReset();
        errno = 0;
        void *outsideWindow = mmap(NULL, 4096, PROT_READ, MAP_PRIVATE, fd, 0x28000);
        CHECK(outsideWindow != MAP_FAILED && errno == 0 && memcmp(outsideWindow, marker, 4) == 0);
        CHECK(munmap(outsideWindow, 4096) == 0);
        CHECK(SS06CountBlockedLines() == 0);

        SS06SelfReadAttestationWindowOpen();
        errno = 0;
        void *insideWindow = mmap(NULL, 4096, PROT_READ, MAP_PRIVATE, fd, 0x28000);
        CHECK(insideWindow == MAP_FAILED && errno == ENOMEM);
        CHECK(SS06CountBlockedLines() == 1);
        CHECK([SS06SelfReadTestHistory() containsString:@"op=mmap op_result=blocked"]);
        CHECK([SS06SelfReadTestHistory() containsString:@"errno=12"]);
        int otherWindow = open(otherPath.fileSystemRepresentation, O_RDONLY);
        CHECK(otherWindow >= 0);
        void *otherMapping = mmap(NULL, 4, PROT_READ, MAP_PRIVATE, otherWindow, 0);
        CHECK(otherMapping != MAP_FAILED && memcmp(otherMapping, marker, 4) == 0);
        CHECK(munmap(otherMapping, 4) == 0 && close(otherWindow) == 0);
        CHECK(SS06CountBlockedLines() == 1); // Seul le principal est bloqué.
        SS06SelfReadAttestationWindowClose();

        errno = 0;
        void *afterWindow = mmap(NULL, 4096, PROT_READ, MAP_PRIVATE, fd, 0x28000);
        CHECK(afterWindow != MAP_FAILED && errno == 0 && memcmp(afterWindow, marker, 4) == 0);
        CHECK(munmap(afterWindow, 4096) == 0);
        CHECK(SS06CountBlockedLines() == 1); // La fenêtre fermée ne bloque plus.
        Drain();
        puts("PASS: attestation-window mmap failure for the main binary only (selfblock)");
#endif

        CHECK(close(fd) == 0);
        CHECK(unlink(mainPath.fileSystemRepresentation) == 0);
        CHECK(unlink(otherPath.fileSystemRepresentation) == 0);
        CHECK(unlink(infoPath.fileSystemRepresentation) == 0);
        CHECK(rmdir(app.fileSystemRepresentation) == 0 && rmdir(directory) == 0);
        puts("PASS: real dyld interposition of open/fopen/read/pread/mmap, data/mode/offset/errno, EOF/errors, fd reuse/dup, exact filter, clipboard reentrancy");
    }
    return 0;
}
