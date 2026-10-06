// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatInfoAttachmentIconImageDownloader
// Superclass: NSObject
// Address: 0x112a13c58

@interface SCChatInfoAttachmentIconImageDownloader

// Property: delegate; attributes: T@"<SCChatInfoAttachmentIconImageDownloaderDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatInfoAttachmentIconImageDownloader initWithSimpleContentFetcher:urlPreviewProvider:performer:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10507057c

// -[SCChatInfoAttachmentIconImageDownloader initWithSimpleContentFetcher:urlPreviewProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1050706ac

// -[SCChatInfoAttachmentIconImageDownloader loadItem:completion:failure:callbackQueue:]
// Type encoding: @48@0:8@16@?24@?32@40
// Implementation: 0x10507077c

// -[SCChatInfoAttachmentIconImageDownloader loadItem:itemRemoteDownloader:completion:failure:callbackQueue:]
// Type encoding: @56@0:8@16@24@?32@?40@48
// Implementation: 0x10507099c

// -[SCChatInfoAttachmentIconImageDownloader titleForUrlDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x1050709a4

// -[SCChatInfoAttachmentIconImageDownloader failedToLoadUrlDataModel:]
// Type encoding: B24@0:8@16
// Implementation: 0x105070b58

// -[SCChatInfoAttachmentIconImageDownloader _completePhoneIconImageFetchingWithItem:completion:callbackQueue:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x105070bf0

// -[SCChatInfoAttachmentIconImageDownloader _completeAddressIconImageFetchingWithItem:completion:callbackQueue:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x105070d04

// -[SCChatInfoAttachmentIconImageDownloader _loadIconImageWithDataModel:completion:failure:callbackQueue:]
// Type encoding: v48@0:8@16@?24@?32@40
// Implementation: 0x105070e18

// -[SCChatInfoAttachmentIconImageDownloader _fetchThumbnailImageIfNeccesary:urlString:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1050712c0

// -[SCChatInfoAttachmentIconImageDownloader _fetchImage:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10507160c

// -[SCChatInfoAttachmentIconImageDownloader _handleUpdatedUrlPreview:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050717b0

// -[SCChatInfoAttachmentIconImageDownloader _announceDownloadCompletion:urlAttachmentContent:cached:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10507196c

// -[SCChatInfoAttachmentIconImageDownloader _getUrlContent:]
// Type encoding: @24@0:8@16
// Implementation: 0x105071b18

// -[SCChatInfoAttachmentIconImageDownloader _setUrlContent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105071b90

// -[SCChatInfoAttachmentIconImageDownloader _hasActiveDownload:]
// Type encoding: B24@0:8@16
// Implementation: 0x105071c18

// -[SCChatInfoAttachmentIconImageDownloader _addDownloadHandler:urlString:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105071ca4

// -[SCChatInfoAttachmentIconImageDownloader delegate]
// Type encoding: @16@0:8
// Implementation: 0x105071d88

// -[SCChatInfoAttachmentIconImageDownloader setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105071da0

// -[SCChatInfoAttachmentIconImageDownloader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105071dac

@end
