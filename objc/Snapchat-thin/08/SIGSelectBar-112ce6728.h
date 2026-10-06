// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SIGSelectBar
// Superclass: SIGBottomBar
// Address: 0x112ce6728

@interface SIGSelectBar

// Property: delegate; attributes: T@"<SIGSelectBarDelegate>",W,N,V_delegate
// Property: moreButtonVisible; attributes: TB,N,V_moreButtonVisible
// Property: secondaryLabelText; attributes: T@"NSAttributedString",&,N,V_secondaryLabelText
// Property: showNewGroupButton; attributes: TB,N,V_showNewGroupButton
// Property: addAChatVisible; attributes: TB,N,V_addAChatVisible
// Property: showNewGroupButtonOnboarding; attributes: TB,N,V_showNewGroupButtonOnboarding
// Property: addAChatCharacterLimit; attributes: TQ,N,V_addAChatCharacterLimit
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SIGSelectBar initWithType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10b81df40

// -[SIGSelectBar addItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b81f1cc

// -[SIGSelectBar _addItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b81f260

// -[SIGSelectBar _scrollToLastItem]
// Type encoding: v16@0:8
// Implementation: 0x10b81f58c

// -[SIGSelectBar removeItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b81f5fc

// -[SIGSelectBar _removeItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b81f690

// -[SIGSelectBar updateItemAtIndex:index:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b81f9e8

// -[SIGSelectBar _updateItemAtIndex:index:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b81fa90

// -[SIGSelectBar _itemsSupportNewGroupButton]
// Type encoding: B16@0:8
// Implementation: 0x10b81fd20

// -[SIGSelectBar _updateNewGroupButton]
// Type encoding: v16@0:8
// Implementation: 0x10b81fe60

// -[SIGSelectBar showTooltipFromMoreButton:forDuration:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x10b81ff24

// -[SIGSelectBar showTooltipFromSendToButton:forDuration:]
// Type encoding: B32@0:8@16d24
// Implementation: 0x10b820088

// -[SIGSelectBar setMoreButtonOverrideWithButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b820178

// -[SIGSelectBar _createLeadingActivityViewWithButton:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b8201b4

// -[SIGSelectBar _replaceMoreButtonWithButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b820234

// -[SIGSelectBar _showNewGroupOnboardingLabel]
// Type encoding: v16@0:8
// Implementation: 0x10b8204cc

// -[SIGSelectBar _hideNewGroupOnboardingLabel]
// Type encoding: v16@0:8
// Implementation: 0x10b820654

// -[SIGSelectBar _onboardingNewGroupAnimation]
// Type encoding: v16@0:8
// Implementation: 0x10b8206bc

// -[SIGSelectBar dismissTappedForItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b8207bc

// -[SIGSelectBar setMoreButtonVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b820848

// -[SIGSelectBar setSecondaryLabelText:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b8208d4

// -[SIGSelectBar setAddAChatVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b8209bc

// -[SIGSelectBar setAddAChatText:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b820a6c

// -[SIGSelectBar _animateAddAChatWithIsVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b820b20

// -[SIGSelectBar _initializeNewGroupButton]
// Type encoding: v16@0:8
// Implementation: 0x10b820c6c

// -[SIGSelectBar _barTapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b8211a0

// -[SIGSelectBar _sendToButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x10b82121c

// -[SIGSelectBar _moreButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x10b8212b8

// -[SIGSelectBar _newGroupButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x10b8212f4

// -[SIGSelectBar _updateCollectionViewConstraints]
// Type encoding: v16@0:8
// Implementation: 0x10b821330

// -[SIGSelectBar _updateSecondaryLabelConstraints]
// Type encoding: v16@0:8
// Implementation: 0x10b821674

// -[SIGSelectBar _updateSendToButtonConstraints]
// Type encoding: v16@0:8
// Implementation: 0x10b821884

// -[SIGSelectBar _dismissTooltip]
// Type encoding: v16@0:8
// Implementation: 0x10b821b5c

// -[SIGSelectBar _setupAddAChatViewWithHiddenVisibiltiy]
// Type encoding: v16@0:8
// Implementation: 0x10b821ba0

// -[SIGSelectBar textView:shouldChangeTextInRange:replacementText:]
// Type encoding: B48@0:8@16{_NSRange=QQ}24@40
// Implementation: 0x10b8224e4

// -[SIGSelectBar setShown:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b8225b8

// -[SIGSelectBar collectionView:numberOfItemsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x10b822654

// -[SIGSelectBar collectionView:cellForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b822664

// -[SIGSelectBar collectionView:layout:sizeForItemAtIndexPath:]
// Type encoding: {CGSize=dd}40@0:8@16@24@32
// Implementation: 0x10b822788

// -[SIGSelectBar collectionView:didSelectItemAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b822868

// -[SIGSelectBar scrollViewDidEndDragging:willDecelerate:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10b822908

// -[SIGSelectBar delegate]
// Type encoding: @16@0:8
// Implementation: 0x10b822944

// -[SIGSelectBar setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b822964

// -[SIGSelectBar moreButtonVisible]
// Type encoding: B16@0:8
// Implementation: 0x10b822978

// -[SIGSelectBar secondaryLabelText]
// Type encoding: @16@0:8
// Implementation: 0x10b822988

// -[SIGSelectBar showNewGroupButton]
// Type encoding: B16@0:8
// Implementation: 0x10b822998

// -[SIGSelectBar setShowNewGroupButton:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b8229a8

// -[SIGSelectBar addAChatVisible]
// Type encoding: B16@0:8
// Implementation: 0x10b8229b8

// -[SIGSelectBar showNewGroupButtonOnboarding]
// Type encoding: B16@0:8
// Implementation: 0x10b8229c8

// -[SIGSelectBar setShowNewGroupButtonOnboarding:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b8229d8

// -[SIGSelectBar addAChatCharacterLimit]
// Type encoding: Q16@0:8
// Implementation: 0x10b8229e8

// -[SIGSelectBar setAddAChatCharacterLimit:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b8229f8

// -[SIGSelectBar .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b822a08

@end
