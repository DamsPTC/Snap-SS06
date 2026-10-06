// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapLifecycleLoggingInfoProvider
// Superclass: NSObject
// Address: 0x112aac4a8

@interface SCMapLifecycleLoggingInfoProvider

// Property: openState; attributes: Tq,N,V_openState
// Property: openType; attributes: Tq,R,N,V_openType
// Property: openSource; attributes: Tq,R,N,V_openSource
// Property: openSourcePage; attributes: T@"NSString",R,N,V_openSourcePage
// Property: sourcePageContext; attributes: T@"NSString",R,N,V_sourcePageContext
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapLifecycleLoggingInfoProvider initWithAttributionObservable:currentPageTracker:isOpenFromSwipe:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x105f24150

// -[SCMapLifecycleLoggingInfoProvider _onAttributionUpdated:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f2439c

// -[SCMapLifecycleLoggingInfoProvider _didChangeCurrentPageEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f24448

// -[SCMapLifecycleLoggingInfoProvider openSource]
// Type encoding: q16@0:8
// Implementation: 0x105f24540

// -[SCMapLifecycleLoggingInfoProvider openSourcePage]
// Type encoding: @16@0:8
// Implementation: 0x105f24548

// -[SCMapLifecycleLoggingInfoProvider openState]
// Type encoding: q16@0:8
// Implementation: 0x105f24550

// -[SCMapLifecycleLoggingInfoProvider setOpenState:]
// Type encoding: v24@0:8q16
// Implementation: 0x105f24558

// -[SCMapLifecycleLoggingInfoProvider openType]
// Type encoding: q16@0:8
// Implementation: 0x105f24560

// -[SCMapLifecycleLoggingInfoProvider sourcePageContext]
// Type encoding: @16@0:8
// Implementation: 0x105f24568

// -[SCMapLifecycleLoggingInfoProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f24570

@end
