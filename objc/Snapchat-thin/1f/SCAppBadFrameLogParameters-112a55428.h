// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAppBadFrameLogParameters
// Superclass: NSObject
// Address: 0x112a55428

@interface SCAppBadFrameLogParameters

// Property: badFrameDurationMs; attributes: Td,R,N,V_badFrameDurationMs
// Property: hangFrameDurationMs; attributes: Td,R,N,V_hangFrameDurationMs
// Property: pageDurationSec; attributes: Td,R,N,V_pageDurationSec
// Property: eventDurationMs; attributes: Td,R,N,V_eventDurationMs
// Property: jankFrameDurationMs; attributes: T@"NSNumber",R,C,N,V_jankFrameDurationMs
// Property: pageDurationBucket; attributes: Tq,R,N,V_pageDurationBucket
// Property: eventVisitNum; attributes: Tq,R,N,V_eventVisitNum
// Property: totalFrameCount; attributes: Tq,R,N,V_totalFrameCount
// Property: totalDroppedFrameCount; attributes: Tq,R,N,V_totalDroppedFrameCount
// Property: totalBadFrameCount; attributes: Tq,R,N,V_totalBadFrameCount
// Property: totalHangsCount; attributes: Tq,R,N,V_totalHangsCount
// Property: hangThresholdMs; attributes: Td,R,N,V_hangThresholdMs
// Property: mainThreadCpuTimeMs; attributes: Td,R,N,V_mainThreadCpuTimeMs
// Property: frameBucket0; attributes: Tq,R,N,V_frameBucket0
// Property: frameBucket1; attributes: Tq,R,N,V_frameBucket1
// Property: frameBucket2; attributes: Tq,R,N,V_frameBucket2
// Property: frameBucket3; attributes: Tq,R,N,V_frameBucket3
// Property: frameBucket4; attributes: Tq,R,N,V_frameBucket4
// Property: frameBucket5; attributes: Tq,R,N,V_frameBucket5
// Property: frameBucket6; attributes: Tq,R,N,V_frameBucket6
// Property: frameBucket7; attributes: Tq,R,N,V_frameBucket7
// Property: frameBucket8; attributes: Tq,R,N,V_frameBucket8
// Property: attribution; attributes: T@"NSString",R,C,N,V_attribution
// Property: prev_attribution; attributes: T@"NSString",R,C,N,V_prev_attribution
// Property: uiEventName; attributes: T@"NSString",R,C,N,V_uiEventName

// -[SCAppBadFrameLogParameters initWithBadFrameDurationMs:hangFrameDurationMs:pageDurationSec:eventDurationMs:jankFrameDurationMs:pageDurationBucket:eventVisitNum:totalFrameCount:totalDroppedFrameCount:totalBadFrameCount:totalHangsCount:hangThresholdMs:mainThreadCpuTimeMs:frameBucket0:frameBucket1:frameBucket2:frameBucket3:frameBucket4:frameBucket5:frameBucket6:frameBucket7:frameBucket8:attribution:prev_attribution:uiEventName:]
// Type encoding: @216@0:8d16d24d32d40@48q56q64q72q80q88q96d104d112q120q128q136q144q152q160q168q176q184@192@200@208
// Implementation: 0x105692a94

// -[SCAppBadFrameLogParameters copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x105692c80

// -[SCAppBadFrameLogParameters hash]
// Type encoding: Q16@0:8
// Implementation: 0x105692ca4

// -[SCAppBadFrameLogParameters isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x105692e54

// -[SCAppBadFrameLogParameters badFrameDurationMs]
// Type encoding: d16@0:8
// Implementation: 0x10569316c

// -[SCAppBadFrameLogParameters hangFrameDurationMs]
// Type encoding: d16@0:8
// Implementation: 0x105693174

// -[SCAppBadFrameLogParameters pageDurationSec]
// Type encoding: d16@0:8
// Implementation: 0x10569317c

// -[SCAppBadFrameLogParameters eventDurationMs]
// Type encoding: d16@0:8
// Implementation: 0x105693184

// -[SCAppBadFrameLogParameters jankFrameDurationMs]
// Type encoding: @16@0:8
// Implementation: 0x10569318c

// -[SCAppBadFrameLogParameters pageDurationBucket]
// Type encoding: q16@0:8
// Implementation: 0x105693194

// -[SCAppBadFrameLogParameters eventVisitNum]
// Type encoding: q16@0:8
// Implementation: 0x10569319c

// -[SCAppBadFrameLogParameters totalFrameCount]
// Type encoding: q16@0:8
// Implementation: 0x1056931a4

// -[SCAppBadFrameLogParameters totalDroppedFrameCount]
// Type encoding: q16@0:8
// Implementation: 0x1056931ac

// -[SCAppBadFrameLogParameters totalBadFrameCount]
// Type encoding: q16@0:8
// Implementation: 0x1056931b4

// -[SCAppBadFrameLogParameters totalHangsCount]
// Type encoding: q16@0:8
// Implementation: 0x1056931bc

// -[SCAppBadFrameLogParameters hangThresholdMs]
// Type encoding: d16@0:8
// Implementation: 0x1056931c4

// -[SCAppBadFrameLogParameters mainThreadCpuTimeMs]
// Type encoding: d16@0:8
// Implementation: 0x1056931cc

// -[SCAppBadFrameLogParameters frameBucket0]
// Type encoding: q16@0:8
// Implementation: 0x1056931d4

// -[SCAppBadFrameLogParameters frameBucket1]
// Type encoding: q16@0:8
// Implementation: 0x1056931dc

// -[SCAppBadFrameLogParameters frameBucket2]
// Type encoding: q16@0:8
// Implementation: 0x1056931e4

// -[SCAppBadFrameLogParameters frameBucket3]
// Type encoding: q16@0:8
// Implementation: 0x1056931ec

// -[SCAppBadFrameLogParameters frameBucket4]
// Type encoding: q16@0:8
// Implementation: 0x1056931f4

// -[SCAppBadFrameLogParameters frameBucket5]
// Type encoding: q16@0:8
// Implementation: 0x1056931fc

// -[SCAppBadFrameLogParameters frameBucket6]
// Type encoding: q16@0:8
// Implementation: 0x105693204

// -[SCAppBadFrameLogParameters frameBucket7]
// Type encoding: q16@0:8
// Implementation: 0x10569320c

// -[SCAppBadFrameLogParameters frameBucket8]
// Type encoding: q16@0:8
// Implementation: 0x105693214

// -[SCAppBadFrameLogParameters attribution]
// Type encoding: @16@0:8
// Implementation: 0x10569321c

// -[SCAppBadFrameLogParameters prev_attribution]
// Type encoding: @16@0:8
// Implementation: 0x105693224

// -[SCAppBadFrameLogParameters uiEventName]
// Type encoding: @16@0:8
// Implementation: 0x10569322c

// -[SCAppBadFrameLogParameters .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105693234

@end
