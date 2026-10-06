// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSASequentialVideoPlayer
// Superclass: NSObject
// Address: 0x112bf86b8

@interface LSASequentialVideoPlayer

// Property: preferredTransform; attributes: T{CGAffineTransform=dddddd},R,N
// Property: transform; attributes: T{RectTransform=i},R,N
// Property: framerate; attributes: Tf,R,N
// Property: presentationTime; attributes: Tf,R,N
// Property: isReady; attributes: TB,R,N
// Property: isFinished; attributes: TB,R,N
// Property: playCount; attributes: Ti,R,N
// Property: currentFrameIndex; attributes: Ti,R,N
// Property: inputPath; attributes: T@"NSString",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[LSASequentialVideoPlayer initWithInputPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ad7b2dc

// -[LSASequentialVideoPlayer getPixelFormat]
// Type encoding: I16@0:8
// Implementation: 0x10ad7b374

// -[LSASequentialVideoPlayer _initializeReader:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad7b380

// -[LSASequentialVideoPlayer prepareWithLoop:]
// Type encoding: v20@0:8B16
// Implementation: 0x10ad7ba98

// -[LSASequentialVideoPlayer initialize]
// Type encoding: v16@0:8
// Implementation: 0x10ad7baa0

// -[LSASequentialVideoPlayer copyNextFrame]
// Type encoding: v16@0:8
// Implementation: 0x10ad7bc94

// -[LSASequentialVideoPlayer getCurrentFrame]
// Type encoding: {CFRefHolder<__CVBuffer *>=^{__CVBuffer}}16@0:8
// Implementation: 0x10ad7be74

// -[LSASequentialVideoPlayer currentFrameIsValid]
// Type encoding: B16@0:8
// Implementation: 0x10ad7bebc

// -[LSASequentialVideoPlayer _stepNextFrame]
// Type encoding: v16@0:8
// Implementation: 0x10ad7bee8

// -[LSASequentialVideoPlayer continueFromStart]
// Type encoding: v16@0:8
// Implementation: 0x10ad7bf5c

// -[LSASequentialVideoPlayer stepByCount:]
// Type encoding: v20@0:8i16
// Implementation: 0x10ad7c064

// -[LSASequentialVideoPlayer restart]
// Type encoding: v16@0:8
// Implementation: 0x10ad7c09c

// -[LSASequentialVideoPlayer preferredTransform]
// Type encoding: {CGAffineTransform=dddddd}16@0:8
// Implementation: 0x10ad7c0c4

// -[LSASequentialVideoPlayer isReady]
// Type encoding: B16@0:8
// Implementation: 0x10ad7c0d8

// -[LSASequentialVideoPlayer isFinished]
// Type encoding: B16@0:8
// Implementation: 0x10ad7c1d4

// -[LSASequentialVideoPlayer playCount]
// Type encoding: i16@0:8
// Implementation: 0x10ad7c1dc

// -[LSASequentialVideoPlayer currentFrameIndex]
// Type encoding: i16@0:8
// Implementation: 0x10ad7c1e4

// -[LSASequentialVideoPlayer inputPath]
// Type encoding: @16@0:8
// Implementation: 0x10ad7c1ec

// -[LSASequentialVideoPlayer transform]
// Type encoding: {RectTransform=i}16@0:8
// Implementation: 0x10ad7c214

// -[LSASequentialVideoPlayer framerate]
// Type encoding: f16@0:8
// Implementation: 0x10ad7c21c

// -[LSASequentialVideoPlayer presentationTime]
// Type encoding: f16@0:8
// Implementation: 0x10ad7c224

// -[LSASequentialVideoPlayer dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10ad7c22c

// -[LSASequentialVideoPlayer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10ad7c2a4

// -[LSASequentialVideoPlayer .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10ad7c2e0

// +[LSASequentialVideoPlayer assetReaderForMovieAsset:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ad7b920

@end
