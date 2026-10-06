// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCManagedAudioDataSourceListenerAnnouncer
// Superclass: NSObject
// Address: 0x112c4bd40

@interface SCManagedAudioDataSourceListenerAnnouncer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCManagedAudioDataSourceListenerAnnouncer description]
// Type encoding: @16@0:8
// Implementation: 0x10b014ae8

// -[SCManagedAudioDataSourceListenerAnnouncer addListener:]
// Type encoding: B24@0:8@16
// Implementation: 0x10068ccf8

// -[SCManagedAudioDataSourceListenerAnnouncer removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b014cc4

// -[SCManagedAudioDataSourceListenerAnnouncer managedAudioDataSource:didOutputSampleBuffer:]
// Type encoding: v32@0:8@16^{opaqueCMSampleBuffer=}24
// Implementation: 0x10b014ef4

// -[SCManagedAudioDataSourceListenerAnnouncer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b014fe8

// -[SCManagedAudioDataSourceListenerAnnouncer .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10068c948

@end
