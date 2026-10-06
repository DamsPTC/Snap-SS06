// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SIGIcons
// Superclass: NSObject
// Address: 0x112cea918

@interface SIGIcons


// +[SIGIcons _associateIconKeyWithImage:forIconType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10059d0f8

// +[SIGIcons _iconImageCache]
// Type encoding: @16@0:8
// Implementation: 0x10059cc18

// +[SIGIcons _imageForCacheKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x10059cb7c

// +[SIGIcons _setImage:cacheKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10059cf94

// +[SIGIcons _colorStringFromColor:]
// Type encoding: @24@0:8@16
// Implementation: 0x10085b2dc

// +[SIGIcons _iconBitmapCacheKeyFromIconType:size:color:rotationDegrees:flipVertically:flipHorizontally:shadow:borderColor:borderWidth:]
// Type encoding: @88@0:8Q16{CGSize=dd}24@40d48B56B60@64@72d80
// Implementation: 0x10059c8e8

// +[SIGIcons unicodeValueForIconType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10b885530

// +[SIGIcons iconTypeForIconKey:]
// Type encoding: Q24@0:8@16
// Implementation: 0x10b88553c

// +[SIGIcons iconFontForSize:]
// Type encoding: @24@0:8d16
// Implementation: 0x100c32ba4

// +[SIGIcons iconFontForDefaultSize]
// Type encoding: @16@0:8
// Implementation: 0x100c32ae8

// +[SIGIcons imageTemplateFromIconType:size:]
// Type encoding: @40@0:8Q16{CGSize=dd}24
// Implementation: 0x10059c5e8

// +[SIGIcons imageTemplateFromIconType:size:edgeInsetsGreaterThan:]
// Type encoding: @72@0:8Q16{CGSize=dd}24{UIEdgeInsets=dddd}40
// Implementation: 0x10059c5fc

// +[SIGIcons imageFromIconType:size:sigColor:]
// Type encoding: @48@0:8Q16{CGSize=dd}24q40
// Implementation: 0x10b885548

// +[SIGIcons imageFromIconType:size:color:]
// Type encoding: @48@0:8Q16{CGSize=dd}24@40
// Implementation: 0x10089fa7c

// +[SIGIcons imageFromIconType:size:color:edgeInsetsGreaterThan:]
// Type encoding: @80@0:8Q16{CGSize=dd}24@40{UIEdgeInsets=dddd}48
// Implementation: 0x10085b290

// +[SIGIcons imageFromIconType:size:color:rotationDegrees:flipVertically:flipHorizontally:shadow:borderColor:borderWidth:edgeInsetsGreaterThan:useInMemoryCache:]
// Type encoding: @124@0:8Q16{CGSize=dd}24@40d48B56B60@64@72d80{UIEdgeInsets=dddd}88B120
// Implementation: 0x10059c64c

// +[SIGIcons _getLazyImageWithWidth:height:iconMetadata:]
// Type encoding: @40@0:8Q16Q24@32
// Implementation: 0x10059ce10

// +[SIGIcons _renderImageToContext:iconMetadata:]
// Type encoding: v32@0:8^{CGContext=}16@24
// Implementation: 0x100c329cc

// +[SIGIcons _renderingTraitCollection]
// Type encoding: @16@0:8
// Implementation: 0x100c33140

// +[SIGIcons _renderImageWithIconFont:icon:size:color:rotationDegrees:flipVertically:flipHorizontally:shadow:borderColor:borderWidth:edgeInsetsGreaterThan:context:]
// Type encoding: v136@0:8@16@24{CGSize=dd}32@48d56B64B68@72@80d88{UIEdgeInsets=dddd}96^{CGContext=}128
// Implementation: 0x100c32c1c

// +[SIGIcons _boundingRectAfterRotatingRect:toDegreesAngle:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16d48
// Implementation: 0x10b885610

// +[SIGIcons preloadIconFontOnBackgroundThread]
// Type encoding: v16@0:8
// Implementation: 0x100522f88

// +[SIGIcons _iconFontFilePath]
// Type encoding: @16@0:8
// Implementation: 0x100523fa8

// +[SIGIcons _loadIconFont]
// Type encoding: v16@0:8
// Implementation: 0x100523590

// +[SIGIcons debugStringFromSIGIconType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10b885744

@end
