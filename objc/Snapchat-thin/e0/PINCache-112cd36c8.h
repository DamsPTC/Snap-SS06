// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: PINCache
// Superclass: NSObject
// Address: 0x112cd36c8

@interface PINCache

// Property: name; attributes: T@"NSString",C,N,V_name
// Property: operationQueue; attributes: T@"PINOperationQueue",&,N,V_operationQueue
// Property: diskByteCount; attributes: TQ,R
// Property: diskCache; attributes: T@"PINDiskCache",R,V_diskCache
// Property: memoryCache; attributes: T@"PINMemoryCache",R,V_memoryCache
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[PINCache init]
// Type encoding: @16@0:8
// Implementation: 0x10b7cccb8

// -[PINCache initWithName:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b7ccd10

// -[PINCache initWithName:fileExtension:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b7ccd18

// -[PINCache initWithName:rootPath:fileExtension:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10b7ccdc4

// -[PINCache initWithName:rootPath:serializer:deserializer:fileExtension:]
// Type encoding: @56@0:8@16@24@?32@?40@48
// Implementation: 0x10b7ccdd4

// -[PINCache containsObjectForKeyAsync:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7cd048

// -[PINCache objectForKeyAsync:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7cd204

// -[PINCache updateMetadataAsync:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b7cd8e4

// -[PINCache setObjectAsync:forKey:metadata:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10b7cd968

// -[PINCache setObjectAsync:forKey:cost:metadata:completion:]
// Type encoding: v56@0:8@16@24Q32@40@?48
// Implementation: 0x10b7cd978

// -[PINCache removeObjectForKeyAsync:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7cdca4

// -[PINCache removeObjectsForKeysAsync:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7cdebc

// -[PINCache removeAllObjectsAsync:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7ce2c8

// -[PINCache trimToDateAsync:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7ce454

// -[PINCache diskByteCount]
// Type encoding: Q16@0:8
// Implementation: 0x10b7ce640

// -[PINCache containsObjectForKey:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b7ce738

// -[PINCache objectForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b7ce7b4

// -[PINCache objectForKey:metadata:]
// Type encoding: @32@0:8@16o^@24
// Implementation: 0x10b7ce7e0

// -[PINCache setObject:forKey:metadata:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x10b7ce8c8

// -[PINCache setObject:forKey:cost:metadata:]
// Type encoding: B48@0:8@16@24Q32@40
// Implementation: 0x10b7ce8d4

// -[PINCache objectForKeyedSubscript:metadata:]
// Type encoding: @32@0:8@16o^@24
// Implementation: 0x10b7ce9b0

// -[PINCache setObject:forKeyedSubscript:metadata:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10b7ce9cc

// -[PINCache removeObjectForKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7cea74

// -[PINCache trimToDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7cead0

// -[PINCache removeAllObjects]
// Type encoding: v16@0:8
// Implementation: 0x10b7ceb2c

// -[PINCache diskCache]
// Type encoding: @16@0:8
// Implementation: 0x10b7ceb54

// -[PINCache memoryCache]
// Type encoding: @16@0:8
// Implementation: 0x10b7ceb60

// -[PINCache name]
// Type encoding: @16@0:8
// Implementation: 0x10b7ceb6c

// -[PINCache setName:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7ceb74

// -[PINCache operationQueue]
// Type encoding: @16@0:8
// Implementation: 0x10b7ceb7c

// -[PINCache setOperationQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7ceb84

// -[PINCache .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b7cebb4

// +[PINCache sharedCache]
// Type encoding: @16@0:8
// Implementation: 0x10b7ccfbc

@end
