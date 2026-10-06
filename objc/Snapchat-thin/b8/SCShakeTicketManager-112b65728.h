// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCShakeTicketManager
// Superclass: NSObject
// Address: 0x112b65728

@interface SCShakeTicketManager


// -[SCShakeTicketManager initWithQueue:]
// Type encoding: @24@0:8@16
// Implementation: 0x1079658f8

// -[SCShakeTicketManager uploadShakeLogFiles:uploadUrl:configuration:onSuccess:onTransientError:onPermanentError:]
// Type encoding: v64@0:8@16@24@32@?40@?48@?56
// Implementation: 0x107965b00

// -[SCShakeTicketManager uploadShakeTicket:configuration:onSuccess:onDuplicate:onTransientError:onPermanentError:]
// Type encoding: v64@0:8@16@24@?32@?40@?48@?56
// Implementation: 0x107965d18

// -[SCShakeTicketManager _uploadShakeTicket:latestNotificationInfo:configuration:onSuccess:onDuplicate:onTransientError:onPermanentError:]
// Type encoding: v72@0:8@16@24@32@?40@?48@?56@?64
// Implementation: 0x107965f3c

// -[SCShakeTicketManager _authorizedRequestPayload:latestNotificationInfo:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107966834

// -[SCShakeTicketManager _unauthorizedRequestPayload:]
// Type encoding: @24@0:8@16
// Implementation: 0x10796702c

// -[SCShakeTicketManager _jsonStringFromDictionary:]
// Type encoding: @24@0:8@16
// Implementation: 0x1079675b4

// -[SCShakeTicketManager _jsonStringFromUnsanitizedString:]
// Type encoding: @24@0:8@16
// Implementation: 0x107967644

// -[SCShakeTicketManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107967778

// +[SCShakeTicketManager isPermanentError:error:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107965990

// +[SCShakeTicketManager shouldInfiniteRetry:error:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1079659fc

// +[SCShakeTicketManager isNetworkError:]
// Type encoding: B24@0:8q16
// Implementation: 0x107965ae4

@end
