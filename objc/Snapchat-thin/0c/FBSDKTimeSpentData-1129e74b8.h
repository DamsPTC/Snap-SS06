// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKTimeSpentData
// Superclass: NSObject
// Address: 0x1129e74b8

@interface FBSDKTimeSpentData

// Property: eventLogger; attributes: T@"<FBSDKEventLogging>",W,N,V_eventLogger
// Property: serverConfigurationProvider; attributes: T@"<FBSDKServerConfigurationProviding>",&,N,V_serverConfigurationProvider
// Property: sourceApplication; attributes: T@"NSString",&,N,V_sourceApplication
// Property: isOpenedFromAppLink; attributes: TB,N,V_isOpenedFromAppLink
// Property: isCurrentlyLoaded; attributes: TB,N,V_isCurrentlyLoaded
// Property: lastRestoreTime; attributes: Td,N,V_lastRestoreTime
// Property: secondsSpentInCurrentSession; attributes: Td,N,V_secondsSpentInCurrentSession
// Property: timeSinceLastSuspend; attributes: Td,N,V_timeSinceLastSuspend
// Property: numInterruptionsInCurrentSession; attributes: Ti,N,V_numInterruptionsInCurrentSession
// Property: sessionID; attributes: T@"NSString",&,N,V_sessionID
// Property: lastSuspendTime; attributes: Td,N,V_lastSuspendTime
// Property: shouldLogActivateEvent; attributes: TB,N,V_shouldLogActivateEvent
// Property: shouldLogDeactivateEvent; attributes: TB,N,V_shouldLogDeactivateEvent

// -[FBSDKTimeSpentData initWithEventLogger:serverConfigurationProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10498a1f0

// -[FBSDKTimeSpentData suspend]
// Type encoding: v16@0:8
// Implementation: 0x10498a288

// -[FBSDKTimeSpentData suspendTimeSpentData]
// Type encoding: v16@0:8
// Implementation: 0x10498a2e8

// -[FBSDKTimeSpentData restore:]
// Type encoding: v20@0:8B16
// Implementation: 0x10498a588

// -[FBSDKTimeSpentData restoreTimeSpendDataWithCalledFromActivateApp:]
// Type encoding: v20@0:8B16
// Implementation: 0x10498a5f4

// -[FBSDKTimeSpentData appEventsParametersForActivate]
// Type encoding: @16@0:8
// Implementation: 0x10498aad4

// -[FBSDKTimeSpentData appEventsParametersForDeactivate]
// Type encoding: @16@0:8
// Implementation: 0x10498abb0

// -[FBSDKTimeSpentData setSourceApplication:openURL:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10498adc4

// -[FBSDKTimeSpentData setSourceApplication:isFromAppLink:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10498ae90

// -[FBSDKTimeSpentData getSourceApplication]
// Type encoding: @16@0:8
// Implementation: 0x10498aee0

// -[FBSDKTimeSpentData resetSourceApplication]
// Type encoding: v16@0:8
// Implementation: 0x10498af90

// -[FBSDKTimeSpentData registerAutoResetSourceApplication]
// Type encoding: v16@0:8
// Implementation: 0x10498afbc

// -[FBSDKTimeSpentData eventLogger]
// Type encoding: @16@0:8
// Implementation: 0x10498b014

// -[FBSDKTimeSpentData setEventLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x10498b02c

// -[FBSDKTimeSpentData serverConfigurationProvider]
// Type encoding: @16@0:8
// Implementation: 0x10498b038

// -[FBSDKTimeSpentData setServerConfigurationProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x10498b040

// -[FBSDKTimeSpentData sourceApplication]
// Type encoding: @16@0:8
// Implementation: 0x10498b04c

// -[FBSDKTimeSpentData setSourceApplication:]
// Type encoding: v24@0:8@16
// Implementation: 0x10498b054

// -[FBSDKTimeSpentData isOpenedFromAppLink]
// Type encoding: B16@0:8
// Implementation: 0x10498b060

// -[FBSDKTimeSpentData setIsOpenedFromAppLink:]
// Type encoding: v20@0:8B16
// Implementation: 0x10498b068

// -[FBSDKTimeSpentData isCurrentlyLoaded]
// Type encoding: B16@0:8
// Implementation: 0x10498b070

// -[FBSDKTimeSpentData setIsCurrentlyLoaded:]
// Type encoding: v20@0:8B16
// Implementation: 0x10498b078

// -[FBSDKTimeSpentData lastRestoreTime]
// Type encoding: d16@0:8
// Implementation: 0x10498b080

// -[FBSDKTimeSpentData setLastRestoreTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x10498b088

// -[FBSDKTimeSpentData secondsSpentInCurrentSession]
// Type encoding: d16@0:8
// Implementation: 0x10498b090

// -[FBSDKTimeSpentData setSecondsSpentInCurrentSession:]
// Type encoding: v24@0:8d16
// Implementation: 0x10498b098

// -[FBSDKTimeSpentData timeSinceLastSuspend]
// Type encoding: d16@0:8
// Implementation: 0x10498b0a0

// -[FBSDKTimeSpentData setTimeSinceLastSuspend:]
// Type encoding: v24@0:8d16
// Implementation: 0x10498b0a8

// -[FBSDKTimeSpentData numInterruptionsInCurrentSession]
// Type encoding: i16@0:8
// Implementation: 0x10498b0b0

// -[FBSDKTimeSpentData setNumInterruptionsInCurrentSession:]
// Type encoding: v20@0:8i16
// Implementation: 0x10498b0b8

// -[FBSDKTimeSpentData sessionID]
// Type encoding: @16@0:8
// Implementation: 0x10498b0c0

// -[FBSDKTimeSpentData setSessionID:]
// Type encoding: v24@0:8@16
// Implementation: 0x10498b0c8

// -[FBSDKTimeSpentData lastSuspendTime]
// Type encoding: d16@0:8
// Implementation: 0x10498b0d4

// -[FBSDKTimeSpentData setLastSuspendTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x10498b0dc

// -[FBSDKTimeSpentData shouldLogActivateEvent]
// Type encoding: B16@0:8
// Implementation: 0x10498b0e4

// -[FBSDKTimeSpentData setShouldLogActivateEvent:]
// Type encoding: v20@0:8B16
// Implementation: 0x10498b0ec

// -[FBSDKTimeSpentData shouldLogDeactivateEvent]
// Type encoding: B16@0:8
// Implementation: 0x10498b0f4

// -[FBSDKTimeSpentData setShouldLogDeactivateEvent:]
// Type encoding: v20@0:8B16
// Implementation: 0x10498b0fc

// -[FBSDKTimeSpentData .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10498b104

@end
