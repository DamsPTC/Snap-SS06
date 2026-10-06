// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GCDAsyncUdpSocket
// Superclass: NSObject
// Address: 0x112b449d8

@interface GCDAsyncUdpSocket


// -[GCDAsyncUdpSocket init]
// Type encoding: @16@0:8
// Implementation: 0x106edc130

// -[GCDAsyncUdpSocket initWithSocketQueue:]
// Type encoding: @24@0:8@16
// Implementation: 0x106edc140

// -[GCDAsyncUdpSocket initWithDelegate:delegateQueue:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106edc150

// -[GCDAsyncUdpSocket initWithDelegate:delegateQueue:socketQueue:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106edc158

// -[GCDAsyncUdpSocket dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106edc2f0

// -[GCDAsyncUdpSocket delegate]
// Type encoding: @16@0:8
// Implementation: 0x106edc3e0

// -[GCDAsyncUdpSocket setDelegate:synchronously:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106edc504

// -[GCDAsyncUdpSocket setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106edc5e0

// -[GCDAsyncUdpSocket synchronouslySetDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106edc5e8

// -[GCDAsyncUdpSocket delegateQueue]
// Type encoding: @16@0:8
// Implementation: 0x106edc5f0

// -[GCDAsyncUdpSocket setDelegateQueue:synchronously:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106edc6f4

// -[GCDAsyncUdpSocket setDelegateQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x106edc7f0

// -[GCDAsyncUdpSocket synchronouslySetDelegateQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x106edc7f8

// -[GCDAsyncUdpSocket getDelegate:delegateQueue:]
// Type encoding: v32@0:8^@16^@24
// Implementation: 0x106edc800

// -[GCDAsyncUdpSocket setDelegate:delegateQueue:synchronously:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x106edc998

// -[GCDAsyncUdpSocket setDelegate:delegateQueue:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106edcad8

// -[GCDAsyncUdpSocket synchronouslySetDelegate:delegateQueue:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106edcae0

// -[GCDAsyncUdpSocket isIPv4Enabled]
// Type encoding: B16@0:8
// Implementation: 0x106edcae8

// -[GCDAsyncUdpSocket setIPv4Enabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106edcbdc

// -[GCDAsyncUdpSocket isIPv6Enabled]
// Type encoding: B16@0:8
// Implementation: 0x106edcc8c

// -[GCDAsyncUdpSocket setIPv6Enabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106edcd80

// -[GCDAsyncUdpSocket isIPv4Preferred]
// Type encoding: B16@0:8
// Implementation: 0x106edce3c

// -[GCDAsyncUdpSocket isIPv6Preferred]
// Type encoding: B16@0:8
// Implementation: 0x106edcf2c

// -[GCDAsyncUdpSocket isIPVersionNeutral]
// Type encoding: B16@0:8
// Implementation: 0x106edd01c

// -[GCDAsyncUdpSocket setPreferIPv4]
// Type encoding: v16@0:8
// Implementation: 0x106edd110

// -[GCDAsyncUdpSocket setPreferIPv6]
// Type encoding: v16@0:8
// Implementation: 0x106edd1c4

// -[GCDAsyncUdpSocket setIPVersionNeutral]
// Type encoding: v16@0:8
// Implementation: 0x106edd278

// -[GCDAsyncUdpSocket maxReceiveIPv4BufferSize]
// Type encoding: S16@0:8
// Implementation: 0x106edd32c

// -[GCDAsyncUdpSocket setMaxReceiveIPv4BufferSize:]
// Type encoding: v20@0:8S16
// Implementation: 0x106edd418

// -[GCDAsyncUdpSocket maxReceiveIPv6BufferSize]
// Type encoding: I16@0:8
// Implementation: 0x106edd4bc

// -[GCDAsyncUdpSocket setMaxReceiveIPv6BufferSize:]
// Type encoding: v20@0:8I16
// Implementation: 0x106edd5a8

// -[GCDAsyncUdpSocket setMaxSendBufferSize:]
// Type encoding: v20@0:8S16
// Implementation: 0x106edd64c

// -[GCDAsyncUdpSocket maxSendBufferSize]
// Type encoding: S16@0:8
// Implementation: 0x106edd6f0

// -[GCDAsyncUdpSocket userData]
// Type encoding: @16@0:8
// Implementation: 0x106edd7dc

// -[GCDAsyncUdpSocket setUserData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106edd90c

// -[GCDAsyncUdpSocket notifyDidConnectToAddress:]
// Type encoding: v24@0:8@16
// Implementation: 0x106edda10

// -[GCDAsyncUdpSocket notifyDidNotConnect:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eddb34

// -[GCDAsyncUdpSocket notifyDidSendDataWithTag:]
// Type encoding: v24@0:8q16
// Implementation: 0x106eddc3c

// -[GCDAsyncUdpSocket notifyDidNotSendDataWithTag:dueToError:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x106eddd24

// -[GCDAsyncUdpSocket notifyDidReceiveData:fromAddress:withFilterContext:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106edde3c

// -[GCDAsyncUdpSocket notifyDidCloseWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eddfa0

// -[GCDAsyncUdpSocket badConfigError:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ede0a8

// -[GCDAsyncUdpSocket badParamError:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ede118

// -[GCDAsyncUdpSocket gaiError:]
// Type encoding: @20@0:8i16
// Implementation: 0x106ede188

// -[GCDAsyncUdpSocket errnoErrorWithReason:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ede23c

// -[GCDAsyncUdpSocket errnoError]
// Type encoding: @16@0:8
// Implementation: 0x106ede344

// -[GCDAsyncUdpSocket sendTimeoutError]
// Type encoding: @16@0:8
// Implementation: 0x106ede34c

// -[GCDAsyncUdpSocket socketClosedError]
// Type encoding: @16@0:8
// Implementation: 0x106ede418

// -[GCDAsyncUdpSocket otherError:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ede4e4

// -[GCDAsyncUdpSocket preOp:]
// Type encoding: B24@0:8^@16
// Implementation: 0x106ede554

// -[GCDAsyncUdpSocket asyncResolveHost:port:withCompletionBlock:]
// Type encoding: v36@0:8@16S24@?28
// Implementation: 0x106ede5e4

// -[GCDAsyncUdpSocket getAddress:error:fromAddresses:]
// Type encoding: i40@0:8^@16^@24@32
// Implementation: 0x106edeafc

// -[GCDAsyncUdpSocket convertIntefaceDescription:port:intoAddress4:address6:]
// Type encoding: v44@0:8@16S24^@28^@36
// Implementation: 0x106edee80

// -[GCDAsyncUdpSocket convertNumericHost:port:intoAddress4:address6:]
// Type encoding: v44@0:8@16S24^@28^@36
// Implementation: 0x106edf1c8

// -[GCDAsyncUdpSocket isConnectedToAddress4:]
// Type encoding: B24@0:8@16
// Implementation: 0x106edf388

// -[GCDAsyncUdpSocket isConnectedToAddress6:]
// Type encoding: B24@0:8@16
// Implementation: 0x106edf3f8

// -[GCDAsyncUdpSocket indexOfInterfaceAddr4:]
// Type encoding: I24@0:8@16
// Implementation: 0x106edf46c

// -[GCDAsyncUdpSocket indexOfInterfaceAddr6:]
// Type encoding: I24@0:8@16
// Implementation: 0x106edf52c

// -[GCDAsyncUdpSocket setupSendAndReceiveSourcesForSocket4]
// Type encoding: v16@0:8
// Implementation: 0x106edf5f0

// -[GCDAsyncUdpSocket setupSendAndReceiveSourcesForSocket6]
// Type encoding: v16@0:8
// Implementation: 0x106edf87c

// -[GCDAsyncUdpSocket createSocket4:socket6:error:]
// Type encoding: B32@0:8B16B20^@24
// Implementation: 0x106edfb08

// -[GCDAsyncUdpSocket createSockets:]
// Type encoding: B24@0:8^@16
// Implementation: 0x106edfdd4

// -[GCDAsyncUdpSocket suspendSend4Source]
// Type encoding: v16@0:8
// Implementation: 0x106edfe1c

// -[GCDAsyncUdpSocket suspendSend6Source]
// Type encoding: v16@0:8
// Implementation: 0x106edfe58

// -[GCDAsyncUdpSocket resumeSend4Source]
// Type encoding: v16@0:8
// Implementation: 0x106edfe94

// -[GCDAsyncUdpSocket resumeSend6Source]
// Type encoding: v16@0:8
// Implementation: 0x106edfed0

// -[GCDAsyncUdpSocket suspendReceive4Source]
// Type encoding: v16@0:8
// Implementation: 0x106edff0c

// -[GCDAsyncUdpSocket suspendReceive6Source]
// Type encoding: v16@0:8
// Implementation: 0x106edff48

// -[GCDAsyncUdpSocket resumeReceive4Source]
// Type encoding: v16@0:8
// Implementation: 0x106edff84

// -[GCDAsyncUdpSocket resumeReceive6Source]
// Type encoding: v16@0:8
// Implementation: 0x106edffc0

// -[GCDAsyncUdpSocket closeSocket4]
// Type encoding: v16@0:8
// Implementation: 0x106edfffc

// -[GCDAsyncUdpSocket closeSocket6]
// Type encoding: v16@0:8
// Implementation: 0x106ee0090

// -[GCDAsyncUdpSocket closeSockets]
// Type encoding: v16@0:8
// Implementation: 0x106ee0124

// -[GCDAsyncUdpSocket getLocalAddress:host:port:forSocket:withFamily:]
// Type encoding: B48@0:8^@16^@24^S32i40i44
// Implementation: 0x106ee0158

// -[GCDAsyncUdpSocket maybeUpdateCachedLocalAddress4Info]
// Type encoding: v16@0:8
// Implementation: 0x106ee0304

// -[GCDAsyncUdpSocket maybeUpdateCachedLocalAddress6Info]
// Type encoding: v16@0:8
// Implementation: 0x106ee03d0

// -[GCDAsyncUdpSocket localAddress]
// Type encoding: @16@0:8
// Implementation: 0x106ee049c

// -[GCDAsyncUdpSocket localHost]
// Type encoding: @16@0:8
// Implementation: 0x106ee066c

// -[GCDAsyncUdpSocket localPort]
// Type encoding: S16@0:8
// Implementation: 0x106ee083c

// -[GCDAsyncUdpSocket localAddress_IPv4]
// Type encoding: @16@0:8
// Implementation: 0x106ee09dc

// -[GCDAsyncUdpSocket localHost_IPv4]
// Type encoding: @16@0:8
// Implementation: 0x106ee0b90

// -[GCDAsyncUdpSocket localPort_IPv4]
// Type encoding: S16@0:8
// Implementation: 0x106ee0d44

// -[GCDAsyncUdpSocket localAddress_IPv6]
// Type encoding: @16@0:8
// Implementation: 0x106ee0ec8

// -[GCDAsyncUdpSocket localHost_IPv6]
// Type encoding: @16@0:8
// Implementation: 0x106ee107c

// -[GCDAsyncUdpSocket localPort_IPv6]
// Type encoding: S16@0:8
// Implementation: 0x106ee1230

// -[GCDAsyncUdpSocket maybeUpdateCachedConnectedAddressInfo]
// Type encoding: v16@0:8
// Implementation: 0x106ee13b4

// -[GCDAsyncUdpSocket connectedAddress]
// Type encoding: @16@0:8
// Implementation: 0x106ee1560

// -[GCDAsyncUdpSocket connectedHost]
// Type encoding: @16@0:8
// Implementation: 0x106ee1714

// -[GCDAsyncUdpSocket connectedPort]
// Type encoding: S16@0:8
// Implementation: 0x106ee18c8

// -[GCDAsyncUdpSocket isConnected]
// Type encoding: B16@0:8
// Implementation: 0x106ee1a4c

// -[GCDAsyncUdpSocket isClosed]
// Type encoding: B16@0:8
// Implementation: 0x106ee1b3c

// -[GCDAsyncUdpSocket isIPv4]
// Type encoding: B16@0:8
// Implementation: 0x106ee1c34

// -[GCDAsyncUdpSocket isIPv6]
// Type encoding: B16@0:8
// Implementation: 0x106ee1d54

// -[GCDAsyncUdpSocket preBind:]
// Type encoding: B24@0:8^@16
// Implementation: 0x106ee1e74

// -[GCDAsyncUdpSocket bindToPort:error:]
// Type encoding: B28@0:8S16^@20
// Implementation: 0x106ee1f18

// -[GCDAsyncUdpSocket bindToPort:interface:error:]
// Type encoding: B36@0:8S16@20^@28
// Implementation: 0x106ee1f24

// -[GCDAsyncUdpSocket bindToAddress:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x106ee232c

// -[GCDAsyncUdpSocket preConnect:]
// Type encoding: B24@0:8^@16
// Implementation: 0x106ee2760

// -[GCDAsyncUdpSocket connectToHost:onPort:error:]
// Type encoding: B36@0:8@16S24^@28
// Implementation: 0x106ee27f0

// -[GCDAsyncUdpSocket connectToAddress:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x106ee2bac

// -[GCDAsyncUdpSocket maybeConnect]
// Type encoding: v16@0:8
// Implementation: 0x106ee2eb8

// -[GCDAsyncUdpSocket connectWithAddress4:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x106ee30a0

// -[GCDAsyncUdpSocket connectWithAddress6:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x106ee3164

// -[GCDAsyncUdpSocket preJoin:]
// Type encoding: B24@0:8^@16
// Implementation: 0x106ee3228

// -[GCDAsyncUdpSocket joinMulticastGroup:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x106ee32ac

// -[GCDAsyncUdpSocket joinMulticastGroup:onInterface:error:]
// Type encoding: B40@0:8@16@24^@32
// Implementation: 0x106ee32b8

// -[GCDAsyncUdpSocket leaveMulticastGroup:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x106ee32cc

// -[GCDAsyncUdpSocket leaveMulticastGroup:onInterface:error:]
// Type encoding: B40@0:8@16@24^@32
// Implementation: 0x106ee32d8

// -[GCDAsyncUdpSocket performMulticastRequest:forGroup:onInterface:error:]
// Type encoding: B44@0:8i16@20@28^@36
// Implementation: 0x106ee32ec

// -[GCDAsyncUdpSocket enableReusePort:error:]
// Type encoding: B28@0:8B16^@20
// Implementation: 0x106ee3718

// -[GCDAsyncUdpSocket enableBroadcast:error:]
// Type encoding: B28@0:8B16^@20
// Implementation: 0x106ee39d8

// -[GCDAsyncUdpSocket sendData:withTag:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106ee3c5c

// -[GCDAsyncUdpSocket sendData:withTimeout:tag:]
// Type encoding: v40@0:8@16d24q32
// Implementation: 0x106ee3c64

// -[GCDAsyncUdpSocket sendData:toHost:port:withTimeout:tag:]
// Type encoding: v52@0:8@16@24S32d36q44
// Implementation: 0x106ee3d70

// -[GCDAsyncUdpSocket sendData:toAddress:withTimeout:tag:]
// Type encoding: v48@0:8@16@24d32q40
// Implementation: 0x106ee3f7c

// -[GCDAsyncUdpSocket setSendFilter:withQueue:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x106ee40d0

// -[GCDAsyncUdpSocket setSendFilter:withQueue:isAsynchronous:]
// Type encoding: v36@0:8@?16@24B32
// Implementation: 0x106ee40d8

// -[GCDAsyncUdpSocket maybeDequeueSend]
// Type encoding: v16@0:8
// Implementation: 0x106ee426c

// -[GCDAsyncUdpSocket doPreSend]
// Type encoding: v16@0:8
// Implementation: 0x106ee43b0

// -[GCDAsyncUdpSocket doSend]
// Type encoding: v16@0:8
// Implementation: 0x106ee480c

// -[GCDAsyncUdpSocket endCurrentSend]
// Type encoding: v16@0:8
// Implementation: 0x106ee49b4

// -[GCDAsyncUdpSocket doSendTimeout]
// Type encoding: v16@0:8
// Implementation: 0x106ee49f0

// -[GCDAsyncUdpSocket setupSendTimerWithTimeout:]
// Type encoding: v24@0:8d16
// Implementation: 0x106ee4a50

// -[GCDAsyncUdpSocket receiveOnce:]
// Type encoding: B24@0:8^@16
// Implementation: 0x106ee4b48

// -[GCDAsyncUdpSocket beginReceiving:]
// Type encoding: B24@0:8^@16
// Implementation: 0x106ee4d98

// -[GCDAsyncUdpSocket pauseReceiving]
// Type encoding: v16@0:8
// Implementation: 0x106ee4fe8

// -[GCDAsyncUdpSocket setReceiveFilter:withQueue:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x106ee50dc

// -[GCDAsyncUdpSocket setReceiveFilter:withQueue:isAsynchronous:]
// Type encoding: v36@0:8@?16@24B32
// Implementation: 0x106ee50e4

// -[GCDAsyncUdpSocket doReceive]
// Type encoding: v16@0:8
// Implementation: 0x106ee5278

// -[GCDAsyncUdpSocket doReceiveEOF]
// Type encoding: v16@0:8
// Implementation: 0x106ee5b08

// -[GCDAsyncUdpSocket closeWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ee5b44

// -[GCDAsyncUdpSocket close]
// Type encoding: v16@0:8
// Implementation: 0x106ee5bc0

// -[GCDAsyncUdpSocket closeAfterSending]
// Type encoding: v16@0:8
// Implementation: 0x106ee5c84

// -[GCDAsyncUdpSocket createReadAndWriteStreams:]
// Type encoding: B24@0:8^@16
// Implementation: 0x106ee6024

// -[GCDAsyncUdpSocket registerForStreamCallbacks:]
// Type encoding: B24@0:8^@16
// Implementation: 0x106ee61f8

// -[GCDAsyncUdpSocket addStreamsToRunLoop:]
// Type encoding: B24@0:8^@16
// Implementation: 0x106ee65a8

// -[GCDAsyncUdpSocket openStreams:]
// Type encoding: B24@0:8^@16
// Implementation: 0x106ee6608

// -[GCDAsyncUdpSocket removeStreamsFromRunLoop]
// Type encoding: v16@0:8
// Implementation: 0x106ee66d8

// -[GCDAsyncUdpSocket closeReadAndWriteStreams]
// Type encoding: v16@0:8
// Implementation: 0x106ee6728

// -[GCDAsyncUdpSocket applicationWillEnterForeground:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ee67f4

// -[GCDAsyncUdpSocket markSocketQueueTargetQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ee68bc

// -[GCDAsyncUdpSocket unmarkSocketQueueTargetQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ee68d4

// -[GCDAsyncUdpSocket performBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106ee68e8

// -[GCDAsyncUdpSocket socketFD]
// Type encoding: i16@0:8
// Implementation: 0x106ee6930

// -[GCDAsyncUdpSocket socket4FD]
// Type encoding: i16@0:8
// Implementation: 0x106ee6970

// -[GCDAsyncUdpSocket socket6FD]
// Type encoding: i16@0:8
// Implementation: 0x106ee69a4

// -[GCDAsyncUdpSocket readStream]
// Type encoding: ^{__CFReadStream=}16@0:8
// Implementation: 0x106ee69d8

// -[GCDAsyncUdpSocket writeStream]
// Type encoding: ^{__CFWriteStream=}16@0:8
// Implementation: 0x106ee6a30

// -[GCDAsyncUdpSocket enableBackgroundingOnSockets]
// Type encoding: B16@0:8
// Implementation: 0x106ee6a88

// -[GCDAsyncUdpSocket .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ee6e28

// +[GCDAsyncUdpSocket ignore:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ee5d70

// +[GCDAsyncUdpSocket startListenerThreadIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106ee5d74

// +[GCDAsyncUdpSocket listenerThread]
// Type encoding: v16@0:8
// Implementation: 0x106ee5e34

// +[GCDAsyncUdpSocket addStreamListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ee5f04

// +[GCDAsyncUdpSocket removeStreamListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ee5f94

// +[GCDAsyncUdpSocket hostFromSockaddr4:]
// Type encoding: @24@0:8r^{sockaddr_in=CCS{in_addr=I}[8c]}16
// Implementation: 0x106ee6a90

// +[GCDAsyncUdpSocket hostFromSockaddr6:]
// Type encoding: @24@0:8r^{sockaddr_in6=CCSI{in6_addr=(?=[16C][8S][4I])}I}16
// Implementation: 0x106ee6b0c

// +[GCDAsyncUdpSocket portFromSockaddr4:]
// Type encoding: S24@0:8r^{sockaddr_in=CCS{in_addr=I}[8c]}16
// Implementation: 0x106ee6b88

// +[GCDAsyncUdpSocket portFromSockaddr6:]
// Type encoding: S24@0:8r^{sockaddr_in6=CCSI{in6_addr=(?=[16C][8S][4I])}I}16
// Implementation: 0x106ee6b98

// +[GCDAsyncUdpSocket hostFromAddress:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ee6ba8

// +[GCDAsyncUdpSocket portFromAddress:]
// Type encoding: S24@0:8@16
// Implementation: 0x106ee6bf0

// +[GCDAsyncUdpSocket familyFromAddress:]
// Type encoding: i24@0:8@16
// Implementation: 0x106ee6c24

// +[GCDAsyncUdpSocket isIPv4Address:]
// Type encoding: B24@0:8@16
// Implementation: 0x106ee6c58

// +[GCDAsyncUdpSocket isIPv6Address:]
// Type encoding: B24@0:8@16
// Implementation: 0x106ee6c94

// +[GCDAsyncUdpSocket getHost:port:fromAddress:]
// Type encoding: B40@0:8^@16^S24@32
// Implementation: 0x106ee6cd0

// +[GCDAsyncUdpSocket getHost:port:family:fromAddress:]
// Type encoding: B48@0:8^@16^S24^i32@40
// Implementation: 0x106ee6cdc

@end
