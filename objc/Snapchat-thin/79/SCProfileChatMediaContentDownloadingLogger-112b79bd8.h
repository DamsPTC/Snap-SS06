// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCProfileChatMediaContentDownloadingLogger
// Superclass: NSObject
// Address: 0x112b79bd8

@interface SCProfileChatMediaContentDownloadingLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCProfileChatMediaContentDownloadingLogger initWithProfileType:sessionId:grapheneServices:userBlizzardServices:]
// Type encoding: @48@0:8Q16@24@32@40
// Implementation: 0x107cdc558

// -[SCProfileChatMediaContentDownloadingLogger performer]
// Type encoding: @16@0:8
// Implementation: 0x107cdc790

// -[SCProfileChatMediaContentDownloadingLogger didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107cdc7b8

// -[SCProfileChatMediaContentDownloadingLogger chatMediaFolderInitiated]
// Type encoding: v16@0:8
// Implementation: 0x107cdc938

// -[SCProfileChatMediaContentDownloadingLogger chatMediaFolderWillAppear]
// Type encoding: v16@0:8
// Implementation: 0x107cdca30

// -[SCProfileChatMediaContentDownloadingLogger chatMediaFolderScrollStart]
// Type encoding: v16@0:8
// Implementation: 0x107cdcb28

// -[SCProfileChatMediaContentDownloadingLogger chatMediaFolderWillDisappear:]
// Type encoding: v24@0:8q16
// Implementation: 0x107cdcbfc

// -[SCProfileChatMediaContentDownloadingLogger _updateChatMediaFolderInitiatedTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x107cdcce8

// -[SCProfileChatMediaContentDownloadingLogger _updateChatMediaFolderAppearTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x107cdce64

// -[SCProfileChatMediaContentDownloadingLogger _updateChatMediaFolderHasScrolled]
// Type encoding: v16@0:8
// Implementation: 0x107cdce6c

// -[SCProfileChatMediaContentDownloadingLogger _logChatMediaGalleryOpenLatency:]
// Type encoding: v24@0:8q16
// Implementation: 0x107cdce78

// -[SCProfileChatMediaContentDownloadingLogger _willStartToLoadMediaWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cdcfac

// -[SCProfileChatMediaContentDownloadingLogger _didLoadMediaFromCacheWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cdd0d8

// -[SCProfileChatMediaContentDownloadingLogger _didLoadMediaThumbnailFromNetworkWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cdd234

// -[SCProfileChatMediaContentDownloadingLogger _didLoadRawMediaFromNetworkWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cdd360

// -[SCProfileChatMediaContentDownloadingLogger _didFailToLoadMediaWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cdd48c

// -[SCProfileChatMediaContentDownloadingLogger _didCancelToLoadMediaWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cdd5c0

// -[SCProfileChatMediaContentDownloadingLogger _didCloseProfile]
// Type encoding: v16@0:8
// Implementation: 0x107cdd714

// -[SCProfileChatMediaContentDownloadingLogger _unifiedProfileTypeToProfileType]
// Type encoding: q16@0:8
// Implementation: 0x107cdd824

// -[SCProfileChatMediaContentDownloadingLogger _chatMediaFolderBucketIndexForStartTime:]
// Type encoding: q24@0:8d16
// Implementation: 0x107cdd84c

// -[SCProfileChatMediaContentDownloadingLogger _logChatMediaThumbnailFetchNotShownStartTime:isAboveTheFold:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x107cdd8ec

// -[SCProfileChatMediaContentDownloadingLogger _logChatMediaThumbnailFetchTimeWithType:isAboveTheFold:startTime:]
// Type encoding: v36@0:8@16B24d28
// Implementation: 0x107cdd9e0

// -[SCProfileChatMediaContentDownloadingLogger _incrementChatMediaThumbnailFetchWithType:value:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107cddb08

// -[SCProfileChatMediaContentDownloadingLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107cddc40

@end
