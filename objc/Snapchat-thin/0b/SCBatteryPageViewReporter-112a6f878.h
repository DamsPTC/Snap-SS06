// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBatteryPageViewReporter
// Superclass: NSObject
// Address: 0x112a6f878

@interface SCBatteryPageViewReporter


// -[SCBatteryPageViewReporter initWithObserveQueue:batteryLogger:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10096e5e0

// -[SCBatteryPageViewReporter subscribeOnCurrentPageEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10096e6a0

// -[SCBatteryPageViewReporter _didChangeCurrentPageEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x100a0059c

// -[SCBatteryPageViewReporter didStartPageViewWithNewPageName:prevPageName:startTimestamp:]
// Type encoding: v40@0:8@16@24d32
// Implementation: 0x100a006e0

// -[SCBatteryPageViewReporter didEndPageViewWithFinishedPageName:endTimestamp:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x105818fe8

// -[SCBatteryPageViewReporter _cameraVisiblePages]
// Type encoding: @16@0:8
// Implementation: 0x100a10bf4

// -[SCBatteryPageViewReporter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105819088

@end
