// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCShortcutsDataFetcherImpl
// Superclass: NSObject
// Address: 0x112affe78

@interface SCShortcutsDataFetcherImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCShortcutsDataFetcherImpl initWithSendToListsDataFetcher:circumstanceEngine:sendToExperimentConfiguration:shortcutsDataPluginsFuture:performerProvider:shortcutsInteractionMutator:pluginRanker:myAISendToRankingVariant:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64Q72
// Implementation: 0x1067f3f84

// -[SCShortcutsDataFetcherImpl shortcutsForSource:]
// Type encoding: @24@0:8q16
// Implementation: 0x1067f42ac

// -[SCShortcutsDataFetcherImpl shortcutResultsForSource:]
// Type encoding: @24@0:8q16
// Implementation: 0x1067f4424

// -[SCShortcutsDataFetcherImpl shortcutRecipientsForShortcutId:source:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1067f459c

// -[SCShortcutsDataFetcherImpl pausePluginUpdatesForSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x1067f473c

// -[SCShortcutsDataFetcherImpl resumePluginUpdatesForSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x1067f4848

// -[SCShortcutsDataFetcherImpl shortcutWasDeselected:source:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1067f4954

// -[SCShortcutsDataFetcherImpl shortcutWasSelected:source:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1067f49b8

// -[SCShortcutsDataFetcherImpl registeredPluginsForSource:]
// Type encoding: @24@0:8q16
// Implementation: 0x1067f4a1c

// -[SCShortcutsDataFetcherImpl _pausePluginObservableUpdatesWithSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x1067f4a20

// -[SCShortcutsDataFetcherImpl _resumePluginObservableUpdatesWithSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x1067f4b50

// -[SCShortcutsDataFetcherImpl _routeSelectionToPluginForShortcutId:source:action:]
// Type encoding: v40@0:8@16q24@?32
// Implementation: 0x1067f4c80

// -[SCShortcutsDataFetcherImpl _shortcutRecipientsForShortcutId:source:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1067f4fd4

// -[SCShortcutsDataFetcherImpl _shouldFilterRecipientsForSource:]
// Type encoding: B24@0:8q16
// Implementation: 0x1067f53a8

// -[SCShortcutsDataFetcherImpl _filterTeamSnapchatWithRecipients:]
// Type encoding: @24@0:8@16
// Implementation: 0x1067f53b4

// -[SCShortcutsDataFetcherImpl _customAndNonPluginShortcutRecipientsObservableForShortcutId:source:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1067f54d8

// -[SCShortcutsDataFetcherImpl _pluginShortcutRecipientsObservableForShortcutId:source:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1067f5818

// -[SCShortcutsDataFetcherImpl _shortcutsForSource:shouldReturnRecipientCount:]
// Type encoding: @28@0:8q16B24
// Implementation: 0x1067f5b68

// -[SCShortcutsDataFetcherImpl _sortShortcutsWithPluginShortcuts:nonPluginContextualShortcuts:customShortcuts:source:]
// Type encoding: @48@0:8@16@24@32q40
// Implementation: 0x1067f5f9c

// -[SCShortcutsDataFetcherImpl _sendToSortShortcutsWithPluginShortcuts:nonPluginContextualShortcuts:customShortcuts:source:]
// Type encoding: @48@0:8@16@24@32q40
// Implementation: 0x1067f60bc

// -[SCShortcutsDataFetcherImpl _shortcutPluginsForSource:]
// Type encoding: @24@0:8q16
// Implementation: 0x1067f63b8

// -[SCShortcutsDataFetcherImpl _customAndNonPluginContextualShortcutsObservableForSource:]
// Type encoding: @24@0:8q16
// Implementation: 0x1067f6618

// -[SCShortcutsDataFetcherImpl _customAndNonPluginContextualShortcutsToEmitWithListDataModels:source:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1067f67e4

// -[SCShortcutsDataFetcherImpl _shortcutIdToRecipientsObservableMapWithShortcutDataPlugins:source:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1067f6848

// -[SCShortcutsDataFetcherImpl _pluginShortcutsObservableForSource:]
// Type encoding: @24@0:8q16
// Implementation: 0x1067f6ce4

// -[SCShortcutsDataFetcherImpl _shortcutWithListDataModel:source:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1067f7610

// -[SCShortcutsDataFetcherImpl _shortcutIconWithShortcutName:]
// Type encoding: @24@0:8@16
// Implementation: 0x1067f7754

// -[SCShortcutsDataFetcherImpl _shortcutRecipientsWithListDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x1067f7820

// -[SCShortcutsDataFetcherImpl _createPerformerWithPerformerProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x1067f7a44

// -[SCShortcutsDataFetcherImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1067f7aa0

@end
