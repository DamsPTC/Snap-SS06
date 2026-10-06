// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDownloadableContentManagerBase
// Superclass: NSObject
// Address: 0x112a5ce08

@interface SCDownloadableContentManagerBase

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDownloadableContentManagerBase errorDomain]
// Type encoding: @16@0:8
// Implementation: 0x10570713c

// -[SCDownloadableContentManagerBase requestManager]
// Type encoding: @16@0:8
// Implementation: 0x105707190

// -[SCDownloadableContentManagerBase shouldLog]
// Type encoding: B16@0:8
// Implementation: 0x1057071e4

// -[SCDownloadableContentManagerBase init]
// Type encoding: @16@0:8
// Implementation: 0x1057071ec

// -[SCDownloadableContentManagerBase requestNonAuthorizedContent:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105707278

// -[SCDownloadableContentManagerBase requestContent:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105707284

// -[SCDownloadableContentManagerBase requestContent:authorized:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x105707290

// -[SCDownloadableContentManagerBase requestBoltDownloadableContent:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1057073f0

// -[SCDownloadableContentManagerBase addCallback:forContent:]
// Type encoding: Q32@0:8@?16@24
// Implementation: 0x105707544

// -[SCDownloadableContentManagerBase removeAllCallbacksForContent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10570766c

// -[SCDownloadableContentManagerBase runCallbacksForContent:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105707674

// -[SCDownloadableContentManagerBase requestLocalResourceWithContent:success:failure:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1057077cc

// -[SCDownloadableContentManagerBase _requestResourceFromBoltWithContent:success:failure:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x105707890

// -[SCDownloadableContentManagerBase requestResourceFromCDNWithContent:authorized:success:failure:]
// Type encoding: v44@0:8@16B24@?28@?36
// Implementation: 0x105707c88

// -[SCDownloadableContentManagerBase _successCallbackForContent:]
// Type encoding: @?24@0:8@16
// Implementation: 0x10570802c

// -[SCDownloadableContentManagerBase _failureCallbackForContent:]
// Type encoding: @?24@0:8@16
// Implementation: 0x1057080fc

// -[SCDownloadableContentManagerBase .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105708684

// +[SCDownloadableContentManagerBase _processData:downloadableContent:errorDomain:success:failure:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x1057081cc

// +[SCDownloadableContentManagerBase _processFailureResponse:errorDomain:failure:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105708424

// +[SCDownloadableContentManagerBase _absoluteDataPathForUnzippedData:directoryPath:error:]
// Type encoding: B40@0:8@16@24^@32
// Implementation: 0x10570855c

@end
