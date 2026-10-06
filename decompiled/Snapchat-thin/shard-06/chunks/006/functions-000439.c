/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104c627f0; end: 104c6289b;  */

void FUN_104c627f0(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = (undefined8 *)0x30;
  __Znwm();
  uVar1 = *param_2;
  plVar3 = (long *)*param_3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  uStack_48 = param_3[2];
  uStack_50 = param_3[1];
  *puVar2 = &PTR_DAT_110d7ef28;
  puVar2[1] = 1;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  puVar2[3] = plVar3;
  uStack_58 = 0;
  puVar2[5] = uStack_48;
  puVar2[4] = uStack_50;
  *param_1 = puVar2;
  func_0x0001003adc18(&uStack_58);
  return;
}



/* Entry: 104c6289c; end: 104c628cf;  */

long FUN_104c6289c(long param_1)

{
  long lVar1;
  
  lVar1 = 0x10;
  do {
    func_0x00010b9a8d98(param_1 + lVar1);
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x10);
  return param_1;
}



/* Entry: 104c628d0; end: 104c62917;  */

void FUN_104c628d0(long param_1)

{
  func_0x0001003adc0c(param_1 + 8);
  FUN_104bda3ac();
  return;
}



/* Entry: 104c62918; end: 104c62997;  */

undefined8 *
FUN_104c62918(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5,undefined4 param_6)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *param_2 = 0;
  param_1[1] = *param_3;
  *param_3 = 0;
  func_0x00010b9a8fa8(param_1 + 2,param_4);
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  if (*(char *)(param_5 + 3) == '\x01') {
    param_1[4] = *param_5;
    *param_5 = 0;
    uVar1 = param_5[1];
    param_1[6] = param_5[2];
    param_1[5] = uVar1;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  *(undefined4 *)(param_1 + 8) = param_6;
  return param_1;
}



/* Entry: 104c62998; end: 104c629ff;  */

/* WARNING: Possible PIC construction at 0x000104c629bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104c629c0) */

long FUN_104c62998(long param_1)

{
  FUN_104c625f0(param_1 + 0x20);
  func_0x00010b9a8d98(param_1 + 0x10);
  func_0x00010007e5d0(param_1 + 8);
  func_0x0001003a8cb8();
  return param_1;
}



/* Entry: 104c62a00; end: 104c62a57;  */

long FUN_104c62a00(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 8;
}



/* Entry: 104c62a58; end: 104c62acf;  */

long FUN_104c62a58(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 104c62ad0; end: 104c62b1f;  */

long * FUN_104c62ad0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001003a916c();
  }
  return (long *)(param_1 + 8);
}



/* Entry: 104c62b20; end: 104c62bb3;  */

void FUN_104c62b20(undefined8 *param_1)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_1107edf30;
  puVar1[4] = 0;
  puVar1[6] = &PTR_FUN_1107ede68;
  puVar1[5] = 0;
  puStack_40 = puVar1 + 3;
  *puStack_40 = &PTR_DAT_1107ede28;
  puStack_38 = puVar1;
  do {
    func_0x000104c62c84();
  } while (extraout_w10 != 0);
  func_0x0001003a8180();
  func_0x0001003a90c4(&puStack_40);
  *param_1 = puVar1 + 6;
  param_1[1] = puVar1;
  return;
}



/* Entry: 104c62bb4; end: 104c62bb7;  */

void FUN_104c62bb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107edf30;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c62bb8; end: 104c62bcb;  */

void FUN_104c62bb8(void)

{
  func_0x000104c62bdc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c62bcc; end: 104c62cd7;  */

void FUN_104c62bcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104c62bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104c62cd8; end: 104c62d87;  */

void FUN_104c62cd8(undefined8 *param_1,char *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  pcVar5 = param_2;
  uVar6 = param_3;
  _objc_retain();
  if ((bRam0000000113817ce8 & 1) == 0) {
    iVar1 = 0x13817ce8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      pcVar5 = "dispatch_async_f";
      pcVar4 = (code *)0xffffffffffffffff;
      _dlsym(0xffffffffffffffff,"dispatch_async_f");
      pcRam0000000113817ce0 = pcVar4;
      ___cxa_guard_release(0x113817ce8);
    }
  }
  puVar2 = (undefined8 *)0x10;
  _malloc();
  if (puVar2 == (undefined8 *)0x0) {
    __ZSt9terminatev();
    FUN_104bd46a0();
    _objc_retain();
    _objc_retain(pcVar5);
    _objc_retain(uVar6);
    if ((bRam0000000113817d28 & 1) == 0) {
      iVar1 = 0x13817d28;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        pcVar4 = (code *)0xffffffffffffffff;
        _dlsym(0xffffffffffffffff,"dispatch_group_async");
        pcRam0000000113817d20 = pcVar4;
        ___cxa_guard_release(0x113817d28);
      }
    }
    pcVar4 = pcRam0000000113817d20;
    uVar3 = uVar6;
    func_0x00010002a3a8(uVar6);
    _objc_retainAutoreleasedReturnValue();
    (*pcVar4)(puVar2,pcVar5,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_release(pcVar5);
  }
  else {
    *puVar2 = param_2;
    puVar2[1] = param_3;
    (*pcRam0000000113817ce0)(param_1,puVar2,&UNK_10028db1c);
    puVar2 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104c62d88; end: 104c62e5f;  */

void FUN_104c62d88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((bRam0000000113817d28 & 1) == 0) {
    iVar1 = 0x13817d28;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      pcVar3 = (code *)0xffffffffffffffff;
      _dlsym(0xffffffffffffffff,"dispatch_group_async");
      pcRam0000000113817d20 = pcVar3;
      ___cxa_guard_release(0x113817d28);
    }
  }
  pcVar3 = pcRam0000000113817d20;
  uVar2 = param_3;
  func_0x00010002a3a8(param_3);
  _objc_retainAutoreleasedReturnValue();
  (*pcVar3)(param_1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104c62e60; end: 104c62f07;  */

void FUN_104c62e60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  code *pcVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  if ((bRam0000000113817d78 & 1) == 0) {
    iVar1 = 0x13817d78;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      pcVar2 = (code *)0xffffffffffffffff;
      _dlsym(0xffffffffffffffff,"dispatch_sync_f");
      pcRam0000000113817d70 = pcVar2;
      ___cxa_guard_release(0x113817d78);
    }
  }
  uStack_40 = param_2;
  uStack_38 = param_3;
  (*pcRam0000000113817d70)(param_1,&uStack_40,&UNK_100029ddc);
  _objc_release(param_1);
  return;
}



/* Entry: 104c62f08; end: 104c62f0b;  */

void FUN_104c62f08(void)

{
  return;
}



/* Entry: 104c62f0c; end: 104c62f93; -[SCAppDelegate applicationWillTerminate:] */

void FUN_104c62f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae4f8;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23bf00();
  _objc_release(puVar1);
  puStack_38 = PTR_PTR_1126e3668;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_applicationWillTerminate__11259f8d8,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 104c62f94; end: 104c63003; -[SCSnapchatScopeGraph init] */

undefined8 FUN_104c62f94(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010b0a6cf4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0260c0(param_1,param_2,uVar1);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104c63004; end: 104c63017; -[SCSnapchatScopeGraph .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c63004(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11270f8e0,0);
  return;
}



/* Entry: 104c63018; end: 104c630d7; -[SCActivityCenterDynamicBillboardFHPUIConfigEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c63018(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ae550;
  _objc_alloc(PTR_PTR_1126ae550);
  lVar2 = param_1 + _DAT_11270f8e4;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfac220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011500(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_11270f8e8;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104c630d8; end: 104c6310f; -[SCActivityCenterDynamicBillboardFHPUIConfigEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c630d8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11270f8e4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11270f8e8);
  return;
}



/* Entry: 104c63110; end: 104c63183; -[SCActivityCenterDynamicBillboardFHPUIConfigProvider initWithFHPCampaignDataProvider:] */

undefined1 * FUN_104c63110(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e3678;
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



/* Entry: 104c63184; end: 104c63193; -[SCActivityCenterDynamicBillboardFHPUIConfigProvider canHandleCampaignId:] */

void FUN_104c63184(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110daaf38);
  return;
}



/* Entry: 104c63194; end: 104c632bb; -[SCActivityCenterDynamicBillboardFHPUIConfigProvider configs] */

void FUN_104c63194(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar6 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c24f940();
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_104c632bc;
    puStack_48 = &UNK_1108419d0;
    uVar5 = uVar4;
    puStack_40 = puVar2;
    uStack_38 = uVar3;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297280(uVar4,param_2,&puStack_60,uVar5,1);
    _objc_release(uVar5);
    _objc_release(uVar4);
    puVar6 = puVar2;
    func_0x00010bfbc3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104c632bc; end: 104c632f7;  */

void FUN_104c632bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bef0660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104c632f8; end: 104c63303; -[SCActivityCenterDynamicBillboardFHPUIConfigProvider .cxx_destruct] */

void FUN_104c632f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c63304; end: 104c63393; -[SCActivityCenterDynamicBillboardSignalProvider initWithFHPCampaignDataProvider:] */

undefined1 * FUN_104c63304(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e3680;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104c63394; end: 104c6339b; -[SCActivityCenterDynamicBillboardSignalProvider preCheckSource] */

undefined8 FUN_104c63394(void)

{
  return 0x15;
}



/* Entry: 104c6339c; end: 104c634e7; -[SCActivityCenterDynamicBillboardSignalProvider eligibleWithRequestor:campaignName:] */

void FUN_104c6339c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  func_0x00010be1f0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c24f940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297280();
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104c634e8; end: 104c635af; -[SCActivityCenterDynamicBillboardSignalProvider eligibleForCampaignId:] */

undefined8 FUN_104c634e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010be1f0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bef0660();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104c635b0;
  puStack_40 = &UNK_110841a00;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x00010bf04920(uVar1,param_2,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 104c635b0; end: 104c635f7;  */

undefined8 FUN_104c635b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf2bf80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 104c635f8; end: 104c6361f; -[SCActivityCenterDynamicBillboardSignalProvider campaignUpdateObservable] */

void FUN_104c635f8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104c63620; end: 104c63737; -[SCActivityCenterDynamicBillboardSignalProvider activityCenterDynamicFHPCampaignDataDidUpdate] */

/* WARNING: Possible PIC construction at 0x000104c6365c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104c63758: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104c63660) */
/* WARNING: Removing unreachable block (ram,0x000104c6369c) */
/* WARNING: Removing unreachable block (ram,0x000104c636a8) */
/* WARNING: Removing unreachable block (ram,0x000104c636ac) */
/* WARNING: Removing unreachable block (ram,0x000104c636bc) */
/* WARNING: Removing unreachable block (ram,0x000104c636c4) */
/* WARNING: Removing unreachable block (ram,0x000104c636e0) */
/* WARNING: Removing unreachable block (ram,0x000104c636fc) */
/* WARNING: Removing unreachable block (ram,0x000104c63734) */
/* WARNING: Removing unreachable block (ram,0x000104c63754) */
/* WARNING: Removing unreachable block (ram,0x000104c6371c) */
/* WARNING: Removing unreachable block (ram,0x000104c6375c) */
/* WARNING: Removing unreachable block (ram,0x000104c63778) */

void FUN_104c63620(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 104c63738; end: 104c63787; -[SCActivityCenterDynamicBillboardSignalProvider _getFhpCampaignDataProvider] */

/* WARNING: Possible PIC construction at 0x000104c63758: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104c6375c) */

void FUN_104c63738(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c06f880();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_target_112678178);
  return;
}



/* Entry: 104c63788; end: 104c637b7; -[SCActivityCenterDynamicBillboardSignalProvider .cxx_destruct] */

void FUN_104c63788(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c637b8; end: 104c63877; -[SCActivityCenterDynamicBillboardSignalProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c637b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ae578;
  _objc_alloc(PTR_PTR_1126ae578);
  lVar2 = param_1 + _DAT_11270f8f8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfac220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011500(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_11270f8fc;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104c63878; end: 104c638af; -[SCActivityCenterDynamicBillboardSignalProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c63878(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11270f8f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11270f8fc);
  return;
}



/* Entry: 104c638b0; end: 104c63923; -[SCGrapheneAgeVerificationMetric2 init] */

undefined1 * FUN_104c638b0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3688;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104c63924; end: 104c63be3;  */

/* WARNING: Removing unreachable block (ram,0x000104c63e6c) */
/* WARNING: Removing unreachable block (ram,0x000104c63bac) */
/* WARNING: Removing unreachable block (ram,0x000104c6412c) */

char * FUN_104c63924(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char **ppcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  char *unaff_x24;
  char *pcStack_4d0;
  undefined *puStack_4c8;
  char *pcStack_4c0;
  char *pcStack_4b8;
  undefined8 ****ppppuStack_4b0;
  code *pcStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined1 *puStack_488;
  undefined8 auStack_480 [2];
  char cStack_469;
  long lStack_468;
  char *pcStack_460;
  char *pcStack_458;
  undefined8 *puStack_450;
  char *pcStack_448;
  char *pcStack_440;
  char *pcStack_438;
  undefined8 ****ppppuStack_430;
  code *pcStack_428;
  char acStack_418 [24];
  char *pcStack_400;
  undefined8 auStack_3f8 [2];
  char cStack_3e1;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  char *pcStack_3c0;
  char *pcStack_3b8;
  undefined8 *puStack_3b0;
  char *pcStack_3a8;
  char *pcStack_3a0;
  char *pcStack_398;
  undefined8 ****ppppuStack_390;
  code *pcStack_388;
  char acStack_378 [24];
  char *pcStack_360;
  undefined8 auStack_358 [2];
  char cStack_341;
  undefined8 auStack_340 [2];
  char cStack_329;
  long lStack_328;
  char *pcStack_320;
  char *pcStack_318;
  undefined8 *puStack_310;
  char *pcStack_308;
  char *pcStack_300;
  char *pcStack_2f8;
  undefined1 ****ppppuStack_2f0;
  code *pcStack_2e8;
  char acStack_2d8 [24];
  char *pcStack_2c0;
  undefined8 auStack_2b8 [2];
  char cStack_2a1;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  char *pcStack_280;
  char *pcStack_278;
  char *pcStack_270;
  char *pcStack_268;
  char *pcStack_260;
  char *pcStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  char acStack_240 [24];
  undefined1 *puStack_228;
  char acStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  char acStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  char acStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar10 = param_3;
  pcVar5 = param_4;
  pcVar3 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar16 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(acStack_a0,pcVar1);
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
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,acStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar14 = 0;
    pcVar10 = pcVar2;
    pcVar5 = param_5;
    do {
      if ((&cStack_59)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar14 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar11 = acStack_180;
  pcStack_c8 = FUN_104c63be4;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar6 = pcVar10;
  pcVar12 = pcVar5;
  pcVar9 = pcVar3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar10);
  _objc_retain(pcVar5);
  if (pcVar2 != (char *)0x0) {
    plVar16 = *(long **)(pcVar2 + 8);
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
    func_0x00010002b838(acStack_160,pcVar2);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar2 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_148,pcVar2);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_130,pcVar2);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x00010007e1e8(acStack_180,acStack_160,&lStack_118,3);
    pcVar8 = "";
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_168 = acStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar14 = 0;
    pcVar6 = pcVar11;
    pcVar12 = pcVar3;
    do {
      if ((&cStack_119)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_180;
    } while (lVar14 != -0x48);
  }
  _objc_release(pcVar5);
  _objc_release(pcVar10);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_160);
  _objc_release(pcVar5);
  _objc_release(pcVar10);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar2 = acStack_240;
  pcStack_188 = FUN_104c63ea4;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar8;
  pcVar10 = pcVar6;
  pcVar5 = pcVar12;
  ppuStack_190 = &puStack_d0;
  _objc_retain(pcVar8);
  _objc_retain(pcVar6);
  _objc_retain(pcVar12);
  if (pcVar3 != (char *)0x0) {
    plVar16 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar8;
      _objc_retainAutorelease(pcVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    func_0x00010002b838(acStack_220,pcVar1);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar1 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_208,pcVar1);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar1 = pcVar12;
      func_0x00010bdc3520(pcVar12);
    }
    _objc_release(pcVar12);
    func_0x00010002b838(auStack_1f0,pcVar1);
    acStack_240[0] = '\0';
    acStack_240[1] = '\0';
    acStack_240[2] = '\0';
    acStack_240[3] = '\0';
    acStack_240[4] = '\0';
    acStack_240[5] = '\0';
    acStack_240[6] = '\0';
    acStack_240[7] = '\0';
    acStack_240[8] = '\0';
    acStack_240[9] = '\0';
    acStack_240[10] = '\0';
    acStack_240[0xb] = '\0';
    acStack_240[0xc] = '\0';
    acStack_240[0xd] = '\0';
    acStack_240[0xe] = '\0';
    acStack_240[0xf] = '\0';
    acStack_240[0x10] = '\0';
    acStack_240[0x11] = '\0';
    acStack_240[0x12] = '\0';
    acStack_240[0x13] = '\0';
    acStack_240[0x14] = '\0';
    acStack_240[0x15] = '\0';
    acStack_240[0x16] = '\0';
    acStack_240[0x17] = '\0';
    func_0x00010007e1e8(acStack_240,acStack_220,&lStack_1d8,3);
    pcVar1 = "";
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110841ad0,acStack_240,pcVar9);
    puStack_228 = acStack_240;
    func_0x00010007e5dc(&puStack_228);
    lVar14 = 0;
    pcVar10 = pcVar2;
    pcVar5 = pcVar9;
    do {
      if ((&cStack_1d9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_240;
    } while (lVar14 != -0x48);
  }
  _objc_release(pcVar12);
  _objc_release(pcVar6);
  pcVar3 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar12);
  pcVar2 = acStack_220;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != pcVar2);
  _objc_release(pcVar12);
  _objc_release(pcVar6);
  _objc_release(pcVar8);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_248 = FUN_104c64164;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar1;
  pcVar11 = pcVar10;
  pcVar13 = pcVar5;
  pcStack_280 = unaff_x24;
  pcStack_278 = pcVar2;
  pcStack_270 = pcVar3;
  pcStack_268 = pcVar12;
  pcStack_260 = pcVar6;
  pcStack_258 = pcVar8;
  pppuStack_250 = &ppuStack_190;
  _objc_retain(pcVar1);
  _objc_retain(pcVar10);
  puVar15 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar16 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = (char *)auStack_2b8;
    func_0x00010002b838(auStack_2b8,pcVar3);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar3 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_2a0,pcVar3);
    acStack_2d8[0] = '\0';
    acStack_2d8[1] = '\0';
    acStack_2d8[2] = '\0';
    acStack_2d8[3] = '\0';
    acStack_2d8[4] = '\0';
    acStack_2d8[5] = '\0';
    acStack_2d8[6] = '\0';
    acStack_2d8[7] = '\0';
    acStack_2d8[8] = '\0';
    acStack_2d8[9] = '\0';
    acStack_2d8[10] = '\0';
    acStack_2d8[0xb] = '\0';
    acStack_2d8[0xc] = '\0';
    acStack_2d8[0xd] = '\0';
    acStack_2d8[0xe] = '\0';
    acStack_2d8[0xf] = '\0';
    acStack_2d8[0x10] = '\0';
    acStack_2d8[0x11] = '\0';
    acStack_2d8[0x12] = '\0';
    acStack_2d8[0x13] = '\0';
    acStack_2d8[0x14] = '\0';
    acStack_2d8[0x15] = '\0';
    acStack_2d8[0x16] = '\0';
    acStack_2d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_2d8,auStack_2b8,&lStack_288,2);
    pcVar9 = "";
    pcVar2 = acStack_2d8;
    pcVar11 = acStack_2d8;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110841b20,pcVar11,pcVar5);
    pcStack_2c0 = pcVar2;
    func_0x00010007e5dc(&pcStack_2c0);
    lVar14 = 0;
    puVar15 = auStack_2b8;
    pcVar13 = pcVar5;
    do {
      if ((&cStack_289)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2a0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar10);
  pcVar5 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return pcVar5;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  if (cStack_2a1 < '\0') {
    __ZdlPv(auStack_2b8[0]);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar1);
  pcVar6 = pcVar5;
  __Unwind_Resume();
  pcStack_2e8 = FUN_104c64394;
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar9;
  pcVar8 = pcVar11;
  pcVar12 = pcVar13;
  pcStack_320 = unaff_x24;
  pcStack_318 = pcVar2;
  puStack_310 = puVar15;
  pcStack_308 = pcVar5;
  pcStack_300 = pcVar10;
  pcStack_2f8 = pcVar1;
  ppppuStack_2f0 = &pppuStack_250;
  _objc_retain(pcVar9);
  _objc_retain(pcVar11);
  puVar15 = (undefined8 *)0x0;
  if (pcVar6 != (char *)0x0) {
    plVar16 = *(long **)(pcVar6 + 8);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar9;
      _objc_retainAutorelease(pcVar9);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    unaff_x24 = (char *)auStack_358;
    func_0x00010002b838(auStack_358,pcVar1);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar1 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_340,pcVar1);
    acStack_378[0] = '\0';
    acStack_378[1] = '\0';
    acStack_378[2] = '\0';
    acStack_378[3] = '\0';
    acStack_378[4] = '\0';
    acStack_378[5] = '\0';
    acStack_378[6] = '\0';
    acStack_378[7] = '\0';
    acStack_378[8] = '\0';
    acStack_378[9] = '\0';
    acStack_378[10] = '\0';
    acStack_378[0xb] = '\0';
    acStack_378[0xc] = '\0';
    acStack_378[0xd] = '\0';
    acStack_378[0xe] = '\0';
    acStack_378[0xf] = '\0';
    acStack_378[0x10] = '\0';
    acStack_378[0x11] = '\0';
    acStack_378[0x12] = '\0';
    acStack_378[0x13] = '\0';
    acStack_378[0x14] = '\0';
    acStack_378[0x15] = '\0';
    acStack_378[0x16] = '\0';
    acStack_378[0x17] = '\0';
    func_0x00010007e1e8(acStack_378,auStack_358,&lStack_328,2);
    pcVar3 = "";
    pcVar2 = acStack_378;
    pcVar8 = acStack_378;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110841b70,pcVar8,pcVar13);
    pcStack_360 = pcVar2;
    func_0x00010007e5dc(&pcStack_360);
    lVar14 = 0;
    puVar15 = auStack_358;
    pcVar12 = pcVar13;
    do {
      if ((&cStack_329)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_340 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar11);
  pcVar1 = pcVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar11);
  if (cStack_341 < '\0') {
    __ZdlPv(auStack_358[0]);
  }
  _objc_release(pcVar11);
  _objc_release(pcVar9);
  pcVar6 = pcVar1;
  __Unwind_Resume();
  pcStack_388 = FUN_104c645c4;
  lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar10 = pcVar3;
  pcVar5 = pcVar8;
  pcStack_3c0 = unaff_x24;
  pcStack_3b8 = pcVar2;
  puStack_3b0 = puVar15;
  pcStack_3a8 = pcVar1;
  pcStack_3a0 = pcVar11;
  pcStack_398 = pcVar9;
  ppppuStack_390 = &ppppuStack_2f0;
  _objc_retain(pcVar3);
  _objc_retain(pcVar8);
  puVar15 = (undefined8 *)0x0;
  if (pcVar6 != (char *)0x0) {
    plVar16 = *(long **)(pcVar6 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    unaff_x24 = (char *)auStack_3f8;
    func_0x00010002b838(auStack_3f8,pcVar1);
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
    func_0x00010002b838(auStack_3e0,pcVar1);
    acStack_418[0] = '\0';
    acStack_418[1] = '\0';
    acStack_418[2] = '\0';
    acStack_418[3] = '\0';
    acStack_418[4] = '\0';
    acStack_418[5] = '\0';
    acStack_418[6] = '\0';
    acStack_418[7] = '\0';
    acStack_418[8] = '\0';
    acStack_418[9] = '\0';
    acStack_418[10] = '\0';
    acStack_418[0xb] = '\0';
    acStack_418[0xc] = '\0';
    acStack_418[0xd] = '\0';
    acStack_418[0xe] = '\0';
    acStack_418[0xf] = '\0';
    acStack_418[0x10] = '\0';
    acStack_418[0x11] = '\0';
    acStack_418[0x12] = '\0';
    acStack_418[0x13] = '\0';
    acStack_418[0x14] = '\0';
    acStack_418[0x15] = '\0';
    acStack_418[0x16] = '\0';
    acStack_418[0x17] = '\0';
    func_0x00010007e1e8(acStack_418,auStack_3f8,&lStack_3c8,2);
    pcVar10 = "";
    pcVar2 = acStack_418;
    pcVar5 = acStack_418;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110841bc0,pcVar5,pcVar12);
    pcStack_400 = pcVar2;
    func_0x00010007e5dc(&pcStack_400);
    lVar14 = 0;
    puVar15 = auStack_3f8;
    do {
      if ((&cStack_3c9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3e0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar1 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3c8) {
    ___stack_chk_fail();
    _objc_release(pcVar8);
    if (cStack_3e1 < '\0') {
      __ZdlPv(auStack_3f8[0]);
    }
    _objc_release(pcVar8);
    _objc_release(pcVar3);
    pcVar6 = pcVar1;
    __Unwind_Resume();
    pcStack_428 = FUN_104c647f4;
    lStack_468 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcStack_460 = unaff_x24;
    pcStack_458 = pcVar2;
    puStack_450 = puVar15;
    pcStack_448 = pcVar1;
    pcStack_440 = pcVar8;
    pcStack_438 = pcVar3;
    ppppuStack_430 = &ppppuStack_390;
    _objc_retain(pcVar10);
    if (pcVar6 != (char *)0x0) {
      plVar16 = *(long **)(pcVar6 + 8);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar10;
        _objc_retainAutorelease(pcVar10);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar10);
      func_0x00010002b838(auStack_480,pcVar1);
      uStack_4a0 = 0;
      uStack_498 = 0;
      uStack_490 = 0;
      func_0x00010007e1e8(&uStack_4a0,auStack_480,&lStack_468,1);
      (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110841c10,&uStack_4a0,pcVar5);
      puStack_488 = (undefined1 *)&uStack_4a0;
      func_0x00010007e5dc(&puStack_488);
      if (cStack_469 < '\0') {
        __ZdlPv(auStack_480[0]);
      }
    }
    pcVar1 = pcVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_468) {
      ___stack_chk_fail();
      _objc_release(pcVar10);
      _objc_release(pcVar10);
      pcVar5 = pcVar1;
      __Unwind_Resume();
      ppcVar7 = &pcStack_4d0;
      pcStack_4a8 = FUN_104c64968;
      puStack_4c8 = PTR_PTR_1126e3690;
      pcStack_4d0 = pcVar5;
      pcStack_4c0 = pcVar1;
      pcStack_4b8 = pcVar10;
      ppppuStack_4b0 = &ppppuStack_430;
      _objc_msgSendSuper2(&pcStack_4d0,PTR_s_init_1125d9248);
      if (ppcVar7 != (char **)0x0) {
        pcVar1 = (char *)ppcVar7;
        (*(code *)PTR_DAT_113403208)();
        *(char **)((long)ppcVar7 + 8) = pcVar1;
      }
      return (char *)ppcVar7;
    }
    return pcVar1;
  }
  return pcVar1;
}



/* Entry: 104c63be4; end: 104c63ea3;  */

/* WARNING: Removing unreachable block (ram,0x000104c63e6c) */
/* WARNING: Removing unreachable block (ram,0x000104c6412c) */

char * FUN_104c63be4(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char **ppcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  char *unaff_x24;
  char *pcStack_410;
  undefined *puStack_408;
  char *pcStack_400;
  char *pcStack_3f8;
  undefined8 ****ppppuStack_3f0;
  code *pcStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 *puStack_3c8;
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  char *pcStack_3a0;
  char *pcStack_398;
  undefined8 *puStack_390;
  char *pcStack_388;
  char *pcStack_380;
  char *pcStack_378;
  undefined8 ****ppppuStack_370;
  code *pcStack_368;
  char acStack_358 [24];
  char *pcStack_340;
  undefined8 auStack_338 [2];
  char cStack_321;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  char *pcStack_300;
  char *pcStack_2f8;
  undefined8 *puStack_2f0;
  char *pcStack_2e8;
  char *pcStack_2e0;
  char *pcStack_2d8;
  undefined1 ****ppppuStack_2d0;
  code *pcStack_2c8;
  char acStack_2b8 [24];
  char *pcStack_2a0;
  undefined8 auStack_298 [2];
  char cStack_281;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  char *pcStack_260;
  char *pcStack_258;
  undefined8 *puStack_250;
  char *pcStack_248;
  char *pcStack_240;
  char *pcStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  char acStack_218 [24];
  char *pcStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  char *pcStack_1b0;
  char *pcStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  char acStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  char acStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar6 = param_3;
  pcVar11 = param_4;
  pcVar3 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar16 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(acStack_a0,pcVar1);
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
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,acStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar14 = 0;
    pcVar6 = pcVar2;
    pcVar11 = param_5;
    do {
      if ((&cStack_59)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar14 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != acStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar9 = acStack_180;
  pcStack_c8 = FUN_104c63ea4;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar5 = pcVar6;
  pcVar12 = pcVar11;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar6);
  _objc_retain(pcVar11);
  if (pcVar2 != (char *)0x0) {
    plVar16 = *(long **)(pcVar2 + 8);
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
    func_0x00010002b838(acStack_160,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_148,pcVar2);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar2 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_130,pcVar2);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x00010007e1e8(acStack_180,acStack_160,&lStack_118,3);
    pcVar8 = "";
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110841ad0,acStack_180,pcVar3);
    puStack_168 = acStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar14 = 0;
    pcVar5 = pcVar9;
    pcVar12 = pcVar3;
    do {
      if ((&cStack_119)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_180;
    } while (lVar14 != -0x48);
  }
  _objc_release(pcVar11);
  _objc_release(pcVar6);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar11);
  pcVar2 = acStack_160;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != pcVar2);
  _objc_release(pcVar11);
  _objc_release(pcVar6);
  _objc_release(pcVar1);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_188 = FUN_104c64164;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar8;
  pcVar10 = pcVar5;
  pcVar13 = pcVar12;
  pcStack_1c0 = unaff_x24;
  pcStack_1b8 = pcVar2;
  pcStack_1b0 = pcVar3;
  pcStack_1a8 = pcVar11;
  pcStack_1a0 = pcVar6;
  pcStack_198 = pcVar1;
  ppuStack_190 = &puStack_d0;
  _objc_retain(pcVar8);
  _objc_retain(pcVar5);
  puVar15 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar16 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar8;
      _objc_retainAutorelease(pcVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    unaff_x24 = (char *)auStack_1f8;
    func_0x00010002b838(auStack_1f8,pcVar1);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar1 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_1e0,pcVar1);
    acStack_218[0] = '\0';
    acStack_218[1] = '\0';
    acStack_218[2] = '\0';
    acStack_218[3] = '\0';
    acStack_218[4] = '\0';
    acStack_218[5] = '\0';
    acStack_218[6] = '\0';
    acStack_218[7] = '\0';
    acStack_218[8] = '\0';
    acStack_218[9] = '\0';
    acStack_218[10] = '\0';
    acStack_218[0xb] = '\0';
    acStack_218[0xc] = '\0';
    acStack_218[0xd] = '\0';
    acStack_218[0xe] = '\0';
    acStack_218[0xf] = '\0';
    acStack_218[0x10] = '\0';
    acStack_218[0x11] = '\0';
    acStack_218[0x12] = '\0';
    acStack_218[0x13] = '\0';
    acStack_218[0x14] = '\0';
    acStack_218[0x15] = '\0';
    acStack_218[0x16] = '\0';
    acStack_218[0x17] = '\0';
    func_0x00010007e1e8(acStack_218,auStack_1f8,&lStack_1c8,2);
    pcVar9 = "";
    pcVar2 = acStack_218;
    pcVar10 = acStack_218;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110841b20,pcVar10,pcVar12);
    pcStack_200 = pcVar2;
    func_0x00010007e5dc(&pcStack_200);
    lVar14 = 0;
    puVar15 = auStack_1f8;
    pcVar13 = pcVar12;
    do {
      if ((&cStack_1c9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar5);
  pcVar1 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  _objc_release(pcVar5);
  _objc_release(pcVar8);
  pcVar3 = pcVar1;
  __Unwind_Resume();
  pcStack_228 = FUN_104c64394;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar9;
  pcVar11 = pcVar10;
  pcVar12 = pcVar13;
  pcStack_260 = unaff_x24;
  pcStack_258 = pcVar2;
  puStack_250 = puVar15;
  pcStack_248 = pcVar1;
  pcStack_240 = pcVar5;
  pcStack_238 = pcVar8;
  pppuStack_230 = &ppuStack_190;
  _objc_retain(pcVar9);
  _objc_retain(pcVar10);
  puVar15 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar16 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar9;
      _objc_retainAutorelease(pcVar9);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    unaff_x24 = (char *)auStack_298;
    func_0x00010002b838(auStack_298,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar1 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_280,pcVar1);
    acStack_2b8[0] = '\0';
    acStack_2b8[1] = '\0';
    acStack_2b8[2] = '\0';
    acStack_2b8[3] = '\0';
    acStack_2b8[4] = '\0';
    acStack_2b8[5] = '\0';
    acStack_2b8[6] = '\0';
    acStack_2b8[7] = '\0';
    acStack_2b8[8] = '\0';
    acStack_2b8[9] = '\0';
    acStack_2b8[10] = '\0';
    acStack_2b8[0xb] = '\0';
    acStack_2b8[0xc] = '\0';
    acStack_2b8[0xd] = '\0';
    acStack_2b8[0xe] = '\0';
    acStack_2b8[0xf] = '\0';
    acStack_2b8[0x10] = '\0';
    acStack_2b8[0x11] = '\0';
    acStack_2b8[0x12] = '\0';
    acStack_2b8[0x13] = '\0';
    acStack_2b8[0x14] = '\0';
    acStack_2b8[0x15] = '\0';
    acStack_2b8[0x16] = '\0';
    acStack_2b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_2b8,auStack_298,&lStack_268,2);
    pcVar6 = "";
    pcVar2 = acStack_2b8;
    pcVar11 = acStack_2b8;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110841b70,pcVar11,pcVar13);
    pcStack_2a0 = pcVar2;
    func_0x00010007e5dc(&pcStack_2a0);
    lVar14 = 0;
    puVar15 = auStack_298;
    pcVar12 = pcVar13;
    do {
      if ((&cStack_269)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar10);
  pcVar1 = pcVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_268) {
    ___stack_chk_fail();
    _objc_release(pcVar10);
    if (cStack_281 < '\0') {
      __ZdlPv(auStack_298[0]);
    }
    _objc_release(pcVar10);
    _objc_release(pcVar9);
    pcVar5 = pcVar1;
    __Unwind_Resume();
    pcStack_2c8 = FUN_104c645c4;
    lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = pcVar6;
    pcVar8 = pcVar11;
    pcStack_300 = unaff_x24;
    pcStack_2f8 = pcVar2;
    puStack_2f0 = puVar15;
    pcStack_2e8 = pcVar1;
    pcStack_2e0 = pcVar10;
    pcStack_2d8 = pcVar9;
    ppppuStack_2d0 = &pppuStack_230;
    _objc_retain(pcVar6);
    _objc_retain(pcVar11);
    puVar15 = (undefined8 *)0x0;
    if (pcVar5 != (char *)0x0) {
      plVar16 = *(long **)(pcVar5 + 8);
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
      unaff_x24 = (char *)auStack_338;
      func_0x00010002b838(auStack_338,pcVar1);
      _objc_retain(pcVar11);
      if (pcVar11 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar11);
        pcVar1 = pcVar11;
        func_0x00010bdc3520(pcVar11);
      }
      _objc_release(pcVar11);
      func_0x00010002b838(auStack_320,pcVar1);
      acStack_358[0] = '\0';
      acStack_358[1] = '\0';
      acStack_358[2] = '\0';
      acStack_358[3] = '\0';
      acStack_358[4] = '\0';
      acStack_358[5] = '\0';
      acStack_358[6] = '\0';
      acStack_358[7] = '\0';
      acStack_358[8] = '\0';
      acStack_358[9] = '\0';
      acStack_358[10] = '\0';
      acStack_358[0xb] = '\0';
      acStack_358[0xc] = '\0';
      acStack_358[0xd] = '\0';
      acStack_358[0xe] = '\0';
      acStack_358[0xf] = '\0';
      acStack_358[0x10] = '\0';
      acStack_358[0x11] = '\0';
      acStack_358[0x12] = '\0';
      acStack_358[0x13] = '\0';
      acStack_358[0x14] = '\0';
      acStack_358[0x15] = '\0';
      acStack_358[0x16] = '\0';
      acStack_358[0x17] = '\0';
      func_0x00010007e1e8(acStack_358,auStack_338,&lStack_308,2);
      pcVar3 = "";
      pcVar2 = acStack_358;
      pcVar8 = acStack_358;
      (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110841bc0,pcVar8,pcVar12);
      pcStack_340 = pcVar2;
      func_0x00010007e5dc(&pcStack_340);
      lVar14 = 0;
      puVar15 = auStack_338;
      do {
        if ((&cStack_309)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_320 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
    _objc_release(pcVar11);
    pcVar1 = pcVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_308) {
      ___stack_chk_fail();
      _objc_release(pcVar11);
      if (cStack_321 < '\0') {
        __ZdlPv(auStack_338[0]);
      }
      _objc_release(pcVar11);
      _objc_release(pcVar6);
      pcVar5 = pcVar1;
      __Unwind_Resume();
      pcStack_368 = FUN_104c647f4;
      lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcStack_3a0 = unaff_x24;
      pcStack_398 = pcVar2;
      puStack_390 = puVar15;
      pcStack_388 = pcVar1;
      pcStack_380 = pcVar11;
      pcStack_378 = pcVar6;
      ppppuStack_370 = &ppppuStack_2d0;
      _objc_retain(pcVar3);
      if (pcVar5 != (char *)0x0) {
        plVar16 = *(long **)(pcVar5 + 8);
        _objc_retain(pcVar3);
        if (pcVar3 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar3;
          _objc_retainAutorelease(pcVar3);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar3);
        func_0x00010002b838(auStack_3c0,pcVar1);
        uStack_3e0 = 0;
        uStack_3d8 = 0;
        uStack_3d0 = 0;
        func_0x00010007e1e8(&uStack_3e0,auStack_3c0,&lStack_3a8,1);
        (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110841c10,&uStack_3e0,pcVar8);
        puStack_3c8 = (undefined1 *)&uStack_3e0;
        func_0x00010007e5dc(&puStack_3c8);
        if (cStack_3a9 < '\0') {
          __ZdlPv(auStack_3c0[0]);
        }
      }
      pcVar1 = pcVar3;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3a8) {
        ___stack_chk_fail();
        _objc_release(pcVar3);
        _objc_release(pcVar3);
        pcVar6 = pcVar1;
        __Unwind_Resume();
        ppcVar7 = &pcStack_410;
        pcStack_3e8 = FUN_104c64968;
        puStack_408 = PTR_PTR_1126e3690;
        pcStack_410 = pcVar6;
        pcStack_400 = pcVar1;
        pcStack_3f8 = pcVar3;
        ppppuStack_3f0 = &ppppuStack_370;
        _objc_msgSendSuper2(&pcStack_410,PTR_s_init_1125d9248);
        if (ppcVar7 != (char **)0x0) {
          pcVar1 = (char *)ppcVar7;
          (*(code *)PTR_DAT_113403208)();
          *(char **)((long)ppcVar7 + 8) = pcVar1;
        }
        return (char *)ppcVar7;
      }
      return pcVar1;
    }
    return pcVar1;
  }
  return pcVar1;
}



/* Entry: 104c63ea4; end: 104c64163;  */

/* WARNING: Removing unreachable block (ram,0x000104c6412c) */

char * FUN_104c63ea4(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char **ppcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  char *pcVar15;
  char *unaff_x24;
  char *pcStack_350;
  undefined *puStack_348;
  char *pcStack_340;
  char *pcStack_338;
  undefined8 ****ppppuStack_330;
  code *pcStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  char *pcStack_2e0;
  char *pcStack_2d8;
  undefined8 *puStack_2d0;
  char *pcStack_2c8;
  char *pcStack_2c0;
  char *pcStack_2b8;
  undefined1 ****ppppuStack_2b0;
  code *pcStack_2a8;
  char acStack_298 [24];
  char *pcStack_280;
  undefined8 auStack_278 [2];
  char cStack_261;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  char *pcStack_240;
  char *pcStack_238;
  undefined8 *puStack_230;
  char *pcStack_228;
  char *pcStack_220;
  char *pcStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  char acStack_1f8 [24];
  char *pcStack_1e0;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  undefined8 *puStack_190;
  char *pcStack_188;
  char *pcStack_180;
  char *pcStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  char acStack_158 [24];
  char *pcStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  char acStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar9 = param_3;
  pcVar4 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(acStack_a0,pcVar1);
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
    func_0x00010002b838(auStack_88,pcVar1);
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
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,acStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110841ad0,acStack_c0,param_5);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar12 = 0;
    pcVar9 = pcVar2;
    pcVar4 = param_5;
    do {
      if ((&cStack_59)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar12 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  pcVar15 = acStack_a0;
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != pcVar15);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_c8 = FUN_104c64164;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar10 = pcVar9;
  pcVar6 = pcVar4;
  pcStack_100 = unaff_x24;
  pcStack_f8 = pcVar15;
  pcStack_f0 = pcVar2;
  pcStack_e8 = param_4;
  pcStack_e0 = param_3;
  pcStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar9);
  puVar13 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar14 = *(long **)(pcVar3 + 8);
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
    unaff_x24 = (char *)auStack_138;
    func_0x00010002b838(auStack_138,pcVar2);
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
    func_0x00010002b838(auStack_120,pcVar2);
    acStack_158[0] = '\0';
    acStack_158[1] = '\0';
    acStack_158[2] = '\0';
    acStack_158[3] = '\0';
    acStack_158[4] = '\0';
    acStack_158[5] = '\0';
    acStack_158[6] = '\0';
    acStack_158[7] = '\0';
    acStack_158[8] = '\0';
    acStack_158[9] = '\0';
    acStack_158[10] = '\0';
    acStack_158[0xb] = '\0';
    acStack_158[0xc] = '\0';
    acStack_158[0xd] = '\0';
    acStack_158[0xe] = '\0';
    acStack_158[0xf] = '\0';
    acStack_158[0x10] = '\0';
    acStack_158[0x11] = '\0';
    acStack_158[0x12] = '\0';
    acStack_158[0x13] = '\0';
    acStack_158[0x14] = '\0';
    acStack_158[0x15] = '\0';
    acStack_158[0x16] = '\0';
    acStack_158[0x17] = '\0';
    func_0x00010007e1e8(acStack_158,auStack_138,&lStack_108,2);
    pcVar7 = "";
    pcVar15 = acStack_158;
    pcVar10 = acStack_158;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110841b20,pcVar10,pcVar4);
    pcStack_140 = pcVar15;
    func_0x00010007e5dc(&pcStack_140);
    lVar12 = 0;
    puVar13 = auStack_138;
    pcVar6 = pcVar4;
    do {
      if ((&cStack_109)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar9);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_121 < '\0') {
    __ZdlPv(auStack_138[0]);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar1);
  pcVar5 = pcVar4;
  __Unwind_Resume();
  pcStack_168 = FUN_104c64394;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar7;
  pcVar3 = pcVar10;
  pcVar11 = pcVar6;
  pcStack_1a0 = unaff_x24;
  pcStack_198 = pcVar15;
  puStack_190 = puVar13;
  pcStack_188 = pcVar4;
  pcStack_180 = pcVar9;
  pcStack_178 = pcVar1;
  ppuStack_170 = &puStack_d0;
  _objc_retain(pcVar7);
  _objc_retain(pcVar10);
  puVar13 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar14 = *(long **)(pcVar5 + 8);
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
    unaff_x24 = (char *)auStack_1d8;
    func_0x00010002b838(auStack_1d8,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar1 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_1c0,pcVar1);
    acStack_1f8[0] = '\0';
    acStack_1f8[1] = '\0';
    acStack_1f8[2] = '\0';
    acStack_1f8[3] = '\0';
    acStack_1f8[4] = '\0';
    acStack_1f8[5] = '\0';
    acStack_1f8[6] = '\0';
    acStack_1f8[7] = '\0';
    acStack_1f8[8] = '\0';
    acStack_1f8[9] = '\0';
    acStack_1f8[10] = '\0';
    acStack_1f8[0xb] = '\0';
    acStack_1f8[0xc] = '\0';
    acStack_1f8[0xd] = '\0';
    acStack_1f8[0xe] = '\0';
    acStack_1f8[0xf] = '\0';
    acStack_1f8[0x10] = '\0';
    acStack_1f8[0x11] = '\0';
    acStack_1f8[0x12] = '\0';
    acStack_1f8[0x13] = '\0';
    acStack_1f8[0x14] = '\0';
    acStack_1f8[0x15] = '\0';
    acStack_1f8[0x16] = '\0';
    acStack_1f8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1f8,auStack_1d8,&lStack_1a8,2);
    pcVar2 = "";
    pcVar15 = acStack_1f8;
    pcVar3 = acStack_1f8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110841b70,pcVar3,pcVar6);
    pcStack_1e0 = pcVar15;
    func_0x00010007e5dc(&pcStack_1e0);
    lVar12 = 0;
    puVar13 = auStack_1d8;
    pcVar11 = pcVar6;
    do {
      if ((&cStack_1a9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar10);
  pcVar1 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  if (cStack_1c1 < '\0') {
    __ZdlPv(auStack_1d8[0]);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar7);
  pcVar6 = pcVar1;
  __Unwind_Resume();
  pcStack_208 = FUN_104c645c4;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar2;
  pcVar4 = pcVar3;
  pcStack_240 = unaff_x24;
  pcStack_238 = pcVar15;
  puStack_230 = puVar13;
  pcStack_228 = pcVar1;
  pcStack_220 = pcVar10;
  pcStack_218 = pcVar7;
  pppuStack_210 = &ppuStack_170;
  _objc_retain(pcVar2);
  _objc_retain(pcVar3);
  puVar13 = (undefined8 *)0x0;
  if (pcVar6 != (char *)0x0) {
    plVar14 = *(long **)(pcVar6 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    unaff_x24 = (char *)auStack_278;
    func_0x00010002b838(auStack_278,pcVar1);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar1 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_260,pcVar1);
    acStack_298[0] = '\0';
    acStack_298[1] = '\0';
    acStack_298[2] = '\0';
    acStack_298[3] = '\0';
    acStack_298[4] = '\0';
    acStack_298[5] = '\0';
    acStack_298[6] = '\0';
    acStack_298[7] = '\0';
    acStack_298[8] = '\0';
    acStack_298[9] = '\0';
    acStack_298[10] = '\0';
    acStack_298[0xb] = '\0';
    acStack_298[0xc] = '\0';
    acStack_298[0xd] = '\0';
    acStack_298[0xe] = '\0';
    acStack_298[0xf] = '\0';
    acStack_298[0x10] = '\0';
    acStack_298[0x11] = '\0';
    acStack_298[0x12] = '\0';
    acStack_298[0x13] = '\0';
    acStack_298[0x14] = '\0';
    acStack_298[0x15] = '\0';
    acStack_298[0x16] = '\0';
    acStack_298[0x17] = '\0';
    func_0x00010007e1e8(acStack_298,auStack_278,&lStack_248,2);
    pcVar9 = "";
    pcVar15 = acStack_298;
    pcVar4 = acStack_298;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110841bc0,pcVar4,pcVar11);
    pcStack_280 = pcVar15;
    func_0x00010007e5dc(&pcStack_280);
    lVar12 = 0;
    puVar13 = auStack_278;
    do {
      if ((&cStack_249)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar3);
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_248) {
    ___stack_chk_fail();
    _objc_release(pcVar3);
    if (cStack_261 < '\0') {
      __ZdlPv(auStack_278[0]);
    }
    _objc_release(pcVar3);
    _objc_release(pcVar2);
    pcVar7 = pcVar1;
    __Unwind_Resume();
    pcStack_2a8 = FUN_104c647f4;
    lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcStack_2e0 = unaff_x24;
    pcStack_2d8 = pcVar15;
    puStack_2d0 = puVar13;
    pcStack_2c8 = pcVar1;
    pcStack_2c0 = pcVar3;
    pcStack_2b8 = pcVar2;
    ppppuStack_2b0 = &pppuStack_210;
    _objc_retain(pcVar9);
    if (pcVar7 != (char *)0x0) {
      plVar14 = *(long **)(pcVar7 + 8);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar9;
        _objc_retainAutorelease(pcVar9);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar9);
      func_0x00010002b838(auStack_300,pcVar1);
      uStack_320 = 0;
      uStack_318 = 0;
      uStack_310 = 0;
      func_0x00010007e1e8(&uStack_320,auStack_300,&lStack_2e8,1);
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110841c10,&uStack_320,pcVar4);
      puStack_308 = (undefined1 *)&uStack_320;
      func_0x00010007e5dc(&puStack_308);
      if (cStack_2e9 < '\0') {
        __ZdlPv(auStack_300[0]);
      }
    }
    pcVar1 = pcVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2e8) {
      ___stack_chk_fail();
      _objc_release(pcVar9);
      _objc_release(pcVar9);
      pcVar4 = pcVar1;
      __Unwind_Resume();
      ppcVar8 = &pcStack_350;
      pcStack_328 = FUN_104c64968;
      puStack_348 = PTR_PTR_1126e3690;
      pcStack_350 = pcVar4;
      pcStack_340 = pcVar1;
      pcStack_338 = pcVar9;
      ppppuStack_330 = &ppppuStack_2b0;
      _objc_msgSendSuper2(&pcStack_350,PTR_s_init_1125d9248);
      if (ppcVar8 != (char **)0x0) {
        pcVar1 = (char *)ppcVar8;
        (*(code *)PTR_DAT_113403208)();
        *(char **)((long)ppcVar8 + 8) = pcVar1;
      }
      return (char *)ppcVar8;
    }
    return pcVar1;
  }
  return pcVar1;
}



/* Entry: 104c64164; end: 104c64393;  */

char * FUN_104c64164(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_290;
  undefined *puStack_288;
  char *pcStack_280;
  char *pcStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 *puStack_248;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  char *pcStack_218;
  undefined8 *puStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1d8 [24];
  char *pcStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  char *pcStack_178;
  undefined8 *puStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
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
  pcVar1 = param_2;
  pcVar5 = param_3;
  uVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar14 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
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
    unaff_x24 = auStack_78;
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
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar5 = acStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110841b20,pcVar5,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar12 = 0;
    puVar14 = auStack_78;
    uVar10 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_104c64394;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar8 = pcVar5;
  uVar11 = uVar10;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar14;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar5);
  puVar14 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar13 = *(long **)(pcVar3 + 8);
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
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,pcVar2);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_100,pcVar2);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x00010007e1e8(acStack_138,auStack_118,&lStack_e8,2);
    pcVar7 = "";
    unaff_x23 = acStack_138;
    pcVar8 = acStack_138;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110841b70,pcVar8,uVar10);
    pcStack_120 = unaff_x23;
    func_0x00010007e5dc(&pcStack_120);
    lVar12 = 0;
    puVar14 = auStack_118;
    uVar11 = uVar10;
    do {
      if ((&cStack_e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar5);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar5);
  _objc_release(pcVar1);
  pcVar4 = pcVar2;
  __Unwind_Resume();
  pcStack_148 = FUN_104c645c4;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar7;
  pcVar9 = pcVar8;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = puVar14;
  pcStack_168 = pcVar2;
  pcStack_160 = pcVar5;
  pcStack_158 = pcVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar7);
  _objc_retain(pcVar8);
  puVar14 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar13 = *(long **)(pcVar4 + 8);
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
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,pcVar1);
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
    func_0x00010002b838(auStack_1a0,pcVar1);
    acStack_1d8[0] = '\0';
    acStack_1d8[1] = '\0';
    acStack_1d8[2] = '\0';
    acStack_1d8[3] = '\0';
    acStack_1d8[4] = '\0';
    acStack_1d8[5] = '\0';
    acStack_1d8[6] = '\0';
    acStack_1d8[7] = '\0';
    acStack_1d8[8] = '\0';
    acStack_1d8[9] = '\0';
    acStack_1d8[10] = '\0';
    acStack_1d8[0xb] = '\0';
    acStack_1d8[0xc] = '\0';
    acStack_1d8[0xd] = '\0';
    acStack_1d8[0xe] = '\0';
    acStack_1d8[0xf] = '\0';
    acStack_1d8[0x10] = '\0';
    acStack_1d8[0x11] = '\0';
    acStack_1d8[0x12] = '\0';
    acStack_1d8[0x13] = '\0';
    acStack_1d8[0x14] = '\0';
    acStack_1d8[0x15] = '\0';
    acStack_1d8[0x16] = '\0';
    acStack_1d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1d8,auStack_1b8,&lStack_188,2);
    pcVar3 = "";
    unaff_x23 = acStack_1d8;
    pcVar9 = acStack_1d8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110841bc0,pcVar9,uVar11);
    pcStack_1c0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_1c0);
    lVar12 = 0;
    puVar14 = auStack_1b8;
    do {
      if ((&cStack_189)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar1 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar7);
  pcVar5 = pcVar1;
  __Unwind_Resume();
  pcStack_1e8 = FUN_104c647f4;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_220 = unaff_x24;
  pcStack_218 = unaff_x23;
  puStack_210 = puVar14;
  pcStack_208 = pcVar1;
  pcStack_200 = pcVar8;
  pcStack_1f8 = pcVar7;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(pcVar3);
  if (pcVar5 != (char *)0x0) {
    plVar13 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_240,pcVar1);
    uStack_260 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    func_0x00010007e1e8(&uStack_260,auStack_240,&lStack_228,1);
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110841c10,&uStack_260,pcVar9);
    puStack_248 = (undefined1 *)&uStack_260;
    func_0x00010007e5dc(&puStack_248);
    if (cStack_229 < '\0') {
      __ZdlPv(auStack_240[0]);
    }
  }
  pcVar1 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  _objc_release(pcVar3);
  pcVar5 = pcVar1;
  __Unwind_Resume();
  ppcVar6 = &pcStack_290;
  pcStack_268 = FUN_104c64968;
  puStack_288 = PTR_PTR_1126e3690;
  pcStack_290 = pcVar5;
  pcStack_280 = pcVar1;
  pcStack_278 = pcVar3;
  pppuStack_270 = &pppuStack_1f0;
  _objc_msgSendSuper2(&pcStack_290,PTR_s_init_1125d9248);
  if (ppcVar6 != (char **)0x0) {
    pcVar1 = (char *)ppcVar6;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar6 + 8) = pcVar1;
  }
  return (char *)ppcVar6;
}



/* Entry: 104c64394; end: 104c645c3;  */

char * FUN_104c64394(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_1f0;
  undefined *puStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  char *pcStack_178;
  undefined8 *puStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
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
  pcVar1 = param_2;
  pcVar4 = param_3;
  uVar8 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar11 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
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
    unaff_x24 = auStack_78;
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
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar4 = acStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110841b70,pcVar4,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar9 = 0;
    puVar11 = auStack_78;
    uVar8 = param_4;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_104c645c4;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar7 = pcVar4;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar11;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar4);
  puVar11 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar10 = *(long **)(pcVar3 + 8);
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
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,pcVar2);
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
    func_0x00010002b838(auStack_100,pcVar2);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x00010007e1e8(acStack_138,auStack_118,&lStack_e8,2);
    pcVar6 = "";
    unaff_x23 = acStack_138;
    pcVar7 = acStack_138;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110841bc0,pcVar7,uVar8);
    pcStack_120 = unaff_x23;
    func_0x00010007e5dc(&pcStack_120);
    lVar9 = 0;
    puVar11 = auStack_118;
    do {
      if ((&cStack_e9)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(pcVar4);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar4);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_148 = FUN_104c647f4;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = puVar11;
  pcStack_168 = pcVar2;
  pcStack_160 = pcVar4;
  pcStack_158 = pcVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar6);
  if (pcVar3 != (char *)0x0) {
    plVar10 = *(long **)(pcVar3 + 8);
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
    func_0x00010002b838(auStack_1a0,pcVar1);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x00010007e1e8(&uStack_1c0,auStack_1a0,&lStack_188,1);
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110841c10,&uStack_1c0,pcVar7);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
    }
  }
  pcVar1 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  _objc_release(pcVar6);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  ppcVar5 = &pcStack_1f0;
  pcStack_1c8 = FUN_104c64968;
  puStack_1e8 = PTR_PTR_1126e3690;
  pcStack_1f0 = pcVar4;
  pcStack_1e0 = pcVar1;
  pcStack_1d8 = pcVar6;
  pppuStack_1d0 = &ppuStack_150;
  _objc_msgSendSuper2(&pcStack_1f0,PTR_s_init_1125d9248);
  if (ppcVar5 != (char **)0x0) {
    pcVar1 = (char *)ppcVar5;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar5 + 8) = pcVar1;
  }
  return (char *)ppcVar5;
}



/* Entry: 104c645c4; end: 104c647f3;  */

char * FUN_104c645c4(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_150;
  undefined *puStack_148;
  char *pcStack_140;
  char *pcStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
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
  pcVar1 = param_2;
  pcVar4 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar8 = (undefined8 *)0x0;
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
    unaff_x24 = auStack_78;
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
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar4 = acStack_98;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110841bc0,pcVar4,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar6 = 0;
    puVar8 = auStack_78;
    do {
      if ((&cStack_49)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_104c647f4;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar8;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar3 != (char *)0x0) {
    plVar7 = *(long **)(pcVar3 + 8);
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
    func_0x00010002b838(auStack_100,pcVar2);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110841c10,&uStack_120,pcVar4);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
    }
  }
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar2 = pcVar4;
  __Unwind_Resume();
  ppcVar5 = &pcStack_150;
  pcStack_128 = FUN_104c64968;
  puStack_148 = PTR_PTR_1126e3690;
  pcStack_150 = pcVar2;
  pcStack_140 = pcVar4;
  pcStack_138 = pcVar1;
  ppuStack_130 = &puStack_b0;
  _objc_msgSendSuper2(&pcStack_150,PTR_s_init_1125d9248);
  if (ppcVar5 != (char **)0x0) {
    pcVar1 = (char *)ppcVar5;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar5 + 8) = pcVar1;
  }
  return (char *)ppcVar5;
}



/* Entry: 104c647f4; end: 104c64967;  */

char * FUN_104c647f4(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  long *plVar4;
  char *pcStack_b0;
  undefined *puStack_a8;
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
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110841c10,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  ppcVar3 = &pcStack_b0;
  pcStack_88 = FUN_104c64968;
  puStack_a8 = PTR_PTR_1126e3690;
  pcStack_b0 = pcVar2;
  pcStack_a0 = pcVar1;
  pcStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&pcStack_b0,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    pcVar1 = (char *)ppcVar3;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar3 + 8) = pcVar1;
  }
  return (char *)ppcVar3;
}



/* Entry: 104c64968; end: 104c649db; -[SCGrapheneClientDeclaredUnderageMetric2 init] */

undefined1 * FUN_104c64968(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3690;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104c649dc; end: 104c64b4f;  */

void FUN_104c649dc(long param_1,char *param_2,undefined8 param_3)

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
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110841d60,&uStack_80,param_3);
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
  pcStack_88 = FUN_104c64b50;
  if (pcVar3 != (char *)0x0) {
    plVar4 = *(long **)(pcVar3 + 8);
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(*plVar4 + 0x28))(plVar4,&UNK_110841db0);
    if ((int)plVar4 != 0) {
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
                (*(long **)(pcVar3 + 8),&UNK_110841db0,&uStack_c0,(long)pcVar1 * 100);
      puStack_a8 = (undefined1 *)&uStack_c0;
      func_0x00010007e5dc(&puStack_a8);
    }
  }
  return;
}



/* Entry: 104c64b50; end: 104c64beb;  */

void FUN_104c64b50(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110841db0);
    if ((int)plVar1 != 0) {
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      (**(code **)(**(long **)(param_1 + 8) + 0x18))
                (*(long **)(param_1 + 8),&UNK_110841db0,&uStack_40,param_2 * 100);
      puStack_28 = (undefined1 *)&uStack_40;
      func_0x00010007e5dc(&puStack_28);
    }
  }
  return;
}



/* Entry: 104c64bec; end: 104c64e1b;  */

char * FUN_104c64bec(long param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  long *plVar12;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_160;
  undefined *puStack_158;
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
  pcVar1 = param_2;
  pcVar5 = param_3;
  pcVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  pcVar4 = (char *)0x0;
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
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
    unaff_x24 = auStack_78;
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
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar5 = acStack_98;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar11 = 0;
    pcVar4 = (char *)auStack_78;
    pcVar10 = param_4;
    do {
      if ((&cStack_49)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcVar9 = acStack_120;
  pcStack_a8 = FUN_104c64e1c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar5;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = (undefined8 *)pcVar4;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  plVar12 = (long *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
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
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110841e50);
    puStack_108 = acStack_120;
    func_0x00010007e5dc(&puStack_108);
    pcVar8 = pcVar9;
    pcVar10 = pcVar5;
    pcVar4 = acStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      pcVar8 = pcVar9;
      pcVar10 = pcVar5;
      pcVar4 = acStack_120;
    }
  }
  pcVar5 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar5;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar2 = pcVar5;
  __Unwind_Resume();
  ppcVar6 = &pcStack_160;
  pcStack_128 = FUN_104c64f90;
  puStack_150 = (undefined8 *)pcVar4;
  plStack_148 = plVar12;
  pcStack_140 = pcVar5;
  pcStack_138 = pcVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(pcVar8);
  _objc_retain(pcVar10);
  _objc_retain(param_5);
  puStack_158 = PTR_PTR_1126e3698;
  pcStack_160 = pcVar2;
  _objc_msgSendSuper2(&pcStack_160,PTR_s_init_1125d9248);
  if (ppcVar6 != (char **)0x0) {
    _objc_retain(pcVar8);
    uVar7 = *(undefined8 *)((long)ppcVar6 + 8);
    *(char **)((long)ppcVar6 + 8) = pcVar8;
    _objc_release(uVar7);
    _objc_retain(pcVar10);
    uVar7 = *(undefined8 *)((long)ppcVar6 + 0x10);
    *(char **)((long)ppcVar6 + 0x10) = pcVar10;
    _objc_release(uVar7);
    _objc_retain(param_5);
    uVar7 = *(undefined8 *)((long)ppcVar6 + 0x18);
    *(undefined8 *)((long)ppcVar6 + 0x18) = param_5;
    _objc_release(uVar7);
  }
  _objc_release(param_5);
  _objc_release(pcVar10);
  _objc_release(pcVar8);
  return (char *)ppcVar6;
}



/* Entry: 104c64e1c; end: 104c64f8f;  */

char * FUN_104c64e1c(long param_1,char *param_2,undefined1 *param_3,undefined1 *param_4,
                    undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *unaff_x22;
  char *pcStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  long *plStack_a8;
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
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_2);
  plVar7 = (long *)0x0;
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
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110841e50);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    param_4 = param_3;
    unaff_x22 = &uStack_80;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
      param_4 = param_3;
      unaff_x22 = &uStack_80;
    }
  }
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  ppcVar3 = &pcStack_c0;
  pcStack_88 = FUN_104c64f90;
  puStack_b0 = (undefined1 *)unaff_x22;
  plStack_a8 = plVar7;
  pcStack_a0 = pcVar1;
  pcStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_b8 = PTR_PTR_1126e3698;
  pcStack_c0 = pcVar2;
  _objc_msgSendSuper2(&pcStack_c0,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    _objc_retain(puVar5);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 8);
    *(undefined1 **)((long)ppcVar3 + 8) = puVar5;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 0x10);
    *(undefined1 **)((long)ppcVar3 + 0x10) = param_4;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 0x18);
    *(undefined8 *)((long)ppcVar3 + 0x18) = param_5;
    _objc_release(uVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar5);
  return (char *)ppcVar3;
}



/* Entry: 104c64f90; end: 104c6505b; -[SCBillboardActionButtonActionHandler initWithUserEducationTrayExposer:userEducationTrayScopeServices:circumstanceEngine:] */

undefined1 *
FUN_104c64f90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e3698;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104c6505c; end: 104c65063; -[SCBillboardActionButtonActionHandler actionHandlerType] */

undefined8 FUN_104c6505c(void)

{
  return 0x17;
}



/* Entry: 104c65064; end: 104c651bf; -[SCBillboardActionButtonActionHandler handleOnTapActionWithContext:] */

void FUN_104c65064(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0e2fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  _objc_release(uVar6);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    puVar3 = PTR_PTR_1126ae580;
    _objc_alloc(PTR_PTR_1126ae580);
    puVar4 = puVar3;
    FUN_104c65944();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bdf5520(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bdf5500(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c053280(puVar3,param_2,puVar4,lVar2,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(puVar4);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = param_3;
    func_0x00010c27ece0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf23ca0(uVar6,param_2,uVar1,puVar3,0x11,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010c18b5e0(uVar6,param_2,param_1);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,uVar6);
    _objc_release(uVar6);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104c651c0; end: 104c6522b; -[SCBillboardActionButtonActionHandler userEducationTrayDidComplete:] */

void FUN_104c651c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 104c6522c; end: 104c6538f; -[SCBillboardActionButtonActionHandler _createUserEducationTrayPages] */

void FUN_104c6522c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ae588;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000104c65974();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01cfe0(puVar1,param_2,&PTR____CFConstantStringClassReference_110daaf78,puVar2);
  puVar7 = PTR_PTR_1126ae588;
  puStack_70 = puVar1;
  _objc_alloc();
  puVar3 = puVar7;
  func_0x000104c6598c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01cfe0(puVar7,param_2,&PTR____CFConstantStringClassReference_110daaf98,puVar3);
  puVar4 = PTR_PTR_1126ae588;
  puStack_68 = puVar7;
  _objc_alloc();
  puVar5 = puVar4;
  func_0x000104c659a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01cfe0(puVar4,param_2,&PTR____CFConstantStringClassReference_110daafb8,puVar5);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  puVar7 = *(undefined **)(puVar2 + 0x18);
  func_0x00010c25d780(puVar7,param_2,&PTR____CFConstantStringClassReference_110daaf58,
                      &PTR____CFConstantStringClassReference_110daafd8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar7;
  func_0x000104c6595c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar7;
  func_0x00010c08fa60();
  if (puVar2 == (undefined *)0x0) {
LAB_104c654b8:
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2cf00(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    ppuVar8 = &PTR___NSConcreteGlobalBlock_110841f00;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf2cf00(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    if ((int)puVar4 == 0) goto LAB_104c654b8;
    func_0x000104c659bc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_104c65570;
    puStack_d0 = &UNK_110841f50;
    _objc_retain(puVar7);
    ppuVar8 = &puStack_e8;
    puStack_c8 = puVar7;
    _objc_retainBlock(ppuVar8);
    _objc_release(puStack_c8);
    puVar1 = puVar2;
  }
  puVar6 = PTR_PTR_1126ae5a0;
  _objc_alloc(PTR_PTR_1126ae5a0);
  func_0x00010c051340();
  _objc_release(ppuVar8);
  _objc_release(puVar1);
  _objc_release(puVar7);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104c65390; end: 104c65563; -[SCBillboardActionButtonActionHandler _createUserEducationTrayButtonConfiguration] */

void FUN_104c65390(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar1 = *(undefined **)(param_1 + 0x18);
  func_0x00010c25d780(puVar1,param_2,&PTR____CFConstantStringClassReference_110daaf58,
                      &PTR____CFConstantStringClassReference_110daafd8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000104c6595c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c08fa60();
  if (puVar3 != (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf2cf00(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    if ((int)puVar5 != 0) {
      func_0x000104c659bc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_104c65570;
      puStack_60 = &UNK_110841f50;
      _objc_retain(puVar1);
      ppuVar6 = &puStack_78;
      puStack_58 = puVar1;
      _objc_retainBlock(ppuVar6);
      _objc_release(puStack_58);
      puVar2 = puVar3;
      goto LAB_104c6550c;
    }
  }
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2cf00(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  ppuVar6 = &PTR___NSConcreteGlobalBlock_110841f00;
LAB_104c6550c:
  puVar3 = PTR_PTR_1126ae5a0;
  _objc_alloc(PTR_PTR_1126ae5a0);
  func_0x00010c051340();
  _objc_release(ppuVar6);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104c65564; end: 104c6556f;  */

void FUN_104c65564(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000104c6556c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))(param_2);
  return;
}



/* Entry: 104c65570; end: 104c6565f;  */

void FUN_104c65570(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  _objc_retain(param_2);
  func_0x00010c22b720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  func_0x00010c0e9b80(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  (**(code **)(param_2 + 0x10))(param_2);
  _objc_release(param_2);
  _objc_release(uVar3);
  return;
}



/* Entry: 104c65660; end: 104c65663;  */

void FUN_104c65660(void)

{
  return;
}



/* Entry: 104c65664; end: 104c656ab; -[SCBillboardActionButtonActionHandler .cxx_destruct] */

void FUN_104c65664(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c656ac; end: 104c657cf; -[SCBillboardActionButtonActionHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c656ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126ae5a8;
  _objc_alloc(PTR_PTR_1126ae5a8);
  if (param_1 == 0) {
    _objc_retain(0);
    lVar3 = 0;
    uVar4 = 0;
    lVar5 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + _DAT_11270f91c);
    _objc_retain(uVar4);
    lVar3 = param_1 + _DAT_11270f924;
    _objc_loadWeakRetained(lVar3);
    lVar5 = param_1 + _DAT_11270f920;
    _objc_loadWeakRetained(lVar5);
  }
  lVar2 = lVar5;
  func_0x00010bf398e0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05ab60(puVar1,param_2,uVar4,lVar3,lVar2);
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_release(lVar3);
  lVar3 = 0;
  if (param_1 != 0) {
    lVar3 = param_1 + _DAT_11270f918;
    _objc_loadWeakRetained(lVar3);
  }
  lVar5 = lVar3;
  func_0x00010c1018e0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar5);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104c657d0; end: 104c65823; -[SCBillboardActionButtonActionHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c657d0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11270f924);
  _objc_destroyWeak(param_1 + _DAT_11270f920);
  _objc_storeStrong(param_1 + _DAT_11270f91c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11270f918);
  return;
}



/* Entry: 104c65824; end: 104c658ef; -[SCBillboardActionButtonUserEducationTrayDataSourceImpl initWithTitle:pages:buttonConfiguration:] */

undefined1 *
FUN_104c65824(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e36a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104c658f0; end: 104c658f7; -[SCBillboardActionButtonUserEducationTrayDataSourceImpl title] */

undefined8 FUN_104c658f0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104c658f8; end: 104c658ff; -[SCBillboardActionButtonUserEducationTrayDataSourceImpl pages] */

undefined8 FUN_104c658f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104c65900; end: 104c65907; -[SCBillboardActionButtonUserEducationTrayDataSourceImpl buttonConfiguration] */

undefined8 FUN_104c65900(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104c65908; end: 104c65943; -[SCBillboardActionButtonUserEducationTrayDataSourceImpl .cxx_destruct] */

void FUN_104c65908(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c65944; end: 104c659d3;  */

void FUN_104c65944(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110daaff8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110daaff8,
                      &PTR____CFConstantStringClassReference_110dab018,0);
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



/* Entry: 104c659d4; end: 104c65acf; -[SCBillboardAddFriendActionHandler initWithSnapchattersDataFetcher:snapchattersDataMutator:deepLinkHandling:] */

undefined1 *
FUN_104c659d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e36a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae5b0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    if (*(long *)((long)puVar1 + 8) != 0) {
      FUN_104c66a34(*(undefined8 *)(*(long *)((long)puVar1 + 8) + 8),1);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104c65ad0; end: 104c65ad7; -[SCBillboardAddFriendActionHandler actionHandlerType] */

undefined8 FUN_104c65ad0(void)

{
  return 0x1a;
}



/* Entry: 104c65ad8; end: 104c65ae3; +[SCBillboardAddFriendActionHandler sourceForSurface:] */

void FUN_104c65ad8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2477b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ae5b8,PTR_s_sourceForSurface__11266f810);
  return;
}



/* Entry: 104c65ae4; end: 104c65d13; -[SCBillboardAddFriendActionHandler handleOnTapActionWithContext:] */

void FUN_104c65ae4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  ulong uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010beedca0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef8720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar4 = *(long *)(param_1 + 8);
  uVar1 = uVar2;
  func_0x00010bf6ebe0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22db00(uVar2);
  if (lVar4 != 0) {
    FUN_104c66aac(*(undefined8 *)(lVar4 + 8),uVar3,uVar1,1);
  }
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c22db00();
  if ((uVar1 & 1) == 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_104c65d14;
    puStack_58 = &UNK_110841f80;
    lStack_50 = param_1;
    _objc_retain(uVar2);
    uStack_48 = uVar2;
    func_0x0001000d76cc("APPSTORE",&puStack_70);
    uVar1 = param_3;
    func_0x00010c0e2fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) {
      uVar1 = param_3;
      func_0x00010c0e2fa0();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(uVar1 + 0x10))();
      _objc_release(uVar1);
    }
    _objc_release(uStack_48);
  }
  else {
    _objc_initWeak(auStack_78,param_1);
    uVar1 = uVar2;
    func_0x00010c2923e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(uVar2);
    _objc_retain(param_3);
    func_0x00010bdc8ee0(param_1);
    _objc_release(uVar1);
    _objc_release(param_3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 104c65d14; end: 104c65d7b;  */

void FUN_104c65d14(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf6ebe0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2923e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be32d40(uVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104c65d7c; end: 104c65e9f;  */

void FUN_104c65d7c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 != 0) && (param_3 == 0)) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_104c65ea0;
    puStack_58 = &UNK_110841fb0;
    _objc_copyWeak(auStack_48,param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    uStack_50 = uVar2;
    func_0x0001000d76cc("APPSTORE",&puStack_70);
    _objc_release(uStack_50);
    _objc_destroyWeak(auStack_48);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c0e2fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010c0e2fa0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104c65ea0; end: 104c65f1b;  */

void FUN_104c65ea0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf6ebe0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be32d40(lVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104c65f1c; end: 104c6606b; -[SCBillboardAddFriendActionHandler _addUserWithUserId:callback:] */

void FUN_104c65f1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c2448c0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104c6606c; end: 104c66103;  */

void FUN_104c6606c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 == 0 || lVar1 != 0) {
    func_0x00010bde3980(lVar1);
  }
  else {
    (**(code **)(lVar2 + 0x10))(lVar2,param_2,param_3);
  }
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104c66104; end: 104c662cb; -[SCBillboardAddFriendActionHandler _completionForFetchUserWithUserId:snapchatter:error:callback:] */

void FUN_104c66104(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar4 = *(long *)(param_1 + 8);
  _objc_retain(lVar4);
  if (lVar4 != 0) {
    FUN_104c66c98(*(undefined8 *)(lVar4 + 8),param_4 != 0 && param_5 == 0,1);
  }
  if (param_4 != 0 && param_5 == 0) {
    puVar1 = PTR_PTR_1126ae5c0;
    func_0x00010befca80(PTR_PTR_1126ae5c0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar4);
    _objc_retain(param_6);
    _objc_retain(param_4);
    func_0x00010bef8a80(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_4);
    _objc_release(param_6);
    _objc_release(lVar4);
    _objc_release(puVar1);
  }
  else if (param_6 != 0) {
    (**(code **)(param_6 + 0x10))(param_6,0,param_5);
  }
  _objc_release(lVar4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104c662cc; end: 104c66333;  */

void FUN_104c662cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_104c66db0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),param_2,1);
  }
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x28),param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104c66334; end: 104c6646f; -[SCBillboardAddFriendActionHandler _handleUrl:userId:] */

void FUN_104c66334(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x00010bdf5220();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(param_1 + 8);
  _objc_retain(lVar5);
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c082da0();
    _objc_release(uVar3);
    if ((int)uVar4 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(lVar5);
      func_0x00010bfd1bc0(uVar4);
      _objc_release(uVar4);
      _objc_release(lVar5);
      goto LAB_104c66440;
    }
  }
  if (lVar5 != 0) {
    FUN_104c66ec8(*(undefined8 *)(lVar5 + 8),lVar2,&PTR____CFConstantStringClassReference_110dab118,
                  1);
  }
LAB_104c66440:
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 104c66470; end: 104c665a7;  */

void FUN_104c66470(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  func_0x00010c0be280(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 104c665a8; end: 104c66637;  */

/* WARNING: Removing unreachable block (ram,0x000104c66f7c) */

char * FUN_104c665a8(char *param_1)

{
  long lVar1;
  char *pcVar2;
  undefined **ppuVar3;
  char *pcVar4;
  char **ppcVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  char *pcStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  undefined **ppuStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    return param_1;
  }
  pcVar7 = *(char **)(param_1 + 0x28);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  ppuVar3 = &PTR____CFConstantStringClassReference_110dab0d8;
  uVar9 = 1;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = ppuVar3;
  _objc_retain(pcVar7);
  _objc_retain(&PTR____CFConstantStringClassReference_110dab0d8);
  puVar11 = (undefined8 *)0x0;
  if (lVar1 != 0) {
    plVar10 = *(long **)(lVar1 + 8);
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
    func_0x00010002b838(auStack_78,pcVar2);
    _objc_retain(&PTR____CFConstantStringClassReference_110dab0d8);
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110dab0d8);
    func_0x00010bdc3520(&PTR____CFConstantStringClassReference_110dab0d8);
    _objc_release(&PTR____CFConstantStringClassReference_110dab0d8);
    func_0x00010002b838(auStack_60,ppuVar3);
    puStack_98 = (undefined *)0x0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&puStack_98,auStack_78,&lStack_48,2);
    ppuVar8 = &puStack_98;
    uVar9 = 1;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110842240);
    ppuStack_80 = &puStack_98;
    func_0x00010007e5dc(&ppuStack_80);
    lVar1 = 0;
    puVar11 = auStack_78;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(&PTR____CFConstantStringClassReference_110dab0d8);
  pcVar2 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(&PTR____CFConstantStringClassReference_110dab0d8);
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    _objc_release(&PTR____CFConstantStringClassReference_110dab0d8);
    _objc_release(pcVar7);
    pcVar4 = pcVar2;
    __Unwind_Resume();
    ppcVar5 = &pcStack_e0;
    ppuStack_c0 = &PTR____CFConstantStringClassReference_110dab0d8;
    pcStack_a8 = FUN_104c670f8;
    puStack_d0 = puVar11;
    pcStack_c8 = pcVar2;
    pcStack_b8 = pcVar7;
    puStack_b0 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar8);
    _objc_retain(uVar9);
    puStack_d8 = PTR_PTR_1126e36c0;
    pcStack_e0 = pcVar4;
    _objc_msgSendSuper2(&pcStack_e0,PTR_s_init_1125d9248);
    if (ppcVar5 != (char **)0x0) {
      _objc_retain(ppuVar8);
      uVar6 = *(undefined8 *)((long)ppcVar5 + 8);
      *(undefined ***)((long)ppcVar5 + 8) = ppuVar8;
      _objc_release(uVar6);
      _objc_retain(uVar9);
      uVar6 = *(undefined8 *)((long)ppcVar5 + 0x10);
      *(undefined8 *)((long)ppcVar5 + 0x10) = uVar9;
      _objc_release(uVar6);
    }
    _objc_release(uVar9);
    _objc_release(ppuVar8);
    return (char *)ppcVar5;
  }
  return pcVar2;
}



/* Entry: 104c66638; end: 104c6678f; -[SCBillboardAddFriendActionHandler _createURLWithAppendedReferrer:] */

void FUN_104c66638(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar5 = puVar1;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010c08fa60();
    _objc_release(puVar5);
    if (puVar2 != (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
      _objc_alloc();
      func_0x00010c057bc0();
      if (puVar2 == (undefined *)0x0) {
        _objc_retain(puVar1);
        puVar5 = puVar1;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
        _objc_alloc(PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0);
        func_0x00010c02dc20();
        puVar5 = puVar2;
        func_0x00010c11d4e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar5;
        func_0x00010c0d3c80();
        _objc_release(puVar5);
        if (puVar4 == (undefined *)0x0) {
          puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        }
        func_0x00010befa120(puVar4,param_2,puVar3);
        func_0x00010c1e6460(puVar2,param_2,puVar4);
        puVar5 = puVar2;
        func_0x00010bdc2b80(puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        _objc_release(puVar3);
      }
      _objc_release(puVar2);
      goto LAB_104c66770;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_104c66770:
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104c66790; end: 104c667d7; -[SCBillboardAddFriendActionHandler .cxx_destruct] */

void FUN_104c66790(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c667d8; end: 104c6683b; -[SCBillboardAddFriendActionLogger init] */

undefined1 * FUN_104c667d8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e36b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae5e0;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104c6683c; end: 104c66847; -[SCBillboardAddFriendActionLogger .cxx_destruct] */

void FUN_104c6683c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c66848; end: 104c6697b; -[SCBillboardAddFriendActionHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c66848(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126ae5e8;
  _objc_alloc(PTR_PTR_1126ae5e8);
  lVar7 = (long)_DAT_11270f948;
  lVar2 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar7);
  lVar4 = lVar7;
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11270f94c;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bf67f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049980(puVar1,param_2,lVar3,lVar4,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_11270f950;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104c6697c; end: 104c669bf; -[SCBillboardAddFriendActionHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c6697c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11270f948);
  _objc_destroyWeak(param_1 + _DAT_11270f94c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11270f950);
  return;
}



/* Entry: 104c669c0; end: 104c66a33; -[SCGrapheneFhpAddFriendHandlerMetricsMetric2 init] */

undefined1 * FUN_104c669c0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e36b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104c66a34; end: 104c66aab;  */

void FUN_104c66a34(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110842100,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 104c66aac; end: 104c66c97;  */

undefined8 **
FUN_104c66aac(long param_1,undefined8 **param_2,undefined8 **param_3,undefined8 **param_4)

{
  char *pcVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 ***pppuVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  undefined8 **ppuVar12;
  long lVar13;
  undefined8 **ppuVar14;
  long *plVar15;
  undefined8 **ppuStack_260;
  undefined *puStack_258;
  undefined8 *puStack_250;
  undefined8 **ppuStack_248;
  undefined8 **ppuStack_240;
  undefined8 **ppuStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 **ppuStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 **appuStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 **ppuStack_140;
  undefined8 *puStack_138;
  undefined8 **ppuStack_130;
  undefined8 **ppuStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 **appuStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined8 **ppuStack_d0;
  undefined8 *puStack_c8;
  undefined8 **ppuStack_c0;
  undefined8 **ppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 **ppuStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = param_2;
  ppuVar4 = param_3;
  ppuVar5 = param_4;
  _objc_retain(param_3);
  ppuVar12 = (undefined8 **)0x0;
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if ((int)param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 **)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = (char *)param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    puStack_98 = (undefined8 *)0x0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&puStack_98,auStack_78,&lStack_48,2);
    ppuVar8 = (undefined8 **)&UNK_110842150;
    param_2 = &puStack_98;
    ppuVar4 = &puStack_98;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    ppuStack_80 = param_2;
    func_0x00010007e5dc(&ppuStack_80);
    lVar13 = 0;
    ppuVar12 = (undefined8 **)auStack_78;
    ppuVar5 = param_4;
    do {
      if ((&cStack_49)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  ppuVar14 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar14;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  ppuVar2 = ppuVar14;
  __Unwind_Resume();
  ppuVar9 = &puStack_110;
  pcStack_a8 = FUN_104c66c98;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = (undefined8 **)0x0;
  ppuVar10 = ppuVar4;
  ppuStack_d0 = param_2;
  puStack_c8 = ppuVar12;
  ppuStack_c0 = ppuVar14;
  ppuStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  if (ppuVar2 != (undefined8 **)0x0) {
    ppuVar14 = (undefined8 **)ppuVar2[1];
    pcVar1 = "true";
    if ((int)ppuVar8 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_f0,pcVar1);
    puStack_110 = (undefined8 *)0x0;
    uStack_108 = 0;
    uStack_100 = 0;
    func_0x00010007e1e8(&puStack_110,appuStack_f0,&lStack_d8,1);
    ppuVar8 = (undefined8 **)&UNK_1108421a0;
    (*(code *)(*ppuVar14)[3])(ppuVar14);
    ppuVar3 = &puStack_f8;
    puStack_f8 = &puStack_110;
    func_0x00010007e5dc();
    ppuVar10 = ppuVar9;
    ppuVar5 = ppuVar4;
    ppuVar12 = &puStack_110;
    if (cStack_d9 < '\0') {
      ppuVar3 = appuStack_f0[0];
      __ZdlPv();
      ppuVar10 = ppuVar9;
      ppuVar5 = ppuVar4;
      ppuVar12 = &puStack_110;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  puStack_f8 = ppuVar12;
  func_0x00010007e5dc(&puStack_f8);
  if (cStack_d9 < '\0') {
    __ZdlPv(appuStack_f0[0]);
  }
  ppuVar2 = ppuVar3;
  __Unwind_Resume();
  ppuVar11 = &puStack_180;
  pcStack_118 = FUN_104c66db0;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = (undefined8 **)0x0;
  ppuVar9 = ppuVar10;
  ppuStack_140 = param_2;
  puStack_138 = ppuVar12;
  ppuStack_130 = ppuVar14;
  ppuStack_128 = ppuVar3;
  ppuStack_120 = &puStack_b0;
  if (ppuVar2 != (undefined8 **)0x0) {
    plVar15 = ppuVar2[1];
    pcVar1 = "true";
    if ((int)ppuVar8 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_160,pcVar1);
    puStack_180 = (undefined8 *)0x0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&puStack_180,appuStack_160,&lStack_148,1);
    ppuVar8 = (undefined8 **)&UNK_1108421f0;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    ppuVar4 = &puStack_168;
    puStack_168 = &puStack_180;
    func_0x00010007e5dc();
    ppuVar9 = ppuVar11;
    ppuVar5 = ppuVar10;
    ppuVar12 = &puStack_180;
    if (cStack_149 < '\0') {
      ppuVar4 = appuStack_160[0];
      __ZdlPv();
      ppuVar9 = ppuVar11;
      ppuVar5 = ppuVar10;
      ppuVar12 = &puStack_180;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  puStack_168 = ppuVar12;
  func_0x00010007e5dc(&puStack_168);
  if (cStack_149 < '\0') {
    __ZdlPv(appuStack_160[0]);
  }
  __Unwind_Resume();
  pcStack_188 = FUN_104c66ec8;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar12 = ppuVar9;
  ppuVar14 = ppuVar5;
  pppuStack_190 = &ppuStack_120;
  _objc_retain(ppuVar8);
  _objc_retain(ppuVar9);
  puVar7 = (undefined8 *)0x0;
  if (ppuVar4 != (undefined8 **)0x0) {
    plVar15 = ppuVar4[1];
    _objc_retain(ppuVar8);
    if (ppuVar8 == (undefined8 **)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = (char *)ppuVar8;
      _objc_retainAutorelease(ppuVar8);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar8);
    func_0x00010002b838(auStack_1f8,pcVar1);
    _objc_retain(ppuVar9);
    if (ppuVar9 == (undefined8 **)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar9);
      pcVar1 = (char *)ppuVar9;
      func_0x00010bdc3520(ppuVar9);
    }
    _objc_release(ppuVar9);
    func_0x00010002b838(auStack_1e0,pcVar1);
    puStack_218 = (undefined8 *)0x0;
    uStack_210 = 0;
    uStack_208 = 0;
    func_0x00010007e1e8(&puStack_218,auStack_1f8,&lStack_1c8,2);
    ppuVar12 = &puStack_218;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110842240);
    ppuStack_200 = &puStack_218;
    func_0x00010007e5dc(&ppuStack_200);
    lVar13 = 0;
    puVar7 = auStack_1f8;
    ppuVar14 = ppuVar5;
    do {
      if ((&cStack_1c9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(ppuVar9);
  ppuVar4 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar9);
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  _objc_release(ppuVar9);
  _objc_release(ppuVar8);
  ppuVar5 = ppuVar4;
  __Unwind_Resume();
  pppuVar6 = &ppuStack_260;
  pcStack_228 = FUN_104c670f8;
  puStack_250 = puVar7;
  ppuStack_248 = ppuVar4;
  ppuStack_240 = ppuVar9;
  ppuStack_238 = ppuVar8;
  pppuStack_230 = &pppuStack_190;
  _objc_retain(ppuVar12);
  _objc_retain(ppuVar14);
  puStack_258 = PTR_PTR_1126e36c0;
  ppuStack_260 = ppuVar5;
  _objc_msgSendSuper2(&ppuStack_260,PTR_s_init_1125d9248);
  if (pppuVar6 != (undefined8 ***)0x0) {
    _objc_retain(ppuVar12);
    puVar7 = pppuVar6[1];
    pppuVar6[1] = ppuVar12;
    _objc_release(puVar7);
    _objc_retain(ppuVar14);
    puVar7 = pppuVar6[2];
    pppuVar6[2] = ppuVar14;
    _objc_release(puVar7);
  }
  _objc_release(ppuVar14);
  _objc_release(ppuVar12);
  return pppuVar6;
}



/* Entry: 104c66c98; end: 104c66daf;  */

undefined1 ** FUN_104c66c98(long param_1,undefined1 **param_2,char *param_3,char *param_4)

{
  undefined1 **ppuVar1;
  undefined1 **ppuVar2;
  char *pcVar3;
  undefined1 ***pppuVar4;
  undefined1 *puVar5;
  char *pcVar6;
  char *pcVar7;
  long *plVar8;
  char *unaff_x21;
  long lVar9;
  undefined8 *puVar10;
  undefined1 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined1 **ppuStack_1a8;
  char *pcStack_1a0;
  undefined1 **ppuStack_198;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  char acStack_178 [24];
  char *pcStack_160;
  undefined8 auStack_158 [2];
  char cStack_141;
  undefined8 auStack_140 [2];
  char cStack_129;
  long lStack_128;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  char acStack_e0 [24];
  undefined1 *puStack_c8;
  undefined1 **appuStack_c0 [2];
  char cStack_a9;
  long lStack_a8;
  undefined1 *puStack_80;
  code *pcStack_78;
  char acStack_70 [24];
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  pcVar6 = acStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined1 **)0x0;
  pcVar3 = param_3;
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    pcVar3 = "true";
    if ((int)param_2 == 0) {
      pcVar3 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar3);
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
    param_2 = (undefined1 **)&UNK_1108421a0;
    (**(code **)(*plVar8 + 0x18))(plVar8);
    ppuVar1 = &puStack_58;
    puStack_58 = acStack_70;
    func_0x00010007e5dc();
    pcVar3 = pcVar6;
    param_4 = param_3;
    unaff_x21 = acStack_70;
    if (cStack_39 < '\0') {
      ppuVar1 = appuStack_50[0];
      __ZdlPv();
      pcVar3 = pcVar6;
      param_4 = param_3;
      unaff_x21 = acStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  puStack_58 = unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  pcVar7 = acStack_e0;
  pcStack_78 = FUN_104c66db0;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  pcVar6 = pcVar3;
  puStack_80 = &stack0xfffffffffffffff0;
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar8 = (long *)ppuVar1[1];
    pcVar6 = "true";
    if ((int)param_2 == 0) {
      pcVar6 = "false";
    }
    func_0x00010002b838(appuStack_c0,pcVar6);
    acStack_e0[0] = '\0';
    acStack_e0[1] = '\0';
    acStack_e0[2] = '\0';
    acStack_e0[3] = '\0';
    acStack_e0[4] = '\0';
    acStack_e0[5] = '\0';
    acStack_e0[6] = '\0';
    acStack_e0[7] = '\0';
    acStack_e0[8] = '\0';
    acStack_e0[9] = '\0';
    acStack_e0[10] = '\0';
    acStack_e0[0xb] = '\0';
    acStack_e0[0xc] = '\0';
    acStack_e0[0xd] = '\0';
    acStack_e0[0xe] = '\0';
    acStack_e0[0xf] = '\0';
    acStack_e0[0x10] = '\0';
    acStack_e0[0x11] = '\0';
    acStack_e0[0x12] = '\0';
    acStack_e0[0x13] = '\0';
    acStack_e0[0x14] = '\0';
    acStack_e0[0x15] = '\0';
    acStack_e0[0x16] = '\0';
    acStack_e0[0x17] = '\0';
    func_0x00010007e1e8(acStack_e0,appuStack_c0,&lStack_a8,1);
    param_2 = (undefined1 **)&UNK_1108421f0;
    (**(code **)(*plVar8 + 0x18))(plVar8);
    ppuVar2 = &puStack_c8;
    puStack_c8 = acStack_e0;
    func_0x00010007e5dc();
    pcVar6 = pcVar7;
    param_4 = pcVar3;
    unaff_x21 = acStack_e0;
    if (cStack_a9 < '\0') {
      ppuVar2 = appuStack_c0[0];
      __ZdlPv();
      pcVar6 = pcVar7;
      param_4 = pcVar3;
      unaff_x21 = acStack_e0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  puStack_c8 = unaff_x21;
  func_0x00010007e5dc(&puStack_c8);
  if (cStack_a9 < '\0') {
    __ZdlPv(appuStack_c0[0]);
  }
  __Unwind_Resume();
  pcStack_e8 = FUN_104c66ec8;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar6;
  pcVar7 = param_4;
  ppuStack_f0 = &puStack_80;
  _objc_retain(param_2);
  _objc_retain(pcVar6);
  puVar10 = (undefined8 *)0x0;
  if (ppuVar2 != (undefined1 **)0x0) {
    plVar8 = (long *)ppuVar2[1];
    _objc_retain(param_2);
    if (param_2 == (undefined1 **)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_158,pcVar3);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar3 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_140,pcVar3);
    acStack_178[0] = '\0';
    acStack_178[1] = '\0';
    acStack_178[2] = '\0';
    acStack_178[3] = '\0';
    acStack_178[4] = '\0';
    acStack_178[5] = '\0';
    acStack_178[6] = '\0';
    acStack_178[7] = '\0';
    acStack_178[8] = '\0';
    acStack_178[9] = '\0';
    acStack_178[10] = '\0';
    acStack_178[0xb] = '\0';
    acStack_178[0xc] = '\0';
    acStack_178[0xd] = '\0';
    acStack_178[0xe] = '\0';
    acStack_178[0xf] = '\0';
    acStack_178[0x10] = '\0';
    acStack_178[0x11] = '\0';
    acStack_178[0x12] = '\0';
    acStack_178[0x13] = '\0';
    acStack_178[0x14] = '\0';
    acStack_178[0x15] = '\0';
    acStack_178[0x16] = '\0';
    acStack_178[0x17] = '\0';
    func_0x00010007e1e8(acStack_178,auStack_158,&lStack_128,2);
    pcVar3 = acStack_178;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110842240);
    pcStack_160 = acStack_178;
    func_0x00010007e5dc(&pcStack_160);
    lVar9 = 0;
    puVar10 = auStack_158;
    pcVar7 = param_4;
    do {
      if ((&cStack_129)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_140 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(pcVar6);
  ppuVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_141 < '\0') {
    __ZdlPv(auStack_158[0]);
  }
  _objc_release(pcVar6);
  _objc_release(param_2);
  ppuVar2 = ppuVar1;
  __Unwind_Resume();
  pppuVar4 = &ppuStack_1c0;
  pcStack_188 = FUN_104c670f8;
  puStack_1b0 = puVar10;
  ppuStack_1a8 = ppuVar1;
  pcStack_1a0 = pcVar6;
  ppuStack_198 = param_2;
  pppuStack_190 = &ppuStack_f0;
  _objc_retain(pcVar3);
  _objc_retain(pcVar7);
  puStack_1b8 = PTR_PTR_1126e36c0;
  ppuStack_1c0 = ppuVar2;
  _objc_msgSendSuper2(&ppuStack_1c0,PTR_s_init_1125d9248);
  if (pppuVar4 != (undefined1 ***)0x0) {
    _objc_retain(pcVar3);
    puVar5 = (undefined1 *)pppuVar4[1];
    pppuVar4[1] = (undefined1 **)pcVar3;
    _objc_release(puVar5);
    _objc_retain(pcVar7);
    puVar5 = (undefined1 *)pppuVar4[2];
    pppuVar4[2] = (undefined1 **)pcVar7;
    _objc_release(puVar5);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar3);
  return (undefined1 **)pppuVar4;
}



/* Entry: 104c66db0; end: 104c66ec7;  */

undefined1 ** FUN_104c66db0(long param_1,undefined1 **param_2,char *param_3,char *param_4)

{
  undefined1 **ppuVar1;
  char *pcVar2;
  undefined1 **ppuVar3;
  undefined1 ***pppuVar4;
  undefined1 *puVar5;
  char *pcVar6;
  char *pcVar7;
  long *plVar8;
  char *unaff_x21;
  long lVar9;
  undefined8 *puVar10;
  undefined1 **ppuStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined1 **ppuStack_138;
  char *pcStack_130;
  undefined1 **ppuStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  char acStack_108 [24];
  char *pcStack_f0;
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
  pcVar6 = param_3;
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    pcVar6 = "true";
    if ((int)param_2 == 0) {
      pcVar6 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar6);
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
    param_2 = (undefined1 **)&UNK_1108421f0;
    (**(code **)(*plVar8 + 0x18))(plVar8);
    ppuVar1 = &puStack_58;
    puStack_58 = acStack_70;
    func_0x00010007e5dc();
    pcVar6 = pcVar2;
    param_4 = param_3;
    unaff_x21 = acStack_70;
    if (cStack_39 < '\0') {
      ppuVar1 = appuStack_50[0];
      __ZdlPv();
      pcVar6 = pcVar2;
      param_4 = param_3;
      unaff_x21 = acStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  puStack_58 = unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  pcStack_78 = FUN_104c66ec8;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar6;
  pcVar7 = param_4;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  _objc_retain(pcVar6);
  puVar10 = (undefined8 *)0x0;
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar8 = (long *)ppuVar1[1];
    _objc_retain(param_2);
    if (param_2 == (undefined1 **)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_e8,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_d0,pcVar2);
    acStack_108[0] = '\0';
    acStack_108[1] = '\0';
    acStack_108[2] = '\0';
    acStack_108[3] = '\0';
    acStack_108[4] = '\0';
    acStack_108[5] = '\0';
    acStack_108[6] = '\0';
    acStack_108[7] = '\0';
    acStack_108[8] = '\0';
    acStack_108[9] = '\0';
    acStack_108[10] = '\0';
    acStack_108[0xb] = '\0';
    acStack_108[0xc] = '\0';
    acStack_108[0xd] = '\0';
    acStack_108[0xe] = '\0';
    acStack_108[0xf] = '\0';
    acStack_108[0x10] = '\0';
    acStack_108[0x11] = '\0';
    acStack_108[0x12] = '\0';
    acStack_108[0x13] = '\0';
    acStack_108[0x14] = '\0';
    acStack_108[0x15] = '\0';
    acStack_108[0x16] = '\0';
    acStack_108[0x17] = '\0';
    func_0x00010007e1e8(acStack_108,auStack_e8,&lStack_b8,2);
    pcVar2 = acStack_108;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110842240);
    pcStack_f0 = acStack_108;
    func_0x00010007e5dc(&pcStack_f0);
    lVar9 = 0;
    puVar10 = auStack_e8;
    pcVar7 = param_4;
    do {
      if ((&cStack_b9)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_d0 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(pcVar6);
  ppuVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_d1 < '\0') {
    __ZdlPv(auStack_e8[0]);
  }
  _objc_release(pcVar6);
  _objc_release(param_2);
  ppuVar3 = ppuVar1;
  __Unwind_Resume();
  pppuVar4 = &ppuStack_150;
  pcStack_118 = FUN_104c670f8;
  puStack_140 = puVar10;
  ppuStack_138 = ppuVar1;
  pcStack_130 = pcVar6;
  ppuStack_128 = param_2;
  ppuStack_120 = &puStack_80;
  _objc_retain(pcVar2);
  _objc_retain(pcVar7);
  puStack_148 = PTR_PTR_1126e36c0;
  ppuStack_150 = ppuVar3;
  _objc_msgSendSuper2(&ppuStack_150,PTR_s_init_1125d9248);
  if (pppuVar4 != (undefined1 ***)0x0) {
    _objc_retain(pcVar2);
    puVar5 = (undefined1 *)pppuVar4[1];
    pppuVar4[1] = (undefined1 **)pcVar2;
    _objc_release(puVar5);
    _objc_retain(pcVar7);
    puVar5 = (undefined1 *)pppuVar4[2];
    pppuVar4[2] = (undefined1 **)pcVar7;
    _objc_release(puVar5);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar2);
  return (undefined1 **)pppuVar4;
}



/* Entry: 104c66ec8; end: 104c670f7;  */

char * FUN_104c66ec8(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  char *pcStack_e0;
  undefined *puStack_d8;
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
  uVar6 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar9 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
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
    pcVar1 = acStack_98;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110842240);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar7 = 0;
    puVar9 = auStack_78;
    uVar6 = param_4;
    do {
      if ((&cStack_49)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  ppcVar4 = &pcStack_e0;
  pcStack_a8 = FUN_104c670f8;
  puStack_d0 = puVar9;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(uVar6);
  puStack_d8 = PTR_PTR_1126e36c0;
  pcStack_e0 = pcVar3;
  _objc_msgSendSuper2(&pcStack_e0,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    _objc_retain(pcVar1);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 8);
    *(char **)((long)ppcVar4 + 8) = pcVar1;
    _objc_release(uVar5);
    _objc_retain(uVar6);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 0x10);
    *(undefined8 *)((long)ppcVar4 + 0x10) = uVar6;
    _objc_release(uVar5);
  }
  _objc_release(uVar6);
  _objc_release(pcVar1);
  return (char *)ppcVar4;
}



/* Entry: 104c670f8; end: 104c6719b; -[SCBillboardBirthdayPartyActionHandler initWithBirthdaySettingsScopeExposer:birthdaySettingsScopeServices:] */

undefined1 *
FUN_104c670f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e36c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104c6719c; end: 104c671a3; -[SCBillboardBirthdayPartyActionHandler actionHandlerType] */

undefined8 FUN_104c6719c(void)

{
  return 3;
}



/* Entry: 104c671a4; end: 104c6724b; -[SCBillboardBirthdayPartyActionHandler handleOnTapActionWithContext:] */

void FUN_104c671a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0e2fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = param_3;
  func_0x00010c0d6ce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf242e0(uVar2,param_2,uVar1,1,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104c6724c; end: 104c6729b; -[SCBillboardBirthdayPartyActionHandler birthdaySettingsDidComplete] */

void FUN_104c6724c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 104c6729c; end: 104c672d7; -[SCBillboardBirthdayPartyActionHandler .cxx_destruct] */

void FUN_104c6729c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c672d8; end: 104c67387; -[SCBillboardBirthdayPartyActionHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104c672d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ae5f0;
  _objc_alloc(PTR_PTR_1126ae5f0);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11270f964);
  lVar2 = param_1 + _DAT_11270f968;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bff79a0(puVar1,param_2,uVar3,lVar2);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_11270f96c;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


