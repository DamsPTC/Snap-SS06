// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCaptionDataProviderAggregatorImpl
// Superclass: NSObject
// Address: 0x112bc3698

@interface SCCaptionDataProviderAggregatorImpl

// Property: allCaptionStylesArray; attributes: T@"NSArray",C,V_allCaptionStylesArray
// Property: remoteCaptionStylesArray; attributes: T@"NSArray",C,V_remoteCaptionStylesArray
// Property: localCaptionStylesArray; attributes: T@"NSArray",C,V_localCaptionStylesArray
// Property: allCaptionStylesNoRecentsArray; attributes: T@"NSArray",C,V_allCaptionStylesNoRecentsArray
// Property: delegate; attributes: T@"<SCCaptionDataProviderUpdateDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCaptionDataProviderAggregatorImpl initWithRemoteDataSource:initWithLocalDataSource:captionFetcher:grapheneLogger:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x108e0883c

// -[SCCaptionDataProviderAggregatorImpl _initializeDataSourceObserving]
// Type encoding: v16@0:8
// Implementation: 0x108e089a8

// -[SCCaptionDataProviderAggregatorImpl captionStyleForIndex:]
// Type encoding: @24@0:8q16
// Implementation: 0x108e08bb0

// -[SCCaptionDataProviderAggregatorImpl loadCaptionStyles]
// Type encoding: v16@0:8
// Implementation: 0x108e08c1c

// -[SCCaptionDataProviderAggregatorImpl captionFetcher]
// Type encoding: @16@0:8
// Implementation: 0x108e08c20

// -[SCCaptionDataProviderAggregatorImpl totalNumberOfStyles]
// Type encoding: q16@0:8
// Implementation: 0x108e08c48

// -[SCCaptionDataProviderAggregatorImpl findAvailableCaptionStyleByStyleId:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e08c84

// -[SCCaptionDataProviderAggregatorImpl indexOfCaptionStyle:]
// Type encoding: q24@0:8@16
// Implementation: 0x108e08df4

// -[SCCaptionDataProviderAggregatorImpl updateRecentsWithCaptionStyle:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e08f20

// -[SCCaptionDataProviderAggregatorImpl allStyles]
// Type encoding: @16@0:8
// Implementation: 0x108e08f28

// -[SCCaptionDataProviderAggregatorImpl allStylesWithoutRecents]
// Type encoding: @16@0:8
// Implementation: 0x108e08f64

// -[SCCaptionDataProviderAggregatorImpl _didUpdateFromRemote:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e08fa0

// -[SCCaptionDataProviderAggregatorImpl _didUpdateFromLocal:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e090b0

// -[SCCaptionDataProviderAggregatorImpl _updateChangeInCaptionStylesWithLocalCaptionStyles:remoteCaptionStyles:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108e09180

// -[SCCaptionDataProviderAggregatorImpl _updateAllStylesWithoutRecentsFromChangeInRemoteCaptionStyles:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e093a0

// -[SCCaptionDataProviderAggregatorImpl _addStyleIfPossibleWithStyle:styleIds:availableStyles:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x108e095b4

// -[SCCaptionDataProviderAggregatorImpl _allCaptionStyles]
// Type encoding: @16@0:8
// Implementation: 0x108e09674

// -[SCCaptionDataProviderAggregatorImpl _setAllCaptionStyles:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e096b0

// -[SCCaptionDataProviderAggregatorImpl _localCaptionStyles]
// Type encoding: @16@0:8
// Implementation: 0x108e096f0

// -[SCCaptionDataProviderAggregatorImpl _setLocalCaptionStyles:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e0972c

// -[SCCaptionDataProviderAggregatorImpl _remoteCaptionStyles]
// Type encoding: @16@0:8
// Implementation: 0x108e0976c

// -[SCCaptionDataProviderAggregatorImpl _setRemoteCaptionStyles:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e097a8

// -[SCCaptionDataProviderAggregatorImpl _allCaptionStylesNoRecents]
// Type encoding: @16@0:8
// Implementation: 0x108e097f4

// -[SCCaptionDataProviderAggregatorImpl _setAllCaptionStylesNoRecents:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e09830

// -[SCCaptionDataProviderAggregatorImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x108e09870

// -[SCCaptionDataProviderAggregatorImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e09888

// -[SCCaptionDataProviderAggregatorImpl allCaptionStylesArray]
// Type encoding: @16@0:8
// Implementation: 0x108e09894

// -[SCCaptionDataProviderAggregatorImpl setAllCaptionStylesArray:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e098a0

// -[SCCaptionDataProviderAggregatorImpl remoteCaptionStylesArray]
// Type encoding: @16@0:8
// Implementation: 0x108e098a8

// -[SCCaptionDataProviderAggregatorImpl setRemoteCaptionStylesArray:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e098b4

// -[SCCaptionDataProviderAggregatorImpl localCaptionStylesArray]
// Type encoding: @16@0:8
// Implementation: 0x108e098bc

// -[SCCaptionDataProviderAggregatorImpl setLocalCaptionStylesArray:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e098c8

// -[SCCaptionDataProviderAggregatorImpl allCaptionStylesNoRecentsArray]
// Type encoding: @16@0:8
// Implementation: 0x108e098d0

// -[SCCaptionDataProviderAggregatorImpl setAllCaptionStylesNoRecentsArray:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e098dc

// -[SCCaptionDataProviderAggregatorImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e098e4

@end
