// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStackedChatViewModel
// Superclass: SCSavableItemChatViewModel
// Address: 0x112b5c038

@interface SCStackedChatViewModel


// -[SCStackedChatViewModel isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x107056f64

// -[SCStackedChatViewModel saveAnimationFromViewModel:]
// Type encoding: Q24@0:8@16
// Implementation: 0x107057134

// -[SCStackedChatViewModel canStackMessage:lastDeletedSequenceNumber:]
// Type encoding: B32@0:8@16Q24
// Implementation: 0x10705731c

// -[SCStackedChatViewModel containsMessage:]
// Type encoding: B24@0:8@16
// Implementation: 0x107057530

// -[SCStackedChatViewModel isMessageSavedAtIndex:]
// Type encoding: B24@0:8Q16
// Implementation: 0x10705764c

// -[SCStackedChatViewModel isMessageSavedByCurrentUserAtIndex:]
// Type encoding: B24@0:8Q16
// Implementation: 0x1070576b0

// -[SCStackedChatViewModel areAllMessagesSavedByCurrentUser]
// Type encoding: B16@0:8
// Implementation: 0x10705773c

// -[SCStackedChatViewModel savedByUsersAtIndex:group:snapchattersData:]
// Type encoding: @40@0:8Q16@24@32
// Implementation: 0x107057874

// -[SCStackedChatViewModel isMessage:sentBeforeSequenceNumber:]
// Type encoding: B32@0:8@16Q24
// Implementation: 0x107057944

// -[SCStackedChatViewModel collectionViewCellDictionary]
// Type encoding: @16@0:8
// Implementation: 0x107057974

// -[SCStackedChatViewModel collectionViewCellClass]
// Type encoding: #16@0:8
// Implementation: 0x107057a14

// -[SCStackedChatViewModel insetForCollectionViewCell]
// Type encoding: d16@0:8
// Implementation: 0x107057a68

// -[SCStackedChatViewModel collectionViewCellReuseIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107057abc

// -[SCStackedChatViewModel collectionView:cellForItemAtIndexPath:stackedCollectionCellActionDelegate:parentVC:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107057b10

// -[SCStackedChatViewModel insetsForCollectionView]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x107057b98

// -[SCStackedChatViewModel maxItemCapacityForCollectionView]
// Type encoding: Q16@0:8
// Implementation: 0x107057bec

// -[SCStackedChatViewModel sizeForItemAtIndexPath:]
// Type encoding: {CGSize=dd}24@0:8@16
// Implementation: 0x107057c40

// -[SCStackedChatViewModel interitemSpacingBetweenCollectionViewCells]
// Type encoding: d16@0:8
// Implementation: 0x107057ca0

// -[SCStackedChatViewModel minimumLineSpacingInCollectionView]
// Type encoding: d16@0:8
// Implementation: 0x107057ca8

// -[SCStackedChatViewModel collectionView:layout:insetForSectionAtIndex:]
// Type encoding: {UIEdgeInsets=dddd}40@0:8@16@24q32
// Implementation: 0x107057cb0

// -[SCStackedChatViewModel payloadVerticalMargin]
// Type encoding: d16@0:8
// Implementation: 0x107057d1c

// -[SCStackedChatViewModel updateMessageState:]
// Type encoding: v24@0:8@16
// Implementation: 0x107057d24

// -[SCStackedChatViewModel savedColorForBackground]
// Type encoding: @16@0:8
// Implementation: 0x107057ef8

// -[SCStackedChatViewModel containsAllSavedMessages]
// Type encoding: B16@0:8
// Implementation: 0x107057f80

// -[SCStackedChatViewModel textForTimeLabelWithMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x107058084

// -[SCStackedChatViewModel shouldShowSenderLine]
// Type encoding: B16@0:8
// Implementation: 0x1070580fc

// -[SCStackedChatViewModel widthForSenderLine]
// Type encoding: d16@0:8
// Implementation: 0x107058164

// -[SCStackedChatViewModel containsAnyUserSavedMessage]
// Type encoding: B16@0:8
// Implementation: 0x1070581c4

// -[SCStackedChatViewModel containsAnySavedMessage]
// Type encoding: B16@0:8
// Implementation: 0x1070582fc

// -[SCStackedChatViewModel payloadContainerCornerRadii]
// Type encoding: @16@0:8
// Implementation: 0x1070583fc

// -[SCStackedChatViewModel messages]
// Type encoding: @16@0:8
// Implementation: 0x1070584a8

// -[SCStackedChatViewModel addStackedViewModelFromMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x1070585f0

// -[SCStackedChatViewModel stackedViewModels]
// Type encoding: @16@0:8
// Implementation: 0x107058650

// -[SCStackedChatViewModel _savableMessages]
// Type encoding: @16@0:8
// Implementation: 0x1070586a4

@end
