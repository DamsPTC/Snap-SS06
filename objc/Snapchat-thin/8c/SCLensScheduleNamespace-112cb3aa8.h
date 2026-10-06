// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensScheduleNamespace
// Superclass: NSObject
// Address: 0x112cb3aa8

@interface SCLensScheduleNamespace

// Property: cacheKey; attributes: T@"NSString",R,N
// Property: namespaceId; attributes: T@"NSString",R,N,V_namespaceId

// -[SCLensScheduleNamespace cacheKey]
// Type encoding: @16@0:8
// Implementation: 0x100b8064c

// -[SCLensScheduleNamespace initWithNamespaceId:cacheKey:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100bfc774

// -[SCLensScheduleNamespace initWithCheckedNamespaceId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1003d91c8

// -[SCLensScheduleNamespace initWithNamespaceId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1003d911c

// -[SCLensScheduleNamespace initWithNamespaceType:]
// Type encoding: @24@0:8q16
// Implementation: 0x1007463ac

// -[SCLensScheduleNamespace initWithNamespaceType:snapSource:]
// Type encoding: @32@0:8q16Q24
// Implementation: 0x10074bd88

// -[SCLensScheduleNamespace copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x100c05d78

// -[SCLensScheduleNamespace isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b7334c8

// -[SCLensScheduleNamespace hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b733580

// -[SCLensScheduleNamespace namespaceId]
// Type encoding: @16@0:8
// Implementation: 0x100749344

// -[SCLensScheduleNamespace .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x100c05e44

// +[SCLensScheduleNamespace _cacheKeyForSnapSource:namespaceId:]
// Type encoding: @32@0:8Q16@24
// Implementation: 0x10074be30

// +[SCLensScheduleNamespace _namespaceIdWithNamespaceType:]
// Type encoding: @24@0:8q16
// Implementation: 0x1007463fc

@end
