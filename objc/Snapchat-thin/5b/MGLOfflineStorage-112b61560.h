// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: MGLOfflineStorage
// Superclass: NSObject
// Address: 0x112b61560

@interface MGLOfflineStorage

// Property: mbglDatabaseFileSource; attributes: T{shared_ptr<mbgl::DatabaseFileSource>=^{DatabaseFileSource}^{__shared_weak_count}},N,V_mbglDatabaseFileSource
// Property: mbglOnlineFileSource; attributes: T{shared_ptr<mbgl::FileSource>=^{FileSource}^{__shared_weak_count}},N,V_mbglOnlineFileSource
// Property: mbglFileSource; attributes: T{shared_ptr<mbgl::FileSource>=^{FileSource}^{__shared_weak_count}},N,V_mbglFileSource
// Property: paused; attributes: TB,N,GisPaused,V_paused
// Property: delegate; attributes: T@"<MGLOfflineStorageDelegate>",W,N,V_delegate
// Property: databasePath; attributes: T@"NSString",R,C,N
// Property: databaseURL; attributes: T@"NSURL",R,C,N

// -[MGLOfflineStorage pauseFileSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x107249850

// -[MGLOfflineStorage unpauseFileSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x107249894

// -[MGLOfflineStorage setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1072498d8

// -[MGLOfflineStorage init]
// Type encoding: @16@0:8
// Implementation: 0x107249b94

// -[MGLOfflineStorage dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107249e8c

// -[MGLOfflineStorage observeValueForKeyPath:ofObject:change:context:]
// Type encoding: v48@0:8@16@24@32^v40
// Implementation: 0x107249f78

// -[MGLOfflineStorage databasePath]
// Type encoding: @16@0:8
// Implementation: 0x10724a23c

// -[MGLOfflineStorage databaseURL]
// Type encoding: @16@0:8
// Implementation: 0x10724a288

// -[MGLOfflineStorage setMaximumAmbientCacheSize:withCompletionHandler:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x10724a658

// -[MGLOfflineStorage invalidateAmbientCacheWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10724a6c8

// -[MGLOfflineStorage clearAmbientCacheWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10724a71c

// -[MGLOfflineStorage resetDatabaseWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10724a770

// -[MGLOfflineStorage countOfBytesCompleted]
// Type encoding: Q16@0:8
// Implementation: 0x10724a7c4

// -[MGLOfflineStorage preloadData:forURL:modificationDate:expirationDate:eTag:mustRevalidate:]
// Type encoding: v60@0:8@16@24@32@40@48B56
// Implementation: 0x10724a870

// -[MGLOfflineStorage preloadData:forURL:modificationDate:expirationDate:eTag:mustRevalidate:completionHandler:]
// Type encoding: v68@0:8@16@24@32@40@48B56@?60
// Implementation: 0x10724a88c

// -[MGLOfflineStorage putResourceWithUrl:data:modified:expires:etag:mustRevalidate:]
// Type encoding: v60@0:8@16@24@32@40@48B56
// Implementation: 0x10724ac78

// -[MGLOfflineStorage delegate]
// Type encoding: @16@0:8
// Implementation: 0x10724ac88

// -[MGLOfflineStorage mbglDatabaseFileSource]
// Type encoding: {shared_ptr<mbgl::DatabaseFileSource>=^{DatabaseFileSource}^{__shared_weak_count}}16@0:8
// Implementation: 0x10724aca0

// -[MGLOfflineStorage setMbglDatabaseFileSource:]
// Type encoding: v32@0:8{shared_ptr<mbgl::DatabaseFileSource>=^{DatabaseFileSource}^{__shared_weak_count}}16
// Implementation: 0x10724acc8

// -[MGLOfflineStorage mbglOnlineFileSource]
// Type encoding: {shared_ptr<mbgl::FileSource>=^{FileSource}^{__shared_weak_count}}16@0:8
// Implementation: 0x10724ad08

// -[MGLOfflineStorage setMbglOnlineFileSource:]
// Type encoding: v32@0:8{shared_ptr<mbgl::FileSource>=^{FileSource}^{__shared_weak_count}}16
// Implementation: 0x10724ad30

// -[MGLOfflineStorage mbglFileSource]
// Type encoding: {shared_ptr<mbgl::FileSource>=^{FileSource}^{__shared_weak_count}}16@0:8
// Implementation: 0x10724ad80

// -[MGLOfflineStorage setMbglFileSource:]
// Type encoding: v32@0:8{shared_ptr<mbgl::FileSource>=^{FileSource}^{__shared_weak_count}}16
// Implementation: 0x10724ada8

// -[MGLOfflineStorage isPaused]
// Type encoding: B16@0:8
// Implementation: 0x10724adb4

// -[MGLOfflineStorage setPaused:]
// Type encoding: v20@0:8B16
// Implementation: 0x10724adbc

// -[MGLOfflineStorage .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10724adc4

// -[MGLOfflineStorage .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10724ae10

// +[MGLOfflineStorage sharedOfflineStorage]
// Type encoding: @16@0:8
// Implementation: 0x1072496cc

// +[MGLOfflineStorage defaultDatabaseURLIncludingSubdirectory:]
// Type encoding: @20@0:8B16
// Implementation: 0x10724a430

// +[MGLOfflineStorage legacyDatabasePath]
// Type encoding: @16@0:8
// Implementation: 0x10724a5cc

@end
