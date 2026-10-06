// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommerceAttachmentToolViewController
// Superclass: UIViewController
// Address: 0x1129f9858

@interface SCCommerceAttachmentToolViewController

// Property: imageSourceProvider; attributes: T@"<SCDynamicImageSourceProviderFactory>",&,N,V_imageSourceProvider
// Property: imageFetchingService; attributes: T@"<SCImageFetchingService>",&,N,V_imageFetchingService
// Property: eventLogger; attributes: T@"<SCCommerceEventLogger>",R,N,V_eventLogger
// Property: headerView; attributes: T@"SIGHeader",&,N,V_headerView
// Property: attachButton; attributes: T@"SIGButton",&,N,V_attachButton
// Property: noResultsLabel; attributes: T@"SIGLabel",&,N,V_noResultsLabel
// Property: paginationProvider; attributes: T@"SCCommerceAttachmentPaginationProvider",&,N,V_paginationProvider
// Property: dataCoordinator; attributes: T@"SCCommerceCatalogPagingDataCoordinatorImpl",&,N,V_dataCoordinator
// Property: catalogViewController; attributes: T@"SCCommerceCatalogCollectionViewController",&,N,V_catalogViewController
// Property: metricsUUID; attributes: T@"NSString",&,N,V_metricsUUID
// Property: hasUsedFiltering; attributes: TB,N,V_hasUsedFiltering
// Property: selectedProduct; attributes: T@"SCCommerceAttachmentDataModel",&,N,V_selectedProduct
// Property: attachedProduct; attributes: T@"SCCommerceAttachmentDataModel",&,N,V_attachedProduct
// Property: delegate; attributes: T@"<SCCommerceAttachmentToolDelegate>",W,N,V_delegate
// Property: buttonBottomShowConstraint; attributes: T@"NSLayoutConstraint",&,N,V_buttonBottomShowConstraint
// Property: buttonBottomHideConstraint; attributes: T@"NSLayoutConstraint",&,N,V_buttonBottomHideConstraint
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCommerceAttachmentToolViewController initWithEventLogger:imageSourceProvider:imageFetchingService:storeFetcher:delegate:storeModel:attachedProduct:configProvider:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x104d8ccac

// -[SCCommerceAttachmentToolViewController viewWillAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x104d8cfd0

// -[SCCommerceAttachmentToolViewController viewWillDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x104d8d05c

// -[SCCommerceAttachmentToolViewController viewDidDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x104d8d0ac

// -[SCCommerceAttachmentToolViewController _setupHeaderView]
// Type encoding: v16@0:8
// Implementation: 0x104d8d14c

// -[SCCommerceAttachmentToolViewController _setupCollectionView]
// Type encoding: v16@0:8
// Implementation: 0x104d8d52c

// -[SCCommerceAttachmentToolViewController _setupAttachButton]
// Type encoding: v16@0:8
// Implementation: 0x104d8d98c

// -[SCCommerceAttachmentToolViewController _setupNoResultsLabel]
// Type encoding: v16@0:8
// Implementation: 0x104d8dd20

// -[SCCommerceAttachmentToolViewController _setAttachedProduct:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d8df7c

// -[SCCommerceAttachmentToolViewController _didTapAttachButton]
// Type encoding: v16@0:8
// Implementation: 0x104d8e01c

// -[SCCommerceAttachmentToolViewController _showActionButtonWithAttach:enabled:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x104d8e158

// -[SCCommerceAttachmentToolViewController _filterProductsWithText:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d8e300

// -[SCCommerceAttachmentToolViewController displayId]
// Type encoding: @16@0:8
// Implementation: 0x104d8e39c

// -[SCCommerceAttachmentToolViewController didSelectDismissalActionWithHeaderItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d8e3cc

// -[SCCommerceAttachmentToolViewController didTapHeaderItemTitle:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d8e400

// -[SCCommerceAttachmentToolViewController _textFieldDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d8e414

// -[SCCommerceAttachmentToolViewController textFieldShouldClear:]
// Type encoding: B24@0:8@16
// Implementation: 0x104d8e454

// -[SCCommerceAttachmentToolViewController textFieldShouldReturn:]
// Type encoding: B24@0:8@16
// Implementation: 0x104d8e474

// -[SCCommerceAttachmentToolViewController handleActionWithSender:actionModel:fromSourceView:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x104d8e490

// -[SCCommerceAttachmentToolViewController didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104d8e7a4

// -[SCCommerceAttachmentToolViewController imageSourceProvider]
// Type encoding: @16@0:8
// Implementation: 0x104d8e97c

// -[SCCommerceAttachmentToolViewController setImageSourceProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d8e98c

// -[SCCommerceAttachmentToolViewController imageFetchingService]
// Type encoding: @16@0:8
// Implementation: 0x104d8e9cc

// -[SCCommerceAttachmentToolViewController setImageFetchingService:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d8e9dc

// -[SCCommerceAttachmentToolViewController eventLogger]
// Type encoding: @16@0:8
// Implementation: 0x104d8ea1c

// -[SCCommerceAttachmentToolViewController headerView]
// Type encoding: @16@0:8
// Implementation: 0x104d8ea2c

// -[SCCommerceAttachmentToolViewController setHeaderView:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d8ea3c

// -[SCCommerceAttachmentToolViewController attachButton]
// Type encoding: @16@0:8
// Implementation: 0x104d8ea7c

// -[SCCommerceAttachmentToolViewController setAttachButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d8ea8c

// -[SCCommerceAttachmentToolViewController noResultsLabel]
// Type encoding: @16@0:8
// Implementation: 0x104d8eacc

// -[SCCommerceAttachmentToolViewController setNoResultsLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d8eadc

// -[SCCommerceAttachmentToolViewController paginationProvider]
// Type encoding: @16@0:8
// Implementation: 0x104d8eb1c

// -[SCCommerceAttachmentToolViewController setPaginationProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d8eb2c

// -[SCCommerceAttachmentToolViewController dataCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x104d8eb6c

// -[SCCommerceAttachmentToolViewController setDataCoordinator:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d8eb7c

// -[SCCommerceAttachmentToolViewController catalogViewController]
// Type encoding: @16@0:8
// Implementation: 0x104d8ebbc

// -[SCCommerceAttachmentToolViewController setCatalogViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d8ebcc

// -[SCCommerceAttachmentToolViewController metricsUUID]
// Type encoding: @16@0:8
// Implementation: 0x104d8ec0c

// -[SCCommerceAttachmentToolViewController setMetricsUUID:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d8ec1c

// -[SCCommerceAttachmentToolViewController hasUsedFiltering]
// Type encoding: B16@0:8
// Implementation: 0x104d8ec5c

// -[SCCommerceAttachmentToolViewController setHasUsedFiltering:]
// Type encoding: v20@0:8B16
// Implementation: 0x104d8ec6c

// -[SCCommerceAttachmentToolViewController selectedProduct]
// Type encoding: @16@0:8
// Implementation: 0x104d8ec7c

// -[SCCommerceAttachmentToolViewController setSelectedProduct:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d8ec8c

// -[SCCommerceAttachmentToolViewController attachedProduct]
// Type encoding: @16@0:8
// Implementation: 0x104d8eccc

// -[SCCommerceAttachmentToolViewController setAttachedProduct:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d8ecdc

// -[SCCommerceAttachmentToolViewController delegate]
// Type encoding: @16@0:8
// Implementation: 0x104d8ed1c

// -[SCCommerceAttachmentToolViewController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d8ed3c

// -[SCCommerceAttachmentToolViewController buttonBottomShowConstraint]
// Type encoding: @16@0:8
// Implementation: 0x104d8ed50

// -[SCCommerceAttachmentToolViewController setButtonBottomShowConstraint:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d8ed60

// -[SCCommerceAttachmentToolViewController buttonBottomHideConstraint]
// Type encoding: @16@0:8
// Implementation: 0x104d8eda0

// -[SCCommerceAttachmentToolViewController setButtonBottomHideConstraint:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d8edb0

// -[SCCommerceAttachmentToolViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104d8edf0

@end
