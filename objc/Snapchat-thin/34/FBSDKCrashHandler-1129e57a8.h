// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKCrashHandler
// Superclass: NSObject
// Address: 0x1129e57a8

@interface FBSDKCrashHandler

// Property: isTurnedOn; attributes: TB,N,V_isTurnedOn
// Property: fileManager; attributes: T@"<FBSDKFileManaging>",&,N,V_fileManager
// Property: dataExtractor; attributes: T#,&,N,V_dataExtractor
// Property: bundle; attributes: T@"<FBSDKInfoDictionaryProviding>",&,N,V_bundle
// Property: observers; attributes: T@"NSHashTable",&,N,V_observers
// Property: processedCrashLogs; attributes: T@"NSArray",&,N,V_processedCrashLogs

// -[FBSDKCrashHandler initWithFileManager:bundle:fileDataExtractor:]
// Type encoding: @40@0:8@16@24#32
// Implementation: 0x104939d48

// -[FBSDKCrashHandler disable]
// Type encoding: v16@0:8
// Implementation: 0x10493a060

// -[FBSDKCrashHandler addObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x10493a104

// -[FBSDKCrashHandler removeObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x10493a36c

// -[FBSDKCrashHandler clearCrashReportFiles]
// Type encoding: v16@0:8
// Implementation: 0x10493a4b0

// -[FBSDKCrashHandler _installExceptionsHandler]
// Type encoding: v16@0:8
// Implementation: 0x10493a62c

// -[FBSDKCrashHandler _uninstallExceptionsHandler]
// Type encoding: v16@0:8
// Implementation: 0x10493a6c8

// -[FBSDKCrashHandler saveException:]
// Type encoding: v24@0:8@16
// Implementation: 0x10493a6f0

// -[FBSDKCrashHandler _getProcessedCrashLogs]
// Type encoding: @16@0:8
// Implementation: 0x10493a850

// -[FBSDKCrashHandler _loadCrashLogs]
// Type encoding: @16@0:8
// Implementation: 0x10493aa98

// -[FBSDKCrashHandler _loadCrashLog:]
// Type encoding: @24@0:8@16
// Implementation: 0x10493ac44

// -[FBSDKCrashHandler _getCrashLogFileNames:]
// Type encoding: @24@0:8@16
// Implementation: 0x10493acd0

// -[FBSDKCrashHandler _saveCrashLog:]
// Type encoding: v24@0:8@16
// Implementation: 0x10493ae3c

// -[FBSDKCrashHandler _sendCrashLogs]
// Type encoding: v16@0:8
// Implementation: 0x10493b108

// -[FBSDKCrashHandler _filterCrashLogs:processedCrashLogs:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10493b2e0

// -[FBSDKCrashHandler _callstack:containsPrefix:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10493b4f8

// -[FBSDKCrashHandler _generateMethodMapping:]
// Type encoding: v24@0:8@16
// Implementation: 0x10493b688

// -[FBSDKCrashHandler _loadLibData:]
// Type encoding: @24@0:8@16
// Implementation: 0x10493b858

// -[FBSDKCrashHandler _getPathToCrashFile:]
// Type encoding: @24@0:8@16
// Implementation: 0x10493b994

// -[FBSDKCrashHandler _getPathToLibDataFile:]
// Type encoding: @24@0:8@16
// Implementation: 0x10493ba74

// -[FBSDKCrashHandler _isSafeToGenerateMapping]
// Type encoding: B16@0:8
// Implementation: 0x10493bb28

// -[FBSDKCrashHandler isTurnedOn]
// Type encoding: B16@0:8
// Implementation: 0x10493bbe8

// -[FBSDKCrashHandler setIsTurnedOn:]
// Type encoding: v20@0:8B16
// Implementation: 0x10493bbf0

// -[FBSDKCrashHandler fileManager]
// Type encoding: @16@0:8
// Implementation: 0x10493bbf8

// -[FBSDKCrashHandler setFileManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x10493bc00

// -[FBSDKCrashHandler dataExtractor]
// Type encoding: #16@0:8
// Implementation: 0x10493bc0c

// -[FBSDKCrashHandler setDataExtractor:]
// Type encoding: v24@0:8#16
// Implementation: 0x10493bc14

// -[FBSDKCrashHandler bundle]
// Type encoding: @16@0:8
// Implementation: 0x10493bc20

// -[FBSDKCrashHandler setBundle:]
// Type encoding: v24@0:8@16
// Implementation: 0x10493bc28

// -[FBSDKCrashHandler observers]
// Type encoding: @16@0:8
// Implementation: 0x10493bc34

// -[FBSDKCrashHandler setObservers:]
// Type encoding: v24@0:8@16
// Implementation: 0x10493bc3c

// -[FBSDKCrashHandler processedCrashLogs]
// Type encoding: @16@0:8
// Implementation: 0x10493bc48

// -[FBSDKCrashHandler setProcessedCrashLogs:]
// Type encoding: v24@0:8@16
// Implementation: 0x10493bc50

// -[FBSDKCrashHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10493bc5c

// +[FBSDKCrashHandler shared]
// Type encoding: @16@0:8
// Implementation: 0x104939f0c

// +[FBSDKCrashHandler getFBSDKVersion]
// Type encoding: @16@0:8
// Implementation: 0x10493a01c

// +[FBSDKCrashHandler disable]
// Type encoding: v16@0:8
// Implementation: 0x10493a028

// +[FBSDKCrashHandler addObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x10493a0b0

// +[FBSDKCrashHandler removeObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x10493a318

// +[FBSDKCrashHandler clearCrashReportFiles]
// Type encoding: v16@0:8
// Implementation: 0x10493a478

// +[FBSDKCrashHandler _filterCrashLogs:processedCrashLogs:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10493b254

// +[FBSDKCrashHandler _callstack:containsPrefix:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10493b474

// +[FBSDKCrashHandler _generateMethodMapping:]
// Type encoding: v24@0:8@16
// Implementation: 0x10493b634

// +[FBSDKCrashHandler _loadLibData:]
// Type encoding: @24@0:8@16
// Implementation: 0x10493b7e8

// +[FBSDKCrashHandler _getPathToCrashFile:]
// Type encoding: @24@0:8@16
// Implementation: 0x10493b924

// +[FBSDKCrashHandler _getPathToLibDataFile:]
// Type encoding: @24@0:8@16
// Implementation: 0x10493ba04

// +[FBSDKCrashHandler _isSafeToGenerateMapping]
// Type encoding: B16@0:8
// Implementation: 0x10493bae4

@end
