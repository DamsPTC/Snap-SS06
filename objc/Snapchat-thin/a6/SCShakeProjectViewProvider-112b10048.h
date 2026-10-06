// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCShakeProjectViewProvider
// Superclass: NSObject
// Address: 0x112b10048

@interface SCShakeProjectViewProvider

// Property: delegate; attributes: T@"<SCShakeProjectViewDelegate>",W,N,V_delegate
// Property: featureTeamSeparator; attributes: T@"SCShakeSeparatorView",&,N,V_featureTeamSeparator
// Property: subFeatureTeamSeparator; attributes: T@"SCShakeSeparatorView",&,N,V_subFeatureTeamSeparator
// Property: featureWarningSeparator; attributes: T@"SCShakeSeparatorView",&,N,V_featureWarningSeparator
// Property: assignToMeSeparator; attributes: T@"SCShakeSeparatorView",&,N,V_assignToMeSeparator
// Property: assignToMeCell; attributes: T@"SIGCell",&,N,V_assignToMeCell
// Property: assignToMeSelected; attributes: TB,R,N
// Property: tapToSelectContainer; attributes: T@"UIView",&,N,V_tapToSelectContainer
// Property: subProjectTapToSelectContainer; attributes: T@"UIView",&,N,V_subProjectTapToSelectContainer
// Property: projectsScrollView; attributes: T@"UIScrollView",&,N,V_projectsScrollView
// Property: subProjectsScrollView; attributes: T@"UIScrollView",&,N,V_subProjectsScrollView
// Property: featureWarningContainer; attributes: T@"UIView",&,N,V_featureWarningContainer
// Property: featureWarningLabel; attributes: T@"UILabel",&,N,V_featureWarningLabel
// Property: featuresTableView; attributes: T@"UITableView",&,N,V_featuresTableView
// Property: featureNames; attributes: T@"NSArray",C,N,V_featureNames
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCShakeProjectViewProvider init]
// Type encoding: @16@0:8
// Implementation: 0x106a9d850

// -[SCShakeProjectViewProvider setupTapToSelect:projectText:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a9d8e0

// -[SCShakeProjectViewProvider setupSelectProjectTeam]
// Type encoding: v16@0:8
// Implementation: 0x106a9de54

// -[SCShakeProjectViewProvider setupSubProjectTapToSelectWithSubProjectName:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a9dfd0

// -[SCShakeProjectViewProvider setupSelectSubProjectTeam]
// Type encoding: v16@0:8
// Implementation: 0x106a9e544

// -[SCShakeProjectViewProvider setupSelectFeature:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a9ea68

// -[SCShakeProjectViewProvider setupProjectWarning]
// Type encoding: v16@0:8
// Implementation: 0x106a9ed24

// -[SCShakeProjectViewProvider setupAssignToMe]
// Type encoding: v16@0:8
// Implementation: 0x106a9f158

// -[SCShakeProjectViewProvider assignToMeSelected]
// Type encoding: B16@0:8
// Implementation: 0x106a9f278

// -[SCShakeProjectViewProvider setProjectLabelName:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a9f2b4

// -[SCShakeProjectViewProvider setSubProjectLabelName:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a9f358

// -[SCShakeProjectViewProvider setFeatureLabelNameWithIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x106a9f3c0

// -[SCShakeProjectViewProvider getSelectedProject]
// Type encoding: @16@0:8
// Implementation: 0x106a9f4b8

// -[SCShakeProjectViewProvider getSelectedSubProject]
// Type encoding: @16@0:8
// Implementation: 0x106a9f560

// -[SCShakeProjectViewProvider showProjectTeamView:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a9f5d8

// -[SCShakeProjectViewProvider getFeatureByIndex:]
// Type encoding: @24@0:8q16
// Implementation: 0x106a9f6c0

// -[SCShakeProjectViewProvider highlightChoose]
// Type encoding: v16@0:8
// Implementation: 0x106a9f70c

// -[SCShakeProjectViewProvider _reloadSubProjectTeamView]
// Type encoding: v16@0:8
// Implementation: 0x106a9f754

// -[SCShakeProjectViewProvider _reloadProjectWarningView]
// Type encoding: v16@0:8
// Implementation: 0x106a9fc84

// -[SCShakeProjectViewProvider _initProjectNameToSubprojects]
// Type encoding: v16@0:8
// Implementation: 0x106a9fd2c

// -[SCShakeProjectViewProvider _initProjectNameToWarnings]
// Type encoding: v16@0:8
// Implementation: 0x106a9fd44

// -[SCShakeProjectViewProvider _getUserEmail]
// Type encoding: @16@0:8
// Implementation: 0x106a9fd5c

// -[SCShakeProjectViewProvider _featureNames]
// Type encoding: @16@0:8
// Implementation: 0x106a9fdd0

// -[SCShakeProjectViewProvider _populateProjectsScrollView]
// Type encoding: v16@0:8
// Implementation: 0x106a9fdf8

// -[SCShakeProjectViewProvider _selectProject:]
// Type encoding: v24@0:8@16
// Implementation: 0x106aa0cb8

// -[SCShakeProjectViewProvider assignToMeTapped]
// Type encoding: v16@0:8
// Implementation: 0x106aa0da8

// -[SCShakeProjectViewProvider _projectNames]
// Type encoding: @16@0:8
// Implementation: 0x106aa0e0c

// -[SCShakeProjectViewProvider allProjectNames]
// Type encoding: @16@0:8
// Implementation: 0x106aa0eec

// -[SCShakeProjectViewProvider subProjectNamesForProject:]
// Type encoding: @24@0:8@16
// Implementation: 0x106aa0ef0

// -[SCShakeProjectViewProvider collectionView:cellForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106aa0ef8

// -[SCShakeProjectViewProvider collectionView:numberOfItemsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x106aa0f3c

// -[SCShakeProjectViewProvider numberOfSectionsInTableView:]
// Type encoding: q24@0:8@16
// Implementation: 0x106aa0f44

// -[SCShakeProjectViewProvider tableView:numberOfRowsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x106aa0f4c

// -[SCShakeProjectViewProvider tableView:cellForRowAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106aa0f88

// -[SCShakeProjectViewProvider tableView:didSelectRowAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106aa1100

// -[SCShakeProjectViewProvider _selectSubproject:]
// Type encoding: v24@0:8@16
// Implementation: 0x106aa11d0

// -[SCShakeProjectViewProvider _createButtonWithLabel:withState:previousButton:forContainer:withAction:isVertical:]
// Type encoding: @60@0:8@16q24@32@40:48B56
// Implementation: 0x106aa12c0

// -[SCShakeProjectViewProvider _setButtonState:withState:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106aa1770

// -[SCShakeProjectViewProvider _textFieldDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x106aa1824

// -[SCShakeProjectViewProvider _tapToSelectSingleTap:]
// Type encoding: v24@0:8@16
// Implementation: 0x106aa18d4

// -[SCShakeProjectViewProvider _subProjectTapToSelectSingleTap:]
// Type encoding: v24@0:8@16
// Implementation: 0x106aa1970

// -[SCShakeProjectViewProvider delegate]
// Type encoding: @16@0:8
// Implementation: 0x106aa1a0c

// -[SCShakeProjectViewProvider setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106aa1a24

// -[SCShakeProjectViewProvider featureTeamSeparator]
// Type encoding: @16@0:8
// Implementation: 0x106aa1a30

// -[SCShakeProjectViewProvider setFeatureTeamSeparator:]
// Type encoding: v24@0:8@16
// Implementation: 0x106aa1a38

// -[SCShakeProjectViewProvider subFeatureTeamSeparator]
// Type encoding: @16@0:8
// Implementation: 0x106aa1a68

// -[SCShakeProjectViewProvider setSubFeatureTeamSeparator:]
// Type encoding: v24@0:8@16
// Implementation: 0x106aa1a70

// -[SCShakeProjectViewProvider featureWarningSeparator]
// Type encoding: @16@0:8
// Implementation: 0x106aa1aa0

// -[SCShakeProjectViewProvider setFeatureWarningSeparator:]
// Type encoding: v24@0:8@16
// Implementation: 0x106aa1aa8

// -[SCShakeProjectViewProvider assignToMeSeparator]
// Type encoding: @16@0:8
// Implementation: 0x106aa1ad8

// -[SCShakeProjectViewProvider setAssignToMeSeparator:]
// Type encoding: v24@0:8@16
// Implementation: 0x106aa1ae0

// -[SCShakeProjectViewProvider assignToMeCell]
// Type encoding: @16@0:8
// Implementation: 0x106aa1b10

// -[SCShakeProjectViewProvider setAssignToMeCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x106aa1b18

// -[SCShakeProjectViewProvider tapToSelectContainer]
// Type encoding: @16@0:8
// Implementation: 0x106aa1b48

// -[SCShakeProjectViewProvider setTapToSelectContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106aa1b50

// -[SCShakeProjectViewProvider subProjectTapToSelectContainer]
// Type encoding: @16@0:8
// Implementation: 0x106aa1b80

// -[SCShakeProjectViewProvider setSubProjectTapToSelectContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106aa1b88

// -[SCShakeProjectViewProvider projectsScrollView]
// Type encoding: @16@0:8
// Implementation: 0x106aa1bb8

// -[SCShakeProjectViewProvider setProjectsScrollView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106aa1bc0

// -[SCShakeProjectViewProvider subProjectsScrollView]
// Type encoding: @16@0:8
// Implementation: 0x106aa1bf0

// -[SCShakeProjectViewProvider setSubProjectsScrollView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106aa1bf8

// -[SCShakeProjectViewProvider featureWarningContainer]
// Type encoding: @16@0:8
// Implementation: 0x106aa1c28

// -[SCShakeProjectViewProvider setFeatureWarningContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106aa1c30

// -[SCShakeProjectViewProvider featureWarningLabel]
// Type encoding: @16@0:8
// Implementation: 0x106aa1c60

// -[SCShakeProjectViewProvider setFeatureWarningLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106aa1c68

// -[SCShakeProjectViewProvider featuresTableView]
// Type encoding: @16@0:8
// Implementation: 0x106aa1c98

// -[SCShakeProjectViewProvider setFeaturesTableView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106aa1ca0

// -[SCShakeProjectViewProvider featureNames]
// Type encoding: @16@0:8
// Implementation: 0x106aa1cd0

// -[SCShakeProjectViewProvider setFeatureNames:]
// Type encoding: v24@0:8@16
// Implementation: 0x106aa1cd8

// -[SCShakeProjectViewProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106aa1ce0

@end
