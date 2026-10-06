// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChangeLanguageInSettingsActionRecorder
// Superclass: NSObject
// Address: 0x112a033f8

@interface SCChangeLanguageInSettingsActionRecorder

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChangeLanguageInSettingsActionRecorder initWithPreferences:userTrackedLogger:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104e8457c

// -[SCChangeLanguageInSettingsActionRecorder localeInLastAppSession]
// Type encoding: @16@0:8
// Implementation: 0x104e84620

// -[SCChangeLanguageInSettingsActionRecorder userTapGoToSettingsCTAWithCurrentLocale:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e84628

// -[SCChangeLanguageInSettingsActionRecorder userCancelChangeLanguageWithCurrentLocale:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e8467c

// -[SCChangeLanguageInSettingsActionRecorder languageDidFoundInBundle:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e846d0

// -[SCChangeLanguageInSettingsActionRecorder languageDownloadDidBeginWithNewLocale:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e84740

// -[SCChangeLanguageInSettingsActionRecorder languageDownloadDidCompleteWithNewLocale:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e84764

// -[SCChangeLanguageInSettingsActionRecorder _logGoToSettingsActionWithCurrentLocale:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104e847e8

// -[SCChangeLanguageInSettingsActionRecorder _logLanguageSwitchCompletedActionWithOldLocale:newLocale:downloadLatency:]
// Type encoding: v40@0:8@16@24d32
// Implementation: 0x104e848f0

// -[SCChangeLanguageInSettingsActionRecorder _logUserProfileUpdateEventWithFieldName:oldValue:newValue:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x104e84a34

// -[SCChangeLanguageInSettingsActionRecorder .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104e84ae8

@end
