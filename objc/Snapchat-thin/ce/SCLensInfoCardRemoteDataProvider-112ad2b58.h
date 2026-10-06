// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensInfoCardRemoteDataProvider
// Superclass: NSObject
// Address: 0x112ad2b58

@interface SCLensInfoCardRemoteDataProvider

// Property: infoCardsDataObservable; attributes: T@"SCObservable",R,N,V_infoCardsDataPublishSubject
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensInfoCardRemoteDataProvider initWithRequestManager:]
// Type encoding: @24@0:8@16
// Implementation: 0x100bcaea8

// -[SCLensInfoCardRemoteDataProvider getLensInfoCardDataWithLensId:contexts:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x1061ed230

// -[SCLensInfoCardRemoteDataProvider getLensInfoCardDataWithLensId:contexts:lensSource:]
// Type encoding: @40@0:8@16Q24Q32
// Implementation: 0x1061ed238

// -[SCLensInfoCardRemoteDataProvider getLensInfoCardDataWithLensIds:contexts:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x1061ed550

// -[SCLensInfoCardRemoteDataProvider _pendingInfoCardFutureForLensId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1061ed890

// -[SCLensInfoCardRemoteDataProvider _updateInfoCardFuture:forLensId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1061ed908

// -[SCLensInfoCardRemoteDataProvider _requestedDataContextFromContext:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x1061ed984

// -[SCLensInfoCardRemoteDataProvider infoCardsDataObservable]
// Type encoding: @16@0:8
// Implementation: 0x100bcaff4

// -[SCLensInfoCardRemoteDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1061ee69c

// +[SCLensInfoCardRemoteDataProvider _lensInfoCardDataFromInfoCardResponse:]
// Type encoding: @24@0:8@16
// Implementation: 0x1061ed98c

// +[SCLensInfoCardRemoteDataProvider _lensInfoCardsDataFromInfoCardResponse:]
// Type encoding: @24@0:8@16
// Implementation: 0x1061ed9e4

// +[SCLensInfoCardRemoteDataProvider _lensMetadataFromResponseLensMetadata:]
// Type encoding: @24@0:8@16
// Implementation: 0x1061edb80

// +[SCLensInfoCardRemoteDataProvider _lensStatsFromResponseLensStats:]
// Type encoding: @24@0:8@16
// Implementation: 0x1061edf40

// +[SCLensInfoCardRemoteDataProvider _sourceInfoFromResponseSourceInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x1061edfa0

// +[SCLensInfoCardRemoteDataProvider _sourceApplicationFromResponse:]
// Type encoding: Q20@0:8i16
// Implementation: 0x1061ee030

// +[SCLensInfoCardRemoteDataProvider _lensStudioMobileWebTypeFromResponse:]
// Type encoding: Q20@0:8i16
// Implementation: 0x1061ee040

// +[SCLensInfoCardRemoteDataProvider _badgeContentFromResponseBadgeContent:]
// Type encoding: @24@0:8@16
// Implementation: 0x1061ee058

// +[SCLensInfoCardRemoteDataProvider _lensCreatorFromResponseLensCreator:]
// Type encoding: @24@0:8@16
// Implementation: 0x1061ee148

// +[SCLensInfoCardRemoteDataProvider _infoCardActionsFromResponse:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1061ee254

// +[SCLensInfoCardRemoteDataProvider _attachementFromResponseLensMetadata:]
// Type encoding: @24@0:8@16
// Implementation: 0x1061ee414

// +[SCLensInfoCardRemoteDataProvider _deepLinkFallbackTypeFromResponseFallbackType:]
// Type encoding: q20@0:8i16
// Implementation: 0x1061ee68c

@end
