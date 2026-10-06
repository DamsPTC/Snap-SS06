// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGCDTimer
// Superclass: NSObject
// Address: 0x112c2b568

@interface SCGCDTimer

// Property: timer; attributes: T@"NSObject<OS_dispatch_source>",&,N,V_timer
// Property: userInfo; attributes: T@,&,N,V_userInfo
// Property: queue; attributes: T@"NSObject<OS_dispatch_queue>",&,N,V_queue
// Property: scheduledDate; attributes: T@"NSDate",R,N,V_scheduledDate

// -[SCGCDTimer initWithTimer:scheduledDate:userInfo:onQueue:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x100815bd4

// -[SCGCDTimer dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10af844c4

// -[SCGCDTimer testAndSetInvalid]
// Type encoding: B16@0:8
// Implementation: 0x10af84588

// -[SCGCDTimer isInvalid]
// Type encoding: B16@0:8
// Implementation: 0x10af845a4

// -[SCGCDTimer invalidate]
// Type encoding: v16@0:8
// Implementation: 0x10af845b0

// -[SCGCDTimer userInfo]
// Type encoding: @16@0:8
// Implementation: 0x10af84668

// -[SCGCDTimer setUserInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x100815ce8

// -[SCGCDTimer scheduledDate]
// Type encoding: @16@0:8
// Implementation: 0x10af84670

// -[SCGCDTimer timer]
// Type encoding: @16@0:8
// Implementation: 0x10af84678

// -[SCGCDTimer setTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x100815cb8

// -[SCGCDTimer queue]
// Type encoding: @16@0:8
// Implementation: 0x10af84680

// -[SCGCDTimer setQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x100815d18

// -[SCGCDTimer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10af84688

// +[SCGCDTimer scheduledTimerWithTimeInterval:target:selector:userInfo:dispatchQueue:]
// Type encoding: @56@0:8d16@24:32@40@48
// Implementation: 0x100815a0c

@end
