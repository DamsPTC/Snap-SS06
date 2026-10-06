// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdRetroRequestConfigValue
// Superclass: NSObject
// Address: 0x11297a9e8

@interface SCAdRetroRequestConfigValue

// Property: persistenceEnabled; attributes: TB,N,R,VpersistenceEnabled
// Property: retryEnabled; attributes: TB,N,R,VretryEnabled
// Property: maxFileAgeMillis; attributes: Td,N,R,VmaxFileAgeMillis
// Property: maxFileSizeBytes; attributes: Tq,N,R,VmaxFileSizeBytes
// Property: maxPersistedRequests; attributes: Tq,N,R,VmaxPersistedRequests
// Property: hash; attributes: Tq,N,R
// Property: description; attributes: T@"NSString",N,R

// -[SCAdRetroRequestConfigValue persistenceEnabled]
// Type encoding: B16@0:8
// Implementation: 0x103fe7af8

// -[SCAdRetroRequestConfigValue retryEnabled]
// Type encoding: B16@0:8
// Implementation: 0x103fe7b08

// -[SCAdRetroRequestConfigValue maxFileAgeMillis]
// Type encoding: d16@0:8
// Implementation: 0x103fe7b18

// -[SCAdRetroRequestConfigValue maxFileSizeBytes]
// Type encoding: q16@0:8
// Implementation: 0x103fe7b28

// -[SCAdRetroRequestConfigValue maxPersistedRequests]
// Type encoding: q16@0:8
// Implementation: 0x103fe7b38

// -[SCAdRetroRequestConfigValue initWithPersistenceEnabled:retryEnabled:maxFileAgeMillis:maxFileSizeBytes:maxPersistedRequests:]
// Type encoding: @48@0:8B16B20d24q32q40
// Implementation: 0x103fe7bec

// -[SCAdRetroRequestConfigValue hash]
// Type encoding: q16@0:8
// Implementation: 0x103fe7d30

// -[SCAdRetroRequestConfigValue isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x103fe7f10

// -[SCAdRetroRequestConfigValue copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x103fe7f90

// -[SCAdRetroRequestConfigValue encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x103fe8124

// -[SCAdRetroRequestConfigValue initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x103fe81b4

// -[SCAdRetroRequestConfigValue description]
// Type encoding: @16@0:8
// Implementation: 0x103fe81f0

// -[SCAdRetroRequestConfigValue init]
// Type encoding: @16@0:8
// Implementation: 0x103fe820c

// -[SCAdRetroRequestConfigValue .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x103fe8288

@end
