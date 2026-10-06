// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapKitLogger
// Superclass: NSObject
// Address: 0x112bc9368

@interface SCSnapKitLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapKitLogger initWithClientID:kitType:kitVersion:kitAppID:kitSessionId:kitAuthFlowSource:kitPluginType:kitIsFromReactNative:kitIsForFirebaseAuthentication:blizzardLogger:]
// Type encoding: @88@0:8@16q24@32@40@48q56q64B72B76@80
// Implementation: 0x108ecd878

// -[SCSnapKitLogger initWithClientID:kitType:kitVersion:kitAppID:kitSessionId:kitIsFromReactNative:kitIsForFirebaseAuthentication:blizzardLogger:]
// Type encoding: @72@0:8@16q24@32@40@48B56B60@64
// Implementation: 0x108ecd9d8

// -[SCSnapKitLogger initWithClientID:kitAppID:contextSessionID:snapKitAttachmentURL:blizzardLogger:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x108ecda14

// -[SCSnapKitLogger initWithSnapMetadata:blizzardLogger:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108ecdb74

// -[SCSnapKitLogger _addBaseInfoToEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ecdcb8

// -[SCSnapKitLogger _addCreativeKitBaseInfoToEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ecdd44

// -[SCSnapKitLogger _addIdentityWebViewBaseInfoToEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ecdf08

// -[SCSnapKitLogger logLoginClientValidateError:featuresRequested:featuresAuthorized:is1PA:httpErrorCode:]
// Type encoding: v52@0:8q16@24@32B40q44
// Implementation: 0x108ecdf7c

// -[SCSnapKitLogger logUserConnectedSuccesfully:isBitmojiAccessEnabled:is1PA:featuresRequested:featuresAuthorized:]
// Type encoding: v44@0:8B16B20B24@28@36
// Implementation: 0x108ece080

// -[SCSnapKitLogger logUserAuthorizedSuccesfully:isBitmojiAccessEnabled:is1PA:featuresRequested:featuresAuthorized:]
// Type encoding: v44@0:8B16B20B24@28@36
// Implementation: 0x108ece16c

// -[SCSnapKitLogger logUserReauthorizedSuccesfully:isBitmojiAccessEnabled:is1PA:featuresRequested:featuresAuthorized:]
// Type encoding: v44@0:8B16B20B24@28@36
// Implementation: 0x108ece258

// -[SCSnapKitLogger logUserRemoveAppSuccessfully:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ece344

// -[SCSnapKitLogger logDeeplinkError:errorStatusCode:profileLink:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x108ece38c

// -[SCSnapKitLogger logIdentityWebViewAttempt:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ece428

// -[SCSnapKitLogger logIdentityWebViewOpen:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ece488

// -[SCSnapKitLogger logIdentityWebViewComplete:]
// Type encoding: v24@0:8q16
// Implementation: 0x108ece4e8

// -[SCSnapKitLogger logIdentityWebViewModalAccept]
// Type encoding: v16@0:8
// Implementation: 0x108ece548

// -[SCSnapKitLogger logIdentityWebViewModalDismiss:]
// Type encoding: v24@0:8q16
// Implementation: 0x108ece590

// -[SCSnapKitLogger logCreateBitmojiCTAPageView]
// Type encoding: v16@0:8
// Implementation: 0x108ece5f0

// -[SCSnapKitLogger logCreateBitmojiCTASkipButtonTap]
// Type encoding: v16@0:8
// Implementation: 0x108ece644

// -[SCSnapKitLogger logCreateBitmojiCTACreateWithCamera]
// Type encoding: v16@0:8
// Implementation: 0x108ece698

// -[SCSnapKitLogger log1PAUserAcceptTerms:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ece6ec

// -[SCSnapKitLogger _logCreativeKitEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ece760

// -[SCSnapKitLogger logCreativeKitCameraViewStickerInteraction:finalMetadata:originalMetadata:didUserAdjustSticker:]
// Type encoding: v44@0:8q16@24@32B40
// Implementation: 0x108ece7a4

// -[SCSnapKitLogger logCreativeKitDeepLinkProcessingStart]
// Type encoding: v16@0:8
// Implementation: 0x108ecea48

// -[SCSnapKitLogger logCreativeKitDeepLinkStart]
// Type encoding: v16@0:8
// Implementation: 0x108ecea84

// -[SCSnapKitLogger logCreativeKitDeepLinkClientError:additionalInfo:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x108eceac0

// -[SCSnapKitLogger logCreativeKitDeepLinkServerError:withHttpStatusCode:]
// Type encoding: v32@0:8Q16q24
// Implementation: 0x108eceb5c

// -[SCSnapKitLogger logCreativeKitCameraLoad:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ecebe4

// -[SCSnapKitLogger logCreativeKitPasteboardAccessEvent:presentCount:kitSessionId:deeplinkUrl:creativeKitProductType:creativeKitShareType:]
// Type encoding: v64@0:8q16q24@32@40q48@56
// Implementation: 0x108ecec34

// -[SCSnapKitLogger logCreativeKitUiPasteControlEvent:kitSessionId:deeplinkUrl:creativeKitProductType:creativeKitShareType:]
// Type encoding: v56@0:8q16@24@32q40@48
// Implementation: 0x108eced28

// -[SCSnapKitLogger _ckShareType:]
// Type encoding: q24@0:8@16
// Implementation: 0x108ecee0c

// -[SCSnapKitLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108ecee7c

@end
