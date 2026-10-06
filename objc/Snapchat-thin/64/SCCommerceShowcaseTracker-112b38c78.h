// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommerceShowcaseTracker
// Superclass: NSObject
// Address: 0x112b38c78

@interface SCCommerceShowcaseTracker

// Property: grapheneLogger; attributes: T@"SCCommerceGrapheneLogger",&,N,V_grapheneLogger
// Property: historyTracker; attributes: T@"<SCCommerceShowcaseInteractionHistoryTracking>",W,N,V_historyTracker
// Property: eventLogger; attributes: T@"<SCCommerceEventLogger>",W,N,V_eventLogger
// Property: productInteractions; attributes: T@"NSMutableArray",&,N,V_productInteractions
// Property: lastViewOpenDate; attributes: T@"NSDate",&,N,V_lastViewOpenDate
// Property: productsViewed; attributes: TQ,N,V_productsViewed
// Property: catalogTimeSpent; attributes: Td,N,V_catalogTimeSpent
// Property: webviewTimeSpent; attributes: Td,N,V_webviewTimeSpent
// Property: storeTimeSpent; attributes: Td,N,V_storeTimeSpent
// Property: activeView; attributes: Tq,N,V_activeView
// Property: viewOnDismissal; attributes: Tq,N,V_viewOnDismissal

// -[SCCommerceShowcaseTracker initWithShowcaseInteractionHistoryTracker:grapheneRegistry:eventLogger:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106d79c68

// -[SCCommerceShowcaseTracker addProductCellTapped:column:index:productId:commerceOrigin:]
// Type encoding: v56@0:8q16q24q32@40@48
// Implementation: 0x106d79d3c

// -[SCCommerceShowcaseTracker shopButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x106d79e44

// -[SCCommerceShowcaseTracker calloutBarTapped]
// Type encoding: v16@0:8
// Implementation: 0x106d79e80

// -[SCCommerceShowcaseTracker updateProductsViewed:]
// Type encoding: v24@0:8q16
// Implementation: 0x106d79ebc

// -[SCCommerceShowcaseTracker productWebviewOpened]
// Type encoding: v16@0:8
// Implementation: 0x106d79ee0

// -[SCCommerceShowcaseTracker storeWebviewOpenedWithSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d79ee8

// -[SCCommerceShowcaseTracker catalogViewOpened]
// Type encoding: v16@0:8
// Implementation: 0x106d79f60

// -[SCCommerceShowcaseTracker showcasePresented]
// Type encoding: v16@0:8
// Implementation: 0x106d79f68

// -[SCCommerceShowcaseTracker showcaseDismissed]
// Type encoding: v16@0:8
// Implementation: 0x106d79ff4

// -[SCCommerceShowcaseTracker _updateForNewActiveView:]
// Type encoding: v24@0:8q16
// Implementation: 0x106d7a028

// -[SCCommerceShowcaseTracker _blizzardPageForView:]
// Type encoding: q24@0:8q16
// Implementation: 0x106d7a244

// -[SCCommerceShowcaseTracker _updateShowcaseInteractionHistory]
// Type encoding: v16@0:8
// Implementation: 0x106d7a268

// -[SCCommerceShowcaseTracker resetTracker]
// Type encoding: v16@0:8
// Implementation: 0x106d7a338

// -[SCCommerceShowcaseTracker productsViewedWithMaxScrolled:metricType:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x106d7a3a0

// -[SCCommerceShowcaseTracker showcaseWebviewTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x106d7a400

// -[SCCommerceShowcaseTracker showcaseOverallSessionTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x106d7a44c

// -[SCCommerceShowcaseTracker grapheneLogger]
// Type encoding: @16@0:8
// Implementation: 0x106d7a498

// -[SCCommerceShowcaseTracker setGrapheneLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d7a4a0

// -[SCCommerceShowcaseTracker historyTracker]
// Type encoding: @16@0:8
// Implementation: 0x106d7a4d0

// -[SCCommerceShowcaseTracker setHistoryTracker:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d7a4e8

// -[SCCommerceShowcaseTracker eventLogger]
// Type encoding: @16@0:8
// Implementation: 0x106d7a4f4

// -[SCCommerceShowcaseTracker setEventLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d7a50c

// -[SCCommerceShowcaseTracker productInteractions]
// Type encoding: @16@0:8
// Implementation: 0x106d7a518

// -[SCCommerceShowcaseTracker setProductInteractions:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d7a520

// -[SCCommerceShowcaseTracker lastViewOpenDate]
// Type encoding: @16@0:8
// Implementation: 0x106d7a550

// -[SCCommerceShowcaseTracker setLastViewOpenDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d7a558

// -[SCCommerceShowcaseTracker productsViewed]
// Type encoding: Q16@0:8
// Implementation: 0x106d7a588

// -[SCCommerceShowcaseTracker setProductsViewed:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106d7a590

// -[SCCommerceShowcaseTracker catalogTimeSpent]
// Type encoding: d16@0:8
// Implementation: 0x106d7a598

// -[SCCommerceShowcaseTracker setCatalogTimeSpent:]
// Type encoding: v24@0:8d16
// Implementation: 0x106d7a5a0

// -[SCCommerceShowcaseTracker webviewTimeSpent]
// Type encoding: d16@0:8
// Implementation: 0x106d7a5a8

// -[SCCommerceShowcaseTracker setWebviewTimeSpent:]
// Type encoding: v24@0:8d16
// Implementation: 0x106d7a5b0

// -[SCCommerceShowcaseTracker storeTimeSpent]
// Type encoding: d16@0:8
// Implementation: 0x106d7a5b8

// -[SCCommerceShowcaseTracker setStoreTimeSpent:]
// Type encoding: v24@0:8d16
// Implementation: 0x106d7a5c0

// -[SCCommerceShowcaseTracker activeView]
// Type encoding: q16@0:8
// Implementation: 0x106d7a5c8

// -[SCCommerceShowcaseTracker setActiveView:]
// Type encoding: v24@0:8q16
// Implementation: 0x106d7a5d0

// -[SCCommerceShowcaseTracker viewOnDismissal]
// Type encoding: q16@0:8
// Implementation: 0x106d7a5d8

// -[SCCommerceShowcaseTracker setViewOnDismissal:]
// Type encoding: v24@0:8q16
// Implementation: 0x106d7a5e0

// -[SCCommerceShowcaseTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106d7a5e8

@end
