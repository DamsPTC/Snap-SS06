// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKFeatureExtractor
// Superclass: NSObject
// Address: 0x1129e65b8

@interface FBSDKFeatureExtractor


// +[FBSDKFeatureExtractor rulesFromKeyProvider]
// Type encoding: @16@0:8
// Implementation: 0x10495e730

// +[FBSDKFeatureExtractor setRulesFromKeyProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x10495e73c

// +[FBSDKFeatureExtractor configureWithRulesFromKeyProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x10495e74c

// +[FBSDKFeatureExtractor initialize]
// Type encoding: v16@0:8
// Implementation: 0x10495e798

// +[FBSDKFeatureExtractor loadRulesForKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10495e9a0

// +[FBSDKFeatureExtractor getTextFeature:withScreenName:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10495ea28

// +[FBSDKFeatureExtractor getDenseFeatures:]
// Type encoding: ^f24@0:8@16
// Implementation: 0x10495eb50

// +[FBSDKFeatureExtractor pruneTree:siblings:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10495eee4

// +[FBSDKFeatureExtractor nonparseFeatures:siblings:screenname:viewTreeString:]
// Type encoding: ^f48@0:8@16@24@32@40
// Implementation: 0x10495f218

// +[FBSDKFeatureExtractor parseFeatures:]
// Type encoding: ^f24@0:8@16
// Implementation: 0x10495f5e0

// +[FBSDKFeatureExtractor isButton:]
// Type encoding: B24@0:8@16
// Implementation: 0x10495fbd0

// +[FBSDKFeatureExtractor update:text:hint:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10495fc78

// +[FBSDKFeatureExtractor foundIndicators:inValues:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10495fec0

// +[FBSDKFeatureExtractor regextMatch:text:]
// Type encoding: f32@0:8@16@24
// Implementation: 0x10496009c

// +[FBSDKFeatureExtractor regexMatch:event:textType:matchText:]
// Type encoding: f48@0:8@16@24@32@40
// Implementation: 0x1049601b8

@end
