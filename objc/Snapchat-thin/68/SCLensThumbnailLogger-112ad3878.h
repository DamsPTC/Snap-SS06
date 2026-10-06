// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensThumbnailLogger
// Superclass: NSObject
// Address: 0x112ad3878

@interface SCLensThumbnailLogger

// Property: lensCarouselFunnelLogger; attributes: T@"<SCLensCarouselFunnelLogging>",W,N,V_lensCarouselFunnelLogger
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensThumbnailLogger initWithLogger:performer:lensIconRepository:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100741e9c

// -[SCLensThumbnailLogger setLensCarouselManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062026e0

// -[SCLensThumbnailLogger startWithLensSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106202c14

// -[SCLensThumbnailLogger pauseSession]
// Type encoding: v16@0:8
// Implementation: 0x106202c1c

// -[SCLensThumbnailLogger resumeSessionWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106202cbc

// -[SCLensThumbnailLogger resetSession]
// Type encoding: v16@0:8
// Implementation: 0x106202cc4

// -[SCLensThumbnailLogger stopSession]
// Type encoding: v16@0:8
// Implementation: 0x106202d28

// -[SCLensThumbnailLogger setSnapSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x106202d88

// -[SCLensThumbnailLogger _startSessionWithId:restore:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106202dec

// -[SCLensThumbnailLogger _fireEvent]
// Type encoding: v16@0:8
// Implementation: 0x106202f9c

// -[SCLensThumbnailLogger _isLensReady:]
// Type encoding: B24@0:8@16
// Implementation: 0x106203098

// -[SCLensThumbnailLogger willStartLoadingLens:lensAssets:externalData:fromAsf:lensDataFetcher:]
// Type encoding: v48@0:8@16@24B32B36@40
// Implementation: 0x106203140

// -[SCLensThumbnailLogger willStartLoadingContentForLens:fromCache:fromAsf:lensDataFetcher:]
// Type encoding: v40@0:8@16B24B28@32
// Implementation: 0x106203144

// -[SCLensThumbnailLogger didFinishLoadingContentForLens:contentPath:error:fromCache:fromAsf:lensDataFetcher:]
// Type encoding: v56@0:8@16@24@32B40B44@48
// Implementation: 0x106203250

// -[SCLensThumbnailLogger willStartLoadingImageForLens:fromCache:fromAsf:lensDataFetcher:]
// Type encoding: v40@0:8@16B24B28@32
// Implementation: 0x106203368

// -[SCLensThumbnailLogger didFinishLoadingImageForLens:image:error:fromCache:fromAsf:lensDataFetcher:]
// Type encoding: v56@0:8@16@24@32B40B44@48
// Implementation: 0x106203474

// -[SCLensThumbnailLogger willStartLoadingAsset:lens:fromAsf:lensDataFetcher:]
// Type encoding: v44@0:8@16@24B32@36
// Implementation: 0x10620358c

// -[SCLensThumbnailLogger didFinishLoadingContentForAsset:lens:content:error:fromAsf:lensDataFetcher:]
// Type encoding: v60@0:8@16@24@32@40B48@52
// Implementation: 0x106203590

// -[SCLensThumbnailLogger didFinishLoadingExternalDataForLens:error:fromAsf:lensDataFetcher:]
// Type encoding: v44@0:8@16@24B32@36
// Implementation: 0x106203594

// -[SCLensThumbnailLogger willStartLoadingExternalDataForLens:fromAsf:lensDataFetcher:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x106203598

// -[SCLensThumbnailLogger willShowLensesWithContext:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10620359c

// -[SCLensThumbnailLogger didHideLensesWithContext:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1062035a0

// -[SCLensThumbnailLogger didUpdateActiveLensOrder:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1062035a4

// -[SCLensThumbnailLogger didActivateLens:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106203660

// -[SCLensThumbnailLogger didSelectLens:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106203664

// -[SCLensThumbnailLogger willDisplayLens:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106203668

// -[SCLensThumbnailLogger didUpdateDisplayedLens:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1062037b0

// -[SCLensThumbnailLogger didEndDisplayingLens:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1062037b4

// -[SCLensThumbnailLogger didDrawIcon:forLens:atIndex:withContext:]
// Type encoding: v48@0:8@16@24q32Q40
// Implementation: 0x1062038c0

// -[SCLensThumbnailLogger didActivateCarouselWithLatency:]
// Type encoding: v24@0:8d16
// Implementation: 0x1062039c4

// -[SCLensThumbnailLogger carouselDidActivatedWithType:entranceType:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x106203a38

// -[SCLensThumbnailLogger carouselDidExitWithType:]
// Type encoding: v24@0:8q16
// Implementation: 0x106203ad4

// -[SCLensThumbnailLogger setUserInteractableSession:]
// Type encoding: v20@0:8B16
// Implementation: 0x106203b48

// -[SCLensThumbnailLogger _scaLensCarouselExitTypeWithType:]
// Type encoding: q24@0:8q16
// Implementation: 0x106203bbc

// -[SCLensThumbnailLogger carouselSnapshot]
// Type encoding: @16@0:8
// Implementation: 0x106203be0

// -[SCLensThumbnailLogger _carouselSnapshot]
// Type encoding: @16@0:8
// Implementation: 0x106203d38

// -[SCLensThumbnailLogger lensCarouselFunnelLogger]
// Type encoding: @16@0:8
// Implementation: 0x106203ea4

// -[SCLensThumbnailLogger setLensCarouselFunnelLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x106203ebc

// -[SCLensThumbnailLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106203ec8

@end
