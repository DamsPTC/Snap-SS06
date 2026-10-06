// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerCategoriesLoggerFactory
// Superclass: NSObject
// Address: 0x112b146e8

@interface SCLensExplorerCategoriesLoggerFactory

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensExplorerCategoriesLoggerFactory initWithLensExplorerLogger:timeProvider:performer:blizzardLogger:networkConnectivityMonitor:grapheneRegistry:productMode:sessionIdentifier:]
// Type encoding: @80@0:8@16@24@32@40@48@56q64@72
// Implementation: 0x106aff324

// -[SCLensExplorerCategoriesLoggerFactory createPageLoggerWithCommonLoggingParameters:isLensPickerMode:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x106aff4b0

// -[SCLensExplorerCategoriesLoggerFactory createActionLoggerWithCommonLoggingParameters:layoutType:sectionPosition:]
// Type encoding: @40@0:8@16Q24@32
// Implementation: 0x106aff5a4

// -[SCLensExplorerCategoriesLoggerFactory createImpressionsLoggerWithCommonLoggingParameters:layoutType:sectionPosition:]
// Type encoding: @40@0:8@16Q24@32
// Implementation: 0x106aff6dc

// -[SCLensExplorerCategoriesLoggerFactory createImpressionsLoggerWithCommonLoggingParameters:layoutType:sectionPosition:shortImpressionEventName:longImpressionEventName:impressionTime:]
// Type encoding: @60@0:8@16Q24@32@40@48f56
// Implementation: 0x106aff86c

// -[SCLensExplorerCategoriesLoggerFactory createSessionLogger]
// Type encoding: @16@0:8
// Implementation: 0x106affa3c

// -[SCLensExplorerCategoriesLoggerFactory createPerformanceLogger]
// Type encoding: @16@0:8
// Implementation: 0x106affa70

// -[SCLensExplorerCategoriesLoggerFactory createButtonActionLogger]
// Type encoding: @16@0:8
// Implementation: 0x106affb34

// -[SCLensExplorerCategoriesLoggerFactory _impressionPerformanceLoggger]
// Type encoding: @16@0:8
// Implementation: 0x106affb6c

// -[SCLensExplorerCategoriesLoggerFactory .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106affbbc

@end
