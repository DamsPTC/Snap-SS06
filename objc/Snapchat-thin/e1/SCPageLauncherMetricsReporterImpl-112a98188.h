// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPageLauncherMetricsReporterImpl
// Superclass: NSObject
// Address: 0x112a98188

@interface SCPageLauncherMetricsReporterImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPageLauncherMetricsReporterImpl initWithLaunchCommand:userTrackedLogger:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105c899ec

// -[SCPageLauncherMetricsReporterImpl onFrameworkStartOrError:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c89abc

// -[SCPageLauncherMetricsReporterImpl onFrameworkEndOrError:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c89be8

// -[SCPageLauncherMetricsReporterImpl onDestinationPresentedOrError:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c89d30

// -[SCPageLauncherMetricsReporterImpl _logGrapheneLaunchMetric:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c89f14

// -[SCPageLauncherMetricsReporterImpl _logBlizzardLifecycleMetric:handlingStage:handlingResolutionDetails:elapsed:]
// Type encoding: v48@0:8q16q24@32d40
// Implementation: 0x105c89f98

// -[SCPageLauncherMetricsReporterImpl _generateHandlingId]
// Type encoding: q16@0:8
// Implementation: 0x105c8a094

// -[SCPageLauncherMetricsReporterImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105c8a0bc

@end
