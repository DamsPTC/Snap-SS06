// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerPeopleContactAddressBookEntryStore
// Superclass: NSObject
// Address: 0x112a4a2a8

@interface SCComposerPeopleContactAddressBookEntryStore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerPeopleContactAddressBookEntryStore initWithNonSnapchattersObservableRepository:snapchattersDataTracker:snapchattersDataMutator:inviteFriendStateTracker:inviteContactActionHandler:contactsAvailableObservable:enableTwilioInvites:shouldFilterOutIneligibleContacts:inviteFeatureSource:contactPhotosService:circumstanceEngine:]
// Type encoding: @92@0:8@16@24@32@40@48@56B64B68i72@76@84
// Implementation: 0x1055bcf70

// -[SCComposerPeopleContactAddressBookEntryStore _addressBookEntriesObservable]
// Type encoding: @16@0:8
// Implementation: 0x1055bd22c

// -[SCComposerPeopleContactAddressBookEntryStore pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x1055bd660

// -[SCComposerPeopleContactAddressBookEntryStore getContactAddressBookEntriesWithIsForSmsInvite:]
// Type encoding: @20@0:8B16
// Implementation: 0x1055bd66c

// -[SCComposerPeopleContactAddressBookEntryStore _fetchPhotos]
// Type encoding: v16@0:8
// Implementation: 0x1055bd6bc

// -[SCComposerPeopleContactAddressBookEntryStore inviteContactAddressBookEntryWithRequest:completion:inviteViaSMS:smsInviteFeature:]
// Type encoding: v48@0:8@16@?24@32@40
// Implementation: 0x1055bd774

// -[SCComposerPeopleContactAddressBookEntryStore _updateContactInviteStateWithPhoneNumber:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1055bdb40

// -[SCComposerPeopleContactAddressBookEntryStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1055bdc1c

@end
