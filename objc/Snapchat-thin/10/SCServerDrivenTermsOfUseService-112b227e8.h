// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCServerDrivenTermsOfUseService
// Superclass: NSObject
// Address: 0x112b227e8

@interface SCServerDrivenTermsOfUseService

// Property: cachedTOSHtmlString; attributes: T@"NSString",&,V_cachedTOSHtmlString
// Property: currentShowingTosMetadata; attributes: T@"SCActivationPbTosMetadata",&,V_currentShowingTosMetadata
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCServerDrivenTermsOfUseService initWithRepository:featureSettingsService:grpcService:grapheneRegistry:logger:tosConfigProvider:latestAcceptedTOSVersionProvider:deferAcceptedVersionSync:complianceCheckCountPerformer:]
// Type encoding: @84@0:8@16@24@32@40@48@56@64B72@76
// Implementation: 0x100262c58

// -[SCServerDrivenTermsOfUseService acceptTermsOfUse:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c00a50

// -[SCServerDrivenTermsOfUseService acceptRemindMeLaterTermsOfUse:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c00b2c

// -[SCServerDrivenTermsOfUseService tosPromptType]
// Type encoding: Q16@0:8
// Implementation: 0x106c00ba4

// -[SCServerDrivenTermsOfUseService latestTosMetaData]
// Type encoding: @16@0:8
// Implementation: 0x106c00bf0

// -[SCServerDrivenTermsOfUseService shouldPromptTermsOfUseOnSurface:]
// Type encoding: B20@0:8i16
// Implementation: 0x1002639b4

// -[SCServerDrivenTermsOfUseService updateTermsOfUseWithUserSessionContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x100262e38

// -[SCServerDrivenTermsOfUseService setServerDrivenTosPromptDidShow:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c00bf4

// -[SCServerDrivenTermsOfUseService latestTermsOfUseVersion]
// Type encoding: @16@0:8
// Implementation: 0x106c00c54

// -[SCServerDrivenTermsOfUseService _updateCheckCountAndLogComplianceStatus:countAction:isCompliant:tosAvailable:tosVersion:]
// Type encoding: v40@0:8i16q20B28B32i36
// Implementation: 0x106c00c60

// -[SCServerDrivenTermsOfUseService _isValidHTMLString:]
// Type encoding: B24@0:8@16
// Implementation: 0x106c00d70

// -[SCServerDrivenTermsOfUseService _complianceRequirementToTosPromptType:]
// Type encoding: Q20@0:8i16
// Implementation: 0x106c00dd8

// -[SCServerDrivenTermsOfUseService _cachedTOSHtmlString:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c00df0

// -[SCServerDrivenTermsOfUseService _saveTOSHTMLContentFromLoginIfNeeded:locale:htmlString:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106c00e74

// -[SCServerDrivenTermsOfUseService _updateServerDrivenTermsOfUseWithUserSessionContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x100262e3c

// -[SCServerDrivenTermsOfUseService _metaData:allowsPromptSurface:]
// Type encoding: B28@0:8@16i24
// Implementation: 0x100266978

// -[SCServerDrivenTermsOfUseService _latestActiveTOSVersionData]
// Type encoding: @16@0:8
// Implementation: 0x100263b74

// -[SCServerDrivenTermsOfUseService _notAcceptedTOSVersionData:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c01198

// -[SCServerDrivenTermsOfUseService _hasAckedTermsOfUseVersion:]
// Type encoding: B20@0:8i16
// Implementation: 0x106c01244

// -[SCServerDrivenTermsOfUseService _resetAckedTermsOfUseFromSUP]
// Type encoding: v16@0:8
// Implementation: 0x106c01294

// -[SCServerDrivenTermsOfUseService _resetAcceptedTermsOfUse]
// Type encoding: v16@0:8
// Implementation: 0x106c012cc

// -[SCServerDrivenTermsOfUseService _updateAcceptedTermsOfUseVersion:]
// Type encoding: v20@0:8i16
// Implementation: 0x106c01304

// -[SCServerDrivenTermsOfUseService _updateAcceptedTermsOfUseVersionViaAtlasGW:successBlock:]
// Type encoding: v28@0:8i16@?20
// Implementation: 0x106c01418

// -[SCServerDrivenTermsOfUseService _updateAckedTermsOfUseVersion:]
// Type encoding: v20@0:8i16
// Implementation: 0x106c0168c

// -[SCServerDrivenTermsOfUseService cachedTOSHtmlString]
// Type encoding: @16@0:8
// Implementation: 0x106c016c8

// -[SCServerDrivenTermsOfUseService setCachedTOSHtmlString:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c016d4

// -[SCServerDrivenTermsOfUseService currentShowingTosMetadata]
// Type encoding: @16@0:8
// Implementation: 0x106c016dc

// -[SCServerDrivenTermsOfUseService setCurrentShowingTosMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c016e8

// -[SCServerDrivenTermsOfUseService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106c016f0

@end
