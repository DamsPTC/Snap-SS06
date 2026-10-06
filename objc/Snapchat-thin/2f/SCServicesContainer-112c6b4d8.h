// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCServicesContainer
// Superclass: SCServicesExposer
// Address: 0x112c6b4d8

@interface SCServicesContainer

// Property: hasExposedServices; attributes: TB,R,N
// Property: canExposeServices; attributes: TB,R,N
// Property: externallyAccessible; attributes: TB,R,N,V_externallyAccessible
// Property: services; attributes: T@"SCLockfreeLazy",R,N
// Property: serviceClassType; attributes: T@"NSString",R,N

// -[SCServicesContainer initWithDelegate:serviceClassType:externallyAccessible:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x100a16a10

// -[SCServicesContainer exposeServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x100a18d84

// -[SCServicesContainer exposeLazyServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x100a1b504

// -[SCServicesContainer hasExposedServices]
// Type encoding: B16@0:8
// Implementation: 0x100a1b180

// -[SCServicesContainer canExposeServices]
// Type encoding: B16@0:8
// Implementation: 0x100a19f10

// -[SCServicesContainer services]
// Type encoding: @16@0:8
// Implementation: 0x100a19f28

// -[SCServicesContainer serviceClassType]
// Type encoding: @16@0:8
// Implementation: 0x100a16ec8

// -[SCServicesContainer externallyAccessible]
// Type encoding: B16@0:8
// Implementation: 0x100a19170

// -[SCServicesContainer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0abe24

@end
