/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1071677c0; end: 1071678ef; -[PreviewViewController previewGestureHandler:shouldBlockEvent:gestureType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1071677c0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   ulong param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_4);
  uVar2 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0fc5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c06ff60();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((uVar5 & 1) == 0) {
    if ((param_5 & 1) != 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + (long)_DAT_1127644ac);
      func_0x00010c233c60();
      if (iVar1 != 0) {
        uVar2 = param_1;
        func_0x00010bfa3600();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c29a960();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf79ba0();
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        if ((int)uVar5 == 0) goto LAB_107167844;
      }
    }
    func_0x00010beb2a80(param_1,param_2,param_4);
  }
  else {
LAB_107167844:
    param_1 = 1;
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 1071678f0; end: 1071678f7; -[PreviewViewController previewGestureHandler:didGenerateEvent:] */

void FUN_1071678f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2ad90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleInteractionEvent__112568500,param_4);
  return;
}



/* Entry: 1071678f8; end: 107167a17; -[PreviewViewController previewGestureHandler:didProcessGestureType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071678f8(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((param_4 & 1) == 0) {
    return;
  }
  func_0x00010c269020(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_1127644f0;
  func_0x00010c09ef00();
  _objc_release(param_3);
  func_0x00010c15b720(*(undefined8 *)(param_1 + lVar3));
  _CGRectContainsPoint();
  func_0x00010bfe2600(param_1);
  lVar3 = param_1;
  func_0x00010c13b420(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bfaeca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c6c0();
  _objc_release(lVar1);
  _objc_release(lVar3);
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x0001070c5530();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c274120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c190220();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107167a18; end: 107167a67; -[PreviewViewController previewTransitioningDelegate] */

void FUN_107167a18(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c27acc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010010fab4();
  uVar1 = param_1;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107167a68; end: 107167ad7; -[PreviewViewController dismissPreviewWithSwipeDown:] */

void FUN_107167a68(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010be552a0(param_1,param_2,5,3);
  uVar1 = param_1;
  func_0x00010c15df80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0afc80();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be03230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissPreviewWithExitType__11255e628,5);
  return;
}



/* Entry: 107167ad8; end: 107167ae3; -[PreviewViewController defaultProjectNameV2] */

void FUN_107167ad8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c110370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_preview_112621af8);
  return;
}



/* Entry: 107167ae4; end: 107167b13; -[PreviewViewController didPresentStoryQuickPost] */

void FUN_107167ae4(undefined8 param_1)

{
  func_0x00010bf3de40();
  func_0x00010c202460(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c289ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateSelectedTopics_1126800d0);
  return;
}



/* Entry: 107167b14; end: 107167d3b; -[PreviewViewController didPressSendFromQuickPost:postToMyStory:withBusinessProfiles:withOurStory:withMobStories:withBusinessStoryVariants:] */

void FUN_107167b14(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c165620(param_1);
  func_0x00010c1d6c40(param_1);
  _objc_release(param_6);
  func_0x00010c188a60(param_1);
  _objc_release(param_7);
  func_0x00010c174620(param_1);
  _objc_release(param_5);
  func_0x00010c1746c0(param_1);
  _objc_release(param_8);
  lVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c464c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c15bd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    lVar1 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x0001070c464c();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c15bd00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c3400;
    func_0x00010bf72b80(PTR_PTR_1126c3400);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(lVar3);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b6680();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c289bc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf78ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_didPressSendFromSource__1125bbc58,(long)param_3);
  return;
}



/* Entry: 107167d3c; end: 107167ff3; -[PreviewViewController postDirectlyToMyStoryAfterInterceptorCheck:withBusinessProfiles:withOurStory:withMobStories:withBusinessStoryVariants:] */

void FUN_107167d3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c464c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c15bd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126b5cc0;
    _objc_alloc();
    func_0x00010c037e40();
    uVar5 = param_4;
    func_0x00010c0b8600(param_4,param_2,&PTR___NSConcreteGlobalBlock_1109904d8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126c33d0;
    _objc_alloc(PTR_PTR_1126c33d0);
    uVar7 = uVar5;
    func_0x00010bf51e00(uVar5);
    func_0x00010c03d5e0(puVar6,param_2,PTR____NSArray0__struct_11034ab48,
                        PTR____NSArray0__struct_11034ab48,0,PTR____NSArray0__struct_11034ab48,puVar4
                        ,uVar7,0);
    _objc_release(uVar7);
    lVar1 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x0001070c4598();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b6680();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar10 = PTR_PTR_1126c3400;
    func_0x00010c15be20(PTR_PTR_1126c3400,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x0001070c464c();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c15bd00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(puVar10);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107167ff4; end: 107167ffb;  */

void FUN_107167ff4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c116a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_profileId_1126234a8);
  return;
}



/* Entry: 107167ffc; end: 107168173; -[PreviewViewController didDecideQuickPostRoute:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107167ffc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126cc7f0;
  _objc_opt_new(PTR_PTR_1126cc7f0);
  lVar5 = (long)_DAT_1127644ac;
  lVar2 = *(long *)(param_1 + lVar5);
  func_0x00010bf311e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf311e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179280(puVar1,param_2,uVar4);
    _objc_release(uVar4);
  }
  lVar2 = *(long *)(param_1 + lVar5);
  func_0x00010c243320();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c243320(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c205660(puVar1,param_2,uVar4);
    _objc_release(uVar4);
  }
  if (param_3 == 0) {
    uVar4 = 1;
  }
  else {
    if (param_3 != 1) goto LAB_1071680f0;
    uVar4 = 2;
  }
  func_0x00010c1eea60(puVar1,param_2,uVar4);
LAB_1071680f0:
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x0001070c4604();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107168174; end: 107168177; -[PreviewViewController quickPostShowHintLabel] */

void FUN_107168174(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1124f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_previewViewShowHintLabel_112622358);
  return;
}



/* Entry: 107168178; end: 10716817b; -[PreviewViewController quickPostSendToDTTRCTAEnabled] */

void FUN_107168178(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1124d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_previewViewSendToDTTRCTAEnabled_112622350);
  return;
}



/* Entry: 10716817c; end: 1071681f7; -[PreviewViewController quickPostUserId] */

void FUN_10716817c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c45e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1071681f8; end: 107168253; -[PreviewViewController quickPostMediaSupportsSpotlightSection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1071681f8(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127644ac;
  uVar1 = *(ulong *)(param_1 + lVar2);
  func_0x00010c07b5a0();
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + lVar2);
    func_0x00010c06d080();
    if ((uVar1 & 1) == 0) {
      uVar1 = *(ulong *)(param_1 + lVar2);
      func_0x00010c075080();
      if ((uVar1 & 1) == 0) {
        func_0x00010c07de40(param_1);
        return (uint)param_1 ^ 1;
      }
    }
  }
  return 0;
}



/* Entry: 107168254; end: 107168283; -[PreviewViewController quickPostTopicsCollection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107168254(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127644d4);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107168284; end: 1071682d3; -[PreviewViewController quickPostBusinessProfileId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107168284(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127644ac);
  func_0x00010c131e40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf25140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1071682d4; end: 1071682d7; -[PreviewViewController quickPostIsMusicSnap] */

void FUN_1071682d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd9550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hasMusic_1125d3f08);
  return;
}



/* Entry: 1071682d8; end: 107168377; -[PreviewViewController didUpdateStoryQuickPostSelectionWithAddToMyStory:ourStorySelected:customStoriesSelected:businessProfilesSelected:] */

void FUN_1071682d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c165620(param_1);
  func_0x00010c1d6c40(param_1);
  _objc_release(param_4);
  func_0x00010c188a60(param_1);
  _objc_release(param_5);
  func_0x00010c174620(param_1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010c289bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateSendConfirmationView_112680118);
  return;
}



/* Entry: 107168378; end: 1071683bf; -[PreviewViewController didUpdateStoryQuickPostMetadata] */

void FUN_107168378(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c15b960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb5180();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071683c0; end: 107168403; -[PreviewViewController exit:] */

void FUN_1071683c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010bf72ce0(param_1);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107168404; end: 10716840f; -[PreviewViewController backgroundExitBehavior] */

void FUN_107168404(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d83d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aecb0,PTR_s_neverExit_112613b08);
  return;
}



/* Entry: 107168410; end: 107168417; -[PreviewViewController canExit] */

undefined8 FUN_107168410(void)

{
  return 0;
}



/* Entry: 107168418; end: 10716841f; -[PreviewViewController customStatusBarStyleForViewController] */

undefined8 FUN_107168418(void)

{
  return 2;
}



/* Entry: 107168420; end: 10716844f; -[PreviewViewController uiContainerFactory] */

void FUN_107168420(void)

{
  _objc_alloc(PTR_PTR_1126b42c0);
  func_0x00010c0616e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107168450; end: 1071684c3; -[PreviewViewController updateSnapSenderConfiguration:] */

void FUN_107168450(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126afee0;
  _objc_opt_class(PTR_PTR_1126afee0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    func_0x00010c2295e0(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071684c4; end: 1071686db; -[PreviewViewController canReplaceOrDeleteMusic] */

uint FUN_1071684c4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x0001070c4790();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c0ff580(lVar2,param_2,puVar3,&PTR___NSConcreteGlobalBlock_1109904f8);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(puVar3);
  if (lVar4 == 0) {
    uVar7 = 1;
  }
  else {
    lVar1 = lVar2;
    func_0x00010c0ff640(lVar2,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010bfd6860();
    if ((int)lVar5 == 0) {
      uVar7 = 1;
    }
    else {
      lVar5 = lVar1;
      func_0x00010bf8c1c0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf2f860();
      uVar7 = (uint)lVar6 ^ 1;
      _objc_release(lVar5);
    }
    _objc_release(lVar1);
  }
  _objc_release(lVar4);
  _objc_release(lVar2);
  return uVar7;
}



/* Entry: 1071686dc; end: 1071686e3; -[PreviewViewController _downArrowImage] */

void FUN_1071686dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be371d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__imageForSIGIconType__11256b610,0x83);
  return;
}



/* Entry: 1071686e4; end: 1071687b3; -[PreviewViewController _xButtonImage] */

void FUN_1071686e4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c4748();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c112020();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar4 == 2) {
    uVar5 = 0x2f4;
  }
  else {
    if (lVar4 != 1) {
      if (lVar4 == 0) {
        func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                            &PTR____CFConstantStringClassReference_110db68f8);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_1071687a0;
    }
    uVar5 = 0x2f3;
  }
  func_0x00010be371c0(param_1,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
LAB_1071687a0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071687b4; end: 107168883; -[PreviewViewController _backButtonImage] */

void FUN_1071687b4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c4748();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c112020();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar4 == 2) {
    uVar5 = 0x86;
  }
  else {
    if (lVar4 != 1) {
      if (lVar4 == 0) {
        func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                            &PTR____CFConstantStringClassReference_110ea0b38);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_107168870;
    }
    uVar5 = 0x85;
  }
  func_0x00010be371c0(param_1,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
LAB_107168870:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107168884; end: 10716890b; -[PreviewViewController _imageForSIGIconType:] */

void FUN_107168884(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4038000000000000,0x4038000000000000,
                      *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),puVar2,param_2,param_3
                      ,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10716890c; end: 107168cdb; -[PreviewViewController _shouldPreuploadMediaWhenPresentingPreview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10716890c(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  iVar1 = (int)*(undefined8 *)(param_1 + (long)_DAT_1127644ac);
  func_0x00010c083340();
  if (iVar1 == 0) {
    uVar2 = param_1;
    func_0x00010bfd4160();
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    uVar2 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c242400();
    _objc_release(uVar2);
    if (uVar3 == 0x2b) {
      func_0x00010c13b540(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x0001070c5188();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf398e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x000108423778();
    }
    else {
      uVar2 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c242400();
      _objc_release(uVar2);
      if (uVar3 == 3) {
        func_0x00010c13b540(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_1;
        func_0x0001070c5188();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf398e0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x000108423728();
      }
      else {
        uVar2 = param_1;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c242400();
        _objc_release(uVar2);
        if (uVar3 == 1) {
          func_0x00010c13b540(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_1;
          func_0x0001070c5188();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010bf398e0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x000108423750();
        }
        else {
          uVar2 = param_1;
          func_0x00010bf46560();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c131e40();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c070d40();
          _objc_release(uVar3);
          _objc_release(uVar2);
          if ((int)uVar4 == 0) {
            return uVar4;
          }
          func_0x00010c13b540(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_1;
          func_0x0001070c5188();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010bf398e0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x000108423700();
        }
      }
    }
  }
  else {
    uVar2 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c242400();
    _objc_release(uVar2);
    if (uVar3 == 0x2b) {
      func_0x00010c13b540(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x0001070c5188();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf398e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010842378c();
    }
    else {
      uVar2 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c242400();
      _objc_release(uVar2);
      if (uVar3 == 3) {
        func_0x00010c13b540(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_1;
        func_0x0001070c5188();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf398e0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010842373c();
      }
      else {
        uVar2 = param_1;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c242400();
        _objc_release(uVar2);
        if (uVar3 == 1) {
          func_0x00010c13b540(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_1;
          func_0x0001070c5188();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010bf398e0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x000108423764();
        }
        else {
          uVar2 = param_1;
          func_0x00010bf46560();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c131e40();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c070d40();
          _objc_release(uVar3);
          _objc_release(uVar2);
          if ((int)uVar4 == 0) {
            return uVar4;
          }
          func_0x00010c13b540(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = param_1;
          func_0x0001070c5188();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010bf398e0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x000108423714();
        }
      }
    }
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 107168cdc; end: 107168cdf; -[PreviewViewController buttonItemFromItemType:] */

void FUN_107168cdc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7ff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__previewToolbarButtonItemFromIte_11257d968);
  return;
}



/* Entry: 107168ce0; end: 107168dc7; -[PreviewViewController preloadScopeDidFinish:success:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107168ce0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(lVar1 + _DAT_1127641d4);
  }
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + _DAT_1127641d4);
    }
    _objc_retain(uVar3);
    func_0x00010c12e1c0(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107168dc8; end: 107168f63; -[PreviewViewController createPostScope:didCreatePostWithConfig:] */

void FUN_107168dc8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf57ca0(param_1);
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c5188();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000108faa2c4();
  if ((int)uVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_3;
    func_0x00010c24c700();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (lVar5 == 0) {
    func_0x00010be16da0(param_1);
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_4);
    func_0x00010c297260(lVar5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107168f64; end: 107168fb7;  */

void FUN_107168f64(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be16da0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107168fb8; end: 10716929f; -[PreviewViewController _finishCreatePostWithConfig:spotlightTile:] */

void FUN_107168fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c208a40(param_1);
  uVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b6680();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c134420();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar1 = param_3;
    func_0x00010c134420(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c165620(param_1);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bebede0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d6c40(param_1);
    _objc_release(uVar1);
    func_0x00010c188a60(param_1);
    func_0x00010c174620(param_1);
    func_0x00010bf78ac0(param_1);
  }
  else {
    uVar1 = param_1;
    func_0x00010bebede0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_58,param_1);
    uVar2 = param_3;
    func_0x00010c07c240(param_3);
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x0001070c5cc8();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf62060();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1071692a0;
    puStack_78 = &UNK_11097c530;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    uStack_70 = param_3;
    _objc_retain(uVar1);
    uStack_68 = uVar1;
    func_0x00010853fcb4(param_3,uVar1,uVar2,uVar4,&puStack_90);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(param_1);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071692a0; end: 107169457;  */

void FUN_1071692a0(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c134420();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010c165620(lVar1);
      _objc_release(uVar2);
      func_0x00010c1d6c40(lVar1);
    }
    else {
      func_0x00010c105440(param_2);
      func_0x00010c165620(lVar1);
      lVar14 = param_2;
      func_0x00010c0ee3a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d6c40(lVar1);
      _objc_release(lVar14);
    }
    lVar14 = param_2;
    func_0x00010beffdc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c188a60(lVar1);
    _objc_release(lVar14);
    lVar14 = lVar1;
    func_0x00010bdf7180();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010c105460();
    if (((int)lVar3 == 0) || (lVar14 == 0)) {
      func_0x00010c174620(lVar1);
    }
    else {
      param_4 = 1;
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c174620(lVar1);
      _objc_release(puVar4);
    }
    param_3 = 0;
    func_0x00010bf78ac0(lVar1);
    _objc_release(lVar14);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_4);
  _objc_opt_new();
  func_0x00010befa120();
  lVar1 = param_3;
  func_0x00010c2759e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar1;
  func_0x00010853fb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c0fd640();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar14 = param_3;
    func_0x00010c0fd640();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar14;
    func_0x00010853f8ac();
    _objc_release(lVar14);
    _objc_release();
    if ((int)lVar3 != 0) {
      lVar1 = param_3;
      func_0x00010c0fd640();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar1;
      func_0x00010853f90c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      goto LAB_107169564;
    }
  }
  lVar14 = 0;
LAB_107169564:
  func_0x00010853f454();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x000108f5833c();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010c159e60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c08fa60();
  if (lVar7 != 0) {
    lVar7 = param_3;
    func_0x00010c159e60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c074e60();
    _objc_release(lVar7);
  }
  _objc_release(lVar6);
  _objc_release(lVar5);
  puVar8 = PTR_PTR_1126cc7d0;
  _objc_alloc();
  lVar5 = lVar1;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010c159e60();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_3;
  func_0x00010bf6e620(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar4;
  func_0x00010bf51e00();
  func_0x00010c22eae0();
  func_0x00010beb1aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar14;
  func_0x00010c0fd640();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_3;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04d720();
  _objc_release(param_4);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(param_2);
  _objc_release(puVar10);
  _objc_release(lVar9);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(puVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 107169458; end: 10716978b; -[PreviewViewController _spotlightMetadata:spotlightTile:] */

void FUN_107169458(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_4);
  _objc_opt_new();
  func_0x00010befa120();
  lVar2 = param_3;
  func_0x00010c2759e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010853fb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0fd640();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar13 = param_3;
    func_0x00010c0fd640();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar13;
    func_0x00010853f8ac();
    _objc_release(lVar13);
    _objc_release();
    if ((int)lVar4 != 0) {
      lVar2 = param_3;
      func_0x00010c0fd640();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar2;
      func_0x00010853f90c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      goto LAB_107169564;
    }
  }
  lVar13 = 0;
LAB_107169564:
  func_0x00010853f454();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x000108f5833c();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010c159e60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c08fa60();
  if (lVar7 != 0) {
    lVar7 = param_3;
    func_0x00010c159e60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c074e60();
    _objc_release(lVar7);
  }
  _objc_release(lVar6);
  _objc_release(lVar5);
  puVar8 = PTR_PTR_1126cc7d0;
  _objc_alloc();
  lVar5 = lVar2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010c159e60();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_3;
  func_0x00010bf6e620(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  func_0x00010bf51e00();
  func_0x00010c22eae0();
  func_0x00010beb1aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar13;
  func_0x00010c0fd640();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_3;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04d720();
  _objc_release(param_4);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(param_1);
  _objc_release(puVar10);
  _objc_release(lVar9);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar13);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10716978c; end: 107169887; -[PreviewViewController _shareAnonymouslyMetadataForCreatorPost:] */

void FUN_10716978c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar6 = PTR_PTR_1126c4ea8;
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c55e4();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x0001070c5188();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c285e60(puVar6,param_2,0,uVar3,uVar5,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107169888; end: 10716998f; -[PreviewViewController createPostScope:didDismissWithConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107169888(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar7 = (long)_DAT_11276453c;
  lVar2 = *(long *)((long)param_1 + lVar7);
  if (lVar2 != 0) {
    if (param_4 != (undefined **)0x0) {
      ppuVar3 = param_4;
      func_0x00010bf6e620();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
      if (ppuVar3 != (undefined **)0x0) {
        ppuVar5 = ppuVar3;
      }
      ppuVar4 = param_1;
      func_0x00010bebecc0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
      if (ppuVar4 != (undefined **)0x0) {
        ppuVar1 = ppuVar4;
      }
      func_0x00010c0720c0(ppuVar5,param_2,ppuVar1);
      *(byte *)((long)param_1 + (long)_DAT_112764540) = (byte)ppuVar5 ^ 1;
      _objc_release(ppuVar4);
      _objc_release(ppuVar3);
      ppuVar5 = param_4;
      func_0x00010bf6e620();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)param_1 + (long)_DAT_112764544);
      *(undefined ***)((long)param_1 + (long)_DAT_112764544) = ppuVar5;
      _objc_release(uVar6);
      lVar2 = *(long *)((long)param_1 + lVar7);
    }
    func_0x00010bf6f440(lVar2,param_2,0);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107169990; end: 107169a77; -[PreviewViewController createPostScope:didSelectMusic:] */

void FUN_107169990(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_4 != 0) {
    _objc_retain(param_4);
    uVar1 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0d2940();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c289b20();
    _objc_release(param_4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0d2940();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f5c20();
    _objc_release(uVar2);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107169a78; end: 107169acf; -[PreviewViewController _dismissCreatePostTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107169a78(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276449c;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 107169ad0; end: 107169b57; -[PreviewViewController _fetchStickerInsertStrongSelfEnabledCOF] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107169ad0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c5188();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1f440();
  *(char *)(param_1 + _DAT_112764410) = (char)lVar4;
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107169b58; end: 107169b77; -[PreviewViewController snapchatGalleryDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107169b58(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127645b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107169b78; end: 107169b8b; -[PreviewViewController setSnapchatGalleryDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107169b78(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127645b0,param_3);
  return;
}



/* Entry: 107169b8c; end: 107169b9b; -[PreviewViewController resourceProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107169b8c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112764474);
}



/* Entry: 107169b9c; end: 107169bab; -[PreviewViewController disposableBag] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107169b9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127644e4);
}



/* Entry: 107169bac; end: 107169bbb; -[PreviewViewController gestureHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107169bac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112764504);
}



/* Entry: 107169bbc; end: 107169bcb; -[PreviewViewController configuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107169bbc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127644ac);
}



/* Entry: 107169bcc; end: 107169beb; -[PreviewViewController cameraPreviewDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107169bcc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276457c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107169bec; end: 107169bff; -[PreviewViewController setCameraPreviewDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107169bec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276457c,param_3);
  return;
}



/* Entry: 107169c00; end: 107169c1f; -[PreviewViewController workflowDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107169c00(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127644fc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107169c20; end: 107169c2f; -[PreviewViewController backgroundPerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107169c20(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127644ec);
}



/* Entry: 107169c30; end: 107169c3f; -[PreviewViewController previewUco] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107169c30(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127644dc);
}



/* Entry: 107169c40; end: 107169c4f; -[PreviewViewController captureLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107169c40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112764584);
}



/* Entry: 107169c50; end: 107169c5f; -[PreviewViewController previewABProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107169c50(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112764484);
}



/* Entry: 107169c60; end: 107169c6f; -[PreviewViewController resourceDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107169c60(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127645b4);
}



/* Entry: 107169c70; end: 107169c7f; -[PreviewViewController userLocationPermissionsManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107169c70(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112764498);
}



/* Entry: 107169c80; end: 107169c8f; -[PreviewViewController resources] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107169c80(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276446c);
}



/* Entry: 107169c90; end: 107169c9f; -[PreviewViewController snapEditorListeners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107169c90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112764470);
}



/* Entry: 107169ca0; end: 107169caf; -[PreviewViewController previewGenericAssetsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107169ca0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276447c);
}



/* Entry: 107169cb0; end: 107169cbf; -[PreviewViewController ourStoriesOnboardingManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107169cb0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127645b8);
}



/* Entry: 107169cc0; end: 107169ccf; -[PreviewViewController quotaCheckerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107169cc0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127644a0);
}



/* Entry: 107169cd0; end: 107169cdf; -[PreviewViewController previewView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107169cd0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127644f0);
}



/* Entry: 107169ce0; end: 107169d1f; -[PreviewViewController setPreviewView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107169ce0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127644f0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107169d20; end: 107169d2f; -[PreviewViewController appearanceState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107169d20(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112764594);
}



/* Entry: 107169d30; end: 107169d3f; -[PreviewViewController setAppearanceState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107169d30(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112764594) = param_3;
  return;
}



/* Entry: 107169d40; end: 107169d4f; -[PreviewViewController quickSend] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107169d40(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127644bc);
}



/* Entry: 107169d50; end: 107169d5f; -[PreviewViewController setQuickSend:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107169d50(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127644bc) = param_3;
  return;
}



/* Entry: 107169d60; end: 107169d6f; -[PreviewViewController infoStickerDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107169d60(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112764570);
}



/* Entry: 107169d70; end: 107169daf; -[PreviewViewController setInfoStickerDataProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107169d70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112764570;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107169db0; end: 107169dbf; -[PreviewViewController stickerPickerViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107169db0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127645bc);
}



/* Entry: 107169dc0; end: 107169dff; -[PreviewViewController setStickerPickerViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107169dc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127645bc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107169e00; end: 107169e0f; -[PreviewViewController stickerPickerAnimator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107169e00(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127645c0);
}



/* Entry: 107169e10; end: 107169e4f; -[PreviewViewController setStickerPickerAnimator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107169e10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127645c0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107169e50; end: 107169e5f; -[PreviewViewController stickerDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107169e50(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127645c4);
}



/* Entry: 107169e60; end: 107169e9f; -[PreviewViewController setStickerDataProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107169e60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127645c4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107169ea0; end: 107169eaf; -[PreviewViewController bitmojiProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107169ea0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127645c8);
}



/* Entry: 107169eb0; end: 107169eef; -[PreviewViewController setBitmojiProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107169eb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127645c8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107169ef0; end: 107169eff; -[PreviewViewController stickerPickerDefaultPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107169ef0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112764528);
}



/* Entry: 107169f00; end: 107169f0f; -[PreviewViewController setStickerPickerDefaultPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107169f00(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112764528) = param_3;
  return;
}



/* Entry: 107169f10; end: 107169f1f; -[PreviewViewController stickerInsertStrongSelfEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107169f10(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112764410);
}



/* Entry: 107169f20; end: 107169f2f; -[PreviewViewController categoryIndexPath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107169f20(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127645cc);
}



/* Entry: 107169f30; end: 107169f6f; -[PreviewViewController setCategoryIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107169f30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127645cc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107169f70; end: 107169f7f; -[PreviewViewController stickerContentOffsetY] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107169f70(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127645d0);
}



/* Entry: 107169f80; end: 107169fbf; -[PreviewViewController setStickerContentOffsetY:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107169f80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127645d0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107169fc0; end: 107169fff; -[PreviewViewController setWaitingIndicator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107169fc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112764514;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10716a000; end: 10716a00f; -[PreviewViewController waitingIndicatorRequesters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10716a000(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112764518);
}



/* Entry: 10716a010; end: 10716a04f; -[PreviewViewController setWaitingIndicatorRequesters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10716a010(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112764518;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10716a050; end: 10716a05f; -[PreviewViewController placeholderView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10716a050(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127644f4);
}



/* Entry: 10716a060; end: 10716a09f; -[PreviewViewController setPlaceholderView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10716a060(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127644f4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10716a0a0; end: 10716a0af; -[PreviewViewController panGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10716a0a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112764508);
}



/* Entry: 10716a0b0; end: 10716a0ef; -[PreviewViewController setPanGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10716a0b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112764508;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10716a0f0; end: 10716a0ff; -[PreviewViewController pinchGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10716a0f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276450c);
}



/* Entry: 10716a100; end: 10716a13f; -[PreviewViewController setPinchGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10716a100(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276450c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10716a140; end: 10716a14f; -[PreviewViewController rotationGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10716a140(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112764510);
}



/* Entry: 10716a150; end: 10716a18f; -[PreviewViewController setRotationGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10716a150(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112764510;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10716a190; end: 10716a1af; -[PreviewViewController currentTouchTarget] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10716a190(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112764588);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10716a1b0; end: 10716a1c3; -[PreviewViewController setCurrentTouchTarget:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10716a1b0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112764588,param_3);
  return;
}


