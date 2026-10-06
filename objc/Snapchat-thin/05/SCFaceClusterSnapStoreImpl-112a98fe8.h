// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFaceClusterSnapStoreImpl
// Superclass: NSObject
// Address: 0x112a98fe8

@interface SCFaceClusterSnapStoreImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFaceClusterSnapStoreImpl initWithMergedDataSource:asyncReadsEnabled:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x105ccbd80

// -[SCFaceClusterSnapStoreImpl getSnapsByMediaIdsWithMediaIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x105ccbe38

// -[SCFaceClusterSnapStoreImpl getVisibleSnapIdsByMediaIdsWithMediaIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x105ccbfc8

// -[SCFaceClusterSnapStoreImpl _observeAsyncForMediaIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x105ccc160

// -[SCFaceClusterSnapStoreImpl _startStreamForMediaIds:intoObserver:requeryLifecycle:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105ccc504

// -[SCFaceClusterSnapStoreImpl _makeStreamForMediaIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x105ccc814

// -[SCFaceClusterSnapStoreImpl _querySnapsForMediaIds:signature:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x105cccbfc

// -[SCFaceClusterSnapStoreImpl _favoritedSnapIdsAmongSnapIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x105cccf5c

// -[SCFaceClusterSnapStoreImpl _visibleGallerySnapsForSnapIds:entriesBySnapId:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x105ccd10c

// -[SCFaceClusterSnapStoreImpl shouldRetainInstanceWhenMarshalling]
// Type encoding: B16@0:8
// Implementation: 0x105ccd33c

// -[SCFaceClusterSnapStoreImpl pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x105ccd344

// -[SCFaceClusterSnapStoreImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105ccd350

@end
