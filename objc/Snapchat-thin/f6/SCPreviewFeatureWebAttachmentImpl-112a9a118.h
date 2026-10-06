// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewFeatureWebAttachmentImpl
// Superclass: NSObject
// Address: 0x112a9a118

@interface SCPreviewFeatureWebAttachmentImpl

// Property: toolbarItemViewModel; attributes: T@"SCPreviewToolbarItemViewModel",&,N,V_toolbarItemViewModel
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCPreviewFeatureWebAttachmentDelegate><SCPreviewFeatureParentViewControllerAccessing>",W,N,V_delegate
// Property: attachmentUrlString; attributes: T@"NSString",R,N,V_attachmentUrlString
// Property: toolbarItemViewModelObservable; attributes: T@"SCObservable",R,N

// -[SCPreviewFeatureWebAttachmentImpl initWithUserSession:previewScopeServices:legacyPreviewConfiguration:userInteractionStateLogger:commerceAttachmentFeature:attachmentStickerFeature:userPreferences:featureSettingsService:urlPreviewProvider:galleryLogger:safeBrowsingAPI:userLocationServices:systemLocationServices:previewABServices:creativeToolsABServices:stickerInjector:currentPageTracker:circumstanceEngine:legacyStoryMediaCache:]
// Type encoding: @168@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160
// Implementation: 0x105cedbd8

// -[SCPreviewFeatureWebAttachmentImpl updateWithNewAttachmentUrlString:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cee0d0

// -[SCPreviewFeatureWebAttachmentImpl activate]
// Type encoding: v16@0:8
// Implementation: 0x105cee13c

// -[SCPreviewFeatureWebAttachmentImpl snapEditor:didInitiateExportWithType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105cee218

// -[SCPreviewFeatureWebAttachmentImpl snapEditor:didChangeToolBarButtonItemType:selected:]
// Type encoding: v36@0:8@16q24B32
// Implementation: 0x105cee254

// -[SCPreviewFeatureWebAttachmentImpl snapEditor:updateLoggingWithBuilder:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105cee33c

// -[SCPreviewFeatureWebAttachmentImpl createWebAttachmentToolBarButtonItemWithTarget:selector:currentAttachmentUrl:]
// Type encoding: @40@0:8@16:24@32
// Implementation: 0x105cee360

// -[SCPreviewFeatureWebAttachmentImpl updateAttachmentToolBarAttachmentStatus]
// Type encoding: v16@0:8
// Implementation: 0x105cee408

// -[SCPreviewFeatureWebAttachmentImpl shouldShowToolbarAttachment]
// Type encoding: B16@0:8
// Implementation: 0x105cee40c

// -[SCPreviewFeatureWebAttachmentImpl updateForAttachmentItem:]
// Type encoding: v20@0:8B16
// Implementation: 0x105cee494

// -[SCPreviewFeatureWebAttachmentImpl didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105cee560

// -[SCPreviewFeatureWebAttachmentImpl searchResultsViewController:didCancelWithDismissActionType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105cee87c

// -[SCPreviewFeatureWebAttachmentImpl searchResultsViewController:didOverscrollWithOffset:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x105cee904

// -[SCPreviewFeatureWebAttachmentImpl searchAttachmentsResultViewControllerViewDidAppear:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cee908

// -[SCPreviewFeatureWebAttachmentImpl searchWebViewControllerViewDidAppear:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cee95c

// -[SCPreviewFeatureWebAttachmentImpl attachmentToolbarButtonItemDidPressStoreButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cee9b0

// -[SCPreviewFeatureWebAttachmentImpl attachmentToolbarButtonItemDidPressWebButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cee9f8

// -[SCPreviewFeatureWebAttachmentImpl didTapPreviewContainerView:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105cee9fc

// -[SCPreviewFeatureWebAttachmentImpl _exitAttachmentSubMenu]
// Type encoding: B16@0:8
// Implementation: 0x105ceea14

// -[SCPreviewFeatureWebAttachmentImpl _setupSnapAttachments]
// Type encoding: v16@0:8
// Implementation: 0x105ceeaac

// -[SCPreviewFeatureWebAttachmentImpl _willDetachUrl]
// Type encoding: v16@0:8
// Implementation: 0x105ceeb70

// -[SCPreviewFeatureWebAttachmentImpl _didAttachUrl:extraData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105ceed5c

// -[SCPreviewFeatureWebAttachmentImpl _didDeattachUrlWithData:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ceeea8

// -[SCPreviewFeatureWebAttachmentImpl _closeToolbarSelectedItem]
// Type encoding: v16@0:8
// Implementation: 0x105ceefa0

// -[SCPreviewFeatureWebAttachmentImpl _openAttachmentsView]
// Type encoding: v16@0:8
// Implementation: 0x105ceeff8

// -[SCPreviewFeatureWebAttachmentImpl _logAttachmentToolUsageEnded]
// Type encoding: v16@0:8
// Implementation: 0x105cef604

// -[SCPreviewFeatureWebAttachmentImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cef634

// -[SCPreviewFeatureWebAttachmentImpl previewFeatureCommerceAttachment:didAttachUrl:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105cef6b4

// -[SCPreviewFeatureWebAttachmentImpl previewFeatureCommerceAttachmentDidDetach:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cef778

// -[SCPreviewFeatureWebAttachmentImpl setToolbarItemViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cef7f8

// -[SCPreviewFeatureWebAttachmentImpl reloadToolbarItemViewModel]
// Type encoding: v16@0:8
// Implementation: 0x105cef898

// -[SCPreviewFeatureWebAttachmentImpl toolbarItemViewModelObservable]
// Type encoding: @16@0:8
// Implementation: 0x105cef928

// -[SCPreviewFeatureWebAttachmentImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x105cef950

// -[SCPreviewFeatureWebAttachmentImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cef968

// -[SCPreviewFeatureWebAttachmentImpl attachmentUrlString]
// Type encoding: @16@0:8
// Implementation: 0x105cef974

// -[SCPreviewFeatureWebAttachmentImpl toolbarItemViewModel]
// Type encoding: @16@0:8
// Implementation: 0x105cef97c

// -[SCPreviewFeatureWebAttachmentImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105cef984

@end
