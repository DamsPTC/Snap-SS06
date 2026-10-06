// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCTundraJobConfig
// Superclass: SCValdiMarshallableObject
// Address: 0x112ab0c38

@interface SCCTundraJobConfig

// Property: serializedRequest; attributes: T@"NSData",C,D,N
// Property: uniqueSubIdentifier; attributes: T@"NSString",C,D,N
// Property: appLifecycleConstraint; attributes: T@"NSString",C,D,N
// Property: timeoutMs; attributes: T@"NSNumber",&,D,N
// Property: networkConstraint; attributes: T@"NSString",C,D,N
// Property: existingJobPolicy; attributes: T@"NSString",C,D,N
// Property: initialDelaySec; attributes: T@"NSNumber",&,D,N
// Property: retryConfig; attributes: T@"SCCTundraRetryConfig",&,D,N
// Property: persistence; attributes: T@"NSString",C,D,N
// Property: useIndividualWakeup; attributes: T@"NSNumber",&,D,N
// Property: isForegroundJob; attributes: T@"NSNumber",&,D,N
// Property: isCharging; attributes: T@"NSNumber",&,D,N

// -[SCCTundraJobConfig initWithSerializedRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f60ab0

// +[SCCTundraJobConfig valdiMarshallableObjectDescriptor]
// Type encoding: {SCValdiMarshallableObjectDescriptor=^{SCValdiMarshallableObjectFieldDescriptor}^*^{SCValdiMarshallableObjectBlockSupport}C}16@0:8
// Implementation: 0x105f60b00

@end
