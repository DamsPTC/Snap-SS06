// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoryUsageMetadataStore
// Superclass: NSObject
// Address: 0x112a26038

@interface SCMemoryUsageMetadataStore

// Property: previousSessionMetadata; attributes: T@"NSDictionary",R,N

// -[SCMemoryUsageMetadataStore initWithStorageDirectory:]
// Type encoding: @24@0:8@16
// Implementation: 0x1000c3de0

// -[SCMemoryUsageMetadataStore dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1002d1334

// -[SCMemoryUsageMetadataStore previousSessionMetadata]
// Type encoding: @16@0:8
// Implementation: 0x100213a9c

// -[SCMemoryUsageMetadataStore _filePathForStorageDirectory:]
// Type encoding: @24@0:8@16
// Implementation: 0x1000c4008

// -[SCMemoryUsageMetadataStore _setUpMappingWithStorageDirectory:]
// Type encoding: v24@0:8@16
// Implementation: 0x1000c3e60

// -[SCMemoryUsageMetadataStore _parseRecord:]
// Type encoding: @72@0:8{?=IIqqqqqii}16
// Implementation: 0x1000c5638

// -[SCMemoryUsageMetadataStore setUsedMemoryBytes:]
// Type encoding: v24@0:8q16
// Implementation: 0x105267dec

// -[SCMemoryUsageMetadataStore setVirtualMemoryBytes:]
// Type encoding: v24@0:8q16
// Implementation: 0x105267dfc

// -[SCMemoryUsageMetadataStore setVMRegionCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x105267e0c

// -[SCMemoryUsageMetadataStore setDevicePhysicalMemoryBytes:]
// Type encoding: v24@0:8q16
// Implementation: 0x105267e1c

// -[SCMemoryUsageMetadataStore setAppSessionDurationSec:]
// Type encoding: v24@0:8q16
// Implementation: 0x105267e2c

// -[SCMemoryUsageMetadataStore setMemoryPressureState:]
// Type encoding: v20@0:8i16
// Implementation: 0x105267e3c

// -[SCMemoryUsageMetadataStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1002d1808

@end
