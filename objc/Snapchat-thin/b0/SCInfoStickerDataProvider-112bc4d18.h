// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCInfoStickerDataProvider
// Superclass: NSObject
// Address: 0x112bc4d18

@interface SCInfoStickerDataProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCInfoStickerDataProvider initWithWeather:altitude:timestamp:batteryStatus:stickerPreferenceAdaptor:]
// Type encoding: @56@0:8@16@24@32Q40@48
// Implementation: 0x108e58d5c

// -[SCInfoStickerDataProvider initWithDataSource:includeBatterySticker:stickerPreferenceAdaptor:]
// Type encoding: @36@0:8@16B24@28
// Implementation: 0x108e58f1c

// -[SCInfoStickerDataProvider getWeather]
// Type encoding: @16@0:8
// Implementation: 0x108e58fd8

// -[SCInfoStickerDataProvider getUVIndex]
// Type encoding: q16@0:8
// Implementation: 0x108e58ffc

// -[SCInfoStickerDataProvider getAltitude]
// Type encoding: @16@0:8
// Implementation: 0x108e59040

// -[SCInfoStickerDataProvider getBatteryStatus]
// Type encoding: Q16@0:8
// Implementation: 0x108e59064

// -[SCInfoStickerDataProvider getTimeStamp]
// Type encoding: @16@0:8
// Implementation: 0x108e590b8

// -[SCInfoStickerDataProvider getVenuesInfo]
// Type encoding: @16@0:8
// Implementation: 0x108e590c4

// -[SCInfoStickerDataProvider infoFiltersState]
// Type encoding: @16@0:8
// Implementation: 0x108e590d0

// -[SCInfoStickerDataProvider updateWeatherSticker:]
// Type encoding: B24@0:8@16
// Implementation: 0x108e59300

// -[SCInfoStickerDataProvider updateAltitudeSticker:]
// Type encoding: B24@0:8@16
// Implementation: 0x108e593b0

// -[SCInfoStickerDataProvider updateTimestampSticker:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e59474

// -[SCInfoStickerDataProvider updateVenueSticker:]
// Type encoding: B24@0:8@16
// Implementation: 0x108e594ec

// -[SCInfoStickerDataProvider updateInfoStickerDataFromSnapDocEditor:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e59600

// -[SCInfoStickerDataProvider updateInfoStickerDataFromDataSource:includeBatterySticker:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x108e598ac

// -[SCInfoStickerDataProvider infoStickerFinishedLoadingObservable]
// Type encoding: @16@0:8
// Implementation: 0x108e59acc

// -[SCInfoStickerDataProvider _getStoredDictionaryValueFromKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e59af4

// -[SCInfoStickerDataProvider _setStoredDictionaryKey:value:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108e59b6c

// -[SCInfoStickerDataProvider _convertAndSetBatterySticker:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e59be8

// -[SCInfoStickerDataProvider _convertAndSetAltitudeSticker:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e59c54

// -[SCInfoStickerDataProvider _convertAndSetDateTimeSticker:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e59d1c

// -[SCInfoStickerDataProvider _convertAndSetWeatherSticker:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e59eec

// -[SCInfoStickerDataProvider _logDateTimeWithDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e5a0b0

// -[SCInfoStickerDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e5a128

@end
