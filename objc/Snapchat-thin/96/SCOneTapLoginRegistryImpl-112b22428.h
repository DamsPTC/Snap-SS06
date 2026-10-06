// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOneTapLoginRegistryImpl
// Superclass: NSObject
// Address: 0x112b22428

@interface SCOneTapLoginRegistryImpl

// Property: oneTapLoginRepository; attributes: T@"<SCOneTapLoginRepository>",&,N

// -[SCOneTapLoginRegistryImpl initWithUserId:preferences:usernameProvider:multiAccountRepositories:bitmojiFetcher:refreshTokenUpdates:cloud1TLTokenUpdates:snapTokenManager:userTrackedLogger:experimentHelper:maxAccountCount:]
// Type encoding: @100@0:8@16@24@32@40@48@56@64@72@80@88i96
// Implementation: 0x106bfc000

// -[SCOneTapLoginRegistryImpl startObservingIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106bfc25c

// -[SCOneTapLoginRegistryImpl startObservingAfterLogInIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106bfc264

// -[SCOneTapLoginRegistryImpl stopObserving]
// Type encoding: v16@0:8
// Implementation: 0x106bfc26c

// -[SCOneTapLoginRegistryImpl oneTapLoginRepository]
// Type encoding: @16@0:8
// Implementation: 0x106bfc274

// -[SCOneTapLoginRegistryImpl setOneTapLoginRepository:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bfc2b0

// -[SCOneTapLoginRegistryImpl isCurrentUserExplicitlyOptedIn]
// Type encoding: B16@0:8
// Implementation: 0x106bfc2f0

// -[SCOneTapLoginRegistryImpl optOutCurrentUser:]
// Type encoding: v24@0:8q16
// Implementation: 0x106bfc338

// -[SCOneTapLoginRegistryImpl optInCurrentUserWithConfirmedOverwrite:optInSource:]
// Type encoding: @28@0:8B16q20
// Implementation: 0x106bfc3b4

// -[SCOneTapLoginRegistryImpl fetchAndPersistBitmojiIfNecessary:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106bfc558

// -[SCOneTapLoginRegistryImpl ensureV3TokenPersisted]
// Type encoding: @16@0:8
// Implementation: 0x106bfc610

// -[SCOneTapLoginRegistryImpl _initializeLastLoginTimestampIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106bfc77c

// -[SCOneTapLoginRegistryImpl _persistOneTapInKeychainIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106bfc880

// -[SCOneTapLoginRegistryImpl _clearOneTapLoginFromKeychainIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106bfc904

// -[SCOneTapLoginRegistryImpl _startObservingIfNecessary:]
// Type encoding: v20@0:8B16
// Implementation: 0x106bfc978

// -[SCOneTapLoginRegistryImpl _beginObserving]
// Type encoding: v16@0:8
// Implementation: 0x106bfca18

// -[SCOneTapLoginRegistryImpl _persistToken:cloudToken:username:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106bfcd64

// -[SCOneTapLoginRegistryImpl _persistOneTapInCloudKeychainIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106bfcfb4

// -[SCOneTapLoginRegistryImpl _getRefreshTokenCallback:refreshToken:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106bfd060

// -[SCOneTapLoginRegistryImpl _emitRefreshEventIfNecessary:]
// Type encoding: v20@0:8B16
// Implementation: 0x106bfd174

// -[SCOneTapLoginRegistryImpl _logBlizzardEvent:action:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x106bfd2e0

// -[SCOneTapLoginRegistryImpl _passBasicPersistenceEligibility]
// Type encoding: B16@0:8
// Implementation: 0x106bfd364

// -[SCOneTapLoginRegistryImpl _satisfyTenuredThreshold]
// Type encoding: B16@0:8
// Implementation: 0x106bfd3c0

// -[SCOneTapLoginRegistryImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106bfd4ac

@end
