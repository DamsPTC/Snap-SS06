// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaSharedResourceManager
// Superclass: NSObject
// Address: 0x112adbe38

@interface SCOperaSharedResourceManager

// Property: playbackMonitorManager; attributes: T@"SCOperaPlaybackMonitorManager",&,N,V_playbackMonitorManager
// Property: mediaServicesWereLost; attributes: TB,N,V_mediaServicesWereLost

// -[SCOperaSharedResourceManager initWithConfiguration:networkBandwidthEstimator:proxyController:configProvider:internalConfigProvider:operaDebugServices:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x106361e68

// -[SCOperaSharedResourceManager initWithKVOController:configuration:notificationCenter:networkBandwidthEstimator:proxyController:configProvider:internalConfigProvider:operaDebugServices:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x106361f6c

// -[SCOperaSharedResourceManager dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106362240

// -[SCOperaSharedResourceManager _prebuildPlayerViews]
// Type encoding: v16@0:8
// Implementation: 0x1063622f8

// -[SCOperaSharedResourceManager _playerViews]
// Type encoding: @16@0:8
// Implementation: 0x1063623b8

// -[SCOperaSharedResourceManager _buildPlayerView]
// Type encoding: @16@0:8
// Implementation: 0x1063623f0

// -[SCOperaSharedResourceManager _playerStatusDidChange]
// Type encoding: v16@0:8
// Implementation: 0x106362504

// -[SCOperaSharedResourceManager _playerStatusDidChangeInternal]
// Type encoding: v16@0:8
// Implementation: 0x1063625e0

// -[SCOperaSharedResourceManager _replacePlayerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10636272c

// -[SCOperaSharedResourceManager didReceiveMediaServicesWereLostNotification]
// Type encoding: v16@0:8
// Implementation: 0x106362864

// -[SCOperaSharedResourceManager didReceiveMediaServicesWereResetNotification]
// Type encoding: v16@0:8
// Implementation: 0x106362944

// -[SCOperaSharedResourceManager preparedPlayerViewForAsset:subtitlesObserver:relativePosition:pageId:playerConfiguration:]
// Type encoding: @56@0:8@16@24Q32@40@48
// Implementation: 0x106362a2c

// -[SCOperaSharedResourceManager playerViewForVideoAsset:subtitlesObserver:pageId:playerConfiguration:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106362b38

// -[SCOperaSharedResourceManager updatedPlayerViewOnExistingAsset:withNewAsset:subtitlesObserver:pageId:playerConfiguration:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x106362b3c

// -[SCOperaSharedResourceManager updatePlayerConfiguration:playerView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106362bec

// -[SCOperaSharedResourceManager finishDisplayingPlayerView:pageId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106362c94

// -[SCOperaSharedResourceManager isPlayerViewDisplaying:]
// Type encoding: B24@0:8@16
// Implementation: 0x106362dcc

// -[SCOperaSharedResourceManager _playerViewForVideoAsset:subtitlesObserver:pageId:playerConfiguration:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106362dd4

// -[SCOperaSharedResourceManager _currentDisplayingPlayerViewForVideoAsset:]
// Type encoding: @24@0:8@16
// Implementation: 0x106362f98

// -[SCOperaSharedResourceManager _currentDisplayingPlayerViewsDebugInfo]
// Type encoding: @16@0:8
// Implementation: 0x106363098

// -[SCOperaSharedResourceManager _playerViewForVideoAsset:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063630a0

// -[SCOperaSharedResourceManager _playerViewNotCurrentDisplayingWithConfig:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063631c0

// -[SCOperaSharedResourceManager _preloadWhenNecessaryForPlayerView:videoAsset:subtitlesObserver:playerConfiguration:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1063633a8

// -[SCOperaSharedResourceManager _numberOfPlayers]
// Type encoding: q16@0:8
// Implementation: 0x106363698

// -[SCOperaSharedResourceManager assetWithUrl:pageId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106363728

// -[SCOperaSharedResourceManager _loadPlayerView:asset:subtitlesObserver:playerConfiguration:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106363850

// -[SCOperaSharedResourceManager _startProxyIfNeededForAsset:]
// Type encoding: v24@0:8@16
// Implementation: 0x106363b84

// -[SCOperaSharedResourceManager reportProxyConnectionFailure]
// Type encoding: v16@0:8
// Implementation: 0x106363c74

// -[SCOperaSharedResourceManager updatePlaybackMonitorLogViewerVisibility:]
// Type encoding: v20@0:8B16
// Implementation: 0x106363c94

// -[SCOperaSharedResourceManager activateAllPlaybackMonitors]
// Type encoding: v16@0:8
// Implementation: 0x106363ccc

// -[SCOperaSharedResourceManager deactivateAllPlaybackMonitors]
// Type encoding: v16@0:8
// Implementation: 0x106363cfc

// -[SCOperaSharedResourceManager _setupForwardBufferingPreferenceForPlayerItem:playerConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106363d2c

// -[SCOperaSharedResourceManager _updateForwardBufferingPreferenceForPlayerItem:playerConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106363da0

// -[SCOperaSharedResourceManager _unloadPlayerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106363e58

// -[SCOperaSharedResourceManager _setupPlaybackMonitor]
// Type encoding: v16@0:8
// Implementation: 0x106363ee4

// -[SCOperaSharedResourceManager _attachMonitorToPlayerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106363ee8

// -[SCOperaSharedResourceManager _detachMonitorFromPlayerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106363f10

// -[SCOperaSharedResourceManager _hasExistingPlayerViewForPlayerItem:]
// Type encoding: B24@0:8@16
// Implementation: 0x106363f38

// -[SCOperaSharedResourceManager _observePlayerEvents]
// Type encoding: v16@0:8
// Implementation: 0x106363fa4

// -[SCOperaSharedResourceManager _currentDisplayingPlayerViewDebugDescription]
// Type encoding: @16@0:8
// Implementation: 0x106363fa8

// -[SCOperaSharedResourceManager mediaPlaybackSessionIdForPageId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106363fb0

// -[SCOperaSharedResourceManager _rawPlayerViews]
// Type encoding: @16@0:8
// Implementation: 0x10636404c

// -[SCOperaSharedResourceManager playbackMonitorManager]
// Type encoding: @16@0:8
// Implementation: 0x106364074

// -[SCOperaSharedResourceManager setPlaybackMonitorManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x10636407c

// -[SCOperaSharedResourceManager mediaServicesWereLost]
// Type encoding: B16@0:8
// Implementation: 0x1063640ac

// -[SCOperaSharedResourceManager setMediaServicesWereLost:]
// Type encoding: v20@0:8B16
// Implementation: 0x1063640b4

// -[SCOperaSharedResourceManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1063640bc

@end
