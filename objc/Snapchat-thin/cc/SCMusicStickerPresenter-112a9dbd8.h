// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMusicStickerPresenter
// Superclass: NSObject
// Address: 0x112a9dbd8

@interface SCMusicStickerPresenter

// Property: currentTimeObservable; attributes: T@"SCObservable",&,N,V_currentTimeObservable

// -[SCMusicStickerPresenter initWithStickerContainer:itemViewService:experiments:snapDocEditor:videoTracking:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105d84bf8

// -[SCMusicStickerPresenter preloadMusicStickerForSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d84d54

// -[SCMusicStickerPresenter presentMusicStickerForSelection:selectedMusicStickerData:snapSegmentDuration:previewView:captureMode:isRemovable:]
// Type encoding: v60@0:8@16@24d32@40q48B56
// Implementation: 0x105d84d98

// -[SCMusicStickerPresenter sendTimeObservable:toStickerViewIfNeeded:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d84fd0

// -[SCMusicStickerPresenter getMusicPreviewStickerView]
// Type encoding: @16@0:8
// Implementation: 0x105d85054

// -[SCMusicStickerPresenter setStickersHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x105d85138

// -[SCMusicStickerPresenter setCurrentTimeObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d85178

// -[SCMusicStickerPresenter updateDurationForStickerView:timeRange:]
// Type encoding: v72@0:8@16{?={?=qiIq}{?=qiIq}}24
// Implementation: 0x105d851f0

// -[SCMusicStickerPresenter _stickerViewForPickerSelection:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d852c4

// -[SCMusicStickerPresenter _presentLyricsStickerViewForSelection:snapSegmentDuration:lyricsStickerData:]
// Type encoding: v40@0:8@16d24@32
// Implementation: 0x105d853f4

// -[SCMusicStickerPresenter _presentStickerViewForSelection:selectedMusicStickerData:previewView:isRemovable:captureMode:]
// Type encoding: v52@0:8@16@24@32B40q44
// Implementation: 0x105d85af0

// -[SCMusicStickerPresenter _insertMusicStickerView:previewView:isRemovable:captureMode:isTrending:]
// Type encoding: v48@0:8@16@24B32q36B44
// Implementation: 0x105d85d2c

// -[SCMusicStickerPresenter _handleMusicOnlySelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d85f28

// -[SCMusicStickerPresenter _musicStickerPositionForSticker:previewView:captureMode:]
// Type encoding: {CGPoint=dd}40@0:8@16@24q32
// Implementation: 0x105d860c0

// -[SCMusicStickerPresenter currentTimeObservable]
// Type encoding: @16@0:8
// Implementation: 0x105d862e4

// -[SCMusicStickerPresenter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105d862ec

@end
