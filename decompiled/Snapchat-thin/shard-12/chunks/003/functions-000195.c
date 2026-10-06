/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108f646ac; end: 108f64947; -[SCUnifiedProfileProminentActionView initWithDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108f646ac(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 unaff_x21;
  long lVar8;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x24;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_3);
  puStack_90 = PTR_PTR_1126ff5e0;
  puVar1 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_11277e31c,param_3);
    puVar2 = puVar1;
    func_0x00010bdc4260();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_11277e320;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 **)((long)puVar1 + lVar8) = puVar2;
    _objc_release(uVar7);
    func_0x00010befbb60(puVar1);
    puStack_c0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    uStack_a0 = uVar7;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar7;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar8);
    uStack_b0 = uVar7;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar3;
    func_0x00010bf49420(0x4047000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar3;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c274200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = uVar7;
    unaff_x21 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = puVar1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = unaff_x21;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = unaff_x23;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = unaff_x24;
    func_0x00010beef8c0(puStack_c0);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    _objc_release(uVar7);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uStack_b8);
    _objc_release(uStack_b0);
    _objc_release(puStack_a8);
    _objc_release(uStack_a0);
  }
  puVar5 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_108f64948;
  puStack_100 = unaff_x24;
  uStack_f8 = unaff_x23;
  puStack_f0 = unaff_x22;
  uStack_e8 = unaff_x21;
  puStack_e0 = puVar1;
  puStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  lVar8 = (long)_DAT_11277e324;
  _objc_retain(puVar2);
  uVar7 = *(undefined8 *)((long)puVar5 + lVar8);
  *(undefined8 **)((long)puVar5 + lVar8) = puVar2;
  _objc_release(uVar7);
  uVar7 = 0x19;
  func_0x000107c312b8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_108f64b60;
  puStack_118 = &UNK_110841f80;
  _objc_retain(puVar2);
  puStack_110 = puVar2;
  puStack_108 = puVar5;
  func_0x000107c27d8c(uVar7,&puStack_130);
  _objc_release(uVar7);
  puVar1 = puVar2;
  func_0x00010c070a80();
  if (((ulong)puVar1 & 1) == 0) {
    puVar6 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    lVar8 = (long)_DAT_11277e328;
    uVar7 = *(undefined8 *)((long)puVar5 + lVar8);
    *(undefined **)((long)puVar5 + lVar8) = puVar6;
    _objc_release(uVar7);
    func_0x00010c178280(*(undefined8 *)((long)puVar5 + lVar8));
    func_0x00010bef9040(*(undefined8 *)((long)puVar5 + (long)_DAT_11277e320));
  }
  else {
    lVar8 = (long)_DAT_11277e328;
    if (*(long *)((long)puVar5 + lVar8) != 0) {
      func_0x00010c12c9c0(*(undefined8 *)((long)puVar5 + (long)_DAT_11277e320));
      uVar7 = *(undefined8 *)((long)puVar5 + lVar8);
      *(undefined8 *)((long)puVar5 + lVar8) = 0;
      _objc_release(uVar7);
    }
  }
  func_0x00010c070a80(puVar2);
  lVar8 = (long)_DAT_11277e320;
  func_0x00010c21e900(*(undefined8 *)((long)puVar5 + lVar8));
  uVar7 = *(undefined8 *)((long)puVar5 + lVar8);
  func_0x00010c070a80();
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar7);
  _objc_release(puVar6);
  uVar7 = *(undefined8 *)((long)puVar5 + lVar8);
  func_0x00010c070a80();
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(uVar7);
  _objc_release(puVar6);
  func_0x00010c228400(puVar5);
  _objc_release(puStack_110);
  _objc_release(puVar2);
  return puVar2;
}



/* Entry: 108f64948; end: 108f64b5f; -[SCUnifiedProfileProminentActionView updateWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f64948(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  ulong uStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11277e324;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(ulong *)(param_1 + lVar4) = param_3;
  _objc_release(uVar1);
  uVar1 = 0x19;
  func_0x000107c312b8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_108f64b60;
  puStack_58 = &UNK_110841f80;
  _objc_retain(param_3);
  uStack_50 = param_3;
  lStack_48 = param_1;
  func_0x000107c27d8c(uVar1,&puStack_70);
  _objc_release(uVar1);
  uVar2 = param_3;
  func_0x00010c070a80();
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    lVar4 = (long)_DAT_11277e328;
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar3;
    _objc_release(uVar1);
    func_0x00010c178280(*(undefined8 *)(param_1 + lVar4));
    func_0x00010bef9040(*(undefined8 *)(param_1 + _DAT_11277e320));
  }
  else {
    lVar4 = (long)_DAT_11277e328;
    if (*(long *)(param_1 + lVar4) != 0) {
      func_0x00010c12c9c0(*(undefined8 *)(param_1 + _DAT_11277e320));
      uVar1 = *(undefined8 *)(param_1 + lVar4);
      *(undefined8 *)(param_1 + lVar4) = 0;
      _objc_release(uVar1);
    }
  }
  func_0x00010c070a80(param_3);
  lVar4 = (long)_DAT_11277e320;
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar4));
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c070a80();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar1);
  _objc_release(puVar3);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c070a80();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(uVar1);
  _objc_release(puVar3);
  func_0x00010c228400(param_1);
  _objc_release(uStack_50);
  _objc_release(param_3);
  return;
}



/* Entry: 108f64b60; end: 108f64c4b;  */

void FUN_108f64b60(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe5720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 0x28));
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108f64c4c;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(puVar2);
  puStack_48 = puVar2;
  func_0x000107c312d0("APPSTORE",&puStack_68);
  _objc_release(puStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar2);
  return;
}



/* Entry: 108f64c4c; end: 108f64c7f;  */

void FUN_108f64c4c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea2620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f64c80; end: 108f64cd7; -[SCUnifiedProfileProminentActionView setupAccessibilityIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f64c80(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11277e324);
  func_0x00010c117ce0();
  if (lVar1 - 1U < 4) {
    puVar2 = (&PTR_PTR_110aceda8)[lVar1 - 1U];
  }
  else {
    puVar2 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277e320),PTR_s_setAccessibilityIdentifier__112635e10,
             puVar2);
  return;
}



/* Entry: 108f64cd8; end: 108f64d2b; -[SCUnifiedProfileProminentActionView _setButtonImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f64cd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bfe9720(param_3,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11277e320),param_2,param_3);
  func_0x00010c1cbe20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f64d2c; end: 108f64d9b; -[SCUnifiedProfileProminentActionView _handleImageTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f64d2c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + _DAT_11277e31c;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277e324);
  func_0x00010beeecc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c117d20(lVar1,param_2,param_1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108f64d9c; end: 108f64e6b; -[SCUnifiedProfileProminentActionView _actionButton] */

void FUN_108f64d9c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  func_0x00010c182220(puVar1);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4038000000000000);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b08d8;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c30a28(0x4018000000000000,0x3faeb851eb851eb8,0,0x3ff0000000000000,puVar2,puVar1,
                      puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f64e6c; end: 108f64ec7; -[SCUnifiedProfileProminentActionView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f64e6c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277e328,0);
  _objc_storeStrong(param_1 + _DAT_11277e324,0);
  _objc_storeStrong(param_1 + _DAT_11277e320,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277e31c);
  return;
}



/* Entry: 108f64ec8; end: 108f65483; -[SCUnifiedProfileProminentActionsCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108f64ec8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar14;
  long lVar15;
  undefined8 *puStack_220;
  undefined *puStack_218;
  undefined8 *puStack_210;
  long lStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_168;
  undefined *puStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_160 = PTR_PTR_1126ff5e8;
  puVar8 = &uStack_168;
  uStack_168 = param_1;
  _objc_msgSendSuper2(puVar8,PTR_s_initWithFrame__1125e2948);
  puVar2 = (undefined8 *)0x0;
  puStack_1c0 = puVar8;
  if (puVar8 != (undefined8 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc();
    puVar8 = puStack_1c0;
    puVar2 = puStack_1c0;
    func_0x00010bdc4800();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar8;
    puStack_a0 = puVar2;
    func_0x00010bdc4800();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    puStack_98 = puVar3;
    func_0x00010bdc4800();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar8;
    puStack_90 = puVar4;
    func_0x00010bdc4800();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar5;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff3fe0();
    unaff_x19 = (long)_DAT_11277e32c;
    uVar12 = *(undefined8 *)((long)puVar8 + unaff_x19);
    *(undefined **)((long)puVar8 + unaff_x19) = puVar1;
    _objc_release(uVar12);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar8 + unaff_x19));
    func_0x00010c190b80(*(undefined8 *)((long)puVar8 + unaff_x19));
    func_0x00010c166c00(*(undefined8 *)((long)puVar8 + unaff_x19));
    uVar7 = *(undefined8 *)((long)puVar8 + unaff_x19);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar8;
    func_0x00010bf4dce0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar7;
    func_0x00010bf493c0(0xc020000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = (long)_DAT_11277e330;
    uVar13 = *(undefined8 *)((long)puVar8 + lVar14);
    *(undefined8 *)((long)puVar8 + lVar14) = uVar12;
    _objc_release(uVar13);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(uVar7);
    puVar2 = puVar8;
    func_0x00010bf4dce0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    puStack_1e0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar12 = *(undefined8 *)((long)puVar8 + unaff_x19);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar8;
    lStack_1c8 = uVar12;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_1b8 = puVar2;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puStack_1d0 = puVar2;
    func_0x00010bf493c0(0xc010000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar8 + unaff_x19);
    puStack_1d8 = (undefined8 *)uVar12;
    uStack_c0 = uVar12;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar8;
    uStack_1e8 = uVar7;
    func_0x00010bf4dce0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)((long)puVar8 + unaff_x19);
    uStack_b8 = uVar7;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = puVar8;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = unaff_x20;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = *(undefined8 *)((long)puVar8 + lVar14);
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_b0 = uVar12;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_1e0);
    _objc_release(puVar1);
    _objc_release(uVar12);
    _objc_release(puVar4);
    _objc_release(unaff_x20);
    _objc_release(uVar13);
    _objc_release(uVar7);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(uStack_1e8);
    _objc_release(puStack_1d8);
    _objc_release(puStack_1d0);
    _objc_release(puStack_1b8);
    _objc_release(lStack_1c8);
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    puStack_1a0 = (undefined8 *)0x0;
    puVar8 = *(undefined8 **)((long)puVar8 + unaff_x19);
    lStack_1c8 = unaff_x19;
    func_0x00010bf09ee0();
    _objc_retainAutoreleasedReturnValue();
    puStack_1d8 = puVar8;
    func_0x00010bf52a60();
    puStack_1b8 = puVar8;
    if (puVar8 != (undefined8 *)0x0) {
      puStack_1d0 = (undefined8 *)*puStack_1a0;
      do {
        puVar8 = (undefined8 *)0x0;
        do {
          if ((undefined8 *)*puStack_1a0 != puStack_1d0) {
            _objc_enumerationMutation(puStack_1d8);
          }
          puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          lVar15 = *(long *)(lStack_1a8 + (long)puVar8 * 8);
          lVar14 = lVar15;
          func_0x00010c2a5060();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar14;
          func_0x00010bf49420(0x4051000000000000);
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar15;
          lStack_158 = lVar9;
          func_0x00010bfe0660();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar10;
          func_0x00010bf49420(0x4047000000000000);
          _objc_retainAutoreleasedReturnValue();
          lStack_150 = lVar11;
          func_0x00010c274200();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = *(undefined8 *)((long)puStack_1c0 + lStack_1c8);
          func_0x00010c274200(uVar12);
          _objc_retainAutoreleasedReturnValue();
          unaff_x19 = lVar15;
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x20 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
          lStack_148 = unaff_x19;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beef8c0(puVar1);
          _objc_release(unaff_x20);
          _objc_release(unaff_x19);
          _objc_release(uVar12);
          _objc_release(lVar15);
          _objc_release(lVar11);
          _objc_release(lVar10);
          _objc_release(lVar9);
          _objc_release(lVar14);
          puVar8 = (undefined8 *)((long)puVar8 + 1);
        } while (puStack_1b8 != puVar8);
        puVar8 = puStack_1d8;
        func_0x00010bf52a60();
        puStack_1b8 = puVar8;
      } while (puVar8 != (undefined8 *)0x0);
    }
    puVar2 = puStack_1d8;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puStack_1c0;
  }
  ___stack_chk_fail();
  pcStack_1f8 = FUN_108f65484;
  puStack_218 = PTR_PTR_1126ff5e8;
  puStack_220 = puVar2;
  puStack_210 = unaff_x20;
  lStack_208 = unaff_x19;
  puStack_200 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_220,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010bee2a80(puVar2);
  return puVar2;
}



/* Entry: 108f65484; end: 108f654cb; -[SCUnifiedProfileProminentActionsCell traitCollectionDidChange:] */

void FUN_108f65484(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ff5e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010bee2a80(param_1);
  return;
}



/* Entry: 108f654cc; end: 108f6550b; -[SCUnifiedProfileProminentActionsCell _actionView] */

void FUN_108f654cc(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b3fc0;
  _objc_alloc(PTR_PTR_1126b3fc0);
  func_0x00010c00a2c0();
  func_0x00010c219b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f6550c; end: 108f65607; -[SCUnifiedProfileProminentActionsCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6550c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d7780;
  _objc_opt_class(PTR_PTR_1126d7780);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar6 = (long)_DAT_11277e334;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(uVar1);
  if (uVar5 == uVar1) {
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  else {
    if (uVar1 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar3 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar3 & 1) != 0) goto LAB_108f655e8;
    }
    _objc_retain(uVar1);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar1;
    _objc_release(uVar4);
    func_0x00010bee2a80(param_1);
    func_0x00010c1cbe20(param_1);
  }
LAB_108f655e8:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f65608; end: 108f656a3; +[SCUnifiedProfileProminentActionsCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_108f65608(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126d7780;
  _objc_opt_class(PTR_PTR_1126d7780);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010c22dc00();
  _objc_release(uVar1);
  uVar4 = 0x404c000000000000;
  if ((int)uVar3 == 0) {
    uVar4 = 0x4044000000000000;
  }
  _objc_release(param_4);
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 108f656a4; end: 108f65b3b; -[SCUnifiedProfileProminentActionsCell _updateUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f656a4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  
  puVar1 = PTR_PTR_1126d7780;
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar16 = *(ulong *)(param_1 + _DAT_11277e334);
  _objc_retain(uVar16);
  _objc_opt_class(puVar1);
  uVar17 = uVar16;
  _objc_opt_isKindOfClass(uVar16,puVar1);
  uVar13 = uVar16;
  if ((uVar17 & 1) == 0) {
    uVar13 = 0;
  }
  _objc_retain(uVar13);
  _objc_release(uVar16);
  lVar15 = (long)_DAT_11277e32c;
  lVar2 = *(long *)(param_1 + lVar15);
  func_0x00010bf09ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  if (lVar3 != 0) {
    uVar17 = 0;
    do {
      lVar19 = 0;
      uVar17 = (ulong)(int)uVar17;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(lVar2);
        }
        uVar18 = *(undefined8 *)(lVar19 * 8);
        uVar16 = uVar13;
        func_0x00010c117d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar16;
        func_0x00010bf529e0();
        _objc_release(uVar16);
        if (uVar17 < uVar4) {
          uVar16 = uVar13;
          func_0x00010c117d40(uVar13);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar16;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c28d0c0(uVar18);
          _objc_release(uVar4);
          _objc_release(uVar16);
        }
        uVar17 = uVar17 + 1;
        lVar19 = lVar19 + 1;
      } while (lVar3 != lVar19);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  lVar5 = *(long *)(param_1 + lVar15);
  func_0x00010bf09ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar13;
  func_0x00010c22dc00();
  uVar18 = 0x4020000000000000;
  if ((int)uVar17 == 0) {
    uVar18 = 0xc020000000000000;
  }
  func_0x00010c181140(uVar18,*(undefined8 *)(param_1 + _DAT_11277e330));
  uVar17 = uVar13;
  func_0x00010c230c00();
  if (((int)uVar17 != 0) && (lVar3 = lVar5, func_0x00010bf529e0(), lVar3 == 4)) {
    uVar18 = *(undefined8 *)(param_1 + lVar15);
    lVar3 = lVar5;
    func_0x00010c0dfd40(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12b280(uVar18);
    _objc_release(lVar3);
    lVar3 = lVar5;
    func_0x00010c0dfd40(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(lVar3);
    uVar18 = *(undefined8 *)(param_1 + lVar15);
    lVar3 = lVar5;
    func_0x00010c0dfd40(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12b280(uVar18);
    _objc_release(lVar3);
    lVar3 = lVar5;
    func_0x00010c0dfd40(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(lVar3);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar6 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar6;
    func_0x00010bf493c0(0xc069000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = param_1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar19;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar15);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(lVar15);
    _objc_release(param_1);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(lVar8);
    _objc_release(lVar19);
    _objc_release(uVar7);
    _objc_release(uVar18);
    _objc_release(lVar2);
    _objc_release(lVar3);
    _objc_release(uVar6);
  }
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(uVar13 + (long)_DAT_11277e338),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,uVar13);
  return;
}



/* Entry: 108f65b3c; end: 108f65b53; -[SCUnifiedProfileProminentActionsCell prominentActionView:handleActionWithModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f65b3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277e338),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,param_4,param_3);
  return;
}



/* Entry: 108f65b54; end: 108f65b63; -[SCUnifiedProfileProminentActionsCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f65b54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e338);
}



/* Entry: 108f65b64; end: 108f65ba3; -[SCUnifiedProfileProminentActionsCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f65b64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277e338;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f65ba4; end: 108f65bb3; -[SCUnifiedProfileProminentActionsCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f65ba4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e334);
}



/* Entry: 108f65bb4; end: 108f65c13; -[SCUnifiedProfileProminentActionsCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f65bb4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277e334,0);
  _objc_storeStrong(param_1 + _DAT_11277e338,0);
  _objc_storeStrong(param_1 + _DAT_11277e330,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e32c,0);
  return;
}



/* Entry: 108f65c14; end: 108f65c87; -[SCUnifiedProfileSnapchatterCollectionViewCell initWithFrame:] */

undefined1 * FUN_108f65c14(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ff5f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126cc318;
    _objc_opt_new(PTR_PTR_1126cc318);
    func_0x00010c1619c0();
    func_0x00010c1ba240(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108f65c88; end: 108f65d6f; -[SCUnifiedProfileSnapchatterCollectionViewCell sizeForRightIconView] */

undefined1  [16]
FUN_108f65c88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  ulong uStack_50;
  undefined *puStack_48;
  
  uVar2 = param_5;
  func_0x00010c140be0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cb038;
  _objc_opt_class(PTR_PTR_1126cb038);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 == 0) {
    puStack_48 = PTR_PTR_1126ff5f0;
    uStack_50 = param_5;
    _objc_msgSendSuper2(&uStack_50,PTR_s_sizeForRightIconView_11266cee8);
  }
  else {
    func_0x00010bf31be0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c23d5a0(param_3,param_4,uVar2);
    _objc_release(param_5);
    param_1 = param_3;
    param_2 = param_4;
  }
  _objc_release(uVar1);
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 108f65d70; end: 108f65e53; -[SCUnifiedProfileSnapchatterCollectionViewCell setImageDownloader:] */

void FUN_108f65d70(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010c08e7a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_setImageDownloader__1126482a8;
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  if ((uVar3 & 1) != 0) {
    func_0x00010c1aa200(uVar2);
  }
  func_0x00010c140be0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126cb038;
  _objc_opt_class(PTR_PTR_1126cb038);
  uVar5 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar4);
  uVar3 = param_1;
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(param_1);
  if ((uVar3 != 0) &&
     (uVar5 = param_1, _objc_opt_respondsToSelector(param_1,puVar1), (uVar5 & 1) != 0)) {
    func_0x00010c1aa200(param_1);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f65e54; end: 108f65e87; -[SCUnifiedProfileSnapchatterCollectionViewCell setInfoFetcher:] */

void FUN_108f65e54(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ff5f0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_setInfoFetcher__112648b30);
  return;
}



/* Entry: 108f65e88; end: 108f66087; -[SCUnifiedProfileSnapchatterCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f65e88(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_11277e33c;
  uVar5 = *(ulong *)(param_1 + lVar7);
  _objc_retain(uVar5);
  _objc_retain(param_3);
  uVar1 = param_3;
  if (uVar5 != param_3) {
    if (param_3 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar1 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar1 & 1) != 0) goto LAB_108f66068;
    }
    puStack_48 = PTR_PTR_1126ff5f0;
    uStack_50 = param_1;
    _objc_msgSendSuper2(&uStack_50,PTR_s_setViewModel__1126663d8,param_3);
    uVar5 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    *(ulong *)(param_1 + lVar7) = uVar5;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126b2c10;
    uVar6 = *(ulong *)(param_1 + lVar7);
    _objc_retain(uVar6);
    _objc_opt_class(puVar2);
    uVar1 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar2);
    uVar5 = uVar6;
    if ((uVar1 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar6);
    uVar6 = param_1;
    func_0x00010c08e7a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126cc318;
    _objc_opt_class(PTR_PTR_1126cc318);
    uVar3 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar2);
    uVar1 = uVar6;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar6);
    if (uVar1 != 0) {
      uVar3 = uVar5;
      func_0x00010c08e7c0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2226c0(uVar6);
      _objc_release(uVar3);
    }
    uVar6 = uVar5;
    func_0x00010c140c00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedeb20(param_1);
    _objc_release(uVar6);
    uVar6 = param_1;
    func_0x00010c08e7a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(uVar6);
    func_0x00010c21e900(param_1);
    func_0x00010c1cbe20(param_1);
  }
  _objc_release(uVar1);
  _objc_release(uVar5);
LAB_108f66068:
  _objc_release(param_3);
  return;
}



/* Entry: 108f66088; end: 108f6628f; -[SCUnifiedProfileSnapchatterCollectionViewCell _updateRightIconViewBasedOnViewModel:] */

void FUN_108f66088(undefined *param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b4740;
  _objc_opt_class(PTR_PTR_1126b4740);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  puVar1 = PTR_PTR_1126d7770;
  puVar3 = param_1;
  if ((param_3 == 0) || ((uVar2 & 1) == 0)) {
    _objc_retain(param_3);
    _objc_opt_class(puVar1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    _objc_release(param_3);
    if ((param_3 == 0) || ((uVar2 & 1) == 0)) {
      func_0x00010c1ee160(param_1);
      goto LAB_108f661fc;
    }
    func_0x00010c140be0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126d7760;
    _objc_opt_class(PTR_PTR_1126d7760);
    puVar4 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar1);
    puVar1 = puVar3;
    if (((ulong)puVar4 & 1) == 0) {
      puVar1 = (undefined *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(puVar3);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = PTR_PTR_1126d7760;
      _objc_alloc(PTR_PTR_1126d7760);
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      goto LAB_108f661cc;
    }
  }
  else {
    func_0x00010c140be0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126cb038;
    _objc_opt_class(PTR_PTR_1126cb038);
    puVar4 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar1);
    puVar1 = puVar3;
    if (((ulong)puVar4 & 1) == 0) {
      puVar1 = (undefined *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(puVar3);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = PTR_PTR_1126cb038;
      _objc_opt_new(PTR_PTR_1126cb038);
      func_0x00010c1619c0();
LAB_108f661cc:
      func_0x00010c1ee160(param_1);
    }
  }
  func_0x00010c2226c0(puVar3);
  _objc_release(puVar3);
LAB_108f661fc:
  puVar1 = param_1;
  func_0x00010c140be0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x000107c318f8();
  _objc_release(puVar1);
  if ((puVar1 != (undefined *)0x0) && ((int)puVar3 != 0)) {
    puVar1 = param_1;
    func_0x00010c140be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0();
    _objc_release(puVar1);
  }
  func_0x00010c140be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f66290; end: 108f662f3; -[SCUnifiedProfileSnapchatterCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f66290(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff5f0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setActionHandler__112636080,param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277e340);
  *(undefined8 *)(param_1 + _DAT_11277e340) = param_3;
  _objc_release(uVar1);
  return;
}



/* Entry: 108f662f4; end: 108f6630f; -[SCUnifiedProfileSnapchatterCollectionViewCell handleActionWithActionModel:fromSourceView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f662f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277e340),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,param_3,param_4);
  return;
}



/* Entry: 108f66310; end: 108f6631f; -[SCUnifiedProfileSnapchatterCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f66310(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e33c);
}



/* Entry: 108f66320; end: 108f6632f; -[SCUnifiedProfileSnapchatterCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f66320(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e340);
}



/* Entry: 108f66330; end: 108f6636f; -[SCUnifiedProfileSnapchatterCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f66330(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277e340,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e33c,0);
  return;
}



/* Entry: 108f66370; end: 108f66413; -[SCUnifiedProfileCollectionViewStoriesCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108f66370(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ff5f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126cc318;
    _objc_opt_new();
    lVar4 = (long)_DAT_11277e344;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c1619c0(*(undefined8 *)((long)puVar1 + lVar4));
    puVar2 = PTR_PTR_1126dcb50;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277e348);
    *(undefined **)((long)puVar1 + (long)_DAT_11277e348) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108f66414; end: 108f6651b; -[SCUnifiedProfileCollectionViewStoriesCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f66414(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ff5f8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  uVar2 = *(ulong *)(param_1 + _DAT_11277e348);
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cc300;
  _objc_opt_class(PTR_PTR_1126cc300);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar4 = uVar1;
  func_0x00010befc360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar4 == 0) {
    uVar4 = uVar1;
    func_0x00010c274040();
    _objc_retainAutoreleasedReturnValue();
    if (uVar4 != 0) {
      _objc_release();
      goto LAB_108f664d8;
    }
    uVar4 = uVar1;
    func_0x00010c140920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar4 == 0) goto LAB_108f664d8;
  }
  func_0x00010c1a5660(param_1);
LAB_108f664d8:
  _objc_release(uVar1);
  return;
}



/* Entry: 108f6651c; end: 108f6657b; -[SCUnifiedProfileCollectionViewStoriesCell setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6651c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277e344);
  _objc_retain(param_3);
  func_0x00010c1aa200(uVar1,param_2,param_3);
  func_0x00010c1aa200(*(undefined8 *)(param_1 + _DAT_11277e348),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f6657c; end: 108f6692f; -[SCUnifiedProfileCollectionViewStoriesCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6657c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_11277e34c;
  uVar5 = *(ulong *)(param_1 + lVar7);
  _objc_retain(uVar5);
  _objc_retain(param_3);
  if (uVar5 == param_3) {
    _objc_release(param_3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar1 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar1 & 1) != 0) goto LAB_108f66910;
    }
    puStack_48 = PTR_PTR_1126ff5f8;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_setViewModel__1126663d8,param_3);
    uVar5 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    *(ulong *)(param_1 + lVar7) = uVar5;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126b2c10;
    uVar6 = *(ulong *)(param_1 + lVar7);
    _objc_retain(uVar6);
    _objc_opt_class(puVar2);
    uVar1 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar2);
    uVar5 = uVar6;
    if ((uVar1 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar6);
    uVar1 = uVar5;
    func_0x00010c08e7c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar7 = param_1;
    if (uVar1 == 0) {
      lVar8 = (long)_DAT_11277e354;
      if (*(long *)(param_1 + lVar8) == 0) {
        puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
        _objc_opt_new();
        uVar4 = *(undefined8 *)(param_1 + lVar8);
        *(undefined **)(param_1 + lVar8) = puVar2;
        _objc_release(uVar4);
        func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar8));
        puVar2 = PTR_PTR_1126b0c40;
        func_0x00010bfe7b00(0x403b000000000000,0x4038000000000000,PTR_PTR_1126b0c40);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar8));
        _objc_release(puVar2);
      }
      func_0x00010c1ba240(param_1);
      func_0x00010bf4dce0(param_1);
      _objc_retainAutoreleasedReturnValue();
LAB_108f6682c:
      func_0x00010c12c9c0();
    }
    else {
      lVar8 = (long)_DAT_11277e344;
      func_0x00010c1ba240(param_1);
      func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar8));
      uVar1 = uVar5;
      func_0x00010c08e7c0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar8));
      _objc_release(uVar1);
      uVar6 = uVar5;
      func_0x00010c140c00();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126cc300;
      _objc_opt_class(PTR_PTR_1126cc300);
      uVar3 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar2);
      uVar1 = uVar6;
      if ((uVar3 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar6);
      uVar6 = uVar1;
      func_0x00010c290800();
      _objc_release(uVar1);
      if ((int)uVar6 == 0) {
        func_0x00010bf4dce0(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar1 = uVar5;
        func_0x00010c08e760();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        func_0x00010bf4dce0(param_1);
        _objc_retainAutoreleasedReturnValue();
        if (uVar1 != 0) goto LAB_108f6682c;
      }
      lVar8 = param_1;
      func_0x00010bf9bf20(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9040(lVar7);
      _objc_release(lVar8);
    }
    _objc_release(lVar7);
    lVar7 = (long)_DAT_11277e348;
    func_0x00010c1ee160(param_1);
    uVar1 = uVar5;
    func_0x00010c140c00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar7));
    _objc_release(uVar1);
    lVar7 = param_1;
    func_0x00010c08e7a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(lVar7);
    lVar7 = param_1;
    func_0x00010c140be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(lVar7);
    func_0x00010c21e900(param_1);
  }
  _objc_release(uVar5);
LAB_108f66910:
  _objc_release(param_3);
  return;
}



/* Entry: 108f66930; end: 108f669b3; -[SCUnifiedProfileCollectionViewStoriesCell traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f66930(long param_1)

{
  undefined *puVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ff5f8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  puVar1 = PTR_PTR_1126b0c40;
  func_0x00010bfe7b00(0x403b000000000000,0x4038000000000000,PTR_PTR_1126b0c40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11277e354));
  _objc_release(puVar1);
  return;
}



/* Entry: 108f669b4; end: 108f66a57; -[SCUnifiedProfileCollectionViewStoriesCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f669b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ff5f8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_setActionHandler__112636080,param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277e358);
  *(undefined8 *)(param_1 + _DAT_11277e358) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010bf25d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161980();
  _objc_release(param_3);
  _objc_release(param_1);
  return;
}



/* Entry: 108f66a58; end: 108f66a73; -[SCUnifiedProfileCollectionViewStoriesCell handleActionWithActionModel:fromSourceView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f66a58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277e358),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,param_3,param_4);
  return;
}



/* Entry: 108f66a74; end: 108f66a87; -[SCUnifiedProfileCollectionViewStoriesCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f66a74(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277e35c,param_3);
  return;
}



/* Entry: 108f66a88; end: 108f66af7; -[SCUnifiedProfileCollectionViewStoriesCell expandTapGesture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f66a88(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11277e350;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108f66af8; end: 108f66b33; -[SCUnifiedProfileCollectionViewStoriesCell _handleTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f66af8(long param_1)

{
  param_1 = param_1 + _DAT_11277e35c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c29de20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f66b34; end: 108f66b9b; -[SCUnifiedProfileCollectionViewStoriesCell sizeForRightIconView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f66b34(double param_1,double param_2,long param_3)

{
  bool bVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c1068e0(*(undefined8 *)(param_3 + _DAT_11277e348));
  bVar1 = false;
  if ((param_1 == *(double *)PTR__CGSizeZero_110347620) &&
     (bVar1 = false, !NAN(param_2) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
    bVar1 = param_2 == *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  if (bVar1) {
    puStack_28 = PTR_PTR_1126ff5f8;
    lStack_30 = param_3;
    _objc_msgSendSuper2(&lStack_30,PTR_s_sizeForRightIconView_11266cee8);
  }
  return;
}



/* Entry: 108f66b9c; end: 108f66bcb; -[SCUnifiedProfileCollectionViewStoriesCell buttonsView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f66b9c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277e348);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f66bcc; end: 108f66bdb; -[SCUnifiedProfileCollectionViewStoriesCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f66bcc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e34c);
}



/* Entry: 108f66bdc; end: 108f66beb; -[SCUnifiedProfileCollectionViewStoriesCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f66bdc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e358);
}



/* Entry: 108f66bec; end: 108f66c0b; -[SCUnifiedProfileCollectionViewStoriesCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f66bec(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277e35c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f66c0c; end: 108f66c97; -[SCUnifiedProfileCollectionViewStoriesCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f66c0c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277e35c);
  _objc_storeStrong(param_1 + _DAT_11277e358,0);
  _objc_storeStrong(param_1 + _DAT_11277e34c,0);
  _objc_storeStrong(param_1 + _DAT_11277e350,0);
  _objc_storeStrong(param_1 + _DAT_11277e354,0);
  _objc_storeStrong(param_1 + _DAT_11277e348,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e344,0);
  return;
}



/* Entry: 108f66c98; end: 108f66fa3; -[SCUnifiedProfileCollectionViewStoriesCellButtonsView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108f66c98(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126ff600;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b48f0;
    _objc_opt_new();
    lVar6 = (long)_DAT_11277e360;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar6 = (long)_DAT_11277e364;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126b0c40;
    func_0x00010bfe8d40(0x4030000000000000,0x4030000000000000,PTR_PTR_1126b0c40);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar6 = (long)_DAT_11277e368;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar7 = (long)_DAT_11277e36c;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar5);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar7));
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar6));
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar7));
    puVar4 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_11277e370;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar4;
    _objc_release(uVar5);
    func_0x00010c216380(*(undefined8 *)((long)puVar1 + lVar6));
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    puVar4 = PTR_PTR_1126b0c40;
    func_0x00010bfe7b00(0x4030000000000000,0x4030000000000000,PTR_PTR_1126b0c40);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(uVar5);
    _objc_release(puVar4);
    func_0x00010c1aab40(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c198080(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(puVar1);
    func_0x00010befbb60(puVar1);
    func_0x00010befbb60(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108f66fa4; end: 108f671af; -[SCUnifiedProfileCollectionViewStoriesCellButtonsView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f66fa4(double param_1,double param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ff600;
  lStack_60 = param_3;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  puVar2 = PTR_PTR_1126cc300;
  uVar5 = *(ulong *)(param_3 + _DAT_11277e374);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar3 = uVar1;
  func_0x00010befc360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 == 0) {
    func_0x00010bf20c00(param_3);
    _CGRectGetHeight();
    param_1 = param_1 + -40.0;
    dVar7 = param_1 * 0.5;
    func_0x00010bf20c00(param_3);
    _CGRectGetWidth();
    func_0x00010b8166f8(param_1 + -80.0,dVar7,0x4044000000000000,0x4044000000000000,param_3);
    func_0x00010c19f0e0(*(undefined8 *)(param_3 + _DAT_11277e368));
    func_0x00010b8166f8(param_1 + -80.0 + 40.0,dVar7,0x4044000000000000,0x4044000000000000,param_3);
    func_0x00010c19f0e0(*(undefined8 *)(param_3 + _DAT_11277e36c));
    uVar3 = uVar1;
    func_0x00010c140920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar3 != 0) {
      func_0x00010c19f0e0(0x4028000000000000,0x4028000000000000,0x4030000000000000,
                          0x4030000000000000,*(undefined8 *)(param_3 + _DAT_11277e360));
    }
    uVar4 = *(undefined8 *)(param_3 + _DAT_11277e364);
  }
  else {
    lVar6 = (long)_DAT_11277e370;
    func_0x00010c0699c0(*(undefined8 *)(param_3 + lVar6));
    dVar7 = param_1;
    func_0x00010bf20c00(param_3);
    _CGRectGetWidth();
    dVar8 = dVar7 - param_1;
    func_0x00010bf20c00(param_3);
    _CGRectGetHeight();
    func_0x00010b8166f8(dVar8,(dVar7 - param_2) * 0.5,param_1,param_2,param_3);
    uVar4 = *(undefined8 *)(param_3 + lVar6);
  }
  func_0x00010c19f0e0(uVar4);
  _objc_release(uVar1);
  return;
}



/* Entry: 108f671b0; end: 108f67553; -[SCUnifiedProfileCollectionViewStoriesCellButtonsView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f671b0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11277e374;
  uVar4 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  uVar3 = param_3;
  if (uVar4 == param_3) {
LAB_108f67518:
    _objc_release(uVar3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar4);
    }
    else {
      uVar3 = uVar4;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((uVar3 & 1) != 0) goto LAB_108f67524;
    }
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = param_3;
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126cc300;
    uVar5 = *(ulong *)(param_1 + lVar6);
    _objc_retain(uVar5);
    _objc_opt_class(puVar2);
    uVar3 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar2);
    uVar4 = uVar5;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar5);
    uVar3 = uVar4;
    func_0x00010befc360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar6 = (long)_DAT_11277e370;
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    if (uVar3 == 0) {
      func_0x00010c1a7f60(uVar1);
      uVar3 = uVar4;
      func_0x00010c274040();
      _objc_retainAutoreleasedReturnValue();
      if (uVar3 == 0) {
        uVar5 = uVar4;
        func_0x00010c140920(uVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = (undefined8 *)(param_1 + _DAT_11277e360);
        func_0x00010c1a7f60(*puVar7);
        _objc_release(uVar5);
      }
      else {
        puVar7 = (undefined8 *)(param_1 + _DAT_11277e360);
        func_0x00010c1a7f60(*puVar7);
      }
      _objc_release(uVar3);
      uVar1 = *puVar7;
      uVar3 = uVar4;
      func_0x00010c140840(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cc200(uVar1);
      _objc_release(uVar3);
      uVar3 = uVar4;
      func_0x00010c274040();
      _objc_retainAutoreleasedReturnValue();
      if (uVar3 == 0) {
        uVar5 = uVar4;
        func_0x00010c140920(uVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = (ulong *)(param_1 + _DAT_11277e368);
        func_0x00010c21e900(*puVar8);
        _objc_release(uVar5);
      }
      else {
        puVar8 = (ulong *)(param_1 + _DAT_11277e368);
        func_0x00010c21e900(*puVar8);
      }
      _objc_release(uVar3);
      uVar3 = *puVar8;
      func_0x00010c082800();
      uVar5 = *puVar8;
      if ((uVar3 & 1) == 0) {
        func_0x00010c12c960();
      }
      else {
        func_0x00010c262ca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar5 == 0) {
          func_0x00010befbb60(param_1);
        }
      }
      uVar3 = uVar4;
      func_0x00010c228000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      lVar6 = *(long *)(param_1 + _DAT_11277e36c);
      if (uVar3 == 0) {
        func_0x00010c12c960();
      }
      else {
        func_0x00010c262ca0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar6 == 0) {
          func_0x00010befbb60(param_1);
        }
      }
      uVar3 = uVar4;
      func_0x00010c274040();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar3 != 0) {
        uVar3 = uVar4;
        func_0x00010c274040(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bea8980(param_1);
        goto LAB_108f67518;
      }
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277e378));
    }
    else {
      uVar3 = uVar4;
      func_0x00010befc360(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216260(uVar1);
      _objc_release(uVar3);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar6));
      func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_11277e368));
      func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_11277e36c));
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277e378));
      func_0x00010c1cbe20(param_1);
    }
  }
  _objc_release(uVar4);
LAB_108f67524:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f67554; end: 108f67563; -[SCUnifiedProfileCollectionViewStoriesCellButtonsView setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f67554(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1aa210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277e360),PTR_s_setImageDownloader__1126482a8);
  return;
}



/* Entry: 108f67564; end: 108f6761b; -[SCUnifiedProfileCollectionViewStoriesCellButtonsView _handleSaveButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f67564(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126cc300;
  uVar4 = *(ulong *)(param_1 + _DAT_11277e374);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11277e37c);
  uVar3 = uVar1;
  func_0x00010c140920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108f6761c; end: 108f676d3; -[SCUnifiedProfileCollectionViewStoriesCellButtonsView _handleSettingsButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6761c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126cc300;
  uVar4 = *(ulong *)(param_1 + _DAT_11277e374);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11277e37c);
  uVar3 = uVar1;
  func_0x00010c228000(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108f676d4; end: 108f6779b; -[SCUnifiedProfileCollectionViewStoriesCellButtonsView preferredAddToStoryButtonSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108f676d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  puVar2 = PTR_PTR_1126cc300;
  uVar4 = *(ulong *)(param_3 + _DAT_11277e374);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010befc360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 == 0) {
    param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
    param_2 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    func_0x00010c0699c0(*(undefined8 *)(param_3 + _DAT_11277e370));
  }
  _objc_release(uVar1);
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 108f6779c; end: 108f67853; -[SCUnifiedProfileCollectionViewStoriesCellButtonsView _handleAddToStoryButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6779c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126cc300;
  uVar4 = *(ulong *)(param_1 + _DAT_11277e374);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11277e37c);
  uVar3 = uVar1;
  func_0x00010befc340(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108f67854; end: 108f67aab; -[SCUnifiedProfileCollectionViewStoriesCellButtonsView _setTooltipText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108f67854(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_11277e378;
  lVar9 = *(long *)(param_1 + lVar10);
  _objc_retain(param_3);
  if (lVar9 == 0) {
    uVar2 = param_1;
    func_0x00010b8166c0();
    puVar3 = PTR_PTR_1126b09c0;
    _objc_alloc();
    func_0x00010c051640();
    _objc_release(param_3);
    uVar4 = *(undefined8 *)(param_1 + lVar10);
    *(undefined **)(param_1 + lVar10) = puVar3;
    _objc_release(uVar4);
    func_0x00010befbb60(param_1);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar10));
    lVar9 = *(long *)(param_1 + lVar10);
    uVar5 = param_1;
    if ((uVar2 & 1) == 0) {
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1408a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = 0xc03e000000000000;
    }
    else {
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08e400(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = 0x403e000000000000;
    }
    lVar1 = lVar9;
    func_0x00010bf493c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(lVar9);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar6 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf348e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar7);
    _objc_release(uVar4);
    _objc_release(param_1);
    _objc_release(uVar6);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
      return lVar1;
    }
  }
  else {
    func_0x00010bf21300();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar10));
    _objc_release(param_3);
    lVar1 = *(long *)(param_1 + lVar10);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_setHidden__1126479f8,0);
      return lVar1;
    }
  }
  ___stack_chk_fail();
  return *(long *)(lVar1 + _DAT_11277e37c);
}



/* Entry: 108f67aac; end: 108f67abb; -[SCUnifiedProfileCollectionViewStoriesCellButtonsView actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f67aac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e37c);
}



/* Entry: 108f67abc; end: 108f67afb; -[SCUnifiedProfileCollectionViewStoriesCellButtonsView setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f67abc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277e37c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f67afc; end: 108f67b0b; -[SCUnifiedProfileCollectionViewStoriesCellButtonsView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f67afc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e374);
}



/* Entry: 108f67b0c; end: 108f67bab; -[SCUnifiedProfileCollectionViewStoriesCellButtonsView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f67b0c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277e374,0);
  _objc_storeStrong(param_1 + _DAT_11277e37c,0);
  _objc_storeStrong(param_1 + _DAT_11277e378,0);
  _objc_storeStrong(param_1 + _DAT_11277e370,0);
  _objc_storeStrong(param_1 + _DAT_11277e36c,0);
  _objc_storeStrong(param_1 + _DAT_11277e368,0);
  _objc_storeStrong(param_1 + _DAT_11277e364,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e360,0);
  return;
}



/* Entry: 108f67bac; end: 108f67dbf; -[SCUnifiedProfileHorizontalCustomStoryCreationCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108f67bac(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  puStack_58 = PTR_PTR_1126ff608;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR_PTR_1126dcb58;
    _objc_opt_new();
    lVar6 = (long)_DAT_11277e380;
    uVar5 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined **)((long)puVar2 + lVar6) = puVar3;
    _objc_release(uVar5);
    func_0x00010c219b60(*(undefined8 *)((long)puVar2 + lVar6));
    puVar3 = PTR_PTR_1126dcb58;
    _objc_opt_new();
    lVar6 = (long)_DAT_11277e384;
    uVar5 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined **)((long)puVar2 + lVar6) = puVar3;
    _objc_release(uVar5);
    func_0x00010c219b60(*(undefined8 *)((long)puVar2 + lVar6));
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar6 = (long)_DAT_11277e388;
    uVar5 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined **)((long)puVar2 + lVar6) = puVar3;
    _objc_release(uVar5);
    func_0x00010c219b60(*(undefined8 *)((long)puVar2 + lVar6));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar2 + lVar6));
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar6 = (long)_DAT_11277e38c;
    uVar5 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined **)((long)puVar2 + lVar6) = puVar3;
    _objc_release(uVar5);
    func_0x00010c219b60(*(undefined8 *)((long)puVar2 + lVar6));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar2 + lVar6));
    _objc_release(puVar3);
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_11277e390);
    uVar5 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    puVar1[1] = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    *puVar1 = uVar5;
    puVar1[3] = uVar8;
    puVar1[2] = uVar7;
    puVar4 = (undefined1 *)puVar2;
    func_0x00010bf31be0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    puVar4 = (undefined1 *)puVar2;
    func_0x00010bf31be0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    puVar4 = (undefined1 *)puVar2;
    func_0x00010bf31be0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    puVar4 = (undefined1 *)puVar2;
    func_0x00010bf31be0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
  }
  return (undefined1 *)puVar2;
}



/* Entry: 108f67dc0; end: 108f686bb; -[SCUnifiedProfileHorizontalCustomStoryCreationCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f67dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,ulong param_7)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  ulong uVar32;
  long lVar33;
  undefined8 uVar34;
  long lVar35;
  long lVar36;
  ulong uVar37;
  ulong uVar38;
  double dVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
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
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_108 = PTR_PTR_1126ff608;
  puStack_110 = param_5;
  _objc_msgSendSuper2(&puStack_110,PTR_s_layoutSubviews_112600e60);
  puVar3 = param_5;
  func_0x00010bf20c00();
  puVar1 = (undefined8 *)(param_5 + _DAT_11277e390);
  _CGRectEqualToRect();
  if (((ulong)puVar3 & 1) == 0) {
    func_0x00010bf20c00(param_5);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    lVar33 = (long)_DAT_11277e394;
    if (*(long *)(param_5 + lVar33) != 0) {
      func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    }
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    lVar35 = (long)_DAT_11277e380;
    uVar4 = *(undefined8 *)(param_5 + lVar35);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_5;
    func_0x00010bf31be0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar34 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_5 + lVar35);
    uStack_b8 = uVar34;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_5;
    func_0x00010bf31be0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar40 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_5 + lVar35);
    uStack_b0 = uVar40;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_5;
    func_0x00010bf31be0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar41 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar36 = (long)_DAT_11277e388;
    uVar13 = *(undefined8 *)(param_5 + lVar36);
    uStack_a8 = uVar41;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    dVar39 = 1.0;
    uVar14 = uVar13;
    func_0x00010bf49420(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_5 + lVar36);
    uStack_a0 = uVar14;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = param_5;
    func_0x00010bf31be0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(param_5 + lVar36);
    uStack_98 = uVar18;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = param_5;
    func_0x00010bf31be0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar20;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar19;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)(param_5 + lVar36);
    uStack_90 = uVar22;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = param_5;
    func_0x00010bf31be0();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar24;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar23;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_88 = uVar26;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar27);
    _objc_release(uVar26);
    _objc_release(puVar25);
    _objc_release(puVar24);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar41);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(uVar40);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar34);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uVar4);
    lVar36 = (long)_DAT_11277e384;
    iVar2 = (int)*(undefined8 *)(param_5 + lVar36);
    func_0x00010c074c20();
    if (iVar2 == 0) {
      puVar5 = param_5;
      func_0x00010bf31be0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetWidth();
      _objc_release(puVar5);
      puVar28 = *(undefined **)(param_5 + lVar35);
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar28;
      func_0x00010bf49420(dVar39 * 0.5);
      _objc_retainAutoreleasedReturnValue();
      puVar29 = *(undefined **)(param_5 + lVar36);
      puStack_100 = puVar5;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_5;
      func_0x00010bf31be0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar29;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_5 + lVar36);
      puStack_f8 = puVar9;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = param_5;
      func_0x00010bf31be0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar34 = uVar4;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_5 + lVar36);
      uStack_f0 = uVar34;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = param_5;
      func_0x00010bf31be0();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar16;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar40 = uVar7;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_5 + lVar36);
      uStack_e8 = uVar40;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uVar41 = uVar10;
      func_0x00010bf49420(dVar39 * 0.5);
      _objc_retainAutoreleasedReturnValue();
      lVar35 = (long)_DAT_11277e38c;
      uVar13 = *(undefined8 *)(param_5 + lVar35);
      uStack_e0 = uVar41;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = param_5;
      func_0x00010bf31be0();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar20;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar13;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(param_5 + lVar35);
      uStack_d8 = uVar14;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = param_5;
      func_0x00010bf31be0();
      _objc_retainAutoreleasedReturnValue();
      puVar25 = puVar24;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar15;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = *(undefined8 *)(param_5 + lVar35);
      uStack_d0 = uVar18;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      puVar27 = param_5;
      func_0x00010bf31be0();
      _objc_retainAutoreleasedReturnValue();
      puVar30 = puVar27;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      uVar22 = uVar19;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar23 = *(undefined8 *)(param_5 + lVar35);
      uStack_c8 = uVar22;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      uVar26 = uVar23;
      func_0x00010bf49420(0x3ff0000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar31 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_c0 = uVar26;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar3);
      _objc_release(puVar31);
      _objc_release(uVar26);
      _objc_release(uVar23);
      _objc_release(uVar22);
      _objc_release(puVar30);
      _objc_release(puVar27);
      _objc_release(uVar19);
      _objc_release(uVar18);
      _objc_release(puVar25);
      _objc_release(puVar24);
      _objc_release(uVar15);
      _objc_release(uVar14);
      _objc_release(puVar21);
      _objc_release(puVar20);
      _objc_release(uVar13);
      _objc_release(uVar41);
      _objc_release(uVar10);
      _objc_release(uVar40);
      _objc_release(puVar17);
      _objc_release(puVar16);
      _objc_release(uVar7);
      _objc_release(uVar34);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(uVar4);
      _objc_release(puVar9);
      _objc_release(puVar8);
    }
    else {
      puVar28 = *(undefined **)(param_5 + lVar35);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_5;
      func_0x00010bf31be0();
      _objc_retainAutoreleasedReturnValue();
      puVar29 = puVar5;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar28;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3);
    }
    _objc_release(puVar6);
    _objc_release(puVar29);
    _objc_release(puVar5);
    _objc_release(puVar28);
    puVar5 = puVar3;
    func_0x00010bf51e00();
    uVar34 = *(undefined8 *)(param_5 + lVar33);
    *(undefined **)(param_5 + lVar33) = puVar5;
    _objc_release(uVar34);
    param_7 = *(ulong *)(param_5 + lVar33);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_7);
  lVar33 = (long)_DAT_11277e398;
  uVar37 = *(ulong *)(puVar3 + lVar33);
  _objc_retain(uVar37);
  _objc_retain(param_7);
  if (uVar37 == param_7) {
    _objc_release(param_7);
    _objc_release(uVar37);
  }
  else {
    if (param_7 == 0) {
      _objc_release(uVar37);
    }
    else {
      uVar32 = uVar37;
      func_0x00010c071ae0();
      _objc_release(param_7);
      _objc_release(uVar37);
      if ((uVar32 & 1) != 0) goto LAB_108f68874;
    }
    uVar37 = param_7;
    func_0x00010bf51e00();
    uVar34 = *(undefined8 *)(puVar3 + lVar33);
    *(ulong *)(puVar3 + lVar33) = uVar37;
    _objc_release(uVar34);
    puVar5 = PTR_PTR_1126d78f0;
    uVar38 = *(ulong *)(puVar3 + lVar33);
    _objc_retain(uVar38);
    _objc_opt_class(puVar5);
    uVar32 = uVar38;
    _objc_opt_isKindOfClass(uVar38,puVar5);
    uVar37 = uVar38;
    if ((uVar32 & 1) == 0) {
      uVar37 = 0;
    }
    _objc_retain(uVar37);
    _objc_release(uVar38);
    uVar32 = uVar37;
    func_0x00010c08e5e0(uVar37);
    _objc_retainAutoreleasedReturnValue();
    lVar33 = (long)_DAT_11277e380;
    func_0x00010c2226c0(*(undefined8 *)(puVar3 + lVar33));
    _objc_release(uVar32);
    uVar32 = uVar37;
    func_0x00010c140a20(uVar37);
    _objc_retainAutoreleasedReturnValue();
    lVar35 = (long)_DAT_11277e384;
    func_0x00010c2226c0(*(undefined8 *)(puVar3 + lVar35));
    _objc_release(uVar32);
    func_0x00010c140a20(uVar37);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x00010c1a7f60(*(undefined8 *)(puVar3 + lVar35));
    func_0x00010c1a7f60(*(undefined8 *)(puVar3 + _DAT_11277e38c));
    func_0x00010c1b4660(*(undefined8 *)(puVar3 + lVar33));
    _objc_release(uVar37);
    puVar1 = (undefined8 *)(puVar3 + _DAT_11277e390);
    uVar34 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar41 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    uVar40 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    puVar1[1] = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    *puVar1 = uVar34;
    puVar1[3] = uVar41;
    puVar1[2] = uVar40;
    func_0x00010c1cbe20(puVar3);
  }
LAB_108f68874:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 108f686bc; end: 108f6888f; -[SCUnifiedProfileHorizontalCustomStoryCreationCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f686bc(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_11277e398;
  uVar5 = *(ulong *)(param_1 + lVar7);
  _objc_retain(uVar5);
  _objc_retain(param_3);
  if (uVar5 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar5);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar2 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar2 & 1) != 0) goto LAB_108f68874;
    }
    uVar5 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    *(ulong *)(param_1 + lVar7) = uVar5;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126d78f0;
    uVar6 = *(ulong *)(param_1 + lVar7);
    _objc_retain(uVar6);
    _objc_opt_class(puVar3);
    uVar2 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar3);
    uVar5 = uVar6;
    if ((uVar2 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar6);
    uVar2 = uVar5;
    func_0x00010c08e5e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_11277e380;
    func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar7));
    _objc_release(uVar2);
    uVar2 = uVar5;
    func_0x00010c140a20(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_11277e384;
    func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar8));
    _objc_release(uVar2);
    func_0x00010c140a20(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar8));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277e38c));
    func_0x00010c1b4660(*(undefined8 *)(param_1 + lVar7));
    _objc_release(uVar5);
    puVar1 = (undefined8 *)(param_1 + _DAT_11277e390);
    uVar4 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    puVar1[1] = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    *puVar1 = uVar4;
    puVar1[3] = uVar10;
    puVar1[2] = uVar9;
    func_0x00010c1cbe20(param_1);
  }
LAB_108f68874:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f68890; end: 108f688df; -[SCUnifiedProfileHorizontalCustomStoryCreationCell setUseRedesignedStyle:] */

/* WARNING: Possible PIC construction at 0x000108f688c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108f688c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f68890(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277e39c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c21da30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277e380),PTR_s_setUseRedesignedStyle__1126650b0);
  return;
}



/* Entry: 108f688e0; end: 108f68957; -[SCUnifiedProfileHorizontalCustomStoryCreationCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f688e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277e3a0);
  *(undefined8 *)(param_1 + _DAT_11277e3a0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c161980(*(undefined8 *)(param_1 + _DAT_11277e380),param_2,param_3);
  func_0x00010c161980(*(undefined8 *)(param_1 + _DAT_11277e384),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f68958; end: 108f68967; -[SCUnifiedProfileHorizontalCustomStoryCreationCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f68958(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e398);
}



/* Entry: 108f68968; end: 108f68977; -[SCUnifiedProfileHorizontalCustomStoryCreationCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f68968(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e3a0);
}



/* Entry: 108f68978; end: 108f68987; -[SCUnifiedProfileHorizontalCustomStoryCreationCell useRedesignedStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108f68978(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277e39c);
}



/* Entry: 108f68988; end: 108f68a17; -[SCUnifiedProfileHorizontalCustomStoryCreationCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f68988(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277e3a0,0);
  _objc_storeStrong(param_1 + _DAT_11277e398,0);
  _objc_storeStrong(param_1 + _DAT_11277e394,0);
  _objc_storeStrong(param_1 + _DAT_11277e38c,0);
  _objc_storeStrong(param_1 + _DAT_11277e388,0);
  _objc_storeStrong(param_1 + _DAT_11277e384,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e380,0);
  return;
}



/* Entry: 108f68a18; end: 108f68e43; -[SCUnifiedProfileHorizontalCustomStoryCreationCellCardView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108f68a18(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126ff610;
  puVar6 = &uStack_98;
  uStack_98 = param_5;
  _objc_msgSendSuper2(puVar6,PTR_s_initWithFrame__1125e2948);
  puVar1 = (undefined *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar6);
    _objc_release(puVar1);
    func_0x00010c21e900(puVar6);
    puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    func_0x00010bef9040(puVar6);
    puVar2 = PTR_PTR_1126b52f0;
    _objc_opt_new();
    lVar11 = (long)_DAT_11277e3a4;
    uVar7 = *(undefined8 *)((long)puVar6 + lVar11);
    *(undefined **)((long)puVar6 + lVar11) = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar7 = *(undefined8 *)((long)puVar6 + lVar11);
    func_0x00010c22a660(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar7);
    _objc_release(puVar2);
    func_0x00010befbb60(puVar6);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)puVar6 + (long)_DAT_11277e3a8);
    *(undefined **)((long)puVar6 + (long)_DAT_11277e3a8) = puVar2;
    _objc_release(uVar7);
    func_0x00010befbb60(puVar6);
    puVar2 = PTR_PTR_1126aea58;
    _objc_opt_new();
    lVar10 = (long)_DAT_11277e3ac;
    uVar7 = *(undefined8 *)((long)puVar6 + lVar10);
    *(undefined **)((long)puVar6 + lVar10) = puVar2;
    _objc_release(uVar7);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar6 + lVar10));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar6 + lVar10));
    _objc_release(puVar2);
    func_0x00010c165e20(*(undefined8 *)((long)puVar6 + lVar10));
    func_0x00010c213040(*(undefined8 *)((long)puVar6 + lVar10));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar6 + lVar10));
    func_0x00010befbb60(puVar6);
    func_0x00010c219b60(*(undefined8 *)((long)puVar6 + lVar10));
    uVar3 = *(undefined8 *)((long)puVar6 + lVar10);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010c274200(puVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = (long)_DAT_11277e3b0;
    uVar8 = *(undefined8 *)((long)puVar6 + lVar12);
    *(undefined8 *)((long)puVar6 + lVar12) = uVar7;
    _objc_release(uVar8);
    _objc_release(puVar4);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar6 + lVar10);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010bf1ff80(puVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = (long)_DAT_11277e3b4;
    uVar8 = *(undefined8 *)((long)puVar6 + lVar13);
    *(undefined8 *)((long)puVar6 + lVar13) = uVar7;
    _objc_release(uVar8);
    _objc_release(puVar4);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar6 + lVar10);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar6 + lVar11);
    func_0x00010c2793a0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = (long)_DAT_11277e3b8;
    uVar9 = *(undefined8 *)((long)puVar6 + lVar11);
    *(undefined8 *)((long)puVar6 + lVar11) = uVar7;
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar6 + lVar10);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010c2793a0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    param_1 = -12.0;
    uVar7 = uVar3;
    func_0x00010bf493c0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = (long)_DAT_11277e3bc;
    uVar8 = *(undefined8 *)((long)puVar6 + lVar10);
    *(undefined8 *)((long)puVar6 + lVar10) = uVar7;
    _objc_release(uVar8);
    _objc_release(puVar4);
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uStack_88 = *(undefined8 *)((long)puVar6 + lVar12);
    uStack_80 = *(undefined8 *)((long)puVar6 + lVar13);
    uStack_78 = *(undefined8 *)((long)puVar6 + lVar11);
    uStack_70 = *(undefined8 *)((long)puVar6 + lVar10);
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar5);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar6;
  }
  ___stack_chk_fail();
  puStack_138 = PTR_PTR_1126ff610;
  puStack_140 = puVar1;
  _objc_msgSendSuper2(&puStack_140,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(puVar1);
  dVar14 = param_1;
  _CGRectGetHeight();
  dVar14 = dVar14 + -26.0;
  dVar18 = dVar14 * 0.5;
  func_0x00010b816218(dVar14);
  dVar14 = (double)(long)(dVar14 * dVar18) / dVar14;
  if (puVar1[_DAT_11277e3c0] == '\x01') {
    dVar18 = 18.0;
    if (puVar1[_DAT_11277e3c4] == '\0') {
      dVar18 = 12.0;
    }
    dVar15 = param_1;
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    dVar15 = (dVar15 + -12.0 + -26.0) - dVar18;
    if (dVar15 <= 0.0) {
      dVar15 = 0.0;
    }
    lVar10 = (long)_DAT_11277e3ac;
    uVar7 = *(undefined8 *)(puVar1 + lVar10);
    dVar16 = param_1;
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    dVar17 = 1.79769313486232e+308;
    func_0x00010c23d5a0(0x7fefffffffffffff,dVar16,uVar7);
    dVar16 = (double)(long)dVar17;
    if (dVar15 <= (double)(long)dVar17) {
      dVar16 = dVar15;
    }
    dVar15 = param_1;
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    dVar15 = (dVar15 - (dVar18 + 26.0 + dVar16)) * 0.5;
    if (dVar15 <= 12.0) {
      dVar15 = 12.0;
    }
    func_0x00010b8166f8(dVar15,dVar14,0x403a000000000000,0x403a000000000000,puVar1);
    lVar12 = (long)_DAT_11277e3a4;
    func_0x00010c19f0e0(*(undefined8 *)(puVar1 + lVar12));
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf199a0(0,0,0x403a000000000000,0x403a000000000000,
                        PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    uVar7 = *(undefined8 *)(puVar1 + lVar12);
    func_0x00010c22a660(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820();
    _objc_release(uVar7);
    _objc_release(puVar2);
    func_0x00010b8166f8(0,0,0x403a000000000000,0x403a000000000000,puVar1);
    lVar11 = (long)_DAT_11277e3a8;
    func_0x00010c19f0e0(*(undefined8 *)(puVar1 + lVar11));
    func_0x00010bf345e0(*(undefined8 *)(puVar1 + lVar12));
    func_0x00010c17a6a0(*(undefined8 *)(puVar1 + lVar11));
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    func_0x00010b8166f8(dVar18 + dVar15 + 26.0,0,dVar16,param_1,puVar1);
    puVar6 = *(undefined8 **)(puVar1 + lVar10);
    func_0x00010c19f0e0(puVar6);
  }
  else {
    func_0x00010b8166f8(0x4028000000000000,dVar14,0x403a000000000000,0x403a000000000000,puVar1);
    lVar11 = (long)_DAT_11277e3a4;
    func_0x00010c19f0e0(*(undefined8 *)(puVar1 + lVar11));
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf199a0(0,0,0x403a000000000000,0x403a000000000000,
                        PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    uVar7 = *(undefined8 *)(puVar1 + lVar11);
    func_0x00010c22a660(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820();
    _objc_release(uVar7);
    _objc_release(puVar2);
    func_0x00010b8166f8(0,0,0x403a000000000000,0x403a000000000000,puVar1);
    lVar10 = (long)_DAT_11277e3a8;
    func_0x00010c19f0e0(*(undefined8 *)(puVar1 + lVar10));
    func_0x00010bf345e0(*(undefined8 *)(puVar1 + lVar11));
    puVar6 = *(undefined8 **)(puVar1 + lVar10);
    func_0x00010c17a6a0(puVar6);
  }
  return puVar6;
}



/* Entry: 108f68e44; end: 108f69183; -[SCUnifiedProfileHorizontalCustomStoryCreationCellCardView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f68e44(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  long lStack_a0;
  undefined *puStack_98;
  
  puStack_98 = PTR_PTR_1126ff610;
  lStack_a0 = param_5;
  _objc_msgSendSuper2(&lStack_a0,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  dVar6 = param_1;
  _CGRectGetHeight();
  dVar6 = dVar6 + -26.0;
  dVar10 = dVar6 * 0.5;
  func_0x00010b816218(dVar6);
  dVar6 = (double)(long)(dVar6 * dVar10) / dVar6;
  if (*(char *)(param_5 + _DAT_11277e3c0) == '\x01') {
    dVar10 = 18.0;
    if (*(char *)(param_5 + _DAT_11277e3c4) == '\0') {
      dVar10 = 12.0;
    }
    dVar7 = param_1;
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    dVar7 = (dVar7 + -12.0 + -26.0) - dVar10;
    if (dVar7 <= 0.0) {
      dVar7 = 0.0;
    }
    lVar4 = (long)_DAT_11277e3ac;
    uVar2 = *(undefined8 *)(param_5 + lVar4);
    dVar8 = param_1;
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    dVar9 = 1.79769313486232e+308;
    func_0x00010c23d5a0(0x7fefffffffffffff,dVar8,uVar2);
    dVar8 = (double)(long)dVar9;
    if (dVar7 <= (double)(long)dVar9) {
      dVar8 = dVar7;
    }
    dVar7 = param_1;
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    dVar7 = (dVar7 - (dVar10 + 26.0 + dVar8)) * 0.5;
    if (dVar7 <= 12.0) {
      dVar7 = 12.0;
    }
    func_0x00010b8166f8(dVar7,dVar6,0x403a000000000000,0x403a000000000000,param_5);
    lVar5 = (long)_DAT_11277e3a4;
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar5));
    puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf199a0(0,0,0x403a000000000000,0x403a000000000000,
                        PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    uVar2 = *(undefined8 *)(param_5 + lVar5);
    func_0x00010c22a660(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820();
    _objc_release(uVar2);
    _objc_release(puVar1);
    func_0x00010b8166f8(0,0,0x403a000000000000,0x403a000000000000,param_5);
    lVar3 = (long)_DAT_11277e3a8;
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar3));
    func_0x00010bf345e0(*(undefined8 *)(param_5 + lVar5));
    func_0x00010c17a6a0(*(undefined8 *)(param_5 + lVar3));
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    func_0x00010b8166f8(dVar10 + dVar7 + 26.0,0,dVar8,param_1,param_5);
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar4));
  }
  else {
    func_0x00010b8166f8(0x4028000000000000,dVar6,0x403a000000000000,0x403a000000000000,param_5);
    lVar3 = (long)_DAT_11277e3a4;
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar3));
    puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf199a0(0,0,0x403a000000000000,0x403a000000000000,
                        PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    uVar2 = *(undefined8 *)(param_5 + lVar3);
    func_0x00010c22a660(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820();
    _objc_release(uVar2);
    _objc_release(puVar1);
    func_0x00010b8166f8(0,0,0x403a000000000000,0x403a000000000000,param_5);
    lVar4 = (long)_DAT_11277e3a8;
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar4));
    func_0x00010bf345e0(*(undefined8 *)(param_5 + lVar3));
    func_0x00010c17a6a0(*(undefined8 *)(param_5 + lVar4));
  }
  return;
}



/* Entry: 108f69184; end: 108f692af; -[SCUnifiedProfileHorizontalCustomStoryCreationCellCardView setUseRedesignedStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f69184(long param_1,undefined8 param_2,uint param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(byte *)(param_1 + _DAT_11277e3c4) != param_3) {
    *(char *)(param_1 + _DAT_11277e3c4) = (char)param_3;
    bVar1 = param_3 == 0;
    uVar3 = 0x6b;
    if (bVar1) {
      uVar3 = 0x28;
    }
    uVar4 = 0x4032000000000000;
    if (bVar1) {
      uVar4 = 0x4028000000000000;
    }
    uVar5 = 0xc020000000000000;
    if (bVar1) {
      uVar5 = 0xc028000000000000;
    }
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar3 = *(undefined8 *)(param_1 + _DAT_11277e3a4);
    func_0x00010c22a660(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar3);
    _objc_release(puVar2);
    func_0x00010c182220(*(undefined8 *)(param_1 + _DAT_11277e3a8));
    func_0x00010c213040(*(undefined8 *)(param_1 + _DAT_11277e3ac));
    func_0x00010c181140(uVar4,*(undefined8 *)(param_1 + _DAT_11277e3b8));
    func_0x00010c181140(uVar5,*(undefined8 *)(param_1 + _DAT_11277e3bc));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
    return;
  }
  return;
}



/* Entry: 108f692b0; end: 108f69413; -[SCUnifiedProfileHorizontalCustomStoryCreationCellCardView setIsSingleCard:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f692b0(long param_1,undefined8 param_2,undefined *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((uint)*(byte *)(param_1 + _DAT_11277e3c0) != (uint)param_3) {
    *(char *)(param_1 + _DAT_11277e3c0) = (char)param_3;
    puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    if ((uint)param_3 == 0) {
      func_0x00010c219b60(*(undefined8 *)(param_1 + _DAT_11277e3ac));
      puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      param_3 = puVar2;
      func_0x00010beef8c0(puVar5);
      _objc_release(puVar2);
    }
    else {
      uStack_58 = *(undefined8 *)(param_1 + _DAT_11277e3b8);
      uStack_50 = *(undefined8 *)(param_1 + _DAT_11277e3bc);
      uStack_48 = *(undefined8 *)(param_1 + _DAT_11277e3b0);
      uStack_40 = *(undefined8 *)(param_1 + _DAT_11277e3b4);
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_58,4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf65be0(puVar5);
      _objc_release(puVar2);
      param_3 = (undefined *)0x1;
      func_0x00010c219b60(*(undefined8 *)(param_1 + _DAT_11277e3ac));
    }
    func_0x00010c1cbe20();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  lVar7 = (long)_DAT_11277e3c8;
  puVar5 = *(undefined **)(param_1 + lVar7);
  _objc_retain(puVar5);
  _objc_retain(param_3);
  if (puVar5 == param_3) {
    _objc_release(param_3);
    _objc_release(puVar5);
  }
  else {
    if (param_3 == (undefined *)0x0) {
      _objc_release(puVar5);
    }
    else {
      puVar2 = puVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(puVar5);
      if (((ulong)puVar2 & 1) != 0) goto LAB_108f6956c;
    }
    puVar5 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar5;
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126d78f8;
    uVar6 = *(ulong *)(param_1 + lVar7);
    _objc_retain(uVar6);
    _objc_opt_class(puVar5);
    uVar3 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar5);
    uVar1 = uVar6;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar6);
    uVar3 = uVar1;
    func_0x00010bfe5680(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11277e3a8));
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010c2711a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11277e3ac));
    _objc_release(uVar1);
    _objc_release(uVar3);
    func_0x00010c1cbe20(param_1);
  }
LAB_108f6956c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f69414; end: 108f69583; -[SCUnifiedProfileHorizontalCustomStoryCreationCellCardView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f69414(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11277e3c8;
  uVar4 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  if (uVar4 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar4);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar4);
    }
    else {
      uVar1 = uVar4;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_108f6956c;
    }
    uVar4 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126d78f8;
    uVar5 = *(ulong *)(param_1 + lVar6);
    _objc_retain(uVar5);
    _objc_opt_class(puVar2);
    uVar1 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar2);
    uVar4 = uVar5;
    if ((uVar1 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar5);
    uVar1 = uVar4;
    func_0x00010bfe5680(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11277e3a8));
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010c2711a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11277e3ac));
    _objc_release(uVar4);
    _objc_release(uVar1);
    func_0x00010c1cbe20(param_1);
  }
LAB_108f6956c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f69584; end: 108f6962f; -[SCUnifiedProfileHorizontalCustomStoryCreationCellCardView _handleTapAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f69584(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126d78f8;
  uVar4 = *(ulong *)(param_1 + _DAT_11277e3c8);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11277e3cc);
  uVar3 = uVar1;
  func_0x00010c268c60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 108f69630; end: 108f6963f; -[SCUnifiedProfileHorizontalCustomStoryCreationCellCardView actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f69630(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e3cc);
}



/* Entry: 108f69640; end: 108f6967f; -[SCUnifiedProfileHorizontalCustomStoryCreationCellCardView setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f69640(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277e3cc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f69680; end: 108f6968f; -[SCUnifiedProfileHorizontalCustomStoryCreationCellCardView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f69680(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e3c8);
}



/* Entry: 108f69690; end: 108f6969f; -[SCUnifiedProfileHorizontalCustomStoryCreationCellCardView useRedesignedStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108f69690(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277e3c4);
}



/* Entry: 108f696a0; end: 108f696af; -[SCUnifiedProfileHorizontalCustomStoryCreationCellCardView isSingleCard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108f696a0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277e3c0);
}



/* Entry: 108f696b0; end: 108f6975f; -[SCUnifiedProfileHorizontalCustomStoryCreationCellCardView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f696b0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277e3c8,0);
  _objc_storeStrong(param_1 + _DAT_11277e3cc,0);
  _objc_storeStrong(param_1 + _DAT_11277e3b4,0);
  _objc_storeStrong(param_1 + _DAT_11277e3b0,0);
  _objc_storeStrong(param_1 + _DAT_11277e3bc,0);
  _objc_storeStrong(param_1 + _DAT_11277e3b8,0);
  _objc_storeStrong(param_1 + _DAT_11277e3ac,0);
  _objc_storeStrong(param_1 + _DAT_11277e3a8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e3a4,0);
  return;
}



/* Entry: 108f69760; end: 108f699c7; -[SCUnifiedProfileSpotlightEntryCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108f69760(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126ff618;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    lVar6 = (long)_DAT_11277e3d0;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar6));
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4031000000000000);
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126b0c40;
    func_0x00010bfe7b00(0x4032000000000000,0x4032000000000000,PTR_PTR_1126b0c40);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf414e0(0x3fc999999999999a);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c1ba240(puVar1);
    puVar2 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_11277e3d4;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    func_0x00010c216380(*(undefined8 *)((long)puVar1 + lVar6));
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    puVar2 = PTR_PTR_1126b0c40;
    func_0x00010bfe7b00(0x4030000000000000,0x4030000000000000,PTR_PTR_1126b0c40);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(uVar5);
    _objc_release(puVar2);
    func_0x00010c1aab40(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c198080(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277e3d8);
    *(undefined **)((long)puVar1 + (long)_DAT_11277e3d8) = puVar2;
    _objc_release(uVar5);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108f699c8; end: 108f69be3; -[SCUnifiedProfileSpotlightEntryCell configureWithTitle:subtitle:postButtonTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f699c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  FUN_108f62f68(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010c271420(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720();
  _objc_release(lVar5);
  uVar1 = param_6;
  func_0x000108f634a8(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  if (param_7 == 0) {
    param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
    param_2 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    func_0x00010c1a7f60(*(undefined8 *)(param_3 + _DAT_11277e3d4));
    uVar6 = 0;
  }
  else {
    lVar5 = (long)_DAT_11277e3d4;
    func_0x00010c216260(*(undefined8 *)(param_3 + lVar5));
    func_0x00010c1a7f60(*(undefined8 *)(param_3 + lVar5));
    func_0x00010c1ee160(param_3);
    func_0x00010c0699c0(*(undefined8 *)(param_3 + lVar5));
    uVar6 = 0x4022000000000000;
  }
  puVar3 = PTR_PTR_1126c74d8;
  _objc_alloc();
  func_0x00010c0220e0(0x4041000000000000,0x4041000000000000,0x4028000000000000,param_1,param_2,uVar6
                      ,0x404c000000000000,0x4024000000000000);
  puVar4 = PTR_PTR_1126b2c10;
  _objc_alloc(PTR_PTR_1126b2c10);
  func_0x00010c053700();
  puStack_78 = PTR_PTR_1126ff618;
  lStack_80 = param_3;
  _objc_msgSendSuper2(&lStack_80,PTR_s_setViewModel__1126663d8,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_7);
  return;
}



/* Entry: 108f69be4; end: 108f69c67; -[SCUnifiedProfileSpotlightEntryCell _handleTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f69be4(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + _DAT_11277e3dc) != 0) {
    lVar1 = param_1;
    func_0x00010beee460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010beee460(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd0140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 108f69c68; end: 108f69cf3; -[SCUnifiedProfileSpotlightEntryCell _handlePostButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f69c68(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + _DAT_11277e3dc) != 0) {
    lVar1 = param_1;
    func_0x00010beee460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010beee460(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd0140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 108f69cf4; end: 108f69d03; -[SCUnifiedProfileSpotlightEntryCell tapActionModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f69cf4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e3dc);
}



/* Entry: 108f69d04; end: 108f69d43; -[SCUnifiedProfileSpotlightEntryCell setTapActionModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f69d04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277e3dc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f69d44; end: 108f69da3; -[SCUnifiedProfileSpotlightEntryCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f69d44(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277e3dc,0);
  _objc_storeStrong(param_1 + _DAT_11277e3d8,0);
  _objc_storeStrong(param_1 + _DAT_11277e3d4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e3d0,0);
  return;
}



/* Entry: 108f69da4; end: 108f69e1b; -[SCUnifiedProfileVerticalCustomStoryCreationCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108f69da4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ff620;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126cc318;
    _objc_opt_new();
    lVar4 = (long)_DAT_11277e3e0;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c1619c0(*(undefined8 *)((long)puVar1 + lVar4));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108f69e1c; end: 108f69fb7; -[SCUnifiedProfileVerticalCustomStoryCreationCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f69e1c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11277e3e4;
  uVar4 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  if (uVar4 == param_3) {
    _objc_release(param_3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar4);
    }
    else {
      uVar1 = uVar4;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_108f69f98;
    }
    puStack_48 = PTR_PTR_1126ff620;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_setViewModel__1126663d8,param_3);
    uVar4 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b2c10;
    uVar5 = *(ulong *)(param_1 + lVar6);
    _objc_retain(uVar5);
    _objc_opt_class(puVar2);
    uVar1 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar2);
    uVar4 = uVar5;
    if ((uVar1 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar5);
    lVar6 = (long)_DAT_11277e3e0;
    func_0x00010c1ba240(param_1);
    uVar1 = uVar4;
    func_0x00010c08e7c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar6));
    _objc_release(uVar1);
    lVar6 = param_1;
    func_0x00010c08e7a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(lVar6);
    func_0x00010c21e900(param_1);
  }
  _objc_release(uVar4);
LAB_108f69f98:
  _objc_release(param_3);
  return;
}



/* Entry: 108f69fb8; end: 108f6a01b; -[SCUnifiedProfileVerticalCustomStoryCreationCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f69fb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff620;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setActionHandler__112636080,param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277e3e8);
  *(undefined8 *)(param_1 + _DAT_11277e3e8) = param_3;
  _objc_release(uVar1);
  return;
}



/* Entry: 108f6a01c; end: 108f6a037; -[SCUnifiedProfileVerticalCustomStoryCreationCell handleActionWithActionModel:fromSourceView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6a01c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277e3e8),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,param_3,param_4);
  return;
}



/* Entry: 108f6a038; end: 108f6a047; -[SCUnifiedProfileVerticalCustomStoryCreationCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f6a038(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e3e4);
}



/* Entry: 108f6a048; end: 108f6a057; -[SCUnifiedProfileVerticalCustomStoryCreationCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f6a048(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e3e8);
}



/* Entry: 108f6a058; end: 108f6a0a7; -[SCUnifiedProfileVerticalCustomStoryCreationCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6a058(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277e3e8,0);
  _objc_storeStrong(param_1 + _DAT_11277e3e4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e3e0,0);
  return;
}



/* Entry: 108f6a0a8; end: 108f6a2fb; -[SCUnifiedProfileStoriesListCellButtonsView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108f6a0a8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126ff628;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar8 = (long)_DAT_11277e3ec;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar8 = (long)_DAT_11277e3f0;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar2;
    _objc_release(uVar6);
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010bf6b7e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar6);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar8 = (long)_DAT_11277e3f4;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar2;
    _objc_release(uVar5);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar8));
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar7 = (long)_DAT_11277e3f8;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar5);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar7));
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar8));
    puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010befbb60(puVar1);
    func_0x00010befbb60(puVar1);
    func_0x00010c21e900(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108f6a2fc; end: 108f6a413; -[SCUnifiedProfileStoriesListCellButtonsView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6a2fc(double param_1,long param_2)

{
  double dVar1;
  double dVar2;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ff628;
  lStack_50 = param_2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  param_1 = param_1 + -40.0;
  dVar1 = param_1 * 0.5;
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  dVar2 = param_1 + -80.0 + 8.75;
  func_0x00010c19f0e0(dVar2,dVar1,0x4044000000000000,0x4044000000000000,
                      *(undefined8 *)(param_2 + _DAT_11277e3f4));
  func_0x00010c19f0e0(dVar2 + 40.0,dVar1,0x4044000000000000,0x4044000000000000,
                      *(undefined8 *)(param_2 + _DAT_11277e3f8));
  func_0x00010c19f0e0(0x4026000000000000,0x4026000000000000,0x4032000000000000,0x4032000000000000,
                      *(undefined8 *)(param_2 + _DAT_11277e3ec));
  func_0x00010c19f0e0(0x4021800000000000,0x4021800000000000,0x4036800000000000,0x4036800000000000,
                      *(undefined8 *)(param_2 + _DAT_11277e3f0));
  return;
}



/* Entry: 108f6a414; end: 108f6a62f; -[SCUnifiedProfileStoriesListCellButtonsView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6a414(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11277e3fc;
  uVar4 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar4);
  _objc_retain(param_3);
  if (uVar4 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar4);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar4);
    }
    else {
      uVar1 = uVar4;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar4);
      if ((uVar1 & 1) != 0) goto LAB_108f6a618;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cc2f0;
    uVar5 = *(ulong *)(param_1 + lVar6);
    _objc_retain(uVar5);
    _objc_opt_class(puVar3);
    uVar1 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar3);
    uVar4 = uVar5;
    if ((uVar1 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar5);
    uVar1 = uVar4;
    func_0x00010c149ea0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277e3ec));
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010c149ea0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900(*(undefined8 *)(param_1 + _DAT_11277e3f4));
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010c149ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277e400);
    *(ulong *)(param_1 + _DAT_11277e400) = uVar1;
    _objc_release(uVar2);
    uVar1 = uVar4;
    func_0x00010bf6b220(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277e3f0));
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010bf6b220(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900(*(undefined8 *)(param_1 + _DAT_11277e3f8));
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010bf6b220();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277e404);
    *(ulong *)(param_1 + _DAT_11277e404) = uVar1;
    _objc_release(uVar2);
    _objc_release(uVar4);
    func_0x00010c1cbe20(param_1);
  }
LAB_108f6a618:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f6a630; end: 108f6a667; -[SCUnifiedProfileStoriesListCellButtonsView setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6a630(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277e408);
  *(undefined8 *)(param_1 + _DAT_11277e408) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f6a668; end: 108f6a68f; -[SCUnifiedProfileStoriesListCellButtonsView _handleSaveButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f6a668(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277e408),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,
             *(undefined8 *)(param_1 + _DAT_11277e400),*(undefined8 *)(param_1 + _DAT_11277e3ec));
  return;
}


