// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SOJUSnapStateMessage
// Superclass: SCSojuMessage
// Address: 0x112ccc710

@interface SOJUSnapStateMessage

// Property: snapId; attributes: T@"NSString",R,D,N
// Property: viewed; attributes: T@"NSNumber",R,D,N
// Property: replayed; attributes: T@"NSNumber",R,D,N
// Property: screenshotCount; attributes: T@"NSNumber",R,D,N
// Property: fiNeedsRetry; attributes: T@"NSNumber",R,D,N
// Property: fiVersion; attributes: T@"NSNumber",R,D,N
// Property: fiSenderOutAlpha; attributes: T@"NSString",R,D,N
// Property: fiRecipientOutAlpha; attributes: T@"NSString",R,D,N
// Property: fiSendTimestamp; attributes: T@"NSNumber",R,D,N
// Property: fiRecipientOutDelta; attributes: T@"NSString",R,D,N
// Property: fiRecipientOutDeltaCheck; attributes: T@"NSString",R,D,N
// Property: fiSenderOutBeta; attributes: T@"NSString",R,D,N
// Property: screenCaptureShotCount; attributes: T@"NSNumber",R,D,N
// Property: screenCaptureRecordingCount; attributes: T@"NSNumber",R,D,N
// Property: header; attributes: T@"SOJUHeader",R,D,N
// Property: retried; attributes: T@"NSNumber",R,D,N
// Property: knownChatSequenceNumbers; attributes: T@"NSDictionary",R,D,N
// Property: mischiefVersion; attributes: T@"NSNumber",R,D,N
// Property: seqNum; attributes: T@"NSNumber",R,D,N
// Property: timestamp; attributes: T@"NSNumber",R,D,N
// Property: type; attributes: T@"NSString",R,D,N
// Property: idValue; attributes: T@"NSString",R,D,N
// Property: appEngineTarget; attributes: T@"NSString",R,D,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SOJUSnapStateMessage initWithHeader:retried:knownChatSequenceNumbers:mischiefVersion:seqNum:timestamp:type:idValue:appEngineTarget:snapId:viewed:replayed:screenshotCount:fiNeedsRetry:fiVersion:fiSenderOutAlpha:fiRecipientOutAlpha:fiSendTimestamp:fiRecipientOutDelta:fiRecipientOutDeltaCheck:fiSenderOutBeta:screenCaptureShotCount:screenCaptureRecordingCount:]
// Type encoding: @200@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192
// Implementation: 0x10b794d54

// +[SOJUSnapStateMessage registerMessageFields:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b794dbc

@end
