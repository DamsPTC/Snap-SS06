// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureAutoEnableRingFlashHandler
// Superclass: NSObject
// Address: 0x112ace6e8

@interface SCFeatureAutoEnableRingFlashHandler

// Property: debounceTimer; attributes: T@"NSTimer",&,N,V_debounceTimer
// Property: toolbarItem; attributes: T@"<SCCameraToolbarItem>",R,N,V_toolbarItem
// Property: tooltipShowCountMetric; attributes: Tq,N,V_tooltipShowCountMetric
// Property: autoEnabledCountMetric; attributes: Tq,N,V_autoEnabledCountMetric
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFeatureAutoEnableRingFlashHandler initWithContainerView:cameraToolbar:toolbarItem:cameraTooltipsService:cameraViewType:cameraHardwareResource:deviceCapacityAnalyzer:delegate:lensCarouselManager:viewControllerLifeCycleEvents:mainCameraViewControllerLifecycleEvents:cameraUserBlizzardLogger:userPreferences:]
// Type encoding: @120@0:8@16@24@32@40q48@56@64@72@80@88@96@104@112
// Implementation: 0x1008b1f18

// -[SCFeatureAutoEnableRingFlashHandler dismissAutoEnableTooltipView]
// Type encoding: v16@0:8
// Implementation: 0x1061831e4

// -[SCFeatureAutoEnableRingFlashHandler isNextStateRingFlash]
// Type encoding: B16@0:8
// Implementation: 0x106183210

// -[SCFeatureAutoEnableRingFlashHandler dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10618329c

// -[SCFeatureAutoEnableRingFlashHandler _logUserTrackedEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106183314

// -[SCFeatureAutoEnableRingFlashHandler _logCameraModeTooltipEvent]
// Type encoding: v16@0:8
// Implementation: 0x10618337c

// -[SCFeatureAutoEnableRingFlashHandler startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1008b2650

// -[SCFeatureAutoEnableRingFlashHandler stopObservingCapturerStateUpdate]
// Type encoding: v16@0:8
// Implementation: 0x106183494

// -[SCFeatureAutoEnableRingFlashHandler startObservingManagedDeviceCapacityAnalyzerEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008b2570

// -[SCFeatureAutoEnableRingFlashHandler stopObservingManagedDeviceCapacityAnalyzerEvent]
// Type encoding: v16@0:8
// Implementation: 0x1061834f8

// -[SCFeatureAutoEnableRingFlashHandler _registerObserversIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1008b2490

// -[SCFeatureAutoEnableRingFlashHandler _registerLensObserversForLensCarousel]
// Type encoding: v16@0:8
// Implementation: 0x100b6ff0c

// -[SCFeatureAutoEnableRingFlashHandler _stopObservingCameraModeObserver]
// Type encoding: v16@0:8
// Implementation: 0x106183524

// -[SCFeatureAutoEnableRingFlashHandler _stopObservingCameraModeLabelsObserver]
// Type encoding: v16@0:8
// Implementation: 0x106183550

// -[SCFeatureAutoEnableRingFlashHandler _didActivateLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x100b70124

// -[SCFeatureAutoEnableRingFlashHandler _didChangeLensCarouselActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x100b7022c

// -[SCFeatureAutoEnableRingFlashHandler _didChangeLowLightCondition:]
// Type encoding: v20@0:8B16
// Implementation: 0x106183584

// -[SCFeatureAutoEnableRingFlashHandler _didChangeRingFlashState:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c6a7a0

// -[SCFeatureAutoEnableRingFlashHandler _resetAutoEnableTooltipCounter]
// Type encoding: v16@0:8
// Implementation: 0x1061835f4

// -[SCFeatureAutoEnableRingFlashHandler _autoEnableRingFlashTooltipSeenCount]
// Type encoding: q16@0:8
// Implementation: 0x106183638

// -[SCFeatureAutoEnableRingFlashHandler _increaseTooltipSeenCount]
// Type encoding: v16@0:8
// Implementation: 0x106183674

// -[SCFeatureAutoEnableRingFlashHandler _shouldAutoEnableRingFlash]
// Type encoding: B16@0:8
// Implementation: 0x100c6a880

// -[SCFeatureAutoEnableRingFlashHandler _canAutoEnable]
// Type encoding: B16@0:8
// Implementation: 0x100c6a930

// -[SCFeatureAutoEnableRingFlashHandler _canAutoEnableWithDevicePosition:]
// Type encoding: B24@0:8q16
// Implementation: 0x1061836bc

// -[SCFeatureAutoEnableRingFlashHandler _cancelAutoEnableRingLight]
// Type encoding: v16@0:8
// Implementation: 0x1061836c8

// -[SCFeatureAutoEnableRingFlashHandler _autoEnableRingFlashIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x100c6a808

// -[SCFeatureAutoEnableRingFlashHandler _autoEnableRingFlash]
// Type encoding: v16@0:8
// Implementation: 0x1061836f8

// -[SCFeatureAutoEnableRingFlashHandler _setAutoEnableLastUsedDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106183764

// -[SCFeatureAutoEnableRingFlashHandler _hasNotExceededSeenCount]
// Type encoding: B16@0:8
// Implementation: 0x1061837ec

// -[SCFeatureAutoEnableRingFlashHandler _showTooltipForAutoEnableRingLight]
// Type encoding: v16@0:8
// Implementation: 0x10618382c

// -[SCFeatureAutoEnableRingFlashHandler tooltipShowCountMetric]
// Type encoding: q16@0:8
// Implementation: 0x106183a5c

// -[SCFeatureAutoEnableRingFlashHandler setTooltipShowCountMetric:]
// Type encoding: v24@0:8q16
// Implementation: 0x106183a64

// -[SCFeatureAutoEnableRingFlashHandler autoEnabledCountMetric]
// Type encoding: q16@0:8
// Implementation: 0x106183a6c

// -[SCFeatureAutoEnableRingFlashHandler setAutoEnabledCountMetric:]
// Type encoding: v24@0:8q16
// Implementation: 0x106183a74

// -[SCFeatureAutoEnableRingFlashHandler toolbarItem]
// Type encoding: @16@0:8
// Implementation: 0x106183a7c

// -[SCFeatureAutoEnableRingFlashHandler debounceTimer]
// Type encoding: @16@0:8
// Implementation: 0x106183a84

// -[SCFeatureAutoEnableRingFlashHandler setDebounceTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106183a8c

// -[SCFeatureAutoEnableRingFlashHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106183abc

@end
