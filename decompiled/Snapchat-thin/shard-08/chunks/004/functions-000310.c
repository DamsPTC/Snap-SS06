/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10615eb8c; end: 10615ec13; -[SCFeatureDefaultNGSBarImpl setCameraUIVisible:animated:arbitrator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615eb8c(long param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_5);
  if ((*(byte *)(param_1 + _DAT_1127408a8) != param_3) &&
     (*(char *)(param_1 + _DAT_1127408a8) = (char)param_3, param_3 != 0)) {
    lVar1 = (long)_DAT_112740898;
    func_0x00010c1809a0(*(undefined8 *)(param_1 + lVar1),param_2,param_4);
    func_0x00010c1b5e00(*(undefined8 *)(param_1 + _DAT_112740894),param_2,
                        *(undefined8 *)(param_1 + lVar1));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10615ec14; end: 10615ec33; -[SCFeatureDefaultNGSBarImpl cameraBottomUIArbitrator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615ec14(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127408a4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10615ec34; end: 10615ec8f; -[SCFeatureDefaultNGSBarImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615ec34(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127408a4);
  _objc_storeStrong(param_1 + _DAT_1127408a0,0);
  _objc_storeStrong(param_1 + _DAT_112740898,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112740894,0);
  return;
}



/* Entry: 10615ec90; end: 10615f293; -[SCFeatureDirectorModePresentingImpl initWithDirectorModeLaunchServices:directorModeScopeServices:cameraConfiguration:cameraUserBlizzardLogger:multiSnapFeature:lensCarouselManager:userSession:mainCameraViewControllerLifecycleEvents:cameraSnapCreationLogger:cameraUserActionLogger:contentDeliveryServices:cameraTooltipsService:cameraHardwareServicesAPI:cameraSnapModelServices:snapDocManagerServices:snapDocThumbnailServices:directorModeActivator:afterCaptureActionTracker:tinsel:appStartExperimentReader:cameraDeviceSettingsResolver:cameraModeActivationController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10615ec90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
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
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  puStack_70 = PTR_PTR_1126efe70;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar6 = (long)_DAT_1127408ac;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_3;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_1127408b0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_4;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_1127408b4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127408b8,param_6);
    lVar6 = (long)_DAT_1127408bc;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_7;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127408c0,param_8);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127408c4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127408c4) = puVar3;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_1127408c8;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_9;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127408cc,param_11);
    lVar6 = (long)_DAT_1127408d0;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_12;
    _objc_release(uVar2);
    uVar2 = param_13;
    func_0x00010bf4c240(param_13);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127408d4,uVar2);
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127408d8,param_14);
    lVar6 = (long)_DAT_1127408dc;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_15;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_1127408e0;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_16;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_1127408e4;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_17;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_1127408e8;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_18;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127408ec) = 0;
    lVar7 = (long)_DAT_1127408f0;
    _objc_retain(param_19);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_19;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_1127408f4;
    _objc_retain(param_20);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_20;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_1127408f8;
    _objc_retain(param_21);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_21;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127408fc,param_22);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112740900);
    *(undefined **)((long)puVar1 + (long)_DAT_112740900) = puVar3;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112740904;
    _objc_retain(param_23);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_23;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112740908,param_24);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274090c);
    *(undefined **)((long)puVar1 + (long)_DAT_11274090c) = puVar3;
    _objc_release(uVar2);
    func_0x00010beadfa0(puVar1);
    func_0x00010beab540(puVar1);
    _objc_initWeak(auStack_80,puVar1);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf7f480();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_80);
    uVar5 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
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



/* Entry: 10615f294; end: 10615f2db;  */

void FUN_10615f294(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc880();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10615f2dc; end: 10615f30f; -[SCFeatureDirectorModePresentingImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615f2dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_storeWeak(param_1 + _DAT_112740910,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010beace50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupGrowthEntryPoint_112588d38);
  return;
}



/* Entry: 10615f310; end: 10615f3d7; -[SCFeatureDirectorModePresentingImpl presetMediaConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615f310(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112740914;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126c8570;
    _objc_alloc();
    lVar3 = param_1 + _DAT_1127408b8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c05a520(puVar1,param_2,1,lVar3,*(undefined8 *)(param_1 + _DAT_1127408f8));
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    _objc_release(lVar3);
    func_0x00010c1e49e0(*(undefined8 *)(param_1 + lVar4),param_2,0);
    func_0x00010c1c9fc0(*(undefined8 *)(param_1 + lVar4),param_2,
                        *(undefined8 *)(param_1 + _DAT_112740918));
    *(undefined8 *)(param_1 + _DAT_11274091c) = 0;
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10615f3d8; end: 10615f417; -[SCFeatureDirectorModePresentingImpl shouldActivateDirectorModeForAddSnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615f3d8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740914;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c1581e0();
  if (lVar1 != 0) {
    func_0x00010c110bc0(*(undefined8 *)(param_1 + lVar2));
  }
  return;
}



/* Entry: 10615f418; end: 10615f45f; -[SCFeatureDirectorModePresentingImpl isAddSnapEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10615f418(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127408bc);
  func_0x00010bfa1820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf926c0();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 10615f460; end: 10615f6ff; -[SCFeatureDirectorModePresentingImpl activateDirectorModeForAddSnapIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615f460(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar7 = param_1;
  func_0x00010c22da60();
  if ((int)lVar7 != 0) {
    *(undefined8 *)(param_1 + _DAT_1127408ec) = 2;
    puVar1 = PTR_PTR_1126c7c48;
    _objc_opt_new();
    lVar8 = (long)_DAT_112740920;
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar1;
    _objc_release(uVar6);
    lVar7 = (long)_DAT_1127408e0;
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c0cfdc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c2407e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c203f00();
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c2407e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179060();
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar4);
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c0cfdc0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c137fe0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c0cfdc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179060();
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c0cfdc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195460();
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_initWeak(auStack_58,param_1);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10615f700;
    puStack_68 = &UNK_1108434b0;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x000100162d98("APPSTORE",&puStack_80);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 10615f700; end: 10615f737;  */

void FUN_10615f700(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bea3760(param_1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10615f738; end: 10615f817; -[SCFeatureDirectorModePresentingImpl activateDirectorModeForDeeplinkWithQueryParameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615f738(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  *(undefined8 *)(param_1 + _DAT_1127408ec) = 0xffffffffffffffff;
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10615f818;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x000100162d98("APPSTORE",&puStack_60);
  func_0x00010be4fd60(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10615f818; end: 10615f84f;  */

void FUN_10615f818(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bea3760(param_1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10615f850; end: 10615f8bf; -[SCFeatureDirectorModePresentingImpl setMusicSelection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615f850(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c22da60();
  if ((uVar1 & 1) == 0) {
    lVar3 = (long)_DAT_112740918;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010c1c9fc0(*(undefined8 *)(param_1 + (long)_DAT_112740914),param_2,
                        *(undefined8 *)(param_1 + lVar3));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10615f8c0; end: 10615f90f; -[SCFeatureDirectorModePresentingImpl reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615f8c0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740914);
  *(undefined8 *)(param_1 + _DAT_112740914) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740920);
  *(undefined8 *)(param_1 + _DAT_112740920) = 0;
  _objc_release(uVar1);
  func_0x00010be03840(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be352f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hideActiveBadgeView_11256ae58);
  return;
}



/* Entry: 10615f910; end: 10615f963; -[SCFeatureDirectorModePresentingImpl saveDraftMediaConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615f910(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740914);
  *(undefined8 *)(param_1 + _DAT_112740914) = param_3;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + _DAT_11274091c) = 1;
  return;
}



/* Entry: 10615f964; end: 10615fa27; -[SCFeatureDirectorModePresentingImpl configureWithCameraToolbar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615f964(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b9ca8;
  lVar3 = param_1 + _DAT_1127408fc;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c12bc80(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  if (((ulong)puVar1 & 1) == 0) {
    lVar3 = (long)_DAT_112740924;
    if (*(long *)(param_1 + lVar3) != param_3) {
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      *(long *)(param_1 + lVar3) = param_3;
      _objc_release(uVar2);
      lVar3 = param_1;
      func_0x00010bdf4da0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befc4a0(param_3,param_2,lVar3);
      func_0x00010beb9fe0(param_1);
      _objc_release(lVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10615fa28; end: 10615facb; -[SCFeatureDirectorModePresentingImpl directorModeScopeDidComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615fa28(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bea3760(param_1,param_2,0);
  func_0x00010c1b4280(*(undefined8 *)(param_1 + _DAT_112740928),param_2,0);
  *(undefined8 *)(param_1 + _DAT_1127408ec) = 0;
  lVar3 = (long)_DAT_1127408ac;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bf7f580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076220();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bf7f580(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10615facc; end: 10615fafb; -[SCFeatureDirectorModePresentingImpl draftMediaConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615facc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740914);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10615fafc; end: 10615fb2b; -[SCFeatureDirectorModePresentingImpl recoverableData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615fafc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274092c);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10615fb2c; end: 10615fb33; -[SCFeatureDirectorModePresentingImpl isDraftEditing] */

undefined8 FUN_10615fb2c(void)

{
  return 0;
}



/* Entry: 10615fb34; end: 10615fb37; -[SCFeatureDirectorModePresentingImpl featureDirectorMode:didHandleDraft:] */

void FUN_10615fb34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_reset_11262ba18);
  return;
}



/* Entry: 10615fb38; end: 10615fb3b; -[SCFeatureDirectorModePresentingImpl featureDirectorMode:didUpdateDraft:withSelectedSegment:] */

void FUN_10615fb38(void)

{
  return;
}



/* Entry: 10615fb3c; end: 10615fb3f; -[SCFeatureDirectorModePresentingImpl featureDirectorMode:didDeleteDraft:] */

void FUN_10615fb3c(void)

{
  return;
}



/* Entry: 10615fb40; end: 10615fbaf; -[SCFeatureDirectorModePresentingImpl cameraViewInitialFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10615fb40(undefined8 param_1,long param_2)

{
  param_2 = param_2 + _DAT_112740930;
  _objc_loadWeakRetained(param_2);
  func_0x00010bf2bb00();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10615fbb0; end: 10615fe63; -[SCFeatureDirectorModePresentingImpl recoverWithSnapSessionContext:contentLossReason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615fbb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c2407e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfdc2e0();
  _objc_release(uVar2);
  if ((int)uVar1 != 0) {
    lVar7 = (long)_DAT_112740920;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar7);
    *(undefined8 *)(param_1 + lVar7) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)(param_1 + _DAT_112740934) = 0;
    puVar3 = PTR_PTR_1126b0018;
    _objc_alloc(PTR_PTR_1126b0018);
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127408e4);
    func_0x00010c2402c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c2407e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c047840(puVar3);
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar4);
    uVar6 = *(undefined8 *)(param_1 + _DAT_1127408e8);
    func_0x00010c26dcc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c2407e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c26dc00(0x4042000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_initWeak(auStack_68,param_1);
    param_1 = param_1 + _DAT_1127408b8;
    _objc_loadWeakRetained(param_1);
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_retain(param_3);
    _objc_retain(uVar4);
    uStack_70 = param_4;
    func_0x00010c270060(puVar3);
    _objc_release(param_1);
    _objc_release(uVar4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10615fe64; end: 10616001b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10615fe64(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((((param_3 == 0) && (param_2 != 0)) && (lVar1 != 0)) &&
     ((*(byte *)(lVar1 + _DAT_112740934) & 1) == 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2407e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c243340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c215ae0(param_2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112740914;
    _objc_retain(param_2);
    uVar3 = *(undefined8 *)(lVar1 + lVar6);
    *(long *)(lVar1 + lVar6) = param_2;
    _objc_release(uVar3);
    *(undefined8 *)(lVar1 + _DAT_11274091c) = 2;
    puVar4 = PTR_PTR_1126ae558;
    func_0x00010beffb40(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    uStack_48 = *(undefined8 *)(param_1 + 0x38);
    puVar5 = auStack_50;
    _objc_copyWeak(puVar5,param_1 + 0x30);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_50);
    _objc_release(param_2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10616001c; end: 1061601b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616001c(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010bf529e0();
    uVar2 = param_2;
    func_0x00010bf529e0();
    _objc_release(uVar1);
    if ((uVar5 == uVar2) && (uVar5 = param_2, func_0x00010bf529e0(), uVar5 != 0)) {
      uVar5 = 0;
      do {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c1585e0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        uVar2 = param_2;
        func_0x00010c0dfd40(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c193a80(uVar4);
        _objc_release(uVar2);
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c2702a0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c18e120(uVar4);
        _objc_release(uVar3);
        func_0x00010c1e9040(uVar4);
        func_0x00010c182160(uVar4);
        _objc_release(uVar4);
        uVar5 = uVar5 + 1;
        uVar2 = param_2;
        func_0x00010bf529e0();
      } while (uVar5 < uVar2);
    }
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (*(char *)(param_1 + _DAT_112740934) == '\x01') {
      func_0x00010c137fe0();
    }
    else {
      func_0x00010bea3780(param_1);
    }
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061601b8; end: 1061601cb; -[SCFeatureDirectorModePresentingImpl cancelInFlightRecovery] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061601b8(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112740934) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_reset_11262ba18);
  return;
}



/* Entry: 1061601cc; end: 10616024b; -[SCFeatureDirectorModePresentingImpl tooltipDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061601cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740938;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + _DAT_11274093c) = 1;
  lVar2 = *(long *)(param_1 + _DAT_112740924);
  func_0x00010c29cfe0(lVar2,param_2,*(undefined8 *)(param_1 + _DAT_112740928));
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010beb7760(param_1,param_2,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10616024c; end: 1061602bf; -[SCFeatureDirectorModePresentingImpl didCancelFromPreview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616024c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112740930;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c112560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72d00();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061602c0; end: 106160373; -[SCFeatureDirectorModePresentingImpl didSendSnapsAndPostToStory:storyTypes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061602c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127408f4);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7db60();
  _objc_release(uVar2);
  param_1 = param_1 + _DAT_112740930;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c112560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7b520();
  _objc_release(param_4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106160374; end: 106160417; -[SCFeatureDirectorModePresentingImpl didCancelFromPreview:withCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106160374(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1 + _DAT_112740930;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c112560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  _objc_opt_respondsToSelector(uVar2,PTR_s_didCancelFromPreview_withComplet_1125ba4f0);
  if ((uVar1 & 1) != 0) {
    func_0x00010bf72d20(uVar2);
  }
  _objc_release(uVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106160418; end: 106160483; -[SCFeatureDirectorModePresentingImpl didComeFromCameraWithoutSendingSnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106160418(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + _DAT_112740930;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c112560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  _objc_opt_respondsToSelector(uVar2,PTR_s_didComeFromCameraWithoutSendingS_1125ba8b0);
  if ((uVar1 & 1) != 0) {
    func_0x00010bf73c20(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106160484; end: 10616050f; -[SCFeatureDirectorModePresentingImpl didSendDiscoverSharedMessageWithParameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106160484(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1 + _DAT_112740930;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c112560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  _objc_opt_respondsToSelector(uVar2,PTR_s_didSendDiscoverSharedMessageWith_1125bc6b8);
  if ((uVar1 & 1) != 0) {
    func_0x00010bf7b440(uVar2);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106160510; end: 10616057b; -[SCFeatureDirectorModePresentingImpl didSendChatMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106160510(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + _DAT_112740930;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c112560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  _objc_opt_respondsToSelector(uVar2,PTR_s_didSendChatMessage_1125bc6a8);
  if ((uVar1 & 1) != 0) {
    func_0x00010bf7b400(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10616057c; end: 1061605e7; -[SCFeatureDirectorModePresentingImpl didSendToGallery] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616057c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + _DAT_112740930;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c112560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  _objc_opt_respondsToSelector(uVar2,PTR_s_didSendToGallery_1125bc708);
  if ((uVar1 & 1) != 0) {
    func_0x00010bf7b580(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1061605e8; end: 10616069f; -[SCFeatureDirectorModePresentingImpl didSaveSnapWithParameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061605e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127408f4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7db60();
  _objc_release(uVar1);
  uVar2 = param_1 + _DAT_112740930;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010c112560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  _objc_opt_respondsToSelector(uVar3,PTR_s_didSaveSnapWithParameters__1125bc288);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf7a380(uVar3);
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061606a0; end: 106160757; -[SCFeatureDirectorModePresentingImpl didPostStoryWithStoryTypes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061606a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127408f4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7db60();
  _objc_release(uVar1);
  uVar2 = param_1 + _DAT_112740930;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010c112560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  _objc_opt_respondsToSelector(uVar3,PTR_s_didPostStoryWithStoryTypes__1125bbaf8);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf78540(uVar3);
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106160758; end: 1061607e3; -[SCFeatureDirectorModePresentingImpl didPostNewlyCreatedGroupStoriesWithMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106160758(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1 + _DAT_112740930;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c112560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  _objc_opt_respondsToSelector(uVar2,PTR_s_didPostNewlyCreatedGroupStoriesW_1125bbad0);
  if ((uVar1 & 1) != 0) {
    func_0x00010bf784a0(uVar2);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061607e4; end: 10616084f; -[SCFeatureDirectorModePresentingImpl didPresentSendTo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061607e4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + _DAT_112740930;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c112560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  _objc_opt_respondsToSelector(uVar2,PTR_s_didPresentSendTo_1125bbb58);
  if ((uVar1 & 1) != 0) {
    func_0x00010bf786c0(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106160850; end: 1061608bb; -[SCFeatureDirectorModePresentingImpl didDismissSendTo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106160850(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + _DAT_112740930;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c112560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  _objc_opt_respondsToSelector(uVar2,PTR_s_didDismissSendTo_1125badf0);
  if ((uVar1 & 1) != 0) {
    func_0x00010bf75120(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1061608bc; end: 106160947; -[SCFeatureDirectorModePresentingImpl willDismissSendToWithSelectedItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061608bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1 + _DAT_112740930;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c112560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  _objc_opt_respondsToSelector(uVar2,PTR_s_willDismissSendToWithSelectedIte_1126871f0);
  if ((uVar1 & 1) != 0) {
    func_0x00010c2a5f20(uVar2);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106160948; end: 106160aab; -[SCFeatureDirectorModePresentingImpl _setupGrowthEntryPoint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106160948(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127408b4);
  func_0x00010bf7f280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf7f3c0();
  if ((int)uVar3 != 0) {
    lVar5 = *(long *)(param_1 + _DAT_112740940);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (lVar5 == 0) {
      func_0x00010bdf14c0(param_1);
      _objc_initWeak(auStack_38,param_1);
      param_1 = param_1 + _DAT_1127408c0;
      _objc_loadWeakRetained(param_1);
      puVar4 = auStack_40;
      _objc_copyWeak(puVar4,auStack_38);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297280(param_1);
      _objc_release(puVar4);
      _objc_release(param_1);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
    return;
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106160aac; end: 106160b3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106160aac(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 == 0)) {
    lVar1 = param_2;
    func_0x00010c269d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(param_1 + _DAT_112740944,lVar1);
    _objc_release(lVar1);
    func_0x00010be89b60(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106160b3c; end: 106160f93; -[SCFeatureDirectorModePresentingImpl _createPillView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106160b3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,3);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_112740940;
  uVar13 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar1;
  _objc_release(uVar13);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar15));
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar15));
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar15));
  func_0x00010c1732a0(*(undefined8 *)(param_1 + lVar15));
  lVar14 = (long)_DAT_1127408b4;
  lVar2 = *(long *)(param_1 + lVar14);
  func_0x00010bf7f280();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf7f3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar3 = param_1 + _DAT_1127408d4;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    lVar2 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    if (lVar2 != 0) {
      func_0x00010bea64a0(param_1);
      goto LAB_106160ca8;
    }
  }
  uVar13 = *(undefined8 *)(param_1 + lVar15);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar13);
  _objc_release(puVar1);
LAB_106160ca8:
  func_0x00010c1aab40(*(undefined8 *)(param_1 + lVar15));
  lVar14 = *(long *)(param_1 + lVar14);
  func_0x00010bf7f280();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bf7f400();
  _objc_release(lVar3);
  _objc_release();
  lStack_88 = lVar4;
  if (lVar2 == 2) {
    func_0x000108f5833c();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (lVar2 == 1) {
    func_0x00010619f79c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010b0aeb7c();
    _objc_retainAutoreleasedReturnValue();
  }
  lStack_90 = lVar14;
  func_0x00010c216260(*(undefined8 *)(param_1 + lVar15),lVar14,lVar14,0);
  func_0x00010c216380(*(undefined8 *)(param_1 + lVar15));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15));
  lVar2 = (long)_DAT_112740910;
  lVar3 = param_1 + lVar2;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bfe12e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010c181f00(0x443b8000,*(undefined8 *)(param_1 + lVar15));
  puStack_b0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar5 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + lVar2;
  uStack_a0 = uVar5;
  _objc_loadWeakRetained();
  lStack_98 = lVar3;
  func_0x00010bf2b240();
  _objc_retainAutoreleasedReturnValue();
  lStack_a8 = lVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar15);
  uStack_80 = uVar5;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar6;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar15);
  uStack_78 = uVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar2;
  _objc_loadWeakRetained();
  lVar4 = param_1;
  func_0x00010bf2b240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf493c0(0xc02a000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar1;
  func_0x00010beef8c0(puStack_b0);
  _objc_release(puVar1);
  _objc_release(uVar8);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar13);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar3);
  _objc_release(lStack_a8);
  _objc_release(lStack_98);
  _objc_release(uStack_a0);
  _objc_release(lStack_90);
  lVar4 = lStack_88;
  _objc_release(lStack_88);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_106160f94;
  uStack_100 = uVar5;
  lStack_f8 = lVar3;
  puStack_f0 = puVar1;
  uStack_e8 = uVar8;
  lStack_e0 = lVar2;
  uStack_d8 = uVar7;
  lStack_d0 = param_1;
  uStack_c8 = uVar13;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar12);
  puVar1 = PTR_PTR_1126b08b8;
  _objc_alloc(PTR_PTR_1126b08b8);
  func_0x00010c0295e0();
  puVar9 = PTR_PTR_1126b1058;
  _objc_alloc();
  func_0x00010c01b360();
  puVar10 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  puVar11 = PTR_PTR_1126b1050;
  _objc_alloc(PTR_PTR_1126b1050);
  func_0x00010c05a200();
  _objc_initWeak(auStack_108,lVar4);
  lVar4 = lVar4 + _DAT_1127408d4;
  _objc_loadWeakRetained(lVar4);
  lVar3 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_110,auStack_108);
  func_0x00010c1267e0(lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_108);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar1);
  _objc_release(puVar12);
  return;
}



/* Entry: 106160f94; end: 106161183; -[SCFeatureDirectorModePresentingImpl _setPillButtonImageURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106160f94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b08b8;
  _objc_alloc(PTR_PTR_1126b08b8);
  func_0x00010c0295e0();
  puVar2 = PTR_PTR_1126b1058;
  _objc_alloc();
  func_0x00010c01b360();
  puVar3 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  puVar4 = PTR_PTR_1126b1050;
  _objc_alloc(PTR_PTR_1126b1050);
  func_0x00010c05a200();
  _objc_initWeak(auStack_58,param_1);
  param_1 = param_1 + _DAT_1127408d4;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c1267e0(lVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106161184; end: 1061612bf;  */

void FUN_106161184(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x106161234;
  puStack_50 = &UNK_1108488f8;
  _objc_copyWeak(auStack_40,param_1 + 0x20);
  uStack_38 = param_3;
  _objc_retain(param_2);
  uStack_48 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 1061612c0; end: 106161413; -[SCFeatureDirectorModePresentingImpl _registerObserversForLensCarousel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061612c0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  param_1 = param_1 + _DAT_112740944;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bef0d60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0e0ea0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  lVar4 = lVar3;
  func_0x00010c25ff60(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 106161414; end: 106161473;  */

void FUN_106161414(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010bdfc900(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106161474; end: 106161493; -[SCFeatureDirectorModePresentingImpl _didChangeLensCarouselActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106161474(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uVar1 = 0x3ff0000000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,*(undefined8 *)(param_1 + _DAT_112740940),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106161494; end: 10616149b; -[SCFeatureDirectorModePresentingImpl _didTapPillButton] */

void FUN_106161494(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setDirectorModeActivated__112586780,1);
  return;
}



/* Entry: 10616149c; end: 10616170f; -[SCFeatureDirectorModePresentingImpl _logActivateFromDeeplinkWithQueryParameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616149c(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  long lStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = 0xb;
  func_0x00010baee46c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new();
  }
  else {
    _objc_retain(param_3);
    puVar3 = param_3;
  }
  lStack_78 = 0;
  puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60();
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = puVar4;
  if (lStack_78 == 0) {
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
  }
  else {
    ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  puVar4 = PTR_PTR_1126c7738;
  _objc_opt_new(PTR_PTR_1126c7738);
  func_0x00010c176a60();
  func_0x00010c1ffc60(puVar4);
  func_0x00010c1ffd80(puVar4);
  func_0x00010c1ffc20(puVar4);
  lVar10 = (long)_DAT_1127408b8;
  lVar8 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(lVar9);
  _objc_release(lVar8);
  puVar6 = PTR_PTR_1126c7740;
  _objc_opt_new(PTR_PTR_1126c7740);
  func_0x00010c176a60();
  func_0x00010c1ffc60(puVar6);
  func_0x00010c1ffd80(puVar6);
  func_0x00010c1ffc20(puVar6);
  param_1 = param_1 + lVar10;
  _objc_loadWeakRetained();
  lVar8 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(ppuVar5);
  _objc_release(puStack_80);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(puVar2);
  puVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_106161710;
  lVar9 = (long)_DAT_112740928;
  lVar8 = *(long *)(puVar4 + lVar9);
  lStack_c0 = lVar10;
  puStack_b8 = puVar3;
  lStack_b0 = param_1;
  uStack_a8 = uVar1;
  puStack_a0 = puVar2;
  puStack_98 = param_3;
  puStack_90 = &stack0xfffffffffffffff0;
  if (lVar8 == 0) {
    puVar2 = PTR_PTR_1126c7918;
    _objc_alloc();
    func_0x00010c037be0();
    uVar1 = *(undefined8 *)(puVar4 + lVar9);
    *(undefined **)(puVar4 + lVar9) = puVar2;
    _objc_release(uVar1);
    func_0x00010c1cdb60(*(undefined8 *)(puVar4 + lVar9));
    uVar1 = *(undefined8 *)(puVar4 + lVar9);
    func_0x00010c1fb140(uVar1);
    func_0x00010b0aeb7c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cdba0(*(undefined8 *)(puVar4 + lVar9));
    _objc_release(uVar1);
    func_0x00010b0aeb7c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb640(*(undefined8 *)(puVar4 + lVar9));
    _objc_release(uVar1);
    func_0x00010b0aeb7c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(*(undefined8 *)(puVar4 + lVar9));
    _objc_release(uVar1);
    func_0x00010c201380(*(undefined8 *)(puVar4 + lVar9));
    func_0x00010c160fc0(*(undefined8 *)(puVar4 + lVar9));
    func_0x00010c177460(*(undefined8 *)(puVar4 + lVar9));
    _objc_initWeak(auStack_c8,puVar4);
    uVar7 = *(undefined8 *)(puVar4 + lVar9);
    func_0x00010bf735a0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_d0,auStack_c8);
    uVar1 = uVar7;
    func_0x00010c25ff60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar1);
    _objc_release(uVar7);
    lVar8 = *(long *)(puVar4 + lVar9);
    _objc_retain(lVar8);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_c8);
  }
  else {
    _objc_retain(lVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 106161710; end: 106161913; -[SCFeatureDirectorModePresentingImpl _createToolbarItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106161710(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar5 = (long)_DAT_112740928;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126c7918;
    _objc_alloc();
    func_0x00010c037be0();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    func_0x00010c1cdb60(*(undefined8 *)(param_1 + lVar5));
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c1fb140(uVar3);
    func_0x00010b0aeb7c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cdba0(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar3);
    func_0x00010b0aeb7c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb640(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar3);
    func_0x00010b0aeb7c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar3);
    func_0x00010c201380(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010c177460(*(undefined8 *)(param_1 + lVar5));
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf735a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar4 = *(long *)(param_1 + lVar5);
    _objc_retain(lVar4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  else {
    _objc_retain(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106161914; end: 1061619e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106161914(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar4 = (long)_DAT_1127408d0;
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bfa1820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2b760();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bfa1820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_112740928;
    func_0x00010bf2b740();
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126affa8;
    func_0x00010c22bc20(PTR_PTR_1126affa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8760();
    _objc_release(puVar3);
    iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
    func_0x00010c07d660();
    if (iVar1 != 0) {
      func_0x00010bea3760(param_1,param_2,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061619e4; end: 106161b2f; -[SCFeatureDirectorModePresentingImpl _setupCameraModeActivationInfoObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061619e4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  param_1 = param_1 + _DAT_112740908;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4fd60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  lVar4 = lVar3;
  func_0x00010c25ff60(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 106161b30; end: 106161bc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106161b30(long param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (uVar1 = param_2, func_0x00010c067fc0(), uVar1 < 7)) {
    if ((1L << (uVar1 & 0x3f) & 0x69U) == 0) {
      func_0x00010bfe2c00(*(undefined8 *)(param_1 + _DAT_112740924));
    }
    else {
      func_0x00010bea88c0(param_1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106161bc4; end: 106161bfb; -[SCFeatureDirectorModePresentingImpl _setToolbarItemVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106161bc4(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  if ((*(long *)(param_1 + _DAT_112740928) != 0) &&
     (lVar1 = *(long *)(param_1 + _DAT_112740924), lVar1 != 0)) {
    if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c23a850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_showToolbarItem_animated__11266c438);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bfe2c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (lVar1,PTR_s_hideToolbarItem_animated__1125d64c0,*(long *)(param_1 + _DAT_112740928),1
              );
    return;
  }
  return;
}



/* Entry: 106161bfc; end: 106161d57; -[SCFeatureDirectorModePresentingImpl _showNewBadgeIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106161bfc(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar1 = param_2;
  func_0x00010beb62e0();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + _DAT_112740924);
    func_0x00010bf25540(uVar2,param_3,*(undefined8 *)(param_2 + _DAT_112740928));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216300();
    lVar8 = (long)_DAT_1127408d8;
    lVar1 = param_2 + lVar8;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c18e400(lVar3,param_3,(long)param_1);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    uVar5 = *(undefined8 *)(param_2 + _DAT_1127408b4);
    func_0x00010bf7f280();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf021c0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    if ((int)uVar7 != 0) {
      param_2 = param_2 + lVar8;
      _objc_loadWeakRetained(param_2);
      lVar1 = param_2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18e420();
      _objc_release(lVar1);
      _objc_release(param_2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106161d58; end: 106161da3; -[SCFeatureDirectorModePresentingImpl _dismissNewBadge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106161d58(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740924);
  func_0x00010bf25540(uVar1,param_2,*(undefined8 *)(param_1 + _DAT_112740928));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cc9e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106161da4; end: 106161ee3; -[SCFeatureDirectorModePresentingImpl _shouldShowNewBadge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106161da4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_1127408b4;
  uVar1 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010bf7f280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c291ea0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    uVar4 = *(ulong *)(param_1 + lVar8);
    func_0x00010bf7f280();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf021c0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    if ((uVar6 & 1) != 0) {
      return true;
    }
    lVar8 = (long)_DAT_1127408d8;
    uVar5 = param_1 + lVar8;
    _objc_loadWeakRetained();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010bfdb900();
    _objc_release(uVar6);
    _objc_release(uVar5);
    if ((uVar4 & 1) == 0) {
      param_1 = param_1 + lVar8;
      _objc_loadWeakRetained(param_1);
      lVar8 = param_1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar8;
      func_0x00010bfc4e20();
      _objc_release(lVar8);
      _objc_release(param_1);
      return lVar7 == 0;
    }
  }
  return false;
}



/* Entry: 106161ee4; end: 106161eeb; -[SCFeatureDirectorModePresentingImpl _setDirectorModeActivated:] */

void FUN_106161ee4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setDirectorModeActivated_isRela_112586788,param_3,0);
  return;
}



/* Entry: 106161eec; end: 106161fa3; -[SCFeatureDirectorModePresentingImpl _setDirectorModeActivated:isRelaunchedFromActiveSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106161eec(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((param_3 == 0) || (lVar1 = param_1, func_0x00010be33b00(), (int)lVar1 == 0)) {
    if (*(byte *)(param_1 + _DAT_112740948) == param_3) {
      return;
    }
    *(char *)(param_1 + _DAT_112740948) = (char)param_3;
  }
  else {
    *(undefined1 *)(param_1 + _DAT_112740948) = 1;
    func_0x00010be8a300(param_1);
    *(undefined1 *)(param_1 + _DAT_11274093c) = 0;
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127408f0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18e3a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106161fa4; end: 106161fc7; -[SCFeatureDirectorModePresentingImpl _relaunchActiveSession] */

void FUN_106161fa4(undefined8 param_1)

{
  func_0x00010be03840();
                    /* WARNING: Could not recover jumptable at 0x00010be352f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hideActiveBadgeView_11256ae58);
  return;
}



/* Entry: 106161fc8; end: 106162247; -[SCFeatureDirectorModePresentingImpl _launchDirectorMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106161fc8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc();
  lVar7 = param_1 + _DAT_112740930;
  _objc_loadWeakRetained(lVar7);
  lVar2 = lVar7;
  func_0x00010c0f3d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40();
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_initWeak(auStack_68,param_1);
  puVar3 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(puVar1);
  _objc_retain(puVar1);
  func_0x00010c0311a0(puVar3);
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127408b0);
  lVar7 = param_1;
  func_0x00010becefc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf235e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  lVar7 = (long)_DAT_1127408ac;
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bf7f580();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c076220();
  _objc_release(uVar4);
  if ((int)uVar5 != 0) {
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010bf7f580(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94c20();
    _objc_release(uVar5);
  }
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bf7f580(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b7c0();
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  return;
}



/* Entry: 106162248; end: 1061622bf;  */

void FUN_106162248(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010beea720();
  _objc_release(lVar1);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010beea720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061622c0; end: 1061622cb;  */

void FUN_1061622c0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_detachUI__1125b96b8,param_2);
  return;
}



/* Entry: 1061622cc; end: 1061623c3; -[SCFeatureDirectorModePresentingImpl _warmupCameraForDirectorModePresentation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061622cc(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  if (param_3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11274094c);
    *(undefined8 *)(param_1 + _DAT_11274094c) = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127408dc);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b5a50;
    func_0x00010bfb5340(PTR_PTR_1126b5a50);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112740904);
    puVar6 = &UNK_10f36b97f;
    uVar7 = 0x3ba;
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110db92b8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c250580(uVar1,param_2,puVar2,uVar5,puVar3,&PTR___NSConcreteGlobalBlock_110911200,
                        in_x6,in_x7,puVar6,uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + _DAT_11274094c);
    *(undefined8 *)(param_1 + _DAT_11274094c) = uVar4;
    _objc_release(uVar5);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061623c4; end: 1061623c7;  */

void FUN_1061623c4(void)

{
  return;
}



/* Entry: 1061623c8; end: 10616240f; -[SCFeatureDirectorModePresentingImpl _transitionDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061623c8(long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + _DAT_112740914) != 0) &&
     (lVar1 = param_1, func_0x00010c22da60(), (int)lVar1 == 0)) {
    param_1 = 0;
  }
  _objc_retain(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106162410; end: 10616259f; -[SCFeatureDirectorModePresentingImpl _rescaledThumbnailFutureWithImage:scale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106162410(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126ae558;
  if (param_4 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    _objc_opt_new(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x00010bfe9ca0(puVar2,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar4 = (long)_DAT_112740950;
    if (*(long *)(param_2 + lVar4) == 0) {
      puVar2 = PTR_PTR_1126ae790;
      _objc_alloc();
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                          "com.snapchat.camera.director-mode-image-rendering");
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c021520(puVar2,param_3,puVar1,0x19,0,2);
      uVar3 = *(undefined8 *)(param_2 + lVar4);
      *(undefined **)(param_2 + lVar4) = puVar2;
      _objc_release(uVar3);
      _objc_release(puVar1);
    }
    puVar1 = PTR_PTR_1126ae560;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_2 + lVar4);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1061625a0;
    puStack_70 = &UNK_110844b80;
    _objc_retain(param_4);
    lStack_68 = param_4;
    puStack_60 = puVar1;
    uStack_58 = param_1;
    _objc_retain(puVar1);
    func_0x00010c0f7fc0(uVar3,param_3,&puStack_88);
    puVar2 = puVar1;
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_60);
    _objc_release(lStack_68);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061625a0; end: 106162627;  */

void FUN_1061625a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = *(undefined **)(param_1 + 0x20);
  func_0x00010c14e6c0(0x4041800000000000,0x404f000000000000,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    _objc_opt_new(PTR__OBJC_CLASS___UIImage_1126aea68);
  }
  else {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  _objc_release(puVar1);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106162628; end: 106162737; -[SCFeatureDirectorModePresentingImpl _setupMainCameraVCEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106162628(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112740954);
  *(undefined **)(param_1 + _DAT_112740954) = puVar1;
  _objc_release(uVar2);
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 106162738; end: 106162833;  */

void FUN_106162738(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106162834;
  puStack_60 = &UNK_1108434b0;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0c1540(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 106162834; end: 1061628bf;  */

void FUN_106162834(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010beb7780(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061628c0; end: 1061628c7;  */

void FUN_1061628c0(void)

{
  return;
}



/* Entry: 1061628c8; end: 106162983; -[SCFeatureDirectorModePresentingImpl _showActiveSessionTooltipIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061628c8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010be33b00();
  if ((int)lVar1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112740924);
    func_0x00010c29cfe0(lVar1,param_2,*(undefined8 *)(param_1 + _DAT_112740928));
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      if ((*(byte *)(param_1 + _DAT_11274093c) & 1) == 0) {
        lVar2 = param_1;
        func_0x00010be352e0(param_1);
        func_0x00010619f784();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bebb8a0(0x4008000000000000,param_1,param_2,lVar2,lVar1);
        _objc_release(lVar2);
      }
      else {
        func_0x00010beb7760(param_1,param_2,lVar1);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 106162984; end: 106162b4f; -[SCFeatureDirectorModePresentingImpl _showActiveBadgeView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106162984(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar1 = PTR_PTR_1126c51b8;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = (long)_DAT_112740958;
  uVar2 = param_1;
  if (*(long *)(param_1 + lVar9) == 0) {
    _objc_retain(param_3);
    _objc_alloc();
    func_0x00010c04eae0();
    uVar8 = *(undefined8 *)(param_1 + lVar9);
    *(undefined **)(param_1 + lVar9) = puVar1;
    _objc_release(uVar8);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar9),param_2,0);
    func_0x00010befbb60(param_3,param_2,*(undefined8 *)(param_1 + lVar9));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar2 = *(ulong *)(param_1 + lVar9);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_3;
    func_0x00010c274200(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf493c0(0x4008000000000000,uVar2,param_2,uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar9);
    uStack_68 = uVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c2793a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    uVar6 = uVar4;
    func_0x00010bf493c0(0xc008000000000000,uVar4,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_60 = uVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_68,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar8);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar2;
  }
  ___stack_chk_fail();
  if (*(long *)(uVar2 + (long)_DAT_11274091c) == 1) {
    lVar9 = *(long *)(uVar2 + (long)_DAT_112740914);
    func_0x00010c1581e0(lVar9);
    return (ulong)(lVar9 != 0);
  }
  return 0;
}



/* Entry: 106162b50; end: 106162b93; -[SCFeatureDirectorModePresentingImpl _hasActiveSessionDraft] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106162b50(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + _DAT_11274091c) == 1) {
    lVar1 = *(long *)(param_1 + _DAT_112740914);
    func_0x00010c1581e0(lVar1);
    return lVar1 != 0;
  }
  return false;
}



/* Entry: 106162b94; end: 106162bc7; -[SCFeatureDirectorModePresentingImpl _hideActiveBadgeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106162b94(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740958;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106162bc8; end: 106162e03; -[SCFeatureDirectorModePresentingImpl _showTooltipWithText:duration:toolbarButtonView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106162bc8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b09c0;
  lVar10 = (long)_DAT_112740938;
  lVar9 = *(long *)(param_2 + lVar10);
  if (lVar9 == 0) {
    _objc_retain(param_4);
    _objc_alloc();
    func_0x00010c051640();
    _objc_release(param_4);
    uVar2 = *(undefined8 *)(param_2 + lVar10);
    *(undefined **)(param_2 + lVar10) = puVar1;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)(param_2 + lVar10),param_3,param_2);
    lVar9 = *(long *)(param_2 + lVar10);
  }
  lVar3 = param_2 + _DAT_112740910;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bfe12e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10c740(param_1,lVar9,param_3,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010c1798c0(*(undefined8 *)(param_2 + lVar10),param_3,1);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar5 = *(undefined8 *)(param_2 + lVar10);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_5;
  func_0x00010bf348e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf493a0(uVar5,param_3,lVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + lVar10);
  uStack_88 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_5;
  func_0x00010c08de00(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf493c0(0xc02c000000000000,uVar6,param_3,lVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_88,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_3,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(lVar10);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(lVar9);
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = (long)_DAT_112740938;
  func_0x00010bf82f40(*(undefined8 *)(param_5 + lVar9));
  uVar2 = *(undefined8 *)(param_5 + lVar9);
  *(undefined8 *)(param_5 + lVar9) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106162e04; end: 106162e37; -[SCFeatureDirectorModePresentingImpl _dismissTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106162e04(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740938;
  func_0x00010bf82f40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106162e38; end: 106162e7b; -[SCFeatureDirectorModePresentingImpl _didChangeDirectorMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106162e38(long param_1,undefined8 param_2,int param_3)

{
  func_0x00010bf926c0();
  *(char *)(param_1 + _DAT_112740948) = (char)param_3;
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be47890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__launchDirectorMode_11256f7c0);
    return;
  }
  return;
}



/* Entry: 106162e7c; end: 106162e8b; -[SCFeatureDirectorModePresentingImpl isActivated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106162e7c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112740948);
}



/* Entry: 106162e8c; end: 106162eab; -[SCFeatureDirectorModePresentingImpl delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106162e8c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112740930);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106162eac; end: 106162ebf; -[SCFeatureDirectorModePresentingImpl setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106162eac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112740930,param_3);
  return;
}



/* Entry: 106162ec0; end: 106162eff; -[SCFeatureDirectorModePresentingImpl setPresetMediaConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106162ec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740914;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106162f00; end: 106162f0f; -[SCFeatureDirectorModePresentingImpl snapSessionContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106162f00(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112740920);
}



/* Entry: 106162f10; end: 106162f4f; -[SCFeatureDirectorModePresentingImpl setSnapSessionContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106162f10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740920;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106162f50; end: 1061631b7; -[SCFeatureDirectorModePresentingImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106162f50(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112740914,0);
  _objc_destroyWeak(param_1 + _DAT_112740930);
  _objc_storeStrong(param_1 + _DAT_11274090c,0);
  _objc_destroyWeak(param_1 + _DAT_112740908);
  _objc_storeStrong(param_1 + _DAT_112740904,0);
  _objc_storeStrong(param_1 + _DAT_11274094c,0);
  _objc_destroyWeak(param_1 + _DAT_1127408fc);
  _objc_storeStrong(param_1 + _DAT_1127408f8,0);
  _objc_storeStrong(param_1 + _DAT_1127408f4,0);
  _objc_storeStrong(param_1 + _DAT_112740900,0);
  _objc_storeStrong(param_1 + _DAT_112740940,0);
  _objc_storeStrong(param_1 + _DAT_1127408f0,0);
  _objc_storeStrong(param_1 + _DAT_1127408e0,0);
  _objc_storeStrong(param_1 + _DAT_1127408e8,0);
  _objc_storeStrong(param_1 + _DAT_1127408e4,0);
  _objc_storeStrong(param_1 + _DAT_1127408dc,0);
  _objc_destroyWeak(param_1 + _DAT_1127408d8);
  _objc_destroyWeak(param_1 + _DAT_1127408d4);
  _objc_storeStrong(param_1 + _DAT_1127408d0,0);
  _objc_destroyWeak(param_1 + _DAT_1127408cc);
  _objc_storeStrong(param_1 + _DAT_112740958,0);
  _objc_storeStrong(param_1 + _DAT_112740938,0);
  _objc_destroyWeak(param_1 + _DAT_112740910);
  _objc_storeStrong(param_1 + _DAT_112740954,0);
  _objc_storeStrong(param_1 + _DAT_112740920,0);
  _objc_storeStrong(param_1 + _DAT_11274092c,0);
  _objc_storeStrong(param_1 + _DAT_112740918,0);
  _objc_storeStrong(param_1 + _DAT_112740928,0);
  _objc_storeStrong(param_1 + _DAT_112740924,0);
  _objc_storeStrong(param_1 + _DAT_112740950,0);
  _objc_storeStrong(param_1 + _DAT_1127408c8,0);
  _objc_storeStrong(param_1 + _DAT_1127408c4,0);
  _objc_destroyWeak(param_1 + _DAT_112740944);
  _objc_destroyWeak(param_1 + _DAT_1127408c0);
  _objc_storeStrong(param_1 + _DAT_1127408bc,0);
  _objc_destroyWeak(param_1 + _DAT_1127408b8);
  _objc_storeStrong(param_1 + _DAT_1127408b4,0);
  _objc_storeStrong(param_1 + _DAT_1127408b0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127408ac,0);
  return;
}



/* Entry: 1061631b8; end: 106163497; -[SCFeatureDirectorModeVerticalToolbar initWithModeManager:cameraUIServices:valdiRuntimeProvider:cameraConfiguration:cameraUserActionLogger:featureUpdateEventObservable:musicExperiments:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1061631b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_78 = PTR_PTR_1126efe78;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar6 = (long)_DAT_112740960;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112740964,param_4);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112740968,param_5);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11274096c,param_6);
    lVar6 = (long)_DAT_112740970;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_106163498;
    puStack_90 = &UNK_1108429c8;
    _objc_retain(param_9);
    uStack_88 = param_9;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112740974);
    *(undefined **)((long)puVar1 + (long)_DAT_112740974) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112740978);
    *(undefined **)((long)puVar1 + (long)_DAT_112740978) = puVar3;
    _objc_release(uVar2);
    puVar4 = auStack_b0;
    _objc_initWeak(puVar4,puVar1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_8;
    func_0x00010c0e0ea0(param_8);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_b8,auStack_b0);
    uVar5 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_b0);
    _objc_release(uStack_88);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106163498; end: 106163547;  */

void FUN_106163498(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_alloc(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010befb820();
  func_0x00010bff91e0(puVar1,param_2,uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106163548; end: 10616357f; -[SCFeatureDirectorModeVerticalToolbar configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106163548(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274097c);
  *(undefined8 *)(param_1 + _DAT_11274097c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106163580; end: 106163583; -[SCFeatureDirectorModeVerticalToolbar activate] */

void FUN_106163580(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb0a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupToolbar_112589c38);
  return;
}



/* Entry: 106163584; end: 1061635b3; -[SCFeatureDirectorModeVerticalToolbar toolbarView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106163584(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740980);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061635b4; end: 1061635b7; -[SCFeatureDirectorModeVerticalToolbar resetMetrics] */

void FUN_1061635b4(void)

{
  return;
}



/* Entry: 1061635b8; end: 1061635bf; -[SCFeatureDirectorModeVerticalToolbar usageMetrics] */

undefined8 FUN_1061635b8(void)

{
  return 0;
}



/* Entry: 1061635c0; end: 106163637; -[SCFeatureDirectorModeVerticalToolbar prepareForTransitionIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061635c0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740984;
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar2));
  func_0x00010c181140(0x4046000000000000,*(undefined8 *)(param_1 + _DAT_112740988));
  func_0x00010c08cdc0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274097c);
  func_0x00010bfe12e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106163638; end: 106163677; -[SCFeatureDirectorModeVerticalToolbar beginTransitionIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106163638(long param_1)

{
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_112740984));
                    /* WARNING: Could not recover jumptable at 0x00010c181150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0xc020000000000000,*(undefined8 *)(param_1 + _DAT_112740988),
             PTR_s_setConstant__11263de70);
  return;
}



/* Entry: 106163678; end: 10616367b; -[SCFeatureDirectorModeVerticalToolbar prepareForTransitionOut] */

void FUN_106163678(void)

{
  return;
}


