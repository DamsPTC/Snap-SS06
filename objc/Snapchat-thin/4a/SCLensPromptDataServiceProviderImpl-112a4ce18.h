// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensPromptDataServiceProviderImpl
// Superclass: NSObject
// Address: 0x112a4ce18

@interface SCLensPromptDataServiceProviderImpl


// -[SCLensPromptDataServiceProviderImpl initWithGRPCService:promptLoggingServices:userSession:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1055d7dcc

// -[SCLensPromptDataServiceProviderImpl getPromptWithId:encryptionKey:promptReceiverUserId:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1055d7f2c

// -[SCLensPromptDataServiceProviderImpl getCachedPromptWithId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055d8b78

// -[SCLensPromptDataServiceProviderImpl createPromptWithId:lensId:lensSessionId:promptContent:lensSpecificData:turnByTurn:completion:]
// Type encoding: v68@0:8@16@24@32@40@48B56@?60
// Implementation: 0x1055d8b80

// -[SCLensPromptDataServiceProviderImpl takeTurnForPromptWithId:lensId:lensSessionId:lensSpecificData:promptReceiverUserId:encryptionKey:isComplete:completion:]
// Type encoding: v76@0:8@16@24@32@40@48@56B64@?68
// Implementation: 0x1055d8e08

// -[SCLensPromptDataServiceProviderImpl currentUserTookTurnObservable]
// Type encoding: @16@0:8
// Implementation: 0x1055d8f54

// -[SCLensPromptDataServiceProviderImpl currentUserTurnSavedObservable]
// Type encoding: @16@0:8
// Implementation: 0x1055d8f5c

// -[SCLensPromptDataServiceProviderImpl _createPromptWithId:lensId:promptContent:lensSpecificData:turnBased:turnResult:encryptionKey:completion:]
// Type encoding: v76@0:8@16@24@32@40B48@52@60@?68
// Implementation: 0x1055d8f64

// -[SCLensPromptDataServiceProviderImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1055d9734

@end
