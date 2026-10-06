// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapDropsEntryPoint
// Superclass: SCEntryPoint
// Address: 0x112aabf08

@interface SCMapDropsEntryPoint

// Property: feature; attributes: Tq,R,N
// Property: touchPriority; attributes: Tq,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapDropsEntryPoint begin]
// Type encoding: v16@0:8
// Implementation: 0x105f19aac

// -[SCMapDropsEntryPoint end]
// Type encoding: @16@0:8
// Implementation: 0x105f19e58

// -[SCMapDropsEntryPoint _placePersistedDrops:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f19efc

// -[SCMapDropsEntryPoint feature]
// Type encoding: q16@0:8
// Implementation: 0x105f1a32c

// -[SCMapDropsEntryPoint touchPriority]
// Type encoding: q16@0:8
// Implementation: 0x105f1a334

// -[SCMapDropsEntryPoint didTouchDownOnMapAtPoint:featureDescriptors:]
// Type encoding: {SCMapTouchResponderResult=BB}40@0:8{CGPoint=dd}16@32
// Implementation: 0x105f1a33c

// -[SCMapDropsEntryPoint didTouchUpOnMapAtPoint:touchWorldLocation:featureDescriptors:]
// Type encoding: {SCMapTouchResponderResult=BB}56@0:8{CGPoint=dd}16{CLLocationCoordinate2D=dd}32@48
// Implementation: 0x105f1a350

// -[SCMapDropsEntryPoint didLongPressOnMapAtPoint:featureDescriptors:]
// Type encoding: {SCMapTouchResponderResult=BB}40@0:8{CGPoint=dd}16@32
// Implementation: 0x105f1a360

// -[SCMapDropsEntryPoint didCancelTouchOnMapWithReason:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f1a388

// -[SCMapDropsEntryPoint priorResponderDidHandleTouch:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f1a38c

// -[SCMapDropsEntryPoint _handleLongPressAtPoint:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x105f1a390

// -[SCMapDropsEntryPoint _coordinateFromPoint:]
// Type encoding: {CLLocationCoordinate2D=dd}32@0:8{CGPoint=dd}16
// Implementation: 0x105f1a4c0

// -[SCMapDropsEntryPoint _dropScopeFromPoint:]
// Type encoding: @32@0:8{CGPoint=dd}16
// Implementation: 0x105f1a578

// -[SCMapDropsEntryPoint _dropName]
// Type encoding: @16@0:8
// Implementation: 0x105f1a714

// -[SCMapDropsEntryPoint _setupAppTriggerObserver]
// Type encoding: v16@0:8
// Implementation: 0x105f1a81c

// -[SCMapDropsEntryPoint _handleLaunchDropsTrigger:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f1aa14

// -[SCMapDropsEntryPoint _focusedDropForIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f1aa80

// -[SCMapDropsEntryPoint _exposeFocusedDropScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f1ab40

// -[SCMapDropsEntryPoint _configureChrome]
// Type encoding: v16@0:8
// Implementation: 0x105f1ac58

// -[SCMapDropsEntryPoint _resetChromeToDefaults]
// Type encoding: v16@0:8
// Implementation: 0x105f1ada0

// -[SCMapDropsEntryPoint _reset]
// Type encoding: v16@0:8
// Implementation: 0x105f1aee8

// -[SCMapDropsEntryPoint _displaySentNotification]
// Type encoding: v16@0:8
// Implementation: 0x105f1aeec

// -[SCMapDropsEntryPoint didCloseDropsTray]
// Type encoding: v16@0:8
// Implementation: 0x105f1b008

// -[SCMapDropsEntryPoint didSuccessfullySendDrop:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f1b074

// -[SCMapDropsEntryPoint didSuccessfullyHideDrop:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f1b18c

// -[SCMapDropsEntryPoint _createPersistedDrop:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f1b31c

// -[SCMapDropsEntryPoint .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f1b370

@end
