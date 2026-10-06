// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GTLRDateTime
// Superclass: NSObject
// Address: 0x1129e9cf0

@interface GTLRDateTime

// Property: dateComponents; attributes: T@"NSDateComponents",C,N,V_dateComponents
// Property: milliseconds; attributes: Tq,N,V_milliseconds
// Property: offsetMinutes; attributes: T@"NSNumber",&,N,V_offsetMinutes
// Property: hasTime; attributes: TB,D,N
// Property: date; attributes: T@"NSDate",R,D,N
// Property: RFC3339String; attributes: T@"NSString",R,D,N
// Property: stringValue; attributes: T@"NSString",R,D,N

// -[GTLRDateTime copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x104a0b650

// -[GTLRDateTime isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x104a0b654

// -[GTLRDateTime hash]
// Type encoding: Q16@0:8
// Implementation: 0x104a0b7a8

// -[GTLRDateTime description]
// Type encoding: @16@0:8
// Implementation: 0x104a0b7e4

// -[GTLRDateTime date]
// Type encoding: @16@0:8
// Implementation: 0x104a0b864

// -[GTLRDateTime stringValue]
// Type encoding: @16@0:8
// Implementation: 0x104a0b9e8

// -[GTLRDateTime RFC3339String]
// Type encoding: @16@0:8
// Implementation: 0x104a0b9ec

// -[GTLRDateTime setFromDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a0bcf8

// -[GTLRDateTime setFromRFC3339String:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a0bdac

// -[GTLRDateTime hasTime]
// Type encoding: B16@0:8
// Implementation: 0x104a0c224

// -[GTLRDateTime setHasTime:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a0c280

// -[GTLRDateTime dateComponents]
// Type encoding: @16@0:8
// Implementation: 0x104a0c358

// -[GTLRDateTime setDateComponents:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a0c360

// -[GTLRDateTime milliseconds]
// Type encoding: q16@0:8
// Implementation: 0x104a0c368

// -[GTLRDateTime setMilliseconds:]
// Type encoding: v24@0:8q16
// Implementation: 0x104a0c370

// -[GTLRDateTime offsetMinutes]
// Type encoding: @16@0:8
// Implementation: 0x104a0c378

// -[GTLRDateTime setOffsetMinutes:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a0c380

// -[GTLRDateTime .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104a0c38c

// +[GTLRDateTime dateTimeWithRFC3339String:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a0b424

// +[GTLRDateTime dateTimeWithDate:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a0b47c

// +[GTLRDateTime dateTimeWithDate:offsetMinutes:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x104a0b4d4

// +[GTLRDateTime dateTimeForAllDayWithDate:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a0b534

// +[GTLRDateTime dateTimeWithDateComponents:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a0b598

// +[GTLRDateTime calendar]
// Type encoding: @16@0:8
// Implementation: 0x104a0c2e8

@end
