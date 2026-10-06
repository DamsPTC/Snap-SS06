// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNetworkImageView
// Superclass: UIView
// Address: 0x112be02e8

@interface SCNetworkImageView

// Property: contentMode; attributes: Tq,N
// Property: resizeImageAutomatically; attributes: TB,N
// Property: truncateYaxisFromBottom; attributes: TB,N,V_truncateYaxisFromBottom
// Property: cornerRadius; attributes: Td,N
// Property: preferredImageSize; attributes: T{CGSize=dd},N
// Property: loadingImage; attributes: T@"UIImage",&,N,V_loadingImage
// Property: imageDownloader; attributes: T@"<SCImageDownloading>",&,N,V_imageDownloader
// Property: networkImage; attributes: T@"SCNetworkImage",&,N,V_networkImage
// Property: imageSynchronizer; attributes: T@"SCNetworkImageViewSynchronizer",&,N,V_imageSynchronizer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNetworkImageView addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x109007530

// -[SCNetworkImageView removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x109007540

// -[SCNetworkImageView initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x109007550

// -[SCNetworkImageView dealloc]
// Type encoding: v16@0:8
// Implementation: 0x109007710

// -[SCNetworkImageView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x109007754

// -[SCNetworkImageView displayedImage]
// Type encoding: @16@0:8
// Implementation: 0x1090077c8

// -[SCNetworkImageView setNetworkImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x109007808

// -[SCNetworkImageView setNetworkImage:imageProcessingBlock:downloadCompletion:imageSetCompletion:]
// Type encoding: v48@0:8@16@?24@?32@?40
// Implementation: 0x109007814

// -[SCNetworkImageView setNetworkImage:imageProcessingBlock:completion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x109007d60

// -[SCNetworkImageView setTintColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x109007d68

// -[SCNetworkImageView setContentMode:]
// Type encoding: v24@0:8q16
// Implementation: 0x109007de0

// -[SCNetworkImageView contentMode]
// Type encoding: q16@0:8
// Implementation: 0x109007e30

// -[SCNetworkImageView setPreferredImageSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x109007e40

// -[SCNetworkImageView preferredImageSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x109007e50

// -[SCNetworkImageView setCornerRadius:]
// Type encoding: v24@0:8d16
// Implementation: 0x109007e60

// -[SCNetworkImageView cornerRadius]
// Type encoding: d16@0:8
// Implementation: 0x109007e70

// -[SCNetworkImageView setResizeImageAutomatically:]
// Type encoding: v20@0:8B16
// Implementation: 0x109007e80

// -[SCNetworkImageView setTruncateYaxisFromBottom:]
// Type encoding: v20@0:8B16
// Implementation: 0x109007e90

// -[SCNetworkImageView resizeImageAutomatically]
// Type encoding: B16@0:8
// Implementation: 0x109007ea0

// -[SCNetworkImageView setImageSynchronizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x109007eb0

// -[SCNetworkImageView _cancelImageDownloadingForPreviousImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x109007f10

// -[SCNetworkImageView _loadNetworkImage:previousImage:isRetryAttempt:imageProcessingBlock:completion:imageSetCompletion:]
// Type encoding: v60@0:8@16@24B32@?36@?44@?52
// Implementation: 0x109007f54

// -[SCNetworkImageView _clearImageDownloadCancellable]
// Type encoding: v16@0:8
// Implementation: 0x1090088b4

// -[SCNetworkImageView _handleImageLoaderCompletionHandlerWithRequestedImage:resultImage:isRetryAttempt:downloadLatency:completion:isFromCache:imageSetCompletion:]
// Type encoding: v64@0:8@16@24B32d36@?44B52@?56
// Implementation: 0x1090088cc

// -[SCNetworkImageView _handleImageLoaderFailureHandlerWithRequestedImage:error:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x109008c80

// -[SCNetworkImageView _updateSuccessWithNetworkImage:image:animated:imageSetCompletion:]
// Type encoding: v44@0:8@16@24B32@36
// Implementation: 0x109008f14

// -[SCNetworkImageView _recordConsumeContentIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x109009200

// -[SCNetworkImageView _updateFailureWithNetworkImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x109009250

// -[SCNetworkImageView _setSuccessImageWithNetworkImage:image:imageSetCompletion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1090092f8

// -[SCNetworkImageView _setLoadingImage]
// Type encoding: v16@0:8
// Implementation: 0x109009410

// -[SCNetworkImageView _syncDisplayedImageIfNecessaryWithImageSetCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x109009478

// -[SCNetworkImageView _setPendingImageIfPossibleWithPendingImageBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10900960c

// -[SCNetworkImageView _applyAndRescaleImageIfNecessary:image:completion:imageSetCompletion:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x109009670

// -[SCNetworkImageView _rescaleImageIfNeededWithImage:]
// Type encoding: @24@0:8@16
// Implementation: 0x109009b30

// -[SCNetworkImageView didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x109009b40

// -[SCNetworkImageView _announceDownloadEvent:extraData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x109009c14

// -[SCNetworkImageView processJobWithJobConfig:input:context:onComplete:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x109009c9c

// -[SCNetworkImageView _handleRetryFlow:jobCompletionCallback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x109009e0c

// -[SCNetworkImageView _handleImageReloadFinishedWithNetworkImage:jobCompletionCb:error:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x10900a004

// -[SCNetworkImageView _cleanUpRetryFlowIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10900a130

// -[SCNetworkImageView _submitRetryFlowIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10900a17c

// -[SCNetworkImageView _logLoadingStatus]
// Type encoding: v16@0:8
// Implementation: 0x10900a328

// -[SCNetworkImageView prepareForShadow]
// Type encoding: v16@0:8
// Implementation: 0x10900a3dc

// -[SCNetworkImageView truncateYaxisFromBottom]
// Type encoding: B16@0:8
// Implementation: 0x10900a4cc

// -[SCNetworkImageView loadingImage]
// Type encoding: @16@0:8
// Implementation: 0x10900a4dc

// -[SCNetworkImageView setLoadingImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x10900a4ec

// -[SCNetworkImageView imageDownloader]
// Type encoding: @16@0:8
// Implementation: 0x10900a52c

// -[SCNetworkImageView setImageDownloader:]
// Type encoding: v24@0:8@16
// Implementation: 0x10900a53c

// -[SCNetworkImageView networkImage]
// Type encoding: @16@0:8
// Implementation: 0x10900a57c

// -[SCNetworkImageView imageSynchronizer]
// Type encoding: @16@0:8
// Implementation: 0x10900a58c

// -[SCNetworkImageView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10900a59c

// +[SCNetworkImageView announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x109007524

@end
