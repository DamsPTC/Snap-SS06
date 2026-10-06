// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGalleryHeaderBar
// Superclass: UIView
// Address: 0x112a98e58

@interface SCGalleryHeaderBar

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCGalleryHeaderBarDelegate>",W,N,V_delegate
// Property: selectionEnabled; attributes: TB,N
// Property: selectionMode; attributes: TB,N,V_selectionMode
// Property: searchEnabled; attributes: TB,N,V_searchEnabled
// Property: tabPolicy; attributes: T@"<SCGalleryHeaderBarTabPolicy>",W,N,V_tabPolicy
// Property: rightButtonMode; attributes: TQ,N,V_rightButtonMode

// -[SCGalleryHeaderBar initWithNavigationItem:frame:searchSessionLoggingCoordinator:inlineSearchDataSource:memoriesExperimentService:]
// Type encoding: @80@0:8@16{CGRect={CGPoint=dd}{CGSize=dd}}24@56@64@72
// Implementation: 0x105cc00fc

// -[SCGalleryHeaderBar _createButtons]
// Type encoding: v16@0:8
// Implementation: 0x105cc07dc

// -[SCGalleryHeaderBar _createDismissButton]
// Type encoding: @16@0:8
// Implementation: 0x105cc0dbc

// -[SCGalleryHeaderBar _updateStackViewLayout]
// Type encoding: v16@0:8
// Implementation: 0x105cc0ebc

// -[SCGalleryHeaderBar clearSearchField]
// Type encoding: v16@0:8
// Implementation: 0x105cc10ac

// -[SCGalleryHeaderBar dismissKeyboard]
// Type encoding: v16@0:8
// Implementation: 0x105cc127c

// -[SCGalleryHeaderBar focusSearchField]
// Type encoding: v16@0:8
// Implementation: 0x105cc12ac

// -[SCGalleryHeaderBar _searchField]
// Type encoding: @16@0:8
// Implementation: 0x105cc12dc

// -[SCGalleryHeaderBar hitTest:withEvent:]
// Type encoding: @40@0:8{CGPoint=dd}16@32
// Implementation: 0x105cc12ec

// -[SCGalleryHeaderBar getHeaderBarHeight]
// Type encoding: d16@0:8
// Implementation: 0x105cc13e8

// -[SCGalleryHeaderBar setRightButtonMode:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105cc13f0

// -[SCGalleryHeaderBar _showQuestionMark]
// Type encoding: v16@0:8
// Implementation: 0x105cc1528

// -[SCGalleryHeaderBar selectionEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105cc1634

// -[SCGalleryHeaderBar setSelectionEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x105cc1644

// -[SCGalleryHeaderBar searchEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105cc1654

// -[SCGalleryHeaderBar setSearchEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x105cc169c

// -[SCGalleryHeaderBar setSelectionMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x105cc1798

// -[SCGalleryHeaderBar _didPressQuestionButton]
// Type encoding: v16@0:8
// Implementation: 0x105cc1804

// -[SCGalleryHeaderBar _didPressSelectButton]
// Type encoding: v16@0:8
// Implementation: 0x105cc1838

// -[SCGalleryHeaderBar _didPressSearchButton]
// Type encoding: v16@0:8
// Implementation: 0x105cc186c

// -[SCGalleryHeaderBar enterSearchMode]
// Type encoding: v16@0:8
// Implementation: 0x105cc18e4

// -[SCGalleryHeaderBar _didPressDismiss]
// Type encoding: v16@0:8
// Implementation: 0x105cc1a1c

// -[SCGalleryHeaderBar didSelectDismissalActionWithHeaderItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cc1a50

// -[SCGalleryHeaderBar didTapHeaderItemTitle:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cc1a84

// -[SCGalleryHeaderBar _setupSearchFieldForInlineSearch]
// Type encoding: v16@0:8
// Implementation: 0x105cc1ab8

// -[SCGalleryHeaderBar textFieldShouldBeginEditing:]
// Type encoding: B24@0:8@16
// Implementation: 0x105cc1e58

// -[SCGalleryHeaderBar textFieldShouldClear:]
// Type encoding: B24@0:8@16
// Implementation: 0x105cc1edc

// -[SCGalleryHeaderBar textFieldShouldReturn:]
// Type encoding: B24@0:8@16
// Implementation: 0x105cc1f64

// -[SCGalleryHeaderBar _textFieldDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cc20dc

// -[SCGalleryHeaderBar _isSemanticSearchActiveForCurrentTab]
// Type encoding: B16@0:8
// Implementation: 0x105cc2158

// -[SCGalleryHeaderBar reloadTabPolicy]
// Type encoding: v16@0:8
// Implementation: 0x105cc21d8

// -[SCGalleryHeaderBar _clearFacetSuggestions]
// Type encoding: v16@0:8
// Implementation: 0x105cc221c

// -[SCGalleryHeaderBar _updateSearchText:didSelectResultTitle:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105cc2288

// -[SCGalleryHeaderBar _updateFacetSuggestionsForQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cc2308

// -[SCGalleryHeaderBar _noteKeyboardLanguageForFacetMatching]
// Type encoding: v16@0:8
// Implementation: 0x105cc2408

// -[SCGalleryHeaderBar _handleSearchFieldQueryDidChange:committedText:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105cc24f4

// -[SCGalleryHeaderBar inlineSearchAccessoryView:selectedResultTitle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105cc263c

// -[SCGalleryHeaderBar inlineSearchAccessoryView:didSelectFacet:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105cc26f8

// -[SCGalleryHeaderBar _applyFacetSuggestion:]
// Type encoding: B24@0:8@16
// Implementation: 0x105cc273c

// -[SCGalleryHeaderBar _commitApplyResult:inField:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105cc27f4

// -[SCGalleryHeaderBar _autoApplyWholeUniqueFacetOnDebounce]
// Type encoding: B16@0:8
// Implementation: 0x105cc290c

// -[SCGalleryHeaderBar _renderFacetPills]
// Type encoding: v16@0:8
// Implementation: 0x105cc2a2c

// -[SCGalleryHeaderBar userDeletingPillUsingKeyboard:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cc2d34

// -[SCGalleryHeaderBar _beginInlineSearchSession]
// Type encoding: v16@0:8
// Implementation: 0x105cc2ff8

// -[SCGalleryHeaderBar _endInlineSearchSession]
// Type encoding: v16@0:8
// Implementation: 0x105cc3098

// -[SCGalleryHeaderBar isSemanticSearchEligibleTab]
// Type encoding: B16@0:8
// Implementation: 0x105cc3108

// -[SCGalleryHeaderBar delegate]
// Type encoding: @16@0:8
// Implementation: 0x105cc3148

// -[SCGalleryHeaderBar setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cc3168

// -[SCGalleryHeaderBar rightButtonMode]
// Type encoding: Q16@0:8
// Implementation: 0x105cc317c

// -[SCGalleryHeaderBar selectionMode]
// Type encoding: B16@0:8
// Implementation: 0x105cc318c

// -[SCGalleryHeaderBar tabPolicy]
// Type encoding: @16@0:8
// Implementation: 0x105cc319c

// -[SCGalleryHeaderBar setTabPolicy:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cc31bc

// -[SCGalleryHeaderBar .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105cc31d0

@end
