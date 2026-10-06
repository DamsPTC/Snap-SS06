// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlusAIStickersDataSourceImpl
// Superclass: NSObject
// Address: 0x112afa798

@interface SCPlusAIStickersDataSourceImpl

// Property: delegate; attributes: T@"<SCPlusAIStickersDataSourceImplDelegate>",R,W,N,V_delegate
// Property: generationState; attributes: T@"SCPlusAIStickerGenerationState",R,N
// Property: generationStateObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: inputText; attributes: T@"NSString",R,C,N,V_inputText
// Property: items; attributes: T@"NSArray",R,C,N
// Property: itemUpdates; attributes: T@"SCObservable",R,N

// -[SCPlusAIStickersDataSourceImpl initWithInputText:uiContainer:plusServices:imageFetchingService:customStickerManager:minervaGrpcService:featureSettingsService:notificationPool:subscribeScopeExposer:subscribeScopeServices:legalTrayScopeFactoryServices:reportScopeExposer:performer:delegate:]
// Type encoding: @128@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120
// Implementation: 0x1067999f8

// -[SCPlusAIStickersDataSourceImpl generationStateObservable]
// Type encoding: @16@0:8
// Implementation: 0x106799d64

// -[SCPlusAIStickersDataSourceImpl generationState]
// Type encoding: @16@0:8
// Implementation: 0x106799d6c

// -[SCPlusAIStickersDataSourceImpl didTapGenerateCell]
// Type encoding: v16@0:8
// Implementation: 0x106799d94

// -[SCPlusAIStickersDataSourceImpl didSelectSticker:atIndex:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106799f3c

// -[SCPlusAIStickersDataSourceImpl didLongPressSticker:]
// Type encoding: v24@0:8@16
// Implementation: 0x10679a0e0

// -[SCPlusAIStickersDataSourceImpl willDisplayGenerateCell]
// Type encoding: v16@0:8
// Implementation: 0x10679a46c

// -[SCPlusAIStickersDataSourceImpl willDisplayStickerCellAtIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10679a584

// -[SCPlusAIStickersDataSourceImpl _logItemTap:index:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10679a594

// -[SCPlusAIStickersDataSourceImpl _logItemImpression:index:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10679a650

// -[SCPlusAIStickersDataSourceImpl _generate]
// Type encoding: v16@0:8
// Implementation: 0x10679a70c

// -[SCPlusAIStickersDataSourceImpl _updateGenerationState:]
// Type encoding: v24@0:8@16
// Implementation: 0x10679a8e8

// -[SCPlusAIStickersDataSourceImpl _presentSubscribePage]
// Type encoding: v16@0:8
// Implementation: 0x10679ab2c

// -[SCPlusAIStickersDataSourceImpl _presentLegalTray]
// Type encoding: v16@0:8
// Implementation: 0x10679abe8

// -[SCPlusAIStickersDataSourceImpl _presentReportPageForReportParams:]
// Type encoding: v24@0:8@16
// Implementation: 0x10679ac54

// -[SCPlusAIStickersDataSourceImpl _showGenericErrorToast]
// Type encoding: v16@0:8
// Implementation: 0x10679acd8

// -[SCPlusAIStickersDataSourceImpl items]
// Type encoding: @16@0:8
// Implementation: 0x10679ad60

// -[SCPlusAIStickersDataSourceImpl itemUpdates]
// Type encoding: @16@0:8
// Implementation: 0x10679ad88

// -[SCPlusAIStickersDataSourceImpl plusSubscribeDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x10679adb0

// -[SCPlusAIStickersDataSourceImpl aiStickersLegalTrayDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x10679adf8

// -[SCPlusAIStickersDataSourceImpl generativeContentReportDidCompleteWithCancelled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10679ae64

// -[SCPlusAIStickersDataSourceImpl _generateStickersForPrompt:]
// Type encoding: @24@0:8@16
// Implementation: 0x10679aeac

// -[SCPlusAIStickersDataSourceImpl _generateOptionalStickerForPrompt:variation:]
// Type encoding: @28@0:8@16i24
// Implementation: 0x10679b124

// -[SCPlusAIStickersDataSourceImpl _generateStickerForPrompt:variation:]
// Type encoding: @28@0:8@16i24
// Implementation: 0x10679b25c

// -[SCPlusAIStickersDataSourceImpl inputText]
// Type encoding: @16@0:8
// Implementation: 0x10679bb58

// -[SCPlusAIStickersDataSourceImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x10679bb60

// -[SCPlusAIStickersDataSourceImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10679bb78

// +[SCPlusAIStickersDataSourceImpl _imageFetchRequestForMediaInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x10679b864

@end
