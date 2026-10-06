// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCaptionStyleResourceProviderImpl
// Superclass: NSObject
// Address: 0x112bc3a08

@interface SCCaptionStyleResourceProviderImpl

// Property: delegate; attributes: T@"<SCCaptionResourceProviderDelegate>",W,N,V_delegate
// Property: availableCaptionStyles; attributes: T@"NSArray",&,N,V_availableCaptionStyles
// Property: currentControllerVersion; attributes: Td,V_currentControllerVersion

// -[SCCaptionStyleResourceProviderImpl initWithPreferences:sessionRequestManager:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108e1f9d4

// -[SCCaptionStyleResourceProviderImpl indexOfStyleInAvailableArray:]
// Type encoding: Q24@0:8@16
// Implementation: 0x108e1fd30

// -[SCCaptionStyleResourceProviderImpl _prepareCaptionStyle:completeBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108e1fe40

// -[SCCaptionStyleResourceProviderImpl _registerFont:collectorBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108e2014c

// -[SCCaptionStyleResourceProviderImpl loadDependencyOfCaptionStyles:completeBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108e20834

// -[SCCaptionStyleResourceProviderImpl _updateAvailableCaptionStylesIfNecessary:controllerVersion:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x108e20a78

// -[SCCaptionStyleResourceProviderImpl defaultCaptionStyles]
// Type encoding: @16@0:8
// Implementation: 0x108e21150

// -[SCCaptionStyleResourceProviderImpl countOfDefaultStyle]
// Type encoding: q16@0:8
// Implementation: 0x108e211f4

// -[SCCaptionStyleResourceProviderImpl _isCaptionStyleResourceTTLExpired]
// Type encoding: B16@0:8
// Implementation: 0x108e21230

// -[SCCaptionStyleResourceProviderImpl _updateLastCheckingTimestamp]
// Type encoding: v16@0:8
// Implementation: 0x108e2129c

// -[SCCaptionStyleResourceProviderImpl _fetchOnDemandTypefaceWithURLString:completeBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108e21308

// -[SCCaptionStyleResourceProviderImpl _cacheFontFile:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108e21764

// -[SCCaptionStyleResourceProviderImpl initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e21788

// -[SCCaptionStyleResourceProviderImpl encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e21904

// -[SCCaptionStyleResourceProviderImpl resetDownloader]
// Type encoding: v16@0:8
// Implementation: 0x108e2198c

// -[SCCaptionStyleResourceProviderImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x108e219f4

// -[SCCaptionStyleResourceProviderImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e21a0c

// -[SCCaptionStyleResourceProviderImpl availableCaptionStyles]
// Type encoding: @16@0:8
// Implementation: 0x108e21a18

// -[SCCaptionStyleResourceProviderImpl setAvailableCaptionStyles:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e21a20

// -[SCCaptionStyleResourceProviderImpl currentControllerVersion]
// Type encoding: d16@0:8
// Implementation: 0x108e21a50

// -[SCCaptionStyleResourceProviderImpl setCurrentControllerVersion:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e21a58

// -[SCCaptionStyleResourceProviderImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e21a60

@end
