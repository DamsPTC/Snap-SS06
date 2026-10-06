/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105667fc8; end: 105667fff; -[SCMemoriesUserDefaultsServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105667fc8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272729c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112727298);
  return;
}



/* Entry: 105668000; end: 105668043; -[SCGrapheneNetworkEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105668000(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127272a8);
  _objc_destroyWeak(param_1 + _DAT_1127272a4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127272a0);
  return;
}



/* Entry: 105668044; end: 105668153;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105668044(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x20) + (long)_DAT_1127272b0;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c2946e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105668154; end: 105668217; -[SCGrapheneUserSessionEntryPoint end] */

void FUN_105668154(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e9820;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001009b7090(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_1);
  func_0x00010c21f800(uVar3);
  func_0x00010c21e4e0(uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105668218; end: 105668227;  */

undefined8 FUN_105668218(void)

{
  return 0;
}



/* Entry: 105668228; end: 10566826b; -[SCGrapheneUserSessionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105668228(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127272b4);
  _objc_destroyWeak(param_1 + _DAT_1127272b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127272ac);
  return;
}



/* Entry: 10566826c; end: 10566827f; -[SCGrapheneImpl addTimer:durationSec:] */

void FUN_10566826c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010befbff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_addTimer_durationMs__11259c9a0,param_4,(long)(param_1 * 1000.0));
  return;
}



/* Entry: 105668280; end: 1056682df; -[SCGrapheneImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105668280(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127272c8,0);
  _objc_storeStrong(param_1 + _DAT_1127272c4,0);
  _objc_storeStrong(param_1 + _DAT_1127272c0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127272bc,0);
  return;
}



/* Entry: 1056682e0; end: 1056682f7;  */

undefined ** FUN_1056682e0(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 1056682f8; end: 10566836f; -[SCGrapheneManager onPause] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056682f8(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127272cc;
  _os_unfair_lock_lock(param_1 + lVar1);
  func_0x00010c069d00(*(undefined8 *)(param_1 + _DAT_1127272e4));
  func_0x00010c069d00(*(undefined8 *)(param_1 + _DAT_1127272e0));
  func_0x00010bfb2f20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + lVar1);
  return;
}



/* Entry: 105668370; end: 10566841f; -[SCGrapheneManager flush] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105668370(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127272f0);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105668420; end: 105668563;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105668420(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar9 = (long)_DAT_1127272d0;
    _os_unfair_lock_lock(param_1 + lVar9);
    lVar10 = (long)_DAT_1127272f4;
    if (*(long *)(param_1 + lVar10) != 0) {
      lVar1 = param_1;
      func_0x00010bfb31c0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf71c40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c2709a0();
      lVar4 = lVar1;
      func_0x00010bf71c40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf531e0();
      lVar6 = lVar1;
      func_0x00010bf71c40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bfe3920();
      _objc_release(lVar6);
      _objc_release(lVar4);
      _objc_release(lVar2);
      if ((int)lVar5 + (int)lVar3 + (int)lVar7 != 0) {
        uVar8 = *(undefined8 *)(param_1 + lVar10);
        lVar10 = lVar1;
        func_0x00010bfb68e0(lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c28d940(uVar8,param_2,lVar10);
        _objc_release(lVar10);
      }
      _objc_release(lVar1);
    }
    _os_unfair_lock_unlock(param_1 + lVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105668564; end: 10566865f; -[SCGrapheneManager flushProcessor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105668564(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar3 = PTR_PTR_1126bc898;
  _objc_alloc(PTR_PTR_1126bc898);
  ppuVar4 = *(undefined ***)(param_1 + _DAT_1127272e8);
  (*(code *)ppuVar4[2])();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar1 = ppuVar4;
  }
  ppuVar5 = *(undefined ***)(param_1 + _DAT_1127272ec);
  (*(code *)ppuVar5[2])();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar2 = ppuVar5;
  }
  func_0x00010c05f6c0(puVar3,param_2,ppuVar1,ppuVar2);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127272d8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfb2f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 105668660; end: 10566870f; -[SCGrapheneManager compact] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105668660(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127272f0);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105668710; end: 105668763;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105668710(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127272d8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf431c0();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105668764; end: 1056687cf; -[SCGrapheneManager forceFlushInBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105668764(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127272cc;
  _os_unfair_lock_lock(param_1 + lVar2);
  uVar1 = *(ulong *)(param_1 + _DAT_1127272e4);
  func_0x00010c082b20();
  if ((uVar1 & 1) == 0) {
    func_0x00010bfb2f20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + lVar2);
  return;
}



/* Entry: 1056687d0; end: 105668a1b; -[SCGrapheneManager flushForVerification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056687d0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  ppuVar6 = &puStack_70;
  lVar9 = (long)_DAT_1127272d0;
  _os_unfair_lock_lock(param_1 + lVar9);
  puVar4 = PTR_PTR_1126bc8a0;
  lVar2 = param_1;
  func_0x00010bfb31c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb68e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_48 = 0;
  func_0x00010c0f40e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_48;
  _objc_retain(lStack_48);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _os_unfair_lock_unlock(param_1 + lVar9);
  puVar5 = PTR____NSArray0__struct_11034ab48;
  if (lVar1 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105668a1c;
    puStack_58 = &UNK_1108a5580;
    _objc_retain();
    puStack_50 = puVar5;
    _objc_retainBlock();
    puVar7 = puVar4;
    func_0x00010bf531c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = (undefined1 *)ppuVar6;
    (**(code **)((long)ppuVar6 + 0x10))(ppuVar6,&PTR____CFConstantStringClassReference_110df4098);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf97e80(puVar7);
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar7 = puVar4;
    func_0x00010c270980(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = (undefined1 *)ppuVar6;
    (**(code **)((long)ppuVar6 + 0x10))(ppuVar6,&PTR____CFConstantStringClassReference_110df40b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf97e80(puVar7);
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar7 = puVar4;
    func_0x00010c098aa0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = (undefined1 *)ppuVar6;
    (**(code **)((long)ppuVar6 + 0x10))(ppuVar6,&PTR____CFConstantStringClassReference_110df40d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf97e80(puVar7);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_retain(puVar5);
    _objc_release(ppuVar6);
    _objc_release(puStack_50);
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105668a1c; end: 105668ab7;  */

void FUN_105668a1c(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  ppuVar1 = &puStack_50;
  _objc_retain(param_2);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105668ab8;
  puStack_38 = &UNK_1108a5550;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uStack_30 = uVar2;
  uStack_28 = param_2;
  _objc_retain(param_2);
  _objc_retainBlock(&puStack_50);
  _objc_release(uStack_28);
  _objc_release(uStack_30);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105668ab8; end: 105668c07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105668ab8(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c0f4c20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c0ccb20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010bf61460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar5 = lVar4;
  func_0x00010bf51e00();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar1);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar2 + _DAT_1127272d4,0);
  _objc_storeStrong(lVar2 + _DAT_1127272dc,0);
  _objc_storeStrong(lVar2 + _DAT_1127272ec,0);
  _objc_storeStrong(lVar2 + _DAT_1127272e8,0);
  _objc_storeStrong(lVar2 + _DAT_1127272e4,0);
  _objc_storeStrong(lVar2 + _DAT_1127272e0,0);
  _objc_storeStrong(lVar2 + _DAT_1127272f0,0);
  _objc_storeStrong(lVar2 + _DAT_1127272f4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar2 + _DAT_1127272d8,0);
  return;
}



/* Entry: 105668c08; end: 105668cb7; -[SCGrapheneManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105668c08(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127272d4,0);
  _objc_storeStrong(param_1 + _DAT_1127272dc,0);
  _objc_storeStrong(param_1 + _DAT_1127272ec,0);
  _objc_storeStrong(param_1 + _DAT_1127272e8,0);
  _objc_storeStrong(param_1 + _DAT_1127272e4,0);
  _objc_storeStrong(param_1 + _DAT_1127272e0,0);
  _objc_storeStrong(param_1 + _DAT_1127272f0,0);
  _objc_storeStrong(param_1 + _DAT_1127272f4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127272d8,0);
  return;
}



/* Entry: 105668cb8; end: 105668f9f; -[SCGrapheneUploader upload:] */

void FUN_105668cb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _CACurrentMediaTime();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe4d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf225e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b7220;
  func_0x00010c135080(PTR_PTR_1126b7220);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2af9a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2bcaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c2b7240();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c2b3680();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe4c00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  func_0x00010c25f600(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar10);
  _objc_release(uVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  func_0x00010c290220(param_2);
  func_0x00010c1af260(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105668fa0; end: 105668fd7;  */

void FUN_105668fa0(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c290220(param_2);
  func_0x00010c1af260(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105668fd8; end: 105668fdb;  */

void FUN_105668fd8(void)

{
  return;
}



/* Entry: 105668fdc; end: 105669057;  */

undefined * FUN_105668fdc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bd400 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110df4178,
                        &UNK_10ddb8378,&UNK_10ddb83bc,7,FUN_105669058,0);
    do {
      if (puRam00000001136bd400 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bd400;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bd400,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bd400 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bd400;
}



/* Entry: 105669058; end: 105669063;  */

bool FUN_105669058(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 105669064; end: 1056690cb; +[SCPbGrapheneAppVersion descriptor] */

void FUN_105669064(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd408 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a546b8,
                        &PTR____CFConstantStringClassReference_110df4198,0x1130efe40,
                        &PTR_s_versionNumber_1130efe58,3,0x20,0x1c);
    puRam00000001136bd408 = puVar1;
  }
  return;
}



/* Entry: 1056690cc; end: 10566914f; +[SCPbGrapheneAppVersion_VersionNumber descriptor] */

undefined * FUN_1056690cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd410 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a546e0,
                        &PTR____CFConstantStringClassReference_110df41b8,0x1130efe40,
                        &PTR_DAT_1130efeb8,4,0x14,0x1c);
    func_0x00010c228780();
    puRam00000001136bd410 = puVar1;
  }
  return puRam00000001136bd410;
}



/* Entry: 105669150; end: 1056691b7; +[SCPbGrapheneMetric descriptor] */

void FUN_105669150(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd418 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a54640,
                        &PTR____CFConstantStringClassReference_110df41d8,0x1130efe40,
                        &PTR_DAT_1130eff38,4,0x28,0x1c);
    puRam00000001136bd418 = puVar1;
  }
  return;
}



/* Entry: 1056691b8; end: 10566924b; +[SCPbGrapheneMetricFrame descriptor] */

void FUN_1056691b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd420 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a54690,
                        &PTR____CFConstantStringClassReference_110df41f8,0x1130efe40,
                        &PTR_DAT_1130effb8,0xd,0x60,0x1c);
    puRam00000001136bd420 = puVar1;
  }
  return;
}



/* Entry: 10566924c; end: 1056692c7; -[SCUserExtensionStorageServiceProvider _removeStaleAppGroupContainerFiles] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10566924c(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112727308;
    _objc_loadWeakRetained(param_1);
  }
  lVar1 = param_1;
  func_0x00010c293740(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bc805bc();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056692c8; end: 10566932b; -[SCUserExtensionStorageServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056692c8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112727308);
  _objc_destroyWeak(param_1 + _DAT_112727310);
  _objc_destroyWeak(param_1 + _DAT_11272730c);
  _objc_storeStrong(param_1 + _DAT_112727300,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112727304,0);
  return;
}



/* Entry: 10566932c; end: 1056693a7;  */

void FUN_10566932c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_PTR_1126bc8e0;
  _objc_alloc(PTR_PTR_1126bc8e0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf4c240(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02cdc0(puVar3,param_2,uVar1,uVar2,uVar4,*(undefined8 *)(param_1 + 0x38));
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1056693a8; end: 10566940f; -[SCMusicRecommendationServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056693a8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112727324);
  _objc_destroyWeak(param_1 + _DAT_112727320);
  _objc_destroyWeak(param_1 + _DAT_11272731c);
  _objc_destroyWeak(param_1 + _DAT_112727318);
  _objc_destroyWeak(param_1 + _DAT_112727314);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112727328);
  return;
}



/* Entry: 105669410; end: 105669537; -[SCMusicRecommendationManagerBuilderImpl initWithMusicGrpcService:musicLoggingServices:contentDelivery:musicServices:] */

undefined1 *
FUN_105669410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e9848;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010bf9c6a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010c106880();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105669538; end: 10566963f; -[SCMusicRecommendationManagerBuilderImpl createRecommendationManagerWithCTContextsObservable:currentCTContextObservable:cacheOptions:source:shouldUseAutoapplyBackoff:] */

void FUN_105669538(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = PTR_PTR_1126bc8f0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d3680();
  func_0x00010c02cda0(puVar4,param_2,uVar1,param_3,param_4,uVar3,uVar2,param_5,param_6,
                      *(undefined8 *)(param_1 + 0x28),param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105669640; end: 10566973b; -[SCMusicRecommendationManagerBuilderImpl createRecommendationV2ManagerWithCTContextsObservable:currentCTContextObservable:cacheOptions:source:] */

void FUN_105669640(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = PTR_PTR_1126bc8f8;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d3680();
  func_0x00010c02cd80(puVar4,param_2,uVar1,param_3,param_4,uVar3,uVar2,param_5,param_6,
                      *(undefined8 *)(param_1 + 0x28));
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10566973c; end: 10566978f; -[SCMusicRecommendationManagerBuilderImpl .cxx_destruct] */

void FUN_10566973c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105669790; end: 105669a4b; -[SCMusicRecommendationManagerImpl initWithMusicGrpcService:ctContextsObservable:currentCTContextObservable:musicLoggingServices:contentDelivery:cacheOptions:contextDebounceInterval:source:musicPreferences:shouldUseAutoapplyBackoff:] */

undefined8 *
FUN_105669790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_78 = PTR_PTR_1126e9850;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    puVar1[0xc] = param_1;
    puVar4 = PTR_PTR_1126ae790;
    puVar3 = puVar1;
    _objc_opt_class(puVar1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcd0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[10];
    puVar1[10] = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
    puVar4 = PTR_PTR_1126ae790;
    puVar3 = puVar1;
    _objc_opt_class(puVar1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcd0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[4];
    puVar1[4] = puVar4;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_11;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0xd) = param_12;
    func_0x00010bec73e0(puVar1);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 105669a4c; end: 105669a5f; -[SCMusicRecommendationManagerImpl currentCTRecommendationObservable] */

void FUN_105669a4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_combineLatest_combiner__1125adfc0,
             *(undefined8 *)(param_1 + 0x18),&PTR___NSConcreteGlobalBlock_1108a56e0);
  return;
}



/* Entry: 105669a60; end: 105669b4f;  */

void FUN_105669a60(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar3 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_3;
    func_0x00010c0ec5e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126ae750;
    if (lVar2 == 0) {
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c2468a0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105669b50; end: 105669b77; -[SCMusicRecommendationManagerImpl currentRecommendationsDict] */

void FUN_105669b50(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105669b78; end: 105669c23; -[SCMusicRecommendationManagerImpl removeRecommendationWithContext:] */

void FUN_105669b78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puVar3 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010c0d9840(uVar4,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105669c24; end: 105669d2b; -[SCMusicRecommendationManagerImpl _subscribeToCTContexts] */

void FUN_105669c24(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf65f60(*(undefined8 *)(param_1 + 0x60));
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar3 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105669d2c; end: 105669e07;  */

void FUN_105669d2c(long param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    _objc_copyWeak(auStack_38,param_1 + 0x20);
    _objc_retain(param_2);
    func_0x00010be1d700(lVar1);
    _objc_release(lVar1);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 105669e08; end: 10566a033;  */

void FUN_105669e08(long param_1,undefined *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = param_2;
    func_0x00010bf529e0();
    if (puVar2 == (undefined *)0x0) {
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f7fc0();
    }
    else {
      if (param_3 != 0) {
        puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f380();
        uVar3 = *(undefined8 *)(lVar1 + 0x30);
        func_0x00010c0d2a40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
        func_0x00010bf529e0();
        func_0x00010c0aa840(uVar4);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(puVar2);
      }
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_2);
      func_0x00010c0f7fc0(puVar2);
      _objc_release(puVar2);
      puVar2 = param_2;
    }
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10566a034; end: 10566a053;  */

void FUN_10566a034(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),PTR_s_next__112614028,
             PTR____NSDictionary0__struct_11034ab58);
  return;
}



/* Entry: 10566a054; end: 10566a16f; -[SCMusicRecommendationManagerImpl _getCTRecommendationsWithCTContexts:completion:] */

void FUN_10566a054(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x40) == 0) {
    func_0x00010be10380(param_1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010be1d780(param_1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10566a170; end: 10566a24f;  */

void FUN_10566a170(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      func_0x00010be10380(lVar1);
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
                (*(long *)(param_1 + 0x28),param_2,param_3,param_4,param_5,param_6,param_7);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10566a250; end: 10566a503; -[SCMusicRecommendationManagerImpl _fetchCTRecommendationsWithCTContexts:completion:] */

void FUN_10566a250(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  ppuVar2 = &puStack_c0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_78,param_1);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uVar7 = 0xc2000000;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_10566a504;
  puStack_a8 = &UNK_1108a5760;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_4);
  lStack_a0 = param_1;
  uStack_88 = param_4;
  _objc_retain(puVar1);
  puStack_98 = puVar1;
  _objc_retain(param_3);
  uStack_90 = param_3;
  _objc_retainBlock(&puStack_c0);
  _objc_retain(0);
  puVar3 = PTR_PTR_1126bc900;
  _objc_opt_new(PTR_PTR_1126bc900);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c183620(puVar3);
  _objc_release(puVar4);
  func_0x00010c177420(puVar3);
  if (*(char *)(param_1 + 0x68) == '\x01') {
    puVar4 = PTR_PTR_1126bc908;
    _objc_opt_new(PTR_PTR_1126bc908);
    uVar5 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0d2a00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    _objc_release(uVar6);
    _objc_release(uVar5);
    func_0x00010c16cb40(uVar7,puVar4);
    func_0x00010c1e8c40(puVar3);
    _objc_release(puVar4);
  }
  uVar7 = *(undefined8 *)(param_1 + 8);
  puVar4 = puVar3;
  func_0x00010bf63640(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27f2e0(uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (*(char *)(param_1 + 0x68) == '\x01') {
    uVar7 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c287de0();
    _objc_release(uVar7);
  }
  _objc_release(puVar3);
  _objc_release(0);
  _objc_release(ppuVar2);
  _objc_release(uStack_90);
  _objc_release(puStack_98);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10566a504; end: 10566a59b;  */

void FUN_10566a504(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (lVar2 = *(long *)(param_1 + 0x38), lVar2 != 0)) {
    if (param_3 == 0) {
      func_0x00010be70000(lVar1);
    }
    else {
      (**(code **)(lVar2 + 0x10))(lVar2,0,0,0,0,*(undefined8 *)(param_1 + 0x28),0);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10566a59c; end: 10566a817; -[SCMusicRecommendationManagerImpl _getCachedCTRecommendationsWithCTContexts:completion:] */

void FUN_10566a59c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **unaff_x25;
  undefined1 auStack_120 [8];
  undefined1 uStack_118;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x40) == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0,0,0,1,puVar1,0);
  }
  else {
    puVar2 = PTR_PTR_1126b08b8;
    _objc_alloc();
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bf267e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0295e0();
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b1060;
    _objc_alloc();
    ppuStack_60 = &PTR____CFConstantStringClassReference_110df4238;
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032f60();
    _objc_release(puVar5);
    _objc_initWeak(auStack_68,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_10566a818;
    puStack_a8 = &UNK_1108a0660;
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_retain(puVar2);
    puStack_a0 = puVar2;
    _objc_retain(puVar4);
    uStack_70 = 1;
    puStack_98 = puVar4;
    _objc_retain(puVar1);
    puStack_90 = puVar1;
    _objc_retain(param_3);
    lStack_88 = param_3;
    _objc_retain(param_4);
    lStack_80 = param_4;
    func_0x00010c0f7fc0(uVar3);
    _objc_release(lStack_80);
    _objc_release(lStack_88);
    _objc_release(puStack_90);
    _objc_release(puStack_98);
    _objc_release(puStack_a0);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar4);
    _objc_release(puVar2);
    unaff_x25 = &puStack_c0;
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x25 + 0x48));
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  lVar6 = param_3 + 0x48;
  _objc_loadWeakRetained();
  if (lVar6 != 0) {
    uVar3 = *(undefined8 *)(lVar6 + 0x38);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_120,param_3 + 0x48);
    uStack_118 = *(undefined1 *)(param_3 + 0x50);
    uVar8 = *(undefined8 *)(param_3 + 0x30);
    _objc_retain(uVar8);
    uVar9 = *(undefined8 *)(param_3 + 0x38);
    _objc_retain(uVar9);
    uVar7 = *(undefined8 *)(param_3 + 0x40);
    _objc_retain(uVar7);
    func_0x00010c13e480(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar7);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_destroyWeak(auStack_120);
  }
  _objc_release(lVar6);
  return;
}



/* Entry: 10566a818; end: 10566a94f;  */

void FUN_10566a818(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 uStack_58;
  
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,param_1 + 0x48);
    uStack_58 = *(undefined1 *)(param_1 + 0x50);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar5);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar3);
    func_0x00010c13e480(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_60);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10566a950; end: 10566a9e3;  */

void FUN_10566a950(long param_1,long param_2,undefined8 param_3,int param_4)

{
  _objc_retain(param_2);
  if ((param_2 == 0) || (param_4 == 0)) {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
              (*(long *)(param_1 + 0x38),0,0,0,*(undefined1 *)(param_1 + 0x48),
               *(undefined8 *)(param_1 + 0x20),0);
  }
  else {
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      func_0x00010be70000();
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10566a9e4; end: 10566ab2f; -[SCMusicRecommendationManagerImpl _storeCTRecommendations:] */

void FUN_10566a9e4(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  if (((*(long *)(param_2 + 0x40) != 0) && (func_0x00010bf26cc0(), param_4 != 0)) && (0.0 < param_1)
     ) {
    puVar1 = PTR_PTR_1126b08b8;
    _objc_alloc();
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    func_0x00010bf267e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0295e0();
    _objc_release(uVar2);
    _objc_initWeak(auStack_38,param_2);
    uVar2 = *(undefined8 *)(param_2 + 0x50);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_4);
    _objc_retain(puVar1);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(puVar1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 10566ab30; end: 10566ac2f;  */

void FUN_10566ab30(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf63640(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf26cc0(*(undefined8 *)(lVar1 + 0x40));
    func_0x00010bf65600(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10566ac30;
    puStack_50 = &UNK_110841f20;
    lStack_48 = lVar1;
    func_0x00010c14a860(uVar2,param_2,uVar3,uVar5,puVar4,0,&puStack_68);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10566ac30; end: 10566ac33;  */

void FUN_10566ac30(void)

{
  return;
}



/* Entry: 10566ac34; end: 10566af67; -[SCMusicRecommendationManagerImpl _parseCTRecommendationsData:isFromCache:startDate:ctContexts:completion:] */

void FUN_10566ac34(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_3 == 0) {
    (**(code **)(param_7 + 0x10))(param_7,0,0,0,param_4,param_5,0);
  }
  else {
    puVar2 = PTR_PTR_1126bc910;
    _objc_opt_class();
    lStack_68 = 0;
    func_0x00010c0f40e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lStack_68;
    _objc_retain(lStack_68);
    if (lVar1 == 0) {
      if ((param_4 & 1) == 0) {
        func_0x00010bec3da0(param_1);
      }
      puVar3 = puVar2;
      func_0x00010c1232a0();
      if (puVar3 == (undefined *)0x0) {
        puVar3 = puVar2;
        func_0x00010c135700(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar2;
        func_0x00010c0cff20(puVar2);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_7 + 0x10))
                  (param_7,PTR____NSDictionary0__struct_11034ab58,puVar3,puVar7,param_4,param_5,0);
        _objc_release(puVar7);
      }
      else {
        puVar3 = PTR_PTR_1126bc918;
        func_0x00010bf5cbc0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        func_0x00010c123280();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf529e0();
        func_0x00010bf71fe0();
        _objc_retainAutoreleasedReturnValue();
        puStack_80 = &uStack_88;
        uStack_88 = 0;
        uStack_78 = 0x2020000000;
        uStack_70 = 0;
        _objc_retain(puVar3);
        _objc_retain(puVar2);
        _objc_retain(puVar7);
        func_0x00010bf97e80(puVar4);
        puVar5 = puVar2;
        func_0x00010c135700(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar2;
        func_0x00010c0cff20(puVar2);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_7 + 0x10))(param_7,puVar7,puVar5,puVar6,param_4,param_5,puStack_80[3]);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar7);
        _objc_release(puVar2);
        _objc_release(puVar3);
        __Block_object_dispose(&uStack_88,8);
        _objc_release(puVar7);
        _objc_release(puVar4);
      }
      _objc_release(puVar3);
    }
    else {
      (**(code **)(param_7 + 0x10))(param_7,0,0,0,param_4,param_5,0);
    }
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10566af68; end: 10566b08f;  */

void FUN_10566af68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010bfd5be0();
  if ((int)uVar2 != 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    uVar2 = param_2;
    func_0x00010bf4e080(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (lVar5 != 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + 1;
    }
    uVar2 = param_2;
    FUN_10566df30();
    if ((int)uVar2 != 0) {
      puVar1 = PTR_PTR_1126bc920;
      _objc_alloc(PTR_PTR_1126bc920);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c135700(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03d660(puVar1);
      _objc_release(uVar2);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      uVar2 = param_2;
      func_0x00010bf4e080(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar4);
      _objc_release(uVar2);
      _objc_release(puVar1);
    }
    _objc_release(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10566b090; end: 10566b137; -[SCMusicRecommendationManagerImpl .cxx_destruct] */

void FUN_10566b090(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 10566b138; end: 10566b3fb; -[SCMusicRecommendationManagerV2Impl initWithMusicGrpcService:ctContextsObservable:currentCTContextObservable:musicLoggingServices:contentDelivery:cacheOptions:contextDebounceInterval:source:musicPreferences:] */

undefined8 *
FUN_10566b138(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_78 = PTR_PTR_1126e9858;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[9];
    puVar1[9] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[10];
    puVar1[10] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[2];
    puVar1[2] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[3];
    puVar1[3] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[4];
    puVar1[4] = param_10;
    _objc_release(uVar2);
    puVar1[8] = param_1;
    puVar4 = PTR_PTR_1126ae790;
    puVar3 = puVar1;
    _objc_opt_class(puVar1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcd0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[7];
    puVar1[7] = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
    puVar4 = PTR_PTR_1126bc928;
    _objc_alloc();
    func_0x00010c002f20();
    uVar2 = puVar1[5];
    puVar1[5] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = puVar1[6];
    puVar1[6] = puVar4;
    _objc_release(uVar2);
    func_0x00010bec73e0(puVar1);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10566b3fc; end: 10566b40f; -[SCMusicRecommendationManagerV2Impl currentCTRecommendationObservable] */

void FUN_10566b3fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_combineLatest_combiner__1125adfc0,
             *(undefined8 *)(param_1 + 0x50),&PTR___NSConcreteGlobalBlock_1108a57f0);
  return;
}



/* Entry: 10566b410; end: 10566b4ff;  */

void FUN_10566b410(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar3 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_3;
    func_0x00010c0ec5e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126ae750;
    if (lVar2 == 0) {
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c2468a0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10566b500; end: 10566b527; -[SCMusicRecommendationManagerV2Impl currentRecommendationsDict] */

void FUN_10566b500(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10566b528; end: 10566b5d3; -[SCMusicRecommendationManagerV2Impl removeRecommendationWithContext:] */

void FUN_10566b528(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0();
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    puVar3 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010c0d9840(uVar4,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10566b5d4; end: 10566b6e7; -[SCMusicRecommendationManagerV2Impl _subscribeToCTContexts] */

void FUN_10566b5d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf65f60(*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar3 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bec74e0(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10566b6e8; end: 10566b86f;  */

void FUN_10566b6e8(long param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      lVar1 = param_2;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      param_4 = auStack_e8;
      lVar2 = lVar1;
      func_0x00010bf52a60();
      if (lVar2 != 0) {
        lVar8 = *plStack_120;
        do {
          lVar9 = 0;
          do {
            if (*plStack_120 != lVar8) {
              _objc_enumerationMutation(lVar1);
            }
            lVar3 = param_2;
            func_0x00010c0e00e0(param_2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010be277e0(param_1);
            _objc_release(lVar3);
            lVar9 = lVar9 + 1;
          } while (lVar2 != lVar9);
          param_4 = auStack_e8;
          lVar2 = lVar1;
          puVar6 = &uStack_130;
          func_0x00010bf52a60();
        } while (lVar2 != 0);
      }
      _objc_release(lVar1);
      param_3 = (undefined *)puVar6;
    }
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar4 = param_3;
  func_0x00010bf529e0();
  puVar5 = param_4;
  func_0x00010c0720c0();
  if ((int)puVar5 == 0) {
    puVar5 = param_4;
    func_0x00010c0720c0();
    if ((int)puVar5 == 0) goto LAB_10566b94c;
    if (puVar4 != (undefined *)0x0) {
      func_0x00010bddd540(param_2);
      goto LAB_10566b94c;
    }
    uVar7 = *(undefined8 *)(param_2 + 0x68);
LAB_10566b920:
    puVar4 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar7);
  }
  else {
    if (puVar4 == (undefined *)0x0) {
      uVar7 = *(undefined8 *)(param_2 + 0x60);
      goto LAB_10566b920;
    }
    puVar4 = param_3;
    func_0x00010bfb1920(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bddd560(param_2);
  }
  _objc_release(puVar4);
LAB_10566b94c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10566b870; end: 10566b967; -[SCMusicRecommendationManagerV2Impl _handleContexts:withKey:] */

void FUN_10566b870(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010bf529e0();
  uVar2 = param_4;
  func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110df42d8);
  if ((int)uVar2 == 0) {
    uVar2 = param_4;
    func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110f4c478);
    if ((int)uVar2 == 0) goto LAB_10566b94c;
    if (puVar1 != (undefined *)0x0) {
      func_0x00010bddd540(param_1,param_2,param_3);
      goto LAB_10566b94c;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x68);
LAB_10566b920:
    puVar1 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2,param_2,puVar1);
  }
  else {
    if (puVar1 == (undefined *)0x0) {
      uVar2 = *(undefined8 *)(param_1 + 0x60);
      goto LAB_10566b920;
    }
    puVar1 = param_3;
    func_0x00010bfb1920(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bddd560(param_1,param_2,puVar1);
  }
  _objc_release(puVar1);
LAB_10566b94c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10566b968; end: 10566ba9f; -[SCMusicRecommendationManagerV2Impl _subscribeToContextsForServerFetch] */

void FUN_10566b968(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bf870a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bf870a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf41860(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10566baa0; end: 10566bc0b;  */

void FUN_10566baa0(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar2 = param_2;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_2;
    func_0x00010c0ec5e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0ec5e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10566bc0c; end: 10566bdff; -[SCMusicRecommendationManagerV2Impl _fetchCTRecommendationsWithCTContexts:completion:] */

void FUN_10566bc0c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_58,param_1);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_10566be00;
    puStack_80 = &UNK_1108a5850;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_4);
    lStack_68 = param_4;
    _objc_retain(puVar1);
    puStack_78 = puVar1;
    _objc_retain(param_3);
    ppuVar2 = &puStack_98;
    uStack_70 = param_3;
    _objc_retainBlock(ppuVar2);
    _objc_retain(0);
    puVar3 = PTR_PTR_1126bc900;
    _objc_opt_new(PTR_PTR_1126bc900);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c183620(puVar3);
    _objc_release(puVar4);
    func_0x00010c177420(puVar3);
    uVar5 = *(undefined8 *)(param_1 + 8);
    puVar4 = puVar3;
    func_0x00010bf63640(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27f2e0(uVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(0);
    _objc_release(ppuVar2);
    _objc_release(uStack_70);
    _objc_release(puStack_78);
    _objc_release(lStack_68);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10566be00; end: 10566beb3;  */

void FUN_10566be00(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (lVar3 = *(long *)(param_1 + 0x30), lVar3 != 0)) {
    if (param_3 == 0) {
      func_0x00010be70020(lVar1);
    }
    else {
      puVar2 = PTR_PTR_1126bc918;
      func_0x00010bf69c60(PTR_PTR_1126bc918);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))(lVar3,puVar2);
      _objc_release(puVar2);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10566beb4; end: 10566c003; -[SCMusicRecommendationManagerV2Impl _parseCTRecommendationCacheItem:startDate:ctContexts:] */

void FUN_10566beb4(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_1;
  func_0x00010be87240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c123260();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    param_1 = PTR_PTR_1126bc918;
    func_0x00010bf69c60(PTR_PTR_1126bc918);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = param_3;
    func_0x00010c123260(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c135700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be81f80(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  (**(code **)(puVar1 + 0x10))(puVar1,param_1);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10566c004; end: 10566c1f7; -[SCMusicRecommendationManagerV2Impl _parseCTRecommendationsData:startDate:ctContexts:completion:] */

/* WARNING: Removing unreachable block (ram,0x00010566c088) */

void FUN_10566c004(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 == 0) {
    puVar1 = PTR_PTR_1126bc918;
    func_0x00010bf69c60(PTR_PTR_1126bc918);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_6 + 0x10))(param_6,puVar1);
  }
  else {
    puVar1 = PTR_PTR_1126bc910;
    _objc_opt_class();
    func_0x00010c0f40e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c1232a0();
    puVar3 = puVar1;
    if (puVar2 == (undefined *)0x0) {
      param_1 = PTR_PTR_1126bc930;
      _objc_alloc(PTR_PTR_1126bc930);
      func_0x00010c135700(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03d6c0(param_1);
    }
    else {
      func_0x00010c123280(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c135700(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be81f80(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    _objc_release(puVar3);
    (**(code **)(param_6 + 0x10))(param_6,param_1);
    _objc_release(param_1);
  }
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10566c1f8; end: 10566c413; -[SCMusicRecommendationManagerV2Impl _processRecommendationArray:ctContexts:requestId:startData:isFromCache:] */

void FUN_10566c1f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126bc918;
  func_0x00010bf5cbc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf529e0(param_3);
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x2020000000;
  uStack_88 = 0xffffffffffffffff;
  _objc_retain(puVar1);
  _objc_retain(param_5);
  _objc_retain(puVar2);
  func_0x00010bf97e80(param_3);
  if ((param_7 & 1) == 0) {
    func_0x00010bec3f80(param_1);
  }
  puVar3 = PTR_PTR_1126bc930;
  _objc_alloc(PTR_PTR_1126bc930);
  func_0x00010c03d6c0();
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_a0,8);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10566c414; end: 10566c54f;  */

void FUN_10566c414(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfd5be0();
  if ((int)uVar1 != 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    uVar1 = param_2;
    func_0x00010bf4e080(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    if (lVar5 != 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + 1;
    }
    uVar1 = param_2;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bfdc2a0();
    _objc_release(uVar1);
    if ((int)uVar4 != 0) {
      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = param_3;
    }
    uVar1 = param_2;
    FUN_10566df30();
    if ((int)uVar1 != 0) {
      puVar2 = PTR_PTR_1126bc920;
      _objc_alloc(PTR_PTR_1126bc920);
      func_0x00010c03d660();
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      uVar1 = param_2;
      func_0x00010bf4e080(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar4);
      _objc_release(uVar1);
      _objc_release(puVar2);
    }
    _objc_release(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10566c550; end: 10566c60f; -[SCMusicRecommendationManagerV2Impl _recommendationsFetchCompletionWithCtContexts:] */

void FUN_10566c550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_70;
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10566c610;
  puStack_58 = &UNK_1108a58b0;
  uStack_50 = param_1;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_48 = param_3;
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_70);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10566c610; end: 10566c8c3;  */

void FUN_10566c610(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010c1232c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf529e0();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10566c8c4;
    puStack_70 = &UNK_1108434b0;
    puVar6 = auStack_68;
    _objc_copyWeak(puVar6,param_1 + 0x30);
    func_0x00010c0f7fc0(puVar1);
  }
  else {
    puVar1 = param_2;
    func_0x00010c135700();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    _objc_release();
    if (puVar1 != (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = param_2;
      func_0x00010bfaa720(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380(puVar2);
      _objc_release(puVar1);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
      func_0x00010c0d2a40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = param_2;
      func_0x00010c135700(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0739e0(param_2);
      puVar5 = param_2;
      func_0x00010c0cfee0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x28));
      func_0x00010c0de580();
      func_0x00010c0aa840(uVar4);
      _objc_release(puVar5);
      _objc_release(puVar1);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(puVar2);
    }
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = auStack_90;
    _objc_copyWeak(puVar6,param_1 + 0x30);
    _objc_retain(param_2);
    func_0x00010c0f7fc0(puVar2);
    _objc_release(puVar2);
    puVar1 = param_2;
  }
  _objc_release(puVar1);
  _objc_destroyWeak(puVar6);
  _objc_release(param_2);
  return;
}



/* Entry: 10566c8c4; end: 10566c8fb;  */

void FUN_10566c8c4(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x58),param_2,*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10566c8fc; end: 10566c96b;  */

void FUN_10566c8fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c1232c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(uVar3,param_2,uVar2);
    _objc_release(uVar2);
    func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x58),param_2,*(undefined8 *)(lVar1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10566c96c; end: 10566caa7; -[SCMusicRecommendationManagerV2Impl _checkCacheForSnapContext:] */

void FUN_10566c96c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010c0dd860();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfa5660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010c297260(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10566caa8; end: 10566cecb;  */

void FUN_10566caa8(undefined *param_1,undefined *param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  _objc_retain(param_2);
  puVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    if (param_3 == (undefined *)0x0) {
      puVar3 = param_2;
      func_0x00010c123260();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = *(undefined **)(puVar1 + 0x18);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 == (undefined *)0x0) {
        func_0x00010c1ca260(puVar3);
        _objc_release(puVar3);
        uVar8 = *(undefined8 *)(puVar1 + 0x60);
        puVar7 = PTR_PTR_1126ae750;
        func_0x00010c2468a0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar7;
        func_0x00010c0d9840(uVar8);
        param_1 = puVar7;
      }
      else {
        puVar7 = puVar3;
        func_0x00010c0d3820();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        puStack_88 = puVar7;
        if ((puVar7 == (undefined *)0x0) ||
           (puVar3 = puVar7, func_0x00010c067ec0(), (int)puVar3 < 1)) {
          puVar3 = (undefined *)0x1;
        }
        else {
          func_0x00010c067ec0();
          puVar3 = (undefined *)(long)((int)puVar7 + 1);
        }
        puVar7 = puVar2;
        func_0x00010c2791e0();
        if ((puVar7 != (undefined *)0x0) && (puVar3 < puVar7)) {
          do {
            puVar4 = puVar2;
            func_0x00010c2791c0();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar4);
            puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = *(undefined8 *)(puVar1 + 0x18);
            func_0x00010c269d40(uVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1ca260();
            _objc_release(uVar8);
            _objc_release(puVar4);
            puVar4 = puVar5;
            func_0x00010c2711a0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar4;
            func_0x00010c08fa60();
            if (puVar6 == (undefined *)0x0) {
              _objc_release(puVar4);
            }
            else {
              puVar6 = puVar5;
              func_0x00010bfd69c0();
              _objc_release(puVar4);
              if ((int)puVar6 != 0) {
                puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
                puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
                puStack_70 = puVar5;
                func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bff4000(puVar3);
                func_0x00010c2194a0(puVar2);
                _objc_release(puVar3);
                _objc_release(puVar7);
                puVar7 = PTR_PTR_1126bc938;
                _objc_alloc();
                puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
                puStack_78 = puVar2;
                func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
                _objc_retainAutoreleasedReturnValue();
                puVar4 = param_2;
                func_0x00010c135700(param_2);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c03d6a0();
                _objc_release(puVar4);
                _objc_release(puVar3);
                uVar8 = *(undefined8 *)(puVar1 + 0x60);
                puVar3 = PTR_PTR_1126ae750;
                func_0x00010c0db140(PTR_PTR_1126ae750);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0d9840(uVar8);
                _objc_release(puVar3);
                uStack_80 = *(undefined8 *)(param_1 + 0x20);
                param_1 = PTR__OBJC_CLASS___NSArray_1126ae530;
                func_0x00010bf0a140();
                _objc_retainAutoreleasedReturnValue();
                puVar3 = puVar7;
                func_0x00010be6ffe0(puVar1);
                _objc_release(param_1);
                _objc_release(puVar7);
                goto LAB_10566ccd8;
              }
            }
            puVar3 = puVar3 + 1;
            _objc_release(puVar5);
          } while (puVar7 != puVar3);
        }
        uVar8 = *(undefined8 *)(puVar1 + 0x60);
        puVar5 = PTR_PTR_1126ae750;
        func_0x00010c2468a0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar5;
        func_0x00010c0d9840(uVar8);
        param_1 = puVar5;
LAB_10566ccd8:
        _objc_release(puVar5);
        puVar7 = puStack_88;
      }
      _objc_release(puVar7);
      param_3 = puVar2;
    }
    else {
      param_3 = *(undefined **)(puVar1 + 0x60);
      puVar2 = PTR_PTR_1126ae750;
      func_0x00010c2468a0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0d9840(param_3);
      param_1 = puVar2;
    }
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_98 = FUN_10566cecc;
    puStack_c0 = param_1;
    puStack_b8 = param_3;
    puStack_b0 = puVar1;
    puStack_a8 = param_2;
    puStack_a0 = &stack0xfffffffffffffff0;
    _objc_retain(puVar3);
    _objc_initWeak(auStack_c8,puVar2);
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010c0dd860();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(puVar2 + 0x28);
    func_0x00010bfa5660(uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_d0,auStack_c8);
    _objc_retain(puVar1);
    _objc_retain(puVar3);
    func_0x00010c297260(uVar8);
    _objc_release(uVar8);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_d0);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_c8);
    _objc_release(puVar3);
    return;
  }
  return;
}



/* Entry: 10566cecc; end: 10566d007; -[SCMusicRecommendationManagerV2Impl _checkCacheForLensAndFilterContexts:] */

void FUN_10566cecc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010c0dd860();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfa5660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(puVar1);
  _objc_retain(param_3);
  func_0x00010c297260(uVar2);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10566d008; end: 10566d0cb;  */

void FUN_10566d008(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    if (param_2 == 0) {
      puVar1 = PTR_PTR_1126ae750;
      func_0x00010c2468a0(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar2);
      _objc_release(puVar1);
    }
    else {
      puVar1 = PTR_PTR_1126ae750;
      func_0x00010c0db140();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar2);
      _objc_release(puVar1);
      func_0x00010be6ffe0(param_1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10566d0cc; end: 10566d28f; -[SCMusicRecommendationManagerV2Impl _storeFetchResultsForRecommendations:requestId:snapContextIndex:] */

void FUN_10566d0cc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  if (param_3 != 0) {
    func_0x00010c0d3c80();
    if (-1 < param_5) {
      puVar1 = PTR_PTR_1126bc938;
      _objc_alloc(PTR_PTR_1126bc938);
      lVar2 = param_3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03d6a0(puVar1);
      _objc_release(puVar3);
      _objc_release(lVar2);
      func_0x00010c257560(*(undefined8 *)(param_1 + 0x28));
      func_0x00010c12d3c0(param_3);
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ca260();
      _objc_release(uVar4);
      _objc_release(puVar1);
    }
    lVar2 = param_3;
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      puVar1 = PTR_PTR_1126bc938;
      _objc_alloc(PTR_PTR_1126bc938);
      lVar2 = param_3;
      func_0x00010bf51e00(param_3);
      func_0x00010c03d6a0(puVar1);
      _objc_release(lVar2);
      func_0x00010c257560(*(undefined8 *)(param_1 + 0x28));
      _objc_release(puVar1);
    }
    _objc_release(param_3);
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_4 + 0x78,0);
  _objc_storeStrong(param_4 + 0x70,0);
  _objc_storeStrong(param_4 + 0x68,0);
  _objc_storeStrong(param_4 + 0x60,0);
  _objc_storeStrong(param_4 + 0x58,0);
  _objc_storeStrong(param_4 + 0x50,0);
  _objc_storeStrong(param_4 + 0x48,0);
  _objc_storeStrong(param_4 + 0x38,0);
  _objc_storeStrong(param_4 + 0x30,0);
  _objc_storeStrong(param_4 + 0x28,0);
  _objc_storeStrong(param_4 + 0x20,0);
  _objc_storeStrong(param_4 + 0x18,0);
  _objc_storeStrong(param_4 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_4 + 8,0);
  return;
}



/* Entry: 10566d290; end: 10566d34f; -[SCMusicRecommendationManagerV2Impl .cxx_destruct] */

void FUN_10566d290(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 10566d350; end: 10566d44b; -[SCMusicRecommendationCacheFetcher initWithContentDelivery:cacheOptions:] */

undefined1 *
FUN_10566d350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e9860;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae790;
    puVar3 = (undefined1 *)puVar1;
    _objc_opt_class(puVar1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcd0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10566d44c; end: 10566d6cb; -[SCMusicRecommendationCacheFetcher fetchCTRecommendationWithCacheKey:] */

void FUN_10566d44c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **unaff_x25;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110df4258;
    func_0x000108091430();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126ae558;
    func_0x00010bfe9c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
  }
  else {
    puVar2 = PTR_PTR_1126b08b8;
    _objc_alloc();
    lVar3 = lVar1;
    func_0x00010bf267e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0295e0();
    _objc_release(lVar3);
    puVar4 = PTR_PTR_1126b1060;
    _objc_alloc();
    ppuStack_60 = &PTR____CFConstantStringClassReference_110df4238;
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c032f60();
    _objc_release(puVar7);
    puVar5 = PTR_PTR_1126ae560;
    _objc_alloc_init();
    _objc_initWeak(auStack_68,param_1);
    uVar9 = *(undefined8 *)(param_1 + 8);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10566d6cc;
    puStack_90 = &UNK_110850cf8;
    unaff_x25 = &puStack_a8;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(puVar2);
    puStack_88 = puVar2;
    _objc_retain(puVar4);
    puStack_80 = puVar4;
    _objc_retain(puVar5);
    puStack_78 = puVar5;
    func_0x00010c0f7fc0(uVar9);
    puVar7 = puVar5;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_78);
    _objc_release(puStack_80);
    _objc_release(puStack_88);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x25 + 7);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  lVar1 = param_3 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar9 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_3 + 0x30);
    _objc_retain(uVar8);
    func_0x00010c13e480(uVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(uVar8);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10566d6cc; end: 10566d79b;  */

void FUN_10566d6cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar3 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10566d79c;
    puStack_58 = &UNK_11088c360;
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    lStack_50 = lVar3;
    _objc_retain(uVar5);
    uStack_48 = uVar5;
    func_0x00010c13e480(uVar4,param_2,uVar1,uVar2,&puStack_70);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uStack_48);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 10566d79c; end: 10566d88b;  */

void FUN_10566d79c(long param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lStack_38;
  
  if ((param_2 != 0) && ((param_4 & 1) != 0)) {
    lStack_38 = 0;
    puVar2 = PTR_PTR_1126bc938;
    func_0x00010c084420(PTR_PTR_1126bc938,param_2,param_2,&lStack_38);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lStack_38;
    _objc_retain(lStack_38);
    if (lVar1 == 0) {
      func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28));
    }
    else {
      ppuVar3 = &PTR____CFConstantStringClassReference_110df4298;
      func_0x000108091430(&PTR____CFConstantStringClassReference_110df4298);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28));
      _objc_release(ppuVar3);
    }
    _objc_release(puVar2);
    _objc_release(lVar1);
    return;
  }
  ppuVar3 = &PTR____CFConstantStringClassReference_110df4278;
  func_0x000108091430(&PTR____CFConstantStringClassReference_110df4278);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar3);
  return;
}



/* Entry: 10566d88c; end: 10566dacb; -[SCMusicRecommendationCacheFetcher storeCTRecommendations:withCacheKey:] */

void FUN_10566d88c(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  long lStack_70;
  long lStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_2 + 0x18);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (((lVar2 != 0) && (func_0x00010bf26cc0(lVar2), param_4 != 0)) && (0.0 < param_1)) {
    puVar3 = PTR_PTR_1126b08b8;
    _objc_alloc();
    lVar4 = lVar2;
    func_0x00010bf267e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0295e0();
    _objc_release(lVar4);
    lStack_68 = 0;
    lVar5 = param_4;
    func_0x00010c271c20();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lStack_68;
    _objc_retain(lStack_68);
    lStack_70 = lVar1;
    puVar6 = PTR_PTR_1126bc938;
    func_0x00010c084420();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lStack_70;
    _objc_retain(lStack_70);
    _objc_release(lVar1);
    if ((puVar6 != (undefined *)0x0) && (lVar4 == 0)) {
      _objc_initWeak(auStack_78,param_2);
      uVar7 = *(undefined8 *)(param_2 + 8);
      _objc_copyWeak(auStack_80,auStack_78);
      _objc_retain(lVar5);
      _objc_retain(puVar3);
      _objc_retain(lVar2);
      _objc_retain(param_5);
      func_0x00010c0f7fc0(uVar7);
      _objc_release(param_5);
      _objc_release(lVar2);
      _objc_release(puVar3);
      _objc_release(lVar5);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
    }
    _objc_release(puVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10566dacc; end: 10566dbc7;  */

void FUN_10566dacc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf26cc0(*(undefined8 *)(param_1 + 0x30));
    func_0x00010bf65600(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10566dbc8;
    puStack_58 = &UNK_110848bd8;
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    lStack_50 = lVar3;
    _objc_retain(uVar6);
    uStack_48 = uVar6;
    func_0x00010c14a860(uVar4,param_2,uVar1,uVar2,puVar5,0,&puStack_70);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(uStack_48);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 10566dbc8; end: 10566dbcb;  */

void FUN_10566dbc8(void)

{
  return;
}



/* Entry: 10566dbcc; end: 10566dc07; -[SCMusicRecommendationCacheFetcher .cxx_destruct] */

void FUN_10566dbcc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10566dc08; end: 10566dcb3; -[SCMusicRecommendationCacheItem initWithRecommendations:requestId:] */

undefined1 *
FUN_10566dc08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9868;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
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



/* Entry: 10566dcb4; end: 10566dcbb; +[SCMusicRecommendationCacheItem supportsSecureCoding] */

undefined8 FUN_10566dcb4(void)

{
  return 1;
}



/* Entry: 10566dcbc; end: 10566dd4f; -[SCMusicRecommendationCacheItem encodeWithCoder:] */

void FUN_10566dcbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c135700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110de13f8);
  _objc_release(uVar1);
  func_0x00010c123260(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,param_1,&PTR____CFConstantStringClassReference_110df42b8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10566dd50; end: 10566de63; -[SCMusicRecommendationCacheItem initWithCoder:] */

undefined8 * FUN_10566dd50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e9868;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar2 = param_3;
    func_0x00010bf67020();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_opt_class();
    func_0x00010c226900(puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bf67040();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10566de64; end: 10566ded7; +[SCMusicRecommendationCacheItem itemFromData:error:] */

void FUN_10566de64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bc938;
  puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  func_0x00010c27f240(puVar2,param_2,puVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10566ded8; end: 10566deef; -[SCMusicRecommendationCacheItem toDataWithError:] */

void FUN_10566ded8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf09790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,
             PTR_s_archivedDataWithRootObject_requi_11259ff88,param_1,1,param_3);
  return;
}



/* Entry: 10566def0; end: 10566def7; -[SCMusicRecommendationCacheItem recommendations] */

undefined8 FUN_10566def0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


