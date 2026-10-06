// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCachingMediaItem
// Superclass: NSObject
// Address: 0x112ca2190

@interface SCCachingMediaItem

// Property: entity; attributes: T@"<SCCachingMediaEntity>",&,N,V_entity
// Property: imageGenerating; attributes: T@"SCCachingImageGenerating",R,N,V_imageGenerating
// Property: maxImageCount; attributes: Tq,R,N,V_maxImageCount
// Property: sourceLevel; attributes: Tq,R,N,V_sourceLevel
// Property: targetSize; attributes: T{CGSize=dd},R,N,V_targetSize
// Property: cost; attributes: Tq,R,N,V_cost
// Property: lastAccessTime; attributes: T@"NSDate",R,N,V_lastAccessTime
// Property: imageInfoAvailable; attributes: TB,R,N,V_imageInfoAvailable
// Property: identifier; attributes: T@"NSNumber",C,N,V_identifier
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCachingMediaItem initWithContentURL:entity:cachingMediaManager:targetSize:maxSourceLevel:encryption:performer:logger:shouldSkipFileIO:]
// Type encoding: @92@0:8@16@24@32{CGSize=dd}40q56@64@72@80B88
// Implementation: 0x10b67fa58

// -[SCCachingMediaItem readHighestLevelSourceImageInfoFromDisk]
// Type encoding: v16@0:8
// Implementation: 0x10b67fd00

// -[SCCachingMediaItem _processAndDecryptDataFromDisk:sourceLevel:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b67fe60

// -[SCCachingMediaItem readDataImagesIntoMemory]
// Type encoding: v16@0:8
// Implementation: 0x10b6802ac

// -[SCCachingMediaItem _writeLastAccessTimeToDisk]
// Type encoding: v16@0:8
// Implementation: 0x10b680528

// -[SCCachingMediaItem buildImageGeneratingFromSourceItem:requiredSourceLevel:requestOptions:cacheMissHandler:resultHandler:]
// Type encoding: @56@0:8@16q24@32@?40@?48
// Implementation: 0x10b6806ec

// -[SCCachingMediaItem _buildImageGeneratingFromSourceItem:preferDecode:requiredSourceLevel:requestOptions:cacheMissHandler:resultHandler:]
// Type encoding: @60@0:8@16B24q28@36@?44@?52
// Implementation: 0x10b680704

// -[SCCachingMediaItem _decodeImageWithDataImages:sourceLevel:count:requiredSourceLevel:requestOptions:buildRequest:requestGroup:entity:cachingMediaManager:]
// Type encoding: v88@0:8@16q24q32q40@48@56@64@72@80
// Implementation: 0x10b6818bc

// -[SCCachingMediaItem _generateSourceItemWithMediaItem:count:preferDecode:requiredSourceLevel:requestOptions:buildRequest:requestGroup:]
// Type encoding: v68@0:8@16q24B32q36@44@52@60
// Implementation: 0x10b681cf0

// -[SCCachingMediaItem cachingImageGenerating:sourceLevel:imagesGenerated:saveToDisk:]
// Type encoding: v44@0:8@16q24@32B40
// Implementation: 0x10b682a44

// -[SCCachingMediaItem cachingImageGeneratingIsAccessed:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b682bfc

// -[SCCachingMediaItem evict]
// Type encoding: v16@0:8
// Implementation: 0x10b682d08

// -[SCCachingMediaItem cachingEntityKey]
// Type encoding: @16@0:8
// Implementation: 0x10b682d38

// -[SCCachingMediaItem _writeToDiskWithDataImages:sourceLevel:targetSize:faultToMemory:]
// Type encoding: v52@0:8@16q24{CGSize=dd}32B48
// Implementation: 0x10b682e14

// -[SCCachingMediaItem entity]
// Type encoding: @16@0:8
// Implementation: 0x10b6832b0

// -[SCCachingMediaItem setEntity:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6832b8

// -[SCCachingMediaItem imageGenerating]
// Type encoding: @16@0:8
// Implementation: 0x10b6832e8

// -[SCCachingMediaItem maxImageCount]
// Type encoding: q16@0:8
// Implementation: 0x10b6832f0

// -[SCCachingMediaItem sourceLevel]
// Type encoding: q16@0:8
// Implementation: 0x10b6832f8

// -[SCCachingMediaItem targetSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10b683300

// -[SCCachingMediaItem cost]
// Type encoding: q16@0:8
// Implementation: 0x10b683308

// -[SCCachingMediaItem lastAccessTime]
// Type encoding: @16@0:8
// Implementation: 0x10b683310

// -[SCCachingMediaItem imageInfoAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10b683318

// -[SCCachingMediaItem identifier]
// Type encoding: @16@0:8
// Implementation: 0x10b683320

// -[SCCachingMediaItem setIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b683328

// -[SCCachingMediaItem .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b683330

@end
