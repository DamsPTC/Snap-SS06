// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTranscodingInProgressSentinel
// Superclass: NSObject
// Address: 0x112a260d8

@interface SCTranscodingInProgressSentinel


// +[SCTranscodingInProgressSentinel initialize]
// Type encoding: v16@0:8
// Implementation: 0x1001de85c

// +[SCTranscodingInProgressSentinel _queue]
// Type encoding: @16@0:8
// Implementation: 0x1001debec

// +[SCTranscodingInProgressSentinel _sentinelDirPath]
// Type encoding: @16@0:8
// Implementation: 0x1001df4b0

// +[SCTranscodingInProgressSentinel _ensureDirectoryExists]
// Type encoding: B16@0:8
// Implementation: 0x105269580

// +[SCTranscodingInProgressSentinel _fsyncDirectory]
// Type encoding: v16@0:8
// Implementation: 0x10526960c

// +[SCTranscodingInProgressSentinel markJobStarted:]
// Type encoding: v24@0:8@16
// Implementation: 0x105269674

// +[SCTranscodingInProgressSentinel markJobEnded:]
// Type encoding: v24@0:8@16
// Implementation: 0x105269830

// +[SCTranscodingInProgressSentinel wasTranscodingInProgressAtPreviousAbnormalExit]
// Type encoding: B16@0:8
// Implementation: 0x1052699c0

// +[SCTranscodingInProgressSentinel clearAll]
// Type encoding: v16@0:8
// Implementation: 0x1001deb7c

// +[SCTranscodingInProgressSentinel _seedPreviousSessionSentinelForTesting:]
// Type encoding: v24@0:8@16
// Implementation: 0x105269c14

// +[SCTranscodingInProgressSentinel _resetForTesting]
// Type encoding: v16@0:8
// Implementation: 0x105269da0

@end
