// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdTrackFunnelEventType
// Superclass: NSObject
// Address: 0x1129d1488

@interface SCAdTrackFunnelEventType

// Property: description; attributes: T@"NSString",N,R
// Property: hash; attributes: Tq,N,R

// -[SCAdTrackFunnelEventType description]
// Type encoding: @16@0:8
// Implementation: 0x1046974c4

// -[SCAdTrackFunnelEventType init]
// Type encoding: @16@0:8
// Implementation: 0x1046974fc

// -[SCAdTrackFunnelEventType hash]
// Type encoding: q16@0:8
// Implementation: 0x104697544

// -[SCAdTrackFunnelEventType isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x104697578

// -[SCAdTrackFunnelEventType copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x1046975f8

// -[SCAdTrackFunnelEventType matchTopSnapPresented:attachmentTriggered:trackFlowTriggered:background:metadataReady:networkingStart:networkingEnd:durableJobStart:durableJobSubmitted:]
// Type encoding: v88@0:8@?16@?24@?32@?40@?48@?56@?64@?72@?80
// Implementation: 0x104697ab0

// -[SCAdTrackFunnelEventType .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104697bc4

// +[SCAdTrackFunnelEventType topSnapPresented]
// Type encoding: @16@0:8
// Implementation: 0x1046975fc

// +[SCAdTrackFunnelEventType attachmentTriggeredWithAttachmentTriggerType:]
// Type encoding: @24@0:8q16
// Implementation: 0x104697614

// +[SCAdTrackFunnelEventType trackFlowTriggeredWithTrackFlowTriggerType:]
// Type encoding: @24@0:8q16
// Implementation: 0x10469762c

// +[SCAdTrackFunnelEventType background]
// Type encoding: @16@0:8
// Implementation: 0x104697644

// +[SCAdTrackFunnelEventType metadataReadyWithAdResponseServeTimestamp:metadataState:]
// Type encoding: @32@0:8d16q24
// Implementation: 0x10469765c

// +[SCAdTrackFunnelEventType networkingStartWithAttemptCount:adResponseServeTimestamp:isLateTrack:version:]
// Type encoding: @44@0:8q16d24B32@36
// Implementation: 0x104697674

// +[SCAdTrackFunnelEventType networkingEndWithAttemptCount:success:statusCode:version:]
// Type encoding: @44@0:8q16B24q28@36
// Implementation: 0x1046976dc

// +[SCAdTrackFunnelEventType durableJobStartWithAttemptCount:state:version:]
// Type encoding: @40@0:8q16Q24@32
// Implementation: 0x10469773c

// +[SCAdTrackFunnelEventType durableJobSubmittedWithAttemptCount:version:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x104697794

@end
