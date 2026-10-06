/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1052f8dc4; end: 1052f8dc7; -[SCInternalDistributor startCheckForUpdatesForced:] */

void FUN_1052f8dc4(void)

{
  return;
}



/* Entry: 1052f8dc8; end: 1052f8dcb; -[SCInternalDistributor startCheckForUpdatesWithInEmergencyMode:] */

void FUN_1052f8dc8(void)

{
  return;
}



/* Entry: 1052f8dcc; end: 1052f8dcf; -[SCInternalDistributor stopCheckForUpdates] */

void FUN_1052f8dcc(void)

{
  return;
}



/* Entry: 1052f8dd0; end: 1052f8dd3; -[SCInternalDistributor showUpdatePrompt] */

void FUN_1052f8dd0(void)

{
  return;
}



/* Entry: 1052f8dd4; end: 1052f8e53; -[SCCriticalSectionTokenImpl initWithCriticalSectionImpl:reason:identicalToken:] */

undefined1 *
FUN_1052f8dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e76d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1052f8e54; end: 1052f8e87; -[SCCriticalSectionTokenImpl endCriticalSection] */

void FUN_1052f8e54(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf94560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052f8e88; end: 1052f8e8f; -[SCCriticalSectionTokenImpl .cxx_destruct] */

void FUN_1052f8e88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1052f8e90; end: 1052f8e97; -[SCCriticalSectionImpl startCriticalSection:] */

void FUN_1052f8e90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_startCriticalSection_prefersSync_112671420,param_3,0);
  return;
}



/* Entry: 1052f8e98; end: 1052f9057; -[SCCriticalSectionImpl startCriticalSection:prefersSynchronous:] */

void FUN_1052f8e98(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  _os_unfair_lock_lock(param_1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar4 + 1;
  puVar1 = PTR_PTR_1126b71f0;
  _objc_alloc();
  func_0x00010c006b60();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar5,param_2,puVar2);
  _objc_release(puVar2);
  puVar3 = PTR_PTR_1126b71f8;
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf529e0(uVar5);
  func_0x00010c03d1c0(puVar3,param_2,param_3,1,uVar5);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_4 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1052f9058;
    puStack_68 = &UNK_110841f80;
    lStack_60 = param_1;
    _objc_retain(puVar3);
    puStack_58 = puVar3;
    func_0x00010c0f7fc0(uVar5,param_2,&puStack_80);
    _objc_release(puStack_58);
  }
  else {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x30),param_2,puVar3);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = *(long *)(param_1 + 8);
  puStack_a8 = puVar2;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x1052f9064;
  puStack_90 = &UNK_110842e18;
  _objc_retain(puVar1);
  puStack_88 = puVar1;
  func_0x00010c0f7fe0((double)lVar4,uVar5,param_2,&puStack_a8);
  _objc_release(puStack_88);
  _objc_release(puVar3);
  _os_unfair_lock_unlock(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1052f9058; end: 1052f906b;  */

void FUN_1052f9058(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),PTR_s_next__112614028,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1052f906c; end: 1052f91ab; -[SCCriticalSectionImpl endCriticalSectionWithReason:identicalToken:] */

void FUN_1052f906c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  _os_unfair_lock_lock(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360(uVar4,param_2,puVar2);
  _objc_release(puVar2);
  lVar3 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  if (lVar3 < lVar1) {
    puVar2 = PTR_PTR_1126b71f8;
    _objc_alloc();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf529e0(uVar4);
    func_0x00010c03d1c0(puVar2,param_2,param_3,0,uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1052f91ac;
    puStack_58 = &UNK_110841f80;
    lStack_50 = param_1;
    _objc_retain();
    puStack_48 = puVar2;
    func_0x00010c0f7fc0(uVar4,param_2,&puStack_70);
    _objc_release(puStack_48);
    _objc_release(puVar2);
  }
  _os_unfair_lock_unlock(param_1 + 0x28);
  return;
}



/* Entry: 1052f91ac; end: 1052f91b7;  */

void FUN_1052f91ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),PTR_s_next__112614028,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1052f91b8; end: 1052f91f3; -[SCCriticalSectionImpl .cxx_destruct] */

void FUN_1052f91b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1052f91f4; end: 1052f9317; -[SCZstdLocalizedStringLookup localizedStringForKey:table:fallbackValue:] */

void FUN_1052f91f4(long param_1,undefined8 param_2,long param_3,undefined **param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == 0) {
    _objc_retain(param_3);
    func_0x00010c078d80(puVar1,param_2,param_4);
    if (((ulong)puVar1 & 1) == 0) {
      _objc_release(param_4);
      param_4 = &PTR____CFConstantStringClassReference_110dd1318;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    func_0x00010c0e00e0(lVar3,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(lVar3);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,lVar2);
    lVar3 = lVar2;
    if ((int)puVar1 == 0) {
      lVar3 = param_5;
    }
    _objc_retain(lVar3);
  }
  else {
    _objc_retain(param_3);
    func_0x00010c09e800(lVar3,param_2,param_3,param_5,param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
  }
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1052f9318; end: 1052f9347; -[SCZstdLocalizedStringLookup .cxx_destruct] */

void FUN_1052f9318(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052f9348; end: 1052f93bf;  */

void FUN_1052f9348(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110876bf0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1052f93c0; end: 1052f9437;  */

void FUN_1052f93c0(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110876c40,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1052f9438; end: 1052f9623;  */

void FUN_1052f9438(long param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 **ppuVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  long *plVar11;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 *puStack_1d8;
  char *pcStack_1d0;
  char *pcStack_1c8;
  undefined1 ***pppuStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 auStack_188 [2];
  char cStack_171;
  undefined8 auStack_170 [2];
  char cStack_159;
  long lStack_158;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  char acStack_110 [24];
  undefined8 *puStack_f8;
  undefined8 **appuStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  char *pcStack_d0;
  undefined8 *puStack_c8;
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
  pcVar6 = param_2;
  pcVar1 = param_3;
  pcVar9 = param_4;
  _objc_retain(param_3);
  pcVar5 = (char *)0x0;
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if ((int)param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
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
    pcVar6 = "";
    param_2 = acStack_98;
    pcVar1 = acStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110876c90,pcVar1,param_4);
    pcStack_80 = param_2;
    func_0x00010007e5dc(&pcStack_80);
    lVar10 = 0;
    pcVar5 = (char *)auStack_78;
    pcVar9 = param_4;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcVar7 = acStack_110;
  pcStack_a8 = FUN_1052f9624;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = (undefined8 **)0x0;
  pcVar8 = pcVar1;
  pcStack_d0 = param_2;
  puStack_c8 = (undefined8 *)pcVar5;
  pcStack_c0 = pcVar2;
  pcStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  if (pcVar3 != (char *)0x0) {
    plVar11 = *(long **)(pcVar3 + 8);
    pcVar5 = "true";
    if ((int)pcVar6 == 0) {
      pcVar5 = "false";
    }
    func_0x00010002b838(appuStack_f0,pcVar5);
    acStack_110[0] = '\0';
    acStack_110[1] = '\0';
    acStack_110[2] = '\0';
    acStack_110[3] = '\0';
    acStack_110[4] = '\0';
    acStack_110[5] = '\0';
    acStack_110[6] = '\0';
    acStack_110[7] = '\0';
    acStack_110[8] = '\0';
    acStack_110[9] = '\0';
    acStack_110[10] = '\0';
    acStack_110[0xb] = '\0';
    acStack_110[0xc] = '\0';
    acStack_110[0xd] = '\0';
    acStack_110[0xe] = '\0';
    acStack_110[0xf] = '\0';
    acStack_110[0x10] = '\0';
    acStack_110[0x11] = '\0';
    acStack_110[0x12] = '\0';
    acStack_110[0x13] = '\0';
    acStack_110[0x14] = '\0';
    acStack_110[0x15] = '\0';
    acStack_110[0x16] = '\0';
    acStack_110[0x17] = '\0';
    func_0x00010007e1e8(acStack_110,appuStack_f0,&lStack_d8,1);
    pcVar6 = "";
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110876ce0,acStack_110,pcVar1);
    ppuVar4 = &puStack_f8;
    puStack_f8 = (undefined8 *)acStack_110;
    func_0x00010007e5dc();
    pcVar8 = pcVar7;
    pcVar9 = pcVar1;
    pcVar5 = acStack_110;
    if (cStack_d9 < '\0') {
      ppuVar4 = appuStack_f0[0];
      __ZdlPv();
      pcVar8 = pcVar7;
      pcVar9 = pcVar1;
      pcVar5 = acStack_110;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  puStack_f8 = (undefined8 *)pcVar5;
  func_0x00010007e5dc(&puStack_f8);
  if (cStack_d9 < '\0') {
    __ZdlPv(appuStack_f0[0]);
  }
  __Unwind_Resume();
  pcStack_118 = FUN_1052f973c;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar6;
  ppuStack_120 = &puStack_b0;
  _objc_retain(pcVar6);
  _objc_retain(pcVar8);
  if (ppuVar4 != (undefined8 **)0x0) {
    plVar11 = ppuVar4[1];
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
    func_0x00010002b838(auStack_188,pcVar1);
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
    func_0x00010002b838(auStack_170,pcVar1);
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    func_0x00010007e1e8(&uStack_1a8,auStack_188,&lStack_158,2);
    pcVar1 = "";
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110876d30,&uStack_1a8,pcVar9);
    puStack_190 = &uStack_1a8;
    func_0x00010007e5dc(&puStack_190);
    lVar10 = 0;
    do {
      if ((&cStack_159)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_170 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar5 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_171 < '\0') {
    __ZdlPv(auStack_188[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar6);
  __Unwind_Resume();
  puStack_1d8 = (undefined1 *)&uStack_1f0;
  pcStack_1b8 = FUN_1052f996c;
  if (pcVar5 != (char *)0x0) {
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    pcStack_1d0 = pcVar8;
    pcStack_1c8 = pcVar6;
    pppuStack_1c0 = &ppuStack_120;
    (**(code **)(**(long **)(pcVar5 + 8) + 0x18))
              (*(long **)(pcVar5 + 8),&UNK_110876d80,&uStack_1f0,pcVar1);
    func_0x00010007e5dc(&puStack_1d8);
  }
  return;
}



/* Entry: 1052f9624; end: 1052f973b;  */

void FUN_1052f9624(long param_1,char *param_2,char *param_3,char *param_4)

{
  undefined1 **ppuVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  long *plVar5;
  char *unaff_x21;
  long lVar6;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 *puStack_138;
  char *pcStack_130;
  char *pcStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 auStack_e8 [2];
  char cStack_d1;
  undefined8 auStack_d0 [2];
  char cStack_b9;
  long lStack_b8;
  undefined1 *puStack_80;
  code *pcStack_78;
  char acStack_70 [24];
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  pcVar2 = acStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined1 **)0x0;
  pcVar4 = param_3;
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    pcVar4 = "true";
    if ((int)param_2 == 0) {
      pcVar4 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar4);
    acStack_70[0] = '\0';
    acStack_70[1] = '\0';
    acStack_70[2] = '\0';
    acStack_70[3] = '\0';
    acStack_70[4] = '\0';
    acStack_70[5] = '\0';
    acStack_70[6] = '\0';
    acStack_70[7] = '\0';
    acStack_70[8] = '\0';
    acStack_70[9] = '\0';
    acStack_70[10] = '\0';
    acStack_70[0xb] = '\0';
    acStack_70[0xc] = '\0';
    acStack_70[0xd] = '\0';
    acStack_70[0xe] = '\0';
    acStack_70[0xf] = '\0';
    acStack_70[0x10] = '\0';
    acStack_70[0x11] = '\0';
    acStack_70[0x12] = '\0';
    acStack_70[0x13] = '\0';
    acStack_70[0x14] = '\0';
    acStack_70[0x15] = '\0';
    acStack_70[0x16] = '\0';
    acStack_70[0x17] = '\0';
    func_0x00010007e1e8(acStack_70,appuStack_50,&lStack_38,1);
    param_2 = "";
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110876ce0,acStack_70,param_3);
    ppuVar1 = &puStack_58;
    puStack_58 = acStack_70;
    func_0x00010007e5dc();
    pcVar4 = pcVar2;
    param_4 = param_3;
    unaff_x21 = acStack_70;
    if (cStack_39 < '\0') {
      ppuVar1 = appuStack_50[0];
      __ZdlPv();
      pcVar4 = pcVar2;
      param_4 = param_3;
      unaff_x21 = acStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  pcStack_78 = FUN_1052f973c;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_2;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  _objc_retain(pcVar4);
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar5 = (long *)ppuVar1[1];
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_e8,pcVar2);
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
    func_0x00010002b838(auStack_d0,pcVar2);
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    func_0x00010007e1e8(&uStack_108,auStack_e8,&lStack_b8,2);
    pcVar2 = "";
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110876d30,&uStack_108,param_4);
    puStack_f0 = &uStack_108;
    func_0x00010007e5dc(&puStack_f0);
    lVar6 = 0;
    do {
      if ((&cStack_b9)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_d0 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  _objc_release(pcVar4);
  pcVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  if (cStack_d1 < '\0') {
    __ZdlPv(auStack_e8[0]);
  }
  _objc_release(pcVar4);
  _objc_release(param_2);
  __Unwind_Resume();
  puStack_138 = (undefined1 *)&uStack_150;
  pcStack_118 = FUN_1052f996c;
  if (pcVar3 != (char *)0x0) {
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    pcStack_130 = pcVar4;
    pcStack_128 = param_2;
    ppuStack_120 = &puStack_80;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_110876d80,&uStack_150,pcVar2);
    func_0x00010007e5dc(&puStack_138);
  }
  return;
}



/* Entry: 1052f973c; end: 1052f996b;  */

void FUN_1052f973c(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
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
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110876d30,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar3 = 0;
    do {
      if ((&cStack_49)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puStack_c8 = (undefined1 *)&uStack_e0;
  pcStack_a8 = FUN_1052f996c;
  if (pcVar2 != (char *)0x0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    pcStack_c0 = param_3;
    pcStack_b8 = param_2;
    puStack_b0 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar2 + 8) + 0x18))
              (*(long **)(pcVar2 + 8),&UNK_110876d80,&uStack_e0,pcVar1);
    func_0x00010007e5dc(&puStack_c8);
  }
  return;
}



/* Entry: 1052f996c; end: 1052f99e3;  */

void FUN_1052f996c(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110876d80,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1052f99e4; end: 1052f9a5b;  */

void FUN_1052f99e4(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110876dd0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1052f9a5c; end: 1052f9adf;  */

void FUN_1052f9a5c(double param_1,long param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_2 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_2 + 8) + 0x18))
              (*(long **)(param_2 + 8),&UNK_110876e20,&uStack_40,(long)(param_1 * 1000.0));
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1052f9ae0; end: 1052f9b57;  */

void FUN_1052f9ae0(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110876e70,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1052f9b58; end: 1052f9bcf;  */

void FUN_1052f9b58(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110876ec0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1052f9bd0; end: 1052f9c53;  */

void FUN_1052f9bd0(double param_1,long param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_2 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_2 + 8) + 0x18))
              (*(long **)(param_2 + 8),&UNK_110876f10,&uStack_40,(long)(param_1 * 1000.0));
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1052f9c54; end: 1052f9ccb;  */

void FUN_1052f9c54(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110876f60,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1052f9ccc; end: 1052f9d4f;  */

void FUN_1052f9ccc(double param_1,long param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_2 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_2 + 8) + 0x18))
              (*(long **)(param_2 + 8),&UNK_110876fb0,&uStack_40,(long)(param_1 * 1000.0));
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1052f9d50; end: 1052f9ed3;  */

void FUN_1052f9d50(long param_1,char *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 **ppuVar1;
  undefined8 **ppuVar2;
  char **ppcVar3;
  char **ppcVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  long *plVar8;
  undefined8 *unaff_x21;
  char *pcVar9;
  char *unaff_x22;
  char *unaff_x23;
  undefined1 *unaff_x24;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 *puStack_1b8;
  char *pcStack_1b0;
  char *pcStack_1a8;
  undefined1 ***pppuStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 *puStack_178;
  undefined8 auStack_170 [2];
  char cStack_159;
  long lStack_158;
  undefined1 *puStack_150;
  char *pcStack_148;
  char *pcStack_140;
  char *pcStack_138;
  long *plStack_130;
  char **ppcStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  char acStack_110 [24];
  char *pcStack_f8;
  char **appcStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  long lStack_c0;
  undefined8 **ppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  long alStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined8 **)0x0;
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    unaff_x22 = "false";
    unaff_x23 = "true";
    pcVar5 = unaff_x23;
    if ((int)param_2 == 0) {
      pcVar5 = unaff_x22;
    }
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar5);
    pcVar5 = unaff_x23;
    if ((int)param_3 == 0) {
      pcVar5 = unaff_x22;
    }
    func_0x00010002b838(alStack_60,pcVar5);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    param_2 = "";
    unaff_x21 = &uStack_98;
    param_3 = &uStack_98;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110877000,param_3,param_4);
    ppuVar1 = &puStack_80;
    puStack_80 = unaff_x21;
    func_0x00010007e5dc();
    lVar7 = 0;
    do {
      if ((&cStack_49)[lVar7] < '\0') {
        ppuVar1 = *(undefined8 ***)((long)alStack_60 + lVar7);
        __ZdlPv();
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puStack_80 = unaff_x21;
  func_0x00010007e5dc(&puStack_80);
  lVar7 = -0x30;
  pcVar5 = &cStack_49;
  do {
    pcVar9 = pcVar5 + -0x18;
    if (*pcVar5 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar5 + -0x17));
    }
    lVar7 = lVar7 + 0x18;
    pcVar5 = pcVar9;
  } while (lVar7 != 0);
  ppuVar2 = ppuVar1;
  __Unwind_Resume();
  pcVar5 = acStack_110;
  pcStack_a8 = FUN_1052f9ed4;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = (long *)0x0;
  ppcVar3 = (char **)0x0;
  pcStack_d0 = unaff_x22;
  pcStack_c8 = pcVar9;
  lStack_c0 = lVar7;
  ppuStack_b8 = ppuVar1;
  puStack_b0 = &stack0xfffffffffffffff0;
  if (ppuVar2 != (undefined8 **)0x0) {
    plVar8 = ppuVar2[1];
    pcVar9 = "true";
    if ((int)param_2 == 0) {
      pcVar9 = "false";
    }
    func_0x00010002b838(appcStack_f0,pcVar9);
    acStack_110[0] = '\0';
    acStack_110[1] = '\0';
    acStack_110[2] = '\0';
    acStack_110[3] = '\0';
    acStack_110[4] = '\0';
    acStack_110[5] = '\0';
    acStack_110[6] = '\0';
    acStack_110[7] = '\0';
    acStack_110[8] = '\0';
    acStack_110[9] = '\0';
    acStack_110[10] = '\0';
    acStack_110[0xb] = '\0';
    acStack_110[0xc] = '\0';
    acStack_110[0xd] = '\0';
    acStack_110[0xe] = '\0';
    acStack_110[0xf] = '\0';
    acStack_110[0x10] = '\0';
    acStack_110[0x11] = '\0';
    acStack_110[0x12] = '\0';
    acStack_110[0x13] = '\0';
    acStack_110[0x14] = '\0';
    acStack_110[0x15] = '\0';
    acStack_110[0x16] = '\0';
    acStack_110[0x17] = '\0';
    func_0x00010007e1e8(acStack_110,appcStack_f0,&lStack_d8,1);
    param_2 = "\x02";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110877050,acStack_110,param_3);
    ppcVar3 = &pcStack_f8;
    pcStack_f8 = acStack_110;
    func_0x00010007e5dc();
    param_3 = (undefined8 *)pcVar5;
    pcVar9 = acStack_110;
    if (cStack_d9 < '\0') {
      ppcVar3 = appcStack_f0[0];
      __ZdlPv();
      param_3 = (undefined8 *)pcVar5;
      pcVar9 = acStack_110;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_f8 = pcVar9;
  func_0x00010007e5dc(&pcStack_f8);
  if (cStack_d9 < '\0') {
    __ZdlPv(appcStack_f0[0]);
  }
  ppcVar4 = ppcVar3;
  __Unwind_Resume();
  pcStack_118 = FUN_1052f9fec;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = param_2;
  puStack_150 = unaff_x24;
  pcStack_148 = unaff_x23;
  pcStack_140 = unaff_x22;
  pcStack_138 = pcVar9;
  plStack_130 = plVar8;
  ppcStack_128 = ppcVar3;
  ppuStack_120 = &puStack_b0;
  _objc_retain(param_2);
  if (ppcVar4 != (char **)0x0) {
    plVar8 = (long *)ppcVar4[1];
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_170,pcVar5);
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    func_0x00010007e1e8(&uStack_190,auStack_170,&lStack_158,1);
    pcVar5 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108770a0,&uStack_190,param_3);
    puStack_178 = (undefined1 *)&uStack_190;
    func_0x00010007e5dc(&puStack_178);
    if (cStack_159 < '\0') {
      __ZdlPv(auStack_170[0]);
    }
  }
  pcVar9 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar6 = pcVar9;
  __Unwind_Resume();
  puStack_1b8 = (undefined1 *)&uStack_1d0;
  pcStack_198 = FUN_1052fa160;
  if (pcVar6 != (char *)0x0) {
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    pcStack_1b0 = pcVar9;
    pcStack_1a8 = param_2;
    pppuStack_1a0 = &ppuStack_120;
    (**(code **)(**(long **)(pcVar6 + 8) + 0x18))
              (*(long **)(pcVar6 + 8),&UNK_1108770f0,&uStack_1d0,pcVar5);
    func_0x00010007e5dc(&puStack_1b8);
  }
  return;
}



/* Entry: 1052f9ed4; end: 1052f9feb;  */

void FUN_1052f9ed4(long param_1,char *param_2,undefined1 *param_3)

{
  undefined1 **ppuVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *unaff_x21;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 *puStack_118;
  char *pcStack_110;
  char *pcStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_d8;
  undefined8 auStack_d0 [2];
  char cStack_b9;
  long lStack_b8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  puVar5 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined1 **)0x0;
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    pcVar2 = "true";
    if ((int)param_2 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar2);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    param_2 = "\x02";
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110877050,&uStack_70,param_3);
    ppuVar1 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    param_3 = (undefined1 *)puVar5;
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar1 = appuStack_50[0];
      __ZdlPv();
      param_3 = (undefined1 *)puVar5;
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  pcStack_78 = FUN_1052f9fec;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_2;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar6 = (long *)ppuVar1[1];
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_d0,pcVar2);
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    func_0x00010007e1e8(&uStack_f0,auStack_d0,&lStack_b8,1);
    pcVar2 = "";
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1108770a0,&uStack_f0,param_3);
    puStack_d8 = (undefined1 *)&uStack_f0;
    func_0x00010007e5dc(&puStack_d8);
    if (cStack_b9 < '\0') {
      __ZdlPv(auStack_d0[0]);
    }
  }
  pcVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  puStack_118 = (undefined1 *)&uStack_130;
  pcStack_f8 = FUN_1052fa160;
  if (pcVar4 != (char *)0x0) {
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    pcStack_110 = pcVar3;
    pcStack_108 = param_2;
    ppuStack_100 = &puStack_80;
    (**(code **)(**(long **)(pcVar4 + 8) + 0x18))
              (*(long **)(pcVar4 + 8),&UNK_1108770f0,&uStack_130,pcVar2);
    func_0x00010007e5dc(&puStack_118);
  }
  return;
}



/* Entry: 1052f9fec; end: 1052fa15f;  */

void FUN_1052f9fec(long param_1,char *param_2,undefined8 param_3)

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
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108770a0,&uStack_80,param_3);
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
  pcStack_88 = FUN_1052fa160;
  if (pcVar3 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_1108770f0,&uStack_c0,pcVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 1052fa160; end: 1052fa1d7;  */

void FUN_1052fa160(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108770f0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1052fa1d8; end: 1052fa24f;  */

void FUN_1052fa1d8(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110877140,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1052fa250; end: 1052fa697;  */

void FUN_1052fa250(undefined8 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  char *pcVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  byte abStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001136bb3c0 & 1) != 0) {
    uVar3 = 1;
    goto LAB_1052fa5f0;
  }
  puVar5 = param_1;
  FUN_1052fb91c(param_1,"meta.bin",1,0x58,0x1130ce494);
  puVar6 = param_1;
  puRam00000001136bb3f0 = puVar5;
  FUN_1052fb91c(param_1,"nodes.bin",16000000,0x18,0x1130ce498);
  puVar5 = param_1;
  puRam00000001136bb428 = puVar6;
  FUN_1052fb91c(param_1,"frames.bin",16000000,8,0x1130ce49c);
  puRam00000001136bb438 = puVar5;
  FUN_1052fb91c(param_1,"stacks.bin",1000000,0x10,0x1130ce4a0);
  uRam00000001130ce4a4 = 0xffffffff;
  lVar4 = 0;
  puRam00000001136bb430 = param_1;
  _mmap(0,0x800000,3,0x1002,0xffffffff,0);
  lRam00000001136bb440 = 0;
  if (lVar4 != -1) {
    lRam00000001136bb440 = lVar4;
  }
  uRam00000001130ce4a8 = 0xffffffff;
  lVar4 = 0;
  _mmap(0,0x4000000,3,0x1002,0xffffffff,0);
  lRam00000001136bb448 = 0;
  if (lVar4 != -1) {
    lRam00000001136bb448 = lVar4;
  }
  if ((((puRam00000001136bb3f0 == (undefined8 *)0x0) || (puRam00000001136bb428 == (undefined8 *)0x0)
       ) || (puRam00000001136bb438 == (undefined8 *)0x0)) ||
     (((puRam00000001136bb430 == (undefined8 *)0x0 || (lRam00000001136bb440 == 0)) ||
      (lRam00000001136bb448 == 0)))) {
    puVar7 = PTR___os_log_default_11034be80;
    _os_log_type_enabled(PTR___os_log_default_11034be80,0x10);
    if ((int)puVar7 != 0) {
      pcVar8 = "[SCMemoryGraphReporterCore] Failed to reserve tracking arenas; not starting.";
LAB_1052fa638:
      abStack_80[0] = 0;
      abStack_80[1] = 0;
      __os_log_error_impl(0x100000000,PTR___os_log_default_11034be80,0x10,pcVar8,abStack_80,2);
    }
  }
  else {
    _memset(lRam00000001136bb440,0xff,0x800000);
    _memset(lRam00000001136bb448,0xff,0x4000000);
    puVar5 = puRam00000001136bb3f0;
    puRam00000001136bb3f0[1] = 0xf424000f42400;
    *puVar5 = 0x653434d47;
    puVar5[2] = 0x20000000f42400;
    *(undefined4 *)(puVar5 + 3) = 0x1000000;
    uVar1 = uRam00000001130ce480;
    *(undefined4 *)(puVar5 + 10) = uRam00000001130ce484;
    uVar11 = (uint)bRam00000001136bb3c4;
    *(undefined4 *)(puVar5 + 9) = uVar1;
    *(uint *)((long)puVar5 + 0x4c) = uVar11;
    *(undefined8 *)((long)puVar5 + 0x24) = 0;
    *(undefined8 *)((long)puVar5 + 0x1c) = 0xffffffff00000000;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[6] = 0;
    uVar11 = uRam00000001130ce48c;
    if (uRam00000001130ce48c < 2) {
      uVar11 = 1;
    }
    if (0x3f < uVar11) {
      uVar11 = 0x40;
    }
    iRam00000001130ce4ac = 0x19;
    uVar2 = 1;
    do {
      uRam00000001130ce490 = uVar2;
      iRam00000001130ce4ac = iRam00000001130ce4ac + -1;
      uVar2 = uRam00000001130ce490 << 1;
    } while (uRam00000001130ce490 << 1 <= uVar11);
    uVar9 = (ulong)uRam00000001130ce490;
    puVar5 = (undefined8 *)0x1136ba3c8;
    do {
      puVar5[-1] = 0xffffffff00000000;
      puVar5[1] = 0;
      *puVar5 = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[4] = 0;
      puVar5 = puVar5 + 8;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    uRam00000001136bb418 = 0;
    uRam00000001136bb420 = 0;
    uRam00000001136bb3f8 = 0;
    uRam00000001136bb400 = 0;
    uRam00000001136bb408 = 0;
    uRam00000001136bb410 = 0;
    lVar4 = 0;
    do {
      abStack_80[lVar4] = ~(&UNK_10dd94478)[lVar4];
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0xe);
    puVar5 = (undefined8 *)0xfffffffffffffffe;
    _dlsym(0xfffffffffffffffe,abStack_80);
    lVar4 = 0;
    do {
      abStack_80[lVar4] = ~(&UNK_10dd94486)[lVar4];
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x11);
    puVar6 = (undefined8 *)0xfffffffffffffffe;
    puRam00000001136bb3d0 = puVar5;
    _dlsym(0xfffffffffffffffe,abStack_80);
    puVar5 = puRam00000001136bb3d0;
    puRam00000001136bb3d8 = puVar6;
    if (puRam00000001136bb3d0 != (undefined8 *)0x0) {
      if (puVar6 == (undefined8 *)0x0) {
        puVar7 = PTR___os_log_default_11034be80;
        _os_log_type_enabled(PTR___os_log_default_11034be80,0x10);
        if ((int)puVar7 == 0) {
          puVar10 = (undefined8 *)0x1136bb3e0;
          goto LAB_1052fa5cc;
        }
        abStack_80[0] = 0;
        abStack_80[1] = 0;
        __os_log_error_impl(0x100000000,PTR___os_log_default_11034be80,0x10,
                            "[SCMemoryGraphReporterCore] VM hook slot unavailable; VM events not tracked."
                            ,abStack_80,2);
        puVar5 = puRam00000001136bb3d8;
        uRam00000001136bb3e0 = *puRam00000001136bb3d0;
        *puRam00000001136bb3d0 = FUN_1052fa728;
        if (puVar5 != (undefined8 *)0x0) {
          puVar10 = (undefined8 *)0x1136bb3e8;
          goto LAB_1052fa5cc;
        }
      }
      else {
        uRam00000001136bb3e0 = *puRam00000001136bb3d0;
        puVar10 = (undefined8 *)0x1136bb3e8;
        *puRam00000001136bb3d0 = FUN_1052fa728;
        puVar5 = puVar6;
LAB_1052fa5cc:
        *puVar10 = *puVar5;
        *puVar5 = FUN_1052fa728;
      }
      uVar3 = 1;
      uRam00000001136bb3c1 = 1;
      bRam00000001136bb3c0 = 1;
      goto LAB_1052fa5f0;
    }
    puVar7 = PTR___os_log_default_11034be80;
    _os_log_type_enabled(PTR___os_log_default_11034be80,0x10);
    if ((int)puVar7 != 0) {
      pcVar8 = "[SCMemoryGraphReporterCore] primary hook slot unavailable; not starting.";
      goto LAB_1052fa638;
    }
  }
  FUN_1052fa698();
  uVar3 = 0;
LAB_1052fa5f0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail(uVar3);
  FUN_1052fba84(0x1136bb428,0x1130ce498,384000000);
  FUN_1052fba84(0x1136bb438,0x1130ce49c,128000000);
  FUN_1052fba84(0x1136bb430,0x1130ce4a0,16000000);
  FUN_1052fba84(0x1136bb440,0x1130ce4a4,0x800000);
  FUN_1052fba84(0x1136bb448,0x1130ce4a8,0x4000000);
  if (puRam00000001136bb3f0 != (undefined8 *)0x0) {
    _munmap(puRam00000001136bb3f0,0x58);
    puRam00000001136bb3f0 = (undefined8 *)0x0;
  }
  if (-1 < iRam00000001130ce494) {
    _close();
    iRam00000001130ce494 = -1;
  }
  return;
}



/* Entry: 1052fa698; end: 1052fa727;  */

void FUN_1052fa698(void)

{
  FUN_1052fba84(0x1136bb428,0x1130ce498,384000000);
  FUN_1052fba84(0x1136bb438,0x1130ce49c,128000000);
  FUN_1052fba84(0x1136bb430,0x1130ce4a0,16000000);
  FUN_1052fba84(0x1136bb440,0x1130ce4a4,0x800000);
  FUN_1052fba84(0x1136bb448,0x1130ce4a8,0x4000000);
  if (lRam00000001136bb3f0 != 0) {
    _munmap(lRam00000001136bb3f0,0x58);
    lRam00000001136bb3f0 = 0;
  }
  if (-1 < iRam00000001130ce494) {
    _close();
    iRam00000001130ce494 = -1;
  }
  return;
}



/* Entry: 1052fa728; end: 1052faf33;  */

void FUN_1052fa728(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  bool bVar15;
  uint uVar16;
  long lVar17;
  int iVar18;
  undefined4 *puVar19;
  undefined8 *puVar20;
  ulong *puVar21;
  undefined8 *puVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  uint uStack_274;
  ulong auStack_270 [64];
  long lStack_70;
  
  iVar10 = iRam00000001130ce488;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((((bRam00000001136bb3c3 & 1) != 0) || (cRam00000001136bb3c1 != '\x01')) ||
     ((bRam00000001136bb3c2 & 1) != 0)) goto LAB_1052faef8;
  uVar26 = 0;
  uVar7 = param_1 & 0x30;
  if ((param_1 & 8) != 0) {
    param_2 = param_3;
  }
  uVar13 = param_3;
  if ((param_1 & 0x20) == 0) {
    uVar13 = param_2;
  }
  uVar24 = 0;
  if ((param_1 & 0x24) != 0) {
    uVar24 = uVar13;
  }
  uVar13 = 0;
  if ((param_1 & 0x12) == 0) {
    uStack_274 = 0;
LAB_1052fa88c:
    param_5 = uVar13;
    if (uVar24 == 0) goto LAB_1052faef8;
    uVar25 = 0;
    bVar9 = false;
  }
  else {
    uStack_274 = 0;
    if (param_5 == 0) goto LAB_1052fa88c;
    uVar26 = param_3;
    if ((param_1 & 4) != 0) {
      uVar26 = param_4;
    }
    uStack_274 = -((uint)param_1 >> 4 & 1) & (uint)param_1 >> 0x18;
    if ((param_1 & 0x10) != 0) {
      uVar26 = param_3;
    }
    uVar25 = (uint)uVar26;
    uVar13 = param_5;
    if (uVar25 == 0) goto LAB_1052fa88c;
    if (((param_1 & 0x30) == 0) && (uVar25 < 0x100)) {
      if (uVar25 < 0x40) {
        if (1 < uRam00000001130ce480) {
          lVar17 = -0x2917014799a6026d;
          uVar25 = uRam00000001130ce480;
LAB_1052fa83c:
          uVar12 = 0;
          uVar16 = (uint)(lVar17 * (param_5 >> 4) >> 0x20);
          if (uVar25 != 0) {
            uVar12 = uVar16 / uVar25;
          }
          if (uVar16 != uVar12 * uVar25) {
            do {
              cVar5 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(0x1136bb418,0x10);
              if (bVar9) {
                cVar5 = ExclusiveMonitorsStatus();
                lRam00000001136bb418 = lRam00000001136bb418 + 1;
              }
            } while (cVar5 != '\0');
            do {
              cVar5 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(0x1136bb420,0x10);
              if (bVar9) {
                cVar5 = ExclusiveMonitorsStatus();
                lRam00000001136bb420 = lRam00000001136bb420 + (uVar26 & 0xff);
              }
            } while (cVar5 != '\0');
            goto LAB_1052fa88c;
          }
        }
      }
      else if (1 < uRam00000001130ce484) {
        lVar17 = -0x3d4d51c2d82b14b1;
        uVar25 = uRam00000001130ce484;
        goto LAB_1052fa83c;
      }
    }
    _pthread_self();
    uVar13 = param_1;
    _pthread_get_stackaddr_np();
    _pthread_get_stacksize_np();
    uVar12 = 0;
    uVar25 = 0;
    puVar3 = (undefined8 *)0x0;
    if (param_1 <= uVar13) {
      puVar3 = (undefined8 *)(uVar13 - param_1);
    }
    puVar20 = (undefined8 *)&stack0xfffffffffffffff0;
    while (((bVar9 = true, (int)uVar25 < iVar10 && ((int)uVar12 < iVar10 + 2)) &&
           ((puVar3 <= puVar20 &&
            ((puVar20 <= (undefined8 *)(uVar13 - 0x10) && (((ulong)puVar20 & 7) == 0))))))) {
      if ((puVar20[1] != 0) && (1 < uVar12)) {
        auStack_270[(int)uVar25] = puVar20[1];
        uVar25 = uVar25 + 1;
      }
      puVar22 = (undefined8 *)*puVar20;
      if (((puVar22 <= puVar20) || ((undefined8 *)(uVar13 - 0x10) < puVar22)) ||
         (uVar12 = uVar12 + 1, puVar20 = puVar22, ((ulong)puVar22 & 7) != 0)) break;
    }
  }
  iVar10 = (int)param_1;
  if (cRam00000001136bb3c4 == '\x01') {
    _pthread_main_np();
    bVar15 = false;
    if (0 < (int)uVar25) {
      bVar15 = bVar9;
    }
    bVar6 = iVar10 != 0;
    if (bVar15) {
      if (iVar10 == 0) goto LAB_1052fa9ac;
      iVar10 = 0x136bb3cc;
      _os_unfair_lock_trylock();
      bVar15 = true;
      bVar6 = true;
      if (iVar10 != 0) goto LAB_1052fa9bc;
    }
LAB_1052faaec:
    bVar15 = bVar6;
    uVar12 = 0xffffffff;
  }
  else {
    bVar6 = false;
    if (0 < (int)uVar25) {
      bVar6 = bVar9;
    }
    if (!bVar6) {
      bVar6 = false;
      goto LAB_1052faaec;
    }
LAB_1052fa9ac:
    _os_unfair_lock_lock(0x1136bb3cc);
    bVar15 = false;
LAB_1052fa9bc:
    lVar8 = lRam00000001136bb440;
    lVar14 = lRam00000001136bb438;
    lVar17 = lRam00000001136bb430;
    if ((cRam00000001136bb3c1 == '\x01') && ((bRam00000001136bb3c2 & 1) == 0)) {
      uVar13 = 0;
      uVar27 = 0x14650fb0739d0383;
      uVar23 = (ulong)uVar25;
      do {
        uVar27 = (auStack_270[uVar13] ^ uVar27) * 0x100000001b3;
        uVar13 = uVar13 + 1;
      } while (uVar23 != uVar13);
      uVar13 = uVar27 & 0x1fffff;
      uVar12 = *(uint *)(lRam00000001136bb440 + uVar13 * 4);
      if (uVar12 != 0xffffffff) {
        uVar13 = uVar27;
        do {
          puVar2 = (uint *)(lVar17 + (ulong)uVar12 * 0x10);
          if ((*(ulong *)(puVar2 + 2) == uVar27) && ((uint)(ushort)puVar2[1] == (uVar25 & 0xffff)))
          {
            lVar11 = lVar14 + (ulong)*puVar2 * 8;
            _memcmp(lVar11,auStack_270,uVar23 << 3);
            if ((int)lVar11 == 0) goto LAB_1052faacc;
          }
          uVar13 = (ulong)((int)uVar13 + 1U & 0x1fffff);
          uVar12 = *(uint *)(lVar8 + uVar13 * 4);
        } while (uVar12 != 0xffffffff);
      }
      uVar12 = *(uint *)(lRam00000001136bb3f0 + 0x28);
      if (999999 < uVar12) goto LAB_1052faac8;
      uVar16 = *(uint *)(lRam00000001136bb3f0 + 0x24);
      if (16000000 < uVar16 + uVar25) goto LAB_1052faac8;
      *(uint *)(lRam00000001136bb3f0 + 0x28) = uVar12 + 1;
      _memcpy(lRam00000001136bb438 + (ulong)uVar16 * 8,auStack_270,uVar23 << 3);
      *(uint *)(lRam00000001136bb3f0 + 0x24) = *(int *)(lRam00000001136bb3f0 + 0x24) + uVar25;
      puVar2 = (uint *)(lRam00000001136bb430 + (ulong)uVar12 * 0x10);
      *puVar2 = uVar16;
      *(short *)(puVar2 + 1) = (short)uVar25;
      *(undefined2 *)((long)puVar2 + 6) = 0;
      *(ulong *)(puVar2 + 2) = uVar27;
      *(uint *)(lRam00000001136bb440 + uVar13 * 4) = uVar12;
    }
    else {
LAB_1052faac8:
      uVar12 = 0xffffffff;
    }
LAB_1052faacc:
    _os_unfair_lock_unlock(0x1136bb3cc);
  }
  uVar25 = (uint)uVar26;
  if (uVar24 == 0) {
LAB_1052fac88:
    if (!bVar9) goto LAB_1052faef8;
    uVar13 = (param_5 >> 4) * -0x61c8864680b583eb;
    uVar24 = uVar13 >> 0x28;
    uVar13 = (ulong)((uint)(uVar13 >> 0x28) >> (ulong)(uRam00000001130ce4ac & 0x1f)) * 0x40 +
             0x1136ba3c0;
    if (bVar15) goto LAB_1052facac;
    _os_unfair_lock_lock(uVar13);
  }
  else {
    uVar13 = (uVar24 >> 4) * -0x61c8864680b583eb;
    uVar23 = uVar13 >> 0x28;
    lVar17 = (ulong)((uint)(uVar13 >> 0x28) >> (ulong)(uRam00000001130ce4ac & 0x1f)) * 0x40;
    if (!bVar15) {
      _os_unfair_lock_lock();
LAB_1052fab90:
      lVar14 = lRam00000001136bb428;
      if (((cRam00000001136bb3c1 == '\x01') && ((bRam00000001136bb3c2 & 1) == 0)) &&
         (iVar10 = *(int *)(lRam00000001136bb448 + uVar23 * 4), iVar10 != -1)) {
        if (*(ulong *)(lRam00000001136bb428 + (long)iVar10 * 0x18) == uVar24) {
          puVar19 = (undefined4 *)(lRam00000001136bb428 + (long)iVar10 * 0x18 + 0x10);
          *(undefined4 *)(lRam00000001136bb448 + uVar23 * 4) = *puVar19;
        }
        else {
          do {
            iVar18 = iVar10;
            iVar10 = *(int *)(lRam00000001136bb428 + (long)iVar18 * 0x18 + 0x10);
            if (iVar10 == -1) goto LAB_1052fac6c;
          } while (*(ulong *)(lRam00000001136bb428 + (long)iVar10 * 0x18) != uVar24);
          puVar19 = (undefined4 *)(lRam00000001136bb428 + (long)iVar10 * 0x18 + 0x10);
          *(undefined4 *)(lRam00000001136bb428 + (long)iVar18 * 0x18 + 0x10) = *puVar19;
        }
        lVar14 = lVar14 + (long)iVar10 * 0x18;
        *(ulong *)(lVar17 + 0x1136ba3d0) =
             *(long *)(lVar17 + 0x1136ba3d0) - (ulong)*(uint *)(lVar14 + 8);
        *(long *)(lVar17 + 0x1136ba3c8) = *(long *)(lVar17 + 0x1136ba3c8) + -1;
        *(uint *)(lVar14 + 0x14) = *(uint *)(lVar14 + 0x14) & 0xfffffffd;
        *puVar19 = *(undefined4 *)(lVar17 + 0x1136ba3c4);
        *(int *)(lVar17 + 0x1136ba3c4) = iVar10;
      }
LAB_1052fac6c:
      _os_unfair_lock_unlock(lVar17 + 0x1136ba3c0U);
      goto LAB_1052fac88;
    }
    uVar13 = lVar17 + 0x1136ba3c0U;
    _os_unfair_lock_trylock();
    if ((uVar13 & 1) != 0) goto LAB_1052fab90;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(0x1136bb410,0x10);
      if (bVar6) {
        cVar5 = ExclusiveMonitorsStatus();
        lRam00000001136bb410 = lRam00000001136bb410 + 1;
      }
    } while (cVar5 != '\0');
    if (!bVar9) goto LAB_1052faef8;
    uVar13 = (param_5 >> 4) * -0x61c8864680b583eb;
    uVar24 = uVar13 >> 0x28;
    uVar13 = (ulong)((uint)(uVar13 >> 0x28) >> (ulong)(uRam00000001130ce4ac & 0x1f)) * 0x40 +
             0x1136ba3c0;
LAB_1052facac:
    uVar23 = uVar13;
    _os_unfair_lock_trylock();
    if ((uVar23 & 1) == 0) {
      do {
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(0x1136bb3f8,0x10);
        if (bVar9) {
          cVar5 = ExclusiveMonitorsStatus();
          lRam00000001136bb3f8 = lRam00000001136bb3f8 + 1;
        }
      } while (cVar5 != '\0');
      do {
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(0x1136bb400,0x10);
        if (bVar9) {
          cVar5 = ExclusiveMonitorsStatus();
          lRam00000001136bb400 = lRam00000001136bb400 + (uVar26 & 0xffffffff);
        }
      } while (cVar5 != '\0');
      if (0xffff < uVar25) {
        do {
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(0x1136bb408,0x10);
          if (bVar9) {
            cVar5 = ExclusiveMonitorsStatus();
            lRam00000001136bb408 = lRam00000001136bb408 + 1;
          }
        } while (cVar5 != '\0');
      }
      goto LAB_1052faef8;
    }
  }
  lVar14 = lRam00000001136bb448;
  lVar17 = lRam00000001136bb428;
  if ((cRam00000001136bb3c1 == '\x01') && ((bRam00000001136bb3c2 & 1) == 0)) {
    uVar16 = (uint)(uVar7 != 0) | uStack_274 << 8;
    iVar10 = *(int *)(lRam00000001136bb448 + uVar24 * 4);
    while (iVar10 != -1) {
      puVar21 = (ulong *)(lRam00000001136bb428 + (long)iVar10 * 0x18);
      if (*puVar21 == param_5) {
        *(ulong *)(uVar13 + 0x10) =
             (*(long *)(uVar13 + 0x10) + (uVar26 & 0xffffffff)) - (ulong)(uint)puVar21[1];
        lVar17 = lVar17 + (long)iVar10 * 0x18;
        *(uint *)(lVar17 + 8) = uVar25;
        *(uint *)(lVar17 + 0xc) = uVar12;
        *(uint *)(lVar17 + 0x14) = uVar16 | 2;
        goto LAB_1052faed8;
      }
      iVar10 = (int)puVar21[2];
    }
    iVar10 = *(int *)(uVar13 + 4);
    if (iVar10 == -1) {
      piVar1 = (int *)(lRam00000001136bb3f0 + 0x1c);
      iVar18 = *(int *)(lRam00000001136bb3f0 + 0x1c);
      do {
        iVar10 = iVar18;
        if (15999999 < iVar10) goto LAB_1052faec8;
        iVar18 = *piVar1;
        if (iVar18 == iVar10) {
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar9) {
            *piVar1 = iVar10 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          bVar9 = cVar5 == '\0';
        }
        else {
          bVar9 = false;
          ClearExclusiveLocal();
        }
      } while (!bVar9);
      lVar17 = lRam00000001136bb428;
      if (iVar10 != -1) goto LAB_1052fad98;
LAB_1052faec8:
      *(long *)(uVar13 + 0x18) = *(long *)(uVar13 + 0x18) + 1;
    }
    else {
      *(undefined4 *)(uVar13 + 4) =
           *(undefined4 *)(lRam00000001136bb428 + (long)iVar10 * 0x18 + 0x10);
LAB_1052fad98:
      uVar4 = *(undefined4 *)(lVar14 + uVar24 * 4);
      puVar21 = (ulong *)(lVar17 + (long)iVar10 * 0x18);
      *puVar21 = param_5;
      *(uint *)(puVar21 + 1) = uVar25;
      *(uint *)((long)puVar21 + 0xc) = uVar12;
      *(undefined4 *)(puVar21 + 2) = uVar4;
      *(uint *)((long)puVar21 + 0x14) = uVar16 | 2;
      *(int *)(lVar14 + uVar24 * 4) = iVar10;
      *(ulong *)(uVar13 + 0x10) = *(long *)(uVar13 + 0x10) + (uVar26 & 0xffffffff);
      *(long *)(uVar13 + 8) = *(long *)(uVar13 + 8) + 1;
    }
LAB_1052faed8:
    *(ulong *)(uVar13 + 0x28) = *(long *)(uVar13 + 0x28) + (uVar26 & 0xffffffff);
    *(long *)(uVar13 + 0x20) = *(long *)(uVar13 + 0x20) + 1;
  }
  _os_unfair_lock_unlock(uVar13);
LAB_1052faef8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  bRam00000001136bb3c2 = 1;
  return;
}



/* Entry: 1052faf34; end: 1052faf67;  */

void FUN_1052faf34(void)

{
  uRam00000001136bb3c2 = 1;
  return;
}



/* Entry: 1052faf68; end: 1052fafab;  */

void FUN_1052faf68(undefined4 param_1)

{
  uRam00000001136bb3c4 = (undefined1)param_1;
  _os_unfair_lock_lock(0x1136bb3c8);
  if (lRam00000001136bb3f0 != 0) {
    *(undefined4 *)(lRam00000001136bb3f0 + 0x4c) = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(0x1136bb3c8);
  return;
}



/* Entry: 1052fafac; end: 1052fafb7;  */

undefined1 FUN_1052fafac(void)

{
  return uRam00000001136bb3c4;
}



/* Entry: 1052fafb8; end: 1052fb003;  */

void FUN_1052fafb8(uint param_1)

{
  if (param_1 < 2) {
    param_1 = 1;
  }
  uRam00000001130ce480 = param_1;
  _os_unfair_lock_lock(0x1136bb3c8);
  if (lRam00000001136bb3f0 != 0) {
    *(uint *)(lRam00000001136bb3f0 + 0x48) = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(0x1136bb3c8);
  return;
}



/* Entry: 1052fb004; end: 1052fb017;  */

undefined4 FUN_1052fb004(void)

{
  return uRam00000001130ce480;
}



/* Entry: 1052fb018; end: 1052fb063;  */

void FUN_1052fb018(uint param_1)

{
  if (param_1 < 2) {
    param_1 = 1;
  }
  uRam00000001130ce484 = param_1;
  _os_unfair_lock_lock(0x1136bb3c8);
  if (lRam00000001136bb3f0 != 0) {
    *(uint *)(lRam00000001136bb3f0 + 0x50) = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(0x1136bb3c8);
  return;
}



/* Entry: 1052fb064; end: 1052fb0b3;  */

undefined4 FUN_1052fb064(void)

{
  return uRam00000001130ce484;
}



/* Entry: 1052fb0b4; end: 1052fb333;  */

void FUN_1052fb0b4(code *param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lStack_58;
  long lStack_50;
  uint uStack_48;
  undefined4 uStack_44;
  
  if (param_3 != (long *)0x0) {
    param_3[9] = 0;
    param_3[8] = 0;
    param_3[0xb] = 0;
    param_3[10] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    param_3[7] = 0;
    param_3[6] = 0;
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    param_3[2] = 0;
  }
  if ((param_1 != (code *)0x0) && (cRam00000001136bb3c0 != '\0')) {
    _os_unfair_lock_lock(0x1136bb3c8);
    if ((bRam00000001136bb3c1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__os_unfair_lock_unlock_11034c790)(0x1136bb3c8);
      return;
    }
    if (uRam00000001130ce490 != 0) {
      uVar10 = 0;
      lVar9 = 0x1136ba3c0;
      do {
        _os_unfair_lock_lock(lVar9);
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0x40;
      } while (uVar10 < uRam00000001130ce490);
    }
    _os_unfair_lock_lock(0x1136bb3cc);
    _os_unfair_lock_unlock(0x1136bb3cc);
    uVar10 = (ulong)uRam00000001130ce490;
    lVar9 = 0;
    lVar11 = 0;
    if (uRam00000001130ce490 == 0) {
      lVar5 = 0;
      lVar6 = 0;
      lVar7 = 0;
    }
    else {
      lVar9 = uVar10 * 0x40 + 0x1136ba380;
      do {
        uVar10 = uVar10 - 1;
        _os_unfair_lock_unlock(lVar9);
        lVar9 = lVar9 + -0x40;
      } while (uVar10 != 0);
      uVar10 = (ulong)uRam00000001130ce490;
      if (uRam00000001130ce490 == 0) {
        lVar5 = 0;
        lVar6 = 0;
        lVar7 = 0;
        lVar9 = 0;
        lVar11 = 0;
      }
      else {
        lVar7 = 0;
        lVar6 = 0;
        lVar5 = 0;
        lVar9 = 0;
        lVar11 = 0;
        plVar8 = (long *)0x1136ba3e0;
        do {
          lVar7 = plVar8[-3] + lVar7;
          lVar6 = plVar8[-2] + lVar6;
          lVar5 = plVar8[-1] + lVar5;
          lVar9 = *plVar8 + lVar9;
          lVar11 = plVar8[1] + lVar11;
          uVar10 = uVar10 - 1;
          plVar8 = plVar8 + 8;
        } while (uVar10 != 0);
      }
    }
    lVar4 = lRam00000001136bb3f0;
    *(long *)(lRam00000001136bb3f0 + 0x30) = lVar7;
    *(long *)(lVar4 + 0x38) = lVar6;
    *(long *)(lVar4 + 0x40) = lVar5;
    if (param_3 != (long *)0x0) {
      *param_3 = lVar7;
      param_3[1] = lVar6;
      param_3[2] = lVar5;
      *(undefined1 *)(param_3 + 3) = 0;
      param_3[5] = lVar11;
      param_3[4] = lVar9;
      param_3[6] = lRam00000001136bb3f8;
      param_3[7] = lRam00000001136bb400;
      param_3[8] = lRam00000001136bb408;
      param_3[9] = lRam00000001136bb410;
      param_3[10] = lRam00000001136bb418;
      param_3[0xb] = lRam00000001136bb420;
    }
    uVar2 = *(uint *)(lVar4 + 0x1c);
    uVar1 = *(uint *)(lVar4 + 0x28);
    if (999999 < *(uint *)(lVar4 + 0x28)) {
      uVar1 = 1000000;
    }
    if (0 < (int)uVar2) {
      lVar9 = 0;
      if (15999999 < uVar2) {
        uVar2 = 16000000;
      }
      lVar11 = lRam00000001136bb428;
      do {
        plVar8 = (long *)(lVar11 + lVar9);
        if ((((*(uint *)((long)plVar8 + 0x14) >> 1 & 1) != 0) && (*plVar8 != 0)) &&
           (uVar3 = *(uint *)(lVar11 + lVar9 + 0xc), uVar3 == 0xffffffff || uVar3 < uVar1)) {
          lStack_50 = plVar8[1];
          uStack_48 = *(uint *)((long)plVar8 + 0x14) & 0xfffffffd;
          uStack_44 = 0;
          lStack_58 = *plVar8;
          (*param_1)(&lStack_58,param_2);
          lVar11 = lRam00000001136bb428;
        }
        lVar9 = lVar9 + 0x18;
      } while ((ulong)uVar2 * 0x18 - lVar9 != 0);
    }
    _os_unfair_lock_unlock(0x1136bb3c8);
  }
  return;
}



/* Entry: 1052fb334; end: 1052fb3eb;  */

ulong FUN_1052fb334(uint param_1,long param_2,ulong param_3)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((param_2 != 0) &&
     ((cRam00000001136bb3c0 != '\0' && lRam00000001136bb430 != 0) && lRam00000001136bb438 != 0)) {
    uVar2 = *(uint *)(lRam00000001136bb3f0 + 0x28);
    if (999999 < *(uint *)(lRam00000001136bb3f0 + 0x28)) {
      uVar2 = 1000000;
    }
    if (param_1 < uVar2) {
      puVar1 = (uint *)(lRam00000001136bb430 + (ulong)param_1 * 0x10);
      uVar3 = (ulong)*puVar1;
      uVar4 = (ulong)(ushort)puVar1[1];
      uVar2 = *(uint *)(lRam00000001136bb3f0 + 0x24);
      if (15999999 < *(uint *)(lRam00000001136bb3f0 + 0x24)) {
        uVar2 = 16000000;
      }
      if (uVar4 + uVar3 <= (ulong)uVar2) {
        if (uVar4 <= param_3) {
          param_3 = uVar4;
        }
        _memcpy(param_2,lRam00000001136bb438 + uVar3 * 8,param_3 << 3);
        return param_3;
      }
    }
  }
  return 0;
}



/* Entry: 1052fb3ec; end: 1052fb6b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1052fb3ec(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  if (param_1 != 0) {
    puVar3 = (undefined8 *)0x1;
    _calloc(1,0x68);
    if (puVar3 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    *puVar3 = 0xffffffffffffffff;
    puVar3[1] = 0xffffffffffffffff;
    lVar4 = param_1;
    func_0x0001052fb5c0(param_1,"meta.bin",puVar3,puVar3 + 6);
    puVar3[2] = lVar4;
    lVar4 = param_1;
    func_0x0001052fb5c0(param_1,"nodes.bin",(long)puVar3 + 4,puVar3 + 7);
    puVar3[3] = lVar4;
    lVar4 = param_1;
    func_0x0001052fb5c0(param_1,"frames.bin",puVar3 + 1,puVar3 + 8);
    puVar3[4] = lVar4;
    func_0x0001052fb5c0(param_1,"stacks.bin",(long)puVar3 + 0xc,puVar3 + 9);
    puVar3[5] = param_1;
    piVar5 = (int *)puVar3[2];
    if (((((piVar5 != (int *)0x0) && (puVar3[3] != 0)) && (puVar3[4] != 0)) &&
        ((((param_1 != 0 && (0x57 < (ulong)puVar3[6])) &&
          ((*piVar5 == 0x53434d47 && ((piVar5[1] == 6 && (piVar5[2] == 16000000)))))) &&
         (piVar5[3] == 1000000)))) &&
       (((piVar5[4] == 16000000 && (piVar5[5] == 0x200000)) && (piVar5[6] == 0x1000000)))) {
      puVar3[10] = piVar5;
      iVar2 = piVar5[7];
      iVar6 = (int)((ulong)puVar3[7] / 0x18);
      if (iVar2 <= iVar6) {
        iVar6 = iVar2;
      }
      if (15999999 < iVar6) {
        iVar6 = 16000000;
      }
      iVar1 = 0;
      if (-1 < iVar2) {
        iVar1 = iVar6;
      }
      *(int *)(puVar3 + 0xb) = iVar1;
      auVar8 = NEON_ushl(*(undefined1 (*) [16])(puVar3 + 8),_UNK_10dd94450,8);
      uVar7 = NEON_umin(CONCAT44(auVar8._8_4_,auVar8._0_4_),*(undefined8 *)(piVar5 + 9),4);
      uVar7 = NEON_umin(uVar7,0xf424000f42400,4);
      uVar7 = NEON_rev64(uVar7,4);
      *(undefined8 *)((long)puVar3 + 0x5c) = uVar7;
      return puVar3;
    }
    FUN_1052fb6b4(puVar3);
  }
                    /* WARNING: Read-only address (ram,0x00010dd94450) is written */
  return (undefined8 *)0x0;
}



/* Entry: 1052fb6b4; end: 1052fb74b;  */

void FUN_1052fb6b4(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*(long *)(param_1 + 4) != 0) {
      _munmap(*(long *)(param_1 + 4),*(undefined8 *)(param_1 + 0xc));
    }
    if (*(long *)(param_1 + 6) != 0) {
      _munmap(*(long *)(param_1 + 6),*(undefined8 *)(param_1 + 0xe));
    }
    if (*(long *)(param_1 + 8) != 0) {
      _munmap(*(long *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    }
    if (*(long *)(param_1 + 10) != 0) {
      _munmap(*(long *)(param_1 + 10),*(undefined8 *)(param_1 + 0x12));
    }
    if (-1 < *param_1) {
      _close();
    }
    if (-1 < param_1[1]) {
      _close();
    }
    if (-1 < param_1[2]) {
      _close();
    }
    if (-1 < param_1[3]) {
      _close();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(param_1);
    return;
  }
  return;
}



/* Entry: 1052fb74c; end: 1052fb7e7;  */

void FUN_1052fb74c(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((param_1 != 0) && (param_2 != (undefined8 *)0x0)) {
    param_2[9] = 0;
    param_2[8] = 0;
    param_2[0xb] = 0;
    param_2[10] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    lVar1 = *(long *)(param_1 + 0x50);
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    param_2[1] = *(undefined8 *)(lVar1 + 0x38);
    *param_2 = uVar2;
    param_2[2] = *(undefined8 *)(lVar1 + 0x40);
  }
  return;
}



/* Entry: 1052fb7e8; end: 1052fb89f;  */

void FUN_1052fb7e8(long param_1,code *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  long lStack_58;
  undefined8 uStack_50;
  uint uStack_48;
  undefined4 uStack_44;
  
  if (((param_1 != 0) && (param_2 != (code *)0x0)) && (iVar1 = *(int *)(param_1 + 0x58), 0 < iVar1))
  {
    lVar2 = 0;
    puVar3 = (uint *)(*(long *)(param_1 + 0x18) + 0xc);
    do {
      if (((puVar3[2] >> 1 & 1) != 0) && (lStack_58 = *(long *)(puVar3 + -3), lStack_58 != 0)) {
        uStack_50 = *(undefined8 *)(puVar3 + -1);
        if ((*puVar3 == 0xffffffff) || (*puVar3 < *(uint *)(param_1 + 0x5c))) {
          uStack_48 = puVar3[2] & 0xfffffffd;
          uStack_44 = 0;
          (*param_2)(&lStack_58,param_3);
          iVar1 = *(int *)(param_1 + 0x58);
        }
      }
      puVar3 = puVar3 + 6;
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  return;
}



/* Entry: 1052fb8a0; end: 1052fb91b;  */

ulong FUN_1052fb8a0(long param_1,uint param_2,long param_3,ulong param_4)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (((param_1 != 0) && (param_3 != 0)) && (param_2 < *(uint *)(param_1 + 0x5c))) {
    puVar1 = (uint *)(*(long *)(param_1 + 0x28) + (ulong)param_2 * 0x10);
    uVar2 = (ulong)*puVar1;
    uVar3 = (ulong)(ushort)puVar1[1];
    if (uVar3 + uVar2 <= (ulong)*(uint *)(param_1 + 0x60)) {
      if (uVar3 <= param_4) {
        param_4 = uVar3;
      }
      _memcpy(param_3,*(long *)(param_1 + 0x20) + uVar2 * 8,param_4 << 3);
      return param_4;
    }
  }
  return 0;
}



/* Entry: 1052fb91c; end: 1052fba83;  */

void FUN_1052fb91c(long param_1,undefined8 param_2,long param_3,long param_4,int *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  int *piVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined4 uStack_460;
  undefined8 uStack_45c;
  undefined1 auStack_448 [1024];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_5 = -1;
  piVar8 = (int *)(param_4 * param_3);
  if (param_1 != 0) {
    puVar1 = auStack_448;
    uVar9 = param_2;
    _snprintf(puVar1,0x400,"%s/%s");
    if ((int)puVar1 - 1U < 0x3ff) {
      param_1 = 0x180;
      puVar1 = auStack_448;
      _open(puVar1,0x202);
      if (-1 < (int)puVar1) {
        puVar2 = puVar1;
        _ftruncate();
        if ((int)puVar2 == 0) {
          plVar5 = (long *)0x0;
          uVar7 = 3;
          piVar6 = piVar8;
          _mmap(0,piVar8,3,1,puVar1,0,param_7,param_8,param_1,uVar9);
          if (plVar5 != (long *)0xffffffffffffffff) {
            *param_5 = (int)puVar1;
            piVar8 = piVar6;
            goto LAB_1052fb9e8;
          }
        }
        _close(puVar1);
      }
    }
    puVar3 = PTR___os_log_default_11034be80;
    _os_log_type_enabled(PTR___os_log_default_11034be80,0x10);
    if ((int)puVar3 != 0) {
      uStack_460 = 0x8200102;
      uStack_45c = param_2;
      __os_log_error_impl(0x100000000,PTR___os_log_default_11034be80,0x10,
                          "[SCMemoryGraphReporterCore] File-backed arena \'%s\' unavailable; using anonymous memory."
                          ,&uStack_460,0xc,param_7,param_8,param_1);
    }
  }
  plVar4 = (long *)0x0;
  uVar7 = 3;
  _mmap(0,piVar8,3,0x1002,0xffffffff,0);
  plVar5 = (long *)0x0;
  if (plVar4 != (long *)0xffffffffffffffff) {
    plVar5 = plVar4;
  }
LAB_1052fb9e8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if (*plVar5 != 0) {
      _munmap(*plVar5,uVar7);
      *plVar5 = 0;
    }
    if (-1 < *piVar8) {
      _close();
      *piVar8 = -1;
    }
    return;
  }
  return;
}



/* Entry: 1052fba84; end: 1052fbacb;  */

void FUN_1052fba84(long *param_1,int *param_2,undefined8 param_3)

{
  if (*param_1 != 0) {
    _munmap(*param_1,param_3);
    *param_1 = 0;
  }
  if (-1 < *param_2) {
    _close();
    *param_2 = -1;
  }
  return;
}



/* Entry: 1052fbacc; end: 1052fbadb;  */

ulong FUN_1052fbacc(ulong param_1)

{
  if (6 < param_1) {
    param_1 = 7;
  }
  return param_1;
}



/* Entry: 1052fbadc; end: 1052fbaf3; -[SCNetworkBandwidthEstimatorImpl downloadBandwidthType] */

ulong FUN_1052fbadc(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bf5e720();
  if (6 < uVar1) {
    uVar1 = 7;
  }
  return uVar1;
}



/* Entry: 1052fbaf4; end: 1052fbb0b; -[SCNetworkBandwidthEstimatorImpl nqeDownloadBandwidthType] */

ulong FUN_1052fbaf4(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c0dd940();
  if (6 < uVar1) {
    uVar1 = 7;
  }
  return uVar1;
}



/* Entry: 1052fbb0c; end: 1052fbb13; -[SCNetworkBandwidthEstimatorImpl downloadBandwidth] */

void FUN_1052fbb0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf88870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_downloadBandwidth_1125bfbc0);
  return;
}



/* Entry: 1052fbb14; end: 1052fbb1b; -[SCNetworkBandwidthEstimatorImpl nqeDownloadBandwidthBps] */

void FUN_1052fbb14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dd930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_nqeDownloadBandwidthBps_112615060);
  return;
}



/* Entry: 1052fbb1c; end: 1052fbb23; -[SCNetworkBandwidthEstimatorImpl httpRTT] */

void FUN_1052fbb1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe4cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_httpRTT_1125d6cf8);
  return;
}



/* Entry: 1052fbb24; end: 1052fbb2b; -[SCNetworkBandwidthEstimatorImpl transportRTT] */

void FUN_1052fbb24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27af10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_transportRTT_11267c5e8);
  return;
}



/* Entry: 1052fbb2c; end: 1052fbb33; -[SCNetworkBandwidthEstimatorImpl getNetworkQueueStateWithCompletion:] */

void FUN_1052fbb2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc7fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_getNetworkQueueStateWithCompleti_1125cf998);
  return;
}



/* Entry: 1052fbb34; end: 1052fbb3f; -[SCNetworkBandwidthEstimatorImpl .cxx_destruct] */

void FUN_1052fbb34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052fbb40; end: 1052fbd67; -[SCHostPrewarmManagerJobProcessor processJobWithJobConfig:input:context:onComplete:] */

undefined8
FUN_1052fbb40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_4);
  _objc_alloc();
  func_0x00010c008340();
  _objc_release(param_4);
  puVar2 = puVar1;
  func_0x00010c0720c0();
  if ((int)puVar2 == 0) {
    puVar2 = puVar1;
    func_0x00010c0720c0();
    if ((int)puVar2 == 0) {
      puVar2 = puVar1;
      func_0x00010c0720c0();
      if ((int)puVar2 == 0) {
        puVar2 = puVar1;
        func_0x00010c0720c0();
        if (((int)puVar2 == 0) || (lVar4 = param_1, func_0x00010c2a1fc0(), (int)lVar4 == 0))
        goto LAB_1052fbca4;
        uVar3 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c2a1fa0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1052fbbe0;
      }
      lVar4 = param_1;
      func_0x00010c2a1fc0();
      if ((int)lVar4 != 0) goto LAB_1052fbbb8;
      uVar3 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c1129e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c1129e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar5 = uVar3;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010becfd60(param_1);
    _objc_release(uVar5);
  }
  else {
    lVar4 = param_1;
    func_0x00010c2a1fc0();
    if ((int)lVar4 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c1129e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010becfd60(param_1);
      _objc_release(uVar5);
      _objc_release(uVar3);
      func_0x00010bec6060(param_1);
      func_0x00010bec6200(param_1);
      goto LAB_1052fbca4;
    }
LAB_1052fbbb8:
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c2a1fa0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
LAB_1052fbbe0:
    func_0x00010c0e28a0();
    _objc_release(uVar5);
  }
  _objc_release(uVar3);
LAB_1052fbca4:
  (**(code **)(param_6 + 0x10))(param_6,0,0);
  _objc_release(puVar1);
  _objc_release(param_6);
  return 0;
}



/* Entry: 1052fbd68; end: 1052fc0c3; -[SCHostPrewarmManagerJobProcessor _submitColdStartJob] */

void FUN_1052fbd68(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  
  bVar1 = *(byte *)(param_1 + 0x51);
  puVar2 = PTR_PTR_1126b7228;
  _objc_opt_new(PTR_PTR_1126b7228);
  func_0x00010c1b6740();
  puVar3 = PTR_PTR_1126b7230;
  _objc_opt_new(PTR_PTR_1126b7230);
  func_0x00010c1edbc0();
  func_0x00010c1ed860(puVar2,param_2,puVar3);
  func_0x00010c1b6780(puVar2,param_2,1);
  func_0x00010c1b6840(puVar2,param_2,&PTR____CFConstantStringClassReference_110dd13d8);
  func_0x00010c1b67a0(puVar2,param_2,&PTR____CFConstantStringClassReference_110dd13f8);
  puVar4 = PTR_PTR_1126b7238;
  _objc_opt_new(PTR_PTR_1126b7238);
  func_0x00010c1eeea0();
  func_0x00010c1b67e0(puVar2,param_2,puVar4);
  puVar5 = PTR_PTR_1126b7240;
  _objc_opt_new(PTR_PTR_1126b7240);
  puVar6 = puVar5;
  func_0x00010bf06200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar6);
  if ((bVar1 & 1) == 0) {
    puVar6 = puVar5;
    func_0x00010bf06200(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc800();
    _objc_release(puVar6);
  }
  func_0x00010c1b66e0(puVar2,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  lVar7 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar7);
  ppuVar8 = &PTR____CFConstantStringClassReference_110dd13f8;
  func_0x00010bf64920(&PTR____CFConstantStringClassReference_110dd13f8,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f200(lVar7,param_2,ppuVar8,puVar2,uVar9,0);
  _objc_release(uVar9);
  _objc_release(ppuVar8);
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1052fc0c4; end: 1052fc16b; -[SCHostPrewarmManagerJobProcessor _submitForegroundNotifier] */

void FUN_1052fc0c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  uVar1 = 0;
  func_0x0001052fbf18(0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar2);
  ppuVar3 = &PTR____CFConstantStringClassReference_110dd1418;
  func_0x00010bf64920(&PTR____CFConstantStringClassReference_110dd1418,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f200(lVar2,param_2,ppuVar3,uVar1,uVar4,0);
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052fc16c; end: 1052fc2bb; -[SCHostPrewarmManagerJobProcessor _submitBackgroundNotifier] */

void FUN_1052fc16c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b7228;
  _objc_opt_new(PTR_PTR_1126b7228);
  func_0x00010c1b6740();
  puVar2 = PTR_PTR_1126b7230;
  _objc_opt_new(PTR_PTR_1126b7230);
  func_0x00010c1edbc0();
  func_0x00010c1ed860(puVar1,param_2,puVar2);
  func_0x00010c1b6780(puVar1,param_2,1);
  func_0x00010c1b6840(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd13d8);
  ppuVar6 = &PTR____CFConstantStringClassReference_110dd1438;
  func_0x00010c1b67a0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd1438);
  puVar3 = PTR_PTR_1126b7240;
  _objc_opt_new(PTR_PTR_1126b7240);
  puVar4 = puVar3;
  func_0x00010bf06200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar4);
  func_0x00010c1b66e0(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  lVar5 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar5);
  func_0x00010bf64920(&PTR____CFConstantStringClassReference_110dd1438,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f200(lVar5,param_2,ppuVar6,puVar1,uVar7,0);
  _objc_release(uVar7);
  _objc_release(ppuVar6);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1052fc2bc; end: 1052fc35b;  */

void FUN_1052fc2bc(long param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (param_2 == 2) {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x50) = 1;
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c26d680(param_3);
  func_0x00010c0df760(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1052fc35c; end: 1052fc5af; -[SCHostPrewarmManagerJobProcessor _triggerPrewarmOperationWithHostConfigs:] */

void FUN_1052fc35c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,ulong param_7)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  int iVar20;
  int iVar21;
  undefined8 uVar22;
  long lVar23;
  ulong uVar24;
  undefined8 *puVar25;
  ulong uVar26;
  long lVar27;
  undefined1 auStack_1d0 [8];
  int iStack_1c8;
  undefined1 uStack_1c4;
  undefined1 auStack_1c0 [16];
  undefined8 uStack_130;
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
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010bfe4540();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = &uStack_130;
  puVar18 = auStack_f0;
  uVar19 = 0x10;
  lVar2 = param_3;
  func_0x00010bf52a60();
  iVar20 = (int)param_6;
  iVar21 = (int)param_7;
  if (lVar2 != 0) {
    lVar27 = *plStack_120;
    do {
      lVar23 = 0;
      do {
        if (*plStack_120 != lVar27) {
          _objc_enumerationMutation(param_3);
        }
        uVar24 = *(ulong *)(lStack_128 + lVar23 * 8);
        uVar3 = uVar24;
        func_0x00010bfd58c0();
        uVar5 = uVar24;
        if ((uVar3 & 1) == 0) {
          uVar26 = *(ulong *)(param_1 + 0x40);
          uVar4 = uVar24;
          func_0x00010bf95da0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf4b900();
          _objc_release(uVar4);
          if ((uVar26 & 1) == 0) {
            uVar4 = uVar24;
            func_0x00010c1246e0();
            _objc_retainAutoreleasedReturnValue();
            param_7 = uVar4;
            func_0x00010c1246c0();
            _objc_release(uVar4);
            uVar26 = *(ulong *)(param_1 + 0x40);
            uVar4 = uVar24;
            func_0x00010bf95da0(uVar24);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf4b900();
            _objc_release(uVar4);
            if ((uVar26 & 1) == 0) {
              uVar19 = *(undefined8 *)(param_1 + 0x40);
              func_0x00010bf95da0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(uVar19);
              goto LAB_1052fc42c;
            }
            goto LAB_1052fc434;
          }
        }
        else {
          func_0x00010bf45c20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf45be0();
          param_7 = 0;
LAB_1052fc42c:
          _objc_release(uVar5);
LAB_1052fc434:
          func_0x00010bf95da0();
          _objc_retainAutoreleasedReturnValue();
          param_6 = (ulong)((uint)uVar3 ^ 1);
          func_0x00010bec6400(param_1);
          _objc_release(uVar24);
        }
        lVar23 = lVar23 + 1;
      } while (lVar2 != lVar23);
      puVar25 = &uStack_130;
      puVar18 = auStack_f0;
      uVar19 = 0x10;
      lVar2 = param_3;
      func_0x00010bf52a60();
      iVar20 = (int)param_6;
      iVar21 = (int)param_7;
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar18);
    _objc_retain(uVar19);
    if (0 < (int)puVar25) {
      do {
        puVar6 = PTR_PTR_1126b7218;
        func_0x00010c134680();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c2b3f00();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
        func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar7;
        func_0x00010c2bc200();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010c2b9840();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010c2b0180();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010c2a95e0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar12;
        func_0x00010c2af6a0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar13;
        func_0x00010bf21f60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        puVar7 = PTR_PTR_1126b7220;
        func_0x00010c135080();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        puVar8 = puVar7;
        func_0x00010011df08();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar7;
        func_0x00010c2af9a0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010c2bcaa0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010c2b7240();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010c2b3680();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar12;
        func_0x00010c2bb2e0();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar13;
        func_0x00010bf21f60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar6);
        _objc_release(puVar8);
        _objc_release(puVar7);
        uVar16 = *(undefined8 *)(param_3 + 0x30);
        func_0x00010bfe4c00(uVar16);
        _objc_retainAutoreleasedReturnValue();
        uVar22 = uVar16;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = *(undefined8 *)(param_3 + 0x20);
        func_0x00010c11de00(uVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25f600(uVar22);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar17);
        _objc_release(uVar22);
        _objc_release(uVar16);
        _objc_initWeak(auStack_1c0,param_3);
        if (iVar20 != 0) {
          uVar22 = *(undefined8 *)(param_3 + 0x20);
          _objc_copyWeak(auStack_1d0,auStack_1c0);
          _objc_retain(puVar18);
          _objc_retain(uVar19);
          uStack_1c4 = (undefined1)iVar20;
          iStack_1c8 = iVar21;
          func_0x00010c0f7fe0((double)iVar21,uVar22);
          _objc_release(uVar19);
          _objc_release(puVar18);
          _objc_destroyWeak(auStack_1d0);
        }
        _objc_destroyWeak(auStack_1c0);
        _objc_release(puVar15);
        _objc_release(puVar14);
        uVar1 = (int)puVar25 - 1;
        puVar25 = (undefined8 *)(ulong)uVar1;
      } while (uVar1 != 0);
    }
    _objc_release(uVar19);
    _objc_release(puVar18);
    return;
  }
  return;
}



/* Entry: 1052fc5b0; end: 1052fc9bf; -[SCHostPrewarmManagerJobProcessor _submitPingRequest:keySuffix:url:isRecurring:timeIntervalInSec:] */

void FUN_1052fc5b0(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  ,int param_6,int param_7)

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
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_90 [8];
  int iStack_88;
  undefined1 uStack_84;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (0 < param_3) {
    do {
      puVar1 = PTR_PTR_1126b7218;
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c2b3f00();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c2bc200();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c2b9840();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c2b0180();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c2a95e0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c2af6a0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
      puVar2 = PTR_PTR_1126b7220;
      func_0x00010c135080();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar3 = puVar2;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c2af9a0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c2bcaa0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c2b7240();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c2b3680();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c2bb2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar8;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar1);
      _objc_release(puVar3);
      _objc_release(puVar2);
      uVar11 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bfe4c00(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar11;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c11de00(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25f600(uVar13);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar12);
      _objc_release(uVar13);
      _objc_release(uVar11);
      _objc_initWeak(auStack_80,param_1);
      if (param_6 != 0) {
        uVar13 = *(undefined8 *)(param_1 + 0x20);
        _objc_copyWeak(auStack_90,auStack_80);
        _objc_retain(param_4);
        _objc_retain(param_5);
        uStack_84 = (undefined1)param_6;
        iStack_88 = param_7;
        func_0x00010c0f7fe0((double)param_7,uVar13);
        _objc_release(param_5);
        _objc_release(param_4);
        _objc_destroyWeak(auStack_90);
      }
      _objc_destroyWeak(auStack_80);
      _objc_release(puVar10);
      _objc_release(puVar9);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1052fc9c0; end: 1052fc9c3;  */

void FUN_1052fc9c0(void)

{
  return;
}



/* Entry: 1052fc9c4; end: 1052fca03;  */

void FUN_1052fc9c4(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec6400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052fca04; end: 1052fca8f; -[SCHostPrewarmManagerJobProcessor .cxx_destruct] */

void FUN_1052fca04(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052fca90; end: 1052fcb0b; +[PrewarmConfig_HostConfig descriptor] */

undefined * FUN_1052fca90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb458 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a291c0,
                        &PTR____CFConstantStringClassReference_110dd1558,
                        &PTR_s_snapchat_cdp_networkmanager_1130ce570,&PTR_s_endpoint_1130ce648,3,
                        0x20,0x1c);
    func_0x00010c228780();
    puRam00000001136bb458 = puVar1;
  }
  return puRam00000001136bb458;
}



/* Entry: 1052fcb0c; end: 1052fcb8f; +[PrewarmConfig_HostConfig_Concurrent descriptor] */

undefined * FUN_1052fcb0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb460 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a291e8,
                        &PTR____CFConstantStringClassReference_110dd14b8,
                        &PTR_s_snapchat_cdp_networkmanager_1130ce570,
                        &PTR_s_concurrentCount_1130ce588,1,8,0x1c);
    func_0x00010c228780();
    puRam00000001136bb460 = puVar1;
  }
  return puRam00000001136bb460;
}



/* Entry: 1052fcb90; end: 1052fcc13; +[PrewarmConfig_HostConfig_Recurring descriptor] */

undefined * FUN_1052fcb90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb468 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a29210,
                        &PTR____CFConstantStringClassReference_110dd1578,
                        &PTR_s_snapchat_cdp_networkmanager_1130ce570,
                        &PTR_s_recurringIntervalSec_1130ce5a8,1,8,0x1c);
    func_0x00010c228780();
    puRam00000001136bb468 = puVar1;
  }
  return puRam00000001136bb468;
}



/* Entry: 1052fcc14; end: 1052fcc8f; +[PrewarmConfig_HostConfigs descriptor] */

undefined * FUN_1052fcc14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb470 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a29198,
                        &PTR____CFConstantStringClassReference_110dd1598,
                        &PTR_s_snapchat_cdp_networkmanager_1130ce570,
                        &PTR_s_hostConfigsArray_1130ce608,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136bb470 = puVar1;
  }
  return puRam00000001136bb470;
}



/* Entry: 1052fcc90; end: 1052fcd07; -[SCNSpeedTestSpeedTestCallbackCppProxy initWithCpp:] */

undefined1 * FUN_1052fcc90(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e7708;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x0001052fd740();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0001052fd708(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1052fcd08; end: 1052fcdd7; -[SCNSpeedTestSpeedTestCallbackCppProxy onRequestCompleted:response:] */

void FUN_1052fcd08(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_d8 [144];
  undefined1 auStack_48 [24];
  
  func_0x0001052fd778();
  func_0x0001052fd7dc();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x0001052fd7ac(auStack_48);
  FUN_1052fe0bc(auStack_d8);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_48,auStack_d8);
  func_0x0001052fd1c0(auStack_d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x0001052fd738();
  func_0x0001052fd730();
  return;
}



/* Entry: 1052fcdd8; end: 1052fce8b; -[SCNSpeedTestSpeedTestCallbackCppProxy onAllCompleted:] */

void FUN_1052fcdd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_48 [24];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x0001052fd7ac(auStack_48);
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x0001052fd730();
  return;
}



/* Entry: 1052fce8c; end: 1052fcf43; -[SCNSpeedTestSpeedTestCallbackCppProxy onFatalError:errorMessage:] */

void FUN_1052fce8c(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x0001052fd778();
  func_0x0001052fd7dc();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x0001052fd7ac(auStack_48);
  func_0x0001052fd7b4();
  (**(code **)(*plVar1 + 0x20))(plVar1,auStack_48,auStack_60);
  func_0x0001052fd78c();
  func_0x0001052fd7a4();
  func_0x0001052fd738();
  func_0x0001052fd730();
  return;
}



/* Entry: 1052fcf44; end: 1052fd03b; -[SCNSpeedTestSpeedTestCallbackCppProxy onProgress:currentPhaseIndex:totalPhases:phaseName:currentRequestIndex:totalRequests:] */

void FUN_1052fcf44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _objc_retain(param_3);
  func_0x0001052fd7dc();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x0001052fd7ac(auStack_68);
  func_0x0001052fd7b4();
  (**(code **)(*plVar1 + 0x28))(plVar1,auStack_68,param_4,param_5,auStack_80,param_7,param_8);
  func_0x0001052fd78c();
  func_0x0001052fd7a4();
  func_0x0001052fd738();
  func_0x0001052fd730();
  return;
}



/* Entry: 1052fd03c; end: 1052fd123;  */

void FUN_1052fd03c(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  int extraout_w10;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001000fbc98();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
  }
  else {
    _objc_opt_class(PTR_PTR_1126b7250);
    uVar2 = unaff_x19;
    _objc_opt_isKindOfClass();
    if ((uVar2 & 1) == 0) {
      _objc_retain();
      ppuStack_38 = &PTR_DAT_110877320;
      func_0x0001000de59c(&uStack_30,&ppuStack_38,&stack0xffffffffffffffc0,FUN_1052fd2d0);
      uVar1 = uStack_28;
      uVar4 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      func_0x0001000df524(&uStack_30);
      _objc_release(unaff_x19);
      unaff_x20[1] = uVar1;
      *unaff_x20 = uVar4;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_1052fd6e0(&uStack_50);
    }
    else {
      lVar3 = *(long *)(unaff_x19 + 0x20);
      uVar4 = *(undefined8 *)(unaff_x19 + 0x18);
      unaff_x20[1] = *(undefined8 *)(unaff_x19 + 0x20);
      *unaff_x20 = uVar4;
      if (lVar3 != 0) {
        do {
          func_0x0001052fd740();
        } while (extraout_w10 != 0);
      }
    }
  }
  func_0x0001052fd730();
  return;
}



/* Entry: 1052fd124; end: 1052fd17f; -[SCNSpeedTestSpeedTestCallbackCppProxy .cxx_destruct] */

void FUN_1052fd124(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110877420;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x0001052fd708((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 1052fd180; end: 1052fd28b; -[SCNSpeedTestSpeedTestCallbackCppProxy .cxx_construct] */

undefined8 * FUN_1052fd180(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001052fd740();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 1052fd28c; end: 1052fd293;  */

void FUN_1052fd28c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1052fd294; end: 1052fd2cf;  */

void FUN_1052fd294(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1052fd2d0; end: 1052fd3c7;  */

void FUN_1052fd2d0(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110877360;
  puVar1[3] = &PTR_DAT_1108773f0;
  puVar2 = puVar5;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  func_0x0001000de520();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      func_0x0001052fd740();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_1108773b0;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_1052fd6e0(&uStack_50);
  return;
}



/* Entry: 1052fd3c8; end: 1052fd3cb;  */

void FUN_1052fd3c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110877360;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1052fd3cc; end: 1052fd3df;  */

void FUN_1052fd3cc(void)

{
  FUN_1052fd6d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1052fd3e0; end: 1052fd3eb;  */

long FUN_1052fd3e0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110877320;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    func_0x0001052fd770();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 1052fd3ec; end: 1052fd427;  */

void FUN_1052fd3ec(void)

{
  func_0x0001052fd7d0();
  return;
}



/* Entry: 1052fd428; end: 1052fd49b;  */

void FUN_1052fd428(undefined8 param_1)

{
  func_0x0001052fd794();
  func_0x0001001011a4();
  _objc_retainAutoreleasedReturnValue();
  FUN_1052fe1a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001052fd7e4();
  func_0x00010c0e6020();
  func_0x0001052fd770();
  func_0x0001052fd730();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 1052fd49c; end: 1052fd4ff;  */

void FUN_1052fd49c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001001011a4(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e2740(uVar2);
  func_0x0001052fd738();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 1052fd500; end: 1052fd573;  */

void FUN_1052fd500(undefined8 param_1)

{
  func_0x0001052fd794();
  func_0x0001001011a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001001011a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001052fd7e4();
  func_0x00010c0e4180();
  func_0x0001052fd770();
  func_0x0001052fd730();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 1052fd574; end: 1052fd63f;  */

void FUN_1052fd574(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001001011a4(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001001011a4(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e5cc0(uVar2);
  _objc_release(param_5);
  FUN_1052fd730();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 1052fd640; end: 1052fd6cf;  */

long FUN_1052fd640(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110877320;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    func_0x0001052fd770();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 1052fd6d0; end: 1052fd6df;  */

void FUN_1052fd6d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110877360;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1052fd6e0; end: 1052fd72f;  */

long FUN_1052fd6e0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1052fd730; end: 1052fd7f7;  */

void FUN_1052fd730(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1052fd7f8; end: 1052fd963;  */

void FUN_1052fd7f8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  func_0x00010c135700(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(&uStack_58);
  uVar2 = param_2;
  func_0x00010bf89180(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(&uStack_70);
  uVar3 = param_2;
  func_0x00010c270580();
  func_0x00010c0faa40(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_1052fd964(&uStack_90);
  uVar1 = uStack_60;
  param_1[1] = uStack_50;
  *param_1 = uStack_58;
  param_1[2] = uStack_48;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[4] = uStack_68;
  param_1[3] = uStack_70;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  param_1[5] = uVar1;
  param_1[6] = uVar3;
  param_1[8] = uStack_88;
  param_1[7] = uStack_90;
  param_1[9] = uStack_80;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  func_0x0001052fd218(&uStack_90);
  _objc_release(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_70);
  _objc_release(uVar2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_58);
  func_0x0001052fe078();
  func_0x0001052fe05c();
  return;
}



/* Entry: 1052fd964; end: 1052fdad7;  */

void FUN_1052fd964(undefined8 *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 auStack_140 [32];
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar2 = param_2;
  func_0x00010bf529e0(param_2);
  FUN_1052fdc24(param_1,puVar2);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  puVar2 = param_2;
  _objc_retain();
  func_0x0001052fe064();
  if (puVar2 != (undefined1 *)0x0) {
    lVar8 = *plStack_110;
    do {
      puVar9 = (undefined1 *)0x0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(param_2);
        }
        uVar7 = *(undefined8 *)(lStack_118 + (long)puVar9 * 8);
        _objc_retain(uVar7);
        FUN_1052feec8(auStack_140,uVar7);
        func_0x0001052fdf3c(param_1,auStack_140);
        puVar3 = auStack_140;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        func_0x0001052fe0b4();
        puVar9 = puVar9 + 1;
      } while (puVar9 < puVar2);
      func_0x0001052fe064();
      puVar2 = puVar3;
    } while (puVar3 != (undefined1 *)0x0);
  }
  lVar8 = 0;
  func_0x0001052fe05c();
  func_0x0001052fe05c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001052fe05c();
  func_0x0001052fd218(param_1);
  func_0x0001052fe05c();
  __Unwind_Resume();
  puVar4 = PTR_PTR_1126b7258;
  _objc_alloc(PTR_PTR_1126b7258);
  func_0x0001001011a4(lVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001001011a4(lVar8 + 0x18);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(lVar8 + 0x40);
  for (lVar8 = *(long *)(lVar8 + 0x38); lVar8 != lVar1; lVar8 = lVar8 + 0x20) {
    lVar6 = lVar8;
    FUN_1052fef7c(lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar5);
    _objc_release(lVar6);
  }
  func_0x00010bf51e00(puVar5);
  func_0x0001052fe0b4();
  func_0x00010c03ef00(puVar4);
  func_0x0001052fe09c();
  func_0x0001052fe078();
  func_0x0001052fe05c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}


