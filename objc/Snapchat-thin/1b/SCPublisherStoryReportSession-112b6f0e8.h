// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPublisherStoryReportSession
// Superclass: NSObject
// Address: 0x112b6f0e8

@interface SCPublisherStoryReportSession

// Property: playableDataModel; attributes: T@,&,N,V_playableDataModel
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPublisherStoryReportSession initWithOperaControlling:userSession:viewLocation:discoverFeedDataFetcher:safetyReportScopeExposer:bloopsReportScopeExposer:targetFeature:circumstanceEngine:playlistItemController:contentRemovalDelegate:]
// Type encoding: @96@0:8@16@24q32@40@48@56Q64@72@80@88
// Implementation: 0x107ac9bb8

// -[SCPublisherStoryReportSession registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x107ac9d74

// -[SCPublisherStoryReportSession operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107ac9e58

// -[SCPublisherStoryReportSession addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aca458

// -[SCPublisherStoryReportSession removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aca460

// -[SCPublisherStoryReportSession reportDidCompleteWithCancelled:]
// Type encoding: v20@0:8B16
// Implementation: 0x107aca468

// -[SCPublisherStoryReportSession reportDidSubmitWithReasonId:comment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107aca554

// -[SCPublisherStoryReportSession bloopsReportDidCompleteWithCancelled:]
// Type encoding: v20@0:8B16
// Implementation: 0x107aca558

// -[SCPublisherStoryReportSession bloopsReportDidSubmitWithReasonId:comment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107aca5a0

// -[SCPublisherStoryReportSession _startBloopsReportFlowWithPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aca610

// -[SCPublisherStoryReportSession _onReportSubmittedWithReasonId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aca838

// -[SCPublisherStoryReportSession _autoAdvanceToNextStory]
// Type encoding: v16@0:8
// Implementation: 0x107acac64

// -[SCPublisherStoryReportSession _removeStoryFromPlaylist]
// Type encoding: v16@0:8
// Implementation: 0x107acace0

// -[SCPublisherStoryReportSession playableDataModel]
// Type encoding: @16@0:8
// Implementation: 0x107acad68

// -[SCPublisherStoryReportSession setPlayableDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x107acad70

// -[SCPublisherStoryReportSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107acada0

// +[SCPublisherStoryReportSession announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107ac9bac

@end
