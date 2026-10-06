// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextPromptLensActionPerformer
// Superclass: NSObject
// Address: 0x112a209f8

@interface SCContextPromptLensActionPerformer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCContextPromptLensActionPerformer initWithLinkActionPerformer:contentDelivery:currentUserId:nglStudySettings:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1051c4d20

// -[SCContextPromptLensActionPerformer performAction:onViewController:uiContainer:params:source:completion:]
// Type encoding: @64@0:8@16@24@32@40@48@?56
// Implementation: 0x1051c4e1c

// -[SCContextPromptLensActionPerformer _performLinkActionWithLensId:promptId:encryptionKey:promptCreatorId:promptReceiverUserId:overWrittenReplyUserId:promptCreatorName:flowType:tappableKey:filepath:overlayCacheKey:isVideo:onViewController:uiContainer:params:source:completion:]
// Type encoding: v144@0:8@16@24@32@40@48@56@64i72@76@84@92B100@104@112@120@128@?136
// Implementation: 0x1051c5a98

// -[SCContextPromptLensActionPerformer _fetchFilepathWithFlowType:params:completion:]
// Type encoding: v36@0:8i16@20@?28
// Implementation: 0x1051c61cc

// -[SCContextPromptLensActionPerformer _snapSenderUserIdFromContextActionParams:]
// Type encoding: @24@0:8@16
// Implementation: 0x1051c66f0

// -[SCContextPromptLensActionPerformer _otherUserIdFromContextActionParams:]
// Type encoding: @24@0:8@16
// Implementation: 0x1051c67e0

// -[SCContextPromptLensActionPerformer _otherUserNameFromContextActionParams:]
// Type encoding: @24@0:8@16
// Implementation: 0x1051c6878

// -[SCContextPromptLensActionPerformer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1051c695c

@end
