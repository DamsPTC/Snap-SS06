// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDeepLinkMetricsEmitter
// Superclass: NSObject
// Address: 0x112b03078

@interface SCDeepLinkMetricsEmitter


// -[SCDeepLinkMetricsEmitter initWithUserLoggedIn:legacyDeepLinkProcessor:graphene:circumstanceEngine:applicationLogger:handlingId:]
// Type encoding: @60@0:8B16@20@28@36@44q52
// Implementation: 0x106882c78

// -[SCDeepLinkMetricsEmitter setFromExternal:source:referrerURL:frameworkStartURL:emitFrameworkStartMetric:]
// Type encoding: v48@0:8B16q20@28@36B44
// Implementation: 0x106882e04

// -[SCDeepLinkMetricsEmitter setCompleteURL:linkId:referrer:shareId:feature:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x106882f38

// -[SCDeepLinkMetricsEmitter setUsedLegacyProcessor:]
// Type encoding: v20@0:8B16
// Implementation: 0x106883030

// -[SCDeepLinkMetricsEmitter logFeatureHandlerCompletionWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x106883038

// -[SCDeepLinkMetricsEmitter logFinalOutcomeOnDestinationPageWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x106883044

// -[SCDeepLinkMetricsEmitter logDeepLinkFrameworkOutcomeWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x106883050

// -[SCDeepLinkMetricsEmitter deeplinkHandlingId]
// Type encoding: q16@0:8
// Implementation: 0x106883094

// -[SCDeepLinkMetricsEmitter _redactedURLStringForURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x10688309c

// -[SCDeepLinkMetricsEmitter _reportMetricForStage:error:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1068833f8

// -[SCDeepLinkMetricsEmitter _handlingResolutionFromError:]
// Type encoding: q24@0:8@16
// Implementation: 0x1068836c4

// -[SCDeepLinkMetricsEmitter _addDeepLinkInfoToAAOEvent]
// Type encoding: v16@0:8
// Implementation: 0x10688384c

// -[SCDeepLinkMetricsEmitter _shortLinkURLToLog]
// Type encoding: @16@0:8
// Implementation: 0x106883a7c

// -[SCDeepLinkMetricsEmitter _shouldLogDeepLinkLifecycleMetrics]
// Type encoding: B16@0:8
// Implementation: 0x106883abc

// -[SCDeepLinkMetricsEmitter _deepLinkFeature]
// Type encoding: Q16@0:8
// Implementation: 0x106883bbc

// -[SCDeepLinkMetricsEmitter _uploadGrapheneDeepLinkMetricsForDeepLinkSource:appState:launchSource:isFromExternal:usedLegacyProcessor:handlingResolution:]
// Type encoding: v56@0:8q16q24q32B40B44q48
// Implementation: 0x106883e18

// -[SCDeepLinkMetricsEmitter _grapheneResultValueFromHandlingResolution:]
// Type encoding: @24@0:8q16
// Implementation: 0x1068840fc

// -[SCDeepLinkMetricsEmitter _stringFromHandlingStage:]
// Type encoding: @24@0:8q16
// Implementation: 0x106884124

// -[SCDeepLinkMetricsEmitter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10688414c

@end
