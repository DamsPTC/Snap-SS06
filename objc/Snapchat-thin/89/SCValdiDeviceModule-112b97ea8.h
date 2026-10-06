// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCValdiDeviceModule
// Superclass: NSObject
// Address: 0x112b97ea8

@interface SCValdiDeviceModule

// Property: performHapticFeedbackFunction; attributes: T@"<SCValdiFunction>",&,V_performHapticFeedbackFunction
// Property: exceptionReporter; attributes: T@"<SCValdiExceptionReporter>",W,V_exceptionReporter
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCValdiDeviceModule initWithJSQueueDispatcher:]
// Type encoding: @24@0:8@16
// Implementation: 0x10809a05c

// -[SCValdiDeviceModule dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10809a298

// -[SCValdiDeviceModule _updateDeviceSettingsIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10809a3c8

// -[SCValdiDeviceModule _currentDisplaySize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10809a4d8

// -[SCValdiDeviceModule performHapticFeedback:]
// Type encoding: v24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x10809a578

// -[SCValdiDeviceModule _currentInsets]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x10809a5c0

// -[SCValdiDeviceModule _dispatchOnJsQueue:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10809a734

// -[SCValdiDeviceModule _updateDisplayInsetsAndNotify:]
// Type encoding: v20@0:8B16
// Implementation: 0x10809a794

// -[SCValdiDeviceModule _handleTraitCollectionDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x10809a964

// -[SCValdiDeviceModule _handleOrientationDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x10809a9d0

// -[SCValdiDeviceModule _handleRootViewDidMoveToWindow:]
// Type encoding: v24@0:8@16
// Implementation: 0x10809aab0

// -[SCValdiDeviceModule _observeGeometryOfWindowSceneIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x10809ab68

// -[SCValdiDeviceModule _handleSceneDidDisconnect:]
// Type encoding: v24@0:8@16
// Implementation: 0x10809ac08

// -[SCValdiDeviceModule observeValueForKeyPath:ofObject:change:context:]
// Type encoding: v48@0:8@16@24@32^v40
// Implementation: 0x10809acb4

// -[SCValdiDeviceModule _updateDisplaySize:scale:]
// Type encoding: v40@0:8{CGSize=dd}16d32
// Implementation: 0x10809adf8

// -[SCValdiDeviceModule ensureDeviceModuleIsReadyForContextCreation]
// Type encoding: v16@0:8
// Implementation: 0x10809af54

// -[SCValdiDeviceModule _pollTraitCollectionIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10809afd0

// -[SCValdiDeviceModule _updateTraitCollection:shouldNotify:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10809b02c

// -[SCValdiDeviceModule setAllowDarkMode:useScreenUserInterfaceStyleForDarkMode:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x10809b084

// -[SCValdiDeviceModule allowDarkMode]
// Type encoding: B16@0:8
// Implementation: 0x10809b0d4

// -[SCValdiDeviceModule useScreenUserInterfaceStyleForDarkMode]
// Type encoding: B16@0:8
// Implementation: 0x10809b110

// -[SCValdiDeviceModule notifyJSDarkModeChanged]
// Type encoding: v16@0:8
// Implementation: 0x10809b14c

// -[SCValdiDeviceModule notifyDisplayInsetChanged]
// Type encoding: v16@0:8
// Implementation: 0x10809b288

// -[SCValdiDeviceModule systemType:]
// Type encoding: v24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x10809b290

// -[SCValdiDeviceModule systemVersion:]
// Type encoding: v24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x10809b2a0

// -[SCValdiDeviceModule model:]
// Type encoding: v24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x10809b2ac

// -[SCValdiDeviceModule copyToClipBoard:]
// Type encoding: v24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x10809b2b8

// -[SCValdiDeviceModule deviceLocales:]
// Type encoding: v24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x10809b354

// -[SCValdiDeviceModule displayWidth:]
// Type encoding: v24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x10809b3d4

// -[SCValdiDeviceModule displayHeight:]
// Type encoding: v24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x10809b3dc

// -[SCValdiDeviceModule displayScale:]
// Type encoding: v24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x10809b3e4

// -[SCValdiDeviceModule dynamicTypeScale:]
// Type encoding: v24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x10809b3ec

// -[SCValdiDeviceModule displayLeftInset:]
// Type encoding: v24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x10809b438

// -[SCValdiDeviceModule displayTopInset:]
// Type encoding: v24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x10809b440

// -[SCValdiDeviceModule displayRightInset:]
// Type encoding: v24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x10809b448

// -[SCValdiDeviceModule displayBottomInset:]
// Type encoding: v24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x10809b450

// -[SCValdiDeviceModule localeUsesMetricSystem:]
// Type encoding: v24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x10809b458

// -[SCValdiDeviceModule timeZoneName:]
// Type encoding: v24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x10809b484

// -[SCValdiDeviceModule _timeZoneFromMarshaller:]
// Type encoding: @24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x10809b4dc

// -[SCValdiDeviceModule timeZoneRawSecondsFromGMT:]
// Type encoding: v24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x10809b560

// -[SCValdiDeviceModule timeZoneDstSecondsFromGMT:]
// Type encoding: v24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x10809b5b0

// -[SCValdiDeviceModule uptimeMs:]
// Type encoding: v24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x10809b5e8

// -[SCValdiDeviceModule getModulePath]
// Type encoding: @16@0:8
// Implementation: 0x10809b618

// -[SCValdiDeviceModule loadModule]
// Type encoding: @16@0:8
// Implementation: 0x10809b624

// -[SCValdiDeviceModule bridgeObserverDidAddNewCallback:]
// Type encoding: v24@0:8@16
// Implementation: 0x10809bf68

// -[SCValdiDeviceModule performHapticFeedbackFunction]
// Type encoding: @16@0:8
// Implementation: 0x10809bfb8

// -[SCValdiDeviceModule setPerformHapticFeedbackFunction:]
// Type encoding: v24@0:8@16
// Implementation: 0x10809bfc4

// -[SCValdiDeviceModule exceptionReporter]
// Type encoding: @16@0:8
// Implementation: 0x10809bfcc

// -[SCValdiDeviceModule setExceptionReporter:]
// Type encoding: v24@0:8@16
// Implementation: 0x10809bfe4

// -[SCValdiDeviceModule .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10809bff0

@end
