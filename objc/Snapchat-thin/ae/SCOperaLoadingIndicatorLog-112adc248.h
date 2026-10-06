// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaLoadingIndicatorLog
// Superclass: NSObject
// Address: 0x112adc248

@interface SCOperaLoadingIndicatorLog


// -[SCOperaLoadingIndicatorLog initWithPageId:pageStartTimeStamp:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x1063712c0

// -[SCOperaLoadingIndicatorLog addLogEntryOnTimeStamp:type:fromLayer:reason:]
// Type encoding: v48@0:8d16Q24Q32q40
// Implementation: 0x106371364

// -[SCOperaLoadingIndicatorLog pageDidResumeOnTimeStamp:]
// Type encoding: v24@0:8d16
// Implementation: 0x1063714c8

// -[SCOperaLoadingIndicatorLog pageDidPauseOnTimeStamp:]
// Type encoding: v24@0:8d16
// Implementation: 0x1063714cc

// -[SCOperaLoadingIndicatorLog pageDidCloseOnTimeStamp:]
// Type encoding: v24@0:8d16
// Implementation: 0x1063715e8

// -[SCOperaLoadingIndicatorLog aggregatedLogDataForClosedSession]
// Type encoding: @16@0:8
// Implementation: 0x1063715f0

// -[SCOperaLoadingIndicatorLog aggregatedLogDataForActiveSessionForTimeStamp:]
// Type encoding: @24@0:8d16
// Implementation: 0x106371684

// -[SCOperaLoadingIndicatorLog _aggregatedDisplayHistoryFromEntries:layerType:requestedTimeStamp:]
// Type encoding: @40@0:8@16Q24d32
// Implementation: 0x1063717d0

// -[SCOperaLoadingIndicatorLog _checkInsertionEligibilityForEntry:]
// Type encoding: B24@0:8@16
// Implementation: 0x106371a24

// -[SCOperaLoadingIndicatorLog .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106371b40

@end
