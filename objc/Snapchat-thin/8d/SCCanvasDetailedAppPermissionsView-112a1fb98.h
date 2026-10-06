// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCanvasDetailedAppPermissionsView
// Superclass: UIView
// Address: 0x112a1fb98

@interface SCCanvasDetailedAppPermissionsView

// Property: isUserDataDeletionSelected; attributes: TB,R,N,V_isUserDataDeletionSelected
// Property: revokePermissionsButton; attributes: T@"SIGButton",R,N,V_revokePermissionsButton
// Property: privacyPolicyButton; attributes: T@"SIGButton",R,N,V_privacyPolicyButton
// Property: delegate; attributes: T@"<SCCanvasDetailedAppPermissionsViewDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCanvasDetailedAppPermissionsView initWithAppConnection:imageDownloader:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1051b0f10

// -[SCCanvasDetailedAppPermissionsView _isMiniOrGame]
// Type encoding: B16@0:8
// Implementation: 0x1051b11d8

// -[SCCanvasDetailedAppPermissionsView selectedScopeNamesArray]
// Type encoding: @16@0:8
// Implementation: 0x1051b121c

// -[SCCanvasDetailedAppPermissionsView snapKitFeatures]
// Type encoding: @16@0:8
// Implementation: 0x1051b124c

// -[SCCanvasDetailedAppPermissionsView numberOfSectionsInTableView:]
// Type encoding: q24@0:8@16
// Implementation: 0x1051b127c

// -[SCCanvasDetailedAppPermissionsView tableView:numberOfRowsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x1051b1284

// -[SCCanvasDetailedAppPermissionsView tableView:cellForRowAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1051b1320

// -[SCCanvasDetailedAppPermissionsView tableView:heightForRowAtIndexPath:]
// Type encoding: d32@0:8@16@24
// Implementation: 0x1051b1900

// -[SCCanvasDetailedAppPermissionsView textView:shouldInteractWithURL:inRange:interaction:]
// Type encoding: B56@0:8@16@24{_NSRange=QQ}32q48
// Implementation: 0x1051b190c

// -[SCCanvasDetailedAppPermissionsView _hasPrivateStorageData]
// Type encoding: B16@0:8
// Implementation: 0x1051b1970

// -[SCCanvasDetailedAppPermissionsView _isAppConnected]
// Type encoding: B16@0:8
// Implementation: 0x1051b1980

// -[SCCanvasDetailedAppPermissionsView _descriptionTextForAppConnection]
// Type encoding: @16@0:8
// Implementation: 0x1051b1990

// -[SCCanvasDetailedAppPermissionsView _setupViews]
// Type encoding: v16@0:8
// Implementation: 0x1051b19c4

// -[SCCanvasDetailedAppPermissionsView _reInstallTableViewConstraints:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051b2b74

// -[SCCanvasDetailedAppPermissionsView _toggleValueChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051b2bf8

// -[SCCanvasDetailedAppPermissionsView _descriptionForFeature:]
// Type encoding: @24@0:8@16
// Implementation: 0x1051b2cc4

// -[SCCanvasDetailedAppPermissionsView didToggleUserDataDeletionCheckbox:]
// Type encoding: v20@0:8B16
// Implementation: 0x1051b2d88

// -[SCCanvasDetailedAppPermissionsView didTapInfoButton]
// Type encoding: v16@0:8
// Implementation: 0x1051b2d98

// -[SCCanvasDetailedAppPermissionsView isUserDataDeletionSelected]
// Type encoding: B16@0:8
// Implementation: 0x1051b2dcc

// -[SCCanvasDetailedAppPermissionsView revokePermissionsButton]
// Type encoding: @16@0:8
// Implementation: 0x1051b2ddc

// -[SCCanvasDetailedAppPermissionsView privacyPolicyButton]
// Type encoding: @16@0:8
// Implementation: 0x1051b2dec

// -[SCCanvasDetailedAppPermissionsView delegate]
// Type encoding: @16@0:8
// Implementation: 0x1051b2dfc

// -[SCCanvasDetailedAppPermissionsView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051b2e1c

// -[SCCanvasDetailedAppPermissionsView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1051b2e30

@end
