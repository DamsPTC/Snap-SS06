// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewFilterItem
// Superclass: NSObject
// Address: 0x112b90018

@interface SCPreviewFilterItem

// Property: geofilterId; attributes: T@"NSString",R,N
// Property: carouselGroup; attributes: T@"SOJUUnlockablesCarouselGroup",&,N,V_carouselGroup
// Property: filterName; attributes: T@"NSString",&,N,V_filterName
// Property: filterType; attributes: Tq,N,V_filterType
// Property: UCOFilterUIMaxZIndexEnabled; attributes: TB,N,V_UCOFilterUIMaxZIndexEnabled
// Property: displayName; attributes: T@"NSString",R,C,N,V_displayName
// Property: creationTime; attributes: T@"NSDate",R,N,V_creationTime
// Property: stackType; attributes: TQ,R,N,V_stackType
// Property: filterScore; attributes: T@"NSNumber",&,N,V_filterScore
// Property: requestId; attributes: T@"NSString",&,N,V_requestId
// Property: isFromPostCaptureLensExplorer; attributes: TB,R,N,V_isFromPostCaptureLensExplorer
// Property: isSnapchatPlusExclusive; attributes: TB,R,N,V_isSnapchatPlusExclusive
// Property: isAutoStackingFilter; attributes: TB,R,N,V_isAutoStackingFilter
// Property: isSkyFilter; attributes: TB,R,N,V_isSkyFilter
// Property: isColorFilter; attributes: TB,R,N
// Property: isPlaceholder; attributes: TB,R,N,V_isPlaceholder

// -[SCPreviewFilterItem geofilterId]
// Type encoding: @16@0:8
// Implementation: 0x107f87604

// -[SCPreviewFilterItem initWithFilterName:displayName:isFromPostCaptureLensExplorer:filterType:carouselGroup:isAutoStackingFilter:isSkyFilter:isPlaceholder:requestId:UCOFilterUIMaxZIndexEnabled:isSnapchatPlusExclusive:]
// Type encoding: @80@0:8@16@24B32q36@44B52B56B60@64B72B76
// Implementation: 0x107f8769c

// -[SCPreviewFilterItem isUnfilteredFilter]
// Type encoding: B16@0:8
// Implementation: 0x107f87abc

// -[SCPreviewFilterItem isPromptFilter]
// Type encoding: B16@0:8
// Implementation: 0x107f87ad0

// -[SCPreviewFilterItem isStackableFilter]
// Type encoding: B16@0:8
// Implementation: 0x107f87b24

// -[SCPreviewFilterItem isColorFilter]
// Type encoding: B16@0:8
// Implementation: 0x107f87b5c

// -[SCPreviewFilterItem isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x107f87c68

// -[SCPreviewFilterItem hash]
// Type encoding: Q16@0:8
// Implementation: 0x107f87da8

// -[SCPreviewFilterItem zPosition]
// Type encoding: q16@0:8
// Implementation: 0x107f87ff8

// -[SCPreviewFilterItem filterId]
// Type encoding: @16@0:8
// Implementation: 0x107f881f0

// -[SCPreviewFilterItem displayName]
// Type encoding: @16@0:8
// Implementation: 0x107f88264

// -[SCPreviewFilterItem filterName]
// Type encoding: @16@0:8
// Implementation: 0x107f8826c

// -[SCPreviewFilterItem setFilterName:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f88274

// -[SCPreviewFilterItem creationTime]
// Type encoding: @16@0:8
// Implementation: 0x107f882a4

// -[SCPreviewFilterItem filterType]
// Type encoding: q16@0:8
// Implementation: 0x107f882ac

// -[SCPreviewFilterItem setFilterType:]
// Type encoding: v24@0:8q16
// Implementation: 0x107f882b4

// -[SCPreviewFilterItem stackType]
// Type encoding: Q16@0:8
// Implementation: 0x107f882bc

// -[SCPreviewFilterItem filterScore]
// Type encoding: @16@0:8
// Implementation: 0x107f882c4

// -[SCPreviewFilterItem setFilterScore:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f882cc

// -[SCPreviewFilterItem carouselGroup]
// Type encoding: @16@0:8
// Implementation: 0x107f882fc

// -[SCPreviewFilterItem setCarouselGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f88304

// -[SCPreviewFilterItem requestId]
// Type encoding: @16@0:8
// Implementation: 0x107f88334

// -[SCPreviewFilterItem setRequestId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f8833c

// -[SCPreviewFilterItem isFromPostCaptureLensExplorer]
// Type encoding: B16@0:8
// Implementation: 0x107f8836c

// -[SCPreviewFilterItem isSnapchatPlusExclusive]
// Type encoding: B16@0:8
// Implementation: 0x107f88374

// -[SCPreviewFilterItem isAutoStackingFilter]
// Type encoding: B16@0:8
// Implementation: 0x107f8837c

// -[SCPreviewFilterItem isSkyFilter]
// Type encoding: B16@0:8
// Implementation: 0x107f88384

// -[SCPreviewFilterItem isPlaceholder]
// Type encoding: B16@0:8
// Implementation: 0x107f8838c

// -[SCPreviewFilterItem UCOFilterUIMaxZIndexEnabled]
// Type encoding: B16@0:8
// Implementation: 0x107f88394

// -[SCPreviewFilterItem setUCOFilterUIMaxZIndexEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x107f8839c

// -[SCPreviewFilterItem .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107f883a4

// +[SCPreviewFilterItem itemWithFilterName:displayName:isFromPostCaptureLensExplorer:filterType:carouselGroup:isAutoStackingFilter:isSkyFilter:requestId:UCOFilterUIMaxZIndexEnabled:isSnapchatPlusExclusive:]
// Type encoding: @76@0:8@16@24B32q36@44B52B56@60B68B72
// Implementation: 0x107f8785c

// +[SCPreviewFilterItem itemWithFilterName:displayName:isFromPostCaptureLensExplorer:filterType:carouselGroup:requestId:UCOFilterUIMaxZIndexEnabled:isSnapchatPlusExclusive:]
// Type encoding: @68@0:8@16@24B32q36@44@52B60B64
// Implementation: 0x107f8794c

// +[SCPreviewFilterItem itemForAutoStacking:]
// Type encoding: @24@0:8q16
// Implementation: 0x107f8798c

// +[SCPreviewFilterItem matchingFilterItemForName:filterType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x107f87e14

// +[SCPreviewFilterItem unfilteredItem]
// Type encoding: @16@0:8
// Implementation: 0x107f87ebc

// +[SCPreviewFilterItem placeholderItemWithFilterName:filterType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x107f87f4c

// +[SCPreviewFilterItem _stackTypeFromFilterType:carouselGroup:isAutoStackingFilter:isSkyFilter:isPlaceholder:]
// Type encoding: Q44@0:8q16@24B32B36B40
// Implementation: 0x107f8802c

@end
