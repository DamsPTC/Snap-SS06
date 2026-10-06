// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMixerNamespaceDataUpdater
// Superclass: NSObject
// Address: 0x112bfb5e8

@interface SCMixerNamespaceDataUpdater

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMixerNamespaceDataUpdater initWithFetcher:metadataStoreProvider:feedMetadataStoreProvider:lensDataConfig:performer:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x100c102cc

// -[SCMixerNamespaceDataUpdater updateNamespaces:updateParameters:enableThrottling:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10aeabde8

// -[SCMixerNamespaceDataUpdater updateNamespaces:updateParameters:enableThrottling:groupId:]
// Type encoding: v44@0:8@16@24B32q36
// Implementation: 0x10aeabdf0

// -[SCMixerNamespaceDataUpdater isNamespaceDataUpdatedAfterLaunch:]
// Type encoding: B24@0:8@16
// Implementation: 0x10aeabef8

// -[SCMixerNamespaceDataUpdater _updateNamespaces:updateParameters:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10aeabfb0

// -[SCMixerNamespaceDataUpdater _updateNamespaces:updateParameters:groupId:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x10aeabfb8

// -[SCMixerNamespaceDataUpdater _markNamespaceDataRetrieved:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aeac360

// -[SCMixerNamespaceDataUpdater _requestKeyForNamespaces:groupId:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10aeac4e0

// -[SCMixerNamespaceDataUpdater _batchRequestIsInProgressAndMarkIfNeeded:updateParameters:groupId:]
// Type encoding: B40@0:8@16@24q32
// Implementation: 0x10aeac580

// -[SCMixerNamespaceDataUpdater _markBatchRequestNotInProgress:groupId:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10aeac644

// -[SCMixerNamespaceDataUpdater .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10aeac6d0

@end
