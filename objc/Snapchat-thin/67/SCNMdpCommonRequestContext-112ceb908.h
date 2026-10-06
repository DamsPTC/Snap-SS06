// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNMdpCommonRequestContext
// Superclass: NSObject
// Address: 0x112ceb908

@interface SCNMdpCommonRequestContext

// Property: rankingSignals; attributes: T@"SCNMdpCommonRankingSignals",R,N,V_rankingSignals
// Property: uiPageInfo; attributes: T@"SCNMdpCommonUIPageInfo",R,N,V_uiPageInfo
// Property: trackingId; attributes: T@"NSString",R,N,V_trackingId
// Property: switchBoardKey; attributes: T@"NSString",R,N,V_switchBoardKey

// -[SCNMdpCommonRequestContext withTrigger:]
// Type encoding: @24@0:8q16
// Implementation: 0x10b5de374

// -[SCNMdpCommonRequestContext withTrigger:pageId:]
// Type encoding: @28@0:8q16i24
// Implementation: 0x10b5de598

// -[SCNMdpCommonRequestContext initWithRankingSignals:uiPageInfo:trackingId:switchBoardKey:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10b88d0a8

// -[SCNMdpCommonRequestContext copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b88d1ec

// -[SCNMdpCommonRequestContext rankingSignals]
// Type encoding: @16@0:8
// Implementation: 0x10b88d210

// -[SCNMdpCommonRequestContext uiPageInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b88d218

// -[SCNMdpCommonRequestContext trackingId]
// Type encoding: @16@0:8
// Implementation: 0x10b88d220

// -[SCNMdpCommonRequestContext switchBoardKey]
// Type encoding: @16@0:8
// Implementation: 0x10b88d228

// -[SCNMdpCommonRequestContext .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b88d230

// +[SCNMdpCommonRequestContext withFetchPriority:mediaContextType:pageInfo:pageId:wifiOnly:importance:trigger:trackingId:]
// Type encoding: @72@0:8q16q24@32i40B44q48q56@64
// Implementation: 0x10b5dde58

// +[SCNMdpCommonRequestContext withFetchPriority:mediaContextType:pageInfo:wifiOnly:importance:trigger:trackingId:]
// Type encoding: @68@0:8q16q24@32B40q44q52@60
// Implementation: 0x10b5ddf64

// +[SCNMdpCommonRequestContext withFetchPriority:mediaContextType:pageId:wifiOnly:importance:trigger:]
// Type encoding: @56@0:8q16q24i32B36q40q48
// Implementation: 0x10b5ddfa0

// +[SCNMdpCommonRequestContext prefetchWithMediaContextType:pageInfo:wifiOnly:importance:trigger:]
// Type encoding: @52@0:8q16@24B32q36q44
// Implementation: 0x10b5de050

// +[SCNMdpCommonRequestContext prefetchWithMediaContextType:pageInfo:pageId:wifiOnly:importance:trigger:]
// Type encoding: @56@0:8q16@24i32B36q40q48
// Implementation: 0x10b5de090

// +[SCNMdpCommonRequestContext prefetchWithMediaContextType:pageId:wifiOnly:importance:trigger:]
// Type encoding: @48@0:8q16i24B28q32q40
// Implementation: 0x10b5de0d4

// +[SCNMdpCommonRequestContext prefetchWithMediaContextType:pageInfo:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x10b5de0f8

// +[SCNMdpCommonRequestContext prefetchWithMediaContextType:pageInfo:trackingId:]
// Type encoding: @40@0:8q16@24@32
// Implementation: 0x10b5de108

// +[SCNMdpCommonRequestContext prefetchWithMediaContextType:pageInfo:trigger:]
// Type encoding: @40@0:8q16@24q32
// Implementation: 0x10b5de14c

// +[SCNMdpCommonRequestContext prefetchWithMediaContextType:pageInfo:pageId:trigger:]
// Type encoding: @44@0:8q16@24i32q36
// Implementation: 0x10b5de164

// +[SCNMdpCommonRequestContext prefetchWithMediaContextType:pageInfo:importance:]
// Type encoding: @40@0:8q16@24q32
// Implementation: 0x10b5de17c

// +[SCNMdpCommonRequestContext prefetchWithMediaContextType:pageInfo:importance:trigger:]
// Type encoding: @48@0:8q16@24q32q40
// Implementation: 0x10b5de194

// +[SCNMdpCommonRequestContext prefetchWithMediaContextType:pageId:importance:trigger:]
// Type encoding: @44@0:8q16i24q28q36
// Implementation: 0x10b5de1ac

// +[SCNMdpCommonRequestContext prefetchWifiOnlyWithMediaContextType:pageInfo:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x10b5de1c4

// +[SCNMdpCommonRequestContext userVisibleWithMediaContextType:pageInfo:trigger:]
// Type encoding: @40@0:8q16@24q32
// Implementation: 0x10b5de1dc

// +[SCNMdpCommonRequestContext userBlockingWithMediaContextType:pageInfo:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x10b5de21c

// +[SCNMdpCommonRequestContext userBlockingWithMediaContextType:pageInfo:trigger:]
// Type encoding: @40@0:8q16@24q32
// Implementation: 0x10b5de25c

// +[SCNMdpCommonRequestContext defaultUserBlockingWithMediaContextType:pageInfo:trigger:switchBoardKey:]
// Type encoding: @48@0:8q16@24q32@40
// Implementation: 0x10b5de29c

@end
