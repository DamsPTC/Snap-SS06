// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlatformAnalyticsSnapSendInfo
// Superclass: NSObject
// Address: 0x112c65ee8

@interface SCPlatformAnalyticsSnapSendInfo

// Property: destinationInfo; attributes: T@"SCPlatformAnalyticsDestinationInfo",R,C,N,V_destinationInfo
// Property: snapCommonLoggingParams; attributes: T@"SCSnapCommonLoggingParams",R,C,N,V_snapCommonLoggingParams
// Property: uuid; attributes: T@"NSString",R,C,N,V_uuid
// Property: storyPostInfo; attributes: T@"SCPlatformAnalyticsStoryPostInfo",R,C,N,V_storyPostInfo
// Property: initialActionTimestamp; attributes: T@"NSDate",R,C,N,V_initialActionTimestamp
// Property: snapSendSource; attributes: Tq,R,N,V_snapSendSource
// Property: memoriesSnapSendInfo; attributes: T@"SCPlatformAnalyticsMemoriesSnapSendInfo",R,C,N,V_memoriesSnapSendInfo
// Property: sendTappedUserActionId; attributes: T@"NSString",R,C,N,V_sendTappedUserActionId

// -[SCPlatformAnalyticsSnapSendInfo initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b069784

// -[SCPlatformAnalyticsSnapSendInfo initWithDestinationInfo:snapCommonLoggingParams:uuid:storyPostInfo:initialActionTimestamp:snapSendSource:memoriesSnapSendInfo:sendTappedUserActionId:]
// Type encoding: @80@0:8@16@24@32@40@48q56@64@72
// Implementation: 0x10b069910

// -[SCPlatformAnalyticsSnapSendInfo copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b069ab4

// -[SCPlatformAnalyticsSnapSendInfo encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b069ad8

// -[SCPlatformAnalyticsSnapSendInfo hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b069bb0

// -[SCPlatformAnalyticsSnapSendInfo isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b069c64

// -[SCPlatformAnalyticsSnapSendInfo destinationInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b069d94

// -[SCPlatformAnalyticsSnapSendInfo snapCommonLoggingParams]
// Type encoding: @16@0:8
// Implementation: 0x10b069d9c

// -[SCPlatformAnalyticsSnapSendInfo uuid]
// Type encoding: @16@0:8
// Implementation: 0x10b069da4

// -[SCPlatformAnalyticsSnapSendInfo storyPostInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b069dac

// -[SCPlatformAnalyticsSnapSendInfo initialActionTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x10b069db4

// -[SCPlatformAnalyticsSnapSendInfo snapSendSource]
// Type encoding: q16@0:8
// Implementation: 0x10b069dbc

// -[SCPlatformAnalyticsSnapSendInfo memoriesSnapSendInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b069dc4

// -[SCPlatformAnalyticsSnapSendInfo sendTappedUserActionId]
// Type encoding: @16@0:8
// Implementation: 0x10b069dcc

// -[SCPlatformAnalyticsSnapSendInfo .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b069dd4

@end
