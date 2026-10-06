// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVideoTranscodingRetryPolicy
// Superclass: NSObject
// Address: 0x112be36a0

@interface SCVideoTranscodingRetryPolicy


// +[SCVideoTranscodingRetryPolicy decisionForError:]
// Type encoding: q24@0:8@16
// Implementation: 0x10905fa10

// +[SCVideoTranscodingRetryPolicy retryDelayForAttemptIndex:baseDelayMs:]
// Type encoding: d32@0:8Q16q24
// Implementation: 0x10905fa80

// +[SCVideoTranscodingRetryPolicy _isMediaServicesReset:]
// Type encoding: B24@0:8@16
// Implementation: 0x10905fac0

// +[SCVideoTranscodingRetryPolicy _isMissingVideoTrack:]
// Type encoding: B24@0:8@16
// Implementation: 0x10905fbac

// +[SCVideoTranscodingRetryPolicy _integerFromUserInfoValue:]
// Type encoding: q24@0:8@16
// Implementation: 0x10905fcb0

@end
