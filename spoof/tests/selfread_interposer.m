// The real interposer and shared logger in a separate host dylib.
#define SS06_LOGONLY_TESTING 1
#define SS06_SELFREAD 1
#import "../SS06LogOnly.m"

static NSString *TestClipboard;
static void (*TestClipboardCallback)(void);
static BOOL SS06LogOnlyAppIsActive(void) { return YES; }
static void SS06LogOnlyWriteClipboard(NSString *snapshot)
{
    if (TestClipboardCallback) TestClipboardCallback();
    TestClipboard = [snapshot copy];
}

NSString *SS06SelfReadTestHistory(void)
{
    @synchronized (SS06LogOnlyHistory) { return [SS06LogOnlyHistory copy]; }
}
NSString *SS06SelfReadTestClipboard(void) { return TestClipboard; }
void SS06SelfReadTestReset(void)
{
    @synchronized (SS06LogOnlyHistory) {
        [SS06LogOnlyHistory setString:@""];
        ++SS06LogOnlyHistoryRevision;
    }
}
void SS06SelfReadTestSetClipboardCallback(void (*callback)(void)) { TestClipboardCallback = callback; }

__attribute__((constructor))
static void TestStart(void) { SS06LogOnlyStart(); }
