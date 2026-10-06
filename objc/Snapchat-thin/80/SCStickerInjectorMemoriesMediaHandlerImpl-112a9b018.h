// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStickerInjectorMemoriesMediaHandlerImpl
// Superclass: NSObject
// Address: 0x112a9b018

@interface SCStickerInjectorMemoriesMediaHandlerImpl

// Property: containerViewController; attributes: T@"UIViewController<SCPageNameLogging>",W,N,V_containerViewController
// Property: workFlowDelegate; attributes: T@"<SCMemoriesPickerScopeDelegate>",W,N,V_workFlowDelegate
// Property: lastSelectedPHAssetLocalID; attributes: T@"NSString",?,&,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStickerInjectorMemoriesMediaHandlerImpl initWithMemoriesPickerFeatureLauncher:memoriesPickerScopeServices:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105d09604

// -[SCStickerInjectorMemoriesMediaHandlerImpl launchMemoriesImagePickerWithPresentingViewController:targetImageSizeBlock:completion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x105d096a8

// -[SCStickerInjectorMemoriesMediaHandlerImpl imageForAsset:targetSize:completion:]
// Type encoding: v48@0:8@16{CGSize=dd}24@?40
// Implementation: 0x105d09764

// -[SCStickerInjectorMemoriesMediaHandlerImpl dismissMemoriesPicker]
// Type encoding: v16@0:8
// Implementation: 0x105d098a0

// -[SCStickerInjectorMemoriesMediaHandlerImpl handleActionWithSender:actionModel:fromSourceView:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x105d098c4

// -[SCStickerInjectorMemoriesMediaHandlerImpl requestToDismissPage]
// Type encoding: v16@0:8
// Implementation: 0x105d09a50

// -[SCStickerInjectorMemoriesMediaHandlerImpl _launchMemoriesPickerWithPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d09a54

// -[SCStickerInjectorMemoriesMediaHandlerImpl _imageForAsset:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d09c34

// -[SCStickerInjectorMemoriesMediaHandlerImpl _completeWithImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d09d80

// -[SCStickerInjectorMemoriesMediaHandlerImpl _dismissMemoriesPicker]
// Type encoding: v16@0:8
// Implementation: 0x105d09dcc

// -[SCStickerInjectorMemoriesMediaHandlerImpl _showLoadingIndicator]
// Type encoding: v16@0:8
// Implementation: 0x105d09e04

// -[SCStickerInjectorMemoriesMediaHandlerImpl _hideLoadingIndicator]
// Type encoding: v16@0:8
// Implementation: 0x105d09f1c

// -[SCStickerInjectorMemoriesMediaHandlerImpl containerViewController]
// Type encoding: @16@0:8
// Implementation: 0x105d09f58

// -[SCStickerInjectorMemoriesMediaHandlerImpl setContainerViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d09f70

// -[SCStickerInjectorMemoriesMediaHandlerImpl workFlowDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105d09f7c

// -[SCStickerInjectorMemoriesMediaHandlerImpl setWorkFlowDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d09f94

// -[SCStickerInjectorMemoriesMediaHandlerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105d09fa0

@end
