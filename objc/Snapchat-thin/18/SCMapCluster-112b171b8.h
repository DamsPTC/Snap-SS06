// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapCluster
// Superclass: NSObject
// Address: 0x112b171b8

@interface SCMapCluster

// Property: coordinate; attributes: T{CLLocationCoordinate2D=dd},N,V_coordinate
// Property: slippyPoint; attributes: T{CGPoint=dd},R,N,V_slippyPoint
// Property: clusterables; attributes: T@"NSSet",R,N,V_clusterables
// Property: topClusterable; attributes: T@"<SCMapClusterable>",R,N,V_topClusterable
// Property: count; attributes: TQ,R,N
// Property: clusterIdentifier; attributes: T@"NSString",R,C,N,V_clusterIdentifier
// Property: clusterVisibilityPriority; attributes: Tq,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapCluster initWithClusterables:]
// Type encoding: @24@0:8@16
// Implementation: 0x106b1ee6c

// -[SCMapCluster setCoordinate:]
// Type encoding: v32@0:8{CLLocationCoordinate2D=dd}16
// Implementation: 0x106b1f194

// -[SCMapCluster count]
// Type encoding: Q16@0:8
// Implementation: 0x106b1f1bc

// -[SCMapCluster clusterVisibilityPriority]
// Type encoding: q16@0:8
// Implementation: 0x106b1f1c4

// -[SCMapCluster copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x106b1f1cc

// -[SCMapCluster isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x106b1f228

// -[SCMapCluster hash]
// Type encoding: Q16@0:8
// Implementation: 0x106b1f32c

// -[SCMapCluster clusterables]
// Type encoding: @16@0:8
// Implementation: 0x106b1f334

// -[SCMapCluster clusterIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x106b1f33c

// -[SCMapCluster topClusterable]
// Type encoding: @16@0:8
// Implementation: 0x106b1f344

// -[SCMapCluster slippyPoint]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x106b1f34c

// -[SCMapCluster coordinate]
// Type encoding: {CLLocationCoordinate2D=dd}16@0:8
// Implementation: 0x106b1f354

// -[SCMapCluster .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106b1f35c

@end
