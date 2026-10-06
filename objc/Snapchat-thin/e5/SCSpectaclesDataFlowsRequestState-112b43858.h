// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesDataFlowsRequestState
// Superclass: NSObject
// Address: 0x112b43858

@interface SCSpectaclesDataFlowsRequestState

// Property: dataFlowsRequest; attributes: T@"<SCSpectaclesDataFlowsRequest>",R,N,V_dataFlowsRequest
// Property: executionState; attributes: TQ,R,N,V_executionState
// Property: startDate; attributes: T@"NSDate",R,N,V_startDate
// Property: lastExecutionStateUpdateDate; attributes: T@"NSDate",R,N,V_lastExecutionStateUpdateDate
// Property: currentTaskExecutionStartDate; attributes: T@"NSDate",&,N,V_currentTaskExecutionStartDate
// Property: currentTaskLastUpdateDate; attributes: T@"NSDate",&,N,V_currentTaskLastUpdateDate
// Property: lastTaskCompletionDate; attributes: T@"NSDate",&,N,V_lastTaskCompletionDate

// -[SCSpectaclesDataFlowsRequestState initWithDataFlowsRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x106eb83e4

// -[SCSpectaclesDataFlowsRequestState originatedTasks]
// Type encoding: @16@0:8
// Implementation: 0x106eb84c0

// -[SCSpectaclesDataFlowsRequestState addOriginatedTask:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb851c

// -[SCSpectaclesDataFlowsRequestState updateExecutionState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106eb8588

// -[SCSpectaclesDataFlowsRequestState dataFlowsRequest]
// Type encoding: @16@0:8
// Implementation: 0x106eb8608

// -[SCSpectaclesDataFlowsRequestState executionState]
// Type encoding: Q16@0:8
// Implementation: 0x106eb8610

// -[SCSpectaclesDataFlowsRequestState startDate]
// Type encoding: @16@0:8
// Implementation: 0x106eb8618

// -[SCSpectaclesDataFlowsRequestState lastExecutionStateUpdateDate]
// Type encoding: @16@0:8
// Implementation: 0x106eb8620

// -[SCSpectaclesDataFlowsRequestState currentTaskExecutionStartDate]
// Type encoding: @16@0:8
// Implementation: 0x106eb8628

// -[SCSpectaclesDataFlowsRequestState setCurrentTaskExecutionStartDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb8630

// -[SCSpectaclesDataFlowsRequestState currentTaskLastUpdateDate]
// Type encoding: @16@0:8
// Implementation: 0x106eb8660

// -[SCSpectaclesDataFlowsRequestState setCurrentTaskLastUpdateDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb8668

// -[SCSpectaclesDataFlowsRequestState lastTaskCompletionDate]
// Type encoding: @16@0:8
// Implementation: 0x106eb8698

// -[SCSpectaclesDataFlowsRequestState setLastTaskCompletionDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb86a0

// -[SCSpectaclesDataFlowsRequestState .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106eb86d0

@end
