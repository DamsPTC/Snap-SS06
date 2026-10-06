// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCTPItem
// Superclass: SCDocObject
// Address: 0x112a45e38

@interface SCCTPItem

// Property: item_id; attributes: T@"NSString",R,C,N,V_item_id
// Property: rank_id; attributes: T@"NSString",R,C,N,V_rank_id
// Property: data; attributes: T@"NSData",R,C,N,V_data
// Property: ct_id; attributes: T@"NSString",R,C,N,V_ct_id
// Property: section; attributes: T@"SCCTPSectionMetadata",R,C,N,V_section
// Property: type; attributes: Tc,R,N,V_type
// Property: context; attributes: Tc,R,N,V_context
// Property: version; attributes: T@"NSString",R,C,N,V_version
// Property: clientCacheTtlMinutes; attributes: TI,R,N,V_clientCacheTtlMinutes
// Property: requestId; attributes: T@"NSString",R,C,N,V_requestId

// -[SCCTPItem initWithItem_id:rank_id:data:ct_id:section:type:context:version:clientCacheTtlMinutes:requestId:]
// Type encoding: @84@0:8@16@24@32@40@48c56c60@64I72@76
// Implementation: 0x105567188

// -[SCCTPItem copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x105567380

// -[SCCTPItem hash]
// Type encoding: Q16@0:8
// Implementation: 0x1055673a4

// -[SCCTPItem isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10556748c

// -[SCCTPItem item_id]
// Type encoding: @16@0:8
// Implementation: 0x10556762c

// -[SCCTPItem rank_id]
// Type encoding: @16@0:8
// Implementation: 0x10556763c

// -[SCCTPItem data]
// Type encoding: @16@0:8
// Implementation: 0x10556764c

// -[SCCTPItem ct_id]
// Type encoding: @16@0:8
// Implementation: 0x10556765c

// -[SCCTPItem section]
// Type encoding: @16@0:8
// Implementation: 0x10556766c

// -[SCCTPItem type]
// Type encoding: c16@0:8
// Implementation: 0x10556767c

// -[SCCTPItem context]
// Type encoding: c16@0:8
// Implementation: 0x10556768c

// -[SCCTPItem version]
// Type encoding: @16@0:8
// Implementation: 0x10556769c

// -[SCCTPItem clientCacheTtlMinutes]
// Type encoding: I16@0:8
// Implementation: 0x1055676ac

// -[SCCTPItem requestId]
// Type encoding: @16@0:8
// Implementation: 0x1055676bc

// -[SCCTPItem .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1055676cc

// +[SCCTPItem table]
// Type encoding: r*16@0:8
// Implementation: 0x105568d44

// +[SCCTPItem immutableObjectParse:bufferSize:]
// Type encoding: @32@0:8r^v16Q24
// Implementation: 0x105568d50

// +[SCCTPItem objectClassFunctionPointer]
// Type encoding: {SCDocObjectClassFunctionPointer=^?^?}16@0:8
// Implementation: 0x10556918c

@end
