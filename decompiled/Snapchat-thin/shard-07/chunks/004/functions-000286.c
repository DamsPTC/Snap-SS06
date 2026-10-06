/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105528810; end: 10552881f; -[SCSnapInteractionCallback onSuccess:] */

void FUN_105528810(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010552881c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3);
  return;
}



/* Entry: 105528820; end: 10552884f; -[SCSnapInteractionCallback .cxx_destruct] */

void FUN_105528820(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105528850; end: 1055288f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105528850(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1 + _DAT_112725580;
    _objc_loadWeakRetained(lVar3);
    lVar1 = lVar3;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar2 = lVar1;
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb9f40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1055288f4; end: 10552890f;  */

void FUN_1055288f4(void)

{
  _objc_opt_new(PTR_PTR_1126ba5c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105528910; end: 1055289b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105528910(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1 + _DAT_112725580;
    _objc_loadWeakRetained(lVar3);
    lVar1 = lVar3;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar2 = lVar1;
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf366a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1055289b4; end: 1055289bb;  */

void FUN_1055289b4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c5ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_mediaOrchestratorLazy_11260f0c0);
  return;
}



/* Entry: 1055289bc; end: 105528a33;  */

void FUN_1055289bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc3e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105528a34; end: 105528a4b;  */

void FUN_105528a34(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105528a4c; end: 105528adb;  */

void FUN_105528a4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ba650;
  func_0x00010c11bd00(PTR_PTR_1126ba650,param_2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105528adc; end: 105528baf; -[SCNativeMessagingServicesEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105528adc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126afc98;
  func_0x00010bf0c040();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_1127255a0;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  _objc_opt_new();
  lVar3 = (long)_DAT_1127255a4;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1e62c0(*(undefined8 *)(param_1 + lVar3),param_2,0x19);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105528bb0;
  puStack_40 = &UNK_110842e18;
  lStack_38 = param_1;
  func_0x00010befa3a0(*(undefined8 *)(param_1 + lVar3),param_2,&puStack_58);
  func_0x00010c117720(*(undefined8 *)(param_1 + lVar4));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105528bb0; end: 105528bff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105528bb0(long param_1)

{
  func_0x00010bf86d40(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112725594));
  func_0x00010bf86d40(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112725598));
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127255a0),
             PTR_s_finish_1125c9748);
  return;
}



/* Entry: 105528c00; end: 105528e2b; -[SCNativeMessagingServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105528c00(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272558c);
  _objc_destroyWeak(param_1 + _DAT_112725614);
  _objc_destroyWeak(param_1 + _DAT_1127255b4);
  _objc_destroyWeak(param_1 + _DAT_112725610);
  _objc_storeStrong(param_1 + _DAT_11272559c,0);
  _objc_destroyWeak(param_1 + _DAT_1127255a8);
  _objc_destroyWeak(param_1 + _DAT_11272560c);
  _objc_destroyWeak(param_1 + _DAT_112725608);
  _objc_destroyWeak(param_1 + _DAT_1127255b0);
  _objc_destroyWeak(param_1 + _DAT_112725604);
  _objc_destroyWeak(param_1 + _DAT_1127255ac);
  _objc_destroyWeak(param_1 + _DAT_112725600);
  _objc_destroyWeak(param_1 + _DAT_1127255fc);
  _objc_destroyWeak(param_1 + _DAT_112725584);
  _objc_storeStrong(param_1 + _DAT_11272557c,0);
  _objc_destroyWeak(param_1 + _DAT_1127255f8);
  _objc_destroyWeak(param_1 + _DAT_112725590);
  _objc_destroyWeak(param_1 + _DAT_1127255f4);
  _objc_destroyWeak(param_1 + _DAT_1127255f0);
  _objc_destroyWeak(param_1 + _DAT_1127255ec);
  _objc_destroyWeak(param_1 + _DAT_1127255e8);
  _objc_destroyWeak(param_1 + _DAT_1127255e4);
  _objc_destroyWeak(param_1 + _DAT_1127255e0);
  _objc_destroyWeak(param_1 + _DAT_1127255dc);
  _objc_destroyWeak(param_1 + _DAT_1127255d8);
  _objc_destroyWeak(param_1 + _DAT_1127255d4);
  _objc_destroyWeak(param_1 + _DAT_1127255d0);
  _objc_destroyWeak(param_1 + _DAT_1127255cc);
  _objc_destroyWeak(param_1 + _DAT_1127255c8);
  _objc_destroyWeak(param_1 + _DAT_112725588);
  _objc_destroyWeak(param_1 + _DAT_1127255c4);
  _objc_destroyWeak(param_1 + _DAT_112725580);
  _objc_destroyWeak(param_1 + _DAT_1127255c0);
  _objc_destroyWeak(param_1 + _DAT_1127255bc);
  _objc_destroyWeak(param_1 + _DAT_1127255b8);
  _objc_storeStrong(param_1 + _DAT_112725578,0);
  _objc_storeStrong(param_1 + _DAT_112725574,0);
  _objc_storeStrong(param_1 + _DAT_1127255a4,0);
  _objc_storeStrong(param_1 + _DAT_1127255a0,0);
  _objc_storeStrong(param_1 + _DAT_112725598,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112725594,0);
  return;
}



/* Entry: 105528e2c; end: 105528e43;  */

void FUN_105528e2c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de9ef8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110de9ef8,
                      &PTR____CFConstantStringClassReference_110de9f18,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105528e44; end: 105528fb7;  */

void FUN_105528e44(long param_1,char *param_2,undefined1 *param_3)

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
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108955c0,&uStack_80,param_3);
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
  pcStack_88 = FUN_105528fb8;
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
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110895610,&uStack_100,puVar5);
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
  pcStack_108 = FUN_10552912c;
  if (pcVar3 != (char *)0x0) {
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    pcStack_120 = pcVar2;
    pcStack_118 = pcVar1;
    ppuStack_110 = &puStack_90;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_110895660,&uStack_140,pcVar4);
    func_0x00010007e5dc(&puStack_128);
  }
  return;
}



/* Entry: 105528fb8; end: 10552912b;  */

void FUN_105528fb8(long param_1,char *param_2,undefined8 param_3)

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
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110895610,&uStack_80,param_3);
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
  pcStack_88 = FUN_10552912c;
  if (pcVar3 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_110895660,&uStack_c0,pcVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 10552912c; end: 1055291a3;  */

void FUN_10552912c(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110895660,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1055291a4; end: 1055291af; -[SCNativeInitializeContextInfoDelegateImpl initializeContextInfo:localMessageContent:callback:] */

void FUN_1055291a4(void)

{
  undefined8 in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x00010c0e4910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(in_x4,PTR_s_onInitializeContextInfoComplete__112616c58,0);
  return;
}



/* Entry: 1055291b0; end: 1055291bb; -[SCNativeInitializeContextInfoDelegateImpl .cxx_destruct] */

void FUN_1055291b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055291bc; end: 1055292a7; -[SCNativeSendDelegateImpl updateIncidentalAttachments:localMessageContent:callback:] */

void FUN_1055291bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1055292a8;
  puStack_40 = &UNK_110850cc8;
  uStack_38 = param_5;
  _objc_retain(param_5);
  ppuVar1 = &puStack_58;
  _objc_retainBlock();
  func_0x00010bf0c4c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    (*(code *)ppuVar1[2])(ppuVar1,0);
  }
  else {
    func_0x00010c2867a0(param_1);
  }
  _objc_release(param_1);
  _objc_release(ppuVar1);
  _objc_release(uStack_38);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1055292a8; end: 1055292b7;  */

void FUN_1055292a8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e75b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onUpdateIncidentalAttachmentsCom_112617780,0,
             param_2);
  return;
}



/* Entry: 1055292b8; end: 1055293af; -[SCNativeSendDelegateImpl ensureStoryDestinationsCreated:localMessageContent:callback:] */

void FUN_1055292b8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_5);
  func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_1108956f0);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    func_0x00010c0e3e80(param_5);
  }
  else {
    func_0x00010bf0c4a0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      func_0x00010c0e3e80(param_5);
    }
    else {
      _objc_retain(param_5);
      func_0x00010bf96700(param_1);
      _objc_release(param_5);
    }
    _objc_release(param_1);
  }
  _objc_release(param_3);
  _objc_release(param_5);
  return;
}



/* Entry: 1055293b0; end: 1055293cf;  */

bool FUN_1055293b0(undefined8 param_1,long param_2)

{
  func_0x00010c25b720(param_2);
  return param_2 == 0xc;
}



/* Entry: 1055293d0; end: 1055293db;  */

void FUN_1055293d0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e3e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onEnsureStoryDestinationsCreated_1126169b8,
             param_2);
  return;
}



/* Entry: 1055293dc; end: 1055293f3; -[SCNativeSendDelegateImpl atomicStoryIncidentalAttachmentUpdater] */

void FUN_1055293dc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055293f4; end: 10552940b; -[SCNativeSendDelegateImpl atomicStoryDestinationEnsurer] */

void FUN_1055293f4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10552940c; end: 105529433; -[SCNativeSendDelegateImpl .cxx_destruct] */

void FUN_10552940c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105529434; end: 105529517; -[SCNativeUploadDelegateImpl _pluginForMediaReference:plugins:] */

void FUN_105529434(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  func_0x000107d6b14c();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bf00560(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105529518;
  puStack_40 = &UNK_110895710;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x0001006372a4(uVar1,&puStack_58);
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105529518; end: 10552954f;  */

bool FUN_105529518(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c28e2e0(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0c6f00(lVar1);
  return param_2 == lVar1;
}



/* Entry: 105529550; end: 10552975b; -[SCNativeUploadDelegateImpl _uploadMediaReference:appSource:contentType:trackingId:plugins:] */

void FUN_105529550(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_1;
  func_0x00010be75440();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar2 = param_3;
    func_0x000107d6b14c();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bee5c00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar6);
    _objc_initWeak(auStack_68,param_1);
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_retain(uVar5);
    _objc_retain(uVar6);
    uStack_70 = param_5;
    _objc_retain(uVar2);
    lVar4 = lVar3;
    func_0x00010c0b8600(lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(lVar3);
    _objc_release(uVar2);
  }
  else {
    lVar4 = lVar1;
    func_0x00010c28e220(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10552975c; end: 105529b83;  */

void FUN_10552975c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puStack_108;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    FUN_10552e060(&PTR____CFConstantStringClassReference_110de9f38,*(undefined8 *)(param_1 + 0x20),
                  *(undefined8 *)(param_1 + 0x28));
  }
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0c6220(uVar2);
  FUN_10552e1f8(param_2,uVar9,uVar2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28))
  ;
  lVar10 = *(long *)(param_1 + 0x30);
  _objc_retain(param_2);
  _objc_retain(lVar10);
  if (lVar10 == 0) {
    puStack_108 = (undefined *)0x0;
  }
  else {
    uVar2 = param_2;
    FUN_10552b8f8(param_2);
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = PTR_PTR_1126b0cd0;
    _objc_alloc();
    _objc_retain(param_2);
    puStack_80 = &uStack_88;
    uStack_88 = 0;
    uStack_78 = 0x2020000000;
    uStack_70 = 0;
    func_0x00010c0c08a0(param_2);
    __Block_object_dispose(&uStack_88,8);
    _objc_release(param_2);
    uVar9 = uVar2;
    func_0x00010bfa00c0(uVar2);
    func_0x00010552db80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_10552ba10(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    FUN_10552ba9c(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_2;
    FUN_10552bc68(param_2,lVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b0cd8;
    uVar6 = uVar2;
    func_0x00010c0c59e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc35c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04c280();
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar9);
    _objc_release(uVar2);
  }
  _objc_release(lVar10);
  _objc_release(param_2);
  _objc_retain(param_2);
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x2020000000;
  uStack_70 = uStack_70 & 0xffffffffffffff00;
  func_0x00010c0c08a0(param_2);
  __Block_object_dispose(&uStack_88,8);
  _objc_release(param_2);
  lVar10 = *(long *)(param_1 + 0x30);
  func_0x000107d6b248();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (lVar10 != 0)) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2997a0();
    _objc_release(uVar2);
  }
  puVar7 = PTR_PTR_1126b0cc8;
  func_0x00010c2bf040(PTR_PTR_1126b0cc8);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b0ce0;
  _objc_alloc(PTR_PTR_1126b0ce0);
  func_0x00010c059be0();
  _objc_release(puVar7);
  _objc_release(lVar10);
  _objc_release(puStack_108);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105529b84; end: 105529c1b; -[SCNativeUploadDelegateImpl _uploadPlatformMediaReference:appSource:contentType:trackingId:] */

void FUN_105529b84(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010c0c6f00();
  if (lVar1 == 0) {
    func_0x00010be5e9c0(param_1,param_2,param_3,param_6,param_5,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = 0;
  }
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105529c1c; end: 105529d4f; -[SCNativeUploadDelegateImpl uploadMedia:originalDestinations:callback:] */

void FUN_105529c1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c297260(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105529d50; end: 105529da7;  */

void FUN_105529d50(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee5ae0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105529da8; end: 10552a46b; -[SCNativeUploadDelegateImpl _uploadMessageContent:originalDestinations:plugins:callback:] */

void FUN_105529da8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined *puStack_270;
  undefined8 uStack_268;
  code *pcStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  ulong uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined1 auStack_210 [8];
  undefined *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_6;
  _objc_retain();
  _dispatch_group_create();
  puStack_128 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x3032000000;
  pcStack_118 = FUN_10552a46c;
  uStack_110 = 0x10552a47c;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc();
  uVar3 = param_3;
  func_0x00010c09dc00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bffc4a0();
  puStack_108 = puVar2;
  _objc_release(uVar3);
  puStack_158 = &uStack_160;
  uStack_160 = 0;
  uStack_150 = 0x3032000000;
  pcStack_148 = FUN_10552a46c;
  uStack_140 = 0x10552a47c;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc();
  uVar3 = param_3;
  func_0x00010c09dc00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bffc4a0();
  puStack_138 = puVar2;
  _objc_release(uVar3);
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010552e5e4();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf8c3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar4;
  func_0x00010bfdc300();
  _objc_release(uVar4);
  if ((uVar12 & 1) == 0) {
    uVar4 = param_3;
    func_0x00010c0fe1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar4;
    func_0x00010c0ccde0();
    if (uVar12 == 3) {
      puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
      _objc_alloc();
      uVar12 = uVar4;
      func_0x00010bf4bc60(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfeea60();
      _objc_release(uVar12);
      func_0x00010c1ec620(puVar2);
      puVar8 = puVar2;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar8;
      func_0x00010c23f880();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c247520();
      _objc_release(puVar5);
      _objc_release(puVar8);
      _objc_release(puVar2);
    }
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126ba5f0;
  func_0x00010bece3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar10);
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar11);
  lStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  plStack_190 = (long *)0x0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uVar3 = param_3;
  func_0x00010c09dc00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf52a60();
  if (uVar4 != 0) {
    lVar9 = *plStack_190;
    do {
      uVar12 = 0;
      do {
        if (*plStack_190 != lVar9) {
          _objc_enumerationMutation(uVar3);
        }
        puVar8 = *(undefined **)(lStack_198 + uVar12 * 8);
        func_0x00010bf4dac0(param_3);
        lVar6 = param_1;
        func_0x00010bee5a60();
        _objc_retainAutoreleasedReturnValue();
        if (lVar6 == 0) {
          puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar5 = puVar8;
          func_0x000107d6b14c();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0c6f00();
          FUN_10552dddc();
          _dispatch_group_enter(uVar1);
          _objc_initWeak(auStack_1a8,param_1);
          puStack_208 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_200 = 0xc2000000;
          pcStack_1f8 = FUN_10552a484;
          puStack_1f0 = &UNK_1108957a0;
          _objc_copyWeak(auStack_1b0,auStack_1a8);
          _objc_retain(uVar10);
          uStack_1e8 = uVar10;
          _objc_retain(uVar11);
          uStack_1e0 = uVar11;
          _objc_retain(puVar5);
          puStack_1c0 = &uStack_130;
          puStack_1b8 = &uStack_160;
          puStack_1d8 = puVar5;
          puStack_1d0 = puVar8;
          _objc_retain(uVar1);
          uStack_1c8 = uVar1;
          func_0x00010c297260(lVar6);
          _objc_release(uStack_1c8);
          _objc_release(puStack_1d8);
          _objc_release(uStack_1e0);
          _objc_release(uStack_1e8);
          _objc_destroyWeak(auStack_1b0);
          _objc_destroyWeak(auStack_1a8);
        }
        _objc_release(puVar5);
        _objc_release(lVar6);
        uVar12 = uVar12 + 1;
      } while (uVar4 != uVar12);
      uVar4 = uVar3;
      func_0x00010bf52a60();
    } while (uVar4 != 0);
  }
  _objc_release(uVar3);
  _objc_initWeak(auStack_1a8,param_1);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puStack_270 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_268 = 0xc2000000;
  pcStack_260 = FUN_10552a660;
  puStack_258 = &UNK_110895830;
  _objc_copyWeak(auStack_210,auStack_1a8);
  puStack_220 = &uStack_130;
  puStack_218 = &uStack_160;
  uStack_250 = uVar10;
  uStack_248 = uVar11;
  uStack_240 = param_3;
  uStack_238 = param_4;
  puStack_230 = puVar2;
  uStack_228 = param_6;
  _objc_retain();
  _objc_retain(puVar2);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(uVar11);
  _objc_retain(uVar10);
  func_0x000100bc0718(uVar1,uVar7,&puStack_270);
  _objc_release(uVar7);
  _objc_release(uStack_228);
  _objc_release(puStack_230);
  _objc_release(uStack_238);
  _objc_release(uStack_240);
  _objc_release(uStack_248);
  _objc_release(uStack_250);
  _objc_release(uVar11);
  _objc_destroyWeak(auStack_210);
  _objc_destroyWeak(auStack_1a8);
  _objc_release(uVar10);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_160,8);
  _objc_release(puStack_138);
  __Block_object_dispose(&uStack_130,8);
  _objc_release(puStack_108);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_1a8);
  __Block_object_dispose(&uStack_160,8);
  lVar9 = 8;
  __Block_object_dispose(&uStack_130);
  __Unwind_Resume();
  *(undefined8 *)(param_5 + 0x28) = *(undefined8 *)(lVar9 + 0x28);
  *(undefined8 *)(lVar9 + 0x28) = 0;
  return;
}



/* Entry: 10552a46c; end: 10552a483;  */

void FUN_10552a46c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10552a484; end: 10552a5ef;  */

void FUN_10552a484(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x58;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    FUN_10552e060(&PTR____CFConstantStringClassReference_110de9f78,*(undefined8 *)(param_1 + 0x20),
                  *(undefined8 *)(param_1 + 0x28));
  }
  uVar3 = param_2;
  func_0x00010c28e5a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10552dee0();
  _objc_release(uVar3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
  func_0x000107d6b0b8();
  if (iVar1 != 0) {
    uVar3 = param_2;
    func_0x00010c28e5a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c51a0();
    _objc_release(uVar3);
  }
  uVar3 = param_2;
  func_0x00010c28e5a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfe5d80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_2;
  func_0x00010bf4c1a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfe5d80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x40));
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10552a5f0; end: 10552a65f;  */

void FUN_10552a5f0(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x58,param_2 + 0x58);
  return;
}



/* Entry: 10552a660; end: 10552a7c3;  */

void FUN_10552a660(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    FUN_10552e060(&PTR____CFConstantStringClassReference_110de9f98,*(undefined8 *)(param_1 + 0x20),
                  *(undefined8 *)(param_1 + 0x28));
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c09dc00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100504554();
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c09dc00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x000100504554();
  _objc_release(uVar4);
  lVar5 = *(long *)(param_1 + 0x30);
  if (lVar1 == 0) {
    _objc_retain(lVar5);
  }
  else {
    lVar5 = lVar1;
    func_0x00010bee5340(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0e7600(*(undefined8 *)(param_1 + 0x48));
  _objc_release(lVar5);
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10552a7c4; end: 10552a87b;  */

void FUN_10552a7c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  func_0x00010bfe5d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10552a87c; end: 10552aebb; -[SCNativeUploadDelegateImpl _updatedLocalMessageContentWithLocalMessageContent:originalDestinations:trackingId:contentData:] */

void FUN_10552a87c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined *puStack_2a8;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126ba668;
  _objc_alloc_init();
  puVar3 = PTR_PTR_1126ba668;
  _objc_alloc();
  puVar4 = param_3;
  func_0x00010bf4bc60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008360();
  _objc_release(puVar4);
  puStack_128 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x3032000000;
  pcStack_118 = FUN_10552a46c;
  uStack_110 = 0x10552a47c;
  puVar4 = param_3;
  func_0x00010552e5e4();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  puStack_108 = puVar4;
  func_0x00010bf4ce20();
  if ((int)puVar5 == 3) {
    puStack_2a8 = puVar3;
    func_0x00010bf9e280();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_2a8 = (undefined *)0x0;
  }
  puStack_148 = &uStack_150;
  uStack_150 = 0;
  uStack_140 = 0x2020000000;
  uStack_138 = 0;
  _objc_retain(param_6);
  lVar6 = param_6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar21 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_6);
      }
      uVar22 = *(undefined8 *)(lVar21 * 8);
      _objc_retain(puVar2);
      _objc_retain(puVar3);
      _objc_retain(puStack_2a8);
      _objc_retain(puVar2);
      _objc_retain(puVar3);
      _objc_retain(param_4);
      _objc_retain(param_5);
      _objc_retain(puVar2);
      _objc_retain(puVar2);
      func_0x00010c0bd260(uVar22);
      _objc_release(puVar2);
      _objc_release(puVar2);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puStack_2a8);
      _objc_release(puVar3);
      _objc_release(puVar2);
      lVar21 = lVar21 + 1;
    } while (lVar6 != lVar21);
    lVar6 = param_6;
    func_0x00010bf52a60();
  }
  _objc_release(param_6);
  puVar4 = puVar2;
  func_0x00010bf4ce20();
  if ((int)puVar4 == 0) {
    _objc_retain(param_3);
    puVar4 = param_3;
  }
  else {
    puVar4 = PTR_PTR_1126ba670;
    _objc_alloc();
    puVar5 = puVar2;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4dac0();
    puVar7 = param_3;
    func_0x00010c0fe1c0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_3;
    func_0x00010c09dc00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14ab60();
    puVar9 = param_3;
    func_0x00010bfeba20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf01b00();
    puVar10 = param_3;
    func_0x00010c11ecc0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_3;
    func_0x00010bfa3b40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1fda0();
    puVar12 = param_3;
    func_0x00010c0cba20();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = param_3;
    func_0x00010c12a260();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = param_3;
    func_0x00010bf24ae0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = param_3;
    func_0x00010bf9df20();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = param_3;
    func_0x00010c0cb280();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = param_3;
    func_0x00010c2421a0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = param_3;
    func_0x00010c09dd60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002ba0(puVar4);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
  }
  __Block_object_dispose(&uStack_150,8);
  _objc_release(puStack_2a8);
  __Block_object_dispose(&uStack_130,8);
  _objc_release(puStack_108);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_150,8);
  __Block_object_dispose(&uStack_130,8);
  __Unwind_Resume();
  func_0x00010c185940(*(undefined8 *)(param_3 + 0x20));
  uVar19 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010bf676a0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar19;
  func_0x00010bfdcce0();
  _objc_release(uVar19);
  if ((int)uVar22 != 0) {
    uVar19 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010bf676a0(uVar19);
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar19;
    func_0x00010c25ada0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010bf676a0(uVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20d8e0();
    _objc_release(uVar20);
    _objc_release(uVar22);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar19);
    return;
  }
  return;
}



/* Entry: 10552aebc; end: 10552af77;  */

void FUN_10552aebc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c185940(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf676a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdcce0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf676a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c25ada0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf676a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20d8e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10552af78; end: 10552b1f7;  */

/* WARNING: Possible PIC construction at 0x00010552b16c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010552b1d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010552b170) */
/* WARNING: Removing unreachable block (ram,0x00010552b1dc) */

void FUN_10552af78(long param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long lVar12;
  long unaff_x22;
  ulong uVar13;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (param_3 != 0) {
    lVar11 = *(long *)(*(long *)(param_1 + 0x50) + 8);
    uVar13 = *(ulong *)(lVar11 + 0x18);
    *(ulong *)(lVar11 + 0x18) = uVar13 + 1;
    if (param_4 != 0) {
      lVar12 = *(long *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x28);
      _objc_retain(lVar12);
      uVar3 = *(ulong *)(param_1 + 0x20);
      lVar11 = lVar12;
      if ((uVar3 != 0) && (func_0x00010c245420(), uVar13 < uVar3)) {
        lVar4 = *(long *)(param_1 + 0x20);
        func_0x00010c245400();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar4;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar12);
        _objc_release(lVar4);
      }
      lVar12 = lVar11;
      FUN_10552e698();
      _objc_retainAutoreleasedReturnValue();
      if (lVar12 != 0) {
        lVar4 = lVar12;
        func_0x00010c299160();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf3f020();
        _objc_release(lVar4);
        if ((int)lVar5 != param_4) {
          lVar4 = lVar12;
          func_0x00010c299160(lVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c17dd40();
          _objc_release(lVar4);
          if (*(long *)(param_1 + 0x20) == 0) {
            func_0x00010c206100(*(undefined8 *)(param_1 + 0x28));
          }
          else {
            func_0x00010c199640(*(undefined8 *)(param_1 + 0x28));
          }
          iVar2 = (int)*(undefined8 *)(param_1 + 0x30);
          func_0x00010bfd62e0();
          if (iVar2 != 0) {
            uVar6 = *(undefined8 *)(param_1 + 0x30);
            func_0x00010bf676a0(uVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c18a500(*(undefined8 *)(param_1 + 0x28));
            _objc_release(uVar6);
          }
        }
      }
      _objc_release(lVar12);
      _objc_release(lVar11);
    }
    lVar12 = *(long *)(param_1 + 0x38);
    func_0x00010c258040();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar12;
    func_0x00010bf529e0();
    _objc_release(lVar12);
    if (lVar11 == 0) {
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x10);
      uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x18);
      ppuVar7 = &PTR____CFConstantStringClassReference_110de9fb8;
    }
    else {
      lVar12 = *(long *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x28);
      if (lVar12 == 0) {
        uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x10);
        uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x18);
        ppuVar7 = &PTR____CFConstantStringClassReference_110de9fd8;
      }
      else {
        FUN_10552e698();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar12;
        func_0x00010c2bf020();
        uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x10);
        uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x18);
        unaff_x19 = param_1;
        unaff_x20 = param_2;
        unaff_x21 = lVar12;
        unaff_x22 = lVar11;
        unaff_x29 = puVar1;
        if ((int)param_2 == (int)lVar4) {
          ppuVar7 = &PTR____CFConstantStringClassReference_110de9fd8;
          unaff_x30 = 0x10552b1dc;
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
        }
        else {
          ppuVar7 = &PTR____CFConstantStringClassReference_110de9ff8;
          unaff_x30 = 0x10552b170;
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
        }
      }
    }
    puVar8 = PTR_PTR_1126b2950;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    _objc_retain(uVar10,uVar6);
    _objc_retain(ppuVar7);
    func_0x00010c0c72a0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    _objc_release(puVar8);
    uVar6 = uVar10;
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    uVar10 = uVar6;
    func_0x00010bf366a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar10);
    _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar9);
    return;
  }
  return;
}



/* Entry: 10552b1f8; end: 10552b263;  */

void FUN_10552b1f8(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  return;
}



/* Entry: 10552b264; end: 10552b383;  */

void FUN_10552b264(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_9);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if ((param_3 != 0) && (lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010be2e800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c206100(*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10552b384; end: 10552b3f7;  */

void FUN_10552b384(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010be2a8e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c206100(*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10552b3f8; end: 10552b793; -[SCNativeUploadDelegateImpl uploadMediaReferences:callback:] */

void FUN_10552b3f8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined8 *puStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_4;
  _objc_retain();
  _dispatch_group_create();
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x3032000000;
  pcStack_120 = FUN_10552a46c;
  uStack_118 = 0x10552a47c;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puStack_110 = puVar2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  lStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  plStack_170 = (long *)0x0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar11 = *plStack_170;
    do {
      lVar12 = 0;
      do {
        if (*plStack_170 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        uVar13 = *(undefined8 *)(lStack_178 + lVar12 * 8);
        uVar6 = uVar13;
        func_0x000107d6b14c();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_1;
        func_0x00010bee5c00();
        _objc_retainAutoreleasedReturnValue();
        puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1a0 = 0xc2000000;
        pcStack_198 = FUN_10552b794;
        puStack_190 = &UNK_1108958f0;
        _objc_retain(uVar6);
        lVar5 = lVar4;
        uStack_188 = uVar6;
        func_0x00010c0b8600();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        if (lVar5 == 0) {
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
        }
        else {
          _dispatch_group_enter(lVar1);
          puStack_1e0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_1d8 = 0xc2000000;
          pcStack_1d0 = FUN_10552bd74;
          puStack_1c8 = &UNK_110895920;
          puStack_1b0 = &uStack_138;
          uStack_1c0 = uVar13;
          _objc_retain(lVar1);
          lStack_1b8 = lVar1;
          func_0x00010c297260(lVar5);
          _objc_release(lStack_1b8);
        }
        _objc_release(lVar5);
        _objc_release(uStack_188);
        _objc_release(uVar6);
        lVar12 = lVar12 + 1;
      } while (lVar3 != lVar12);
      lVar3 = param_3;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_218 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_210 = 0xc2000000;
  pcStack_208 = FUN_10552bdec;
  puStack_200 = &UNK_11084fa08;
  puStack_1e8 = &uStack_138;
  lStack_1f8 = param_3;
  lStack_1f0 = param_4;
  _objc_retain();
  _objc_retain(param_3);
  func_0x000100bc0718(lVar1,uVar6,&puStack_218);
  _objc_release(uVar6);
  _objc_release(lStack_1f0);
  _objc_release(lStack_1f8);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_138,8);
  _objc_release(puStack_110);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  uVar10 = 8;
  __Block_object_dispose(&uStack_138);
  __Unwind_Resume();
  _objc_retain(uVar10);
  uVar6 = uVar10;
  FUN_10552b8f8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08a240();
  uVar13 = uVar6;
  FUN_10552ba10(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  FUN_10552ba9c(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar10;
  FUN_10552bc68(uVar10,*(undefined8 *)(lVar1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  uVar10 = uVar8;
  func_0x00010c0c6260(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  puVar2 = PTR_PTR_1126ba678;
  _objc_alloc(PTR_PTR_1126ba678);
  uVar10 = uVar9;
  func_0x00010bf4cce0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04c220(puVar2);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar13);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10552b794; end: 10552b8f7;  */

void FUN_10552b794(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  FUN_10552b8f8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08a240();
  uVar2 = uVar1;
  FUN_10552ba10(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  FUN_10552ba9c(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  FUN_10552bc68(param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar5 = uVar4;
  func_0x00010c0c6260(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar7 = PTR_PTR_1126ba678;
  _objc_alloc(PTR_PTR_1126ba678);
  uVar5 = uVar6;
  func_0x00010bf4cce0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04c220(puVar7);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10552b8f8; end: 10552ba0f;  */

void FUN_10552b8f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10552a46c;
  uStack_30 = 0x10552a47c;
  uStack_28 = 0;
  func_0x00010c0c08a0(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10552ba10; end: 10552ba9b;  */

void FUN_10552ba10(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c08a240();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 - 1U < 4) {
    lVar1 = param_1;
    func_0x00010c08a200();
    if (lVar1 - 1U < 4) {
      uVar2 = *(undefined8 *)(&UNK_10ddb1420 + (lVar1 - 1U) * 8);
    }
    else {
      uVar2 = 6;
    }
    func_0x00010c0df780(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10552ba9c; end: 10552bc67;  */

void FUN_10552ba9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 unaff_x22;
  long lVar7;
  long lVar8;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
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
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = param_1;
  func_0x00010c270960();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar2);
        }
        lVar4 = param_1;
        func_0x00010c270960(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c067fc0();
        func_0x00010c0df780(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(puVar6);
        _objc_release(lVar5);
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar2;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  puVar6 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  lVar2 = param_1;
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_138 = FUN_10552bc68;
    uStack_160 = unaff_x22;
    puStack_158 = puVar6;
    puStack_150 = puVar1;
    lStack_148 = param_1;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(param_2);
    puStack_188 = &uStack_190;
    uStack_190 = 0;
    uStack_180 = 0x3032000000;
    pcStack_178 = FUN_10552a46c;
    uStack_170 = 0x10552a47c;
    uStack_168 = 0;
    _objc_retain(param_2);
    func_0x00010c0c08a0(lVar2);
    puVar6 = (undefined *)puStack_188[5];
    _objc_retain(puVar6);
    _objc_release(param_2);
    __Block_object_dispose(&uStack_190,8);
    _objc_release(uStack_168);
    _objc_release(param_2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10552bc68; end: 10552bd73;  */

void FUN_10552bc68(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10552a46c;
  uStack_40 = 0x10552a47c;
  uStack_38 = 0;
  _objc_retain(param_2);
  func_0x00010c0c08a0(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10552bd74; end: 10552bdeb;  */

void FUN_10552bd74(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bfe5d80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10552bdec; end: 10552bebf;  */

void FUN_10552bdec(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10552be64;
  puStack_30 = &UNK_110895950;
  uStack_28 = *(undefined8 *)(param_1 + 0x30);
  func_0x000100504554(uVar1,&puStack_48);
  func_0x00010c0e75e0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10552bec0; end: 10552bfc3; -[SCNativeUploadDelegateImpl queryUploadStatus:uploadStatusCallback:] */

void FUN_10552bec0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10552bfc4;
  puStack_58 = &UNK_11084c4a0;
  _objc_retain(uVar1);
  uStack_50 = uVar1;
  _objc_retain(param_3);
  uStack_48 = param_3;
  _objc_retain(uVar2);
  uStack_40 = uVar2;
  _objc_retain(param_4);
  uStack_38 = param_4;
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_70);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10552bfc4; end: 10552c29f;  */

void FUN_10552bfc4(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  long lStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  long lStack_238;
  undefined **ppuStack_230;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  _dispatch_group_create();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar10 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar10);
  lVar4 = lVar10;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar13 = *plStack_130;
    do {
      lVar8 = 0;
      do {
        if (*plStack_130 != lVar13) {
          _objc_enumerationMutation(lVar10);
        }
        puVar12 = *(undefined **)(lStack_138 + lVar8 * 8);
        puVar5 = puVar12;
        func_0x000107d6b108();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c08fa60();
        if (puVar6 == (undefined *)0x0 || lVar3 == 0) {
          puVar6 = puVar12;
          FUN_10552c2a0(puVar12,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe5d80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar2);
          _objc_release(puVar12);
        }
        else {
          _dispatch_group_enter(puVar1);
          puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_170 = 0xc2000000;
          pcStack_168 = FUN_10552c810;
          puStack_160 = &UNK_110895980;
          _objc_retain(puVar2);
          puStack_158 = puVar2;
          puStack_150 = puVar12;
          _objc_retain(puVar1);
          puStack_148 = puVar1;
          func_0x00010c11db00(lVar3);
          _objc_release(puStack_148);
          puVar6 = puStack_158;
        }
        _objc_release(puVar6);
        _objc_release(puVar5);
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
      lVar4 = lVar10;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar10);
  lVar10 = *(long *)(param_1 + 0x30);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0xc2000000;
  uStack_1a0 = 0x10552c880;
  puStack_198 = &UNK_110848ba8;
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar11);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  uStack_190 = uVar11;
  puStack_188 = puVar2;
  _objc_retain(uVar9);
  uStack_180 = uVar9;
  _objc_retain(puVar2);
  lVar4 = lVar10;
  func_0x000100bc0718(puVar1,lVar10,&puStack_1b0);
  _objc_release(lVar10);
  _objc_release(uStack_180);
  _objc_release(puStack_188);
  _objc_release(uStack_190);
  _objc_release(puVar2);
  _objc_release(lVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_retain(lVar4);
    puVar2 = PTR_PTR_1126ba6a8;
    if (lVar4 == 0) {
      _objc_retain(puVar1);
      _objc_alloc(puVar2);
      func_0x00010c026960();
    }
    else {
      _objc_retain(puVar1);
      lVar3 = lVar4;
      func_0x00010c279c20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar5 = (undefined *)0x0;
      if (lVar3 != 0) {
        puVar5 = PTR_PTR_1126ba6a0;
        _objc_alloc();
        lVar3 = lVar4;
        func_0x00010c279c20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        lVar10 = lVar4;
        func_0x00010c279c40(lVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar4;
        func_0x00010c279a00(lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c035840();
        _objc_release(lVar13);
        _objc_release(lVar10);
        _objc_release(lVar3);
      }
      lVar3 = lVar4;
      func_0x00010c28e340();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar5 == (undefined *)0x0) {
        if (lVar3 == 0) {
          lVar3 = lVar4;
          func_0x00010c088760();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          ppuStack_230 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (lVar3 == 0) {
            ppuStack_230 = (undefined **)0x0;
          }
          else {
            lVar3 = lVar4;
            func_0x00010c088760();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2827c0();
            func_0x00010c0df780();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar3);
          }
        }
        else {
          ppuStack_230 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c06e8;
        }
      }
      else {
        ppuStack_230 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c07c0;
      }
      lVar3 = lVar4;
      func_0x00010bfa00c0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        lStack_238 = 0;
      }
      else {
        lVar10 = lVar4;
        func_0x00010bfa00c0();
        _objc_retainAutoreleasedReturnValue();
        lStack_238 = lVar10;
        func_0x00010c2827c0();
        func_0x00010552db80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar10);
      }
      _objc_release(lVar3);
      lVar3 = lVar4;
      func_0x00010c08a700();
      _objc_retainAutoreleasedReturnValue();
      puStack_240 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (lVar3 == 0) {
        puStack_240 = (undefined *)0x0;
      }
      else {
        lVar10 = lVar4;
        func_0x00010c08a700(lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        func_0x00010c0df7c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar10);
      }
      _objc_release(lVar3);
      lVar3 = lVar4;
      func_0x00010c0c59e0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar3;
      func_0x00010c08fa60();
      puStack_248 = PTR_PTR_1126b0cd8;
      if (lVar10 == 0) {
        puStack_248 = (undefined *)0x0;
      }
      else {
        lVar10 = lVar4;
        func_0x00010c0c59e0(lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc35c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar10);
      }
      _objc_release(lVar3);
      lVar3 = lVar4;
      func_0x00010c28e340();
      _objc_retainAutoreleasedReturnValue();
      if ((lVar3 == 0) || (lVar10 = lVar3, func_0x00010c067fc0(), lVar10 != 1)) {
        _objc_release(lVar3);
        lStack_250 = 0;
        lVar3 = 0;
      }
      else {
        _objc_release(lVar3);
        lStack_250 = lVar4;
        func_0x00010c28e620();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar4;
        func_0x00010c28e980();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar2 = PTR_PTR_1126ba6a8;
      _objc_alloc(PTR_PTR_1126ba6a8);
      func_0x00010c160420();
      _objc_retain(lVar4);
      lVar10 = lVar4;
      func_0x00010c160420();
      ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (lVar10 == 5) {
        ppuVar7 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c06e8;
      }
      else if (lVar10 == 4) {
        lVar10 = lVar4;
        func_0x00010c08a240();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        if ((lVar10 != 0) && (lVar13 = lVar10, func_0x00010c2827c0(), lVar13 - 1U < 3)) {
          func_0x00010c2827c0();
        }
        _objc_release(lVar10);
        func_0x00010c0df780(ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar10);
      }
      else {
        ppuVar7 = (undefined **)0x0;
        if (lVar10 == 3) {
          ppuVar7 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c07d8;
        }
      }
      _objc_release(lVar4);
      func_0x00010c026940(puVar2);
      _objc_release(puVar1);
      _objc_release(ppuVar7);
      _objc_release(lVar3);
      _objc_release(lStack_250);
      _objc_release(puStack_248);
      _objc_release(puStack_240);
      _objc_release(lStack_238);
      _objc_release(ppuStack_230);
      puVar1 = puVar5;
    }
    _objc_release(puVar1);
    _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10552c2a0; end: 10552c80f;  */

void FUN_10552c2a0(undefined *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined **ppuStack_70;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126ba6a8;
  if (param_2 == 0) {
    _objc_retain(param_1);
    _objc_alloc(puVar2);
    func_0x00010c026960();
  }
  else {
    _objc_retain(param_1);
    lVar6 = param_2;
    func_0x00010c279c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar1 = (undefined *)0x0;
    if (lVar6 != 0) {
      puVar1 = PTR_PTR_1126ba6a0;
      _objc_alloc();
      lVar6 = param_2;
      func_0x00010c279c20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      lVar3 = param_2;
      func_0x00010c279c40(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_2;
      func_0x00010c279a00(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c035840();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar6);
    }
    lVar6 = param_2;
    func_0x00010c28e340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar1 == (undefined *)0x0) {
      if (lVar6 == 0) {
        lVar6 = param_2;
        func_0x00010c088760();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        ppuStack_70 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (lVar6 == 0) {
          ppuStack_70 = (undefined **)0x0;
        }
        else {
          lVar6 = param_2;
          func_0x00010c088760();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2827c0();
          func_0x00010c0df780();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar6);
        }
      }
      else {
        ppuStack_70 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c06e8;
      }
    }
    else {
      ppuStack_70 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c07c0;
    }
    lVar6 = param_2;
    func_0x00010bfa00c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      lStack_78 = 0;
    }
    else {
      lVar3 = param_2;
      func_0x00010bfa00c0();
      _objc_retainAutoreleasedReturnValue();
      lStack_78 = lVar3;
      func_0x00010c2827c0();
      func_0x00010552db80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
    }
    _objc_release(lVar6);
    lVar6 = param_2;
    func_0x00010c08a700();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar6 == 0) {
      puStack_80 = (undefined *)0x0;
    }
    else {
      lVar3 = param_2;
      func_0x00010c08a700(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x00010c0df7c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
    }
    _objc_release(lVar6);
    lVar6 = param_2;
    func_0x00010c0c59e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x00010c08fa60();
    puStack_88 = PTR_PTR_1126b0cd8;
    if (lVar3 == 0) {
      puStack_88 = (undefined *)0x0;
    }
    else {
      lVar3 = param_2;
      func_0x00010c0c59e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc35c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
    }
    _objc_release(lVar6);
    lVar6 = param_2;
    func_0x00010c28e340();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar6 == 0) || (lVar3 = lVar6, func_0x00010c067fc0(), lVar3 != 1)) {
      _objc_release(lVar6);
      lStack_90 = 0;
      lVar6 = 0;
    }
    else {
      _objc_release(lVar6);
      lStack_90 = param_2;
      func_0x00010c28e620();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_2;
      func_0x00010c28e980();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar2 = PTR_PTR_1126ba6a8;
    _objc_alloc(PTR_PTR_1126ba6a8);
    func_0x00010c160420();
    _objc_retain(param_2);
    lVar3 = param_2;
    func_0x00010c160420();
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar3 == 5) {
      ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c06e8;
    }
    else if (lVar3 == 4) {
      lVar3 = param_2;
      func_0x00010c08a240();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      if ((lVar3 != 0) && (lVar4 = lVar3, func_0x00010c2827c0(), lVar4 - 1U < 3)) {
        func_0x00010c2827c0();
      }
      _objc_release(lVar3);
      func_0x00010c0df780(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
    }
    else {
      ppuVar5 = (undefined **)0x0;
      if (lVar3 == 3) {
        ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c07d8;
      }
    }
    _objc_release(param_2);
    func_0x00010c026940(puVar2);
    _objc_release(param_1);
    _objc_release(ppuVar5);
    _objc_release(lVar6);
    _objc_release(lStack_90);
    _objc_release(puStack_88);
    _objc_release(puStack_80);
    _objc_release(lStack_78);
    _objc_release(ppuStack_70);
    param_1 = puVar1;
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10552c810; end: 10552c9b7;  */

void FUN_10552c810(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  FUN_10552c2a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfe5d80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10552c9b8; end: 10552cab3; -[SCNativeUploadDelegateImpl resetUpload:callback:] */

void FUN_10552c9b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10552cab4;
  puStack_58 = &UNK_11084c4a0;
  uStack_50 = uVar1;
  uStack_48 = param_3;
  uStack_40 = uVar2;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(uVar2);
  _objc_retain(param_3);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_70);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10552cab4; end: 10552cdaf;  */

void FUN_10552cab4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long lStack_158;
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
  lVar1 = param_1;
  _dispatch_group_create();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lVar10 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar10);
  lVar4 = lVar10;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar13 = *plStack_140;
    do {
      lVar8 = 0;
      do {
        if (*plStack_140 != lVar13) {
          _objc_enumerationMutation(lVar10);
        }
        puVar12 = *(undefined **)(lStack_148 + lVar8 * 8);
        puVar5 = puVar12;
        func_0x000107d6b108();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c08fa60();
        if (puVar6 == (undefined *)0x0 || lVar3 == 0) {
          puVar6 = PTR_PTR_1126ba680;
          _objc_alloc(PTR_PTR_1126ba680);
          func_0x00010c026900();
          func_0x00010bfe5d80(puVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar2);
          _objc_release(puVar12);
        }
        else {
          _dispatch_group_enter(lVar1);
          puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_188 = 0xc2000000;
          pcStack_180 = FUN_10552cdb0;
          puStack_178 = &UNK_1108959e0;
          _objc_retain(puVar5);
          puStack_170 = puVar5;
          _objc_retain(puVar2);
          puStack_168 = puVar2;
          puStack_160 = puVar12;
          _objc_retain(lVar1);
          lStack_158 = lVar1;
          func_0x00010c139ba0(lVar3);
          _objc_release(lStack_158);
          _objc_release(puStack_168);
          puVar6 = puStack_170;
        }
        _objc_release(puVar6);
        _objc_release(puVar5);
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
      lVar4 = lVar10;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar10);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c0 = 0xc2000000;
  uStack_1b8 = 0x10552ce38;
  puStack_1b0 = &UNK_110848ba8;
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar11);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  uStack_1a8 = uVar11;
  puStack_1a0 = puVar2;
  _objc_retain(uVar9);
  uStack_198 = uVar9;
  _objc_retain(puVar2);
  func_0x000100bc0718(lVar1,uVar7,&puStack_1c8);
  _objc_release(uVar7);
  _objc_release(uStack_198);
  _objc_release(puStack_1a0);
  _objc_release(uStack_1a8);
  _objc_release(puVar2);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126ba680;
  _objc_alloc(PTR_PTR_1126ba680);
  func_0x00010c026900();
  uVar7 = *(undefined8 *)(lVar1 + 0x28);
  uVar9 = *(undefined8 *)(lVar1 + 0x30);
  func_0x00010bfe5d80(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar7);
  _objc_release(uVar9);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(lVar1 + 0x38));
  return;
}



/* Entry: 10552cdb0; end: 10552cf73;  */

void FUN_10552cdb0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126ba680;
  _objc_alloc(PTR_PTR_1126ba680);
  func_0x00010c026900();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfe5d80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar1);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 10552cf74; end: 10552d0b7; -[SCNativeUploadDelegateImpl _mediaOrchestrationResultFromLocalMediaReference:trackingId:contentType:appSource:] */

void FUN_10552cf74(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_4);
  func_0x000107d6b248();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10552d0b8;
    puStack_60 = &UNK_110895a40;
    _objc_retain(param_3);
    lStack_58 = param_3;
    _objc_retain(param_4);
    uStack_50 = param_4;
    puStack_48 = puVar1;
    _objc_retain(puVar1);
    func_0x00010c13db80(uVar2,param_2,param_3,param_6,uVar4,&puStack_78);
    _objc_release(uVar2);
    puVar3 = puVar1;
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_48);
    _objc_release(uStack_50);
    _objc_release(lStack_58);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10552d0b8; end: 10552d0c3;  */

void FUN_10552d0b8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 10552d0c4; end: 10552d1ab; +[SCNativeUploadDelegateImpl _trackingIdFromLocalMessageContent:] */

void FUN_10552d0c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  func_0x00010bf4dac0(param_3);
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc(PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98);
  uVar2 = param_3;
  func_0x00010c0fe1c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bf4bc60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfeea60(puVar1,param_2,uVar3,0);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c1ec620(puVar1,param_2,0);
  puVar4 = puVar1;
  func_0x00010bf67000(puVar1,param_2,*(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c294d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10552d1ac; end: 10552d3bb; -[SCNativeUploadDelegateImpl _handleILCWithSnapDoc:customizationId:] */

void FUN_10552d1ac(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf0d800();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126b25f0;
    _objc_opt_new();
  }
  puVar2 = puVar1;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c091b80();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 == (undefined *)0x0) {
    puVar7 = PTR_PTR_1126b13a8;
    _objc_opt_new(PTR_PTR_1126b13a8);
  }
  else {
    _objc_retain(puVar6);
    puVar7 = puVar6;
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = puVar7;
  func_0x00010bf62d40(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189040();
  _objc_release(param_4);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bf4e080(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bb340();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar2 = param_3;
    func_0x00010bf0d7e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf0d800();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar7);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10552d3bc; end: 10552d3db;  */

bool FUN_10552d3bc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf0d0a0(param_2);
  return (int)param_2 == 1;
}



/* Entry: 10552d3dc; end: 10552d76b; -[SCNativeUploadDelegateImpl _handlePromptLensWithSnapDoc:promptId:key:promptCreatorUserId:promptReceiverUserId:turnBased:score:isCompleteAtCapture:lensName:] */

void FUN_10552d3dc(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8,long param_9,
                  undefined1 param_10,undefined4 param_11,long param_12)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 uVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf0d800();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x00010bf529e0();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b25f0;
    _objc_opt_new();
  }
  else {
    puVar2 = puVar3;
    func_0x00010c0dfd40(puVar3,param_2,0);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = puVar2;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c091b80();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 == (undefined *)0x0) {
    puVar8 = PTR_PTR_1126b13a8;
    _objc_opt_new(PTR_PTR_1126b13a8);
  }
  else {
    _objc_retain(puVar7);
    puVar8 = puVar7;
  }
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c1e4da0(puVar8,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c195ce0(puVar8,param_2,param_5);
  _objc_release(param_5);
  uVar11 = 2;
  if (param_8 != 0) {
    uVar11 = 3;
  }
  func_0x00010c1e6120(puVar8,param_2,uVar11);
  uVar9 = param_1;
  func_0x00010c2924a0(param_1,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010c1e4cc0(puVar8,param_2,uVar9);
  _objc_release(uVar9);
  func_0x00010c2924a0(param_1,param_2,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010c1e4e80(puVar8,param_2,param_1);
  _objc_release(param_1);
  if (param_9 != 0) {
    func_0x00010c0b4ca0(param_9);
    puVar4 = puVar8;
    func_0x00010c150c20(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220160();
    _objc_release(puVar4);
  }
  func_0x00010c1b0100(puVar8,param_2,param_10);
  lVar10 = param_12;
  func_0x00010c08fa60();
  if (lVar10 != 0) {
    func_0x00010c1bc3c0(puVar8,param_2,param_12);
  }
  puVar4 = puVar2;
  func_0x00010bf4e080(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c27f9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bb340();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = param_3;
    func_0x00010bf0d7e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf0d800();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar4);
    _objc_release(puVar1);
  }
  _objc_release(puVar8);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(param_12);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10552d76c; end: 10552d78b;  */

bool FUN_10552d76c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf0d0a0(param_2);
  return (int)param_2 == 1;
}



/* Entry: 10552d78c; end: 10552d823; -[SCNativeUploadDelegateImpl userIdStringToSCCOREUUID:] */

void FUN_10552d78c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c0b5ac0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100576d08();
    _objc_release(lVar1);
    puVar2 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10552d824; end: 10552d827; -[SCNativeUploadDelegateImpl didConfirmConversationServerCreation:] */

void FUN_10552d824(void)

{
  return;
}



/* Entry: 10552d828; end: 10552d82b; -[SCNativeUploadDelegateImpl didConversationUpdateForConversationId:conversation:updatedMessages:removedMessages:] */

void FUN_10552d828(void)

{
  return;
}



/* Entry: 10552d82c; end: 10552d82f; -[SCNativeUploadDelegateImpl didCreateConversation:] */

void FUN_10552d82c(void)

{
  return;
}



/* Entry: 10552d830; end: 10552d833; -[SCNativeUploadDelegateImpl didRemoveConversation:] */

void FUN_10552d830(void)

{
  return;
}



/* Entry: 10552d834; end: 10552d963; -[SCNativeUploadDelegateImpl didSendComplete:] */

void FUN_10552d834(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252d60();
  if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010bf4bc60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c09dc00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      _objc_initWeak(auStack_48,param_1);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(lVar2);
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x00010c297260(uVar3);
      _objc_destroyWeak(auStack_50);
      _objc_release(lVar2);
      _objc_destroyWeak(auStack_48);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10552d964; end: 10552da3b;  */

void FUN_10552d964(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010bf97e80(uVar1);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10552da3c; end: 10552daaf;  */

void FUN_10552da3c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be75440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c15b940(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10552dab0; end: 10552dab3; -[SCNativeUploadDelegateImpl didSendStart:] */

void FUN_10552dab0(void)

{
  return;
}



/* Entry: 10552dab4; end: 10552dab7; -[SCNativeUploadDelegateImpl didConversationReset:messages:] */

void FUN_10552dab4(void)

{
  return;
}



/* Entry: 10552dab8; end: 10552db0b; -[SCNativeUploadDelegateImpl .cxx_destruct] */

void FUN_10552dab8(long param_1)

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



/* Entry: 10552db0c; end: 10552db1b;  */

void FUN_10552db0c(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 10552db1c; end: 10552db6b;  */

void FUN_10552db1c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  func_0x00010c08a240();
  if (param_3 - 1U < 4) {
    uVar1 = *(undefined8 *)(&UNK_10ddb1440 + (param_3 - 1U) * 8);
  }
  else {
    uVar1 = 0;
  }
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar1;
  return;
}



/* Entry: 10552db6c; end: 10552dbd3;  */

void FUN_10552db6c(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 7;
  return;
}



/* Entry: 10552dbd4; end: 10552dc7b;  */

void FUN_10552dbd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10552dc7c; end: 10552dddb;  */

void FUN_10552dc7c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0c60c0();
  puVar1 = (undefined *)0x0;
  if (lVar8 != 0) {
    puVar1 = PTR_PTR_1126ba698;
    _objc_alloc();
    func_0x00010c029b60();
  }
  puVar2 = PTR_PTR_1126ba688;
  _objc_alloc();
  func_0x00010c0c55e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c0c6220(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c003980();
  _objc_release(param_2);
  puVar3 = PTR_PTR_1126ba690;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c029c00();
  lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined **)(lVar8 + 0x28) = puVar3;
  _objc_release(uVar7);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126b2950;
  _objc_retain(puVar5);
  func_0x00010c0d5ce0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x000107d6b61c(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = puVar5;
  func_0x00010c269d40(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar3 = puVar1;
  func_0x00010bf366a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10552dddc; end: 10552dedf;  */

void FUN_10552dddc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b2950;
  _objc_retain(param_3);
  func_0x00010c0d5ce0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x000107d6b61c(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dea018,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_1);
  uVar3 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x00010bf366a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10552dee0; end: 10552e05f;  */

void FUN_10552dee0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b2950;
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x00010c0d5ce0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = param_1;
  func_0x00010c252d60(param_1);
  func_0x000107091650();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dea038,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010bf9fd20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar4 = uVar3;
  func_0x0001070915ec(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110de7798,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x00010bf366a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10552e060; end: 10552e1f7;  */

void FUN_10552e060(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b2950;
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x00010c28db80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar1);
  uVar3 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x00010bf366a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10552e1f8; end: 10552e4af;  */

void FUN_10552e1f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_10552e4b0;
  uStack_70 = 0x10552e4c0;
  uStack_68 = 0;
  func_0x00010c0c08a0(param_1);
  puVar1 = PTR_PTR_1126b2950;
  func_0x00010c0c5ac0(PTR_PTR_1126b2950);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001070b346c(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x0001070b3494(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar7 = puStack_88[5];
  _objc_retain(uVar7);
  uVar3 = uVar7;
  func_0x00010c08fa60();
  uVar4 = uVar7;
  if (0x40 < uVar3) {
    func_0x00010c260c20(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
  }
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar4);
  uVar5 = param_5;
  func_0x00010c269d40(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf366a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_1);
  return;
}



/* Entry: 10552e4b0; end: 10552e4e3;  */

void FUN_10552e4b0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10552e4e4; end: 10552e697;  */

void FUN_10552e4e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf66200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dea078);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10552e698; end: 10552e7fb;  */

void FUN_10552e698(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar7 = param_1;
  func_0x00010bfda540();
  if ((int)lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
  }
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar1 = lVar7;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_d8;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  uVar8 = 0;
  if (lVar2 != 0) {
    lVar9 = *plStack_110;
    do {
      lVar10 = 0;
      do {
        if (*plStack_110 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        uVar8 = *(undefined8 *)(lStack_118 + lVar10 * 8);
        uVar4 = uVar8;
        func_0x00010c08c3a0();
        if ((int)uVar4 == 1) {
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_10552e7a8;
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      puVar6 = auStack_d8;
      lVar2 = lVar1;
      puVar5 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    uVar8 = 0;
  }
LAB_10552e7a8:
  _objc_release(lVar1);
  _objc_release(lVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  uVar8 = *(undefined8 *)(param_1 + 8);
  _objc_retain(puVar5);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = (undefined1 *)puVar5;
  func_0x00010c272380(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  uVar4 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar6);
  func_0x00010c2448c0(uVar8);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar8);
  _objc_release(puVar6);
  _objc_release(puVar6);
  return;
}



/* Entry: 10552e7fc; end: 10552e8ff; -[SCNativeIdentityDelegateImpl fetchFriendLink:callback:] */

void FUN_10552e7fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c272380(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010c2448c0(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_4);
  return;
}



/* Entry: 10552e900; end: 10552ea5b;  */

void FUN_10552e900(long param_1,ulong param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (param_3 == 0) {
    _objc_retain(param_2);
    puVar1 = PTR_PTR_1126ba6b0;
    _objc_alloc(PTR_PTR_1126ba6b0);
    _objc_retain(param_2);
    if ((((param_2 != 0) && (uVar2 = param_2, func_0x00010c06d560(), (uVar2 & 1) == 0)) &&
        (uVar2 = param_2, func_0x000100bf119c(), (uVar2 & 1) == 0)) &&
       (((uVar2 = param_2, func_0x00010901c5ac(), (uVar2 & 1) == 0 &&
         (uVar2 = param_2, func_0x00010901c618(), (uVar2 & 1) == 0)) &&
        (uVar2 = param_2, func_0x00010901c6c4(), (uVar2 & 1) == 0)))) {
      func_0x00010bfb8280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
    }
    _objc_release(param_2);
    func_0x00010bf4a3a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x00010c015800(puVar1);
    _objc_release(param_2);
    func_0x00010c0e4600(uVar3);
    _objc_release(puVar1);
  }
  else {
    func_0x00010c0e3ee0(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10552ea5c; end: 10552f08f; -[SCNativeIdentityDelegateImpl fetchSnapchatterInfos:localOnly:] */

void FUN_10552ea5c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b8058;
  _objc_alloc_init();
  puVar20 = puVar2;
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_3;
  func_0x00010bf529e0();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (lVar18 == 0) {
    puVar8 = PTR____NSArray0__struct_11034ab48;
    func_0x00010c220160(puVar2);
  }
  else {
    func_0x00010bf529e0(param_3);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    lVar18 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar18 != 0) {
      lVar21 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        uVar4 = *(undefined8 *)(lVar21 * 8);
        func_0x00010c272380();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        _objc_release(uVar4);
        lVar21 = lVar21 + 1;
      } while (lVar18 != lVar21);
      lVar18 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0x15;
    param_2 = 0;
    func_0x0001000819a8();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    puVar8 = puVar3;
    func_0x00010c244e80(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
    return;
  }
  ___stack_chk_fail();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (puVar8 == (undefined *)0x0) {
    func_0x00010bf529e0(param_2);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    lVar17 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar17 != 0) {
      lVar21 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        lVar19 = *(long *)(lVar21 * 8);
        _objc_retain(lVar19);
        puVar2 = PTR_PTR_1126b0cd8;
        lVar6 = lVar19;
        func_0x00010c2923e0(lVar19);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc35c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
        if (puVar2 == (undefined *)0x0) {
          puVar20 = (undefined *)0x0;
        }
        else {
          lVar6 = lVar19;
          func_0x00010c294420();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010c08fa60();
          _objc_release(lVar6);
          puVar20 = (undefined *)0x0;
          if (lVar7 != 0) {
            lVar6 = lVar19;
            func_0x00010bf1bae0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            puVar8 = (undefined *)0x0;
            if (lVar6 != 0) {
              puVar8 = PTR_PTR_1126ba6b8;
              _objc_alloc();
              lVar6 = lVar19;
              func_0x00010bf1bae0();
              _objc_retainAutoreleasedReturnValue();
              lVar7 = lVar6;
              func_0x00010bf1acc0();
              _objc_retainAutoreleasedReturnValue();
              lVar9 = lVar19;
              func_0x00010bf1bae0(lVar19);
              _objc_retainAutoreleasedReturnValue();
              lVar10 = lVar9;
              func_0x00010bf1c0a0();
              _objc_retainAutoreleasedReturnValue();
              lVar11 = lVar19;
              func_0x00010bf1bae0(lVar19);
              _objc_retainAutoreleasedReturnValue();
              lVar12 = lVar11;
              func_0x00010bf1c000();
              _objc_retainAutoreleasedReturnValue();
              lVar13 = lVar19;
              func_0x00010bf1bae0(lVar19);
              _objc_retainAutoreleasedReturnValue();
              lVar14 = lVar13;
              func_0x00010bf1af00();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bff6120(puVar8);
              _objc_release(lVar14);
              _objc_release(lVar13);
              _objc_release(lVar12);
              _objc_release(lVar11);
              _objc_release(lVar10);
              _objc_release(lVar9);
              _objc_release(lVar7);
              _objc_release(lVar6);
            }
            puVar20 = PTR_PTR_1126ba6c0;
            _objc_alloc();
            puVar15 = PTR_PTR_1126ba6c8;
            _objc_alloc(PTR_PTR_1126ba6c8);
            puVar16 = puVar2;
            func_0x00010bfe5d80(puVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c01b1c0(puVar15);
            lVar6 = lVar19;
            func_0x00010c294420(lVar19);
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar19;
            func_0x00010901d7c4(lVar19);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c05c020();
            _objc_release(lVar7);
            _objc_release(lVar6);
            _objc_release(puVar15);
            _objc_release(puVar16);
            _objc_release(puVar8);
          }
        }
        _objc_release(puVar2);
        _objc_release(lVar19);
        if (puVar20 != (undefined *)0x0) {
          func_0x00010befa120(puVar3);
        }
        _objc_release(puVar20);
        lVar21 = lVar21 + 1;
      } while (lVar17 != lVar21);
      lVar17 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
    func_0x00010c220160(*(undefined8 *)(param_3 + 0x20));
    _objc_release(puVar3);
  }
  else {
    func_0x00010c220160(*(undefined8 *)(param_3 + 0x20));
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_2 + 8,0);
  return;
}



/* Entry: 10552f090; end: 10552f09b; -[SCNativeIdentityDelegateImpl .cxx_destruct] */

void FUN_10552f090(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10552f09c; end: 10552f117;  */

undefined * FUN_10552f09c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bc8b0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dea118,
                        &UNK_10ddb1460,&UNK_10ddb146c,2,FUN_10552f118,0);
    do {
      if (puRam00000001136bc8b0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bc8b0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bc8b0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bc8b0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bc8b0;
}



/* Entry: 10552f118; end: 10552f123;  */

bool FUN_10552f118(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10552f124; end: 10552f18b; +[SCMessagingCofFfOptimizeInitialLocalFeedEntriesLoadConfig descriptor] */

void FUN_10552f124(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc8b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a44330,
                        &PTR____CFConstantStringClassReference_110dea138,&PTR_DAT_1130e2f60,
                        &PTR_s_strategy_1130e2f78,3,0x10,0x1c);
    puRam00000001136bc8b8 = puVar1;
  }
  return;
}



/* Entry: 10552f18c; end: 10552f203; -[SCNCurrentMessagingSessionCurrentMessagingSessionManager initWithCpp:] */

undefined1 * FUN_10552f18c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126e8e20;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10552f89c();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010552f5bc(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10552f204; end: 10552f4bb; +[SCNCurrentMessagingSessionCurrentMessagingSessionManager getCurrentSession] */

/* WARNING: Type propagation algorithm not settling */

void FUN_10552f204(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  int extraout_w10;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  long lStack_88;
  long alStack_78 [7];
  
  FUN_10552f90c(&uStack_d0);
  uStack_d8 = uStack_c8;
  uStack_e0 = uStack_d0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  puVar1 = PTR_PTR_1126b8058;
  _objc_alloc_init();
  puVar2 = puVar1;
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  alStack_78[5] = 0;
  alStack_78[6] = 0;
  alStack_78[1] = 0;
  alStack_78[2] = 0;
  func_0x000100604a3c(alStack_78 + 3,&uStack_e0,alStack_78 + 1);
  func_0x000100604a9c(alStack_78 + 5,alStack_78 + 3);
  func_0x00010060475c(alStack_78 + 3);
  func_0x00010060475c(alStack_78 + 1);
  func_0x0001003b69cc(alStack_78);
  func_0x0001003b6c18(alStack_78 + 3,alStack_78[0]);
  lStack_88 = alStack_78[0];
  alStack_78[0] = 0;
  lStack_a0 = 0;
  lStack_98 = 0;
  lStack_b0 = alStack_78[5] + 0x48;
  lStack_a8 = CONCAT71(lStack_a8._1_7_,1);
  puStack_90 = puVar1;
  __ZNSt3__15mutex4lockEv();
  lVar3 = alStack_78[5];
  func_0x000100604ae0();
  if ((int)lVar3 == 0) {
    puVar4 = (undefined8 *)0x18;
    __Znwm();
    lVar3 = lStack_88;
    puVar1 = puStack_90;
    *puVar4 = &PTR_FUN_110895c28;
    puStack_90 = (undefined *)0x0;
    lStack_88 = 0;
    puVar4[2] = lVar3;
    puVar4[1] = puVar1;
    plVar5 = *(long **)(alStack_78[5] + 0x90);
    *(undefined8 **)(alStack_78[5] + 0x90) = puVar4;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
  else {
    func_0x000100604a9c(&lStack_a0,alStack_78 + 5);
  }
  func_0x0001000df5a0(&lStack_b0);
  if (lStack_a0 != 0) {
    lStack_b0 = lStack_a0;
    lStack_a8 = lStack_98;
    if (lStack_98 != 0) {
      do {
        FUN_10552f89c();
      } while (extraout_w10 != 0);
    }
    FUN_10552f5e4(&puStack_90);
    func_0x00010060475c(&lStack_b0);
  }
  uStack_b8 = alStack_78[4];
  uStack_c0 = alStack_78[3];
  alStack_78[3] = 0;
  alStack_78[4] = 0;
  func_0x00010060475c(&lStack_a0);
  func_0x00010552f870(&puStack_90);
  func_0x0001003b6c64(alStack_78 + 3);
  lVar3 = alStack_78[0];
  alStack_78[0] = 0;
  if (lVar3 != 0) {
    func_0x00010552f8e4();
  }
  func_0x00010060475c(alStack_78 + 5);
  func_0x0001003b6c64(&uStack_c0);
  _objc_release(0);
  func_0x000100605ae0();
  func_0x00010552f8cc();
  func_0x00010060475c(&uStack_d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10552f4bc; end: 10552f527; +[SCNCurrentMessagingSessionCurrentMessagingSessionManager clearCurrentSession:] */

void FUN_10552f4bc(void)

{
  undefined1 auStack_40 [16];
  
  func_0x0001006043b4();
  func_0x00010060442c();
  FUN_10552f970(auStack_40);
  func_0x000100605ad8();
  func_0x000100605ae0();
  return;
}


