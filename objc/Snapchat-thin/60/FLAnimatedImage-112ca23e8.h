// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FLAnimatedImage
// Superclass: NSObject
// Address: 0x112ca23e8

@interface FLAnimatedImage

// Property: frameCacheSizeOptimal; attributes: TQ,R,N,V_frameCacheSizeOptimal
// Property: frameCacheSizeMaxInternal; attributes: TQ,N,V_frameCacheSizeMaxInternal
// Property: requestedFrameIndex; attributes: TQ,N,V_requestedFrameIndex
// Property: posterImageFrameIndex; attributes: TQ,R,N,V_posterImageFrameIndex
// Property: cachedFramesForIndexes; attributes: T@"NSMutableDictionary",R,N,V_cachedFramesForIndexes
// Property: cachedFrameIndexes; attributes: T@"NSMutableIndexSet",R,N,V_cachedFrameIndexes
// Property: requestedFrameIndexes; attributes: T@"NSMutableIndexSet",R,N,V_requestedFrameIndexes
// Property: allFramesIndexSet; attributes: T@"NSIndexSet",R,N,V_allFramesIndexSet
// Property: memoryWarningCount; attributes: TQ,N,V_memoryWarningCount
// Property: serialQueue; attributes: T@"NSObject<OS_dispatch_queue>",R,N,V_serialQueue
// Property: animationImages; attributes: T@"NSArray",R,C,N,V_animationImages
// Property: imageGenerating; attributes: T@"<FLAnimatedImageGenerating>",R,N,V_imageGenerating
// Property: imageSource; attributes: T^{CGImageSource=},R,N,V_imageSource
// Property: weakProxy; attributes: T@"FLAnimatedImage",R,N,V_weakProxy
// Property: pendingIndexes; attributes: T@"NSMutableArray",&,N,V_pendingIndexes
// Property: runningPendingIndexing; attributes: TB,N,V_runningPendingIndexing
// Property: imageGeneratingRequest; attributes: T@"<FLAnimatedImageGeneratingRequest>",&,N,V_imageGeneratingRequest
// Property: posterImage; attributes: T@"UIImage",R,N,V_posterImage
// Property: size; attributes: T{CGSize=dd},R,N,V_size
// Property: loopCount; attributes: TQ,R,N,V_loopCount
// Property: delayTimesForIndexes; attributes: T@"NSDictionary",R,N,V_delayTimesForIndexes
// Property: frameCount; attributes: TQ,R,N,V_frameCount
// Property: frameCacheSizeCurrent; attributes: TQ,R,N
// Property: frameCacheSizeMax; attributes: TQ,N,V_frameCacheSizeMax
// Property: data; attributes: T@"NSData",R,N,V_data

// -[FLAnimatedImage frameCacheSizeCurrent]
// Type encoding: Q16@0:8
// Implementation: 0x10b68a618

// -[FLAnimatedImage setFrameCacheSizeMax:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b68a67c

// -[FLAnimatedImage setFrameCacheSizeMaxInternal:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b68a6c8

// -[FLAnimatedImage initWithAnimationImages:timeInterval:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x10b68a868

// -[FLAnimatedImage initWithImageGenerating:timeInterval:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x10b68acb4

// -[FLAnimatedImage initWithAnimatedGIFData:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b68b0f8

// -[FLAnimatedImage dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10b68b708

// -[FLAnimatedImage imageLazilyCachedAtIndex:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10b68b770

// -[FLAnimatedImage addFrameIndexesToCache:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b68b914

// -[FLAnimatedImage addFrameToCache:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b68bd14

// -[FLAnimatedImage predrawnImageAtIndex:resultHandler:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x10b68c0dc

// -[FLAnimatedImage frameIndexesToCache]
// Type encoding: @16@0:8
// Implementation: 0x10b68c374

// -[FLAnimatedImage purgeFrameCacheIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10b68c474

// -[FLAnimatedImage growFrameCacheSizeAfterMemoryWarning:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b68c630

// -[FLAnimatedImage resetFrameCacheSizeMaxInternal]
// Type encoding: v16@0:8
// Implementation: 0x10b68c68c

// -[FLAnimatedImage didReceiveMemoryWarning:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b68c694

// -[FLAnimatedImage description]
// Type encoding: @16@0:8
// Implementation: 0x10b68c960

// -[FLAnimatedImage posterImage]
// Type encoding: @16@0:8
// Implementation: 0x10b68ca30

// -[FLAnimatedImage size]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10b68ca38

// -[FLAnimatedImage loopCount]
// Type encoding: Q16@0:8
// Implementation: 0x10b68ca40

// -[FLAnimatedImage delayTimesForIndexes]
// Type encoding: @16@0:8
// Implementation: 0x10b68ca48

// -[FLAnimatedImage frameCount]
// Type encoding: Q16@0:8
// Implementation: 0x10b68ca50

// -[FLAnimatedImage frameCacheSizeMax]
// Type encoding: Q16@0:8
// Implementation: 0x10b68ca58

// -[FLAnimatedImage data]
// Type encoding: @16@0:8
// Implementation: 0x10b68ca60

// -[FLAnimatedImage frameCacheSizeOptimal]
// Type encoding: Q16@0:8
// Implementation: 0x10b68ca68

// -[FLAnimatedImage frameCacheSizeMaxInternal]
// Type encoding: Q16@0:8
// Implementation: 0x10b68ca70

// -[FLAnimatedImage requestedFrameIndex]
// Type encoding: Q16@0:8
// Implementation: 0x10b68ca78

// -[FLAnimatedImage setRequestedFrameIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b68ca80

// -[FLAnimatedImage posterImageFrameIndex]
// Type encoding: Q16@0:8
// Implementation: 0x10b68ca88

// -[FLAnimatedImage cachedFramesForIndexes]
// Type encoding: @16@0:8
// Implementation: 0x10b68ca90

// -[FLAnimatedImage cachedFrameIndexes]
// Type encoding: @16@0:8
// Implementation: 0x10b68ca98

// -[FLAnimatedImage requestedFrameIndexes]
// Type encoding: @16@0:8
// Implementation: 0x10b68caa0

// -[FLAnimatedImage allFramesIndexSet]
// Type encoding: @16@0:8
// Implementation: 0x10b68caa8

// -[FLAnimatedImage memoryWarningCount]
// Type encoding: Q16@0:8
// Implementation: 0x10b68cab0

// -[FLAnimatedImage setMemoryWarningCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b68cab8

// -[FLAnimatedImage serialQueue]
// Type encoding: @16@0:8
// Implementation: 0x10b68cac0

// -[FLAnimatedImage animationImages]
// Type encoding: @16@0:8
// Implementation: 0x10b68cac8

// -[FLAnimatedImage imageGenerating]
// Type encoding: @16@0:8
// Implementation: 0x10b68cad0

// -[FLAnimatedImage imageSource]
// Type encoding: ^{CGImageSource=}16@0:8
// Implementation: 0x10b68cad8

// -[FLAnimatedImage weakProxy]
// Type encoding: @16@0:8
// Implementation: 0x10b68cae0

// -[FLAnimatedImage pendingIndexes]
// Type encoding: @16@0:8
// Implementation: 0x10b68cae8

// -[FLAnimatedImage setPendingIndexes:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b68caf0

// -[FLAnimatedImage runningPendingIndexing]
// Type encoding: B16@0:8
// Implementation: 0x10b68cb20

// -[FLAnimatedImage setRunningPendingIndexing:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b68cb28

// -[FLAnimatedImage imageGeneratingRequest]
// Type encoding: @16@0:8
// Implementation: 0x10b68cb30

// -[FLAnimatedImage setImageGeneratingRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b68cb38

// -[FLAnimatedImage .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b68cb68

// +[FLAnimatedImage initialize]
// Type encoding: v16@0:8
// Implementation: 0x10b68a714

// +[FLAnimatedImage sizeForImage:]
// Type encoding: {CGSize=dd}24@0:8@16
// Implementation: 0x10b68c048

// +[FLAnimatedImage predrawnImageFromImage:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b68c7ac

@end
