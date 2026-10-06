// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRTUSConfigProviderImpl
// Superclass: NSObject
// Address: 0x112c29cb8

@interface SCRTUSConfigProviderImpl

// Property: circumstanceEngine; attributes: T@"<SCCircumstanceEngineProtocol>",&,N,V_circumstanceEngine
// Property: appStartExperimentReader; attributes: T@"<SCAppStartExperimentReaderProtocol>",&,N,V_appStartExperimentReader
// Property: listAllowlistedProducts; attributes: T@"SCLazy",&,N,V_listAllowlistedProducts
// Property: targetedProductsToConfigs; attributes: T@"SCLazy",&,N,V_targetedProductsToConfigs
// Property: payloadIdToEventConfigMap; attributes: T@"SCLazy",&,N,V_payloadIdToEventConfigMap

// -[SCRTUSConfigProviderImpl initWithCircumstanceEngine:appStartExperimentReader:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1003f6a2c

// -[SCRTUSConfigProviderImpl convertRTUSProductToString:]
// Type encoding: @24@0:8q16
// Implementation: 0x1003f8760

// -[SCRTUSConfigProviderImpl _getRTUSProductToStringMap]
// Type encoding: @16@0:8
// Implementation: 0x1003f8178

// -[SCRTUSConfigProviderImpl convertRTUSProductFrom:]
// Type encoding: q24@0:8@16
// Implementation: 0x1003f7fb8

// -[SCRTUSConfigProviderImpl _getStringToRTUSProductMap]
// Type encoding: @16@0:8
// Implementation: 0x1003f8090

// -[SCRTUSConfigProviderImpl getTeamNameFor:]
// Type encoding: @24@0:8q16
// Implementation: 0x10af62f58

// -[SCRTUSConfigProviderImpl _getRTUSProductToTeamNameMap]
// Type encoding: @16@0:8
// Implementation: 0x10af62fd4

// -[SCRTUSConfigProviderImpl isProductEnabledForRtusLaunch:]
// Type encoding: B24@0:8q16
// Implementation: 0x1007b31ac

// -[SCRTUSConfigProviderImpl _cofEnabledForProduct:]
// Type encoding: B24@0:8q16
// Implementation: 0x1007b33ec

// -[SCRTUSConfigProviderImpl _isProductFullyLaunched:]
// Type encoding: B24@0:8q16
// Implementation: 0x1007b34b0

// -[SCRTUSConfigProviderImpl _getFullyLaunchedProducts]
// Type encoding: @16@0:8
// Implementation: 0x1007b3524

// -[SCRTUSConfigProviderImpl isProductDisabledForRtusLaunch:]
// Type encoding: B24@0:8q16
// Implementation: 0x10af63140

// -[SCRTUSConfigProviderImpl getProductConfigFor:]
// Type encoding: @24@0:8q16
// Implementation: 0x1007b35d4

// -[SCRTUSConfigProviderImpl isRTUSEvent:]
// Type encoding: B24@0:8q16
// Implementation: 0x1003f7304

// -[SCRTUSConfigProviderImpl getProductsFor:]
// Type encoding: @24@0:8q16
// Implementation: 0x10af63158

// -[SCRTUSConfigProviderImpl getFieldsSetFor:eventPayloadId:]
// Type encoding: @32@0:8q16q24
// Implementation: 0x10af6320c

// -[SCRTUSConfigProviderImpl shouldAllowEventIntoCache:product:payloadId:]
// Type encoding: B40@0:8@16q24q32
// Implementation: 0x10af632ec

// -[SCRTUSConfigProviderImpl _initLazyConfigs]
// Type encoding: v16@0:8
// Implementation: 0x1003f6d28

// -[SCRTUSConfigProviderImpl _getListAllowlistedProductNamesFromCof]
// Type encoding: @16@0:8
// Implementation: 0x1003f7940

// -[SCRTUSConfigProviderImpl _logProtoDeserializationErrorWithCofName:version:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10af633a8

// -[SCRTUSConfigProviderImpl _getListValidProductsFromProductNames:]
// Type encoding: @24@0:8@16
// Implementation: 0x1003f7e58

// -[SCRTUSConfigProviderImpl _getConfigProtoValueForProductFromCof:]
// Type encoding: @24@0:8q16
// Implementation: 0x1003f8524

// -[SCRTUSConfigProviderImpl _getObjCProductConfigFromConfigProtoValue:]
// Type encoding: @24@0:8@16
// Implementation: 0x1004bfb7c

// -[SCRTUSConfigProviderImpl _getFilterParseTreeForProduct:eventPayloadId:]
// Type encoding: @32@0:8q16q24
// Implementation: 0x10af633b8

// -[SCRTUSConfigProviderImpl circumstanceEngine]
// Type encoding: @16@0:8
// Implementation: 0x10af634b4

// -[SCRTUSConfigProviderImpl setCircumstanceEngine:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af634bc

// -[SCRTUSConfigProviderImpl appStartExperimentReader]
// Type encoding: @16@0:8
// Implementation: 0x10af634ec

// -[SCRTUSConfigProviderImpl setAppStartExperimentReader:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af634f4

// -[SCRTUSConfigProviderImpl listAllowlistedProducts]
// Type encoding: @16@0:8
// Implementation: 0x1003f78a0

// -[SCRTUSConfigProviderImpl setListAllowlistedProducts:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003f6ef4

// -[SCRTUSConfigProviderImpl targetedProductsToConfigs]
// Type encoding: @16@0:8
// Implementation: 0x1003f76b8

// -[SCRTUSConfigProviderImpl setTargetedProductsToConfigs:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003f6f24

// -[SCRTUSConfigProviderImpl payloadIdToEventConfigMap]
// Type encoding: @16@0:8
// Implementation: 0x1003f73a0

// -[SCRTUSConfigProviderImpl setPayloadIdToEventConfigMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003f7010

// -[SCRTUSConfigProviderImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10af63524

@end
