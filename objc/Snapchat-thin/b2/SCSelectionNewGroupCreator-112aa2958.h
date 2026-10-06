// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSelectionNewGroupCreator
// Superclass: NSObject
// Address: 0x112aa2958

@interface SCSelectionNewGroupCreator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSelectionNewGroupCreator initWithUserId:groupDataCreator:groupDataFetcher:groupDataMutator:snapchattersDataFetcher:errorHandler:source:circumstanceEngine:myAIExperimentServices:]
// Type encoding: @88@0:8@16@24@32@40@48@56Q64@72@80
// Implementation: 0x105e57c00

// -[SCSelectionNewGroupCreator createGroupWithSelectedItems:groupName:uiContainer:completion:completionQueue:]
// Type encoding: B56@0:8@16@24@32@?40@48
// Implementation: 0x105e57e8c

// -[SCSelectionNewGroupCreator addSelectedItems:toGroup:source:uiContainer:completion:completionQueue:]
// Type encoding: v64@0:8@16@24q32@40@?48@56
// Implementation: 0x105e57f88

// -[SCSelectionNewGroupCreator _addSnapchatters:phoneNumbers:toGroupId:source:completion:completionQueue:]
// Type encoding: v64@0:8@16@24@32q40@?48@56
// Implementation: 0x105e58248

// -[SCSelectionNewGroupCreator _userIdToParticipantsOfSelectionItems:]
// Type encoding: @24@0:8@16
// Implementation: 0x105e5843c

// -[SCSelectionNewGroupCreator _createGroupPrestepWithSelectedItems:uiContainer:snapchatters:includeCurrentUser:isCreatingNewGroup:]
// Type encoding: B48@0:8@16@24@32B40B44
// Implementation: 0x105e587bc

// -[SCSelectionNewGroupCreator _createGroupWithSnapchatters:groupName:completion:completionQueue:]
// Type encoding: v48@0:8@16@24@?32@40
// Implementation: 0x105e58d84

// -[SCSelectionNewGroupCreator _checkAndUpdateExistingGroup:groupName:completion:completionQueue:]
// Type encoding: v48@0:8@16@24@?32@40
// Implementation: 0x105e59000

// -[SCSelectionNewGroupCreator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105e59518

@end
