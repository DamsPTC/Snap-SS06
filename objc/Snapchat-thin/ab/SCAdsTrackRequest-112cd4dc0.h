// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdsTrackRequest
// Superclass: GPBMessage
// Address: 0x112cd4dc0

@interface SCAdsTrackRequest

// Property: adType; attributes: Ti,R,N
// Property: firstTrackItem; attributes: T@"SCAdsAdTrackItem",R,N
// Property: inventoryType; attributes: Ti,R,N
// Property: tapAttachmentSource; attributes: Ti,R,N
// Property: encryptedUserTrackData; attributes: T@"NSData",C,D,N
// Property: application; attributes: T@"SCAdsApplication",&,D,N
// Property: hasApplication; attributes: TB,D,N
// Property: preferences; attributes: T@"SCAdsPreferences",&,D,N
// Property: hasPreferences; attributes: TB,D,N
// Property: device; attributes: T@"SCAdsDevice",&,D,N
// Property: hasDevice; attributes: TB,D,N
// Property: network; attributes: T@"SCAdsNetwork",&,D,N
// Property: hasNetwork; attributes: TB,D,N
// Property: inventoryTrackRequestsArray; attributes: T@"NSMutableArray",&,D,N
// Property: inventoryTrackRequestsArray_Count; attributes: TQ,R,D,N
// Property: isDebug; attributes: T@"GPBBoolValue",&,D,N
// Property: hasIsDebug; attributes: TB,D,N
// Property: creationTimestampMs; attributes: T@"GPBInt64Value",&,D,N
// Property: hasCreationTimestampMs; attributes: TB,D,N
// Property: numberOfAttempts; attributes: T@"GPBInt32Value",&,D,N
// Property: hasNumberOfAttempts; attributes: TB,D,N
// Property: serializedV1Track; attributes: T@"GPBStringValue",&,D,N
// Property: hasSerializedV1Track; attributes: TB,D,N
// Property: adkitFeatureFlags; attributes: T@"SCAdsAdKitFeatureFlags",&,D,N
// Property: hasAdkitFeatureFlags; attributes: TB,D,N
// Property: encryptedUserData; attributes: T@"NSData",C,D,N
// Property: clientRequestId; attributes: T@"NSData",C,D,N
// Property: trackFiringMechanism; attributes: Ti,D,N
// Property: creativeIdLastViewedTimestamp; attributes: T@"GPBInt64Value",&,D,N
// Property: hasCreativeIdLastViewedTimestamp; attributes: TB,D,N
// Property: adAccountLastViewedTimestamp; attributes: T@"GPBInt64Value",&,D,N
// Property: hasAdAccountLastViewedTimestamp; attributes: TB,D,N
// Property: snapchatPlusSubscriptionTier; attributes: Ti,D,N

// -[SCAdsTrackRequest validationMetrics:]
// Type encoding: @20@0:8B16
// Implementation: 0x105475028

// -[SCAdsTrackRequest adType]
// Type encoding: i16@0:8
// Implementation: 0x10547490c

// -[SCAdsTrackRequest remoteWebviewImpressions:]
// Type encoding: @20@0:8B16
// Implementation: 0x105474968

// -[SCAdsTrackRequest commonSnapAdImpression]
// Type encoding: @16@0:8
// Implementation: 0x105474d28

// -[SCAdsTrackRequest firstTrackItem]
// Type encoding: @16@0:8
// Implementation: 0x105474e88

// -[SCAdsTrackRequest inventoryType]
// Type encoding: i16@0:8
// Implementation: 0x105474f08

// -[SCAdsTrackRequest tapAttachmentSource]
// Type encoding: i16@0:8
// Implementation: 0x105474f60

// +[SCAdsTrackRequest descriptor]
// Type encoding: @16@0:8
// Implementation: 0x10b7db924

@end
