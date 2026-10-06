// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBatteryHighCpuCriteria
// Superclass: NSObject
// Address: 0x1129c38f8

@interface SCBatteryHighCpuCriteria

// Property: highCpuUsageThreshold; attributes: Tq,N,R,VhighCpuUsageThreshold
// Property: cpuPullFrequencyInSecond; attributes: Tq,N,R,VcpuPullFrequencyInSecond
// Property: movingTimeWindowInSecond; attributes: Tq,N,R,VmovingTimeWindowInSecond
// Property: isCpuNormalized; attributes: TB,N,R,VisCpuNormalized
// Property: description; attributes: T@"NSString",N,R

// -[SCBatteryHighCpuCriteria highCpuUsageThreshold]
// Type encoding: q16@0:8
// Implementation: 0x1044dc27c

// -[SCBatteryHighCpuCriteria cpuPullFrequencyInSecond]
// Type encoding: q16@0:8
// Implementation: 0x1044dc28c

// -[SCBatteryHighCpuCriteria movingTimeWindowInSecond]
// Type encoding: q16@0:8
// Implementation: 0x1044dc29c

// -[SCBatteryHighCpuCriteria isCpuNormalized]
// Type encoding: B16@0:8
// Implementation: 0x1044dc2ac

// -[SCBatteryHighCpuCriteria initWithHighCpuUsageThreshold:cpuPullFrequencyInSecond:movingTimeWindowInSecond:isCpuNormalized:]
// Type encoding: @44@0:8q16q24q32B40
// Implementation: 0x1044dc2c0

// -[SCBatteryHighCpuCriteria copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x1044dc3d8

// -[SCBatteryHighCpuCriteria description]
// Type encoding: @16@0:8
// Implementation: 0x1044dc3dc

// -[SCBatteryHighCpuCriteria init]
// Type encoding: @16@0:8
// Implementation: 0x1044dc3f8

@end
