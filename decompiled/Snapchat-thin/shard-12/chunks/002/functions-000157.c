/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108ec8ef8; end: 108ec8efb; -[SCPreviewStickerView alignableTouchControlView] */

void FUN_108ec8ef8(void)

{
  return;
}



/* Entry: 108ec8efc; end: 108ec8eff; -[SCPreviewStickerView alignableContentRect] */

void FUN_108ec8efc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf20c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_bounds_1125a5ca8);
  return;
}



/* Entry: 108ec8f00; end: 108ec8f07; -[SCPreviewStickerView shouldProcessGesture:] */

undefined8 FUN_108ec8f00(void)

{
  return 1;
}



/* Entry: 108ec8f08; end: 108ec8f0b; -[SCPreviewStickerView updateAnchorState:withGestureRecognizer:] */

void FUN_108ec8f08(void)

{
  return;
}



/* Entry: 108ec8f0c; end: 108ec8f3f; -[SCPreviewStickerView deletableView] */

void FUN_108ec8f0c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c07c340();
  if ((int)uVar1 == 0) {
    param_1 = 0;
  }
  _objc_retain(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108ec8f40; end: 108ec8f43; -[SCPreviewStickerView previewStickerViewContentViewDidChangeSize:] */

void FUN_108ec8f40(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be88490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__refreshContentLayoutWithContent_11257fac0);
  return;
}



/* Entry: 108ec8f44; end: 108ec9113; -[SCPreviewStickerView _refreshContentLayoutWithContentView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec8f44(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  _objc_retain(param_7);
  if (param_7 != 0) {
    lVar3 = param_5;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = param_5;
      func_0x00010c2a71e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a72a0();
      dVar8 = *(double *)PTR__UIWindowLevelNormal_110345e88;
      dVar5 = param_1;
      _objc_release(lVar4);
      _objc_release(lVar3);
      if (param_1 == dVar8) {
        func_0x00010c110a20(param_7);
        dVar8 = *(double *)PTR__CGSizeZero_110347620;
        dVar7 = *(double *)(PTR__CGSizeZero_110347620 + 8);
        bVar1 = dVar5 != dVar8;
        bVar2 = param_2 == dVar7;
        if (bVar2 && !bVar1) {
          func_0x00010c08cdc0(param_7);
          func_0x00010bfb68e0(param_7);
          dVar5 = param_3;
          param_2 = param_4;
        }
        func_0x00010bf345e0(param_5);
        dVar6 = 0.0;
        func_0x00010c1739e0(0,0,dVar5,param_2,param_5);
        func_0x00010bf20c00(param_5);
        _CGRectGetWidth();
        dVar5 = dVar6;
        func_0x00010bf20c00(param_5);
        _CGRectGetHeight();
        func_0x00010c17a6a0(dVar6 * 0.5,dVar5 * 0.5,param_7);
        func_0x00010c17a6a0(dVar8,dVar7,param_5);
        if (!bVar2 || bVar1) {
          func_0x00010c08cdc0(param_7);
        }
        param_5 = param_5 + _DAT_11277d440;
        _objc_loadWeakRetained(param_5);
        func_0x00010c111e80();
        _objc_release(param_5);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 108ec9114; end: 108ec91b7; -[SCPreviewStickerView previewStickerViewContentView:didChangeMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec9114(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  lVar2 = (long)_DAT_11277d410;
  uVar1 = *(ulong *)(param_1 + lVar2);
  _objc_opt_respondsToSelector(uVar1,PTR_s_updateItemInstance__11267f500);
  if ((uVar1 & 1) != 0) {
    func_0x00010c286b60(*(undefined8 *)(param_1 + lVar2));
  }
  param_1 = param_1 + _DAT_11277d440;
  _objc_loadWeakRetained(param_1);
  func_0x00010c111e80();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108ec91b8; end: 108ec924f; -[SCPreviewStickerView previewStickerViewContentViewDidChangeSize:andMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec91b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = (long)_DAT_11277d410;
  uVar1 = *(ulong *)(param_1 + lVar2);
  _objc_opt_respondsToSelector(uVar1,PTR_s_updateItemInstance__11267f500);
  if ((uVar1 & 1) != 0) {
    func_0x00010c286b60(*(undefined8 *)(param_1 + lVar2));
  }
  func_0x00010c111e40(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ec9250; end: 108ec9253; -[SCPreviewStickerView trackableView] */

void FUN_108ec9250(void)

{
  return;
}



/* Entry: 108ec9254; end: 108ec927b; -[SCPreviewStickerView isTimed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108ec9254(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11277d448);
  func_0x00010bf46340(lVar1);
  return lVar1 == 1;
}



/* Entry: 108ec927c; end: 108ec92d3; -[SCPreviewStickerView trackingTrajectoryState] */

void FUN_108ec927c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c26a1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2723c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108ec92d4; end: 108ec93a3; -[SCPreviewStickerView durationEnabledState] */

void FUN_108ec92d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar2 = param_1;
  func_0x00010c255080(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126dc080;
  _objc_alloc(PTR_PTR_1126dc080);
  func_0x00010c279100(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04bfe0(puVar3,param_2,uVar2,param_1);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108ec93a4; end: 108ec93ab; -[SCPreviewStickerView durationEnabledToolType] */

undefined8 FUN_108ec93a4(void)

{
  return 1;
}



/* Entry: 108ec93ac; end: 108ec93b3; -[SCPreviewStickerView isSelfResizing] */

undefined8 FUN_108ec93ac(void)

{
  return 0;
}



/* Entry: 108ec93b4; end: 108ec93c3; -[SCPreviewStickerView sticker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ec93b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d410);
}



/* Entry: 108ec93c4; end: 108ec93d3; -[SCPreviewStickerView contentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ec93c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d438);
}



/* Entry: 108ec93d4; end: 108ec93f3; -[SCPreviewStickerView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec93d4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277d440);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ec93f4; end: 108ec9407; -[SCPreviewStickerView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec93f4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277d440,param_3);
  return;
}



/* Entry: 108ec9408; end: 108ec9417; -[SCPreviewStickerView isStickerFromRecents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108ec9408(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277d3f8);
}



/* Entry: 108ec9418; end: 108ec9427; -[SCPreviewStickerView setIsStickerFromRecents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec9418(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277d3f8) = param_3;
  return;
}



/* Entry: 108ec9428; end: 108ec9437; -[SCPreviewStickerView isCreatedCustomSticker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108ec9428(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277d3fc);
}



/* Entry: 108ec9438; end: 108ec9447; -[SCPreviewStickerView setIsCreatedCustomSticker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec9438(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277d3fc) = param_3;
  return;
}



/* Entry: 108ec9448; end: 108ec9457; -[SCPreviewStickerView isFromCutout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108ec9448(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277d400);
}



/* Entry: 108ec9458; end: 108ec9467; -[SCPreviewStickerView setIsFromCutout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec9458(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277d400) = param_3;
  return;
}



/* Entry: 108ec9468; end: 108ec9477; -[SCPreviewStickerView uniqueId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ec9468(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d3f4);
}



/* Entry: 108ec9478; end: 108ec9487; -[SCPreviewStickerView setUniqueId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec9478(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11277d3f4) = param_3;
  return;
}



/* Entry: 108ec9488; end: 108ec9497; -[SCPreviewStickerView isFlipped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108ec9488(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277d430);
}



/* Entry: 108ec9498; end: 108ec94a7; -[SCPreviewStickerView setIsFlipped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec9498(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277d430) = param_3;
  return;
}



/* Entry: 108ec94a8; end: 108ec94b7; -[SCPreviewStickerView isRemovable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108ec94a8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277d41c);
}



/* Entry: 108ec94b8; end: 108ec94c7; -[SCPreviewStickerView setIsRemovable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec94b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277d41c) = param_3;
  return;
}



/* Entry: 108ec94c8; end: 108ec94d7; -[SCPreviewStickerView isMovable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108ec94c8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277d420);
}



/* Entry: 108ec94d8; end: 108ec94e7; -[SCPreviewStickerView setIsMovable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec94d8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277d420) = param_3;
  return;
}



/* Entry: 108ec94e8; end: 108ec94f7; -[SCPreviewStickerView isGlobalLevelTracking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108ec94e8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277d404);
}



/* Entry: 108ec94f8; end: 108ec9507; -[SCPreviewStickerView setIsGlobalLevelTracking:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec94f8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277d404) = param_3;
  return;
}



/* Entry: 108ec9508; end: 108ec9517; -[SCPreviewStickerView isAnimated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108ec9508(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277d434);
}



/* Entry: 108ec9518; end: 108ec9527; -[SCPreviewStickerView setIsAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec9518(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277d434) = param_3;
  return;
}



/* Entry: 108ec9528; end: 108ec9537; -[SCPreviewStickerView isExcludedFromEditCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108ec9528(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277d408);
}



/* Entry: 108ec9538; end: 108ec9547; -[SCPreviewStickerView setIsExcludedFromEditCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec9538(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277d408) = param_3;
  return;
}



/* Entry: 108ec9548; end: 108ec9557; -[SCPreviewStickerView stickerImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ec9548(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d42c);
}



/* Entry: 108ec9558; end: 108ec9597; -[SCPreviewStickerView setStickerImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec9558(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277d42c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ec9598; end: 108ec9653; -[SCPreviewStickerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec9598(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277d42c,0);
  _objc_destroyWeak(param_1 + _DAT_11277d440);
  _objc_storeStrong(param_1 + _DAT_11277d438,0);
  _objc_storeStrong(param_1 + _DAT_11277d410,0);
  _objc_storeStrong(param_1 + _DAT_11277d428,0);
  _objc_storeStrong(param_1 + _DAT_11277d414,0);
  _objc_storeStrong(param_1 + _DAT_11277d424,0);
  _objc_storeStrong(param_1 + _DAT_11277d418,0);
  _objc_storeStrong(param_1 + _DAT_11277d448,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277d444,0);
  return;
}



/* Entry: 108ec9654; end: 108ec96fb; -[SCCreativeToolsDurationEnabledState initWithState:trackingTrajectory:] */

undefined1 *
FUN_108ec9654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ff0e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ec96fc; end: 108ec971f; -[SCCreativeToolsDurationEnabledState copyWithZone:] */

undefined8 FUN_108ec96fc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ec9720; end: 108ec9793; -[SCCreativeToolsDurationEnabledState hash] */

undefined8 * FUN_108ec9720(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108ec9814:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108ec9820;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_108ec9820;
        }
        goto LAB_108ec9814;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108ec9820:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108ec9794; end: 108ec983b; -[SCCreativeToolsDurationEnabledState isEqual:] */

long FUN_108ec9794(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108ec9814:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108ec9820;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_108ec9820;
        }
        goto LAB_108ec9814;
      }
    }
    lVar3 = 0;
  }
LAB_108ec9820:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108ec983c; end: 108ec9843; -[SCCreativeToolsDurationEnabledState state] */

undefined8 FUN_108ec983c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ec9844; end: 108ec984b; -[SCCreativeToolsDurationEnabledState trackingTrajectory] */

undefined8 FUN_108ec9844(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108ec984c; end: 108ec987b; -[SCCreativeToolsDurationEnabledState .cxx_destruct] */

void FUN_108ec984c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ec987c; end: 108ec9927; -[SCTouchControlUIView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108ec987c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar2 = &uStack_30;
  puStack_28 = PTR_PTR_1126ff0e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar2 + (long)_DAT_11277d464) = 0;
    *(undefined8 *)((long)puVar2 + (long)_DAT_11277d468) = 0x3ff0000000000000;
    func_0x00010c17a6a0(0,0,puVar2);
    *(undefined1 *)((long)puVar2 + (long)_DAT_11277d46c) = 0;
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_11277d470);
    uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uVar3 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    puVar1[5] = uVar4;
    puVar1[4] = uVar3;
    uVar8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uVar7 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    puVar1[1] = uVar8;
    *puVar1 = uVar7;
    puVar1[3] = uVar6;
    puVar1[2] = uVar5;
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_11277d474);
    puVar1[1] = uVar8;
    *puVar1 = uVar7;
    puVar1[3] = uVar6;
    puVar1[2] = uVar5;
    puVar1[5] = uVar4;
    puVar1[4] = uVar3;
  }
  return (undefined1 *)puVar2;
}



/* Entry: 108ec9928; end: 108ec9987; -[SCTouchControlUIView setRotation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec9928(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *(undefined8 *)(param_2 + _DAT_11277d464) = param_1;
  puVar1 = (undefined8 *)(param_2 + _DAT_11277d470);
  func_0x00010c141a80();
  _CGAffineTransformMakeRotation(&uStack_50);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  puVar1[3] = uStack_38;
  puVar1[2] = uStack_40;
  puVar1[5] = uStack_28;
  puVar1[4] = uStack_30;
  func_0x00010be872e0(param_2);
  return;
}



/* Entry: 108ec9988; end: 108ec9a0b; -[SCTouchControlUIView setScale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec9988(double param_1,long param_2)

{
  undefined8 *puVar1;
  double dVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (!NAN(param_1)) {
    *(double *)(param_2 + _DAT_11277d468) = param_1;
    puVar1 = (undefined8 *)(param_2 + _DAT_11277d474);
    func_0x00010c14e120();
    dVar2 = param_1;
    func_0x00010c14e120(param_2);
    _CGAffineTransformMakeScale(&uStack_60,param_1,dVar2);
    puVar1[1] = uStack_58;
    *puVar1 = uStack_60;
    puVar1[3] = uStack_48;
    puVar1[2] = uStack_50;
    puVar1[5] = uStack_38;
    puVar1[4] = uStack_40;
    func_0x00010be872e0(param_2);
  }
  return;
}



/* Entry: 108ec9a0c; end: 108ec9a0f; -[SCTouchControlUIView translation] */

void FUN_108ec9a0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf345f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_center_1125aab20);
  return;
}



/* Entry: 108ec9a10; end: 108ec9a23; -[SCTouchControlUIView setTranslation:] */

void FUN_108ec9a10(double param_1,double param_2,undefined8 param_3)

{
  bool bVar1;
  
  bVar1 = true;
  if ((!NAN(param_1)) && (bVar1 = true, !NAN(param_2))) {
    bVar1 = false;
  }
  if (bVar1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c17a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_setCenter__11263c3c8);
  return;
}



/* Entry: 108ec9a24; end: 108ec9a2b; -[SCTouchControlUIView maxScale] */

undefined8 FUN_108ec9a24(void)

{
  return 0xbff0000000000000;
}



/* Entry: 108ec9a2c; end: 108ec9a33; -[SCTouchControlUIView minScale] */

undefined8 FUN_108ec9a2c(void)

{
  return 0xbff0000000000000;
}



/* Entry: 108ec9a34; end: 108ec9a97; -[SCTouchControlUIView _recomputeTransform] */

void FUN_108ec9a34(undefined8 param_1)

{
  undefined1 auStack_b0 [48];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010c14e480(&uStack_80);
  func_0x00010c141d20(auStack_b0,param_1);
  _CGAffineTransformConcat(&uStack_50,&uStack_80,auStack_b0);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(param_1);
  return;
}



/* Entry: 108ec9a98; end: 108ec9b87; -[SCTouchControlUIView pan:] */

void FUN_108ec9a98(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((lVar1 != 0) && (lVar1 = param_5, func_0x00010c252440(), lVar1 == 2)) {
    lVar1 = param_3;
    func_0x00010c262ca0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27adc0(param_5,param_4,lVar1);
    dVar2 = param_1;
    dVar3 = param_2;
    _objc_release(lVar1);
    func_0x00010c27ada0(param_3);
    func_0x00010c27ada0(param_3);
    func_0x00010c219b80(param_1 + dVar2,param_2 + dVar3,param_3);
    func_0x00010c262ca0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219ba0(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8),param_5,param_4,param_3);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108ec9b88; end: 108ec9cc3; -[SCTouchControlUIView rotation:] */

void FUN_108ec9b88(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c252440();
  if (lVar1 == 2) {
    func_0x00010c141a80(param_5);
    lVar1 = param_3;
    dVar6 = param_1;
    func_0x00010c082460();
    if ((int)lVar1 != 0) {
      lVar1 = param_3;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        lVar1 = param_3;
        func_0x00010c262ca0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09ef00(param_5,param_4,lVar1);
        dVar2 = dVar6;
        dVar4 = param_2;
        _objc_release(lVar1);
        func_0x00010bf345e0(param_3);
        dVar6 = dVar6 - dVar2;
        func_0x00010bf345e0(param_3);
        param_2 = param_2 - dVar4;
        dVar3 = param_1;
        ___sincos_stret(param_1);
        dVar2 = param_2 * dVar3;
        dVar5 = dVar4 * param_2;
        dVar7 = dVar5 + dVar6 * dVar3;
        func_0x00010c27ada0(param_3);
        dVar6 = (dVar6 + dVar3) - (-dVar2 + dVar6 * dVar4);
        func_0x00010c27ada0(param_3);
        func_0x00010c219b80(dVar6,(param_2 + dVar5) - dVar7,param_3);
      }
    }
    func_0x00010c141a80(param_3);
    func_0x00010c1ee7a0(param_1 + dVar6,param_3);
    func_0x00010c1ee7a0(0,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108ec9cc4; end: 108ec9e8b; -[SCTouchControlUIView pinch:] */

void FUN_108ec9cc4(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c252440();
  if (lVar1 == 2) {
    func_0x00010c14e120(param_5);
    if (!NAN(param_1)) {
      dVar4 = param_1;
      func_0x00010c0c2ce0(param_3);
      dVar2 = dVar4;
      if (dVar4 != -1.0) {
        func_0x00010c14e120(param_3);
        dVar5 = param_1 * dVar4;
        func_0x00010c0c2ce0(param_3);
        dVar2 = dVar4;
        if (dVar4 < dVar5) {
          func_0x00010c0c2ce0(param_3);
          dVar2 = dVar4;
          func_0x00010c14e120(param_3);
          param_1 = dVar4 / dVar2;
        }
      }
      func_0x00010c0cd9a0(param_3);
      dVar4 = dVar2;
      if (dVar2 != -1.0) {
        func_0x00010c14e120(param_3);
        dVar5 = param_1 * dVar2;
        func_0x00010c0cd9a0(param_3);
        dVar4 = dVar2;
        if (dVar5 < dVar2) {
          func_0x00010c0cd9a0(param_3);
          dVar4 = dVar2;
          func_0x00010c14e120(param_3);
          param_1 = dVar2 / dVar4;
        }
      }
      if ((param_1 != 0.0) && (lVar1 = param_3, func_0x00010c082460(), (int)lVar1 != 0)) {
        lVar1 = param_3;
        func_0x00010c262ca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar1 != 0) {
          lVar1 = param_3;
          func_0x00010c262ca0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c09ef00(param_5,param_4,lVar1);
          dVar5 = param_2;
          _objc_release(lVar1);
          dVar3 = 1.0;
          func_0x00010c27ada0(param_3);
          dVar2 = dVar3;
          func_0x00010bf345e0(param_3);
          dVar4 = dVar3 + (dVar4 - dVar2) * (1.0 - param_1);
          func_0x00010c27ada0(param_3);
          dVar2 = dVar5;
          func_0x00010bf345e0(param_3);
          func_0x00010c219b80(dVar4,dVar5 + (param_2 - dVar2) * (1.0 - param_1),param_3);
        }
      }
      func_0x00010c14e120(param_3);
      func_0x00010c1f5fe0(param_1 * dVar4,param_3);
    }
    func_0x00010c1f5fe0(0x3ff0000000000000,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108ec9e8c; end: 108ec9e9b; -[SCTouchControlUIView isUseTouchCenterAsPivot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108ec9e8c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277d46c);
}



/* Entry: 108ec9e9c; end: 108ec9eab; -[SCTouchControlUIView setUseTouchCenterAsPivot:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec9e9c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277d46c) = param_3;
  return;
}



/* Entry: 108ec9eac; end: 108ec9ebb; -[SCTouchControlUIView scale] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ec9eac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d468);
}



/* Entry: 108ec9ebc; end: 108ec9ecb; -[SCTouchControlUIView rotation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ec9ebc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d464);
}



/* Entry: 108ec9ecc; end: 108ec9edb; -[SCTouchControlUIView deleted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108ec9ecc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277d454);
}



/* Entry: 108ec9edc; end: 108ec9eeb; -[SCTouchControlUIView setDeleted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec9edc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277d454) = param_3;
  return;
}



/* Entry: 108ec9eec; end: 108ec9f0b; -[SCTouchControlUIView rotationTransform] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec9eec(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11277d470);
  uVar2 = *puVar1;
  uVar4 = puVar1[3];
  uVar3 = puVar1[2];
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = puVar1[4];
  param_1[5] = puVar1[5];
  param_1[4] = uVar2;
  return;
}



/* Entry: 108ec9f0c; end: 108ec9f2b; -[SCTouchControlUIView setRotationTransform:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec9f0c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11277d470);
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  uVar3 = param_3[5];
  uVar2 = param_3[4];
  uVar6 = *param_3;
  puVar1[1] = param_3[1];
  *puVar1 = uVar6;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  return;
}



/* Entry: 108ec9f2c; end: 108ec9f4b; -[SCTouchControlUIView scaleTransform] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec9f2c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11277d474);
  uVar2 = *puVar1;
  uVar4 = puVar1[3];
  uVar3 = puVar1[2];
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = puVar1[4];
  param_1[5] = puVar1[5];
  param_1[4] = uVar2;
  return;
}



/* Entry: 108ec9f4c; end: 108ec9f6b; -[SCTouchControlUIView setScaleTransform:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ec9f4c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11277d474);
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  uVar3 = param_3[5];
  uVar2 = param_3[4];
  uVar6 = *param_3;
  puVar1[1] = param_3[1];
  *puVar1 = uVar6;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  return;
}



/* Entry: 108ec9f6c; end: 108eca2ab; +[SCCreativeKitBackgroundHelper blurPreviewImageForSticker:] */

void FUN_108ec9f6c(undefined8 param_1,double param_2,double param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_retain(param_7);
  _objc_alloc(puVar1);
  func_0x00010c008240();
  _objc_release(param_7);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c14c5e0(0x3fd99999a0000000,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2bb380(puVar1,param_6,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  dVar10 = 15.0;
  puVar1 = puVar3;
  func_0x00010bf1e840(0x402e000000000000,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  dVar11 = param_2;
  dVar13 = param_3;
  dVar12 = param_4;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  param_4 = (dVar13 - param_2) - param_4;
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  param_3 = (dVar12 - dVar10) - param_3;
  _objc_release(puVar4);
  _objc_release(puVar2);
  func_0x00010c23d0a0(puVar3);
  dVar13 = dVar11;
  func_0x00010c23d0a0(puVar3);
  dVar12 = (param_4 / param_3) * (dVar11 - dVar13 / 3.0);
  func_0x00010c23d0a0(puVar3);
  dVar11 = dVar13;
  func_0x00010c23d0a0(puVar3);
  dVar11 = dVar11 / 3.0;
  dVar13 = dVar13 - dVar11;
  func_0x00010c23d0a0(puVar3);
  puVar2 = puVar1;
  _objc_retainAutorelease(puVar1);
  func_0x00010bdc1020();
  _CGImageCreateWithImageInRect(dVar11 * 0.5 - dVar12 * 0.5,0,dVar12,dVar13);
  puVar4 = PTR__OBJC_CLASS___CIContext_1126b3120;
  func_0x00010bf4f640(PTR__OBJC_CLASS___CIContext_1126b3120,param_6,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___CIImage_1126b3128;
  func_0x00010bfe9240(PTR__OBJC_CLASS___CIImage_1126b3128,param_6,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___CIFilter_1126c7620;
  func_0x00010bfae980(PTR__OBJC_CLASS___CIFilter_1126c7620,param_6,
                      &PTR____CFConstantStringClassReference_110effb38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220();
  func_0x00010c220220(puVar6,param_6,&PTR__OBJC_CLASS___NSConstantFloatNumber_111186540,
                      *(undefined8 *)PTR__kCIInputSaturationKey_11034ad98);
  puVar7 = puVar6;
  func_0x00010c296f60(puVar6,param_6,*(undefined8 *)PTR__kCIOutputImageKey_11034ada0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9de20();
  puVar8 = puVar4;
  func_0x00010bf54e00(puVar4,param_6,puVar7);
  puVar9 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68,param_6,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _CGImageRelease(puVar8);
  _CGImageRelease(puVar2);
  _UIGraphicsBeginImageContext(param_4,param_3);
  puVar2 = puVar9;
  func_0x00010bf89920(0,0,param_4,param_3,puVar9);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
  puVar8 = puVar2;
  _UIImagePNGRepresentation(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 108eca2ac; end: 108eca867;  */

void FUN_108eca2ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  
  func_0x00010bf0a640();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ed8fb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010baff1d0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110e55558);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ed8fd8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ed8ff8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ed9018);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb10920();
  _objc_release(uVar4);
  uVar4 = param_1;
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ed9038);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ed9058);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar5);
  uVar5 = param_1;
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ed9078);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar5);
  uVar5 = param_1;
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ed9098);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar5);
  uVar5 = param_1;
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ed90b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  _objc_release(uVar5);
  uVar5 = param_1;
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ed90d8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ed90f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010baf4d0c();
  _objc_release(uVar6);
  uVar6 = param_1;
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ed9118);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010baf4dac();
  _objc_release(uVar6);
  uVar6 = param_1;
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ed9138);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar6);
  uVar6 = param_1;
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ed9158);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar6);
  uVar6 = param_1;
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ed9178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar6);
  uVar6 = param_1;
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ed9198);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ed8f78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar7);
  uVar7 = param_1;
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ed8f98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar7);
  uVar7 = param_1;
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110effb58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar7);
  uVar7 = param_1;
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ed91d8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ed91f8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ed9218);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4fe0();
  _objc_release(uVar9);
  uVar9 = param_1;
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ed9238);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar9);
  uVar9 = param_1;
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ed9258);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar9);
  uVar10 = param_1;
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ed9278);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ed9298);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110ed92b8);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126d9638;
  _objc_alloc();
  func_0x00010c021240();
  _objc_release(uVar9);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 108eca868; end: 108ecabc7;  */

void FUN_108eca868(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b5870;
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    _objc_retain();
    _objc_alloc_init(puVar2);
    lVar1 = param_1;
    func_0x00010c07f460(param_1);
    func_0x00010c1b49e0(puVar2,param_2,lVar1);
    lVar1 = param_1;
    func_0x00010c087180(param_1);
    func_0x00010c1b70c0(puVar2,param_2,lVar1);
    lVar1 = param_1;
    func_0x00010c0dfa00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d03e0(puVar2,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf07940(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204980(puVar2,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf0d6a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2049a0(puVar2,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c241940(param_1);
    func_0x00010c2049e0(puVar2,param_2,lVar1);
    lVar1 = param_1;
    func_0x00010bf5ada0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204a00(puVar2,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf74620(param_1);
    func_0x00010c204a40(puVar2,param_2,lVar1);
    lVar1 = param_1;
    func_0x00010bf74660(param_1);
    func_0x00010c204a60(puVar2,param_2,lVar1);
    lVar1 = param_1;
    func_0x00010bf74740(param_1);
    func_0x00010c204a80(puVar2,param_2,lVar1);
    lVar1 = param_1;
    func_0x00010c094540(param_1);
    func_0x00010c204ac0(puVar2,param_2,lVar1);
    lVar1 = param_1;
    func_0x00010c14f760(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204b20(puVar2,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf5ad20(param_1);
    func_0x00010c204b60(puVar2,param_2,lVar1);
    lVar1 = param_1;
    func_0x00010bf5ad80(param_1);
    func_0x00010c204bc0(puVar2,param_2,lVar1);
    lVar1 = param_1;
    func_0x00010bfd4400(param_1);
    func_0x00010c204c00(puVar2,param_2,lVar1);
    lVar1 = param_1;
    func_0x00010bfd5180(param_1);
    func_0x00010c204c20(puVar2,param_2,lVar1);
    lVar1 = param_1;
    func_0x00010bfd84e0(param_1);
    func_0x00010c204c40(puVar2,param_2,lVar1);
    lVar1 = param_1;
    func_0x00010c2752e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c217820(puVar2,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c0829c0(param_1);
    func_0x00010c1b58c0(puVar2,param_2,lVar1);
    lVar1 = param_1;
    func_0x00010c073d20(param_1);
    func_0x00010c1b1500(puVar2,param_2,lVar1);
    lVar1 = param_1;
    func_0x00010c241bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204b40(puVar2,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf68340(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18aaa0(puVar2,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf67fa0(param_1);
    func_0x00010c18a8a0(puVar2,param_2,lVar1);
    lVar1 = param_1;
    func_0x00010bfd85e0(param_1);
    func_0x00010c1a6260(puVar2,param_2,lVar1);
    lVar1 = param_1;
    func_0x00010c070e80(param_1);
    func_0x00010c1b0900(puVar2,param_2,lVar1);
    lVar1 = param_1;
    func_0x00010bfe5f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9a00(puVar2,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c06afe0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aeee0(puVar2,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c23f300(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010c2038e0(puVar2,param_2,lVar1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ecabc8; end: 108ecabd3; -[SCFeatureSettingsService hasSnapKitPrivacyPolicyLastSeenTimestamp] */

void FUN_108ecabc8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110effb78);
  return;
}



/* Entry: 108ecabd4; end: 108ecabdf; -[SCFeatureSettingsService snapKitPrivacyPolicyLastSeenTimestampServerParam] */

undefined ** FUN_108ecabd4(void)

{
  return &PTR____CFConstantStringClassReference_110effb78;
}



/* Entry: 108ecabe0; end: 108ecabef; -[SCFeatureSettingsService setSnapKitPrivacyPolicyLastSeenTimestamp:] */

void FUN_108ecabe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110effb78,param_3);
  return;
}



/* Entry: 108ecabf0; end: 108ecabf7; -[SCFeatureSettingsService snap_kit_login_kit_privacy_explainer_last_seen_timestamp_millis_client_value:] */

void FUN_108ecabf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108ecabf8; end: 108ecabff; -[SCFeatureSettingsService snap_kit_login_kit_privacy_explainer_last_seen_timestamp_millis_server_value:] */

void FUN_108ecabf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108ecac00; end: 108ecac0f; -[SCFeatureSettingsService snapKitPrivacyPolicyLastSeenTimestamp] */

void FUN_108ecac00(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110effb78,0);
  return;
}



/* Entry: 108ecac10; end: 108ecac93; +[SCSnapConnectCommon createDownloadRequestFromUrlString:] */

void FUN_108ecac10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c04e820();
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableURLRequest_1126aedd8;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableURLRequest_1126aedd8);
  func_0x00010c057840();
  func_0x00010c1a4fc0();
  func_0x00010c215b60(0x4034000000000000,puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ecac94; end: 108ecaca3; +[SCSnapConnectCommon showErrorMessage:redirectUrl:viewController:] */

void FUN_108ecac94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c237410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_showErrorMessage_navigationDeleg_11266b728,param_3,0,param_4,param_5);
  return;
}



/* Entry: 108ecaca4; end: 108ecacab; +[SCSnapConnectCommon showErrorMessage:navigationDelegate:redirectUrl:viewController:] */

void FUN_108ecaca4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c237430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_showErrorMessage_navigationDeleg_11266b730);
  return;
}



/* Entry: 108ecacac; end: 108ecad87; +[SCSnapConnectCommon showErrorMessage:navigationDelegate:redirectUrl:viewController:completion:] */

void FUN_108ecacac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_7;
  _objc_retain(param_7);
  if (param_3 == 0) {
    func_0x000108ed06f8();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_3);
    lVar1 = param_3;
  }
  func_0x00010be7b340(param_1,param_2,lVar1,param_4,param_5,param_6,param_7);
  _objc_release(lVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ecad88; end: 108ecae9b; +[SCSnapConnectCommon showErrorMessage:navigationDelegate:redirectUrl:viewController:errorCode:completion:] */

void FUN_108ecad88(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_8;
  _objc_retain();
  if (param_3 == 0) {
    func_0x000108ed06f8();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_3);
    lVar1 = param_3;
  }
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110effbb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7b340(param_1,param_2,puVar2,param_4,param_5,param_6,param_8);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ecae9c; end: 108ecb07f; +[SCSnapConnectCommon _presentErrorDialogWithDescription:navigationDelegate:redirectUrl:viewController:completion:] */

void FUN_108ecae9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar2 = PTR_PTR_1126aed70;
  _objc_retain(param_6);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000108ed0710();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(param_3);
  _objc_release(puVar4);
  func_0x00010c10eda0(param_6);
  _objc_release(param_6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_opt_class(*(undefined8 *)(param_5 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bec9570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 108ecb080; end: 108ecb0af;  */

void FUN_108ecb080(long param_1)

{
  _objc_opt_class(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bec9570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 108ecb0b0; end: 108ecb137; +[SCSnapConnectCommon decodeParams:error:] */

void FUN_108ecb0b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bff6b20();
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar1,0,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ecb138; end: 108ecb367; +[SCSnapConnectCommon _switchToSourceAppWithStatus:redirectUrl:navigationDelegate:completion:] */

void FUN_108ecb138(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long in_x3;
  long in_x4;
  long in_x5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(in_x3);
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  if (in_x3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    func_0x00010bf44760();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar5 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11d4c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010c1e6460(puVar1);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_108ecb368;
    puStack_78 = &UNK_110842e18;
    puStack_70 = puVar1;
    _objc_retain(puVar1);
    func_0x000107c312d0("APPSTORE",&puStack_90);
    _objc_release(puStack_70);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  if (in_x4 == 0) {
    if (in_x5 != 0) {
      (**(code **)(in_x5 + 0x10))(in_x5);
    }
  }
  else {
    ppuStack_68 = &PTR____CFConstantStringClassReference_110f83978;
    puStack_60 = PTR____kCFBooleanTrue_11034ab68;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10d100(in_x4);
    _objc_release(puVar5);
  }
  _objc_release(in_x5);
  _objc_release(in_x4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(in_x3 + 0x20);
  func_0x00010bdc2b80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9b80(puVar5);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 108ecb368; end: 108ecb3d3;  */

void FUN_108ecb368(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdc2b80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9b80(puVar1,param_2,uVar2,PTR____NSDictionary0__struct_11034ab58,0);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ecb3d4; end: 108ecb703; +[SCSnapConnectValidation startValidationWithClientId:eid:fingerprint:scsdkUserAgent:networkServices:callbackQueue:successCallback:failureCallback:] */

void FUN_108ecb3d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uVar1 = param_7;
  _objc_retain(param_7);
  func_0x000108ecf1ac();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126dc638;
  func_0x00010c0cb140(PTR_PTR_1126dc638);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0440();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  puVar4 = puVar3;
  if (param_4 != 0) {
    func_0x00010c193e40(puVar2);
    func_0x00010c1d0560(puVar3);
    func_0x00010c1d0560(puVar3);
    func_0x00010c1d0560();
  }
  func_0x000108ed0900();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0720c0();
  if (((ulong)puVar5 & 1) == 0) {
    func_0x00010c1d0560(puVar3);
  }
  uVar6 = param_7;
  func_0x00010bfe4d40(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010bf63640(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf225e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar7);
  _objc_release(uVar6);
  uVar6 = param_7;
  func_0x00010bfe4c00(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  uVar7 = uVar6;
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 0x15;
  func_0x000107c312b8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_9);
  _objc_retain(param_10);
  func_0x00010c25f600(uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(param_9);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_10);
  _objc_release(uVar8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108ecb704; end: 108ecb70f;  */

void FUN_108ecb704(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c290a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_useSnapTokenHeaderWithAccessType_112681cb8,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108ecb710; end: 108ecb97f;  */

void FUN_108ecb710(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  if (param_6 != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_6);
    goto LAB_108ecb938;
  }
  if (param_5 == 0) {
    puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
LAB_108ecb8dc:
    func_0x00010c00e2e0();
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar8);
  }
  else {
    lVar7 = param_4;
    func_0x00010c252ee0();
    if (lVar7 != 200) {
      puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
      _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
      goto LAB_108ecb8dc;
    }
    puVar1 = PTR_PTR_1126dc640;
    _objc_alloc();
    func_0x00010c008360();
    puVar8 = (undefined *)0x0;
    _objc_retain(0);
    if (puVar1 == (undefined *)0x0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
    }
    else {
      puVar2 = puVar1;
      func_0x00010bfa2580(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf4b900();
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar2 = puVar1;
      func_0x00010bfd6a60();
      lVar7 = *(long *)(param_1 + 0x28);
      if ((int)puVar2 == 0) {
        (**(code **)(lVar7 + 0x10))(lVar7,0,0,puVar4);
      }
      else {
        puVar2 = puVar1;
        func_0x00010bf93f40();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c2a4a80();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar1;
        func_0x00010bf93f40(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c2bd340();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar7 + 0x10))(lVar7,puVar3,puVar6,puVar4);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar3);
        _objc_release(puVar2);
      }
    }
    _objc_release(puVar1);
  }
  _objc_release(puVar8);
LAB_108ecb938:
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 108ecb980; end: 108ecba47; +[SCSnapConnectValidation decodeAndDecryptString:key:iv:] */

void FUN_108ecb980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bff6b20();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c156c60(puVar1,param_2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c008340();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108ecba48; end: 108ecbabb; -[SCSnapKitRequestParser initWithDeepLinkUrl:] */

undefined1 * FUN_108ecba48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff0f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ecbabc; end: 108ecbd2f; -[SCSnapKitRequestParser verifyAndExtractMetadata] */

void FUN_108ecbabc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_68;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c11d6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar9 = 0;
    goto LAB_108ecbb50;
  }
  lStack_68 = 0;
  func_0x00010bdf8880(param_1,param_2,lVar2,&lStack_68);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_68 == 0) {
    lVar3 = param_1;
    func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110efff98);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar9 = 0;
    if (lVar3 != 0) {
      lVar3 = param_1;
      func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110df81b8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      lVar9 = 0;
      if (lVar3 != 0) {
        lVar3 = param_1;
        func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb0a98);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        lVar9 = 0;
        if (lVar3 != 0) {
          lVar3 = param_1;
          func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110efffb8);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          lVar9 = 0;
          if (lVar3 != 0) {
            lVar3 = param_1;
            func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110effff8);
            _objc_retainAutoreleasedReturnValue();
            lVar9 = 0;
            if (lVar3 != 0) {
              lVar9 = param_1;
              func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110effff8);
              _objc_retainAutoreleasedReturnValue();
              lVar4 = lVar9;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              if (lVar4 != 0) {
                lVar5 = param_1;
                func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110effff8
                                   );
                _objc_retainAutoreleasedReturnValue();
                lVar6 = lVar5;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                if (lVar6 != 0) {
                  lVar7 = param_1;
                  func_0x00010c0e00e0(param_1,param_2,
                                      &PTR____CFConstantStringClassReference_110effff8);
                  _objc_retainAutoreleasedReturnValue();
                  lVar8 = lVar7;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  _objc_release(lVar7);
                  _objc_release(lVar6);
                  _objc_release(lVar5);
                  _objc_release(lVar4);
                  _objc_release(lVar9);
                  _objc_release(lVar3);
                  if (lVar8 == 0) goto LAB_108ecbb3c;
                  _objc_retain(param_1);
                  lVar9 = param_1;
                  goto LAB_108ecbb40;
                }
                _objc_release(lVar5);
                _objc_release(lVar4);
              }
              _objc_release(lVar9);
              _objc_release(lVar3);
              goto LAB_108ecbb3c;
            }
          }
        }
      }
    }
  }
  else {
LAB_108ecbb3c:
    lVar9 = 0;
  }
LAB_108ecbb40:
  _objc_release(param_1);
LAB_108ecbb50:
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar9);
  return;
}



/* Entry: 108ecbd30; end: 108ecbeb3; -[SCSnapKitRequestParser verifyAndExtractPayloadWithType:] */

void FUN_108ecbd30(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lStack_58;
  
  uVar1 = param_1;
  func_0x00010c298500();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    uVar6 = 0;
    goto LAB_108ecbe8c;
  }
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c11d6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    lStack_58 = 0;
    uVar4 = param_1;
    func_0x00010bdf8880(param_1,param_2,lVar3,&lStack_58);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_58 == 0) {
      if (param_3 == 1) {
        uVar6 = param_1;
        func_0x00010bee8460(param_1,param_2,uVar4,uVar1);
        if ((int)uVar6 != 0) goto LAB_108ecbe14;
        goto LAB_108ecbdc4;
      }
      if ((param_3 == 0) &&
         (uVar6 = param_1, func_0x00010bee87a0(param_1,param_2,uVar4,uVar1), (uVar6 & 1) == 0))
      goto LAB_108ecbdc4;
LAB_108ecbe14:
      uVar5 = uVar4;
      func_0x00010c0d3c80(uVar4);
      func_0x00010bdf5e40(param_1,param_2,uVar4,uVar1,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar5,param_2,param_1,&PTR____CFConstantStringClassReference_110efff18);
      uVar6 = uVar5;
      func_0x00010bf51e00(uVar5);
      _objc_release(param_1);
      _objc_release(uVar5);
    }
    else {
LAB_108ecbdc4:
      uVar6 = 0;
    }
    _objc_release(uVar4);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
LAB_108ecbe8c:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 108ecbeb4; end: 108ecc18b; -[SCSnapKitRequestParser _verifyPreviewPayload:metadata:] */

undefined *
FUN_108ecbeb4(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **unaff_x22;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined **ppuVar10;
  long lVar11;
  undefined **unaff_x26;
  uint uVar12;
  ulong uVar13;
  long unaff_x28;
  long lVar14;
  undefined *puStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *apuStack_230 [16];
  long lStack_1b0;
  long lStack_1a0;
  ulong uStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined *puStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined **ppuStack_138;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *apuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar8 = &PTR____CFConstantStringClassReference_110dea798;
  ppuVar10 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar10 == (undefined **)0x0) {
    uVar13 = 1;
  }
  else {
    ppuVar8 = &PTR____CFConstantStringClassReference_110dea798;
    unaff_x22 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = unaff_x22;
    func_0x00010bf1f3c0();
    uVar13 = (ulong)((uint)ppuVar1 ^ 1);
    _objc_release(unaff_x22);
  }
  _objc_release(ppuVar10);
  if (param_3 != (undefined **)0x0) {
    ppuVar10 = &PTR_PTR_110ac9f10;
    ppuVar8 = &PTR____CFConstantStringClassReference_110dbdd78;
    ppuVar1 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    unaff_x22 = (undefined **)0x0;
    unaff_x25 = ppuVar10;
    if (ppuVar1 != (undefined **)0x0) {
      if ((int)uVar13 != 0) {
        unaff_x22 = param_3;
        func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dbdd78);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = &PTR____CFConstantStringClassReference_110ddd938;
        ppuVar1 = unaff_x22;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(unaff_x22);
        unaff_x23 = (undefined **)0x0;
        if (ppuVar1 == (undefined **)0x0) goto LAB_108ecc118;
      }
      unaff_x22 = param_3;
      func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dbdd78);
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = unaff_x22;
      ppuVar8 = &PTR____CFConstantStringClassReference_110effef8;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(unaff_x22);
      unaff_x23 = (undefined **)0x0;
      unaff_x25 = &PTR_PTR_110ac9f10;
      if (ppuVar1 != (undefined **)0x0) {
        unaff_x22 = &PTR____CFConstantStringClassReference_110dec898;
        unaff_x23 = param_3;
        ppuVar8 = unaff_x22;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (unaff_x23 == (undefined **)0x0) {
          puVar9 = (undefined *)0x1;
        }
        else {
          unaff_x22 = param_3;
          func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dec898);
          _objc_retainAutoreleasedReturnValue();
          lStack_128 = 0;
          puStack_130 = (undefined *)0x0;
          uStack_118 = 0;
          plStack_120 = (long *)0x0;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          _objc_retain();
          ppuVar8 = &puStack_130;
          ppuVar6 = apuStack_f0;
          ppuVar1 = unaff_x22;
          func_0x00010bf52a60();
          if (ppuVar1 != (undefined **)0x0) {
            unaff_x28 = *plStack_120;
            ppuStack_138 = &PTR____CFConstantStringClassReference_110ddd938;
            unaff_x24 = ppuVar1;
            do {
              unaff_x23 = (undefined **)0x0;
              do {
                if (*plStack_120 != unaff_x28) {
                  _objc_enumerationMutation(unaff_x22);
                }
                ppuVar10 = *(undefined ***)(lStack_128 + (long)unaff_x23 * 8);
                if ((int)uVar13 != 0) {
                  unaff_x26 = ppuVar10;
                  ppuVar8 = ppuStack_138;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  if (unaff_x26 != (undefined **)0x0) goto LAB_108ecc0c8;
LAB_108ecc168:
                  puVar9 = (undefined *)0x0;
                  goto LAB_108ecc16c;
                }
LAB_108ecc0c8:
                ppuVar8 = &PTR____CFConstantStringClassReference_110effef8;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (ppuVar10 == (undefined **)0x0) goto LAB_108ecc168;
                unaff_x23 = (undefined **)((long)unaff_x23 + 1);
              } while (unaff_x24 != unaff_x23);
              ppuVar8 = &puStack_130;
              ppuVar6 = apuStack_f0;
              unaff_x24 = unaff_x22;
              func_0x00010bf52a60();
            } while (unaff_x24 != (undefined **)0x0);
          }
          puVar9 = (undefined *)0x1;
LAB_108ecc16c:
          _objc_release(unaff_x22);
          _objc_release(unaff_x22);
        }
        goto LAB_108ecc11c;
      }
    }
  }
LAB_108ecc118:
  ppuVar10 = unaff_x25;
  puVar9 = (undefined *)0x0;
LAB_108ecc11c:
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar9;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_108ecc18c;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = ppuVar6;
  lStack_1a0 = unaff_x28;
  uStack_198 = uVar13;
  ppuStack_190 = unaff_x26;
  ppuStack_188 = ppuVar10;
  ppuStack_180 = unaff_x24;
  ppuStack_178 = unaff_x23;
  ppuStack_170 = unaff_x22;
  puStack_168 = puVar9;
  ppuStack_160 = param_4;
  ppuStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar8);
  _objc_retain(ppuVar6);
  ppuVar10 = &PTR____CFConstantStringClassReference_110dea798;
  ppuVar2 = ppuVar6;
  func_0x00010c0e00e0(ppuVar6,param_2,&PTR____CFConstantStringClassReference_110dea798);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar2 == (undefined **)0x0) {
    uVar12 = 1;
  }
  else {
    ppuVar10 = &PTR____CFConstantStringClassReference_110dea798;
    ppuVar3 = ppuVar6;
    func_0x00010c0e00e0(ppuVar6,param_2,&PTR____CFConstantStringClassReference_110dea798);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar3;
    func_0x00010bf1f3c0();
    uVar12 = (uint)ppuVar7 ^ 1;
    _objc_release(ppuVar3);
  }
  _objc_release(ppuVar2);
  if (ppuVar8 == (undefined **)0x0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    ppuVar10 = &PTR____CFConstantStringClassReference_110dec898;
    ppuVar2 = ppuVar8;
    func_0x00010c0e00e0(ppuVar8,param_2,&PTR____CFConstantStringClassReference_110dec898);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar2 == (undefined **)0x0) {
      puVar9 = (undefined *)0x1;
    }
    else {
      ppuVar2 = ppuVar8;
      func_0x00010c0e00e0(ppuVar8,param_2,&PTR____CFConstantStringClassReference_110dec898);
      _objc_retainAutoreleasedReturnValue();
      lStack_268 = 0;
      puStack_270 = (undefined *)0x0;
      uStack_258 = 0;
      plStack_260 = (long *)0x0;
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      _objc_retain();
      ppuVar10 = &puStack_270;
      ppuVar1 = apuStack_230;
      ppuVar3 = ppuVar2;
      func_0x00010bf52a60(ppuVar2,param_2,ppuVar10,ppuVar1,0x10);
      if (ppuVar3 == (undefined **)0x0) {
        puVar9 = (undefined *)0x1;
      }
      else {
        lVar14 = *plStack_260;
        do {
          ppuVar7 = (undefined **)0x0;
          do {
            if (*plStack_260 != lVar14) {
              _objc_enumerationMutation(ppuVar2);
            }
            lVar11 = *(long *)(lStack_268 + (long)ppuVar7 * 8);
            if (uVar12 != 0) {
              lVar4 = lVar11;
              ppuVar10 = &PTR____CFConstantStringClassReference_110ddd938;
              func_0x00010c0e00e0(lVar11,param_2,&PTR____CFConstantStringClassReference_110ddd938);
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (lVar4 != 0) goto LAB_108ecc300;
LAB_108ecc358:
              puVar9 = (undefined *)0x0;
              goto LAB_108ecc370;
            }
LAB_108ecc300:
            ppuVar10 = &PTR____CFConstantStringClassReference_110effef8;
            func_0x00010c0e00e0(lVar11,param_2,&PTR____CFConstantStringClassReference_110effef8);
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar11 == 0) goto LAB_108ecc358;
            ppuVar7 = (undefined **)((long)ppuVar7 + 1);
          } while (ppuVar3 != ppuVar7);
          ppuVar10 = &puStack_270;
          ppuVar1 = apuStack_230;
          ppuVar3 = ppuVar2;
          func_0x00010bf52a60(ppuVar2,param_2,ppuVar10,ppuVar1,0x10);
        } while (ppuVar3 != (undefined **)0x0);
        puVar9 = (undefined *)0x1;
      }
LAB_108ecc370:
      _objc_release(ppuVar2);
      _objc_release(ppuVar2);
    }
  }
  _objc_release(ppuVar6);
  _objc_release(ppuVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b0) {
    ___stack_chk_fail();
    puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_retain(ppuVar10);
    _objc_alloc(puVar9);
    func_0x00010bff6b20();
    _objc_release(ppuVar10);
    puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar9,0,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  return puVar9;
}



/* Entry: 108ecc18c; end: 108ecc3cf; -[SCSnapKitRequestParser _verifyCameraPayload:metadata:] */

undefined * FUN_108ecc18c(undefined8 param_1,undefined8 param_2,long param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar10 = &PTR____CFConstantStringClassReference_110dea798;
  puVar1 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110dea798);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined1 *)0x0) {
    uVar13 = 1;
  }
  else {
    ppuVar10 = &PTR____CFConstantStringClassReference_110dea798;
    puVar2 = param_4;
    func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110dea798);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf1f3c0();
    uVar13 = (uint)puVar3 ^ 1;
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  if (param_3 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    ppuVar10 = &PTR____CFConstantStringClassReference_110dec898;
    lVar4 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dec898);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 == 0) {
      puVar11 = (undefined *)0x1;
    }
    else {
      lVar4 = param_3;
      func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dec898);
      _objc_retainAutoreleasedReturnValue();
      lStack_128 = 0;
      puStack_130 = (undefined *)0x0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      _objc_retain();
      ppuVar10 = &puStack_130;
      puVar8 = auStack_f0;
      lVar5 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,ppuVar10,puVar8,0x10);
      if (lVar5 == 0) {
        puVar11 = (undefined *)0x1;
      }
      else {
        lVar14 = *plStack_120;
        do {
          lVar9 = 0;
          do {
            if (*plStack_120 != lVar14) {
              _objc_enumerationMutation(lVar4);
            }
            lVar12 = *(long *)(lStack_128 + lVar9 * 8);
            if (uVar13 != 0) {
              lVar6 = lVar12;
              ppuVar10 = &PTR____CFConstantStringClassReference_110ddd938;
              func_0x00010c0e00e0(lVar12,param_2,&PTR____CFConstantStringClassReference_110ddd938);
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (lVar6 != 0) goto LAB_108ecc300;
LAB_108ecc358:
              puVar11 = (undefined *)0x0;
              goto LAB_108ecc370;
            }
LAB_108ecc300:
            ppuVar10 = &PTR____CFConstantStringClassReference_110effef8;
            func_0x00010c0e00e0(lVar12,param_2,&PTR____CFConstantStringClassReference_110effef8);
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar12 == 0) goto LAB_108ecc358;
            lVar9 = lVar9 + 1;
          } while (lVar5 != lVar9);
          ppuVar10 = &puStack_130;
          puVar8 = auStack_f0;
          lVar5 = lVar4;
          func_0x00010bf52a60(lVar4,param_2,ppuVar10,puVar8,0x10);
        } while (lVar5 != 0);
        puVar11 = (undefined *)0x1;
      }
LAB_108ecc370:
      _objc_release(lVar4);
      _objc_release(lVar4);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar11 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_retain(ppuVar10);
    _objc_alloc(puVar11);
    func_0x00010bff6b20();
    _objc_release(ppuVar10);
    puVar7 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar11,0,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  return puVar11;
}



/* Entry: 108ecc3d0; end: 108ecc457; -[SCSnapKitRequestParser _decodeParams:error:] */

void FUN_108ecc3d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bff6b20();
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar1,0,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ecc458; end: 108ecc623; -[SCSnapKitRequestParser _creativeKitLoggingDataForPayload:metadata:type:] */

void FUN_108ecc458(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b5870;
  _objc_opt_new(PTR_PTR_1126b5870);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dec898);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar5 = 1;
  if (lVar2 == 0) {
    uVar5 = 0xffffffffffffffff;
  }
  func_0x00010c204bc0(puVar1,param_2,uVar5);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e552f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c204c00(puVar1,param_2,1);
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e552f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2049a0(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e2a618);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c204c20(puVar1,param_2,1);
  }
  uVar3 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110effe78);
  _objc_retainAutoreleasedReturnValue();
  if ((uVar3 == 0) ||
     (uVar4 = uVar3,
     func_0x00010c0720c0(uVar3,param_2,&PTR____CFConstantStringClassReference_110db8118),
     (uVar4 & 1) == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  func_0x00010c1b1500(puVar1,param_2,uVar5);
  uVar4 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110df81b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d03e0(puVar1,param_2,uVar4);
  _objc_release(uVar4);
  uVar5 = 2;
  if (param_5 != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  if (param_5 == 1) {
    uVar5 = 1;
  }
  func_0x00010c204b60(puVar1,param_2,uVar5);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


