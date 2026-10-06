// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOurStoriesReplyModifier
// Superclass: NSObject
// Address: 0x1000dbd98

@interface SCOurStoriesReplyModifier

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOurStoriesReplyModifier initWithProcessingScope:]
// Type encoding: @24@0:8@16
// Implementation: 0x100052560

// -[SCOurStoriesReplyModifier initWithProcessingScope:attachmentModifier:avatar:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100052698

// -[SCOurStoriesReplyModifier didReceiveNotificationRequest:withModifierCallback:suppressionEnabled:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x100052764

// -[SCOurStoriesReplyModifier bestAttemptContent]
// Type encoding: @16@0:8
// Implementation: 0x1000528d0

// -[SCOurStoriesReplyModifier _handleNotification]
// Type encoding: v16@0:8
// Implementation: 0x1000528f8

// -[SCOurStoriesReplyModifier _handleNormalNotification]
// Type encoding: v16@0:8
// Implementation: 0x100052930

// -[SCOurStoriesReplyModifier _handleConvoStyleNotification]
// Type encoding: v16@0:8
// Implementation: 0x100052a20

// -[SCOurStoriesReplyModifier _modifyContentForConvoStyleNotif]
// Type encoding: v16@0:8
// Implementation: 0x100052af4

// -[SCOurStoriesReplyModifier _addVideoThumbnailToNotificationWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x100052bb8

// -[SCOurStoriesReplyModifier _addUserImageToNotification]
// Type encoding: v16@0:8
// Implementation: 0x100052cac

// -[SCOurStoriesReplyModifier _handleReplySubmissionMilestone]
// Type encoding: v16@0:8
// Implementation: 0x100052e9c

// -[SCOurStoriesReplyModifier _addNewNotificationForSnapClientId:storyThumbnailUrl:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10005304c

// -[SCOurStoriesReplyModifier _setUserInfoValue:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1000532d8

// -[SCOurStoriesReplyModifier _titleStringForReplyCount:]
// Type encoding: @24@0:8@16
// Implementation: 0x100053374

// -[SCOurStoriesReplyModifier _replaceNotificationWithSameSnap:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10005340c

// -[SCOurStoriesReplyModifier _invokeModifierCallback]
// Type encoding: v16@0:8
// Implementation: 0x100053700

// -[SCOurStoriesReplyModifier _shouldUseConvoStyleNotification]
// Type encoding: B16@0:8
// Implementation: 0x100053710

// -[SCOurStoriesReplyModifier .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10005377c

@end
