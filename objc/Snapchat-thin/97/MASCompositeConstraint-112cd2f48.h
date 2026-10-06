// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: MASCompositeConstraint
// Superclass: MASConstraint
// Address: 0x112cd2f48

@interface MASCompositeConstraint

// Property: mas_key; attributes: T@,&,N,V_mas_key
// Property: childConstraints; attributes: T@"NSMutableArray",&,N,V_childConstraints
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[MASCompositeConstraint initWithChildren:]
// Type encoding: @24@0:8@16
// Implementation: 0x100861584

// -[MASCompositeConstraint constraint:shouldBeReplacedWithConstraint:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b7b97d8

// -[MASCompositeConstraint constraint:addConstraintWithLayoutAttribute:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10b7b9878

// -[MASCompositeConstraint multipliedBy]
// Type encoding: @?16@0:8
// Implementation: 0x10b7b9900

// -[MASCompositeConstraint dividedBy]
// Type encoding: @?16@0:8
// Implementation: 0x10b7b9a94

// -[MASCompositeConstraint priority]
// Type encoding: @?16@0:8
// Implementation: 0x10b7b9c28

// -[MASCompositeConstraint equalToWithRelation]
// Type encoding: @?16@0:8
// Implementation: 0x1008617c8

// -[MASCompositeConstraint addConstraintWithLayoutAttribute:]
// Type encoding: @24@0:8q16
// Implementation: 0x10b7b9dbc

// -[MASCompositeConstraint key]
// Type encoding: @?16@0:8
// Implementation: 0x10b7b9df0

// -[MASCompositeConstraint setInsets:]
// Type encoding: v48@0:8{UIEdgeInsets=dddd}16
// Implementation: 0x10b7b9fec

// -[MASCompositeConstraint setOffset:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b7ba10c

// -[MASCompositeConstraint setSizeOffset:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x100861e38

// -[MASCompositeConstraint setCenterOffset:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x10b7ba20c

// -[MASCompositeConstraint install]
// Type encoding: v16@0:8
// Implementation: 0x100862330

// -[MASCompositeConstraint uninstall]
// Type encoding: v16@0:8
// Implementation: 0x10b7ba314

// -[MASCompositeConstraint mas_key]
// Type encoding: @16@0:8
// Implementation: 0x10b7ba404

// -[MASCompositeConstraint setMas_key:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7ba414

// -[MASCompositeConstraint childConstraints]
// Type encoding: @16@0:8
// Implementation: 0x100861988

// -[MASCompositeConstraint setChildConstraints:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7ba454

// -[MASCompositeConstraint .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x100862f0c

@end
