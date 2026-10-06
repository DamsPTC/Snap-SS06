// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: PINDiskCache
// Superclass: NSObject
// Address: 0x112cd3718

@interface PINDiskCache

// Property: name; attributes: T@"NSString",C,N,V_name
// Property: byteCount; attributes: TQ,V_byteCount
// Property: cacheURL; attributes: T@"NSURL",&,N,V_cacheURL
// Property: operationQueue; attributes: T@"PINOperationQueue",&,N,V_operationQueue
// Property: dates; attributes: T@"NSMutableDictionary",&,N,V_dates
// Property: sizes; attributes: T@"NSMutableDictionary",&,N,V_sizes
// Property: metadata; attributes: T@"NSMutableDictionary",&,N,V_metadata
// Property: deadFiles; attributes: T@"NSArray",&,N,V_deadFiles
// Property: prefix; attributes: T@"NSString",R,V_prefix
// Property: byteLimit; attributes: TQ,V_byteLimit
// Property: count; attributes: TQ,R,N
// Property: ageLimit; attributes: Td,V_ageLimit
// Property: fileExtension; attributes: T@"NSString",R,V_fileExtension
// Property: writingProtectionOption; attributes: TQ,V_writingProtectionOption
// Property: ttlCache; attributes: TB,N,GisTTLCache,V_ttlCache
// Property: evictPolicyBlock; attributes: T@?,R,V_evictPolicyBlock
// Property: willAddObjectBlock; attributes: T@?,C,V_willAddObjectBlock
// Property: willRemoveObjectBlock; attributes: T@?,C,V_willRemoveObjectBlock
// Property: willRemoveAllObjectsBlock; attributes: T@?,C,V_willRemoveAllObjectsBlock
// Property: didAddObjectBlock; attributes: T@?,C,V_didAddObjectBlock
// Property: didRemoveObjectBlock; attributes: T@?,C,V_didRemoveObjectBlock
// Property: didRemoveAllObjectsBlock; attributes: T@?,C,V_didRemoveAllObjectsBlock
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[PINDiskCache init]
// Type encoding: @16@0:8
// Implementation: 0x10b7ced60

// -[PINDiskCache initWithName:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b7cedb8

// -[PINDiskCache initWithName:fileExtension:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b7cedc0

// -[PINDiskCache initWithName:rootPath:fileExtension:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10b7cee6c

// -[PINDiskCache initWithName:rootPath:serializer:deserializer:fileExtension:]
// Type encoding: @56@0:8@16@24@?32@?40@48
// Implementation: 0x10b7cee7c

// -[PINDiskCache initWithName:rootPath:serializer:deserializer:fileExtension:operationQueue:]
// Type encoding: @64@0:8@16@24@?32@?40@48@56
// Implementation: 0x10b7cefa0

// -[PINDiskCache initWithName:prefix:rootPath:serializer:deserializer:fileExtension:operationQueue:]
// Type encoding: @72@0:8@16@24@32@?40@?48@56@64
// Implementation: 0x10b7cefdc

// -[PINDiskCache initWithName:prefix:rootPath:serializer:deserializer:fileExtension:operationQueue:evictionPolicy:]
// Type encoding: @80@0:8@16@24@32@?40@?48@56@64@?72
// Implementation: 0x10044a43c

// -[PINDiskCache encodedFileURLForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x10081dd88

// -[PINDiskCache keyForEncodedFileURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x10081ac28

// -[PINDiskCache encodedString:]
// Type encoding: @24@0:8@16
// Implementation: 0x10081de3c

// -[PINDiskCache decodedString:]
// Type encoding: @24@0:8@16
// Implementation: 0x10081ac9c

// -[PINDiskCache defaultSerializer]
// Type encoding: @?16@0:8
// Implementation: 0x10b7cf008

// -[PINDiskCache defaultDeserializer]
// Type encoding: @?16@0:8
// Implementation: 0x10b7cf044

// -[PINDiskCache _locked_createCacheDirectory]
// Type encoding: B16@0:8
// Implementation: 0x10044b094

// -[PINDiskCache _locked_initializeDiskProperties]
// Type encoding: v16@0:8
// Implementation: 0x10044bd30

// -[PINDiskCache asynchronouslySetFileModificationDate:forURL:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100822b98

// -[PINDiskCache _locked_setFileModificationDate:forURL:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x100823eb4

// -[PINDiskCache _locked_removeMetadataAssociatedWithKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7cf81c

// -[PINDiskCache removeFileAndExecuteBlocksForKey:withReason:]
// Type encoding: B32@0:8@16Q24
// Implementation: 0x10b7cf880

// -[PINDiskCache trimDiskToSize:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b7cfb04

// -[PINDiskCache trimDiskToSizeByDate:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10044c570

// -[PINDiskCache trimDiskToSizeByPolicy:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b7cfb14

// -[PINDiskCache trimDiskImmediatelyToSizeByPolicy:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b7cfb94

// -[PINDiskCache _trimDiskToSize:evictPolicy:reason:]
// Type encoding: v40@0:8Q16@?24Q32
// Implementation: 0x10044c580

// -[PINDiskCache trimDiskToDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7cfc20

// -[PINDiskCache trimToAgeLimitRecursively]
// Type encoding: v16@0:8
// Implementation: 0x10b7cfe20

// -[PINDiskCache lockFileAccessWhileExecutingBlockAsync:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7d008c

// -[PINDiskCache containsObjectForKeyAsync:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7d0214

// -[PINDiskCache objectForKeyAsync:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10081d780

// -[PINDiskCache metadataForKeyAsync:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7d03e4

// -[PINDiskCache fileURLForKeyAsync:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7d05d0

// -[PINDiskCache cacheKeyMetadataList]
// Type encoding: @16@0:8
// Implementation: 0x10b7d07d0

// -[PINDiskCache updateMetadataAsync:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b7d0a78

// -[PINDiskCache setObjectAsync:forKey:metadata:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10b7d0c90

// -[PINDiskCache setObjectAsync:forKey:cost:metadata:completion:]
// Type encoding: v56@0:8@16@24Q32@40@?48
// Implementation: 0x10b7d0f18

// -[PINDiskCache removeObjectForKeyAsync:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7d0f24

// -[PINDiskCache removeObjectsForKeysAsync:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7d1134

// -[PINDiskCache trimToSizeAsync:completion:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x10b7d13f4

// -[PINDiskCache trimToDateAsync:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7d1408

// -[PINDiskCache trimToSizeByDateAsync:completion:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x10b7d15a4

// -[PINDiskCache trimToSizeByPolicyAsync:completion:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x10b7d15b8

// -[PINDiskCache _trimToSizeAsync:evictPolicy:reason:completion:]
// Type encoding: v48@0:8Q16@?24Q32@?40
// Implementation: 0x10b7d1644

// -[PINDiskCache removeAllObjectsAsync:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7d18bc

// -[PINDiskCache cleanupDeadFilesAsync]
// Type encoding: v16@0:8
// Implementation: 0x10b7d1a3c

// -[PINDiskCache enumerateObjectsWithBlockAsync:completionBlock:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x10b7d1d68

// -[PINDiskCache enumerateObjectsWithMetadataBlockAsync:completionBlock:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x10b7d1f74

// -[PINDiskCache synchronouslyLockFileAccessWhileExecutingBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7d2138

// -[PINDiskCache containsObjectForKey:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b7d219c

// -[PINDiskCache objectForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b7d21d4

// -[PINDiskCache objectForKey:metadata:]
// Type encoding: @32@0:8@16o^@24
// Implementation: 0x10b7d21f4

// -[PINDiskCache objectForKey:fileURL:metadata:]
// Type encoding: @40@0:8@16^@24o^@32
// Implementation: 0x10081d9e0

// -[PINDiskCache fileURLForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b7d2218

// -[PINDiskCache fileURLForKey:updateFileModificationDate:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x10b7d2240

// -[PINDiskCache _locked_updateMetadata:forKey:fileURL:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10b7d23dc

// -[PINDiskCache setObject:forKey:metadata:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x10b7d247c

// -[PINDiskCache setObject:forKey:cost:metadata:]
// Type encoding: B48@0:8@16@24Q32@40
// Implementation: 0x10b7d2484

// -[PINDiskCache setObject:forKey:metadata:fileURL:]
// Type encoding: B48@0:8@16@24@32^@40
// Implementation: 0x10b7d248c

// -[PINDiskCache removeObjectForKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7d2930

// -[PINDiskCache removeObjectForKey:fileURL:]
// Type encoding: v32@0:8@16^@24
// Implementation: 0x10b7d2938

// -[PINDiskCache trimToSize:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b7d29e0

// -[PINDiskCache trimToDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7d29ec

// -[PINDiskCache trimToSizeByDate:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b7d2a94

// -[PINDiskCache trimToSizeByPolicy:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b7d2aa0

// -[PINDiskCache trimImmediatelyToSizeByPolicy:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b7d2aac

// -[PINDiskCache removeAllObjects]
// Type encoding: v16@0:8
// Implementation: 0x10b7d2ab8

// -[PINDiskCache enumerateObjectsWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7d2bbc

// -[PINDiskCache enumerateObjectsWithMetadataBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7d2e24

// -[PINDiskCache willAddObjectBlock]
// Type encoding: @?16@0:8
// Implementation: 0x10b7d30c4

// -[PINDiskCache setWillAddObjectBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7d3128

// -[PINDiskCache willRemoveObjectBlock]
// Type encoding: @?16@0:8
// Implementation: 0x10b7d32b4

// -[PINDiskCache setWillRemoveObjectBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7d3318

// -[PINDiskCache willRemoveAllObjectsBlock]
// Type encoding: @?16@0:8
// Implementation: 0x10b7d34a4

// -[PINDiskCache setWillRemoveAllObjectsBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7d3508

// -[PINDiskCache didAddObjectBlock]
// Type encoding: @?16@0:8
// Implementation: 0x10b7d3694

// -[PINDiskCache setDidAddObjectBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7d36f8

// -[PINDiskCache didRemoveObjectBlock]
// Type encoding: @?16@0:8
// Implementation: 0x10b7d3884

// -[PINDiskCache setDidRemoveObjectBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10044a900

// -[PINDiskCache didRemoveAllObjectsBlock]
// Type encoding: @?16@0:8
// Implementation: 0x10b7d38e8

// -[PINDiskCache setDidRemoveAllObjectsBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7d394c

// -[PINDiskCache evictPolicyBlock]
// Type encoding: @?16@0:8
// Implementation: 0x10b7d3ad8

// -[PINDiskCache byteLimit]
// Type encoding: Q16@0:8
// Implementation: 0x10b7d3b4c

// -[PINDiskCache setByteLimit:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10044b42c

// -[PINDiskCache ageLimit]
// Type encoding: d16@0:8
// Implementation: 0x10b7d3b7c

// -[PINDiskCache setAgeLimit:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b7d3bb4

// -[PINDiskCache isTTLCache]
// Type encoding: B16@0:8
// Implementation: 0x10b7d3d08

// -[PINDiskCache setTtlCache:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b7d3d38

// -[PINDiskCache writingProtectionOption]
// Type encoding: Q16@0:8
// Implementation: 0x10b7d3e80

// -[PINDiskCache setWritingProtectionOption:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b7d3eb0

// -[PINDiskCache lock]
// Type encoding: v16@0:8
// Implementation: 0x10044bd24

// -[PINDiskCache unlock]
// Type encoding: v16@0:8
// Implementation: 0x10044c564

// -[PINDiskCache setMetadata:toURL:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10b7d3ffc

// -[PINDiskCache metadataForFileUrl:]
// Type encoding: @24@0:8@16
// Implementation: 0x10081ad04

// -[PINDiskCache metadataForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b7d413c

// -[PINDiskCache count]
// Type encoding: Q16@0:8
// Implementation: 0x10b7d4270

// -[PINDiskCache prefix]
// Type encoding: @16@0:8
// Implementation: 0x10b7d42a8

// -[PINDiskCache cacheURL]
// Type encoding: @16@0:8
// Implementation: 0x10b7d42b4

// -[PINDiskCache setCacheURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7d42bc

// -[PINDiskCache byteCount]
// Type encoding: Q16@0:8
// Implementation: 0x10b7d42ec

// -[PINDiskCache setByteCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10081b140

// -[PINDiskCache fileExtension]
// Type encoding: @16@0:8
// Implementation: 0x10081df24

// -[PINDiskCache name]
// Type encoding: @16@0:8
// Implementation: 0x10b7d42f4

// -[PINDiskCache setName:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7d42fc

// -[PINDiskCache operationQueue]
// Type encoding: @16@0:8
// Implementation: 0x10044aa20

// -[PINDiskCache setOperationQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7d4304

// -[PINDiskCache dates]
// Type encoding: @16@0:8
// Implementation: 0x10b7d4334

// -[PINDiskCache setDates:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7d433c

// -[PINDiskCache sizes]
// Type encoding: @16@0:8
// Implementation: 0x10b7d436c

// -[PINDiskCache setSizes:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7d4374

// -[PINDiskCache metadata]
// Type encoding: @16@0:8
// Implementation: 0x10b7d43a4

// -[PINDiskCache setMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7d43ac

// -[PINDiskCache deadFiles]
// Type encoding: @16@0:8
// Implementation: 0x10b7d43dc

// -[PINDiskCache setDeadFiles:]
// Type encoding: v24@0:8@16
// Implementation: 0x10044c1bc

// -[PINDiskCache .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b7d43e4

// +[PINDiskCache cacheURLWithRootPath:prefix:name:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100449a90

// +[PINDiskCache sharedTrashQueue]
// Type encoding: @16@0:8
// Implementation: 0x10b7cf0f8

// +[PINDiskCache sharedLock]
// Type encoding: @16@0:8
// Implementation: 0x10b7cf208

// +[PINDiskCache sharedTrashURL]
// Type encoding: @16@0:8
// Implementation: 0x10b7cf288

// +[PINDiskCache moveItemAtURLToTrash:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b7cf450

// +[PINDiskCache emptyTrash]
// Type encoding: v16@0:8
// Implementation: 0x10b7cf604

// +[PINDiskCache emptyTrash:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7cf614

// +[PINDiskCache emptyTrashImmediately]
// Type encoding: v16@0:8
// Implementation: 0x10b7cf710

@end
