// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMixerMetadataFetcher
// Superclass: NSObject
// Address: 0x112bfb318

@interface SCMixerMetadataFetcher

// Property: fetchEventObservable; attributes: T@"SCObservable",R,V_subject
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMixerMetadataFetcher initWithGRPCService:requestFeatureInfoProviders:requestProvider:responseParser:networkConfig:timeProvider:performer:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x1003d719c

// -[SCMixerMetadataFetcher fetchNamespaces:requestParams:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10aea4808

// -[SCMixerMetadataFetcher _fetchNamespaces:requestFeatureInfoProviders:requestParams:success:failure:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x10aea4ae0

// -[SCMixerMetadataFetcher fetchEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x1003d7bd0

// -[SCMixerMetadataFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10aea535c

// +[SCMixerMetadataFetcher _internalNamespaceDataFromResponseData:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aea5344

@end
