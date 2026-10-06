// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCWebServerConnection
// Superclass: NSObject
// Address: 0x112b839a8

@interface SCWebServerConnection

// Property: server; attributes: T@"SCWebServer",R,N,V_server
// Property: usingIPv6; attributes: TB,R,N,GisUsingIPv6
// Property: localAddressData; attributes: T@"NSData",R,N,V_localAddress
// Property: localAddressString; attributes: T@"NSString",R,N
// Property: remoteAddressData; attributes: T@"NSData",R,N,V_remoteAddress
// Property: remoteAddressString; attributes: T@"NSString",R,N
// Property: totalBytesRead; attributes: TQ,R,N,V_bytesRead
// Property: totalBytesWritten; attributes: TQ,R,N,V_bytesWritten

// -[SCWebServerConnection open]
// Type encoding: B16@0:8
// Implementation: 0x107dee964

// -[SCWebServerConnection didReadBytes:length:]
// Type encoding: v32@0:8r^v16Q24
// Implementation: 0x107dee96c

// -[SCWebServerConnection didWriteBytes:length:]
// Type encoding: v32@0:8r^v16Q24
// Implementation: 0x107dee97c

// -[SCWebServerConnection preflightRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x107dee98c

// -[SCWebServerConnection processRequest:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107dee994

// -[SCWebServerConnection abortRequest:withStatusCode:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107deea2c

// -[SCWebServerConnection close]
// Type encoding: v16@0:8
// Implementation: 0x107deea60

// -[SCWebServerConnection _writeData:withCompletionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107decf0c

// -[SCWebServerConnection _writeHeadersWithCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107ded18c

// -[SCWebServerConnection _writeBodyWithCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107ded1e8

// -[SCWebServerConnection _readData:withLength:completionBlock:]
// Type encoding: v40@0:8@16Q24@?32
// Implementation: 0x107dec568

// -[SCWebServerConnection _readHeaders:withCompletionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107dec7c8

// -[SCWebServerConnection _readBodyWithRemainingLength:completionBlock:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x107dec99c

// -[SCWebServerConnection _readNextBodyChunk:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107decb48

// -[SCWebServerConnection socket]
// Type encoding: i16@0:8
// Implementation: 0x107ded4fc

// -[SCWebServerConnection isUsingIPv6]
// Type encoding: B16@0:8
// Implementation: 0x107ded61c

// -[SCWebServerConnection _initializeResponseHeadersWithStatusCode:]
// Type encoding: v24@0:8q16
// Implementation: 0x107ded640

// -[SCWebServerConnection _startProcessingRequest]
// Type encoding: v16@0:8
// Implementation: 0x107ded744

// -[SCWebServerConnection _finishProcessingRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ded81c

// -[SCWebServerConnection _readBodyWithLength:initialData:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x107dedc84

// -[SCWebServerConnection _readChunkedBodyWithInitialData:]
// Type encoding: v24@0:8@16
// Implementation: 0x107dede8c

// -[SCWebServerConnection _readRequestHeaders]
// Type encoding: v16@0:8
// Implementation: 0x107dedff4

// -[SCWebServerConnection initWithServer:localAddress:remoteAddress:socket:]
// Type encoding: @44@0:8@16@24@32i40
// Implementation: 0x107dee60c

// -[SCWebServerConnection localAddressString]
// Type encoding: @16@0:8
// Implementation: 0x107dee798

// -[SCWebServerConnection remoteAddressString]
// Type encoding: @16@0:8
// Implementation: 0x107dee7b4

// -[SCWebServerConnection dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107dee7d0

// -[SCWebServerConnection closeSocket]
// Type encoding: v16@0:8
// Implementation: 0x107dee84c

// -[SCWebServerConnection server]
// Type encoding: @16@0:8
// Implementation: 0x107dee8dc

// -[SCWebServerConnection localAddressData]
// Type encoding: @16@0:8
// Implementation: 0x107dee8e4

// -[SCWebServerConnection remoteAddressData]
// Type encoding: @16@0:8
// Implementation: 0x107dee8ec

// -[SCWebServerConnection totalBytesRead]
// Type encoding: Q16@0:8
// Implementation: 0x107dee8f4

// -[SCWebServerConnection totalBytesWritten]
// Type encoding: Q16@0:8
// Implementation: 0x107dee8fc

// -[SCWebServerConnection .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107dee904

// +[SCWebServerConnection initialize]
// Type encoding: v16@0:8
// Implementation: 0x107ded504

@end
