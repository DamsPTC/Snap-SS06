// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesTaskExecutor
// Superclass: NSObject
// Address: 0x112b43948

@interface SCSpectaclesTaskExecutor

// Property: transferChannel; attributes: Tq,R,N,V_transferChannel
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesTaskExecutor initWithClient:taskQueue:transferChannel:delegate:]
// Type encoding: @48@0:8@16@24q32@40
// Implementation: 0x106eba6b0

// -[SCSpectaclesTaskExecutor cancel]
// Type encoding: v16@0:8
// Implementation: 0x106eba804

// -[SCSpectaclesTaskExecutor cancelTaskIfRunning:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eba8dc

// -[SCSpectaclesTaskExecutor _transitionToState:]
// Type encoding: v24@0:8q16
// Implementation: 0x106ebaa1c

// -[SCSpectaclesTaskExecutor communicationClient:didReceiveNetworkResponse:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106ebaa24

// -[SCSpectaclesTaskExecutor communicationClientDidTimeOut:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ebacc8

// -[SCSpectaclesTaskExecutor _checkForTasksIfIdle]
// Type encoding: v16@0:8
// Implementation: 0x106ebae2c

// -[SCSpectaclesTaskExecutor _processNextTask]
// Type encoding: v16@0:8
// Implementation: 0x106ebaf1c

// -[SCSpectaclesTaskExecutor _processNextRequestForCurrentTask]
// Type encoding: v16@0:8
// Implementation: 0x106ebafcc

// -[SCSpectaclesTaskExecutor _markCurrentTaskComplete]
// Type encoding: v16@0:8
// Implementation: 0x106ebb100

// -[SCSpectaclesTaskExecutor _markCurrentTaskFailedWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ebb150

// -[SCSpectaclesTaskExecutor taskQueue:didAddNewTaskToQueue:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106ebb1c8

// -[SCSpectaclesTaskExecutor transferChannel]
// Type encoding: q16@0:8
// Implementation: 0x106ebb1cc

// -[SCSpectaclesTaskExecutor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ebb1d4

@end
