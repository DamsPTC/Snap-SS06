// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDeeplinkShareController
// Superclass: NSObject
// Address: 0x112aebb08

@interface SCDeeplinkShareController

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCDeeplinkShareControllerDelegate>",W,N,V_delegate

// -[SCDeeplinkShareController initWithDeeplinkURL:attachedImageFuture:snapSource:urlPreviewProvider:simpleContentFetcher:externalLinkSendingService:posterId:snapId:]
// Type encoding: @80@0:8@16@24q32@40@48@56@64@72
// Implementation: 0x106666ea0

// -[SCDeeplinkShareController initWithDeeplinkURL:attachedImage:snapSource:urlPreviewProvider:simpleContentFetcher:externalLinkSendingService:posterId:snapId:]
// Type encoding: @80@0:8@16@24q32@40@48@56@64@72
// Implementation: 0x106667130

// -[SCDeeplinkShareController initWithDeeplinkURL:attachedImage:snapSource:urlPreviewProvider:simpleContentFetcher:offPlatformLinkGenerationService:externalLinkSendingService:]
// Type encoding: @72@0:8@16@24q32@40@48@56@64
// Implementation: 0x106667244

// -[SCDeeplinkShareController sendToFromViewController:lensMetadata:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10666734c

// -[SCDeeplinkShareController sendToFromViewController:deepLinkType:url:attachedImage:]
// Type encoding: v48@0:8@16Q24@32@40
// Implementation: 0x1066677a8

// -[SCDeeplinkShareController sendToFromViewController:deepLinkType:url:attachedImageFuture:]
// Type encoding: v48@0:8@16Q24@32@40
// Implementation: 0x1066678f4

// -[SCDeeplinkShareController _sendToFromViewController:deepLinkType:url:previewModel:]
// Type encoding: v48@0:8@16Q24@32@40
// Implementation: 0x1066679f0

// -[SCDeeplinkShareController _launchLegacySendToScopeFromViewController:previewViewModel:attribution:shareSheetConfiguration:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106667ca8

// -[SCDeeplinkShareController _sendDeeplinkShareToRecipients:groups:additionalText:textConfiguration:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106667e68

// -[SCDeeplinkShareController _sendDeeplinkShareToSortedRecipients:additionalText:destinationInfo:textConfiguration:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106668164

// -[SCDeeplinkShareController _sendDeeplinkShareToSortedRecipients:additionalText:destinationInfo:lensLoggingInfo:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106668318

// -[SCDeeplinkShareController _handleShareDeeplinkComplete:]
// Type encoding: v20@0:8B16
// Implementation: 0x106668604

// -[SCDeeplinkShareController didUpdateUrlSummary:]
// Type encoding: v24@0:8@16
// Implementation: 0x106668764

// -[SCDeeplinkShareController legacySendToScopeDidDismiss:selectedItems:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066688b4

// -[SCDeeplinkShareController legacySendToScopeWillSend:sendToSelection:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106668a18

// -[SCDeeplinkShareController _didDetachUIWithSendToSelection:shareSheetConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106668b8c

// -[SCDeeplinkShareController _sendToPhoneNumbersWithSendToSelection:shareSheetConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106668d50

// -[SCDeeplinkShareController _sendWithSendToSelection:shareSheetConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106668ec8

// -[SCDeeplinkShareController _didDismissSendViewControllerWithRecipientsCount:groupsCount:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x1066690c0

// -[SCDeeplinkShareController delegate]
// Type encoding: @16@0:8
// Implementation: 0x106669164

// -[SCDeeplinkShareController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10666917c

// -[SCDeeplinkShareController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106669188

@end
