// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapBitmojiLayerInfoProvider
// Superclass: NSObject
// Address: 0x112aabc38

@interface SCMapBitmojiLayerInfoProvider

// Property: friendStoriesTapCount; attributes: TQ,V_friendStoriesTapCount
// Property: friendStoriesShownByFriendID; attributes: T@"NSSet",&,V_friendStoriesShownByFriendID
// Property: friendStoriesShownByThumbnail; attributes: T@"NSSet",&,V_friendStoriesShownByThumbnail
// Property: lastClusterCount; attributes: TQ,V_lastClusterCount
// Property: usersWithLabel; attributes: T@"NSSet",&,V_usersWithLabel
// Property: singlePersonClustersWithLabel; attributes: T@"NSSet",&,V_singlePersonClustersWithLabel
// Property: multiUserFlowerClustersWithLabel; attributes: T@"NSSet",&,V_multiUserFlowerClustersWithLabel
// Property: multiUserNotFlowerClustersWithLabel; attributes: T@"NSSet",&,V_multiUserNotFlowerClustersWithLabel
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: highlightedFriendUserIds; attributes: T@"NSArray",R
// Property: highlightedClusterIds; attributes: T@"NSArray",R
// Property: clustersInHighlightZoneCount; attributes: TQ,R
// Property: clustersHighlightedCount; attributes: TQ,R
// Property: totalFriendStoryTapCount; attributes: TQ,R
// Property: totalFriendStoryUniqueUserIdCount; attributes: TQ,R
// Property: totalFriendStoryUniqueThumbnailCount; attributes: TQ,R

// -[SCMapBitmojiLayerInfoProvider initWithViewportLogger:viewportChangeObservable:viewportChangeThrottleDuration:asyncQueueProvider:]
// Type encoding: @48@0:8@16@24d32@40
// Implementation: 0x105f172b8

// -[SCMapBitmojiLayerInfoProvider _onViewportDidChange]
// Type encoding: v16@0:8
// Implementation: 0x105f17620

// -[SCMapBitmojiLayerInfoProvider onBasemapFeaturesCaptured:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f176c0

// -[SCMapBitmojiLayerInfoProvider _processBasemapFeatures:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f17844

// -[SCMapBitmojiLayerInfoProvider _internalResetMetrics]
// Type encoding: v16@0:8
// Implementation: 0x105f17d18

// -[SCMapBitmojiLayerInfoProvider isUserIdHighlighted:]
// Type encoding: B24@0:8@16
// Implementation: 0x105f17e14

// -[SCMapBitmojiLayerInfoProvider isClusterIDHighlighted:]
// Type encoding: B24@0:8@16
// Implementation: 0x105f17e78

// -[SCMapBitmojiLayerInfoProvider highlightedFriendUserIds]
// Type encoding: @16@0:8
// Implementation: 0x105f17f48

// -[SCMapBitmojiLayerInfoProvider highlightedClusterIds]
// Type encoding: @16@0:8
// Implementation: 0x105f17f8c

// -[SCMapBitmojiLayerInfoProvider clustersInHighlightZoneCount]
// Type encoding: Q16@0:8
// Implementation: 0x105f17fd0

// -[SCMapBitmojiLayerInfoProvider clustersHighlightedCount]
// Type encoding: Q16@0:8
// Implementation: 0x105f17fd4

// -[SCMapBitmojiLayerInfoProvider incrementFriendStoryTapCount]
// Type encoding: v16@0:8
// Implementation: 0x105f18078

// -[SCMapBitmojiLayerInfoProvider totalFriendStoryTapCount]
// Type encoding: Q16@0:8
// Implementation: 0x105f180a0

// -[SCMapBitmojiLayerInfoProvider totalFriendStoryUniqueUserIdCount]
// Type encoding: Q16@0:8
// Implementation: 0x105f180a4

// -[SCMapBitmojiLayerInfoProvider totalFriendStoryUniqueThumbnailCount]
// Type encoding: Q16@0:8
// Implementation: 0x105f180e0

// -[SCMapBitmojiLayerInfoProvider resetMetrics]
// Type encoding: v16@0:8
// Implementation: 0x105f1811c

// -[SCMapBitmojiLayerInfoProvider visibleBitmojisObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f181f0

// -[SCMapBitmojiLayerInfoProvider friendStoriesTapCount]
// Type encoding: Q16@0:8
// Implementation: 0x105f18218

// -[SCMapBitmojiLayerInfoProvider setFriendStoriesTapCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105f18220

// -[SCMapBitmojiLayerInfoProvider friendStoriesShownByFriendID]
// Type encoding: @16@0:8
// Implementation: 0x105f18228

// -[SCMapBitmojiLayerInfoProvider setFriendStoriesShownByFriendID:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f18234

// -[SCMapBitmojiLayerInfoProvider friendStoriesShownByThumbnail]
// Type encoding: @16@0:8
// Implementation: 0x105f1823c

// -[SCMapBitmojiLayerInfoProvider setFriendStoriesShownByThumbnail:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f18248

// -[SCMapBitmojiLayerInfoProvider lastClusterCount]
// Type encoding: Q16@0:8
// Implementation: 0x105f18250

// -[SCMapBitmojiLayerInfoProvider setLastClusterCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105f18258

// -[SCMapBitmojiLayerInfoProvider usersWithLabel]
// Type encoding: @16@0:8
// Implementation: 0x105f18260

// -[SCMapBitmojiLayerInfoProvider setUsersWithLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f1826c

// -[SCMapBitmojiLayerInfoProvider singlePersonClustersWithLabel]
// Type encoding: @16@0:8
// Implementation: 0x105f18274

// -[SCMapBitmojiLayerInfoProvider setSinglePersonClustersWithLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f18280

// -[SCMapBitmojiLayerInfoProvider multiUserFlowerClustersWithLabel]
// Type encoding: @16@0:8
// Implementation: 0x105f18288

// -[SCMapBitmojiLayerInfoProvider setMultiUserFlowerClustersWithLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f18294

// -[SCMapBitmojiLayerInfoProvider multiUserNotFlowerClustersWithLabel]
// Type encoding: @16@0:8
// Implementation: 0x105f1829c

// -[SCMapBitmojiLayerInfoProvider setMultiUserNotFlowerClustersWithLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f182a8

// -[SCMapBitmojiLayerInfoProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f182b0

@end
