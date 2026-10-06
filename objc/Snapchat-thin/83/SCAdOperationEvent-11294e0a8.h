// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdOperationEvent
// Superclass: NSObject
// Address: 0x11294e0a8

@interface SCAdOperationEvent

// Property: adIdentifier; attributes: T@"NSString",N,R
// Property: eventType; attributes: Tq,N,R,VeventType
// Property: mediaLoadedOnEntry; attributes: TB,N,R,VmediaLoadedOnEntry
// Property: mediaLoadedOnExit; attributes: TB,N,R,VmediaLoadedOnExit
// Property: mediaWaitTimeInSec; attributes: Td,N,R,VmediaWaitTimeInSec
// Property: mediaTotalStallCount; attributes: Tq,N,R,VmediaTotalStallCount
// Property: mediaStallOnStartDurationMillis; attributes: Tq,N,R,VmediaStallOnStartDurationMillis
// Property: mediaFirstStallMediaTimeMillis; attributes: Tq,N,R,VmediaFirstStallMediaTimeMillis
// Property: mediaTotalStallDurationMillis; attributes: Tq,N,R,VmediaTotalStallDurationMillis
// Property: mediaFirstStallDurationMillis; attributes: Tq,N,R,VmediaFirstStallDurationMillis
// Property: adResponseStartDeserializeTimestamp; attributes: Td,N,R,VadResponseStartDeserializeTimestamp
// Property: requestURL; attributes: T@"NSString",N,R
// Property: requestType; attributes: TQ,N,R,VrequestType
// Property: requestSubmittedTimeStampInSec; attributes: Td,N,R,VrequestSubmittedTimeStampInSec
// Property: requestResolvedTimeStampInSec; attributes: Td,N,R,VrequestResolvedTimeStampInSec
// Property: requestLatencyInSec; attributes: Td,N,R,VrequestLatencyInSec
// Property: requestStatusCode; attributes: Tq,N,R,VrequestStatusCode
// Property: requestTargetingParams; attributes: T@"SCAdTargetingParameters",N,R,VrequestTargetingParams
// Property: description; attributes: T@"NSString",N,R

// -[SCAdOperationEvent withAdIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x103df077c

// -[SCAdOperationEvent withEventType:]
// Type encoding: @24@0:8q16
// Implementation: 0x103df086c

// -[SCAdOperationEvent withMediaLoadedOnEntry:]
// Type encoding: @20@0:8B16
// Implementation: 0x103df0910

// -[SCAdOperationEvent withMediaLoadedOnExit:]
// Type encoding: @20@0:8B16
// Implementation: 0x103df09b4

// -[SCAdOperationEvent withMediaWaitTimeInSec:]
// Type encoding: @24@0:8d16
// Implementation: 0x103df0a58

// -[SCAdOperationEvent withMediaTotalStallCount:]
// Type encoding: @24@0:8q16
// Implementation: 0x103df0afc

// -[SCAdOperationEvent withMediaStallOnStartDurationMillis:]
// Type encoding: @24@0:8q16
// Implementation: 0x103df0ba0

// -[SCAdOperationEvent withMediaFirstStallMediaTimeMillis:]
// Type encoding: @24@0:8q16
// Implementation: 0x103df0c44

// -[SCAdOperationEvent withMediaTotalStallDurationMillis:]
// Type encoding: @24@0:8q16
// Implementation: 0x103df0ce8

// -[SCAdOperationEvent withMediaFirstStallDurationMillis:]
// Type encoding: @24@0:8q16
// Implementation: 0x103df0d8c

// -[SCAdOperationEvent withAdResponseStartDeserializeTimestamp:]
// Type encoding: @24@0:8d16
// Implementation: 0x103df0e30

// -[SCAdOperationEvent withRequestURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x103df0ed4

// -[SCAdOperationEvent withRequestType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x103df0fcc

// -[SCAdOperationEvent withRequestSubmittedTimeStampInSec:]
// Type encoding: @24@0:8d16
// Implementation: 0x103df1070

// -[SCAdOperationEvent withRequestResolvedTimeStampInSec:]
// Type encoding: @24@0:8d16
// Implementation: 0x103df1114

// -[SCAdOperationEvent withRequestLatencyInSec:]
// Type encoding: @24@0:8d16
// Implementation: 0x103df11b8

// -[SCAdOperationEvent withRequestStatusCode:]
// Type encoding: @24@0:8q16
// Implementation: 0x103df125c

// -[SCAdOperationEvent withRequestTargetingParams:]
// Type encoding: @24@0:8@16
// Implementation: 0x103df13ec

// -[SCAdOperationEvent adIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x103e006a8

// -[SCAdOperationEvent eventType]
// Type encoding: q16@0:8
// Implementation: 0x103e006b4

// -[SCAdOperationEvent mediaLoadedOnEntry]
// Type encoding: B16@0:8
// Implementation: 0x103e006c4

// -[SCAdOperationEvent mediaLoadedOnExit]
// Type encoding: B16@0:8
// Implementation: 0x103e006d4

// -[SCAdOperationEvent mediaWaitTimeInSec]
// Type encoding: d16@0:8
// Implementation: 0x103e006e4

// -[SCAdOperationEvent mediaTotalStallCount]
// Type encoding: q16@0:8
// Implementation: 0x103e006f4

// -[SCAdOperationEvent mediaStallOnStartDurationMillis]
// Type encoding: q16@0:8
// Implementation: 0x103e00704

// -[SCAdOperationEvent mediaFirstStallMediaTimeMillis]
// Type encoding: q16@0:8
// Implementation: 0x103e00714

// -[SCAdOperationEvent mediaTotalStallDurationMillis]
// Type encoding: q16@0:8
// Implementation: 0x103e00724

// -[SCAdOperationEvent mediaFirstStallDurationMillis]
// Type encoding: q16@0:8
// Implementation: 0x103e00734

// -[SCAdOperationEvent adResponseStartDeserializeTimestamp]
// Type encoding: d16@0:8
// Implementation: 0x103e00744

// -[SCAdOperationEvent requestURL]
// Type encoding: @16@0:8
// Implementation: 0x103e00754

// -[SCAdOperationEvent requestType]
// Type encoding: Q16@0:8
// Implementation: 0x103e007b8

// -[SCAdOperationEvent requestSubmittedTimeStampInSec]
// Type encoding: d16@0:8
// Implementation: 0x103e007c8

// -[SCAdOperationEvent requestResolvedTimeStampInSec]
// Type encoding: d16@0:8
// Implementation: 0x103e007d8

// -[SCAdOperationEvent requestLatencyInSec]
// Type encoding: d16@0:8
// Implementation: 0x103e007e8

// -[SCAdOperationEvent requestStatusCode]
// Type encoding: q16@0:8
// Implementation: 0x103e007f8

// -[SCAdOperationEvent requestTargetingParams]
// Type encoding: @16@0:8
// Implementation: 0x103e00808

// -[SCAdOperationEvent initWithAdIdentifier:eventType:mediaLoadedOnEntry:mediaLoadedOnExit:mediaWaitTimeInSec:mediaTotalStallCount:mediaStallOnStartDurationMillis:mediaFirstStallMediaTimeMillis:mediaTotalStallDurationMillis:mediaFirstStallDurationMillis:adResponseStartDeserializeTimestamp:requestURL:requestType:requestSubmittedTimeStampInSec:requestResolvedTimeStampInSec:requestLatencyInSec:requestStatusCode:requestTargetingParams:]
// Type encoding: @152@0:8@16q24B32B36d40q48q56q64q72q80d88@96Q104d112d120d128q136@144
// Implementation: 0x103e00ba4

// -[SCAdOperationEvent copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x103e00f2c

// -[SCAdOperationEvent description]
// Type encoding: @16@0:8
// Implementation: 0x103e00f30

// -[SCAdOperationEvent init]
// Type encoding: @16@0:8
// Implementation: 0x103e00f70

// -[SCAdOperationEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x103e00fec

// +[SCAdOperationEvent identity]
// Type encoding: @16@0:8
// Implementation: 0x103df073c

@end
