// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVideoReverseProcessor
// Superclass: NSObject
// Address: 0x112ba7718

@interface SCVideoReverseProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCVideoReverseProcessor initWithVideoAsset:outputURL:targetBitrate:targetSize:targetTransform:shouldInvolveAudioTrack:]
// Type encoding: @108@0:8@16@24d32{CGSize=dd}40{CGAffineTransform=dddddd}56B104
// Implementation: 0x108567e90

// -[SCVideoReverseProcessor processWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108567f7c

// -[SCVideoReverseProcessor _finishWritingWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108568678

// -[SCVideoReverseProcessor _setupWriterVideoInput]
// Type encoding: v16@0:8
// Implementation: 0x1085687bc

// -[SCVideoReverseProcessor _setupWriterAudioInput]
// Type encoding: v16@0:8
// Implementation: 0x108568a20

// -[SCVideoReverseProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108568b84

// +[SCVideoReverseProcessor performer]
// Type encoding: @16@0:8
// Implementation: 0x108567dc4

@end
