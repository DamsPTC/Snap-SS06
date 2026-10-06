// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDocObjectLoggingActivityMonitor
// Superclass: NSObject
// Address: 0x112c77b48

@interface SCDocObjectLoggingActivityMonitor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDocObjectLoggingActivityMonitor initWithErrorLogger:instanceTracker:graphene:crashOnFatal:path:]
// Type encoding: @52@0:8^?16@24@32B40@44
// Implementation: 0x1000c4cb4

// -[SCDocObjectLoggingActivityMonitor docObjectContextDidEncounterError:contexts:fatal:]
// Type encoding: v100@0:8{Error=iii{basic_string<char, std::char_traits<char>, std::allocator<char>>={?=(__rep={__short=[23c]b7b1}{__long=*Qb63b1})}}{basic_string<char, std::char_traits<char>, std::allocator<char>>={?=(__rep={__short=[23c]b7b1}{__long=*Qb63b1})}}i}16@88B96
// Implementation: 0x10b5e835c

// -[SCDocObjectLoggingActivityMonitor docObjectContextDidEncounterDiskFull]
// Type encoding: v16@0:8
// Implementation: 0x10b5e8944

// -[SCDocObjectLoggingActivityMonitor docObjectContextDidFetchForClass:duration:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x1001041dc

// -[SCDocObjectLoggingActivityMonitor docObjectContextDidDequeueChangesBlockForChangeRequests:duration:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x1001d0aa4

// -[SCDocObjectLoggingActivityMonitor docObjectContextDidExecutePerformChangesForChangeRequests:duration:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x1001d0d08

// -[SCDocObjectLoggingActivityMonitor docObjectContextTransactionCommitForChangeRequests:duration:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x1001cf6f8

// -[SCDocObjectLoggingActivityMonitor docObjectContextCreated:]
// Type encoding: v24@0:8@16
// Implementation: 0x1000c51e0

// -[SCDocObjectLoggingActivityMonitor docObjectContextShuttingDown]
// Type encoding: v16@0:8
// Implementation: 0x10b5e8978

// -[SCDocObjectLoggingActivityMonitor docObjectContextShutDown]
// Type encoding: v16@0:8
// Implementation: 0x10b5e89d4

// -[SCDocObjectLoggingActivityMonitor _descriptionForTrackedInstances:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b5e8a30

// -[SCDocObjectLoggingActivityMonitor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b5e8c60

@end
