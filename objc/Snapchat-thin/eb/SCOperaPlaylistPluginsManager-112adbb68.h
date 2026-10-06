// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaPlaylistPluginsManager
// Superclass: NSObject
// Address: 0x112adbb68

@interface SCOperaPlaylistPluginsManager

// Property: mediaTypeConfigurations; attributes: T@"NSDictionary",R,C,N,V_mediaTypeConfigurations
// Property: extraPropertiesProviders; attributes: T@"NSArray<SCOperaPlaylistItemExtraPropertiesProvider>",R,C,N,V_extraPropertiesProviders
// Property: mediaResolver; attributes: T@"<SCOperaMediaResolving>",R,N,V_mediaResolver
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOperaPlaylistPluginsManager initWithPlaylistPlugins:mediaResolverService:trackerService:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10635c890

// -[SCOperaPlaylistPluginsManager _setUpPlugins:]
// Type encoding: v24@0:8@16
// Implementation: 0x10635cc0c

// -[SCOperaPlaylistPluginsManager _setUpMediaPluginsWithService:operaTrackerService:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10635ce04

// -[SCOperaPlaylistPluginsManager _setUpMediaResolverPluginsWithService:operaTrackerService:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10635ce28

// -[SCOperaPlaylistPluginsManager _setUpMediaTypeConfigurations]
// Type encoding: v16@0:8
// Implementation: 0x10635d0fc

// -[SCOperaPlaylistPluginsManager _pluginMediaTypeConfigurations:]
// Type encoding: @24@0:8@16
// Implementation: 0x10635d280

// -[SCOperaPlaylistPluginsManager _builtInMediaResolverEnabledOnDataSource:]
// Type encoding: B24@0:8@16
// Implementation: 0x10635d338

// -[SCOperaPlaylistPluginsManager _setUpExtraPropertiesProviders]
// Type encoding: v16@0:8
// Implementation: 0x10635d3a0

// -[SCOperaPlaylistPluginsManager _validateConfigurationUpdate:forPlugin:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10635d544

// -[SCOperaPlaylistPluginsManager updateOperaConfiguration:]
// Type encoding: @24@0:8@16
// Implementation: 0x10635d55c

// -[SCOperaPlaylistPluginsManager didFinishOperaConfigurationSetup:]
// Type encoding: v24@0:8@16
// Implementation: 0x10635d6b8

// -[SCOperaPlaylistPluginsManager updateOperaDependencies:]
// Type encoding: @24@0:8@16
// Implementation: 0x10635d7f0

// -[SCOperaPlaylistPluginsManager addEventListenersWithEventAnnouncing:]
// Type encoding: v24@0:8@16
// Implementation: 0x10635d93c

// -[SCOperaPlaylistPluginsManager setOperaEventSubscriber:]
// Type encoding: v24@0:8@16
// Implementation: 0x10635db30

// -[SCOperaPlaylistPluginsManager setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10635dc88

// -[SCOperaPlaylistPluginsManager setOperaControlling:]
// Type encoding: v24@0:8@16
// Implementation: 0x10635ddc0

// -[SCOperaPlaylistPluginsManager teardown]
// Type encoding: v16@0:8
// Implementation: 0x10635def8

// -[SCOperaPlaylistPluginsManager logShakeToReportState:]
// Type encoding: v24@0:8@16
// Implementation: 0x10635e038

// -[SCOperaPlaylistPluginsManager mediaTypeConfigurations]
// Type encoding: @16@0:8
// Implementation: 0x10635e3f0

// -[SCOperaPlaylistPluginsManager extraPropertiesProviders]
// Type encoding: @16@0:8
// Implementation: 0x10635e3f8

// -[SCOperaPlaylistPluginsManager mediaResolver]
// Type encoding: @16@0:8
// Implementation: 0x10635e400

// -[SCOperaPlaylistPluginsManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10635e408

@end
