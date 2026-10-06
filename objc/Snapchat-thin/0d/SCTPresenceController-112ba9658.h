// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTPresenceController
// Superclass: NSObject
// Address: 0x112ba9658

@interface SCTPresenceController

// Property: scrollView; attributes: T@"UIScrollView",R,N,V_scrollView
// Property: contentView; attributes: T@"UIView",R,N,V_contentView
// Property: panGestureRecognizer; attributes: T@"UIPanGestureRecognizer",&,N,V_panGestureRecognizer
// Property: pillPressRecognizer; attributes: T@"UILongPressGestureRecognizer",&,N,V_pillPressRecognizer
// Property: draggingContext; attributes: T@"SCTPresenceDraggingContext",&,N,V_draggingContext
// Property: presenceRenderGrapheneLogger; attributes: T@"SCTPresenceRenderGrapheneLogger",R,N,V_presenceRenderGrapheneLogger

// -[SCTPresenceController initWithAvatarServices:presenceRenderGrapheneLogger:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1085d5ab0

// -[SCTPresenceController _initView]
// Type encoding: v16@0:8
// Implementation: 0x1085d5b4c

// -[SCTPresenceController _fetchBitmojiForParticipant:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085d5c10

// -[SCTPresenceController _fetchBitmojiForParticipantIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085d5ffc

// -[SCTPresenceController _scheduleUIUpdate]
// Type encoding: v16@0:8
// Implementation: 0x1085d6098

// -[SCTPresenceController scrollView]
// Type encoding: @16@0:8
// Implementation: 0x1085d60ec

// -[SCTPresenceController contentView]
// Type encoding: @16@0:8
// Implementation: 0x1085d60f4

// -[SCTPresenceController panGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x1085d60fc

// -[SCTPresenceController setPanGestureRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085d6104

// -[SCTPresenceController pillPressRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x1085d6134

// -[SCTPresenceController setPillPressRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085d613c

// -[SCTPresenceController draggingContext]
// Type encoding: @16@0:8
// Implementation: 0x1085d616c

// -[SCTPresenceController setDraggingContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085d6174

// -[SCTPresenceController presenceRenderGrapheneLogger]
// Type encoding: @16@0:8
// Implementation: 0x1085d61a4

// -[SCTPresenceController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1085d61ac

@end
