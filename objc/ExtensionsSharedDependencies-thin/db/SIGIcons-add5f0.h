// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SIGIcons
// Superclass: NSObject
// Address: 0xadd5f0

@interface SIGIcons


// +[SIGIcons _associateIconKeyWithImage:forIconType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x5dc194

// +[SIGIcons _iconImageCache]
// Type encoding: @16@0:8
// Implementation: 0x5dc204

// +[SIGIcons _imageForCacheKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x5dc284

// +[SIGIcons _setImage:cacheKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x5dc320

// +[SIGIcons _colorStringFromColor:]
// Type encoding: @24@0:8@16
// Implementation: 0x5dc470

// +[SIGIcons _iconBitmapCacheKeyFromIconType:size:color:rotationDegrees:flipVertically:flipHorizontally:shadow:borderColor:borderWidth:]
// Type encoding: @88@0:8Q16{CGSize=dd}24@40d48B56B60@64@72d80
// Implementation: 0x5dc4d0

// +[SIGIcons unicodeValueForIconType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x5dc73c

// +[SIGIcons iconTypeForIconKey:]
// Type encoding: Q24@0:8@16
// Implementation: 0x5dc748

// +[SIGIcons iconFontForSize:]
// Type encoding: @24@0:8d16
// Implementation: 0x5dc754

// +[SIGIcons iconFontForDefaultSize]
// Type encoding: @16@0:8
// Implementation: 0x5dc788

// +[SIGIcons imageTemplateFromIconType:size:]
// Type encoding: @40@0:8Q16{CGSize=dd}24
// Implementation: 0x5dc844

// +[SIGIcons imageTemplateFromIconType:size:edgeInsetsGreaterThan:]
// Type encoding: @72@0:8Q16{CGSize=dd}24{UIEdgeInsets=dddd}40
// Implementation: 0x5dc858

// +[SIGIcons imageFromIconType:size:sigColor:]
// Type encoding: @48@0:8Q16{CGSize=dd}24q40
// Implementation: 0x5dc8a8

// +[SIGIcons imageFromIconType:size:color:]
// Type encoding: @48@0:8Q16{CGSize=dd}24@40
// Implementation: 0x5dc92c

// +[SIGIcons imageFromIconType:size:color:edgeInsetsGreaterThan:]
// Type encoding: @80@0:8Q16{CGSize=dd}24@40{UIEdgeInsets=dddd}48
// Implementation: 0x5dc940

// +[SIGIcons imageFromIconType:size:color:rotationDegrees:flipVertically:flipHorizontally:shadow:borderColor:borderWidth:edgeInsetsGreaterThan:useInMemoryCache:]
// Type encoding: @124@0:8Q16{CGSize=dd}24@40d48B56B60@64@72d80{UIEdgeInsets=dddd}88B120
// Implementation: 0x5dc98c

// +[SIGIcons _getLazyImageWithWidth:height:iconMetadata:]
// Type encoding: @40@0:8Q16Q24@32
// Implementation: 0x5dcc28

// +[SIGIcons _renderImageToContext:iconMetadata:]
// Type encoding: v32@0:8^{CGContext=}16@24
// Implementation: 0x5dcf3c

// +[SIGIcons _renderingTraitCollection]
// Type encoding: @16@0:8
// Implementation: 0x5dd058

// +[SIGIcons _renderImageWithIconFont:icon:size:color:rotationDegrees:flipVertically:flipHorizontally:shadow:borderColor:borderWidth:edgeInsetsGreaterThan:context:]
// Type encoding: v136@0:8@16@24{CGSize=dd}32@48d56B64B68@72@80d88{UIEdgeInsets=dddd}96^{CGContext=}128
// Implementation: 0x5dd0ec

// +[SIGIcons _boundingRectAfterRotatingRect:toDegreesAngle:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16d48
// Implementation: 0x5dd610

// +[SIGIcons preloadIconFontOnBackgroundThread]
// Type encoding: v16@0:8
// Implementation: 0x5dd744

// +[SIGIcons _iconFontFilePath]
// Type encoding: @16@0:8
// Implementation: 0x5dd790

// +[SIGIcons _loadIconFont]
// Type encoding: v16@0:8
// Implementation: 0x5dd88c

// +[SIGIcons debugStringFromSIGIconType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x5dda10

@end
