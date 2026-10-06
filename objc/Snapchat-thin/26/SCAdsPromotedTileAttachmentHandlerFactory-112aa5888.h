// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdsPromotedTileAttachmentHandlerFactory
// Superclass: NSObject
// Address: 0x112aa5888

@interface SCAdsPromotedTileAttachmentHandlerFactory

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdsPromotedTileAttachmentHandlerFactory initWithGrapheneRegistry:crashLogger:canOpenUrlProvider:configProvider:adConfigProvider:skOverlayParamsBuilder:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x105e877f4

// -[SCAdsPromotedTileAttachmentHandlerFactory createHandlerForAdResponse:tileCtaConfig:interactionType:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x105e87948

// -[SCAdsPromotedTileAttachmentHandlerFactory _webViewAttachmentPresentationForWebview:tileCtaConfig:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x105e87b48

// -[SCAdsPromotedTileAttachmentHandlerFactory _webViewHandlerWithAdResponse:url:presentation:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x105e87bb8

// -[SCAdsPromotedTileAttachmentHandlerFactory _deeplinkHandlerWithAdResponse:tileCtaConfig:interactionType:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x105e87cd4

// -[SCAdsPromotedTileAttachmentHandlerFactory _deeplinkFallbackHandler:adResponse:tileCtaConfig:interactionType:]
// Type encoding: @48@0:8@16@24@32q40
// Implementation: 0x105e87e10

// -[SCAdsPromotedTileAttachmentHandlerFactory _webViewAttachmentPresentationForDeeplink:tileCtaConfig:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x105e87f30

// -[SCAdsPromotedTileAttachmentHandlerFactory .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105e87f50

@end
