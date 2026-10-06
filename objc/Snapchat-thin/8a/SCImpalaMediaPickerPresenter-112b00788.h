// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImpalaMediaPickerPresenter
// Superclass: NSObject
// Address: 0x112b00788

@interface SCImpalaMediaPickerPresenter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCImpalaMediaPickerPresenter initWithUiContainer:memoriesPickerScopeExposer:memoriesPickerV2ScopeServices:businessProfileId:circumstanceEngine:spotlightSubmissionScopeExposer:spotlightSubmissionScopeServices:selectedMemberProfile:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x10681e2cc

// -[SCImpalaMediaPickerPresenter presentMediaPickerWithMaxSelectionLimit:callback:]
// Type encoding: v32@0:8d16@?24
// Implementation: 0x10681e464

// -[SCImpalaMediaPickerPresenter presentPhotoPickerWithCallback:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10681e630

// -[SCImpalaMediaPickerPresenter presentSpotlightMediaPicker]
// Type encoding: v16@0:8
// Implementation: 0x10681e778

// -[SCImpalaMediaPickerPresenter pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x10681e8e8

// -[SCImpalaMediaPickerPresenter memoriesPickerV2DidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x10681e8f4

// -[SCImpalaMediaPickerPresenter onBackPressed]
// Type encoding: v16@0:8
// Implementation: 0x10681e958

// -[SCImpalaMediaPickerPresenter onCameraRollAlbumClickedWithCameraRollAlbumId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10681e95c

// -[SCImpalaMediaPickerPresenter onItemClickedWithItem:thumbnailCell:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10681e960

// -[SCImpalaMediaPickerPresenter onItemsSelectedWithItems:]
// Type encoding: v24@0:8@16
// Implementation: 0x10681eb10

// -[SCImpalaMediaPickerPresenter onTrimItemTappedWithItem:remainingDurationMs:selectedItems:disallowDurationChange:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x10681ee44

// -[SCImpalaMediaPickerPresenter creatorsSpotlightSubmissionV2DidBegin]
// Type encoding: v16@0:8
// Implementation: 0x10681ee4c

// -[SCImpalaMediaPickerPresenter creatorsSpotlightSubmissionV2DidComplete]
// Type encoding: v16@0:8
// Implementation: 0x10681ee50

// -[SCImpalaMediaPickerPresenter _buildAndExposePickerScopeWithConfig:actionHandling:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10681eecc

// -[SCImpalaMediaPickerPresenter _removePickerScopeIfRequired]
// Type encoding: v16@0:8
// Implementation: 0x10681f070

// -[SCImpalaMediaPickerPresenter _memoriesImportEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10681f0ec

// -[SCImpalaMediaPickerPresenter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10681f0f4

@end
