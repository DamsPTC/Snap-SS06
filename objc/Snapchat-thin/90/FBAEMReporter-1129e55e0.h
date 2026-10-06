// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBAEMReporter
// Superclass: NSObject
// Address: 0x1129e55e0

@interface FBAEMReporter


// -[FBAEMReporter init]
// Type encoding: @16@0:8
// Implementation: 0x10492f05c

// -[FBAEMReporter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10492f0cc

// +[FBAEMReporter networker]
// Type encoding: @16@0:8
// Implementation: 0x104927ee8

// +[FBAEMReporter setNetworker:]
// Type encoding: v24@0:8@16
// Implementation: 0x104927f00

// +[FBAEMReporter appID]
// Type encoding: @16@0:8
// Implementation: 0x104927f68

// +[FBAEMReporter setAppID:]
// Type encoding: v24@0:8@16
// Implementation: 0x104927f88

// +[FBAEMReporter nullAppID]
// Type encoding: @16@0:8
// Implementation: 0x104927ff8

// +[FBAEMReporter analyticsAppID]
// Type encoding: @16@0:8
// Implementation: 0x104928038

// +[FBAEMReporter setAnalyticsAppID:]
// Type encoding: v24@0:8@16
// Implementation: 0x104928058

// +[FBAEMReporter reporter]
// Type encoding: @16@0:8
// Implementation: 0x1049280c0

// +[FBAEMReporter setReporter:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049280d8

// +[FBAEMReporter dataStore]
// Type encoding: @16@0:8
// Implementation: 0x104928178

// +[FBAEMReporter setDataStore:]
// Type encoding: v24@0:8@16
// Implementation: 0x104928218

// +[FBAEMReporter isAEMReportEnabled]
// Type encoding: B16@0:8
// Implementation: 0x104928368

// +[FBAEMReporter setIsAEMReportEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1049283ec

// +[FBAEMReporter isLoadingConfiguration]
// Type encoding: B16@0:8
// Implementation: 0x1049284bc

// +[FBAEMReporter setIsLoadingConfiguration:]
// Type encoding: v20@0:8B16
// Implementation: 0x104928540

// +[FBAEMReporter isConversionFilteringEnabled]
// Type encoding: B16@0:8
// Implementation: 0x104928610

// +[FBAEMReporter setIsConversionFilteringEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x104934d78

// +[FBAEMReporter isCatalogMatchingEnabled]
// Type encoding: B16@0:8
// Implementation: 0x104928720

// +[FBAEMReporter setIsCatalogMatchingEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x104934d80

// +[FBAEMReporter isAdvertiserRuleMatchInServerEnabled]
// Type encoding: B16@0:8
// Implementation: 0x104928830

// +[FBAEMReporter setIsAdvertiserRuleMatchInServerEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x104934d88

// +[FBAEMReporter serialQueue]
// Type encoding: @16@0:8
// Implementation: 0x104928b4c

// +[FBAEMReporter setSerialQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x104928c2c

// +[FBAEMReporter reportFile]
// Type encoding: @16@0:8
// Implementation: 0x104928e6c

// +[FBAEMReporter setReportFile:]
// Type encoding: v24@0:8@16
// Implementation: 0x104928f5c

// +[FBAEMReporter configurations]
// Type encoding: @16@0:8
// Implementation: 0x10492912c

// +[FBAEMReporter setConfigurations:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049291f0

// +[FBAEMReporter invocations]
// Type encoding: @16@0:8
// Implementation: 0x10492936c

// +[FBAEMReporter setInvocations:]
// Type encoding: v24@0:8@16
// Implementation: 0x10492941c

// +[FBAEMReporter configRefreshTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x104929558

// +[FBAEMReporter setConfigRefreshTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x104929590

// +[FBAEMReporter minAggregationRequestTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x104929798

// +[FBAEMReporter setMinAggregationRequestTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x104929970

// +[FBAEMReporter configureWithNetworker:appID:reporter:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104929ec4

// +[FBAEMReporter configureWithNetworker:appID:reporter:analyticsAppID:store:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x104929f48

// +[FBAEMReporter enable]
// Type encoding: v16@0:8
// Implementation: 0x10492a060

// +[FBAEMReporter setConversionFilteringEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x104934d74

// +[FBAEMReporter setCatalogMatchingEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x104934d7c

// +[FBAEMReporter setAdvertiserRuleMatchInServerEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x104934d84

// +[FBAEMReporter handle:]
// Type encoding: v24@0:8@16
// Implementation: 0x10492a85c

// +[FBAEMReporter parseURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x10492a994

// +[FBAEMReporter recordAndUpdateEvent:currency:value:parameters:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10492b8b0

// +[FBAEMReporter attributedInvocation:event:currency:value:parameters:configurations:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10492c3fc

// +[FBAEMReporter isDoubleCounting:event:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10492c554

// +[FBAEMReporter loadConfigurationWithRefreshForced:block:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x10492cd98

// +[FBAEMReporter loadCatalogOptimizationWith:contentID:block:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10492d1b4

// +[FBAEMReporter loadRuleMatch:event:currency:value:parameters:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x10492dcd0

// +[FBAEMReporter shouldReportConversionInCatalogLevel:event:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10492dde8

// +[FBAEMReporter isContentOptimized:]
// Type encoding: B24@0:8@16
// Implementation: 0x10492de5c

// +[FBAEMReporter requestParameters]
// Type encoding: @16@0:8
// Implementation: 0x10492dec8

// +[FBAEMReporter catalogRequestParameters:contentID:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10492e1d8

// +[FBAEMReporter ruleMatchRequestParameters:content:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10492e290

// +[FBAEMReporter isConfigRefreshTimestampValid]
// Type encoding: B16@0:8
// Implementation: 0x10492e340

// +[FBAEMReporter shouldRefreshWithIsForced:]
// Type encoding: B20@0:8B16
// Implementation: 0x10492e358

// +[FBAEMReporter shouldDelayAggregationRequest]
// Type encoding: B16@0:8
// Implementation: 0x10492e378

// +[FBAEMReporter sendDebuggingRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10492e49c

// +[FBAEMReporter debuggingRequestParameters:]
// Type encoding: @24@0:8@16
// Implementation: 0x10492e4c8

// +[FBAEMReporter loadMinAggregationRequestTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x10492e638

// +[FBAEMReporter updateAggregationRequestTimestamp:]
// Type encoding: v24@0:8d16
// Implementation: 0x10492e6e0

// +[FBAEMReporter loadConfigurations]
// Type encoding: @16@0:8
// Implementation: 0x10492e720

// +[FBAEMReporter addConfigurations:]
// Type encoding: v24@0:8@16
// Implementation: 0x10492e790

// +[FBAEMReporter loadReportData]
// Type encoding: @16@0:8
// Implementation: 0x10492e7d4

// +[FBAEMReporter saveReportData]
// Type encoding: v16@0:8
// Implementation: 0x10492e818

// +[FBAEMReporter sendAggregationRequest]
// Type encoding: v16@0:8
// Implementation: 0x10492ef3c

// +[FBAEMReporter aggregationRequestParameters:]
// Type encoding: @24@0:8@16
// Implementation: 0x10492ef60

// +[FBAEMReporter clearCache]
// Type encoding: v16@0:8
// Implementation: 0x10492eff0

// +[FBAEMReporter clearConfigurations]
// Type encoding: v16@0:8
// Implementation: 0x10492f004

@end
