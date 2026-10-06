// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoryManagementSnapViewersSectionCoordinator
// Superclass: NSObject
// Address: 0x112b6a4f8

@interface SCStoryManagementSnapViewersSectionCoordinator

// Property: dataModel; attributes: T@"SCStoryManagementSnapDataModel",&,N,V_dataModel
// Property: isLoading; attributes: TB,R,N,V_isLoading
// Property: currentQuery; attributes: T@"SCSearchQuery",C,N,V_currentQuery
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoryManagementSnapViewersSectionCoordinator initWithPublicationId:storyType:userId:storyPrivacySettingObservable:customStoriesDataFetching:circumstanceEngine:]
// Type encoding: @64@0:8@16q24@32@40@48@56
// Implementation: 0x107a24f94

// -[SCStoryManagementSnapViewersSectionCoordinator _onStoryPrivacy:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a25218

// -[SCStoryManagementSnapViewersSectionCoordinator canPerformQuery:]
// Type encoding: B24@0:8@16
// Implementation: 0x107a25240

// -[SCStoryManagementSnapViewersSectionCoordinator resultsForQuery:updatingBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107a25248

// -[SCStoryManagementSnapViewersSectionCoordinator _updateSectionHeaderWithAccessoryViewModel:query:updatingBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107a25258

// -[SCStoryManagementSnapViewersSectionCoordinator currentQuery]
// Type encoding: @16@0:8
// Implementation: 0x107a258e8

// -[SCStoryManagementSnapViewersSectionCoordinator setCurrentQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a258f0

// -[SCStoryManagementSnapViewersSectionCoordinator isLoading]
// Type encoding: B16@0:8
// Implementation: 0x107a258f8

// -[SCStoryManagementSnapViewersSectionCoordinator dataModel]
// Type encoding: @16@0:8
// Implementation: 0x107a25900

// -[SCStoryManagementSnapViewersSectionCoordinator setDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a25908

// -[SCStoryManagementSnapViewersSectionCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107a25938

@end
