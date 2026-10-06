// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: PINMemoryCache
// Superclass: NSObject
// Address: 0x112cd3768

@interface PINMemoryCache

// Property: name; attributes: T@"NSString",C,N,V_name
// Property: operationQueue; attributes: T@"PINOperationQueue",&,N,V_operationQueue
// Property: mutex; attributes: T{_opaque_pthread_mutex_t=q[56c]},N,V_mutex
// Property: dictionary; attributes: T@"NSMutableDictionary",&,N,V_dictionary
// Property: dates; attributes: T@"NSMutableDictionary",&,N,V_dates
// Property: costs; attributes: T@"NSMutableDictionary",&,N,V_costs
// Property: metadata; attributes: T@"NSMutableDictionary",&,N,V_metadata
// Property: keysByKind; attributes: T@"NSMutableDictionary",&,N,V_keysByKind
// Property: costsByKind; attributes: T@"NSMutableDictionary",&,N,V_costsByKind
// Property: costsByKindSnapshot; attributes: T@"NSMutableDictionary",&,N,V_costsByKindSnapshot
// Property: totalCost; attributes: TQ,R,V_totalCost
// Property: costLimit; attributes: TQ,V_costLimit
// Property: ageLimit; attributes: Td,V_ageLimit
// Property: ttlCache; attributes: TB,N,GisTTLCache,V_ttlCache
// Property: removeAllObjectsOnMemoryWarning; attributes: TB,V_removeAllObjectsOnMemoryWarning
// Property: removeAllObjectsOnEnteringBackground; attributes: TB,V_removeAllObjectsOnEnteringBackground
// Property: willAddObjectBlock; attributes: T@?,C,V_willAddObjectBlock
// Property: willRemoveObjectBlock; attributes: T@?,C,V_willRemoveObjectBlock
// Property: willRemoveAllObjectsBlock; attributes: T@?,C,V_willRemoveAllObjectsBlock
// Property: didAddObjectBlock; attributes: T@?,C,V_didAddObjectBlock
// Property: didRemoveObjectBlock; attributes: T@?,C,V_didRemoveObjectBlock
// Property: didRemoveAllObjectsBlock; attributes: T@?,C,V_didRemoveAllObjectsBlock
// Property: didReceiveMemoryWarningBlock; attributes: T@?,C,V_didReceiveMemoryWarningBlock
// Property: didEnterBackgroundBlock; attributes: T@?,C,V_didEnterBackgroundBlock
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[PINMemoryCache dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10b7d44e0

// -[PINMemoryCache init]
// Type encoding: @16@0:8
// Implementation: 0x100448794

// -[PINMemoryCache initWithOperationQueue:]
// Type encoding: @24@0:8@16
// Implementation: 0x100448b78

// -[PINMemoryCache initWithName:operationQueue:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100448b88

// -[PINMemoryCache didReceiveMemoryWarningNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7d4558

// -[PINMemoryCache didReceiveEnterBackgroundNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7d46dc

// -[PINMemoryCache removeObjectAndExecuteBlocksForKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7d4860

// -[PINMemoryCache trimMemoryToDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7d4bc8

// -[PINMemoryCache trimToCostLimit:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b7d4ddc

// -[PINMemoryCache trimToCostLimitByDate:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b7d4f7c

// -[PINMemoryCache trimToAgeLimitRecursively]
// Type encoding: v16@0:8
// Implementation: 0x10b7d5108

// -[PINMemoryCache containsObjectForKeyAsync:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7d5370

// -[PINMemoryCache objectForKeyAsync:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10081c54c

// -[PINMemoryCache updateMetadataAsync:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b7d5538

// -[PINMemoryCache setObjectAsync:forKey:metadata:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10b7d5724

// -[PINMemoryCache setObjectAsync:forKey:cost:metadata:completion:]
// Type encoding: v56@0:8@16@24Q32@40@?48
// Implementation: 0x10083aebc

// -[PINMemoryCache removeObjectForKeyAsync:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7d5734

// -[PINMemoryCache removeObjectsForKeysAsync:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7d5904

// -[PINMemoryCache trimToDateAsync:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7d5bc4

// -[PINMemoryCache trimToCostAsync:completion:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x10b7d5d88

// -[PINMemoryCache trimToCostByDateAsync:completion:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x10b7d5f10

// -[PINMemoryCache removeAllObjectsAsync:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7d6098

// -[PINMemoryCache removeAllObjectsAsyncForKind:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7d6218

// -[PINMemoryCache enumerateObjectsWithBlockAsync:completionBlock:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x10b7d63dc

// -[PINMemoryCache enumerateObjectsAsyncForKind:block:completionBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x10b7d65a0

// -[PINMemoryCache containsObjectForKey:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b7d67a4

// -[PINMemoryCache metadataForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b7d6838

// -[PINMemoryCache objectForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b7d696c

// -[PINMemoryCache objectForKey:metadata:]
// Type encoding: @32@0:8@16o^@24
// Implementation: 0x10081cfe8

// -[PINMemoryCache setObject:forKey:metadata:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x10b7d698c

// -[PINMemoryCache setObject:forKey:cost:metadata:]
// Type encoding: B48@0:8@16@24Q32@40
// Implementation: 0x10083b740

// -[PINMemoryCache _locked_adjustKindCost:byValue:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10083bd0c

// -[PINMemoryCache _locked_computeTotalCostsFromKinds]
// Type encoding: Q16@0:8
// Implementation: 0x10083be10

// -[PINMemoryCache removeObjectForKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7d6998

// -[PINMemoryCache trimToDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7d69e8

// -[PINMemoryCache trimToCost:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b7d6a90

// -[PINMemoryCache trimToCostByDate:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b7d6a94

// -[PINMemoryCache removeAllObjects]
// Type encoding: v16@0:8
// Implementation: 0x10b7d6a98

// -[PINMemoryCache removeAllObjectsByKind:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7d6b8c

// -[PINMemoryCache enumerateObjectsWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7d6ce8

// -[PINMemoryCache enumerateObjectsForKind:block:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7d6f7c

// -[PINMemoryCache willAddObjectBlock]
// Type encoding: @?16@0:8
// Implementation: 0x10b7d7258

// -[PINMemoryCache setWillAddObjectBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7d72b8

// -[PINMemoryCache willRemoveObjectBlock]
// Type encoding: @?16@0:8
// Implementation: 0x10b7d7320

// -[PINMemoryCache setWillRemoveObjectBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7d7380

// -[PINMemoryCache willRemoveAllObjectsBlock]
// Type encoding: @?16@0:8
// Implementation: 0x10b7d73e8

// -[PINMemoryCache setWillRemoveAllObjectsBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7d7448

// -[PINMemoryCache didAddObjectBlock]
// Type encoding: @?16@0:8
// Implementation: 0x10b7d74b0

// -[PINMemoryCache setDidAddObjectBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7d7510

// -[PINMemoryCache didRemoveObjectBlock]
// Type encoding: @?16@0:8
// Implementation: 0x10b7d7578

// -[PINMemoryCache setDidRemoveObjectBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7d75d8

// -[PINMemoryCache didRemoveAllObjectsBlock]
// Type encoding: @?16@0:8
// Implementation: 0x10b7d7640

// -[PINMemoryCache setDidRemoveAllObjectsBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7d76a0

// -[PINMemoryCache didReceiveMemoryWarningBlock]
// Type encoding: @?16@0:8
// Implementation: 0x10b7d7708

// -[PINMemoryCache setDidReceiveMemoryWarningBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7d7768

// -[PINMemoryCache didEnterBackgroundBlock]
// Type encoding: @?16@0:8
// Implementation: 0x10b7d77d0

// -[PINMemoryCache setDidEnterBackgroundBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7d7830

// -[PINMemoryCache ageLimit]
// Type encoding: d16@0:8
// Implementation: 0x10b7d7898

// -[PINMemoryCache setAgeLimit:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b7d78d0

// -[PINMemoryCache costLimit]
// Type encoding: Q16@0:8
// Implementation: 0x10b7d790c

// -[PINMemoryCache setCostLimit:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b7d793c

// -[PINMemoryCache totalCost]
// Type encoding: Q16@0:8
// Implementation: 0x10b7d7984

// -[PINMemoryCache lastKnownCostByKind:]
// Type encoding: Q24@0:8@16
// Implementation: 0x10b7d79b4

// -[PINMemoryCache isTTLCache]
// Type encoding: B16@0:8
// Implementation: 0x10b7d7a5c

// -[PINMemoryCache setTtlCache:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b7d7a8c

// -[PINMemoryCache lock]
// Type encoding: v16@0:8
// Implementation: 0x10081d174

// -[PINMemoryCache unlock]
// Type encoding: v16@0:8
// Implementation: 0x10081d17c

// -[PINMemoryCache name]
// Type encoding: @16@0:8
// Implementation: 0x10b7d7ab8

// -[PINMemoryCache setName:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7d7ac0

// -[PINMemoryCache removeAllObjectsOnMemoryWarning]
// Type encoding: B16@0:8
// Implementation: 0x10b7d7ac8

// -[PINMemoryCache setRemoveAllObjectsOnMemoryWarning:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b7d7ad4

// -[PINMemoryCache removeAllObjectsOnEnteringBackground]
// Type encoding: B16@0:8
// Implementation: 0x10b7d7adc

// -[PINMemoryCache setRemoveAllObjectsOnEnteringBackground:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b7d7ae8

// -[PINMemoryCache operationQueue]
// Type encoding: @16@0:8
// Implementation: 0x10081c6b0

// -[PINMemoryCache setOperationQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7d7af0

// -[PINMemoryCache mutex]
// Type encoding: {_opaque_pthread_mutex_t=q[56c]}16@0:8
// Implementation: 0x10b7d7b20

// -[PINMemoryCache setMutex:]
// Type encoding: v80@0:8{_opaque_pthread_mutex_t=q[56c]}16
// Implementation: 0x10b7d7b34

// -[PINMemoryCache dictionary]
// Type encoding: @16@0:8
// Implementation: 0x10b7d7b48

// -[PINMemoryCache setDictionary:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7d7b50

// -[PINMemoryCache dates]
// Type encoding: @16@0:8
// Implementation: 0x10b7d7b80

// -[PINMemoryCache setDates:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7d7b88

// -[PINMemoryCache costs]
// Type encoding: @16@0:8
// Implementation: 0x10b7d7bb8

// -[PINMemoryCache setCosts:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7d7bc0

// -[PINMemoryCache metadata]
// Type encoding: @16@0:8
// Implementation: 0x10b7d7bf0

// -[PINMemoryCache setMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7d7bf8

// -[PINMemoryCache keysByKind]
// Type encoding: @16@0:8
// Implementation: 0x10b7d7c28

// -[PINMemoryCache setKeysByKind:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7d7c30

// -[PINMemoryCache costsByKind]
// Type encoding: @16@0:8
// Implementation: 0x10b7d7c60

// -[PINMemoryCache setCostsByKind:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7d7c68

// -[PINMemoryCache costsByKindSnapshot]
// Type encoding: @16@0:8
// Implementation: 0x10b7d7c98

// -[PINMemoryCache setCostsByKindSnapshot:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7d7ca0

// -[PINMemoryCache .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b7d7cd0

// +[PINMemoryCache sharedCache]
// Type encoding: @16@0:8
// Implementation: 0x100448714

@end
