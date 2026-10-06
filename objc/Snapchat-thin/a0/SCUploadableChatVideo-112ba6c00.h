// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUploadableChatVideo
// Superclass: SCBaseUploadableChatMedia
// Address: 0x112ba6c00

@interface SCUploadableChatVideo

// Property: hasSound; attributes: TB,V_hasSound

// -[SCUploadableChatVideo initWithID:mediaType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1085423e0

// -[SCUploadableChatVideo mediaType]
// Type encoding: q16@0:8
// Implementation: 0x108542488

// -[SCUploadableChatVideo isZipped]
// Type encoding: B16@0:8
// Implementation: 0x1085424c8

// -[SCUploadableChatVideo setVideoURL:overlayImage:useWebP:webPQuality:completionQueue:completionBlock:]
// Type encoding: v60@0:8@16@24B32d36@44@?52
// Implementation: 0x1085424d0

// -[SCUploadableChatVideo _thumbnailDataFromAsset:overlayImage:size:]
// Type encoding: @48@0:8@16@24{CGSize=dd}32
// Implementation: 0x108542fb0

// -[SCUploadableChatVideo hasSound]
// Type encoding: B16@0:8
// Implementation: 0x108543160

// -[SCUploadableChatVideo setHasSound:]
// Type encoding: v20@0:8B16
// Implementation: 0x108543174

// -[SCUploadableChatVideo .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108543184

@end
