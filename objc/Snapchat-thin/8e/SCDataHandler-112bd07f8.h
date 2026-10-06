// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDataHandler
// Superclass: NSObject
// Address: 0x112bd07f8

@interface SCDataHandler

// Property: atomicData; attributes: T@,&,V_atomicData
// Property: data; attributes: T@,C,N
// Property: isLoading; attributes: TB,R,N
// Property: canLoad; attributes: TB,R,N
// Property: needsUpdate; attributes: TB,R,N
// Property: wasLoadedOnce; attributes: TB,R,N
// Property: lastLoadError; attributes: T@"NSError",R,N,V_lastLoadError
// Property: autoRefreshTimeInterval; attributes: Td,R,N,V_autoRefreshTimeInterval
// Property: updatesOnAppLaunch; attributes: TB,R,N,V_updatesOnAppLaunch
// Property: loader; attributes: T@"<SCDataHandlerLoader>",&,N,V_loader
// Property: cache; attributes: T@"<SCDataHandlerCache>",&,N,V_cache
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDataHandler initWithAutoRefreshTimeInterval:updatesOnAppLaunch:]
// Type encoding: @28@0:8d16B24
// Implementation: 0x1008195c0

// -[SCDataHandler _applicationDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x108f2366c

// -[SCDataHandler _updateOnBackgroundThread]
// Type encoding: v16@0:8
// Implementation: 0x108f23680

// -[SCDataHandler _removeRefresh]
// Type encoding: v16@0:8
// Implementation: 0x100c68b34

// -[SCDataHandler _scheduleRefreshIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10081b828

// -[SCDataHandler _cancelLoadingOperation]
// Type encoding: v16@0:8
// Implementation: 0x108f23730

// -[SCDataHandler _cancelLoadingIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x108f23770

// -[SCDataHandler _didRemoveDataObserver]
// Type encoding: v16@0:8
// Implementation: 0x108f237b0

// -[SCDataHandler _didAddDataObserver]
// Type encoding: v16@0:8
// Implementation: 0x10081b774

// -[SCDataHandler _updateCache]
// Type encoding: v16@0:8
// Implementation: 0x100c68b90

// -[SCDataHandler dataDidChange]
// Type encoding: v16@0:8
// Implementation: 0x100c68b60

// -[SCDataHandler _notifyDataDidChange]
// Type encoding: v16@0:8
// Implementation: 0x100c68b84

// -[SCDataHandler _cacheDidLoadData:metadata:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x100c8101c

// -[SCDataHandler populateWithData:nextPageInfo:wasRefreshed:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x100c689cc

// -[SCDataHandler _doPopulateWithData:nextPageInfo:wasRefreshed:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x100c689f0

// -[SCDataHandler _didLoadData:nextPageInfo:wasRefreshed:error:]
// Type encoding: v44@0:8@16@24B32@36
// Implementation: 0x108f2386c

// -[SCDataHandler addObserverWithBlock:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10081b568

// -[SCDataHandler addLoadingObserverWithBlock:]
// Type encoding: @24@0:8@?16
// Implementation: 0x108f2392c

// -[SCDataHandler waitUntilDataReadyWithBlock:]
// Type encoding: @24@0:8@?16
// Implementation: 0x108f23934

// -[SCDataHandler removeAllObservers]
// Type encoding: v16@0:8
// Implementation: 0x108f23be0

// -[SCDataHandler setNeedsUpdate]
// Type encoding: v16@0:8
// Implementation: 0x108f23c08

// -[SCDataHandler loadIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10081ba74

// -[SCDataHandler data]
// Type encoding: @16@0:8
// Implementation: 0x10081b3a0

// -[SCDataHandler setData:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f23de0

// -[SCDataHandler isLoading]
// Type encoding: B16@0:8
// Implementation: 0x10081bc68

// -[SCDataHandler setIsLoading:]
// Type encoding: v20@0:8B16
// Implementation: 0x10081bcf8

// -[SCDataHandler shouldLoad]
// Type encoding: B16@0:8
// Implementation: 0x10081ba14

// -[SCDataHandler canLoad]
// Type encoding: B16@0:8
// Implementation: 0x10081bc9c

// -[SCDataHandler wasLoadedOnce]
// Type encoding: B16@0:8
// Implementation: 0x108f23e04

// -[SCDataHandler needsUpdate]
// Type encoding: B16@0:8
// Implementation: 0x100c8169c

// -[SCDataHandler timeIntervalBeforeExpiration]
// Type encoding: d16@0:8
// Implementation: 0x10081b940

// -[SCDataHandler dataHandlerObserverListDidRemoveObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f23e0c

// -[SCDataHandler lastLoadError]
// Type encoding: @16@0:8
// Implementation: 0x108f23e10

// -[SCDataHandler autoRefreshTimeInterval]
// Type encoding: d16@0:8
// Implementation: 0x108f23e18

// -[SCDataHandler updatesOnAppLaunch]
// Type encoding: B16@0:8
// Implementation: 0x108f23e20

// -[SCDataHandler loader]
// Type encoding: @16@0:8
// Implementation: 0x108f23e28

// -[SCDataHandler setLoader:]
// Type encoding: v24@0:8@16
// Implementation: 0x10081b370

// -[SCDataHandler cache]
// Type encoding: @16@0:8
// Implementation: 0x108f23e30

// -[SCDataHandler setCache:]
// Type encoding: v24@0:8@16
// Implementation: 0x10081b1f4

// -[SCDataHandler atomicData]
// Type encoding: @16@0:8
// Implementation: 0x10081b3a4

// -[SCDataHandler setAtomicData:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c68af4

// -[SCDataHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108f23e38

@end
