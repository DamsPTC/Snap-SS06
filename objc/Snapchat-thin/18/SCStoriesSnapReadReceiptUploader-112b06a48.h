// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesSnapReadReceiptUploader
// Superclass: NSObject
// Address: 0x112b06a48

@interface SCStoriesSnapReadReceiptUploader


// -[SCStoriesSnapReadReceiptUploader initWithDocObjectContext:mixerNetworkRequester:currentUserId:snapReadReceiptLogger:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10093a254

// -[SCStoriesSnapReadReceiptUploader syncPremiumReadReceiptsToServerShouldFlush:]
// Type encoding: v20@0:8B16
// Implementation: 0x106923728

// -[SCStoriesSnapReadReceiptUploader _syncPremiumRecordsToServerShouldFlush:]
// Type encoding: v20@0:8B16
// Implementation: 0x106923794

// -[SCStoriesSnapReadReceiptUploader _uploadPremiumReadReceipts:readReceiptIds:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106923ac0

// -[SCStoriesSnapReadReceiptUploader syncReadReceiptsToServerShouldFlush:]
// Type encoding: v20@0:8B16
// Implementation: 0x106923f14

// -[SCStoriesSnapReadReceiptUploader _syncReadReceiptsToServerShouldFlush:]
// Type encoding: v20@0:8B16
// Implementation: 0x106923f80

// -[SCStoriesSnapReadReceiptUploader _uploadSnapReadReceipts:readReceiptIds:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106924344

// -[SCStoriesSnapReadReceiptUploader _didUploadPremiumReadReceipts:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106924788

// -[SCStoriesSnapReadReceiptUploader _didUploadSnapReceipts:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106924ad4

// -[SCStoriesSnapReadReceiptUploader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106924e20

@end
