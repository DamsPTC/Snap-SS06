// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAvatarBuilderMirrorClassifier
// Superclass: NSObject
// Address: 0x112a5cc78

@interface SCAvatarBuilderMirrorClassifier


// -[SCAvatarBuilderMirrorClassifier initWithModelData:configData:circumstanceEngine:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1057054d0

// -[SCAvatarBuilderMirrorClassifier classifySelfie:gender:completion:]
// Type encoding: v40@0:8@16Q24@?32
// Implementation: 0x105705740

// -[SCAvatarBuilderMirrorClassifier _completeSelfieClassificationWithImage:gender:]
// Type encoding: @28@0:8@16I24
// Implementation: 0x105705a54

// -[SCAvatarBuilderMirrorClassifier _preprocessImage:]
// Type encoding: {Mat=iiii****^{MatAllocator}^{UMatData}{MatSize=^i}{MatStep=^Q[2Q]}}24@0:8@16
// Implementation: 0x105705cec

// -[SCAvatarBuilderMirrorClassifier _statusToMirrorClassicationStatus:]
// Type encoding: q20@0:8I16
// Implementation: 0x105706038

// -[SCAvatarBuilderMirrorClassifier _unorderedMapToNSDictionary:]
// Type encoding: @24@0:8r^v16
// Implementation: 0x105706050

// -[SCAvatarBuilderMirrorClassifier _maybeGetDebugCroppedImageWithSelfie:faceBoundingBox:headBoundingBox:]
// Type encoding: @88@0:8r^{Mat=iiii****^{MatAllocator}^{UMatData}{MatSize=^i}{MatStep=^Q[2Q]}}16{CGRect={CGPoint=dd}{CGSize=dd}}24{CGRect={CGPoint=dd}{CGSize=dd}}56
// Implementation: 0x10570616c

// -[SCAvatarBuilderMirrorClassifier .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105706174

// -[SCAvatarBuilderMirrorClassifier .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x1057061ac

// +[SCAvatarBuilderMirrorClassifier _getMirrorWithModelData:configData:]
// Type encoding: {unique_ptr<OE::BitmojiAvatarClassification::System, std::default_delete<OE::BitmojiAvatarClassification::System>>={?=^{System}}}32@0:8@16@24
// Implementation: 0x105705da0

@end
