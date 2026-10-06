// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDeepLinkManager
// Superclass: NSObject
// Address: 0x112b03028

@interface SCDeepLinkManager


// -[SCDeepLinkManager initWithNavigationDelegate:processorPlugins:urlTransformerPlugins:userLoggedIn:shortLinkDecodingService:grapheneRegistry:legacyDeepLinkProcessor:metricsEmitter:circumstanceEngine:systemNetworkServices:nativeDeepLinkResolver:]
// Type encoding: @100@0:8@16@24@32B40@44@52@60@68@76@84@92
// Implementation: 0x10687fef0

// -[SCDeepLinkManager handleOpenURL:sourceApplication:additionalInfo:fromExternal:source:callbackDelegate:]
// Type encoding: v60@0:8@16@24@32B40q44@52
// Implementation: 0x10688012c

// -[SCDeepLinkManager _handleDecodingCompletionForDecodedURL:decodingError:originalURL:sourceApplication:additionalInfo:fromExternal:source:]
// Type encoding: v68@0:8@16@24@32@40@48B56q60
// Implementation: 0x106880370

// -[SCDeepLinkManager _transformDeepLinkURLAndSetupMetrics:sourceApplication:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106880554

// -[SCDeepLinkManager _handleDecodedURL:originalURL:sourceApplication:additionalInfo:fromExternal:source:isRetry:]
// Type encoding: v64@0:8@16@24@32@40B48q52B60
// Implementation: 0x1068806ac

// -[SCDeepLinkManager _handleDecodedURL_NewFlow:originalURL:sourceApplication:additionalInfo:fromExternal:source:isRetry:]
// Type encoding: v64@0:8@16@24@32@40B48q52B60
// Implementation: 0x1068806b8

// -[SCDeepLinkManager _handleDecodedURL_OriginalFlow:originalURL:sourceApplication:additionalInfo:fromExternal:source:isRetry:]
// Type encoding: v64@0:8@16@24@32@40B48q52B60
// Implementation: 0x106880c48

// -[SCDeepLinkManager _deepLinkProcessForDeepLinkURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068813fc

// -[SCDeepLinkManager _plugin_processor_handleDeepLinkURL:additionalInfo:fromExternal:source:pluginProcessor:]
// Type encoding: v52@0:8@16@24B32q36@44
// Implementation: 0x10688148c

// -[SCDeepLinkManager _plugin_processor_handleResolutionResult:additionalInfo:fromExternal:source:pluginProcessor:]
// Type encoding: v52@0:8@16@24B32q36@44
// Implementation: 0x106881650

// -[SCDeepLinkManager _alertErrorWithTitle:image:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1068817e0

// -[SCDeepLinkManager _processorPluginsForFeature:]
// Type encoding: @24@0:8@16
// Implementation: 0x106881a3c

// -[SCDeepLinkManager _firstValidPluginAmong:forDeepLinkURL:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106881ba0

// -[SCDeepLinkManager _deepLinkProcessorPluginForDeepLinkURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x106881cdc

// -[SCDeepLinkManager isValidInternalDeepLinkURL:]
// Type encoding: B24@0:8@16
// Implementation: 0x106881d70

// -[SCDeepLinkManager _hasValidDynamicResolutionRuleForURL:]
// Type encoding: B24@0:8@16
// Implementation: 0x106881e54

// -[SCDeepLinkManager _hasValidDeepLinkProcessorForURL:isLegacyProcessor:]
// Type encoding: B32@0:8@16^B24
// Implementation: 0x106881ed0

// -[SCDeepLinkManager _applyTransformationsForUrl:]
// Type encoding: @24@0:8@16
// Implementation: 0x106881fb0

// -[SCDeepLinkManager _deepLinkTransformerPluginForUrl:]
// Type encoding: @24@0:8@16
// Implementation: 0x10688203c

// -[SCDeepLinkManager _emitDeepLinkValidityGrapheneMetricWithSuccess:isLegacyProcessor:deepLinkURL:]
// Type encoding: v32@0:8B16B20@24
// Implementation: 0x1068821bc

// -[SCDeepLinkManager _handleInvalidLinkURL:originalUrl:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10688235c

// -[SCDeepLinkManager _alertInvalidLinkURLInternal:originalUrl:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1068828ec

// -[SCDeepLinkManager _dynamicResolution_processURL:sourceApplication:additionalInfo:fromExternal:source:isRetry:]
// Type encoding: @56@0:8@16@24@32B40q44B52
// Implementation: 0x106882a60

// -[SCDeepLinkManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106882b5c

@end
