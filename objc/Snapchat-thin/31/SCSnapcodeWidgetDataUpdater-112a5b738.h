// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapcodeWidgetDataUpdater
// Superclass: NSObject
// Address: 0x112a5b738

@interface SCSnapcodeWidgetDataUpdater

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapcodeWidgetDataUpdater initWithFileManager:homeScreenWidgetUpdater:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1056ea428

// -[SCSnapcodeWidgetDataUpdater updateSnapcodeAndBitmojiWithSnapcodeScopeExposer:userId:observeAvatarId:isResumed:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x1056ea51c

// -[SCSnapcodeWidgetDataUpdater clearStoredResourcesWhenLogoutWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1056ea5c0

// -[SCSnapcodeWidgetDataUpdater _clearStoredResourcesWhenLogoutAsyncWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1056ea6cc

// -[SCSnapcodeWidgetDataUpdater _markUserLoggedIn]
// Type encoding: v16@0:8
// Implementation: 0x1056ea730

// -[SCSnapcodeWidgetDataUpdater _createLoggedInFlagFile]
// Type encoding: v16@0:8
// Implementation: 0x1056ea804

// -[SCSnapcodeWidgetDataUpdater _updateSnapcodeWithSnapcodeScopeExposer:userId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1056ea884

// -[SCSnapcodeWidgetDataUpdater _observeAvatarId:snapcodeScopeExposer:userId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1056ea99c

// -[SCSnapcodeWidgetDataUpdater snapcodeDidLoadWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056eab04

// -[SCSnapcodeWidgetDataUpdater _storeSnapcode:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056eac74

// -[SCSnapcodeWidgetDataUpdater _convertSnapcodeFromImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056eada0

// -[SCSnapcodeWidgetDataUpdater _cacheSnapcode:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056eaec8

// -[SCSnapcodeWidgetDataUpdater _isSnapcodeCached]
// Type encoding: B16@0:8
// Implementation: 0x1056eaf68

// -[SCSnapcodeWidgetDataUpdater _createDataStorePathIfNecessary]
// Type encoding: @16@0:8
// Implementation: 0x1056eb09c

// -[SCSnapcodeWidgetDataUpdater _tryCreateUrl:data:isDirectory:]
// Type encoding: B36@0:8@16@24B32
// Implementation: 0x1056eb14c

// -[SCSnapcodeWidgetDataUpdater _notifyWidgetExtensionIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x1056eb25c

// -[SCSnapcodeWidgetDataUpdater .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056eb264

@end
