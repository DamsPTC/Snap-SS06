/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108ed468c; end: 108ed469b; -[SCPreviewNGSActionButtonV2 imageContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ed468c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d524);
}



/* Entry: 108ed469c; end: 108ed46db; -[SCPreviewNGSActionButtonV2 setImageContainerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed469c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277d524;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ed46dc; end: 108ed46eb; -[SCPreviewNGSActionButtonV2 shouldCenterElements] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108ed46dc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277d4f4);
}



/* Entry: 108ed46ec; end: 108ed46fb; -[SCPreviewNGSActionButtonV2 setShouldCenterElements:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed46ec(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277d4f4) = param_3;
  return;
}



/* Entry: 108ed46fc; end: 108ed479b; -[SCPreviewNGSActionButtonV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed46fc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277d524,0);
  _objc_storeStrong(param_1 + _DAT_11277d520,0);
  _objc_storeStrong(param_1 + _DAT_11277d528,0);
  _objc_storeStrong(param_1 + _DAT_11277d52c,0);
  _objc_storeStrong(param_1 + _DAT_11277d514,0);
  _objc_storeStrong(param_1 + _DAT_11277d510,0);
  _objc_storeStrong(param_1 + _DAT_11277d508,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277d50c,0);
  return;
}



/* Entry: 108ed479c; end: 108ed47f3; -[SCPreviewNGSBottomActionBar initWithFrame:config:buttonStyle:shouldShowHintLabel:isDirectorMode:isLargeIconEnabled:isFromMemories:bitmojiSelfieFetcher:bitmojiSelfieRequest:publicProfileImageURL:resourceDownloader:myStoriesDataCoordinator:publicStoriesDataCoordinator:customStoriesDataFetcher:performer:previewABProvider:circumstanceEngine:sendToExperimentConfiguration:sendToUIConfiguration:shareButtonEnabled:grapheneRegistry:] */

void FUN_108ed479c(void)

{
  func_0x00010c0140a0();
  return;
}



/* Entry: 108ed47f4; end: 108ed4c5b; -[SCPreviewNGSBottomActionBar initWithFrame:config:buttonStyle:shouldShowHintLabel:isDirectorMode:isLargeIconEnabled:isFromMemories:bitmojiSelfieFetcher:bitmojiSelfieRequest:publicProfileImageURL:resourceDownloader:myStoriesDataCoordinator:publicStoriesDataCoordinator:customStoriesDataFetcher:performer:previewABProvider:circumstanceEngine:extraHorizontalInset:sendToExperimentConfiguration:sendToUIConfiguration:shareButtonEnabled:grapheneRegistry:spotlightStyle:storiesTrayDefaultsToPublic:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108ed47f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined1 param_11,undefined1 param_12,
             undefined1 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined1 param_26,undefined4 param_27,undefined8 param_28,
             undefined2 param_29,undefined4 param_30,undefined1 param_31)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  
  _objc_retain();
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_28);
  puStack_a0 = PTR_PTR_1126ff150;
  puVar1 = &uStack_a8;
  uStack_a8 = param_6;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277d530) = param_9;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277d534);
    *(undefined **)((long)puVar1 + (long)_DAT_11277d534) = puVar2;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277d538) = param_10;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277d53c) = param_11;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277d540) = param_12;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277d544) = param_13;
    lVar5 = (long)_DAT_11277d548;
    _objc_retain(param_14);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_14;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_11277d54c;
    _objc_retain(param_15);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_15;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_11277d550;
    _objc_retain(param_16);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_16;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_11277d554;
    _objc_retain(param_17);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_17;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_11277d558;
    _objc_retain(param_18);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_18;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_11277d55c;
    _objc_retain(param_19);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_19;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_11277d560;
    _objc_retain(param_20);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_20;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_11277d564;
    _objc_retain(param_21);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_21;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_11277d568;
    _objc_retain(param_22);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_22;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_11277d56c;
    _objc_retain(param_23);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_23;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277d570) = param_5;
    lVar5 = (long)_DAT_11277d574;
    _objc_retain(param_24);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_24;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_11277d578;
    _objc_retain(param_25);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_25;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277d57c) = param_26;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277d580) = param_31;
    lVar5 = (long)_DAT_11277d584;
    _objc_retain(param_28);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_28;
    _objc_release(uVar4);
    puVar3 = puVar1;
    func_0x00010bee6940();
    *(char *)((long)puVar1 + (long)_DAT_11277d588) = (char)puVar3;
    puVar3 = puVar1;
    func_0x00010bed1260();
    *(char *)((long)puVar1 + (long)_DAT_11277d58c) = (char)puVar3;
    uVar4 = param_23;
    func_0x00010bf1f440();
    *(char *)((long)puVar1 + (long)_DAT_11277d590) = (char)uVar4;
    *(undefined2 *)((long)puVar1 + (long)_DAT_11277d594) = param_29;
    func_0x00010c174840(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_28);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  return puVar1;
}



/* Entry: 108ed4c5c; end: 108ed4e33; -[SCPreviewNGSBottomActionBar layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed4c5c(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  puVar7 = &uStack_140;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf20c00();
  if (param_3 != *(double *)(param_4 + _DAT_11277d598)) {
    func_0x00010be86a40(param_4);
  }
  puStack_f8 = PTR_PTR_1126ff150;
  lStack_100 = param_4;
  _objc_msgSendSuper2(&lStack_100,PTR_s_layoutSubviews_112600e60);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_130;
    do {
      lVar10 = 0;
      do {
        if (*plStack_130 != lVar9) {
          _objc_enumerationMutation(param_4);
        }
        puVar3 = PTR_PTR_1126dba30;
        uVar8 = *(ulong *)(lStack_138 + lVar10 * 8);
        _objc_retain(uVar8);
        _objc_opt_class(puVar3);
        uVar4 = uVar8;
        _objc_opt_isKindOfClass(uVar8,puVar3);
        uVar1 = uVar8;
        if ((uVar4 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar8);
        if (uVar1 != 0) {
          uVar4 = uVar8;
          func_0x00010c087500();
          _objc_retainAutoreleasedReturnValue();
          if (uVar4 != 0) {
            uVar5 = uVar8;
            func_0x00010c087500();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            func_0x00010c074c20();
            _objc_release(uVar5);
            _objc_release(uVar4);
            if ((uVar6 & 1) == 0) {
              func_0x00010c1cbe20(uVar8);
            }
          }
        }
        _objc_release(uVar1);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = param_4;
      puVar7 = &uStack_140;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if ((undefined8 *)*(undefined1 **)(param_4 + _DAT_11277d59c) == puVar7) {
    return;
  }
  *(undefined8 **)(param_4 + _DAT_11277d59c) = puVar7;
                    /* WARNING: Could not recover jumptable at 0x00010be48eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 108ed4e34; end: 108ed4e53; -[SCPreviewNGSBottomActionBar setButtonConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed4e34(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_11277d59c) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_11277d59c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010be48eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__layoutButtons_11256fd48);
  return;
}



/* Entry: 108ed4e54; end: 108ed4eb3; -[SCPreviewNGSBottomActionBar addAdditionalButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed4e54(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11277d534;
  uVar1 = *(ulong *)(param_1 + lVar2);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
    func_0x00010be48ea0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ed4eb4; end: 108ed4ee7; -[SCPreviewNGSBottomActionBar contentEdgeInsets] */

void FUN_108ed4eb4(void)

{
  func_0x00010bf20c00();
  return;
}



/* Entry: 108ed4ee8; end: 108ed4ff3; -[SCPreviewNGSBottomActionBar saveButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed4ee8(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  byte bVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((*(byte *)(param_1 + _DAT_11277d59c) >> 2 & 1) == 0) {
    lVar6 = 0;
  }
  else {
    lVar8 = (long)_DAT_11277d5a0;
    lVar6 = *(long *)(param_1 + lVar8);
    if (lVar6 == 0) {
      puVar3 = PTR_PTR_1126dc6d8;
      _objc_alloc();
      uVar7 = *(undefined8 *)(param_1 + _DAT_11277d530);
      lVar6 = param_1;
      func_0x00010be98a80(param_1);
      uVar1 = *(undefined1 *)(param_1 + _DAT_11277d588);
      lVar4 = param_1;
      func_0x00010bee6740(param_1);
      iVar2 = (int)*(undefined8 *)(param_1 + _DAT_11277d568);
      func_0x00010c0c9360();
      if (iVar2 == 0) {
        bVar5 = 0;
      }
      else {
        bVar5 = *(byte *)(param_1 + _DAT_11277d53c) ^ 1;
      }
      func_0x00010bffa060(puVar3,param_2,uVar7,lVar6,uVar1,lVar4,bVar5 & 1,
                          *(undefined1 *)(param_1 + _DAT_11277d57c));
      uVar7 = *(undefined8 *)(param_1 + lVar8);
      *(undefined **)(param_1 + lVar8) = puVar3;
      _objc_release(uVar7);
      lVar6 = *(long *)(param_1 + lVar8);
    }
    _objc_retain(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 108ed4ff4; end: 108ed518f; -[SCPreviewNGSBottomActionBar shareButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed4ff4(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar3 = PTR_PTR_1126b0c40;
  if ((*(byte *)(param_1 + _DAT_11277d59c) >> 1 & 1) == 0) {
    lVar6 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar3,param_2,0x72,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    lVar8 = (long)_DAT_11277d5a4;
    lVar6 = *(long *)(param_1 + lVar8);
    if (lVar6 == 0) {
      puVar2 = PTR_PTR_1126dc6e0;
      _objc_alloc();
      uVar7 = *(undefined8 *)(param_1 + _DAT_11277d530);
      lVar6 = param_1;
      func_0x00010be98a80(param_1);
      lVar4 = lVar6;
      func_0x000108ede900();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined1 *)(param_1 + _DAT_11277d588);
      lVar5 = param_1;
      func_0x00010bee6740(param_1);
      func_0x00010c014ec0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar2,param_2,uVar7,
                          lVar6,puVar3,lVar4,uVar1,lVar5,0);
      uVar7 = *(undefined8 *)(param_1 + lVar8);
      *(undefined **)(param_1 + lVar8) = puVar2;
      _objc_release(uVar7);
      _objc_release(lVar4);
      uVar7 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c160fc0(uVar7,param_2,&PTR____CFConstantStringClassReference_110f031b8);
      func_0x000108ede900();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161020(*(undefined8 *)(param_1 + lVar8),param_2,uVar7);
      _objc_release(uVar7);
      lVar6 = *(long *)(param_1 + lVar8);
    }
    _objc_retain(lVar6);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 108ed5190; end: 108ed539f; -[SCPreviewNGSBottomActionBar storyButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed5190(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  puVar3 = PTR_PTR_1126b0c40;
  if ((*(byte *)(param_1 + _DAT_11277d59c) >> 3 & 1) == 0) {
    lVar11 = 0;
  }
  else {
    lVar12 = (long)_DAT_11277d5a8;
    lVar11 = *(long *)(param_1 + lVar12);
    if (lVar11 == 0) {
      lVar11 = (long)_DAT_11277d540;
      uVar8 = 4;
      if (*(char *)(param_1 + lVar11) == '\0') {
        uVar8 = 2;
      }
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar3,param_2,0x28b,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126dc6e8;
      _objc_alloc();
      uVar5 = *(undefined8 *)(param_1 + _DAT_11277d548);
      uVar9 = *(undefined8 *)(param_1 + _DAT_11277d560);
      uVar6 = *(undefined8 *)(param_1 + _DAT_11277d54c);
      uVar10 = *(undefined8 *)(param_1 + _DAT_11277d550);
      uVar13 = *(undefined8 *)(param_1 + _DAT_11277d554);
      uVar7 = *(undefined8 *)(param_1 + _DAT_11277d530);
      puVar4 = puVar2;
      func_0x000108ede918();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined1 *)(param_1 + lVar11);
      func_0x00010bee6740();
      lVar11 = param_1;
      func_0x00010bec46e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff8280(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar2,param_2,uVar5,
                          uVar9,uVar6,uVar10,uVar13,uVar7,uVar8,puVar3,puVar4,uVar1);
      uVar8 = *(undefined8 *)(param_1 + lVar12);
      *(undefined **)(param_1 + lVar12) = puVar2;
      _objc_release(uVar8);
      _objc_release(lVar11);
      _objc_release(puVar4);
      func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar12),param_2,
                          &PTR____CFConstantStringClassReference_110eafe78);
      _objc_release(puVar3);
      lVar11 = *(long *)(param_1 + lVar12);
    }
    _objc_retain(lVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar11);
  return;
}



/* Entry: 108ed53a0; end: 108ed551b; -[SCPreviewNGSBottomActionBar spotlightButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed53a0(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  puVar4 = PTR_PTR_1126b0c40;
  if ((*(byte *)(param_1 + _DAT_11277d59c) >> 5 & 1) == 0) {
    lVar5 = 0;
  }
  else {
    lVar7 = (long)_DAT_11277d5ac;
    lVar5 = *(long *)(param_1 + lVar7);
    if (lVar5 == 0) {
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar4,param_2,0x236,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126dc6f0;
      _objc_alloc();
      uVar6 = *(undefined8 *)(param_1 + _DAT_11277d530);
      lVar8 = (long)_DAT_11277d594;
      uVar1 = *(undefined1 *)(param_1 + _DAT_11277d540);
      uVar2 = *(undefined1 *)(param_1 + _DAT_11277d588);
      lVar5 = param_1;
      func_0x00010bee6740();
      func_0x00010c014ea0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar3,param_2,uVar6,5,
                          puVar4,*(undefined2 *)(param_1 + lVar8),uVar1,uVar2,(char)lVar5);
      uVar6 = *(undefined8 *)(param_1 + lVar7);
      *(undefined **)(param_1 + lVar7) = puVar3;
      _objc_release(uVar6);
      func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar7),param_2,
                          &PTR____CFConstantStringClassReference_110f03158);
      _objc_release(puVar4);
      lVar5 = *(long *)(param_1 + lVar7);
    }
    _objc_retain(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 108ed551c; end: 108ed561b; -[SCPreviewNGSBottomActionBar sendButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed551c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if ((*(byte *)(param_1 + _DAT_11277d59c) >> 4 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    lVar4 = (long)_DAT_11277d5b0;
    lVar3 = *(long *)(param_1 + lVar4);
    if (lVar3 == 0) {
      puVar1 = PTR_PTR_1126dba10;
      _objc_alloc();
      uVar2 = *(undefined8 *)(param_1 + _DAT_11277d568);
      func_0x00010c2350c0(uVar2);
      func_0x00010c014ce0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,param_2,uVar2,
                          *(undefined1 *)(param_1 + _DAT_11277d540),
                          *(undefined1 *)(param_1 + _DAT_11277d588),
                          *(undefined1 *)(param_1 + _DAT_11277d53c),
                          *(undefined1 *)(param_1 + _DAT_11277d590));
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      *(undefined **)(param_1 + lVar4) = puVar1;
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c160fc0(uVar2,param_2,&PTR____CFConstantStringClassReference_110eafed8);
      func_0x000108edee88();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161020(*(undefined8 *)(param_1 + lVar4),param_2,uVar2);
      _objc_release(uVar2);
      lVar3 = *(long *)(param_1 + lVar4);
    }
    _objc_retain(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108ed561c; end: 108ed5653; -[SCPreviewNGSBottomActionBar pointInside:withEvent:] */

void FUN_108ed561c(void)

{
  func_0x00010bf20c00();
  _CGRectInset();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return;
}



/* Entry: 108ed5654; end: 108ed566b; -[SCPreviewNGSBottomActionBar _useLighterColorForButtons] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_108ed5654(long param_1)

{
  return (*(byte *)(param_1 + _DAT_11277d53c) ^ 0xff) & 1;
}



/* Entry: 108ed566c; end: 108ed56bf; -[SCPreviewNGSBottomActionBar _useTallerButtons] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_108ed566c(long param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = param_1;
  func_0x00010be24f00(param_1,param_2,*(long *)(param_1 + _DAT_11277d530) != 1);
  if ((int)lVar1 == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(param_1 + _DAT_11277d53c) ^ 1;
  }
  return bVar2 & 1;
}



/* Entry: 108ed56c0; end: 108ed56c7; -[SCPreviewNGSBottomActionBar _unifiedStyleEnabled] */

void FUN_108ed56c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be24f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hSizeClassPrioritizedFeatureFla_112566d60,1)
  ;
  return;
}



/* Entry: 108ed56c8; end: 108ed5713; -[SCPreviewNGSBottomActionBar _hSizeClassPrioritizedFeatureFlagWithBoolean:] */

undefined4 FUN_108ed56c8(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bfe4380();
  _objc_release(param_1);
  if (lVar1 == 2) {
    param_3 = 1;
  }
  return param_3;
}



/* Entry: 108ed5714; end: 108ed5717; -[SCPreviewNGSBottomActionBar resetButtonsLayout] */

void FUN_108ed5714(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be48eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__layoutButtons_11256fd48);
  return;
}



/* Entry: 108ed5718; end: 108ed571f; -[SCPreviewNGSBottomActionBar _itemHSpace] */

undefined8 FUN_108ed5718(void)

{
  return 0x4020000000000000;
}



/* Entry: 108ed5720; end: 108ed574b; -[SCPreviewNGSBottomActionBar _layoutButtons] */

void FUN_108ed5720(undefined8 param_1)

{
  func_0x00010be86a40();
  func_0x00010c1cbe20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 108ed574c; end: 108ed680b; -[SCPreviewNGSBottomActionBar _rebuildButtonLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed574c(double param_1,double param_2,double param_3,double param_4,undefined **param_5,
                  undefined8 param_6)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined1 *puVar17;
  undefined8 uVar18;
  long lVar19;
  undefined **ppuVar20;
  long lVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined **ppuStack_260;
  long lStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [128];
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar21 = (long)_DAT_11277d5b4;
  func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_6,
                      *(undefined8 *)((long)param_5 + lVar21));
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)((long)param_5 + lVar21);
  *(undefined **)((long)param_5 + lVar21) = puVar3;
  lStack_1d8 = lVar21;
  _objc_release(uVar18);
  func_0x00010bf20c00(param_5);
  *(double *)((long)param_5 + (long)_DAT_11277d598) = param_3;
  dVar25 = *(double *)((long)param_5 + (long)_DAT_11277d570);
  lVar21 = (long)_DAT_11277d5b8;
  if (*(long *)((long)param_5 + lVar21) != 0) {
    func_0x00010c12cdc0(param_5);
  }
  dVar25 = dVar25 + 12.0;
  ppuVar24 = (undefined **)PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  _objc_opt_new();
  func_0x00010bef9680(param_5,param_6,ppuVar24);
  _objc_retain(ppuVar24);
  uVar18 = *(undefined8 *)((long)param_5 + lVar21);
  *(undefined ***)((long)param_5 + lVar21) = ppuVar24;
  _objc_release(uVar18);
  lVar21 = (long)_DAT_11277d590;
  ppuVar7 = ppuVar24;
  ppuVar20 = param_5;
  if ((*(byte *)((long)param_5 + lVar21) & 1) == 0) {
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08e400(param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08de00(param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar6 = ppuVar7;
  func_0x00010bf493a0(ppuVar7,param_6,ppuVar20);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar20);
  _objc_release(ppuVar7);
  ppuStack_200 = (undefined **)PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  ppuVar7 = ppuVar24;
  ppuStack_1f8 = ppuVar6;
  ppuStack_b0 = ppuVar6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  ppuVar20 = param_5;
  ppuStack_1e0 = ppuVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1e8 = ppuVar20;
  func_0x00010bf493a0(ppuVar7,param_6,ppuVar20);
  _objc_retainAutoreleasedReturnValue();
  ppuVar20 = ppuVar24;
  ppuStack_a8 = ppuVar7;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be45d00(param_5);
  param_1 = dVar25 - param_1;
  ppuVar6 = ppuVar20;
  func_0x00010bf49420(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar22 = ppuVar24;
  ppuStack_a0 = ppuVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = param_5;
  func_0x00010bf1ff80(param_5);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar22;
  func_0x00010bf493a0(ppuVar22,param_6,ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  ppuVar23 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_98 = ppuVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&ppuStack_b0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(ppuStack_200,param_6,ppuVar23);
  _objc_release(ppuVar23);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar22);
  _objc_release(ppuVar6);
  _objc_release(ppuVar20);
  _objc_release(ppuVar7);
  _objc_release(ppuStack_1e8);
  _objc_release(ppuStack_1e0);
  ppuVar7 = ppuVar24;
  if ((*(byte *)((long)param_5 + lVar21) & 1) == 0) {
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_1e0 = (undefined **)(long)_DAT_11277d540;
  ppuVar20 = (undefined **)(long)_DAT_11277d59c;
  dVar27 = 0.0;
  dVar26 = 0.0;
  if (*(char *)((long)param_5 + (long)ppuStack_1e0) == '\x01') {
    dVar26 = param_3;
    if ((*(byte *)((long)param_5 + (long)ppuVar20) >> 2 & 1) == 0) {
LAB_108ed5ac0:
      dVar27 = 64.0;
    }
    else {
      iVar2 = (int)*(undefined8 *)((long)param_5 + (long)_DAT_11277d568);
      func_0x00010c234080();
      dVar26 = param_3;
      if (iVar2 == 0) goto LAB_108ed5ac0;
      ppuVar6 = param_5;
      func_0x00010c14a0e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d620();
      _objc_release(ppuVar6);
      ppuVar6 = param_5;
      func_0x00010c14a0e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      dVar26 = param_3;
      _objc_release(ppuVar6);
      dVar27 = param_3;
    }
    func_0x00010bfb68e0(param_5);
    param_3 = dVar26;
    func_0x00010be45d00(param_5);
    param_2 = 0.5;
    dVar26 = ((dVar26 + param_1 * -2.0 + dVar25 * -2.0) - dVar27) * 0.5;
  }
  ppuStack_1e8 = ppuVar20;
  if ((*(byte *)((long)param_5 + (long)ppuVar20) >> 1 & 1) == 0) {
    lVar19 = (long)_DAT_11277d5a4;
    func_0x00010c12c960(*(undefined8 *)((long)param_5 + lVar19));
    ppuVar6 = *(undefined ***)((long)param_5 + lVar19);
    *(undefined8 *)((long)param_5 + lVar19) = 0;
    ppuVar22 = ppuVar7;
  }
  else {
    ppuVar20 = param_5;
    func_0x00010c22a7c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_5,param_6,ppuVar20);
    _objc_release(ppuVar20);
    bVar1 = *(byte *)((long)param_5 + lVar21);
    ppuVar20 = param_5;
    func_0x00010c22a7c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar20;
    if ((bVar1 & 1) == 0) {
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010be45d00(param_5);
    ppuVar22 = ppuVar6;
    func_0x00010bf493c0(ppuVar6,param_6,ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
    _objc_release(ppuVar20);
    uVar18 = *(undefined8 *)((long)param_5 + lStack_1d8);
    ppuVar20 = param_5;
    ppuStack_200 = ppuVar22;
    ppuStack_c0 = ppuVar22;
    func_0x00010c22a7c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar20;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar22 = param_5;
    func_0x00010bf348e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    ppuVar23 = ppuVar6;
    func_0x00010bf493a0(ppuVar6,param_6,ppuVar22);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_b8 = ppuVar23;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&ppuStack_c0,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(uVar18,param_6,puVar3);
    _objc_release(puVar3);
    _objc_release(ppuVar23);
    _objc_release(ppuVar22);
    _objc_release(ppuVar6);
    _objc_release(ppuVar20);
    if (*(char *)((long)param_5 + (long)ppuStack_1e0) == '\x01') {
      uVar18 = *(undefined8 *)((long)param_5 + lStack_1d8);
      ppuVar20 = param_5;
      func_0x00010c22a7c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar20;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      ppuVar22 = ppuVar6;
      func_0x00010bf49420(dVar27);
      _objc_retainAutoreleasedReturnValue();
      ppuVar23 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      ppuStack_c8 = ppuVar22;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&ppuStack_c8,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(uVar18,param_6,ppuVar23);
      _objc_release(ppuVar23);
      _objc_release(ppuVar22);
      _objc_release(ppuVar6);
      _objc_release(ppuVar20);
    }
    bVar1 = *(byte *)((long)param_5 + lVar21);
    ppuVar6 = param_5;
    func_0x00010c22a7c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar20 = ppuStack_1e8;
    ppuVar22 = ppuVar6;
    if ((bVar1 & 1) == 0) {
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    ppuVar6 = ppuStack_200;
  }
  _objc_release(ppuVar6);
  if ((*(byte *)((long)param_5 + (long)ppuVar20) >> 2 & 1) == 0) {
    lVar19 = (long)_DAT_11277d5a0;
    func_0x00010c12c960(*(undefined8 *)((long)param_5 + lVar19));
    ppuVar7 = *(undefined ***)((long)param_5 + lVar19);
    *(undefined8 *)((long)param_5 + lVar19) = 0;
    ppuVar6 = ppuVar22;
  }
  else {
    ppuVar7 = param_5;
    func_0x00010c14a0e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_5,param_6,ppuVar7);
    _objc_release(ppuVar7);
    bVar1 = *(byte *)((long)param_5 + lVar21);
    ppuVar7 = param_5;
    func_0x00010c14a0e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar20 = ppuVar7;
    if ((bVar1 & 1) == 0) {
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010be45d00(param_5);
    ppuVar6 = ppuVar20;
    func_0x00010bf493c0(ppuVar20,param_6,ppuVar22);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar20);
    _objc_release(ppuVar7);
    uVar18 = *(undefined8 *)((long)param_5 + lStack_1d8);
    ppuVar7 = param_5;
    ppuStack_200 = ppuVar6;
    ppuStack_d8 = ppuVar6;
    func_0x00010c14a0e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar20 = ppuVar7;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = param_5;
    func_0x00010bf348e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    ppuVar23 = ppuVar20;
    func_0x00010bf493a0(ppuVar20,param_6,ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_d0 = ppuVar23;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&ppuStack_d8,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(uVar18,param_6,puVar3);
    _objc_release(puVar3);
    _objc_release(ppuVar23);
    _objc_release(ppuVar6);
    _objc_release(ppuVar20);
    _objc_release(ppuVar7);
    if (*(char *)((long)param_5 + (long)ppuStack_1e0) == '\x01') {
      uVar18 = *(undefined8 *)((long)param_5 + lStack_1d8);
      ppuVar7 = param_5;
      func_0x00010c14a0e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar20 = ppuVar7;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar20;
      func_0x00010bf49420(dVar27);
      _objc_retainAutoreleasedReturnValue();
      ppuVar23 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      ppuStack_e0 = ppuVar6;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&ppuStack_e0,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(uVar18,param_6,ppuVar23);
      _objc_release(ppuVar23);
      _objc_release(ppuVar6);
      _objc_release(ppuVar20);
      _objc_release(ppuVar7);
    }
    bVar1 = *(byte *)((long)param_5 + lVar21);
    ppuVar7 = param_5;
    func_0x00010c14a0e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar20 = ppuStack_1e8;
    ppuVar6 = ppuVar7;
    if ((bVar1 & 1) == 0) {
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar22);
    _objc_release(ppuVar7);
    ppuVar7 = ppuStack_200;
  }
  _objc_release(ppuVar7);
  if ((*(byte *)((long)param_5 + (long)ppuVar20) >> 3 & 1) == 0) {
    lVar19 = (long)_DAT_11277d5a8;
    func_0x00010c12c960(*(undefined8 *)((long)param_5 + lVar19));
    ppuVar7 = *(undefined ***)((long)param_5 + lVar19);
    *(undefined8 *)((long)param_5 + lVar19) = 0;
    ppuVar22 = ppuVar6;
  }
  else {
    ppuVar7 = param_5;
    func_0x00010c259240(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_5,param_6,ppuVar7);
    _objc_release(ppuVar7);
    bVar1 = *(byte *)((long)param_5 + lVar21);
    ppuVar7 = param_5;
    func_0x00010c259240();
    _objc_retainAutoreleasedReturnValue();
    ppuVar20 = ppuVar7;
    if ((bVar1 & 1) == 0) {
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010be45d00(param_5);
    ppuVar22 = ppuVar20;
    func_0x00010bf493c0(ppuVar20,param_6,ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar20);
    _objc_release(ppuVar7);
    uVar18 = *(undefined8 *)((long)param_5 + lStack_1d8);
    ppuVar7 = param_5;
    ppuStack_200 = ppuVar22;
    ppuStack_f0 = ppuVar22;
    func_0x00010c259240();
    _objc_retainAutoreleasedReturnValue();
    ppuVar20 = ppuVar7;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar22 = param_5;
    func_0x00010bf348e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    ppuVar23 = ppuVar20;
    func_0x00010bf493a0(ppuVar20,param_6,ppuVar22);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_e8 = ppuVar23;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&ppuStack_f0,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(uVar18,param_6,puVar3);
    _objc_release(puVar3);
    _objc_release(ppuVar23);
    _objc_release(ppuVar22);
    _objc_release(ppuVar20);
    _objc_release(ppuVar7);
    if (*(char *)((long)param_5 + (long)ppuStack_1e0) == '\x01') {
      uVar18 = *(undefined8 *)((long)param_5 + lStack_1d8);
      ppuVar7 = param_5;
      func_0x00010c259240();
      _objc_retainAutoreleasedReturnValue();
      ppuVar20 = ppuVar7;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      ppuVar22 = ppuVar20;
      func_0x00010bf49420(dVar26);
      _objc_retainAutoreleasedReturnValue();
      ppuVar23 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      ppuStack_f8 = ppuVar22;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&ppuStack_f8,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(uVar18,param_6,ppuVar23);
      _objc_release(ppuVar23);
      _objc_release(ppuVar22);
      _objc_release(ppuVar20);
      _objc_release(ppuVar7);
    }
    bVar1 = *(byte *)((long)param_5 + lVar21);
    ppuVar7 = param_5;
    func_0x00010c259240();
    _objc_retainAutoreleasedReturnValue();
    ppuVar20 = ppuStack_1e8;
    ppuVar22 = ppuVar7;
    if ((bVar1 & 1) == 0) {
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar6);
    _objc_release(ppuVar7);
    ppuVar7 = ppuStack_200;
  }
  _objc_release(ppuVar7);
  ppuStack_1f0 = ppuVar24;
  if ((*(byte *)((long)param_5 + (long)ppuVar20) >> 5 & 1) == 0) {
    lVar19 = (long)_DAT_11277d5ac;
    func_0x00010c12c960(*(undefined8 *)((long)param_5 + lVar19));
    ppuVar7 = *(undefined ***)((long)param_5 + lVar19);
    *(undefined8 *)((long)param_5 + lVar19) = 0;
    ppuVar6 = ppuVar22;
  }
  else {
    ppuVar24 = param_5;
    func_0x00010c24ae20(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_5,param_6,ppuVar24);
    _objc_release(ppuVar24);
    bVar1 = *(byte *)((long)param_5 + lVar21);
    ppuVar24 = param_5;
    func_0x00010c24ae20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar24;
    if ((bVar1 & 1) == 0) {
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010be45d00(param_5);
    ppuVar6 = ppuVar7;
    func_0x00010bf493c0(ppuVar7,param_6,ppuVar22);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    _objc_release(ppuVar24);
    uVar18 = *(undefined8 *)((long)param_5 + lStack_1d8);
    ppuVar20 = param_5;
    ppuStack_200 = ppuVar6;
    ppuStack_108 = ppuVar6;
    func_0x00010c24ae20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar20;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = param_5;
    func_0x00010bf348e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    ppuVar23 = ppuVar7;
    func_0x00010bf493a0(ppuVar7,param_6,ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_100 = ppuVar23;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&ppuStack_108,2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar24 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    func_0x00010befa160(uVar18,param_6,puVar3);
    _objc_release(puVar3);
    _objc_release(ppuVar23);
    _objc_release(ppuVar6);
    _objc_release(ppuVar7);
    _objc_release(ppuVar20);
    if (*(char *)((long)param_5 + (long)ppuStack_1e0) == '\x01') {
      uVar18 = *(undefined8 *)((long)param_5 + lStack_1d8);
      ppuVar20 = param_5;
      func_0x00010c24ae20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar20;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar7;
      func_0x00010bf49420(dVar26);
      _objc_retainAutoreleasedReturnValue();
      ppuVar23 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      ppuStack_110 = ppuVar6;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&ppuStack_110,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(uVar18,param_6,ppuVar23);
      _objc_release(ppuVar23);
      _objc_release(ppuVar6);
      _objc_release(ppuVar7);
      _objc_release(ppuVar20);
    }
    bVar1 = *(byte *)((long)param_5 + lVar21);
    ppuVar7 = param_5;
    func_0x00010c24ae20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar7;
    if ((bVar1 & 1) == 0) {
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar22);
    _objc_release(ppuVar7);
    ppuVar7 = ppuStack_200;
  }
  _objc_release(ppuVar7);
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  puStack_1c0 = (undefined8 *)0x0;
  ppuVar22 = *(undefined ***)((long)param_5 + (long)_DAT_11277d534);
  _objc_retain(ppuVar22);
  puVar17 = auStack_190;
  ppuVar7 = ppuVar22;
  func_0x00010bf52a60(ppuVar22,param_6,&uStack_1d0,puVar17,0x10);
  if (ppuVar7 != (undefined **)0x0) {
    ppuVar23 = (undefined **)*puStack_1c0;
    do {
      ppuVar24 = (undefined **)0x0;
      ppuVar4 = ppuVar6;
      do {
        if ((undefined **)*puStack_1c0 != ppuVar23) {
          _objc_enumerationMutation(ppuVar22);
        }
        ppuVar6 = *(undefined ***)(lStack_1c8 + (long)ppuVar24 * 8);
        func_0x00010bead560(param_5,param_6,ppuVar6);
        uVar18 = *(undefined8 *)((long)param_5 + lStack_1d8);
        ppuVar20 = param_5;
        func_0x00010bdec4c0(param_5,param_6,ppuVar6,ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(uVar18,param_6,ppuVar20);
        _objc_release(ppuVar20);
        if ((*(byte *)((long)param_5 + lVar21) & 1) == 0) {
          func_0x00010c1408a0();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c2793a0();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(ppuVar4);
        ppuVar24 = (undefined **)((long)ppuVar24 + 1);
        ppuVar4 = ppuVar6;
      } while (ppuVar7 != ppuVar24);
      puVar17 = auStack_190;
      ppuVar7 = ppuVar22;
      func_0x00010bf52a60(ppuVar22,param_6,&uStack_1d0,puVar17,0x10);
    } while (ppuVar7 != (undefined **)0x0);
  }
  _objc_release(ppuVar22);
  if ((*(byte *)((long)param_5 + (long)ppuStack_1e8) >> 4 & 1) == 0) {
    ppuVar20 = (undefined **)(long)_DAT_11277d5b0;
    ppuVar22 = *(undefined ***)((long)param_5 + (long)ppuVar20);
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    ppuVar7 = ppuStack_1f0;
    if (ppuVar22 == param_5) {
      func_0x00010c12c960(*(undefined8 *)((long)param_5 + (long)ppuVar20));
    }
    ppuVar22 = *(undefined ***)((long)param_5 + (long)ppuVar20);
    *(undefined8 *)((long)param_5 + (long)ppuVar20) = 0;
    goto LAB_108ed6794;
  }
  ppuVar7 = param_5;
  func_0x00010c15b700(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d620();
  _objc_release(ppuVar7);
  ppuVar7 = ppuStack_1f0;
  ppuVar22 = param_5;
  if (*(char *)((long)param_5 + lVar21) == '\x01') {
    ppuVar4 = param_5;
    func_0x00010c15b700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010bf8d060();
    _objc_release(ppuVar4);
    if ((*(byte *)((long)param_5 + (long)ppuStack_1e0) & 1) == 0) {
      if (ppuVar5 != (undefined **)0x1) goto LAB_108ed66d4;
      goto LAB_108ed66f4;
    }
    if (ppuVar5 != (undefined **)0x1) goto LAB_108ed6680;
LAB_108ed6690:
    func_0x00010bf20c00(param_5);
    dVar27 = param_4;
    func_0x00010bfb68e0(*(undefined8 *)((long)param_5 + (long)_DAT_11277d5b0));
    param_4 = param_4 - dVar27;
    func_0x00010c15b700(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    param_3 = dVar26;
  }
  else {
    if ((*(byte *)((long)param_5 + (long)ppuStack_1e0) & 1) != 0) {
LAB_108ed6680:
      func_0x00010bf20c00(param_5);
      dVar25 = (param_3 - dVar26) - dVar25;
      goto LAB_108ed6690;
    }
LAB_108ed66d4:
    func_0x00010bf20c00(param_5);
    dVar25 = param_3 - dVar25;
    func_0x00010bfb68e0(*(undefined8 *)((long)param_5 + (long)_DAT_11277d5b0));
    dVar25 = dVar25 - param_3;
LAB_108ed66f4:
    func_0x00010bf20c00(param_5);
    dVar27 = param_4;
    func_0x00010bfb68e0(*(undefined8 *)((long)param_5 + (long)_DAT_11277d5b0));
    param_4 = param_4 - dVar27;
    func_0x00010c15b700(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
  }
  param_2 = param_4 * 0.5;
  ppuVar4 = param_5;
  func_0x00010c15b700(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar25,param_2,param_3,dVar27);
  _objc_release(ppuVar4);
  _objc_release(ppuVar22);
  ppuVar22 = param_5;
  func_0x00010c15b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_5,param_6,ppuVar22);
LAB_108ed6794:
  ppuVar4 = ppuStack_1f8;
  _objc_release(ppuVar22);
  uVar18 = *(undefined8 *)((long)param_5 + lStack_1d8);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release(ppuVar6);
  _objc_release(ppuVar4);
  ppuVar5 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_240 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  ppuStack_220 = ppuVar4;
  pcStack_208 = FUN_108ed680c;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_260 = ppuVar24;
  lStack_258 = lVar21;
  ppuStack_250 = ppuVar23;
  ppuStack_248 = ppuVar7;
  ppuStack_238 = ppuVar22;
  ppuStack_230 = ppuVar6;
  ppuStack_228 = ppuVar20;
  ppuStack_218 = param_5;
  puStack_210 = &stack0xfffffffffffffff0;
  _objc_retain(uVar18);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(puVar17);
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar18;
  if ((*(byte *)((long)ppuVar5 + (long)_DAT_11277d590) & 1) == 0) {
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010be45d00(ppuVar5);
  uVar9 = uVar8;
  func_0x00010bf493c0(uVar8,param_6,puVar17);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar17);
  _objc_release(uVar8);
  uVar8 = uVar18;
  uStack_288 = uVar9;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar24 = ppuVar5;
  func_0x00010bf348e0(ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493a0(uVar8,param_6,ppuVar24);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar18;
  uStack_280 = uVar10;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebc4c0(ppuVar5,param_6,uVar18);
  uVar12 = uVar11;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar18;
  uStack_278 = uVar12;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebc4c0(ppuVar5,param_6,uVar18);
  uVar14 = uVar13;
  func_0x00010bf49420(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_270 = uVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&uStack_288,4);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010befa160(puVar3);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(ppuVar24);
  _objc_release(uVar8);
  _objc_release(uVar9);
  _objc_release(uVar18);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_268) {
    ___stack_chk_fail();
    _objc_retain(puVar16);
    func_0x00010c219b60(puVar16,param_6,0);
    puVar3 = puVar16;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar3 == (undefined *)0x0) {
      func_0x00010befbb60(uVar18,param_6,puVar16);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar16);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108ed680c; end: 108ed6a57; -[SCPreviewNGSBottomActionBar _createConstraintsForLabeledButton:withLeadingAnchor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed680c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_6);
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  if ((*(byte *)(param_3 + _DAT_11277d590) & 1) == 0) {
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010be45d00(param_3);
  uVar3 = uVar2;
  func_0x00010bf493c0(uVar2,param_4,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(uVar2);
  uVar2 = param_5;
  uStack_88 = uVar3;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010bf348e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf493a0(uVar2,param_4,lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_5;
  uStack_80 = uVar5;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebc4c0(param_3,param_4,param_5);
  uVar7 = uVar6;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_5;
  uStack_78 = uVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebc4c0(param_3,param_4,param_5);
  uVar9 = uVar8;
  func_0x00010bf49420(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010befa160(puVar1);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar11);
  func_0x00010c219b60(puVar11,param_4,0);
  puVar1 = puVar11;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 == (undefined *)0x0) {
    func_0x00010befbb60(param_5,param_4,puVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar11);
  return;
}



/* Entry: 108ed6a58; end: 108ed6abf; -[SCPreviewNGSBottomActionBar _setupLabeledButton:] */

void FUN_108ed6a58(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010c219b60(param_3,param_2,0);
  lVar1 = param_3;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010befbb60(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ed6ac0; end: 108ed6b27; -[SCPreviewNGSBottomActionBar _sizeForLabeledButton:] */

undefined1  [16]
FUN_108ed6ac0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  
  func_0x00010c087500(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0();
  _objc_release(param_4);
  dVar1 = 60.0;
  if (60.0 <= param_1) {
    dVar1 = param_1;
  }
  auVar2._0_8_ = NEON_fminnm(dVar1,0x4051800000000000);
  auVar2._8_8_ = 0x4042000000000000;
  return auVar2;
}



/* Entry: 108ed6b28; end: 108ed6b87; -[SCPreviewNGSBottomActionBar _saveAndSharebuttonLayoutStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ed6b28(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + _DAT_11277d540) != '\x01') {
    return 2;
  }
  if ((*(byte *)(param_1 + _DAT_11277d59c) >> 2 & 1) == 0) {
    return 3;
  }
  iVar2 = (int)*(undefined8 *)(param_1 + _DAT_11277d568);
  func_0x00010c234080();
  uVar1 = 3;
  if (iVar2 != 0) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 108ed6b88; end: 108ed6c3f; -[SCPreviewNGSBottomActionBar _storyButtonStateObservable] */

void FUN_108ed6b88(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ed6c40; end: 108ed6ca3;  */

void FUN_108ed6c40(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be10c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108ed6ca4; end: 108ed6de7; -[SCPreviewNGSBottomActionBar _fetchCustomStoriesWithObserver:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed6ca4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277d560);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c1055a0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ed6de8; end: 108ed6e3b;  */

void FUN_108ed6de8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be12be0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ed6e3c; end: 108ed6f5f; -[SCPreviewNGSBottomActionBar _fetchMostRecentlyPostedStoryWithCustomStories:observer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed6e3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277d558);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11277d55c);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11277d560);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277d564);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_108ed6f60;
  puStack_70 = &UNK_11098fed8;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  uStack_68 = param_4;
  FUN_108ede32c(uVar2,uVar3,uVar4,uVar1,&puStack_88);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108ed6f60; end: 108ed6fbb;  */

void FUN_108ed6f60(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddca80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ed6fbc; end: 108ed70d3; -[SCPreviewNGSBottomActionBar _changeQuickPostTextWithRecentlyPostedMyStory:recentlyPostedPublicStory:recentlyPostedCustomStory:observer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed6fbc(long param_1,undefined8 param_2,uint param_3,uint param_4,uint param_5,
                  undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined **ppuVar4;
  long lVar5;
  uint uVar6;
  
  _objc_retain(param_6);
  uVar2 = (uint)*(undefined8 *)(param_1 + _DAT_11277d568);
  func_0x00010c11aa60();
  lVar5 = (long)_DAT_11277d56c;
  uVar6 = (uint)*(undefined8 *)(param_1 + lVar5);
  func_0x000108f482e0();
  uVar1 = param_3 | param_4 | param_5;
  if ((((param_4 & 1) == 0) && (param_3 != 0)) && (param_5 == 0)) {
    uVar6 = 1;
  }
  else {
    uVar6 = (uVar1 ^ 1) & uVar6;
  }
  uVar3 = (uint)*(undefined8 *)(param_1 + lVar5);
  func_0x000108f482e0();
  if ((uVar6 == 0) || (*(char *)(param_1 + _DAT_11277d544) == '\x01')) {
    if (((((param_3 | param_5 | param_4 ^ 1) & (uVar1 | uVar3) | uVar2 ^ 0xffffffff) & 1) == 0) &&
       (*(char *)(param_1 + _DAT_11277d544) != '\x01')) {
      ppuVar4 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0a08;
    }
    else {
      ppuVar4 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0a20;
    }
  }
  else {
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d09f0;
  }
  func_0x00010c0d9840(param_6,param_2,ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 108ed70d4; end: 108ed70eb; -[SCPreviewNGSBottomActionBar preferredHeight] */

undefined8 FUN_108ed70d4(void)

{
  undefined8 in_d3;
  
  func_0x00010bf20c00();
  return in_d3;
}



/* Entry: 108ed70ec; end: 108ed70ef; -[SCPreviewNGSBottomActionBar componentView] */

void FUN_108ed70ec(void)

{
  return;
}



/* Entry: 108ed70f0; end: 108ed70ff; -[SCPreviewNGSBottomActionBar buttonConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ed70f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d59c);
}



/* Entry: 108ed7100; end: 108ed710f; -[SCPreviewNGSBottomActionBar spotlightStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_108ed7100(long param_1)

{
  return *(undefined2 *)(param_1 + _DAT_11277d594);
}



/* Entry: 108ed7110; end: 108ed711f; -[SCPreviewNGSBottomActionBar setSpotlightStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed7110(long param_1,undefined8 param_2,undefined2 param_3)

{
  *(undefined2 *)(param_1 + _DAT_11277d594) = param_3;
  return;
}



/* Entry: 108ed7120; end: 108ed715f; -[SCPreviewNGSBottomActionBar setSaveButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed7120(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277d5a0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ed7160; end: 108ed719f; -[SCPreviewNGSBottomActionBar setShareButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed7160(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277d5a4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ed71a0; end: 108ed71df; -[SCPreviewNGSBottomActionBar setStoryButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed71a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277d5a8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ed71e0; end: 108ed721f; -[SCPreviewNGSBottomActionBar setSpotlightButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed71e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277d5ac;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ed7220; end: 108ed725f; -[SCPreviewNGSBottomActionBar setSendButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed7220(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277d5b0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ed7260; end: 108ed73cf; -[SCPreviewNGSBottomActionBar .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed7260(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277d5b0,0);
  _objc_storeStrong(param_1 + _DAT_11277d5ac,0);
  _objc_storeStrong(param_1 + _DAT_11277d5a8,0);
  _objc_storeStrong(param_1 + _DAT_11277d5a4,0);
  _objc_storeStrong(param_1 + _DAT_11277d5a0,0);
  _objc_storeStrong(param_1 + _DAT_11277d5b8,0);
  _objc_storeStrong(param_1 + _DAT_11277d584,0);
  _objc_storeStrong(param_1 + _DAT_11277d578,0);
  _objc_storeStrong(param_1 + _DAT_11277d574,0);
  _objc_storeStrong(param_1 + _DAT_11277d56c,0);
  _objc_storeStrong(param_1 + _DAT_11277d564,0);
  _objc_storeStrong(param_1 + _DAT_11277d568,0);
  _objc_storeStrong(param_1 + _DAT_11277d560,0);
  _objc_storeStrong(param_1 + _DAT_11277d55c,0);
  _objc_storeStrong(param_1 + _DAT_11277d558,0);
  _objc_storeStrong(param_1 + _DAT_11277d554,0);
  _objc_storeStrong(param_1 + _DAT_11277d550,0);
  _objc_storeStrong(param_1 + _DAT_11277d54c,0);
  _objc_storeStrong(param_1 + _DAT_11277d548,0);
  _objc_storeStrong(param_1 + _DAT_11277d5b4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277d534,0);
  return;
}



/* Entry: 108ed73d0; end: 108ed79a7; -[SCPreviewNGSSaveButton initWithButtonStyle:layoutStyle:useTallerButtons:useLighterColorButtons:memoriesPostSaveIconEnabled:shareButtonEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108ed73d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,int param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_a0 [48];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uVar1 = param_1;
  func_0x000108ede8b8();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b0c40;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puStack_68 = PTR_PTR_1126ff158;
  puVar4 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar4,
                      PTR_s_initWithFrame_style_layoutStyle__1125e2d88,param_3,param_4,puVar3,uVar1,
                      param_5,param_6,0);
  if (puVar4 != (undefined8 *)0x0) {
    func_0x00010c1e1640(0x3ff0000000000000,puVar4);
    func_0x00010c1e1660(0x3fee666666666666,puVar4);
    puVar5 = puVar4;
    func_0x00010c271420(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21ad00();
    _objc_release(puVar5);
    *(undefined8 *)((long)puVar4 + (long)_DAT_11277d5c0) = param_4;
    lVar9 = (long)_DAT_11277d5c4;
    *(undefined1 *)((long)puVar4 + lVar9) = param_8;
    puVar2 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    lVar11 = (long)_DAT_11277d5c8;
    uVar10 = *(undefined8 *)((long)puVar4 + lVar11);
    *(undefined **)((long)puVar4 + lVar11) = puVar2;
    _objc_release(uVar10);
    func_0x00010c1a8560(*(undefined8 *)((long)puVar4 + lVar11));
    func_0x00010c23d620(*(undefined8 *)((long)puVar4 + lVar11));
    _CGAffineTransformMakeScale(auStack_a0,0x3fe3333333333333,0x3fe3333333333333);
    func_0x00010c219960(*(undefined8 *)((long)puVar4 + lVar11));
    func_0x00010befbb60(puVar4);
    puVar2 = PTR_PTR_1126dc6f8;
    _objc_alloc();
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c046ae0(0x4038000000000000,0x3ff0000000000000);
    uVar10 = *(undefined8 *)((long)puVar4 + (long)_DAT_11277d5cc);
    *(undefined **)((long)puVar4 + (long)_DAT_11277d5cc) = puVar2;
    _objc_release(uVar10);
    _objc_release(puVar6);
    func_0x00010befbb60(puVar4);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    lVar11 = (long)_DAT_11277d5d0;
    uVar10 = *(undefined8 *)((long)puVar4 + lVar11);
    *(undefined **)((long)puVar4 + lVar11) = puVar2;
    _objc_release(uVar10);
    func_0x00010c1677c0(0,*(undefined8 *)((long)puVar4 + lVar11));
    func_0x00010c182220(*(undefined8 *)((long)puVar4 + lVar11));
    uVar10 = *(undefined8 *)((long)puVar4 + lVar11);
    puVar5 = puVar4;
    func_0x00010bdd73a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(uVar10);
    _objc_release(puVar5);
    func_0x00010befbb60(puVar4);
    *(char *)((long)puVar4 + (long)_DAT_11277d5d4) = (char)param_7;
    if (param_7 == 0) {
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar2;
      func_0x00010bfe9720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      func_0x00010c01bf60();
      lVar11 = (long)_DAT_11277d5d8;
      uVar10 = *(undefined8 *)((long)puVar4 + lVar11);
      *(undefined **)((long)puVar4 + lVar11) = puVar2;
      _objc_release(uVar10);
      func_0x00010c1677c0(0,*(undefined8 *)((long)puVar4 + lVar11));
      func_0x00010c182220(*(undefined8 *)((long)puVar4 + lVar11));
      uVar10 = *(undefined8 *)((long)puVar4 + lVar11);
      puVar5 = puVar4;
      func_0x00010bdd73a0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216160(uVar10);
      _objc_release(puVar5);
      func_0x00010befbb60(puVar4);
    }
    else {
      puVar8 = PTR_PTR_1126b0c40;
      func_0x00010bfe8d40(0x4038000000000000,0x4038000000000000,PTR_PTR_1126b0c40);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      func_0x00010c01bf60();
      lVar11 = (long)_DAT_11277d5d8;
      uVar10 = *(undefined8 *)((long)puVar4 + lVar11);
      *(undefined **)((long)puVar4 + lVar11) = puVar2;
      _objc_release(uVar10);
      func_0x00010c1677c0(0,*(undefined8 *)((long)puVar4 + lVar11));
      func_0x00010c182220(*(undefined8 *)((long)puVar4 + lVar11));
      uVar10 = *(undefined8 *)((long)puVar4 + lVar11);
      puVar5 = puVar4;
      func_0x00010bdd73a0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216160(uVar10);
      _objc_release(puVar5);
      func_0x00010befbb60(puVar4);
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar2;
      func_0x00010bfe9720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      func_0x00010c01bf60();
      lVar11 = (long)_DAT_11277d5dc;
      uVar10 = *(undefined8 *)((long)puVar4 + lVar11);
      *(undefined **)((long)puVar4 + lVar11) = puVar2;
      _objc_release(uVar10);
      func_0x00010c1677c0(0,*(undefined8 *)((long)puVar4 + lVar11));
      func_0x00010c182220(*(undefined8 *)((long)puVar4 + lVar11));
      func_0x00010befbb60(puVar4);
      _objc_release(puVar7);
    }
    _objc_release(puVar8);
    if (*(char *)((long)puVar4 + lVar9) == '\x01') {
      puVar2 = PTR_PTR_1126b0c40;
      func_0x00010bfe8d40(0x4038000000000000,0x4038000000000000,PTR_PTR_1126b0c40);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      func_0x00010c01bf60();
      lVar9 = (long)_DAT_11277d5e0;
      uVar10 = *(undefined8 *)((long)puVar4 + lVar9);
      *(undefined **)((long)puVar4 + lVar9) = puVar8;
      _objc_release(uVar10);
      func_0x00010c1677c0(0,*(undefined8 *)((long)puVar4 + lVar9));
      func_0x00010c182220(*(undefined8 *)((long)puVar4 + lVar9));
      uVar10 = *(undefined8 *)((long)puVar4 + lVar9);
      puVar5 = puVar4;
      func_0x00010bdd73a0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216160(uVar10);
      _objc_release(puVar5);
      func_0x00010befbb60(puVar4);
      _objc_release(puVar2);
    }
    _objc_release(puVar6);
  }
  _objc_release(puVar3);
  _objc_release(uVar1);
  return puVar4;
}



/* Entry: 108ed79a8; end: 108ed7a0b; -[SCPreviewNGSSaveButton sizeThatFits:] */

undefined1  [16] FUN_108ed79a8(double param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  func_0x00010c271420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0();
  _objc_release(param_2);
  auVar1._8_8_ = 0x4048000000000000;
  auVar1._0_8_ = param_1 + 24.0 + 8.0 + 40.0;
  return auVar1;
}



/* Entry: 108ed7a0c; end: 108ed7a3f; -[SCPreviewNGSSaveButton _buttonImageTintColor] */

void FUN_108ed7a0c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c25dfa0();
  uVar1 = 0xd5;
  if (param_1 != 1) {
    uVar1 = 0xffffffff800000bb;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c23bb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color_withThemedColor__11266c8e8,uVar1,
             0xc6);
  return;
}



/* Entry: 108ed7a40; end: 108ed7cd7; -[SCPreviewNGSSaveButton layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed7a40(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126ff158;
  lStack_80 = param_5;
  _objc_msgSendSuper2(&lStack_80,PTR_s_layoutSubviews_112600e60);
  lVar1 = *(long *)(param_5 + _DAT_11277d5c0);
  lVar2 = param_5;
  func_0x00010bfe5760(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  dVar8 = param_1;
  _CGRectGetMidX();
  _CGRectGetMidY(param_1,param_2,param_3,param_4);
  dVar3 = param_1;
  _objc_release(lVar2);
  if (lVar1 == 4) {
    lVar2 = param_5;
    func_0x00010bfe7240(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    dVar8 = dVar3;
    _CGRectGetMidX();
    _CGRectGetMidY(dVar3,param_2,param_3,param_4);
    dVar4 = dVar3;
    _objc_release(lVar2);
    lVar2 = param_5;
    func_0x00010bf4b2a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetMinX();
    dVar8 = dVar8 + dVar4;
    _objc_release(lVar2);
    param_1 = dVar3;
  }
  uVar6 = 0x4038000000000000;
  uVar7 = 0x4038000000000000;
  dVar3 = dVar8;
  dVar4 = param_1;
  func_0x00010b690910(dVar8,param_1,0x4038000000000000,0x4038000000000000);
  func_0x00010c17a6a0(dVar8,param_1,*(undefined8 *)(param_5 + _DAT_11277d5c8));
  func_0x00010c17a6a0(dVar8,param_1,*(undefined8 *)(param_5 + _DAT_11277d5cc));
  _CGRectInset(dVar3,dVar4,uVar6,uVar7,0x4000000000000000,0x4000000000000000);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11277d5d0));
  lVar2 = (long)_DAT_11277d5d8;
  func_0x00010c17a6a0(dVar8,param_1,*(undefined8 *)(param_5 + lVar2));
  func_0x00010c19f0e0(dVar3,dVar4,uVar6,uVar7,*(undefined8 *)(param_5 + lVar2));
  if (*(char *)(param_5 + _DAT_11277d5d4) == '\x01') {
    lVar1 = (long)_DAT_11277d5dc;
    dVar5 = 18.0;
    func_0x00010c202c80(0x4032000000000000,0x4032000000000000,*(undefined8 *)(param_5 + lVar1));
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar2));
    _CGRectGetMaxX();
    dVar9 = dVar5 + 2.0;
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar2));
    _CGRectGetMinY();
    func_0x00010c17a6a0(dVar9,dVar5 + 4.0,*(undefined8 *)(param_5 + lVar1));
  }
  if (*(char *)(param_5 + _DAT_11277d5c4) == '\x01') {
    lVar2 = (long)_DAT_11277d5e0;
    func_0x00010c17a6a0(dVar8,param_1,*(undefined8 *)(param_5 + lVar2));
    _CGRectInset(dVar3,dVar4,uVar6,uVar7,0x4000000000000000,0x4000000000000000);
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar2));
  }
  return;
}



/* Entry: 108ed7cd8; end: 108ed7d37; -[SCPreviewNGSSaveButton updateLabelWithText:shouldShow:] */

void FUN_108ed7cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c271420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 108ed7d38; end: 108ed7fe3; -[SCPreviewNGSSaveButton startAnimationForSaving] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed7d38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined1 auStack_98 [48];
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf040e0(0x3fc53f7ced916873,0,PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_2,
                      &PTR____CFConstantStringClassReference_110dbf678,
                      &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185970,
                      &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185980,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionLinear_110346d88);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf040e0(0x3fc53f7ced916873,0,PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_2,
                      &PTR____CFConstantStringClassReference_110dc8938,
                      &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185970,
                      &PTR__OBJC_CLASS___NSConstantDoubleNumber_111185990,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_110346d80);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
  func_0x00010bf039a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_68 = puVar1;
  puStack_60 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168400(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010c192d40(0x3fc53f7ced916873,puVar3);
  func_0x00010c16fd40(0,puVar3);
  lVar14 = param_1;
  func_0x00010bfe5760(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar14;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(lVar12);
  _objc_release(lVar14);
  lVar14 = param_1;
  func_0x00010bfe5760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
  _objc_release(lVar14);
  _CGAffineTransformMakeScale(auStack_98,0x3fe999999999999a,0x3fe999999999999a);
  lVar14 = param_1;
  func_0x00010bfe5760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(lVar14);
  lVar14 = (long)_DAT_11277d5e4;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar14));
  puVar4 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010c270940(0x3fb0e5604189374c,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,param_1,
                      PTR_s__savingIndicatorTimerDidFire__11253e060,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar4;
  _objc_release(uVar11);
  puVar4 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010bf5fe80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc020();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lStack_150 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf2e3a0();
  puVar2 = puVar1;
  func_0x00010bfe5760(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12b200();
  _objc_release(puVar3);
  _objc_release(puVar2);
  lVar14 = (long)_DAT_11277d5e4;
  func_0x00010c069d00(*(undefined8 *)(puVar1 + lVar14));
  uVar11 = *(undefined8 *)(puVar1 + lVar14);
  *(undefined8 *)(puVar1 + lVar14) = 0;
  _objc_release(uVar11);
  func_0x00010c2558c0(*(undefined8 *)(puVar1 + _DAT_11277d5c8));
  puVar2 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  func_0x00010bf04040(PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240,param_2,
                      &PTR____CFConstantStringClassReference_110dbf678);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220360();
  func_0x00010c1b6d00(puVar2,param_2,&PTR__OBJC_CLASS___NSConstantArray_111183200);
  uVar15 = *(undefined8 *)PTR__kCAMediaTimingFunctionLinear_110346d88;
  puVar3 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  puStack_160 = puVar3;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_158 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_160,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2160a0(puVar2,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c192d40(0x3fe3333333333333,puVar2);
  puVar3 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  func_0x00010bf04040(PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240,param_2,
                      &PTR____CFConstantStringClassReference_110dc8938);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220360();
  func_0x00010c1b6d00(puVar3,param_2,&PTR__OBJC_CLASS___NSConstantArray_111183230);
  uVar10 = *(undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_110346d80;
  puVar4 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)PTR__kCAMediaTimingFunctionEaseInEaseOut_110346d78;
  puVar5 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  puStack_180 = puVar4;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  puStack_178 = puVar5;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  puStack_170 = puVar6;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionEaseIn_110346d70);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_168 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_180,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2160a0(puVar3,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c192d40(0x3fe3333333333333,puVar3);
  puVar4 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
  func_0x00010bf039a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_190 = puVar3;
  puStack_188 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_190,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168400(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  func_0x00010c192d40(0x3fe3333333333333,puVar4);
  uVar11 = *(undefined8 *)(puVar1 + _DAT_11277d5d0);
  func_0x00010c08c0e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(uVar11);
  puVar5 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  func_0x00010bf04040(PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240,param_2,
                      &PTR____CFConstantStringClassReference_110dbf678);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220360();
  func_0x00010c1b6d00(puVar5,param_2,&PTR__OBJC_CLASS___NSConstantArray_111183260);
  puVar6 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  puStack_1a0 = puVar6;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_198 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1a0,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2160a0(puVar5,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x00010c192d40(0x3fe3333333333333,puVar5);
  puVar8 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  func_0x00010bf04040(PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240,param_2,
                      &PTR____CFConstantStringClassReference_110f011f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220360();
  func_0x00010c1b6d00(puVar8,param_2,&PTR__OBJC_CLASS___NSConstantArray_111183290);
  puVar6 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  puStack_1b0 = puVar6;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_1a8 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1b0,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2160a0(puVar8,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x00010c192d40(0x3fe3333333333333,puVar8);
  puVar6 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
  func_0x00010bf039a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_1c0 = puVar8;
  puStack_1b8 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_1c0,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168400(puVar6,param_2,puVar7);
  _objc_release(puVar7);
  func_0x00010c192d40(0x3fe3333333333333,puVar6);
  lVar14 = (long)_DAT_11277d5d8;
  uVar11 = *(undefined8 *)(puVar1 + lVar14);
  func_0x00010c08c0e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(uVar11);
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(puVar1 + lVar14));
  if (puVar1[_DAT_11277d5d4] == '\x01') {
    lVar14 = (long)_DAT_11277d5dc;
    uVar11 = *(undefined8 *)(puVar1 + lVar14);
    func_0x00010c08c0e0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
    _objc_release(uVar11);
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(puVar1 + lVar14));
  }
  lVar14 = (long)_DAT_11277d5e8;
  func_0x00010c069d00(*(undefined8 *)(puVar1 + lVar14));
  puVar7 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010c270940(0x3fc53f7ced916873,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,puVar1,
                      PTR_s__sunburstTimerDidFire__11253e068,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(puVar1 + lVar14);
  *(undefined **)(puVar1 + lVar14) = puVar7;
  _objc_release(uVar11);
  puVar7 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010bf5fe80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc020();
  _objc_release(puVar7);
  func_0x00010bec1880(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_150) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = puVar2;
  func_0x00010bfe5760();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(puVar3);
  _objc_release(puVar1);
  func_0x00010c2558c0(*(undefined8 *)(puVar2 + _DAT_11277d5c8));
  func_0x00010c2559a0(*(undefined8 *)(puVar2 + _DAT_11277d5cc));
  lVar12 = (long)_DAT_11277d5d0;
  uVar11 = *(undefined8 *)(puVar2 + lVar12);
  func_0x00010c08c0e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar11);
  lVar16 = (long)_DAT_11277d5d8;
  uVar11 = *(undefined8 *)(puVar2 + lVar16);
  func_0x00010c08c0e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar11);
  lVar17 = (long)_DAT_11277d5dc;
  uVar11 = *(undefined8 *)(puVar2 + lVar17);
  func_0x00010c08c0e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar11);
  lVar13 = (long)_DAT_11277d5e0;
  uVar11 = *(undefined8 *)(puVar2 + lVar13);
  func_0x00010c08c0e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar11);
  lVar14 = (long)_DAT_11277d5e4;
  func_0x00010c069d00(*(undefined8 *)(puVar2 + lVar14));
  uVar11 = *(undefined8 *)(puVar2 + lVar14);
  *(undefined8 *)(puVar2 + lVar14) = 0;
  _objc_release(uVar11);
  lVar14 = (long)_DAT_11277d5e8;
  func_0x00010c069d00(*(undefined8 *)(puVar2 + lVar14));
  uVar11 = *(undefined8 *)(puVar2 + lVar14);
  *(undefined8 *)(puVar2 + lVar14) = 0;
  _objc_release(uVar11);
  lVar14 = (long)_DAT_11277d5ec;
  func_0x00010c069d00(*(undefined8 *)(puVar2 + lVar14));
  uVar11 = *(undefined8 *)(puVar2 + lVar14);
  *(undefined8 *)(puVar2 + lVar14) = 0;
  _objc_release(uVar11);
  puVar1 = puVar2;
  func_0x00010bfe5760(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010bfe5760(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(puVar1);
  func_0x00010c1677c0(0,*(undefined8 *)(puVar2 + lVar12));
  func_0x00010c1677c0(0,*(undefined8 *)(puVar2 + lVar16));
  if (puVar2[_DAT_11277d5d4] == '\x01') {
    func_0x00010c1677c0(0,*(undefined8 *)(puVar2 + lVar17));
  }
  if (puVar2[_DAT_11277d5c4] == '\x01') {
    func_0x00010c1677c0(0,*(undefined8 *)(puVar2 + lVar13));
  }
  return;
}



/* Entry: 108ed7fe4; end: 108ed869f; -[SCPreviewNGSSaveButton startAnimationForSuccess] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed7fe4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf2e3a0();
  lVar11 = param_1;
  func_0x00010bfe5760(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12b200();
  _objc_release(lVar12);
  _objc_release(lVar11);
  lVar11 = (long)_DAT_11277d5e4;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar11));
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  *(undefined8 *)(param_1 + lVar11) = 0;
  _objc_release(uVar1);
  func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_11277d5c8));
  puVar2 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  func_0x00010bf04040(PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240,param_2,
                      &PTR____CFConstantStringClassReference_110dbf678);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220360();
  func_0x00010c1b6d00(puVar2,param_2,&PTR__OBJC_CLASS___NSConstantArray_111183200);
  uVar14 = *(undefined8 *)PTR__kCAMediaTimingFunctionLinear_110346d88;
  puVar3 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  puStack_90 = puVar3;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_90,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2160a0(puVar2,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c192d40(0x3fe3333333333333,puVar2);
  puVar3 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  func_0x00010bf04040(PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240,param_2,
                      &PTR____CFConstantStringClassReference_110dc8938);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220360();
  func_0x00010c1b6d00(puVar3,param_2,&PTR__OBJC_CLASS___NSConstantArray_111183230);
  uVar10 = *(undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_110346d80;
  puVar4 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)PTR__kCAMediaTimingFunctionEaseInEaseOut_110346d78;
  puVar5 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  puStack_b0 = puVar4;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  puStack_a8 = puVar5;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  puStack_a0 = puVar6;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionEaseIn_110346d70);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_b0,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2160a0(puVar3,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c192d40(0x3fe3333333333333,puVar3);
  puVar4 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
  func_0x00010bf039a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_c0 = puVar3;
  puStack_b8 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_c0,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168400(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  func_0x00010c192d40(0x3fe3333333333333,puVar4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277d5d0);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(uVar1);
  puVar5 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  func_0x00010bf04040(PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240,param_2,
                      &PTR____CFConstantStringClassReference_110dbf678);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220360();
  func_0x00010c1b6d00(puVar5,param_2,&PTR__OBJC_CLASS___NSConstantArray_111183260);
  puVar6 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  puStack_d0 = puVar6;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_c8 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_d0,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2160a0(puVar5,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x00010c192d40(0x3fe3333333333333,puVar5);
  puVar8 = PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240;
  func_0x00010bf04040(PTR__OBJC_CLASS___CAKeyframeAnimation_1126c8240,param_2,
                      &PTR____CFConstantStringClassReference_110f011f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220360();
  func_0x00010c1b6d00(puVar8,param_2,&PTR__OBJC_CLASS___NSConstantArray_111183290);
  puVar9 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  puStack_e0 = puVar9;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_d8 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_e0,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2160a0(puVar8,param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar9);
  func_0x00010c192d40(0x3fe3333333333333,puVar8);
  puVar6 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
  func_0x00010bf039a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_f0 = puVar8;
  puStack_e8 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_f0,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168400(puVar6,param_2,puVar7);
  _objc_release(puVar7);
  func_0x00010c192d40(0x3fe3333333333333,puVar6);
  lVar11 = (long)_DAT_11277d5d8;
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(uVar1);
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar11));
  if (*(char *)(param_1 + _DAT_11277d5d4) == '\x01') {
    lVar11 = (long)_DAT_11277d5dc;
    uVar1 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c08c0e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
    _objc_release(uVar1);
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar11));
  }
  lVar11 = (long)_DAT_11277d5e8;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar11));
  puVar7 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010c270940(0x3fc53f7ced916873,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,param_1,
                      PTR_s__sunburstTimerDidFire__11253e068,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar7;
  _objc_release(uVar1);
  puVar7 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010bf5fe80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc020();
  _objc_release(puVar7);
  func_0x00010bec1880(param_1);
  _objc_release(puVar6);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = puVar2;
  func_0x00010bfe5760();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c2558c0(*(undefined8 *)(puVar2 + _DAT_11277d5c8));
  func_0x00010c2559a0(*(undefined8 *)(puVar2 + _DAT_11277d5cc));
  lVar12 = (long)_DAT_11277d5d0;
  uVar1 = *(undefined8 *)(puVar2 + lVar12);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar1);
  lVar15 = (long)_DAT_11277d5d8;
  uVar1 = *(undefined8 *)(puVar2 + lVar15);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar1);
  lVar16 = (long)_DAT_11277d5dc;
  uVar1 = *(undefined8 *)(puVar2 + lVar16);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar1);
  lVar13 = (long)_DAT_11277d5e0;
  uVar1 = *(undefined8 *)(puVar2 + lVar13);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar1);
  lVar11 = (long)_DAT_11277d5e4;
  func_0x00010c069d00(*(undefined8 *)(puVar2 + lVar11));
  uVar1 = *(undefined8 *)(puVar2 + lVar11);
  *(undefined8 *)(puVar2 + lVar11) = 0;
  _objc_release(uVar1);
  lVar11 = (long)_DAT_11277d5e8;
  func_0x00010c069d00(*(undefined8 *)(puVar2 + lVar11));
  uVar1 = *(undefined8 *)(puVar2 + lVar11);
  *(undefined8 *)(puVar2 + lVar11) = 0;
  _objc_release(uVar1);
  lVar11 = (long)_DAT_11277d5ec;
  func_0x00010c069d00(*(undefined8 *)(puVar2 + lVar11));
  uVar1 = *(undefined8 *)(puVar2 + lVar11);
  *(undefined8 *)(puVar2 + lVar11) = 0;
  _objc_release(uVar1);
  puVar3 = puVar2;
  func_0x00010bfe5760(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010bfe5760(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(puVar3);
  func_0x00010c1677c0(0,*(undefined8 *)(puVar2 + lVar12));
  func_0x00010c1677c0(0,*(undefined8 *)(puVar2 + lVar15));
  if (puVar2[_DAT_11277d5d4] == '\x01') {
    func_0x00010c1677c0(0,*(undefined8 *)(puVar2 + lVar16));
  }
  if (puVar2[_DAT_11277d5c4] == '\x01') {
    func_0x00010c1677c0(0,*(undefined8 *)(puVar2 + lVar13));
  }
  return;
}



/* Entry: 108ed86a0; end: 108ed88bb; -[SCPreviewNGSSaveButton reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed86a0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = param_1;
  func_0x00010bfe5760();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_11277d5c8));
  func_0x00010c2559a0(*(undefined8 *)(param_1 + _DAT_11277d5cc));
  lVar3 = (long)_DAT_11277d5d0;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar1);
  lVar5 = (long)_DAT_11277d5d8;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar1);
  lVar6 = (long)_DAT_11277d5dc;
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar1);
  lVar4 = (long)_DAT_11277d5e0;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar1);
  lVar2 = (long)_DAT_11277d5e4;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_11277d5e8;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_11277d5ec;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010bfe5760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bfe5760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(lVar2);
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar5));
  if (*(char *)(param_1 + _DAT_11277d5d4) == '\x01') {
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar6));
  }
  if (*(char *)(param_1 + _DAT_11277d5c4) == '\x01') {
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar4));
  }
  return;
}



/* Entry: 108ed88bc; end: 108ed892b; -[SCPreviewNGSSaveButton setSaved:] */

/* WARNING: Possible PIC construction at 0x000108ed88fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108ed8900) */

void FUN_108ed88bc(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  func_0x00010bfe5760();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0;
  if (param_3 == 0) {
    uVar1 = 0x3ff0000000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1);
  return;
}



/* Entry: 108ed892c; end: 108ed8963; -[SCPreviewNGSSaveButton pointInside:withEvent:] */

void FUN_108ed892c(void)

{
  func_0x00010bf20c00();
  _CGRectInset();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return;
}



/* Entry: 108ed8964; end: 108ed899f; -[SCPreviewNGSSaveButton _savingIndicatorTimerDidFire:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed8964(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c24dbc0(*(undefined8 *)(param_1 + _DAT_11277d5c8));
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277d5e4);
  *(undefined8 *)(param_1 + _DAT_11277d5e4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ed89a0; end: 108ed8acf; -[SCPreviewNGSSaveButton _sunburstTimerDidFire:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed89a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  code *pcVar8;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar7 = &stack0xfffffffffffffff0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_60 = puVar1;
  func_0x00010c0df720(0x403b800000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_58 = puVar6;
  func_0x00010c0df720(0x403e800000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar6);
  _objc_release(puVar1);
  func_0x00010c24dda0(*(undefined8 *)(param_1 + _DAT_11277d5cc),param_2,
                      &PTR__OBJC_CLASS___NSConstantArray_1111832a8,puVar3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11277d5e8);
  *(undefined8 *)(param_1 + _DAT_11277d5e8) = 0;
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (puVar3[_DAT_11277d5c4] == '\x01') {
    puVar6 = &DAT_11277d5cc;
    pcVar8 = FUN_108ed8ad0;
    lVar5 = (long)_DAT_11277d5ec;
    func_0x00010c069d00(*(undefined8 *)(puVar3 + lVar5));
    puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x00010c1503c0(0x3ff0000000000000,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,puVar3,
                        PTR_s__startShareAnimation__11253e070,0,0,in_x6,in_x7,puVar6,param_1,puVar7,
                        pcVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(puVar3 + lVar5);
    *(undefined **)(puVar3 + lVar5) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 108ed8ad0; end: 108ed8b4b; -[SCPreviewNGSSaveButton _startShareAnimationIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed8ad0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + _DAT_11277d5c4) == '\x01') {
    lVar3 = (long)_DAT_11277d5ec;
    func_0x00010c069d00(*(undefined8 *)(param_1 + lVar3));
    puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x00010c1503c0(0x3ff0000000000000,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,param_1,
                        PTR_s__startShareAnimation__11253e070,0,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 108ed8b4c; end: 108ed8c4b; -[SCPreviewNGSSaveButton _startShareAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed8b4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277d5e0;
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar3));
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf03400(0x3fc999999999999a,puVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277d5ec);
  *(undefined8 *)(param_1 + _DAT_11277d5ec) = 0;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108ed8c4c; end: 108ed8d03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed8c4c(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  
  param_5 = param_5 + 0x20;
  _objc_loadWeakRetained();
  if (param_5 != 0) {
    lVar1 = (long)_DAT_11277d5d8;
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar1));
    param_2 = param_2 - param_4;
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar1));
    uVar2 = 0;
    func_0x00010c1677c0(0,*(undefined8 *)(param_5 + lVar1));
    lVar1 = (long)_DAT_11277d5e0;
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar1));
    dVar3 = param_4;
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar1));
    func_0x00010c19f0e0(uVar2,param_2 - dVar3,param_3,param_4,*(undefined8 *)(param_5 + lVar1));
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_5 + lVar1));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108ed8d04; end: 108ed8d13; -[SCPreviewNGSSaveButton isSaved] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108ed8d04(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277d5bc);
}



/* Entry: 108ed8d14; end: 108ed8dc3; -[SCPreviewNGSSaveButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed8d14(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277d5ec,0);
  _objc_storeStrong(param_1 + _DAT_11277d5e8,0);
  _objc_storeStrong(param_1 + _DAT_11277d5e4,0);
  _objc_storeStrong(param_1 + _DAT_11277d5e0,0);
  _objc_storeStrong(param_1 + _DAT_11277d5dc,0);
  _objc_storeStrong(param_1 + _DAT_11277d5d8,0);
  _objc_storeStrong(param_1 + _DAT_11277d5d0,0);
  _objc_storeStrong(param_1 + _DAT_11277d5cc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277d5c8,0);
  return;
}



/* Entry: 108ed8dc4; end: 108ed9823; -[SCPreviewNGSSendButton initWithFrame:shouldUpdateSendToButtonTitle:isLargeIconEnabled:useTallerButtons:useSmallerFontSize:isNGSActionBarRTLEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108ed8dc4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,int param_5,
             int param_6,int param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined *puStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_118 = PTR_PTR_1126ff160;
  puVar1 = &uStack_120;
  uStack_120 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar3 = (undefined *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    uVar17 = 0x4048000000000000;
    if (param_5 == 0) {
      uVar17 = 0x4042000000000000;
    }
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277d5f0) = uVar17;
    puVar2 = puVar1;
    func_0x00010bdd21c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c17d4c0(puVar1);
    func_0x00010c1c3c80(0x3ff0ccccc0000000,puVar1);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277d5f4) = 0;
    puVar3 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    _objc_alloc_init();
    lVar16 = (long)_DAT_11277d5f8;
    uVar17 = *(undefined8 *)((long)puVar1 + lVar16);
    *(undefined **)((long)puVar1 + lVar16) = puVar3;
    _objc_release(uVar17);
    func_0x00010bef9680(puVar1);
    puVar3 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    _objc_alloc_init();
    lVar13 = (long)_DAT_11277d5fc;
    uVar17 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined **)((long)puVar1 + lVar13) = puVar3;
    _objc_release(uVar17);
    func_0x00010bef9680(puVar1);
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar14 = (long)_DAT_11277d600;
    uVar17 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined **)((long)puVar1 + lVar14) = puVar3;
    _objc_release(uVar17);
    if ((param_3 & 1) == 0) {
      func_0x000108edee88();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108edeac8();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar14));
    _objc_release(uVar17);
    uVar17 = 0x402c000000000000;
    if (param_6 == 0) {
      uVar17 = 0x4030000000000000;
    }
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(uVar17,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar14));
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010c1c83a0(0x3fe8000000000000,*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010c165e20(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010c23d620(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010befbb60(puVar1);
    puVar5 = PTR_PTR_1126b0c40;
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_retain(puVar6);
    puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar4 = puVar6;
    if (param_7 != 0) {
      func_0x00010bfe77e0(puVar6);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c01bf60();
    lVar15 = (long)_DAT_11277d604;
    uVar17 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined **)((long)puVar1 + lVar15) = puVar5;
    _objc_release(uVar17);
    puStack_150 = puVar1;
    puStack_168 = puVar1;
    puStack_1b0 = puVar1;
    puStack_1c8 = puVar1;
    puVar2 = puVar1;
    if (param_7 == 0) {
      func_0x00010c216160(*(undefined8 *)((long)puVar1 + lVar15));
      func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar15));
      func_0x00010befbb60(puVar1);
      puStack_1e8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uStack_130 = *(undefined8 *)((long)puVar1 + lVar16);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uStack_138 = *(undefined8 *)((long)puVar1 + lVar13);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uStack_140 = uStack_130;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_110 = uStack_140;
      uStack_148 = *(undefined8 *)((long)puVar1 + lVar16);
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      uStack_158 = uStack_148;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_108 = uStack_158;
      uStack_160 = *(undefined8 *)((long)puVar1 + lVar13);
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_170 = uStack_160;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_100 = uStack_170;
      uStack_178 = *(undefined8 *)((long)puVar1 + lVar14);
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      uStack_180 = *(undefined8 *)((long)puVar1 + lVar16);
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_188 = uStack_178;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_f8 = uStack_188;
      uStack_190 = *(undefined8 *)((long)puVar1 + lVar15);
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_198 = *(undefined8 *)((long)puVar1 + lVar13);
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      uStack_1a0 = uStack_190;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_f0 = uStack_1a0;
      uStack_1a8 = *(undefined8 *)((long)puVar1 + lVar14);
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      uStack_1b8 = uStack_1a8;
      func_0x00010bf49480(0x4020000000000000);
      _objc_retainAutoreleasedReturnValue();
      uStack_e8 = uStack_1b8;
      uStack_1c0 = *(undefined8 *)((long)puVar1 + lVar15);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uStack_1d0 = uStack_1c0;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_e0 = uStack_1d0;
      uStack_1d8 = *(undefined8 *)((long)puVar1 + lVar15);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)((long)puVar1 + lVar15);
      func_0x00010bfe6ac0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      uVar17 = uStack_1d8;
      func_0x00010bf49420();
      _objc_retainAutoreleasedReturnValue();
      uStack_d8 = uVar17;
      uVar8 = *(undefined8 *)((long)puVar1 + lVar14);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf348e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar8;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_d0 = uVar11;
      uVar9 = *(undefined8 *)((long)puVar1 + lVar14);
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)((long)puVar1 + lVar15);
      func_0x00010c08e400(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar9;
      func_0x00010bf493c0(0xc020000000000000);
      _objc_retainAutoreleasedReturnValue();
      uStack_c8 = uVar12;
    }
    else {
      _objc_release(puVar4);
      func_0x00010c216160(*(undefined8 *)((long)puVar1 + lVar15));
      func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar15));
      func_0x00010befbb60(puVar1);
      puStack_1e8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uStack_130 = *(undefined8 *)((long)puVar1 + lVar16);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uStack_138 = *(undefined8 *)((long)puVar1 + lVar13);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uStack_140 = uStack_130;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_c0 = uStack_140;
      uStack_148 = *(undefined8 *)((long)puVar1 + lVar16);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uStack_158 = uStack_148;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_b8 = uStack_158;
      uStack_160 = *(undefined8 *)((long)puVar1 + lVar13);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_170 = uStack_160;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_b0 = uStack_170;
      uStack_178 = *(undefined8 *)((long)puVar1 + lVar14);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uStack_180 = *(undefined8 *)((long)puVar1 + lVar16);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_188 = uStack_178;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_a8 = uStack_188;
      uStack_190 = *(undefined8 *)((long)puVar1 + lVar15);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_198 = *(undefined8 *)((long)puVar1 + lVar13);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uStack_1a0 = uStack_190;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_a0 = uStack_1a0;
      uStack_1a8 = *(undefined8 *)((long)puVar1 + lVar14);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uStack_1b8 = uStack_1a8;
      func_0x00010bf49480(0x4020000000000000);
      _objc_retainAutoreleasedReturnValue();
      uStack_98 = uStack_1b8;
      uStack_1c0 = *(undefined8 *)((long)puVar1 + lVar15);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      uStack_1d0 = uStack_1c0;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_90 = uStack_1d0;
      uStack_1d8 = *(undefined8 *)((long)puVar1 + lVar15);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)((long)puVar1 + lVar15);
      func_0x00010bfe6ac0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      uVar17 = uStack_1d8;
      func_0x00010bf49420();
      _objc_retainAutoreleasedReturnValue();
      uStack_88 = uVar17;
      uVar8 = *(undefined8 *)((long)puVar1 + lVar14);
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf348e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar8;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_80 = uVar11;
      uVar9 = *(undefined8 *)((long)puVar1 + lVar14);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)((long)puVar1 + lVar15);
      func_0x00010c08de00(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar9;
      func_0x00010bf493c0(0xc020000000000000);
      _objc_retainAutoreleasedReturnValue();
      uStack_78 = uVar12;
    }
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_1e8);
    _objc_release(puVar5);
    _objc_release(uVar12);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar11);
    _objc_release(puVar2);
    _objc_release(uVar8);
    _objc_release(uVar17);
    _objc_release(uVar7);
    _objc_release(uStack_1d8);
    _objc_release(uStack_1d0);
    _objc_release(puStack_1c8);
    _objc_release(uStack_1c0);
    _objc_release(uStack_1b8);
    _objc_release(puStack_1b0);
    _objc_release(uStack_1a8);
    _objc_release(uStack_1a0);
    _objc_release(uStack_198);
    _objc_release(uStack_190);
    _objc_release(uStack_188);
    _objc_release(uStack_180);
    _objc_release(uStack_178);
    _objc_release(uStack_170);
    _objc_release(puStack_168);
    _objc_release(uStack_160);
    _objc_release(uStack_158);
    _objc_release(puStack_150);
    _objc_release(uStack_148);
    _objc_release(uStack_140);
    _objc_release(uStack_138);
    _objc_release(uStack_130);
    _objc_release(puVar6);
    _objc_release(puVar6);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  if ((puVar3[_DAT_11277d5f4] & 1) == 0) {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  else {
    puVar2 = (undefined8 *)PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return puVar2;
}



/* Entry: 108ed9824; end: 108ed98bb; -[SCPreviewNGSSendButton _backgroundColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed9824(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = 0x6a;
  if (lRam00000001138466f0 < 3) {
    uVar1 = 0x34;
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  if ((*(byte *)(param_1 + _DAT_11277d5f4) & 1) == 0) {
    _objc_retain(puVar2);
    puVar3 = puVar2;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6f);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108ed98bc; end: 108ed9923; -[SCPreviewNGSSendButton _backgroundColorWithIsEnabled:] */

void FUN_108ed98bc(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  func_0x00010bdd21c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  if (param_3 == 0) {
    func_0x00010bf414e0(0x3fe6666666666666,param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108ed9924; end: 108ed99ab; -[SCPreviewNGSSendButton setEnabled:] */

void FUN_108ed9924(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  func_0x00010c071800();
  if ((int)param_3 != (int)uVar1) {
    uVar1 = param_1;
    func_0x00010bdd22e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_1);
    _objc_release(uVar1);
  }
  puStack_38 = PTR_PTR_1126ff160;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setEnabled__112642f38,param_3);
  return;
}



/* Entry: 108ed99ac; end: 108ed9a0f; -[SCPreviewNGSSendButton setIsInactive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed99ac(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  
  if (*(byte *)(param_1 + _DAT_11277d5f4) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_11277d5f4) = (char)param_3;
  lVar1 = param_1;
  func_0x00010c071800();
  lVar2 = param_1;
  func_0x00010bdd22e0(param_1,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1,param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108ed9a10; end: 108ed9a8b; -[SCPreviewNGSSendButton layoutSubviews] */

void FUN_108ed9a10(undefined8 param_1)

{
  double in_d3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ff160;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(in_d3 * 0.5);
  _objc_release(param_1);
  return;
}



/* Entry: 108ed9a8c; end: 108ed9aff; -[SCPreviewNGSSendButton sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108ed9a8c(double param_1,long param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  
  func_0x00010c0699c0(*(undefined8 *)(param_2 + _DAT_11277d600));
  param_1 = param_1 + 16.0;
  dVar1 = param_1 + 4.0;
  func_0x00010c0699c0(*(undefined8 *)(param_2 + _DAT_11277d604));
  auVar2._0_8_ = NEON_fminnm(dVar1 + param_1 + 8.0,0x4061800000000000);
  auVar2._8_8_ = *(undefined8 *)(param_2 + _DAT_11277d5f0);
  return auVar2;
}



/* Entry: 108ed9b00; end: 108ed9b03; -[SCPreviewNGSSendButton configureLabelWithText:] */

void FUN_108ed9b00(void)

{
  return;
}



/* Entry: 108ed9b04; end: 108ed9b3b; -[SCPreviewNGSSendButton pointInside:withEvent:] */

void FUN_108ed9b04(void)

{
  func_0x00010bf20c00();
  _CGRectInset();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return;
}



/* Entry: 108ed9b3c; end: 108ed9b4b; -[SCPreviewNGSSendButton titleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ed9b3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d600);
}



/* Entry: 108ed9b4c; end: 108ed9b8b; -[SCPreviewNGSSendButton setTitleLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed9b4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277d600;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ed9b8c; end: 108ed9b9b; -[SCPreviewNGSSendButton isInactive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108ed9b8c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277d5f4);
}



/* Entry: 108ed9b9c; end: 108ed9c0b; -[SCPreviewNGSSendButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed9b9c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277d600,0);
  _objc_storeStrong(param_1 + _DAT_11277d5fc,0);
  _objc_storeStrong(param_1 + _DAT_11277d5f8,0);
  _objc_storeStrong(param_1 + _DAT_11277d608,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277d604,0);
  return;
}



/* Entry: 108ed9c0c; end: 108ed9f0b; -[SCPreviewNGSSpotlightButton initWithFrame:style:layoutStyle:image:spotlightStyle:isLargeIconEnabled:useTallerButtons:useLighterColorButtons:actionBarUnifiedStyleEnabled:isNGSActionBarRTLEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108ed9c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,uint param_10,int param_11,undefined8 param_12,undefined4 param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  uVar3 = param_9;
  _objc_retain(param_9);
  if ((param_10 & 1) == 0) {
    func_0x000108ede978();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000108ede960();
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_88 = PTR_PTR_1126ff168;
  puVar4 = &uStack_90;
  uStack_90 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar4,
                      PTR_s_initWithFrame_style_layoutStyle__1125e2d88,param_7,param_8,param_9,uVar3
                      ,param_12,(char)param_13);
  if (puVar4 != (undefined8 *)0x0) {
    lVar10 = (long)_DAT_11277d610;
    *(undefined1 *)((long)puVar4 + lVar10) = param_13._1_1_;
    uVar1 = 0x5f;
    if ((char)param_13 == '\0') {
      uVar1 = 0xbb;
    }
    uVar2 = 0x2a;
    if (lRam00000001138466f0 < 3) {
      uVar2 = uVar1;
    }
    *(undefined8 *)((long)puVar4 + (long)_DAT_11277d614) = uVar2;
    puVar5 = puVar4;
    func_0x00010c271420(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213040();
    _objc_release(puVar5);
    puVar6 = puVar4;
    func_0x00010c271420();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126aea58;
    _objc_opt_class(PTR_PTR_1126aea58);
    puVar8 = puVar6;
    _objc_opt_isKindOfClass(puVar6,puVar7);
    puVar5 = puVar6;
    if (((ulong)puVar8 & 1) == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    _objc_retain(puVar5);
    _objc_release(puVar6);
    if (param_11 != 0) {
      func_0x00010c21ad00(puVar5);
    }
    func_0x00010c161020(puVar4);
    puVar7 = PTR_PTR_1126b0c40;
    if ((param_10 >> 8 & 1) != 0) {
      puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010bfe5760(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00();
      _objc_release(puVar6);
      _objc_release(puVar7);
      _objc_release(puVar9);
      puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c271420(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180();
      _objc_release(puVar6);
      _objc_release(puVar7);
      puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(puVar4);
      _objc_release(puVar7);
    }
    if (*(char *)((long)puVar4 + lVar10) == '\x01') {
      func_0x00010c21ad00(puVar5);
      func_0x00010c1e1640(0x3ff0000000000000,puVar4);
      func_0x00010c1e1660(0x3fee666666666666,puVar4);
    }
    _objc_release(puVar5);
  }
  _objc_release(uVar3);
  _objc_release(param_9);
  return puVar4;
}



/* Entry: 108ed9f0c; end: 108ed9f3f; -[SCPreviewNGSSpotlightButton layoutSubviews] */

void FUN_108ed9f0c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ff168;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_layoutSubviews_112600e60);
  return;
}



/* Entry: 108ed9f40; end: 108ed9f97; -[SCPreviewNGSSpotlightButton pointInside:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed9f40(void)

{
  func_0x00010bf20c00();
  _CGRectInset();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return;
}



/* Entry: 108ed9f98; end: 108ed9fdb; -[SCPreviewNGSSpotlightButton _borderColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed9f98(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c25dfa0();
  uVar1 = 0xd5;
  if (lVar2 != 1) {
    uVar1 = *(ulong *)(param_1 + _DAT_11277d614) | 0xffffffff80000000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c23bb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color_withThemedColor__11266c8e8,uVar1);
  return;
}



/* Entry: 108ed9fdc; end: 108eda01b; -[SCPreviewNGSSpotlightButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ed9fdc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277d618,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277d61c,0);
  return;
}



/* Entry: 108eda01c; end: 108edaa3f; -[SCPreviewNGSStoryButton initWithBitmojiSelfieFetcher:customStoriesDataFetcher:request:publicProfileImageURL:resourceDownloader:frame:style:layoutStyle:image:title:isLargeIconEnabled:useTallerButtons:useLighterColorButtons:actionBarUnifiedStyleEnabled:storyButtonStateObservable:isNGSActionBarRTLEnabled:storiesTrayDefaultsToPublic:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108eda01c(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
             undefined8 param_9,long param_10,long param_11,undefined8 param_12,long param_13,
             long param_14,undefined8 param_15,uint param_16,undefined4 param_17,ulong param_18,
             uint param_19)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  double dVar18;
  double dVar19;
  long lStack_240;
  undefined *puStack_238;
  double dStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 *puStack_210;
  ulong uStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  uint uStack_15c;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  puVar13 = (undefined8 *)(ulong)param_16._2_1_;
  lStack_140 = param_14;
  uStack_148 = param_15;
  uStack_150 = CONCAT44(uStack_150._4_4_,param_16 >> 8) & 0xffffffff000000ff;
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_138 = param_12;
  _objc_retain(param_7);
  _objc_retain(param_8);
  uStack_130 = param_9;
  _objc_retain(param_9);
  lStack_128 = param_10;
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_18);
  lVar15 = lStack_138;
  puStack_118 = PTR_PTR_1126ff170;
  puVar12 = &uStack_120;
  lStack_138 = param_13;
  dVar18 = param_3;
  uStack_120 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar12,
                      PTR_s_initWithFrame_style_layoutStyle__1125e2d88,lVar15,param_13,lStack_140,
                      uStack_148,uStack_150 & 0xffffffff,puVar13);
  if (puVar12 != (undefined8 *)0x0) {
    lVar15 = (long)_DAT_11277d620;
    lStack_140 = param_7;
    _objc_retain(param_8);
    uVar1 = *(undefined8 *)((long)puVar12 + lVar15);
    *(undefined8 *)((long)puVar12 + lVar15) = param_8;
    uStack_148 = param_8;
    _objc_release(uVar1);
    lVar15 = (long)_DAT_11277d624;
    _objc_retain(param_18);
    uVar1 = *(undefined8 *)((long)puVar12 + lVar15);
    *(ulong *)((long)puVar12 + lVar15) = param_18;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar1 = *(undefined8 *)((long)puVar12 + (long)_DAT_11277d628);
    *(undefined **)((long)puVar12 + (long)_DAT_11277d628) = puVar2;
    _objc_release(uVar1);
    lVar15 = (long)_DAT_11277d62c;
    *(undefined1 *)((long)puVar12 + lVar15) = param_16._3_1_;
    uVar1 = 0x5f;
    if (param_16._2_1_ == 0) {
      uVar1 = 0xbb;
    }
    uVar6 = 0x2a;
    if (lRam00000001138466f0 < 3) {
      uVar6 = uVar1;
    }
    *(undefined8 *)((long)puVar12 + (long)_DAT_11277d630) = uVar6;
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar16 = (long)_DAT_11277d634;
    uVar1 = *(undefined8 *)((long)puVar12 + lVar16);
    *(undefined **)((long)puVar12 + lVar16) = puVar2;
    _objc_release(uVar1);
    func_0x00010c182220(*(undefined8 *)((long)puVar12 + lVar16));
    func_0x00010c219b60(*(undefined8 *)((long)puVar12 + lVar16));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar12 + lVar16));
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar17 = (long)_DAT_11277d638;
    uVar1 = *(undefined8 *)((long)puVar12 + lVar17);
    *(undefined **)((long)puVar12 + lVar17) = puVar2;
    _objc_release(uVar1);
    _objc_release(puVar3);
    func_0x00010c182220(*(undefined8 *)((long)puVar12 + lVar17));
    func_0x00010c219b60(*(undefined8 *)((long)puVar12 + lVar17));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar12 + lVar17));
    puVar13 = puVar12;
    func_0x00010c271420(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213040();
    _objc_release(puVar13);
    puVar4 = puVar12;
    func_0x00010c271420();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126aea58;
    _objc_opt_class(PTR_PTR_1126aea58);
    puVar5 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar2);
    puVar13 = puVar4;
    if (((ulong)puVar5 & 1) == 0) {
      puVar13 = (undefined8 *)0x0;
    }
    _objc_retain(puVar13);
    _objc_release(puVar4);
    if ((char)param_16 != '\0') {
      func_0x00010c21ad00(puVar13);
    }
    uStack_150 = param_18;
    puVar4 = puVar12;
    if (lStack_138 == 4) {
      func_0x00010bfe7240();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bfe5760();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar14 = (long)_DAT_11277d63c;
    _objc_retain();
    uVar1 = *(undefined8 *)((long)puVar12 + lVar14);
    *(undefined8 **)((long)puVar12 + lVar14) = puVar4;
    _objc_release(uVar1);
    _objc_release(puVar4);
    func_0x00010befbb60(*(undefined8 *)((long)puVar12 + lVar14));
    func_0x00010befbb60(puVar12);
    if (*(char *)((long)puVar12 + lVar15) == '\x01') {
      func_0x00010c21ad00(puVar13);
      func_0x00010c1e1640(0x3ff0000000000000,puVar12);
      func_0x00010c1e1660(0x3fee666666666666,puVar12);
    }
    uStack_15c = param_19 >> 8 & 0xff;
    puStack_190 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar1 = *(undefined8 *)((long)puVar12 + lVar16);
    puStack_158 = puVar13;
    lStack_138 = param_11;
    if ((char)param_19 == '\0') {
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)puVar12 + lVar14);
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      uStack_170 = uVar6;
      uStack_168 = uVar1;
      func_0x00010bf493c0(0x4000000000000000);
      _objc_retainAutoreleasedReturnValue();
      uStack_110 = uVar1;
      uVar6 = *(undefined8 *)((long)puVar12 + lVar16);
      uStack_178 = uVar1;
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)((long)puVar12 + lVar14);
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_188 = uVar1;
      uStack_180 = uVar6;
      func_0x00010bf493c0(0xc000000000000000);
      _objc_retainAutoreleasedReturnValue();
      uStack_108 = uVar6;
      uVar7 = *(undefined8 *)((long)puVar12 + lVar16);
      uStack_198 = uVar6;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)((long)puVar12 + lVar14);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uStack_1a8 = uVar1;
      uStack_1a0 = uVar7;
      func_0x00010bf493c0(0x4000000000000000);
      _objc_retainAutoreleasedReturnValue();
      uStack_100 = uVar7;
      uVar6 = *(undefined8 *)((long)puVar12 + lVar16);
      uStack_1b0 = uVar7;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)((long)puVar12 + lVar14);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uStack_1c0 = uVar1;
      uStack_1b8 = uVar6;
      func_0x00010bf493c0(0xc000000000000000);
      _objc_retainAutoreleasedReturnValue();
      uStack_f8 = uVar6;
      uVar1 = *(undefined8 *)((long)puVar12 + lVar17);
      uStack_1c8 = uVar6;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uStack_1d0 = uVar1;
      func_0x00010bf49420(0x4020000000000000);
      _objc_retainAutoreleasedReturnValue();
      uStack_f0 = uVar1;
      uVar8 = *(undefined8 *)((long)puVar12 + lVar17);
      uStack_1d8 = uVar1;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)((long)puVar12 + lVar17);
      func_0x00010bfe0660(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uStack_1e0 = uVar8;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_e8 = uVar8;
      param_5 = *(undefined8 *)((long)puVar12 + lVar17);
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)((long)puVar12 + lVar14);
      func_0x00010c1408a0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_5;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_e0 = uVar1;
      uVar10 = *(undefined8 *)((long)puVar12 + lVar17);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)((long)puVar12 + lVar14);
      func_0x00010bf1ff80(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar10;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_d8 = uVar6;
    }
    else {
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)puVar12 + lVar14);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uStack_170 = uVar6;
      uStack_168 = uVar1;
      func_0x00010bf493c0(0x4000000000000000);
      _objc_retainAutoreleasedReturnValue();
      uStack_d0 = uVar1;
      uVar6 = *(undefined8 *)((long)puVar12 + lVar16);
      uStack_178 = uVar1;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)((long)puVar12 + lVar14);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_188 = uVar1;
      uStack_180 = uVar6;
      func_0x00010bf493c0(0xc000000000000000);
      _objc_retainAutoreleasedReturnValue();
      uStack_c8 = uVar6;
      uVar7 = *(undefined8 *)((long)puVar12 + lVar16);
      uStack_198 = uVar6;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)((long)puVar12 + lVar14);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uStack_1a8 = uVar1;
      uStack_1a0 = uVar7;
      func_0x00010bf493c0(0x4000000000000000);
      _objc_retainAutoreleasedReturnValue();
      uStack_c0 = uVar7;
      uVar6 = *(undefined8 *)((long)puVar12 + lVar16);
      uStack_1b0 = uVar7;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)((long)puVar12 + lVar14);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uStack_1c0 = uVar1;
      uStack_1b8 = uVar6;
      func_0x00010bf493c0(0xc000000000000000);
      _objc_retainAutoreleasedReturnValue();
      uStack_b8 = uVar6;
      uVar1 = *(undefined8 *)((long)puVar12 + lVar17);
      uStack_1c8 = uVar6;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uStack_1d0 = uVar1;
      func_0x00010bf49420(0x4020000000000000);
      _objc_retainAutoreleasedReturnValue();
      uStack_b0 = uVar1;
      uVar8 = *(undefined8 *)((long)puVar12 + lVar17);
      uStack_1d8 = uVar1;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)((long)puVar12 + lVar17);
      func_0x00010bfe0660(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uStack_1e0 = uVar8;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_a8 = uVar8;
      param_5 = *(undefined8 *)((long)puVar12 + lVar17);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)((long)puVar12 + lVar14);
      func_0x00010c2793a0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = param_5;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_a0 = uVar1;
      uVar10 = *(undefined8 *)((long)puVar12 + lVar17);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)((long)puVar12 + lVar14);
      func_0x00010bf1ff80(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar10;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_98 = uVar6;
    }
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_190);
    _objc_release(puVar2);
    _objc_release(uVar6);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar1);
    _objc_release(uVar9);
    _objc_release(param_5);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uStack_1e0);
    _objc_release(uStack_1d8);
    _objc_release(uStack_1d0);
    _objc_release(uStack_1c8);
    _objc_release(uStack_1c0);
    _objc_release(uStack_1b8);
    _objc_release(uStack_1b0);
    _objc_release(uStack_1a8);
    _objc_release(uStack_1a0);
    _objc_release(uStack_198);
    _objc_release(uStack_188);
    _objc_release(uStack_180);
    _objc_release(uStack_178);
    _objc_release(uStack_170);
    _objc_release(uStack_168);
    lVar15 = lStack_128;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x00010c08fa60();
    _objc_release(lVar15);
    param_11 = lStack_138;
    param_7 = lStack_140;
    if ((uStack_15c == 0) || (lVar16 == 0)) {
      func_0x00010be0ffa0(puVar12);
      puVar13 = puStack_158;
      param_8 = uStack_148;
      param_11 = lStack_138;
    }
    else {
      lVar15 = lStack_138;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      param_7 = lStack_140;
      param_8 = uStack_148;
      puVar13 = puStack_158;
      if (lVar15 == 0) {
        func_0x00010be0ffa0(puVar12);
      }
      else {
        lVar15 = param_11;
        func_0x00010c269d40(param_11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be134e0(puVar12);
        _objc_release(lVar15);
      }
    }
    func_0x00010be10c00(puVar12);
    _objc_release(puVar13);
    param_18 = uStack_150;
  }
  _objc_release(param_18);
  _objc_release(param_11);
  _objc_release(lStack_128);
  _objc_release(uStack_130);
  _objc_release(param_8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar12;
  }
  ___stack_chk_fail();
  pcStack_1f8 = FUN_108edaa40;
  puStack_238 = PTR_PTR_1126ff170;
  lStack_240 = param_7;
  dStack_230 = param_3;
  uStack_228 = param_4;
  uStack_220 = param_8;
  uStack_218 = param_5;
  puStack_210 = puVar13;
  uStack_208 = param_18;
  puStack_200 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_240,PTR_s_layoutSubviews_112600e60);
  lVar15 = (long)_DAT_11277d63c;
  func_0x00010bfb68e0(*(undefined8 *)(param_7 + lVar15));
  dVar19 = dVar18 * 0.5;
  uVar1 = *(undefined8 *)(param_7 + lVar15);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar19);
  _objc_release(uVar1);
  lVar15 = (long)_DAT_11277d634;
  dVar19 = 0.0;
  if (*(char *)(param_7 + _DAT_11277d640) == '\x01') {
    func_0x00010bfb68e0(*(undefined8 *)(param_7 + lVar15));
    dVar19 = dVar18 * 0.5;
  }
  uVar1 = *(undefined8 *)(param_7 + lVar15);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar19);
  _objc_release(uVar1);
  puVar12 = *(undefined8 **)(param_7 + lVar15);
  func_0x00010c08c0e0(puVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar12);
  return puVar12;
}



/* Entry: 108edaa40; end: 108edab3f; -[SCPreviewNGSStoryButton layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108edaa40(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ff170;
  lStack_50 = param_4;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  lVar2 = (long)_DAT_11277d63c;
  func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar2));
  dVar3 = param_3 * 0.5;
  uVar1 = *(undefined8 *)(param_4 + lVar2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar3);
  _objc_release(uVar1);
  lVar2 = (long)_DAT_11277d634;
  dVar3 = 0.0;
  if (*(char *)(param_4 + _DAT_11277d640) == '\x01') {
    func_0x00010bfb68e0(*(undefined8 *)(param_4 + lVar2));
    dVar3 = param_3 * 0.5;
  }
  uVar1 = *(undefined8 *)(param_4 + lVar2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_4 + lVar2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar1);
  return;
}



/* Entry: 108edab40; end: 108edab97; -[SCPreviewNGSStoryButton pointInside:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108edab40(void)

{
  func_0x00010bf20c00();
  _CGRectInset();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return;
}



/* Entry: 108edab98; end: 108edac67; -[SCPreviewNGSStoryButton _setupLabelWithCustomStoriesAvailability:] */

void FUN_108edab98(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  if (param_3 == 0) {
    func_0x000108ede918();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c271420(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x000108ede630();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000108ede948();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c271420(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x000108ede648();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c161020(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108edac68; end: 108edad8f; -[SCPreviewNGSStoryButton _updateStoryButtonTextWithState:] */

void FUN_108edac68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  func_0x00010c067ec0();
  iVar1 = (int)param_3;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      func_0x000108ede948();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010c271420(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20();
      _objc_release(uVar2);
      _objc_release(param_3);
      func_0x000108ede648();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108edad6c;
    }
    if (iVar1 != 1) {
      return;
    }
    func_0x000108ede990();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (iVar1 == 2) {
    func_0x000108ede930();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (iVar1 != 3) {
      return;
    }
    func_0x000108ede918();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = param_1;
  func_0x00010c271420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar2);
  _objc_release(param_3);
  func_0x000108ede630();
  _objc_retainAutoreleasedReturnValue();
LAB_108edad6c:
  func_0x00010c161020(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108edad90; end: 108edae87; -[SCPreviewNGSStoryButton _fetchCustomStoriesUsingDatafetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108edad90(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277d620);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c1055a0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 108edae88; end: 108edaee3;  */

void FUN_108edae88(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (lVar1 = param_2, func_0x00010bf529e0(), lVar1 != 0)) {
    func_0x00010bead540(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108edaee4; end: 108edafef; -[SCPreviewNGSStoryButton _fetchBitmojiImageWithFetcher:request:] */

void FUN_108edaee4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfaa020(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108edaff0; end: 108edb047;  */

void FUN_108edaff0(long param_1,long param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    func_0x00010be04180(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108edb048; end: 108edb223; -[SCPreviewNGSStoryButton _fetchPublicProfileImageWithDownloader:url:bitmojiFetcher:request:] */

void FUN_108edb048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_68,param_1);
  puVar2 = PTR_PTR_1126aebd8;
  uVar1 = param_4;
  func_0x00010beec820(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e320(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar3);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bf88c20(param_3);
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108edb224; end: 108edb2fb;  */

void FUN_108edb224(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_108edb2fc;
    puStack_58 = &UNK_11084c4a0;
    _objc_retain(param_2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uStack_50 = param_2;
    lStack_48 = lVar1;
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uStack_40 = uVar3;
    _objc_retain(uVar2);
    uStack_38 = uVar2;
    func_0x000107c312cc("APPSTORE",&puStack_70);
    _objc_release(uStack_38);
    _objc_release(uStack_40);
    _objc_release(uStack_50);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 108edb2fc; end: 108edb317;  */

void FUN_108edb2fc(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be04190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s__displayAvatarImage_isProfilePic_11255ea00,
               *(long *)(param_1 + 0x20),1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be0ffb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s__fetchBitmojiImageWithFetcher_re_112561988,
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 108edb318; end: 108edb3e7; -[SCPreviewNGSStoryButton _displayAvatarImage:isProfilePicture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108edb318(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  *(char *)(param_1 + _DAT_11277d640) = (char)param_4;
  uVar1 = 1;
  if (param_4 != 0) {
    uVar1 = 2;
  }
  func_0x00010c182220(*(undefined8 *)(param_1 + _DAT_11277d634),param_2,uVar1);
  func_0x00010c1cbe20(param_1);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108edb3e8;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bf03400(0x3fb999999999999a,puVar2,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108edb3e8; end: 108edb4ef;  */

/* WARNING: Possible PIC construction at 0x000108edb418: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108edb4c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108edb41c) */
/* WARNING: Removing unreachable block (ram,0x000108edb4c8) */

void FUN_108edb3e8(long param_1)

{
  func_0x00010bfe5760(*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 108edb4f0; end: 108edb533; -[SCPreviewNGSStoryButton _borderColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108edb4f0(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c25dfa0();
  uVar1 = 0xd5;
  if (lVar2 != 1) {
    uVar1 = *(ulong *)(param_1 + _DAT_11277d630) | 0xffffffff80000000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c23bb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color_withThemedColor__11266c8e8,uVar1);
  return;
}



/* Entry: 108edb534; end: 108edb5c3; -[SCPreviewNGSStoryButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108edb534(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277d63c,0);
  _objc_storeStrong(param_1 + _DAT_11277d628,0);
  _objc_storeStrong(param_1 + _DAT_11277d624,0);
  _objc_storeStrong(param_1 + _DAT_11277d620,0);
  _objc_storeStrong(param_1 + _DAT_11277d638,0);
  _objc_storeStrong(param_1 + _DAT_11277d634,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277d644,0);
  return;
}



/* Entry: 108edb5c4; end: 108edb61b; -[SCPreviewActionButton initWithNGSUIStyleEnabled:] */

void FUN_108edb5c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)PTR__CGPointZero_110347540;
  uVar2 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  func_0x00010bf25900(PTR_PTR_1126dc700);
                    /* WARNING: Could not recover jumptable at 0x00010c0149f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,uVar2,param_1,param_2,param_3,PTR_s_initWithFrame_ngsUIStyleEnabled__1125e2c50,
             param_5);
  return;
}



/* Entry: 108edb61c; end: 108edb687; -[SCPreviewActionButton initWithFrame:ngsUIStyleEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108edb61c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ff178;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c0c3640(puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277d648) = param_1;
    func_0x00010c1cd5e0(puVar1);
  }
  return (undefined1 *)puVar1;
}


