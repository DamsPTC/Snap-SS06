// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnifiedActionMenuPresenter
// Superclass: NSObject
// Address: 0x112b7ce78

@interface SCUnifiedActionMenuPresenter

// Property: menuActionSheet; attributes: T@"SIGActionSheet",&,N,V_menuActionSheet
// Property: delegate; attributes: T@"<SCUnifiedActionMenuPresenterDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUnifiedActionMenuPresenter initWithMenuViewDataProvider:actionHandler:imageDownloader:imageFetchingService:sourcePageType:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x107d47f04

// -[SCUnifiedActionMenuPresenter initWithMenuViewDataProvider:actionHandler:imageDownloader:imageFetchingService:sourcePageType:friendPlugins:groupPlugins:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x107d47f28

// -[SCUnifiedActionMenuPresenter addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d480e4

// -[SCUnifiedActionMenuPresenter removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d480ec

// -[SCUnifiedActionMenuPresenter presentMenuViewWithUIContainer:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107d480f4

// -[SCUnifiedActionMenuPresenter presentMenuViewWithPresentingViewController:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107d4826c

// -[SCUnifiedActionMenuPresenter presentMenuViewWithPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d48408

// -[SCUnifiedActionMenuPresenter dismissMenuViewWithAnimation:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x107d48410

// -[SCUnifiedActionMenuPresenter popActionSheetView]
// Type encoding: v16@0:8
// Implementation: 0x107d4866c

// -[SCUnifiedActionMenuPresenter presentNestedMenuView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d4869c

// -[SCUnifiedActionMenuPresenter addActionSheetHeaderLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d48740

// -[SCUnifiedActionMenuPresenter setHeaderActionLabelTapHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107d48790

// -[SCUnifiedActionMenuPresenter presentedViewController]
// Type encoding: @16@0:8
// Implementation: 0x107d487e4

// -[SCUnifiedActionMenuPresenter presentedUIContainer]
// Type encoding: @16@0:8
// Implementation: 0x107d487e8

// -[SCUnifiedActionMenuPresenter presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x107d48810

// -[SCUnifiedActionMenuPresenter presentedActionSheet]
// Type encoding: @16@0:8
// Implementation: 0x107d48828

// -[SCUnifiedActionMenuPresenter dataProviderDidUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d48850

// -[SCUnifiedActionMenuPresenter _createActionSheetCells]
// Type encoding: v16@0:8
// Implementation: 0x107d48938

// -[SCUnifiedActionMenuPresenter _headerFromMenuViewModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x107d492dc

// -[SCUnifiedActionMenuPresenter _prominentActionsFromModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x107d49874

// -[SCUnifiedActionMenuPresenter _prominentActionFromPluginPosition:]
// Type encoding: @24@0:8q16
// Implementation: 0x107d49b00

// -[SCUnifiedActionMenuPresenter _cellFromPluginPosition:]
// Type encoding: @24@0:8q16
// Implementation: 0x107d49ccc

// -[SCUnifiedActionMenuPresenter _textCellFromModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x107d49ec8

// -[SCUnifiedActionMenuPresenter _buttonCellFromModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x107d4a360

// -[SCUnifiedActionMenuPresenter _switchCellFromModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x107d4a868

// -[SCUnifiedActionMenuPresenter _selectionCellFromModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x107d4aafc

// -[SCUnifiedActionMenuPresenter _headerFromModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x107d4acf4

// -[SCUnifiedActionMenuPresenter _footerFromModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x107d4ad9c

// -[SCUnifiedActionMenuPresenter actionSheetDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d4b108

// -[SCUnifiedActionMenuPresenter _onPresentationFinishWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107d4b10c

// -[SCUnifiedActionMenuPresenter _createActionSheetWithHeader:title:cells:footer:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107d4b1f0

// -[SCUnifiedActionMenuPresenter _didDismissActionMenu]
// Type encoding: v16@0:8
// Implementation: 0x107d4b354

// -[SCUnifiedActionMenuPresenter _createPresentedUIContainer]
// Type encoding: v16@0:8
// Implementation: 0x107d4b3e0

// -[SCUnifiedActionMenuPresenter delegate]
// Type encoding: @16@0:8
// Implementation: 0x107d4b44c

// -[SCUnifiedActionMenuPresenter setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d4b464

// -[SCUnifiedActionMenuPresenter menuActionSheet]
// Type encoding: @16@0:8
// Implementation: 0x107d4b470

// -[SCUnifiedActionMenuPresenter setMenuActionSheet:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d4b478

// -[SCUnifiedActionMenuPresenter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107d4b4a8

// +[SCUnifiedActionMenuPresenter announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107d480d8

@end
