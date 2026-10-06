// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCProfile3DeeplinkPayload
// Superclass: NSObject
// Address: 0x112b7b028

@interface SCProfile3DeeplinkPayload

// Property: kind; attributes: Tq,N,V_kind
// Property: settingsDeepLinkTypeRaw; attributes: Tq,N,V_settingsDeepLinkTypeRaw
// Property: settingsUnknownFeature; attributes: T@"NSString",C,N,V_settingsUnknownFeature
// Property: profileManagementProfileId; attributes: T@"NSString",C,N,V_profileManagementProfileId
// Property: impalaProfileDeeplinkActionRaw; attributes: Tq,N,V_impalaProfileDeeplinkActionRaw

// -[SCProfile3DeeplinkPayload kind]
// Type encoding: q16@0:8
// Implementation: 0x107d0dbf4

// -[SCProfile3DeeplinkPayload setKind:]
// Type encoding: v24@0:8q16
// Implementation: 0x107d0dbfc

// -[SCProfile3DeeplinkPayload settingsDeepLinkTypeRaw]
// Type encoding: q16@0:8
// Implementation: 0x107d0dc04

// -[SCProfile3DeeplinkPayload setSettingsDeepLinkTypeRaw:]
// Type encoding: v24@0:8q16
// Implementation: 0x107d0dc0c

// -[SCProfile3DeeplinkPayload settingsUnknownFeature]
// Type encoding: @16@0:8
// Implementation: 0x107d0dc14

// -[SCProfile3DeeplinkPayload setSettingsUnknownFeature:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d0dc1c

// -[SCProfile3DeeplinkPayload profileManagementProfileId]
// Type encoding: @16@0:8
// Implementation: 0x107d0dc24

// -[SCProfile3DeeplinkPayload setProfileManagementProfileId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d0dc2c

// -[SCProfile3DeeplinkPayload impalaProfileDeeplinkActionRaw]
// Type encoding: q16@0:8
// Implementation: 0x107d0dc34

// -[SCProfile3DeeplinkPayload setImpalaProfileDeeplinkActionRaw:]
// Type encoding: v24@0:8q16
// Implementation: 0x107d0dc3c

// -[SCProfile3DeeplinkPayload .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107d0dc44

// +[SCProfile3DeeplinkPayload settingsPayloadWithDeepLinkTypeRaw:unknownFeature:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x107d0dacc

// +[SCProfile3DeeplinkPayload profileManagementPayloadWithProfileId:deeplinkActionRaw:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x107d0db3c

// +[SCProfile3DeeplinkPayload pendingInvitationsPayload]
// Type encoding: @16@0:8
// Implementation: 0x107d0dbc0

@end
