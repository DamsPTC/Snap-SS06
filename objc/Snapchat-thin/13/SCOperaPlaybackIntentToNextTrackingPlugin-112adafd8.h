// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaPlaybackIntentToNextTrackingPlugin
// Superclass: NSObject
// Address: 0x112adafd8

@interface SCOperaPlaybackIntentToNextTrackingPlugin

// Property: storiesMediaCoordinator; attributes: T@"<SCStoriesMediaCoordinating>",&,N,V_storiesMediaCoordinator
// Property: mediaPrefetchStateProvider; attributes: T@"<SCOperaMediaPrefetchStateProviding>",W,N,V_mediaPrefetchStateProvider
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOperaPlaybackIntentToNextTrackingPlugin initWithFeatureMajorName:viewSource:playSource:entryEvent:entryIntent:operaSessionId:intentDate:intentToOpenOperaTs:playbackMediaPrefetcher:]
// Type encoding: @88@0:8q16q24q32q40q48@56@64Q72@80
// Implementation: 0x1062fb668

// -[SCOperaPlaybackIntentToNextTrackingPlugin setOperaControlling:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062fb83c

// -[SCOperaPlaybackIntentToNextTrackingPlugin setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062fba80

// -[SCOperaPlaybackIntentToNextTrackingPlugin registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x1062fbab0

// -[SCOperaPlaybackIntentToNextTrackingPlugin _onOpenViewer:page:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1062fbdb8

// -[SCOperaPlaybackIntentToNextTrackingPlugin operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1062fbfcc

// -[SCOperaPlaybackIntentToNextTrackingPlugin _onPlaylistViewModelsDidUpdate:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1062fc3e8

// -[SCOperaPlaybackIntentToNextTrackingPlugin _onPlaylistWithFirstVMReady:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1062fc52c

// -[SCOperaPlaybackIntentToNextTrackingPlugin _mediaTypeForMediaWithPage:]
// Type encoding: q24@0:8@16
// Implementation: 0x1062fc5f4

// -[SCOperaPlaybackIntentToNextTrackingPlugin _mediaViewingIntentDateForNonFirstPage:]
// Type encoding: @24@0:8@16
// Implementation: 0x1062fcc00

// -[SCOperaPlaybackIntentToNextTrackingPlugin _onOpenMedia:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1062fcd80

// -[SCOperaPlaybackIntentToNextTrackingPlugin _onMediaStartsToDisplay:page:params:isGenericPlayback:isVideoStartsPlayingEvent:]
// Type encoding: v48@0:8@16@24@32B40B44
// Implementation: 0x1062fd0c8

// -[SCOperaPlaybackIntentToNextTrackingPlugin _onFirstFrameStartsToDisplay:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1062fd2cc

// -[SCOperaPlaybackIntentToNextTrackingPlugin _onPaged:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1062fd440

// -[SCOperaPlaybackIntentToNextTrackingPlugin _updateInteractionTimestampsWithParams:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062fd578

// -[SCOperaPlaybackIntentToNextTrackingPlugin _onCloseMedia:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1062fd5a8

// -[SCOperaPlaybackIntentToNextTrackingPlugin _emitViewerFirstFrameEventIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1062fd734

// -[SCOperaPlaybackIntentToNextTrackingPlugin _reportSuccessfullyDisplayedMediaWithPage:params:shouldReportBlizzard:shouldEmitOperaPITNEvent:]
// Type encoding: v40@0:8@16@24B32B36
// Implementation: 0x1062fd78c

// -[SCOperaPlaybackIntentToNextTrackingPlugin _reportAbandondedMediaWithPage:params:shouldReportBlizzard:shouldEmitOperaPITNEvent:]
// Type encoding: v40@0:8@16@24B32B36
// Implementation: 0x1062fd84c

// -[SCOperaPlaybackIntentToNextTrackingPlugin _reportMediaWithPage:params:when:isAbandoned:shouldReportBlizzard:]
// Type encoding: d48@0:8@16@24@32B40B44
// Implementation: 0x1062fd90c

// -[SCOperaPlaybackIntentToNextTrackingPlugin _reportPerfMetricForPITN:isAbandoned:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1062fea98

// -[SCOperaPlaybackIntentToNextTrackingPlugin _resetCheckpointTimestamps]
// Type encoding: v16@0:8
// Implementation: 0x1062fecfc

// -[SCOperaPlaybackIntentToNextTrackingPlugin _announcePitnOperaEventWithPage:params:isAbandoned:waitMs:]
// Type encoding: v44@0:8@16@24B32d36
// Implementation: 0x1062fed0c

// -[SCOperaPlaybackIntentToNextTrackingPlugin _entryInteractionBeginTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x1062ff0d4

// -[SCOperaPlaybackIntentToNextTrackingPlugin _updateMediaViewingStageTo:page:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1062ff1a0

// -[SCOperaPlaybackIntentToNextTrackingPlugin _shouldDecouplePITNTriggeringVideoStartEvents:params:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1062ff1a8

// -[SCOperaPlaybackIntentToNextTrackingPlugin _updateLastPagingEntryEventForEvent:viewInteractionType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1062ff510

// -[SCOperaPlaybackIntentToNextTrackingPlugin _updateEntryIntentForPagingEvent:viewInteractionType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1062ff54c

// -[SCOperaPlaybackIntentToNextTrackingPlugin _checkIfMediaAbandonedOnClosing:]
// Type encoding: B24@0:8q16
// Implementation: 0x1062ff578

// -[SCOperaPlaybackIntentToNextTrackingPlugin _itemGroupId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1062ff588

// -[SCOperaPlaybackIntentToNextTrackingPlugin _streamingFailureCode:]
// Type encoding: q24@0:8@16
// Implementation: 0x1062ff5ec

// -[SCOperaPlaybackIntentToNextTrackingPlugin _playerSessionTimeStamp]
// Type encoding: q16@0:8
// Implementation: 0x1062ff65c

// -[SCOperaPlaybackIntentToNextTrackingPlugin _featureMinorName:]
// Type encoding: q24@0:8@16
// Implementation: 0x1062ff678

// -[SCOperaPlaybackIntentToNextTrackingPlugin _itemLoadedCount:]
// Type encoding: q24@0:8@16
// Implementation: 0x1062ff71c

// -[SCOperaPlaybackIntentToNextTrackingPlugin _snapDuration:]
// Type encoding: d24@0:8@16
// Implementation: 0x1062ff730

// -[SCOperaPlaybackIntentToNextTrackingPlugin _mediaSizeInBytes:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1062ff7b8

// -[SCOperaPlaybackIntentToNextTrackingPlugin _loadPhase:isAbandoned:]
// Type encoding: q24@0:8B16B20
// Implementation: 0x1062ff7d0

// -[SCOperaPlaybackIntentToNextTrackingPlugin _bandwidthRangeClass:]
// Type encoding: @24@0:8@16
// Implementation: 0x1062ff7f0

// -[SCOperaPlaybackIntentToNextTrackingPlugin _scaNetworkSnapshots]
// Type encoding: @16@0:8
// Implementation: 0x1062ff83c

// -[SCOperaPlaybackIntentToNextTrackingPlugin _storyLoadStateWithMedia:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1062ffd58

// -[SCOperaPlaybackIntentToNextTrackingPlugin _snapPlaybackLoadState:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1062ffdec

// -[SCOperaPlaybackIntentToNextTrackingPlugin _loadStateFromPageLoadingState:]
// Type encoding: q24@0:8@16
// Implementation: 0x1062ffe04

// -[SCOperaPlaybackIntentToNextTrackingPlugin _itemLoadState:params:itemId:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1062ffe98

// -[SCOperaPlaybackIntentToNextTrackingPlugin _captureMediaLoadState:params:itemId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10630023c

// -[SCOperaPlaybackIntentToNextTrackingPlugin _SCAMediaType:]
// Type encoding: q24@0:8@16
// Implementation: 0x106300740

// -[SCOperaPlaybackIntentToNextTrackingPlugin _SCAProductMediaType:]
// Type encoding: q24@0:8@16
// Implementation: 0x106300764

// -[SCOperaPlaybackIntentToNextTrackingPlugin storiesMediaCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x106300960

// -[SCOperaPlaybackIntentToNextTrackingPlugin setStoriesMediaCoordinator:]
// Type encoding: v24@0:8@16
// Implementation: 0x106300968

// -[SCOperaPlaybackIntentToNextTrackingPlugin mediaPrefetchStateProvider]
// Type encoding: @16@0:8
// Implementation: 0x106300998

// -[SCOperaPlaybackIntentToNextTrackingPlugin setMediaPrefetchStateProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063009b0

// -[SCOperaPlaybackIntentToNextTrackingPlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1063009bc

// +[SCOperaPlaybackIntentToNextTrackingPlugin _captureLoadState:params:playlistItemController:storiesMediaCoordinator:playbackMediaPrefetcher:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x1062ff228

// +[SCOperaPlaybackIntentToNextTrackingPlugin _itemId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1062ff9d8

@end
