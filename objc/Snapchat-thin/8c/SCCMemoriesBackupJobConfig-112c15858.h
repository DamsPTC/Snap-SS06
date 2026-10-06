// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCMemoriesBackupJobConfig
// Superclass: SCValdiMarshallableObject
// Address: 0x112c15858

@interface SCCMemoriesBackupJobConfig

// Property: serializedBackupRequest; attributes: T@"NSData",C,D,N
// Property: uniqueSubIdentifier; attributes: T@"NSString",C,D,N
// Property: appLifecycleConstraint; attributes: T@"NSNumber",&,D,N
// Property: timeoutMs; attributes: T@"NSNumber",&,D,N
// Property: networkConstraint; attributes: T@"NSNumber",&,D,N
// Property: existingJobPolicy; attributes: T@"NSNumber",&,D,N
// Property: initialDelaySec; attributes: T@"NSNumber",&,D,N
// Property: retryConfig; attributes: T@"SCCMemoriesBackupJobRetryConfig",&,D,N
// Property: persistence; attributes: T@"NSNumber",&,D,N
// Property: useIndividualWakeup; attributes: T@"NSNumber",&,D,N
// Property: isForegroundJob; attributes: T@"NSNumber",&,D,N
// Property: isCharging; attributes: T@"NSNumber",&,D,N

// -[SCCMemoriesBackupJobConfig initWithSerializedBackupRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x10af236cc

// +[SCCMemoriesBackupJobConfig valdiMarshallableObjectDescriptor]
// Type encoding: {SCValdiMarshallableObjectDescriptor=^{SCValdiMarshallableObjectFieldDescriptor}^*^{SCValdiMarshallableObjectBlockSupport}C}16@0:8
// Implementation: 0x10af23718

@end
