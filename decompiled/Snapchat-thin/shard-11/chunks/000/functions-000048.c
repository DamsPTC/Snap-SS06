/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1080bd074; end: 1080bd077; -[SCValdiTextViewOutline setWidth:] */

void FUN_1080bd074(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 1080bd078; end: 1080bd07b; -[SCValdiTextViewOutline .cxx_destruct] */

void FUN_1080bd078(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1080bd07c; end: 1080bd083; -[SCValdiTextViewAnimationRange range] */

undefined1  [16] FUN_1080bd07c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x70);
}



/* Entry: 1080bd084; end: 1080bd08b; -[SCValdiTextViewAnimationRange setRange:] */

void FUN_1080bd084(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x70) = param_3;
  *(undefined8 *)(param_1 + 0x78) = param_4;
  return;
}



/* Entry: 1080bd08c; end: 1080bd08f; -[SCValdiTextViewAnimationRange translationY] */

undefined8 FUN_1080bd08c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1080bd090; end: 1080bd093; -[SCValdiTextViewAnimationRange setTranslationY:] */

void FUN_1080bd090(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 1080bd094; end: 1080bd097; -[SCValdiTextViewAnimationRange scale] */

undefined8 FUN_1080bd094(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1080bd098; end: 1080bd09b; -[SCValdiTextViewAnimationRange setScale:] */

void FUN_1080bd098(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 1080bd09c; end: 1080bd0a3; -[SCValdiTextViewAnimationRange opacity] */

undefined8 FUN_1080bd09c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1080bd0a4; end: 1080bd0ab; -[SCValdiTextViewAnimationRange setOpacity:] */

void FUN_1080bd0a4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 1080bd0ac; end: 1080bd0b3; -[SCValdiTextViewAnimationRange initialTranslationY] */

undefined8 FUN_1080bd0ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1080bd0b4; end: 1080bd0bb; -[SCValdiTextViewAnimationRange setInitialTranslationY:] */

void FUN_1080bd0b4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 1080bd0bc; end: 1080bd0c3; -[SCValdiTextViewAnimationRange initialScale] */

undefined8 FUN_1080bd0bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1080bd0c4; end: 1080bd0cb; -[SCValdiTextViewAnimationRange setInitialScale:] */

void FUN_1080bd0c4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x30) = param_1;
  return;
}



/* Entry: 1080bd0cc; end: 1080bd0d3; -[SCValdiTextViewAnimationRange initialOpacity] */

undefined8 FUN_1080bd0cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1080bd0d4; end: 1080bd0db; -[SCValdiTextViewAnimationRange setInitialOpacity:] */

void FUN_1080bd0d4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x38) = param_1;
  return;
}



/* Entry: 1080bd0dc; end: 1080bd0e3; -[SCValdiTextViewAnimationRange duration] */

undefined8 FUN_1080bd0dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1080bd0e4; end: 1080bd0eb; -[SCValdiTextViewAnimationRange setDuration:] */

void FUN_1080bd0e4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x40) = param_1;
  return;
}



/* Entry: 1080bd0ec; end: 1080bd0f3; -[SCValdiTextViewAnimationRange startDelay] */

undefined8 FUN_1080bd0ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1080bd0f4; end: 1080bd0fb; -[SCValdiTextViewAnimationRange setStartDelay:] */

void FUN_1080bd0f4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x48) = param_1;
  return;
}



/* Entry: 1080bd0fc; end: 1080bd103; -[SCValdiTextViewAnimationRange timeOffset] */

undefined8 FUN_1080bd0fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1080bd104; end: 1080bd10b; -[SCValdiTextViewAnimationRange setTimeOffset:] */

void FUN_1080bd104(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x50) = param_1;
  return;
}



/* Entry: 1080bd10c; end: 1080bd113; -[SCValdiTextViewAnimationRange rangeKey] */

undefined8 FUN_1080bd10c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1080bd114; end: 1080bd11b; -[SCValdiTextViewAnimationRange setRangeKey:] */

void FUN_1080bd114(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1080bd11c; end: 1080bd123; -[SCValdiTextViewAnimationRange timelineKey] */

undefined8 FUN_1080bd11c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1080bd124; end: 1080bd12b; -[SCValdiTextViewAnimationRange setTimelineKey:] */

void FUN_1080bd124(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1080bd12c; end: 1080bd133; -[SCValdiTextViewAnimationRange shouldStoreStartTime] */

undefined1 FUN_1080bd12c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1080bd134; end: 1080bd13b; -[SCValdiTextViewAnimationRange setShouldStoreStartTime:] */

void FUN_1080bd134(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1080bd13c; end: 1080bd143; -[SCValdiTextViewAnimationRange hasStartTime] */

undefined1 FUN_1080bd13c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1080bd144; end: 1080bd14b; -[SCValdiTextViewAnimationRange setHasStartTime:] */

void FUN_1080bd144(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 1080bd14c; end: 1080bd153; -[SCValdiTextViewAnimationRange startTime] */

undefined8 FUN_1080bd14c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1080bd154; end: 1080bd15b; -[SCValdiTextViewAnimationRange setStartTime:] */

void FUN_1080bd154(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x68) = param_1;
  return;
}



/* Entry: 1080bd15c; end: 1080bd163; -[SCValdiTextViewAnimationRange isExternallyDriven] */

undefined1 FUN_1080bd15c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 1080bd164; end: 1080bd16b; -[SCValdiTextViewAnimationRange setIsExternallyDriven:] */

void FUN_1080bd164(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 1080bd16c; end: 1080bd19b; -[SCValdiTextViewAnimationRange .cxx_destruct] */

void FUN_1080bd16c(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x58,0);
  return;
}



/* Entry: 1080bd19c; end: 1080bd1a3; -[SCValdiTextViewAnimationTimelineState hasExistingAnimationStartTime] */

undefined1 FUN_1080bd19c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1080bd1a4; end: 1080bd1ab; -[SCValdiTextViewAnimationTimelineState setHasExistingAnimationStartTime:] */

void FUN_1080bd1a4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1080bd1ac; end: 1080bd1af; -[SCValdiTextViewAnimationTimelineState existingAnimationStartTime] */

undefined8 FUN_1080bd1ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1080bd1b0; end: 1080bd1b3; -[SCValdiTextViewAnimationTimelineState setExistingAnimationStartTime:] */

void FUN_1080bd1b0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 1080bd1b4; end: 1080bd1bb; -[SCValdiTextViewAnimationTimelineState hasNewAnimationBaseStartDelay] */

undefined1 FUN_1080bd1b4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1080bd1bc; end: 1080bd1c3; -[SCValdiTextViewAnimationTimelineState setHasNewAnimationBaseStartDelay:] */

void FUN_1080bd1bc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 1080bd1c4; end: 1080bd1c7; -[SCValdiTextViewAnimationTimelineState newAnimationBaseStartDelay] */

undefined8 FUN_1080bd1c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1080bd1c8; end: 1080bd1cb; -[SCValdiTextViewAnimationTimelineState setNewAnimationBaseStartDelay:] */

void FUN_1080bd1c8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 1080bd1cc; end: 1080bd1d3; -[SCValdiTextViewAnimationTimelineState hasNewAnimationStartTime] */

undefined1 FUN_1080bd1cc(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 1080bd1d4; end: 1080bd1db; -[SCValdiTextViewAnimationTimelineState setHasNewAnimationStartTime:] */

void FUN_1080bd1d4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 1080bd1dc; end: 1080bd1e3; -[SCValdiTextViewAnimationTimelineState newAnimationStartTime] */

undefined8 FUN_1080bd1dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1080bd1e4; end: 1080bd1eb; -[SCValdiTextViewAnimationTimelineState setNewAnimationStartTime:] */

void FUN_1080bd1e4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 1080bd1ec; end: 1080bd25f; -[SCValdiTextViewCustomUnderline initWithRange:color:] */

long FUN_1080bd1ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001080c1eb4();
  func_0x0001080c1f14();
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x10) = param_3;
    *(undefined8 *)(param_1 + 0x18) = param_4;
    func_0x0001080c1d38();
    func_0x0001080c2138();
    _objc_release();
    func_0x0001080c1e9c();
  }
  func_0x0001080c1ccc();
  func_0x0001080c1d10();
  return param_1;
}



/* Entry: 1080bd260; end: 1080bd2af; +[SCValdiTextViewCustomUnderline customUnderlineWithRange:color:] */

void FUN_1080bd260(undefined8 param_1)

{
  func_0x0001080c1eb4();
  _objc_alloc(param_1);
  func_0x00010c03cbc0();
  func_0x0001080c1ccc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1080bd2b0; end: 1080bd2b7; -[SCValdiTextViewCustomUnderline range] */

undefined1  [16] FUN_1080bd2b0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x10);
}



/* Entry: 1080bd2b8; end: 1080bd2bf; -[SCValdiTextViewCustomUnderline setRange:] */

void FUN_1080bd2b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  return;
}



/* Entry: 1080bd2c0; end: 1080bd2c3; -[SCValdiTextViewCustomUnderline color] */

undefined8 FUN_1080bd2c0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1080bd2c4; end: 1080bd2df; -[SCValdiTextViewCustomUnderline setColor:] */

void FUN_1080bd2c4(void)

{
  func_0x0001080c1bf8();
  func_0x0001080c2138();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080bd2e0; end: 1080bd2e3; -[SCValdiTextViewCustomUnderline .cxx_destruct] */

void FUN_1080bd2e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1080bd2e4; end: 1080bd333; -[SCValdiTextAnimationStoredProgress init] */

long FUN_1080bd2e4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x0001080c1f14();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x0001080c1e60();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar1;
    _objc_release(uVar2);
  }
  return param_1;
}



/* Entry: 1080bd334; end: 1080bd337; -[SCValdiTextAnimationStoredProgress startTimes] */

undefined8 FUN_1080bd334(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1080bd338; end: 1080bd33b; -[SCValdiTextAnimationStoredProgress .cxx_destruct] */

void FUN_1080bd338(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1080bd33c; end: 1080bd3a7; -[SCValdiTextViewEffectsLayoutManager backgroundColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080bd33c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127746ac;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010bf40c40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x0001080c2144();
    func_0x00010bf3ae40();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = *(long *)(param_1 + lVar2);
    func_0x00010bf40c40(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x0001080c1ccc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1080bd3a8; end: 1080bd3e3; -[SCValdiTextViewEffectsLayoutManager backgroundBorderRadius] */

/* WARNING: Possible PIC construction at 0x0001080bd3b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001080bd3bc) */
/* WARNING: Removing unreachable block (ram,0x0001080bd3c0) */
/* WARNING: Removing unreachable block (ram,0x0001080bd3d4) */
/* WARNING: Removing unreachable block (ram,0x0001080bd3c4) */

void FUN_1080bd3a8(undefined8 param_1)

{
  func_0x0001080c20f8();
                    /* WARNING: Could not recover jumptable at 0x00010bf1fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_borderRadius_1125a58a0);
  return;
}



/* Entry: 1080bd3e4; end: 1080bd41f; -[SCValdiTextViewEffectsLayoutManager backgroundPadding] */

/* WARNING: Possible PIC construction at 0x0001080bd3f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001080bd3f8) */
/* WARNING: Removing unreachable block (ram,0x0001080bd3fc) */
/* WARNING: Removing unreachable block (ram,0x0001080bd410) */
/* WARNING: Removing unreachable block (ram,0x0001080bd400) */

void FUN_1080bd3e4(undefined8 param_1)

{
  func_0x0001080c20f8();
                    /* WARNING: Could not recover jumptable at 0x00010c0f0bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_padding_112619d00);
  return;
}



/* Entry: 1080bd420; end: 1080bd477; -[SCValdiTextViewEffectsLayoutManager invalidateAnimatedTextProgress] */

void FUN_1080bd420(undefined8 param_1)

{
  func_0x00010be3d780();
  func_0x00010bdcb600(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c26c860(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c1f60();
  func_0x0001080c1e6c();
  func_0x00010c069e80();
  func_0x0001080c1d10();
                    /* WARNING: Could not recover jumptable at 0x00010bfd3ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hasActiveAnimationRanges_1125d2850);
  return;
}



/* Entry: 1080bd478; end: 1080bd4c3; -[SCValdiTextViewEffectsLayoutManager opacityForAnimationRange:] */

undefined8 FUN_1080bd478(undefined8 param_1,long param_2)

{
  func_0x00010c10f4a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    param_1 = 0x3ff0000000000000;
  }
  else {
    func_0x0001080c1f0c();
  }
  func_0x0001080c1ccc();
  return param_1;
}



/* Entry: 1080bd4c4; end: 1080bd5e3; -[SCValdiTextViewEffectsLayoutManager presentationForAnimationRange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080bd4c4(ulong param_1,long param_2,undefined8 param_3,undefined *param_4)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong unaff_x19;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_128;
  undefined8 uStack_120;
  
  puVar3 = param_4;
  func_0x0001080c1c44();
  if (puVar3 != (undefined *)0x0) {
    func_0x0001080c1fa0();
    func_0x00010bdcb600();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x0001080c1de8();
    func_0x0001080c1cc4();
    if (uVar1 != 0) {
      lVar5 = *uStack_120;
      do {
        uVar6 = 0;
        do {
          func_0x0001080c1f2c();
          in_ZR = extraout_x8_00 == lVar5;
          if (!(bool)in_ZR) {
            func_0x0001080c1ea4();
          }
          uVar4 = *(ulong *)(uStack_128 + uVar6 * 8);
          uVar2 = uVar4;
          func_0x00010c11f2a0();
          _NSIntersectionRange();
          if (param_2 != 0) {
            param_4 = PTR_PTR_1126d93b8;
            _objc_alloc();
            func_0x00010c27ae20(uVar4);
            func_0x0001080c206c();
            func_0x0001080c204c();
            func_0x0001080c1e54();
            func_0x00010c055520();
            goto LAB_1080bd5ac;
          }
          uVar6 = uVar6 + 1;
          in_ZR = uVar6 == uVar1;
        } while (uVar6 < uVar1);
        func_0x0001080c1c24();
        uVar1 = uVar2;
      } while (uVar2 != 0);
    }
    param_4 = (undefined *)0x0;
LAB_1080bd5ac:
    func_0x0001080c1ccc();
    unaff_x19 = param_1;
  }
  func_0x0001080c1bd0(extraout_x8);
  if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
    return;
  }
  ___stack_chk_fail();
  func_0x0001080c1bf8();
  func_0x0001080c20c8();
  if (!(bool)in_ZR) {
    func_0x0001080c1d38();
    func_0x0001080c1d90();
    func_0x00010be3d760(param_4);
    func_0x00010c1754a0(param_4);
    func_0x0001080c1d6c();
    func_0x00010c26c860(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080c1e94();
    func_0x0001080c1cb4();
    func_0x0001080c1d18();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x19);
  return;
}



/* Entry: 1080bd5e4; end: 1080bd64f; -[SCValdiTextViewEffectsLayoutManager setProcessedText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080bd5e4(void)

{
  undefined1 in_ZR;
  
  func_0x0001080c1bf8();
  func_0x0001080c20c8();
  if (!(bool)in_ZR) {
    func_0x0001080c1d38();
    func_0x0001080c1d90();
    func_0x00010be3d760();
    func_0x00010c1754a0();
    func_0x0001080c1d6c();
    func_0x00010c26c860();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080c1e94();
    func_0x0001080c1cb4();
    func_0x0001080c1d18();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080bd650; end: 1080bd697; -[SCValdiTextViewEffectsLayoutManager setTextAnimationCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080bd650(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001080c1bf8();
  _objc_loadWeakRetained(unaff_x20 + _DAT_1127746b4);
  func_0x0001080c1e8c();
  if (unaff_x21 != unaff_x19) {
    func_0x0001080c1fe4();
    func_0x00010be3d760();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080bd698; end: 1080bd6b7; -[SCValdiTextViewEffectsLayoutManager setTextAnimationBasePartIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080bd698(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_1127746a4) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_1127746a4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010be3d770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__invalidateAnimationEntries_11256cf78);
  return;
}



/* Entry: 1080bd6b8; end: 1080bd723; -[SCValdiTextViewEffectsLayoutManager setValdiViewNode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080bd6b8(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001080c1bf8();
  _objc_loadWeakRetained(unaff_x20 + _DAT_1127746b8);
  func_0x0001080c1e8c();
  if (unaff_x21 != unaff_x19) {
    func_0x0001080c1fe4();
    func_0x00010bec42a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20c340();
    func_0x0001080c1d18();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080bd724; end: 1080bd857; -[SCValdiTextViewEffectsLayoutManager prepareGroupedAnimatedTextProgress] */

void FUN_1080bd724(double param_1,ulong param_2)

{
  undefined1 in_ZR;
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  double dVar9;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_128;
  undefined8 uStack_120;
  
  uVar8 = param_2;
  func_0x0001080c1c44();
  func_0x00010c26b820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0;
  if (uVar8 != 0) {
    func_0x0001080c1fa0();
    func_0x00010bdcb5a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x0001080c1de8();
    func_0x0001080c1cc4();
    if (uVar2 != 0) {
      lVar6 = *uStack_120;
      do {
        uVar7 = 0;
        do {
          func_0x0001080c1f2c();
          if (extraout_x8_00 != lVar6) {
            _objc_enumerationMutation(param_2);
          }
          uVar5 = *(undefined8 *)(uStack_128 + uVar7 * 8);
          uVar3 = uVar5;
          func_0x00010bfdca60();
          if ((int)uVar3 != 0) {
            func_0x00010c250f20(uVar5);
            dVar9 = param_1;
            func_0x00010c24e8c0(uVar5);
            param_1 = param_1 + dVar9;
            func_0x00010c270120();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c123640(uVar8);
            func_0x0001080c1d28();
          }
          uVar7 = uVar7 + 1;
          in_ZR = uVar7 == uVar2;
        } while (uVar7 < uVar2);
        func_0x0001080c1de8();
        uVar2 = param_2;
        func_0x0001080c1cc4();
      } while (uVar2 != 0);
    }
    uVar2 = 0;
    func_0x0001080c1d10();
  }
  func_0x0001080c1ccc();
  func_0x0001080c1bd0(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080c1c44();
  func_0x00010bdcb600();
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010c257ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c1fb0();
  uVar7 = uVar2;
  func_0x00010bdcb5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x0001080c1de8();
  func_0x0001080c1cc4();
  if (uVar4 != 0) {
    bVar1 = uVar8 != 0;
    lVar6 = *uStack_260;
    do {
      uVar8 = 0;
      do {
        func_0x0001080c1f2c();
        if (extraout_x8_02 != lVar6) {
          _objc_enumerationMutation(uVar7);
        }
        uVar5 = *(undefined8 *)(uStack_268 + uVar8 * 8);
        uVar3 = uVar5;
        func_0x00010c234c80();
        if (((int)uVar3 != 0) && (uVar3 = uVar5, func_0x00010bfdca60(), (int)uVar3 != 0)) {
          if (!bVar1) {
            func_0x00010bec4280();
            _objc_retainAutoreleasedReturnValue();
            func_0x0001080c1d10();
          }
          func_0x00010c250f20(uVar5);
          func_0x00010c11f320(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bec3ce0(param_1,uVar2);
          func_0x0001080c1d20();
          bVar1 = true;
        }
        uVar8 = uVar8 + 1;
        in_ZR = uVar8 == uVar4;
      } while (uVar8 < uVar4);
      func_0x0001080c1de8();
      uVar4 = uVar7;
      func_0x0001080c1cc4();
    } while (uVar4 != 0);
  }
  uVar3 = 0;
  func_0x0001080c1d18();
  func_0x0001080c1d10();
  func_0x0001080c1bd0(extraout_x8_01);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf03f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  func_0x0001080c1d10();
  func_0x0001080c1e6c();
  func_0x00010c168200();
  func_0x00010c1a5780(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010be3d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s__invalidateAnimationRangeCaches_11256cf80);
  return;
}



/* Entry: 1080bd858; end: 1080bd9b3; -[SCValdiTextViewEffectsLayoutManager saveAnimatedTextProgress] */

void FUN_1080bd858(undefined8 param_1,ulong param_2)

{
  undefined1 in_ZR;
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_138;
  undefined8 uStack_130;
  
  func_0x0001080c1c44();
  func_0x00010bdcb600();
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010c257ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c1fb0();
  uVar2 = param_2;
  func_0x00010bdcb5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001080c1de8();
  func_0x0001080c1cc4();
  if (uVar3 != 0) {
    bVar1 = uVar7 != 0;
    lVar6 = *uStack_130;
    do {
      uVar7 = 0;
      do {
        func_0x0001080c1f2c();
        if (extraout_x8_00 != lVar6) {
          _objc_enumerationMutation(uVar2);
        }
        uVar5 = *(undefined8 *)(uStack_138 + uVar7 * 8);
        uVar4 = uVar5;
        func_0x00010c234c80();
        if (((int)uVar4 != 0) && (uVar4 = uVar5, func_0x00010bfdca60(), (int)uVar4 != 0)) {
          if (!bVar1) {
            func_0x00010bec4280();
            _objc_retainAutoreleasedReturnValue();
            func_0x0001080c1d10();
          }
          func_0x00010c250f20(uVar5);
          func_0x00010c11f320(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bec3ce0(param_1,param_2);
          func_0x0001080c1d20();
          bVar1 = true;
        }
        uVar7 = uVar7 + 1;
        in_ZR = uVar7 == uVar3;
      } while (uVar7 < uVar3);
      func_0x0001080c1de8();
      uVar3 = uVar2;
      func_0x0001080c1cc4();
    } while (uVar3 != 0);
  }
  uVar4 = 0;
  func_0x0001080c1d18();
  func_0x0001080c1d10();
  func_0x0001080c1bd0(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf03f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  func_0x0001080c1d10();
  func_0x0001080c1e6c();
  func_0x00010c168200();
  func_0x00010c1a5780(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010be3d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s__invalidateAnimationRangeCaches_11256cf80);
  return;
}



/* Entry: 1080bd9b4; end: 1080bd9ff; -[SCValdiTextViewEffectsLayoutManager clearAnimatedTextProgress] */

void FUN_1080bd9b4(undefined8 param_1)

{
  func_0x00010bf03f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  func_0x0001080c1d10();
  func_0x0001080c1e6c();
  func_0x00010c168200();
  func_0x00010c1a5780(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be3d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__invalidateAnimationRangeCaches_11256cf80);
  return;
}



/* Entry: 1080bda00; end: 1080bda57; -[SCValdiTextViewEffectsLayoutManager setCustomUnderlineStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080bda00(void)

{
  undefined1 in_ZR;
  
  func_0x0001080c1bf8();
  func_0x0001080c20c8();
  if (!(bool)in_ZR) {
    func_0x0001080c1d38();
    func_0x0001080c1d90();
    func_0x0001080c1d6c();
    func_0x00010c26c860();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080c1e94();
    func_0x0001080c1cb4();
    func_0x0001080c1d18();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080bda58; end: 1080bdaaf; -[SCValdiTextViewEffectsLayoutManager setCustomUnderlineSourceAttributedString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080bda58(void)

{
  undefined1 in_ZR;
  
  func_0x0001080c1bf8();
  func_0x0001080c20c8();
  if (!(bool)in_ZR) {
    func_0x0001080c1d38();
    func_0x0001080c1d90();
    func_0x0001080c1d6c();
    func_0x00010c26c860();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080c1e94();
    func_0x0001080c1cb4();
    func_0x0001080c1d18();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080bdab0; end: 1080bdb2b; -[SCValdiTextViewEffectsLayoutManager setCustomUnderlineCharacterRanges:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080bdab0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127746c4;
  if (*(long *)(param_1 + lVar2) != param_3) {
    func_0x00010bf51e00();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    func_0x0001080c1e6c();
    func_0x00010c1752e0();
    func_0x00010c26c860(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080c1f60();
    func_0x0001080c1e6c();
    func_0x00010c069e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1080bdb2c; end: 1080bdb83; -[SCValdiTextViewEffectsLayoutManager setCustomUnderlineFallbackColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080bdb2c(void)

{
  undefined1 in_ZR;
  
  func_0x0001080c1bf8();
  func_0x0001080c20c8();
  if (!(bool)in_ZR) {
    func_0x0001080c1d38();
    func_0x0001080c1d90();
    func_0x0001080c1d6c();
    func_0x00010c26c860();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080c1e94();
    func_0x0001080c1cb4();
    func_0x0001080c1d18();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080bdb84; end: 1080bde1f; -[SCValdiTextViewEffectsLayoutManager drawGlyphsForGlyphRange:atPoint:] */

void FUN_1080bdb84(undefined8 ***param_1,undefined8 param_2,undefined8 param_3,undefined8 ***param_4
                  )

{
  undefined1 in_ZR;
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 extraout_x8;
  undefined8 ***unaff_x19;
  long lVar5;
  undefined8 **ppuStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 **ppuStack_238;
  undefined1 *puStack_230;
  code *pcStack_228;
  undefined8 **ppuStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 **appuStack_190 [34];
  undefined8 uStack_80;
  
  func_0x0001080c1e48();
  ppuStack_218 = param_4;
  func_0x0001080c1c44();
  uStack_80 = extraout_x8;
  func_0x00010c26c860();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c1e94();
  func_0x0001080c1eac(param_1);
  func_0x0001080c1d18();
  func_0x00010c26c860(param_1);
  _objc_retainAutoreleasedReturnValue();
  pppuVar1 = param_1;
  func_0x00010beea020();
  _objc_retainAutoreleasedReturnValue();
  pppuVar2 = param_1;
  func_0x00010be6e8e0();
  _objc_retainAutoreleasedReturnValue();
  pppuVar3 = param_1;
  func_0x00010bdf7a40();
  _objc_retainAutoreleasedReturnValue();
  pppuVar4 = pppuVar2;
  func_0x00010bf529e0();
  if (((pppuVar4 == (undefined8 ***)0x0) &&
      (pppuVar4 = pppuVar1, func_0x00010bf529e0(), pppuVar4 == (undefined8 ***)0x0)) &&
     (func_0x00010bf529e0(), pppuVar3 == (undefined8 ***)0x0)) {
    func_0x0001080c1ed8();
    pppuVar2 = appuStack_190;
    pppuVar1 = (undefined8 ***)ppuStack_218;
    appuStack_190[0] = param_1;
    func_0x0001080c1d54(pppuVar2,PTR_s_drawGlyphsForGlyphRange_atPoint__1125bffd8,param_3);
  }
  else {
    func_0x0001080c1d9c(param_1);
    func_0x00010be1cd60();
    _UIGraphicsGetCurrentContext();
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    plStack_1c0 = (long *)0x0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    _objc_retain(pppuVar2);
    pppuVar3 = pppuVar2;
    func_0x0001080c1cc4();
    if (pppuVar3 != (undefined8 ***)0x0) {
      lVar5 = *plStack_1c0;
      do {
        unaff_x19 = (undefined8 ***)0x0;
        do {
          if (*plStack_1c0 != lVar5) {
            _objc_enumerationMutation(pppuVar2);
          }
          func_0x0001080c1e54(param_1);
          func_0x00010be066c0();
          unaff_x19 = (undefined8 ***)((long)unaff_x19 + 1);
          in_ZR = unaff_x19 == pppuVar3;
        } while (unaff_x19 < pppuVar3);
        pppuVar3 = pppuVar2;
        func_0x0001080c1cc4();
      } while (pppuVar3 != (undefined8 ***)0x0);
    }
    func_0x0001080c1db8();
    func_0x0001080c1e54(param_1);
    func_0x00010be06820();
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    plStack_200 = (long *)0x0;
    func_0x0001080c1f24();
    pppuVar2 = pppuVar1;
    func_0x0001080c1cc4();
    if (pppuVar2 != (undefined8 ***)0x0) {
      lVar5 = *plStack_200;
      do {
        unaff_x19 = (undefined8 ***)0x0;
        do {
          if (*plStack_200 != lVar5) {
            _objc_enumerationMutation(pppuVar1);
          }
          func_0x0001080c1e54(param_1);
          func_0x00010be064a0();
          unaff_x19 = (undefined8 ***)((long)unaff_x19 + 1);
          in_ZR = unaff_x19 == pppuVar2;
        } while (unaff_x19 < pppuVar2);
        pppuVar2 = pppuVar1;
        func_0x0001080c1cc4();
      } while (pppuVar2 != (undefined8 ***)0x0);
    }
    func_0x0001080c1d20();
    func_0x0001080c1e54();
    func_0x00010be06800();
    pppuVar2 = param_1;
  }
  func_0x0001080c1d30();
  func_0x0001080c1db8();
  func_0x0001080c1d20();
  func_0x0001080c1d18();
  func_0x0001080c1bd0(uStack_80);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_228 = FUN_1080bde20;
  puStack_248 = PTR_PTR_1126fc660;
  ppuStack_250 = pppuVar2;
  uStack_240 = param_3;
  ppuStack_238 = unaff_x19;
  puStack_230 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&ppuStack_250,PTR_s_processEditingForTextStorage_edi_11253b4d0);
  if (((ulong)pppuVar1 & 3) != 0) {
    func_0x00010be3d760(pppuVar2);
    func_0x0001080c1e6c();
    func_0x00010c1754a0();
    func_0x0001080c1e6c();
    func_0x00010c1752e0();
  }
  return;
}



/* Entry: 1080bde20; end: 1080bde8b; -[SCValdiTextViewEffectsLayoutManager processEditingForTextStorage:edited:range:changeInLength:invalidatedRange:] */

void FUN_1080bde20(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fc660;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_processEditingForTextStorage_edi_11253b4d0);
  if ((param_4 & 3) != 0) {
    func_0x00010be3d760(param_1);
    func_0x0001080c1e6c();
    func_0x00010c1754a0();
    func_0x0001080c1e6c();
    func_0x00010c1752e0();
  }
  return;
}



/* Entry: 1080bde8c; end: 1080bdefb; -[SCValdiTextViewEffectsLayoutManager usedRectForTextContainer:] */

void FUN_1080bde8c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 auStack_50 [2];
  
  uVar1 = param_1;
  func_0x0001080c1ed8();
  auStack_50[0] = uVar1;
  _objc_msgSendSuper2(auStack_50,PTR_s_usedRectForTextContainer__112681e08);
  func_0x00010be5de20(param_1);
  func_0x0001080c1e54();
  return;
}



/* Entry: 1080bdefc; end: 1080bdff7; -[SCValdiTextViewEffectsLayoutManager _maximumDrawnOuterOutlineSize] */

double FUN_1080bdefc(double param_1,ulong param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  long lVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  long lStack_118;
  long *plStack_110;
  
  func_0x0001080c1c44();
  func_0x0001080c1fb0();
  func_0x00010c26c860();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c1f60();
  func_0x0001080c1e6c();
  func_0x00010be6e900();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c1d10();
  func_0x0001080c1c24();
  if (param_2 == 0) {
    dVar6 = 0.0;
  }
  else {
    lVar4 = *plStack_110;
    dVar6 = 0.0;
    do {
      uVar5 = 0;
      do {
        func_0x0001080c1f2c();
        if (extraout_x8_00 != lVar4) {
          func_0x0001080c1ea4();
        }
        uVar3 = *(ulong *)(lStack_118 + uVar5 * 8);
        uVar1 = uVar3;
        func_0x00010c2a5040();
        if (dVar6 < param_1) {
          func_0x00010c2a5040();
          uVar1 = uVar3;
          dVar6 = param_1;
        }
        uVar5 = uVar5 + 1;
        in_ZR = uVar5 == param_2;
      } while (uVar5 < param_2);
      func_0x0001080c1c24();
      param_2 = uVar1;
    } while (uVar1 != 0);
  }
  lVar4 = 0;
  func_0x0001080c1ccc();
  func_0x0001080c1bd0(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001080c1e48();
    func_0x00010be5de20();
    dVar6 = param_1 * 0.5;
    if (0.0 < dVar6) {
      lVar2 = lVar4;
      func_0x00010c26c860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      if (lVar2 == 0) {
        func_0x0001080c1ccc();
      }
      else {
        func_0x00010c26c860();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0dde0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beffa20();
        func_0x0001080c1d28();
        func_0x0001080c1d18();
        func_0x0001080c1ccc();
        if (lVar4 == 1) {
          param_1 = dVar6 * -0.5;
        }
      }
    }
    func_0x0001080c1d9c();
    return param_1;
  }
  return dVar6;
}



/* Entry: 1080bdff8; end: 1080be0e3; -[SCValdiTextViewEffectsLayoutManager _getAdjustedOriginForPoint:] */

void FUN_1080bdff8(double param_1,long param_2)

{
  func_0x0001080c1e48();
  func_0x00010be5de20();
  if (0.0 < param_1 * 0.5) {
    func_0x00010c26c860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    if (param_2 == 0) {
      func_0x0001080c1ccc();
    }
    else {
      func_0x00010c26c860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0dde0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beffa20();
      func_0x0001080c1d28();
      func_0x0001080c1d18();
      func_0x0001080c1ccc();
    }
  }
  func_0x0001080c1d9c();
  return;
}



/* Entry: 1080be0e4; end: 1080be46f; -[SCValdiTextViewEffectsLayoutManager _drawOutline:attributedString:glyphsOrigin:context:] */

void FUN_1080be0e4(double param_1,double param_2,undefined8 param_3,undefined8 param_4,ulong param_5
                  ,ulong param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 in_ZR;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined2 *puVar10;
  ulong uVar11;
  long unaff_x30;
  double dVar12;
  double unaff_d8;
  double unaff_d9;
  undefined8 in_stack_00000080;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  long lStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  ulong uStack_28;
  long lStack_20;
  long lStack_18;
  undefined8 uStack_10;
  
  func_0x0001080c2174();
  puVar1 = &uStack_90;
  func_0x0001080c1e48();
  func_0x0001080c1c44();
  uStack_10 = extraout_x8;
  func_0x0001080c1d08();
  uStack_88 = param_6;
  func_0x0001080c1e84();
  uVar3 = param_5;
  func_0x00010c11f2a0();
  puVar2 = &uStack_90;
  uStack_70 = uVar3;
  if (unaff_x30 != 0) {
    uStack_80 = uVar3 + unaff_x30;
    uStack_38 = *(undefined8 *)PTR__kCTFontAttributeName_11034a070;
    uStack_90 = param_3;
    lStack_78 = unaff_x30;
    while (in_ZR = uVar3 == uStack_80, puVar2 = puVar1, uVar3 < uStack_80) {
      func_0x0001080c20d4();
      func_0x00010bfcd220();
      func_0x00010c099260(param_3);
      uVar8 = uStack_70;
      lVar6 = lStack_78;
      _NSIntersectionRange(uStack_70,lStack_78,lStack_20,lStack_18);
      if (lVar6 == 0) {
        uVar3 = lStack_18 + lStack_20;
      }
      else {
        func_0x0001080c1eac(param_3);
        func_0x0001080c20bc();
        func_0x0001080c20d4();
        func_0x00010c09ee80();
        dVar12 = param_2;
        func_0x0001080c20d4();
        func_0x00010c26ba20();
        _objc_retainAutoreleasedReturnValue();
        func_0x0001080c20d4();
        func_0x00010bf20b60();
        func_0x0001080c1d20();
        func_0x0001080c2010();
        _CGContextTranslateCTM(unaff_d9 + param_1,unaff_d8 + param_2 + dVar12,param_7);
        param_1 = 1.0;
        param_2 = -1.0;
        _CGContextScaleCTM(param_7);
        uVar11 = uStack_88;
        lStack_58 = lVar6;
        uStack_50 = uVar8;
        func_0x00010bf0e4e0();
        _objc_retainAutoreleasedReturnValue();
        uStack_60 = uVar11;
        _CTLineCreateWithAttributedString();
        uStack_68 = uVar11;
        _CTLineGetGlyphRuns();
        uVar9 = uVar11;
        _CFArrayGetCount();
        uVar9 = uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU);
        uStack_48 = uVar9;
        uStack_40 = uVar11;
        for (uVar8 = 0; uVar8 != uVar9; uVar8 = uVar8 + 1) {
          uVar4 = uVar11;
          _CFArrayGetValueAtIndex(uVar11,uVar8);
          uVar7 = uVar4;
          _CTRunGetGlyphCount();
          if (uVar7 != 0) {
            uVar5 = uVar4;
            _CTRunGetAttributes();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x0001080c1e8c();
            if (uVar3 != 0) {
              puStack_30 = (undefined1 *)puVar1;
              uStack_28 = uVar5;
              (*(code *)PTR____chkstk_darwin_11034bd40)(uVar7 << 1);
              puVar10 = (undefined2 *)((long)puVar1 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0))
              ;
              (*(code *)PTR____chkstk_darwin_11034bd40)();
              _CTRunGetGlyphs(uVar4,0,uVar7,puVar10);
              _CTRunGetPositions(uVar4,0,uVar7,puVar10 + uVar7 * -8);
              uVar9 = uStack_48;
              uVar11 = uStack_40;
              puVar1 = (undefined8 *)puStack_30;
              for (uVar7 = uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU); uStack_48 = uVar9,
                  uStack_40 = uVar11, puStack_30 = (undefined1 *)puVar1, uVar7 != 0;
                  uVar7 = uVar7 - 1) {
                uVar9 = uVar3;
                _CTFontCreatePathForGlyph(uVar3,*puVar10,0);
                if (uVar9 == 0) {
                  uVar11 = 0;
                }
                else {
                  func_0x00010c2a5040(param_5);
                  param_2 = 0.0;
                  uVar11 = uVar9;
                  _CGPathCreateCopyByStrokingPath(uVar9,0,1,1);
                  if (uVar11 != 0) {
                    func_0x0001080c2010();
                    func_0x0001080c20ec(param_7);
                    _CGContextTranslateCTM();
                    _CGContextAddPath(param_7,uVar11);
                    uVar4 = param_5;
                    func_0x00010bf40c40(param_5);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_retainAutorelease();
                    func_0x00010bdc0fe0();
                    _CGContextSetFillColorWithColor(param_7,uVar4);
                    func_0x0001080c1d30();
                    _CGContextFillPath(param_7);
                    _CGContextRestoreGState(param_7);
                  }
                }
                _CGPathRelease(uVar9);
                _CGPathRelease(uVar11);
                puVar10 = puVar10 + 1;
                uVar9 = uStack_48;
                uVar11 = uStack_40;
                puVar1 = (undefined8 *)puStack_30;
              }
            }
            func_0x0001080c1da8();
          }
        }
        _CFRelease(uStack_68);
        _CGContextRestoreGState(param_7);
        uVar3 = uStack_50 + lStack_58;
        _objc_release();
        param_3 = uStack_90;
      }
    }
  }
  _objc_release(uStack_88);
  func_0x0001080c1ccc();
  func_0x0001080c1bd0(uStack_10);
  if ((bool)in_ZR) {
    func_0x0001080c2150();
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)((long)puVar2 + -0x20) = param_7;
  *(ulong *)((long)puVar2 + -0x18) = param_5;
  *(undefined8 **)((long)puVar2 + -0x10) = &stack0x00000080;
  *(code **)((long)puVar2 + -8) = FUN_1080be470;
  func_0x00010c1752a0();
  func_0x0001080c1e6c();
                    /* WARNING: Could not recover jumptable at 0x00010c1755d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1080be470; end: 1080be497; -[SCValdiTextViewEffectsLayoutManager _invalidateAnimationRangeCaches] */

void FUN_1080be470(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c1752a0(param_1,param_2,0);
  func_0x0001080c1e6c();
                    /* WARNING: Could not recover jumptable at 0x00010c1755d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1080be498; end: 1080be4bf; -[SCValdiTextViewEffectsLayoutManager _invalidateAnimationEntries] */

void FUN_1080be498(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c168200(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010be3d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__invalidateAnimationRangeCaches_11256cf80);
  return;
}



/* Entry: 1080be4c0; end: 1080be733; -[SCValdiTextViewEffectsLayoutManager _animationEntries] */

void FUN_1080be4c0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  func_0x00010bf03c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c209c();
  if (unaff_x20 == 0) {
    func_0x00010bf03f20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080c209c();
    func_0x0001080c1e60();
    func_0x0001080c20e0();
    func_0x00010c168340();
    func_0x0001080c1d10();
    lVar1 = param_1;
    func_0x00010c115800();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      func_0x00010c168200(param_1,param_2,PTR____NSArray0__struct_11034ab48);
      func_0x00010bf03f20(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12adc0();
      func_0x0001080c1d18();
      func_0x00010bf03c20(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar2 = lVar1;
      func_0x0001080c1c84();
      puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_opt_new();
      lVar4 = param_1;
      func_0x00010c257ee0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1;
      func_0x00010c26b820();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = param_1;
        func_0x00010c26b800();
      }
      func_0x0001080c1d30();
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_1080be734;
      puStack_80 = &UNK_110a1d778;
      lStack_78 = lVar2;
      puStack_70 = puVar3;
      lStack_68 = param_1;
      lStack_60 = lVar4;
      lStack_58 = lVar6;
      func_0x0001080c1f24();
      func_0x0001080c1eec();
      func_0x0001080c1e84();
      func_0x00010bf97aa0(lVar1,param_2,&puStack_98);
      puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      lVar1 = param_1;
      func_0x00010bf03f20(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c225c20(puVar5,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080c1da8();
      func_0x0001080c1d30();
      func_0x00010c0ce860(puVar5,param_2,puVar3);
      lVar1 = param_1;
      func_0x00010bf03f20(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf00560(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d4a0(lVar1,param_2,puVar5);
      func_0x0001080c1da8();
      func_0x0001080c1d30();
      func_0x0001080c1f00();
      func_0x00010c168200();
      func_0x00010bf03c20(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080c1db8();
      _objc_release(lStack_60);
      _objc_release(puStack_70);
      func_0x0001080c1f38();
      func_0x0001080c1d20();
      func_0x0001080c1d28();
      func_0x0001080c1d18();
    }
    func_0x0001080c1d10();
  }
  else {
    func_0x00010bf03c20(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1080be734; end: 1080beb1f;  */

void FUN_1080be734(double param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  func_0x0001080c1e78();
  if (param_5 == 0) goto LAB_1080beb00;
  lVar4 = *(long *)(unaff_x20 + 0x40);
  func_0x0001080c203c();
  dVar8 = 0.0;
  if (0.0 <= param_1) {
    dVar8 = param_1;
  }
  lVar1 = param_3;
  func_0x00010c0f48e0();
  dVar7 = (double)(ulong)(lVar1 + lVar4);
  dVar8 = dVar8 * dVar7;
  func_0x0001080c1d38();
  lVar4 = param_3;
  FUN_1080c1ab8();
  if (((int)lVar4 == 0) || (func_0x0001080c2024(), 0.0 < dVar7)) {
    func_0x0001080c1ccc();
LAB_1080be7ac:
    func_0x0001080c1d38();
    lVar4 = param_3;
    FUN_1080c1ab8();
    if ((int)lVar4 != 0) {
      func_0x0001080c2024();
      func_0x0001080c1ccc();
      bVar6 = false;
      if ((dVar8 <= 0.0) && (dVar7 <= 0.0)) goto LAB_1080beb00;
      goto LAB_1080be804;
    }
  }
  else {
    func_0x0001080c203c();
    dVar9 = 0.0;
    if (0.0 <= dVar7) {
      dVar9 = dVar7;
    }
    func_0x0001080c1ccc();
    if (0.0 < dVar9) goto LAB_1080be7ac;
    bVar6 = true;
LAB_1080be804:
    puVar2 = PTR_PTR_1126d93c0;
    _objc_opt_new();
    func_0x00010c1e6f40();
    func_0x00010c1b0d20(puVar2);
    if (bVar6) {
      func_0x0001080c2034();
      func_0x00010c219be0(puVar2);
      func_0x0001080c202c();
      func_0x00010c1f5fe0(puVar2);
      func_0x0001080c1f0c();
      func_0x00010c1d4bc0(puVar2);
    }
    else {
      func_0x00010c219be0(0,puVar2);
      func_0x00010c1f5fe0(0x3ff0000000000000,puVar2);
      func_0x00010c1d4bc0(0x3ff0000000000000,puVar2);
      func_0x0001080c2034();
      func_0x00010c1acee0(puVar2);
      func_0x0001080c202c();
      func_0x00010c1accc0(puVar2);
      func_0x0001080c1f0c();
      func_0x00010c1acba0(puVar2);
      func_0x0001080c2024();
      func_0x00010c192d40(puVar2);
      func_0x00010c209580(puVar2);
      func_0x0001080c203c();
      dVar7 = 0.0;
      if (0.0 <= dVar8) {
        dVar7 = dVar8;
      }
      func_0x00010c214e40(dVar7,puVar2);
      func_0x0001080c1d38();
      lVar4 = param_3;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (lVar4 == 0) {
        func_0x00010c0f48c0();
        func_0x00010c25d9e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c086560();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f48c0();
        func_0x00010c25d9e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x0001080c1d20();
      }
      func_0x0001080c1ccc();
      func_0x0001080c1ecc();
      func_0x00010c1e6fa0();
      func_0x0001080c1d28();
      func_0x0001080c1d38();
      lVar4 = param_3;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (lVar4 == 0) {
        func_0x00010bfceba0();
        func_0x0001080c1ccc();
        func_0x00010c25d9e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c086560(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x0001080c1ccc();
      }
      func_0x0001080c1ecc();
      func_0x00010c215a00();
      func_0x0001080c1d28();
      func_0x00010c086560(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c201440(puVar2);
      func_0x0001080c1d28();
      uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
      func_0x00010c11f320(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080c2064(uVar5);
      func_0x0001080c1d20();
      lVar4 = *(long *)(unaff_x20 + 0x30);
      func_0x00010bf03f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11f320(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080c1db8();
      func_0x0001080c1d20();
      if (lVar4 == 0) {
        puVar3 = puVar2;
        func_0x00010c234c80();
        if ((int)puVar3 != 0) {
          lVar4 = *(long *)(unaff_x20 + 0x30);
          func_0x00010c11f320(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bec42c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x0001080c1d20();
          if (lVar4 != 0) goto LAB_1080bea84;
        }
      }
      else {
LAB_1080bea84:
        func_0x00010c1a6ec0(puVar2);
        func_0x00010bf885a0(lVar4);
        func_0x00010c209a20(puVar2);
        func_0x0001080c1d28();
      }
    }
    func_0x00010befa120(*(undefined8 *)(unaff_x20 + 0x20));
  }
  func_0x0001080c1d18();
LAB_1080beb00:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1080beb20; end: 1080bf0cf; -[SCValdiTextViewEffectsLayoutManager _animationRanges] */

void FUN_1080beb20(double param_1,ulong param_2)

{
  bool bVar1;
  undefined1 in_ZR;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 unaff_x30;
  double dVar10;
  double dVar11;
  double dVar12;
  ulong uStack_198;
  long lStack_188;
  long *plStack_180;
  
  func_0x0001080c2174();
  uVar7 = param_2;
  func_0x0001080c1c44();
  func_0x00010bf26f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar7 == 0) {
    uVar7 = param_2;
    func_0x00010bdcb5a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    if (uVar7 == 0) {
      func_0x00010c1a5780(param_2);
      func_0x00010c1752a0(param_2);
      func_0x0001080c2004();
      func_0x00010bf26f20();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_2;
    }
    else {
      uVar2 = param_2;
      func_0x00010c26b820();
      _objc_retainAutoreleasedReturnValue();
      if (uVar2 == 0) {
        uVar7 = uVar2;
        func_0x0001080c1e60();
      }
      else {
        uVar7 = 0;
      }
      _CACurrentMediaTime();
      uStack_198 = param_2;
      dVar11 = param_1;
      func_0x00010c257ee0();
      _objc_retainAutoreleasedReturnValue();
      in_ZR = uStack_198 == 0;
      bVar1 = !(bool)in_ZR;
      if (uVar2 == 0) {
        dVar11 = 0.0;
        uVar3 = uStack_198;
        func_0x0001080c1d38();
        func_0x0001080c1c60();
        lVar8 = lRam0000000000000000;
        while (uVar3 != 0) {
          uVar6 = 0;
          do {
            if (lRam0000000000000000 != lVar8) {
              func_0x0001080c1ea4();
            }
            uVar9 = *(ulong *)(uVar6 * 8);
            uVar4 = uVar9;
            func_0x00010bfdca60();
            if ((int)uVar4 != 0) {
              func_0x00010c250f20(uVar9);
              dVar10 = dVar11;
              func_0x0001080c1ff0();
              dVar12 = dVar11 + dVar10;
              func_0x00010c270120(uVar9);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar7;
              FUN_1080bf0d0(uVar7,uVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x0001080c1da8();
              uVar4 = uVar5;
              func_0x00010bfd6e00();
              if (((int)uVar4 == 0) ||
                 (uVar4 = uVar5, func_0x00010bf9b300(), dVar11 = dVar10, dVar10 < dVar12)) {
                func_0x00010c1a5e60(uVar5);
                func_0x00010c198160();
                uVar4 = uVar5;
                dVar11 = dVar12;
              }
              func_0x0001080c1d30();
            }
            uVar6 = uVar6 + 1;
            in_ZR = uVar6 == uVar3;
          } while (uVar6 < uVar3);
          func_0x0001080c1c60();
          uVar3 = uVar4;
        }
        uVar3 = 0;
        func_0x0001080c1ccc();
      }
      else {
        uVar3 = param_2;
        func_0x00010c109900();
      }
      func_0x0001080c1f90();
      func_0x0001080c1d38();
      func_0x0001080c2120();
      func_0x0001080c1c60();
      if (uVar3 != 0) {
        lVar8 = *plStack_180;
        do {
          uVar6 = 0;
          do {
            if (*plStack_180 != lVar8) {
              func_0x0001080c1ea4();
            }
            uVar9 = *(ulong *)(lStack_188 + uVar6 * 8);
            uVar4 = uVar9;
            func_0x00010c072740();
            if ((uVar4 & 1) == 0) {
              uVar4 = uVar9;
              func_0x00010bfdca60();
              dVar10 = dVar11;
              if ((uVar4 & 1) == 0) {
                uVar4 = uVar9;
                func_0x00010c270120(uVar9);
                _objc_retainAutoreleasedReturnValue();
                if (uVar2 == 0) {
                  uVar5 = uVar7;
                  FUN_1080bf0d0(uVar7,uVar4);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x0001080c1ebc();
                  uVar4 = uVar5;
                  func_0x00010bfd9660();
                  if ((uVar4 & 1) == 0) {
                    func_0x00010c1a6500(uVar5);
                    func_0x0001080c1ff0();
                    func_0x00010c1cc980(uVar5);
                  }
                  uVar4 = uVar5;
                  func_0x00010bfd9680();
                  if ((uVar4 & 1) == 0) {
                    func_0x00010c1a6520(uVar5);
                    uVar4 = uVar5;
                    func_0x00010bfd6e00();
                    dVar11 = param_1;
                    if ((int)uVar4 != 0) {
                      dVar10 = param_1;
                      func_0x00010bf9b300(uVar5);
                      dVar12 = dVar10;
                      func_0x00010c26f540(uVar9);
                      dVar11 = dVar10 + dVar12;
                      if (dVar10 + dVar12 <= param_1) {
                        dVar11 = param_1;
                      }
                    }
                    func_0x00010c1cc9a0(uVar5);
                  }
                  func_0x00010c0d8480(uVar5);
                  dVar10 = dVar11;
                  func_0x00010c0d8460(uVar5);
                  dVar11 = dVar11 - dVar10;
                }
                else {
                  func_0x00010c26f540(uVar9);
                  func_0x00010c250f40(uVar2);
                }
                func_0x0001080c1da8();
                func_0x00010c1a6ec0(uVar9);
                func_0x00010c209a20(dVar11,uVar9);
                dVar10 = dVar11;
                func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
                _objc_retainAutoreleasedReturnValue();
                uVar4 = param_2;
                func_0x00010bf03f20(param_2);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c11f320(uVar9);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(uVar4);
                func_0x0001080c1ec4();
                func_0x0001080c1ebc();
                func_0x0001080c1da8();
                uVar4 = uVar9;
                func_0x00010c234c80();
                if ((int)uVar4 != 0) {
                  if (!bVar1) {
                    uVar4 = param_2;
                    func_0x00010bec4280();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(uStack_198);
                    uStack_198 = uVar4;
                  }
                  func_0x00010c11f320(uVar9);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bec3ce0(param_2);
                  func_0x0001080c1da8();
                  bVar1 = true;
                  dVar10 = dVar11;
                }
              }
              func_0x00010c250f20(uVar9);
              dVar12 = param_1 - dVar10;
              func_0x0001080c1ff0();
              dVar12 = dVar12 - dVar10;
              func_0x00010bf8b160(uVar9);
              if (dVar10 <= 0.0) {
                dVar11 = 1.0;
                if (dVar12 < 0.0) {
                  dVar11 = 0.0;
                }
              }
              else {
                func_0x00010bf8b160(uVar9);
                dVar12 = dVar12 / dVar10;
                dVar11 = 0.0;
                if (0.0 <= dVar12) {
                  dVar11 = dVar12;
                }
                dVar11 = (double)NEON_fminnm(dVar11,0x3ff0000000000000);
              }
              dVar11 = 1.0 - dVar11;
              dVar12 = dVar11 * -(dVar11 * dVar11) + 1.0;
              func_0x00010c0645a0(uVar9);
              dVar11 = dVar11 * (1.0 - dVar12);
              func_0x00010c219be0(uVar9);
              func_0x00010c0643c0(uVar9);
              dVar10 = dVar11;
              func_0x00010c0643c0(uVar9);
              dVar11 = dVar11 + dVar12 * (1.0 - dVar10);
              func_0x00010c1f5fe0(uVar9);
              func_0x00010c064080(uVar9);
              dVar10 = dVar11;
              func_0x00010c064080(uVar9);
              dVar11 = dVar11 + dVar12 * (1.0 - dVar10);
              func_0x00010c1d4bc0();
              uVar4 = uVar9;
            }
            uVar6 = uVar6 + 1;
            in_ZR = uVar6 == uVar3;
          } while (uVar6 < uVar3);
          func_0x0001080c2120();
          func_0x0001080c1c60();
          uVar3 = uVar4;
        } while (uVar4 != 0);
      }
      func_0x0001080c1ccc();
      func_0x00010c1a5780(param_2);
      func_0x00010c1752a0(param_2);
      func_0x0001080c2004();
      func_0x00010bf26f20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uStack_198);
      _objc_release();
      func_0x0001080c1ec4();
    }
    func_0x0001080c1ccc();
  }
  else {
    func_0x00010bf26f20();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_2;
  }
  func_0x0001080c1bd0(extraout_x8);
  if ((bool)in_ZR) {
    func_0x0001080c2150(param_2,unaff_x30);
  }
  else {
    ___stack_chk_fail();
    _objc_retain();
    func_0x0001080c1e9c();
    func_0x0001080c20e0();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar7 == 0) {
      _objc_opt_new(PTR_PTR_1126d93e0);
      func_0x0001080c1f00();
      func_0x00010c1d0640();
    }
    func_0x0001080c1d10();
    func_0x0001080c1ccc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080bf0d0; end: 1080bf137;  */

void FUN_1080bf0d0(undefined *param_1)

{
  _objc_retain();
  func_0x0001080c1e9c();
  func_0x0001080c20e0();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_PTR_1126d93e0;
    _objc_opt_new(PTR_PTR_1126d93e0);
    func_0x0001080c1f00();
    func_0x00010c1d0640();
  }
  func_0x0001080c1d10();
  func_0x0001080c1ccc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1080bf138; end: 1080bf1ab; -[SCValdiTextViewEffectsLayoutManager _storedAnimationProgressCreatingIfNeeded] */

void FUN_1080bf138(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c257ee0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010c2954e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080c1f00();
    func_0x00010bec42a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080c1d18();
    func_0x0001080c20e0();
    func_0x00010c20c340();
    lVar1 = param_1;
  }
  func_0x0001080c1e9c();
  func_0x0001080c1d10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1080bf1ac; end: 1080bf25b; -[SCValdiTextViewEffectsLayoutManager _storedAnimationProgressInViewNode:createIfNeeded:] */

void FUN_1080bf1ac(undefined8 param_1,undefined8 param_2,undefined *param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x0001080c1d08();
  if (param_3 == (undefined *)0x0) {
    param_3 = (undefined *)0x0;
  }
  else {
    FUN_1080c1b58();
    func_0x00010c257f00();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126d93c8;
    _objc_opt_class(PTR_PTR_1126d93c8);
    puVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if (((ulong)puVar2 & 1) == 0) {
      param_3 = (undefined *)0x0;
    }
    func_0x0001080c1e84();
    if ((param_4 != 0) && (param_3 == (undefined *)0x0)) {
      param_3 = PTR_PTR_1126d93c8;
      _objc_opt_new(PTR_PTR_1126d93c8);
      FUN_1080c1b58();
      func_0x0001080c1f00();
      func_0x00010c20c360();
    }
    func_0x0001080c1d10();
  }
  func_0x0001080c1ccc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1080bf25c; end: 1080bf2db; -[SCValdiTextViewEffectsLayoutManager _storedAnimationStartTimeForRangeKey:inStoredProgress:] */

void FUN_1080bf25c(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong in_x3;
  
  func_0x0001080c1d08();
  func_0x00010c2510c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c1d10();
  func_0x0001080c1ccc();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar2 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar1);
  if ((uVar2 & 1) == 0) {
    in_x3 = 0;
  }
  func_0x0001080c1d38();
  func_0x0001080c1d18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(in_x3);
  return;
}



/* Entry: 1080bf2dc; end: 1080bf377; -[SCValdiTextViewEffectsLayoutManager _storeAnimationStartTime:forRangeKey:inStoredProgress:] */

void FUN_1080bf2dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_5 != 0) {
    _objc_retain(param_5);
    func_0x0001080c1d38();
    func_0x00010c0df720(param_1,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2510c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080c1d10();
    func_0x00010c1d0640(param_5,param_3,puVar1,param_4);
    func_0x0001080c1ccc();
    func_0x0001080c1d28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1080bf378; end: 1080bf4e7; -[SCValdiTextViewEffectsLayoutManager _visibleAnimationRanges] */

void FUN_1080bf378(ulong param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x22;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_1a0 [8];
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  ulong uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_78;
  
  func_0x0001080c1c44();
  uStack_78 = extraout_x8;
  func_0x00010bf276a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c209c();
  if (unaff_x20 == 0) {
    unaff_x20 = param_1;
    func_0x00010bdcb600();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = unaff_x20;
    func_0x0001080c1c84();
    func_0x0001080c1fb0();
    func_0x0001080c1e9c();
    func_0x0001080c1de8();
    uVar2 = unaff_x20;
    func_0x0001080c1cc4();
    if (uVar2 != 0) {
      lVar4 = *plStack_130;
      do {
        uVar5 = 0;
        do {
          func_0x0001080c1f2c();
          if (extraout_x8_00 != lVar4) {
            _objc_enumerationMutation(unaff_x20);
          }
          iVar1 = (int)*(undefined8 *)(lStack_138 + uVar5 * 8);
          func_0x0001080c1f24();
          func_0x00010c27ae20();
          func_0x0001080c206c();
          func_0x0001080c204c();
          func_0x0001080c1d20();
          func_0x0001080c1e54();
          FUN_1080c1b0c();
          if (iVar1 != 0) {
            func_0x0001080c2064(unaff_x21);
          }
          uVar5 = uVar5 + 1;
          in_ZR = uVar5 == uVar2;
        } while (uVar5 < uVar2);
        func_0x0001080c1de8();
        uVar2 = unaff_x20;
        func_0x0001080c1cc4();
        unaff_x22 = 0;
      } while (uVar2 != 0);
    }
    func_0x0001080c1d10();
    func_0x0001080c1f00();
    func_0x00010c1755c0();
    func_0x00010bf276a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x0001080c1d18();
    func_0x0001080c1d10();
  }
  else {
    func_0x00010bf276a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
  }
  func_0x0001080c1bd0(uStack_78);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pcStack_148 = FUN_1080bf4e8;
    uVar5 = uVar2;
    uStack_170 = unaff_x22;
    uStack_168 = unaff_x21;
    uStack_160 = unaff_x20;
    uStack_158 = param_1;
    puStack_150 = &stack0xfffffffffffffff0;
    func_0x00010bf27400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar5 == 0) {
      uVar5 = uVar2;
      func_0x00010beea020();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x0001080c1c84();
      func_0x00010c115800(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080c1f70();
      uStack_198 = 0xc2000000;
      pcStack_190 = FUN_1080bf5ec;
      puStack_188 = &UNK_110a1d7a8;
      uStack_180 = uVar5;
      uStack_178 = uVar3;
      func_0x0001080c1e84();
      func_0x0001080c1d38();
      func_0x00010bf97f40(unaff_x22,param_2,auStack_1a0);
      func_0x0001080c1d28();
      func_0x00010c1754a0(uVar2,param_2,uVar3);
      func_0x00010bf27400(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080c1f38();
      _objc_release(uStack_180);
      func_0x0001080c1d18();
      func_0x0001080c1ccc();
      param_1 = uVar2;
    }
    else {
      func_0x00010bf27400(uVar2);
      _objc_retainAutoreleasedReturnValue();
      param_1 = uVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1080bf4e8; end: 1080bf5eb; -[SCValdiTextViewEffectsLayoutManager _outlineRanges] */

void FUN_1080bf4e8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bf27400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010beea020();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x0001080c1c84();
    func_0x00010c115800(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080c1f70();
    func_0x0001080c1e84();
    func_0x0001080c1d38();
    func_0x00010bf97f40();
    func_0x0001080c1d28();
    func_0x00010c1754a0(param_1,param_2,lVar2);
    func_0x00010bf27400(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080c1f38();
    _objc_release(lVar1);
    func_0x0001080c1d18();
    func_0x0001080c1ccc();
  }
  else {
    func_0x00010bf27400(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1080bf5ec; end: 1080bf877;  */

void FUN_1080bf5ec(undefined8 param_1,long param_2,ulong param_3,ulong param_4,ulong param_5)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lStack_1f8;
  long *plStack_1f0;
  
  uVar1 = param_5;
  func_0x0001080c1c44();
  uVar6 = param_3;
  _objc_retain();
  if (param_5 != 0) {
    func_0x0001080c1f90();
    uVar8 = *(ulong *)(param_2 + 0x20);
    func_0x0001080c1eec();
    func_0x0001080c1c84();
    uVar4 = param_4 + param_5;
    func_0x0001080c1eec();
    uVar1 = uVar8;
    func_0x0001080c1cc4();
    lVar10 = lRam0000000000000000;
    uVar11 = param_4;
    while (uVar1 != 0) {
      uVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar10) {
          _objc_enumerationMutation(uVar8);
        }
        func_0x00010c11f2a0(*(undefined8 *)(uVar9 * 8));
        func_0x0001080c212c();
        uVar2 = param_4;
        uVar7 = param_5;
        _NSIntersectionRange();
        uVar6 = uVar7;
        if (uVar7 != 0) {
          if (uVar11 < uVar2) {
            uVar3 = uVar2;
            func_0x0001080c1fcc();
            func_0x00010c297300();
            _objc_retainAutoreleasedReturnValue();
            func_0x0001080c1ecc();
            func_0x00010befa120();
            _objc_release(uVar3);
          }
          if (uVar11 <= uVar2 + uVar7) {
            uVar11 = uVar2 + uVar7;
          }
          if (uVar4 <= uVar11) goto LAB_1080bf764;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar1);
      uVar1 = uVar8;
      func_0x0001080c1cc4();
    }
LAB_1080bf764:
    _objc_release();
    uVar1 = uVar4 - uVar11;
    in_ZR = uVar1 == 0;
    if (uVar11 <= uVar4 && !(bool)in_ZR) {
      func_0x0001080c1fcc();
      func_0x00010c297300();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080c1ecc();
      func_0x00010befa120();
      func_0x0001080c1d28();
    }
    _objc_release(uVar8);
    func_0x0001080c2120();
    uVar4 = param_3;
    func_0x0001080c1cc4();
    if (uVar4 != 0) {
      lVar10 = *plStack_1f0;
      do {
        uVar11 = 0;
        do {
          uVar8 = uVar6;
          if (*plStack_1f0 != lVar10) {
            _objc_enumerationMutation(param_3);
            uVar8 = uVar6;
          }
          func_0x00010c11f4c0(*(undefined8 *)(lStack_1f8 + uVar11 * 8));
          uVar6 = uVar8;
          if (uVar8 != 0) {
            puVar5 = PTR_PTR_1126d93d0;
            _objc_opt_new();
            func_0x00010c1e6f40();
            func_0x00010c2256c0(param_1,puVar5);
            func_0x00010c17e800(puVar5);
            func_0x00010befa120(*(undefined8 *)(param_2 + 0x28));
            func_0x0001080c1d30();
            uVar1 = uVar8;
          }
          uVar11 = uVar11 + 1;
          in_ZR = uVar11 == uVar4;
        } while (uVar11 < uVar4);
        func_0x0001080c2120();
        uVar4 = param_3;
        func_0x0001080c1cc4();
      } while (uVar4 != 0);
    }
    param_3 = 0;
    func_0x0001080c1d18();
  }
  func_0x0001080c1ccc();
  func_0x0001080c1bd0(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  uVar6 = param_3;
  func_0x0001080c1c84();
  if (uVar1 != 0) {
    func_0x00010c115800(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080c1f70();
    func_0x0001080c1d38();
    func_0x00010bf97f40(param_3);
    func_0x0001080c1d28();
    func_0x0001080c1f38();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1080bf878; end: 1080bf913; -[SCValdiTextViewEffectsLayoutManager _outlineRangesInRange:] */

void FUN_1080bf878(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = param_1;
  func_0x0001080c1c84();
  if (param_4 != 0) {
    func_0x00010c115800(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080c1f70();
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1080bf914;
    puStack_50 = &UNK_110a1d7d8;
    uStack_40 = param_3;
    lStack_38 = param_4;
    func_0x0001080c1d38();
    uStack_48 = uVar1;
    func_0x00010bf97f40(param_1,param_2,auStack_68);
    func_0x0001080c1d28();
    func_0x0001080c1f38();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1080bf914; end: 1080bf9b3;  */

void FUN_1080bf914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x0001080c1e78();
  lVar2 = *(long *)(unaff_x20 + 0x30);
  _NSIntersectionRange(*(undefined8 *)(unaff_x20 + 0x28),lVar2,param_4,param_5);
  if (lVar2 != 0) {
    func_0x0001080c20bc();
    puVar1 = PTR_PTR_1126d93d0;
    _objc_opt_new(PTR_PTR_1126d93d0);
    func_0x00010c1e6f40();
    func_0x00010c2256c0(param_1,puVar1);
    func_0x00010c17e800(puVar1);
    func_0x0001080c2064(*(undefined8 *)(unaff_x20 + 0x20));
    func_0x0001080c1d20();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1080bf9b4; end: 1080bfcbb; -[SCValdiTextViewEffectsLayoutManager _customUnderlineRangesForAttributedString:] */

void FUN_1080bf9b4(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar6;
  ulong uVar7;
  long unaff_x21;
  undefined8 uVar8;
  undefined8 uStack_160;
  undefined8 uStack_128;
  undefined8 uStack_120;
  
  func_0x0001080c1c44();
  func_0x0001080c1d08();
  func_0x00010bf26fc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c1e8c();
  if (unaff_x21 == 0) {
    uVar1 = param_1;
    func_0x00010bf62aa0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 != 0) {
      uVar1 = param_3;
      func_0x00010c08fa60();
      uVar2 = uVar1;
      func_0x0001080c1d18();
      if (uVar1 != 0) {
        func_0x0001080c1c84();
        uVar1 = param_1;
        func_0x00010bf62a60();
        _objc_retainAutoreleasedReturnValue();
        if (uVar1 == 0) {
LAB_1080bfaf4:
          func_0x00010c08fa60(param_3);
          func_0x0001080c1f70();
          func_0x0001080c1e84();
          param_4 = 0;
          func_0x00010bf97b00(param_3);
          func_0x0001080c2058();
          func_0x00010bf26fc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          uVar1 = param_1;
        }
        else {
          uVar1 = param_1;
          func_0x00010bf629e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf529e0();
          func_0x0001080c1d20();
          func_0x0001080c1d28();
          if (uVar1 == 0) goto LAB_1080bfaf4;
          uStack_160 = param_1;
          func_0x00010bf62a20();
          _objc_retainAutoreleasedReturnValue();
          if (uStack_160 == 0) {
            func_0x0001080c2144();
            func_0x00010bf1c920();
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            func_0x0001080c1f24();
          }
          func_0x0001080c1d20();
          func_0x0001080c1f80();
          uVar1 = param_1;
          func_0x00010bf629e0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar1;
          func_0x0001080c20b0();
          func_0x0001080c1cc4();
          if (uVar3 != 0) {
            lVar6 = *uStack_120;
            do {
              uVar7 = 0;
              do {
                func_0x0001080c20a4();
                if (extraout_x8_00 != lVar6) {
                  _objc_enumerationMutation(uVar1);
                }
                uVar4 = *(ulong *)(uStack_128 + uVar7 * 8);
                func_0x00010c11f4c0();
                if (param_2 != 0) {
                  uVar5 = param_1;
                  func_0x00010bf62a60(param_1);
                  _objc_retainAutoreleasedReturnValue();
                  FUN_1080a009c();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar5);
                  func_0x00010bf62ac0(PTR_PTR_1126d93d8);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(uVar2);
                  func_0x0001080c1d30();
                  param_4 = param_2;
                  func_0x0001080c1ec4();
                  param_2 = uVar4;
                }
                uVar7 = uVar7 + 1;
                in_ZR = uVar7 == uVar3;
              } while (uVar7 < uVar3);
              func_0x0001080c20b0();
              uVar3 = uVar1;
              func_0x0001080c1cc4();
            } while (uVar3 != 0);
          }
          func_0x0001080c1d20();
          func_0x0001080c2058();
          func_0x00010bf26fc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          uVar2 = uStack_160;
          uVar1 = param_1;
        }
        func_0x0001080c1d18();
        param_1 = uVar2;
        goto LAB_1080bfac0;
      }
    }
    func_0x00010c1752e0(param_1);
  }
  func_0x00010bf26fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
LAB_1080bfac0:
  func_0x0001080c1ccc();
  func_0x0001080c1bd0(extraout_x8);
  if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
    return;
  }
  ___stack_chk_fail();
  uVar1 = param_2;
  _objc_retain(param_2);
  func_0x0001080c2144();
  _objc_opt_class();
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,uVar1);
  if (((uVar2 & 1) != 0) && (param_4 != 0)) {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf62ac0(PTR_PTR_1126d93d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar8);
    func_0x0001080c1d10();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1080bfcbc; end: 1080bfd43;  */

void FUN_1080bfcbc(long param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2;
  _objc_retain(param_2);
  func_0x0001080c2144();
  _objc_opt_class();
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,uVar1);
  if (((uVar2 & 1) != 0) && (param_4 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf62ac0(PTR_PTR_1126d93d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar3);
    func_0x0001080c1d10();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1080bfd44; end: 1080bff5f; -[SCValdiTextViewEffectsLayoutManager _drawStaticGlyphsForGlyphRange:atPoint:animationRanges:] */

void FUN_1080bfd44(undefined8 param_1,undefined *param_2,undefined8 *param_3,undefined *param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 auStack_170 [2];
  undefined8 auStack_160 [2];
  undefined8 auStack_150 [2];
  long *plStack_140;
  undefined8 auStack_110 [2];
  undefined auStack_100 [128];
  undefined8 uStack_80;
  
  puVar11 = param_5;
  func_0x0001080c1e48();
  func_0x0001080c1c44();
  uStack_80 = extraout_x8;
  func_0x0001080c1eb4();
  puVar3 = param_5;
  func_0x00010bf529e0();
  if (puVar3 == (undefined8 *)0x0) {
    func_0x0001080c1ed8();
    puVar5 = auStack_110;
    puVar3 = param_3;
    auStack_110[0] = param_1;
  }
  else {
    puVar8 = (undefined8 *)((long)param_3 + (long)param_4);
    func_0x0001080c1f80();
    func_0x0001080c1eec();
    puVar3 = auStack_150;
    puVar9 = auStack_100;
    puVar4 = param_5;
    func_0x0001080c1cc4();
    puVar13 = param_3;
    if (puVar4 == (undefined8 *)0x0) {
      bVar1 = true;
      puVar5 = (undefined8 *)0x0;
    }
    else {
      lVar14 = *plStack_140;
      do {
        puVar2 = PTR_s_drawGlyphsForGlyphRange_atPoint__1125bffd8;
        puVar12 = (undefined8 *)0x0;
        puVar5 = puVar4;
        do {
          func_0x0001080c20a4();
          puVar3 = puVar5;
          if (extraout_x8_00 != lVar14) {
            puVar3 = param_5;
            _objc_enumerationMutation();
          }
          func_0x0001080c1fd8();
          uVar6 = param_1;
          func_0x00010c26c860();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c08fa60();
          _NSIntersectionRange(puVar3,param_2,0,uVar6);
          puVar5 = puVar3;
          puVar9 = param_2;
          func_0x0001080c1ec4();
          bVar1 = param_2 != (undefined *)0x0;
          param_2 = puVar9;
          if (bVar1) {
            func_0x0001080c1eac(param_1);
            func_0x0001080c212c();
            puVar7 = param_3;
            puVar10 = param_4;
            _NSIntersectionRange();
            puVar5 = puVar7;
            param_2 = puVar10;
            if (puVar10 != (undefined *)0x0) {
              puVar9 = (undefined *)((long)puVar7 - (long)puVar13);
              if (puVar13 <= puVar7 && puVar9 != (undefined *)0x0) {
                func_0x0001080c1ed8();
                puVar5 = auStack_160;
                param_2 = puVar2;
                puVar3 = puVar13;
                auStack_160[0] = param_1;
                func_0x0001080c1d54(puVar5,puVar2,puVar13);
              }
              if (puVar13 <= (undefined8 *)((long)puVar7 + (long)puVar10)) {
                puVar13 = (undefined8 *)((long)puVar7 + (long)puVar10);
              }
              in_ZR = puVar13 == puVar8;
              if (puVar8 <= puVar13) {
                bVar1 = false;
                goto LAB_1080bfef8;
              }
            }
          }
          puVar12 = (undefined8 *)((long)puVar12 + 1);
          in_ZR = puVar12 == puVar4;
        } while (puVar12 < puVar4);
        puVar3 = auStack_150;
        puVar9 = auStack_100;
        puVar4 = param_5;
        func_0x0001080c1cc4();
      } while (puVar4 != (undefined8 *)0x0);
      bVar1 = true;
      puVar5 = (undefined8 *)0x0;
    }
LAB_1080bfef8:
    func_0x0001080c1d28();
    param_4 = puVar9;
    if (!bVar1) goto LAB_1080bff28;
    param_4 = (undefined *)((long)puVar8 - (long)puVar13);
    in_ZR = param_4 == (undefined *)0x0;
    if (puVar8 < puVar13 || (bool)in_ZR) goto LAB_1080bff28;
    func_0x0001080c1ed8();
    puVar5 = auStack_170;
    puVar3 = puVar13;
    auStack_170[0] = param_1;
  }
  func_0x0001080c1d54(puVar5,PTR_s_drawGlyphsForGlyphRange_atPoint__1125bffd8,puVar3);
LAB_1080bff28:
  func_0x0001080c1d28();
  func_0x0001080c1bd0(uStack_80);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001080c1e48();
    func_0x0001080c1eb4();
    puVar8 = puVar5;
    func_0x00010c26c860(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf62aa0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe0640();
    func_0x00010bf62aa0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e1c40();
    func_0x0001080c1d9c(puVar8,puVar5,puVar3,param_4,param_6,param_7,1);
    FUN_1080a0568();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080c1ec4();
    func_0x0001080c1ebc();
    func_0x0001080c1da8();
    func_0x00010c20e8c0(puVar11);
    func_0x0001080c1d10();
    FUN_1080a0980(param_8,puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar8);
    return;
  }
  return;
}



/* Entry: 1080bff60; end: 1080c0057; -[SCValdiTextViewEffectsLayoutManager _drawCustomUnderlineRange:color:glyphsToShow:glyphsOrigin:context:] */

void FUN_1080bff60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  func_0x0001080c1e48();
  func_0x0001080c1eb4();
  uVar1 = param_1;
  func_0x00010c26c860(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf62aa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0640();
  func_0x00010bf62aa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e1c40();
  func_0x0001080c1d9c(uVar1,param_1,param_3,param_4,param_6,param_7,1);
  FUN_1080a0568();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c1ec4();
  func_0x0001080c1ebc();
  func_0x0001080c1da8();
  func_0x00010c20e8c0(param_5);
  func_0x0001080c1d10();
  FUN_1080a0980(param_8,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080c0058; end: 1080c02cf; -[SCValdiTextViewEffectsLayoutManager _drawStaticCustomUnderline:animationRanges:glyphsToShow:glyphsOrigin:context:] */

void FUN_1080c0058(double param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6,undefined *param_7,undefined *param_8)

{
  bool bVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  double dVar17;
  double dVar18;
  double unaff_d8;
  double unaff_d9;
  double dVar19;
  double dVar20;
  undefined *apuStack_640 [2];
  undefined *apuStack_5b0 [2];
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  long *plStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_4d0;
  undefined auStack_400 [8];
  long lStack_3f8;
  long *plStack_3f0;
  undefined auStack_3c0 [128];
  undefined8 uStack_340;
  long lStack_2b8;
  long *plStack_2b0;
  
  func_0x0001080c1e48();
  puVar11 = param_4;
  puVar12 = param_5;
  puVar8 = param_7;
  func_0x0001080c1c44();
  func_0x0001080c1d08();
  _objc_retain(param_5);
  puVar3 = param_5;
  func_0x00010bf529e0();
  puVar4 = param_4;
  func_0x00010c11f2a0();
  puVar7 = param_3;
  if (puVar3 == (undefined *)0x0) {
    func_0x00010bf40c40();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080c1d9c(param_2);
    func_0x00010be06520();
  }
  else {
    puVar9 = puVar4 + (long)param_3;
    func_0x0001080c1f80();
    _objc_retain(param_5);
    func_0x0001080c20b0();
    puVar5 = param_5;
    func_0x0001080c1cc4();
    if (puVar5 == (undefined *)0x0) {
      bVar1 = true;
      puVar6 = (undefined *)0x0;
    }
    else {
      func_0x0001080c20a4();
      puVar15 = puVar4;
      do {
        puVar13 = (undefined *)0x0;
        do {
          func_0x0001080c20a4();
          if (extraout_x8_01 != extraout_x8_00) {
            _objc_enumerationMutation(param_5);
          }
          func_0x0001080c1fd8();
          func_0x0001080c212c();
          puVar6 = puVar4;
          puVar7 = param_3;
          _NSIntersectionRange();
          if (puVar7 != (undefined *)0x0) {
            func_0x0001080c20bc();
            puVar10 = puVar6 + -(long)puVar15;
            if (puVar15 <= puVar6 && puVar10 != (undefined *)0x0) {
              puVar6 = param_4;
              func_0x00010bf40c40();
              _objc_retainAutoreleasedReturnValue();
              puVar11 = puVar15;
              puVar8 = param_6;
              param_8 = param_7;
              func_0x0001080c1d9c(param_2);
              func_0x00010be06520();
              _objc_release();
              puVar12 = puVar10;
            }
            if (puVar15 <= puVar3 + (long)param_3) {
              puVar15 = puVar3 + (long)param_3;
            }
            in_ZR = puVar15 == puVar9;
            if (puVar9 <= puVar15) {
              bVar1 = false;
              puVar4 = puVar15;
              goto LAB_1080c0240;
            }
          }
          puVar13 = puVar13 + 1;
          in_ZR = puVar13 == puVar5;
        } while (puVar13 < puVar5);
        func_0x0001080c20b0();
        puVar5 = param_5;
        func_0x0001080c1cc4();
      } while (puVar5 != (undefined *)0x0);
      bVar1 = true;
      puVar6 = (undefined *)0x0;
      puVar4 = puVar15;
    }
LAB_1080c0240:
    func_0x0001080c1d30();
    if (!bVar1) goto LAB_1080c0294;
    param_3 = puVar9 + -(long)puVar4;
    in_ZR = param_3 == (undefined *)0x0;
    if (puVar9 < puVar4 || (bool)in_ZR) goto LAB_1080c0294;
    func_0x00010bf40c40();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080c1d9c(param_2);
    func_0x00010be06520();
  }
  _objc_release();
  puVar6 = param_4;
  puVar11 = puVar4;
  puVar12 = param_3;
  puVar8 = param_6;
  param_8 = param_7;
LAB_1080c0294:
  func_0x0001080c1d30();
  func_0x0001080c1db8();
  func_0x0001080c1bd0(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = param_8;
  func_0x0001080c1e48();
  puVar4 = puVar12;
  puVar9 = puVar8;
  func_0x0001080c1c44();
  func_0x0001080c1d08();
  func_0x0001080c1e9c();
  puVar3 = puVar6;
  func_0x00010bf62aa0();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar3 == (undefined *)0x0) || (func_0x0001080c1dc0(), puVar3 == (undefined *)0x0)) {
    func_0x0001080c1d30();
  }
  else {
    func_0x0001080c1d30();
    if (puVar8 != (undefined *)0x0) {
      _CGContextSaveGState(param_8);
      func_0x00010bf62aa0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe0640();
      _CGContextSetLineWidth(param_8);
      func_0x0001080c1d30();
      puVar7 = puVar6;
      func_0x00010bf62aa0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_8;
      FUN_1080a04d4();
      func_0x0001080c1d30();
      func_0x0001080c1fa0();
      func_0x0001080c1d38();
      func_0x0001080c1c24();
      if (puVar3 != (undefined *)0x0) {
        lVar14 = *plStack_2b0;
        do {
          puVar15 = (undefined *)0x0;
          do {
            func_0x0001080c1f2c();
            if (extraout_x8_03 != lVar14) {
              func_0x0001080c1ea4();
            }
            puVar11 = *(undefined **)(lStack_2b8 + (long)puVar15 * 8);
            puVar13 = puVar6;
            puVar4 = puVar12;
            puVar9 = puVar8;
            func_0x0001080c1d9c();
            puVar5 = param_8;
            func_0x00010be067e0();
            puVar15 = puVar15 + 1;
            in_ZR = puVar15 == puVar3;
          } while (puVar15 < puVar3);
          func_0x0001080c1c24();
          puVar3 = puVar13;
        } while (puVar13 != (undefined *)0x0);
      }
      func_0x0001080c1ccc();
      _CGContextRestoreGState();
      puVar3 = param_8;
    }
  }
  func_0x0001080c1d10();
  func_0x0001080c1ccc();
  func_0x0001080c1bd0(extraout_x8_02);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080c1e48();
  puVar8 = puVar3;
  puVar12 = puVar4;
  func_0x0001080c1c44();
  uStack_340 = extraout_x8_04;
  func_0x00010bf62aa0();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar8 == (undefined *)0x0) || (puVar4 == (undefined *)0x0)) {
    func_0x0001080c1bd0(uStack_340);
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
  }
  else {
    _objc_release();
    if (puVar9 != (undefined *)0x0) {
      func_0x0001080c2010();
      func_0x00010bf62aa0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe0640();
      _CGContextSetLineWidth(puVar5);
      func_0x0001080c1ccc();
      puVar7 = puVar3;
      func_0x00010bf62aa0();
      _objc_retainAutoreleasedReturnValue();
      FUN_1080a04d4(puVar5);
      func_0x0001080c1ccc();
      func_0x0001080c1f90();
      func_0x00010c26c860();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar3;
      func_0x00010bdf7a40();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080c1ccc();
      puVar11 = auStack_400;
      puVar12 = auStack_3c0;
      puVar9 = puVar8;
      func_0x0001080c1cc4();
      if (puVar9 != (undefined *)0x0) {
        lVar14 = *plStack_3f0;
        do {
          puVar11 = (undefined *)0x0;
          do {
            if (*plStack_3f0 != lVar14) {
              _objc_enumerationMutation(puVar8);
            }
            func_0x00010c11f2a0(*(undefined8 *)(lStack_3f8 + (long)puVar11 * 8));
            func_0x0001080c212c();
            puVar7 = puVar4;
            _NSIntersectionRange();
            if (puVar7 != (undefined *)0x0) {
              func_0x00010bf40c40();
              _objc_retainAutoreleasedReturnValue();
              func_0x0001080c1d9c(puVar3);
              func_0x00010be06520();
              func_0x0001080c1ebc();
            }
            puVar11 = puVar11 + 1;
            in_ZR = puVar11 == puVar9;
          } while (puVar11 < puVar9);
          puVar11 = auStack_400;
          puVar12 = auStack_3c0;
          puVar9 = puVar8;
          func_0x0001080c1cc4();
        } while (puVar9 != (undefined *)0x0);
      }
      func_0x0001080c1d30();
      _CGContextRestoreGState();
      puVar8 = puVar5;
    }
    func_0x0001080c1bd0(uStack_340);
    if ((bool)in_ZR) {
      return;
    }
  }
  uVar2 = 0;
  ___stack_chk_fail();
  func_0x0001080c1e48();
  func_0x0001080c1c44();
  uStack_4d0 = extraout_x8_05;
  func_0x0001080c1d08();
  puVar3 = puVar11;
  func_0x00010c11f2a0();
  puVar4 = puVar8;
  func_0x00010c26c860(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  _NSIntersectionRange(puVar3,puVar7,0,puVar4);
  puVar4 = puVar7;
  func_0x0001080c1db8();
  if (puVar7 != (undefined *)0x0) {
    func_0x00010c0e8ca0(puVar11);
    puVar9 = PTR_s_drawGlyphsForGlyphRange_atPoint__1125bffd8;
    uVar2 = param_1 == 0.0;
    if (0.0 < param_1) {
      puVar5 = puVar3;
      while (uVar2 = puVar5 == puVar3 + (long)puVar7, puVar5 < puVar3 + (long)puVar7) {
        func_0x0001080c1ecc();
        func_0x00010bfcd220();
        func_0x00010c099260(puVar8);
        puVar6 = puVar8;
        func_0x00010bf35a00();
        puVar5 = puVar3;
        puVar15 = puVar7;
        _NSIntersectionRange(puVar3,puVar7,puVar6,puVar4);
        if (puVar15 == (undefined *)0x0) {
          puVar5 = puVar6 + (long)puVar4;
          puVar4 = puVar15;
        }
        else {
          puVar6 = puVar5;
          puVar10 = puVar15;
          func_0x0001080c1fc0();
          func_0x0001080c1eac();
          puVar13 = puVar6;
          puVar4 = puVar10;
          func_0x0001080c1ecc();
          func_0x00010c26ba20();
          _objc_retainAutoreleasedReturnValue();
          func_0x0001080c1ecc();
          func_0x00010bf20b60();
          _CGRectIsEmpty();
          if (((ulong)puVar13 & 1) == 0) {
            func_0x0001080c20ec();
            _CGRectGetMidX();
            dVar20 = unaff_d9 + param_1;
            func_0x0001080c20ec();
            _CGRectGetMidY();
            dVar19 = unaff_d8 + param_1;
            _CGContextSaveGState(puVar12);
            func_0x00010c0e8ca0(puVar11);
            _CGContextSetAlpha(puVar12);
            func_0x00010c27ae20(puVar11);
            dVar17 = dVar20;
            _CGContextTranslateCTM(dVar20,dVar19 + param_1,puVar12);
            func_0x00010c14e120(puVar11);
            dVar18 = dVar17;
            func_0x00010c14e120(puVar11);
            _CGContextScaleCTM(dVar17,dVar18,puVar12);
            puVar4 = puVar12;
            _CGContextTranslateCTM(-dVar20,-dVar19);
            param_1 = 0.0;
            uStack_578 = 0;
            uStack_580 = 0;
            uStack_568 = 0;
            uStack_570 = 0;
            uStack_598 = 0;
            uStack_5a0 = 0;
            uStack_588 = 0;
            plStack_590 = (long *)0x0;
            func_0x0001080c1fc0();
            func_0x00010be6e900();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar4;
            func_0x0001080c1cc4();
            if (puVar13 != (undefined *)0x0) {
              lVar14 = *plStack_590;
              do {
                puVar16 = (undefined *)0x0;
                do {
                  if (*plStack_590 != lVar14) {
                    _objc_enumerationMutation(puVar4);
                  }
                  func_0x00010c26c860(puVar8);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x0001080c1d9c(puVar8);
                  func_0x00010be066c0();
                  func_0x0001080c1ebc();
                  puVar16 = puVar16 + 1;
                } while (puVar16 < puVar13);
                puVar13 = puVar4;
                func_0x0001080c1cc4();
              } while (puVar13 != (undefined *)0x0);
            }
            func_0x0001080c1d28();
            func_0x0001080c1ed8();
            puVar4 = puVar9;
            apuStack_5b0[0] = puVar8;
            func_0x0001080c1d54(apuStack_5b0,puVar9,puVar6,puVar10);
            func_0x0001080c1fc0();
            func_0x0001080c1d9c();
            func_0x00010be06540();
            _CGContextRestoreGState();
          }
          puVar5 = puVar5 + (long)puVar15;
          func_0x0001080c1d20();
        }
      }
    }
  }
  _objc_release();
  func_0x0001080c1bd0(uStack_4d0);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080c1e48();
  puVar3 = puVar11;
  func_0x0001080c1ed8();
  apuStack_640[0] = puVar3;
  _objc_msgSendSuper2(apuStack_640,PTR_s_drawBackgroundForGlyphRange_atPo_11253b4d8);
  puVar3 = puVar11;
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c2144();
  func_0x00010bf3ae40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080c1e8c();
  func_0x0001080c1d10();
  if (puVar3 != puVar8) {
    func_0x00010c26c860();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080c1f60();
    func_0x0001080c1e6c();
    func_0x0001080c1eac();
    func_0x0001080c20bc();
    func_0x0001080c1d10();
    func_0x0001080c1c84();
    puVar3 = puVar11;
    _objc_retain();
    func_0x0001080c1f00();
    func_0x00010bf97d80();
    func_0x0001080c20e0();
    func_0x00010be816a0();
    _UIGraphicsGetCurrentContext();
    _CGContextSaveGState();
    func_0x0001080c1d9c(puVar3);
    _CGContextTranslateCTM();
    func_0x00010bf51e00(puVar11);
    func_0x0001080c1ef4();
    func_0x00010be06680();
    func_0x0001080c1d28();
    _CGContextRestoreGState(puVar3);
    func_0x0001080c1f38();
    func_0x0001080c1d10();
  }
  return;
}


