// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: CTPItemViewFactory
// Superclass: NSObject
// Address: 0x112a48a98

@interface CTPItemViewFactory

// Property: registeredRenderers; attributes: T@"NSArray",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[CTPItemViewFactory initWithRenderers:protobufTransformer:defaultPresentationModelProvider:creativeToolsABProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x105594b50

// -[CTPItemViewFactory _rendererForItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x105594d90

// -[CTPItemViewFactory _rendererForItemInstance:]
// Type encoding: @24@0:8@16
// Implementation: 0x105594e24

// -[CTPItemViewFactory _noRegisteredRendererErrorForType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x105594eec

// -[CTPItemViewFactory _noRegisteredRendererErrorForEntityCase:]
// Type encoding: @20@0:8i16
// Implementation: 0x105594fd8

// -[CTPItemViewFactory registeredRenderers]
// Type encoding: @16@0:8
// Implementation: 0x1055950c4

// -[CTPItemViewFactory registerItemRenderer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105595108

// -[CTPItemViewFactory viewForItem:reuseView:presentationModelProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10559519c

// -[CTPItemViewFactory viewForItemInstance:feature:presentationModelProviderType:]
// Type encoding: @36@0:8@16i24@28
// Implementation: 0x10559530c

// -[CTPItemViewFactory viewReuseIdentifierForItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x105595874

// -[CTPItemViewFactory canRenderItemViewForItemInstance:]
// Type encoding: B24@0:8@16
// Implementation: 0x1055958c8

// -[CTPItemViewFactory .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1055958fc

@end
