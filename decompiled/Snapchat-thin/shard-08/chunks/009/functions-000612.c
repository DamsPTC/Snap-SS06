/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106798ab0; end: 106798c03; -[SCMusicFeatureLaunchServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106798ab0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126c2610;
  _objc_alloc(PTR_PTR_1126c2610);
  func_0x00010c02ca60();
  puVar2 = PTR_PTR_1126b5350;
  _objc_alloc(PTR_PTR_1126b5350);
  func_0x00010c041f80();
  puVar3 = PTR_PTR_1126b5350;
  _objc_alloc(PTR_PTR_1126b5350);
  func_0x00010c041f80();
  puVar4 = PTR_PTR_1126cddc0;
  _objc_alloc(PTR_PTR_1126cddc0);
  func_0x00010c0546e0();
  puVar5 = PTR_PTR_1126cddc8;
  _objc_alloc(PTR_PTR_1126cddc8);
  func_0x00010c02cd00();
  puVar6 = PTR_PTR_1126cddd0;
  _objc_alloc(PTR_PTR_1126cddd0);
  func_0x00010c02d020();
  puVar7 = PTR_PTR_1126cddd8;
  _objc_alloc(PTR_PTR_1126cddd8);
  param_1 = param_1 + _DAT_11274ff9c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c054700(puVar7,param_2,puVar4,puVar5,puVar6,param_1);
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106798c04; end: 106798c6b; -[SCMusicFeatureLaunchServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106798c04(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274ff9c);
  _objc_storeStrong(param_1 + _DAT_11274ff98,0);
  _objc_storeStrong(param_1 + _DAT_11274ff94,0);
  _objc_storeStrong(param_1 + _DAT_11274ff90,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274ffa0);
  return;
}



/* Entry: 106798c6c; end: 106798cdf; -[SCMusicCameraPresenterImplementation initWithMusicCameraFeatureLauncher:] */

undefined1 * FUN_106798c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f30c8;
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



/* Entry: 106798ce0; end: 106798ce7; -[SCMusicCameraPresenterImplementation launchMusicCameraFeatureWithScope:owner:] */

void FUN_106798ce0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08b7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_launchFeatureWithScope_owner__112600800);
  return;
}



/* Entry: 106798ce8; end: 106798d1f; -[SCMusicCameraPresenterImplementation endLaunchMusicCameraFeature] */

void FUN_106798ce8(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c076220();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf94c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_endLaunchedFeature_1125c2cb0);
    return;
  }
  return;
}



/* Entry: 106798d20; end: 106798d27; -[SCMusicCameraPresenterImplementation musicCameraFeatureLauncher] */

undefined8 FUN_106798d20(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106798d28; end: 106798d33; -[SCMusicCameraPresenterImplementation .cxx_destruct] */

void FUN_106798d28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106798d34; end: 106798da7; -[SCMusicSyncActionHandlerPresenterImpl initWithMusicSyncActionHandlerLauncher:] */

undefined1 * FUN_106798d34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f30d0;
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



/* Entry: 106798da8; end: 106798db3; -[SCMusicSyncActionHandlerPresenterImpl launchMusicSyncActionHandlerWithScope:owner:] */

void FUN_106798da8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08b7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_launchFeatureWithScope_owner__112600800,param_3,
             param_1);
  return;
}



/* Entry: 106798db4; end: 106798deb; -[SCMusicSyncActionHandlerPresenterImpl endLaunchMusicSyncActionHandler] */

void FUN_106798db4(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c076220();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf94c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_endLaunchedFeature_1125c2cb0);
    return;
  }
  return;
}



/* Entry: 106798dec; end: 106798df3; -[SCMusicSyncActionHandlerPresenterImpl musicSyncActionHandlerLauncher] */

undefined8 FUN_106798dec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106798df4; end: 106798dff; -[SCMusicSyncActionHandlerPresenterImpl .cxx_destruct] */

void FUN_106798df4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106798e00; end: 106798e73; -[SCMusicTopicPagePresenterServicesImplementation initWithTopicViewerMusicScopeLauncher:] */

undefined1 * FUN_106798e00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f30d8;
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



/* Entry: 106798e74; end: 106798e7b; -[SCMusicTopicPagePresenterServicesImplementation launchTopicViewerMusicFeatureWithScope:owner:] */

void FUN_106798e74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08b7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_launchFeatureWithScope_owner__112600800);
  return;
}



/* Entry: 106798e7c; end: 106798e83; -[SCMusicTopicPagePresenterServicesImplementation endLaunchTopicViewerMusicFeatureWithScope:] */

void FUN_106798e7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_endLaunchedFeatureWithScope__1125c2cc8);
  return;
}



/* Entry: 106798e84; end: 106798e8b; -[SCMusicTopicPagePresenterServicesImplementation topicViewerMusicScopeLauncher] */

undefined8 FUN_106798e84(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106798e8c; end: 106798e97; -[SCMusicTopicPagePresenterServicesImplementation .cxx_destruct] */

void FUN_106798e8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106798e98; end: 106799077; -[SCPlusLensRemoteApiPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106798e98(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0250;
  _objc_alloc(PTR_PTR_1126b0250);
  puVar3 = PTR_PTR_1126b0258;
  func_0x00010c242540(PTR_PTR_1126b0258);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfefa40(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b0260;
  _objc_alloc(PTR_PTR_1126b0260);
  puVar5 = PTR_PTR_1126cdde0;
  func_0x00010beffb20(PTR_PTR_1126cdde0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03ee80(puVar4);
  _objc_release(puVar5);
  param_1 = param_1 + _DAT_11274ffb0;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 106799078; end: 1067990b7;  */

void FUN_106799078(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf2740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1067990b8; end: 1067992b7; -[SCPlusLensRemoteApiPluginEntryPoint _createRequestHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067990b8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cdde8;
  _objc_alloc();
  lVar3 = param_1 + _DAT_11274ffb8;
  _objc_loadWeakRetained(lVar3);
  lVar4 = param_1 + _DAT_11274ffc0;
  _objc_loadWeakRetained(lVar4);
  lVar5 = param_1 + _DAT_11274ffc8;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c095d20();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11274ffcc;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c08d660();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11274ffd0;
  _objc_loadWeakRetained();
  lVar9 = param_1;
  func_0x00010c091140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02c4c0(puVar2);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067992b8; end: 10679935f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067992b8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar1 = param_1 + _DAT_11274ffb4;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf2b640();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0cfc80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106799360; end: 1067993ff; -[SCPlusLensRemoteApiPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106799360(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274ffc4,0);
  _objc_storeStrong(param_1 + _DAT_11274ffbc,0);
  _objc_destroyWeak(param_1 + _DAT_11274ffc0);
  _objc_destroyWeak(param_1 + _DAT_11274ffd0);
  _objc_destroyWeak(param_1 + _DAT_11274ffcc);
  _objc_destroyWeak(param_1 + _DAT_11274ffc8);
  _objc_destroyWeak(param_1 + _DAT_11274ffb8);
  _objc_destroyWeak(param_1 + _DAT_11274ffb4);
  _objc_destroyWeak(param_1 + _DAT_11274ffd4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274ffb0);
  return;
}



/* Entry: 106799400; end: 10679945f; -[SCPostCapturePlusLensRemoteApiHandlerBridgeObjCServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106799400(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11274ffd8;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126cddf0;
    _objc_alloc_init();
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



/* Entry: 106799460; end: 10679949b; -[SCPostCapturePlusLensRemoteApiHandlerBridgeObjCServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106799460(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274ffdc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274ffd8,0);
  return;
}



/* Entry: 10679949c; end: 1067995d7; -[SCPostCapturePlusLensRemoteApiPluginProxyHandlerEntryPoint _isPlusApiLensSessionActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10679949c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = param_1 + _DAT_11274ffe0;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf5cee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010befec80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c06f880();
  if ((uVar5 & 1) == 0) {
    _objc_release(uVar1);
  }
  else {
    uVar5 = uVar2;
    func_0x00010befec80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c06bc00();
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar1);
    if ((uVar4 & 1) != 0) {
      uVar5 = 1;
      goto LAB_1067995b8;
    }
  }
  uVar1 = uVar2;
  func_0x00010c0f7f60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c06f880();
  if ((int)uVar5 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = uVar2;
    func_0x00010c0f7f60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c079d40();
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
LAB_1067995b8:
  _objc_release(uVar2);
  return uVar5;
}



/* Entry: 1067995d8; end: 106799847; -[SCPostCapturePlusLensRemoteApiPluginProxyHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067995d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  lVar1 = param_1 + _DAT_11274ffe4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b3770;
  func_0x00010c104620(PTR_PTR_1126b3770);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c0720c0(lVar3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (((int)lVar5 != 0) && (lVar1 = param_1, func_0x00010be42c00(), (int)lVar1 != 0)) {
    puVar4 = PTR_PTR_1126cddf8;
    _objc_alloc_init();
    uVar11 = *(undefined8 *)(param_1 + _DAT_11274ffe8);
    *(undefined **)(param_1 + _DAT_11274ffe8) = puVar4;
    _objc_retain();
    _objc_release(uVar11);
    puVar6 = PTR_PTR_1126b0250;
    _objc_alloc(PTR_PTR_1126b0250);
    puVar7 = PTR_PTR_1126b0258;
    func_0x00010c242540(PTR_PTR_1126b0258);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfefa40(puVar6,param_2,puVar7);
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126b0260;
    _objc_alloc(PTR_PTR_1126b0260);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106799848;
    puStack_60 = &UNK_11093b0b8;
    puVar9 = PTR_PTR_1126ae720;
    puStack_58 = puVar4;
    func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_78);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126cdde0;
    func_0x00010beffb20(PTR_PTR_1126cdde0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03ee80(puVar8,param_2,puVar9,puVar7,puVar10);
    _objc_release(puVar10);
    _objc_release(puVar9);
    lVar1 = param_1;
    FUN_106799870(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e5480();
    _objc_release(lVar1);
    param_1 = param_1 + _DAT_11274ffec;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(puVar8);
    _objc_release(puVar4);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  return;
}



/* Entry: 106799848; end: 10679986f;  */

void FUN_106799848(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106799870; end: 106799893;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106799870(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11274fff4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106799894; end: 106799943; -[SCPostCapturePlusLensRemoteApiPluginProxyHandlerEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106799894(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1;
  FUN_106799870();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c119e20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + _DAT_11274ffe8);
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == lVar3) {
    lVar1 = param_1 + _DAT_11274fff4;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf3bda0();
    _objc_release(lVar1);
  }
  puStack_38 = PTR_PTR_1126f30e0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106799944; end: 1067999af; -[SCPostCapturePlusLensRemoteApiPluginProxyHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106799944(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274fff4);
  _objc_destroyWeak(param_1 + _DAT_11274ffe4);
  _objc_destroyWeak(param_1 + _DAT_11274ffe0);
  _objc_destroyWeak(param_1 + _DAT_11274fff0);
  _objc_destroyWeak(param_1 + _DAT_11274ffec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274ffe8,0);
  return;
}



/* Entry: 1067999b0; end: 1067999bb; -[SCFeatureSettingsService isGenAIStickersLegalAcceptedAvailable] */

void FUN_1067999b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e5e5d8);
  return;
}



/* Entry: 1067999bc; end: 1067999c7; -[SCFeatureSettingsService genAIStickersLegalAcceptedServerParam] */

undefined ** FUN_1067999bc(void)

{
  return &PTR____CFConstantStringClassReference_110e5e5d8;
}



/* Entry: 1067999c8; end: 1067999d7; -[SCFeatureSettingsService setGenAIStickersLegalAccepted:] */

void FUN_1067999c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e5e5d8,param_3);
  return;
}



/* Entry: 1067999d8; end: 1067999df; -[SCFeatureSettingsService gen_ai_stickers_p_and_l_accepted_client_value:] */

undefined * FUN_1067999d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1067999e0; end: 1067999e7; -[SCFeatureSettingsService gen_ai_stickers_p_and_l_accepted_server_value:] */

void FUN_1067999e0(undefined8 param_1,undefined8 param_2,int param_3)

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



/* Entry: 1067999e8; end: 1067999f7; -[SCFeatureSettingsService genAIStickersLegalAccepted] */

void FUN_1067999e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e5e5d8,0);
  return;
}



/* Entry: 1067999f8; end: 106799d63; -[SCPlusAIStickersDataSourceImpl initWithInputText:uiContainer:plusServices:imageFetchingService:customStickerManager:minervaGrpcService:featureSettingsService:notificationPool:subscribeScopeExposer:subscribeScopeServices:legalTrayScopeFactoryServices:reportScopeExposer:performer:delegate:] */

undefined8 *
FUN_1067999f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_68 = PTR_PTR_1126f30e8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_3;
    _objc_release(uVar2);
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
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x14,param_16);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0x12];
    puVar1[0x12] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cde00;
    func_0x00010c0db140(PTR_PTR_1126cde00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed8d20(puVar1);
    _objc_release(puVar3);
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106799d64; end: 106799d6b; -[SCPlusAIStickersDataSourceImpl generationStateObservable] */

void FUN_106799d64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x90),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 106799d6c; end: 106799d93; -[SCPlusAIStickersDataSourceImpl generationState] */

void FUN_106799d6c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106799d94; end: 106799f07; -[SCPlusAIStickersDataSourceImpl didTapGenerateCell] */

void FUN_106799d94(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010befeaa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c252440();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar5 == 1) {
    func_0x00010be54fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be7ed90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentSubscribePage_11257d500);
    return;
  }
  uVar6 = *(ulong *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfbe9c0();
  _objc_release(uVar6);
  if ((uVar7 & 1) != 0) {
    func_0x00010c0bf040(*(undefined8 *)(param_1 + 0x88));
    return;
  }
  func_0x00010be54fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be7c1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentLegalTray_11257ca10);
  return;
}



/* Entry: 106799f08; end: 106799f3b;  */

void FUN_106799f08(long param_1,undefined8 param_2)

{
  func_0x00010be54fc0(*(undefined8 *)(param_1 + 0x20),param_2,
                      &PTR____CFConstantStringClassReference_110e5e5f8,0);
                    /* WARNING: Could not recover jumptable at 0x00010be1a730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__generate_112564368);
  return;
}



/* Entry: 106799f3c; end: 10679a06f; -[SCPlusAIStickersDataSourceImpl didSelectSticker:atIndex:] */

void FUN_106799f3c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x00010be54fc0(param_1);
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bfe7300(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,auStack_48);
    uStack_50 = param_4;
    func_0x00010bf59220(uVar1);
    _objc_release(lVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10679a070; end: 10679a0df;  */

void FUN_10679a070(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      lVar1 = param_1 + 0xa0;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c15bfc0();
      _objc_release(lVar1);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10679a0e0; end: 10679a353; -[SCPlusAIStickersDataSourceImpl didLongPressSticker:] */

void FUN_10679a0e0(undefined8 param_1,undefined1 *param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined **unaff_x25;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c133700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    unaff_x21 = (undefined *)0x0;
    if (lVar1 != 0) {
      puVar2 = auStack_68;
      _objc_initWeak(puVar2,param_1);
      puVar3 = PTR_PTR_1126b10a0;
      FUN_10679de88();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ec240();
      _objc_retainAutoreleasedReturnValue();
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_10679a354;
      puStack_80 = &UNK_110852d00;
      unaff_x25 = &puStack_98;
      param_2 = auStack_68;
      _objc_copyWeak(auStack_70,param_2);
      _objc_retain(param_3);
      unaff_x21 = puVar3;
      lStack_78 = param_3;
      func_0x00010bf1d200();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar3 = PTR_PTR_1126b10a0;
      func_0x00010679dea0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb42c0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = puVar3;
      func_0x00010bf1d200();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar3 = PTR_PTR_1126b10a8;
      _objc_alloc(PTR_PTR_1126b10a8);
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_60 = unaff_x21;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c019f40(puVar3);
      _objc_release(puVar4);
      func_0x00010c10c360(puVar3);
      _objc_release(puVar3);
      _objc_release(unaff_x22);
      _objc_release(unaff_x21);
      _objc_release(lStack_78);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x25 + 5);
  _objc_destroyWeak(auStack_68);
  lVar1 = param_3;
  __Unwind_Resume();
  pcStack_a8 = FUN_10679a354;
  puStack_d0 = unaff_x22;
  puStack_c8 = unaff_x21;
  uStack_c0 = param_1;
  lStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  _objc_copyWeak(auStack_d8,lVar1 + 0x28);
  uVar5 = *(undefined8 *)(lVar1 + 0x20);
  _objc_retain(uVar5);
  func_0x00010bf83000(param_2);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_d8);
  _objc_release(param_2);
  return;
}



/* Entry: 10679a354; end: 10679a40f;  */

void FUN_10679a354(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf83000(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10679a410; end: 10679a463;  */

void FUN_10679a410(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c133700(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7e220(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10679a464; end: 10679a46b;  */

void FUN_10679a464(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf82ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_dismissActionSheet_1125be5a0);
  return;
}



/* Entry: 10679a46c; end: 10679a583; -[SCPlusAIStickersDataSourceImpl willDisplayGenerateCell] */

/* WARNING: Possible PIC construction at 0x00010679a508: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010679a50c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_10679a46c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010befeaa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c252440();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar5 == 1) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110e5e618;
  }
  else {
    ppuVar6 = &PTR____CFConstantStringClassReference_110e5e5f8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be54fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logItemImpression_index__112572d88,ppuVar6,0);
  return;
}



/* Entry: 10679a584; end: 10679a593; -[SCPlusAIStickersDataSourceImpl willDisplayStickerCellAtIndex:] */

void FUN_10679a584(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be54fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logItemImpression_index__112572d88,
             &PTR____CFConstantStringClassReference_110e11bf8,param_3);
  return;
}



/* Entry: 10679a594; end: 10679a64f; -[SCPlusAIStickersDataSourceImpl _logItemTap:index:] */

void FUN_10679a594(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bfa2520(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a8ca0(uVar1,param_2,0,0x34,0x97,param_3,0,0,puVar2);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10679a650; end: 10679a70b; -[SCPlusAIStickersDataSourceImpl _logItemImpression:index:] */

void FUN_10679a650(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bfa2520(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a8ca0(uVar1,param_2,2,0x34,0x97,param_3,0,0,puVar2);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10679a70c; end: 10679a827; -[SCPlusAIStickersDataSourceImpl _generate] */

void FUN_10679a70c(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126cde00;
  func_0x00010bfc08e0(PTR_PTR_1126cde00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed8d20(param_1);
  _objc_release(puVar1);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010be1bf40(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = auStack_40;
  _objc_copyWeak(puVar2,auStack_38);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(param_1);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10679a828; end: 10679a8e7;  */

void FUN_10679a828(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  if (param_3 == 0) {
    puVar2 = PTR_PTR_1126cde00;
    func_0x00010bfc08c0(PTR_PTR_1126cde00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed8d20(lVar1);
    _objc_release(puVar2);
  }
  else {
    puVar2 = PTR_PTR_1126cde00;
    func_0x00010c0db140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed8d20(lVar1);
    _objc_release(puVar2);
    _objc_release(lVar1);
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    func_0x00010beb9480();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10679a8e8; end: 10679ab2b; -[SCPlusAIStickersDataSourceImpl _updateGenerationState:] */

void FUN_10679a8e8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  if (param_3 == 0) goto LAB_10679aaf4;
  uVar4 = *(ulong *)(param_1 + 0x88);
  _objc_retain(uVar4);
  if (uVar4 == param_3) {
    _objc_release(uVar4);
  }
  else {
    uVar1 = uVar4;
    func_0x00010c071ae0();
    _objc_release(uVar4);
    if ((uVar1 & 1) == 0) {
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)(param_1 + 0x88);
      *(ulong *)(param_1 + 0x88) = param_3;
      _objc_release(uVar2);
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x90));
    }
  }
  _objc_retain(param_3);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_10679bc7c;
  uStack_50 = 0x10679bc8c;
  puStack_48 = PTR____NSArray0__struct_11034ab48;
  func_0x00010c0bf040(param_3);
  puVar5 = (undefined *)puStack_68[5];
  _objc_retain(puVar5);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(puStack_48);
  _objc_release(param_3);
  puVar6 = *(undefined **)(param_1 + 0x78);
  _objc_retain(puVar6);
  _objc_retain(puVar5);
  if (puVar6 == puVar5) {
    _objc_release(puVar5);
LAB_10679aae4:
    _objc_release(puVar6);
  }
  else {
    if (puVar5 == (undefined *)0x0) {
      _objc_release(puVar6);
LAB_10679aaa8:
      _objc_retain(puVar5);
      uVar2 = *(undefined8 *)(param_1 + 0x78);
      *(undefined **)(param_1 + 0x78) = puVar5;
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + 0x80);
      puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar2);
      goto LAB_10679aae4;
    }
    puVar3 = puVar6;
    func_0x00010c071ae0();
    _objc_release(puVar5);
    _objc_release(puVar6);
    if (((ulong)puVar3 & 1) == 0) goto LAB_10679aaa8;
  }
  _objc_release(puVar5);
LAB_10679aaf4:
  _objc_release(param_3);
  return;
}



/* Entry: 10679ab2c; end: 10679abe7; -[SCPlusAIStickersDataSourceImpl _presentSubscribePage] */

void FUN_10679ab2c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  puVar2 = PTR_PTR_1126b1da8;
  _objc_alloc(PTR_PTR_1126b1da8);
  func_0x00010c04abe0();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf23e60(uVar3,param_2,*(undefined8 *)(param_1 + 8),puVar2,param_1,4,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x40),param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10679abe8; end: 10679ac53; -[SCPlusAIStickersDataSourceImpl _presentLegalTray] */

void FUN_10679abe8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126cde08;
  _objc_alloc(PTR_PTR_1126cde08);
  func_0x00010c0567c0();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf21f80(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10679ac54; end: 10679acd7; -[SCPlusAIStickersDataSourceImpl _presentReportPageForReportParams:] */

void FUN_10679ac54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126bd648;
    _objc_alloc(PTR_PTR_1126bd648);
    func_0x00010c0338e0();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x60),param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10679acd8; end: 10679ad5f; -[SCPlusAIStickersDataSourceImpl _showGenericErrorToast] */

void FUN_10679acd8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126afde0;
  lVar1 = param_1;
  func_0x00010679deb8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55ce0(puVar2,param_2,lVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10679ad60; end: 10679ad87; -[SCPlusAIStickersDataSourceImpl items] */

void FUN_10679ad60(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10679ad88; end: 10679adaf; -[SCPlusAIStickersDataSourceImpl itemUpdates] */

void FUN_10679ad88(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10679adb0; end: 10679adf7; -[SCPlusAIStickersDataSourceImpl plusSubscribeDidDismiss] */

void FUN_10679adb0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x40));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10679adf8; end: 10679ae63; -[SCPlusAIStickersDataSourceImpl aiStickersLegalTrayDidDismiss] */

void FUN_10679adf8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfbe9c0();
  _objc_release(uVar2);
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be1a730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__generate_112564368);
    return;
  }
  return;
}



/* Entry: 10679ae64; end: 10679aeab; -[SCPlusAIStickersDataSourceImpl generativeContentReportDidCompleteWithCancelled:] */

void FUN_10679ae64(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x60));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10679aeac; end: 10679b07b; -[SCPlusAIStickersDataSourceImpl _generateStickersForPrompt:] */

/* WARNING: Possible PIC construction at 0x00010679b0fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010679b100) */

void FUN_10679aeac(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  ppuVar8 = &puStack_a0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be1b7c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be1b7c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be1b7c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1b7c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar6 = PTR_PTR_1126ae558;
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_78 = lVar1;
  lStack_70 = lVar2;
  lStack_68 = lVar3;
  lStack_60 = param_1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beffb40(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10679b07c;
  puStack_88 = &UNK_11085c638;
  puStack_80 = puVar4;
  func_0x00010c297260();
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar6 = puVar4;
  func_0x00010bfbc3e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  if (ppuVar8 == (undefined **)0x0) {
    func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_11093b158);
    lVar2 = param_2;
    func_0x00010bf529e0();
    uVar7 = *(undefined8 *)(lVar1 + 0x20);
    if (lVar2 != 0) {
      func_0x00010bf43d60(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_2);
      return;
    }
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110e5e638);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar7 = *(undefined8 *)(lVar1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar7,PTR_s_completeWithError__1125ae8d0);
  return;
}



/* Entry: 10679b07c; end: 10679b11b;  */

/* WARNING: Possible PIC construction at 0x00010679b0fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010679b100) */

void FUN_10679b07c(long param_1,long param_2,undefined **param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 == (undefined **)0x0) {
    func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_11093b158);
    lVar2 = param_2;
    func_0x00010bf529e0();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    if (lVar2 != 0) {
      func_0x00010bf43d60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_2);
      return;
    }
    param_3 = &PTR____CFConstantStringClassReference_110e5e638;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110e5e638);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_completeWithError__1125ae8d0,param_3);
  return;
}



/* Entry: 10679b11c; end: 10679b123;  */

void FUN_10679b11c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ec5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_optional_112618b90);
  return;
}



/* Entry: 10679b124; end: 10679b1ff; -[SCPlusAIStickersDataSourceImpl _generateOptionalStickerForPrompt:variation:] */

void FUN_10679b124(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_opt_new();
  func_0x00010be1bf20(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10679b200;
  puStack_40 = &UNK_11093b178;
  puStack_38 = puVar1;
  func_0x00010c297260(param_1,param_2,&puStack_58,0);
  _objc_release(param_1);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10679b200; end: 10679b25b;  */

void FUN_10679b200(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126ae750;
  if (param_3 == 0) {
    func_0x00010c0ec800(PTR_PTR_1126ae750,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0db140();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf43d60(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10679b25c; end: 10679b467; -[SCPlusAIStickersDataSourceImpl _generateStickerForPrompt:variation:] */

void FUN_10679b25c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cde10;
  _objc_opt_new(PTR_PTR_1126cde10);
  func_0x00010c21f000();
  func_0x00010c1d64a0(puVar1,param_2,8);
  puVar2 = PTR_PTR_1126cde18;
  _objc_opt_new(PTR_PTR_1126cde18);
  func_0x00010c1a2600(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bfbeb60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1be5c0();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae560;
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar7);
  _objc_opt_new();
  puVar3 = PTR_PTR_1126ae988;
  _objc_alloc(PTR_PTR_1126ae988);
  puVar4 = PTR_PTR_1126cde30;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10679b468;
  puStack_70 = &UNK_11093b1d8;
  puStack_68 = puVar2;
  uStack_60 = uVar7;
  uStack_58 = param_3;
  _objc_retain(param_3);
  _objc_opt_class(puVar4);
  func_0x00010c0199c0(puVar3,param_2,&puStack_88,puVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27f2c0(uVar5,param_2,&PTR____CFConstantStringClassReference_110e5e678,puVar4,puVar6,
                      puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(uVar5);
  puVar4 = puVar2;
  func_0x00010bfbc3e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uStack_58);
  _objc_release(puVar2);
  _objc_release(uVar7);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10679b468; end: 10679b5ab;  */

/* WARNING: Possible PIC construction at 0x00010679b578: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010679b57c) */

void FUN_10679b468(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  if (param_3 == (undefined **)0x0) {
    func_0x00010bfc0880();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    puVar4 = PTR_PTR_1126cde20;
    func_0x00010be36fc0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar2);
      func_0x00010bfa7900(uVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(puVar4);
      _objc_release(uVar3);
      return;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    param_3 = &PTR____CFConstantStringClassReference_110e5e658;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110e5e658);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_completeWithError__1125ae8d0,param_3);
  return;
}



/* Entry: 10679b5ac; end: 10679b667;  */

void FUN_10679b5ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 10679b668; end: 10679b857;  */

void FUN_10679b668(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  
  puVar3 = PTR_PTR_1126cde28;
  _objc_retain(param_2);
  _objc_alloc(puVar3);
  uVar4 = param_2;
  func_0x00010bfe6ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar6 = uVar5;
  _UIImagePNGRepresentation();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(lVar1);
  _objc_retain(uVar2);
  lVar7 = lVar1;
  func_0x00010bf4db80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c08fa60();
  _objc_release(lVar7);
  if (lVar8 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR_PTR_1126bd640;
    _objc_alloc(PTR_PTR_1126bd640);
    lVar7 = lVar1;
    func_0x00010bf4db80(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1;
    func_0x00010c1554c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1;
    func_0x00010c064640(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c003f20(puVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
  }
  _objc_release(uVar2);
  _objc_release(lVar1);
  func_0x00010c01c140(puVar3);
  _objc_release(puVar10);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10679b858; end: 10679b863;  */

void FUN_10679b858(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0,param_2);
  return;
}



/* Entry: 10679b864; end: 10679bb57; +[SCPlusAIStickersDataSourceImpl _imageFetchRequestForMediaInfo:] */

void FUN_10679b864(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bf4cce0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126b08b0;
    lVar1 = param_3;
    if (lVar2 == 0) {
      lVar2 = param_3;
      func_0x00010bf4db80();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c08fa60();
      _objc_release(lVar2);
      puVar4 = PTR_PTR_1126b08b0;
      if (lVar3 == 0) {
        _objc_release(param_3);
        goto LAB_10679bb30;
      }
      func_0x00010bf4db80(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf33760(puVar4,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf4cce0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4cd80(puVar4,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar1);
    _objc_release(param_3);
    if (puVar4 != (undefined *)0x0) {
      puVar5 = PTR_PTR_1126b17d8;
      _objc_alloc(PTR_PTR_1126b17d8);
      func_0x00010c003a80();
      lVar1 = param_3;
      func_0x00010c1554c0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c08fa60();
      if (lVar2 == 0) {
LAB_10679ba50:
        _objc_release(lVar1);
      }
      else {
        lVar2 = param_3;
        func_0x00010c064640();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c08fa60();
        _objc_release(lVar2);
        _objc_release(lVar1);
        if (lVar3 != 0) {
          lVar2 = param_3;
          func_0x00010c1554c0(param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar1 = lVar2;
          func_0x00010bf15da0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar2);
          lVar2 = param_3;
          func_0x00010c064640(param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010bf15da0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar2);
          func_0x00010c195d00(puVar5,param_2,lVar1,lVar3);
          _objc_release(lVar3);
          goto LAB_10679ba50;
        }
      }
      puVar6 = PTR_PTR_1126b85a0;
      puVar8 = puVar5;
      func_0x00010bf220e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23c900(puVar6,param_2,puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      puVar7 = PTR_PTR_1126aebf0;
      _objc_alloc(PTR_PTR_1126aebf0);
      _objc_opt_class(param_1);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c011b80(puVar7,param_2,param_1,0x29);
      _objc_release(param_1);
      puVar8 = PTR_PTR_1126b85a8;
      _objc_alloc(PTR_PTR_1126b85a8);
      func_0x00010c01cf00(0x3ff0000000000000,*(undefined8 *)PTR__CGSizeZero_110347620,
                          *(undefined8 *)(PTR__CGSizeZero_110347620 + 8));
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      goto LAB_10679bb34;
    }
  }
LAB_10679bb30:
  puVar8 = (undefined *)0x0;
LAB_10679bb34:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10679bb58; end: 10679bb5f; -[SCPlusAIStickersDataSourceImpl inputText] */

undefined8 FUN_10679bb58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10679bb60; end: 10679bb77; -[SCPlusAIStickersDataSourceImpl delegate] */

void FUN_10679bb60(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10679bb78; end: 10679bc7b; -[SCPlusAIStickersDataSourceImpl .cxx_destruct] */

void FUN_10679bb78(long param_1)

{
  _objc_destroyWeak(param_1 + 0xa0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 10679bc7c; end: 10679bc93;  */

void FUN_10679bc7c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10679bc94; end: 10679be27;  */

void FUN_10679bc94(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126cde38;
  _objc_alloc();
  func_0x00010bffd2a0();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined **)(lVar6 + 0x28) = puVar2;
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126cde38;
  _objc_alloc();
  func_0x00010bffd2a0();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(puVar1 + 0x20) + 8) + 0x28);
  *(undefined **)(*(long *)(*(long *)(puVar1 + 0x20) + 8) + 0x28) = puVar3;
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_11093b228);
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(puVar2 + 0x20) + 8) + 0x28);
  *(undefined8 *)(*(long *)(*(long *)(puVar2 + 0x20) + 8) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 10679be28; end: 10679be4b;  */

void FUN_10679be28(void)

{
  _objc_alloc(PTR_PTR_1126cde38);
  func_0x00010bffd2a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10679be4c; end: 10679c10b; -[SCPlusAIStickersServiceFactoryImpl initWithPlusServices:imageFetchingService:customStickerManager:grpcClientFactory:performerProvider:featureSettingsService:circumstanceEngine:notificationPool:subscribeScopeExposer:subscribeScopeServices:legalTrayScopeFactoryServices:reportScopeExposer:] */

undefined8 *
FUN_10679be4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126f30f0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
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
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10679c10c; end: 10679c19f; -[SCPlusAIStickersServiceFactoryImpl createServiceWithUIContainer:delegate:] */

void FUN_10679c10c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cde40;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c037800();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10679c1a0; end: 10679c247; -[SCPlusAIStickersServiceFactoryImpl .cxx_destruct] */

void FUN_10679c1a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 10679c248; end: 10679c5af; -[SCPlusAIStickersServiceImpl initWithPlusServices:imageFetchingService:customStickerManager:grpcClientFactory:performerProvider:featureSettingsService:circumstanceEngine:notificationPool:subscribeScopeExposer:subscribeScopeServices:legalTrayScopeFactoryServices:reportScopeExposer:uiContainer:delegate:] */

undefined8 *
FUN_10679c248(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_70 = PTR_PTR_1126f30f8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae720;
    _objc_retain(param_6);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[4];
    puVar1[4] = puVar4;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar3);
    _objc_retain(param_13);
    uVar3 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar3);
    _objc_retain(param_14);
    uVar3 = puVar1[0xb];
    puVar1[0xb] = param_14;
    _objc_release(uVar3);
    _objc_retain(param_15);
    uVar3 = puVar1[0xc];
    puVar1[0xc] = param_15;
    _objc_release(uVar3);
    _objc_storeWeak(puVar1 + 0xe,param_16);
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_retain(uVar2);
    _objc_release(uVar3);
    _objc_release(param_6);
    _objc_release(uVar2);
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10679c5b0; end: 10679c6c7;  */

void FUN_10679c5b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_PTR_1126ae728;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  _objc_retain(uVar1);
  func_0x00010bf24820(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1ebf80(puVar2,param_2,&PTR____CFConstantStringClassReference_110e5e6d8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar2,param_2,60000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar2,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar2,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar3;
  func_0x00010bf56360(uVar3,param_2,&PTR____CFConstantStringClassReference_110dfa198,puVar2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10679c6c8; end: 10679c79f; -[SCPlusAIStickersServiceImpl castToCellOrNil:] */

void FUN_10679c6c8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126cde48;
  _objc_opt_class(PTR_PTR_1126cde48);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar3 = PTR_PTR_1126cde50;
  uVar5 = param_3;
  if (uVar1 == 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar3);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    uVar2 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_3);
    if (uVar2 == 0) {
      uVar5 = 0;
    }
    else {
      _objc_retain(param_3);
    }
    _objc_release(uVar2);
  }
  else {
    _objc_retain(param_3);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10679c7a0; end: 10679c7df; -[SCPlusAIStickersServiceImpl collectionViewCellClassForCellType:] */

void FUN_10679c7a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  if (param_3 == 0) {
    ppuVar1 = &PTR_PTR_1126cde48;
  }
  else {
    if (param_3 != 1) goto LAB_10679c7dc;
    ppuVar1 = &PTR_PTR_1126cde50;
  }
  _objc_opt_class(*ppuVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_10679c7dc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10679c7e0; end: 10679c92f; -[SCPlusAIStickersServiceImpl dataSourceForInputText:] */

void FUN_10679c7e0(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  uVar6 = param_3;
  func_0x00010c08fa60();
  if ((uVar6 != 0) && (uVar6 = param_3, func_0x00010c08fa60(), uVar6 < 0x24)) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfa2420();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010befeaa0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c252440();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar5 != 0) {
      if (lVar5 == 1) {
        uVar6 = *(ulong *)(param_1 + 0x30);
        func_0x00010bf1f440(uVar6,param_2,&PTR____CFConstantStringClassReference_110e5e6b8,0,0);
        if ((uVar6 & 1) != 0) goto LAB_10679c8bc;
      }
      puVar7 = PTR_PTR_1126cde20;
      _objc_alloc(PTR_PTR_1126cde20);
      func_0x00010c01e180();
      goto LAB_10679c8c0;
    }
  }
LAB_10679c8bc:
  puVar7 = (undefined *)0x0;
LAB_10679c8c0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10679c930; end: 10679c98b; -[SCPlusAIStickersServiceImpl sendItem:atIndex:] */

void FUN_10679c930(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  func_0x00010beff0c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10679c98c; end: 10679c9a3; -[SCPlusAIStickersServiceImpl delegate] */

void FUN_10679c98c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10679c9a4; end: 10679ca5f; -[SCPlusAIStickersServiceImpl .cxx_destruct] */

void FUN_10679c9a4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 10679ca60; end: 10679cb43; -[SCPlusAIStickersServiceProvider provide] */

void FUN_10679ca60(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cde58;
  _objc_alloc(PTR_PTR_1126cde58);
  func_0x00010c044ea0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10679cb44; end: 10679cb83;  */

void FUN_10679cb44(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5c240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10679cb84; end: 10679cdc3; -[SCPlusAIStickersServiceProvider _makeServiceFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10679cb84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  
  puVar1 = PTR_PTR_1126cde60;
  _objc_alloc();
  lVar2 = param_1 + _DAT_1127500b0;
  _objc_loadWeakRetained();
  lVar3 = param_1 + _DAT_1127500b4;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010bfe7760();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_1127500b8;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bf61e80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_1127500bc;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_1127500c0;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_1127500c4;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_1127500c8;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_1127500cc;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + _DAT_1127500d0);
  lVar17 = param_1 + _DAT_1127500d4;
  _objc_loadWeakRetained();
  lVar18 = param_1 + _DAT_1127500d8;
  _objc_loadWeakRetained();
  func_0x00010c0377e0(puVar1,param_2,lVar2,lVar4,lVar6,lVar8,lVar10,lVar12,lVar14,lVar16,uVar19,
                      lVar17,lVar18,*(undefined8 *)(param_1 + _DAT_1127500dc));
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10679cdc4; end: 10679ce87; -[SCPlusAIStickersServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10679cdc4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127500dc,0);
  _objc_destroyWeak(param_1 + _DAT_1127500d8);
  _objc_storeStrong(param_1 + _DAT_1127500d0,0);
  _objc_destroyWeak(param_1 + _DAT_1127500d4);
  _objc_destroyWeak(param_1 + _DAT_1127500bc);
  _objc_destroyWeak(param_1 + _DAT_1127500c0);
  _objc_destroyWeak(param_1 + _DAT_1127500b0);
  _objc_destroyWeak(param_1 + _DAT_1127500cc);
  _objc_destroyWeak(param_1 + _DAT_1127500b4);
  _objc_destroyWeak(param_1 + _DAT_1127500c8);
  _objc_destroyWeak(param_1 + _DAT_1127500c4);
  _objc_destroyWeak(param_1 + _DAT_1127500b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127500e0);
  return;
}



/* Entry: 10679ce88; end: 10679d1db; -[SCPlusAIStickersGenerateCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10679ce88(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f3100;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x000108f8ed54();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127500e4);
    *(undefined1 **)((long)puVar1 + (long)_DAT_1127500e4) = puVar2;
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar6 = (long)_DAT_1127500e8;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4018000000000000);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb20();
    _objc_release(uVar5);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar4 = puVar3;
    FUN_10679ded0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar6 = (long)_DAT_1127500ec;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar3);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar6 = (long)_DAT_1127500f0;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar3);
    func_0x00010c1677c0(0x3fe6666666666666,*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    puVar3 = PTR_PTR_1126aea58;
    _objc_opt_new();
    lVar6 = (long)_DAT_1127500f4;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar5);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c1c3ae0(0x4028000000000000,*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar6));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar3);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    puVar3 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    lVar6 = (long)_DAT_1127500f8;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar5);
    func_0x00010c1a8560(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    puVar3 = PTR_PTR_1126cde00;
    func_0x00010c0db140(PTR_PTR_1126cde00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be1c540(puVar1);
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10679d1dc; end: 10679d437; -[SCPlusAIStickersGenerateCollectionViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10679d1dc(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  long lStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126f3100;
  lStack_90 = param_5;
  _objc_msgSendSuper2(&lStack_90,PTR_s_layoutSubviews_112600e60);
  lVar4 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(lVar4);
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + _DAT_1127500e8));
  lVar4 = (long)_DAT_1127500e4;
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + lVar4));
  puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar4));
  func_0x00010bf199e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c1d9820(puVar1);
  _objc_release(puVar2);
  func_0x00010c1c2c00(*(undefined8 *)(param_5 + lVar4));
  func_0x00010c19f0e0(param_3 * 0.5 + -20.0,param_4 * 0.5 + -20.0 + -5.0 + -6.0,0x4044000000000000,
                      0x4044000000000000,*(undefined8 *)(param_5 + _DAT_1127500ec));
  func_0x00010c19f0e0(param_3 * 0.5 + -15.0,param_4 * 0.5 + -15.0,0x403e000000000000,
                      0x403e000000000000,*(undefined8 *)(param_5 + _DAT_1127500f8));
  lVar4 = (long)_DAT_1127500f4;
  uVar3 = *(undefined8 *)(param_5 + lVar4);
  dVar6 = param_3;
  dVar5 = param_4;
  _CGRectInset(param_1,param_2,param_3,param_4,0x4008000000000000,0x4008000000000000);
  func_0x00010c23d5a0(dVar6,dVar5,uVar3);
  dVar6 = (param_4 - dVar5) + -6.0 + -6.0;
  uVar3 = 0;
  func_0x00010c19f0e0(0,dVar6,param_3,dVar5,*(undefined8 *)(param_5 + lVar4));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar4));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar4));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar4));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar4));
  func_0x00010c19f0e0(uVar3,dVar6 + -3.0,param_3,dVar5 + 6.0,
                      *(undefined8 *)(param_5 + _DAT_1127500f0));
  _objc_release(puVar1);
  return;
}



/* Entry: 10679d438; end: 10679d657; -[SCPlusAIStickersGenerateCollectionViewCell willDisplayCellWithDataSource:itemIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10679d438(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cde20;
  _objc_opt_class(PTR_PTR_1126cde20);
  uVar6 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    func_0x00010c2a6100(param_3);
    lVar7 = (long)_DAT_1127500fc;
    uVar6 = *(ulong *)(param_1 + lVar7);
    _objc_retain(uVar6);
    if (uVar6 == param_3) {
      _objc_release(uVar6);
    }
    else {
      uVar3 = uVar6;
      func_0x00010c071ae0();
      _objc_release(uVar6);
      if ((uVar3 & 1) == 0) {
        lVar8 = (long)_DAT_112750100;
        func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar8));
        _objc_retain(param_3);
        uVar4 = *(undefined8 *)(param_1 + lVar7);
        *(ulong *)(param_1 + lVar7) = uVar1;
        _objc_release(uVar4);
        uVar6 = param_3;
        func_0x00010c065fe0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_1127500f4));
        _objc_release(uVar6);
        _objc_initWeak(auStack_58,param_1);
        uVar6 = param_3;
        func_0x00010bfc0a20();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
        func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar6;
        func_0x00010c0e0e60();
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_60,auStack_58);
        uVar5 = uVar3;
        func_0x00010c25ff60();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + lVar8);
        *(ulong *)(param_1 + lVar8) = uVar5;
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(puVar2);
        _objc_release(uVar6);
        _objc_destroyWeak(auStack_60);
        _objc_destroyWeak(auStack_58);
      }
    }
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10679d658; end: 10679d69f;  */

void FUN_10679d658(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be1c540();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10679d6a0; end: 10679d6af; -[SCPlusAIStickersGenerateCollectionViewCell didSelect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10679d6a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7cb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127500fc),PTR_s_didTapGenerateCell_1125bcc80);
  return;
}


