// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBlizzardPageViewStateManager
// Superclass: NSObject
// Address: 0x112b12528

@interface SCBlizzardPageViewStateManager

// Property: currentPageViewState; attributes: T@"SCBlizzardPageViewState",&,N,V_currentPageViewState
// Property: experimentProvider; attributes: T@"SCBlizzardExperimentProvider",&,N,V_experimentProvider
// Property: cachedPageViewStates; attributes: T@"NSMutableArray",&,N,V_cachedPageViewStates

// -[SCBlizzardPageViewStateManager initWithGraphene:experimentProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1002d1814

// -[SCBlizzardPageViewStateManager attributeEventToTabSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003ea0e0

// -[SCBlizzardPageViewStateManager _maybeUpdatePageViewStateWithPagePageView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008eebcc

// -[SCBlizzardPageViewStateManager _updatePageViewStateWithPageName:pageChangeTs:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x1008ef010

// -[SCBlizzardPageViewStateManager _augmentTabInfoWithoutTabCorrection:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003ea2dc

// -[SCBlizzardPageViewStateManager _augmentTabInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003ea184

// -[SCBlizzardPageViewStateManager _findNearestPageViewStateForActionTs:]
// Type encoding: @24@0:8d16
// Implementation: 0x106ae3454

// -[SCBlizzardPageViewStateManager _hasTabChanged:stack:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1008eef84

// -[SCBlizzardPageViewStateManager _getPageTabTypeFromPageName:]
// Type encoding: q24@0:8@16
// Implementation: 0x1008ef644

// -[SCBlizzardPageViewStateManager currentPageViewState]
// Type encoding: @16@0:8
// Implementation: 0x106ae3598

// -[SCBlizzardPageViewStateManager setCurrentPageViewState:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ae35a0

// -[SCBlizzardPageViewStateManager experimentProvider]
// Type encoding: @16@0:8
// Implementation: 0x106ae35d0

// -[SCBlizzardPageViewStateManager setExperimentProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ae35d8

// -[SCBlizzardPageViewStateManager cachedPageViewStates]
// Type encoding: @16@0:8
// Implementation: 0x106ae3608

// -[SCBlizzardPageViewStateManager setCachedPageViewStates:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ae3610

// -[SCBlizzardPageViewStateManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ae3640

@end
