// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesSendItemsCounter
// Superclass: NSObject
// Address: 0x112b6f818

@interface SCMemoriesSendItemsCounter

// Property: prepareLatencyMs; attributes: TQ,N,V_prepareLatencyMs
// Property: downloadLatencyMs; attributes: TQ,N,V_downloadLatencyMs
// Property: smartShareLatencyMs; attributes: TQ,N,V_smartShareLatencyMs
// Property: transcodeLatencyMs; attributes: TQ,N,V_transcodeLatencyMs
// Property: imageCount; attributes: TQ,N,V_imageCount
// Property: specsImageCount; attributes: TQ,N,V_specsImageCount
// Property: normalVideoCount; attributes: TQ,N,V_normalVideoCount
// Property: specsVideoCount; attributes: TQ,N,V_specsVideoCount
// Property: chatMessageCount; attributes: TQ,N,V_chatMessageCount
// Property: chatMessageSuccessCount; attributes: TQ,N,V_chatMessageSuccessCount
// Property: chatImageSuccessCount; attributes: TQ,N,V_chatImageSuccessCount
// Property: chatNormalVideoSuccessCount; attributes: TQ,N,V_chatNormalVideoSuccessCount
// Property: chatMessageFailureCount; attributes: TQ,N,V_chatMessageFailureCount
// Property: snapSendCount; attributes: TQ,N,V_snapSendCount
// Property: snapSendSuccessCount; attributes: TQ,N,V_snapSendSuccessCount
// Property: snapImageSendSuccessCount; attributes: TQ,N,V_snapImageSendSuccessCount
// Property: snapNormalVideoSendSuccessCount; attributes: TQ,N,V_snapNormalVideoSendSuccessCount
// Property: snapLagunaSdVideoSendSuccessCount; attributes: TQ,N,V_snapLagunaSdVideoSendSuccessCount
// Property: snapLagunaHdVideoSendSuccessCount; attributes: TQ,N,V_snapLagunaHdVideoSendSuccessCount
// Property: snapSendFailureCount; attributes: TQ,N,V_snapSendFailureCount
// Property: storyPostCount; attributes: TQ,N,V_storyPostCount
// Property: storyPostSuccessCount; attributes: TQ,N,V_storyPostSuccessCount
// Property: storyImagePostSuccessCount; attributes: TQ,N,V_storyImagePostSuccessCount
// Property: storyNormalVideoPostSuccessCount; attributes: TQ,N,V_storyNormalVideoPostSuccessCount
// Property: storyLagunaSdVideoPostSuccessCount; attributes: TQ,N,V_storyLagunaSdVideoPostSuccessCount
// Property: storyLagunaHdVideoPostSuccessCount; attributes: TQ,N,V_storyLagunaHdVideoPostSuccessCount
// Property: storyPostFailureCount; attributes: TQ,N,V_storyPostFailureCount
// Property: smartShareCount; attributes: TQ,N,V_smartShareCount
// Property: smartShareImageCount; attributes: TQ,N,V_smartShareImageCount
// Property: smartShareNormalVideoCount; attributes: TQ,N,V_smartShareNormalVideoCount
// Property: smartShareLagunaVideoCount; attributes: TQ,N,V_smartShareLagunaVideoCount
// Property: smartShareSuccessCount; attributes: TQ,N,V_smartShareSuccessCount
// Property: smartShareImageSuccessCount; attributes: TQ,N,V_smartShareImageSuccessCount
// Property: smartShareNormalVideoSuccessCount; attributes: TQ,N,V_smartShareNormalVideoSuccessCount
// Property: smartShareLagunaVideoSuccessCount; attributes: TQ,N,V_smartShareLagunaVideoSuccessCount
// Property: smartShareFailureCount; attributes: TQ,N,V_smartShareFailureCount
// Property: meoCount; attributes: TQ,N,V_meoCount

// -[SCMemoriesSendItemsCounter initWithMediaGroups:]
// Type encoding: @24@0:8@16
// Implementation: 0x107adabd4

// -[SCMemoriesSendItemsCounter countAfterChatMessageWithGalleryMediaGroup:didSucceed:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107adad98

// -[SCMemoriesSendItemsCounter countAfterSnapSendWithGalleryMedia:didSucceed:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107adae3c

// -[SCMemoriesSendItemsCounter countAfterStoryPostWithGalleryMedia:didSucceed:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107adb038

// -[SCMemoriesSendItemsCounter updateSmartShareCountWithSnap:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107adb234

// -[SCMemoriesSendItemsCounter totalCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adb318

// -[SCMemoriesSendItemsCounter _updateSmartShareTotalCountWithMediaType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb354

// -[SCMemoriesSendItemsCounter prepareLatencyMs]
// Type encoding: Q16@0:8
// Implementation: 0x107adb3f8

// -[SCMemoriesSendItemsCounter setPrepareLatencyMs:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb400

// -[SCMemoriesSendItemsCounter downloadLatencyMs]
// Type encoding: Q16@0:8
// Implementation: 0x107adb408

// -[SCMemoriesSendItemsCounter setDownloadLatencyMs:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb410

// -[SCMemoriesSendItemsCounter smartShareLatencyMs]
// Type encoding: Q16@0:8
// Implementation: 0x107adb418

// -[SCMemoriesSendItemsCounter setSmartShareLatencyMs:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb420

// -[SCMemoriesSendItemsCounter transcodeLatencyMs]
// Type encoding: Q16@0:8
// Implementation: 0x107adb428

// -[SCMemoriesSendItemsCounter setTranscodeLatencyMs:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb430

// -[SCMemoriesSendItemsCounter imageCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adb438

// -[SCMemoriesSendItemsCounter setImageCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb440

// -[SCMemoriesSendItemsCounter specsImageCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adb448

// -[SCMemoriesSendItemsCounter setSpecsImageCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb450

// -[SCMemoriesSendItemsCounter normalVideoCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adb458

// -[SCMemoriesSendItemsCounter setNormalVideoCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb460

// -[SCMemoriesSendItemsCounter specsVideoCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adb468

// -[SCMemoriesSendItemsCounter setSpecsVideoCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb470

// -[SCMemoriesSendItemsCounter chatMessageCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adb478

// -[SCMemoriesSendItemsCounter setChatMessageCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb480

// -[SCMemoriesSendItemsCounter chatMessageSuccessCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adb488

// -[SCMemoriesSendItemsCounter setChatMessageSuccessCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb490

// -[SCMemoriesSendItemsCounter chatImageSuccessCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adb498

// -[SCMemoriesSendItemsCounter setChatImageSuccessCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb4a0

// -[SCMemoriesSendItemsCounter chatNormalVideoSuccessCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adb4a8

// -[SCMemoriesSendItemsCounter setChatNormalVideoSuccessCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb4b0

// -[SCMemoriesSendItemsCounter chatMessageFailureCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adb4b8

// -[SCMemoriesSendItemsCounter setChatMessageFailureCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb4c0

// -[SCMemoriesSendItemsCounter snapSendCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adb4c8

// -[SCMemoriesSendItemsCounter setSnapSendCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb4d0

// -[SCMemoriesSendItemsCounter snapSendSuccessCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adb4d8

// -[SCMemoriesSendItemsCounter setSnapSendSuccessCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb4e0

// -[SCMemoriesSendItemsCounter snapImageSendSuccessCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adb4e8

// -[SCMemoriesSendItemsCounter setSnapImageSendSuccessCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb4f0

// -[SCMemoriesSendItemsCounter snapNormalVideoSendSuccessCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adb4f8

// -[SCMemoriesSendItemsCounter setSnapNormalVideoSendSuccessCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb500

// -[SCMemoriesSendItemsCounter snapLagunaSdVideoSendSuccessCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adb508

// -[SCMemoriesSendItemsCounter setSnapLagunaSdVideoSendSuccessCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb510

// -[SCMemoriesSendItemsCounter snapLagunaHdVideoSendSuccessCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adb518

// -[SCMemoriesSendItemsCounter setSnapLagunaHdVideoSendSuccessCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb520

// -[SCMemoriesSendItemsCounter snapSendFailureCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adb528

// -[SCMemoriesSendItemsCounter setSnapSendFailureCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb530

// -[SCMemoriesSendItemsCounter storyPostCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adb538

// -[SCMemoriesSendItemsCounter setStoryPostCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb540

// -[SCMemoriesSendItemsCounter storyPostSuccessCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adb548

// -[SCMemoriesSendItemsCounter setStoryPostSuccessCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb550

// -[SCMemoriesSendItemsCounter storyImagePostSuccessCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adb558

// -[SCMemoriesSendItemsCounter setStoryImagePostSuccessCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb560

// -[SCMemoriesSendItemsCounter storyNormalVideoPostSuccessCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adb568

// -[SCMemoriesSendItemsCounter setStoryNormalVideoPostSuccessCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb570

// -[SCMemoriesSendItemsCounter storyLagunaSdVideoPostSuccessCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adb578

// -[SCMemoriesSendItemsCounter setStoryLagunaSdVideoPostSuccessCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb580

// -[SCMemoriesSendItemsCounter storyLagunaHdVideoPostSuccessCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adb588

// -[SCMemoriesSendItemsCounter setStoryLagunaHdVideoPostSuccessCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb590

// -[SCMemoriesSendItemsCounter storyPostFailureCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adb598

// -[SCMemoriesSendItemsCounter setStoryPostFailureCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb5a0

// -[SCMemoriesSendItemsCounter smartShareCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adb5a8

// -[SCMemoriesSendItemsCounter setSmartShareCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb5b0

// -[SCMemoriesSendItemsCounter smartShareImageCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adb5b8

// -[SCMemoriesSendItemsCounter setSmartShareImageCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb5c0

// -[SCMemoriesSendItemsCounter smartShareNormalVideoCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adb5c8

// -[SCMemoriesSendItemsCounter setSmartShareNormalVideoCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb5d0

// -[SCMemoriesSendItemsCounter smartShareLagunaVideoCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adb5d8

// -[SCMemoriesSendItemsCounter setSmartShareLagunaVideoCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb5e0

// -[SCMemoriesSendItemsCounter smartShareSuccessCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adb5e8

// -[SCMemoriesSendItemsCounter setSmartShareSuccessCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb5f0

// -[SCMemoriesSendItemsCounter smartShareImageSuccessCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adb5f8

// -[SCMemoriesSendItemsCounter setSmartShareImageSuccessCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb600

// -[SCMemoriesSendItemsCounter smartShareNormalVideoSuccessCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adb608

// -[SCMemoriesSendItemsCounter setSmartShareNormalVideoSuccessCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb610

// -[SCMemoriesSendItemsCounter smartShareLagunaVideoSuccessCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adb618

// -[SCMemoriesSendItemsCounter setSmartShareLagunaVideoSuccessCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb620

// -[SCMemoriesSendItemsCounter smartShareFailureCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adb628

// -[SCMemoriesSendItemsCounter setSmartShareFailureCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb630

// -[SCMemoriesSendItemsCounter meoCount]
// Type encoding: Q16@0:8
// Implementation: 0x107adb638

// -[SCMemoriesSendItemsCounter setMeoCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adb640

@end
