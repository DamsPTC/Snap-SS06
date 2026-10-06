// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSearchAttachmentsDataProvider
// Superclass: NSObject
// Address: 0x112a9a6b8

@interface SCSearchAttachmentsDataProvider

// Property: attachmentFromClipboard; attributes: T@"SCSearchAttachmentsDataModel",R,N
// Property: recentAddedAttachments; attributes: T@"NSArray",R,N
// Property: attachedURL; attributes: T@"NSURL",&,N,V_attachedURL
// Property: removedClipboardURL; attributes: T@"NSURL",R,N
// Property: snapImage; attributes: T@"UIImage",&,N,V_snapImage
// Property: clipboardState; attributes: TQ,N
// Property: featureSettingsService; attributes: T@"SCFeatureSettingsService",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSearchAttachmentsDataProvider addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cfa588

// -[SCSearchAttachmentsDataProvider removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cfa590

// -[SCSearchAttachmentsDataProvider initWithUserPreferences:urlPreviewProvider:featureSettingsService:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105cfa598

// -[SCSearchAttachmentsDataProvider addAttachmentsListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cfa6f4

// -[SCSearchAttachmentsDataProvider removeAttachmentsListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cfa6fc

// -[SCSearchAttachmentsDataProvider dealloc]
// Type encoding: v16@0:8
// Implementation: 0x105cfa704

// -[SCSearchAttachmentsDataProvider attachmentFromClipboard]
// Type encoding: @16@0:8
// Implementation: 0x105cfa750

// -[SCSearchAttachmentsDataProvider setClipboardState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105cfa768

// -[SCSearchAttachmentsDataProvider clipboardState]
// Type encoding: Q16@0:8
// Implementation: 0x105cfa770

// -[SCSearchAttachmentsDataProvider featureSettingsService]
// Type encoding: @16@0:8
// Implementation: 0x105cfa778

// -[SCSearchAttachmentsDataProvider recentAddedAttachments]
// Type encoding: @16@0:8
// Implementation: 0x105cfa780

// -[SCSearchAttachmentsDataProvider setRecentAttachedURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cfa8d0

// -[SCSearchAttachmentsDataProvider removedClipboardURL]
// Type encoding: @16@0:8
// Implementation: 0x105cfa9f0

// -[SCSearchAttachmentsDataProvider removeURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cfaa70

// -[SCSearchAttachmentsDataProvider attachmentFromClipboardDidUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cfab90

// -[SCSearchAttachmentsDataProvider _removeURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cfaec0

// -[SCSearchAttachmentsDataProvider _setRecentAttachedURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cfb224

// -[SCSearchAttachmentsDataProvider _downloadTitleForURL:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105cfb394

// -[SCSearchAttachmentsDataProvider _updateRecentAttachedURL:withTitle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105cfb5a0

// -[SCSearchAttachmentsDataProvider _updateClipboardURL:withTitle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105cfb910

// -[SCSearchAttachmentsDataProvider attachedURL]
// Type encoding: @16@0:8
// Implementation: 0x105cfb9cc

// -[SCSearchAttachmentsDataProvider setAttachedURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cfb9d4

// -[SCSearchAttachmentsDataProvider snapImage]
// Type encoding: @16@0:8
// Implementation: 0x105cfba04

// -[SCSearchAttachmentsDataProvider setSnapImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cfba0c

// -[SCSearchAttachmentsDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105cfba3c

// +[SCSearchAttachmentsDataProvider announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105cfa57c

@end
