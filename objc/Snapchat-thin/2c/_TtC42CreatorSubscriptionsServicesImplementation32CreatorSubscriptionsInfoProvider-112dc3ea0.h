// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: _TtC42CreatorSubscriptionsServicesImplementation32CreatorSubscriptionsInfoProvider
// Superclass: _TtCs12_SwiftObject
// Address: 0x112dc3ea0

@interface _TtC42CreatorSubscriptionsServicesImplementation32CreatorSubscriptionsInfoProvider

// Property: viewerEligibilityObservable; attributes: T@,N,R
// Property: creatorSubscriptionsObservable; attributes: T@,N,R

// -[_TtC42CreatorSubscriptionsServicesImplementation32CreatorSubscriptionsInfoProvider viewerEligibilityObservable]
// Type encoding: @16@0:8
// Implementation: 0x101709e84

// -[_TtC42CreatorSubscriptionsServicesImplementation32CreatorSubscriptionsInfoProvider isViewerEligibleToSubscribeWithCompletionHandler:]
// Type encoding: v24@0:8@?<v@?B>16
// Implementation: 0x10170a75c

// -[_TtC42CreatorSubscriptionsServicesImplementation32CreatorSubscriptionsInfoProvider creatorSubscriptionsObservable]
// Type encoding: @16@0:8
// Implementation: 0x10170bbf8

// -[_TtC42CreatorSubscriptionsServicesImplementation32CreatorSubscriptionsInfoProvider hasActiveSubscriptionToCreatorId:]
// Type encoding: B24@0:8@16
// Implementation: 0x10170be9c

// -[_TtC42CreatorSubscriptionsServicesImplementation32CreatorSubscriptionsInfoProvider getCreatorSubscriptionsWithCompletionHandler:]
// Type encoding: v24@0:8@?<v@?@"NSDictionary">16
// Implementation: 0x10170c098

// -[_TtC42CreatorSubscriptionsServicesImplementation32CreatorSubscriptionsInfoProvider getCreatorSubscriptionFor:completionHandler:]
// Type encoding: v32@0:8@"NSString"16@?<v@?@"_TtC28CreatorSubscriptionsServices19CreatorSubscription">24
// Implementation: 0x10170c2b8

// -[_TtC42CreatorSubscriptionsServicesImplementation32CreatorSubscriptionsInfoProvider fetchProductDisplayNameForCreatorId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10170c530

// -[_TtC42CreatorSubscriptionsServicesImplementation32CreatorSubscriptionsInfoProvider isEligibleToSubscribeTo:completionHandler:]
// Type encoding: v32@0:8@"NSString"16@?<v@?q>24
// Implementation: 0x10170cf94

// -[_TtC42CreatorSubscriptionsServicesImplementation32CreatorSubscriptionsInfoProvider isEligibleForProfileUpsellWithCompletionHandler:]
// Type encoding: v24@0:8@?<v@?B>16
// Implementation: 0x10170da1c

// -[_TtC42CreatorSubscriptionsServicesImplementation32CreatorSubscriptionsInfoProvider cachedProfileUpsellCreatorsWithCompletionHandler:]
// Type encoding: v24@0:8@?<v@?@"NSArray">16
// Implementation: 0x10170dfb8

// -[_TtC42CreatorSubscriptionsServicesImplementation32CreatorSubscriptionsInfoProvider cachedEligibilityFor:]
// Type encoding: @24@0:8@16
// Implementation: 0x10170e518

// -[_TtC42CreatorSubscriptionsServicesImplementation32CreatorSubscriptionsInfoProvider restoreSubscriptionWithRetryWithCreatorId:productId:transactionId:maxRetryCount:source:isUserInitiatedPurchase:]
// Type encoding: v60@0:8@16@24@32q40q48B56
// Implementation: 0x10170ec90

// -[_TtC42CreatorSubscriptionsServicesImplementation32CreatorSubscriptionsInfoProvider restoreSubscriptionFromTransactionWithRetryWithTransactionId:transactionJSON:maxRetryCount:source:isUserInitiatedPurchase:]
// Type encoding: v52@0:8@16@24q32q40B48
// Implementation: 0x10170ee9c

// -[_TtC42CreatorSubscriptionsServicesImplementation32CreatorSubscriptionsInfoProvider syncSubscriptionsIfNecessaryWithCompletionHandler:]
// Type encoding: v24@0:8@?<v@?@"NSDictionary">16
// Implementation: 0x10170f100

// -[_TtC42CreatorSubscriptionsServicesImplementation32CreatorSubscriptionsInfoProvider subscribeToCreatorWithCreatorId:productId:transactionId:completionHandler:]
// Type encoding: v48@0:8@"NSString"16@"NSString"24@"NSString"32@?<v@?q>40
// Implementation: 0x101710378

// -[_TtC42CreatorSubscriptionsServicesImplementation32CreatorSubscriptionsInfoProvider mockSubscribeToCreatorWithCreatorId:completionHandler:]
// Type encoding: v32@0:8@"NSString"16@?<v@?>24
// Implementation: 0x101710b84

@end
