// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedLoggingLongImpressionManager
// Superclass: NSObject
// Address: 0x112b74c28

@interface SCDiscoverFeedLoggingLongImpressionManager

// Property: delegate; attributes: T@"<SCDiscoverFeedLoggingLongImpressionManagerDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDiscoverFeedLoggingLongImpressionManager initWithMinimumVisibleFraction:minimumImpressionTimeInterval:logImpressionsImmediately:logImpressionsOnce:performer:storiesConfigProvider:]
// Type encoding: @52@0:8f16d20B28B32@36@44
// Implementation: 0x107bc7e6c

// -[SCDiscoverFeedLoggingLongImpressionManager initWithMinimumVisibleFraction:minimumImpressionTimeInterval:logImpressionsImmediately:logImpressionsOnce:performer:allowDebugView:storiesConfigProvider:]
// Type encoding: @56@0:8f16d20B28B32@36B44@48
// Implementation: 0x107bc7e78

// -[SCDiscoverFeedLoggingLongImpressionManager updateWithViewItems:impressionItems:date:viewPort:viewPortScreenPosition:]
// Type encoding: v88@0:8@16@24@32{CGRect={CGPoint=dd}{CGSize=dd}}40{CGPoint=dd}72
// Implementation: 0x107bc7fa0

// -[SCDiscoverFeedLoggingLongImpressionManager _updateWithViewItems:impressionItems:date:viewPort:viewPortScreenPosition:]
// Type encoding: v88@0:8@16@24@32{CGRect={CGPoint=dd}{CGSize=dd}}40{CGPoint=dd}72
// Implementation: 0x107bc815c

// -[SCDiscoverFeedLoggingLongImpressionManager _updateFrameForViewItem:impressionItem:viewPort:]
// Type encoding: @64@0:8@16@24{CGRect={CGPoint=dd}{CGSize=dd}}32
// Implementation: 0x107bc8520

// -[SCDiscoverFeedLoggingLongImpressionManager _setImpresionData:forImpressionItem:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107bc8988

// -[SCDiscoverFeedLoggingLongImpressionManager _updateChatFeedViewItem:impressionItem:impressionTrackingData:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107bc89ec

// -[SCDiscoverFeedLoggingLongImpressionManager _significantlyVisible:viewPort:]
// Type encoding: B80@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16{CGRect={CGPoint=dd}{CGSize=dd}}48
// Implementation: 0x107bc8b78

// -[SCDiscoverFeedLoggingLongImpressionManager _percentVisibile:viewPort:]
// Type encoding: d80@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16{CGRect={CGPoint=dd}{CGSize=dd}}48
// Implementation: 0x107bc8ba8

// -[SCDiscoverFeedLoggingLongImpressionManager _presentLongEnough:timestamp:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107bc8c1c

// -[SCDiscoverFeedLoggingLongImpressionManager flushWithDate:completion:extraData:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x107bc8c9c

// -[SCDiscoverFeedLoggingLongImpressionManager _flushWithDate:completion:extraData:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x107bc8e04

// -[SCDiscoverFeedLoggingLongImpressionManager _flushItems:date:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107bc8ea8

// -[SCDiscoverFeedLoggingLongImpressionManager resetLoggedDict]
// Type encoding: v16@0:8
// Implementation: 0x107bc9534

// -[SCDiscoverFeedLoggingLongImpressionManager _resetLoggedDict]
// Type encoding: v16@0:8
// Implementation: 0x107bc9608

// -[SCDiscoverFeedLoggingLongImpressionManager _hasLoggedImpressionForItemWithIdentifier:pageType:sectionIdentifier:]
// Type encoding: B40@0:8@16q24@32
// Implementation: 0x107bc9660

// -[SCDiscoverFeedLoggingLongImpressionManager _updateLoggedImpressionsForItemWithIdentifier:pageType:sectionIdentifier:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x107bc97c8

// -[SCDiscoverFeedLoggingLongImpressionManager getMinimumVisibleFraction]
// Type encoding: d16@0:8
// Implementation: 0x107bc998c

// -[SCDiscoverFeedLoggingLongImpressionManager _isChatCellImpression:]
// Type encoding: B24@0:8@16
// Implementation: 0x107bc9998

// -[SCDiscoverFeedLoggingLongImpressionManager delegate]
// Type encoding: @16@0:8
// Implementation: 0x107bc9a18

// -[SCDiscoverFeedLoggingLongImpressionManager setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bc9a30

// -[SCDiscoverFeedLoggingLongImpressionManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107bc9a3c

@end
