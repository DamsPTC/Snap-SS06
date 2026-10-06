// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCWebBrowsingShareHandler
// Superclass: NSObject
// Address: 0x112b3e6c8

@interface SCWebBrowsingShareHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCWebBrowsingShareHandler initWithImmediateUserFeatureLaunchServices:conversationDestinationParser:textSender:notificationPool:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106e66730

// -[SCWebBrowsingShareHandler isSharing]
// Type encoding: B16@0:8
// Implementation: 0x106e6684c

// -[SCWebBrowsingShareHandler shareURL:withUIContainer:delegate:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106e66854

// -[SCWebBrowsingShareHandler didSendWithSelectionState:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e669c8

// -[SCWebBrowsingShareHandler didDismissWithSelectedItems:sendToDismissSource:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106e66b5c

// -[SCWebBrowsingShareHandler _resetStates]
// Type encoding: v16@0:8
// Implementation: 0x106e66b60

// -[SCWebBrowsingShareHandler _sendURL:withSelectedItems:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106e66ba0

// -[SCWebBrowsingShareHandler _completeConversationDestinationParsingWithURL:conversations:numberOfParticipants:error:]
// Type encoding: v48@0:8@16@24q32@40
// Implementation: 0x106e67080

// -[SCWebBrowsingShareHandler _completeTextSendingWithResult:]
// Type encoding: v24@0:8q16
// Implementation: 0x106e67334

// -[SCWebBrowsingShareHandler _presentNotificationForShareSucceeded:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e67340

// -[SCWebBrowsingShareHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106e673e0

@end
