// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: CTPStickerContentManagerImpl
// Superclass: NSObject
// Address: 0x112a48a70

@interface CTPStickerContentManagerImpl

// Property: contentDelivery; attributes: T@"SCLazy",&,N,V_contentDelivery
// Property: boltUploader; attributes: T@"SCLazy",&,N,V_boltUploader
// Property: performer; attributes: T@"SCLazy",&,N,V_performer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[CTPStickerContentManagerImpl initWithContentDelivery:boltUploader:performerProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105593b98

// -[CTPStickerContentManagerImpl registerNewStickerWithId:imageContent:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105593d48

// -[CTPStickerContentManagerImpl uploadStickerBoltContent:content:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105593e48

// -[CTPStickerContentManagerImpl retrieveSticker:mediaContent:encKey:encIv:completion:]
// Type encoding: @56@0:8@16@24@32@40@?48
// Implementation: 0x1055941e0

// -[CTPStickerContentManagerImpl retrieveStickerWithId:completion:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x105594940

// -[CTPStickerContentManagerImpl contentDelivery]
// Type encoding: @16@0:8
// Implementation: 0x105594a6c

// -[CTPStickerContentManagerImpl setContentDelivery:]
// Type encoding: v24@0:8@16
// Implementation: 0x105594a74

// -[CTPStickerContentManagerImpl boltUploader]
// Type encoding: @16@0:8
// Implementation: 0x105594aa4

// -[CTPStickerContentManagerImpl setBoltUploader:]
// Type encoding: v24@0:8@16
// Implementation: 0x105594aac

// -[CTPStickerContentManagerImpl performer]
// Type encoding: @16@0:8
// Implementation: 0x105594adc

// -[CTPStickerContentManagerImpl setPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105594ae4

// -[CTPStickerContentManagerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105594b14

@end
