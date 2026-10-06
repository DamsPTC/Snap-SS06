// Included only by SS06LogOnly.m with SS06_SELFREAD=1.
// Metadata observation only: no buffer, file, mapping or return-value changes.
#include <errno.h>
#include <fcntl.h>
#include <limits.h>
#include <pthread.h>
#include <stdatomic.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <sys/mman.h>
#include <unistd.h>

static _Atomic(bool) SS06SelfReadEnabled;
static _Thread_local unsigned int SS06SelfReadDepth;
static _Atomic(bool) SS06SelfReadClipboardPending;

static bool SS06SelfReadBegin(void)
{
    if (!atomic_load_explicit(&SS06SelfReadEnabled, memory_order_relaxed) || SS06SelfReadDepth) return false;
    SS06SelfReadDepth = 1;
    return true;
}

static bool SS06SelfReadMatches(const char *path)
{
    static const char suffix[] = "Snapchat.app/Snapchat";
    if (!path) return false;
    size_t size = strnlen(path, PATH_MAX), suffixSize = sizeof(suffix) - 1;
    if (size == PATH_MAX || size < suffixSize) return false;
    size_t start = size - suffixSize;
    return (start == 0 || path[start - 1] == '/') && memcmp(path + start, suffix, suffixSize) == 0;
}

static bool SS06SelfReadPath(int fd, const char *openedPath, char path[PATH_MAX])
{
    if (fd < 0) return false;
    path[0] = '\0';
    // No fd cache: close/dup/reuse cannot leave a stale association.
    if (fcntl(fd, F_GETPATH, path) == 0) {
        path[PATH_MAX - 1] = '\0';
        return SS06SelfReadMatches(path);
    }
    // Only used after a successful open/fopen, whose path was consumed by libc.
    if (SS06SelfReadMatches(openedPath)) {
        strlcpy(path, openedPath, PATH_MAX);
        return true;
    }
    return false;
}

static void SS06SelfReadEmit(const char *operation, int fd, const char *path,
                             off_t offset, const char *offsetSource, size_t requested,
                             long long result, size_t readBytes, size_t mappedBytes,
                             int originalErrno)
{
    @try {
        @autoreleasepool {
            NSString *name = [[NSString alloc] initWithUTF8String:path];
            if (!name) name = @"<non-utf8-path>";
            NSData *encoded = [NSJSONSerialization dataWithJSONObject:@{@"path": name} options:0 error:NULL];
            NSString *file = [[NSString alloc] initWithData:encoded encoding:NSUTF8StringEncoding];
            NSString *hex = offset >= 0 ? [NSString stringWithFormat:@"0x%llx", (unsigned long long)offset] : @"unknown";
            uint64_t thread = 0;
            pthread_threadid_np(NULL, &thread);
            SS06LogOnlyRecord(@"selfread op=%s fd=%d file=%@ offset=%@ offset_dec=%lld offset_source=%s requested=%zu result=%lld read_bytes=%zu mapped_bytes=%zu errno=%d thread=%llu",
                              operation, fd, file ?: @"<path-encoding-failed>", hex, (long long)offset,
                              offsetSource, requested, result, readBytes, mappedBytes, originalErrno,
                              (unsigned long long)thread);
        }
    } @catch (__unused NSException *exception) {
        // A diagnostic failure must not replace the original result/errno.
    }
}

static void SS06SelfReadFinish(int originalErrno)
{
    SS06SelfReadDepth = 0;
    errno = originalErrno;
}

// The original symbol is called from the interposing image, as in Apple's
// dyld-interposing.h example. No dlsym/dispatch_once in the POSIX hot path.
static int SS06SelfRead_open(const char *path, int flags, ...)
{
    mode_t mode = 0;
    if (flags & O_CREAT) {
        va_list args;
        va_start(args, flags);
        mode = (mode_t)va_arg(args, int); // Darwin mode_t undergoes integer promotion.
        va_end(args);
    }
    int entryErrno = errno;
    bool observing = SS06SelfReadBegin();
    errno = entryErrno;
    if (!observing) return flags & O_CREAT ? open(path, flags, mode) : open(path, flags);
    int result = flags & O_CREAT ? open(path, flags, mode) : open(path, flags);
    int originalErrno = errno;
    char resolved[PATH_MAX];
    if (result >= 0 && SS06SelfReadPath(result, path, resolved))
        SS06SelfReadEmit("open", result, resolved, lseek(result, 0, SEEK_CUR), "lseek_after_open", 0, result, 0, 0, originalErrno);
    SS06SelfReadFinish(originalErrno);
    return result;
}

static FILE *SS06SelfRead_fopen(const char *path, const char *mode)
{
    int entryErrno = errno;
    bool observing = SS06SelfReadBegin();
    errno = entryErrno;
    if (!observing) return fopen(path, mode);
    FILE *result = fopen(path, mode);
    int originalErrno = errno;
    char resolved[PATH_MAX];
    if (result) {
        int fd = fileno(result);
        if (SS06SelfReadPath(fd, path, resolved))
            SS06SelfReadEmit("fopen", fd, resolved, lseek(fd, 0, SEEK_CUR), "lseek_after_open", 0, 1, 0, 0, originalErrno);
    }
    SS06SelfReadFinish(originalErrno);
    return result;
}

static ssize_t SS06SelfRead_read(int fd, void *buffer, size_t count)
{
    int entryErrno = errno;
    if (!SS06SelfReadBegin()) { errno = entryErrno; return read(fd, buffer, count); }
    char path[PATH_MAX];
    bool target = SS06SelfReadPath(fd, NULL, path);
    off_t offset = target ? lseek(fd, 0, SEEK_CUR) : -1;
    errno = entryErrno;
    ssize_t result = read(fd, buffer, count);
    int originalErrno = errno;
    if (target) SS06SelfReadEmit("read", fd, path, offset, "lseek_before_read", count, result, result > 0 ? (size_t)result : 0, 0, originalErrno);
    SS06SelfReadFinish(originalErrno);
    return result;
}

static ssize_t SS06SelfRead_pread(int fd, void *buffer, size_t count, off_t offset)
{
    int entryErrno = errno;
    if (!SS06SelfReadBegin()) { errno = entryErrno; return pread(fd, buffer, count, offset); }
    char path[PATH_MAX];
    bool target = SS06SelfReadPath(fd, NULL, path);
    errno = entryErrno;
    ssize_t result = pread(fd, buffer, count, offset);
    int originalErrno = errno;
    if (target) SS06SelfReadEmit("pread", fd, path, offset, "argument", count, result, result > 0 ? (size_t)result : 0, 0, originalErrno);
    SS06SelfReadFinish(originalErrno);
    return result;
}

static void *SS06SelfRead_mmap(void *address, size_t length, int protection, int flags, int fd, off_t offset)
{
    int entryErrno = errno;
    if (!SS06SelfReadBegin()) { errno = entryErrno; return mmap(address, length, protection, flags, fd, offset); }
    char path[PATH_MAX];
    bool target = !(flags & MAP_ANON) && SS06SelfReadPath(fd, NULL, path);
    errno = entryErrno;
    void *result = mmap(address, length, protection, flags, fd, offset);
    int originalErrno = errno;
    if (target) SS06SelfReadEmit("mmap", fd, path, offset, "argument", length, result == MAP_FAILED ? -1 : 0, 0, result == MAP_FAILED ? 0 : length, originalErrno);
    SS06SelfReadFinish(originalErrno);
    return result;
}

__attribute__((used))
static struct SS06SelfReadInterposePair { const void *replacement; const void *replacee; }
SS06SelfReadInterposes[] __attribute__((section("__DATA,__interpose,interposing"))) = {
    { (const void *)(uintptr_t)&SS06SelfRead_open, (const void *)(uintptr_t)&open },
    { (const void *)(uintptr_t)&SS06SelfRead_fopen, (const void *)(uintptr_t)&fopen },
    { (const void *)(uintptr_t)&SS06SelfRead_read, (const void *)(uintptr_t)&read },
    { (const void *)(uintptr_t)&SS06SelfRead_pread, (const void *)(uintptr_t)&pread },
    { (const void *)(uintptr_t)&SS06SelfRead_mmap, (const void *)(uintptr_t)&mmap },
};

static void SS06SelfReadStart(void)
{
    if (atomic_exchange_explicit(&SS06SelfReadEnabled, true, memory_order_relaxed)) return;
    SS06LogOnlyRecord(@"selfread init enabled=YES interpose_entries=5 filter=exact-Snapchat.app/Snapchat content_capture=NO");
}
