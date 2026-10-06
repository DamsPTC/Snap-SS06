// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCWeatherStickerView
// Superclass: SCPreviewStickerViewContentView
// Address: 0x112bc5538

@interface SCWeatherStickerView

// Property: weatherType; attributes: Ti,R,N,V_weatherType
// Property: infoType; attributes: TQ,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: item; attributes: T@"CTPItem",R,N,V_item
// Property: itemInstance; attributes: T@"SCCTPCTItemInstance",R,N,V_itemInstance
// Property: loadedFromCache; attributes: TB,N,V_loadedFromCache
// Property: imageView; attributes: T@"UIImageView",R,N
// Property: imageFuture; attributes: T@"SCFuture",?,R,N

// -[SCWeatherStickerView initWithItemInstance:infoStickerViewProperties:stickerPreferenceAdaptor:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108e705f8

// -[SCWeatherStickerView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x108e70908

// -[SCWeatherStickerView _setupWithCelsius:measurementSystem:weatherType:]
// Type encoding: v28@0:8f16i20i24
// Implementation: 0x108e70be4

// -[SCWeatherStickerView _setupViewsWithTarget:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e70cd0

// -[SCWeatherStickerView _setTemperatureToDisplay]
// Type encoding: v16@0:8
// Implementation: 0x108e71160

// -[SCWeatherStickerView _onTapInformationView:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108e7130c

// -[SCWeatherStickerView shouldRespondToTap:]
// Type encoding: B24@0:8@16
// Implementation: 0x108e713a0

// -[SCWeatherStickerView _stringForTemperatureScale:]
// Type encoding: @24@0:8Q16
// Implementation: 0x108e714f8

// -[SCWeatherStickerView _stringForTemperature:]
// Type encoding: @24@0:8Q16
// Implementation: 0x108e7154c

// -[SCWeatherStickerView _validateForecastDataForlocationName:dailyForecasts:hourlyForecasts:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x108e715b8

// -[SCWeatherStickerView _switchTemperatureScale:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108e71880

// -[SCWeatherStickerView _updateHourlyForecastView:isInPreviewSticker:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x108e718fc

// -[SCWeatherStickerView _updateDailyForecastView:isInPreviewSticker:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x108e719b4

// -[SCWeatherStickerView _updateInformationView:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108e71a6c

// -[SCWeatherStickerView _updateWeatherFilterView:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108e71ba0

// -[SCWeatherStickerView _regenerateViews]
// Type encoding: v16@0:8
// Implementation: 0x108e71c88

// -[SCWeatherStickerView cycleStickerToNextStyle]
// Type encoding: v16@0:8
// Implementation: 0x108e71d10

// -[SCWeatherStickerView imageView]
// Type encoding: @16@0:8
// Implementation: 0x108e71e38

// -[SCWeatherStickerView willDisplay]
// Type encoding: v16@0:8
// Implementation: 0x108e71ed0

// -[SCWeatherStickerView didEndDisplay]
// Type encoding: v16@0:8
// Implementation: 0x108e71ed4

// -[SCWeatherStickerView encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e71ed8

// -[SCWeatherStickerView copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x108e71edc

// -[SCWeatherStickerView loggingParameters]
// Type encoding: @16@0:8
// Implementation: 0x108e71f00

// -[SCWeatherStickerView packId]
// Type encoding: @16@0:8
// Implementation: 0x108e71f08

// -[SCWeatherStickerView shortLoggingName]
// Type encoding: @16@0:8
// Implementation: 0x108e71f14

// -[SCWeatherStickerView stickerId]
// Type encoding: @16@0:8
// Implementation: 0x108e71f20

// -[SCWeatherStickerView toCTItemInstance]
// Type encoding: @16@0:8
// Implementation: 0x108e71f28

// -[SCWeatherStickerView toCTPItem]
// Type encoding: @16@0:8
// Implementation: 0x108e71f58

// -[SCWeatherStickerView infoType]
// Type encoding: Q16@0:8
// Implementation: 0x108e71f60

// -[SCWeatherStickerView type]
// Type encoding: Q16@0:8
// Implementation: 0x108e71f68

// -[SCWeatherStickerView intrinsicSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x108e71f70

// -[SCWeatherStickerView _fahrenheitValueForCelsius:]
// Type encoding: f20@0:8f16
// Implementation: 0x108e71f80

// -[SCWeatherStickerView _updateItemInstance]
// Type encoding: @16@0:8
// Implementation: 0x108e72044

// -[SCWeatherStickerView item]
// Type encoding: @16@0:8
// Implementation: 0x108e72240

// -[SCWeatherStickerView itemInstance]
// Type encoding: @16@0:8
// Implementation: 0x108e72250

// -[SCWeatherStickerView loadedFromCache]
// Type encoding: B16@0:8
// Implementation: 0x108e72260

// -[SCWeatherStickerView setLoadedFromCache:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e72270

// -[SCWeatherStickerView weatherType]
// Type encoding: i16@0:8
// Implementation: 0x108e72280

// -[SCWeatherStickerView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e72290

@end
