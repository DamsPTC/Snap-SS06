/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1054e0890; end: 1054e096f;  */

void FUN_1054e0890(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1054e0970;
    puStack_60 = &UNK_110848378;
    _objc_copyWeak(auStack_48,param_1 + 0x30);
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uStack_58 = param_2;
    _objc_retain(uVar2);
    uStack_50 = uVar2;
    func_0x00010007380c(uVar3,&puStack_78);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1054e0970; end: 1054e0a47;  */

void FUN_1054e0970(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar4 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar4 != 0) {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1054e0a48;
    puStack_68 = &UNK_110891690;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    puStack_b0 = puVar3;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1054e0ad8;
    puStack_98 = &UNK_1108538b0;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    lStack_60 = lVar4;
    uStack_58 = uVar2;
    _objc_retain(uVar5);
    lStack_90 = lVar4;
    uStack_88 = uVar5;
    func_0x00010c0c0800(uVar1,param_2,&puStack_80,&puStack_b0);
    _objc_release(uStack_88);
    _objc_release(uStack_58);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1054e0a48; end: 1054e0ad7;  */

void FUN_1054e0a48(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  uVar2 = param_2;
  func_0x00010bfe6ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c2a2420();
  if ((uVar3 & 1) == 0) {
    uVar3 = param_2;
    func_0x00010c2a2440(param_2);
  }
  else {
    uVar3 = 1;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,uVar4,uVar2,0,uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054e0ad8; end: 1054e0af7;  */

void FUN_1054e0ad8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001054e0af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),0,param_2,0
            );
  return;
}



/* Entry: 1054e0af8; end: 1054e0b73; -[SCDynamicImageSourceProviderImplementation .cxx_destruct] */

void FUN_1054e0af8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054e0b74; end: 1054e0bf7; -[SCDynamicImageSourceServiceProvider _createDynamicImageSourceProviderFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054e0b74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b9f98;
  _objc_alloc(PTR_PTR_1126b9f98);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_1127249fc;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bfe7760(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01c980(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054e0bf8; end: 1054e0c2f; -[SCDynamicImageSourceServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054e0bf8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127249fc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127249f8);
  return;
}



/* Entry: 1054e0c30; end: 1054e0c3b; +[SCCBusinessMultipleProfilesGetMultiProfileEligibility modulePath] */

undefined ** FUN_1054e0c30(void)

{
  return &PTR____CFConstantStringClassReference_110de6098;
}



/* Entry: 1054e0c3c; end: 1054e0c43; +[SCCBusinessMultipleProfilesGetMultiProfileEligibility asyncStrictMode] */

undefined8 FUN_1054e0c3c(void)

{
  return 0;
}



/* Entry: 1054e0c44; end: 1054e0cef; -[SCCBusinessMultipleProfilesGetMultiProfileEligibility getMultiProfileEligibilityWithUserId:checkType:networkingClient:forceRefresh:pageWorkflowSessionId:] */

void FUN_1054e0c44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 in_x6;
  
  _objc_retain(in_x6);
  func_0x0001054e10bc();
  _objc_retain(param_3);
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001054e10b4();
  func_0x0001054e10c4();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1054e0cf0; end: 1054e0e2f; +[SCCBusinessMultipleProfilesGetMultiProfileEligibility invokeWithJSRuntimeProvider:userId:checkType:networkingClient:forceRefresh:pageWorkflowSessionId:completionHandler:] */

void FUN_1054e0cf0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined1 uStack_54;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x0001054e10bc();
  _objc_retain(param_9);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1054e0e30;
  puStack_88 = &UNK_110891720;
  uStack_60 = param_9;
  lStack_80 = param_3;
  uStack_78 = param_4;
  uStack_70 = param_6;
  uStack_68 = param_8;
  uStack_58 = param_5;
  uStack_54 = param_7;
  _objc_retain(param_9);
  func_0x0001054e10bc();
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_a0);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(lStack_80);
  _objc_release(param_9);
  func_0x0001054e10c4();
  _objc_release(param_6);
  func_0x0001054e10b4();
  _objc_release(param_3);
  return;
}



/* Entry: 1054e0e30; end: 1054e0ec3;  */

void FUN_1054e0e30(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b9fa0;
  func_0x00010bfbc0e0(PTR_PTR_1126b9fa0,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),puVar2);
  _objc_release(puVar2);
  func_0x0001054e10c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1054e0ec4; end: 1054e0f13; +[SCCBusinessMultipleProfilesGetMultiProfileEligibility valdiMarshallableObjectDescriptor] */

void FUN_1054e0ec4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110891780;
  param_1[1] = &PTR_DAT_1108917b0;
  param_1[2] = &PTR_DAT_110891750;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 1054e0f14; end: 1054e0f8f;  */

void FUN_1054e0f14(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1054e1078;
  puStack_30 = &UNK_110891840;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  FUN_1054e10b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1054e0f90; end: 1054e0fab; +[SCCBusinessMultipleProfilesProfileInfo valdiMarshallableObjectDescriptor] */

void FUN_1054e0f90(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_image_1108917c8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 1054e0fac; end: 1054e0fb7; +[SCCBusinessMultipleProfilesProfileSwitcherTray componentPath] */

undefined ** FUN_1054e0fac(void)

{
  return &PTR____CFConstantStringClassReference_110de60b8;
}



/* Entry: 1054e0fb8; end: 1054e0feb; -[SCCBusinessMultipleProfilesProfileSwitcherTray initWithViewModel:componentContext:runtime:] */

void FUN_1054e0fb8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e8b00;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 1054e0fec; end: 1054e1037; -[SCCBusinessMultipleProfilesProfileSwitcherTray setViewModel:] */

void FUN_1054e0fec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  FUN_1054e10b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054e1038; end: 1054e1077; -[SCCBusinessMultipleProfilesProfileSwitcherTray viewModel] */

void FUN_1054e1038(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  FUN_1054e10b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1054e1078; end: 1054e10b3;  */

void FUN_1054e1078(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1054e10b4; end: 1054e10cb;  */

void FUN_1054e10b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1054e10cc; end: 1054e10d3; -[SCCBusinessMultipleProfilesMultiProfileCheckType__Enum init] */

void FUN_1054e10cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 1054e10d4; end: 1054e11db; -[SCCBusinessMultipleProfilesProfileSwitcherTrayContext initWithNavigator:networkingClient:webLauncher:notificationPresenter:getBlizzardClientId:onClosed:] */

undefined8 *
FUN_1054e10d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar1 = param_8;
  _objc_retainBlock();
  _objc_release(param_8);
  puStack_58 = PTR_PTR_1126e8b08;
  puVar2 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_7);
  return puVar2;
}



/* Entry: 1054e11dc; end: 1054e11ef; +[SCCBusinessMultipleProfilesProfileSwitcherTrayContext valdiMarshallableObjectDescriptor] */

void FUN_1054e11dc(undefined8 *param_1)

{
  *param_1 = &PTR_s_navigator_110891870;
  param_1[1] = &PTR_s_SCValdiINavigator_110891960;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1054e11f0; end: 1054e122f; -[SCCBusinessMultipleProfilesProfileSwitcherTrayViewModel initWithUserId:profiles:] */

void FUN_1054e11f0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e8b10;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 1054e1230; end: 1054e1253; +[SCCBusinessMultipleProfilesProfileSwitcherTrayViewModel valdiMarshallableObjectDescriptor] */

void FUN_1054e1230(undefined8 *param_1)

{
  *param_1 = &PTR_s_userId_110891990;
  param_1[1] = &PTR_DAT_110891a08;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1054e1254; end: 1054e131b; -[SCNetworkTraceShakeToReportPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054e1254(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + _DAT_112724a00;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0d8240();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_112724a04;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfede00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1268c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1054e131c; end: 1054e135f; -[SCNetworkTraceShakeToReportPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054e131c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112724a04);
  _objc_destroyWeak(param_1 + _DAT_112724a00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112724a08);
  return;
}



/* Entry: 1054e1360; end: 1054e14f3; -[SCNetworkTracer initWithApplicationLifeCycleEvent:backgroundTaskWrapper:] */

undefined8 *
FUN_1054e1360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e8b18;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_initWeak(auStack_58,puVar1);
    uVar3 = param_3;
    func_0x00010c2a6420();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010bf75dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    uVar2 = uVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1054e14f4; end: 1054e14f7;  */

void FUN_1054e14f4(void)

{
  return;
}



/* Entry: 1054e14f8; end: 1054e1523;  */

void FUN_1054e14f8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be183a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054e1524; end: 1054e156b; -[SCNetworkTracer dealloc] */

void FUN_1054e1524(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 8));
  puStack_28 = PTR_PTR_1126e8b18;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1054e156c; end: 1054e156f; -[SCNetworkTracer logEventBeginWithName:timeStamp:pid:uid:tid:cname:args:] */

void FUN_1054e156c(void)

{
  return;
}



/* Entry: 1054e1570; end: 1054e1573; -[SCNetworkTracer logEventEndWithName:timeStamp:pid:uid:tid:cname:isFinal:] */

void FUN_1054e1570(void)

{
  return;
}



/* Entry: 1054e1574; end: 1054e1577; -[SCNetworkTracer logInstantEventWithName:timeStamp:pid:uid:tid:cname:isGlobal:] */

void FUN_1054e1574(void)

{
  return;
}



/* Entry: 1054e1578; end: 1054e1893; -[SCNetworkTracer writeLogsToURL:] */

undefined * FUN_1054e1578(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bed00c0(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed00c0(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b9fa8;
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 != 0) {
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1054e1894;
    puStack_88 = &UNK_110891a60;
    _objc_retain(lVar2);
    lStack_80 = lVar2;
    func_0x00010bf09600(puVar4,param_2,&PTR____CFConstantStringClassReference_110de60f8,1,
                        &puStack_a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(lStack_80);
  }
  puVar4 = PTR_PTR_1126b9fa8;
  if (param_1 != 0) {
    puStack_c8 = puVar8;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x1054e18bc;
    puStack_b0 = &UNK_110891a60;
    _objc_retain(param_1);
    lStack_a8 = param_1;
    func_0x00010bf09600(puVar4,param_2,&PTR____CFConstantStringClassReference_110de6118,1,
                        &puStack_c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(lStack_a8);
  }
  puVar8 = puVar3;
  func_0x00010bf529e0();
  if (puVar8 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b9fb0;
    _objc_alloc();
    ppuStack_78 = &PTR____CFConstantStringClassReference_110f769d8;
    puStack_70 = PTR____kCFBooleanTrue_11034ab68;
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,&ppuStack_78,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = 0;
    func_0x00010c008480(puVar5,param_2,puVar4,puVar8,&uStack_d0);
    uVar1 = uStack_d0;
    _objc_retain(uStack_d0);
    _objc_release(puVar8);
    if (puVar5 == (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
      uVar9 = uVar1;
    }
    else {
      uStack_d8 = 0;
      puVar6 = puVar5;
      func_0x00010c2858e0(puVar5,param_2,puVar3,&uStack_d8);
      uVar9 = uStack_d8;
      _objc_retain(uStack_d8);
      _objc_release(uVar1);
      puVar8 = (undefined *)0x0;
      if (((int)puVar6 != 0) && (puVar4 != (undefined *)0x0)) {
        lVar7 = param_3;
        func_0x00010bdc2c60(param_3,param_2,&PTR____CFConstantStringClassReference_110de6138);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar4;
        func_0x00010c14e060(puVar4,param_2,lVar7,0);
        _objc_release(lVar7);
      }
    }
    _objc_release(puVar5);
    _objc_release(uVar9);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar8 = *(undefined **)(param_3 + 0x20);
    _objc_retain(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return puVar8;
  }
  return puVar8;
}



/* Entry: 1054e1894; end: 1054e18e3;  */

void FUN_1054e1894(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054e18e4; end: 1054e198f; -[SCNetworkTracer _trimTimestampForNetworkTraceFile:] */

void FUN_1054e18e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a80(PTR__OBJC_CLASS___NSData_1126ae778,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    if ((puVar1 != (undefined *)0x0) &&
       (puVar2 = puVar1, func_0x00010c08fa60(), (undefined *)0x11 < puVar2)) {
      puVar3 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
      _objc_alloc(PTR__OBJC_CLASS___NSMutableData_1126b4958);
      func_0x00010c008240();
      func_0x00010c130ce0();
      _objc_release(puVar1);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1054e1990; end: 1054e1a03; -[SCNetworkTracer _getUploadPerfTestTraceUrl] */

void FUN_1054e1990(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x00010c114d40(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf981e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1054e1a04; end: 1054e1a37; -[SCNetworkTracer _shouldUploadPerfTestTrace] */

bool FUN_1054e1a04(long param_1)

{
  func_0x00010be239a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1054e1a38; end: 1054e1a3b; -[SCNetworkTracer _flushTraceFileIfNeeded] */

void FUN_1054e1a38(void)

{
  return;
}



/* Entry: 1054e1a3c; end: 1054e1b97; -[SCNetworkTracer _heartbeatLogging] */

void FUN_1054e1a3c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  uVar2 = 0;
  _dispatch_time(0,10000000000);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1054e1b04;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010058c530(uVar2,uVar1,&puStack_60);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  return;
}



/* Entry: 1054e1b98; end: 1054e1beb; -[SCNetworkTracer .cxx_destruct] */

void FUN_1054e1b98(long param_1)

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



/* Entry: 1054e1bec; end: 1054e1ccf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054e1bec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b9fb8;
  _objc_alloc(PTR_PTR_1126b9fb8);
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x20) + (long)_DAT_112724a20;
    _objc_loadWeakRetained(lVar4);
  }
  lVar2 = lVar4;
  func_0x00010bf07a00(lVar4);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x20) + (long)_DAT_112724a24;
    _objc_loadWeakRetained(lVar5);
  }
  lVar3 = lVar5;
  func_0x00010bf145c0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3a40(puVar1,param_2,lVar2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054e1cd0; end: 1054e1d07; -[SCSystemNetworkTraceServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054e1cd0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112724a24);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112724a20);
  return;
}



/* Entry: 1054e1d08; end: 1054e1dff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054e1d08(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uStack_48;
  uint uStack_44;
  
  lVar2 = *(long *)(param_1 + 0x20) + (long)_DAT_112724a2c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0d8240();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  _mach_absolute_time();
  _mach_timebase_info(&uStack_48);
  uVar1 = 0;
  if ((ulong)uStack_44 != 0) {
    uVar1 = (lVar5 * (ulong)uStack_48) / (ulong)uStack_44;
  }
  func_0x00010c0a8b60(lVar4,param_2,&PTR____CFConstantStringClassReference_110f60f38,uVar1 / 100000,
                      &PTR____CFConstantStringClassReference_110db2d38,1,
                      &PTR____CFConstantStringClassReference_110f60f78,
                      &PTR____CFConstantStringClassReference_110ef57b8,1);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1054e1e00; end: 1054e1f1f; -[SCUserNetworkTraceServicesEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054e1e00(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + _DAT_112724a2c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0d8240();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _mach_absolute_time();
  _mach_timebase_info(auStack_48);
  func_0x00010c0a8b60(lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_50 = PTR_PTR_1126e8b20;
  lStack_58 = param_1;
  _objc_msgSendSuper2(&lStack_58,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054e1f20; end: 1054e1f57; -[SCUserNetworkTraceServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054e1f20(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112724a2c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112724a28);
  return;
}



/* Entry: 1054e1f58; end: 1054e1fab; -[SCCircumstanceConfigProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054e1f58(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112724a34,0);
  _objc_destroyWeak(param_1 + _DAT_112724a3c);
  _objc_destroyWeak(param_1 + _DAT_112724a30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112724a38);
  return;
}



/* Entry: 1054e1fac; end: 1054e2043; -[SCCircumstanceEngineVerificationServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054e1fac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010bddec20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112724a40);
  puVar2 = PTR_PTR_1126b9fd0;
  _objc_alloc(PTR_PTR_1126b9fd0);
  lVar3 = lVar1;
  func_0x00010bf53500(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe8c0(puVar2,param_2,lVar1,lVar3);
  func_0x00010bf9d660(uVar4,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1054e2044; end: 1054e20cb; -[SCCircumstanceEngineVerificationServicesEntryPoint _cirmcumstanceEngine] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054e2044(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = param_1 + _DAT_112724a48;
    _objc_loadWeakRetained();
  }
  uVar1 = uVar4;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126b9fd8;
  _objc_opt_class(PTR_PTR_1126b9fd8);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar4 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1054e20cc; end: 1054e214f; -[SCCircumstanceEngineVerificationServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054e20cc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112724a40,0);
  _objc_destroyWeak(param_1 + _DAT_112724a4c);
  _objc_destroyWeak(param_1 + _DAT_112724a48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112724a44);
  return;
}



/* Entry: 1054e2150; end: 1054e2197; -[SCCircumstanceSyncedConfigProvider .cxx_destruct] */

void FUN_1054e2150(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054e2198; end: 1054e223f;  */

void FUN_1054e2198(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110de6198);
  return;
}



/* Entry: 1054e2240; end: 1054e227b; -[SCCachedConfigDataStore .cxx_destruct] */

void FUN_1054e2240(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054e227c; end: 1054e2287;  */

void FUN_1054e227c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb71f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__shouldUseForcedDefaultValueForC_11258b620,
             param_2);
  return;
}



/* Entry: 1054e2288; end: 1054e228b; -[SCCircumstanceEngine setExperimentLogger_DO_NOT_USE:configMetric:] */

void FUN_1054e2288(void)

{
  return;
}



/* Entry: 1054e228c; end: 1054e23ff; -[SCCircumstanceEngine intValueForConfigKey:defaultValue:featureProvidedSignals:callbackPerformer:callback:] */

void FUN_1054e228c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x00010beb7080(param_1,param_2,param_3);
  if ((int)uVar1 == 0) {
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1054e243c;
    puStack_a0 = &UNK_110891ba0;
    uStack_98 = param_7;
    uStack_90 = param_4;
    _objc_retain(param_7);
    func_0x00010bde46e0(param_1,param_2,param_3,1,param_5,param_6,&puStack_b8);
    _objc_release(param_6);
    uVar1 = uStack_98;
  }
  else {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1054e2400;
    puStack_70 = &UNK_11087b9f8;
    uStack_68 = param_1;
    uStack_50 = param_7;
    _objc_retain(param_3);
    uStack_60 = param_3;
    uStack_48 = param_4;
    _objc_retain(param_5);
    uStack_58 = param_5;
    _objc_retain(param_7);
    func_0x00010c0f7fc0(param_6,param_2,&puStack_88);
    _objc_release(param_6);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    uVar1 = uStack_50;
  }
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1054e2400; end: 1054e243b;  */

void FUN_1054e2400(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c067f00(uVar2,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0001054e2438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  return;
}



/* Entry: 1054e243c; end: 1054e249f;  */

void FUN_1054e243c(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20);
  if (param_2 == 0) {
    uVar1 = (ulong)*(uint *)(param_1 + 0x28);
  }
  else {
    uVar1 = param_2;
    func_0x00010c067ec0(param_2);
  }
  (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054e24a0; end: 1054e260f; -[SCCircumstanceEngine longValueForConfigKey:defaultValue:featureProvidedSignals:callbackPerformer:callback:] */

void FUN_1054e24a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x00010beb7080(param_1,param_2,param_3);
  if ((int)uVar1 == 0) {
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1054e264c;
    puStack_a0 = &UNK_110891bd0;
    uStack_98 = param_7;
    uStack_90 = param_4;
    _objc_retain(param_7);
    func_0x00010bde46e0(param_1,param_2,param_3,2,param_5,param_6,&puStack_b8);
    _objc_release(param_6);
    uVar1 = uStack_98;
  }
  else {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1054e2610;
    puStack_70 = &UNK_110875f70;
    uStack_68 = param_1;
    uStack_50 = param_7;
    _objc_retain(param_3);
    uStack_60 = param_3;
    uStack_48 = param_4;
    _objc_retain(param_5);
    uStack_58 = param_5;
    _objc_retain(param_7);
    func_0x00010c0f7fc0(param_6,param_2,&puStack_88);
    _objc_release(param_6);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    uVar1 = uStack_50;
  }
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1054e2610; end: 1054e264b;  */

void FUN_1054e2610(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c0b5020(uVar2,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0001054e2648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  return;
}



/* Entry: 1054e264c; end: 1054e2773;  */

void FUN_1054e264c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20);
  if (param_2 == 0) {
    lVar1 = *(long *)(param_1 + 0x28);
  }
  else {
    lVar1 = param_2;
    func_0x00010c0b4fe0(param_2);
  }
  (**(code **)(lVar2 + 0x10))(lVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054e2774; end: 1054e2847; -[SCCircumstanceEngine protoValueForConfigKey:defaultValue:featureProvidedSignals:callbackPerformer:callback:] */

void FUN_1054e2774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1054e2848;
  puStack_58 = &UNK_110891c30;
  uStack_50 = param_4;
  uStack_48 = param_7;
  _objc_retain(param_4);
  _objc_retain(param_7);
  func_0x00010bde46e0(param_1,param_2,param_3,6,param_5,param_6,&puStack_70);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_7);
  return;
}



/* Entry: 1054e2848; end: 1054e28cb;  */

void FUN_1054e2848(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x28);
  if (param_2 == 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,*(undefined8 *)(param_1 + 0x20));
  }
  else {
    lVar1 = param_2;
    func_0x00010bf04a80(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,lVar1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054e28cc; end: 1054e2a57; -[SCCircumstanceEngine protoMessageForConfigKey:defaultMessage:featureProvidedSignals:callbackPerformer:callback:] */

void FUN_1054e28cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010bfaf1c0(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1054e2a58; end: 1054e2d47;  */

void FUN_1054e2a58(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  _objc_retain(param_2);
  uVar2 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (uVar2 == 0) goto LAB_1054e2d18;
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar10);
  uVar9 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beb71e0();
  _objc_release(uVar9);
  uVar9 = uVar10;
  if ((uVar3 & 1) == 0) {
    lVar5 = *(long *)(param_1 + 0x28);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    lVar11 = uVar2 + 0xb0;
    _objc_loadWeakRetained(lVar11);
    uVar4 = *(undefined8 *)(uVar2 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(uVar2 + 0xa8);
    uVar13 = *(undefined8 *)(uVar2 + 0x38);
    uVar1 = (undefined4)*(undefined8 *)(uVar2 + 0x18);
    func_0x00010c108ca0();
    func_0x00010010f694(lVar5,6,uVar8,lVar11,uVar4,param_2,uVar12,uVar13,uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf04a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(uVar4);
    _objc_release(lVar11);
    if (lVar7 != 0) {
      lVar11 = lVar7;
      func_0x00010c296d80();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar11;
      func_0x00010c08fa60();
      if (lVar5 == 0) {
LAB_1054e2ca0:
        _objc_release(lVar11);
      }
      else {
        lVar5 = lVar7;
        func_0x00010c27e040();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c08fa60();
        _objc_release(lVar5);
        _objc_release(lVar11);
        if (lVar6 != 0) {
          lVar11 = lVar7;
          func_0x00010c27e040();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010bf6e760(uVar4);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar4;
          func_0x00010bfbba80();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar11;
          func_0x00010bfdcf80();
          _objc_release(uVar8);
          _objc_release(uVar4);
          _objc_release(lVar11);
          if ((int)lVar5 != 0) {
            uVar9 = *(undefined8 *)(param_1 + 0x20);
            _objc_opt_class();
            _objc_alloc();
            lVar5 = lVar7;
            func_0x00010c296d80(lVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c008360();
            lVar11 = 0;
            _objc_retain(0);
            _objc_release(lVar5);
            _objc_retain(uVar9);
            _objc_release(uVar10);
            _objc_release(uVar9);
            goto LAB_1054e2ca0;
          }
        }
      }
    }
    _objc_release(lVar7);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar8);
  _objc_retain(uVar9);
  func_0x00010c0f7fc0(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar9);
LAB_1054e2d18:
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 1054e2d48; end: 1054e2d57;  */

void FUN_1054e2d48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001054e2d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1054e2d58; end: 1054e2eb3; -[SCCircumstanceEngine manualExposureValueForConfigKey:featureProvidedSignals:callbackPerformer:callback:] */

void FUN_1054e2d58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bfaf1c0(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1054e2eb4; end: 1054e3063;  */

void FUN_1054e2eb4(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  _objc_retain(param_2);
  uVar2 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (uVar2 != 0) {
    uVar3 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010beb71e0();
    _objc_release(uVar3);
    if ((uVar4 & 1) == 0) {
      lVar7 = *(long *)(param_1 + 0x20);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      lVar5 = uVar2 + 0xb0;
      _objc_loadWeakRetained(lVar5);
      uVar6 = *(undefined8 *)(uVar2 + 8);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(uVar2 + 0x38);
      uVar1 = (undefined4)*(undefined8 *)(uVar2 + 0x18);
      func_0x00010c108ca0();
      func_0x00010010f694(lVar7,0,uVar3,lVar5,uVar6,param_2,0,uVar9,uVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(lVar5);
      if (lVar7 == 0) {
        puVar8 = (undefined *)0x0;
      }
      else {
        puVar8 = PTR_PTR_1126b9fe8;
        _objc_alloc();
        func_0x00010c001580();
      }
      _objc_release(lVar7);
    }
    else {
      puVar8 = (undefined *)0x0;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar6);
    _objc_retain(puVar8);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(puVar8);
    _objc_release(uVar6);
    _objc_release(puVar8);
  }
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 1054e3064; end: 1054e3073;  */

void FUN_1054e3064(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001054e3070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1054e3074; end: 1054e307b; -[SCCircumstanceEngine configsTokenWithCompletion:] */

void FUN_1054e3074(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8bd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_eTagWithCompletion__1125c08e8);
  return;
}



/* Entry: 1054e307c; end: 1054e3083; -[SCCircumstanceEngine userInSafeMode] */

void FUN_1054e307c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c292810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_userInSafeMode_112682428);
  return;
}



/* Entry: 1054e3084; end: 1054e3117; -[SCCircumstanceEngine stringArrayValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

void FUN_1054e3084(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bdcf680(param_1,param_2,param_3,10);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c25cd80(uVar1,param_2,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054e3118; end: 1054e3193; -[SCCircumstanceEngine longValueForConfigKeySync:featureProvidedSignals:] */

void FUN_1054e3118(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bdcf680(param_1,param_2,param_3,2);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c0b5040(uVar1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054e3194; end: 1054e31cf; -[SCCircumstanceEngine bulkLoadNamespaceSync:exposeAll:] */

void FUN_1054e3194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010bdcf660();
                    /* WARNING: Could not recover jumptable at 0x00010bdd7010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__bulkLoadNamespaceSync_exposeAll_1125535a0,param_3,param_4);
  return;
}



/* Entry: 1054e31d0; end: 1054e31d7; -[SCCircumstanceEngine getSequenceIdArrayInNamespace:] */

void FUN_1054e31d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfca0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_getSequenceIdArrayInNamespace__1125d01e0);
  return;
}



/* Entry: 1054e31d8; end: 1054e31df; -[SCCircumstanceEngine createConfigProviderMarshallerForNamespace:] */

void FUN_1054e31d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdec070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__createCircumstanceEngineConfigP_1125589b8,param_3,0);
  return;
}



/* Entry: 1054e31e0; end: 1054e320f; -[SCCircumstanceEngine resetConfigProviderFactory] */

void FUN_1054e31e0(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0x58);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x58);
  return;
}



/* Entry: 1054e3210; end: 1054e3217; -[SCCircumstanceEngine getGrapheneContextBytes] */

void FUN_1054e3210(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc4170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_getContext_1125cea00)
  ;
  return;
}



/* Entry: 1054e3218; end: 1054e321f; -[SCCircumstanceEngine configRepository] */

undefined8 FUN_1054e3218(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 1054e3220; end: 1054e3227; -[SCCircumstanceEngine configProvider] */

undefined8 FUN_1054e3220(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 1054e3228; end: 1054e322f; -[SCCircumstanceEngine experimentLogger] */

undefined8 FUN_1054e3228(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 1054e3230; end: 1054e3247; -[SCCircumstanceEngine featureSettingsService] */

void FUN_1054e3230(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054e3248; end: 1054e324f; -[SCCircumstanceEngine appStartExperimentConfigKeys] */

undefined8 FUN_1054e3248(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1054e3250; end: 1054e3257; -[SCCircumstanceEngine aserExclusionList] */

undefined8 FUN_1054e3250(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1054e3258; end: 1054e3367; -[SCCircumstanceEngine .cxx_destruct] */

void FUN_1054e3258(long param_1)

{
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_destroyWeak(param_1 + 0xb0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 1054e3368; end: 1054e3477; -[SCCircumstanceEngineConfigProvider stringArrayValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

void FUN_1054e3368(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  func_0x00010bee7e20(param_1,param_2,param_3,6,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_4;
  if (param_1 == 0) {
    _objc_retain(param_4);
  }
  else {
    puVar1 = PTR_PTR_1126b9ff8;
    _objc_alloc();
    lVar2 = param_1;
    func_0x00010bf04a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008360(puVar1,param_2,lVar3,0);
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (puVar1 == (undefined *)0x0) {
      _objc_retain(param_4);
    }
    else {
      puVar4 = puVar1;
      func_0x00010c296dc0(puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1054e3478; end: 1054e3503; -[SCCircumstanceEngineConfigProvider longValueForConfigKeySync:featureProvidedSignals:] */

void FUN_1054e3478(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  func_0x00010be6e1e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c0b4fe0(lVar1);
    func_0x00010c0df7a0(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1054e3504; end: 1054e350b; -[SCCircumstanceEngineConfigProvider getSystemType] */

undefined8 FUN_1054e3504(void)

{
  return 0xc;
}



/* Entry: 1054e350c; end: 1054e352f; -[SCCircumstanceEngineConfigProvider getConfigurationState] */

void FUN_1054e350c(void)

{
  _objc_alloc(PTR_PTR_1126ba000);
  func_0x00010bfff5c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054e3530; end: 1054e35bb; -[SCCircumstanceEngineConfigProvider getRealValue:] */

void FUN_1054e3530(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c267420();
  if (lVar1 == 0xc) {
    lVar1 = param_3;
    func_0x00010c086560(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2ce0(param_1,param_2,lVar1,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  else {
    param_1 = 0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1054e35bc; end: 1054e3647; -[SCCircumstanceEngineConfigProvider getStringValue:] */

void FUN_1054e35bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c267420();
  if (lVar1 == 0xc) {
    lVar1 = param_3;
    func_0x00010c086560(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d7a0(param_1,param_2,lVar1,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  else {
    param_1 = 0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1054e3648; end: 1054e365f; -[SCCircumstanceEngineConfigProvider featureSettingsService] */

void FUN_1054e3648(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054e3660; end: 1054e36b7; -[SCCircumstanceEngineConfigProvider .cxx_destruct] */

void FUN_1054e3660(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054e36b8; end: 1054e3857; -[SCManualExposureValueImpl configResult] */

void FUN_1054e36b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b6c60;
  _objc_alloc(PTR_PTR_1126b6c60);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c25df20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf9c4e0();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110daf4f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e9c0(puVar1,param_2,uVar2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054e3858; end: 1054e38d7;  */

void FUN_1054e3858(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0844e0(uVar3);
    uVar4 = uVar2;
    func_0x00010c296ea0(uVar2,param_2,(long)(int)uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1054e38d8; end: 1054e39b3;  */

void FUN_1054e38d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0148);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136bc7e0;
  puRam00000001136bc7e0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054e39b4; end: 1054e3b2b;  */

ulong FUN_1054e39b4(float param_1,ulong param_2,ulong param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  float fVar10;
  
  _objc_retain();
  _objc_retain(param_3);
  uVar5 = param_2;
  func_0x00010c0870e0();
  iVar4 = (int)uVar5;
  uVar5 = 0;
  if (iVar4 < 3) {
    if (iVar4 == 1) {
      uVar5 = param_2;
      func_0x00010c067ec0();
      uVar8 = param_3;
      func_0x00010c067ec0();
      iVar4 = (int)uVar8;
      iVar9 = (int)uVar5;
      bVar1 = SBORROW4(iVar9,iVar4);
      bVar2 = iVar9 - iVar4 < 0;
      bVar3 = iVar9 == iVar4;
    }
    else {
      if (iVar4 != 2) goto LAB_1054e3b00;
      uVar5 = param_2;
      func_0x00010c0b4fe0();
      uVar8 = param_3;
      func_0x00010c0b4fe0();
      bVar1 = SBORROW8(uVar5,uVar8);
      bVar2 = (long)(uVar5 - uVar8) < 0;
      bVar3 = uVar5 == uVar8;
    }
    uVar5 = (ulong)(!bVar3 && bVar2 == bVar1);
    if (bVar2 != bVar1) {
      uVar5 = 0xffffffffffffffff;
    }
  }
  else if (iVar4 == 3) {
    func_0x00010bfb2c80(param_2);
    fVar10 = param_1;
    func_0x00010bfb2c80(param_3);
    uVar8 = 0xffffffffffffffff;
    if (0.0 < param_1 - fVar10) {
      uVar8 = 1;
    }
    uVar5 = 0;
    if (param_1 - fVar10 != 0.0) {
      uVar5 = uVar8;
    }
  }
  else if (iVar4 == 4) {
    uVar6 = param_2;
    func_0x00010bf1f3c0();
    uVar7 = param_3;
    func_0x00010bf1f3c0();
    uVar8 = 1;
    if ((long)((uVar6 & 0xffffffff) - (uVar7 & 0xffffffff)) < 1) {
      uVar8 = 0xffffffffffffffff;
    }
    uVar5 = 0;
    if ((uVar6 & 0xffffffff) != (uVar7 & 0xffffffff)) {
      uVar5 = uVar8;
    }
  }
  else if (iVar4 == 5) {
    uVar8 = param_2;
    func_0x00010c25d700(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c25d700(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar8;
    func_0x00010bf433a0(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar8);
  }
LAB_1054e3b00:
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar5;
}



/* Entry: 1054e3b2c; end: 1054e3bcb; +[SCDeviceConstants getScreenResolution] */

undefined8 FUN_1054e3b2c(void)

{
  undefined *puVar1;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined **ppuStack_18;
  
  if (iRam00000001136bc7f0 == 0 || iRam00000001136bc7f4 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
    func_0x00010c077480();
    if ((int)puVar1 == 0) {
      puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_30 = 0xc2000000;
      pcStack_28 = FUN_1054e3c44;
      puStack_20 = &UNK_110849530;
      ppuStack_18 = &PTR___NSConcreteGlobalBlock_110891cb0;
      func_0x00010006eaa4(PTR___dispatch_main_q_11034be20,&puStack_38);
      _objc_release(ppuStack_18);
    }
    else {
      FUN_1054e3bcc();
    }
  }
  return CONCAT44(iRam00000001136bc7f4,iRam00000001136bc7f0);
}


