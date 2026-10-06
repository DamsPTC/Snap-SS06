// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImpalaBusinessProfileManager
// Superclass: NSObject
// Address: 0x112bd0168

@interface SCImpalaBusinessProfileManager

// Property: rpc; attributes: T@"SCSnapProRPC",R,N,V_rpc
// Property: managedBusinessProfilesResponse; attributes: T@"SCDataHandler",R,N
// Property: hasPendingRoleInvites; attributes: T@"SCDataHandler",R,N
// Property: userSettings; attributes: T@"SCDataHandler",R,N
// Property: handlers; attributes: T@"SCImpalaBusinessProfileHandlers",R,N,V_handlers
// Property: managedHandlers; attributes: T@"SCImpalaBusinessProfileHandlers",R,N,V_managedHandlers
// Property: hostAccountProfileId; attributes: T@"NSString",R,N
// Property: isPopular; attributes: TB,R,N
// Property: alwaysShowSpotlightSendToProfile; attributes: TB,R,N
// Property: isEligibleForProfileCreation; attributes: TB,R,N
// Property: isStandardProfileEnabled; attributes: TB,R,N
// Property: hasPublicProfile; attributes: TB,R,N
// Property: isFriendsOnlyProfile; attributes: TB,R,N
// Property: isUser16or17; attributes: TB,R,N
// Property: isUserOver18; attributes: TB,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCImpalaBusinessProfileManager initWithUserSession:emailInfoProvider:networkServices:circumstanceEngine:runtimeProvider:impalaPreferences:appStartExperimentReader:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x100815258

// -[SCImpalaBusinessProfileManager cache]
// Type encoding: @16@0:8
// Implementation: 0x100819780

// -[SCImpalaBusinessProfileManager performer]
// Type encoding: @16@0:8
// Implementation: 0x100819558

// -[SCImpalaBusinessProfileManager managedBusinessProfilesResponse]
// Type encoding: @16@0:8
// Implementation: 0x100819368

// -[SCImpalaBusinessProfileManager _businessProfilesResponseDataHandlerReceivedData]
// Type encoding: v16@0:8
// Implementation: 0x108f1991c

// -[SCImpalaBusinessProfileManager _addLoadingObserverIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x108f19a88

// -[SCImpalaBusinessProfileManager hostAccountProfileIdFuture]
// Type encoding: @16@0:8
// Implementation: 0x108f19c48

// -[SCImpalaBusinessProfileManager setCurrentUserSnapchatter:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f19d30

// -[SCImpalaBusinessProfileManager hasPendingRoleInvites]
// Type encoding: @16@0:8
// Implementation: 0x108f19d60

// -[SCImpalaBusinessProfileManager userSettings]
// Type encoding: @16@0:8
// Implementation: 0x108f1a138

// -[SCImpalaBusinessProfileManager updateUserSettings:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108f1a4fc

// -[SCImpalaBusinessProfileManager addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c84078

// -[SCImpalaBusinessProfileManager removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f1a730

// -[SCImpalaBusinessProfileManager hostAccountProfileId]
// Type encoding: @16@0:8
// Implementation: 0x108f1a738

// -[SCImpalaBusinessProfileManager isPopular]
// Type encoding: B16@0:8
// Implementation: 0x108f1a928

// -[SCImpalaBusinessProfileManager isEligibleForProfileCreation]
// Type encoding: B16@0:8
// Implementation: 0x108f1a9c0

// -[SCImpalaBusinessProfileManager isStandardProfileEnabled]
// Type encoding: B16@0:8
// Implementation: 0x108f1aa80

// -[SCImpalaBusinessProfileManager alwaysShowSpotlightSendToProfile]
// Type encoding: B16@0:8
// Implementation: 0x108f1aae0

// -[SCImpalaBusinessProfileManager isFriendsOnlyProfile]
// Type encoding: B16@0:8
// Implementation: 0x108f1ab88

// -[SCImpalaBusinessProfileManager hasPublicProfile]
// Type encoding: B16@0:8
// Implementation: 0x108f1ad88

// -[SCImpalaBusinessProfileManager isUser16or17]
// Type encoding: B16@0:8
// Implementation: 0x108f1adc8

// -[SCImpalaBusinessProfileManager isUserOver18]
// Type encoding: B16@0:8
// Implementation: 0x108f1afc8

// -[SCImpalaBusinessProfileManager _didUpdateSubscribedForSnapchatter:subscribed:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x108f1b1c8

// -[SCImpalaBusinessProfileManager _didUpdateCurrentUserWithNewDisplayName:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f1b3d0

// -[SCImpalaBusinessProfileManager _preloadManagedBusinessProfilesIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x108f1b658

// -[SCImpalaBusinessProfileManager businessProfileHandlers:didUpdateSubscribed:forHandler:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x108f1b71c

// -[SCImpalaBusinessProfileManager businessProfileHandlers:didUpdateHandlers:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100c68d9c

// -[SCImpalaBusinessProfileManager didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f1b860

// -[SCImpalaBusinessProfileManager didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x108f1b864

// -[SCImpalaBusinessProfileManager placeholderConvertedToRealBusinessId]
// Type encoding: @16@0:8
// Implementation: 0x100c85214

// -[SCImpalaBusinessProfileManager rpc]
// Type encoding: @16@0:8
// Implementation: 0x108f1bb50

// -[SCImpalaBusinessProfileManager handlers]
// Type encoding: @16@0:8
// Implementation: 0x108f1bb58

// -[SCImpalaBusinessProfileManager managedHandlers]
// Type encoding: @16@0:8
// Implementation: 0x100c845a0

// -[SCImpalaBusinessProfileManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108f1bb60

@end
