// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTermsOfUseHtmlBackgroundFetcherJobProcessor
// Superclass: NSObject
// Address: 0x112b22658

@interface SCTermsOfUseHtmlBackgroundFetcherJobProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTermsOfUseHtmlBackgroundFetcherJobProcessor initWithRepository:tosConfigProvider:contentFetcher:logger:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106bff19c

// -[SCTermsOfUseHtmlBackgroundFetcherJobProcessor processJobWithJobConfig:input:context:onComplete:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x106bff298

// -[SCTermsOfUseHtmlBackgroundFetcherJobProcessor _fetchTOSHTMLContentsIfNeededWithOnComplete:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106bff2b4

// -[SCTermsOfUseHtmlBackgroundFetcherJobProcessor _fetchCDNFileWithUrl:tosHtmlKey:OnComplete:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106bff598

// -[SCTermsOfUseHtmlBackgroundFetcherJobProcessor _cleanUpDeprecatedHTML:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bff858

// -[SCTermsOfUseHtmlBackgroundFetcherJobProcessor _getFullCDNUrl:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bff9d4

// -[SCTermsOfUseHtmlBackgroundFetcherJobProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106bffa3c

@end
