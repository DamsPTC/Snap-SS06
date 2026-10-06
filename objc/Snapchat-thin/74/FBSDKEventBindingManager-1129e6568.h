// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKEventBindingManager
// Superclass: NSObject
// Address: 0x1129e6568

@interface FBSDKEventBindingManager

// Property: eventLogger; attributes: T@"<FBSDKEventLogging>",&,N,V_eventLogger
// Property: swizzler; attributes: T#,&,N,V_swizzler
// Property: isStarted; attributes: TB,N,V_isStarted
// Property: reactBindings; attributes: T@"NSMutableDictionary",&,N,V_reactBindings
// Property: validClasses; attributes: T@"NSSet",&,N,V_validClasses
// Property: hasReactNative; attributes: TB,N,V_hasReactNative
// Property: eventBindings; attributes: T@"NSArray",&,N,V_eventBindings

// -[FBSDKEventBindingManager initWithSwizzler:eventLogger:]
// Type encoding: @32@0:8#16@24
// Implementation: 0x10495c2a0

// -[FBSDKEventBindingManager initWithJSON:swizzler:eventLogger:]
// Type encoding: @40@0:8@16#24@32
// Implementation: 0x10495c460

// -[FBSDKEventBindingManager parseArray:]
// Type encoding: @24@0:8@16
// Implementation: 0x10495c668

// -[FBSDKEventBindingManager start]
// Type encoding: v16@0:8
// Implementation: 0x10495c808

// -[FBSDKEventBindingManager rematchBindings]
// Type encoding: v16@0:8
// Implementation: 0x10495cb24

// -[FBSDKEventBindingManager matchSubviewsIn:]
// Type encoding: v24@0:8@16
// Implementation: 0x10495cc74

// -[FBSDKEventBindingManager matchView:delegate:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10495cef0

// -[FBSDKEventBindingManager updateBindings:]
// Type encoding: v24@0:8@16
// Implementation: 0x10495dc28

// -[FBSDKEventBindingManager handleReactNativeTouchesWithHandler:command:touches:eventName:]
// Type encoding: v48@0:8@16:24@32@40
// Implementation: 0x10495de3c

// -[FBSDKEventBindingManager handleDidSelectRowWithBindings:target:command:tableView:indexPath:]
// Type encoding: v56@0:8@16@24:32@40@48
// Implementation: 0x10495e128

// -[FBSDKEventBindingManager handleDidSelectItemWithBindings:target:command:collectionView:indexPath:]
// Type encoding: v56@0:8@16@24:32@40@48
// Implementation: 0x10495e3c0

// -[FBSDKEventBindingManager validClasses]
// Type encoding: @16@0:8
// Implementation: 0x10495e658

// -[FBSDKEventBindingManager eventLogger]
// Type encoding: @16@0:8
// Implementation: 0x10495e660

// -[FBSDKEventBindingManager setEventLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x10495e668

// -[FBSDKEventBindingManager swizzler]
// Type encoding: #16@0:8
// Implementation: 0x10495e674

// -[FBSDKEventBindingManager setSwizzler:]
// Type encoding: v24@0:8#16
// Implementation: 0x10495e67c

// -[FBSDKEventBindingManager isStarted]
// Type encoding: B16@0:8
// Implementation: 0x10495e688

// -[FBSDKEventBindingManager setIsStarted:]
// Type encoding: v20@0:8B16
// Implementation: 0x10495e690

// -[FBSDKEventBindingManager reactBindings]
// Type encoding: @16@0:8
// Implementation: 0x10495e698

// -[FBSDKEventBindingManager setReactBindings:]
// Type encoding: v24@0:8@16
// Implementation: 0x10495e6a0

// -[FBSDKEventBindingManager setValidClasses:]
// Type encoding: v24@0:8@16
// Implementation: 0x10495e6ac

// -[FBSDKEventBindingManager hasReactNative]
// Type encoding: B16@0:8
// Implementation: 0x10495e6b8

// -[FBSDKEventBindingManager setHasReactNative:]
// Type encoding: v20@0:8B16
// Implementation: 0x10495e6c0

// -[FBSDKEventBindingManager eventBindings]
// Type encoding: @16@0:8
// Implementation: 0x10495e6c8

// -[FBSDKEventBindingManager setEventBindings:]
// Type encoding: v24@0:8@16
// Implementation: 0x10495e6d0

// -[FBSDKEventBindingManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10495e6dc

@end
