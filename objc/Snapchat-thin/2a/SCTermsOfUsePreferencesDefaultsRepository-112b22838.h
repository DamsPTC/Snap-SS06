// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTermsOfUsePreferencesDefaultsRepository
// Superclass: NSObject
// Address: 0x112b22838

@interface SCTermsOfUsePreferencesDefaultsRepository

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTermsOfUsePreferencesDefaultsRepository initWithPreferences:userDefaults:grapheneRegistry:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100263cd0

// -[SCTermsOfUsePreferencesDefaultsRepository hasAcceptedTermsOfUseVersion:]
// Type encoding: B24@0:8Q16
// Implementation: 0x106c01e4c

// -[SCTermsOfUsePreferencesDefaultsRepository setHasAcceptedTermsOfUseVersion:accepted:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x106c01f74

// -[SCTermsOfUsePreferencesDefaultsRepository isUpdateingTermsOfUseVersion:]
// Type encoding: B24@0:8Q16
// Implementation: 0x106c0201c

// -[SCTermsOfUsePreferencesDefaultsRepository setIsUpdateingTermsOfUseVersion:isUpdating:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x106c02064

// -[SCTermsOfUsePreferencesDefaultsRepository resetTermsOfUseData]
// Type encoding: v16@0:8
// Implementation: 0x106c020b0

// -[SCTermsOfUsePreferencesDefaultsRepository downloadedTosHtmlString:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c020e4

// -[SCTermsOfUsePreferencesDefaultsRepository downloadedTosHtmlKeySet]
// Type encoding: @16@0:8
// Implementation: 0x106c02150

// -[SCTermsOfUsePreferencesDefaultsRepository store:htmlString:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106c02198

// -[SCTermsOfUsePreferencesDefaultsRepository latestAcceptedServerDrivenTermsOfUseVersion]
// Type encoding: i16@0:8
// Implementation: 0x106c02208

// -[SCTermsOfUsePreferencesDefaultsRepository setLatestAcceptedServerDrivenTermsOfUseVersion:]
// Type encoding: v20@0:8i16
// Implementation: 0x106c02370

// -[SCTermsOfUsePreferencesDefaultsRepository pendingUpdatingServerDrivenTermsOfUseVersion]
// Type encoding: i16@0:8
// Implementation: 0x100263e18

// -[SCTermsOfUsePreferencesDefaultsRepository setPendingUpdatingServerDrivenTermsOfUseVersion:]
// Type encoding: v20@0:8i16
// Implementation: 0x106c023f4

// -[SCTermsOfUsePreferencesDefaultsRepository complianceStatusCheckCount]
// Type encoding: i16@0:8
// Implementation: 0x106c02430

// -[SCTermsOfUsePreferencesDefaultsRepository setComplianceStatusCheckCount:]
// Type encoding: v20@0:8i16
// Implementation: 0x106c02470

// -[SCTermsOfUsePreferencesDefaultsRepository _scTosVersionToHasAcceptedDefaultsKey:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106c024ac

// -[SCTermsOfUsePreferencesDefaultsRepository _logGrapheneCounterForPreferences:accepted:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106c024b8

// -[SCTermsOfUsePreferencesDefaultsRepository _logGrapheneCounterForDefaults:accepted:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106c024cc

// -[SCTermsOfUsePreferencesDefaultsRepository _logGrapheneCounterWithSource:version:accepted:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x106c024e0

// -[SCTermsOfUsePreferencesDefaultsRepository .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106c02630

@end
