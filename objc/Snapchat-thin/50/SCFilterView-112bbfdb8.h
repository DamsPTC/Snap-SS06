// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFilterView
// Superclass: UIView
// Address: 0x112bbfdb8

@interface SCFilterView

// Property: config; attributes: T@"NSDictionary",&,N,V_config
// Property: displayed; attributes: TB,N,GisDisplayed,V_displayed
// Property: imageProcessCommand; attributes: T@"<SCImageProcessCommand>",&,N,V_imageProcessCommand
// Property: ctaLayoutGuideObservable; attributes: T@"SCObservable",R,N
// Property: hasBackgroundFilter; attributes: TB,R,N

// -[SCFilterView initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108d0935c

// -[SCFilterView initWithFrame:config:]
// Type encoding: @56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48
// Implementation: 0x108d09364

// -[SCFilterView hasBackgroundFilter]
// Type encoding: B16@0:8
// Implementation: 0x108d09418

// -[SCFilterView ctaLayoutGuideObservable]
// Type encoding: @16@0:8
// Implementation: 0x108d09420

// -[SCFilterView updateConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d0947c

// -[SCFilterView shouldAddToAlternativeSuperview]
// Type encoding: B16@0:8
// Implementation: 0x108d094b4

// -[SCFilterView startViewing]
// Type encoding: v16@0:8
// Implementation: 0x108d094bc

// -[SCFilterView stopViewing]
// Type encoding: v16@0:8
// Implementation: 0x108d094c0

// -[SCFilterView updateImageProcessCommands:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d094c4

// -[SCFilterView willStartDragging]
// Type encoding: v16@0:8
// Implementation: 0x108d094c8

// -[SCFilterView willEndDragging]
// Type encoding: v16@0:8
// Implementation: 0x108d094cc

// -[SCFilterView isDisplayed]
// Type encoding: B16@0:8
// Implementation: 0x108d094d0

// -[SCFilterView setDisplayed:]
// Type encoding: v20@0:8B16
// Implementation: 0x108d094e0

// -[SCFilterView config]
// Type encoding: @16@0:8
// Implementation: 0x108d094f0

// -[SCFilterView setConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d09500

// -[SCFilterView imageProcessCommand]
// Type encoding: @16@0:8
// Implementation: 0x108d09540

// -[SCFilterView setImageProcessCommand:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d09550

// -[SCFilterView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108d09590

// +[SCFilterView idSpecificFilterNameWithFilterName:filterId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108cb7394

// +[SCFilterView geofilterIdFromName:]
// Type encoding: @24@0:8@16
// Implementation: 0x108cb73d0

@end
