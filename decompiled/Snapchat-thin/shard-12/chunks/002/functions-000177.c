/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108f19b74; end: 108f19c1b;  */

void FUN_108f19b74(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  func_0x00010c0f88c0(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 108f19c1c; end: 108f19c47;  */

void FUN_108f19c1c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd7180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f19c48; end: 108f19d27; -[SCImpalaBusinessProfileManager hostAccountProfileIdFuture] */

void FUN_108f19c48(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  func_0x00010bdc74c0(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bfbc3e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108f19d28;
  puStack_40 = &UNK_110842e18;
  uStack_38 = uVar2;
  _objc_retain(uVar2);
  func_0x000107c312cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f19d28; end: 108f19d2f;  */

void FUN_108f19d28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09b6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_loadIfNeeded_1126047c8);
  return;
}



/* Entry: 108f19d30; end: 108f19d5f; -[SCImpalaBusinessProfileManager setCurrentUserSnapchatter:] */

void FUN_108f19d30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f19d60; end: 108f19feb; -[SCImpalaBusinessProfileManager hasPendingRoleInvites] */

void FUN_108f19d60(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar5 = *(long *)(param_1 + 0x38);
  if (lVar5 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x88);
    _objc_retain(uVar6);
    lVar5 = param_1;
    func_0x00010c0f98a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126dc7d0;
    _objc_alloc();
    func_0x00010bff5d40(0);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar1;
    _objc_release(uVar4);
    puVar1 = PTR_PTR_1126dc838;
    _objc_alloc(PTR_PTR_1126dc838);
    lVar2 = param_1;
    func_0x00010bf262a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x00010bffa680(puVar1,param_2,lVar2,&PTR____CFConstantStringClassReference_110f05838,puVar3
                       );
    func_0x00010c175020(*(undefined8 *)(param_1 + 0x38),param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(lVar2);
    puVar1 = PTR_PTR_1126dc7c8;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x108f19ef0;
    puStack_58 = &UNK_110acb278;
    uStack_50 = uVar6;
    lStack_48 = lVar5;
    _objc_retain(lVar5);
    _objc_retain(uVar6);
    func_0x00010c09cb20(puVar1,param_2,&puStack_70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1beb20(*(undefined8 *)(param_1 + 0x38),param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(lStack_48);
    _objc_release(uStack_50);
    _objc_release(lVar5);
    _objc_release(uVar6);
    lVar5 = *(long *)(param_1 + 0x38);
  }
  _objc_retain(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 108f19fec; end: 108f1a0b3;  */

void FUN_108f19fec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_3);
  return;
}



/* Entry: 108f1a0b4; end: 108f1a137;  */

void FUN_108f1a0b4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = *(long *)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108f1a0e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,0,0);
    return;
  }
  func_0x00010bfda180(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c0df6e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108f1a138; end: 108f1a3c3; -[SCImpalaBusinessProfileManager userSettings] */

void FUN_108f1a138(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar5 = *(long *)(param_1 + 0x40);
  if (lVar5 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x88);
    _objc_retain(uVar6);
    lVar5 = param_1;
    func_0x00010c0f98a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126dc7d0;
    _objc_alloc();
    func_0x00010bff5d40(0);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    *(undefined **)(param_1 + 0x40) = puVar1;
    _objc_release(uVar4);
    puVar1 = PTR_PTR_1126dc838;
    _objc_alloc(PTR_PTR_1126dc838);
    lVar2 = param_1;
    func_0x00010bf262a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cc2d0;
    _objc_opt_class(PTR_PTR_1126cc2d0);
    func_0x00010bffa680(puVar1,param_2,lVar2,&PTR____CFConstantStringClassReference_110f05858,puVar3
                       );
    func_0x00010c175020(*(undefined8 *)(param_1 + 0x40),param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(lVar2);
    puVar1 = PTR_PTR_1126dc7c8;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x108f1a2c8;
    puStack_58 = &UNK_110acb278;
    uStack_50 = uVar6;
    lStack_48 = lVar5;
    _objc_retain(lVar5);
    _objc_retain(uVar6);
    func_0x00010c09cb20(puVar1,param_2,&puStack_70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1beb20(*(undefined8 *)(param_1 + 0x40),param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(lStack_48);
    _objc_release(uStack_50);
    _objc_release(lVar5);
    _objc_release(uVar6);
    lVar5 = *(long *)(param_1 + 0x40);
  }
  _objc_retain(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 108f1a3c4; end: 108f1a48b;  */

void FUN_108f1a3c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_3);
  return;
}



/* Entry: 108f1a48c; end: 108f1a4fb;  */

void FUN_108f1a48c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108f1a4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,0,0);
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c227f80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar1,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f1a4fc; end: 108f1a65f; -[SCImpalaBusinessProfileManager updateUserSettings:completionQueue:completion:] */

void FUN_108f1a4fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126dc850;
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010bf51e00(param_3);
  func_0x00010c1fe440(puVar1);
  _objc_release(uVar2);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(puVar1);
  _objc_retain(param_5);
  func_0x00010c28bc40(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108f1a660; end: 108f1a72f;  */

void FUN_108f1a660(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c227f80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar3);
  lVar2 = lVar3;
  func_0x00010c2939a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189480();
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(uVar1);
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar3);
  lVar2 = lVar3;
  func_0x00010c2939a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbf00();
  _objc_release(lVar2);
  _objc_release(lVar3);
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f1a730; end: 108f1a737; -[SCImpalaBusinessProfileManager removeListener:] */

void FUN_108f1a730(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 108f1a738; end: 108f1a927; -[SCImpalaBusinessProfileManager hostAccountProfileId] */

undefined8 FUN_108f1a738(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
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
  _objc_retain();
  _objc_sync_enter(param_1);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
  func_0x00010c2a24e0();
  if (iVar1 == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c242760();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar2 = *(long *)(param_1 + 0x48);
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfd3360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_e8,0x10);
    if (lVar2 != 0) {
      lVar8 = *plStack_120;
      do {
        lVar9 = 0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(lVar3);
          }
          uVar7 = *(undefined8 *)(lStack_128 + lVar9 * 8);
          uVar6 = uVar7;
          func_0x00010bf63640();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar6;
          func_0x00010c291840();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c074e40();
          _objc_release(uVar4);
          _objc_release(uVar6);
          if ((int)uVar5 != 0) {
            func_0x00010bf24ec0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar3);
            goto LAB_108f1a8b0;
          }
          lVar9 = lVar9 + 1;
        } while (lVar2 != lVar9);
        lVar2 = lVar3;
        func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_e8,0x10);
      } while (lVar2 != 0);
    }
    _objc_release(lVar3);
    uVar7 = 0;
  }
LAB_108f1a8b0:
  _objc_sync_exit(param_1);
  lVar3 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
    return uVar7;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume();
  _objc_retain();
  _objc_sync_enter(lVar3);
  iVar1 = (int)*(undefined8 *)(lVar3 + 0x48);
  func_0x00010c2a24e0();
  if (iVar1 == 0) {
    uVar7 = *(undefined8 *)(lVar3 + 0x50);
    func_0x00010c07a6a0(uVar7);
  }
  else {
    uVar6 = *(undefined8 *)(lVar3 + 0x48);
    func_0x00010bf63640(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c07a6a0();
    _objc_release(uVar6);
  }
  _objc_sync_exit(lVar3);
  _objc_release(lVar3);
  return uVar7;
}



/* Entry: 108f1a928; end: 108f1a9bf; -[SCImpalaBusinessProfileManager isPopular] */

undefined8 FUN_108f1a928(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
  func_0x00010c2a24e0();
  if (iVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c07a6a0(uVar3);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010bf63640(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c07a6a0();
    _objc_release(uVar2);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 108f1a9c0; end: 108f1aa7f; -[SCImpalaBusinessProfileManager isEligibleForProfileCreation] */

undefined8 FUN_108f1a9c0(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = param_1;
  func_0x00010bfe44a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
    func_0x00010c2a24e0();
    if (iVar1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010bf63640(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0715a0();
      _objc_release(uVar4);
    }
    _objc_sync_exit(param_1);
    _objc_release(param_1);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



/* Entry: 108f1aa80; end: 108f1aadf; -[SCImpalaBusinessProfileManager isStandardProfileEnabled] */

long FUN_108f1aa80(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bfe44a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0715b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isEligibleForProfileCreation_1125f9f78);
  return param_1;
}



/* Entry: 108f1aae0; end: 108f1ab87; -[SCImpalaBusinessProfileManager alwaysShowSpotlightSendToProfile] */

undefined8 FUN_108f1aae0(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  FUN_108f48098();
  if ((uVar2 & 1) == 0) {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
    func_0x00010c2a24e0();
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010bf63640(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf021a0();
      _objc_release(uVar3);
    }
    _objc_sync_exit(param_1);
    _objc_release(param_1);
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



/* Entry: 108f1ab88; end: 108f1ad87; -[SCImpalaBusinessProfileManager isFriendsOnlyProfile] */

bool FUN_108f1ab88(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
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
  _objc_retain();
  _objc_sync_enter(param_1);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x48);
  func_0x00010c2a24e0();
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar3 = *(long *)(param_1 + 0x48);
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfd3360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar4;
    func_0x00010bf52a60(lVar4,param_2,&uStack_130,auStack_e8,0x10);
    bVar1 = false;
    if (lVar3 != 0) {
      lVar9 = *plStack_120;
      do {
        lVar10 = 0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(lVar4);
          }
          uVar8 = *(undefined8 *)(lStack_128 + lVar10 * 8);
          uVar5 = uVar8;
          func_0x00010bf63640();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bf25000();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010bf4de40();
          _objc_release(uVar6);
          _objc_release(uVar5);
          if ((int)uVar7 != 0) {
            func_0x00010bf63640(uVar8);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar8;
            func_0x00010bf25000();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            func_0x00010bf4de40();
            bVar1 = (int)uVar6 == 1;
            _objc_release(uVar5);
            _objc_release(uVar8);
            goto LAB_108f1ad08;
          }
          lVar10 = lVar10 + 1;
        } while (lVar3 != lVar10);
        lVar3 = lVar4;
        func_0x00010bf52a60(lVar4,param_2,&uStack_130,auStack_e8,0x10);
      } while (lVar3 != 0);
      bVar1 = false;
    }
LAB_108f1ad08:
    _objc_release(lVar4);
  }
  _objc_sync_exit(param_1);
  lVar4 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return bVar1;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume(lVar4);
  func_0x00010bfe44a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  return lVar3 != 0;
}



/* Entry: 108f1ad88; end: 108f1adc7; -[SCImpalaBusinessProfileManager hasPublicProfile] */

bool FUN_108f1ad88(long param_1)

{
  long lVar1;
  
  func_0x00010bfe44a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c08fa60();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 108f1adc8; end: 108f1afc7; -[SCImpalaBusinessProfileManager isUser16or17] */

undefined1 * FUN_108f1adc8(long param_1,undefined8 param_2,undefined1 *param_3,undefined1 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 unaff_x22;
  undefined8 uVar7;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_2b8 [8];
  undefined1 uStack_2b0;
  undefined1 auStack_2a8 [8];
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  long lStack_280;
  long lStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [128];
  long lStack_198;
  undefined1 *puStack_140;
  code *pcStack_138;
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
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_sync_enter(param_1);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
  func_0x00010c2a24e0();
  if (iVar1 == 0) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar2 = *(long *)(param_1 + 0x48);
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfd3360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar5 = auStack_e8;
    lVar2 = lVar3;
    func_0x00010bf52a60();
    param_4 = SUB81(puVar5,0);
    puVar6 = (undefined1 *)0x0;
    if (lVar2 != 0) {
      lVar8 = *plStack_120;
      do {
        lVar9 = 0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(lVar3);
          }
          unaff_x22 = *(undefined8 *)(lStack_128 + lVar9 * 8);
          unaff_x23 = unaff_x22;
          func_0x00010bf63640();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = unaff_x23;
          func_0x00010c291840();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = uVar7;
          func_0x00010c2911a0();
          _objc_release(uVar7);
          _objc_release(unaff_x23);
          param_4 = SUB81(puVar5,0);
          if ((int)unaff_x24 != 0) {
            func_0x00010bf63640();
            _objc_retainAutoreleasedReturnValue();
            unaff_x23 = unaff_x22;
            func_0x00010c291840();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = unaff_x23;
            func_0x00010c2911a0();
            puVar6 = (undefined1 *)(ulong)((int)uVar7 == 1);
            _objc_release(unaff_x23);
            _objc_release(unaff_x22);
            goto LAB_108f1af48;
          }
          lVar9 = lVar9 + 1;
        } while (lVar2 != lVar9);
        puVar5 = auStack_e8;
        lVar2 = lVar3;
        puVar4 = &uStack_130;
        func_0x00010bf52a60();
        param_4 = SUB81(puVar5,0);
      } while (lVar2 != 0);
      puVar6 = (undefined1 *)0x0;
    }
LAB_108f1af48:
    _objc_release(lVar3);
    param_3 = (undefined1 *)puVar4;
  }
  _objc_sync_exit(param_1);
  lVar3 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume();
  puVar4 = &uStack_260;
  pcStack_138 = FUN_108f1afc8;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_sync_enter(lVar3);
  iVar1 = (int)*(undefined8 *)(lVar3 + 0x48);
  func_0x00010c2a24e0();
  if (iVar1 == 0) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    lVar8 = *(long *)(lVar3 + 0x48);
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar8;
    func_0x00010bfd3360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    puVar5 = auStack_218;
    lVar8 = lVar2;
    func_0x00010bf52a60();
    param_4 = SUB81(puVar5,0);
    puVar6 = (undefined1 *)0x0;
    if (lVar8 != 0) {
      lVar9 = *plStack_250;
      do {
        lVar10 = 0;
        do {
          if (*plStack_250 != lVar9) {
            _objc_enumerationMutation(lVar2);
          }
          unaff_x22 = *(undefined8 *)(lStack_258 + lVar10 * 8);
          unaff_x23 = unaff_x22;
          func_0x00010bf63640();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = unaff_x23;
          func_0x00010c291840();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = uVar7;
          func_0x00010c2911a0();
          _objc_release(uVar7);
          _objc_release(unaff_x23);
          param_4 = SUB81(puVar5,0);
          if ((int)unaff_x24 != 0) {
            func_0x00010bf63640();
            _objc_retainAutoreleasedReturnValue();
            unaff_x23 = unaff_x22;
            func_0x00010c291840();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = unaff_x23;
            func_0x00010c2911a0();
            puVar6 = (undefined1 *)(ulong)((int)uVar7 == 3);
            _objc_release(unaff_x23);
            _objc_release(unaff_x22);
            goto LAB_108f1b148;
          }
          lVar10 = lVar10 + 1;
        } while (lVar8 != lVar10);
        puVar5 = auStack_218;
        lVar8 = lVar2;
        puVar4 = &uStack_260;
        func_0x00010bf52a60();
        param_4 = SUB81(puVar5,0);
      } while (lVar8 != 0);
      puVar6 = (undefined1 *)0x0;
    }
LAB_108f1b148:
    _objc_release(lVar2);
    param_3 = (undefined1 *)puVar4;
  }
  _objc_sync_exit(lVar3);
  lVar2 = lVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_sync_exit(lVar3);
  lVar8 = lVar2;
  __Unwind_Resume();
  pcStack_268 = FUN_108f1b1c8;
  uStack_2a0 = unaff_x24;
  uStack_298 = unaff_x23;
  uStack_290 = unaff_x22;
  puStack_288 = puVar6;
  lStack_280 = lVar2;
  lStack_278 = lVar3;
  ppuStack_270 = &puStack_140;
  _objc_retain(param_3);
  puVar6 = param_3;
  func_0x00010901d398();
  if ((int)puVar6 != 0) {
    _objc_initWeak(auStack_2a8,lVar8);
    uVar7 = *(undefined8 *)(lVar8 + 0x90);
    puVar6 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_2b8,auStack_2a8);
    uStack_2b0 = param_4;
    _objc_retain(param_3);
    func_0x00010bfd32c0(uVar7);
    _objc_release(puVar6);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_2b8);
    _objc_destroyWeak(auStack_2a8);
  }
  _objc_release(param_3);
  return param_3;
}



/* Entry: 108f1afc8; end: 108f1b1c7; -[SCImpalaBusinessProfileManager isUserOver18] */

undefined1 * FUN_108f1afc8(long param_1,undefined8 param_2,undefined1 *param_3,undefined1 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 unaff_x22;
  undefined8 uVar7;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar8;
  long lVar9;
  undefined1 auStack_188 [8];
  undefined1 uStack_180;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 *puStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
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
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_sync_enter(param_1);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x48);
  func_0x00010c2a24e0();
  if (iVar1 == 0) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar2 = *(long *)(param_1 + 0x48);
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfd3360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar5 = auStack_e8;
    lVar2 = lVar3;
    func_0x00010bf52a60();
    param_4 = SUB81(puVar5,0);
    puVar6 = (undefined1 *)0x0;
    if (lVar2 != 0) {
      lVar8 = *plStack_120;
      do {
        lVar9 = 0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(lVar3);
          }
          unaff_x22 = *(undefined8 *)(lStack_128 + lVar9 * 8);
          unaff_x23 = unaff_x22;
          func_0x00010bf63640();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = unaff_x23;
          func_0x00010c291840();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = uVar7;
          func_0x00010c2911a0();
          _objc_release(uVar7);
          _objc_release(unaff_x23);
          param_4 = SUB81(puVar5,0);
          if ((int)unaff_x24 != 0) {
            func_0x00010bf63640();
            _objc_retainAutoreleasedReturnValue();
            unaff_x23 = unaff_x22;
            func_0x00010c291840();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = unaff_x23;
            func_0x00010c2911a0();
            puVar6 = (undefined1 *)(ulong)((int)uVar7 == 3);
            _objc_release(unaff_x23);
            _objc_release(unaff_x22);
            goto LAB_108f1b148;
          }
          lVar9 = lVar9 + 1;
        } while (lVar2 != lVar9);
        puVar5 = auStack_e8;
        lVar2 = lVar3;
        puVar4 = &uStack_130;
        func_0x00010bf52a60();
        param_4 = SUB81(puVar5,0);
      } while (lVar2 != 0);
      puVar6 = (undefined1 *)0x0;
    }
LAB_108f1b148:
    _objc_release(lVar3);
    param_3 = (undefined1 *)puVar4;
  }
  _objc_sync_exit(param_1);
  lVar3 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  lVar2 = lVar3;
  __Unwind_Resume();
  pcStack_138 = FUN_108f1b1c8;
  uStack_170 = unaff_x24;
  uStack_168 = unaff_x23;
  uStack_160 = unaff_x22;
  puStack_158 = puVar6;
  lStack_150 = lVar3;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  puVar6 = param_3;
  func_0x00010901d398();
  if ((int)puVar6 != 0) {
    _objc_initWeak(auStack_178,lVar2);
    uVar7 = *(undefined8 *)(lVar2 + 0x90);
    puVar6 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_188,auStack_178);
    uStack_180 = param_4;
    _objc_retain(param_3);
    func_0x00010bfd32c0(uVar7);
    _objc_release(puVar6);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_188);
    _objc_destroyWeak(auStack_178);
  }
  _objc_release(param_3);
  return param_3;
}



/* Entry: 108f1b1c8; end: 108f1b2e3; -[SCImpalaBusinessProfileManager _didUpdateSubscribedForSnapchatter:subscribed:] */

void FUN_108f1b1c8(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010901d398();
  if ((int)uVar1 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    uVar1 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,auStack_48);
    uStack_50 = param_4;
    _objc_retain(param_3);
    func_0x00010bfd32c0(uVar2);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108f1b2e4; end: 108f1b3cf;  */

void FUN_108f1b2e4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_2;
    func_0x00010bf63640(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c291840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b4ca0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010bf637e0(param_2);
    uVar4 = *(undefined8 *)(lVar1 + 0x28);
    uVar2 = param_2;
    func_0x00010bf24ec0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2923e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7e7a0(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108f1b3d0; end: 108f1b477; -[SCImpalaBusinessProfileManager _didUpdateCurrentUserWithNewDisplayName:] */

void FUN_108f1b3d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  func_0x00010c0b7dc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108f1b478;
  puStack_30 = &UNK_110852c20;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c2a14c0(param_1,param_2,&puStack_48);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 108f1b478; end: 108f1b657;  */

void FUN_108f1b478(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bfd3360();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(param_2);
      }
      uVar10 = *(ulong *)(lVar9 * 8);
      uVar7 = uVar10;
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar7;
      func_0x00010c291840();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c074e40();
      if ((uVar3 & 1) == 0) {
        _objc_release(uVar2);
        _objc_release(uVar7);
      }
      else {
        uVar3 = uVar10;
        func_0x00010bf63640();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf25080();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf2c800();
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar7);
        if ((uVar5 & 1) == 0) {
          uVar7 = uVar10;
          func_0x00010bf63640(uVar10);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar7;
          func_0x00010bf25000();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c216240();
          _objc_release(uVar2);
          _objc_release(uVar7);
          func_0x00010bf637e0(uVar10);
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar1 != lVar9);
    lVar1 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  if ((*(byte *)(param_2 + 0x70) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_2 + 0x70) = 1;
  _objc_retain();
  _objc_sync_enter(param_2);
  lVar8 = *(long *)(param_2 + 0x50);
  _objc_retain(lVar8);
  _objc_sync_exit(param_2);
  _objc_release(param_2);
  lVar1 = lVar8;
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c08fa60();
  if (lVar6 == 0) {
    uVar7 = *(ulong *)(param_2 + 0x30);
    func_0x00010bfd8d00();
    _objc_release(lVar1);
    if ((uVar7 & 1) == 0) goto LAB_108f1b708;
  }
  else {
    _objc_release(lVar1);
  }
  func_0x00010c0b7dc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09b6e0();
  _objc_release(param_2);
LAB_108f1b708:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar8);
  return;
}



/* Entry: 108f1b658; end: 108f1b71b; -[SCImpalaBusinessProfileManager _preloadManagedBusinessProfilesIfNeeded] */

void FUN_108f1b658(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if ((*(byte *)(param_1 + 0x70) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x70) = 1;
  _objc_retain();
  _objc_sync_enter(param_1);
  lVar4 = *(long *)(param_1 + 0x50);
  _objc_retain(lVar4);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  lVar1 = lVar4;
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    uVar3 = *(ulong *)(param_1 + 0x30);
    func_0x00010bfd8d00();
    _objc_release(lVar1);
    if ((uVar3 & 1) == 0) goto LAB_108f1b708;
  }
  else {
    _objc_release(lVar1);
  }
  func_0x00010c0b7dc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09b6e0();
  _objc_release(param_1);
LAB_108f1b708:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 108f1b71c; end: 108f1b85f; -[SCImpalaBusinessProfileManager businessProfileHandlers:didUpdateSubscribed:forHandler:] */

void FUN_108f1b71c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010bf25000();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    lVar3 = param_5;
    func_0x00010bf25000();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfe44e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar5 == 0) goto LAB_108f1b844;
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    lVar1 = param_5;
    func_0x00010bf25000(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_5;
    func_0x00010bf25000(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfe44e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7e7a0(uVar6,param_2,lVar2,lVar4,param_4);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_108f1b844:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108f1b860; end: 108f1b863; -[SCImpalaBusinessProfileManager didStartSnapchattersUpdateDataRequest:] */

void FUN_108f1b860(void)

{
  return;
}



/* Entry: 108f1b864; end: 108f1b94f; -[SCImpalaBusinessProfileManager didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_108f1b864(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  if (param_4 != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_108f1b950;
    puStack_20 = &UNK_110855640;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_108f1b960;
    puStack_48 = &UNK_1108941c0;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_108f1ba84;
    puStack_70 = &UNK_110866ad0;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x108f1ba94;
    puStack_98 = &UNK_110866b00;
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_108f1baa4;
    puStack_c0 = &UNK_110851800;
    uStack_b8 = param_1;
    uStack_90 = param_1;
    uStack_68 = param_1;
    uStack_40 = param_1;
    uStack_18 = param_1;
    func_0x00010c0bc6c0(param_3,param_2,&puStack_38,&puStack_60,&puStack_88,0,&puStack_b0,0,
                        &puStack_d8,0,0);
  }
  return;
}



/* Entry: 108f1b950; end: 108f1b95f;  */

void FUN_108f1b950(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be01850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didUpdateSubscribedForSnapchatt_11255dfb0,
             param_2,1);
  return;
}



/* Entry: 108f1b960; end: 108f1ba83;  */

/* WARNING: Possible PIC construction at 0x000108f1ba10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108f1ba14) */
/* WARNING: Removing unreachable block (ram,0x000108f1ba28) */
/* WARNING: Removing unreachable block (ram,0x000108f1b9e0) */

void FUN_108f1b960(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_2;
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf52a60();
  if (lVar1 == 0) {
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
      return;
    }
    ___stack_chk_fail();
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    uVar3 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = lRam0000000000000000;
    func_0x00010c244280(lRam0000000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be01850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar5,PTR_s__didUpdateSubscribedForSnapchatt_11255dfb0,lVar2,uVar3);
  return;
}



/* Entry: 108f1ba84; end: 108f1baa3;  */

void FUN_108f1ba84(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be01850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didUpdateSubscribedForSnapchatt_11255dfb0,
             param_2,0);
  return;
}



/* Entry: 108f1baa4; end: 108f1bb4f;  */

void FUN_108f1baa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c0720c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  if ((int)uVar3 != 0) {
    func_0x00010be01580(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f1bb50; end: 108f1bb57; -[SCImpalaBusinessProfileManager rpc] */

undefined8 FUN_108f1bb50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 108f1bb58; end: 108f1bb5f; -[SCImpalaBusinessProfileManager handlers] */

undefined8 FUN_108f1bb58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 108f1bb60; end: 108f1bc47; -[SCImpalaBusinessProfileManager .cxx_destruct] */

void FUN_108f1bb60(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 108f1bc48; end: 108f1bd2b; -[SCImpalaManagedBusinessProfilesCache storeData:metadata:completion:] */

void FUN_108f1bc48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108f1bd2c;
  puStack_68 = &UNK_1108465d0;
  uStack_60 = param_3;
  lStack_58 = param_1;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_60);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108f1bd2c; end: 108f1bf23;  */

void FUN_108f1bd2c(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR_PTR_1126dc858;
  _objc_alloc_init();
  puVar4 = PTR_PTR_1126dc860;
  uVar7 = *(ulong *)(param_1 + 0x20);
  _objc_retain(uVar7);
  _objc_opt_class(puVar4);
  uVar5 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar4);
  uVar1 = uVar7;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar7);
  uVar7 = uVar1;
  func_0x00010bfd3360();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (uVar5 != 0) {
    uVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(uVar7);
      }
      uVar8 = *(undefined8 *)(uVar9 * 8);
      puVar4 = puVar3;
      func_0x00010c117640(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf25020(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4);
      _objc_release(uVar8);
      _objc_release(puVar4);
      uVar9 = uVar9 + 1;
    } while (uVar5 != uVar9);
    uVar5 = uVar7;
    func_0x00010bf52a60();
  }
  _objc_release(uVar7);
  func_0x00010c07a6a0(uVar1);
  func_0x00010c1b3620(puVar3);
  func_0x00010c0715a0(uVar1);
  func_0x00010c1e4040(puVar3);
  func_0x00010bf021a0(uVar1);
  func_0x00010c167ac0(puVar3);
  func_0x00010c257680(*(undefined8 *)(*(long *)(param_1 + 0x28) + 8));
  _objc_release(uVar1);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar3 + 0x30,0);
  _objc_storeStrong(puVar3 + 0x28,0);
  _objc_storeStrong(puVar3 + 0x20,0);
  _objc_storeStrong(puVar3 + 0x18,0);
  _objc_storeStrong(puVar3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar3 + 8,0);
  return;
}



/* Entry: 108f1bf24; end: 108f1bf83; -[SCImpalaManagedBusinessProfilesCache .cxx_destruct] */

void FUN_108f1bf24(long param_1)

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



/* Entry: 108f1bf84; end: 108f1bfa3; -[SCImpalaManagedBusinessProfilesLoader _mapListPublicProfilesResponseForProcessing:error:completion:] */

void FUN_108f1bf84(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108f1bf98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_5 + 0x10))(param_5,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdf9ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__delayedMapListPublicProfilesRes_11255c050,param_3,1);
  return;
}



/* Entry: 108f1bfa4; end: 108f1c1eb; -[SCImpalaManagedBusinessProfilesLoader _delayedMapListPublicProfilesResponseForProcessing:useSnapTaskWrapper:completion:] */

void FUN_108f1bfa4(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  )

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126aeec0;
  puVar3 = PTR_PTR_1126ae960;
  if (param_4 == 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    lVar5 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = auStack_98;
    _objc_copyWeak(puVar7,auStack_58);
    _objc_retain(param_5);
    _objc_retain(param_3);
    func_0x00010bfc69a0(lVar5);
    _objc_release(lVar5);
    _objc_release(param_1);
    _objc_release(param_3);
    uVar6 = param_5;
  }
  else {
    puVar2 = PTR_PTR_1126cc1e0;
    func_0x00010bfe9e00(PTR_PTR_1126cc1e0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5bc80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae970;
    func_0x00010bfe2ec0(PTR_PTR_1126ae970);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_108f1c1ec;
    puStack_78 = &UNK_11084f3a0;
    puVar7 = auStack_60;
    _objc_copyWeak(puVar7,auStack_58);
    _objc_retain(param_5);
    uStack_68 = param_5;
    _objc_retain(param_3);
    uStack_70 = param_3;
    func_0x00010bf0caa0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(uStack_70);
    uVar6 = uStack_68;
  }
  _objc_release(uVar6);
  _objc_destroyWeak(puVar7);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108f1c1ec; end: 108f1c257;  */

void FUN_108f1c1ec(long param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (((param_2 & 1) == 0) && (lVar1 != 0)) {
    func_0x00010bdf9ac0(lVar1);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108f1c258; end: 108f1c393;  */

void FUN_108f1c258(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,0,0);
  }
  else {
    puVar2 = PTR_PTR_1126dc868;
    func_0x00010bfbc0e0(PTR_PTR_1126dc868);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf63640(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c271f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126dc858;
    func_0x00010c0f40e0(PTR_PTR_1126dc858);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    func_0x00010be817a0(lVar1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(0);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 108f1c394; end: 108f1c6a3; -[SCImpalaManagedBusinessProfilesLoader _processManagedBusinessProfilesResponse:error:completion:] */

void FUN_108f1c394(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_4 == 0) {
    lVar3 = param_3;
    func_0x00010c117640();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        lVar13 = *(long *)(lVar12 * 8);
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c291840();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar13;
        func_0x00010c141400();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar13);
        lVar13 = lVar6;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (lVar13 != 0) {
          lVar10 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar6);
            }
            lVar14 = *(long *)(lVar10 * 8);
            lVar7 = lVar14;
            func_0x00010c1413e0();
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar7;
            func_0x00010c08fa60();
            _objc_release(lVar7);
            if (lVar8 != 0) {
              func_0x00010c1413e0(lVar14);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar5);
              _objc_release(lVar14);
            }
            lVar10 = lVar10 + 1;
          } while (lVar13 != lVar10);
          lVar13 = lVar6;
          func_0x00010bf52a60();
        }
        _objc_release(lVar6);
        _objc_release(puVar5);
        lVar12 = lVar12 + 1;
      } while (lVar12 != lVar4);
      lVar4 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    lVar4 = param_3;
    func_0x00010c117640();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_5);
    func_0x00010c2863e0(uVar11);
    _objc_release(lVar4);
    _objc_release(param_5);
    _objc_release(param_3);
  }
  else {
    param_2 = 0;
    (**(code **)(param_5 + 0x10))(param_5,0,0,param_4);
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR_PTR_1126dc860;
  _objc_retain(param_2);
  _objc_alloc(puVar5);
  func_0x00010c07a6a0(*(undefined8 *)(param_3 + 0x20));
  func_0x00010c116780(*(undefined8 *)(param_3 + 0x20));
  func_0x00010bf021a0(*(undefined8 *)(param_3 + 0x20));
  func_0x00010c019a80(puVar5);
  _objc_release(param_2);
  (**(code **)(*(long *)(param_3 + 0x28) + 0x10))(*(long *)(param_3 + 0x28),puVar5,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 108f1c6a4; end: 108f1c74f;  */

void FUN_108f1c6a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dc860;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c07a6a0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c116780(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf021a0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c019a80(puVar1);
  _objc_release(param_2);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar1,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108f1c750; end: 108f1c98b; -[SCImpalaManagedBusinessProfilesLoader loadDataWithPageInfo:previousData:completion:] */

void FUN_108f1c750(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf17b60();
  _objc_release(puVar1);
  uVar3 = param_3;
  puStack_68 = puVar2;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar5);
  _objc_initWeak(auStack_88,param_1);
  puVar1 = PTR_PTR_1126dc870;
  _objc_opt_new(PTR_PTR_1126dc870);
  func_0x00010c1d8220();
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar4 = 0x15;
  _dispatch_get_global_queue(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar5);
  _objc_copyWeak(auStack_90,auStack_88);
  _objc_retain(param_5);
  func_0x00010bfa8320(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_destroyWeak(auStack_90);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_release(uVar5);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 108f1c98c; end: 108f1ca97;  */

void FUN_108f1c98c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_48,param_1 + 0x38);
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 108f1ca98; end: 108f1cb0f;  */

void FUN_108f1ca98(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf941e0();
    _objc_release(puVar2);
    func_0x00010be5cbe0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108f1cb10; end: 108f1cb6b; -[SCImpalaManagedBusinessProfilesLoader .cxx_destruct] */

void FUN_108f1cb10(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f1cb6c; end: 108f1cbdf; -[SCImpalaNotificationProcessor initWithImpalaBusinessProfileManager:] */

undefined1 * FUN_108f1cb6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff3d0;
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



/* Entry: 108f1cbe0; end: 108f1cbe7; -[SCImpalaNotificationProcessor shouldFilterNotification:] */

undefined8 FUN_108f1cbe0(void)

{
  return 0;
}



/* Entry: 108f1cbe8; end: 108f1cca7; -[SCImpalaNotificationProcessor processNotification:] */

void FUN_108f1cbe8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c11c420();
  if (4 < param_3 - 0x84U) {
    if (2 < param_3 - 0x81U) {
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfda1e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbf00();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b7dc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbf00();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f1cca8; end: 108f1ccb3; -[SCImpalaNotificationProcessor .cxx_destruct] */

void FUN_108f1cca8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f1ccb4; end: 108f1cd27; -[SCSnapProHighlightsProviderImpl initWithRPC:] */

undefined1 * FUN_108f1ccb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff3d8;
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



/* Entry: 108f1cd28; end: 108f1ce6b; -[SCSnapProHighlightsProviderImpl getHighlightsWithProfileId:highlightIds:] */

void FUN_108f1cd28(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126dc878;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1e4140();
  _objc_release(param_3);
  lVar2 = param_4;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    puVar3 = puVar1;
    func_0x00010bfe31a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160();
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar4 = 0x15;
  _dispatch_get_global_queue(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar3);
  func_0x00010bfc6300(uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108f1ce6c; end: 108f1d26f;  */

void FUN_108f1ce6c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_3 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lVar3 = param_2;
    func_0x00010bfe3640();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        lVar14 = *(long *)(lVar10 * 8);
        _objc_retain(lVar14);
        puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
        lVar15 = lVar14;
        func_0x00010c0c5360();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        lVar6 = 0;
        if (lVar15 != 0) {
          lVar15 = lVar14;
          func_0x00010c0c5360(lVar14);
          _objc_retainAutoreleasedReturnValue();
          lVar16 = lVar15;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar16;
          func_0x00010c26d9a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar16);
          _objc_release(lVar15);
          lVar7 = lVar14;
          func_0x00010c0c5360();
          _objc_retainAutoreleasedReturnValue();
          lVar15 = lVar7;
          func_0x00010bf52a60();
          lVar16 = lRam0000000000000000;
          while (lVar15 != 0) {
            lVar13 = 0;
            do {
              if (lRam0000000000000000 != lVar16) {
                _objc_enumerationMutation(lVar7);
              }
              uVar12 = *(undefined8 *)(lVar13 * 8);
              uVar11 = uVar12;
              func_0x00010c26d9a0(uVar12);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfe32a0(uVar12);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar5);
              _objc_release(uVar12);
              _objc_release(uVar11);
              lVar13 = lVar13 + 1;
            } while (lVar15 != lVar13);
            lVar15 = lVar7;
            func_0x00010bf52a60();
          }
          _objc_release(lVar7);
        }
        lVar15 = lVar14;
        func_0x00010c258f40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar15 == 0) {
          lVar15 = 0;
        }
        else {
          lVar15 = lVar14;
          func_0x00010c258f40(lVar14);
          _objc_retainAutoreleasedReturnValue();
        }
        lVar16 = lVar14;
        func_0x00010c298be0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar16 == 0) {
          lVar16 = 0;
        }
        else {
          lVar16 = lVar14;
          func_0x00010c298be0(lVar14);
          _objc_retainAutoreleasedReturnValue();
        }
        puVar8 = PTR_PTR_1126dc880;
        _objc_alloc(PTR_PTR_1126dc880);
        func_0x00010c04d680();
        _objc_release(lVar16);
        _objc_release(lVar6);
        _objc_release(puVar5);
        _objc_release(lVar15);
        _objc_release(lVar14);
        func_0x00010befa120(puVar2);
        _objc_release(puVar8);
        lVar10 = lVar10 + 1;
      } while (lVar10 != lVar4);
      lVar4 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
    puVar5 = PTR_PTR_1126af5d0;
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    puVar8 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010c2619e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar11);
    _objc_release(puVar5);
    _objc_release(puVar8);
    _objc_release(puVar2);
  }
  else {
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar11);
    _objc_release(puVar2);
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_2 + 8,0);
  return;
}



/* Entry: 108f1d270; end: 108f1d27b; -[SCSnapProHighlightsProviderImpl .cxx_destruct] */

void FUN_108f1d270(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f1d27c; end: 108f1d2ef; -[SCSnapProHighlightsReporterImpl initWithRPC:] */

undefined1 * FUN_108f1d27c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff3e0;
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



/* Entry: 108f1d2f0; end: 108f1d53f; -[SCSnapProHighlightsReporterImpl reportHighlightWithInfo:] */

void FUN_108f1d2f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126dc888;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar3 = param_3;
  func_0x000108f1d408(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c17f500(puVar1);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = 0x15;
  _dispatch_get_global_queue(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  func_0x00010c132fe0(uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f1d540; end: 108f1d597;  */

void FUN_108f1d540(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126af5d0;
  if (param_3 == 0) {
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108f1d598; end: 108f1d6cb; -[SCSnapProHighlightsReporterImpl reportHighlightSnapWithId:info:] */

void FUN_108f1d598(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126dc890;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1a8780();
  _objc_release(param_3);
  uVar3 = param_4;
  func_0x000108f1d408(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c17f500(puVar1);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = 0x15;
  _dispatch_get_global_queue(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  func_0x00010c132fc0(uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f1d6cc; end: 108f1d723;  */

void FUN_108f1d6cc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126af5d0;
  if (param_3 == 0) {
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108f1d724; end: 108f1d72f; -[SCSnapProHighlightsReporterImpl .cxx_destruct] */

void FUN_108f1d724(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f1d730; end: 108f1d7a3; -[SCSnapProPopularStatusProviderImpl initWithBusinessProfileManager:] */

undefined1 * FUN_108f1d730(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff3e8;
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



/* Entry: 108f1d7a4; end: 108f1d7ab; -[SCSnapProPopularStatusProviderImpl isPopular] */

void FUN_108f1d7a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_isPopular_1125fc3b8);
  return;
}



/* Entry: 108f1d7ac; end: 108f1d8b7; -[SCSnapProPopularStatusProviderImpl isPopularWithCompletion:] */

void FUN_108f1d7ac(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0b7dc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c07a6a0();
    (**(code **)(param_3 + 0x10))(param_3,uVar2);
    _objc_release(uVar3);
    _objc_release(uVar1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0b7dc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    uVar3 = uVar2;
    func_0x00010befa2a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108f1d8b8; end: 108f1d8ff;  */

void FUN_108f1d8b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf63640(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c07a6a0();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108f1d900; end: 108f1d90b; -[SCSnapProPopularStatusProviderImpl .cxx_destruct] */

void FUN_108f1d900(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f1d90c; end: 108f1d953;  */

void FUN_108f1d90c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bfd3360(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000107c31908();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f1d954; end: 108f1d99f; -[SCSnapProProfilesProviderImpl dealloc] */

void FUN_108f1d954(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c12cf80(*(undefined8 *)(param_1 + 0x10),param_2,param_1);
  puStack_28 = PTR_PTR_1126ff3f0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108f1d9a0; end: 108f1da47; -[SCSnapProProfilesProviderImpl fetchProfileAllowedActionWithCompletion:] */

void FUN_108f1d9a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0b7dc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108f1da48;
  puStack_30 = &UNK_1109421f8;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c2a14c0(uVar1,param_2,&puStack_48);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 108f1da48; end: 108f1dc4b;  */

void FUN_108f1da48(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar3 = param_2;
  func_0x00010bfd3360();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      uVar11 = *(undefined8 *)(lVar10 * 8);
      uVar9 = uVar11;
      func_0x00010bf25020(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar9;
      func_0x00010c291840();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf01740();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar9);
      puVar7 = PTR_PTR_1126dc8a8;
      _objc_alloc(PTR_PTR_1126dc8a8);
      func_0x00010bf24ec0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff9be0(puVar7);
      _objc_release(uVar11);
      func_0x00010befa120(puVar2);
      _objc_release(puVar7);
      _objc_release(uVar6);
      lVar10 = lVar10 + 1;
    } while (lVar4 != lVar10);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar2,param_3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  _objc_retain(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return;
}



/* Entry: 108f1dc4c; end: 108f1dc73; -[SCSnapProProfilesProviderImpl managedProfilesObserver] */

void FUN_108f1dc4c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f1dc74; end: 108f1dc9b; -[SCSnapProProfilesProviderImpl onSubscriptionChange] */

void FUN_108f1dc74(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f1dc9c; end: 108f1de1b; -[SCSnapProProfilesProviderImpl profilesWithIds:publisherIds:] */

void FUN_108f1dc9c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126dc8b0;
  _objc_opt_new(PTR_PTR_1126dc8b0);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    puVar3 = puVar1;
    func_0x00010c116aa0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160();
    _objc_release(puVar3);
  }
  lVar2 = param_4;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    puVar3 = puVar1;
    func_0x00010c11b260(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160();
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c142320(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0x15;
  _dispatch_get_global_queue(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar3);
  func_0x00010bfc3260(uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108f1de1c; end: 108f1e5d7;  */

/* WARNING: Possible PIC construction at 0x000108f1df34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108f1e020: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108f1df38) */
/* WARNING: Removing unreachable block (ram,0x000108f1df6c) */
/* WARNING: Removing unreachable block (ram,0x000108f1e024) */
/* WARNING: Removing unreachable block (ram,0x000108f1e058) */
/* WARNING: Removing unreachable block (ram,0x000108f1df14) */
/* WARNING: Removing unreachable block (ram,0x000108f1e000) */

void FUN_108f1de1c(long param_1,ulong param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uStack_330;
  undefined *puStack_328;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = param_2;
    func_0x00010c117660();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar3;
    func_0x00010bf52a60();
    if (uVar2 == 0) {
      _objc_release(uVar3);
      uVar2 = param_2;
      func_0x00010c117680();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf00d20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      uVar2 = uVar3;
      func_0x00010bf52a60();
      if (uVar2 == 0) {
        _objc_release(uVar3);
        puVar4 = PTR_PTR_1126af5d0;
        uVar16 = *(undefined8 *)(param_1 + 0x20);
        puVar14 = puVar1;
        func_0x00010bf51e00();
        func_0x00010c2619e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar16);
        _objc_release(puVar4);
        _objc_release(puVar14);
        goto LAB_108f1e0c8;
      }
      param_2 = uRam0000000000000000;
      func_0x00010bf25000();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_2 = uRam0000000000000000;
      func_0x00010bf25000();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    uVar16 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar16);
LAB_108f1e0c8:
    _objc_release(puVar1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
      return;
    }
    ___stack_chk_fail();
  }
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar2 = param_2;
  func_0x00010bf4c760();
  if (uVar2 == 0) {
    uVar16 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010bf4c740();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf52a60();
    uVar2 = uRam0000000000000000;
    if (uVar5 == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      do {
        uVar18 = 0;
        do {
          if (uRam0000000000000000 != uVar2) {
            _objc_enumerationMutation(uVar3);
          }
          uVar17 = *(undefined8 *)(uVar18 * 8);
          uVar6 = uVar17;
          func_0x00010bf4dac0();
          if ((int)uVar6 == 1) {
            func_0x00010bf4c700();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar16);
            uVar16 = uVar17;
          }
          uVar18 = uVar18 + 1;
        } while (uVar5 != uVar18);
        uVar5 = uVar3;
        func_0x00010bf52a60();
      } while (uVar5 != 0);
    }
    _objc_release(uVar3);
  }
  uVar2 = param_2;
  func_0x00010bf24fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf819c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c08fa60();
  if (uVar5 == 0) {
    puStack_328 = (undefined *)0x0;
  }
  else {
    uVar5 = param_2;
    func_0x00010bf24fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar5;
    func_0x00010c070480();
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puStack_328 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if ((uVar18 & 1) != 0) {
      puStack_328 = (undefined *)0x0;
      goto LAB_108f1e2f8;
    }
    uVar2 = param_2;
    func_0x00010bf24fa0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf819c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
LAB_108f1e2f8:
  uVar2 = param_2;
  func_0x00010bfdac80();
  if ((int)uVar2 == 0) {
    uStack_330 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010c11b280();
    _objc_retainAutoreleasedReturnValue();
    uStack_330 = uVar2;
    func_0x00010c11b1e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  func_0x00010c26e7a0();
  func_0x00010c0691a0();
  puVar4 = PTR_PTR_1126dc8c0;
  _objc_alloc();
  uVar2 = param_2;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bfe44e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010bfe4500();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_2;
  func_0x00010c0ed0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar8 = param_2;
  func_0x00010bf24fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c0b7d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_2;
  func_0x00010bfe4520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  _objc_retain(param_2);
  func_0x00010c078f80();
  func_0x00010c0691a0(param_2);
  _objc_release(param_2);
  uVar11 = param_2;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_2;
  func_0x00010bf1c0a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_2;
  func_0x00010bf24fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c070480();
  func_0x00010bf33360();
  func_0x00010c25ea00();
  func_0x00010c03af00();
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(puVar1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar18);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar16);
  _objc_release(puStack_328);
  _objc_release(uStack_330);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
    ___stack_chk_fail();
    uVar2 = param_2;
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7fc0();
    _objc_release(uVar2);
    puVar14 = *(undefined **)(param_2 + 8);
    func_0x00010bf63640(puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar14;
    func_0x00010bfd3360();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x000107c31908();
    _objc_release(puVar1);
    _objc_release(puVar14);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108f1e5d8; end: 108f1e69b; -[SCSnapProProfilesProviderImpl managedProfiles] */

void FUN_108f1e5d8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf63640(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd3360();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000107c31908();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108f1e69c; end: 108f1e6a7;  */

void FUN_108f1e69c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09b6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),PTR_s_loadIfNeeded_1126047c8);
  return;
}



/* Entry: 108f1e6a8; end: 108f1e6ef; -[SCSnapProProfilesProviderImpl profileHandlers] */

void FUN_108f1e6a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf63640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd3360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108f1e6f0; end: 108f1e843; -[SCSnapProProfilesProviderImpl profileHandlersWithCompletion:] */

void FUN_108f1e6f0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c1168c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,lVar1);
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0b7dc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    uVar3 = uVar2;
    func_0x00010befa2a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108f1e844; end: 108f1e96b; -[SCSnapProProfilesProviderImpl profileHandlersOnUpdateWithCompletion:] */

void FUN_108f1e844(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0b7dc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x108f1e908;
    puStack_40 = &UNK_110acb428;
    _objc_retain(param_3);
    uVar2 = uVar1;
    lStack_38 = param_3;
    func_0x00010befa2a0(uVar1,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_38);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108f1e96c; end: 108f1ead7; -[SCSnapProProfilesProviderImpl managedProfilesWithCompletion:] */

void FUN_108f1e96c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c0b7fc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,lVar1);
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0b7dc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    uVar3 = uVar2;
    func_0x00010befa2a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108f1ead8; end: 108f1ec0f; -[SCSnapProProfilesProviderImpl currentCreatorTierWithCompletion:] */

void FUN_108f1ead8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bfd88a0();
    if ((int)lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010bfe4600(param_1);
      (**(code **)(param_3 + 0x10))(param_3,lVar1);
    }
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0b7dc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_copyWeak(auStack_40,auStack_38);
    uVar3 = uVar2;
    func_0x00010befa2a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_40);
    _objc_release(param_3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108f1ec10; end: 108f1eccf;  */

void FUN_108f1ec10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bf63640(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010bfd3360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000107c31908();
  lVar4 = param_1;
  func_0x00010be36420(param_1);
  (**(code **)(lVar5 + 0x10))(lVar5,lVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f1ecd0; end: 108f1edd7; -[SCSnapProProfilesProviderImpl hasPendingRoleInvitesWithCompletion:] */

void FUN_108f1ecd0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bfda1e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bfda1e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    uVar2 = uVar1;
    func_0x00010befa2a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108f1edd8; end: 108f1ee1b;  */

void FUN_108f1edd8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf63640(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108f1ee1c; end: 108f1ee23; -[SCSnapProProfilesProviderImpl hasLoadedManagedProfiles] */

void FUN_108f1ee1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a24f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_wasLoadedOnce_112686360)
  ;
  return;
}



/* Entry: 108f1ee24; end: 108f1efaf; -[SCSnapProProfilesProviderImpl hasSnapProStandardProfile] */

undefined8 FUN_108f1ee24(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0b7fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar7 = 0;
  if (lVar3 != 0) {
    do {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        puVar4 = PTR_PTR_1126d4dd8;
        uVar9 = *(ulong *)(lVar10 * 8);
        _objc_retain(uVar9);
        _objc_opt_class(puVar4);
        uVar5 = uVar9;
        _objc_opt_isKindOfClass(uVar9,puVar4);
        uVar6 = uVar9;
        if ((uVar5 & 1) == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar9);
        uVar5 = uVar6;
        func_0x00010c1164a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        if ((uVar5 != 0) && (uVar6 = uVar5, func_0x00010c26e7a0(), uVar6 == 1)) {
          _objc_release(uVar5);
          uVar7 = 1;
          goto LAB_108f1ef64;
        }
        _objc_release(uVar5);
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      lVar3 = param_1;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    uVar7 = 0;
  }
LAB_108f1ef64:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return uVar7;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0b7fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar7 = 0;
  if (lVar3 != 0) {
    do {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        iVar2 = (int)*(undefined8 *)(lVar10 * 8);
        func_0x00010c074e40();
        if (iVar2 == 0) {
          uVar7 = 1;
          goto LAB_108f1f078;
        }
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      lVar3 = param_1;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    uVar7 = 0;
  }
LAB_108f1f078:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    uVar7 = *(undefined8 *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar7,PTR_s_setNeedsUpdate_1126509e8);
    return uVar7;
  }
  return uVar7;
}



/* Entry: 108f1efb0; end: 108f1f0bf; -[SCSnapProProfilesProviderImpl hasMemberRoles] */

undefined8 FUN_108f1efb0(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0b7fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar4 = 0;
  if (lVar3 != 0) {
    do {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        iVar2 = (int)*(undefined8 *)(lVar6 * 8);
        func_0x00010c074e40();
        if (iVar2 == 0) {
          uVar4 = 1;
          goto LAB_108f1f078;
        }
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
      lVar3 = param_1;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    uVar4 = 0;
  }
LAB_108f1f078:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    uVar4 = *(undefined8 *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s_setNeedsUpdate_1126509e8);
    return uVar4;
  }
  return uVar4;
}



/* Entry: 108f1f0c0; end: 108f1f0c7; -[SCSnapProProfilesProviderImpl profileAndStoriesNeedsUpdate] */

void FUN_108f1f0c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cbf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setNeedsUpdate_1126509e8);
  return;
}



/* Entry: 108f1f0c8; end: 108f1f277; -[SCSnapProProfilesProviderImpl hasSnapStarProfile] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x000108f1f490 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

ulong FUN_108f1f0c8(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar9;
  ulong uVar10;
  ulong uVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0b7fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar10 = 0;
  if (uVar2 != 0) {
    do {
      uVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        puVar3 = PTR_PTR_1126d4dd8;
        uVar7 = *(ulong *)(uVar10 * 8);
        _objc_retain(uVar7);
        _objc_opt_class(puVar3);
        uVar4 = uVar7;
        _objc_opt_isKindOfClass(uVar7,puVar3);
        uVar8 = uVar7;
        if ((uVar4 & 1) == 0) {
          uVar8 = 0;
        }
        _objc_retain(uVar8);
        _objc_release(uVar7);
        uVar4 = uVar8;
        func_0x00010c1164a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
        if ((((uVar4 != 0) && (uVar8 = uVar4, func_0x00010c26e7a0(), uVar8 == 3)) &&
            (func_0x00010c074e40(), (int)uVar7 != 0)) &&
           (uVar8 = uVar4, func_0x00010bf33240(), uVar8 == 1)) {
          _objc_release(uVar4);
          uVar10 = 1;
          goto LAB_108f1f228;
        }
        _objc_release(uVar4);
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
      uVar2 = param_1;
      func_0x00010bf52a60();
    } while (uVar2 != 0);
    uVar10 = 0;
  }
LAB_108f1f228:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return uVar10;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0b7fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar10 = 0;
  if (uVar2 != 0) {
    do {
      uVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        puVar3 = PTR_PTR_1126d4dd8;
        uVar7 = *(ulong *)(uVar10 * 8);
        _objc_retain(uVar7);
        _objc_opt_class(puVar3);
        uVar4 = uVar7;
        _objc_opt_isKindOfClass(uVar7,puVar3);
        uVar8 = uVar7;
        if ((uVar4 & 1) == 0) {
          uVar8 = 0;
        }
        _objc_retain(uVar8);
        _objc_release(uVar7);
        uVar4 = uVar8;
        func_0x00010c1164a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
        if (((uVar4 != 0) && (func_0x00010c074e40(), (int)uVar7 != 0)) &&
           ((uVar8 = uVar4, func_0x00010c26e7a0(), uVar8 == 2 ||
            (uVar8 = uVar4, func_0x00010c26e7a0(), uVar8 == 3)))) {
          _objc_release(uVar4);
          uVar10 = 1;
          goto LAB_108f1f3d8;
        }
        _objc_release(uVar4);
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
      uVar2 = param_1;
      func_0x00010bf52a60();
    } while (uVar2 != 0);
    uVar10 = 0;
  }
LAB_108f1f3d8:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return uVar10;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0b7fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar10 = 0;
  if (uVar2 != 0) {
    do {
      uVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        uVar8 = *(ulong *)(uVar10 * 8);
        iVar6 = (int)uVar8;
        func_0x00010c074e40();
        if ((iVar6 != 0) && (func_0x00010bf2d160(), (uVar8 & 1) != 0)) {
          uVar10 = 1;
          goto LAB_108f1f500;
        }
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
      uVar2 = param_1;
      func_0x00010bf52a60();
    } while (uVar2 != 0);
    uVar10 = 0;
  }
LAB_108f1f500:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return uVar10;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0b7fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar10 = 0;
  if (uVar2 != 0) {
    do {
      uVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        puVar3 = PTR_PTR_1126d4dd8;
        uVar7 = *(ulong *)(uVar10 * 8);
        _objc_retain(uVar7);
        _objc_opt_class(puVar3);
        uVar4 = uVar7;
        _objc_opt_isKindOfClass(uVar7,puVar3);
        uVar8 = uVar7;
        if ((uVar4 & 1) == 0) {
          uVar8 = 0;
        }
        _objc_retain(uVar8);
        _objc_release(uVar7);
        uVar4 = uVar8;
        func_0x00010c1164a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
        if ((uVar4 != 0) && (func_0x00010c074e40(), (int)uVar7 != 0)) {
          uVar8 = uVar4;
          func_0x00010c11b1e0();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar8;
          func_0x00010c08fa60();
          _objc_release(uVar8);
          if (1 < uVar7) {
            _objc_release(uVar4);
            uVar10 = 1;
            goto LAB_108f1f6b4;
          }
        }
        _objc_release(uVar4);
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
      uVar2 = param_1;
      func_0x00010bf52a60();
    } while (uVar2 != 0);
    uVar10 = 0;
  }
LAB_108f1f6b4:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return uVar10;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c1168c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar10 = 0;
  if (uVar2 != 0) {
    do {
      uVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        uVar9 = *(ulong *)(uVar10 * 8);
        uVar8 = uVar9;
        func_0x00010bf25020();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar8;
        func_0x00010c291840();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar4;
        func_0x00010c074e40();
        _objc_release(uVar4);
        _objc_release(uVar8);
        if ((uVar7 & 1) != 0) {
          func_0x00010bf25020();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar9;
          func_0x00010bf25000();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar2;
          func_0x00010c07a1e0();
          uVar10 = (ulong)((uint)uVar10 ^ 1);
          _objc_release(uVar2);
          _objc_release(uVar9);
          goto LAB_108f1f844;
        }
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
      uVar2 = param_1;
      func_0x00010bf52a60();
    } while (uVar2 != 0);
    uVar10 = 0;
  }
LAB_108f1f844:
  _objc_release(param_1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    uVar10 = param_1;
    func_0x00010c0b7fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36420(param_1);
    _objc_release(uVar10);
    return param_1;
  }
  return uVar10;
}



/* Entry: 108f1f278; end: 108f1f427; -[SCSnapProProfilesProviderImpl isTierPublicOrOfficial] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x000108f1f490 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

ulong FUN_108f1f278(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar9;
  ulong uVar10;
  ulong uVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0b7fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar10 = 0;
  if (uVar2 != 0) {
    do {
      uVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        puVar3 = PTR_PTR_1126d4dd8;
        uVar7 = *(ulong *)(uVar10 * 8);
        _objc_retain(uVar7);
        _objc_opt_class(puVar3);
        uVar4 = uVar7;
        _objc_opt_isKindOfClass(uVar7,puVar3);
        uVar8 = uVar7;
        if ((uVar4 & 1) == 0) {
          uVar8 = 0;
        }
        _objc_retain(uVar8);
        _objc_release(uVar7);
        uVar4 = uVar8;
        func_0x00010c1164a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
        if (((uVar4 != 0) && (func_0x00010c074e40(), (int)uVar7 != 0)) &&
           ((uVar8 = uVar4, func_0x00010c26e7a0(), uVar8 == 2 ||
            (uVar8 = uVar4, func_0x00010c26e7a0(), uVar8 == 3)))) {
          _objc_release(uVar4);
          uVar10 = 1;
          goto LAB_108f1f3d8;
        }
        _objc_release(uVar4);
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
      uVar2 = param_1;
      func_0x00010bf52a60();
    } while (uVar2 != 0);
    uVar10 = 0;
  }
LAB_108f1f3d8:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return uVar10;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0b7fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar10 = 0;
  if (uVar2 != 0) {
    do {
      uVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        uVar8 = *(ulong *)(uVar10 * 8);
        iVar6 = (int)uVar8;
        func_0x00010c074e40();
        if ((iVar6 != 0) && (func_0x00010bf2d160(), (uVar8 & 1) != 0)) {
          uVar10 = 1;
          goto LAB_108f1f500;
        }
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
      uVar2 = param_1;
      func_0x00010bf52a60();
    } while (uVar2 != 0);
    uVar10 = 0;
  }
LAB_108f1f500:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return uVar10;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0b7fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar10 = 0;
  if (uVar2 != 0) {
    do {
      uVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        puVar3 = PTR_PTR_1126d4dd8;
        uVar7 = *(ulong *)(uVar10 * 8);
        _objc_retain(uVar7);
        _objc_opt_class(puVar3);
        uVar4 = uVar7;
        _objc_opt_isKindOfClass(uVar7,puVar3);
        uVar8 = uVar7;
        if ((uVar4 & 1) == 0) {
          uVar8 = 0;
        }
        _objc_retain(uVar8);
        _objc_release(uVar7);
        uVar4 = uVar8;
        func_0x00010c1164a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
        if ((uVar4 != 0) && (func_0x00010c074e40(), (int)uVar7 != 0)) {
          uVar8 = uVar4;
          func_0x00010c11b1e0();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar8;
          func_0x00010c08fa60();
          _objc_release(uVar8);
          if (1 < uVar7) {
            _objc_release(uVar4);
            uVar10 = 1;
            goto LAB_108f1f6b4;
          }
        }
        _objc_release(uVar4);
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
      uVar2 = param_1;
      func_0x00010bf52a60();
    } while (uVar2 != 0);
    uVar10 = 0;
  }
LAB_108f1f6b4:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return uVar10;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c1168c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar10 = 0;
  if (uVar2 != 0) {
    do {
      uVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        uVar9 = *(ulong *)(uVar10 * 8);
        uVar8 = uVar9;
        func_0x00010bf25020();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar8;
        func_0x00010c291840();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar4;
        func_0x00010c074e40();
        _objc_release(uVar4);
        _objc_release(uVar8);
        if ((uVar7 & 1) != 0) {
          func_0x00010bf25020();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar9;
          func_0x00010bf25000();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar2;
          func_0x00010c07a1e0();
          uVar10 = (ulong)((uint)uVar10 ^ 1);
          _objc_release(uVar2);
          _objc_release(uVar9);
          goto LAB_108f1f844;
        }
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
      uVar2 = param_1;
      func_0x00010bf52a60();
    } while (uVar2 != 0);
    uVar10 = 0;
  }
LAB_108f1f844:
  _objc_release(param_1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    uVar10 = param_1;
    func_0x00010c0b7fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36420(param_1);
    _objc_release(uVar10);
    return param_1;
  }
  return uVar10;
}



/* Entry: 108f1f428; end: 108f1f547; -[SCSnapProProfilesProviderImpl canPostToStory] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x000108f1f490 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

ulong FUN_108f1f428(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0b7fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar10 = 0;
  if (uVar2 != 0) {
    do {
      uVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        uVar7 = *(ulong *)(uVar10 * 8);
        iVar6 = (int)uVar7;
        func_0x00010c074e40();
        if ((iVar6 != 0) && (func_0x00010bf2d160(), (uVar7 & 1) != 0)) {
          uVar10 = 1;
          goto LAB_108f1f500;
        }
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
      uVar2 = param_1;
      func_0x00010bf52a60();
    } while (uVar2 != 0);
    uVar10 = 0;
  }
LAB_108f1f500:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return uVar10;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0b7fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar10 = 0;
  if (uVar2 != 0) {
    do {
      uVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        puVar3 = PTR_PTR_1126d4dd8;
        uVar8 = *(ulong *)(uVar10 * 8);
        _objc_retain(uVar8);
        _objc_opt_class(puVar3);
        uVar4 = uVar8;
        _objc_opt_isKindOfClass(uVar8,puVar3);
        uVar7 = uVar8;
        if ((uVar4 & 1) == 0) {
          uVar7 = 0;
        }
        _objc_retain(uVar7);
        _objc_release(uVar8);
        uVar4 = uVar7;
        func_0x00010c1164a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        if ((uVar4 != 0) && (func_0x00010c074e40(), (int)uVar8 != 0)) {
          uVar7 = uVar4;
          func_0x00010c11b1e0();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c08fa60();
          _objc_release(uVar7);
          if (1 < uVar8) {
            _objc_release(uVar4);
            uVar10 = 1;
            goto LAB_108f1f6b4;
          }
        }
        _objc_release(uVar4);
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
      uVar2 = param_1;
      func_0x00010bf52a60();
    } while (uVar2 != 0);
    uVar10 = 0;
  }
LAB_108f1f6b4:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return uVar10;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c1168c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar10 = 0;
  if (uVar2 != 0) {
    do {
      uVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        uVar9 = *(ulong *)(uVar10 * 8);
        uVar7 = uVar9;
        func_0x00010bf25020();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar7;
        func_0x00010c291840();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar4;
        func_0x00010c074e40();
        _objc_release(uVar4);
        _objc_release(uVar7);
        if ((uVar8 & 1) != 0) {
          func_0x00010bf25020();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar9;
          func_0x00010bf25000();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar2;
          func_0x00010c07a1e0();
          uVar10 = (ulong)((uint)uVar10 ^ 1);
          _objc_release(uVar2);
          _objc_release(uVar9);
          goto LAB_108f1f844;
        }
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
      uVar2 = param_1;
      func_0x00010bf52a60();
    } while (uVar2 != 0);
    uVar10 = 0;
  }
LAB_108f1f844:
  _objc_release(param_1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    uVar10 = param_1;
    func_0x00010c0b7fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36420(param_1);
    _objc_release(uVar10);
    return param_1;
  }
  return uVar10;
}



/* Entry: 108f1f548; end: 108f1f703; -[SCSnapProProfilesProviderImpl isHostPublisher] */

ulong FUN_108f1f548(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0b7fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar9 = 0;
  if (uVar2 != 0) {
    do {
      uVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        puVar3 = PTR_PTR_1126d4dd8;
        uVar7 = *(ulong *)(uVar9 * 8);
        _objc_retain(uVar7);
        _objc_opt_class(puVar3);
        uVar4 = uVar7;
        _objc_opt_isKindOfClass(uVar7,puVar3);
        uVar5 = uVar7;
        if ((uVar4 & 1) == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(uVar7);
        uVar4 = uVar5;
        func_0x00010c1164a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        if ((uVar4 != 0) && (func_0x00010c074e40(), (int)uVar7 != 0)) {
          uVar5 = uVar4;
          func_0x00010c11b1e0();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar5;
          func_0x00010c08fa60();
          _objc_release(uVar5);
          if (1 < uVar7) {
            _objc_release(uVar4);
            uVar9 = 1;
            goto LAB_108f1f6b4;
          }
        }
        _objc_release(uVar4);
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
      uVar2 = param_1;
      func_0x00010bf52a60();
    } while (uVar2 != 0);
    uVar9 = 0;
  }
LAB_108f1f6b4:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return uVar9;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c1168c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar9 = 0;
  if (uVar2 != 0) {
    do {
      uVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        uVar8 = *(ulong *)(uVar9 * 8);
        uVar5 = uVar8;
        func_0x00010bf25020();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar5;
        func_0x00010c291840();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar4;
        func_0x00010c074e40();
        _objc_release(uVar4);
        _objc_release(uVar5);
        if ((uVar7 & 1) != 0) {
          func_0x00010bf25020();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar8;
          func_0x00010bf25000();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar2;
          func_0x00010c07a1e0();
          uVar9 = (ulong)((uint)uVar9 ^ 1);
          _objc_release(uVar2);
          _objc_release(uVar8);
          goto LAB_108f1f844;
        }
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
      uVar2 = param_1;
      func_0x00010bf52a60();
    } while (uVar2 != 0);
    uVar9 = 0;
  }
LAB_108f1f844:
  _objc_release(param_1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    uVar9 = param_1;
    func_0x00010c0b7fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be36420(param_1);
    _objc_release(uVar9);
    return param_1;
  }
  return uVar9;
}



/* Entry: 108f1f704; end: 108f1f893; -[SCSnapProProfilesProviderImpl hasRealPublicProfile] */

ulong FUN_108f1f704(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
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
  func_0x00010c1168c0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_e8,0x10);
  uVar7 = 0;
  if (uVar1 != 0) {
    lVar6 = *plStack_120;
    do {
      uVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_1);
        }
        uVar5 = *(ulong *)(lStack_128 + uVar7 * 8);
        uVar2 = uVar5;
        func_0x00010bf25020();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c291840();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c074e40();
        _objc_release(uVar3);
        _objc_release(uVar2);
        if ((uVar4 & 1) != 0) {
          func_0x00010bf25020();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar5;
          func_0x00010bf25000();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar1;
          func_0x00010c07a1e0();
          uVar7 = (ulong)((uint)uVar7 ^ 1);
          _objc_release(uVar1);
          _objc_release(uVar5);
          goto LAB_108f1f844;
        }
        uVar7 = uVar7 + 1;
      } while (uVar1 != uVar7);
      uVar1 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_e8,0x10);
    } while (uVar1 != 0);
    uVar7 = 0;
  }
LAB_108f1f844:
  _objc_release(param_1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar7;
  }
  ___stack_chk_fail();
  uVar7 = param_1;
  func_0x00010c0b7fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36420(param_1,param_2,uVar7);
  _objc_release(uVar7);
  return param_1;
}



/* Entry: 108f1f894; end: 108f1f8db; -[SCSnapProProfilesProviderImpl hostProfileTier] */

undefined8 FUN_108f1f894(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0b7fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be36420(param_1,param_2,uVar1);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108f1f8dc; end: 108f1fa73; -[SCSnapProProfilesProviderImpl _hostProfileTierWithManagedProfiles:] */

ulong FUN_108f1f8dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar5 = 0;
  if (lVar2 != 0) {
    do {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        puVar3 = PTR_PTR_1126d4dd8;
        uVar7 = *(ulong *)(lVar8 * 8);
        _objc_retain(uVar7);
        _objc_opt_class(puVar3);
        uVar4 = uVar7;
        _objc_opt_isKindOfClass(uVar7,puVar3);
        uVar5 = uVar7;
        if ((uVar4 & 1) == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(uVar7);
        uVar4 = uVar5;
        func_0x00010c1164a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        if ((uVar4 != 0) && (func_0x00010c074e40(), (uVar7 & 1) != 0)) {
          uVar5 = uVar4;
          func_0x00010c26e7a0(uVar4);
          _objc_release(uVar4);
          goto LAB_108f1fa24;
        }
        _objc_release(uVar4);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    uVar5 = 0;
  }
LAB_108f1fa24:
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return uVar5;
  }
  ___stack_chk_fail();
  uVar5 = *(ulong *)(param_3 + 0x20);
  if (uVar5 == 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000108f1fa80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(uVar5 + 0x10))();
  return uVar5;
}



/* Entry: 108f1fa74; end: 108f1fa87;  */

void FUN_108f1fa74(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108f1fa80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}


