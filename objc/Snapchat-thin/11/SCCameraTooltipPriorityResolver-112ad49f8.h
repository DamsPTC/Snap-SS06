// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCameraTooltipPriorityResolver
// Superclass: NSObject
// Address: 0x112ad49f8

@interface SCCameraTooltipPriorityResolver

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCameraTooltipPriorityResolver initWithTooltipPriorityResolverDelegate:userInfoServices:userSession:legacyCameraTooltipsService:featureSettingService:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10620f7a8

// -[SCCameraTooltipPriorityResolver canShowTooltipWithType:isLensesOnboardingComplete:]
// Type encoding: B28@0:8Q16B24
// Implementation: 0x10620f8cc

// -[SCCameraTooltipPriorityResolver _isTooltipAvailable:isLensesOnboardingComplete:]
// Type encoding: B28@0:8Q16B24
// Implementation: 0x10620fa58

// -[SCCameraTooltipPriorityResolver _setupTooltipItems]
// Type encoding: v16@0:8
// Implementation: 0x10620fafc

// -[SCCameraTooltipPriorityResolver _isLensesActiveOnCamera]
// Type encoding: B16@0:8
// Implementation: 0x10620fb68

// -[SCCameraTooltipPriorityResolver _isOnMainCamera]
// Type encoding: B16@0:8
// Implementation: 0x10620fbdc

// -[SCCameraTooltipPriorityResolver _isOtherAlertVisible]
// Type encoding: B16@0:8
// Implementation: 0x10620fc50

// -[SCCameraTooltipPriorityResolver .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10620fc94

@end
