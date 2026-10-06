// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreloadController
// Superclass: NSObject
// Address: 0x112c70618

@interface SCPreloadController

// Property: dataSaverExpirationMillis; attributes: Tq,V_dataSaverExpirationMillis
// Property: queuePerformer; attributes: T@"<SCPerforming>",&,N,V_queuePerformer
// Property: curPreloadMode; attributes: Tq,R,N
// Property: travelModeEnabled; attributes: TB,R,N
// Property: preloadModeObservable; attributes: T@"SCObservable",R
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreloadController initWithQueuePerformer:]
// Type encoding: @24@0:8@16
// Implementation: 0x100369100

// -[SCPreloadController _appWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x10b254670

// -[SCPreloadController updatePreloadMode]
// Type encoding: v16@0:8
// Implementation: 0x10b2546d0

// -[SCPreloadController cleanupAfterLogout]
// Type encoding: v16@0:8
// Implementation: 0x10b254730

// -[SCPreloadController _updatePreloadMode]
// Type encoding: v16@0:8
// Implementation: 0x100504cd4

// -[SCPreloadController isUnderWifi]
// Type encoding: B16@0:8
// Implementation: 0x10b2547b0

// -[SCPreloadController shouldPrefetchExpensiveContent]
// Type encoding: B16@0:8
// Implementation: 0x10b2547c0

// -[SCPreloadController logPreloadMode]
// Type encoding: v16@0:8
// Implementation: 0x100504db4

// -[SCPreloadController travelModeEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10036a9f8

// -[SCPreloadController setPreloadMode:]
// Type encoding: v24@0:8q16
// Implementation: 0x100504d78

// -[SCPreloadController preloadModeObservable]
// Type encoding: @16@0:8
// Implementation: 0x10b2547f8

// -[SCPreloadController preloadMode]
// Type encoding: q16@0:8
// Implementation: 0x10b254820

// -[SCPreloadController curPreloadMode]
// Type encoding: q16@0:8
// Implementation: 0x10b254860

// -[SCPreloadController configWithApplicationEvent:connectivityMonitorServices:userSession:featureSettingServices:userBlizzardLogger:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x1004f94c0

// -[SCPreloadController _onFeatureSettingsDidChange:userSession:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b2548f4

// -[SCPreloadController dataSaverExpirationMillis]
// Type encoding: q16@0:8
// Implementation: 0x10036aa2c

// -[SCPreloadController setDataSaverExpirationMillis:]
// Type encoding: v24@0:8q16
// Implementation: 0x100504c64

// -[SCPreloadController queuePerformer]
// Type encoding: @16@0:8
// Implementation: 0x100504db8

// -[SCPreloadController setQueuePerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b254a7c

// -[SCPreloadController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b254aac

// +[SCPreloadController sharedInstance]
// Type encoding: @16@0:8
// Implementation: 0x100368d78

@end
