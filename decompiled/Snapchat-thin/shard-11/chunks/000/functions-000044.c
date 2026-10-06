/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1080aeab0; end: 1080aeaf7; -[SCValdiTextAnimationGroupDisplayLinkProxy forwardInvocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080aeab0(void)

{
  long unaff_x20;
  long lVar1;
  
  func_0x0001080af5e0();
  lVar1 = (long)_DAT_1127744a4;
  func_0x0001080af5a0();
  lVar1 = unaff_x20 + lVar1;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c06ae40();
  func_0x0001080af600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1080aeaf8; end: 1080aeb43; -[SCValdiTextAnimationGroupDisplayLinkProxy methodSignatureForSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080aeaf8(long param_1)

{
  param_1 = param_1 + _DAT_1127744a4;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0cca80();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080af56c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1080aeb44; end: 1080aeb53; -[SCValdiTextAnimationGroupDisplayLinkProxy .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080aeb44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127744a4);
  return;
}



/* Entry: 1080aeb54; end: 1080aebe7; -[SCValdiTextAnimationGroup initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1080aeb54(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fc620;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c2a2b60(PTR__OBJC_CLASS___NSHashTable_1126b4538);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080af588();
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x0001080af588();
    _objc_opt_new(PTR_PTR_1126d9338);
    func_0x0001080af588();
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1080aebe8; end: 1080aec23; -[SCValdiTextAnimationGroup dealloc] */

void FUN_1080aebe8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bec39e0();
  puStack_28 = PTR_PTR_1126fc620;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1080aec24; end: 1080aed5b; -[SCValdiTextAnimationGroup willEnqueueIntoValdiPool] */

void FUN_1080aec24(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar4;
  ulong uVar5;
  ulong uStack_140;
  undefined *puStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_48;
  
  func_0x0001080af5c0();
  uStack_48 = extraout_x8;
  func_0x00010bec39e0();
  func_0x0001080af5b0();
  uVar2 = param_1;
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080af5a8();
  func_0x0001080af658();
  func_0x0001080af554();
  if (uVar2 != 0) {
    lVar4 = *plStack_100;
    do {
      uVar5 = 0;
      do {
        func_0x0001080af640();
        if (extraout_x8_00 != lVar4) {
          func_0x0001080af5d0();
        }
        uVar3 = *(ulong *)(lStack_108 + uVar5 * 8);
        func_0x00010c2956c0();
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar2);
      func_0x0001080af658();
      func_0x0001080af554();
      uVar2 = uVar3;
    } while (uVar3 != 0);
  }
  func_0x0001080af56c();
  func_0x00010c0f4aa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080af5ec();
  func_0x0001080af56c();
  func_0x00010c0ecc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080af5ec();
  func_0x0001080af56c();
  uVar2 = param_1;
  func_0x00010c26b820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c138bc0();
  func_0x0001080af56c();
  _objc_opt_class();
  uVar5 = param_1;
  func_0x0001080af5f4();
  bVar1 = param_1 == uVar5;
  uVar5 = (ulong)bVar1;
  func_0x0001080af574(uStack_48);
  if (bVar1) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_1080aed5c;
  puStack_138 = PTR_PTR_1126fc620;
  uStack_140 = uVar5;
  uStack_130 = uVar2;
  uStack_128 = param_1;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&uStack_140,PTR_s_layoutSubviews_112600e60);
  func_0x00010be86ac0(uVar5);
  return;
}



/* Entry: 1080aed5c; end: 1080aed9b; -[SCValdiTextAnimationGroup layoutSubviews] */

void FUN_1080aed5c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fc620;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010be86ac0(param_1);
  return;
}



/* Entry: 1080aed9c; end: 1080aee17; -[SCValdiTextAnimationGroup registerTextAnimationParticipant:] */

void FUN_1080aed9c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x0001080af5a0();
    func_0x00010c0f4aa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    func_0x0001080af5a8();
    func_0x00010c26b820(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c295680(param_3);
    func_0x0001080af56c();
    func_0x0001080af5a8();
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
    return;
  }
  return;
}



/* Entry: 1080aee18; end: 1080aee73; -[SCValdiTextAnimationGroup unregisterTextAnimationParticipant:] */

void FUN_1080aee18(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x0001080af5a0();
    func_0x00010c0f4aa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360();
    func_0x0001080af5a8();
    func_0x00010c2956c0(param_3);
    func_0x0001080af56c();
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
    return;
  }
  return;
}



/* Entry: 1080aee74; end: 1080aef5f; -[SCValdiTextAnimationGroup startTextAnimationFrameLoopIfNeeded] */

void FUN_1080aee74(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x00010c1cbe20();
  lVar1 = param_1;
  func_0x00010bf85b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
  if (lVar1 != 0) {
    return;
  }
  puVar2 = PTR_PTR_1126d9348;
  _objc_alloc(PTR_PTR_1126d9348);
  func_0x00010c0508e0();
  func_0x00010bf85b60(puVar3,param_2,puVar2,PTR_s__textAnimationDisplayLinkDidFire_11253b4a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18fc00(param_1,param_2,puVar3);
  func_0x0001080af56c();
  func_0x0001080af5a8();
  func_0x00010bf85b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc2c0(param_1,param_2,puVar3,*(undefined8 *)PTR__NSRunLoopCommonModes_11034aaa8);
  func_0x0001080af56c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1080aef60; end: 1080aef9b; -[SCValdiTextAnimationGroup _stopTextAnimationFrameLoop] */

void FUN_1080aef60(undefined8 param_1)

{
  func_0x00010bf85b20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069d00();
  func_0x0001080af56c();
                    /* WARNING: Could not recover jumptable at 0x00010c18fc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setDisplayLink__112641920,0);
  return;
}



/* Entry: 1080aef9c; end: 1080af117; -[SCValdiTextAnimationGroup _textAnimationDisplayLinkDidFire:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1080aef9c(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x8_03;
  long extraout_x8_04;
  undefined1 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plStack_4e0;
  long lStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined1 auStack_2c8 [128];
  undefined8 uStack_248;
  long lStack_1d8;
  long *plStack_1d0;
  
  func_0x0001080af5c0();
  func_0x00010c08cdc0();
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = param_1;
  func_0x00010c26b820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c138bc0();
  func_0x0001080af5a8();
  func_0x0001080af62c();
  func_0x0001080af554();
  lVar7 = lRam0000000000000000;
  while (puVar9 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        func_0x0001080af5d0();
      }
      puVar1 = *(undefined8 **)((long)puVar6 * 8);
      func_0x00010c295820();
      puVar6 = (undefined8 *)((long)puVar6 + 1);
      in_ZR = puVar6 == puVar9;
    } while (puVar6 < puVar9);
    func_0x0001080af554();
    puVar9 = puVar1;
  }
  puVar9 = (undefined8 *)0x0;
  func_0x0001080af56c();
  func_0x0001080af5b0();
  func_0x0001080af62c();
  func_0x0001080af64c();
  func_0x0001080af554();
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0001080af56c();
  }
  else {
    uVar5 = 0;
    lVar7 = *plStack_1d0;
    do {
      puVar6 = (undefined8 *)0x0;
      do {
        func_0x0001080af640();
        if (extraout_x8_00 != lVar7) {
          func_0x0001080af5d0();
        }
        puVar1 = *(undefined8 **)(lStack_1d8 + (long)puVar6 * 8);
        func_0x00010c295760();
        uVar5 = (uint)puVar1 | uVar5;
        puVar6 = (undefined8 *)((long)puVar6 + 1);
        in_ZR = puVar6 == puVar9;
      } while (puVar6 < puVar9);
      func_0x0001080af64c();
      func_0x0001080af554();
      puVar9 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    func_0x0001080af56c();
    if ((uVar5 & 1) != 0) goto LAB_1080af0e8;
  }
  func_0x00010bec39e0();
  puVar1 = param_1;
LAB_1080af0e8:
  func_0x0001080af56c();
  func_0x0001080af574(extraout_x8);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x0001080af5c0();
  uStack_248 = extraout_x8_01;
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080af5ec();
  func_0x0001080af56c();
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  plStack_380 = (long *)0x0;
  puVar6 = puVar1;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = &uStack_390;
  puVar3 = auStack_2c8;
  func_0x0001080af598();
  if (puVar6 != (undefined8 *)0x0) {
    lVar7 = *plStack_380;
    do {
      puVar9 = (undefined8 *)0x0;
      do {
        if (*plStack_380 != lVar7) {
          func_0x0001080af5d0();
        }
        puVar10 = puVar1;
        func_0x00010c0ecc20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bde1c60(puVar1);
        _objc_release();
        puVar9 = (undefined8 *)((long)puVar9 + 1);
        in_ZR = puVar9 == puVar6;
      } while (puVar9 < puVar6);
      puVar9 = &uStack_390;
      puVar3 = auStack_2c8;
      func_0x0001080af554();
      puVar6 = puVar10;
    } while (puVar10 != (undefined8 *)0x0);
  }
  func_0x0001080af56c();
  func_0x0001080af5b0();
  puVar6 = puVar1;
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080af64c();
  func_0x0001080af598();
  if (puVar6 != (undefined8 *)0x0) {
    puVar4 = (undefined1 *)0x0;
    lVar7 = *plStack_3c0;
    do {
      puVar10 = (undefined8 *)0x0;
      do {
        func_0x0001080af640();
        if (extraout_x8_02 != lVar7) {
          func_0x0001080af5d0();
        }
        puVar8 = *(undefined8 **)(lStack_3c8 + (long)puVar10 * 8);
        puVar2 = puVar1;
        func_0x00010c26b820();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar2;
        puVar3 = puVar4;
        func_0x00010c295680(puVar8);
        _objc_release(puVar2);
        func_0x00010c296560();
        puVar4 = (undefined1 *)((long)puVar8 + (long)puVar4);
        puVar10 = (undefined8 *)((long)puVar10 + 1);
        in_ZR = puVar10 == puVar6;
      } while (puVar10 < puVar6);
      func_0x0001080af64c();
      func_0x0001080af554();
      puVar6 = puVar8;
    } while (puVar8 != (undefined8 *)0x0);
  }
  puVar6 = (undefined8 *)0x0;
  func_0x0001080af56c();
  func_0x0001080af574(uStack_248);
  if ((bool)in_ZR) {
    return puVar6;
  }
  ___stack_chk_fail();
  puVar1 = puVar6;
  func_0x0001080af5c0();
  func_0x0001080af5a0();
  func_0x0001080af62c();
  func_0x0001080af5f4();
  puVar10 = puVar9;
  _objc_opt_isKindOfClass(puVar9,puVar1);
  if (((ulong)puVar10 & 1) == 0) {
    _objc_retain(puVar9);
    puVar1 = puVar6;
    func_0x00010c0f4aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010bf4b900();
    _objc_release(puVar1);
    if ((int)puVar10 != 0) {
      func_0x00010befa120(puVar3);
    }
    func_0x0001080af5b0();
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar9;
    func_0x0001080af658();
    func_0x0001080af598();
    if (puVar1 != (undefined8 *)0x0) {
      lVar7 = *plStack_4e0;
      do {
        puVar10 = (undefined8 *)0x0;
        do {
          func_0x0001080af640();
          if (extraout_x8_04 != lVar7) {
            _objc_enumerationMutation(puVar9);
          }
          func_0x00010bde1c60(puVar6);
          puVar10 = (undefined8 *)((long)puVar10 + 1);
          in_ZR = puVar10 == puVar1;
        } while (puVar10 < puVar1);
        func_0x0001080af658();
        puVar1 = puVar9;
        func_0x0001080af598();
      } while (puVar1 != (undefined8 *)0x0);
    }
    _objc_release();
    func_0x0001080af600();
    puVar10 = puVar9;
  }
  func_0x0001080af56c();
  func_0x0001080af600();
  func_0x0001080af574(extraout_x8_03);
  if ((bool)in_ZR) {
    return puVar10;
  }
  ___stack_chk_fail();
  return *(undefined8 **)((long)puVar10 + (long)_DAT_1127744b0);
}



/* Entry: 1080af118; end: 1080af2db; -[SCValdiTextAnimationGroup _rebuildOrderedParticipantsAndApplyBaseIndexes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1080af118(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plStack_300;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_e8 [128];
  undefined8 uStack_68;
  
  func_0x0001080af5c0();
  uStack_68 = extraout_x8;
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080af5ec();
  func_0x0001080af56c();
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  puVar1 = param_1;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = &uStack_1b0;
  puVar2 = auStack_e8;
  func_0x0001080af598();
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = *plStack_1a0;
    do {
      puVar6 = (undefined8 *)0x0;
      do {
        if (*plStack_1a0 != lVar5) {
          func_0x0001080af5d0();
        }
        puVar8 = param_1;
        func_0x00010c0ecc20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bde1c60(param_1);
        _objc_release();
        puVar6 = (undefined8 *)((long)puVar6 + 1);
        in_ZR = puVar6 == puVar1;
      } while (puVar6 < puVar1);
      puVar6 = &uStack_1b0;
      puVar2 = auStack_e8;
      func_0x0001080af554();
      puVar1 = puVar8;
    } while (puVar8 != (undefined8 *)0x0);
  }
  func_0x0001080af56c();
  func_0x0001080af5b0();
  puVar1 = param_1;
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080af64c();
  func_0x0001080af598();
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = (undefined1 *)0x0;
    lVar5 = *plStack_1e0;
    do {
      puVar8 = (undefined8 *)0x0;
      do {
        func_0x0001080af640();
        if (extraout_x8_00 != lVar5) {
          func_0x0001080af5d0();
        }
        puVar4 = *(undefined8 **)(lStack_1e8 + (long)puVar8 * 8);
        puVar7 = param_1;
        func_0x00010c26b820();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar7;
        puVar2 = puVar3;
        func_0x00010c295680(puVar4);
        _objc_release(puVar7);
        func_0x00010c296560();
        puVar3 = (undefined1 *)((long)puVar4 + (long)puVar3);
        puVar8 = (undefined8 *)((long)puVar8 + 1);
        in_ZR = puVar8 == puVar1;
      } while (puVar8 < puVar1);
      func_0x0001080af64c();
      func_0x0001080af554();
      puVar1 = puVar4;
    } while (puVar4 != (undefined8 *)0x0);
  }
  puVar1 = (undefined8 *)0x0;
  func_0x0001080af56c();
  func_0x0001080af574(uStack_68);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar8 = puVar1;
  func_0x0001080af5c0();
  func_0x0001080af5a0();
  func_0x0001080af62c();
  func_0x0001080af5f4();
  puVar7 = puVar6;
  _objc_opt_isKindOfClass(puVar6,puVar8);
  if (((ulong)puVar7 & 1) == 0) {
    _objc_retain(puVar6);
    puVar8 = puVar1;
    func_0x00010c0f4aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar8;
    func_0x00010bf4b900();
    _objc_release(puVar8);
    if ((int)puVar7 != 0) {
      func_0x00010befa120(puVar2);
    }
    func_0x0001080af5b0();
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x0001080af658();
    func_0x0001080af598();
    if (puVar8 != (undefined8 *)0x0) {
      lVar5 = *plStack_300;
      do {
        puVar7 = (undefined8 *)0x0;
        do {
          func_0x0001080af640();
          if (extraout_x8_02 != lVar5) {
            _objc_enumerationMutation(puVar6);
          }
          func_0x00010bde1c60(puVar1);
          puVar7 = (undefined8 *)((long)puVar7 + 1);
          in_ZR = puVar7 == puVar8;
        } while (puVar7 < puVar8);
        func_0x0001080af658();
        puVar8 = puVar6;
        func_0x0001080af598();
      } while (puVar8 != (undefined8 *)0x0);
    }
    _objc_release();
    func_0x0001080af600();
    puVar7 = puVar6;
  }
  func_0x0001080af56c();
  func_0x0001080af600();
  func_0x0001080af574(extraout_x8_01);
  if ((bool)in_ZR) {
    return puVar7;
  }
  ___stack_chk_fail();
  return *(undefined8 **)((long)puVar7 + (long)_DAT_1127744b0);
}



/* Entry: 1080af2dc; end: 1080af423; -[SCValdiTextAnimationGroup _collectParticipantsInView:output:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1080af2dc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar4;
  ulong uVar5;
  undefined8 uStack_110;
  
  uVar1 = param_1;
  func_0x0001080af5c0();
  func_0x0001080af5a0();
  func_0x0001080af62c();
  func_0x0001080af5f4();
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,uVar1);
  if ((uVar2 & 1) == 0) {
    _objc_retain(param_3);
    uVar1 = param_1;
    func_0x00010c0f4aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf4b900();
    _objc_release(uVar1);
    if ((int)uVar3 != 0) {
      func_0x00010befa120(param_4);
    }
    func_0x0001080af5b0();
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x0001080af658();
    func_0x0001080af598();
    if (uVar2 != 0) {
      lVar4 = *uStack_110;
      do {
        uVar5 = 0;
        do {
          func_0x0001080af640();
          if (extraout_x8_00 != lVar4) {
            _objc_enumerationMutation(param_3);
          }
          func_0x00010bde1c60(param_1);
          uVar5 = uVar5 + 1;
          in_ZR = uVar5 == uVar2;
        } while (uVar5 < uVar2);
        func_0x0001080af658();
        uVar2 = param_3;
        func_0x0001080af598();
      } while (uVar2 != 0);
    }
    _objc_release();
    func_0x0001080af600();
    uVar2 = param_3;
  }
  func_0x0001080af56c();
  func_0x0001080af600();
  func_0x0001080af574(extraout_x8);
  if ((bool)in_ZR) {
    return uVar2;
  }
  ___stack_chk_fail();
  return *(ulong *)(uVar2 + (long)_DAT_1127744b0);
}



/* Entry: 1080af424; end: 1080af42f; -[SCValdiTextAnimationGroup textAnimationCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080af424(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127744b0);
}



/* Entry: 1080af430; end: 1080af45b; -[SCValdiTextAnimationGroup setTextAnimationCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080af430(void)

{
  func_0x0001080af5e0();
  func_0x0001080af5a0();
  func_0x0001080af634();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080af45c; end: 1080af467; -[SCValdiTextAnimationGroup participants] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080af45c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127744a8);
}



/* Entry: 1080af468; end: 1080af493; -[SCValdiTextAnimationGroup setParticipants:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080af468(void)

{
  func_0x0001080af5e0();
  func_0x0001080af5a0();
  func_0x0001080af634();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080af494; end: 1080af49f; -[SCValdiTextAnimationGroup orderedParticipants] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080af494(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127744ac);
}



/* Entry: 1080af4a0; end: 1080af4cb; -[SCValdiTextAnimationGroup setOrderedParticipants:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080af4a0(void)

{
  func_0x0001080af5e0();
  func_0x0001080af5a0();
  func_0x0001080af634();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080af4cc; end: 1080af4d7; -[SCValdiTextAnimationGroup displayLink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080af4cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127744b4);
}



/* Entry: 1080af4d8; end: 1080af503; -[SCValdiTextAnimationGroup setDisplayLink:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080af4d8(void)

{
  func_0x0001080af5e0();
  func_0x0001080af5a0();
  func_0x0001080af634();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080af504; end: 1080af553; -[SCValdiTextAnimationGroup .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080af504(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127744b4,0);
  func_0x0001080af608((long)_DAT_1127744ac);
  func_0x0001080af608((long)_DAT_1127744a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127744b0,0);
  return;
}



/* Entry: 1080af554; end: 1080af663;  */

void FUN_1080af554(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf52a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1080af664; end: 1080af787; -[SCValdiTextField initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1080af664(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 auStack_40 [2];
  undefined1 *puVar3;
  
  puVar2 = auStack_40;
  func_0x0001080b2494();
  auStack_40[0] = param_1;
  _objc_msgSendSuper2(auStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010befbd60(puVar2);
    func_0x00010c165e00(puVar2);
    *(undefined1 *)((long)puVar2 + (long)_DAT_1127744bc) = 1;
    func_0x00010c1edbe0(puVar2);
    puVar3 = (undefined1 *)puVar2;
    func_0x00010c18b5e0();
    iVar1 = (int)puVar3;
    *(undefined8 *)((long)puVar2 + (long)_DAT_1127744c0) = 0;
    *(undefined8 *)((long)puVar2 + (long)_DAT_1127744c4) = 0;
    *(undefined1 *)((long)puVar2 + (long)_DAT_1127744c8) = 1;
    func_0x0001080b2474();
    if (iVar1 != 0) {
      func_0x00010c1ad0c0(puVar2);
    }
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080b24d0(PTR__UIApplicationDidBecomeActiveNotification_1103459f8);
    func_0x0001080b2360();
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080b24d0(PTR__UIWindowDidBecomeKeyNotification_110345e78);
    func_0x0001080b2360();
  }
  return (undefined1 *)puVar2;
}



/* Entry: 1080af788; end: 1080af7b7; -[SCValdiTextField layoutSubviews] */

void FUN_1080af788(undefined8 param_1)

{
  func_0x0001080b25d4();
  func_0x0001080b2494();
  func_0x0001080b25e4(param_1,PTR_s_layoutSubviews_112600e60);
  return;
}



/* Entry: 1080af7b8; end: 1080af80b; -[SCValdiTextField sizeThatFits:] */

void FUN_1080af7b8(undefined8 param_1,undefined8 param_2)

{
  func_0x0001080b25d4();
  func_0x0001080b2494();
  _objc_msgSendSuper2(param_1,param_2,&stack0xffffffffffffffc0,PTR_s_sizeThatFits__11266cf90);
  return;
}



/* Entry: 1080af80c; end: 1080af843; -[SCValdiTextField didMoveToWindow] */

void FUN_1080af80c(undefined8 param_1)

{
  func_0x0001080b2494();
  func_0x0001080b25e4();
  func_0x00010bdce660(param_1);
  return;
}



/* Entry: 1080af844; end: 1080af8ef; -[SCValdiTextField _applicationDidBecomeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080af844(long param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(char *)(param_1 + _DAT_1127744b8) == '\x01') {
    _objc_initWeak(auStack_28,param_1);
    func_0x0001080b2608(0x1080af8c8,0xc2000000);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x0001080b252c();
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 1080af8f0; end: 1080af953; -[SCValdiTextField _windowDidBecomeKey:] */

void FUN_1080af8f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long unaff_x21;
  
  func_0x00010c0dfc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a71e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080b25dc();
  func_0x0001080b2360();
  if (param_3 != unaff_x21) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdce670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__applyPendingFocusedIfNeeded_112551338);
  return;
}



/* Entry: 1080af954; end: 1080af9d7; -[SCValdiTextField _applyPendingFocusedIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080af954(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127744b8;
  if (*(char *)(param_1 + lVar3) == '\x01') {
    uVar1 = param_1;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) {
      uVar1 = param_1;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c075e80();
      uVar2 = uVar1;
      func_0x0001080b2360();
      if (((int)uVar1 != 0) &&
         ((func_0x0001080b25cc(), (uVar2 & 1) != 0 ||
          (uVar1 = param_1, func_0x00010bf179a0(), (int)uVar1 != 0)))) {
        *(undefined1 *)(param_1 + lVar3) = 0;
      }
    }
  }
  return;
}



/* Entry: 1080af9d8; end: 1080af9db; -[SCValdiTextField convertPoint:fromView:] */

void FUN_1080af9d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2956f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_valdi_convertPoint_fromView__112682fe0);
  return;
}



/* Entry: 1080af9dc; end: 1080af9df; -[SCValdiTextField convertPoint:toView:] */

void FUN_1080af9dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c295710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_valdi_convertPoint_toView__112682fe8);
  return;
}



/* Entry: 1080af9e0; end: 1080afaaf; -[SCValdiTextField hitTest:withEvent:] */

void FUN_1080af9e0(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 **ppuVar1;
  long unaff_x21;
  undefined1 *apuStack_50 [2];
  
  ppuVar1 = apuStack_50;
  func_0x0001080b2378();
  func_0x00010c2953a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080b25dc();
  if (unaff_x21 == 0) {
    func_0x0001080b2494();
    apuStack_50[0] = param_3;
    _objc_msgSendSuper2(param_1,param_2,apuStack_50,PTR_s_hitTest_withEvent__1125d6850,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2953a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080b2504();
    func_0x00010c295740(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080b2370();
    ppuVar1 = (undefined1 **)param_3;
  }
  func_0x0001080b2368();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1080afab0; end: 1080afab7; -[SCValdiTextField willEnqueueIntoValdiPool] */

undefined8 FUN_1080afab0(void)

{
  return 0;
}



/* Entry: 1080afab8; end: 1080afaff; -[SCValdiTextField setSelectedTextRange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080afab8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 auStack_30 [2];
  
  uVar1 = param_1;
  func_0x0001080b2494();
  auStack_30[0] = uVar1;
  _objc_msgSendSuper2(auStack_30,PTR_s_setSelectedTextRange__11265c7a8);
  func_0x0001080b242c((long)_DAT_1127744cc);
  func_0x00010c0dd580(param_1);
  return;
}



/* Entry: 1080afb00; end: 1080afb6f;  */

void FUN_1080afb00(long param_1)

{
  _objc_retain();
  func_0x0001080b23c8();
  if (param_1 != 0) {
    func_0x00010b97f424();
    FUN_1080afed8();
    func_0x0001080b2488();
    func_0x00010c0f9540();
    func_0x0001080b24c0();
  }
  func_0x0001080b2360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1080afb70; end: 1080afbb3; -[SCValdiTextField deleteBackward] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080afb70(long param_1)

{
  FUN_1080afb00(*(undefined8 *)(param_1 + _DAT_1127744d0),param_1);
  func_0x0001080b2494();
  func_0x0001080b25e4();
  return;
}



/* Entry: 1080afbb4; end: 1080afed7; -[SCValdiTextField onChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080afbb4(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = (long)_DAT_1127744d4;
  if (*(long *)(param_1 + lVar5) != 0) {
    uVar2 = param_1;
    func_0x00010b97f424();
    FUN_1080afed8();
    iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
    func_0x00010c0f9040();
    if ((iVar1 != 0) &&
       (uVar3 = uVar2, func_0x00010b97fd24(uVar2,0xffffffffffffffff), (int)uVar3 != 0)) {
      FUN_1080b20f8();
      func_0x0001080b2420();
      func_0x00010b97fc3c(uVar2,0xffffffffffffffff);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080b2504();
      func_0x00010b97fd84();
      func_0x0001080b215c();
      func_0x0001080b2420();
      func_0x0001080b25a4();
      func_0x00010b97fd84();
      func_0x0001080b21c0();
      func_0x0001080b2420();
      func_0x0001080b25a4();
      func_0x00010b97fd84(uVar2);
      uVar2 = param_1;
      func_0x00010be625e0();
      if ((uVar2 & 1) == 0) {
        lVar6 = (long)_DAT_1127744d8;
        func_0x0001080b24e0();
        uVar4 = *(undefined8 *)(param_1 + lVar6);
        *(long *)(param_1 + lVar6) = lVar5;
        _objc_release(uVar4);
        func_0x0001080b2488();
        func_0x00010c212f20();
        *(undefined1 *)(param_1 + (long)_DAT_1127744c8) = 1;
      }
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      func_0x0001080b2380();
      func_0x00010bf193c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080b261c();
      func_0x00010c1042e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080b261c();
      func_0x00010c1042e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080b25f4();
      func_0x00010c26c600();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fb600(param_1);
      func_0x0001080b23d0();
      func_0x0001080b2380();
      func_0x0001080b2388();
      func_0x0001080b23a4();
      func_0x0001080b2370();
    }
    func_0x0001080b24f4();
  }
  uVar2 = param_1;
  func_0x00010be625e0();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + (long)_DAT_1127744d8);
    *(ulong *)(param_1 + (long)_DAT_1127744d8) = uVar2;
    _objc_release(uVar4);
    *(undefined1 *)(param_1 + (long)_DAT_1127744c8) = 1;
    func_0x00010bed3500(param_1);
  }
  func_0x00010c0dd600(param_1);
  func_0x0001080b242c((long)_DAT_1127744dc);
                    /* WARNING: Could not recover jumptable at 0x00010c069ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invalidateLayout_1125f8208);
  return;
}



/* Entry: 1080afed8; end: 1080affff;  */

undefined8 FUN_1080afed8(undefined8 param_1,undefined **param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  func_0x0001080b246c();
  func_0x00010bf193c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010b97f5e4(param_1,1);
  ppuVar2 = param_2;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar3 = ppuVar2;
  }
  func_0x00010b97f738(param_1,ppuVar3);
  func_0x0001080b2388();
  FUN_1080b20f8();
  func_0x0001080b23ac();
  ppuVar3 = param_2;
  func_0x00010c15a1e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24d960();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080b2458();
  func_0x00010b97f8e0(param_1,ppuVar3);
  func_0x0001080b2380();
  func_0x0001080b2388();
  func_0x0001080b215c();
  func_0x0001080b23ac();
  func_0x00010c15a1e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf940a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080b2458();
  func_0x0001080b23a4();
  func_0x00010b97f8e0(param_1,param_2);
  func_0x0001080b2380();
  func_0x0001080b2388();
  func_0x0001080b21c0();
  func_0x0001080b23ac();
  func_0x0001080b2360();
  return uVar1;
}



/* Entry: 1080b0000; end: 1080b007b; -[SCValdiTextField computeTextValue:] */

void FUN_1080b0000(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x22;
  
  uVar1 = param_1;
  func_0x0001080b2378();
  func_0x0001080b23e0();
  func_0x0001080b24b0();
  if (((*(long *)(param_1 + unaff_x22) != 0) && (-1 < (long)uVar1)) &&
     (uVar2 = param_3, func_0x00010c08fa60(), uVar1 < uVar2)) {
    func_0x0001080b24e8();
    func_0x00010c260c80();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080b2368();
    param_3 = uVar2;
  }
  func_0x0001080b2368();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1080b007c; end: 1080b00ff; -[SCValdiTextField computeAttributedStringValue:] */

void FUN_1080b007c(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x22;
  
  puVar1 = param_1;
  func_0x0001080b2378();
  func_0x0001080b23e0();
  func_0x0001080b24b0();
  puVar3 = param_3;
  if (((*(long *)(param_1 + unaff_x22) != 0) && (-1 < (long)puVar1)) &&
     (puVar2 = param_3, func_0x00010c08fa60(), puVar1 < puVar2)) {
    puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    func_0x00010c27c560(PTR__OBJC_CLASS___NSAttributedString_1126af068,param_2,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080b2368();
  }
  func_0x0001080b2368();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1080b0100; end: 1080b01bb; -[SCValdiTextField notifyTextValueDidChange] */

void FUN_1080b0100(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137291c8 != -1) {
    func_0x000107c27d9c(0x1137291c8,&PTR___NSConcreteGlobalBlock_110a1ca40);
  }
  func_0x00010c2954e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080b261c();
  func_0x0001080b256c();
  func_0x0001080b2370();
  func_0x0001080b2360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080b01bc; end: 1080b0373; -[SCValdiTextField notifySelectionChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b01bc(long param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  func_0x0001080b2390();
  func_0x00010c15a1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24d960();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080b2360();
  func_0x00010c15a1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf940a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080b23a4();
  func_0x00010bf193c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080b2560();
  func_0x00010c0e1ce0();
  func_0x0001080b23a4();
  func_0x00010bf193c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080b2560();
  func_0x00010c0e1ce0();
  func_0x0001080b23a4();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080b253c();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = lRam00000001137291d8 == -1;
  if (!(bool)uVar1) {
    func_0x000107c27d9c(0x1137291d8,&PTR___NSConcreteGlobalBlock_110a1ca60);
  }
  func_0x00010c2954e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080b256c();
  func_0x0001080b2370();
  func_0x0001080b23d0();
  func_0x0001080b2380();
  func_0x0001080b2388();
  func_0x0001080b23a4();
  func_0x0001080b2360();
  func_0x0001080b2368();
  func_0x0001080b231c();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = (long)_DAT_1127744c4;
  puVar3 = *(undefined **)(param_1 + lVar4);
  if (puVar3 != puVar2) {
    if (puVar3 == (undefined *)0x1) {
      func_0x00010bddfe20(param_1);
    }
    else if (puVar3 == (undefined *)0x0) {
      func_0x00010c212f20(param_1);
    }
    *(undefined **)(param_1 + lVar4) = puVar2;
  }
  return;
}



/* Entry: 1080b0374; end: 1080b03cf; -[SCValdiTextField updateLabelMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b0374(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127744c4;
  lVar1 = *(long *)(param_1 + lVar2);
  if (lVar1 != param_3) {
    if (lVar1 == 1) {
      func_0x00010bddfe20(param_1);
    }
    else if (lVar1 == 0) {
      func_0x00010c212f20(param_1,param_2,0);
    }
    *(long *)(param_1 + lVar2) = param_3;
  }
  return;
}



/* Entry: 1080b03d0; end: 1080b0423; -[SCValdiTextField _needAttributedString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080b03d0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + _DAT_1127744e4);
  func_0x00010c0d7080();
  if ((uVar1 & 1) == 0) {
    if (*(long *)(param_1 + _DAT_1127744d8) != 0) {
      func_0x0001080b2438();
      func_0x0001080b23fc();
      if ((uVar1 & 1) == 0) goto LAB_1080b0418;
    }
    uVar2 = 0;
  }
  else {
LAB_1080b0418:
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 1080b0424; end: 1080b0453; -[SCValdiTextField _updateAttributedTextAndNotifyIfNeeded] */

void FUN_1080b0424(int param_1)

{
  func_0x0001080b25d4();
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0dd610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  return;
}



/* Entry: 1080b0454; end: 1080b07af; -[SCValdiTextField _updateAttributedTextIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1080b0454(double param_1,ulong param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined8 uVar9;
  double dVar10;
  
  if (*(char *)(param_2 + (long)_DAT_1127744c8) == '\x01') {
    *(undefined1 *)(param_2 + (long)_DAT_1127744c8) = 0;
    uVar2 = param_2;
    func_0x00010c2954e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07cb60();
    func_0x0001080b2368();
    uVar3 = param_2;
    func_0x00010c295200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080b2360();
    uVar4 = param_2;
    func_0x00010bfb3b00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfb3a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13a900();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080b2380();
    dVar10 = *(double *)(param_2 + (long)_DAT_1127744e8);
    func_0x00010c102de0(uVar5);
    func_0x00010c1c8240(dVar10 * param_1,param_2);
    uVar6 = param_2;
    func_0x00010be625e0();
    puVar7 = PTR_PTR_1126d9280;
    if ((int)uVar6 == 0) {
      func_0x00010c286d60(param_2,param_3,0);
      _objc_retain(uVar5);
      uVar6 = param_2;
      func_0x00010bfb3a80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar6 != uVar5) {
        func_0x0001080b2560();
        func_0x00010c19e480();
      }
      uVar5 = param_2;
      func_0x00010c26b920();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010bf40c40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      func_0x0001080b2380();
      if (uVar5 != uVar6) {
        uVar5 = uVar4;
        func_0x00010bf40c40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c213180(param_2,param_3,uVar5);
        func_0x0001080b2380();
      }
      func_0x00010c13ae40(uVar4,param_3,uVar2);
      if (uVar4 == 4) {
        func_0x00010c08cc60();
        uVar4 = 2;
        if (uVar3 != 1) {
          uVar4 = 0;
        }
      }
      uVar2 = param_2;
      func_0x00010c26b7a0();
      if (uVar2 != uVar4) {
        func_0x00010c213040(param_2,param_3,uVar4);
      }
      uVar2 = param_2;
      func_0x00010bf459a0(param_2,param_3,*(undefined8 *)(param_2 + (long)_DAT_1127744d8));
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080b2510();
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0();
      func_0x0001080b2380();
      bVar1 = (uVar2 & 1) == 0;
      if (bVar1) {
        func_0x00010c212f20(param_2,param_3,uVar4);
      }
      uVar8 = (uint)bVar1;
    }
    else {
      uVar9 = *(undefined8 *)(param_2 + (long)_DAT_1127744d8);
      func_0x00010c13a5a0(uVar4,param_3,uVar2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c115820(puVar7,param_3,uVar9,uVar4,uVar2,
                          *(undefined8 *)(param_2 + (long)_DAT_1127744ec),uVar3,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      func_0x00010bf0e280(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080b2510();
      func_0x00010c286d60();
      uVar4 = param_2;
      func_0x00010bf45800(param_2,param_3,uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071b80(uVar2,param_3,uVar4);
      uVar3 = param_2;
      func_0x00010bf0e540();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c071b80();
      _objc_release(uVar3);
      if ((uVar5 & 1) == 0) {
        func_0x00010c16b720(param_2,param_3,uVar4);
      }
      func_0x0001080b23d0();
      uVar8 = (uint)uVar2 ^ 1;
    }
    func_0x0001080b2388();
    func_0x0001080b2380();
    func_0x0001080b23a4();
    func_0x0001080b2360();
    func_0x0001080b2368();
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}



/* Entry: 1080b07b0; end: 1080b08bf; -[SCValdiTextField _clearAttributedText] */

/* WARNING: Possible PIC construction at 0x0001080b07dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001080b07e0) */

void FUN_1080b07b0(undefined8 param_1)

{
  if (lRam0000000113729180 != -1) {
    func_0x000107c27d9c(0x113729180,&PTR___NSConcreteGlobalBlock_110a1c1a0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c16b730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setAttributedText__1126387e8,uRam0000000113729188);
  return;
}



/* Entry: 1080b08c0; end: 1080b090b; -[SCValdiTextField fontAttributes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b08c0(long param_1)

{
  undefined *puVar1;
  
  puVar1 = *(undefined **)(param_1 + _DAT_1127744e4);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    func_0x00010bf69680(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x0001080b23e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1080b090c; end: 1080b092f; -[SCValdiTextField valdi_setFontManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b090c(void)

{
  FUN_1080b22f4();
  func_0x0001080b23e8((long)_DAT_1127744ec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080b0930; end: 1080b0963; -[SCValdiTextField valdi_setFontAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b0930(undefined8 param_1)

{
  FUN_1080b22f4();
  func_0x0001080b23e8((long)_DAT_1127744e4);
  _objc_release();
  func_0x0001080b2444();
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 1080b0964; end: 1080b0997; -[SCValdiTextField valdi_setValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b0964(undefined8 param_1)

{
  FUN_1080b22f4();
  func_0x0001080b23e8((long)_DAT_1127744d8);
  _objc_release();
  func_0x0001080b2444();
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 1080b0998; end: 1080b09d3; -[SCValdiTextField valdi_setCharacterLimit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080b0998(void)

{
  FUN_1080b22f4();
  func_0x0001080b23e8((long)_DAT_1127744e0);
  _objc_release();
  func_0x0001080b2444();
  func_0x00010c1cbe20();
  return 1;
}



/* Entry: 1080b09d4; end: 1080b09df; -[SCValdiTextField valdi_setClosesWhenReturnKeyPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080b09d4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127744bc) = param_3;
  return 1;
}



/* Entry: 1080b09e0; end: 1080b09f7; -[SCValdiTextField valdi_setEnabled:] */

undefined8 FUN_1080b09e0(void)

{
  func_0x00010c195460();
  return 1;
}



/* Entry: 1080b09f8; end: 1080b0aab; -[SCValdiTextField valdi_setFocused:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1080b09f8(ulong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  long unaff_x21;
  long lVar3;
  
  uVar2 = param_1;
  func_0x00010c2a71e0();
  iVar1 = (int)uVar2;
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080b25dc();
  if (unaff_x21 == 0) {
    *(char *)(param_1 + (long)_DAT_1127744b8) = (char)param_3;
  }
  else {
    lVar3 = (long)_DAT_1127744b8;
    *(undefined1 *)(param_1 + lVar3) = 0;
    func_0x0001080b25cc();
    if (param_3 != iVar1) {
      if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c13a0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resignFirstResponder_11262c258);
        return param_1;
      }
      uVar2 = param_1;
      func_0x00010c2a71e0();
      iVar1 = (int)uVar2;
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c075e80();
      if (iVar1 == 0) {
        func_0x0001080b2360();
      }
      else {
        uVar2 = param_1;
        func_0x00010bf179a0();
        func_0x0001080b2360();
        if ((uVar2 & 1) != 0) {
          return 1;
        }
      }
      *(undefined1 *)(param_1 + lVar3) = 1;
    }
  }
  return 1;
}



/* Entry: 1080b0aac; end: 1080b0ac3; -[SCValdiTextField valdi_setTintColor:] */

undefined8 FUN_1080b0aac(void)

{
  func_0x00010c216160();
  return 1;
}



/* Entry: 1080b0ac4; end: 1080b0acf; -[SCValdiTextField valdi_setSelectTextOnFocus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080b0ac4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127744f0) = param_3;
  return 1;
}



/* Entry: 1080b0ad0; end: 1080b0af3; -[SCValdiTextField valdi_setOnWillChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b0ad0(void)

{
  FUN_1080b22f4();
  func_0x0001080b23e8((long)_DAT_1127744d4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080b0af4; end: 1080b0b17; -[SCValdiTextField valdi_setOnChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b0af4(void)

{
  FUN_1080b22f4();
  func_0x0001080b23e8((long)_DAT_1127744dc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080b0b18; end: 1080b0b3b; -[SCValdiTextField valdi_setOnEditBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b0b18(void)

{
  FUN_1080b22f4();
  func_0x0001080b23e8((long)_DAT_1127744f4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080b0b3c; end: 1080b0b5f; -[SCValdiTextField valdi_setOnEditEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b0b3c(void)

{
  FUN_1080b22f4();
  func_0x0001080b23e8((long)_DAT_1127744f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080b0b60; end: 1080b0b83; -[SCValdiTextField valdi_setOnReturn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b0b60(void)

{
  FUN_1080b22f4();
  func_0x0001080b23e8((long)_DAT_1127744fc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080b0b84; end: 1080b0ba7; -[SCValdiTextField valdi_setOnWillDelete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b0b84(void)

{
  FUN_1080b22f4();
  func_0x0001080b23e8((long)_DAT_1127744d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080b0ba8; end: 1080b0bcb; -[SCValdiTextField valdi_setOnSelectionChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b0ba8(void)

{
  FUN_1080b22f4();
  func_0x0001080b23e8((long)_DAT_1127744cc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080b0bcc; end: 1080b0e03; -[SCValdiTextField valdi_setSelection:] */

undefined8 FUN_1080b0bcc(void)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong unaff_x19;
  undefined8 uVar4;
  
  FUN_1080b22f4();
  uVar2 = unaff_x19;
  func_0x00010bf529e0();
  if (uVar2 == 2) {
    func_0x0001080b24e8();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_opt_isKindOfClass(uVar2,puVar3);
    iVar1 = (int)uVar2;
    if ((uVar2 & 1) == 0) {
      func_0x0001080b2370();
LAB_1080b0d9c:
      func_0x00010b96bf1c();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080b25b0();
      goto joined_r0x0001080b0d80;
    }
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_opt_isKindOfClass(unaff_x19,puVar3);
    iVar1 = (int)unaff_x19;
    func_0x0001080b23a4();
    func_0x0001080b2370();
    if ((unaff_x19 & 1) == 0) goto LAB_1080b0d9c;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    func_0x0001080b2370();
    func_0x0001080b24e8();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282760();
    func_0x0001080b2370();
    uVar4 = 1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282760();
    func_0x0001080b2370();
    func_0x00010bf193c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080b2504();
    func_0x00010c1042e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1042e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26c600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb600();
    func_0x0001080b23d0();
    func_0x0001080b2380();
  }
  else {
    func_0x00010b96bf1c();
    iVar1 = (int)uVar2;
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080b25b0();
joined_r0x0001080b0d80:
    if (iVar1 == 0) {
      uVar4 = 0;
      goto LAB_1080b0df0;
    }
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080b2510();
    func_0x00010c0eeea0();
    uVar4 = 0;
  }
  func_0x0001080b2388();
LAB_1080b0df0:
  func_0x0001080b2370();
  func_0x0001080b2368();
  return uVar4;
}



/* Entry: 1080b0e04; end: 1080b0f87; -[SCValdiTextField valdi_setPlaceholder:color:] */

bool FUN_1080b0e04(double param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar3 = param_5;
  func_0x0001080b2390();
  _objc_retain(lVar3);
  if ((param_4 == 0) || (param_5 == 0)) {
    func_0x0001080b23c8();
    func_0x00010c1dc9c0(param_2);
  }
  else {
    func_0x0001080b23c8();
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d3c80();
    func_0x0001080b2388();
    lVar3 = param_2;
    func_0x00010bfb3a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      func_0x00010bfb3a80();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080b24a0(PTR__NSFontAttributeName_1103457f0);
      func_0x0001080b2388();
    }
    _objc_alloc_init();
    func_0x0001080b2510();
    func_0x00010c295200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cc60();
    func_0x0001080b23d0();
    func_0x0001080b2380();
    func_0x0001080b24a0(PTR__NSParagraphStyleAttributeName_110345820);
    func_0x0001080b258c();
    func_0x00010c04e840();
    func_0x0001080b2360();
    func_0x00010c16b680(param_2);
    func_0x0001080b2380();
    func_0x0001080b2388();
  }
  func_0x0001080b23a4();
  func_0x0001080b2368();
  func_0x0001080b231c();
  if ((bool)in_ZR) {
    return true;
  }
  ___stack_chk_fail();
  FUN_10809ffb0();
  func_0x00010809ffec();
  lVar3 = param_4;
  func_0x00010bf529e0();
  if (lVar3 == 5) {
    lVar1 = param_4;
    func_0x00010c0dfd20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    func_0x00010b988f18();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010809ffcc();
    _objc_retainAutorelease(lVar1);
    func_0x00010bdc0fe0();
    func_0x00010c08c0e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    func_0x00010809ffdc();
    func_0x00010c0dfd20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080a0004();
    func_0x00010c08c0e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(param_1);
    func_0x00010809ffdc();
    func_0x00010809ffcc();
    func_0x00010c0dfd20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080a0004();
    uVar4 = (ulong)(uint)(float)param_1;
    func_0x00010c08c0e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(uVar4);
    func_0x00010809ffdc();
    func_0x00010809ffcc();
    func_0x00010c0dfd20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080a0004();
    uVar5 = uVar4;
    func_0x00010c0dfd20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c08c0e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(uVar4,uVar5);
    func_0x00010809fff4();
    func_0x00010809ffdc();
  }
  else {
    lVar1 = lVar3;
    func_0x00010b96bf1c();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c076f00();
    if ((int)lVar2 == 0) goto LAB_10809feb0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eeea0(lVar1);
  }
  func_0x00010809ffcc();
LAB_10809feb0:
  func_0x00010809ffe4();
  func_0x00010809ffc4();
  func_0x00010809ffbc();
  return lVar3 == 5;
}



/* Entry: 1080b0f88; end: 1080b0f8f; -[SCValdiTextField valdi_setTextShadow:] */

bool FUN_1080b0f88(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  ulong uVar5;
  
  FUN_10809ffb0(param_2,param_4);
  func_0x00010809ffec();
  lVar1 = unaff_x20;
  func_0x00010bf529e0();
  if (lVar1 == 5) {
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    func_0x00010b988f18();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010809ffcc();
    _objc_retainAutorelease(unaff_x20);
    func_0x00010bdc0fe0();
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    func_0x00010809ffdc();
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080a0004();
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(param_1);
    func_0x00010809ffdc();
    func_0x00010809ffcc();
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080a0004();
    uVar4 = (ulong)(uint)(float)param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(uVar4);
    func_0x00010809ffdc();
    func_0x00010809ffcc();
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080a0004();
    uVar5 = uVar4;
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(uVar4,uVar5);
    func_0x00010809fff4();
    func_0x00010809ffdc();
  }
  else {
    lVar2 = lVar1;
    func_0x00010b96bf1c();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c076f00();
    if ((int)lVar3 == 0) goto LAB_10809feb0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eeea0(lVar2);
  }
  func_0x00010809ffcc();
LAB_10809feb0:
  func_0x00010809ffe4();
  func_0x00010809ffc4();
  func_0x00010809ffbc();
  return lVar1 == 5;
}



/* Entry: 1080b0f90; end: 1080b0f93; -[SCValdiTextField valdi_resetTextShadow] */

void FUN_1080b0f90(undefined8 param_1)

{
  _objc_retain();
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  func_0x00010809ffc4();
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740();
  func_0x00010809ffc4();
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe840(0);
  func_0x00010809ffc4();
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(0);
  func_0x00010809ffc4();
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010809ffbc();
  func_0x00010c1fe7a0(0,0,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1080b0f94; end: 1080b0fc7; -[SCValdiTextField valdi_setEnableInlinePredictions:] */

undefined8 FUN_1080b0f94(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x0001080b2474();
  if ((int)uVar1 != 0) {
    func_0x00010c1ad0c0(param_1,param_2,param_3 ^ 1);
  }
  return 1;
}



/* Entry: 1080b0fc8; end: 1080b1463; +[SCValdiTextField bindAttributes:] */

void FUN_1080b0fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  func_0x0001080b2378();
  uVar2 = param_3;
  func_0x00010bfb3f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  func_0x00010c295360(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1080b1464;
  puStack_60 = &UNK_110a1c1c0;
  func_0x0001080b23e0();
  uStack_58 = uVar2;
  func_0x00010bf1a200(param_3,param_2,&PTR____CFConstantStringClassReference_110ed3ed8,puVar3,
                      &puStack_78,&PTR___NSConcreteGlobalBlock_110a1c210);
  func_0x0001080b2370();
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1080b14f0;
  puStack_88 = &UNK_1109057d0;
  func_0x0001080b23e0();
  uStack_80 = uVar2;
  func_0x0001080b2554();
  func_0x00010c126e80();
  func_0x00010c126e80(param_3,param_2,&PTR____CFConstantStringClassReference_110ed3ed8,1,
                      &PTR___NSConcreteGlobalBlock_110a1c230);
  func_0x0001080b2310();
  func_0x0001080b2310();
  func_0x0001080b2310();
  func_0x0001080b2310();
  func_0x0001080b2310();
  func_0x0001080b2554();
  func_0x00010bf1a100();
  func_0x0001080b2340();
  func_0x0001080b2340();
  func_0x0001080b2340();
  func_0x00010bf1a0c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ed5a38,0,
                      &PTR___NSConcreteGlobalBlock_110a1c510,&PTR___NSConcreteGlobalBlock_110a1c530)
  ;
  func_0x0001080b2340();
  func_0x0001080b23f4();
  func_0x0001080b23f4();
  func_0x0001080b23f4();
  func_0x0001080b23f4();
  func_0x0001080b23f4();
  func_0x0001080b23f4();
  puVar3 = PTR_PTR_1126d9350;
  func_0x00010bee76a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1080b1728;
  puStack_b0 = &UNK_110a1c1c0;
  func_0x0001080b23e0();
  uStack_a8 = uVar2;
  func_0x00010bf1a200(param_3,param_2,&PTR____CFConstantStringClassReference_110ed5b18,puVar3,
                      &puStack_c8,&PTR___NSConcreteGlobalBlock_110a1c750);
  func_0x0001080b2370();
  func_0x0001080b2598();
  func_0x0001080b23f4();
  func_0x0001080b2598();
  func_0x0001080b23e0();
  func_0x0001080b2554();
  func_0x00010bf1a160();
  func_0x00010c1dcc00(param_3,param_2,&PTR___NSConcreteGlobalBlock_110a1c8a0);
  func_0x0001080b2340();
  func_0x0001080b2310();
  func_0x0001080b2554();
  func_0x00010bf1a080();
  func_0x0001080b2554();
  func_0x00010bf1a0e0();
  func_0x0001080b2360();
  _objc_release(uVar2);
  _objc_release(uStack_a8);
  _objc_release(uStack_80);
  _objc_release(uStack_58);
  func_0x0001080b2368();
  return;
}



/* Entry: 1080b1464; end: 1080b14e3;  */

undefined8 FUN_1080b1464(undefined8 param_1,undefined8 param_2)

{
  func_0x0001080b2378();
  func_0x0001080b23c8();
  func_0x00010c295e00(param_2);
  func_0x0001080b23e0();
  _objc_opt_class();
  func_0x0001080b23fc();
  func_0x0001080b24e0();
  func_0x0001080b2368();
  func_0x00010c295de0(param_2);
  func_0x0001080b2370();
  func_0x0001080b2360();
  func_0x0001080b2368();
  return 1;
}



/* Entry: 1080b14e4; end: 1080b14ef;  */

void FUN_1080b14e4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c295df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_valdi_setFontAttributes__1126831a0,0);
  return;
}



/* Entry: 1080b14f0; end: 1080b1557;  */

void FUN_1080b14f0(ulong param_1,undefined8 param_2)

{
  func_0x0001080b246c();
  func_0x0001080b2438();
  func_0x0001080b23fc();
  if ((param_1 & 1) == 0) {
    param_2 = 0;
  }
  _objc_retain(param_2);
  func_0x0001080b2560();
  func_0x00010bfb3ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080b23a4();
  func_0x0001080b2368();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1080b1558; end: 1080b15df;  */

void FUN_1080b1558(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb3b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSAttributedString_1126af068,
             PTR_s_fontAttributesWithCompositeValue_1125ca878,param_2);
  return;
}



/* Entry: 1080b15e0; end: 1080b163f;  */

undefined8 FUN_1080b15e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x0001080b246c();
  func_0x00010c0df780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c295c00(param_2);
  func_0x0001080b2360();
  func_0x0001080b2368();
  return param_2;
}



/* Entry: 1080b1640; end: 1080b1727;  */

void FUN_1080b1640(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c295c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_valdi_setCharacterLimit__112683128,0);
  return;
}



/* Entry: 1080b1728; end: 1080b1877;  */

undefined8 FUN_1080b1728(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x0001080b246c();
  func_0x0001080b23c8();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    param_3 = 0;
  }
  func_0x0001080b24e0();
  uVar2 = param_3;
  func_0x00010bf529e0();
  if (uVar2 == 2) {
    uVar2 = param_3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x0001080b2438();
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,uVar3);
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    func_0x0001080b2380();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    uVar2 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    func_0x0001080b23d0();
    if (uVar2 != 0) {
      func_0x00010c067fc0(param_3);
      func_0x00010b988f18();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c295e00(param_2);
    func_0x00010c296100(param_2);
    func_0x0001080b2388();
    func_0x0001080b23d0();
    func_0x0001080b2380();
  }
  else {
    param_2 = 0;
  }
  func_0x0001080b2370();
  func_0x0001080b2360();
  func_0x0001080b2368();
  return param_2;
}



/* Entry: 1080b1878; end: 1080b18c3;  */

void FUN_1080b1878(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c296110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_valdi_setPlaceholder_color__112683268,0,0);
  return;
}



/* Entry: 1080b18c4; end: 1080b199f;  */

undefined8
FUN_1080b18c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x0001080b23c8();
  func_0x0001080b24e0();
  func_0x0001080b2560();
  func_0x00010c295e00();
  func_0x00010c296500(param_2);
  func_0x0001080b2360();
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080b2370();
  func_0x00010befc640(param_4);
  func_0x0001080b2368();
  func_0x0001080b2360();
  return 1;
}



/* Entry: 1080b19a0; end: 1080b19bb;  */

void FUN_1080b19a0(void)

{
  _objc_opt_new(PTR_PTR_1126d9350);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080b19bc; end: 1080b19e7;  */

void FUN_1080b19bc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c295d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_valdi_setEnableInlinePredictions_112683168);
  return;
}



/* Entry: 1080b19e8; end: 1080b1a03;  */

undefined8 FUN_1080b19e8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c165e20(param_2);
  return 1;
}



/* Entry: 1080b1a04; end: 1080b1a0f;  */

void FUN_1080b1a04(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c165e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setAdjustsFontSizeToFitWidth__1126371a8,0);
  return;
}



/* Entry: 1080b1a10; end: 1080b1ae3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080b1a10(double param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  double dVar2;
  
  *(double *)(param_3 + _DAT_1127744e8) = param_1;
  dVar2 = param_1;
  func_0x0001080b246c();
  func_0x00010bfb3b00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb3a80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c295200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080b2510();
  func_0x00010c13a900();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080b2388();
  func_0x0001080b23a4();
  func_0x0001080b2370();
  func_0x0001080b2360();
  func_0x00010c102de0(lVar1);
  func_0x00010c1c8240(param_1 * dVar2,param_3);
  func_0x0001080b2368();
  func_0x0001080b2380();
  return 1;
}



/* Entry: 1080b1ae4; end: 1080b1afb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b1ae4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_1127744e8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c1c8250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,param_2,PTR_s_setMinimumFontSize__11264fab8);
  return;
}



/* Entry: 1080b1afc; end: 1080b1ba3; +[SCValdiTextField _valdiPlaceholderComponents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_1080b1afc(void)

{
  undefined1 in_ZR;
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  
  func_0x0001080b2390();
  _objc_alloc();
  func_0x00010bff4e00();
  ppuVar7 = (undefined **)PTR_PTR_1126b4b08;
  _objc_alloc();
  ppuVar2 = &PTR____CFConstantStringClassReference_110ed5b78;
  lVar4 = 4;
  lVar5 = 1;
  uVar6 = 0;
  func_0x00010bff4e00();
  func_0x0001080b253c();
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = ppuVar7;
  func_0x0001080b2370();
  func_0x0001080b2360();
  func_0x0001080b231c();
  if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
    return ppuVar7;
  }
  ___stack_chk_fail();
  func_0x0001080b2378();
  func_0x0001080b23c8();
  ppuVar7 = ppuVar2;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x0001080b2388();
  if (ppuVar7 < (undefined **)(lVar4 + lVar5)) {
    ppuVar7 = (undefined **)0x0;
  }
  else {
    ppuVar7 = ppuVar2;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25cf80();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080b23d0();
    func_0x00010c26b700(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)ppuVar1 + (long)_DAT_1127744e0);
    func_0x00010c067fc0(uVar3);
    FUN_10809f824(ppuVar2,uVar6,lVar4,lVar5,uVar3,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080b23d0();
    func_0x00010c0720c0();
    if (((ulong)ppuVar7 & 1) == 0) {
      func_0x0001080b261c();
      func_0x00010c212f20();
    }
    func_0x0001080b23a4();
    func_0x0001080b2388();
  }
  func_0x0001080b2360();
  func_0x0001080b2368();
  return ppuVar7;
}



/* Entry: 1080b1ba4; end: 1080b1cc7; -[SCValdiTextField textField:shouldChangeCharactersInRange:replacementString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1080b1ba4(long param_1,undefined8 param_2,ulong param_3,long param_4,long param_5,
                   undefined8 param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  
  func_0x0001080b2378();
  func_0x0001080b23c8();
  uVar2 = param_3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x0001080b2388();
  if (uVar2 < (ulong)(param_4 + param_5)) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25cf80();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080b23d0();
    func_0x00010c26b700(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127744e0);
    func_0x00010c067fc0(uVar1);
    FUN_10809f824(param_3,param_6,param_4,param_5,uVar1,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080b23d0();
    func_0x00010c0720c0();
    if ((uVar2 & 1) == 0) {
      func_0x0001080b261c();
      func_0x00010c212f20();
    }
    func_0x0001080b23a4();
    func_0x0001080b2388();
  }
  func_0x0001080b2360();
  func_0x0001080b2368();
  return uVar2;
}



/* Entry: 1080b1cc8; end: 1080b1d1b; -[SCValdiTextField textFieldShouldReturn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080b1cc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(char *)(param_1 + _DAT_1127744bc) == '\x01') {
    *(undefined8 *)(param_1 + _DAT_1127744c0) = 1;
    func_0x00010c13a0e0(param_3);
  }
  func_0x0001080b242c((long)_DAT_1127744fc);
  return 1;
}



/* Entry: 1080b1d1c; end: 1080b1e0f; -[SCValdiTextField textFieldDidBeginEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b1d1c(long param_1)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010c2954e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080b226c();
  func_0x00010bf737c0(lVar1);
  *(undefined8 *)(param_1 + _DAT_1127744c0) = 0;
  FUN_1080afb00(*(undefined8 *)(param_1 + _DAT_1127744f4),param_1);
  if (*(char *)(param_1 + _DAT_1127744f0) == '\x01') {
    _objc_initWeak(auStack_38,param_1);
    func_0x0001080b2608(FUN_1080b1e10,0xc2000000);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x0001080b252c();
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  func_0x0001080b2360();
  func_0x0001080b2368();
  return;
}



/* Entry: 1080b1e10; end: 1080b1f2b;  */

void FUN_1080b1e10(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 == 0) || (lVar1 = param_1, func_0x0001080b25cc(), (int)lVar1 == 0))
  goto LAB_1080b1f10;
  lVar1 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x0001080b2360();
  if (lVar1 == 0) goto LAB_1080b1f10;
  lVar1 = param_1;
  func_0x00010c15a1e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
LAB_1080b1f04:
    func_0x0001080b24e8();
    func_0x00010c1586c0();
  }
  else {
    func_0x00010c24d960(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf193c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080b2488();
    func_0x00010bf434a0();
    if (lVar2 != 0) {
      func_0x0001080b23a4();
      func_0x0001080b2370();
      goto LAB_1080b1f04;
    }
    func_0x00010bf940a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf94e60();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080b25f4();
    func_0x00010bf434a0();
    func_0x0001080b2380();
    func_0x0001080b2388();
    func_0x0001080b23a4();
    func_0x0001080b2370();
    if (lVar1 != 0) goto LAB_1080b1f04;
  }
  func_0x0001080b2360();
LAB_1080b1f10:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1080b1f2c; end: 1080b206f; -[SCValdiTextField textFieldDidEndEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b1f2c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  
  FUN_1080b22f4();
  lVar1 = unaff_x20;
  func_0x00010c2954e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080b2504();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080b226c();
  func_0x0001080b256c(lVar1);
  lVar3 = *(long *)(unaff_x20 + _DAT_1127744f8);
  lVar4 = (long)_DAT_1127744c0;
  lVar5 = *(long *)(unaff_x20 + lVar4);
  lVar1 = lVar3;
  _objc_retain(lVar3);
  func_0x0001080b23c8();
  if (lVar3 != 0) {
    func_0x00010b97f424();
    lVar2 = lVar1;
    FUN_1080afed8();
    func_0x00010b97f870((double)lVar5,lVar1);
    if (lRam00000001137291f8 != -1) {
      func_0x000107c27d9c(0x1137291f8,&PTR___NSConcreteGlobalBlock_110a1caa0);
    }
    func_0x00010b97f5fc(lVar1,uRam00000001137291f0,lVar2);
    func_0x00010c0f9540(lVar3);
    func_0x0001080b251c();
  }
  func_0x0001080b2360();
  func_0x0001080b2388();
  *(undefined8 *)(unaff_x20 + lVar4) = 0;
  func_0x0001080b23a4();
  func_0x0001080b2370();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080b2070; end: 1080b20f7; -[SCValdiTextField .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b2070(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127744cc,0);
  func_0x0001080b2304((long)_DAT_1127744d0);
  func_0x0001080b2304((long)_DAT_1127744fc);
  func_0x0001080b2304((long)_DAT_1127744f8);
  func_0x0001080b2304((long)_DAT_1127744f4);
  func_0x0001080b2304((long)_DAT_1127744dc);
  func_0x0001080b2304((long)_DAT_1127744d4);
  func_0x0001080b2304((long)_DAT_1127744ec);
  func_0x0001080b2304((long)_DAT_1127744e4);
  func_0x0001080b2304((long)_DAT_1127744d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127744e0,0);
  return;
}



/* Entry: 1080b20f8; end: 1080b22f3;  */

undefined8 FUN_1080b20f8(void)

{
  if (lRam0000000113729198 != -1) {
    func_0x000107c27d9c(0x113729198,&PTR___NSConcreteGlobalBlock_110a1c9e0);
  }
  return uRam0000000113729190;
}



/* Entry: 1080b22f4; end: 1080b2627;  */

void FUN_1080b22f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 1080b2628; end: 1080b26a7; -[SCValdiTextLayoutSelectionInteractionView pointInside:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1080b2628(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x0001080b5f54();
  lVar1 = (long)_DAT_112774500;
  _objc_loadWeakRetained(param_3 + lVar1);
  func_0x0001080b6068();
  func_0x00010bf51200();
  func_0x0001080b5c7c();
  param_3 = param_3 + lVar1;
  _objc_loadWeakRetained(param_3);
  func_0x00010c102b80(param_1,param_2);
  func_0x0001080b5c8c();
  return param_3;
}



/* Entry: 1080b26a8; end: 1080b26db; -[SCValdiTextLayoutSelectionInteractionView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b26a8(int param_1)

{
  func_0x00010c102b20();
  if (param_1 != 0) {
    func_0x0001080b5d68((long)_DAT_112774500);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080b26dc; end: 1080b26f7; -[SCValdiTextLayoutSelectionInteractionView textLayoutView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b26dc(void)

{
  func_0x0001080b5da4((long)_DAT_112774500);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080b26f8; end: 1080b270b; -[SCValdiTextLayoutSelectionInteractionView setTextLayoutView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b26f8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112774500,param_3);
  return;
}


