// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GTLRURITemplate
// Superclass: NSObject
// Address: 0x1129ea308

@interface GTLRURITemplate


// +[GTLRURITemplate parseExpression:expressionOperator:variables:defaultValues:]
// Type encoding: B48@0:8@16^S24^@32^@40
// Implementation: 0x104a1ae70

// +[GTLRURITemplate expandVariables:expressionOperator:values:defaultValues:]
// Type encoding: @44@0:8@16S24@28@36
// Implementation: 0x104a1b408

// +[GTLRURITemplate expandString:variableName:expansionInfo:]
// Type encoding: @40@0:8@16@24^{ExpansionInfo=S@B@}32
// Implementation: 0x104a1b9e4

// +[GTLRURITemplate expandArray:variableName:expansionInfo:]
// Type encoding: @40@0:8@16@24^{ExpansionInfo=S@B@}32
// Implementation: 0x104a1bb54

// +[GTLRURITemplate expandDictionary:variableName:expansionInfo:]
// Type encoding: @40@0:8@16@24^{ExpansionInfo=S@B@}32
// Implementation: 0x104a1bea8

// +[GTLRURITemplate expandTemplate:values:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104a1c260

@end
