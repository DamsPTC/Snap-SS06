// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerNetworkingBoltUploader
// Superclass: NSObject
// Address: 0x112b01228

@interface SCComposerNetworkingBoltUploader

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerNetworkingBoltUploader initWithDataUploader:]
// Type encoding: @24@0:8@16
// Implementation: 0x106831764

// -[SCComposerNetworkingBoltUploader uploadWithData:callback:onUploadProgress:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x106831830

// -[SCComposerNetworkingBoltUploader uploadEncryptedWithData:encryptionType:callback:onUploadProgress:]
// Type encoding: v44@0:8@16i24@?28@?36
// Implementation: 0x106831b78

// -[SCComposerNetworkingBoltUploader uploadUrlWithUrl:mediaType:callback:onUploadProgress:]
// Type encoding: v48@0:8@16d24@?32@?40
// Implementation: 0x1068321fc

// -[SCComposerNetworkingBoltUploader _listenForUploadProgress:uniqueMediaId:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x106832200

// -[SCComposerNetworkingBoltUploader pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x106832354

// -[SCComposerNetworkingBoltUploader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106832360

@end
