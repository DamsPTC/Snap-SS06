// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBlizzardEventLoggerProviderV2
// Superclass: NSObject
// Address: 0x112b11d58

@interface SCBlizzardEventLoggerProviderV2

// Property: qosToLoggersDict; attributes: T@"NSDictionary",&,N,V_qosToLoggersDict
// Property: blizzardLoggers; attributes: T@"NSArray",&,N,V_blizzardLoggers
// Property: spectrumLoggers; attributes: T@"NSArray",&,N,V_spectrumLoggers
// Property: spectrumPriorityToLoggerMap; attributes: T@"NSDictionary",&,N,V_spectrumPriorityToLoggerMap

// -[SCBlizzardEventLoggerProviderV2 init:]
// Type encoding: @24@0:8@16
// Implementation: 0x100344058

// -[SCBlizzardEventLoggerProviderV2 _getLoggersForQoS:region:]
// Type encoding: @32@0:8q16Q24
// Implementation: 0x1003ea3f8

// -[SCBlizzardEventLoggerProviderV2 getLoggersForSCBlizzardEvent:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ad8db4

// -[SCBlizzardEventLoggerProviderV2 getLoggersForEvent:]
// Type encoding: @24@0:8@16
// Implementation: 0x1003ea3c8

// -[SCBlizzardEventLoggerProviderV2 getBlizzardLoggers]
// Type encoding: @16@0:8
// Implementation: 0x106ad8de4

// -[SCBlizzardEventLoggerProviderV2 getSpectrumLoggers]
// Type encoding: @16@0:8
// Implementation: 0x106ad8de8

// -[SCBlizzardEventLoggerProviderV2 getSpectrumLoggerForPriority:region:]
// Type encoding: @32@0:8Q16Q24
// Implementation: 0x10055439c

// -[SCBlizzardEventLoggerProviderV2 qosToLoggersDict]
// Type encoding: @16@0:8
// Implementation: 0x1003ea46c

// -[SCBlizzardEventLoggerProviderV2 setQosToLoggersDict:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad8dec

// -[SCBlizzardEventLoggerProviderV2 blizzardLoggers]
// Type encoding: @16@0:8
// Implementation: 0x106ad8e1c

// -[SCBlizzardEventLoggerProviderV2 setBlizzardLoggers:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad8e24

// -[SCBlizzardEventLoggerProviderV2 spectrumLoggers]
// Type encoding: @16@0:8
// Implementation: 0x106ad8e54

// -[SCBlizzardEventLoggerProviderV2 setSpectrumLoggers:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad8e5c

// -[SCBlizzardEventLoggerProviderV2 spectrumPriorityToLoggerMap]
// Type encoding: @16@0:8
// Implementation: 0x1005544d4

// -[SCBlizzardEventLoggerProviderV2 setSpectrumPriorityToLoggerMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad8e8c

// -[SCBlizzardEventLoggerProviderV2 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ad8ebc

@end
