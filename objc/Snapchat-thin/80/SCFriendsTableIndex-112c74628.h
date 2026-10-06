// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendsTableIndex
// Superclass: UIView
// Address: 0x112c74628

@interface SCFriendsTableIndex

// Property: longPressGestureRecognizer; attributes: T@"UILongPressGestureRecognizer",&,N,V_longPressGestureRecognizer
// Property: panGestureRecognizer; attributes: T@"UIPanGestureRecognizer",&,N,V_panGestureRecognizer
// Property: selected; attributes: TB,N,V_selected
// Property: background; attributes: T@"UIView",&,N,Vbackground
// Property: indexStyle; attributes: Tq,N,V_indexStyle
// Property: delegate; attributes: T@"<FriendsTableIndexDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFriendsTableIndex initWithFrame:style:]
// Type encoding: @56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16q48
// Implementation: 0x10b2b2284

// -[SCFriendsTableIndex initWithFrame:style:lightColorSchemeEnabled:]
// Type encoding: @60@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16q48B56
// Implementation: 0x10b2b228c

// -[SCFriendsTableIndex setupGestureRecognizers]
// Type encoding: v16@0:8
// Implementation: 0x10b2b27d4

// -[SCFriendsTableIndex gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10b2b28dc

// -[SCFriendsTableIndex selected]
// Type encoding: B16@0:8
// Implementation: 0x10b2b298c

// -[SCFriendsTableIndex indexCount]
// Type encoding: q16@0:8
// Implementation: 0x10b2b29cc

// -[SCFriendsTableIndex charForIndex:]
// Type encoding: c24@0:8q16
// Implementation: 0x10b2b2af8

// -[SCFriendsTableIndex getTitleForSection:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2b2c20

// -[SCFriendsTableIndex getSectionKeyAndTitleMapper]
// Type encoding: @16@0:8
// Implementation: 0x10b2b2cac

// -[SCFriendsTableIndex longPress:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2b2ce8

// -[SCFriendsTableIndex layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x10b2b2ec0

// -[SCFriendsTableIndex drawRect:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10b2b2fc0

// -[SCFriendsTableIndex setQuickAddString:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2b4508

// -[SCFriendsTableIndex background]
// Type encoding: @16@0:8
// Implementation: 0x10b2b4540

// -[SCFriendsTableIndex setBackground:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2b4550

// -[SCFriendsTableIndex delegate]
// Type encoding: @16@0:8
// Implementation: 0x10b2b4590

// -[SCFriendsTableIndex setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2b45b0

// -[SCFriendsTableIndex longPressGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x10b2b45c4

// -[SCFriendsTableIndex setLongPressGestureRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2b45d4

// -[SCFriendsTableIndex panGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x10b2b4614

// -[SCFriendsTableIndex setPanGestureRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2b4624

// -[SCFriendsTableIndex setSelected:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b2b4664

// -[SCFriendsTableIndex indexStyle]
// Type encoding: q16@0:8
// Implementation: 0x10b2b4674

// -[SCFriendsTableIndex setIndexStyle:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b2b4684

// -[SCFriendsTableIndex .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b2b4694

// +[SCFriendsTableIndex getTitleDictWithStyle:quickAddString:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x10b2b3254

@end
