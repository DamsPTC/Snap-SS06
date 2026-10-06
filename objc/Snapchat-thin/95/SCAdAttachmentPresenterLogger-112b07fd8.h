// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdAttachmentPresenterLogger
// Superclass: NSObject
// Address: 0x112b07fd8

@interface SCAdAttachmentPresenterLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdAttachmentPresenterLogger initWithGrapheneRegistry:userBlizzard:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10697cfd4

// -[SCAdAttachmentPresenterLogger logAttachmentPresentRequestWithOriginIdentifier:attachmentType:commonAdConfig:deepLinkFallbackType:]
// Type encoding: v48@0:8@16Q24@32Q40
// Implementation: 0x10697d078

// -[SCAdAttachmentPresenterLogger logAttachmentDidPresentWithOriginIdentifier:attachmentType:commonAdConfig:deepLinkFallbackType:]
// Type encoding: v48@0:8@16Q24@32Q40
// Implementation: 0x10697d178

// -[SCAdAttachmentPresenterLogger logAttachmentPresentFailedWithOriginIdentifier:attachmentType:error:commonAdConfig:deepLinkFallbackType:]
// Type encoding: v56@0:8@16Q24@32@40Q48
// Implementation: 0x10697d278

// -[SCAdAttachmentPresenterLogger logAttachmentPreloadRequestWithOriginIdentifier:attachmentType:commonAdConfig:deepLinkFallbackType:]
// Type encoding: v48@0:8@16Q24@32Q40
// Implementation: 0x10697d3dc

// -[SCAdAttachmentPresenterLogger logAttachmentDidPreloadWithOriginIdentifier:attachmentType:commonAdConfig:deepLinkFallbackType:]
// Type encoding: v48@0:8@16Q24@32Q40
// Implementation: 0x10697d4dc

// -[SCAdAttachmentPresenterLogger logAttachmentPreloadFailedWithOriginIdentifier:attachmentType:error:commonAdConfig:deepLinkFallbackType:]
// Type encoding: v56@0:8@16Q24@32@40Q48
// Implementation: 0x10697d5dc

// -[SCAdAttachmentPresenterLogger logAttachmentDismissRequestWithOriginIdentifier:attachmentType:commonAdConfig:deepLinkFallbackType:]
// Type encoding: v48@0:8@16Q24@32Q40
// Implementation: 0x10697d740

// -[SCAdAttachmentPresenterLogger logAttachmentDidDismissWithOriginIdentifier:attachmentType:commonAdConfig:deepLinkFallbackType:]
// Type encoding: v48@0:8@16Q24@32Q40
// Implementation: 0x10697d840

// -[SCAdAttachmentPresenterLogger logAttachmentDismissFailedWithOriginIdentifier:attachmentType:error:commonAdConfig:deepLinkFallbackType:]
// Type encoding: v56@0:8@16Q24@32@40Q48
// Implementation: 0x10697d940

// -[SCAdAttachmentPresenterLogger _logAttachmentMetricWithMetric:originIdentifier:attachmentType:errorCode:]
// Type encoding: v48@0:8@16@24Q32@40
// Implementation: 0x10697daa4

// -[SCAdAttachmentPresenterLogger _graphene]
// Type encoding: @16@0:8
// Implementation: 0x10697dbf8

// -[SCAdAttachmentPresenterLogger _logBlizzardEventWithLifecycle:adId:serveItemId:originIdentifier:attachmentType:fallbackAttachmentType:error:]
// Type encoding: v72@0:8Q16@24@32@40Q48Q56@64
// Implementation: 0x10697dc40

// -[SCAdAttachmentPresenterLogger _attachmentType:]
// Type encoding: q24@0:8Q16
// Implementation: 0x10697ddbc

// -[SCAdAttachmentPresenterLogger _attachmentPresenterLifecycle:]
// Type encoding: q24@0:8Q16
// Implementation: 0x10697dde0

// -[SCAdAttachmentPresenterLogger _deepLinkFallbackType:]
// Type encoding: q24@0:8Q16
// Implementation: 0x10697ddf4

// -[SCAdAttachmentPresenterLogger _attachmentErrorCodeToString:]
// Type encoding: @24@0:8@16
// Implementation: 0x10697de18

// -[SCAdAttachmentPresenterLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10697df34

@end
