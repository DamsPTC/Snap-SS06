// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommerceAttachmentPaginationProvider
// Superclass: NSObject
// Address: 0x1129f9808

@interface SCCommerceAttachmentPaginationProvider

// Property: viewModels; attributes: T@"NSMutableArray",C,N,V_viewModels
// Property: eventAnnouncer; attributes: T@"SCEventListenerAnnouncer",&,N,V_eventAnnouncer
// Property: dataCoordinator; attributes: T@"<SCCommerceCatalogPagingDataCoordinator>",&,N,V_dataCoordinator
// Property: queue; attributes: T@"sc_async_queue",&,N,V_queue
// Property: configProvider; attributes: T@"<SCCommerceConfigProviding>",&,N,V_configProvider
// Property: selectedProduct; attributes: T@"SCCommerceAttachmentDataModel",&,N,V_selectedProduct
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: currentPage; attributes: Tq,R,V_currentPage
// Property: nextPage; attributes: Tq,R
// Property: canLoadMorePages; attributes: TB,R,V_canLoadMorePages
// Property: items; attributes: T@"NSArray",R,V_items
// Property: errorModel; attributes: T@"_TtC20SCCommerceSwiftViews30SCCommerceSimpleErrorViewModel",R,V_errorModel

// -[SCCommerceAttachmentPaginationProvider addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d8b1f8

// -[SCCommerceAttachmentPaginationProvider removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d8b200

// -[SCCommerceAttachmentPaginationProvider initWithDataCoordinator:configProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104d8b208

// -[SCCommerceAttachmentPaginationProvider nextPage]
// Type encoding: q16@0:8
// Implementation: 0x104d8b30c

// -[SCCommerceAttachmentPaginationProvider reset]
// Type encoding: v16@0:8
// Implementation: 0x104d8b318

// -[SCCommerceAttachmentPaginationProvider clearError]
// Type encoding: v16@0:8
// Implementation: 0x104d8b438

// -[SCCommerceAttachmentPaginationProvider setSelectedProduct:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d8b498

// -[SCCommerceAttachmentPaginationProvider viewModels]
// Type encoding: @16@0:8
// Implementation: 0x104d8b5a4

// -[SCCommerceAttachmentPaginationProvider didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104d8b5cc

// -[SCCommerceAttachmentPaginationProvider _announceInitialItemsLoaded]
// Type encoding: v16@0:8
// Implementation: 0x104d8b8e4

// -[SCCommerceAttachmentPaginationProvider _announceItemsLoadedWithAddedIndices:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d8b940

// -[SCCommerceAttachmentPaginationProvider _announceFinalItemsLoadedWithRemovedIndices:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d8ba4c

// -[SCCommerceAttachmentPaginationProvider _announceItemsUpdatedWithChangedIndices:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d8bb70

// -[SCCommerceAttachmentPaginationProvider _announceItemsLoadingFailedWithChangedIndices:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d8bc94

// -[SCCommerceAttachmentPaginationProvider _announceReset]
// Type encoding: v16@0:8
// Implementation: 0x104d8bdb8

// -[SCCommerceAttachmentPaginationProvider _handleItemLoadingDidBegin]
// Type encoding: v16@0:8
// Implementation: 0x104d8be30

// -[SCCommerceAttachmentPaginationProvider _handleItemLoadingDidSucceedWithExtraData:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d8bf70

// -[SCCommerceAttachmentPaginationProvider _handleInitialItemLoadingDidSucceed]
// Type encoding: v16@0:8
// Implementation: 0x104d8c0a4

// -[SCCommerceAttachmentPaginationProvider _handleUpdatedItemsWithNewViewModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d8c160

// -[SCCommerceAttachmentPaginationProvider _handleFinalItemsLoaded]
// Type encoding: v16@0:8
// Implementation: 0x104d8c300

// -[SCCommerceAttachmentPaginationProvider _handleAttachedItemUpdate]
// Type encoding: v16@0:8
// Implementation: 0x104d8c488

// -[SCCommerceAttachmentPaginationProvider _handleItemLoadingDidFail]
// Type encoding: v16@0:8
// Implementation: 0x104d8c630

// -[SCCommerceAttachmentPaginationProvider _updateViewModelSelectionStates]
// Type encoding: @16@0:8
// Implementation: 0x104d8c7c0

// -[SCCommerceAttachmentPaginationProvider _updateItemsWithNewViewModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d8ca5c

// -[SCCommerceAttachmentPaginationProvider items]
// Type encoding: @16@0:8
// Implementation: 0x104d8cb18

// -[SCCommerceAttachmentPaginationProvider currentPage]
// Type encoding: q16@0:8
// Implementation: 0x104d8cb24

// -[SCCommerceAttachmentPaginationProvider canLoadMorePages]
// Type encoding: B16@0:8
// Implementation: 0x104d8cb2c

// -[SCCommerceAttachmentPaginationProvider errorModel]
// Type encoding: @16@0:8
// Implementation: 0x104d8cb38

// -[SCCommerceAttachmentPaginationProvider selectedProduct]
// Type encoding: @16@0:8
// Implementation: 0x104d8cb44

// -[SCCommerceAttachmentPaginationProvider setViewModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d8cb4c

// -[SCCommerceAttachmentPaginationProvider eventAnnouncer]
// Type encoding: @16@0:8
// Implementation: 0x104d8cb54

// -[SCCommerceAttachmentPaginationProvider setEventAnnouncer:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d8cb5c

// -[SCCommerceAttachmentPaginationProvider dataCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x104d8cb8c

// -[SCCommerceAttachmentPaginationProvider setDataCoordinator:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d8cb94

// -[SCCommerceAttachmentPaginationProvider queue]
// Type encoding: @16@0:8
// Implementation: 0x104d8cbc4

// -[SCCommerceAttachmentPaginationProvider setQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d8cbcc

// -[SCCommerceAttachmentPaginationProvider configProvider]
// Type encoding: @16@0:8
// Implementation: 0x104d8cbfc

// -[SCCommerceAttachmentPaginationProvider setConfigProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d8cc04

// -[SCCommerceAttachmentPaginationProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104d8cc34

// +[SCCommerceAttachmentPaginationProvider announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x104d8b1ec

@end
