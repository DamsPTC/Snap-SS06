// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensProcessingURIServiceProvider
// Superclass: NSObject
// Address: 0x112bbbc18

@interface SCLensProcessingURIServiceProvider

// Property: uriPlugins; attributes: T@"NSSet",R,N,V_uriPlugins
// Property: dirtyFrameProvider; attributes: T@"<SCLensProcessingDirtyFrameProviding>",&,N,V_dirtyFrameProvider
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensProcessingURIServiceProvider initWithPerformer:lensApplicator:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108c98d44

// -[SCLensProcessingURIServiceProvider registerHandlersWithProviders:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c98e0c

// -[SCLensProcessingURIServiceProvider unregisterHandlersWithProviders:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c98f04

// -[SCLensProcessingURIServiceProvider performRequest:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108c98ffc

// -[SCLensProcessingURIServiceProvider reset]
// Type encoding: v16@0:8
// Implementation: 0x108c99530

// -[SCLensProcessingURIServiceProvider _handlerProvidersForScheme:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c996c0

// -[SCLensProcessingURIServiceProvider _registerHandlerProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c99724

// -[SCLensProcessingURIServiceProvider _handlerForScheme:andPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108c99874

// -[SCLensProcessingURIServiceProvider _unregisterHandlerProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c99a2c

// -[SCLensProcessingURIServiceProvider _lensForLensId:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c99b74

// -[SCLensProcessingURIServiceProvider _handlerForRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c99d08

// -[SCLensProcessingURIServiceProvider uriPlugins]
// Type encoding: @16@0:8
// Implementation: 0x108c99eac

// -[SCLensProcessingURIServiceProvider dirtyFrameProvider]
// Type encoding: @16@0:8
// Implementation: 0x108c99eb4

// -[SCLensProcessingURIServiceProvider setDirtyFrameProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c99ebc

// -[SCLensProcessingURIServiceProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108c99eec

@end
