/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104ca1a30; end: 104ca1ab3; -[SCInAppTakeoverDefaultProvider handleCampaignDismissed:] */

void FUN_104ca1a30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bb1c0();
    _objc_release(param_3);
    _objc_release(uVar1);
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 104ca1ab4; end: 104ca1b3b; -[SCInAppTakeoverDefaultProvider handleCampaignOutsideClicked:] */

void FUN_104ca1ab4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104ca1b3c;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104ca1b3c; end: 104ca1b47;  */

void FUN_104ca1b3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd06d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_handleCampaignDismissed__1125d1b58,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104ca1b48; end: 104ca1bcf; -[SCInAppTakeoverDefaultProvider handleLinkClicked:] */

void FUN_104ca1b48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104ca1bd0;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104ca1bd0; end: 104ca1bdb;  */

void FUN_104ca1bd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2b690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleLinkClicked__112568740,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104ca1bdc; end: 104ca1d83; -[SCInAppTakeoverDefaultProvider _handleLinkClicked:] */

void FUN_104ca1bdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126ae630;
    func_0x00010bfe6000(PTR_PTR_1126ae630);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2b9b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new(PTR_PTR_1126ae560);
    puVar4 = puVar2;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_104ca1d84;
    puStack_60 = &UNK_110842308;
    _objc_retain(param_3);
    uStack_58 = param_3;
    func_0x00010c297260(puVar4,param_2,&puStack_78,0);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    puVar5 = PTR_PTR_1126ae638;
    _objc_opt_new(PTR_PTR_1126ae638);
    puVar6 = puVar5;
    func_0x00010bf22ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(uStack_58);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104ca1d84; end: 104ca1df7;  */

void FUN_104ca1d84(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if ((param_2 != 0) && (param_3 == 0)) {
    _objc_retain(param_2);
    func_0x00010bdc3460(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09c520(param_2);
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 104ca1df8; end: 104ca1e3f; -[SCInAppTakeoverDefaultProvider webBrowserDidDismiss:] */

void FUN_104ca1df8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104ca1e40; end: 104ca1ecf; -[SCInAppTakeoverDefaultProvider .cxx_destruct] */

void FUN_104ca1e40(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ca1ed0; end: 104ca20f3; -[SCInAppTakeoverViewController initWithValdiRuntimeProvider:campaign:delegate:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104ca1ed0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined1 *puVar19;
  long lVar20;
  long unaff_x24;
  long unaff_x25;
  long lVar21;
  long lVar22;
  undefined8 unaff_x26;
  long unaff_x27;
  long lVar23;
  long unaff_x28;
  long lVar24;
  undefined1 auStack_448 [8];
  undefined *puStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined *puStack_428;
  undefined1 auStack_420 [8];
  undefined *puStack_418;
  undefined8 uStack_410;
  code *pcStack_408;
  undefined *puStack_400;
  undefined1 auStack_3f8 [8];
  undefined *puStack_3f0;
  undefined8 uStack_3e8;
  code *pcStack_3e0;
  undefined *puStack_3d8;
  undefined1 auStack_3d0 [8];
  undefined1 auStack_3c8 [8];
  undefined *puStack_3c0;
  undefined8 uStack_3b8;
  code *pcStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_390;
  code *pcStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_2a8;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long lStack_180;
  undefined1 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar1 = &uStack_140;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_138 = PTR_PTR_1126e3960;
  uStack_140 = param_1;
  _objc_msgSendSuper2(&uStack_140,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar21 = (long)_DAT_1127100a4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar21);
    *(long *)((long)puVar1 + lVar21) = param_3;
    _objc_release(uVar2);
    lVar22 = (long)_DAT_1127100a8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined8 *)((long)puVar1 + lVar22) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_1127100ac),param_5);
    lVar21 = (long)_DAT_1127100b0;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar21);
    *(undefined8 *)((long)puVar1 + lVar21) = param_6;
    _objc_release(uVar2);
    unaff_x24 = *(long *)((long)puVar1 + lVar22);
    func_0x00010c294e20();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    unaff_x25 = unaff_x24;
    func_0x00010bf84960();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = unaff_x25;
    func_0x00010bf52a60();
    unaff_x26 = 0;
    if (lVar21 != 0) {
      unaff_x27 = *plStack_120;
      do {
        unaff_x28 = 0;
        do {
          if (*plStack_120 != unaff_x27) {
            _objc_enumerationMutation(unaff_x25);
          }
          lVar22 = *(long *)(lStack_128 + unaff_x28 * 8);
          func_0x00010c067fc0();
          if (0xfffffffffffffffd < lVar22 - 3U) {
            unaff_x26 = 1;
            goto LAB_104ca206c;
          }
          unaff_x28 = unaff_x28 + 1;
        } while (lVar21 != unaff_x28);
        lVar21 = unaff_x25;
        func_0x00010bf52a60();
      } while (lVar21 != 0);
      unaff_x26 = 0;
    }
LAB_104ca206c:
    _objc_release(unaff_x25);
    *(char *)((long)puVar1 + (long)_DAT_1127100b4) = (char)unaff_x26;
    _objc_release(unaff_x24);
    func_0x00010c1c8b80(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  lVar21 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return (undefined1 *)puVar1;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_104ca20f4;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1d0 = PTR_PTR_1126e3960;
  lStack_1d8 = lVar21;
  lStack_1a0 = unaff_x28;
  lStack_198 = unaff_x27;
  uStack_190 = unaff_x26;
  lStack_188 = unaff_x25;
  lStack_180 = unaff_x24;
  puStack_178 = (undefined1 *)puVar1;
  uStack_170 = param_6;
  uStack_168 = param_5;
  uStack_160 = param_4;
  lStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_1d8,PTR_s_loadView_112604be0);
  lVar22 = lVar21;
  func_0x00010beb05a0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = (long)_DAT_1127100b8;
  uVar2 = *(undefined8 *)(lVar21 + lVar20);
  *(long *)(lVar21 + lVar20) = lVar22;
  _objc_release(uVar2);
  lVar22 = lVar21;
  func_0x00010c29bf00(lVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar22);
  func_0x00010c219b60(*(undefined8 *)(lVar21 + lVar20));
  puVar15 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(lVar21 + lVar20);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar22;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar21 + lVar20);
  uStack_1c8 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar21;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar24;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar21 + lVar20);
  uStack_1c0 = uVar18;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar21;
  func_0x00010c29bf00(lVar21);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(lVar21 + lVar20);
  uStack_1b8 = uVar9;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar21;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar20;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_1b0 = uVar12;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar15);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(lVar11);
  _objc_release(lVar20);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar18);
  _objc_release(lVar23);
  _objc_release(lVar24);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(lVar4);
  _objc_release(lVar22);
  _objc_release(uVar3);
  puVar14 = (undefined1 *)(lVar21 + _DAT_1127100ac);
  _objc_loadWeakRetained();
  func_0x00010bfd06e0();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return puVar14;
  }
  ___stack_chk_fail();
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = PTR_PTR_1126aec90;
  _objc_alloc_init();
  lVar22 = *(long *)(puVar14 + _DAT_1127100a8);
  func_0x00010c294e20();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar22;
  func_0x00010bfe7200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar21 != 0) {
    puVar13 = PTR_PTR_1126aec98;
    _objc_alloc(PTR_PTR_1126aec98);
    lVar21 = lVar22;
    func_0x00010bfe7200(lVar22);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar21;
    func_0x00010bfe8f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01d020(0x4062c00000000000,0x4062c00000000000,puVar13);
    func_0x00010c1c1a00(puVar15);
    _objc_release(puVar13);
    _objc_release(lVar4);
    _objc_release(lVar21);
    lVar21 = lVar22;
    func_0x00010bfe7200(lVar22);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar21;
    func_0x00010c0f05e0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar15;
    func_0x00010c0b69c0(puVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7a20();
    _objc_release(puVar13);
    _objc_release(lVar4);
    _objc_release(lVar21);
    lVar21 = lVar22;
    func_0x00010bfe7200(lVar22);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar21;
    func_0x00010c0f0040();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar15;
    func_0x00010c0b69c0(puVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d78a0();
    _objc_release(puVar13);
    _objc_release(lVar4);
    _objc_release(lVar21);
    lVar21 = lVar22;
    func_0x00010bfe7200(lVar22);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar21;
    func_0x00010c0f04e0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar15;
    func_0x00010c0b69c0(puVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7980();
    _objc_release(puVar13);
    _objc_release(lVar4);
    _objc_release(lVar21);
  }
  lVar21 = lVar22;
  func_0x00010c2711a0(lVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(puVar15);
  _objc_release(lVar21);
  lVar21 = lVar22;
  func_0x00010bf3c7e0(lVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17c900(puVar15);
  _objc_release(lVar21);
  lVar21 = lVar22;
  func_0x00010bf833e0(lVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18f4a0(puVar15);
  _objc_release(lVar21);
  puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  plStack_360 = (long *)0x0;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  lVar21 = lVar22;
  func_0x00010c25e400();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar21;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar24 = *plStack_360;
    do {
      lVar23 = 0;
      do {
        if (*plStack_360 != lVar24) {
          _objc_enumerationMutation(lVar21);
        }
        puVar16 = PTR___NSConcreteStackBlock_11034bd00;
        uVar2 = *(undefined8 *)(lStack_368 + lVar23 * 8);
        puStack_398 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_390 = 0xc2000000;
        pcStack_388 = FUN_104ca2a90;
        puStack_380 = &UNK_1108450c8;
        _objc_retain(puVar13);
        puStack_3c0 = puVar16;
        uStack_3b8 = 0xc2000000;
        pcStack_3b0 = FUN_104ca2b24;
        puStack_3a8 = &UNK_110846600;
        puStack_378 = puVar13;
        _objc_retain(puVar13);
        puStack_3a0 = puVar13;
        func_0x00010c0be4c0(uVar2);
        _objc_release(puStack_3a0);
        _objc_release(puStack_378);
        lVar23 = lVar23 + 1;
      } while (lVar4 != lVar23);
      lVar4 = lVar21;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar21);
  func_0x00010c20ec40(puVar15);
  lVar21 = lVar22;
  func_0x00010bf84960(lVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18f7c0(puVar15);
  _objc_release(lVar21);
  lVar21 = lVar22;
  func_0x00010c0f0100(lVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d78e0(puVar15);
  _objc_release(lVar21);
  puVar16 = PTR_PTR_1126aeca0;
  _objc_opt_new(PTR_PTR_1126aeca0);
  _objc_initWeak(auStack_3c8,puVar14);
  puStack_3f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_3e8 = 0xc2000000;
  pcStack_3e0 = FUN_104ca2d78;
  puStack_3d8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_3d0,auStack_3c8);
  func_0x00010c1d1920(puVar16);
  puStack_418 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_410 = 0xc2000000;
  pcStack_408 = FUN_104ca2e34;
  puStack_400 = &UNK_1108434b0;
  _objc_copyWeak(auStack_3f8,auStack_3c8);
  func_0x00010c1d2040(puVar16);
  puStack_440 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_438 = 0xc2000000;
  uStack_430 = 0x104ca2ef0;
  puStack_428 = &UNK_1108434b0;
  _objc_copyWeak(auStack_420,auStack_3c8);
  func_0x00010c1d3c20(puVar16);
  puVar19 = auStack_3c8;
  _objc_copyWeak(auStack_448,puVar19);
  func_0x00010c1d2900(puVar16);
  puVar17 = PTR_PTR_1126aeca8;
  _objc_alloc();
  uVar18 = *(undefined8 *)(puVar14 + _DAT_1127100a4);
  func_0x00010c269d40(uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar18;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40();
  _objc_release(uVar2);
  _objc_release(uVar18);
  _objc_destroyWeak(auStack_448);
  _objc_destroyWeak(auStack_420);
  _objc_destroyWeak(auStack_3f8);
  _objc_destroyWeak(auStack_3d0);
  _objc_destroyWeak(auStack_3c8);
  _objc_release(puVar16);
  _objc_release(puVar13);
  _objc_release(lVar22);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
    return puVar17;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_448);
  _objc_destroyWeak(auStack_420);
  _objc_destroyWeak(auStack_3f8);
  _objc_destroyWeak(auStack_3d0);
  _objc_destroyWeak(auStack_3c8);
  __Unwind_Resume();
  puVar13 = PTR_PTR_1126aecb8;
  uVar2 = *(undefined8 *)(puVar15 + 0x20);
  _objc_retain(puVar19);
  _objc_opt_new(puVar13);
  puVar15 = PTR_PTR_1126aec98;
  _objc_alloc(PTR_PTR_1126aec98);
  func_0x00010c01d020(0x4049000000000000,0x4049000000000000);
  _objc_release(puVar19);
  func_0x00010c1a9f00(puVar13);
  _objc_release(puVar15);
  func_0x00010befa120(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar13);
  return puVar13;
}



/* Entry: 104ca20f4; end: 104ca241f; -[SCInAppTakeoverViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ca20f4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined1 auStack_308 [8];
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  undefined1 auStack_2e0 [8];
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  code *pcStack_2c8;
  undefined *puStack_2c0;
  undefined1 auStack_2b8 [8];
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  code *pcStack_2a0;
  undefined *puStack_298;
  undefined1 auStack_290 [8];
  undefined1 auStack_288 [8];
  undefined *puStack_280;
  undefined8 uStack_278;
  code *pcStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_168;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126e3960;
  lStack_98 = param_1;
  _objc_msgSendSuper2(&lStack_98,PTR_s_loadView_112604be0);
  lVar1 = param_1;
  func_0x00010beb05a0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = (long)_DAT_1127100b8;
  uVar18 = *(undefined8 *)(param_1 + lVar19);
  *(long *)(param_1 + lVar19) = lVar1;
  _objc_release(uVar18);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar19));
  puVar12 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar19);
  uStack_88 = uVar18;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar19);
  uStack_80 = uVar16;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar20;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar19);
  uStack_78 = uVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar19;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar10;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar12);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar19);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar20);
  _objc_release(uVar5);
  _objc_release(uVar16);
  _objc_release(lVar21);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar18);
  _objc_release(lVar13);
  _objc_release(lVar1);
  _objc_release(uVar2);
  param_1 = param_1 + _DAT_1127100ac;
  _objc_loadWeakRetained();
  func_0x00010bfd06e0();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = PTR_PTR_1126aec90;
  _objc_alloc_init();
  lVar13 = *(long *)(param_1 + _DAT_1127100a8);
  func_0x00010c294e20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar13;
  func_0x00010bfe7200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    puVar11 = PTR_PTR_1126aec98;
    _objc_alloc(PTR_PTR_1126aec98);
    lVar1 = lVar13;
    func_0x00010bfe7200(lVar13);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bfe8f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01d020(0x4062c00000000000,0x4062c00000000000,puVar11);
    func_0x00010c1c1a00(puVar12);
    _objc_release(puVar11);
    _objc_release(lVar4);
    _objc_release(lVar1);
    lVar1 = lVar13;
    func_0x00010bfe7200(lVar13);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c0f05e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar12;
    func_0x00010c0b69c0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7a20();
    _objc_release(puVar11);
    _objc_release(lVar4);
    _objc_release(lVar1);
    lVar1 = lVar13;
    func_0x00010bfe7200(lVar13);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c0f0040();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar12;
    func_0x00010c0b69c0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d78a0();
    _objc_release(puVar11);
    _objc_release(lVar4);
    _objc_release(lVar1);
    lVar1 = lVar13;
    func_0x00010bfe7200(lVar13);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c0f04e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar12;
    func_0x00010c0b69c0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7980();
    _objc_release(puVar11);
    _objc_release(lVar4);
    _objc_release(lVar1);
  }
  lVar1 = lVar13;
  func_0x00010c2711a0(lVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(puVar12);
  _objc_release(lVar1);
  lVar1 = lVar13;
  func_0x00010bf3c7e0(lVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17c900(puVar12);
  _objc_release(lVar1);
  lVar1 = lVar13;
  func_0x00010bf833e0(lVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18f4a0(puVar12);
  _objc_release(lVar1);
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lVar1 = lVar13;
  func_0x00010c25e400();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar21 = *plStack_220;
    do {
      lVar20 = 0;
      do {
        if (*plStack_220 != lVar21) {
          _objc_enumerationMutation(lVar1);
        }
        puVar14 = PTR___NSConcreteStackBlock_11034bd00;
        uVar18 = *(undefined8 *)(lStack_228 + lVar20 * 8);
        puStack_258 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_250 = 0xc2000000;
        pcStack_248 = FUN_104ca2a90;
        puStack_240 = &UNK_1108450c8;
        _objc_retain(puVar11);
        puStack_280 = puVar14;
        uStack_278 = 0xc2000000;
        pcStack_270 = FUN_104ca2b24;
        puStack_268 = &UNK_110846600;
        puStack_238 = puVar11;
        _objc_retain(puVar11);
        puStack_260 = puVar11;
        func_0x00010c0be4c0(uVar18);
        _objc_release(puStack_260);
        _objc_release(puStack_238);
        lVar20 = lVar20 + 1;
      } while (lVar4 != lVar20);
      lVar4 = lVar1;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar1);
  func_0x00010c20ec40(puVar12);
  lVar1 = lVar13;
  func_0x00010bf84960(lVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18f7c0(puVar12);
  _objc_release(lVar1);
  lVar1 = lVar13;
  func_0x00010c0f0100(lVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d78e0(puVar12);
  _objc_release(lVar1);
  puVar14 = PTR_PTR_1126aeca0;
  _objc_opt_new(PTR_PTR_1126aeca0);
  _objc_initWeak(auStack_288,param_1);
  puStack_2b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2a8 = 0xc2000000;
  pcStack_2a0 = FUN_104ca2d78;
  puStack_298 = &UNK_1108434b0;
  _objc_copyWeak(auStack_290,auStack_288);
  func_0x00010c1d1920(puVar14);
  puStack_2d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2d0 = 0xc2000000;
  pcStack_2c8 = FUN_104ca2e34;
  puStack_2c0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_2b8,auStack_288);
  func_0x00010c1d2040(puVar14);
  puStack_300 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2f8 = 0xc2000000;
  uStack_2f0 = 0x104ca2ef0;
  puStack_2e8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_2e0,auStack_288);
  func_0x00010c1d3c20(puVar14);
  puVar17 = auStack_288;
  _objc_copyWeak(auStack_308,puVar17);
  func_0x00010c1d2900(puVar14);
  puVar15 = PTR_PTR_1126aeca8;
  _objc_alloc();
  uVar16 = *(undefined8 *)(param_1 + _DAT_1127100a4);
  func_0x00010c269d40(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar16;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40();
  _objc_release(uVar18);
  _objc_release(uVar16);
  _objc_destroyWeak(auStack_308);
  _objc_destroyWeak(auStack_2e0);
  _objc_destroyWeak(auStack_2b8);
  _objc_destroyWeak(auStack_290);
  _objc_destroyWeak(auStack_288);
  _objc_release(puVar14);
  _objc_release(puVar11);
  _objc_release(lVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_308);
  _objc_destroyWeak(auStack_2e0);
  _objc_destroyWeak(auStack_2b8);
  _objc_destroyWeak(auStack_290);
  _objc_destroyWeak(auStack_288);
  __Unwind_Resume();
  puVar11 = PTR_PTR_1126aecb8;
  uVar18 = *(undefined8 *)(puVar12 + 0x20);
  _objc_retain(puVar17);
  _objc_opt_new(puVar11);
  puVar12 = PTR_PTR_1126aec98;
  _objc_alloc(PTR_PTR_1126aec98);
  func_0x00010c01d020(0x4049000000000000,0x4049000000000000);
  _objc_release(puVar17);
  func_0x00010c1a9f00(puVar11);
  _objc_release(puVar12);
  func_0x00010befa120(uVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar11);
  return;
}



/* Entry: 104ca2420; end: 104ca2a8f; -[SCInAppTakeoverViewController _setupTakeoverValdiView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ca2420(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_228 [8];
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined1 auStack_200 [8];
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aec90;
  _objc_alloc_init();
  lVar2 = *(long *)(param_1 + _DAT_1127100a8);
  func_0x00010c294e20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfe7200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126aec98;
    _objc_alloc(PTR_PTR_1126aec98);
    lVar3 = lVar2;
    func_0x00010bfe7200(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bfe8f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01d020(0x4062c00000000000,0x4062c00000000000,puVar4);
    func_0x00010c1c1a00(puVar1);
    _objc_release(puVar4);
    _objc_release(lVar5);
    _objc_release(lVar3);
    lVar3 = lVar2;
    func_0x00010bfe7200(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c0f05e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c0b69c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7a20();
    _objc_release(puVar4);
    _objc_release(lVar5);
    _objc_release(lVar3);
    lVar3 = lVar2;
    func_0x00010bfe7200(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c0f0040();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c0b69c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d78a0();
    _objc_release(puVar4);
    _objc_release(lVar5);
    _objc_release(lVar3);
    lVar3 = lVar2;
    func_0x00010bfe7200(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c0f04e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c0b69c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7980();
    _objc_release(puVar4);
    _objc_release(lVar5);
    _objc_release(lVar3);
  }
  lVar3 = lVar2;
  func_0x00010c2711a0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(puVar1);
  _objc_release(lVar3);
  lVar3 = lVar2;
  func_0x00010bf3c7e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17c900(puVar1);
  _objc_release(lVar3);
  lVar3 = lVar2;
  func_0x00010bf833e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18f4a0(puVar1);
  _objc_release(lVar3);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lVar3 = lVar2;
  func_0x00010c25e400();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar12 = *plStack_140;
    do {
      lVar11 = 0;
      do {
        if (*plStack_140 != lVar12) {
          _objc_enumerationMutation(lVar3);
        }
        puVar6 = PTR___NSConcreteStackBlock_11034bd00;
        uVar10 = *(undefined8 *)(lStack_148 + lVar11 * 8);
        puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_170 = 0xc2000000;
        pcStack_168 = FUN_104ca2a90;
        puStack_160 = &UNK_1108450c8;
        _objc_retain(puVar4);
        puStack_1a0 = puVar6;
        uStack_198 = 0xc2000000;
        pcStack_190 = FUN_104ca2b24;
        puStack_188 = &UNK_110846600;
        puStack_158 = puVar4;
        _objc_retain(puVar4);
        puStack_180 = puVar4;
        func_0x00010c0be4c0(uVar10);
        _objc_release(puStack_180);
        _objc_release(puStack_158);
        lVar11 = lVar11 + 1;
      } while (lVar5 != lVar11);
      lVar5 = lVar3;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(lVar3);
  func_0x00010c20ec40(puVar1);
  lVar3 = lVar2;
  func_0x00010bf84960(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18f7c0(puVar1);
  _objc_release(lVar3);
  lVar3 = lVar2;
  func_0x00010c0f0100(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d78e0(puVar1);
  _objc_release(lVar3);
  puVar6 = PTR_PTR_1126aeca0;
  _objc_opt_new(PTR_PTR_1126aeca0);
  _objc_initWeak(auStack_1a8,param_1);
  puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c8 = 0xc2000000;
  pcStack_1c0 = FUN_104ca2d78;
  puStack_1b8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_1b0,auStack_1a8);
  func_0x00010c1d1920(puVar6);
  puStack_1f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1f0 = 0xc2000000;
  pcStack_1e8 = FUN_104ca2e34;
  puStack_1e0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_1d8,auStack_1a8);
  func_0x00010c1d2040(puVar6);
  puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_218 = 0xc2000000;
  uStack_210 = 0x104ca2ef0;
  puStack_208 = &UNK_1108434b0;
  _objc_copyWeak(auStack_200,auStack_1a8);
  func_0x00010c1d3c20(puVar6);
  puVar9 = auStack_1a8;
  _objc_copyWeak(auStack_228,puVar9);
  func_0x00010c1d2900(puVar6);
  puVar7 = PTR_PTR_1126aeca8;
  _objc_alloc();
  uVar8 = *(undefined8 *)(param_1 + _DAT_1127100a4);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40();
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_destroyWeak(auStack_228);
  _objc_destroyWeak(auStack_200);
  _objc_destroyWeak(auStack_1d8);
  _objc_destroyWeak(auStack_1b0);
  _objc_destroyWeak(auStack_1a8);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_228);
  _objc_destroyWeak(auStack_200);
  _objc_destroyWeak(auStack_1d8);
  _objc_destroyWeak(auStack_1b0);
  _objc_destroyWeak(auStack_1a8);
  __Unwind_Resume();
  puVar4 = PTR_PTR_1126aecb8;
  uVar10 = *(undefined8 *)(puVar1 + 0x20);
  _objc_retain(puVar9);
  _objc_opt_new(puVar4);
  puVar1 = PTR_PTR_1126aec98;
  _objc_alloc(PTR_PTR_1126aec98);
  func_0x00010c01d020(0x4049000000000000,0x4049000000000000);
  _objc_release(puVar9);
  func_0x00010c1a9f00(puVar4);
  _objc_release(puVar1);
  func_0x00010befa120(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 104ca2a90; end: 104ca2b23;  */

void FUN_104ca2a90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aecb8;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126aec98;
  _objc_alloc(PTR_PTR_1126aec98);
  func_0x00010c01d020(0x4049000000000000,0x4049000000000000);
  _objc_release(param_2);
  func_0x00010c1a9f00(puVar1);
  _objc_release(puVar2);
  func_0x00010befa120(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ca2b24; end: 104ca2d77;  */

void FUN_104ca2b24(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined1 auStack_178 [8];
  long lStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aecb8;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126aecc0;
  _objc_alloc(PTR_PTR_1126aecc0);
  func_0x00010c0511e0();
  func_0x00010c212f20(puVar1);
  lVar3 = param_3;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    uStack_150 = param_4;
    puStack_148 = puVar1;
    uStack_140 = uVar6;
    lStack_138 = param_2;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_3);
    lVar3 = param_3;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar8 = *plStack_120;
      do {
        lVar7 = 0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(param_3);
          }
          puVar1 = PTR_PTR_1126aecc8;
          _objc_alloc(PTR_PTR_1126aecc8);
          lVar5 = param_3;
          func_0x00010c0e00e0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c050440(puVar1);
          func_0x00010befa120(puVar4);
          _objc_release(puVar1);
          _objc_release(lVar5);
          lVar7 = lVar7 + 1;
        } while (lVar3 != lVar7);
        lVar3 = param_3;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(param_3);
    func_0x00010c1bdf80(puVar2);
    _objc_release(puVar4);
    param_2 = lStack_138;
    uVar6 = uStack_140;
    puVar1 = puStack_148;
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21acc0(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(param_3);
  func_0x00010befa120(uVar6);
  _objc_release(puVar1);
  _objc_release(param_3);
  lVar3 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_104ca2d78;
  puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_190 = 0xc2000000;
  pcStack_188 = FUN_104ca2e08;
  puStack_180 = &UNK_1108434b0;
  lStack_170 = param_3;
  lStack_168 = param_2;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_copyWeak(auStack_178,lVar3 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_198);
  _objc_destroyWeak(auStack_178);
  return;
}



/* Entry: 104ca2d78; end: 104ca2e07;  */

void FUN_104ca2d78(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104ca2e08;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104ca2e08; end: 104ca2e33;  */

void FUN_104ca2e08(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ca2e34; end: 104ca2ec3;  */

void FUN_104ca2e34(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104ca2ec4;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104ca2ec4; end: 104ca2f1b;  */

void FUN_104ca2ec4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be28960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ca2f1c; end: 104ca2fd7;  */

void FUN_104ca2f1c(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104ca2fd8;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104ca2fd8; end: 104ca300b;  */

void FUN_104ca2fd8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2b680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ca300c; end: 104ca3057; -[SCInAppTakeoverViewController _handleClicked] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ca300c(long param_1)

{
  param_1 = param_1 + _DAT_1127100ac;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd06a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ca3058; end: 104ca30a3; -[SCInAppTakeoverViewController _handleDismissed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ca3058(long param_1)

{
  param_1 = param_1 + _DAT_1127100ac;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd06c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ca30a4; end: 104ca3107; -[SCInAppTakeoverViewController _handleTapOutside] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ca30a4(long param_1)

{
  if (*(char *)(param_1 + _DAT_1127100b4) == '\x01') {
    param_1 = param_1 + _DAT_1127100ac;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfd0720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104ca3108; end: 104ca315f; -[SCInAppTakeoverViewController _handleLinkClicked:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ca3108(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127100ac;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd16a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ca3160; end: 104ca3167; -[SCInAppTakeoverViewController pageViewName] */

undefined8 FUN_104ca3160(void)

{
  return 0x8a;
}



/* Entry: 104ca3168; end: 104ca31c3; -[SCInAppTakeoverViewController backgroundExitBehavior] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ca3168(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127100b0);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110dad258,1,0);
  if ((int)uVar1 == 0) {
    func_0x00010bf9b4a0(PTR_PTR_1126aecb0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0d83c0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ca31c4; end: 104ca322f; -[SCInAppTakeoverViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ca31c4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127100b8,0);
  _objc_storeStrong(param_1 + _DAT_1127100b0,0);
  _objc_destroyWeak(param_1 + _DAT_1127100ac);
  _objc_storeStrong(param_1 + _DAT_1127100a4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127100a8,0);
  return;
}



/* Entry: 104ca3230; end: 104ca352b; -[SCInAppTakeoverEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ca3230(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar1 = param_1 + _DAT_1127100bc;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_initWeak(auStack_68,param_1);
  puVar3 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126aecd0;
  _objc_alloc();
  lVar1 = param_1 + _DAT_1127100c0;
  _objc_loadWeakRetained();
  lVar5 = lVar1;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_1127100c4;
  _objc_loadWeakRetained();
  lVar6 = lVar16;
  func_0x00010bfbb580();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_1127100cc;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bdc43c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_1127100d0;
  lVar10 = param_1 + lVar17;
  _objc_loadWeakRetained(lVar10);
  lVar11 = lVar10;
  func_0x00010befd260();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_1127100d4;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05fee0(puVar4);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar16);
  _objc_release(lVar5);
  _objc_release(lVar1);
  puVar14 = PTR_PTR_1126aecd8;
  _objc_alloc();
  lVar17 = param_1 + lVar17;
  _objc_loadWeakRetained(lVar17);
  lVar1 = param_1 + _DAT_1127100d8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c01d580();
  lVar16 = (long)_DAT_1127100dc;
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar14;
  _objc_release(uVar15);
  _objc_release(lVar1);
  _objc_release(lVar17);
  func_0x00010bf192c0(*(undefined8 *)(param_1 + lVar16));
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar2);
  return;
}



/* Entry: 104ca352c; end: 104ca356b;  */

void FUN_104ca352c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010beca6c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104ca356c; end: 104ca36f7; -[SCInAppTakeoverEntryPoint _takeoverProviders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ca356c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127100e4);
  }
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x104ca364c;
  puStack_40 = &UNK_110846630;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104ca36f8;
  puStack_68 = &UNK_110846660;
  puStack_60 = puVar1;
  lStack_38 = param_1;
  _objc_retain(puVar1);
  func_0x00010bf9d5c0(uVar3,param_2,&puStack_58,&puStack_80);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_60);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ca36f8; end: 104ca3703;  */

void FUN_104ca36f8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 104ca3704; end: 104ca37f7; -[SCInAppTakeoverEntryPoint _actionHandlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ca3704(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  if (param_1 == 0) {
    lVar3 = 0;
    uVar4 = 0;
  }
  else {
    lVar3 = param_1 + _DAT_1127100e0;
    _objc_loadWeakRetained();
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127100e8);
  }
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104ca3844;
  puStack_48 = &UNK_110844e40;
  lStack_40 = lVar3;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  _objc_retain(lVar3);
  func_0x00010bf9d5c0(uVar4,param_2,&PTR___NSConcreteGlobalBlock_110846690,&puStack_60);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(lStack_40);
  _objc_release(puVar1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ca37f8; end: 104ca3843;  */

void FUN_104ca37f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae9f8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c037380();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ca3844; end: 104ca38ab;  */

void FUN_104ca3844(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0d3c80(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf22660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(param_2);
  _objc_release(uVar1);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ca38ac; end: 104ca396b; -[SCInAppTakeoverEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ca38ac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127100c8,0);
  _objc_storeStrong(param_1 + _DAT_1127100e8,0);
  _objc_storeStrong(param_1 + _DAT_1127100e4,0);
  _objc_destroyWeak(param_1 + _DAT_1127100cc);
  _objc_destroyWeak(param_1 + _DAT_1127100d8);
  _objc_destroyWeak(param_1 + _DAT_1127100e0);
  _objc_destroyWeak(param_1 + _DAT_1127100c4);
  _objc_destroyWeak(param_1 + _DAT_1127100c0);
  _objc_destroyWeak(param_1 + _DAT_1127100d0);
  _objc_destroyWeak(param_1 + _DAT_1127100bc);
  _objc_destroyWeak(param_1 + _DAT_1127100d4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127100dc,0);
  return;
}



/* Entry: 104ca396c; end: 104ca3a8f; -[SCBillboardInAppTakeoverWorkflow initWithInAppTakeoverScope:takeoverProviders:defaultTakeoverProvider:featureSettingsService:inAppTakeoverPluginFactoryServices:] */

undefined1 *
FUN_104ca396c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e3968;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ca3a90; end: 104ca3c6b; -[SCBillboardInAppTakeoverWorkflow beginWorkflow] */

void FUN_104ca3a90(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf19ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar7);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010befd260();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar3);
  _objc_retain(uVar7);
  _objc_retain(uVar1);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(uVar6);
  uVar5 = uVar2;
  _objc_retain(uVar2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 104ca3c6c; end: 104ca3f8b;  */

void FUN_104ca3c6c(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = param_2;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126aece8;
  _objc_alloc();
  func_0x00010bff2580();
  ppuVar3 = *(undefined ***)(param_1 + 0x28);
  func_0x00010bf21f80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c101e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  puVar5 = puVar1;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain();
  puVar6 = puVar5;
  func_0x00010bf52a60();
  ppuVar3 = ppuVar4;
  if (puVar6 != (undefined *)0x0) {
    ppuVar3 = (undefined **)*puStack_120;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if ((undefined **)*puStack_120 != ppuVar3) {
          _objc_enumerationMutation(puVar5);
        }
        uVar11 = *(undefined8 *)(lStack_128 + (long)puVar10 * 8);
        uVar7 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010bf2bf80(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar11;
        func_0x00010bf2d660();
        _objc_release(uVar7);
        if ((int)uVar9 != 0) {
          lVar8 = param_1 + 0x48;
          _objc_loadWeakRetained();
          if (lVar8 != 0) {
            _objc_retain(uVar11);
            uVar9 = *(undefined8 *)(lVar8 + 0x30);
            *(undefined8 *)(lVar8 + 0x30) = uVar11;
            _objc_release(uVar9);
          }
          uVar9 = *(undefined8 *)(param_1 + 0x38);
          func_0x00010c269d40(uVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26f320();
          func_0x00010c1b8c00(uVar9);
          _objc_release(puVar6);
          _objc_release(uVar9);
          puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_150 = 0xc2000000;
          pcStack_148 = FUN_104ca3f8c;
          puStack_140 = &UNK_1108434b0;
          ppuVar3 = &puStack_158;
          _objc_copyWeak(auStack_138,param_1 + 0x48);
          func_0x00010c236720(uVar11);
          _objc_destroyWeak(auStack_138);
          _objc_release(lVar8);
          puVar6 = puVar5;
          goto LAB_104ca3efc;
        }
        puVar10 = puVar10 + 1;
      } while (puVar6 != puVar10);
      puVar6 = puVar5;
      func_0x00010bf52a60();
    } while (puVar6 != (undefined *)0x0);
  }
  _objc_release(puVar5);
  puVar6 = (undefined *)(param_1 + 0x48);
  _objc_loadWeakRetained();
  func_0x00010beb94a0();
LAB_104ca3efc:
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar3 + 4);
  __Unwind_Resume(param_2);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010beca6a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ca3f8c; end: 104ca3fb7;  */

void FUN_104ca3f8c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beca6a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ca3fb8; end: 104ca40af; -[SCBillboardInAppTakeoverWorkflow _showGenericTakeover] */

void FUN_104ca3fb8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf19ca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c27ece0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c236720(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104ca40b0; end: 104ca40db;  */

void FUN_104ca40b0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beca6a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ca40dc; end: 104ca4183; -[SCBillboardInAppTakeoverWorkflow _takeoverCompleted] */

void FUN_104ca40dc(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104ca4184;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104ca4184; end: 104ca41f3;  */

void FUN_104ca4184(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c27ece0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f440();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf6b020(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfeb2e0();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ca41f4; end: 104ca4253; -[SCBillboardInAppTakeoverWorkflow .cxx_destruct] */

void FUN_104ca41f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ca4254; end: 104ca425f; -[SCFeatureSettingsService hasTakeoverTimestampSeconds] */

void FUN_104ca4254(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dad278);
  return;
}



/* Entry: 104ca4260; end: 104ca426b; -[SCFeatureSettingsService lastTakeoverTimestampSecondsServerParam] */

undefined ** FUN_104ca4260(void)

{
  return &PTR____CFConstantStringClassReference_110dad278;
}



/* Entry: 104ca426c; end: 104ca427b; -[SCFeatureSettingsService setLastTakeoverTimestampSeconds:] */

void FUN_104ca426c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110dad278,param_3);
  return;
}



/* Entry: 104ca427c; end: 104ca4283; -[SCFeatureSettingsService LAST_TAKEOVER_TIMESTAMP_SECONDS_client_value:] */

void FUN_104ca427c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 104ca4284; end: 104ca428b; -[SCFeatureSettingsService LAST_TAKEOVER_TIMESTAMP_SECONDS_server_value:] */

void FUN_104ca4284(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 104ca428c; end: 104ca429b; -[SCFeatureSettingsService lastTakeoverTimestampSeconds] */

void FUN_104ca428c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110dad278,0);
  return;
}



/* Entry: 104ca429c; end: 104ca42a7; -[SCFeatureSettingsService hasIncentiveCampaignSnapPlusInviteDisabled] */

void FUN_104ca429c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dad298);
  return;
}



/* Entry: 104ca42a8; end: 104ca42b3; -[SCFeatureSettingsService isIncentiveCampaignSnapPlusInviteDisabledServerParam] */

undefined ** FUN_104ca42a8(void)

{
  return &PTR____CFConstantStringClassReference_110dad298;
}



/* Entry: 104ca42b4; end: 104ca42bb; -[SCFeatureSettingsService IS_INCENTIVE_CAMPAIGN_SNAP_PLUS_INVITE_DISABLED_client_value:] */

undefined * FUN_104ca42b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 104ca42bc; end: 104ca42c3; -[SCFeatureSettingsService IS_INCENTIVE_CAMPAIGN_SNAP_PLUS_INVITE_DISABLED_server_value:] */

void FUN_104ca42bc(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 104ca42c4; end: 104ca42d3; -[SCFeatureSettingsService isIncentiveCampaignSnapPlusInviteDisabled] */

void FUN_104ca42c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110dad298,1);
  return;
}



/* Entry: 104ca42d4; end: 104ca42df; -[SCFeatureSettingsService hasIncentiveCampaignSnapPlusRewardClaimable] */

void FUN_104ca42d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dad2b8);
  return;
}



/* Entry: 104ca42e0; end: 104ca42eb; -[SCFeatureSettingsService isIncentiveCampaignSnapPlusRewardClaimableServerParam] */

undefined ** FUN_104ca42e0(void)

{
  return &PTR____CFConstantStringClassReference_110dad2b8;
}



/* Entry: 104ca42ec; end: 104ca42fb; -[SCFeatureSettingsService setIncentiveCampaignSnapPlusRewardClaimable:] */

void FUN_104ca42ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110dad2b8,param_3);
  return;
}



/* Entry: 104ca42fc; end: 104ca4303; -[SCFeatureSettingsService IS_INCENTIVE_CAMPAIGN_SNAP_PLUS_REWARD_CLAIMABLE_client_value:] */

undefined * FUN_104ca42fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 104ca4304; end: 104ca430b; -[SCFeatureSettingsService IS_INCENTIVE_CAMPAIGN_SNAP_PLUS_REWARD_CLAIMABLE_server_value:] */

void FUN_104ca4304(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 104ca430c; end: 104ca431b; -[SCFeatureSettingsService isIncentiveCampaignSnapPlusRewardClaimable] */

void FUN_104ca430c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110dad2b8,0);
  return;
}



/* Entry: 104ca431c; end: 104ca437f; -[SCPasskeyLoginGrapheneImpl init] */

undefined1 * FUN_104ca431c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3970;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126aecf0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104ca4380; end: 104ca453b; -[SCPasskeyLoginGrapheneImpl logMetric:] */

void FUN_104ca4380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104ca453c;
  puStack_30 = &UNK_110842e18;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104ca454c;
  puStack_58 = &UNK_1108466e0;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x104ca459c;
  puStack_80 = &UNK_110846710;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x104ca45e8;
  puStack_a8 = &UNK_110846740;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x104ca4638;
  puStack_d0 = &UNK_110846770;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x104ca46a0;
  puStack_f8 = &UNK_1108467a0;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x104ca46e8;
  puStack_120 = &UNK_110846710;
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  uStack_150 = 0x104ca4730;
  puStack_148 = &UNK_110846770;
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  uStack_178 = 0x104ca4798;
  puStack_170 = &UNK_110846770;
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0xc2000000;
  uStack_1a0 = 0x104ca4800;
  puStack_198 = &UNK_1108466e0;
  puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d0 = 0xc2000000;
  pcStack_1c8 = FUN_104ca4850;
  puStack_1c0 = &UNK_1108466e0;
  puStack_200 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1f8 = 0xc2000000;
  pcStack_1f0 = FUN_104ca4860;
  puStack_1e8 = &UNK_110846740;
  puStack_228 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_220 = 0xc2000000;
  uStack_218 = 0x104ca48b0;
  puStack_210 = &UNK_1108466e0;
  uStack_208 = param_1;
  uStack_1e0 = param_1;
  uStack_1b8 = param_1;
  uStack_190 = param_1;
  uStack_168 = param_1;
  uStack_140 = param_1;
  uStack_118 = param_1;
  uStack_f0 = param_1;
  uStack_c8 = param_1;
  uStack_a0 = param_1;
  uStack_78 = param_1;
  uStack_50 = param_1;
  uStack_28 = param_1;
  func_0x00010c0c0380(param_3,param_2,&puStack_48,&puStack_70,&puStack_98,&puStack_c0,&puStack_e8,
                      &puStack_110,&puStack_138,&puStack_160,&puStack_188,&puStack_1b0,&puStack_1d8,
                      &puStack_200,&puStack_228);
  return;
}



/* Entry: 104ca453c; end: 104ca454b;  */

void FUN_104ca453c(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  if (lVar1 != 0) {
    plVar2 = *(long **)(lVar1 + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110846aa0,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104ca454c; end: 104ca484f;  */

void FUN_104ca454c(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_104ca5954(*(undefined8 *)(*(long *)(param_3 + 0x20) + 8),1);
                    /* WARNING: Could not recover jumptable at 0x00010be576d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,*(undefined8 *)(param_3 + 0x20),
             PTR_s__logQueryOptionsLatency_overallL_112573750,
             &PTR____CFConstantStringClassReference_110dad2d8);
  return;
}



/* Entry: 104ca4850; end: 104ca485f;  */

void FUN_104ca4850(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be5a730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logVerifyLatency_overallLatency_112574368,
             &PTR____CFConstantStringClassReference_110dad358);
  return;
}



/* Entry: 104ca4860; end: 104ca48ff;  */

void FUN_104ca4860(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_104ca617c(*(undefined8 *)(*(long *)(param_3 + 0x20) + 8),param_4,1);
                    /* WARNING: Could not recover jumptable at 0x00010be5a730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,*(undefined8 *)(param_3 + 0x20),
             PTR_s__logVerifyLatency_overallLatency_112574368,
             &PTR____CFConstantStringClassReference_110dad2d8);
  return;
}



/* Entry: 104ca4900; end: 104ca4947; -[SCPasskeyLoginGrapheneImpl _logQueryOptionsLatency:overallLatency:result:] */

void FUN_104ca4900(undefined8 param_1,double param_2,long param_3)

{
  long lVar1;
  
  FUN_104ca64dc(*(undefined8 *)(param_3 + 8),&PTR____CFConstantStringClassReference_110dad2d8);
  lVar1 = *(long *)(param_3 + 8);
  _objc_retain(&PTR____CFConstantStringClassReference_110dad2d8);
  if (lVar1 != 0) {
    FUN_104ca6ae8(lVar1,&PTR____CFConstantStringClassReference_110dad2d8,(long)(param_2 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(&PTR____CFConstantStringClassReference_110dad2d8);
  return;
}



/* Entry: 104ca4948; end: 104ca498f; -[SCPasskeyLoginGrapheneImpl _logFetchOptionsLatency:overallLatency:result:] */

void FUN_104ca4948(undefined8 param_1,double param_2,long param_3)

{
  long lVar1;
  
  FUN_104ca66bc(*(undefined8 *)(param_3 + 8),&PTR____CFConstantStringClassReference_110dad2d8);
  lVar1 = *(long *)(param_3 + 8);
  _objc_retain(&PTR____CFConstantStringClassReference_110dad2d8);
  if (lVar1 != 0) {
    FUN_104ca6ae8(lVar1,&PTR____CFConstantStringClassReference_110dad2d8,(long)(param_2 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(&PTR____CFConstantStringClassReference_110dad2d8);
  return;
}



/* Entry: 104ca4990; end: 104ca499b; -[SCPasskeyLoginGrapheneImpl _logCreateCredentialLatency:result:] */

void FUN_104ca4990(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 8);
  _objc_retain(param_4);
  if (lVar1 != 0) {
    FUN_104ca6728(lVar1,param_4,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104ca499c; end: 104ca4a03; -[SCPasskeyLoginGrapheneImpl _logVerifyLatency:overallLatency:result:] */

void FUN_104ca499c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  _objc_retain(param_5);
  FUN_104ca6a7c(param_1,uVar1,param_5);
  FUN_104ca6e3c(param_2,*(undefined8 *)(param_3 + 8),param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104ca4a04; end: 104ca4a0f; -[SCPasskeyLoginGrapheneImpl .cxx_destruct] */

void FUN_104ca4a04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ca4a10; end: 104ca4a73; -[SCPasskeyLoginAlertGrapheneImpl init] */

undefined1 * FUN_104ca4a10(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3978;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126aecf8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104ca4a74; end: 104ca4acb; -[SCPasskeyLoginAlertGrapheneImpl logMetric:] */

void FUN_104ca4a74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104ca4acc;
  puStack_20 = &UNK_110841f20;
  uStack_18 = param_1;
  func_0x00010c0beb40(param_3,param_2,&puStack_38);
  return;
}



/* Entry: 104ca4acc; end: 104ca4af3;  */

void FUN_104ca4acc(undefined8 param_1,long param_2,int param_3)

{
  undefined **ppuVar1;
  long lVar2;
  char *pcVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad3f8;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad418;
  }
  lVar2 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  puVar8 = (undefined1 *)0x1;
  puVar9 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar1);
  if (lVar2 != 0) {
    plVar10 = *(long **)(lVar2 + 8);
    _objc_retain(ppuVar1);
    if (ppuVar1 == (undefined **)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)ppuVar1;
      _objc_retainAutorelease(ppuVar1);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar1);
    func_0x00010002b838(auStack_60,pcVar3);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108470f0,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar8 = (undefined1 *)puVar9;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar8 = (undefined1 *)puVar9;
    }
  }
  ppuVar4 = ppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar1);
  _objc_release(ppuVar1);
  __Unwind_Resume(ppuVar4);
  _objc_retain(puVar8);
  puVar5 = PTR_PTR_1126aed08;
  _objc_alloc();
  puVar6 = puVar5;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  *(undefined8 *)(puVar6 + 8) = 5;
  uVar7 = *(undefined8 *)(puVar6 + 0x58);
  *(undefined1 **)(puVar6 + 0x58) = puVar8;
  _objc_release(uVar7);
  *(undefined8 *)(puVar6 + 0x60) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104ca4af4; end: 104ca4aff; -[SCPasskeyLoginAlertGrapheneImpl .cxx_destruct] */

void FUN_104ca4af4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ca4b00; end: 104ca4b63; -[SCLoginOptionsGrapheneImpl init] */

undefined1 * FUN_104ca4b00(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3980;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126aed00;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104ca4b64; end: 104ca4c5f; -[SCLoginOptionsGrapheneImpl logMetric:] */

void FUN_104ca4b64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104ca4c60;
  puStack_30 = &UNK_1108450c8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104ca4c70;
  puStack_58 = &UNK_1108467d0;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x104ca4cec;
  puStack_80 = &UNK_1108467a0;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_104ca4d60;
  puStack_a8 = &UNK_110842e18;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x104ca4d70;
  puStack_d0 = &UNK_110841f20;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x104ca4d98;
  puStack_f8 = &UNK_110842e18;
  uStack_f0 = param_1;
  uStack_c8 = param_1;
  uStack_a0 = param_1;
  uStack_78 = param_1;
  uStack_50 = param_1;
  uStack_28 = param_1;
  func_0x00010c0bdce0(param_3,param_2,&puStack_48,&puStack_70,&puStack_98,&puStack_c0,&puStack_e8,
                      &puStack_110);
  return;
}



/* Entry: 104ca4c60; end: 104ca4c6f;  */

void FUN_104ca4c60(double param_1,long param_2,char *param_3,undefined8 param_4,char *param_5)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long *plVar12;
  char *pcVar13;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char acStack_238 [24];
  char *pcStack_220;
  undefined8 auStack_218 [2];
  char cStack_201;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  char *pcStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  char acStack_1a0 [24];
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  char *pcStack_148;
  char *pcStack_140;
  char *pcStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_118 [24];
  char *pcStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  pcVar8 = (char *)0x1;
  pcVar3 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_3;
  _objc_retain(param_3);
  if (lVar1 != 0) {
    plVar12 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x23 = (char *)auStack_60;
    func_0x00010002b838(auStack_60,pcVar2);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar2 = "";
    param_5 = (char *)0x1;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110846800,acStack_80,1);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar8 = pcVar3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar8 = pcVar3;
    }
  }
  pcVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_88 = FUN_104ca4f9c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar2;
  pcVar5 = pcVar8;
  pcVar11 = param_5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar2);
  _objc_retain(pcVar8);
  pcVar13 = (char *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,pcVar3);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar3 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_e0,pcVar3);
    acStack_118[0] = '\0';
    acStack_118[1] = '\0';
    acStack_118[2] = '\0';
    acStack_118[3] = '\0';
    acStack_118[4] = '\0';
    acStack_118[5] = '\0';
    acStack_118[6] = '\0';
    acStack_118[7] = '\0';
    acStack_118[8] = '\0';
    acStack_118[9] = '\0';
    acStack_118[10] = '\0';
    acStack_118[0xb] = '\0';
    acStack_118[0xc] = '\0';
    acStack_118[0xd] = '\0';
    acStack_118[0xe] = '\0';
    acStack_118[0xf] = '\0';
    acStack_118[0x10] = '\0';
    acStack_118[0x11] = '\0';
    acStack_118[0x12] = '\0';
    acStack_118[0x13] = '\0';
    acStack_118[0x14] = '\0';
    acStack_118[0x15] = '\0';
    acStack_118[0x16] = '\0';
    acStack_118[0x17] = '\0';
    func_0x00010007e1e8(acStack_118,auStack_f8,&lStack_c8,2);
    pcVar6 = "";
    unaff_x23 = acStack_118;
    pcVar5 = acStack_118;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110846850,pcVar5,param_5);
    pcStack_100 = unaff_x23;
    func_0x00010007e5dc(&pcStack_100);
    lVar1 = 0;
    pcVar13 = (char *)auStack_f8;
    pcVar11 = param_5;
    do {
      if ((&cStack_c9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar3 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar2);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcVar10 = acStack_1a0;
  pcStack_128 = FUN_104ca51cc;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar6;
  pcVar9 = pcVar5;
  puStack_160 = unaff_x24;
  pcStack_158 = unaff_x23;
  puStack_150 = (undefined8 *)pcVar13;
  pcStack_148 = pcVar3;
  pcStack_140 = pcVar8;
  pcStack_138 = pcVar2;
  ppuStack_130 = &puStack_90;
  _objc_retain(pcVar6);
  plVar12 = (long *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar12 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    unaff_x23 = (char *)auStack_180;
    func_0x00010002b838(auStack_180,pcVar2);
    acStack_1a0[0] = '\0';
    acStack_1a0[1] = '\0';
    acStack_1a0[2] = '\0';
    acStack_1a0[3] = '\0';
    acStack_1a0[4] = '\0';
    acStack_1a0[5] = '\0';
    acStack_1a0[6] = '\0';
    acStack_1a0[7] = '\0';
    acStack_1a0[8] = '\0';
    acStack_1a0[9] = '\0';
    acStack_1a0[10] = '\0';
    acStack_1a0[0xb] = '\0';
    acStack_1a0[0xc] = '\0';
    acStack_1a0[0xd] = '\0';
    acStack_1a0[0xe] = '\0';
    acStack_1a0[0xf] = '\0';
    acStack_1a0[0x10] = '\0';
    acStack_1a0[0x11] = '\0';
    acStack_1a0[0x12] = '\0';
    acStack_1a0[0x13] = '\0';
    acStack_1a0[0x14] = '\0';
    acStack_1a0[0x15] = '\0';
    acStack_1a0[0x16] = '\0';
    acStack_1a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_1a0,auStack_180,&lStack_168,1);
    pcVar7 = "";
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108468a0,acStack_1a0,pcVar5);
    puStack_188 = acStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    pcVar9 = pcVar10;
    pcVar11 = pcVar5;
    pcVar13 = acStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      pcVar9 = pcVar10;
      pcVar11 = pcVar5;
      pcVar13 = acStack_1a0;
    }
  }
  pcVar2 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  _objc_release(pcVar6);
  pcVar5 = pcVar2;
  __Unwind_Resume();
  pcStack_1a8 = FUN_104ca5340;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar7;
  pcVar3 = pcVar9;
  puStack_1e0 = unaff_x24;
  pcStack_1d8 = unaff_x23;
  puStack_1d0 = (undefined8 *)pcVar13;
  plStack_1c8 = plVar12;
  pcStack_1c0 = pcVar2;
  pcStack_1b8 = pcVar6;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(pcVar7);
  _objc_retain(pcVar9);
  if (pcVar5 != (char *)0x0) {
    plVar12 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_218,pcVar2);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar2 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_200,pcVar2);
    acStack_238[0] = '\0';
    acStack_238[1] = '\0';
    acStack_238[2] = '\0';
    acStack_238[3] = '\0';
    acStack_238[4] = '\0';
    acStack_238[5] = '\0';
    acStack_238[6] = '\0';
    acStack_238[7] = '\0';
    acStack_238[8] = '\0';
    acStack_238[9] = '\0';
    acStack_238[10] = '\0';
    acStack_238[0xb] = '\0';
    acStack_238[0xc] = '\0';
    acStack_238[0xd] = '\0';
    acStack_238[0xe] = '\0';
    acStack_238[0xf] = '\0';
    acStack_238[0x10] = '\0';
    acStack_238[0x11] = '\0';
    acStack_238[0x12] = '\0';
    acStack_238[0x13] = '\0';
    acStack_238[0x14] = '\0';
    acStack_238[0x15] = '\0';
    acStack_238[0x16] = '\0';
    acStack_238[0x17] = '\0';
    func_0x00010007e1e8(acStack_238,auStack_218,&lStack_1e8,2);
    pcVar8 = "\x01";
    pcVar3 = acStack_238;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108468f0,pcVar3,pcVar11);
    pcStack_220 = acStack_238;
    func_0x00010007e5dc(&pcStack_220);
    lVar1 = 0;
    do {
      if ((&cStack_1e9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_200 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar9);
  pcVar2 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_201 < '\0') {
    __ZdlPv(auStack_218[0]);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar7);
  __Unwind_Resume();
  _objc_retain(pcVar8);
  _objc_retain(pcVar3);
  if (pcVar2 != (char *)0x0) {
    FUN_104ca5340(pcVar2,pcVar8,pcVar3,(long)(param_1 * 1000.0));
  }
  _objc_release(pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar8);
  return;
}



/* Entry: 104ca4c70; end: 104ca4d5f;  */

void FUN_104ca4c70(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 8);
  _objc_retain(param_3);
  FUN_104ca4f9c(uVar1,param_4,param_3,1);
  FUN_104ca5570(param_1,*(undefined8 *)(*(long *)(param_2 + 0x20) + 8),
                &PTR____CFConstantStringClassReference_110dad2d8,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ca4d60; end: 104ca4da7;  */

void FUN_104ca4d60(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  if (lVar1 != 0) {
    plVar2 = *(long **)(lVar1 + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110846990,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104ca4da8; end: 104ca4db3; -[SCLoginOptionsGrapheneImpl .cxx_destruct] */

void FUN_104ca4da8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ca4db4; end: 104ca4e27; -[SCGrapheneLoginOptionsMetric2 init] */

undefined1 * FUN_104ca4db4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3988;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104ca4e28; end: 104ca4f9b;  */

void FUN_104ca4e28(double param_1,long param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long *plVar11;
  long lVar12;
  char *pcVar13;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char acStack_238 [24];
  char *pcStack_220;
  undefined8 auStack_218 [2];
  char cStack_201;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  char *pcStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  char acStack_1a0 [24];
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  char *pcStack_148;
  char *pcStack_140;
  char *pcStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_118 [24];
  char *pcStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar7 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar11 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x23 = (char *)auStack_60;
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110846800,acStack_80,param_4);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar7 = pcVar2;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar7 = pcVar2;
      param_5 = param_4;
    }
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_88 = FUN_104ca4f9c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar4 = pcVar7;
  pcVar10 = param_5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar7);
  pcVar13 = (char *)0x0;
  if (pcVar2 != (char *)0x0) {
    plVar11 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_118[0] = '\0';
    acStack_118[1] = '\0';
    acStack_118[2] = '\0';
    acStack_118[3] = '\0';
    acStack_118[4] = '\0';
    acStack_118[5] = '\0';
    acStack_118[6] = '\0';
    acStack_118[7] = '\0';
    acStack_118[8] = '\0';
    acStack_118[9] = '\0';
    acStack_118[10] = '\0';
    acStack_118[0xb] = '\0';
    acStack_118[0xc] = '\0';
    acStack_118[0xd] = '\0';
    acStack_118[0xe] = '\0';
    acStack_118[0xf] = '\0';
    acStack_118[0x10] = '\0';
    acStack_118[0x11] = '\0';
    acStack_118[0x12] = '\0';
    acStack_118[0x13] = '\0';
    acStack_118[0x14] = '\0';
    acStack_118[0x15] = '\0';
    acStack_118[0x16] = '\0';
    acStack_118[0x17] = '\0';
    func_0x00010007e1e8(acStack_118,auStack_f8,&lStack_c8,2);
    pcVar5 = "";
    unaff_x23 = acStack_118;
    pcVar4 = acStack_118;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110846850,pcVar4,param_5);
    pcStack_100 = unaff_x23;
    func_0x00010007e5dc(&pcStack_100);
    lVar12 = 0;
    pcVar13 = (char *)auStack_f8;
    pcVar10 = param_5;
    do {
      if ((&cStack_c9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcVar9 = acStack_1a0;
  pcStack_128 = FUN_104ca51cc;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar5;
  pcVar8 = pcVar4;
  puStack_160 = unaff_x24;
  pcStack_158 = unaff_x23;
  puStack_150 = (undefined8 *)pcVar13;
  pcStack_148 = pcVar2;
  pcStack_140 = pcVar7;
  pcStack_138 = pcVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(pcVar5);
  plVar11 = (long *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar11 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    unaff_x23 = (char *)auStack_180;
    func_0x00010002b838(auStack_180,pcVar1);
    acStack_1a0[0] = '\0';
    acStack_1a0[1] = '\0';
    acStack_1a0[2] = '\0';
    acStack_1a0[3] = '\0';
    acStack_1a0[4] = '\0';
    acStack_1a0[5] = '\0';
    acStack_1a0[6] = '\0';
    acStack_1a0[7] = '\0';
    acStack_1a0[8] = '\0';
    acStack_1a0[9] = '\0';
    acStack_1a0[10] = '\0';
    acStack_1a0[0xb] = '\0';
    acStack_1a0[0xc] = '\0';
    acStack_1a0[0xd] = '\0';
    acStack_1a0[0xe] = '\0';
    acStack_1a0[0xf] = '\0';
    acStack_1a0[0x10] = '\0';
    acStack_1a0[0x11] = '\0';
    acStack_1a0[0x12] = '\0';
    acStack_1a0[0x13] = '\0';
    acStack_1a0[0x14] = '\0';
    acStack_1a0[0x15] = '\0';
    acStack_1a0[0x16] = '\0';
    acStack_1a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_1a0,auStack_180,&lStack_168,1);
    pcVar6 = "";
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1108468a0,acStack_1a0,pcVar4);
    puStack_188 = acStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    pcVar8 = pcVar9;
    pcVar10 = pcVar4;
    pcVar13 = acStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      pcVar8 = pcVar9;
      pcVar10 = pcVar4;
      pcVar13 = acStack_1a0;
    }
  }
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  _objc_release(pcVar5);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  pcStack_1a8 = FUN_104ca5340;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar6;
  pcVar2 = pcVar8;
  puStack_1e0 = unaff_x24;
  pcStack_1d8 = unaff_x23;
  puStack_1d0 = (undefined8 *)pcVar13;
  plStack_1c8 = plVar11;
  pcStack_1c0 = pcVar1;
  pcStack_1b8 = pcVar5;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(pcVar6);
  _objc_retain(pcVar8);
  if (pcVar4 != (char *)0x0) {
    plVar11 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_218,pcVar1);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar1 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_200,pcVar1);
    acStack_238[0] = '\0';
    acStack_238[1] = '\0';
    acStack_238[2] = '\0';
    acStack_238[3] = '\0';
    acStack_238[4] = '\0';
    acStack_238[5] = '\0';
    acStack_238[6] = '\0';
    acStack_238[7] = '\0';
    acStack_238[8] = '\0';
    acStack_238[9] = '\0';
    acStack_238[10] = '\0';
    acStack_238[0xb] = '\0';
    acStack_238[0xc] = '\0';
    acStack_238[0xd] = '\0';
    acStack_238[0xe] = '\0';
    acStack_238[0xf] = '\0';
    acStack_238[0x10] = '\0';
    acStack_238[0x11] = '\0';
    acStack_238[0x12] = '\0';
    acStack_238[0x13] = '\0';
    acStack_238[0x14] = '\0';
    acStack_238[0x15] = '\0';
    acStack_238[0x16] = '\0';
    acStack_238[0x17] = '\0';
    func_0x00010007e1e8(acStack_238,auStack_218,&lStack_1e8,2);
    pcVar7 = "\x01";
    pcVar2 = acStack_238;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1108468f0,pcVar2,pcVar10);
    pcStack_220 = acStack_238;
    func_0x00010007e5dc(&pcStack_220);
    lVar12 = 0;
    do {
      if ((&cStack_1e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_200 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar1 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_201 < '\0') {
    __ZdlPv(auStack_218[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar6);
  __Unwind_Resume();
  _objc_retain(pcVar7);
  _objc_retain(pcVar2);
  if (pcVar1 != (char *)0x0) {
    FUN_104ca5340(pcVar1,pcVar7,pcVar2,(long)(param_1 * 1000.0));
  }
  _objc_release(pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar7);
  return;
}



/* Entry: 104ca4f9c; end: 104ca51cb;  */

void FUN_104ca4f9c(double param_1,long param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  long *plVar11;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char acStack_1b8 [24];
  char *pcStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  char *pcStack_140;
  char *pcStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_120 [24];
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar5 = param_4;
  pcVar9 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  pcVar4 = (char *)0x0;
  if (param_2 != 0) {
    plVar11 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar5 = acStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110846850,pcVar5,param_5);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar10 = 0;
    pcVar4 = (char *)auStack_78;
    pcVar9 = param_5;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(param_4);
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcVar6 = acStack_120;
  pcStack_a8 = FUN_104ca51cc;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar8 = pcVar5;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = (undefined8 *)pcVar4;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_4;
  pcStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  plVar11 = (long *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar11 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x23 = (char *)auStack_100;
    func_0x00010002b838(auStack_100,pcVar4);
    acStack_120[0] = '\0';
    acStack_120[1] = '\0';
    acStack_120[2] = '\0';
    acStack_120[3] = '\0';
    acStack_120[4] = '\0';
    acStack_120[5] = '\0';
    acStack_120[6] = '\0';
    acStack_120[7] = '\0';
    acStack_120[8] = '\0';
    acStack_120[9] = '\0';
    acStack_120[10] = '\0';
    acStack_120[0xb] = '\0';
    acStack_120[0xc] = '\0';
    acStack_120[0xd] = '\0';
    acStack_120[0xe] = '\0';
    acStack_120[0xf] = '\0';
    acStack_120[0x10] = '\0';
    acStack_120[0x11] = '\0';
    acStack_120[0x12] = '\0';
    acStack_120[0x13] = '\0';
    acStack_120[0x14] = '\0';
    acStack_120[0x15] = '\0';
    acStack_120[0x16] = '\0';
    acStack_120[0x17] = '\0';
    func_0x00010007e1e8(acStack_120,auStack_100,&lStack_e8,1);
    pcVar7 = "";
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1108468a0,acStack_120,pcVar5);
    puStack_108 = acStack_120;
    func_0x00010007e5dc(&puStack_108);
    pcVar8 = pcVar6;
    pcVar9 = pcVar5;
    pcVar4 = acStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      pcVar8 = pcVar6;
      pcVar9 = pcVar5;
      pcVar4 = acStack_120;
    }
  }
  pcVar5 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar6 = pcVar5;
  __Unwind_Resume();
  pcStack_128 = FUN_104ca5340;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar7;
  pcVar3 = pcVar8;
  puStack_160 = unaff_x24;
  pcStack_158 = unaff_x23;
  puStack_150 = (undefined8 *)pcVar4;
  plStack_148 = plVar11;
  pcStack_140 = pcVar5;
  pcStack_138 = pcVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(pcVar7);
  _objc_retain(pcVar8);
  if (pcVar6 != (char *)0x0) {
    plVar11 = *(long **)(pcVar6 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_198,pcVar1);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar1 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_180,pcVar1);
    acStack_1b8[0] = '\0';
    acStack_1b8[1] = '\0';
    acStack_1b8[2] = '\0';
    acStack_1b8[3] = '\0';
    acStack_1b8[4] = '\0';
    acStack_1b8[5] = '\0';
    acStack_1b8[6] = '\0';
    acStack_1b8[7] = '\0';
    acStack_1b8[8] = '\0';
    acStack_1b8[9] = '\0';
    acStack_1b8[10] = '\0';
    acStack_1b8[0xb] = '\0';
    acStack_1b8[0xc] = '\0';
    acStack_1b8[0xd] = '\0';
    acStack_1b8[0xe] = '\0';
    acStack_1b8[0xf] = '\0';
    acStack_1b8[0x10] = '\0';
    acStack_1b8[0x11] = '\0';
    acStack_1b8[0x12] = '\0';
    acStack_1b8[0x13] = '\0';
    acStack_1b8[0x14] = '\0';
    acStack_1b8[0x15] = '\0';
    acStack_1b8[0x16] = '\0';
    acStack_1b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1b8,auStack_198,&lStack_168,2);
    pcVar2 = "\x01";
    pcVar3 = acStack_1b8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1108468f0,pcVar3,pcVar9);
    pcStack_1a0 = acStack_1b8;
    func_0x00010007e5dc(&pcStack_1a0);
    lVar10 = 0;
    do {
      if ((&cStack_169)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar1 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar7);
  __Unwind_Resume();
  _objc_retain(pcVar2);
  _objc_retain(pcVar3);
  if (pcVar1 != (char *)0x0) {
    FUN_104ca5340(pcVar1,pcVar2,pcVar3,(long)(param_1 * 1000.0));
  }
  _objc_release(pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar2);
  return;
}



/* Entry: 104ca51cc; end: 104ca533f;  */

void FUN_104ca51cc(double param_1,long param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  long *plVar6;
  long lVar7;
  char acStack_118 [24];
  char *pcStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar4 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar6 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1108468a0,acStack_80,param_4);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar4 = pcVar2;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar4 = pcVar2;
      param_5 = param_4;
    }
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar1;
  pcVar5 = pcVar4;
  _objc_retain(pcVar1);
  _objc_retain(pcVar4);
  if (pcVar2 != (char *)0x0) {
    plVar6 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_f8,pcVar2);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar2 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_118[0] = '\0';
    acStack_118[1] = '\0';
    acStack_118[2] = '\0';
    acStack_118[3] = '\0';
    acStack_118[4] = '\0';
    acStack_118[5] = '\0';
    acStack_118[6] = '\0';
    acStack_118[7] = '\0';
    acStack_118[8] = '\0';
    acStack_118[9] = '\0';
    acStack_118[10] = '\0';
    acStack_118[0xb] = '\0';
    acStack_118[0xc] = '\0';
    acStack_118[0xd] = '\0';
    acStack_118[0xe] = '\0';
    acStack_118[0xf] = '\0';
    acStack_118[0x10] = '\0';
    acStack_118[0x11] = '\0';
    acStack_118[0x12] = '\0';
    acStack_118[0x13] = '\0';
    acStack_118[0x14] = '\0';
    acStack_118[0x15] = '\0';
    acStack_118[0x16] = '\0';
    acStack_118[0x17] = '\0';
    func_0x00010007e1e8(acStack_118,auStack_f8,&lStack_c8,2);
    pcVar3 = "\x01";
    pcVar5 = acStack_118;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1108468f0,pcVar5,param_5);
    pcStack_100 = acStack_118;
    func_0x00010007e5dc(&pcStack_100);
    lVar7 = 0;
    do {
      if ((&cStack_c9)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  _objc_release(pcVar4);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(pcVar4);
  _objc_release(pcVar1);
  __Unwind_Resume();
  _objc_retain(pcVar3);
  _objc_retain(pcVar5);
  if (pcVar2 != (char *)0x0) {
    FUN_104ca5340(pcVar2,pcVar3,pcVar5,(long)(param_1 * 1000.0));
  }
  _objc_release(pcVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar3);
  return;
}



/* Entry: 104ca5340; end: 104ca556f;  */

void FUN_104ca5340(double param_1,long param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  long *plVar5;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar3 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    plVar5 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "\x01";
    pcVar3 = acStack_98;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_1108468f0,pcVar3,param_5);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar4 = 0;
    do {
      if ((&cStack_49)[lVar4] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar4));
      }
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != -0x30);
  }
  _objc_release(param_4);
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(pcVar1);
  _objc_retain(pcVar3);
  if (pcVar2 != (char *)0x0) {
    FUN_104ca5340(pcVar2,pcVar1,pcVar3,(long)(param_1 * 1000.0));
  }
  _objc_release(pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
  return;
}



/* Entry: 104ca5570; end: 104ca5603;  */

void FUN_104ca5570(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    FUN_104ca5340(param_2,param_3,param_4,(long)(param_1 * 1000.0));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ca5604; end: 104ca5777;  */

void FUN_104ca5604(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110846940,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_104ca5778;
  if (pcVar3 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_110846990,&uStack_c0,pcVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 104ca5778; end: 104ca57ef;  */

void FUN_104ca5778(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110846990,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104ca57f0; end: 104ca5867;  */

void FUN_104ca57f0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108469e0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104ca5868; end: 104ca58db; -[SCGraphenePasskeyLoginMetric2 init] */

undefined1 * FUN_104ca5868(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3990;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104ca58dc; end: 104ca5953;  */

void FUN_104ca58dc(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110846aa0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104ca5954; end: 104ca59cb;  */

void FUN_104ca5954(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110846af0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104ca59cc; end: 104ca5a43;  */

void FUN_104ca59cc(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110846b40,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104ca5a44; end: 104ca5bb7;  */

void FUN_104ca5a44(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110846b90,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_104ca5bb8;
  if (pcVar3 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_110846be0,&uStack_c0,pcVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 104ca5bb8; end: 104ca5c2f;  */

void FUN_104ca5bb8(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110846be0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104ca5c30; end: 104ca5da3;  */

void FUN_104ca5c30(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110846c30,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_104ca5da4;
  if (pcVar3 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_110846c80,&uStack_c0,pcVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 104ca5da4; end: 104ca5e1b;  */

void FUN_104ca5da4(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110846c80,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104ca5e1c; end: 104ca5f8f;  */

void FUN_104ca5e1c(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  char *pcStack_120;
  char *pcStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110846cd0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_104ca5f90;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar7 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_e0,pcVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pcVar4 = "";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110846d20,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_128 = (undefined1 *)&uStack_140;
  pcStack_108 = FUN_104ca6104;
  if (pcVar3 != (char *)0x0) {
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    pcStack_120 = pcVar2;
    pcStack_118 = pcVar1;
    ppuStack_110 = &puStack_90;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_110846d70,&uStack_140,pcVar4);
    func_0x00010007e5dc(&puStack_128);
  }
  return;
}


