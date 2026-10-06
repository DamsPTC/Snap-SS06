// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContactPhotosServiceImpl
// Superclass: NSObject
// Address: 0x112a58fd8

@interface SCContactPhotosServiceImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCContactPhotosServiceImpl initWithContactStore:contactPermissionInfoProvider:performerProvider:applicationLifecycleEvents:contactPhotosLogger:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1056d1da4

// -[SCContactPhotosServiceImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1056d1ef0

// -[SCContactPhotosServiceImpl loadContactPhotosWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1056d1f58

// -[SCContactPhotosServiceImpl _observeApplicationLifecycleEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056d2090

// -[SCContactPhotosServiceImpl _didReceiveMemoryWarning:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056d2298

// -[SCContactPhotosServiceImpl _applicationDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x1056d22c4

// -[SCContactPhotosServiceImpl supportedURLSchemes]
// Type encoding: @16@0:8
// Implementation: 0x1056d22d0

// -[SCContactPhotosServiceImpl requestPayloadWithURL:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x1056d233c

// -[SCContactPhotosServiceImpl loadImageWithRequestPayload:parameters:completion:]
// Type encoding: @48@0:8@16{SCValdiAssetRequestParameters=qq}24@?40
// Implementation: 0x1056d2364

// -[SCContactPhotosServiceImpl _loadContactPhotosWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1056d2684

// -[SCContactPhotosServiceImpl _createPerformerWithPerformerProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056d2cdc

// -[SCContactPhotosServiceImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056d2d64

@end
