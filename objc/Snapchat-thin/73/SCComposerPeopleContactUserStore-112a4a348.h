// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerPeopleContactUserStore
// Superclass: NSObject
// Address: 0x112a4a348

@interface SCComposerPeopleContactUserStore

// Property: contactUsersObservable; attributes: T@"SCBridgeObservable",?,&,N,V_contactUsersObservable
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerPeopleContactUserStore initWithSnapchattersDataFetcher:snapchattersDataTracker:dataUpdatedObservable:performerProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1055be008

// -[SCComposerPeopleContactUserStore pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x1055be17c

// -[SCComposerPeopleContactUserStore _observeDataUpdates]
// Type encoding: v16@0:8
// Implementation: 0x1055be188

// -[SCComposerPeopleContactUserStore _fetchContactUsersAndPublishInPerformer]
// Type encoding: v16@0:8
// Implementation: 0x1055be280

// -[SCComposerPeopleContactUserStore _fetchContactUsersAndPublish]
// Type encoding: v16@0:8
// Implementation: 0x1055be374

// -[SCComposerPeopleContactUserStore _publishContactUsersWithSnapchatters:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1055be4e4

// -[SCComposerPeopleContactUserStore _createLazyPerformerWithPerformerProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055be5e0

// -[SCComposerPeopleContactUserStore getContactUsersWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1055be6d4

// -[SCComposerPeopleContactUserStore onContactUsersUpdatedWithCallback:]
// Type encoding: @?24@0:8@?16
// Implementation: 0x1055be6d8

// -[SCComposerPeopleContactUserStore contactUsersObservable]
// Type encoding: @16@0:8
// Implementation: 0x1055be6e8

// -[SCComposerPeopleContactUserStore setContactUsersObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055be6f0

// -[SCComposerPeopleContactUserStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1055be720

@end
