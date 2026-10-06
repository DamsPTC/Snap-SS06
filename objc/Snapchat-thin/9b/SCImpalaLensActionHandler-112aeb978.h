// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImpalaLensActionHandler
// Superclass: NSObject
// Address: 0x112aeb978

@interface SCImpalaLensActionHandler

// Property: viewController; attributes: T@"UIViewController",R,W,N,V_viewController
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCImpalaLensActionHandler initWithViewController:lensModularCameraPresentation:roleType:urlPreviewProvider:simpleContentFetcher:externalLinkSendingService:]
// Type encoding: @64@0:8@16@24q32@40@48@56
// Implementation: 0x106663948

// -[SCImpalaLensActionHandler presentLensWithLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x106663a74

// -[SCImpalaLensActionHandler presentLensWithContextWithLens:analyticsContext:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106663adc

// -[SCImpalaLensActionHandler presentLensesWithContextWithLenses:selectedLens:analyticsContext:onCarouselEnd:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106663d80

// -[SCImpalaLensActionHandler sendLensWithLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066641e0

// -[SCImpalaLensActionHandler openLensExplorer]
// Type encoding: v16@0:8
// Implementation: 0x106664274

// -[SCImpalaLensActionHandler openLensExplorerFeedWithFeedId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106664278

// -[SCImpalaLensActionHandler _lensReplyParamsWithAnalyticsContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x10666427c

// -[SCImpalaLensActionHandler _sendLensWithLensItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066643b0

// -[SCImpalaLensActionHandler shouldRetainInstanceWhenMarshalling]
// Type encoding: B16@0:8
// Implementation: 0x106664520

// -[SCImpalaLensActionHandler pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x106664528

// -[SCImpalaLensActionHandler viewController]
// Type encoding: @16@0:8
// Implementation: 0x106664534

// -[SCImpalaLensActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10666454c

@end
