// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesReportSession
// Superclass: NSObject
// Address: 0x112b6e698

@interface SCStoriesReportSession

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesReportSession initWithOperaControlling:userSession:discoverFeedEventsController:discoverFeedDataFetcher:viewLocation:safetyReportScopeExposer:bloopsReportScopeExposer:playlistItemController:contentRemovalDelegate:storiesConfigProvider:mapContentFilter:]
// Type encoding: @104@0:8@16@24@32@40q48@56@64@72@80@88@96
// Implementation: 0x107a9f088

// -[SCStoriesReportSession dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107a9f270

// -[SCStoriesReportSession registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x107a9f2a4

// -[SCStoriesReportSession operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107a9f380

// -[SCStoriesReportSession _reportNotFromPlaceForSnapId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a9fe60

// -[SCStoriesReportSession _handleReportNotFromPlaceWithSuccess:]
// Type encoding: v20@0:8B16
// Implementation: 0x107a9ff84

// -[SCStoriesReportSession _startSafetyReportWithParams:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aa008c

// -[SCStoriesReportSession _startBloopsReportFlowWithPage:storiesPlaybackSequence:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107aa0180

// -[SCStoriesReportSession reportDidCompleteWithCancelled:]
// Type encoding: v20@0:8B16
// Implementation: 0x107aa0584

// -[SCStoriesReportSession reportDidSubmitWithReasonId:comment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107aa0668

// -[SCStoriesReportSession bloopsReportDidCompleteWithCancelled:]
// Type encoding: v20@0:8B16
// Implementation: 0x107aa06ac

// -[SCStoriesReportSession bloopsReportDidSubmitWithReasonId:comment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107aa06f8

// -[SCStoriesReportSession _removeContentFromPlaylist]
// Type encoding: v16@0:8
// Implementation: 0x107aa0788

// -[SCStoriesReportSession _onReportCompleted]
// Type encoding: v16@0:8
// Implementation: 0x107aa0994

// -[SCStoriesReportSession _onReportSubmittedWithActionType:]
// Type encoding: v24@0:8q16
// Implementation: 0x107aa0ae4

// -[SCStoriesReportSession _emitContextOperaLoggingReportEventWithStoryFeedActionType:]
// Type encoding: v24@0:8q16
// Implementation: 0x107aa0dbc

// -[SCStoriesReportSession _autoAdvanceToNextStory]
// Type encoding: v16@0:8
// Implementation: 0x107aa0f70

// -[SCStoriesReportSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107aa0fec

// +[SCStoriesReportSession announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107a9f07c

@end
