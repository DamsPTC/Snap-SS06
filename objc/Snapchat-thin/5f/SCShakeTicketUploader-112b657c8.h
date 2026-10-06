// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCShakeTicketUploader
// Superclass: NSObject
// Address: 0x112b657c8

@interface SCShakeTicketUploader

// Property: mCurrentStep; attributes: Tq,V_mCurrentStep

// -[SCShakeTicketUploader initWithTicket:configuration:performer:onSuccess:onTransientError:onPermanentError:]
// Type encoding: @64@0:8@16@24@32@?40@?48@?56
// Implementation: 0x1079691c0

// -[SCShakeTicketUploader run]
// Type encoding: v16@0:8
// Implementation: 0x107969364

// -[SCShakeTicketUploader _processNextStep:]
// Type encoding: v24@0:8q16
// Implementation: 0x10796940c

// -[SCShakeTicketUploader _uploadTicket]
// Type encoding: v16@0:8
// Implementation: 0x1079694ac

// -[SCShakeTicketUploader _compressFiles]
// Type encoding: v16@0:8
// Implementation: 0x1079697b4

// -[SCShakeTicketUploader _uploadFiles]
// Type encoding: v16@0:8
// Implementation: 0x1079698f4

// -[SCShakeTicketUploader _onComplete]
// Type encoding: v16@0:8
// Implementation: 0x107969c7c

// -[SCShakeTicketUploader _reportShakeError:shakeSetp:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107969c8c

// -[SCShakeTicketUploader _reportShakeTicketSend]
// Type encoding: v16@0:8
// Implementation: 0x107969d18

// -[SCShakeTicketUploader _reportShakeTicketUploadInPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x107969db4

// -[SCShakeTicketUploader mCurrentStep]
// Type encoding: q16@0:8
// Implementation: 0x107969eb4

// -[SCShakeTicketUploader setMCurrentStep:]
// Type encoding: v24@0:8q16
// Implementation: 0x107969ebc

// -[SCShakeTicketUploader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107969ec4

@end
