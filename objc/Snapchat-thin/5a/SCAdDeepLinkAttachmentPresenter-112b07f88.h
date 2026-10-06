// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdDeepLinkAttachmentPresenter
// Superclass: NSObject
// Address: 0x112b07f88

@interface SCAdDeepLinkAttachmentPresenter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdDeepLinkAttachmentPresenter initWithAttachment:deepLinkUrlHandler:fallbackAttachmentPresenter:internalErrorMetricsManager:delegate:disableInternalBrowserPresenter:adConfigProvider:]
// Type encoding: @68@0:8@16@24@32@40@48B56@60
// Implementation: 0x10697c508

// -[SCAdDeepLinkAttachmentPresenter canHandleAttachment:]
// Type encoding: B24@0:8@16
// Implementation: 0x10697c65c

// -[SCAdDeepLinkAttachmentPresenter presentAttachment]
// Type encoding: v16@0:8
// Implementation: 0x10697c67c

// -[SCAdDeepLinkAttachmentPresenter dismissAttachment]
// Type encoding: v16@0:8
// Implementation: 0x10697c8d0

// -[SCAdDeepLinkAttachmentPresenter isPresenting]
// Type encoding: B16@0:8
// Implementation: 0x10697c9a8

// -[SCAdDeepLinkAttachmentPresenter _handleDeepLinkWithSuccess:isExternal:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x10697c9b0

// -[SCAdDeepLinkAttachmentPresenter _handleFallback]
// Type encoding: v16@0:8
// Implementation: 0x10697ccc0

// -[SCAdDeepLinkAttachmentPresenter adAttachmentPresenterTriggerAttempt:]
// Type encoding: v24@0:8@16
// Implementation: 0x10697ce84

// -[SCAdDeepLinkAttachmentPresenter adAttachmentPresenterDidLoad:metrics:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10697ce88

// -[SCAdDeepLinkAttachmentPresenter adAttachmentPresenterDidTrigger:]
// Type encoding: v24@0:8@16
// Implementation: 0x10697ce8c

// -[SCAdDeepLinkAttachmentPresenter adAttachmentPresenterDidPresent:attachmentMetadata:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10697ce90

// -[SCAdDeepLinkAttachmentPresenter adAttachmentPresenterDidComplete:result:attachmentMetadata:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10697cef8

// -[SCAdDeepLinkAttachmentPresenter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10697cf78

@end
