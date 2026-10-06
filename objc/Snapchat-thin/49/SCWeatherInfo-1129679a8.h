// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCWeatherInfo
// Superclass: NSObject
// Address: 0x1129679a8

@interface SCWeatherInfo

// Property: temperatureF; attributes: Tf,N,R,VtemperatureF
// Property: condition; attributes: TQ,N,R,Vcondition
// Property: uvIndex; attributes: Tq,N,R,VuvIndex
// Property: locationName; attributes: T@"NSString",N,R
// Property: date; attributes: T@"NSDate",N,R
// Property: hourlyForecasts; attributes: T@"NSArray",N,R
// Property: dailyForecasts; attributes: T@"NSArray",N,R
// Property: description; attributes: T@"NSString",N,R

// -[SCWeatherInfo temperatureF]
// Type encoding: f16@0:8
// Implementation: 0x103f2b908

// -[SCWeatherInfo condition]
// Type encoding: Q16@0:8
// Implementation: 0x103f2b918

// -[SCWeatherInfo uvIndex]
// Type encoding: q16@0:8
// Implementation: 0x103f2b928

// -[SCWeatherInfo locationName]
// Type encoding: @16@0:8
// Implementation: 0x103f2b938

// -[SCWeatherInfo date]
// Type encoding: @16@0:8
// Implementation: 0x103f2b994

// -[SCWeatherInfo hourlyForecasts]
// Type encoding: @16@0:8
// Implementation: 0x103f2ba5c

// -[SCWeatherInfo dailyForecasts]
// Type encoding: @16@0:8
// Implementation: 0x103f2ba68

// -[SCWeatherInfo initWithTemperatureF:condition:uvIndex:locationName:date:hourlyForecasts:dailyForecasts:]
// Type encoding: @68@0:8f16Q20q28@36@44@52@60
// Implementation: 0x103f2bbc4

// -[SCWeatherInfo copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x103f2c1e8

// -[SCWeatherInfo description]
// Type encoding: @16@0:8
// Implementation: 0x103f2c1ec

// -[SCWeatherInfo init]
// Type encoding: @16@0:8
// Implementation: 0x103f2c868

// -[SCWeatherInfo .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x103f2c8e4

@end
