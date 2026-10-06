// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapAddressSelectionWorkflow
// Superclass: NSObject
// Address: 0x112aa8ad8

@interface SCMapAddressSelectionWorkflow

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapAddressSelectionWorkflow initWithAddressScope:annotationController:multiTrayManager:valdiRuntimeProvider:peliasProvider:locationProvider:snapchatterPublicDataFetcher:userInfoServices:logger:focusedDropScopeServices:focusedDropScopeExposer:mainQueue:dropsPersistenceProvider:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x105ec6580

// -[SCMapAddressSelectionWorkflow startWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x105ec68b8

// -[SCMapAddressSelectionWorkflow _fetchPeliasResultsAndPresentTray]
// Type encoding: v16@0:8
// Implementation: 0x105ec68f8

// -[SCMapAddressSelectionWorkflow _handlePeliasResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ec6ae0

// -[SCMapAddressSelectionWorkflow _presentTray]
// Type encoding: v16@0:8
// Implementation: 0x105ec6cc4

// -[SCMapAddressSelectionWorkflow _handleTrayEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ec6ed4

// -[SCMapAddressSelectionWorkflow _createAddressEntriesFromPeliasResponse:]
// Type encoding: @24@0:8@16
// Implementation: 0x105ec70d0

// -[SCMapAddressSelectionWorkflow _closestPeliasResponseToUserFromPeliasResponses:]
// Type encoding: @24@0:8@16
// Implementation: 0x105ec72e4

// -[SCMapAddressSelectionWorkflow _observePersistedDrops]
// Type encoding: v16@0:8
// Implementation: 0x105ec74fc

// -[SCMapAddressSelectionWorkflow _createAddressTray]
// Type encoding: @16@0:8
// Implementation: 0x105ec7678

// -[SCMapAddressSelectionWorkflow _exposeDropScopeWithCoordinate:address:]
// Type encoding: v40@0:8{CLLocationCoordinate2D=dd}16@32
// Implementation: 0x105ec776c

// -[SCMapAddressSelectionWorkflow _exposeDropWithDrop:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ec7890

// -[SCMapAddressSelectionWorkflow _buildDropFromCoordinate:address:completion:]
// Type encoding: v48@0:8{CLLocationCoordinate2D=dd}16@32@?40
// Implementation: 0x105ec7920

// -[SCMapAddressSelectionWorkflow _handleSnapchatterResult:coordinate:address:completion:]
// Type encoding: v56@0:8@16{CLLocationCoordinate2D=dd}24@40@?48
// Implementation: 0x105ec7e3c

// -[SCMapAddressSelectionWorkflow _dropNameForDisplayName:username:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105ec8080

// -[SCMapAddressSelectionWorkflow _fetchDropIdIfSavedFromCoordinate:senderUserId:]
// Type encoding: @40@0:8{CLLocationCoordinate2D=dd}16@32
// Implementation: 0x105ec8164

// -[SCMapAddressSelectionWorkflow onTapAddressEntryWithEntry:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ec82fc

// -[SCMapAddressSelectionWorkflow onClose]
// Type encoding: v16@0:8
// Implementation: 0x105ec839c

// -[SCMapAddressSelectionWorkflow shouldRetainInstanceWhenMarshalling]
// Type encoding: B16@0:8
// Implementation: 0x105ec8408

// -[SCMapAddressSelectionWorkflow pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x105ec8410

// -[SCMapAddressSelectionWorkflow didTapOnAnnotationWithCoordinate:address:]
// Type encoding: v40@0:8{CLLocationCoordinate2D=dd}16@32
// Implementation: 0x105ec841c

// -[SCMapAddressSelectionWorkflow didCloseDropsTray]
// Type encoding: v16@0:8
// Implementation: 0x105ec8420

// -[SCMapAddressSelectionWorkflow didSuccessfullySendDrop:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ec849c

// -[SCMapAddressSelectionWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105ec8564

@end
