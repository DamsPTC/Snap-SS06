// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatStatusSender
// Superclass: NSObject
// Address: 0x112a6b728

@interface SCChatStatusSender


// -[SCChatStatusSender initWithCoreMessageSender:currentUserId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1057d2794

// -[SCChatStatusSender sendJoinedCallStatusMessage:analytics:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1057d2838

// -[SCChatStatusSender sendLeftCallStatusMessage:analytics:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1057d29ac

// -[SCChatStatusSender sendMissedCallStatusMessage:callType:callUuid:analytics:]
// Type encoding: v48@0:8@16q24@32@40
// Implementation: 0x1057d2b20

// -[SCChatStatusSender sendSuccessfulCallStatusMessage:callType:callDuration:analytics:]
// Type encoding: v48@0:8@16q24@32@40
// Implementation: 0x1057d2cac

// -[SCChatStatusSender sendSaveToCameraRollStatusMessage:messageId:senderUserId:savedMedias:analytics:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x1057d2e38

// -[SCChatStatusSender sendScreenCaptureStatusMessage:screenCaptureType:screenCaptureSource:capturingUserInfo:analytics:]
// Type encoding: v56@0:8@16q24q32q40@48
// Implementation: 0x1057d3454

// -[SCChatStatusSender sendQuoteReplyShareStatusMessage:analytics:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1057d3780

// -[SCChatStatusSender .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1057d3a0c

@end
