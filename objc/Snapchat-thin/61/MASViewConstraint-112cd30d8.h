// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: MASViewConstraint
// Superclass: MASConstraint
// Address: 0x112cd30d8

@interface MASViewConstraint

// Property: secondViewAttribute; attributes: T@"MASViewAttribute",&,N,V_secondViewAttribute
// Property: installedView; attributes: T@"UIView",W,N,V_installedView
// Property: layoutConstraint; attributes: T@"MASLayoutConstraint",W,N,V_layoutConstraint
// Property: layoutRelation; attributes: Tq,N,V_layoutRelation
// Property: layoutPriority; attributes: Tf,N,V_layoutPriority
// Property: layoutMultiplier; attributes: Td,N,V_layoutMultiplier
// Property: layoutConstant; attributes: Td,N,V_layoutConstant
// Property: hasLayoutRelation; attributes: TB,N,V_hasLayoutRelation
// Property: mas_key; attributes: T@,&,N,V_mas_key
// Property: useAnimator; attributes: TB,N,V_useAnimator
// Property: firstViewAttribute; attributes: T@"MASViewAttribute",R,N,V_firstViewAttribute

// -[MASViewConstraint initWithFirstViewAttribute:]
// Type encoding: @24@0:8@16
// Implementation: 0x100861480

// -[MASViewConstraint copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b7bbb50

// -[MASViewConstraint setLayoutConstant:]
// Type encoding: v24@0:8d16
// Implementation: 0x100861fc4

// -[MASViewConstraint setLayoutRelation:]
// Type encoding: v24@0:8q16
// Implementation: 0x100861bec

// -[MASViewConstraint hasBeenInstalled]
// Type encoding: B16@0:8
// Implementation: 0x10b7bbc20

// -[MASViewConstraint setSecondViewAttribute:]
// Type encoding: v24@0:8@16
// Implementation: 0x100861c10

// -[MASViewConstraint multipliedBy]
// Type encoding: @?16@0:8
// Implementation: 0x10b7bbc54

// -[MASViewConstraint dividedBy]
// Type encoding: @?16@0:8
// Implementation: 0x10b7bbcd8

// -[MASViewConstraint priority]
// Type encoding: @?16@0:8
// Implementation: 0x10b7bbd64

// -[MASViewConstraint equalToWithRelation]
// Type encoding: @?16@0:8
// Implementation: 0x100861998

// -[MASViewConstraint with]
// Type encoding: @16@0:8
// Implementation: 0x10b7bbde8

// -[MASViewConstraint and]
// Type encoding: @16@0:8
// Implementation: 0x10b7bbdec

// -[MASViewConstraint addConstraintWithLayoutAttribute:]
// Type encoding: @24@0:8q16
// Implementation: 0x10b7bbdf0

// -[MASViewConstraint key]
// Type encoding: @?16@0:8
// Implementation: 0x10b7bbe4c

// -[MASViewConstraint setInsets:]
// Type encoding: v48@0:8{UIEdgeInsets=dddd}16
// Implementation: 0x10b7bbed4

// -[MASViewConstraint setOffset:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b7bbf94

// -[MASViewConstraint setSizeOffset:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x100861f40

// -[MASViewConstraint setCenterOffset:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x10b7bbf98

// -[MASViewConstraint install]
// Type encoding: v16@0:8
// Implementation: 0x100862450

// -[MASViewConstraint layoutConstraintSimilarTo:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b7bc01c

// -[MASViewConstraint uninstall]
// Type encoding: v16@0:8
// Implementation: 0x100865f9c

// -[MASViewConstraint firstViewAttribute]
// Type encoding: @16@0:8
// Implementation: 0x100861d18

// -[MASViewConstraint secondViewAttribute]
// Type encoding: @16@0:8
// Implementation: 0x10086272c

// -[MASViewConstraint installedView]
// Type encoding: @16@0:8
// Implementation: 0x100862da0

// -[MASViewConstraint setInstalledView:]
// Type encoding: v24@0:8@16
// Implementation: 0x100862d8c

// -[MASViewConstraint layoutConstraint]
// Type encoding: @16@0:8
// Implementation: 0x100862010

// -[MASViewConstraint setLayoutConstraint:]
// Type encoding: v24@0:8@16
// Implementation: 0x100862dc0

// -[MASViewConstraint layoutRelation]
// Type encoding: q16@0:8
// Implementation: 0x10086277c

// -[MASViewConstraint layoutPriority]
// Type encoding: f16@0:8
// Implementation: 0x100862b90

// -[MASViewConstraint setLayoutPriority:]
// Type encoding: v20@0:8f16
// Implementation: 0x100861564

// -[MASViewConstraint layoutMultiplier]
// Type encoding: d16@0:8
// Implementation: 0x10086278c

// -[MASViewConstraint setLayoutMultiplier:]
// Type encoding: v24@0:8d16
// Implementation: 0x100861574

// -[MASViewConstraint layoutConstant]
// Type encoding: d16@0:8
// Implementation: 0x10086279c

// -[MASViewConstraint hasLayoutRelation]
// Type encoding: B16@0:8
// Implementation: 0x10b7bc2a4

// -[MASViewConstraint setHasLayoutRelation:]
// Type encoding: v20@0:8B16
// Implementation: 0x100861c00

// -[MASViewConstraint mas_key]
// Type encoding: @16@0:8
// Implementation: 0x100862c3c

// -[MASViewConstraint setMas_key:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7bc2b4

// -[MASViewConstraint useAnimator]
// Type encoding: B16@0:8
// Implementation: 0x10b7bc2f4

// -[MASViewConstraint setUseAnimator:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b7bc304

// -[MASViewConstraint .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x100c226bc

// +[MASViewConstraint installedConstraintsForView:]
// Type encoding: @24@0:8@16
// Implementation: 0x10086226c

@end
