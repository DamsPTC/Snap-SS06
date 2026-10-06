/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106d2aa58; end: 106d2aa8b; +[SCMemoriesCameraRollContentPageModelResolver operaBaseLayerTypeForCameraRollItem:] */

undefined8 FUN_106d2aa58(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0c6c20();
  if (param_3 < 4) {
    uVar1 = *(undefined8 *)(&UNK_10ddedf48 + param_3 * 8);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 106d2aa8c; end: 106d2ac53; +[SCMemoriesCameraRollContentPageModelResolver actionMenuBarButtonsForCameraRollItem:isRemixEnabled:shouldAllowTrimmingLongCameraRollVideo:circumstanceEngine:showFavoriteButton:showPromoteSnapButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106d2aa8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined1 uStack_140;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d2420;
  uStack_140 = param_8;
  func_0x00010beeeb60();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar8 = &uStack_130;
  puVar9 = auStack_e8;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar12 = *plStack_120;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(puVar2);
        }
        iVar11 = (int)*(undefined8 *)(lStack_128 + (long)puVar13 * 8);
        func_0x00010c0ec300();
        if (iVar11 != 0) {
          puVar4 = PTR_PTR_1126d2420;
          func_0x00010bf515c0(PTR_PTR_1126d2420);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(puVar4);
        }
        puVar13 = puVar13 + 1;
      } while (puVar3 != puVar13);
      puVar8 = &uStack_130;
      puVar9 = auStack_e8;
      puVar3 = puVar2;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  uVar10 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_180;
  pcStack_148 = FUN_106d2ac54;
  puStack_170 = puVar2;
  puStack_168 = puVar1;
  uStack_160 = param_6;
  uStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  puStack_178 = PTR_PTR_1126f68e8;
  uStack_180 = uVar10;
  _objc_msgSendSuper2(&uStack_180,PTR_s_init_1125d9248);
  if (puVar5 != (undefined8 *)0x0) {
    puVar6 = puVar8;
    func_0x00010bf51e00();
    uVar10 = *(undefined8 *)((long)puVar5 + (long)_DAT_11275ce7c);
    *(undefined8 **)((long)puVar5 + (long)_DAT_11275ce7c) = puVar6;
    _objc_release(uVar10);
    puVar7 = puVar9;
    func_0x00010bf51e00();
    uVar10 = *(undefined8 *)((long)puVar5 + (long)_DAT_11275ce80);
    *(undefined1 **)((long)puVar5 + (long)_DAT_11275ce80) = puVar7;
    _objc_release(uVar10);
  }
  _objc_release(puVar9);
  _objc_release(puVar8);
  return (undefined1 *)puVar5;
}



/* Entry: 106d2ac54; end: 106d2ad0f; -[SCMemoriesOperaCRFeaturedStoryChromeViewModel initWithTitle:subtitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106d2ac54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f68e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275ce7c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275ce7c) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275ce80);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275ce80) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d2ad10; end: 106d2ad3f; -[SCMemoriesOperaCRFeaturedStoryChromeViewModel chromeDisplayTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d2ad10(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275ce7c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106d2ad40; end: 106d2ad6f; -[SCMemoriesOperaCRFeaturedStoryChromeViewModel chromeDisplaySubTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d2ad40(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275ce80);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106d2ad70; end: 106d2ad77; -[SCMemoriesOperaCRFeaturedStoryChromeViewModel chromeDisplaySecondLineSubTitle] */

undefined8 FUN_106d2ad70(void)

{
  return 0;
}



/* Entry: 106d2ad78; end: 106d2ad7f; -[SCMemoriesOperaCRFeaturedStoryChromeViewModel shouldDisplayChromeView] */

undefined8 FUN_106d2ad78(void)

{
  return 1;
}



/* Entry: 106d2ad80; end: 106d2adbf; -[SCMemoriesOperaCRFeaturedStoryChromeViewModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d2ad80(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275ce80,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275ce7c,0);
  return;
}



/* Entry: 106d2adc0; end: 106d2ae0b; +[SCMemoriesOperaFeaturedStoryNavGateLayer layerWithPage:] */

void FUN_106d2adc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d2400;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d2ae0c; end: 106d2aef3; -[SCMemoriesOperaFeaturedStoryNavGateLayer initWithPage:] */

undefined1 * FUN_106d2ae0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f68f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d2aef4; end: 106d2aefb; -[SCMemoriesOperaFeaturedStoryNavGateLayer type] */

undefined8 FUN_106d2aef4(void)

{
  return 0x19;
}



/* Entry: 106d2aefc; end: 106d2af07; -[SCMemoriesOperaFeaturedStoryNavGateLayer layerViewControllerClass] */

void FUN_106d2aefc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126d2428);
  return;
}



/* Entry: 106d2af08; end: 106d2af1f; -[SCMemoriesOperaFeaturedStoryNavGateLayer shouldBlockBlock] */

void FUN_106d2af08(long param_1)

{
  _objc_retainBlock(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d2af20; end: 106d2af37; -[SCMemoriesOperaFeaturedStoryNavGateLayer onBlockedBlock] */

void FUN_106d2af20(long param_1)

{
  _objc_retainBlock(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d2af38; end: 106d2af43; -[SCMemoriesOperaFeaturedStoryNavGateLayer isEqual:] */

bool FUN_106d2af38(long param_1,undefined8 param_2,long param_3)

{
  return param_1 == param_3;
}



/* Entry: 106d2af44; end: 106d2af73; -[SCMemoriesOperaFeaturedStoryNavGateLayer .cxx_destruct] */

void FUN_106d2af44(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d2af74; end: 106d2afcb; -[SCMemoriesOperaFeaturedStoryNavGateLayerViewController loadView] */

void FUN_106d2af74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c21e900();
  func_0x00010c222380(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106d2afcc; end: 106d2b09b; -[SCMemoriesOperaFeaturedStoryNavGateLayerViewController viewWillAppear:] */

void FUN_106d2afcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f68f8;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_viewWillAppear__1126853f0);
  uVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(param_5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 106d2b09c; end: 106d2b0a3; -[SCMemoriesOperaFeaturedStoryNavGateLayerViewController layerViewContainerOption] */

undefined8 FUN_106d2b09c(void)

{
  return 2;
}



/* Entry: 106d2b0a4; end: 106d2b0bb; -[SCMemoriesOperaFeaturedStoryNavGateLayerViewController pageabilityForRelativePosition:gestureRecognizer:] */

ulong FUN_106d2b0a4(ulong param_1)

{
  func_0x00010beb2ac0();
  return param_1 & 0xffffffff;
}



/* Entry: 106d2b0bc; end: 106d2b12b; -[SCMemoriesOperaFeaturedStoryNavGateLayerViewController didTryPagingWhenPagingDisabled:] */

void FUN_106d2b0bc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010beb2ac0();
  if ((int)lVar1 != 0) {
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0e2b00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 106d2b12c; end: 106d2b1a3; -[SCMemoriesOperaFeaturedStoryNavGateLayerViewController _shouldBlockNavigationForRelativePosition:] */

long FUN_106d2b12c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 == 2) {
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c22e3c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar1;
      (**(code **)(lVar1 + 0x10))(lVar1);
    }
    _objc_release(lVar1);
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}



/* Entry: 106d2b1a4; end: 106d2b1ef; +[SCMemoriesOperaLivePhotoLayer layerWithPage:] */

void FUN_106d2b1a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d2430;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d2b1f0; end: 106d2b347; -[SCMemoriesOperaLivePhotoLayer initWithPage:] */

undefined1 * FUN_106d2b1f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR_PTR_1126f6900;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c99e0;
    func_0x00010c09a9a0(PTR_PTR_1126c99e0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c99e0;
    func_0x00010c09aa00(PTR_PTR_1126c99e0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),uVar3);
    _objc_release(uVar3);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c99e0;
    func_0x00010c09a9e0(PTR_PTR_1126c99e0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c2827c0();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar4;
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d2b348; end: 106d2b34f; -[SCMemoriesOperaLivePhotoLayer type] */

undefined8 FUN_106d2b348(void)

{
  return 0x19;
}



/* Entry: 106d2b350; end: 106d2b35b; -[SCMemoriesOperaLivePhotoLayer layerViewControllerClass] */

void FUN_106d2b350(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126d2438);
  return;
}



/* Entry: 106d2b35c; end: 106d2b543; -[SCMemoriesOperaLivePhotoLayer isEqual:] */

bool FUN_106d2b35c(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  puVar7 = param_3;
  _objc_opt_class();
  puVar2 = PTR_PTR_1126d2430;
  _objc_opt_class();
  puVar3 = PTR_PTR_1126d2430;
  if (puVar7 != puVar2) {
    bVar1 = false;
    goto LAB_106d2b520;
  }
  if (param_1 == param_3) {
    bVar1 = true;
    goto LAB_106d2b520;
  }
  _objc_retain(param_3);
  _objc_opt_class(puVar3);
  puVar7 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  puVar3 = param_3;
  if (((ulong)puVar7 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  _objc_release(param_3);
  puVar7 = *(undefined **)(param_1 + 8);
  puVar2 = puVar3;
  func_0x00010c09a980();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar7);
  _objc_retain(puVar2);
  if (puVar7 == puVar2) {
    _objc_release(puVar2);
    _objc_release(puVar7);
LAB_106d2b464:
    puVar7 = param_1 + 0x10;
    _objc_loadWeakRetained();
    puVar4 = puVar3;
    func_0x00010c0c8c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar7);
    _objc_retain(puVar4);
    if (puVar7 == puVar4) {
      _objc_release(puVar4);
      _objc_release(puVar7);
LAB_106d2b4e0:
      puVar6 = *(undefined **)(param_1 + 0x18);
      puVar5 = puVar3;
      func_0x00010c09a9c0(puVar3);
      bVar1 = puVar6 == puVar5;
    }
    else {
      if (puVar4 == (undefined *)0x0) {
        _objc_release();
      }
      else {
        puVar5 = puVar7;
        func_0x00010c071ae0();
        _objc_release(puVar4);
        _objc_release(puVar7);
        if ((int)puVar5 != 0) goto LAB_106d2b4e0;
      }
      bVar1 = false;
    }
    _objc_release(puVar4);
LAB_106d2b508:
    _objc_release(puVar7);
  }
  else {
    if (puVar2 == (undefined *)0x0) {
      bVar1 = false;
      goto LAB_106d2b508;
    }
    puVar4 = puVar7;
    func_0x00010c071ae0();
    _objc_release(puVar2);
    _objc_release(puVar7);
    if ((int)puVar4 != 0) goto LAB_106d2b464;
    bVar1 = false;
  }
  _objc_release(puVar2);
  _objc_release(puVar3);
LAB_106d2b520:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106d2b544; end: 106d2b54b; -[SCMemoriesOperaLivePhotoLayer livePhotoKey] */

undefined8 FUN_106d2b544(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106d2b54c; end: 106d2b563; -[SCMemoriesOperaLivePhotoLayer memoriesLivePhotoProvider] */

void FUN_106d2b54c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d2b564; end: 106d2b56f; -[SCMemoriesOperaLivePhotoLayer setMemoriesLivePhotoProvider:] */

void FUN_106d2b564(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 106d2b570; end: 106d2b577; -[SCMemoriesOperaLivePhotoLayer livePhotoPlaybackStyle] */

undefined8 FUN_106d2b570(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106d2b578; end: 106d2b57f; -[SCMemoriesOperaLivePhotoLayer setLivePhotoPlaybackStyle:] */

void FUN_106d2b578(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 106d2b580; end: 106d2b5ab; -[SCMemoriesOperaLivePhotoLayer .cxx_destruct] */

void FUN_106d2b580(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d2b5ac; end: 106d2b5b3; -[SCMemoriesOperaLivePhotoLayerViewController pageabilityForRelativePosition:gestureRecognizer:] */

undefined8 FUN_106d2b5ac(void)

{
  return 0;
}



/* Entry: 106d2b5b4; end: 106d2b7af; -[SCMemoriesOperaLivePhotoLayerViewController updateViewWithPreviousLayer:currentLayer:] */

void FUN_106d2b5b4(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  ulong uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f6908;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_updateViewWithPreviousLayer_curr_112680a50,param_3,param_4);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == param_4) {
    _objc_release(param_4);
    uVar1 = param_3;
  }
  else {
    if (param_4 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0();
      _objc_release(param_4);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_106d2b764;
    }
    uVar1 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 == 0) goto LAB_106d2b764;
    uVar2 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c09a980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_initWeak(auStack_58,param_1);
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0c8c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_4);
    func_0x00010c09a960(uVar2);
    _objc_release(uVar2);
    _objc_release(param_1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(uVar1);
LAB_106d2b764:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d2b7b0; end: 106d2b893;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d2b7b0(double param_1,double param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_4);
  lVar1 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar4 = (long)_DAT_11275ce98;
    func_0x00010c1be480(*(undefined8 *)(lVar1 + lVar4));
    lVar2 = *(long *)(param_3 + 0x20);
    func_0x00010c09a9c0();
    if (lVar2 == 1) {
      func_0x00010c24fe40();
    }
    else {
      func_0x00010c2565e0(*(undefined8 *)(lVar1 + lVar4));
    }
    puVar3 = PTR_PTR_1126b2640;
    func_0x00010c23d0a0(param_4);
    func_0x00010c23d0a0(param_4);
    func_0x00010c08cb40(param_2 / param_1,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08d120(lVar1);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106d2b894; end: 106d2b967; -[SCMemoriesOperaLivePhotoLayerViewController updateViewWithHorizontalPageOffset:isCurrentPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d2b894(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [48];
  
  lVar1 = param_2;
  func_0x00010bf69a40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c14e200(param_1);
  _objc_release(lVar1);
  _CGAffineTransformMakeScale(auStack_60,uVar2,uVar2);
  lVar1 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf69a40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01be0(param_1);
  _objc_release(lVar1);
  func_0x00010c1677c0(param_1,*(undefined8 *)(param_2 + _DAT_11275ce98));
  return;
}



/* Entry: 106d2b968; end: 106d2ba3b; -[SCMemoriesOperaLivePhotoLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d2b968(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126d2440;
  _objc_alloc();
  uVar3 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar4 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar5 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar3,uVar4,uVar5,uVar6);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275ce98);
  *(undefined **)(param_1 + _DAT_11275ce98) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(uVar3,uVar4,uVar5,uVar6);
  func_0x00010c222380(param_1,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d2ba3c; end: 106d2bacb; -[SCMemoriesOperaLivePhotoLayerViewController viewWillFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d2ba3c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f6908;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillFullyAppear_112685468);
  lVar3 = (long)_DAT_11275ce98;
  func_0x00010c2565e0(*(undefined8 *)(param_1 + lVar3));
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c09a9c0();
  _objc_release(lVar1);
  if (lVar2 == 1) {
    func_0x00010c24fe40(*(undefined8 *)(param_1 + lVar3));
  }
  return;
}



/* Entry: 106d2bacc; end: 106d2badf; -[SCMemoriesOperaLivePhotoLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d2bacc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275ce98,0);
  return;
}



/* Entry: 106d2bae0; end: 106d2bb2b; +[SCMemoriesOperaLivePhotoButtonLayer layerWithPage:] */

void FUN_106d2bae0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d2448;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d2bb2c; end: 106d2bbf7; -[SCMemoriesOperaLivePhotoButtonLayer initWithPage:] */

undefined1 * FUN_106d2bb2c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR_PTR_1126f6910;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c99e0;
    func_0x00010c09a9e0(PTR_PTR_1126c99e0);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c2827c0();
    _objc_release(lVar3);
    _objc_release(puVar2);
    *(bool *)((long)puVar1 + 8) = lVar4 == 1;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d2bbf8; end: 106d2bbff; -[SCMemoriesOperaLivePhotoButtonLayer type] */

undefined8 FUN_106d2bbf8(void)

{
  return 0x19;
}



/* Entry: 106d2bc00; end: 106d2bc0b; -[SCMemoriesOperaLivePhotoButtonLayer layerViewControllerClass] */

void FUN_106d2bc00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126d2450);
  return;
}



/* Entry: 106d2bc0c; end: 106d2bcd7; -[SCMemoriesOperaLivePhotoButtonLayer isEqual:] */

bool FUN_106d2bc0c(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar3 = param_3;
  _objc_opt_class();
  puVar4 = PTR_PTR_1126d2448;
  _objc_opt_class();
  puVar5 = PTR_PTR_1126d2448;
  if (puVar3 == puVar4) {
    if (param_1 == param_3) {
      bVar2 = true;
    }
    else {
      _objc_retain(param_3);
      _objc_opt_class(puVar5);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar5);
      puVar5 = param_3;
      if (((ulong)puVar3 & 1) == 0) {
        puVar5 = (undefined *)0x0;
      }
      _objc_retain(puVar5);
      _objc_release(param_3);
      bVar1 = param_1[8];
      puVar3 = puVar5;
      func_0x00010c07d660(puVar5);
      _objc_release(puVar5);
      bVar2 = (uint)bVar1 == (uint)puVar3;
    }
  }
  else {
    bVar2 = false;
  }
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 106d2bcd8; end: 106d2bcdf; -[SCMemoriesOperaLivePhotoButtonLayer isSelected] */

undefined1 FUN_106d2bcd8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106d2bce0; end: 106d2c00f; -[SCMemoriesOperaLivePhotoButtonLayerView setupViewWithIsSelected:shouldAnimate:] */

/* WARNING: Possible PIC construction at 0x000106d2bd98: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d2bce0(long param_1,undefined8 param_2,ulong param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  func_0x00010c20eaa0(puVar1);
  if (param_4 != 0) {
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc0000000;
    pcStack_90 = FUN_106d2c010;
    puStack_88 = &UNK_110976f28;
    uStack_80 = (undefined1)param_3;
    func_0x00010c0f9000(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(puVar1);
    _objc_release(puVar2);
    FUN_106d4dadc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(puVar1);
    _objc_release(puVar2);
    func_0x00010befbb60(param_1);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar3 = param_1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c274200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf493c0(0xc02e000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    lStack_78 = lVar5;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf34860(puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_70 = lVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar9);
    _objc_release(lVar8);
    _objc_release(puVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_initWeak(auStack_a8,param_1);
    puVar2 = auStack_a8;
    _objc_copyWeak(auStack_b0,puVar2);
    func_0x00010c1d3960(puVar1);
    uVar10 = *(undefined8 *)(param_1 + _DAT_11275cea0);
    *(undefined **)(param_1 + _DAT_11275cea0) = puVar1;
    _objc_release(uVar10);
    _objc_destroyWeak(auStack_b0);
    puVar11 = auStack_a8;
    _objc_destroyWeak();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_a8);
    puVar1 = puVar2;
    __Unwind_Resume();
    param_3 = (ulong)(byte)puVar11[0x20];
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1fadd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_setSelected__11265c598,param_3);
  return;
}



/* Entry: 106d2c010; end: 106d2c01b;  */

void FUN_106d2c010(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1fadd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setSelected__11265c598,*(undefined1 *)(param_1 + 0x20));
  return;
}



/* Entry: 106d2c01c; end: 106d2c047;  */

void FUN_106d2c01c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d2c048; end: 106d2c0d3; -[SCMemoriesOperaLivePhotoButtonLayerView _didTapButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d2c048(long param_1)

{
  long lVar1;
  
  func_0x00010c07d660(*(undefined8 *)(param_1 + _DAT_11275cea0));
  lVar1 = param_1;
  func_0x00010bf25940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bf25940();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106d2c0d4; end: 106d2c0e3; -[SCMemoriesOperaLivePhotoButtonLayerView buttonTapActionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d2c0d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275cea4);
}



/* Entry: 106d2c0e4; end: 106d2c0ef; -[SCMemoriesOperaLivePhotoButtonLayerView setButtonTapActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d2c0e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106d2c0f0; end: 106d2c12f; -[SCMemoriesOperaLivePhotoButtonLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d2c0f0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275cea4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275cea0,0);
  return;
}



/* Entry: 106d2c130; end: 106d2c21f; -[SCMemoriesOperaLivePhotoButtonLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d2c130(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126d2458;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_11275cea8;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c222380(param_1);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c174aa0(*(undefined8 *)(param_1 + lVar3));
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106d2c220; end: 106d2c32b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d2c220(long param_1,undefined *param_2,undefined **param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **unaff_x21;
  undefined *unaff_x22;
  undefined8 uVar3;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined **)(param_1 + 0x20);
  _objc_loadWeakRetained();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x21 = &PTR____CFConstantStringClassReference_110e87978;
    unaff_x22 = PTR_PTR_1126c99e0;
    func_0x00010c09a9e0();
    _objc_retainAutoreleasedReturnValue();
    param_2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_58 = unaff_x22;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = param_2;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    param_3 = unaff_x21;
    param_4 = ppuVar2;
    func_0x00010bf04440(ppuVar1);
    _objc_release(ppuVar2);
    _objc_release(param_2);
    _objc_release(unaff_x22);
  }
  ppuVar2 = ppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_106d2c32c;
  puStack_90 = unaff_x22;
  ppuStack_88 = unaff_x21;
  puStack_80 = param_2;
  ppuStack_78 = ppuVar1;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_98 = PTR_PTR_1126f6918;
  ppuStack_a0 = ppuVar2;
  _objc_msgSendSuper2(&ppuStack_a0,PTR_s_updateViewWithPreviousLayer_curr_112680a50,param_3,param_4)
  ;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == param_4) {
    _objc_release(param_4);
    ppuVar2 = param_3;
  }
  else {
    if (param_4 == (undefined **)0x0) {
      _objc_release();
    }
    else {
      ppuVar1 = param_3;
      func_0x00010c071ae0();
      _objc_release(param_4);
      _objc_release(param_3);
      if (((ulong)ppuVar1 & 1) != 0) goto LAB_106d2c434;
    }
    ppuVar1 = ppuVar2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar1 == (undefined **)0x0) goto LAB_106d2c434;
    uVar3 = *(undefined8 *)((long)ppuVar2 + (long)_DAT_11275cea8);
    func_0x00010c08c0e0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07d660();
    func_0x00010c2299e0(uVar3);
  }
  _objc_release(ppuVar2);
LAB_106d2c434:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d2c32c; end: 106d2c457; -[SCMemoriesOperaLivePhotoButtonLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d2c32c(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f6918;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_updateViewWithPreviousLayer_curr_112680a50,param_3,param_4);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == param_4) {
    _objc_release(param_4);
    param_1 = param_3;
  }
  else {
    if (param_4 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0();
      _objc_release(param_4);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_106d2c434;
    }
    uVar1 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 == 0) goto LAB_106d2c434;
    uVar2 = *(undefined8 *)(param_1 + (long)_DAT_11275cea8);
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07d660();
    func_0x00010c2299e0(uVar2);
  }
  _objc_release(param_1);
LAB_106d2c434:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d2c458; end: 106d2c45f; -[SCMemoriesOperaLivePhotoButtonLayerViewController layerViewContainerOption] */

undefined8 FUN_106d2c458(void)

{
  return 2;
}



/* Entry: 106d2c460; end: 106d2c473; -[SCMemoriesOperaLivePhotoButtonLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d2c460(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275cea8,0);
  return;
}



/* Entry: 106d2c474; end: 106d2c4a7; -[SCMemoriesOperaPagingBlockingLayer initWithPage:] */

void FUN_106d2c474(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f6920;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 106d2c4a8; end: 106d2c4f3; +[SCMemoriesOperaPagingBlockingLayer layerWithPage:] */

void FUN_106d2c4a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d23f8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d2c4f4; end: 106d2c4fb; -[SCMemoriesOperaPagingBlockingLayer type] */

undefined8 FUN_106d2c4f4(void)

{
  return 0x19;
}



/* Entry: 106d2c4fc; end: 106d2c507; -[SCMemoriesOperaPagingBlockingLayer layerViewControllerClass] */

void FUN_106d2c4fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126d2460);
  return;
}



/* Entry: 106d2c508; end: 106d2c513; -[SCMemoriesOperaPagingBlockingLayer isEqual:] */

bool FUN_106d2c508(long param_1,undefined8 param_2,long param_3)

{
  return param_1 == param_3;
}



/* Entry: 106d2c514; end: 106d2c563; -[SCMemoriesOperaPagingBlockingLayerViewController loadView] */

void FUN_106d2c514(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c222380(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106d2c564; end: 106d2c633; -[SCMemoriesOperaPagingBlockingLayerViewController viewWillAppear:] */

void FUN_106d2c564(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f6928;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_viewWillAppear__1126853f0);
  uVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(param_5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 106d2c634; end: 106d2c63b; -[SCMemoriesOperaPagingBlockingLayerViewController layerViewContainerOption] */

undefined8 FUN_106d2c634(void)

{
  return 2;
}



/* Entry: 106d2c63c; end: 106d2c66f; -[SCMemoriesOperaPagingBlockingLayerViewController teardown] */

void FUN_106d2c63c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f6928;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_teardown_112678538);
  return;
}



/* Entry: 106d2c670; end: 106d2c677; -[SCMemoriesOperaPagingBlockingLayerViewController pageabilityForRelativePosition:gestureRecognizer:] */

undefined8 FUN_106d2c670(void)

{
  return 1;
}



/* Entry: 106d2c678; end: 106d2c683; -[SCMemoriesOperaPagingBlockingLayerViewController pageabilityForRelativePosition:navigationStyle:swipeDirection:gestureRecognizer:] */

bool FUN_106d2c678(void)

{
  long in_x4;
  
  return in_x4 != 2;
}



/* Entry: 106d2c684; end: 106d2c737; -[SCMemoriesOperaSnapFeedRankDebugLayer initWithPage:] */

undefined1 * FUN_106d2c684(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f6930;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c99e0;
    func_0x00010c240fe0(PTR_PTR_1126c99e0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d2c738; end: 106d2c783; +[SCMemoriesOperaSnapFeedRankDebugLayer layerWithPage:] */

void FUN_106d2c738(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d23e0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d2c784; end: 106d2c78b; -[SCMemoriesOperaSnapFeedRankDebugLayer type] */

undefined8 FUN_106d2c784(void)

{
  return 0x19;
}



/* Entry: 106d2c78c; end: 106d2c797; -[SCMemoriesOperaSnapFeedRankDebugLayer layerViewControllerClass] */

void FUN_106d2c78c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126d2468);
  return;
}



/* Entry: 106d2c798; end: 106d2c7a3; -[SCMemoriesOperaSnapFeedRankDebugLayer isEqual:] */

bool FUN_106d2c798(long param_1,undefined8 param_2,long param_3)

{
  return param_1 == param_3;
}



/* Entry: 106d2c7a4; end: 106d2c7ab; -[SCMemoriesOperaSnapFeedRankDebugLayer debugInfo] */

undefined8 FUN_106d2c7a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106d2c7ac; end: 106d2c7b7; -[SCMemoriesOperaSnapFeedRankDebugLayer .cxx_destruct] */

void FUN_106d2c7ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d2c7b8; end: 106d2cacf; -[SCMemoriesOperaSnapFeedRankDebugLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106d2c7b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  uVar9 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar9,uVar10,uVar11,uVar12);
  func_0x00010c222380(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar9,uVar10,uVar11,uVar12);
  lVar8 = (long)_DAT_11275ceb0;
  uVar9 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar1;
  _objc_release(uVar9);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar8),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar8),param_2,1);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar8),param_2,1);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar8),param_2,0x17);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar8),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar2 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf66200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e848d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar8),param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010bf348e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf493a0(lVar3,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  lStack_98 = lVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010bf34860(uVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010bf493a0(lVar6,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_90 = lVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_98,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(lVar8);
  _objc_release(uVar10);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar9);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return lVar2;
  }
  ___stack_chk_fail();
  return 2;
}



/* Entry: 106d2cad0; end: 106d2cad7; -[SCMemoriesOperaSnapFeedRankDebugLayerViewController layerViewContainerOption] */

undefined8 FUN_106d2cad0(void)

{
  return 2;
}



/* Entry: 106d2cad8; end: 106d2cc3b; -[SCMemoriesOperaSnapFeedRankDebugLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d2cad8(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f6938;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_updateViewWithPreviousLayer_curr_112680a50,param_3,param_4);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  uVar2 = param_4;
  if (param_3 != param_4) {
    if (param_4 == 0) {
      _objc_release();
    }
    else {
      func_0x00010c071ae0();
      _objc_release(param_4);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_106d2cc14;
    }
    uVar1 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (uVar1 == 0) goto LAB_106d2cc14;
    uVar1 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf66200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + (long)_DAT_11275ceb0));
    _objc_release(puVar3);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
LAB_106d2cc14:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d2cc3c; end: 106d2cc4f; -[SCMemoriesOperaSnapFeedRankDebugLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d2cc3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275ceb0,0);
  return;
}



/* Entry: 106d2cc50; end: 106d2cd33; -[SCMemoriesLegacyOperaLaunchServiceProvider provide] */

void FUN_106d2cc50(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d2470;
  _objc_alloc(PTR_PTR_1126d2470);
  func_0x00010c031dc0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d2cd34; end: 106d2cd73;  */

void FUN_106d2cd34(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be4a0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106d2cd74; end: 106d2cf8b; -[SCMemoriesLegacyOperaLaunchServiceProvider _legacyOperaPresenterBuilder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d2cd74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  puVar1 = PTR_PTR_1126d2478;
  _objc_alloc(PTR_PTR_1126d2478);
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_11275cebc;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar10;
  func_0x00010c0cadc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_11275cec0;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar11;
  func_0x00010c0c9160();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0c9140();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_11275cec4;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar12;
  func_0x00010c0c84c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_11275cec8;
    _objc_loadWeakRetained(lVar14);
  }
  lVar6 = lVar14;
  func_0x00010c0ca000(lVar14);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_11275ceb8;
    _objc_loadWeakRetained(lVar13);
  }
  lVar7 = lVar13;
  func_0x00010bf398e0(lVar13);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = 0;
  if (param_1 != 0) {
    lVar8 = param_1 + _DAT_11275cecc;
    _objc_loadWeakRetained(lVar8);
  }
  lVar9 = lVar8;
  func_0x00010c0c8940(lVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02a940(puVar1,param_2,lVar2,lVar4,lVar5,lVar6,lVar7,lVar9);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar13);
  _objc_release(lVar6);
  _objc_release(lVar14);
  _objc_release(lVar5);
  _objc_release(lVar12);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar11);
  _objc_release(lVar2);
  _objc_release(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d2cf8c; end: 106d2cfff; -[SCMemoriesLegacyOperaLaunchServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d2cf8c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275cecc);
  _objc_destroyWeak(param_1 + _DAT_11275cec8);
  _objc_destroyWeak(param_1 + _DAT_11275cec4);
  _objc_destroyWeak(param_1 + _DAT_11275cec0);
  _objc_destroyWeak(param_1 + _DAT_11275cebc);
  _objc_destroyWeak(param_1 + _DAT_11275ceb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275ceb4);
  return;
}



/* Entry: 106d2d000; end: 106d2d083; -[SCMemoriesOperaDependencyServiceProvider provide] */

void FUN_106d2d000(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d2480;
  _objc_alloc(PTR_PTR_1126d2480);
  uVar2 = param_1;
  func_0x00010be6d9a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6db20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02a980(puVar1,param_2,uVar2,param_1);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d2d084; end: 106d2de1b; -[SCMemoriesOperaDependencyServiceProvider _operaActionHandlerSessionBuilder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d2d084(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  undefined *puVar44;
  undefined *puVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  undefined8 uVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  undefined8 uVar77;
  long lVar78;
  long lVar79;
  long lVar80;
  long lStack_268;
  long lStack_240;
  undefined8 uStack_238;
  long lStack_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined8 uStack_218;
  long lStack_1f0;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_190;
  long lStack_160;
  long lStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126d2488;
  _objc_alloc();
  if (param_1 == 0) {
    lVar73 = 0;
  }
  else {
    lVar73 = param_1 + _DAT_11275cefc;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar73;
  func_0x00010c0c7d00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bef14a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  FUN_106d2de1c();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010befb6a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  FUN_106d2de1c();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c13f8a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    lStack_100 = 0;
    uStack_f8 = 0;
  }
  else {
    uStack_f8 = *(undefined8 *)(param_1 + _DAT_11275cfb4);
    _objc_retain();
    lStack_100 = param_1 + _DAT_11275cfb8;
    _objc_loadWeakRetained();
  }
  lVar8 = param_1;
  func_0x000106d2de40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x000106d2de64();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c0c84c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar78 = 0;
  }
  else {
    lVar78 = param_1 + _DAT_11275cee0;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar78;
  func_0x00010bf3e340();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar80 = 0;
  }
  else {
    lVar80 = param_1 + _DAT_11275cee4;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar80;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x000106d2de88();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  FUN_106d2de1c();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010bf6d080();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x000106d2deac();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010bf93a20();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1;
  FUN_106d2de1c();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010bfa10c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar65 = 0;
  }
  else {
    lVar65 = param_1 + _DAT_11275ceec;
    _objc_loadWeakRetained();
  }
  lVar22 = lVar65;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1;
  func_0x000106d2ded0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar66 = 0;
  }
  else {
    lVar66 = param_1 + _DAT_11275cf20;
    _objc_loadWeakRetained();
  }
  lVar25 = lVar66;
  func_0x00010c0869e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lStack_160 = 0;
  }
  else {
    lStack_160 = param_1 + _DAT_11275cef4;
    _objc_loadWeakRetained();
  }
  lVar26 = param_1;
  func_0x000106d2def4();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar26;
  func_0x00010c08f100();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar67 = 0;
  }
  else {
    lVar67 = param_1 + _DAT_11275cf04;
    _objc_loadWeakRetained();
  }
  lVar28 = lVar67;
  func_0x00010c0c88c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uVar29 = 0;
  }
  else {
    uVar29 = *(undefined8 *)(param_1 + _DAT_11275cfb0);
  }
  _objc_retain();
  lVar30 = param_1;
  func_0x000106d2df18();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = lVar30;
  func_0x00010c0cadc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar68 = 0;
  }
  else {
    lVar68 = param_1 + _DAT_11275cf1c;
    _objc_loadWeakRetained();
  }
  lVar32 = lVar68;
  func_0x00010c0c93c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uStack_190 = 0;
    lVar72 = 0;
  }
  else {
    uStack_190 = *(undefined8 *)(param_1 + _DAT_11275cfc4);
    _objc_retain();
    lVar72 = param_1 + _DAT_11275cf24;
    _objc_loadWeakRetained();
  }
  lVar33 = lVar72;
  func_0x00010c0c97a0();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = lVar33;
  func_0x00010c0c97e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar69 = 0;
  }
  else {
    lVar69 = param_1 + _DAT_11275cf28;
    _objc_loadWeakRetained();
  }
  lVar35 = lVar69;
  func_0x00010c2436a0();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_1;
  FUN_106d2de1c();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar36;
  func_0x00010c0ca9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_1;
  func_0x000106d2df3c();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = lVar38;
  func_0x00010c0c57a0();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = param_1;
  func_0x000106d2df3c();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = lVar40;
  func_0x00010c15a860();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = param_1;
  func_0x000106d2df60();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = lVar42;
  func_0x00010c112160();
  _objc_retainAutoreleasedReturnValue();
  puVar44 = PTR_PTR_1126ae720;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106d2df84;
  puStack_90 = &UNK_110976f78;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar45 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    lStack_1e0 = 0;
    uStack_1d8 = 0;
    lVar70 = 0;
  }
  else {
    uStack_1d8 = *(undefined8 *)(param_1 + _DAT_11275cfbc);
    _objc_retain();
    lStack_1e0 = param_1 + _DAT_11275cfc0;
    _objc_loadWeakRetained();
    lVar70 = param_1 + _DAT_11275cf58;
    _objc_loadWeakRetained();
  }
  lVar46 = lVar70;
  func_0x00010c27e5e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lStack_1f0 = 0;
  }
  else {
    lStack_1f0 = param_1 + _DAT_11275cf60;
    _objc_loadWeakRetained();
  }
  lVar47 = param_1;
  FUN_106d2e004();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = lVar47;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = param_1;
  func_0x000106d2e028();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = param_1;
  func_0x000106d2e04c();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = lVar50;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  lVar52 = param_1;
  func_0x000106d2e070();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = lVar52;
  func_0x00010c23ffe0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    lStack_240 = 0;
    lStack_230 = 0;
    lStack_220 = 0;
    uStack_218 = 0;
    uStack_228 = 0;
    uStack_238 = 0;
    uVar54 = 0;
  }
  else {
    uStack_218 = *(undefined8 *)(param_1 + _DAT_11275cfd4);
    _objc_retain();
    lStack_220 = param_1 + _DAT_11275cfd8;
    _objc_loadWeakRetained();
    uStack_228 = *(undefined8 *)(param_1 + _DAT_11275cfdc);
    _objc_retain();
    lStack_230 = param_1 + _DAT_11275cfa0;
    _objc_loadWeakRetained();
    uStack_238 = *(undefined8 *)(param_1 + _DAT_11275cfe4);
    _objc_retain();
    lStack_240 = param_1 + _DAT_11275cfe0;
    _objc_loadWeakRetained();
    uVar54 = *(undefined8 *)(param_1 + _DAT_11275cfe8);
  }
  _objc_retain();
  lVar55 = param_1;
  func_0x000106d2e094();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = lVar55;
  func_0x00010bf27760();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar71 = 0;
  }
  else {
    lVar71 = param_1 + _DAT_11275cf88;
    _objc_loadWeakRetained();
  }
  lVar57 = lVar71;
  func_0x00010c22ac60();
  _objc_retainAutoreleasedReturnValue();
  lVar58 = param_1 + _DAT_11275ced0;
  _objc_loadWeakRetained();
  lVar59 = lVar58;
  func_0x00010c08d860();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lStack_268 = 0;
  }
  else {
    lStack_268 = param_1 + _DAT_11275cf8c;
    _objc_loadWeakRetained();
  }
  lVar60 = param_1;
  func_0x000106d2e0b8();
  _objc_retainAutoreleasedReturnValue();
  lVar61 = lVar60;
  func_0x00010bfbe800();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar75 = 0;
    lVar76 = 0;
    lVar79 = 0;
  }
  else {
    lVar76 = param_1 + _DAT_11275cf94;
    _objc_loadWeakRetained();
    lVar75 = param_1 + _DAT_11275cfa8;
    _objc_loadWeakRetained();
    lVar79 = param_1 + _DAT_11275cfa4;
    _objc_loadWeakRetained();
  }
  lVar62 = lVar79;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar74 = 0;
  }
  else {
    lVar74 = param_1 + _DAT_11275cf98;
    _objc_loadWeakRetained();
  }
  lVar63 = lVar74;
  func_0x00010c0c9b20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uVar77 = 0;
    param_1 = 0;
  }
  else {
    uVar77 = *(undefined8 *)(param_1 + _DAT_11275cfec);
    _objc_retain(uVar77);
    param_1 = param_1 + _DAT_11275cff0;
    _objc_loadWeakRetained();
  }
  lVar64 = param_1;
  func_0x00010c23c7e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff0ee0();
  _objc_release(lVar64);
  _objc_release(param_1);
  _objc_release(uVar77);
  _objc_release(lVar63);
  _objc_release(lVar74);
  _objc_release(lVar62);
  _objc_release(lVar79);
  _objc_release(lVar75);
  _objc_release(lVar76);
  _objc_release(lVar61);
  _objc_release(lVar60);
  _objc_release(lStack_268);
  _objc_release(lVar59);
  _objc_release(lVar58);
  _objc_release(lVar57);
  _objc_release(lVar71);
  _objc_release(lVar56);
  _objc_release(lVar55);
  _objc_release(uVar54);
  _objc_release(lStack_240);
  _objc_release(uStack_238);
  _objc_release(lStack_230);
  _objc_release(uStack_228);
  _objc_release(lStack_220);
  _objc_release(uStack_218);
  _objc_release(lVar53);
  _objc_release(lVar52);
  _objc_release(lVar51);
  _objc_release(lVar50);
  _objc_release(lVar49);
  _objc_release(lVar48);
  _objc_release(lVar47);
  _objc_release(lStack_1f0);
  _objc_release(lVar46);
  _objc_release(lVar70);
  _objc_release(lStack_1e0);
  _objc_release(uStack_1d8);
  _objc_release(puVar45);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar44);
  _objc_destroyWeak(auStack_88);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar69);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar72);
  _objc_release(uStack_190);
  _objc_release(lVar32);
  _objc_release(lVar68);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(uVar29);
  _objc_release(lVar28);
  _objc_release(lVar67);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lStack_160);
  _objc_release(lVar25);
  _objc_release(lVar66);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar65);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar80);
  _objc_release(lVar12);
  _objc_release(lVar78);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lStack_100);
  _objc_release(uStack_f8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar73);
  _objc_destroyWeak(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d2de1c; end: 106d2df83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d2de1c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11275cf08);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d2df84; end: 106d2e003;  */

void FUN_106d2df84(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd6900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106d2e004; end: 106d2e0db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d2e004(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11275cf5c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d2e0dc; end: 106d2e937; -[SCMemoriesOperaDependencyServiceProvider _operaMediaManagerBuilder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d2e0dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  undefined8 uStack_1e0;
  undefined8 uStack_c8;
  
  puVar1 = PTR_PTR_1126d2490;
  _objc_alloc();
  lVar2 = param_1;
  func_0x000106d2de40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x000106d2deac();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf93a20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x000106d2de64();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0c84c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x000106d2de88();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x000106d2def4();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c08f100();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x000106d2df18();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c0cadc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar48 = 0;
  }
  else {
    lVar48 = param_1 + _DAT_11275cf54;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar48;
  func_0x00010c0c9cc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar49 = 0;
  }
  else {
    lVar49 = param_1 + _DAT_11275cf30;
    _objc_loadWeakRetained();
  }
  lVar15 = lVar49;
  func_0x00010c0c9e40();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x000106d2df3c();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c0c57a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar50 = 0;
  }
  else {
    lVar50 = param_1 + _DAT_11275cf38;
    _objc_loadWeakRetained();
  }
  lVar18 = lVar50;
  func_0x00010c0da2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x000106d2df60();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010c1104a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar51 = 0;
  }
  else {
    lVar51 = param_1 + _DAT_11275cf44;
    _objc_loadWeakRetained();
  }
  lVar21 = lVar51;
  func_0x00010c2402c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar52 = 0;
  }
  else {
    lVar52 = param_1 + _DAT_11275cf48;
    _objc_loadWeakRetained();
  }
  lVar22 = lVar52;
  func_0x00010c2403c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_c8 = 0;
    lVar53 = 0;
  }
  else {
    uStack_c8 = param_1 + _DAT_11275cf50;
    _objc_loadWeakRetained();
    lVar53 = param_1 + _DAT_11275ced8;
    _objc_loadWeakRetained();
  }
  lVar23 = lVar53;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1;
  FUN_106d2e004();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar24;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar54 = 0;
  }
  else {
    lVar54 = param_1 + _DAT_11275cf64;
    _objc_loadWeakRetained();
  }
  lVar26 = lVar54;
  func_0x00010c0c57a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar55 = 0;
  }
  else {
    lVar55 = param_1 + _DAT_11275cf4c;
    _objc_loadWeakRetained();
  }
  lVar27 = lVar55;
  func_0x00010bf27740();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1;
  func_0x000106d2e094();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar28;
  func_0x00010bf27760();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar56 = 0;
  }
  else {
    lVar56 = param_1 + _DAT_11275cf6c;
    _objc_loadWeakRetained();
  }
  lVar30 = lVar56;
  func_0x00010bfbd5e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uStack_1e0 = 0;
    lVar57 = 0;
  }
  else {
    uStack_1e0 = *(undefined8 *)(param_1 + _DAT_11275cfd0);
    _objc_retain();
    lVar57 = param_1 + _DAT_11275cf70;
    _objc_loadWeakRetained();
  }
  lVar31 = lVar57;
  func_0x00010bf0f880();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar58 = 0;
  }
  else {
    lVar58 = param_1 + _DAT_11275cf9c;
    _objc_loadWeakRetained();
  }
  lVar32 = lVar58;
  func_0x00010c13ff40();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1;
  func_0x000106d2e070();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = lVar33;
  func_0x00010c23ffe0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar59 = 0;
  }
  else {
    lVar59 = param_1 + _DAT_11275cf84;
    _objc_loadWeakRetained();
  }
  lVar35 = lVar59;
  func_0x00010c2400a0();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_1;
  func_0x000106d2e04c();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar36;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar62 = 0;
  }
  else {
    lVar62 = param_1 + _DAT_11275cf7c;
    _objc_loadWeakRetained();
  }
  lVar38 = param_1;
  func_0x000106d2ded0();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = lVar38;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar60 = 0;
  }
  else {
    lVar60 = param_1 + _DAT_11275cf78;
    _objc_loadWeakRetained();
  }
  lVar40 = lVar60;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = param_1;
  func_0x000106d2e04c();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = lVar41;
  func_0x00010bf522a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar61 = 0;
  }
  else {
    lVar61 = param_1 + _DAT_11275cf34;
    _objc_loadWeakRetained();
  }
  lVar43 = param_1;
  func_0x000106d2de64();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = param_1;
  func_0x000106d2e0b8();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = lVar44;
  func_0x00010bfbe800();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = 0;
  if (param_1 != 0) {
    lVar46 = param_1 + _DAT_11275cf3c;
    _objc_loadWeakRetained();
  }
  lVar47 = lVar46;
  func_0x00010beec300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe620(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar11,lVar13,lVar14,lVar15,lVar17,
                      lVar18,lVar20,lVar21,lVar22,uStack_c8,lVar23,lVar25,lVar26,lVar27,lVar29,
                      lVar30,uStack_1e0,lVar31,lVar32,lVar34,lVar35,lVar37,lVar62,lVar39,lVar40,
                      lVar42,lVar61,lVar43,lVar45,lVar47);
  _objc_release(uStack_1e0);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar61);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar60);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar62);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar59);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar58);
  _objc_release(lVar31);
  _objc_release(lVar57);
  _objc_release(lVar30);
  _objc_release(lVar56);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar55);
  _objc_release(lVar26);
  _objc_release(lVar54);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar53);
  _objc_release(uStack_c8);
  _objc_release(lVar22);
  _objc_release(lVar52);
  _objc_release(lVar21);
  _objc_release(lVar51);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar50);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar49);
  _objc_release(lVar14);
  _objc_release(lVar48);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d2e938; end: 106d2eb3b; -[SCMemoriesOperaDependencyServiceProvider _buildRemixController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d2e938(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_68;
  
  puVar1 = PTR_PTR_1126d2498;
  _objc_alloc();
  if (param_1 == 0) {
    _objc_retain(0);
    uVar13 = 0;
    uStack_68 = 0;
  }
  else {
    uVar13 = *(undefined8 *)(param_1 + _DAT_11275cfc8);
    _objc_retain(uVar13);
    uStack_68 = param_1 + _DAT_11275cfac;
    _objc_loadWeakRetained();
  }
  lVar2 = param_1;
  FUN_106d2eb3c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0c9c00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x000106d2e028();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c29a4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b2460;
  _objc_opt_class();
  lVar8 = param_1;
  func_0x000106d2df3c();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0c57a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x000106d2e004();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106d2ded0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03de40(puVar1,param_2,uVar13,uStack_68,lVar3,lVar6,puVar7,7,lVar9,lVar11,lVar12);
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(param_1);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d2eb3c; end: 106d2eb5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d2eb3c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11275cf2c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d2eb60; end: 106d2ec07; -[SCMemoriesOperaDependencyServiceProvider _buildAIRemixController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d2eb60(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d24a0;
  _objc_alloc(PTR_PTR_1126d24a0);
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11275cfcc);
  }
  _objc_retain(uVar3);
  FUN_106d2eb3c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0c9c00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfefb40(puVar1,param_2,uVar3,lVar2);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106d2ec08; end: 106d2efc3; -[SCMemoriesOperaDependencyServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d2ec08(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275cff0);
  _objc_storeStrong(param_1 + _DAT_11275cfec,0);
  _objc_storeStrong(param_1 + _DAT_11275cfe8,0);
  _objc_storeStrong(param_1 + _DAT_11275cfe4,0);
  _objc_destroyWeak(param_1 + _DAT_11275cfe0);
  _objc_storeStrong(param_1 + _DAT_11275cfdc,0);
  _objc_destroyWeak(param_1 + _DAT_11275cfd8);
  _objc_storeStrong(param_1 + _DAT_11275cfd4,0);
  _objc_storeStrong(param_1 + _DAT_11275cfd0,0);
  _objc_storeStrong(param_1 + _DAT_11275cfcc,0);
  _objc_storeStrong(param_1 + _DAT_11275cfc8,0);
  _objc_storeStrong(param_1 + _DAT_11275cfc4,0);
  _objc_destroyWeak(param_1 + _DAT_11275cfc0);
  _objc_storeStrong(param_1 + _DAT_11275cfbc,0);
  _objc_destroyWeak(param_1 + _DAT_11275cfb8);
  _objc_storeStrong(param_1 + _DAT_11275cfb4,0);
  _objc_storeStrong(param_1 + _DAT_11275cfb0,0);
  _objc_destroyWeak(param_1 + _DAT_11275cfac);
  _objc_destroyWeak(param_1 + _DAT_11275cfa8);
  _objc_destroyWeak(param_1 + _DAT_11275cfa4);
  _objc_destroyWeak(param_1 + _DAT_11275cfa0);
  _objc_destroyWeak(param_1 + _DAT_11275cf9c);
  _objc_destroyWeak(param_1 + _DAT_11275cf98);
  _objc_destroyWeak(param_1 + _DAT_11275cf94);
  _objc_destroyWeak(param_1 + _DAT_11275cf90);
  _objc_destroyWeak(param_1 + _DAT_11275cf8c);
  _objc_destroyWeak(param_1 + _DAT_11275ced0);
  _objc_destroyWeak(param_1 + _DAT_11275cf88);
  _objc_destroyWeak(param_1 + _DAT_11275cf84);
  _objc_destroyWeak(param_1 + _DAT_11275cf80);
  _objc_destroyWeak(param_1 + _DAT_11275cf7c);
  _objc_destroyWeak(param_1 + _DAT_11275cf78);
  _objc_destroyWeak(param_1 + _DAT_11275cf74);
  _objc_destroyWeak(param_1 + _DAT_11275cf70);
  _objc_destroyWeak(param_1 + _DAT_11275cf6c);
  _objc_destroyWeak(param_1 + _DAT_11275cf68);
  _objc_destroyWeak(param_1 + _DAT_11275cf64);
  _objc_destroyWeak(param_1 + _DAT_11275cf60);
  _objc_destroyWeak(param_1 + _DAT_11275cf5c);
  _objc_destroyWeak(param_1 + _DAT_11275cf58);
  _objc_destroyWeak(param_1 + _DAT_11275cf54);
  _objc_destroyWeak(param_1 + _DAT_11275cf50);
  _objc_destroyWeak(param_1 + _DAT_11275cf4c);
  _objc_destroyWeak(param_1 + _DAT_11275cf48);
  _objc_destroyWeak(param_1 + _DAT_11275cf44);
  _objc_destroyWeak(param_1 + _DAT_11275cf40);
  _objc_destroyWeak(param_1 + _DAT_11275cf3c);
  _objc_destroyWeak(param_1 + _DAT_11275cf38);
  _objc_destroyWeak(param_1 + _DAT_11275cf34);
  _objc_destroyWeak(param_1 + _DAT_11275cf30);
  _objc_destroyWeak(param_1 + _DAT_11275cf2c);
  _objc_destroyWeak(param_1 + _DAT_11275cf28);
  _objc_destroyWeak(param_1 + _DAT_11275cf24);
  _objc_destroyWeak(param_1 + _DAT_11275cf20);
  _objc_destroyWeak(param_1 + _DAT_11275cf1c);
  _objc_destroyWeak(param_1 + _DAT_11275cf18);
  _objc_destroyWeak(param_1 + _DAT_11275cf14);
  _objc_destroyWeak(param_1 + _DAT_11275cf10);
  _objc_destroyWeak(param_1 + _DAT_11275cf0c);
  _objc_destroyWeak(param_1 + _DAT_11275cf08);
  _objc_destroyWeak(param_1 + _DAT_11275cf04);
  _objc_destroyWeak(param_1 + _DAT_11275cf00);
  _objc_destroyWeak(param_1 + _DAT_11275cefc);
  _objc_destroyWeak(param_1 + _DAT_11275cef8);
  _objc_destroyWeak(param_1 + _DAT_11275cef4);
  _objc_destroyWeak(param_1 + _DAT_11275cef0);
  _objc_destroyWeak(param_1 + _DAT_11275ceec);
  _objc_destroyWeak(param_1 + _DAT_11275cee8);
  _objc_destroyWeak(param_1 + _DAT_11275cee4);
  _objc_destroyWeak(param_1 + _DAT_11275cee0);
  _objc_destroyWeak(param_1 + _DAT_11275cedc);
  _objc_destroyWeak(param_1 + _DAT_11275ced8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275ced4);
  return;
}



/* Entry: 106d2efc4; end: 106d2f05b; -[SCGalleryOperaLoadingProgressProvider initWithPerformer:] */

undefined1 * FUN_106d2efc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6940;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d2f05c; end: 106d2f17f; -[SCGalleryOperaLoadingProgressProvider didReceiveProgressUpdateWithRequestId:progress:] */

void FUN_106d2f05c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_2 + 0x10);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    puVar2 = auStack_48;
    _objc_initWeak(puVar2,param_2);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,auStack_48);
    _objc_retain(param_4);
    uStack_50 = param_1;
    func_0x00010c0f7fc0(puVar2);
    _objc_release(puVar2);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 106d2f180; end: 106d2f20b;  */

void FUN_106d2f180(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar1 + 0x10);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar2 + 0x10))((float)*(double *)(param_1 + 0x30));
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d2f20c; end: 106d2f30b; -[SCGalleryOperaLoadingProgressProvider startToMonitorProgressWithRequestId:progressHandler:] */

void FUN_106d2f20c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106d2f30c; end: 106d2f37b;  */

void FUN_106d2f30c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (lVar2 = *(long *)(param_1 + 0x28), lVar2 != 0)) {
    func_0x00010bf51e00();
    lVar3 = lVar2;
    _objc_retainBlock();
    func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0x10),param_2,lVar3,*(undefined8 *)(param_1 + 0x20))
    ;
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d2f37c; end: 106d2f453; -[SCGalleryOperaLoadingProgressProvider stopToMonitorProgressWithRequestId:] */

void FUN_106d2f37c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}


