// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerContainerItem
// Superclass: NSObject
// Address: 0x112c45418

@interface SCLensExplorerContainerItem

// Property: containerId; attributes: T@"NSString",R,C,N,V_containerId
// Property: name; attributes: T@"NSString",R,C,N,V_name
// Property: containerDescription; attributes: T@"NSString",R,C,N,V_containerDescription
// Property: items; attributes: T@"NSArray",R,C,N,V_items
// Property: renderStrategy; attributes: T@"SCLensExplorerFeedRenderStrategy",R,C,N,V_renderStrategy
// Property: feedId; attributes: T@"NSString",R,C,N,V_feedId
// Property: remoteState; attributes: T@"SCLensExplorerDataStoreRemoteState",R,C,N,V_remoteState
// Property: deeplinkURL; attributes: T@"NSURL",R,C,N,V_deeplinkURL

// -[SCLensExplorerContainerItem initWithContainerId:name:containerDescription:items:renderStrategy:feedId:remoteState:deeplinkURL:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x10afd36f0

// -[SCLensExplorerContainerItem copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10afd38b8

// -[SCLensExplorerContainerItem hash]
// Type encoding: Q16@0:8
// Implementation: 0x10afd38dc

// -[SCLensExplorerContainerItem isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10afd3998

// -[SCLensExplorerContainerItem containerId]
// Type encoding: @16@0:8
// Implementation: 0x10afd3ad0

// -[SCLensExplorerContainerItem name]
// Type encoding: @16@0:8
// Implementation: 0x10afd3ad8

// -[SCLensExplorerContainerItem containerDescription]
// Type encoding: @16@0:8
// Implementation: 0x10afd3ae0

// -[SCLensExplorerContainerItem items]
// Type encoding: @16@0:8
// Implementation: 0x10afd3ae8

// -[SCLensExplorerContainerItem renderStrategy]
// Type encoding: @16@0:8
// Implementation: 0x10afd3af0

// -[SCLensExplorerContainerItem feedId]
// Type encoding: @16@0:8
// Implementation: 0x10afd3af8

// -[SCLensExplorerContainerItem remoteState]
// Type encoding: @16@0:8
// Implementation: 0x10afd3b00

// -[SCLensExplorerContainerItem deeplinkURL]
// Type encoding: @16@0:8
// Implementation: 0x10afd3b08

// -[SCLensExplorerContainerItem .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10afd3b10

// +[SCLensExplorerContainerItem containerItemFromTile:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066bf25c

// +[SCLensExplorerContainerItem renderStrategyFromCategoryStrategy:contentItem:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1066bf794

// +[SCLensExplorerContainerItem _lensTileLayoutFromStrategy:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1066bf97c

// +[SCLensExplorerContainerItem _scrollBehaviourForContentItem:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1066bfa40

// +[SCLensExplorerContainerItem _contentTypeFromCategoryStrategy:contentItem:]
// Type encoding: Q32@0:8@16@24
// Implementation: 0x1066bfb24

// +[SCLensExplorerContainerItem _remoteStateForContainerTile:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066bfc54

@end
