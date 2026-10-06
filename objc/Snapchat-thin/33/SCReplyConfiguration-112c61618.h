// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCReplyConfiguration
// Superclass: NSObject
// Address: 0x112c61618

@interface SCReplyConfiguration

// Property: toReplyParameters; attributes: T@"SCReplyParameters",R,N
// Property: snapSource; attributes: Tq,R,N
// Property: navigationType; attributes: Tq,R,N

// -[SCReplyConfiguration toReplyParameters]
// Type encoding: @16@0:8
// Implementation: 0x1091ef78c

// -[SCReplyConfiguration _replyParametersFromBasicReplyParameters:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091f0108

// -[SCReplyConfiguration _configureReplyParameters:topicParameters:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091f05dc

// -[SCReplyConfiguration _configureReplyParameters:impalaParameters:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091f0670

// -[SCReplyConfiguration _configureReplyParameters:contextParameters:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091f0754

// -[SCReplyConfiguration _configureReplyParameters:discoverFeedReplyParameters:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091f093c

// -[SCReplyConfiguration _configureReplyParameters:commentsSnapReplyParameters:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091f097c

// -[SCReplyConfiguration snapSource]
// Type encoding: q16@0:8
// Implementation: 0x1091f09d0

// -[SCReplyConfiguration navigationType]
// Type encoding: q16@0:8
// Implementation: 0x1091f0a0c

// -[SCReplyConfiguration _basicParameters]
// Type encoding: @16@0:8
// Implementation: 0x1091f0a48

// -[SCReplyConfiguration copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b05183c

// -[SCReplyConfiguration hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b051860

// -[SCReplyConfiguration internalInit]
// Type encoding: @16@0:8
// Implementation: 0x10b0519f8

// -[SCReplyConfiguration isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b051a3c

// -[SCReplyConfiguration matchBasicReplyConfiguration:contextReplyConfiguration:discoverFeedReplyConfiguration:feedReplyConfiguration:impalaReplyConfiguration:lensReplyConfiguration:operaReplyConfiguration:topicsReplyConfiguration:streakRestoreReplyConfiguration:commentsSnapReplyConfiguration:creatorSubscriptionsReplyConfiguration:]
// Type encoding: v104@0:8@?16@?24@?32@?40@?48@?56@?64@?72@?80@?88@?96
// Implementation: 0x10b051d34

// -[SCReplyConfiguration .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b051f78

// +[SCReplyConfiguration basicReplyConfigurationWithBasicParameters:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b0510f4

// +[SCReplyConfiguration commentsSnapReplyConfigurationWithBasicParameters:commentsSnapReplyParameters:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b051158

// +[SCReplyConfiguration contextReplyConfigurationWithBasicParameters:contextParameters:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b0511f0

// +[SCReplyConfiguration creatorSubscriptionsReplyConfigurationWithBasicParameters:creatorSubscriptionsParameters:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b051288

// +[SCReplyConfiguration discoverFeedReplyConfigurationWithBasicParameters:discoverFeedParameters:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b051320

// +[SCReplyConfiguration feedReplyConfigurationWithBasicParameters:feedParameters:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b0513b8

// +[SCReplyConfiguration impalaReplyConfigurationWithBasicParameters:impalaParameters:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b051450

// +[SCReplyConfiguration lensReplyConfigurationWithBasicParameters:lensParameters:gamesReplyParameters:impalaReplyParams:contextReplyParameters:topicReplyParameters:lensConfigReplyParameters:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x10b0514e8

// +[SCReplyConfiguration operaReplyConfigurationWithBasicParameters:operaParameters:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b051674

// +[SCReplyConfiguration streakRestoreReplyConfigurationWithBasicParameters:streakRestoreParameters:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b05170c

// +[SCReplyConfiguration topicsReplyConfigurationWithBasicParameters:replyParameters:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b0517a4

@end
