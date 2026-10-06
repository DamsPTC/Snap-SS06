// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerResponseFeedModel
// Superclass: NSObject
// Address: 0x112af24f8

@interface SCLensExplorerResponseFeedModel

// Property: feedIdentifier; attributes: T@"NSString",R,C,N,V_feedIdentifier
// Property: displayName; attributes: T@"NSString",R,C,N,V_displayName
// Property: subtitleDisplayName; attributes: T@"NSString",R,C,N,V_subtitleDisplayName
// Property: categoryData; attributes: T@"SCLensExplorerResponseCategoryData",R,C,N,V_categoryData
// Property: items; attributes: T@"NSArray",R,C,N,V_items
// Property: remoteState; attributes: T@"SCLensExplorerDataStoreRemoteState",R,C,N,V_remoteState
// Property: renderStrategy; attributes: T@"SCLensExplorerFeedRenderStrategy",R,C,N,V_renderStrategy
// Property: isDefault; attributes: TB,R,N,V_isDefault
// Property: feedActivation; attributes: TQ,R,N,V_feedActivation
// Property: iconUrl; attributes: T@"NSURL",R,C,N,V_iconUrl

// -[SCLensExplorerResponseFeedModel customDebugDescription]
// Type encoding: @16@0:8
// Implementation: 0x1066c1f84

// -[SCLensExplorerResponseFeedModel cacheFeedModelWithContext:sortIndex:isDefaultFeed:]
// Type encoding: @36@0:8q16q24B32
// Implementation: 0x10669cf94

// -[SCLensExplorerResponseFeedModel persistanceIdentifierWithContext:]
// Type encoding: @24@0:8q16
// Implementation: 0x10669d15c

// -[SCLensExplorerResponseFeedModel _cacheCategoryDataFrom:]
// Type encoding: @24@0:8@16
// Implementation: 0x10669d81c

// -[SCLensExplorerResponseFeedModel _cacheSubcategoryDataFrom:]
// Type encoding: @24@0:8@16
// Implementation: 0x10669da9c

// -[SCLensExplorerResponseFeedModel _cacheRenderStrategyFrom:]
// Type encoding: @24@0:8@16
// Implementation: 0x10669db14

// -[SCLensExplorerResponseFeedModel _cacheRenderStrategyLensTileLayoutFrom:]
// Type encoding: I24@0:8Q16
// Implementation: 0x10669dc58

// -[SCLensExplorerResponseFeedModel _cacheRenderStrategyOrientationFrom:]
// Type encoding: @24@0:8@16
// Implementation: 0x10669dc70

// -[SCLensExplorerResponseFeedModel _cacheRenderStrategyContentTypeFrom:]
// Type encoding: I24@0:8Q16
// Implementation: 0x10669de54

// -[SCLensExplorerResponseFeedModel _cacheRenderStrategyScrollBehaviourFrom:]
// Type encoding: I24@0:8Q16
// Implementation: 0x10669de6c

// -[SCLensExplorerResponseFeedModel _cacheFeedActivationActionFrom:]
// Type encoding: I24@0:8Q16
// Implementation: 0x10669de78

// -[SCLensExplorerResponseFeedModel initWithFeedIdentifier:displayName:subtitleDisplayName:categoryData:items:remoteState:renderStrategy:isDefault:feedActivation:iconUrl:]
// Type encoding: @92@0:8@16@24@32@40@48@56@64B72Q76@84
// Implementation: 0x1067141f4

// -[SCLensExplorerResponseFeedModel copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x1067143d8

// -[SCLensExplorerResponseFeedModel hash]
// Type encoding: Q16@0:8
// Implementation: 0x1067143fc

// -[SCLensExplorerResponseFeedModel isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x1067144c0

// -[SCLensExplorerResponseFeedModel feedIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x106714618

// -[SCLensExplorerResponseFeedModel displayName]
// Type encoding: @16@0:8
// Implementation: 0x106714620

// -[SCLensExplorerResponseFeedModel subtitleDisplayName]
// Type encoding: @16@0:8
// Implementation: 0x106714628

// -[SCLensExplorerResponseFeedModel categoryData]
// Type encoding: @16@0:8
// Implementation: 0x106714630

// -[SCLensExplorerResponseFeedModel items]
// Type encoding: @16@0:8
// Implementation: 0x106714638

// -[SCLensExplorerResponseFeedModel remoteState]
// Type encoding: @16@0:8
// Implementation: 0x106714640

// -[SCLensExplorerResponseFeedModel renderStrategy]
// Type encoding: @16@0:8
// Implementation: 0x106714648

// -[SCLensExplorerResponseFeedModel isDefault]
// Type encoding: B16@0:8
// Implementation: 0x106714650

// -[SCLensExplorerResponseFeedModel feedActivation]
// Type encoding: Q16@0:8
// Implementation: 0x106714658

// -[SCLensExplorerResponseFeedModel iconUrl]
// Type encoding: @16@0:8
// Implementation: 0x106714660

// -[SCLensExplorerResponseFeedModel .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106714668

// +[SCLensExplorerResponseFeedModel feedModelFromContainer:feedActivationAction:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x1066c1d8c

// +[SCLensExplorerResponseFeedModel feedModelFromCache:remoteState:prefetchedFeedItems:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10669cd90

// +[SCLensExplorerResponseFeedModel _categoryDataFromCache:]
// Type encoding: @24@0:8@16
// Implementation: 0x10669d1cc

// +[SCLensExplorerResponseFeedModel _subCategoryDataFromCache:]
// Type encoding: @24@0:8@16
// Implementation: 0x10669d470

// +[SCLensExplorerResponseFeedModel _renderStrategyFromCache:]
// Type encoding: @24@0:8@16
// Implementation: 0x10669d4e8

// +[SCLensExplorerResponseFeedModel _renderStrategyLensTileLayoutFromCache:]
// Type encoding: Q20@0:8I16
// Implementation: 0x10669d630

// +[SCLensExplorerResponseFeedModel _renderStrategyOrientationFromCache:]
// Type encoding: @24@0:8@16
// Implementation: 0x10669d648

// +[SCLensExplorerResponseFeedModel _renderStrategyContentTypeFromCache:]
// Type encoding: Q20@0:8I16
// Implementation: 0x10669d7ec

// +[SCLensExplorerResponseFeedModel _renderStrategyScrollBehaviourFromCache:]
// Type encoding: Q20@0:8I16
// Implementation: 0x10669d804

// +[SCLensExplorerResponseFeedModel _activationActionFromCache:]
// Type encoding: Q20@0:8I16
// Implementation: 0x10669d810

@end
