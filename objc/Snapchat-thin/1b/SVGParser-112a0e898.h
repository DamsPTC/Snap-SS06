// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SVGParser
// Superclass: NSObject
// Address: 0x112a0e898

@interface SVGParser

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: parserError; attributes: T@"NSError",&,N,V_parserError
// Property: root; attributes: T@"NSDictionary",&,N,Vroot
// Property: svgURL; attributes: T@"NSURL",R,N,V_svgURL

// -[SVGParser parser:foundCDATA:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104fbe2b0

// -[SVGParser parser:foundCharacters:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104fbe30c

// -[SVGParser parser:didStartElement:namespaceURI:qualifiedName:attributes:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x104fbe4ac

// -[SVGParser parser:didEndElement:namespaceURI:qualifiedName:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x104fbe70c

// -[SVGParser initWithString:]
// Type encoding: @24@0:8@16
// Implementation: 0x104fbe724

// -[SVGParser initWithContentsOfURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x104fbe80c

// -[SVGParser relativeURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x104fbe8e0

// -[SVGParser parserError]
// Type encoding: @16@0:8
// Implementation: 0x104fbe968

// -[SVGParser setParserError:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fbe970

// -[SVGParser root]
// Type encoding: @16@0:8
// Implementation: 0x104fbe9a0

// -[SVGParser setRoot:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fbe9a8

// -[SVGParser svgURL]
// Type encoding: @16@0:8
// Implementation: 0x104fbe9d8

// -[SVGParser .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104fbe9e0

@end
