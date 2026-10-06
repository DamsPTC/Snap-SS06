// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBatchCaptureConfigurationListenerAnnouncer
// Superclass: NSObject
// Address: 0x112c024b0

@interface SCBatchCaptureConfigurationListenerAnnouncer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBatchCaptureConfigurationListenerAnnouncer description]
// Type encoding: @16@0:8
// Implementation: 0x10aef648c

// -[SCBatchCaptureConfigurationListenerAnnouncer addListener:]
// Type encoding: B24@0:8@16
// Implementation: 0x10aef6668

// -[SCBatchCaptureConfigurationListenerAnnouncer removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aef6a9c

// -[SCBatchCaptureConfigurationListenerAnnouncer batchCaptureConfiguration:didDeleteSegment:atIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x10aef6ccc

// -[SCBatchCaptureConfigurationListenerAnnouncer batchCaptureConfiguration:didDeleteSnapAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10aef6de0

// -[SCBatchCaptureConfigurationListenerAnnouncer batchCaptureConfiguration:didSplitSnapAtIndexPath:splitTime:]
// Type encoding: v56@0:8@16@24{?=qiIq}32
// Implementation: 0x10aef6eec

// -[SCBatchCaptureConfigurationListenerAnnouncer batchCaptureConfiguration:didAddSegment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10aef7014

// -[SCBatchCaptureConfigurationListenerAnnouncer batchCaptureConfigurationWillDeleteAllSegments:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aef7120

// -[SCBatchCaptureConfigurationListenerAnnouncer batchCaptureConfigurationDidDeleteAllSegments:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aef7204

// -[SCBatchCaptureConfigurationListenerAnnouncer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10aef72e8

// -[SCBatchCaptureConfigurationListenerAnnouncer .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10aef7310

@end
