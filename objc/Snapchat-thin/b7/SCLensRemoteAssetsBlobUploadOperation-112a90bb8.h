// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensRemoteAssetsBlobUploadOperation
// Superclass: NSObject
// Address: 0x112a90bb8

@interface SCLensRemoteAssetsBlobUploadOperation

// Property: uploadOperationEvent; attributes: T@"SCObservable",R,N
// Property: delegate; attributes: T@"<SCLensRemoteAssetsUploadOperationDelegate>",W,N,V_delegate
// Property: state; attributes: TQ,R,N,V_state
// Property: isValid; attributes: TB,R,N,V_isValid
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensRemoteAssetsBlobUploadOperation initWithBatchId:performer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105bf5904

// -[SCLensRemoteAssetsBlobUploadOperation initWithBatchId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105bf599c

// -[SCLensRemoteAssetsBlobUploadOperation initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x105bf5a4c

// -[SCLensRemoteAssetsBlobUploadOperation initWithBatchId:performer:isValid:tasks:state:isAwoken:]
// Type encoding: @56@0:8@16@24B32@36Q44B52
// Implementation: 0x105bf5b6c

// -[SCLensRemoteAssetsBlobUploadOperation encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bf5c7c

// -[SCLensRemoteAssetsBlobUploadOperation retrievableData]
// Type encoding: @16@0:8
// Implementation: 0x105bf5fa0

// -[SCLensRemoteAssetsBlobUploadOperation enqueueRequestAssetUploadWithId:effectId:startImmediately:uploadType:]
// Type encoding: v44@0:8@16@24B32Q36
// Implementation: 0x105bf61a8

// -[SCLensRemoteAssetsBlobUploadOperation state]
// Type encoding: Q16@0:8
// Implementation: 0x105bf6340

// -[SCLensRemoteAssetsBlobUploadOperation stateWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105bf6478

// -[SCLensRemoteAssetsBlobUploadOperation isValid]
// Type encoding: B16@0:8
// Implementation: 0x105bf6594

// -[SCLensRemoteAssetsBlobUploadOperation uploadOperationEvent]
// Type encoding: @16@0:8
// Implementation: 0x105bf66dc

// -[SCLensRemoteAssetsBlobUploadOperation _enqueueTask:startImmediately:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105bf6704

// -[SCLensRemoteAssetsBlobUploadOperation _startUploadForTask:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bf6770

// -[SCLensRemoteAssetsBlobUploadOperation _requestSucceededForTask:withAssetsStore:boltUrl:boltContentObject:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x105bf6bdc

// -[SCLensRemoteAssetsBlobUploadOperation _requestFailedForTask:withError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105bf6d54

// -[SCLensRemoteAssetsBlobUploadOperation _assetNotFoundForTask:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bf6e54

// -[SCLensRemoteAssetsBlobUploadOperation _sendAggregateStateNotificationIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105bf6fb4

// -[SCLensRemoteAssetsBlobUploadOperation _setState:forTask:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x105bf708c

// -[SCLensRemoteAssetsBlobUploadOperation _updateState]
// Type encoding: v16@0:8
// Implementation: 0x105bf70b4

// -[SCLensRemoteAssetsBlobUploadOperation _aggregateState]
// Type encoding: Q16@0:8
// Implementation: 0x105bf70d8

// -[SCLensRemoteAssetsBlobUploadOperation awakeFromCoder]
// Type encoding: v16@0:8
// Implementation: 0x105bf7210

// -[SCLensRemoteAssetsBlobUploadOperation start]
// Type encoding: v16@0:8
// Implementation: 0x105bf72e8

// -[SCLensRemoteAssetsBlobUploadOperation invalidate]
// Type encoding: v16@0:8
// Implementation: 0x105bf74a4

// -[SCLensRemoteAssetsBlobUploadOperation _awakeFromCoderIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105bf7740

// -[SCLensRemoteAssetsBlobUploadOperation _awakeFromCoder]
// Type encoding: v16@0:8
// Implementation: 0x105bf7750

// -[SCLensRemoteAssetsBlobUploadOperation _removeAssetWithAssetId:store:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105bf79c0

// -[SCLensRemoteAssetsBlobUploadOperation _assetExistsWithId:store:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105bf7ac4

// -[SCLensRemoteAssetsBlobUploadOperation _currentTasks]
// Type encoding: @16@0:8
// Implementation: 0x105bf7aec

// -[SCLensRemoteAssetsBlobUploadOperation _performSyncWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105bf7c64

// -[SCLensRemoteAssetsBlobUploadOperation delegate]
// Type encoding: @16@0:8
// Implementation: 0x105bf7cc4

// -[SCLensRemoteAssetsBlobUploadOperation setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105bf7cdc

// -[SCLensRemoteAssetsBlobUploadOperation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105bf7ce8

// +[SCLensRemoteAssetsBlobUploadOperation operationFromRetrievableData:]
// Type encoding: @24@0:8@16
// Implementation: 0x105bf5cdc

@end
