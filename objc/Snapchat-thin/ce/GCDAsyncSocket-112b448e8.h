// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GCDAsyncSocket
// Superclass: NSObject
// Address: 0x112b448e8

@interface GCDAsyncSocket

// Property: delegate; attributes: T@"<GCDAsyncSocketDelegate>",W
// Property: delegateQueue; attributes: T@"NSObject<OS_dispatch_queue>",&
// Property: IPv4Enabled; attributes: TB,GisIPv4Enabled
// Property: IPv6Enabled; attributes: TB,GisIPv6Enabled
// Property: IPv4PreferredOverIPv6; attributes: TB,GisIPv4PreferredOverIPv6
// Property: alternateAddressDelay; attributes: Td
// Property: userData; attributes: T@,&
// Property: isDisconnected; attributes: TB,R
// Property: isConnected; attributes: TB,R
// Property: connectedHost; attributes: T@"NSString",R
// Property: connectedPort; attributes: TS,R
// Property: connectedUrl; attributes: T@"NSURL",R
// Property: localHost; attributes: T@"NSString",R
// Property: localPort; attributes: TS,R
// Property: connectedAddress; attributes: T@"NSData",R
// Property: localAddress; attributes: T@"NSData",R
// Property: isIPv4; attributes: TB,R
// Property: isIPv6; attributes: TB,R
// Property: isSecure; attributes: TB,R
// Property: autoDisconnectOnClosedReadStream; attributes: TB

// -[GCDAsyncSocket init]
// Type encoding: @16@0:8
// Implementation: 0x106ecee38

// -[GCDAsyncSocket initWithSocketQueue:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ecee48

// -[GCDAsyncSocket initWithDelegate:delegateQueue:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106ecee58

// -[GCDAsyncSocket initWithDelegate:delegateQueue:socketQueue:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106ecee60

// -[GCDAsyncSocket dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106ecf018

// -[GCDAsyncSocket delegate]
// Type encoding: @16@0:8
// Implementation: 0x106ecf420

// -[GCDAsyncSocket setDelegate:synchronously:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106ecf544

// -[GCDAsyncSocket setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ecf620

// -[GCDAsyncSocket synchronouslySetDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ecf628

// -[GCDAsyncSocket delegateQueue]
// Type encoding: @16@0:8
// Implementation: 0x106ecf630

// -[GCDAsyncSocket setDelegateQueue:synchronously:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106ecf734

// -[GCDAsyncSocket setDelegateQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ecf830

// -[GCDAsyncSocket synchronouslySetDelegateQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ecf838

// -[GCDAsyncSocket getDelegate:delegateQueue:]
// Type encoding: v32@0:8^@16^@24
// Implementation: 0x106ecf840

// -[GCDAsyncSocket setDelegate:delegateQueue:synchronously:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x106ecf9d8

// -[GCDAsyncSocket setDelegate:delegateQueue:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106ecfb18

// -[GCDAsyncSocket synchronouslySetDelegate:delegateQueue:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106ecfb20

// -[GCDAsyncSocket isIPv4Enabled]
// Type encoding: B16@0:8
// Implementation: 0x106ecfb28

// -[GCDAsyncSocket setIPv4Enabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ecfbec

// -[GCDAsyncSocket isIPv6Enabled]
// Type encoding: B16@0:8
// Implementation: 0x106ecfc9c

// -[GCDAsyncSocket setIPv6Enabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ecfd60

// -[GCDAsyncSocket isIPv4PreferredOverIPv6]
// Type encoding: B16@0:8
// Implementation: 0x106ecfe1c

// -[GCDAsyncSocket setIPv4PreferredOverIPv6:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ecfee0

// -[GCDAsyncSocket alternateAddressDelay]
// Type encoding: d16@0:8
// Implementation: 0x106ecff9c

// -[GCDAsyncSocket setAlternateAddressDelay:]
// Type encoding: v24@0:8d16
// Implementation: 0x106ed008c

// -[GCDAsyncSocket userData]
// Type encoding: @16@0:8
// Implementation: 0x106ed0130

// -[GCDAsyncSocket setUserData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ed0260

// -[GCDAsyncSocket acceptOnPort:error:]
// Type encoding: B28@0:8S16^@20
// Implementation: 0x106ed0364

// -[GCDAsyncSocket acceptOnInterface:port:error:]
// Type encoding: B36@0:8@16S24^@28
// Implementation: 0x106ed0374

// -[GCDAsyncSocket acceptOnUrl:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x106ed0cf4

// -[GCDAsyncSocket doAccept:]
// Type encoding: B20@0:8i16
// Implementation: 0x106ed1410

// -[GCDAsyncSocket preConnectWithInterface:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x106ed17d4

// -[GCDAsyncSocket preConnectWithUrl:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x106ed19a4

// -[GCDAsyncSocket connectToHost:onPort:error:]
// Type encoding: B36@0:8@16S24^@28
// Implementation: 0x106ed1ae0

// -[GCDAsyncSocket connectToHost:onPort:withTimeout:error:]
// Type encoding: B44@0:8@16S24d28^@36
// Implementation: 0x106ed1ae8

// -[GCDAsyncSocket connectToHost:onPort:viaInterface:withTimeout:error:]
// Type encoding: B52@0:8@16S24@28d36^@44
// Implementation: 0x106ed1af4

// -[GCDAsyncSocket connectToAddress:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x106ed21e8

// -[GCDAsyncSocket connectToAddress:withTimeout:error:]
// Type encoding: B40@0:8@16d24^@32
// Implementation: 0x106ed21f8

// -[GCDAsyncSocket connectToAddress:viaInterface:withTimeout:error:]
// Type encoding: B48@0:8@16@24d32^@40
// Implementation: 0x106ed2204

// -[GCDAsyncSocket connectToUrl:withTimeout:error:]
// Type encoding: B40@0:8@16d24^@32
// Implementation: 0x106ed25e0

// -[GCDAsyncSocket connectToNetService:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x106ed28b0

// -[GCDAsyncSocket lookup:didSucceedWithAddress4:address6:]
// Type encoding: v36@0:8i16@20@28
// Implementation: 0x106ed29e0

// -[GCDAsyncSocket lookup:didFail:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x106ed2acc

// -[GCDAsyncSocket bindSocket:toInterface:error:]
// Type encoding: B36@0:8i16@20^@28
// Implementation: 0x106ed2b1c

// -[GCDAsyncSocket createSocket:connectInterface:errPtr:]
// Type encoding: i36@0:8i16@20^@28
// Implementation: 0x106ed2c14

// -[GCDAsyncSocket connectSocket:address:stateIndex:]
// Type encoding: v32@0:8i16@20i28
// Implementation: 0x106ed2cf8

// -[GCDAsyncSocket closeSocket:]
// Type encoding: v20@0:8i16
// Implementation: 0x106ed2fc0

// -[GCDAsyncSocket closeUnusedSocket:]
// Type encoding: v20@0:8i16
// Implementation: 0x106ed3034

// -[GCDAsyncSocket connectWithAddress4:address6:error:]
// Type encoding: B40@0:8@16@24^@32
// Implementation: 0x106ed3058

// -[GCDAsyncSocket connectWithAddressUN:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x106ed3230

// -[GCDAsyncSocket didConnect:]
// Type encoding: v20@0:8i16
// Implementation: 0x106ed351c

// -[GCDAsyncSocket didNotConnect:error:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x106ed3aec

// -[GCDAsyncSocket startConnectTimeout:]
// Type encoding: v24@0:8d16
// Implementation: 0x106ed3b04

// -[GCDAsyncSocket endConnectTimeout]
// Type encoding: v16@0:8
// Implementation: 0x106ed3c50

// -[GCDAsyncSocket doConnectTimeout]
// Type encoding: v16@0:8
// Implementation: 0x106ed3cb8

// -[GCDAsyncSocket closeWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ed3cfc

// -[GCDAsyncSocket disconnect]
// Type encoding: v16@0:8
// Implementation: 0x106ed4054

// -[GCDAsyncSocket disconnectAfterReading]
// Type encoding: v16@0:8
// Implementation: 0x106ed4120

// -[GCDAsyncSocket disconnectAfterWriting]
// Type encoding: v16@0:8
// Implementation: 0x106ed41c0

// -[GCDAsyncSocket disconnectAfterReadingAndWriting]
// Type encoding: v16@0:8
// Implementation: 0x106ed4260

// -[GCDAsyncSocket maybeClose]
// Type encoding: v16@0:8
// Implementation: 0x106ed4300

// -[GCDAsyncSocket badConfigError:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ed4370

// -[GCDAsyncSocket badParamError:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ed43e0

// -[GCDAsyncSocket errorWithErrno:reason:]
// Type encoding: @28@0:8i16@20
// Implementation: 0x106ed4504

// -[GCDAsyncSocket errnoError]
// Type encoding: @16@0:8
// Implementation: 0x106ed45e8

// -[GCDAsyncSocket sslError:]
// Type encoding: @20@0:8i16
// Implementation: 0x106ed46a8

// -[GCDAsyncSocket connectTimeoutError]
// Type encoding: @16@0:8
// Implementation: 0x106ed4724

// -[GCDAsyncSocket readMaxedOutError]
// Type encoding: @16@0:8
// Implementation: 0x106ed47f0

// -[GCDAsyncSocket readTimeoutError]
// Type encoding: @16@0:8
// Implementation: 0x106ed48bc

// -[GCDAsyncSocket writeTimeoutError]
// Type encoding: @16@0:8
// Implementation: 0x106ed4988

// -[GCDAsyncSocket connectionClosedError]
// Type encoding: @16@0:8
// Implementation: 0x106ed4a54

// -[GCDAsyncSocket otherError:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ed4b20

// -[GCDAsyncSocket isDisconnected]
// Type encoding: B16@0:8
// Implementation: 0x106ed4b90

// -[GCDAsyncSocket isConnected]
// Type encoding: B16@0:8
// Implementation: 0x106ed4c84

// -[GCDAsyncSocket connectedHost]
// Type encoding: @16@0:8
// Implementation: 0x106ed4d74

// -[GCDAsyncSocket connectedPort]
// Type encoding: S16@0:8
// Implementation: 0x106ed4ef8

// -[GCDAsyncSocket connectedUrl]
// Type encoding: @16@0:8
// Implementation: 0x106ed502c

// -[GCDAsyncSocket localHost]
// Type encoding: @16@0:8
// Implementation: 0x106ed5174

// -[GCDAsyncSocket localPort]
// Type encoding: S16@0:8
// Implementation: 0x106ed52f8

// -[GCDAsyncSocket connectedHost4]
// Type encoding: @16@0:8
// Implementation: 0x106ed542c

// -[GCDAsyncSocket connectedHost6]
// Type encoding: @16@0:8
// Implementation: 0x106ed545c

// -[GCDAsyncSocket connectedPort4]
// Type encoding: S16@0:8
// Implementation: 0x106ed548c

// -[GCDAsyncSocket connectedPort6]
// Type encoding: S16@0:8
// Implementation: 0x106ed54a4

// -[GCDAsyncSocket localHost4]
// Type encoding: @16@0:8
// Implementation: 0x106ed54bc

// -[GCDAsyncSocket localHost6]
// Type encoding: @16@0:8
// Implementation: 0x106ed54ec

// -[GCDAsyncSocket localPort4]
// Type encoding: S16@0:8
// Implementation: 0x106ed551c

// -[GCDAsyncSocket localPort6]
// Type encoding: S16@0:8
// Implementation: 0x106ed5534

// -[GCDAsyncSocket connectedHostFromSocket4:]
// Type encoding: @20@0:8i16
// Implementation: 0x106ed554c

// -[GCDAsyncSocket connectedHostFromSocket6:]
// Type encoding: @20@0:8i16
// Implementation: 0x106ed55dc

// -[GCDAsyncSocket connectedPortFromSocket4:]
// Type encoding: S20@0:8i16
// Implementation: 0x106ed5640

// -[GCDAsyncSocket connectedPortFromSocket6:]
// Type encoding: S20@0:8i16
// Implementation: 0x106ed56c8

// -[GCDAsyncSocket connectedUrlFromSocketUN:]
// Type encoding: @20@0:8i16
// Implementation: 0x106ed5724

// -[GCDAsyncSocket localHostFromSocket4:]
// Type encoding: @20@0:8i16
// Implementation: 0x106ed57b4

// -[GCDAsyncSocket localHostFromSocket6:]
// Type encoding: @20@0:8i16
// Implementation: 0x106ed5844

// -[GCDAsyncSocket localPortFromSocket4:]
// Type encoding: S20@0:8i16
// Implementation: 0x106ed58a8

// -[GCDAsyncSocket localPortFromSocket6:]
// Type encoding: S20@0:8i16
// Implementation: 0x106ed5930

// -[GCDAsyncSocket connectedAddress]
// Type encoding: @16@0:8
// Implementation: 0x106ed598c

// -[GCDAsyncSocket localAddress]
// Type encoding: @16@0:8
// Implementation: 0x106ed5b88

// -[GCDAsyncSocket isIPv4]
// Type encoding: B16@0:8
// Implementation: 0x106ed5d84

// -[GCDAsyncSocket isIPv6]
// Type encoding: B16@0:8
// Implementation: 0x106ed5e4c

// -[GCDAsyncSocket isSecure]
// Type encoding: B16@0:8
// Implementation: 0x106ed5f14

// -[GCDAsyncSocket getInterfaceAddress4:address6:fromDescription:port:]
// Type encoding: v44@0:8^@16^@24@32S40
// Implementation: 0x106ed5fd0

// -[GCDAsyncSocket getInterfaceAddressFromUrl:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ed63c8

// -[GCDAsyncSocket setupReadAndWriteSourcesForNewlyConnectedSocket:]
// Type encoding: v20@0:8i16
// Implementation: 0x106ed64a0

// -[GCDAsyncSocket usingCFStreamForTLS]
// Type encoding: B16@0:8
// Implementation: 0x106ed6788

// -[GCDAsyncSocket usingSecureTransportForTLS]
// Type encoding: B16@0:8
// Implementation: 0x106ed67a0

// -[GCDAsyncSocket suspendReadSource]
// Type encoding: v16@0:8
// Implementation: 0x106ed67b8

// -[GCDAsyncSocket resumeReadSource]
// Type encoding: v16@0:8
// Implementation: 0x106ed67f0

// -[GCDAsyncSocket suspendWriteSource]
// Type encoding: v16@0:8
// Implementation: 0x106ed6828

// -[GCDAsyncSocket resumeWriteSource]
// Type encoding: v16@0:8
// Implementation: 0x106ed6860

// -[GCDAsyncSocket readDataWithTimeout:tag:]
// Type encoding: v32@0:8d16q24
// Implementation: 0x106ed6898

// -[GCDAsyncSocket readDataWithTimeout:buffer:bufferOffset:tag:]
// Type encoding: v48@0:8d16@24Q32q40
// Implementation: 0x106ed68ac

// -[GCDAsyncSocket readDataWithTimeout:buffer:bufferOffset:maxLength:tag:]
// Type encoding: v56@0:8d16@24Q32Q40q48
// Implementation: 0x106ed68b8

// -[GCDAsyncSocket readDataToLength:withTimeout:tag:]
// Type encoding: v40@0:8Q16d24q32
// Implementation: 0x106ed6a00

// -[GCDAsyncSocket readDataToLength:withTimeout:buffer:bufferOffset:tag:]
// Type encoding: v56@0:8Q16d24@32Q40q48
// Implementation: 0x106ed6a10

// -[GCDAsyncSocket readDataToData:withTimeout:tag:]
// Type encoding: v40@0:8@16d24q32
// Implementation: 0x106ed6b5c

// -[GCDAsyncSocket readDataToData:withTimeout:buffer:bufferOffset:tag:]
// Type encoding: v56@0:8@16d24@32Q40q48
// Implementation: 0x106ed6b70

// -[GCDAsyncSocket readDataToData:withTimeout:maxLength:tag:]
// Type encoding: v48@0:8@16d24Q32q40
// Implementation: 0x106ed6b7c

// -[GCDAsyncSocket readDataToData:withTimeout:buffer:bufferOffset:maxLength:tag:]
// Type encoding: v64@0:8@16d24@32Q40Q48q56
// Implementation: 0x106ed6b90

// -[GCDAsyncSocket progressOfReadReturningTag:bytesDone:total:]
// Type encoding: f40@0:8^q16^Q24^Q32
// Implementation: 0x106ed6d0c

// -[GCDAsyncSocket maybeDequeueRead]
// Type encoding: v16@0:8
// Implementation: 0x106ed6ec4

// -[GCDAsyncSocket flushSSLBuffers]
// Type encoding: v16@0:8
// Implementation: 0x106ed6ff4

// -[GCDAsyncSocket doReadData]
// Type encoding: v16@0:8
// Implementation: 0x106ed71f8

// -[GCDAsyncSocket doReadEOF]
// Type encoding: v16@0:8
// Implementation: 0x106ed7b5c

// -[GCDAsyncSocket completeCurrentRead]
// Type encoding: v16@0:8
// Implementation: 0x106ed7d8c

// -[GCDAsyncSocket endCurrentRead]
// Type encoding: v16@0:8
// Implementation: 0x106ed7f54

// -[GCDAsyncSocket setupReadTimerWithTimeout:]
// Type encoding: v24@0:8d16
// Implementation: 0x106ed7f90

// -[GCDAsyncSocket doReadTimeout]
// Type encoding: v16@0:8
// Implementation: 0x106ed80dc

// -[GCDAsyncSocket doReadTimeoutWithExtension:]
// Type encoding: v24@0:8d16
// Implementation: 0x106ed8290

// -[GCDAsyncSocket writeData:withTimeout:tag:]
// Type encoding: v40@0:8@16d24q32
// Implementation: 0x106ed8340

// -[GCDAsyncSocket progressOfWriteReturningTag:bytesDone:total:]
// Type encoding: f40@0:8^q16^Q24^Q32
// Implementation: 0x106ed8464

// -[GCDAsyncSocket maybeDequeueWrite]
// Type encoding: v16@0:8
// Implementation: 0x106ed8618

// -[GCDAsyncSocket doWriteData]
// Type encoding: v16@0:8
// Implementation: 0x106ed8714

// -[GCDAsyncSocket completeCurrentWrite]
// Type encoding: v16@0:8
// Implementation: 0x106ed8c28

// -[GCDAsyncSocket endCurrentWrite]
// Type encoding: v16@0:8
// Implementation: 0x106ed8d1c

// -[GCDAsyncSocket setupWriteTimerWithTimeout:]
// Type encoding: v24@0:8d16
// Implementation: 0x106ed8d58

// -[GCDAsyncSocket doWriteTimeout]
// Type encoding: v16@0:8
// Implementation: 0x106ed8ea4

// -[GCDAsyncSocket doWriteTimeoutWithExtension:]
// Type encoding: v24@0:8d16
// Implementation: 0x106ed9054

// -[GCDAsyncSocket startTLS:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ed9104

// -[GCDAsyncSocket maybeStartTLS]
// Type encoding: v16@0:8
// Implementation: 0x106ed9244

// -[GCDAsyncSocket sslReadWithBuffer:length:]
// Type encoding: i32@0:8^v16^Q24
// Implementation: 0x106ed932c

// -[GCDAsyncSocket sslWriteWithBuffer:length:]
// Type encoding: i32@0:8r^v16^Q24
// Implementation: 0x106ed94ec

// -[GCDAsyncSocket ssl_startTLS]
// Type encoding: v16@0:8
// Implementation: 0x106ed95b0

// -[GCDAsyncSocket ssl_continueSSLHandshake]
// Type encoding: v16@0:8
// Implementation: 0x106ed9e3c

// -[GCDAsyncSocket ssl_shouldTrustPeer:stateIndex:]
// Type encoding: v24@0:8B16i20
// Implementation: 0x106eda338

// -[GCDAsyncSocket cf_finishSSLHandshake]
// Type encoding: v16@0:8
// Implementation: 0x106eda3b0

// -[GCDAsyncSocket cf_abortSSLHandshake:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eda4c8

// -[GCDAsyncSocket cf_startTLS]
// Type encoding: v16@0:8
// Implementation: 0x106eda4e8

// -[GCDAsyncSocket createReadAndWriteStream]
// Type encoding: B16@0:8
// Implementation: 0x106edab04

// -[GCDAsyncSocket registerForStreamCallbacksIncludingReadWrite:]
// Type encoding: B20@0:8B16
// Implementation: 0x106edac14

// -[GCDAsyncSocket addStreamsToRunLoop]
// Type encoding: B16@0:8
// Implementation: 0x106edaf08

// -[GCDAsyncSocket removeStreamsFromRunLoop]
// Type encoding: v16@0:8
// Implementation: 0x106edafc8

// -[GCDAsyncSocket openStreams]
// Type encoding: B16@0:8
// Implementation: 0x106edb088

// -[GCDAsyncSocket autoDisconnectOnClosedReadStream]
// Type encoding: B16@0:8
// Implementation: 0x106edb0f0

// -[GCDAsyncSocket setAutoDisconnectOnClosedReadStream:]
// Type encoding: v20@0:8B16
// Implementation: 0x106edb1b4

// -[GCDAsyncSocket markSocketQueueTargetQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x106edb270

// -[GCDAsyncSocket unmarkSocketQueueTargetQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x106edb288

// -[GCDAsyncSocket performBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106edb29c

// -[GCDAsyncSocket socketFD]
// Type encoding: i16@0:8
// Implementation: 0x106edb2e4

// -[GCDAsyncSocket socket4FD]
// Type encoding: i16@0:8
// Implementation: 0x106edb324

// -[GCDAsyncSocket socket6FD]
// Type encoding: i16@0:8
// Implementation: 0x106edb358

// -[GCDAsyncSocket readStream]
// Type encoding: ^{__CFReadStream=}16@0:8
// Implementation: 0x106edb38c

// -[GCDAsyncSocket writeStream]
// Type encoding: ^{__CFWriteStream=}16@0:8
// Implementation: 0x106edb3c8

// -[GCDAsyncSocket enableBackgroundingOnSocketWithCaveat:]
// Type encoding: B20@0:8B16
// Implementation: 0x106edb404

// -[GCDAsyncSocket enableBackgroundingOnSocket]
// Type encoding: B16@0:8
// Implementation: 0x106edb4a0

// -[GCDAsyncSocket enableBackgroundingOnSocketWithCaveat]
// Type encoding: B16@0:8
// Implementation: 0x106edb4dc

// -[GCDAsyncSocket sslContext]
// Type encoding: ^{SSLContext=}16@0:8
// Implementation: 0x106edb518

// -[GCDAsyncSocket .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106edbd20

// +[GCDAsyncSocket socketFromConnectedSocketFD:socketQueue:error:]
// Type encoding: @36@0:8i16@20^@28
// Implementation: 0x106ecf0ec

// +[GCDAsyncSocket socketFromConnectedSocketFD:delegate:delegateQueue:error:]
// Type encoding: @44@0:8i16@20@28^@36
// Implementation: 0x106ecf100

// +[GCDAsyncSocket socketFromConnectedSocketFD:delegate:delegateQueue:socketQueue:error:]
// Type encoding: @52@0:8i16@20@28@36^@44
// Implementation: 0x106ecf10c

// +[GCDAsyncSocket gaiError:]
// Type encoding: @20@0:8i16
// Implementation: 0x106ed4450

// +[GCDAsyncSocket ignore:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eda65c

// +[GCDAsyncSocket startCFStreamThreadIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106eda660

// +[GCDAsyncSocket stopCFStreamThreadIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106eda7b4

// +[GCDAsyncSocket cfstreamThread]
// Type encoding: v16@0:8
// Implementation: 0x106eda8e4

// +[GCDAsyncSocket scheduleCFStreams:]
// Type encoding: v24@0:8@16
// Implementation: 0x106edaa34

// +[GCDAsyncSocket unscheduleCFStreams:]
// Type encoding: v24@0:8@16
// Implementation: 0x106edaa9c

// +[GCDAsyncSocket lookupHost:port:error:]
// Type encoding: @36@0:8@16S24^@28
// Implementation: 0x106edb544

// +[GCDAsyncSocket hostFromSockaddr4:]
// Type encoding: @24@0:8r^{sockaddr_in=CCS{in_addr=I}[8c]}16
// Implementation: 0x106edb858

// +[GCDAsyncSocket hostFromSockaddr6:]
// Type encoding: @24@0:8r^{sockaddr_in6=CCSI{in6_addr=(?=[16C][8S][4I])}I}16
// Implementation: 0x106edb8d4

// +[GCDAsyncSocket portFromSockaddr4:]
// Type encoding: S24@0:8r^{sockaddr_in=CCS{in_addr=I}[8c]}16
// Implementation: 0x106edb950

// +[GCDAsyncSocket portFromSockaddr6:]
// Type encoding: S24@0:8r^{sockaddr_in6=CCSI{in6_addr=(?=[16C][8S][4I])}I}16
// Implementation: 0x106edb960

// +[GCDAsyncSocket urlFromSockaddrUN:]
// Type encoding: @24@0:8r^{sockaddr_un=CC[104c]}16
// Implementation: 0x106edb970

// +[GCDAsyncSocket hostFromAddress:]
// Type encoding: @24@0:8@16
// Implementation: 0x106edb9cc

// +[GCDAsyncSocket portFromAddress:]
// Type encoding: S24@0:8@16
// Implementation: 0x106edba38

// +[GCDAsyncSocket isIPv4Address:]
// Type encoding: B24@0:8@16
// Implementation: 0x106edba70

// +[GCDAsyncSocket isIPv6Address:]
// Type encoding: B24@0:8@16
// Implementation: 0x106edbad4

// +[GCDAsyncSocket getHost:port:fromAddress:]
// Type encoding: B40@0:8^@16^S24@32
// Implementation: 0x106edbb38

// +[GCDAsyncSocket getHost:port:family:fromAddress:]
// Type encoding: B48@0:8^@16^S24*32@40
// Implementation: 0x106edbb44

// +[GCDAsyncSocket CRLFData]
// Type encoding: @16@0:8
// Implementation: 0x106edbcc0

// +[GCDAsyncSocket CRData]
// Type encoding: @16@0:8
// Implementation: 0x106edbcd8

// +[GCDAsyncSocket LFData]
// Type encoding: @16@0:8
// Implementation: 0x106edbcf0

// +[GCDAsyncSocket ZeroData]
// Type encoding: @16@0:8
// Implementation: 0x106edbd08

@end
