// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensMetadataFetchingAdapter
// Superclass: NSObject
// Address: 0x112bfaaa8

@interface SCLensMetadataFetchingAdapter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensMetadataFetchingAdapter initWithNamespaceDataProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ae9c614

// -[SCLensMetadataFetchingAdapter cachedLensMetadataArrayWithIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ae9c688

// -[SCLensMetadataFetchingAdapter lensMetadataWithId:featureAttribution:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10ae9c69c

// -[SCLensMetadataFetchingAdapter lensMetadataArrayWithIds:featureAttribution:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10ae9c788

// -[SCLensMetadataFetchingAdapter _fetchLensMetadataIds:featureAttribution:completionBlock:]
// Type encoding: v40@0:8@16q24@?32
// Implementation: 0x10ae9c85c

// -[SCLensMetadataFetchingAdapter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10ae9cdd4

// +[SCLensMetadataFetchingAdapter _resultWithLensMetadata:inputLensIds:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10ae9ca44

// +[SCLensMetadataFetchingAdapter _resultWithError:inputLensIds:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10ae9ccfc

@end
