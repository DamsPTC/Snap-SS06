// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: CTPSearchEngineDefault
// Superclass: NSObject
// Address: 0x112a6e298

@interface CTPSearchEngineDefault

// Property: session; attributes: T@"<CTPSearchSession>",&,N,V_session
// Property: taskScheduler; attributes: T@"<CTPSearchTaskScheduler>",&,N,V_taskScheduler
// Property: inputProcessor; attributes: T@"<CTPSearchInputProcessor>",&,N,V_inputProcessor
// Property: strategy; attributes: T@"<CTPSearchStrategy>",&,N,V_strategy
// Property: outputProcessor; attributes: T@"<CTPSearchOutputProcessor>",&,N,V_outputProcessor
// Property: observingQueue; attributes: T@"NSOperationQueue",&,N,V_observingQueue
// Property: stateObservable; attributes: T@"SCBehaviorSubject",&,N,V_stateObservable
// Property: disposable; attributes: T@"SCDisposableObserver",&,N,V_disposable
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[CTPSearchEngineDefault initWithSession:inputProvider:taskScheduler:inputProcessor:strategy:outputProcessor:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10580776c

// -[CTPSearchEngineDefault _createSearchLogic:]
// Type encoding: @24@0:8@16
// Implementation: 0x105807a40

// -[CTPSearchEngineDefault _handleSearchLogicResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x105807b24

// -[CTPSearchEngineDefault stopSearch]
// Type encoding: v16@0:8
// Implementation: 0x105807cbc

// -[CTPSearchEngineDefault _isCancelled]
// Type encoding: B16@0:8
// Implementation: 0x105807d04

// -[CTPSearchEngineDefault _setIsCancelled:]
// Type encoding: v20@0:8B16
// Implementation: 0x105807d44

// -[CTPSearchEngineDefault _scheduleSearchTask:]
// Type encoding: @24@0:8@16
// Implementation: 0x105807d80

// -[CTPSearchEngineDefault _getTextFromProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x105808010

// -[CTPSearchEngineDefault _processInputString:]
// Type encoding: @24@0:8@16
// Implementation: 0x105808258

// -[CTPSearchEngineDefault _searchWithProcessedInput:]
// Type encoding: @24@0:8@16
// Implementation: 0x105808564

// -[CTPSearchEngineDefault _processSearchResult:]
// Type encoding: @24@0:8@16
// Implementation: 0x105808c64

// -[CTPSearchEngineDefault _changeStateTo:text:query:results:error:debugHTML:]
// Type encoding: v64@0:8Q16@24@32@40@48@56
// Implementation: 0x105809028

// -[CTPSearchEngineDefault session]
// Type encoding: @16@0:8
// Implementation: 0x105809104

// -[CTPSearchEngineDefault setSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x10580910c

// -[CTPSearchEngineDefault taskScheduler]
// Type encoding: @16@0:8
// Implementation: 0x10580913c

// -[CTPSearchEngineDefault setTaskScheduler:]
// Type encoding: v24@0:8@16
// Implementation: 0x105809144

// -[CTPSearchEngineDefault inputProcessor]
// Type encoding: @16@0:8
// Implementation: 0x105809174

// -[CTPSearchEngineDefault setInputProcessor:]
// Type encoding: v24@0:8@16
// Implementation: 0x10580917c

// -[CTPSearchEngineDefault strategy]
// Type encoding: @16@0:8
// Implementation: 0x1058091ac

// -[CTPSearchEngineDefault setStrategy:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058091b4

// -[CTPSearchEngineDefault outputProcessor]
// Type encoding: @16@0:8
// Implementation: 0x1058091e4

// -[CTPSearchEngineDefault setOutputProcessor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058091ec

// -[CTPSearchEngineDefault observingQueue]
// Type encoding: @16@0:8
// Implementation: 0x10580921c

// -[CTPSearchEngineDefault setObservingQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x105809224

// -[CTPSearchEngineDefault stateObservable]
// Type encoding: @16@0:8
// Implementation: 0x105809254

// -[CTPSearchEngineDefault setStateObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x10580925c

// -[CTPSearchEngineDefault disposable]
// Type encoding: @16@0:8
// Implementation: 0x10580928c

// -[CTPSearchEngineDefault setDisposable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105809294

// -[CTPSearchEngineDefault .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1058092c4

@end
