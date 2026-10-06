// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesStoryViewModel
// Superclass: SCMemoriesSnapGroupViewModel
// Address: 0x112b3bb08

@interface SCMemoriesStoryViewModel

// Property: page; attributes: Tq,N,V_page
// Property: type; attributes: Tq,R,N,V_type
// Property: subscreenStoryThumbnailSnaps; attributes: T@"NSArray",R,N,V_subscreenStoryThumbnailSnaps
// Property: subscreenStoryCellTitle; attributes: T@"NSString",R,N,V_subscreenStoryCellTitle
// Property: subscreenStoryCellSubtitle; attributes: T@"NSString",R,N,V_subscreenStoryCellSubtitle

// -[SCMemoriesStoryViewModel initWithCellViewModels:page:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x106e28724

// -[SCMemoriesStoryViewModel initWithSubscreenStoryThumbnailSnaps:subscreenStoryCellTitle:subscreenStoryCellSubtitle:consolidatedStoriesLatestEntry:type:]
// Type encoding: @56@0:8@16@24@32@40q48
// Implementation: 0x106e28754

// -[SCMemoriesStoryViewModel _initWithCellViewModels:page:type:subscreenStoryThumbnailSnaps:subscreenStoryCellTitle:subscreenStoryCellSubtitle:consolidatedStoriesLatestEntry:]
// Type encoding: @72@0:8@16q24q32@40@48@56@64
// Implementation: 0x106e287c8

// -[SCMemoriesStoryViewModel entry]
// Type encoding: @16@0:8
// Implementation: 0x106e28a2c

// -[SCMemoriesStoryViewModel allSnaps]
// Type encoding: @16@0:8
// Implementation: 0x106e28bc0

// -[SCMemoriesStoryViewModel toggleExpand]
// Type encoding: v16@0:8
// Implementation: 0x106e28da8

// -[SCMemoriesStoryViewModel isExpanded]
// Type encoding: B16@0:8
// Implementation: 0x106e28dd8

// -[SCMemoriesStoryViewModel hasMore:]
// Type encoding: B24@0:8q16
// Implementation: 0x106e28e08

// -[SCMemoriesStoryViewModel isCompatible]
// Type encoding: B16@0:8
// Implementation: 0x106e28e80

// -[SCMemoriesStoryViewModel subscreenStoryThumbnailSnapsHash]
// Type encoding: @16@0:8
// Implementation: 0x106e290dc

// -[SCMemoriesStoryViewModel page]
// Type encoding: q16@0:8
// Implementation: 0x106e29154

// -[SCMemoriesStoryViewModel setPage:]
// Type encoding: v24@0:8q16
// Implementation: 0x106e29164

// -[SCMemoriesStoryViewModel type]
// Type encoding: q16@0:8
// Implementation: 0x106e29174

// -[SCMemoriesStoryViewModel subscreenStoryThumbnailSnaps]
// Type encoding: @16@0:8
// Implementation: 0x106e29184

// -[SCMemoriesStoryViewModel subscreenStoryCellTitle]
// Type encoding: @16@0:8
// Implementation: 0x106e29194

// -[SCMemoriesStoryViewModel subscreenStoryCellSubtitle]
// Type encoding: @16@0:8
// Implementation: 0x106e291a4

// -[SCMemoriesStoryViewModel .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106e291b4

@end
