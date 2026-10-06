// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTimelineConfigurationListenerAnnouncer
// Superclass: NSObject
// Address: 0x112c02960

@interface SCTimelineConfigurationListenerAnnouncer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTimelineConfigurationListenerAnnouncer description]
// Type encoding: @16@0:8
// Implementation: 0x10aef99d4

// -[SCTimelineConfigurationListenerAnnouncer addListener:]
// Type encoding: B24@0:8@16
// Implementation: 0x10aef9bb0

// -[SCTimelineConfigurationListenerAnnouncer removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aef9fe4

// -[SCTimelineConfigurationListenerAnnouncer timelineConfiguration:didAddSegment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10aefa214

// -[SCTimelineConfigurationListenerAnnouncer timelineConfiguration:didAddSegments:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10aefa320

// -[SCTimelineConfigurationListenerAnnouncer timelineConfiguration:didDeleteSegment:atIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x10aefa42c

// -[SCTimelineConfigurationListenerAnnouncer timelineConfiguration:didMoveSegment:atIndex:toDestinationIndex:]
// Type encoding: v48@0:8@16@24q32q40
// Implementation: 0x10aefa540

// -[SCTimelineConfigurationListenerAnnouncer timelineConfigurationDidEnterReorderMode:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aefa664

// -[SCTimelineConfigurationListenerAnnouncer timelineConfigurationDidExitReorderMode:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aefa748

// -[SCTimelineConfigurationListenerAnnouncer timelineConfigurationDidRestoreToInitialState:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aefa82c

// -[SCTimelineConfigurationListenerAnnouncer timelineConfiguration:didUpdateSegmentTrim:atIndex:]
// Type encoding: v80@0:8@16{?={?=qiIq}{?=qiIq}}24q72
// Implementation: 0x10aefa910

// -[SCTimelineConfigurationListenerAnnouncer timelineConfigurationWillDeleteAllSegments:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aefaa20

// -[SCTimelineConfigurationListenerAnnouncer timelineConfigurationDidDeleteAllSegments:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aefab04

// -[SCTimelineConfigurationListenerAnnouncer timelineConfigurationDidUpdateThumbnails:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aefabe8

// -[SCTimelineConfigurationListenerAnnouncer timelineConfiguration:didUpdateThumbnailsForSegment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10aefaccc

// -[SCTimelineConfigurationListenerAnnouncer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10aefadd8

// -[SCTimelineConfigurationListenerAnnouncer .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10aefae00

@end
