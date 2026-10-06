// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SOJUScannableScannableAction
// Superclass: SCSojuMessage
// Address: 0x112ccb540

@interface SOJUScannableScannableAction

// Property: payload; attributes: T@"NSData",R,C,N
// Property: legacyPayload; attributes: T@"NSData",R,C,N
// Property: useCase; attributes: Tq,R,N
// Property: idValue; attributes: T@"NSString",R,D,N
// Property: type; attributes: T@"NSString",R,D,N
// Property: data; attributes: T@"NSString",R,D,N
// Property: status; attributes: T@"NSString",R,D,N
// Property: priority; attributes: T@"NSNumber",R,D,N
// Property: timeCreated; attributes: T@"NSNumber",R,D,N
// Property: timeExpired; attributes: T@"NSNumber",R,D,N
// Property: devDescription; attributes: T@"NSString",R,D,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SOJUScannableScannableAction useCase]
// Type encoding: q16@0:8
// Implementation: 0x1055f2080

// -[SOJUScannableScannableAction _useCasePayloadIsSerializable]
// Type encoding: B16@0:8
// Implementation: 0x1055f23c8

// -[SOJUScannableScannableAction _useCaseFromURLOnly:]
// Type encoding: q24@0:8@16
// Implementation: 0x1055f241c

// -[SOJUScannableScannableAction legacyPayload]
// Type encoding: @16@0:8
// Implementation: 0x1055f120c

// -[SOJUScannableScannableAction payload]
// Type encoding: @16@0:8
// Implementation: 0x1055f1254

// -[SOJUScannableScannableAction _payloadIsSerializable]
// Type encoding: B16@0:8
// Implementation: 0x1055f162c

// -[SOJUScannableScannableAction _userProfilePayloadForAddFriendAction:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055f1648

// -[SOJUScannableScannableAction _discoverPayloadForDeepLinkAction:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055f16c4

// -[SOJUScannableScannableAction _deepLinkPayloadForDeepLinkAction:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055f17b8

// -[SOJUScannableScannableAction _messagePayloadForMessageAction:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055f1834

// -[SOJUScannableScannableAction _urlPayloadForURLAction:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055f18b0

// -[SOJUScannableScannableAction _unlockableLensPayloadForGeofilterResponse:actionData:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1055f192c

// -[SOJUScannableScannableAction _adCreativePreviewPayloadForAdCreativePreviewAction:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055f1a1c

// -[SOJUScannableScannableAction _commerceProductPayloadForMarcoAction:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055f1bb0

// -[SOJUScannableScannableAction _snapKitDeepLinkPayloadForSnapKitDeepLinkAction:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055f1bbc

// -[SOJUScannableScannableAction _scanToAuthPayloadForScanToAuthAction:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055f1c38

// -[SOJUScannableScannableAction _gamePayloadForGameAction:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055f1d64

// -[SOJUScannableScannableAction _connectedLensPayloadForURLAction:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055f1f60

// -[SOJUScannableScannableAction _sponsoredLensPreviewPayloadForSponsoredLensPreviewAction:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055f1fdc

// -[SOJUScannableScannableAction initWithIdValue:type:data:status:priority:timeCreated:timeExpired:devDescription:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x10b791fc0

// +[SOJUScannableScannableAction registerMessageFields:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b791ff0

@end
