// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExternalMediaStreamServiceImpl
// Superclass: NSObject
// Address: 0x112acc398

@interface SCLensExternalMediaStreamServiceImpl

// Property: mediaSource; attributes: T@"SCLensExternalMediaSource",R,N,V_mediaSource
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensExternalMediaStreamServiceImpl initWithExternalStreamProvider:ngsmePlaybackServices:ngsmeSnapDocResolverServices:videoImportServices:memoriesMediaRetriever:cameraConfig:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10611e784

// -[SCLensExternalMediaStreamServiceImpl configureExternalTextureStreamWithMediaSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x10611e8cc

// -[SCLensExternalMediaStreamServiceImpl resetMediaSource]
// Type encoding: v16@0:8
// Implementation: 0x10611ed7c

// -[SCLensExternalMediaStreamServiceImpl addExternalTextureStreamWithResourceId:effectId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10611edc4

// -[SCLensExternalMediaStreamServiceImpl removeExternalTextureStreamWithResourceId:effectId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10611eed8

// -[SCLensExternalMediaStreamServiceImpl _completePromise:withObject:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10611efac

// -[SCLensExternalMediaStreamServiceImpl _completePromise:withError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10611efb8

// -[SCLensExternalMediaStreamServiceImpl _updateWithURL:isVideo:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10611efc4

// -[SCLensExternalMediaStreamServiceImpl _updateWithAsset:isVideo:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10611f23c

// -[SCLensExternalMediaStreamServiceImpl _updateWithSnapDoc:]
// Type encoding: v24@0:8@16
// Implementation: 0x10611f714

// -[SCLensExternalMediaStreamServiceImpl _updateWithVideo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10611f928

// -[SCLensExternalMediaStreamServiceImpl _updateWithSnapId:isVideo:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10611fa80

// -[SCLensExternalMediaStreamServiceImpl _updateWithData:isVideo:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10611fe10

// -[SCLensExternalMediaStreamServiceImpl _updateWithImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x10611ffec

// -[SCLensExternalMediaStreamServiceImpl _updateWithVideoSnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x106120058

// -[SCLensExternalMediaStreamServiceImpl mediaSource]
// Type encoding: @16@0:8
// Implementation: 0x10612011c

// -[SCLensExternalMediaStreamServiceImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106120124

@end
