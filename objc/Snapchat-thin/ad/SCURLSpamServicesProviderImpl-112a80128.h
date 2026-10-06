// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCURLSpamServicesProviderImpl
// Superclass: NSObject
// Address: 0x112a80128

@interface SCURLSpamServicesProviderImpl


// -[SCURLSpamServicesProviderImpl initWithCircumstanceEngine:lazyBlizzardUserLogger:lazyGrapheneRegistry:unifiedGRPCClientFactory:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1059b7164

// -[SCURLSpamServicesProviderImpl isURLSpamRisk:senderId:current:recipient:analyticsId:]
// Type encoding: B56@0:8@16@24@32@40@48
// Implementation: 0x1059b7390

// -[SCURLSpamServicesProviderImpl reportSender:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059b74f4

// -[SCURLSpamServicesProviderImpl _handleReportResponse:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1059b7648

// -[SCURLSpamServicesProviderImpl isURLInSpamList:]
// Type encoding: B24@0:8@16
// Implementation: 0x1059b7700

// -[SCURLSpamServicesProviderImpl _getSpamDomains]
// Type encoding: @16@0:8
// Implementation: 0x1059b791c

// -[SCURLSpamServicesProviderImpl _getFriendshipAgeThreshold]
// Type encoding: d16@0:8
// Implementation: 0x1059b7afc

// -[SCURLSpamServicesProviderImpl _isExperimentEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1059b7b54

// -[SCURLSpamServicesProviderImpl _cofConfigModelWithLogExposure:]
// Type encoding: @20@0:8B16
// Implementation: 0x1059b7ba4

// -[SCURLSpamServicesProviderImpl _logBlockURLEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059b7c9c

// -[SCURLSpamServicesProviderImpl _generateSalt]
// Type encoding: @16@0:8
// Implementation: 0x1059b7e6c

// -[SCURLSpamServicesProviderImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1059b7fac

@end
