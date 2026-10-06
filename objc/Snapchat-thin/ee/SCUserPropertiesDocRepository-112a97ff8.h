// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserPropertiesDocRepository
// Superclass: NSObject
// Address: 0x112a97ff8

@interface SCUserPropertiesDocRepository

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUserPropertiesDocRepository serialize:withNewStatus:]
// Type encoding: @28@0:8@16c24
// Implementation: 0x105c7b4c0

// -[SCUserPropertiesDocRepository serializeObject:value:writeStatus:rowVersion:enqueueTimeMs:]
// Type encoding: @52@0:8@16@24c32q36d44
// Implementation: 0x105c7b62c

// -[SCUserPropertiesDocRepository deserializeObject:]
// Type encoding: @24@0:8@16
// Implementation: 0x10050382c

// -[SCUserPropertiesDocRepository initWithDocObjectContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x1004fcbf8

// -[SCUserPropertiesDocRepository userPropertyWithKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x105c81050

// -[SCUserPropertiesDocRepository boolForUserPropertyWithKey:]
// Type encoding: B24@0:8@16
// Implementation: 0x105c81074

// -[SCUserPropertiesDocRepository doubleForUserPropertyWithKey:]
// Type encoding: d24@0:8@16
// Implementation: 0x105c810cc

// -[SCUserPropertiesDocRepository longForUserPropertyWithKey:]
// Type encoding: q24@0:8@16
// Implementation: 0x105c8112c

// -[SCUserPropertiesDocRepository floatForUserPropertyWithKey:]
// Type encoding: f24@0:8@16
// Implementation: 0x105c81184

// -[SCUserPropertiesDocRepository stringForUserPropertyWithKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x105c811e4

// -[SCUserPropertiesDocRepository unsignedIntegerForUserPropertyWithKey:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105c81244

// -[SCUserPropertiesDocRepository integerForUserPropertyWithKey:]
// Type encoding: q24@0:8@16
// Implementation: 0x105c8129c

// -[SCUserPropertiesDocRepository rawItemForUserPropertyWithKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x105c812f4

// -[SCUserPropertiesDocRepository valueForItemKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x1004fd208

// -[SCUserPropertiesDocRepository valueForItemKey:withPendingWriteStatus:]
// Type encoding: @28@0:8@16c24
// Implementation: 0x105c81354

// -[SCUserPropertiesDocRepository getUserPropertiesWithPendingWriteStatus:]
// Type encoding: @20@0:8c16
// Implementation: 0x105c813c4

// -[SCUserPropertiesDocRepository getUserPropertiesForUploadInPendingWriteStatus]
// Type encoding: @16@0:8
// Implementation: 0x105c815e0

// -[SCUserPropertiesDocRepository putItemWithKey:value:completionQueue:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x105c81bd0

// -[SCUserPropertiesDocRepository clearAllPendingWrites:transactionContext:completionQueue:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x105c81fb0

// -[SCUserPropertiesDocRepository clobberItem:value:rowVersion:transactionContext:completionQueue:completionHandler:]
// Type encoding: v64@0:8@16@24Q32@40@48@?56
// Implementation: 0x105c823a4

// -[SCUserPropertiesDocRepository updateUserPropertyToPendingPutResponse:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105c82840

// -[SCUserPropertiesDocRepository updateUserPropertyFromPendingPutResponseToConfirmed:value:rowVersion:transactionContext:completionQueue:completionHandler:]
// Type encoding: v64@0:8@16@24Q32@40@48@?56
// Implementation: 0x105c82b94

// -[SCUserPropertiesDocRepository insertItemWithConfirmedStatus:value:rowVersion:transactionContext:completionQueue:completionHandler:]
// Type encoding: v64@0:8@16@24q32@40@48@?56
// Implementation: 0x105c83098

// -[SCUserPropertiesDocRepository deleteItemsWithKeys:transactionContext:completionQueue:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x105c8340c

// -[SCUserPropertiesDocRepository deleteItem:withPendingWriteStatus:transactionContext:completionQueue:completionHandler:]
// Type encoding: v52@0:8@16c24@28@36@?44
// Implementation: 0x105c835b0

// -[SCUserPropertiesDocRepository getPreviousRowVersionForPropertyWithKey:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105c8368c

// -[SCUserPropertiesDocRepository hasSynced]
// Type encoding: B16@0:8
// Implementation: 0x105c836f8

// -[SCUserPropertiesDocRepository _removeUserPropertyWithItem:transactionContext:completionQueue:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x105c838ac

// -[SCUserPropertiesDocRepository _removeUserProperty:transactionContext:completionQueue:completionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x105c83e88

// -[SCUserPropertiesDocRepository _invokeCompletionOnQueue:withHandler:success:]
// Type encoding: v36@0:8@16@?24B32
// Implementation: 0x105c84290

// -[SCUserPropertiesDocRepository observeKeys:queue:changeHandler:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x100503e80

// -[SCUserPropertiesDocRepository .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105c8437c

@end
