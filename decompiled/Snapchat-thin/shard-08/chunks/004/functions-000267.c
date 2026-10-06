/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106097848; end: 1060978db; -[SCLensBitmojiCTAConfigCreator createChangeOutfitCTAConfig] */

void FUN_106097848(int param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010be41720();
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126c78e0;
    _objc_alloc(PTR_PTR_1126c78e0);
    puVar1 = puVar2;
    func_0x000108d397d0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0514a0(0x4008000000000000,0x4024000000000000,0,puVar2,param_2,puVar1,0,0xd5,0xd6,0,
                        0x1db,1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060978dc; end: 106097977; -[SCLensBitmojiCTAConfigCreator _isLensInAllowedCategory] */

uint FUN_1060978dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010c0da0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0988c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c0960e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf4b900(uVar3,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar3);
  return (uint)uVar1 ^ 1;
}



/* Entry: 106097978; end: 10609798f; -[SCLensBitmojiCTAConfigCreator bitmojiUserLinkingContentServices] */

void FUN_106097978(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106097990; end: 10609799b; -[SCLensBitmojiCTAConfigCreator setBitmojiUserLinkingContentServices:] */

void FUN_106097990(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 10609799c; end: 1060979a3; -[SCLensBitmojiCTAConfigCreator nglStudySettings] */

undefined8 FUN_10609799c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1060979a4; end: 1060979d3; -[SCLensBitmojiCTAConfigCreator setNglStudySettings:] */

void FUN_1060979a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060979d4; end: 1060979db; -[SCLensBitmojiCTAConfigCreator lensPrimaryCategory] */

undefined8 FUN_1060979d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1060979dc; end: 1060979e3; -[SCLensBitmojiCTAConfigCreator setLensPrimaryCategory:] */

void FUN_1060979dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1060979e4; end: 106097a1b; -[SCLensBitmojiCTAConfigCreator .cxx_destruct] */

void FUN_1060979e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106097a1c; end: 106097c5f; -[SCLensBitmojiController initWithLens:shouldRedirectToBitmojiApp:linkBitmojiCTAObservable:bitmojiCreationNavigator:lensDataFetcher:lensUserProvider:lensBitmojiAlertUIPresenter:] */

undefined8 *
FUN_106097a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_78 = PTR_PTR_1126ef7f8;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 3) = param_4;
    _objc_retain(param_6);
    uVar2 = puVar1[8];
    puVar1[8] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_initWeak(auStack_88,puVar1);
    uVar2 = puVar1[8];
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_106097c60;
    puStack_98 = &UNK_110849200;
    _objc_copyWeak(auStack_90,auStack_88);
    func_0x00010c09af40(uVar2);
    _objc_copyWeak(auStack_b8,auStack_88);
    uVar2 = param_5;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106097c60; end: 106097cdb;  */

void FUN_106097c60(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106097cdc; end: 106097ce7; -[SCLensBitmojiController dismissBitmojiCTA] */

void FUN_106097cdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe1850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_hideAnimated__1125d5fd0,0);
  return;
}



/* Entry: 106097ce8; end: 106097d63; -[SCLensBitmojiController isBitmojiAvailable] */

bool FUN_106097ce8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1c5a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar4 != 0;
}



/* Entry: 106097d64; end: 106097df7; -[SCLensBitmojiController shouldShowCTA] */

uint FUN_106097d64(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  lVar1 = param_1;
  func_0x00010c082be0();
  lVar3 = param_1;
  func_0x00010c094280();
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010c07f200();
  if ((uVar2 & 1) == 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    func_0x00010c07eda0();
    if ((uVar2 & 1) == 0) {
      uVar2 = *(ulong *)(param_1 + 8);
      func_0x00010c06f040();
      if (((uVar2 & 1) == 0) && ((((uint)lVar3 | *(byte *)(param_1 + 0x18) ^ 0xffffffff) & 1) == 0))
      {
        lVar3 = *(long *)(param_1 + 8);
        func_0x00010c281520(lVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = (uint)(lVar3 == 0) | (uint)lVar1;
        _objc_release();
        goto LAB_106097dc0;
      }
    }
  }
  uVar4 = 0;
LAB_106097dc0:
  return uVar4 & 1;
}



/* Entry: 106097df8; end: 106097e07; -[SCLensBitmojiController isValidBitmojiLensAttachmentUri] */

void FUN_106097df8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c082c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_isValidBitmojiLensAttachmentUri__1125fe510,
             *(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 106097e08; end: 106097e4f; -[SCLensBitmojiController lensHasDisclaimer] */

undefined8 FUN_106097e08(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c2949e0();
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    func_0x00010c081a80();
    if ((uVar1 & 1) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010c07b7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_isPublicPromptLens_1125fc7f8);
      return uVar2;
    }
  }
  return 1;
}



/* Entry: 106097e50; end: 106098067; -[SCLensBitmojiController _onLoadedBitmoji:] */

void FUN_106097e50(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  puVar7 = param_3;
  func_0x00010c281520();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010bf67c00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar6;
  func_0x00010c28f280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar6);
  _objc_release(lVar1);
  if (lVar9 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    _objc_alloc();
    puVar3 = *(undefined **)(param_1 + 8);
    func_0x00010c281520();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf67c00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c28f280();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c04e820();
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar2;
    _objc_release(uVar8);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  lVar6 = param_1;
  func_0x00010c233440();
  if ((int)lVar6 != 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    lVar6 = *(long *)(param_1 + 8);
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010c06d400();
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x00010c112da0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = (undefined *)0x1;
    func_0x00010c235da0(uVar10,param_2,1,lVar6,lVar9,uVar8,*(undefined8 *)(param_1 + 0x10));
    _objc_release(uVar8);
    _objc_release();
  }
  if (((int)param_3 != 0) && (lVar9 = *(long *)(param_1 + 8), lVar9 != 0)) {
    lVar6 = *(long *)(param_1 + 0x28);
    _objc_retain(lVar9);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_50 = lVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_50,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    puVar7 = puVar2;
    func_0x00010bfa7f80(lVar6,param_2,puVar2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  puVar2 = puVar7;
  func_0x00010bf8cda0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar6 + 8);
  func_0x00010c094540(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c0720c0(puVar2,param_2,uVar8);
  _objc_release(uVar8);
  _objc_release(puVar2);
  if ((int)puVar4 != 0) {
    puVar2 = puVar7;
    func_0x00010beef1e0();
    if (puVar2 == (undefined *)0x4) {
      func_0x00010bfe1840(*(undefined8 *)(lVar6 + 0x38),param_2,1);
    }
    else if (puVar2 == (undefined *)0x3) {
      uVar11 = *(undefined8 *)(lVar6 + 0x38);
      uVar8 = *(undefined8 *)(lVar6 + 8);
      func_0x00010c094540(uVar8);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar6;
      func_0x00010c06d400(lVar6);
      uVar10 = *(undefined8 *)(lVar6 + 8);
      func_0x00010c112da0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c235da0(uVar11,param_2,1,uVar8,(uint)lVar9 ^ 1,uVar10,
                          *(undefined8 *)(lVar6 + 0x10));
      _objc_release(uVar10);
      _objc_release(uVar8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 106098068; end: 10609817b; -[SCLensBitmojiController _handleLinkBitmojiCTAEvent:] */

void FUN_106098068(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf8cda0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c094540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0720c0(lVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
    lVar1 = param_3;
    func_0x00010beef1e0();
    if (lVar1 == 4) {
      func_0x00010bfe1840(*(undefined8 *)(param_1 + 0x38),param_2,1);
    }
    else if (lVar1 == 3) {
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c094540(uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010c06d400(param_1);
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c112da0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c235da0(uVar5,param_2,1,uVar2,(uint)lVar1 ^ 1,uVar4,
                          *(undefined8 *)(param_1 + 0x10));
      _objc_release(uVar4);
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10609817c; end: 1060981e7; -[SCLensBitmojiController .cxx_destruct] */

void FUN_10609817c(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060981e8; end: 1060982eb; -[SCLensBitmojiCTAModel initWithText:imageURL:iconColor:buttonColor:style:delayTimeout:dismissTimeout:imageSideMargin:icon:shouldTrackImpressions:] */

undefined1 *
FUN_1060981e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_78 = PTR_PTR_1126ef800;
  uStack_80 = param_4;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_8;
    *(undefined8 *)((long)puVar1 + 0x28) = param_9;
    *(undefined8 *)((long)puVar1 + 0x30) = param_10;
    *(undefined8 *)((long)puVar1 + 0x38) = param_1;
    *(undefined8 *)((long)puVar1 + 0x40) = param_2;
    *(undefined8 *)((long)puVar1 + 0x48) = param_3;
    *(undefined8 *)((long)puVar1 + 0x50) = param_11;
    *(undefined1 *)((long)puVar1 + 8) = param_12;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 1060982ec; end: 10609830f; -[SCLensBitmojiCTAModel copyWithZone:] */

undefined8 FUN_1060982ec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106098310; end: 106098407; -[SCLensBitmojiCTAModel hash] */

undefined8 * FUN_106098310(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = uVar3;
  func_0x00010bfde980();
  uStack_68 = *(undefined8 *)(param_1 + 0x20);
  lVar7 = *(long *)(param_1 + 0x28);
  lStack_60 = -lVar7;
  if (-1 < lVar7) {
    lStack_60 = lVar7;
  }
  uStack_58 = *(undefined8 *)(param_1 + 0x30);
  uVar8 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_50 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar8 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_48 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_40 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uStack_38 = *(undefined8 *)(param_1 + 0x50);
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar5 = &uStack_78;
  uStack_70 = uVar4;
  func_0x000100505190(puVar5,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == param_3) {
LAB_106098578:
    puVar9 = (undefined8 *)0x1;
  }
  else {
    puVar9 = (undefined8 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106098584;
    puVar9 = puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((ulong)puVar6 & 1) != 0) &&
       ((((puVar5[4] == param_3[4] && (puVar5[5] == param_3[5])) && (puVar5[6] == param_3[6])) &&
        ((puVar5[10] == param_3[10] && (*(char *)(puVar5 + 1) == *(char *)(param_3 + 1))))))) {
      dVar11 = ABS((double)puVar5[7] - (double)param_3[7]);
      dVar10 = ABS((double)puVar5[7] + (double)param_3[7]) * 2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10))) {
        bVar2 = dVar11 < dVar10;
      }
      if (bVar2) {
        dVar10 = ABS((double)puVar5[8] - (double)param_3[8]);
        if ((dVar10 < 2.2250738585072014e-308) ||
           (dVar10 < ABS((double)puVar5[8] + (double)param_3[8]) * 2.220446049250313e-16)) {
          dVar10 = ABS((double)puVar5[9] - (double)param_3[9]);
          if (((dVar10 < 2.2250738585072014e-308) ||
              (dVar10 < ABS((double)puVar5[9] + (double)param_3[9]) * 2.220446049250313e-16)) &&
             ((lVar7 = puVar5[2], lVar7 == param_3[2] || (func_0x00010c071ae0(), (int)lVar7 != 0))))
          {
            puVar9 = (undefined8 *)puVar5[3];
            if (puVar9 != (undefined8 *)param_3[3]) {
              func_0x00010c071ae0();
              goto LAB_106098584;
            }
            goto LAB_106098578;
          }
        }
      }
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_106098584:
  _objc_release(param_3);
  return puVar9;
}



/* Entry: 106098408; end: 10609859f; -[SCLensBitmojiCTAModel isEqual:] */

long FUN_106098408(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106098578:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106098584;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
          (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
         (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
        ((*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
      dVar5 = ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar5 = ABS(*(double *)(param_1 + 0x40) - *(double *)(param_3 + 0x40));
        if ((dVar5 < 2.2250738585072014e-308) ||
           (dVar5 < ABS(*(double *)(param_1 + 0x40) + *(double *)(param_3 + 0x40)) *
                    2.220446049250313e-16)) {
          dVar5 = ABS(*(double *)(param_1 + 0x48) - *(double *)(param_3 + 0x48));
          if (((dVar5 < 2.2250738585072014e-308) ||
              (dVar5 < ABS(*(double *)(param_1 + 0x48) + *(double *)(param_3 + 0x48)) *
                       2.220446049250313e-16)) &&
             ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
            lVar4 = *(long *)(param_1 + 0x18);
            if (lVar4 != *(long *)(param_3 + 0x18)) {
              func_0x00010c071ae0();
              goto LAB_106098584;
            }
            goto LAB_106098578;
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_106098584:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1060985a0; end: 1060985a7; -[SCLensBitmojiCTAModel text] */

undefined8 FUN_1060985a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1060985a8; end: 1060985af; -[SCLensBitmojiCTAModel imageURL] */

undefined8 FUN_1060985a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1060985b0; end: 1060985b7; -[SCLensBitmojiCTAModel iconColor] */

undefined8 FUN_1060985b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1060985b8; end: 1060985bf; -[SCLensBitmojiCTAModel buttonColor] */

undefined8 FUN_1060985b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1060985c0; end: 1060985c7; -[SCLensBitmojiCTAModel style] */

undefined8 FUN_1060985c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1060985c8; end: 1060985cf; -[SCLensBitmojiCTAModel delayTimeout] */

undefined8 FUN_1060985c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1060985d0; end: 1060985d7; -[SCLensBitmojiCTAModel dismissTimeout] */

undefined8 FUN_1060985d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1060985d8; end: 1060985df; -[SCLensBitmojiCTAModel imageSideMargin] */

undefined8 FUN_1060985d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1060985e0; end: 1060985e7; -[SCLensBitmojiCTAModel icon] */

undefined8 FUN_1060985e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1060985e8; end: 1060985ef; -[SCLensBitmojiCTAModel shouldTrackImpressions] */

undefined1 FUN_1060985e8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1060985f0; end: 10609861f; -[SCLensBitmojiCTAModel .cxx_destruct] */

void FUN_1060985f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106098620; end: 106098697; -[SCFeatureMicrophoneModeIndicationKVOObserver initWithOnUpdateBlock:] */

undefined1 * FUN_106098620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ef808;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106098698; end: 10609873f; -[SCFeatureMicrophoneModeIndicationKVOObserver observeValueForKeyPath:ofObject:change:context:] */

void FUN_106098698(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  if (param_6 != PTR_LOOP_11313c9f8) {
    puStack_38 = PTR_PTR_1126ef808;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_observeValueForKeyPath_ofObject__112615e88);
    return;
  }
  func_0x00010c0e00e0(param_5,param_2,*(undefined8 *)PTR__NSKeyValueChangeNewKey_110345500);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010c067fc0();
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010609873c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),uVar1);
  return;
}



/* Entry: 106098740; end: 10609874b; -[SCFeatureMicrophoneModeIndicationKVOObserver .cxx_destruct] */

void FUN_106098740(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10609874c; end: 1060989c7; -[SCFeatureMicrophoneModeIndicationImpl initCircumstanceEngine:userPreferences:uiContainer:viewControllerLifecycleEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10609874c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_78 = PTR_PTR_1126ef810;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11273e654;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11273e658;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11273e65c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11273e660;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    _objc_initWeak(auStack_88,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1060989c8;
    puStack_98 = &UNK_11090b888;
    _objc_copyWeak(auStack_90,auStack_88);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273e664);
    *(undefined **)((long)puVar1 + (long)_DAT_11273e664) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_b8,auStack_88);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273e668);
    *(undefined **)((long)puVar1 + (long)_DAT_11273e668) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273e66c);
    *(undefined **)((long)puVar1 + (long)_DAT_11273e66c) = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1060989c8; end: 106098a47;  */

void FUN_1060989c8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdea9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106098a48; end: 106098a7b;  */

void FUN_106098a48(void)

{
  _objc_alloc(PTR_PTR_1126ae790);
  func_0x00010c021520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106098a7c; end: 106098aeb; -[SCFeatureMicrophoneModeIndicationImpl dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106098a7c(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273e668);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be46ae0(param_1);
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126ef810;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106098aec; end: 106098b1f; -[SCFeatureMicrophoneModeIndicationImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106098aec(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11273e670) = 1;
  func_0x00010beae200();
                    /* WARNING: Could not recover jumptable at 0x00010be7c870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentMicrophoneModeAlertIfNee_11257cbb8);
  return;
}



/* Entry: 106098b20; end: 106098b43; -[SCFeatureMicrophoneModeIndicationImpl resetMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106098b20(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_11273e674) = 0;
  *(undefined8 *)(param_1 + _DAT_11273e678) = 0;
  *(undefined8 *)(param_1 + _DAT_11273e67c) = 0;
  return;
}



/* Entry: 106098b44; end: 106098c73; -[SCFeatureMicrophoneModeIndicationImpl usageMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106098b44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110e3cbb8;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(undefined8 *)(param_1 + _DAT_11273e674));
  _objc_retainAutoreleasedReturnValue();
  ppuStack_70 = &PTR____CFConstantStringClassReference_110e3cbd8;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_60 = puVar1;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e3cbf8;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_58 = puVar2;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar5 = puVar1;
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_88 = FUN_106098c74;
    puStack_b0 = puVar3;
    puStack_a8 = puVar2;
    puStack_a0 = puVar1;
    puStack_98 = puVar4;
    puStack_90 = &stack0xfffffffffffffff0;
    _objc_initWeak(auStack_b8,puVar5);
    puVar1 = PTR_PTR_1126c78e8;
    _objc_alloc(PTR_PTR_1126c78e8);
    _objc_copyWeak(auStack_c0,auStack_b8);
    func_0x00010c0318e0(puVar1);
    puVar4 = PTR_PTR_1126b0a08;
    _objc_alloc(PTR_PTR_1126b0a08);
    func_0x00010c055660();
    func_0x00010c219d60();
    func_0x00010c201b60(puVar4);
    func_0x00010c167420(puVar4);
    func_0x00010c219e20(puVar4);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106098c74; end: 106098d9f; -[SCFeatureMicrophoneModeIndicationImpl _createAlertTray] */

void FUN_106098c74(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126c78e8;
  _objc_alloc(PTR_PTR_1126c78e8);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0318e0(puVar1);
  puVar2 = PTR_PTR_1126b0a08;
  _objc_alloc(PTR_PTR_1126b0a08);
  func_0x00010c055660();
  func_0x00010c219d60();
  func_0x00010c201b60(puVar2);
  func_0x00010c167420(puVar2);
  func_0x00010c219e20(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106098da0; end: 106098daf;  */

void FUN_106098da0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23a610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0,PTR_s_showSystemUserInterface__11266c3a8,2)
  ;
  return;
}



/* Entry: 106098db0; end: 106098ddf;  */

void FUN_106098db0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be038e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106098de0; end: 106098ebb; -[SCFeatureMicrophoneModeIndicationImpl _createKVOObserver] */

void FUN_106098de0(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126c78f8;
  _objc_alloc(PTR_PTR_1126c78f8);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c031920(puVar1);
  func_0x00010be46ac0(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106098ebc; end: 106098f6b;  */

void FUN_106098ebc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  lVar1 = param_1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,param_1 + 0x20);
  uStack_38 = param_2;
  func_0x00010c0f7fc0(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 106098f6c; end: 106098f9f;  */

void FUN_106098f6c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7c880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106098fa0; end: 106098fe3; -[SCFeatureMicrophoneModeIndicationImpl _dismissTray:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106098fa0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273e664);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106098fe4; end: 10609900f; -[SCFeatureMicrophoneModeIndicationImpl _incrementDismissCountsWithActiveMicrophoneMode:] */

void FUN_106098fe4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0x24;
  if (param_3 != 2) {
    lVar1 = 0x28;
  }
  *(long *)(param_1 + *(int *)(&DAT_11273e654 + lVar1)) =
       *(long *)(param_1 + *(int *)(&DAT_11273e654 + lVar1)) + 1;
  return;
}



/* Entry: 106099010; end: 1060990b7; -[SCFeatureMicrophoneModeIndicationImpl _kvoObseverBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106099010(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273e66c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1060990b8;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_48);
  _objc_release(uVar1);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1060990b8; end: 1060990df;  */

void FUN_1060990b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0,
             PTR_s_addObserver_forKeyPath_options_c_11259c230,*(undefined8 *)(param_1 + 0x20),
             &PTR____CFConstantStringClassReference_110e3cb78,1,PTR_LOOP_11313c9f8);
  return;
}



/* Entry: 1060990e0; end: 10609918b; -[SCFeatureMicrophoneModeIndicationImpl _kvoObseverEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060990e0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11273e66c);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10609918c;
    puStack_30 = &UNK_110842e18;
    _objc_retain(param_3);
    lStack_28 = param_3;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_48);
    _objc_release(uVar1);
    _objc_release(lStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10609918c; end: 1060991af;  */

void FUN_10609918c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0,
             PTR_s_removeObserver_forKeyPath_contex_112628f88,*(undefined8 *)(param_1 + 0x20),
             &PTR____CFConstantStringClassReference_110e3cb78,PTR_LOOP_11313c9f8);
  return;
}



/* Entry: 1060991b0; end: 10609927f; -[SCFeatureMicrophoneModeIndicationImpl _presentMicrophoneModeAlertIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060991b0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273e66c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106099280; end: 10609933b;  */

void FUN_106099280(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0;
  func_0x00010bef0cc0();
  puVar2 = puVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,param_1 + 0x20);
  puStack_38 = puVar1;
  func_0x00010c0f7fc0(puVar2);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 10609933c; end: 10609936f;  */

void FUN_10609933c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7c880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106099370; end: 10609948b; -[SCFeatureMicrophoneModeIndicationImpl _presentMicrophoneModeAlertIfNeededWithActiveMicrophoneMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106099370(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((param_3 == 2) || (*(char *)(param_1 + _DAT_11273e680) != '\x01')) {
    if (((*(byte *)(param_1 + _DAT_11273e684) & 1) == 0) &&
       ((*(char *)(param_1 + _DAT_11273e670) == '\x01' && (param_3 == 2)))) {
      lVar4 = (long)_DAT_11273e680;
      if (((*(byte *)(param_1 + lVar4) & 1) == 0) &&
         (lVar2 = param_1, func_0x00010beb48c0(), (int)lVar2 != 0)) {
        *(long *)(param_1 + _DAT_11273e674) = *(long *)(param_1 + _DAT_11273e674) + 1;
        *(undefined1 *)(param_1 + lVar4) = 1;
        uVar3 = *(undefined8 *)(param_1 + _DAT_11273e664);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c10c6a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar3);
        return;
      }
    }
  }
  else {
    func_0x00010be038e0(param_1,param_2,1);
    puVar1 = PTR_PTR_1126c7900;
    func_0x00010c13a020();
    if ((int)puVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be928d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetCooldownPeriod_1125823d0);
      return;
    }
  }
  return;
}



/* Entry: 10609948c; end: 10609949b; -[SCFeatureMicrophoneModeIndicationImpl _setIsRecording:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609948c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11273e684) = param_3;
  return;
}



/* Entry: 10609949c; end: 1060995db; -[SCFeatureMicrophoneModeIndicationImpl _setupMicrophoneModeIndication] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609949c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if ((*(byte *)(param_1 + _DAT_11273e688) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_11273e688) = 1;
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273e68c);
    *(undefined **)(param_1 + _DAT_11273e68c) = puVar1;
    _objc_release(uVar2);
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273e660);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273e690);
    *(undefined8 *)(param_1 + _DAT_11273e690) = 0;
    _objc_release(uVar2);
    func_0x00010bf57500(*(undefined8 *)(param_1 + _DAT_11273e668));
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 1060995dc; end: 10609969f;  */

void FUN_1060995dc(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c15c0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1060996a0; end: 1060996af;  */

void FUN_1060996a0(void)

{
  return;
}



/* Entry: 1060996b0; end: 1060996db;  */

void FUN_1060996b0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee9480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060996dc; end: 1060996eb; -[SCFeatureMicrophoneModeIndicationImpl _viewDidDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060996dc(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11273e670) = 0;
  return;
}



/* Entry: 1060996ec; end: 106099733; -[SCFeatureMicrophoneModeIndicationImpl _resetCooldownPeriod] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060996ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273e65c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106099734; end: 10609979f; -[SCFeatureMicrophoneModeIndicationImpl _saveLastAlertDate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106099734(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273e65c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110e3cb98);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060997a0; end: 1060998af; -[SCFeatureMicrophoneModeIndicationImpl _shouldNotify] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1060997a0(double param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  bool bVar6;
  
  uVar1 = *(ulong *)(param_2 + _DAT_11273e65c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if ((uVar1 == 0) || (puVar3 = PTR_PTR_1126c7900, func_0x00010c06f780(), ((ulong)puVar3 & 1) != 0))
  {
    bVar6 = true;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    puVar5 = PTR_PTR_1126c7900;
    func_0x00010bf51aa0();
    bVar6 = (double)(long)puVar5 < param_1;
    _objc_release(puVar3);
  }
  _objc_release(uVar1);
  return bVar6;
}



/* Entry: 1060998b0; end: 1060998c7; -[SCFeatureMicrophoneModeIndicationImpl tray:heightForPosition:] */

undefined8 FUN_1060998b0(void)

{
  long in_x3;
  undefined8 uVar1;
  
  uVar1 = 0x4081b80000000000;
  if (in_x3 != 8) {
    uVar1 = 0xbff0000000000000;
  }
  return uVar1;
}



/* Entry: 1060998c8; end: 1060998d7; -[SCFeatureMicrophoneModeIndicationImpl tray:positionDidChange:] */

void FUN_1060998c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010c27b2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_trayDidDismiss__11267c6d0);
    return;
  }
  return;
}



/* Entry: 1060998d8; end: 106099a03; -[SCFeatureMicrophoneModeIndicationImpl trayDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060998d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11273e680;
  if (*(char *)(param_1 + lVar2) == '\x01') {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_11273e66c);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(uVar1);
    func_0x00010bf6f440(*(undefined8 *)(param_1 + _DAT_11273e658));
    *(undefined1 *)(param_1 + lVar2) = 0;
    func_0x00010be99420(param_1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106099a04; end: 106099abf;  */

void FUN_106099a04(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0;
  func_0x00010bef0cc0();
  puVar2 = puVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,param_1 + 0x20);
  puStack_38 = puVar1;
  func_0x00010c0f7fc0(puVar2);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 106099ac0; end: 106099af3;  */

void FUN_106099ac0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be383c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106099af4; end: 106099c5b; -[SCFeatureMicrophoneModeIndicationImpl beginObservingVideoCaptureEvents:imageCaptureEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106099af4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11273e694);
  *(undefined **)(param_1 + _DAT_11273e694) = puVar1;
  _objc_release(uVar4);
  puVar2 = auStack_58;
  _objc_initWeak(puVar2,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0e0ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar3 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106099c5c; end: 106099daf;  */

void FUN_106099c5c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106099db0;
  puStack_70 = &UNK_11084ec30;
  _objc_copyWeak(auStack_68,param_1 + 0x20);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_106099eb8;
  puStack_98 = &UNK_11090b9a8;
  _objc_copyWeak(auStack_90,param_1 + 0x20);
  _objc_copyWeak(auStack_b8,param_1 + 0x20);
  func_0x00010c0bd6a0(param_2);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_2);
  return;
}



/* Entry: 106099db0; end: 106099e87;  */

void FUN_106099db0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106099e88; end: 106099eb7;  */

void FUN_106099e88(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea4e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106099eb8; end: 106099fa3;  */

void FUN_106099eb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106099fa4; end: 106099fd3;  */

void FUN_106099fa4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea4e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106099fd4; end: 10609a0bf;  */

void FUN_106099fd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10609a0c0; end: 10609a0ef;  */

void FUN_10609a0c0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea4e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10609a0f0; end: 10609a1af; -[SCFeatureMicrophoneModeIndicationImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609a0f0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273e68c,0);
  _objc_storeStrong(param_1 + _DAT_11273e660,0);
  _objc_storeStrong(param_1 + _DAT_11273e690,0);
  _objc_storeStrong(param_1 + _DAT_11273e66c,0);
  _objc_storeStrong(param_1 + _DAT_11273e668,0);
  _objc_storeStrong(param_1 + _DAT_11273e664,0);
  _objc_storeStrong(param_1 + _DAT_11273e65c,0);
  _objc_storeStrong(param_1 + _DAT_11273e658,0);
  _objc_storeStrong(param_1 + _DAT_11273e694,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273e654,0);
  return;
}



/* Entry: 10609a1b0; end: 10609a317; -[SCFeatureMicrophoneModeLoggingImpl beginObservingVideoCaptureEvents:imageCaptureEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609a1b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11273e6a0);
  *(undefined **)(param_1 + _DAT_11273e6a0) = puVar1;
  _objc_release(uVar4);
  puVar2 = auStack_58;
  _objc_initWeak(puVar2,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0e0ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar3 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10609a318; end: 10609a3db;  */

void FUN_10609a318(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd6a0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10609a3dc; end: 10609a4c3;  */

void FUN_10609a3dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  func_0x00010c2775c0(puVar1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10609a4c4; end: 10609a4ef;  */

void FUN_10609a4c4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be56100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10609a4f0; end: 10609a5a3; -[SCFeatureMicrophoneModeLoggingImpl _logMicrophoneMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609a4f0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0;
  func_0x00010c106d60();
  func_0x00010bef0cc0(PTR__OBJC_CLASS___AVCaptureDevice_1126c78f0);
  lVar1 = (long)_DAT_11273e69c;
  uVar3 = *(undefined8 *)(param_1 + _DAT_11273e698);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162960();
  _objc_release(uVar4);
  _objc_release(uVar3);
  *(undefined **)(param_1 + lVar1) = puVar2;
  return;
}



/* Entry: 10609a5a4; end: 10609a5e3; -[SCFeatureMicrophoneModeLoggingImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609a5a4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273e6a0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273e698,0);
  return;
}



/* Entry: 10609a5e4; end: 10609a69f; -[SCFeatureMicrophoneModeVoiceIsolationAlert initWithOnUpdateAction:onDismissAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10609a5e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ef820;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273e6a4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273e6a4) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273e6a8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273e6a8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10609a6a0; end: 10609b4c3; -[SCFeatureMicrophoneModeVoiceIsolationAlert viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609a6a0(undefined8 param_1,double param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  double dVar25;
  undefined8 uVar26;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
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
  puStack_130 = PTR_PTR_1126ef820;
  uStack_138 = param_3;
  _objc_msgSendSuper2(&uStack_138,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  func_0x00010c219b60();
  uVar3 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  puVar17 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  puStack_a0 = puVar6;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar2;
  puStack_98 = puVar10;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  dVar25 = 195.0;
  puVar12 = puVar11;
  func_0x00010bf49420(0x4068600000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar2;
  puStack_90 = puVar12;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar2;
  func_0x00010bfe0660(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0(puVar1);
  func_0x00010c23d0a0(puVar1);
  puVar15 = puVar13;
  func_0x00010bf493e0(dVar25 / param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126aea58;
  _objc_opt_new();
  func_0x00010c1cfce0();
  puVar17 = puVar4;
  func_0x00010c181cc0(0x447a0000,puVar4);
  FUN_1060acd4c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar4);
  _objc_release(puVar17);
  func_0x00010c21ad00(puVar4);
  func_0x00010c1bdb00(puVar4);
  func_0x00010c213040(puVar4);
  func_0x00010c219b60(puVar4);
  uVar3 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  puVar17 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar6 = puVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar6;
  func_0x00010bf493c0(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar4;
  puStack_b8 = puVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar4;
  puStack_b0 = puVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a8 = puVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar17);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar18 = PTR_PTR_1126b0ac8;
  _objc_opt_new();
  func_0x00010c1f7b20();
  uVar26 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  puVar6 = puVar18;
  func_0x00010c2131e0(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,uVar26,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18));
  func_0x0001060acd64();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar6;
  func_0x0001060acd7c();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_c0 = puVar17;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110e3cc78;
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212fe0(puVar18);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar17);
  _objc_release(puVar6);
  func_0x00010c181cc0(0x447a0000,puVar18);
  func_0x00010c181f00(0x443b8000,puVar18);
  func_0x00010c219b60(puVar18);
  func_0x00010c213040(puVar18);
  func_0x00010c193a00(puVar18);
  func_0x00010c21ad00(puVar18);
  uVar3 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  puVar17 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar7 = puVar18;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar7;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar18;
  puStack_e0 = puVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar6;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar18;
  puStack_d8 = puVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_d0 = puVar14;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar17);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(puVar6);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar7);
  func_0x00010c08cdc0(puVar18);
  puVar17 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar6 = puVar18;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4d5e0(puVar18);
  puVar7 = puVar6;
  func_0x00010bf49420(uVar26);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_e8 = puVar7;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar17);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar19 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181cc0(0x447a0000);
  func_0x00010c219b60(puVar19);
  puVar17 = puVar19;
  func_0x00010c20eaa0(puVar19);
  func_0x0001060acdac();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(puVar19);
  _objc_release(puVar17);
  func_0x00010c1d3960(puVar19);
  uVar3 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  puVar17 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar12 = puVar19;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar18;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  func_0x00010bf49480(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar19;
  puStack_100 = puVar14;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar15;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar19;
  puStack_f8 = puVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_f0 = puVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar17);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(uVar9);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  puVar6 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181cc0(0x447a0000);
  func_0x00010c219b60(puVar6);
  puVar17 = puVar6;
  func_0x00010c20eaa0();
  func_0x0001060acd94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(puVar6);
  _objc_release(puVar17);
  func_0x00010c1d3960(puVar6);
  uVar3 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar3);
  puVar17 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar7 = puVar6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar19;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar7;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar6;
  puStack_128 = puVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar6;
  puStack_120 = puVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar6;
  puStack_118 = puVar15;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = param_3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar16;
  func_0x00010bf493c0(0xc038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar6;
  puStack_110 = puVar20;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar19;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar21;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_108 = puVar23;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar17);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(uVar26);
  _objc_release(param_3);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + _DAT_11273e6a4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + _DAT_11273e6a8,0);
  return;
}



/* Entry: 10609b4c4; end: 10609b503; -[SCFeatureMicrophoneModeVoiceIsolationAlert .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609b4c4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273e6a4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273e6a8,0);
  return;
}



/* Entry: 10609b504; end: 10609b95b; -[SCFeaturePortraitEffectAlertImpl initWithCircumstanceEngine:userPreferences:captureDeviceManager:simpleFeatureGatingConfiguration:notificationManager:uiContainer:viewControllerLifecycleEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10609b504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_80 = PTR_PTR_1126ef828;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar10 = (long)_DAT_11273e6ac;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = param_3;
    _objc_release(uVar2);
    lVar10 = (long)_DAT_11273e6b0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = param_4;
    _objc_release(uVar2);
    lVar12 = (long)_DAT_11273e6b4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_5;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_11273e6b8;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_6;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_11273e6bc;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_7;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_11273e6c0;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_8;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_11273e6c4;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b7008;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273e6c8);
    *(undefined **)((long)puVar1 + (long)_DAT_11273e6c8) = puVar3;
    _objc_release(uVar2);
    uVar4 = *(ulong *)((long)puVar1 + lVar10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar3);
    uVar4 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar5);
    uVar5 = uVar4;
    func_0x00010c067fc0();
    *(ulong *)((long)puVar1 + (long)_DAT_11273e6cc) = uVar5;
    _objc_initWeak(auStack_90,puVar1);
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273e6d0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273e6d0) = 0;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10609b95c;
    puStack_a0 = &UNK_11090b888;
    _objc_copyWeak(auStack_98,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273e6d4);
    *(undefined **)((long)puVar1 + (long)_DAT_11273e6d4) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273e6d8);
    *(undefined **)((long)puVar1 + (long)_DAT_11273e6d8) = puVar3;
    _objc_release(uVar2);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar12);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010bf2fa00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010bfbb1e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar7);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar8;
    func_0x00010c0e0ec0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_c0,auStack_90);
    uVar9 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar9);
    _objc_release(uVar2);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_c0);
    _objc_release(uVar8);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
    _objc_release(uVar4);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10609b95c; end: 10609b99b;  */

void FUN_10609b95c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf3480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10609b99c; end: 10609b9fb;  */

void FUN_10609b99c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010be2e3e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10609b9fc; end: 10609bb1f; -[SCFeaturePortraitEffectAlertImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609b9fc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273e6b4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf2fa00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c080820();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (((int)uVar4 != 0) && ((*(byte *)(param_1 + _DAT_11273e6dc) & 1) == 0)) {
    puVar5 = PTR_PTR_1126c7908;
    func_0x00010beff700();
    iVar1 = (int)puVar5;
    if (iVar1 - 1U < 2) {
      func_0x0001085ab340(*(undefined8 *)(param_1 + _DAT_11273e6c8),1);
      lVar6 = param_1;
      func_0x00010beb48c0();
      if ((int)lVar6 != 0) {
        if (iVar1 == 1) {
          func_0x00010beba080(param_1);
        }
        else {
          if ((*(byte *)(param_1 + _DAT_11273e6e0) & 1) != 0) {
            return;
          }
          func_0x00010bebaee0(param_1);
        }
        *(long *)(param_1 + _DAT_11273e6e4) = (long)iVar1;
        func_0x00010be99420(param_1);
        func_0x00010be38860(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010beadbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,PTR_s__setupLifecycleObservationIfNeed_112589090);
        return;
      }
    }
  }
  return;
}



/* Entry: 10609bb20; end: 10609bbaf; -[SCFeaturePortraitEffectAlertImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609bb20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273e6b8);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c142ea0();
  *(char *)(param_1 + _DAT_11273e6e8) = (char)uVar1;
  _objc_release(uVar2);
  _objc_storeWeak(param_1 + _DAT_11273e6ec,param_3);
  _objc_release(param_3);
  *(undefined1 *)(param_1 + _DAT_11273e6f0) = 0;
  *(undefined8 *)(param_1 + _DAT_11273e6f4) = 0;
  return;
}



/* Entry: 10609bbb0; end: 10609bbb3; -[SCFeaturePortraitEffectAlertImpl resetMetrics] */

void FUN_10609bbb0(void)

{
  return;
}



/* Entry: 10609bbb4; end: 10609bc67; -[SCFeaturePortraitEffectAlertImpl usageMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609bbb4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(undefined8 *)(param_1 + _DAT_11273e6cc));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1370;
  func_0x00010c25d500(PTR_PTR_1126b1370);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar3);
  func_0x0001060acdc4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar3);
  func_0x0001060acddc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar3);
  func_0x00010c1d0640(puVar2);
  puVar3 = PTR_PTR_1126b1370;
  _objc_alloc();
  puVar4 = puVar2;
  func_0x00010bf51e00(puVar2);
  func_0x00010c030320();
  uVar6 = *(undefined8 *)(puVar1 + _DAT_11273e6f8);
  *(undefined **)(puVar1 + _DAT_11273e6f8) = puVar3;
  _objc_release(uVar6);
  _objc_release(puVar4);
  uVar6 = *(undefined8 *)(puVar1 + _DAT_11273e6bc);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa0a0();
  _objc_release(uVar6);
  func_0x0001085ab3b8(*(undefined8 *)(puVar1 + _DAT_11273e6c8),
                      &PTR____CFConstantStringClassReference_110e3cd18,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10609bc68; end: 10609bdf3; -[SCFeaturePortraitEffectAlertImpl _showNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10609bc68(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1370;
  func_0x00010c25d500(PTR_PTR_1126b1370);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar2);
  func_0x0001060acdc4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar2);
  func_0x0001060acddc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar2);
  func_0x00010c1d0640(puVar1);
  puVar2 = PTR_PTR_1126b1370;
  _objc_alloc();
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010c030320();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11273e6f8);
  *(undefined **)(param_1 + _DAT_11273e6f8) = puVar2;
  _objc_release(uVar4);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11273e6bc);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa0a0();
  _objc_release(uVar4);
  func_0x0001085ab3b8(*(undefined8 *)(param_1 + _DAT_11273e6c8),
                      &PTR____CFConstantStringClassReference_110e3cd18,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


