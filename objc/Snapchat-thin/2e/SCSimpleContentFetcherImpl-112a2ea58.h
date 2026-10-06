// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSimpleContentFetcherImpl
// Superclass: NSObject
// Address: 0x112a2ea58

@interface SCSimpleContentFetcherImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSimpleContentFetcherImpl initWithContentDelivery:queue:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10539b6c4

// -[SCSimpleContentFetcherImpl retrieveContentWithConfig:completion:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x10539b768

// -[SCSimpleContentFetcherImpl retrieveContentWithConfigBuilder:completion:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x10539be58

// -[SCSimpleContentFetcherImpl _registerAndRetrieveUsingURL:config:expirationDate:cancelableGroup:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x10539bed0

// -[SCSimpleContentFetcherImpl _registerAndRetrieveUsingContentObject:config:expirationDate:cancelableGroup:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x10539c2b4

// -[SCSimpleContentFetcherImpl _handleRegistrationCompletionForKey:success:config:cancelableGroup:completion:]
// Type encoding: v52@0:8@16B24@28@36@?44
// Implementation: 0x10539c5a0

// -[SCSimpleContentFetcherImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10539c7f4

@end
