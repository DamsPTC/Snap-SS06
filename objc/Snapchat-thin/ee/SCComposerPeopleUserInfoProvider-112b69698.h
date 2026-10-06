// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerPeopleUserInfoProvider
// Superclass: NSObject
// Address: 0x112b69698

@interface SCComposerPeopleUserInfoProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerPeopleUserInfoProvider initWithBirthdayProvider:lastKnownIPCountryCodeProvider:bitmojiAvatarProvider:bitmojiSelfieProvider:bitmojiFlatlandInfoProvider:locationProvider:displayNameProvider:userNameProvider:phoneNumberProvider:userSession:snapProProfilesProvider:plusSubscriptionInfoProvider:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@88@96@104
// Implementation: 0x1079fb794

// -[SCComposerPeopleUserInfoProvider pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x1079fba40

// -[SCComposerPeopleUserInfoProvider getCurrentUserInfoWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1079fba4c

// -[SCComposerPeopleUserInfoProvider _doGetCurrentUserInfoWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1079fbb0c

// -[SCComposerPeopleUserInfoProvider observeCurrentUserInfo]
// Type encoding: @16@0:8
// Implementation: 0x1079fbb68

// -[SCComposerPeopleUserInfoProvider _getInitialUserInfo]
// Type encoding: @16@0:8
// Implementation: 0x1079fbed0

// -[SCComposerPeopleUserInfoProvider _createCombinedUserInfoObservables]
// Type encoding: @16@0:8
// Implementation: 0x1079fc0b0

// -[SCComposerPeopleUserInfoProvider _createUserInfoWithBirthday:bitmojiAvatarId:bitmojiSelfieId:sceneId:backgroundId:displayName:username:plusInfo:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x1079fc778

// -[SCComposerPeopleUserInfoProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1079fcee8

@end
