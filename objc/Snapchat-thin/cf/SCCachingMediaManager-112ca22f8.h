// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCachingMediaManager
// Superclass: NSObject
// Address: 0x112ca22f8

@interface SCCachingMediaManager

// Property: cacheURL; attributes: T@"NSURL",R,N
// Property: performer; attributes: T@"SCQueuePerformer",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCachingMediaManager cacheURL]
// Type encoding: @16@0:8
// Implementation: 0x10b689a80

// -[SCCachingMediaManager performer]
// Type encoding: @16@0:8
// Implementation: 0x10b689a98

// -[SCCachingMediaManager updateCacheDiskSize:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b689ac0

// -[SCCachingMediaManager initWithCacheURL:defaultSizeMB:kindName:logger:coreConfigProvider:]
// Type encoding: @56@0:8@16Q24@32@40@48
// Implementation: 0x10b686de0

// -[SCCachingMediaManager requestCachingMediaForEntity:targetSize:requestOptions:queue:cacheMissHandler:resultHandler:]
// Type encoding: @72@0:8@16{CGSize=dd}24@40@48@?56@?64
// Implementation: 0x10b6871c0

// -[SCCachingMediaManager _purgeCacheIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10b687b14

// -[SCCachingMediaManager totalSizeOfCacheFilesWithQueue:handler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b687ba0

// -[SCCachingMediaManager _totalSizeInBytes]
// Type encoding: q16@0:8
// Implementation: 0x10b687cf0

// -[SCCachingMediaManager cleanUpCacheWithQueue:block:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b687d48

// -[SCCachingMediaManager kindName]
// Type encoding: @16@0:8
// Implementation: 0x10b687f54

// -[SCCachingMediaManager removeExpiredContentAsyncForReason:dispatchGroup:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x10b687f7c

// -[SCCachingMediaManager removeAllUserSessionDataAsync]
// Type encoding: v16@0:8
// Implementation: 0x10b6880c0

// -[SCCachingMediaManager handleEmergencyDiskConditionWithDispatchGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6880cc

// -[SCCachingMediaManager reportMetrics]
// Type encoding: @16@0:8
// Implementation: 0x10b68818c

// -[SCCachingMediaManager _cleanupDiskCacheForUUID:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b688298

// -[SCCachingMediaManager invalidateEntityForUUID:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b68834c

// -[SCCachingMediaManager _scheduleOnDiskFileLruProtectingSourceFilesEvictionIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10b688484

// -[SCCachingMediaManager _evictItemsWithEntityUUIDsToTrim:trimDate:trimEntityIdx:entityUUIDsToDelete:deletionIdx:completionBlock:]
// Type encoding: v64@0:8@16@24Q32@40Q48@?56
// Implementation: 0x10b689300

// -[SCCachingMediaManager _deleteItemsAtEntityDirectory:withLastAccessTimeBefore:shouldSkipHighestLevelSource:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10b6895fc

// -[SCCachingMediaManager _didReceiveMemoryWarningNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b689988

// -[SCCachingMediaManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b6899fc

@end
