// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextTopLevelReactionActionPerformer
// Superclass: NSObject
// Address: 0x112a21448

@interface SCContextTopLevelReactionActionPerformer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCContextTopLevelReactionActionPerformer initWithStoryReplySender:conversationDestinationParser:notificationManager:reactionImageRenderer:currentUserBitmojiAvatarId:reactionHandler:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1051e24a0

// -[SCContextTopLevelReactionActionPerformer performAction:onViewController:uiContainer:params:source:completion:]
// Type encoding: @64@0:8@16@24@32@40@48@?56
// Implementation: 0x1051e25f4

// -[SCContextTopLevelReactionActionPerformer sendStoryReactionWithAction:onViewController:params:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1051e274c

// -[SCContextTopLevelReactionActionPerformer sendSpotlightReactionWithAction:onViewController:params:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1051e296c

// -[SCContextTopLevelReactionActionPerformer sendChatReactionWithAction:params:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1051e2bc8

// -[SCContextTopLevelReactionActionPerformer _reactionContentForAction:]
// Type encoding: @24@0:8@16
// Implementation: 0x1051e2fd8

// -[SCContextTopLevelReactionActionPerformer _reactionSendSourceForAction:]
// Type encoding: q24@0:8@16
// Implementation: 0x1051e3128

// -[SCContextTopLevelReactionActionPerformer _createNotificationWithAction:params:image:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1051e3168

// -[SCContextTopLevelReactionActionPerformer _sendStoryReplyWithStoryReply:story:userId:groupConversationID:params:platformAnalytics:]
// Type encoding: v64@0:8@16@24@32@40@48@56
// Implementation: 0x1051e350c

// -[SCContextTopLevelReactionActionPerformer _createPlatformAnalyticsDataModelWithStory:params:action:groupConversationId:recipientUserId:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1051e38a4

// -[SCContextTopLevelReactionActionPerformer _storyTypeSpecificFromStory:]
// Type encoding: q24@0:8@16
// Implementation: 0x1051e3d1c

// -[SCContextTopLevelReactionActionPerformer _reactionAsString:]
// Type encoding: @24@0:8@16
// Implementation: 0x1051e3e94

// -[SCContextTopLevelReactionActionPerformer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1051e3f60

@end
