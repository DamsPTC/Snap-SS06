// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPollsVotingService
// Superclass: NSObject
// Address: 0x112a6d3e8

@interface SCPollsVotingService


// -[SCPollsVotingService initWithPollsGRPCService:]
// Type encoding: @24@0:8@16
// Implementation: 0x105800ef0

// -[SCPollsVotingService _pushVotes:forPollId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105800f80

// -[SCPollsVotingService observeVotesWithPollId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105800ffc

// -[SCPollsVotingService fetchVotesWithPollId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10580110c

// -[SCPollsVotingService publishVotesWithSerializedInteractions:pollId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105801778

// -[SCPollsVotingService vote:pollId:]
// Type encoding: @28@0:8I16@20
// Implementation: 0x105801864

// -[SCPollsVotingService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105801be8

@end
