// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesTaskDownloadLogs
// Superclass: SCSpectaclesTask
// Address: 0x112b43d58

@interface SCSpectaclesTaskDownloadLogs

// Property: logFileList; attributes: T@"NSArray",&,N,V_logFileList
// Property: currentLogIndex; attributes: Tq,N,V_currentLogIndex
// Property: partialLog; attributes: T@"NSMutableData",&,N,V_partialLog
// Property: callback; attributes: T@?,C,N,V_callback
// Property: finished; attributes: TB,N,GisFinished,V_finished
// Property: didTimeOut; attributes: TB,N,V_didTimeOut
// Property: weakTimer; attributes: T@"SCWeakTimer",&,N,V_weakTimer

// -[SCSpectaclesTaskDownloadLogs initWithCallback:]
// Type encoding: @24@0:8@?16
// Implementation: 0x106ebee9c

// -[SCSpectaclesTaskDownloadLogs _resetWeakTimer]
// Type encoding: v16@0:8
// Implementation: 0x106ebef60

// -[SCSpectaclesTaskDownloadLogs _timedOut]
// Type encoding: v16@0:8
// Implementation: 0x106ebefc4

// -[SCSpectaclesTaskDownloadLogs _markFinished]
// Type encoding: v16@0:8
// Implementation: 0x106ebefd8

// -[SCSpectaclesTaskDownloadLogs _clearDirectory]
// Type encoding: v16@0:8
// Implementation: 0x106ebeffc

// -[SCSpectaclesTaskDownloadLogs _appendLogData:forLog:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106ebf150

// -[SCSpectaclesTaskDownloadLogs _filepathsInLogDirectory]
// Type encoding: @16@0:8
// Implementation: 0x106ebf240

// -[SCSpectaclesTaskDownloadLogs _handleCallbackWithLogs:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ebf42c

// -[SCSpectaclesTaskDownloadLogs _requestLength:]
// Type encoding: Q24@0:8q16
// Implementation: 0x106ebf4bc

// -[SCSpectaclesTaskDownloadLogs nextRequest:]
// Type encoding: @24@0:8q16
// Implementation: 0x106ebf4dc

// -[SCSpectaclesTaskDownloadLogs handleResponse:]
// Type encoding: B24@0:8@16
// Implementation: 0x106ebf61c

// -[SCSpectaclesTaskDownloadLogs handleCallbackAfterDownloadingLogs]
// Type encoding: v16@0:8
// Implementation: 0x106ebf848

// -[SCSpectaclesTaskDownloadLogs handleCallbackWithoutLogs]
// Type encoding: v16@0:8
// Implementation: 0x106ebf884

// -[SCSpectaclesTaskDownloadLogs logListRequest]
// Type encoding: @16@0:8
// Implementation: 0x106ebf8fc

// -[SCSpectaclesTaskDownloadLogs getLogRequestFilename:range:]
// Type encoding: @40@0:8@16{_NSRange=QQ}24
// Implementation: 0x106ebf950

// -[SCSpectaclesTaskDownloadLogs cacheDirectory]
// Type encoding: @16@0:8
// Implementation: 0x106ebf9b0

// -[SCSpectaclesTaskDownloadLogs logFileList]
// Type encoding: @16@0:8
// Implementation: 0x106ebfa04

// -[SCSpectaclesTaskDownloadLogs setLogFileList:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ebfa14

// -[SCSpectaclesTaskDownloadLogs currentLogIndex]
// Type encoding: q16@0:8
// Implementation: 0x106ebfa54

// -[SCSpectaclesTaskDownloadLogs setCurrentLogIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x106ebfa64

// -[SCSpectaclesTaskDownloadLogs partialLog]
// Type encoding: @16@0:8
// Implementation: 0x106ebfa74

// -[SCSpectaclesTaskDownloadLogs setPartialLog:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ebfa84

// -[SCSpectaclesTaskDownloadLogs callback]
// Type encoding: @?16@0:8
// Implementation: 0x106ebfac4

// -[SCSpectaclesTaskDownloadLogs setCallback:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106ebfad4

// -[SCSpectaclesTaskDownloadLogs isFinished]
// Type encoding: B16@0:8
// Implementation: 0x106ebfae0

// -[SCSpectaclesTaskDownloadLogs setFinished:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ebfaf0

// -[SCSpectaclesTaskDownloadLogs didTimeOut]
// Type encoding: B16@0:8
// Implementation: 0x106ebfb00

// -[SCSpectaclesTaskDownloadLogs setDidTimeOut:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ebfb10

// -[SCSpectaclesTaskDownloadLogs weakTimer]
// Type encoding: @16@0:8
// Implementation: 0x106ebfb20

// -[SCSpectaclesTaskDownloadLogs setWeakTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ebfb30

// -[SCSpectaclesTaskDownloadLogs .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ebfb70

@end
