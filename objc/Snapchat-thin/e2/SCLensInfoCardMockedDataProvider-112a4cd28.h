// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensInfoCardMockedDataProvider
// Superclass: NSObject
// Address: 0x112a4cd28

@interface SCLensInfoCardMockedDataProvider

// Property: mockedInfoCardData; attributes: T@"NSDictionary",&,V_mockedInfoCardData
// Property: mockedErrors; attributes: T@"NSDictionary",&,V_mockedErrors
// Property: infoCardsDataObservable; attributes: T@"SCObservable",R,N,V_infoCardsDataPublishSubject
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensInfoCardMockedDataProvider init]
// Type encoding: @16@0:8
// Implementation: 0x1055d7140

// -[SCLensInfoCardMockedDataProvider addMockedInfoCardData:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055d71c4

// -[SCLensInfoCardMockedDataProvider removeMockedInfoCardData:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055d7298

// -[SCLensInfoCardMockedDataProvider addMockedError:lensId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1055d7330

// -[SCLensInfoCardMockedDataProvider removeMockedError:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055d73e8

// -[SCLensInfoCardMockedDataProvider getLensInfoCardDataWithLensIds:contexts:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x1055d7480

// -[SCLensInfoCardMockedDataProvider getLensInfoCardDataWithLensId:contexts:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x1055d7484

// -[SCLensInfoCardMockedDataProvider getLensInfoCardDataWithLensId:contexts:lensSource:]
// Type encoding: @40@0:8@16Q24Q32
// Implementation: 0x1055d748c

// -[SCLensInfoCardMockedDataProvider _getLensInfoCardDataWithLensId:lensSource:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x1055d7494

// -[SCLensInfoCardMockedDataProvider _getLensInfoCardDataWithLensIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055d7704

// -[SCLensInfoCardMockedDataProvider infoCardsDataObservable]
// Type encoding: @16@0:8
// Implementation: 0x1055d7b0c

// -[SCLensInfoCardMockedDataProvider mockedInfoCardData]
// Type encoding: @16@0:8
// Implementation: 0x1055d7b14

// -[SCLensInfoCardMockedDataProvider setMockedInfoCardData:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055d7b20

// -[SCLensInfoCardMockedDataProvider mockedErrors]
// Type encoding: @16@0:8
// Implementation: 0x1055d7b28

// -[SCLensInfoCardMockedDataProvider setMockedErrors:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055d7b34

// -[SCLensInfoCardMockedDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1055d7b3c

// +[SCLensInfoCardMockedDataProvider instance]
// Type encoding: @16@0:8
// Implementation: 0x1055d70c0

@end
