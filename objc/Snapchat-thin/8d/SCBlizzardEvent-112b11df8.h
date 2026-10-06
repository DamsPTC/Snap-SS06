// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBlizzardEvent
// Superclass: NSObject
// Address: 0x112b11df8

@interface SCBlizzardEvent

// Property: isCritical; attributes: TB,N,V_isCritical
// Property: eventQoS; attributes: Tq,N,V_eventQoS
// Property: isUserTrackedEvent; attributes: T@"NSNumber",&,N,V_isUserTrackedEvent
// Property: blizzardEventSource; attributes: Ti,N,V_blizzardEventSource
// Property: mutableProperties; attributes: T@"NSMutableDictionary",&,N,V_mutableProperties
// Property: appInsightsMetadataStorage; attributes: T@"<SCAppInsightsMetadataStoring>",&,N,V_appInsightsMetadataStorage
// Property: logQueueSequenceId; attributes: Tq,N
// Property: logQueueName; attributes: T@"NSString",&,N
// Property: properties; attributes: T@"NSDictionary",R,N
// Property: name; attributes: T@"NSString",R,N
// Property: userId; attributes: T@"NSString",R,N
// Property: userGuid; attributes: T@"NSString",R,N
// Property: sessionId; attributes: T@"NSString",R,N
// Property: frameEvent; attributes: T@"SCAPbDataEvent",&,N,V_frameEvent
// Property: rawEvent; attributes: T@"SCAEventBase",&,N,V_rawEvent

// -[SCBlizzardEvent initWithProperties:isCritical:eventQoS:isUserTrackedEvent:blizzardEventSource:rawEvent:appInsightsMetadataStorage:]
// Type encoding: @64@0:8@16B24q28@36i44@48@56
// Implementation: 0x10036805c

// -[SCBlizzardEvent dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1004c3f28

// -[SCBlizzardEvent logQueueSequenceId]
// Type encoding: q16@0:8
// Implementation: 0x106ad9ba8

// -[SCBlizzardEvent setLogQueueSequenceId:]
// Type encoding: v24@0:8q16
// Implementation: 0x106ad9c10

// -[SCBlizzardEvent logQueueName]
// Type encoding: @16@0:8
// Implementation: 0x106ad9c78

// -[SCBlizzardEvent setLogQueueName:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad9cc8

// -[SCBlizzardEvent properties]
// Type encoding: @16@0:8
// Implementation: 0x1003ea5d0

// -[SCBlizzardEvent name]
// Type encoding: @16@0:8
// Implementation: 0x1003e9e48

// -[SCBlizzardEvent userId]
// Type encoding: @16@0:8
// Implementation: 0x106ad9d24

// -[SCBlizzardEvent userGuid]
// Type encoding: @16@0:8
// Implementation: 0x106ad9d74

// -[SCBlizzardEvent sessionId]
// Type encoding: @16@0:8
// Implementation: 0x106ad9dc4

// -[SCBlizzardEvent isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x106ad9e14

// -[SCBlizzardEvent isEqualToEvent:]
// Type encoding: B24@0:8@16
// Implementation: 0x106ad9ea0

// -[SCBlizzardEvent hash]
// Type encoding: Q16@0:8
// Implementation: 0x106ada0dc

// -[SCBlizzardEvent copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x1003ea4c4

// -[SCBlizzardEvent _getDateFromPropertiesMap:]
// Type encoding: @24@0:8@16
// Implementation: 0x1003e93fc

// -[SCBlizzardEvent _setDateInPropertiesMap:usingKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1007b25f4

// -[SCBlizzardEvent _setDateForBothJsonAndProtoMaps:usingKey:protoFieldNumber:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x106ada138

// -[SCBlizzardEvent appInsightsMetadataStorage]
// Type encoding: @16@0:8
// Implementation: 0x1003ea624

// -[SCBlizzardEvent setAppInsightsMetadataStorage:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ada20c

// -[SCBlizzardEvent isCritical]
// Type encoding: B16@0:8
// Implementation: 0x1003ea60c

// -[SCBlizzardEvent setIsCritical:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ada23c

// -[SCBlizzardEvent eventQoS]
// Type encoding: q16@0:8
// Implementation: 0x1003ea614

// -[SCBlizzardEvent setEventQoS:]
// Type encoding: v24@0:8q16
// Implementation: 0x106ada244

// -[SCBlizzardEvent isUserTrackedEvent]
// Type encoding: @16@0:8
// Implementation: 0x1003e9c10

// -[SCBlizzardEvent setIsUserTrackedEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ada24c

// -[SCBlizzardEvent blizzardEventSource]
// Type encoding: i16@0:8
// Implementation: 0x1003ea61c

// -[SCBlizzardEvent setBlizzardEventSource:]
// Type encoding: v20@0:8i16
// Implementation: 0x106ada27c

// -[SCBlizzardEvent frameEvent]
// Type encoding: @16@0:8
// Implementation: 0x10057ef1c

// -[SCBlizzardEvent setFrameEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003f65ac

// -[SCBlizzardEvent rawEvent]
// Type encoding: @16@0:8
// Implementation: 0x1003ea0c8

// -[SCBlizzardEvent setRawEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ada284

// -[SCBlizzardEvent mutableProperties]
// Type encoding: @16@0:8
// Implementation: 0x100368cfc

// -[SCBlizzardEvent setMutableProperties:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ada2b4

// -[SCBlizzardEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1004c3fc8

// +[SCBlizzardEvent eventFromSCAEvent:isCritical:appInsightsMetadataStorage:]
// Type encoding: @36@0:8@16B24@28
// Implementation: 0x10036792c

// +[SCBlizzardEvent eventFromSCAEvent:isCritical:blizzardEventSource:appInsightsMetadataStorage:]
// Type encoding: @40@0:8@16B24i28@32
// Implementation: 0x100367e20

// +[SCBlizzardEvent eventFromSCAEventWithProperties:properties:isCritical:appInsightsMetadataStorage:]
// Type encoding: @44@0:8@16@24B32@36
// Implementation: 0x106ad9894

// +[SCBlizzardEvent eventFromProperties:isCritical:appInsightsMetadataStorage:]
// Type encoding: @36@0:8@16B24@28
// Implementation: 0x106ad99d8

// +[SCBlizzardEvent eventFromProperties:isCritical:eventQoS:appInsightsMetadataStorage:]
// Type encoding: @44@0:8@16B24q28@36
// Implementation: 0x106ad99ec

// +[SCBlizzardEvent eventFromProperties:isCritical:eventQoS:isUserTrackedEvent:rawEvent:appInsightsMetadataStorage:]
// Type encoding: @60@0:8@16B24q28@36@44@52
// Implementation: 0x106ad9a04

// +[SCBlizzardEvent eventFromProperties:isCritical:eventQoS:isUserTrackedEvent:rawEvent:blizzardEventSource:appInsightsMetadataStorage:]
// Type encoding: @64@0:8@16B24q28@36@44i52@56
// Implementation: 0x106ad9adc

// +[SCBlizzardEvent _getEventSourceFromRawEvent:]
// Type encoding: i24@0:8@16
// Implementation: 0x1003679d4

@end
