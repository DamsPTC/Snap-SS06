// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAsset
// Superclass: NSObject
// Address: 0x112be7408

@interface SCAsset

// Property: internalNativeAsset; attributes: T@"AVAsset",&,V_internalNativeAsset
// Property: mediaContextType; attributes: Tq,N,V_mediaContextType
// Property: mediaDataProvider; attributes: T@"<SCPlaybackAssetMediaDataProvider>",R,N
// Property: contentViewSource; attributes: Tq,N,V_contentViewSource
// Property: subtitlesUrl; attributes: T@"NSURL",&,N,VsubtitlesUrl
// Property: prefetchHintKiBPerTimeWindow; attributes: T@"NSArray",C,N,VprefetchHintKiBPerTimeWindow
// Property: prefetchHintTimeWindowMs; attributes: Tq,N,VprefetchHintTimeWindowMs
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAsset initWithAVAsset:]
// Type encoding: @24@0:8@16
// Implementation: 0x10910ebf0

// -[SCAsset initWithLanguageToSubtitleAsset:]
// Type encoding: @24@0:8@16
// Implementation: 0x10910ec6c

// -[SCAsset initWithAVAsset:mediaDataProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10910ecec

// -[SCAsset _setup]
// Type encoding: v16@0:8
// Implementation: 0x10910ed98

// -[SCAsset nativeAsset]
// Type encoding: @16@0:8
// Implementation: 0x10910ee18

// -[SCAsset languageToSubtitleAsset]
// Type encoding: @16@0:8
// Implementation: 0x10910ee40

// -[SCAsset mediaContextType]
// Type encoding: q16@0:8
// Implementation: 0x10910ee68

// -[SCAsset lazyDataProvider]
// Type encoding: @16@0:8
// Implementation: 0x10910ee70

// -[SCAsset setViewLocation:]
// Type encoding: v24@0:8q16
// Implementation: 0x10910ee98

// -[SCAsset reset]
// Type encoding: v16@0:8
// Implementation: 0x10910ef6c

// -[SCAsset _didResetWithResponse:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10910f0f8

// -[SCAsset mediaDataProvider]
// Type encoding: @16@0:8
// Implementation: 0x10910f0fc

// -[SCAsset loadValuesForKeys:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10910f104

// -[SCAsset _loadValuesForKeys:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10910f264

// -[SCAsset loadSubtitlesWithMainQueueCallback:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10910f818

// -[SCAsset duration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x10910fa6c

// -[SCAsset tracks]
// Type encoding: @16@0:8
// Implementation: 0x10910fb70

// -[SCAsset _valueCacheReadForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x10910fbfc

// -[SCAsset _valueCachePutForKey:value:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10910fc74

// -[SCAsset _valueCacheCachedKeys]
// Type encoding: @16@0:8
// Implementation: 0x10910fcf0

// -[SCAsset setBufferedContentFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x10910fd78

// -[SCAsset downloadAndSitchURLFor:mediaContextType:encryptionKey:encryptionIV:]
// Type encoding: @48@0:8@16q24@32@40
// Implementation: 0x10910fda8

// -[SCAsset subtitlesUrl]
// Type encoding: @16@0:8
// Implementation: 0x1091100e0

// -[SCAsset setSubtitlesUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091100e8

// -[SCAsset contentViewSource]
// Type encoding: q16@0:8
// Implementation: 0x109110118

// -[SCAsset setContentViewSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x109110120

// -[SCAsset prefetchHintKiBPerTimeWindow]
// Type encoding: @16@0:8
// Implementation: 0x109110128

// -[SCAsset setPrefetchHintKiBPerTimeWindow:]
// Type encoding: v24@0:8@16
// Implementation: 0x109110130

// -[SCAsset prefetchHintTimeWindowMs]
// Type encoding: q16@0:8
// Implementation: 0x109110138

// -[SCAsset setPrefetchHintTimeWindowMs:]
// Type encoding: v24@0:8q16
// Implementation: 0x109110140

// -[SCAsset setMediaContextType:]
// Type encoding: v24@0:8q16
// Implementation: 0x109110148

// -[SCAsset internalNativeAsset]
// Type encoding: @16@0:8
// Implementation: 0x109110150

// -[SCAsset setInternalNativeAsset:]
// Type encoding: v24@0:8@16
// Implementation: 0x10911015c

// -[SCAsset .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109110164

@end
