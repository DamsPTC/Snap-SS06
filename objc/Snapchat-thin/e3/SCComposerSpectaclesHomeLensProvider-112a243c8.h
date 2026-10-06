// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerSpectaclesHomeLensProvider
// Superclass: NSObject
// Address: 0x112a243c8

@interface SCComposerSpectaclesHomeLensProvider

// Property: pinnedLenses; attributes: T@"SCBridgeObservable",&,N,V_pinnedLenses
// Property: hermosaLenses; attributes: T@"SCBridgeObservable",&,N,V_hermosaLenses
// Property: activeLens; attributes: T@"SCBridgeObservable",&,N,V_activeLens
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerSpectaclesHomeLensProvider initWithPerformer:lensLaunchManager:unpinnedLensAPI:pinnedLensAPI:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x105237d40

// -[SCComposerSpectaclesHomeLensProvider pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x105238194

// -[SCComposerSpectaclesHomeLensProvider lensMetadataForLensId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1052381a0

// -[SCComposerSpectaclesHomeLensProvider refreshLens]
// Type encoding: v16@0:8
// Implementation: 0x1052382bc

// -[SCComposerSpectaclesHomeLensProvider _fetchLenses]
// Type encoding: v16@0:8
// Implementation: 0x1052382c0

// -[SCComposerSpectaclesHomeLensProvider _fetchUnpinnedLenses]
// Type encoding: v16@0:8
// Implementation: 0x1052382e4

// -[SCComposerSpectaclesHomeLensProvider _fetchPinnedLenses]
// Type encoding: v16@0:8
// Implementation: 0x10523831c

// -[SCComposerSpectaclesHomeLensProvider _handleLensLaunchEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105238494

// -[SCComposerSpectaclesHomeLensProvider _lensMetadataForLensId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105238658

// -[SCComposerSpectaclesHomeLensProvider _lensGroups]
// Type encoding: @16@0:8
// Implementation: 0x105238804

// -[SCComposerSpectaclesHomeLensProvider _handlePinnedLensesWithUnlockablesResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x10523889c

// -[SCComposerSpectaclesHomeLensProvider _handleUnpinnedLensesWithNamespaceData:]
// Type encoding: v24@0:8@16
// Implementation: 0x105238bf4

// -[SCComposerSpectaclesHomeLensProvider pinnedLenses]
// Type encoding: @16@0:8
// Implementation: 0x105238e9c

// -[SCComposerSpectaclesHomeLensProvider setPinnedLenses:]
// Type encoding: v24@0:8@16
// Implementation: 0x105238ea4

// -[SCComposerSpectaclesHomeLensProvider hermosaLenses]
// Type encoding: @16@0:8
// Implementation: 0x105238ed4

// -[SCComposerSpectaclesHomeLensProvider setHermosaLenses:]
// Type encoding: v24@0:8@16
// Implementation: 0x105238edc

// -[SCComposerSpectaclesHomeLensProvider activeLens]
// Type encoding: @16@0:8
// Implementation: 0x105238f0c

// -[SCComposerSpectaclesHomeLensProvider setActiveLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x105238f14

// -[SCComposerSpectaclesHomeLensProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105238f44

@end
