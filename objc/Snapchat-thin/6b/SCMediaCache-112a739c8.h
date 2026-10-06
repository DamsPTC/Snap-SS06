// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMediaCache
// Superclass: NSCache
// Address: 0x112a739c8

@interface SCMediaCache

// Property: objectsToKeys; attributes: T@"NSMutableDictionary",&,N,V_objectsToKeys
// Property: attributes; attributes: T@"NSMutableDictionary",&,N,V_attributes
// Property: keysBeingWrittenToDisk; attributes: T@"NSMutableSet",&,N,V_keysBeingWrittenToDisk
// Property: writtenToDiskCallbacks; attributes: T@"NSMutableDictionary",&,N,V_writtenToDiskCallbacks
// Property: resetMediaStatePerformer; attributes: T@"<SCPerforming>",&,N,V_resetMediaStatePerformer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMediaCache runAsynchronouslyOnACacheQueue:]
// Type encoding: v24@0:8@?16
// Implementation: 0x100ab2f40

// -[SCMediaCache runAsynchronouslyOnAFileWriteQueue:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105858a70

// -[SCMediaCache init]
// Type encoding: @16@0:8
// Implementation: 0x100ab1468

// -[SCMediaCache applicationDidEnterBackground:]
// Type encoding: v24@0:8@16
// Implementation: 0x105858ac4

// -[SCMediaCache sc_writeToFile:alreadyEncrypted:key:dictionary:]
// Type encoding: v44@0:8@16B24@28@36
// Implementation: 0x105858bd8

// -[SCMediaCache contains:]
// Type encoding: B24@0:8@16
// Implementation: 0x1058596c8

// -[SCMediaCache contains:cacheOnly:]
// Type encoding: B28@0:8@16B24
// Implementation: 0x1058596d0

// -[SCMediaCache contains:cacheOnly:quickCheck:]
// Type encoding: B32@0:8@16B24B28
// Implementation: 0x1058596d8

// -[SCMediaCache objectExistsOnDiskForKey:]
// Type encoding: B24@0:8@16
// Implementation: 0x1058597e8

// -[SCMediaCache validCacheObjectExistsOnDiskForKey:selfEncrypted:]
// Type encoding: B28@0:8@16B24
// Implementation: 0x105859850

// -[SCMediaCache prefetchObjectForKey:dictionary:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105859900

// -[SCMediaCache processObjectForKey:dictionary:completionQueue:block:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x105859a68

// -[SCMediaCache dataFromDiskForKey:dictionary:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105859e4c

// -[SCMediaCache objectForKey:dictionary:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10585a1e8

// -[SCMediaCache setObject:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10585a3a8

// -[SCMediaCache setObject:encryptedObject:forKey:dictionary:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10585a3ac

// -[SCMediaCache setObject:encryptedObject:forKey:persist:encrypt:dictionary:]
// Type encoding: v56@0:8@16@24@32B40B44@48
// Implementation: 0x10585a52c

// -[SCMediaCache removeObjectForKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10585a674

// -[SCMediaCache clear]
// Type encoding: v16@0:8
// Implementation: 0x100ab2e68

// -[SCMediaCache removeExpiredMedia]
// Type encoding: v16@0:8
// Implementation: 0x10585a8a8

// -[SCMediaCache loadPersistentMedia]
// Type encoding: v16@0:8
// Implementation: 0x100ab17d8

// -[SCMediaCache evictOnFailureCallbackForKey:]
// Type encoding: @?24@0:8@16
// Implementation: 0x10585b110

// -[SCMediaCache addCallback:forKey:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x10585b228

// -[SCMediaCache cache:willEvictObject:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10585b314

// -[SCMediaCache writePersistentKeysToDisk]
// Type encoding: v16@0:8
// Implementation: 0x10585b4b4

// -[SCMediaCache cachePathForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x10585b97c

// -[SCMediaCache attributesItemForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x10585bb30

// -[SCMediaCache keyShouldBeEncrypted:]
// Type encoding: B24@0:8@16
// Implementation: 0x10585bbd0

// -[SCMediaCache mediaEncryptionKey]
// Type encoding: @16@0:8
// Implementation: 0x10585bc78

// -[SCMediaCache mediaInitializationVectorKey]
// Type encoding: @16@0:8
// Implementation: 0x10585bca8

// -[SCMediaCache objectsToKeys]
// Type encoding: @16@0:8
// Implementation: 0x100ab30b4

// -[SCMediaCache setObjectsToKeys:]
// Type encoding: v24@0:8@16
// Implementation: 0x100ab16d8

// -[SCMediaCache attributes]
// Type encoding: @16@0:8
// Implementation: 0x100ab30a4

// -[SCMediaCache setAttributes:]
// Type encoding: v24@0:8@16
// Implementation: 0x100ab1718

// -[SCMediaCache keysBeingWrittenToDisk]
// Type encoding: @16@0:8
// Implementation: 0x10585bcd8

// -[SCMediaCache setKeysBeingWrittenToDisk:]
// Type encoding: v24@0:8@16
// Implementation: 0x100ab1758

// -[SCMediaCache writtenToDiskCallbacks]
// Type encoding: @16@0:8
// Implementation: 0x10585bce8

// -[SCMediaCache setWrittenToDiskCallbacks:]
// Type encoding: v24@0:8@16
// Implementation: 0x100ab1798

// -[SCMediaCache resetMediaStatePerformer]
// Type encoding: @16@0:8
// Implementation: 0x10585bcf8

// -[SCMediaCache setResetMediaStatePerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10585bd08

// -[SCMediaCache .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10585bd48

// +[SCMediaCache anyCachePerformer]
// Type encoding: @16@0:8
// Implementation: 0x100ab2f94

// +[SCMediaCache anyWriteFilePerformer]
// Type encoding: @16@0:8
// Implementation: 0x105858ac8

@end
