// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoryMediaCache
// Superclass: NSObject
// Address: 0x112b60688

@interface SCStoryMediaCache

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoryMediaCache init]
// Type encoding: @16@0:8
// Implementation: 0x1006e0ea0

// -[SCStoryMediaCache setObject:forKey:withEncryptor:cacheDataSource:expiration:alreadyEncrypted:completion:]
// Type encoding: v68@0:8@16@24@32@40@48B56@?60
// Implementation: 0x1071e6dc0

// -[SCStoryMediaCache _setObject:forKey:withEncryptor:expiration:alreadyEncrypted:completion:]
// Type encoding: v60@0:8@16@24@32@40B48@?52
// Implementation: 0x1071e7164

// -[SCStoryMediaCache objectForKey:withEncryptor:completionQueue:block:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1071e7574

// -[SCStoryMediaCache contains:]
// Type encoding: B24@0:8@16
// Implementation: 0x1071e7ad0

// -[SCStoryMediaCache removeObjectForKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071e7b28

// -[SCStoryMediaCache clearCachedMediaWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1071e7b34

// -[SCStoryMediaCache clearCachedMediaNotNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1071e7b3c

// -[SCStoryMediaCache prepareForLogout]
// Type encoding: v16@0:8
// Implementation: 0x1071e7d30

// -[SCStoryMediaCache _didRemoveObjectFromDiskBlock]
// Type encoding: @?16@0:8
// Implementation: 0x1006e13c0

// -[SCStoryMediaCache .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1071e7ef4

@end
