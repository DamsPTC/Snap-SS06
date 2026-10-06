/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1007f1f98; end: 1007f210b; -[SCLegacyCameraResourcesProviderImpl provideWithToken:] */

void FUN_1007f1f98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar5 = PTR_PTR_1126c82c0;
  func_0x000107c61174(param_3);
  func_0x000107c610f4();
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  lVar6 = param_1 + 0x18;
  func_0x000107c61148();
  lVar7 = param_1 + 0x20;
  func_0x000107c61148();
  lVar8 = param_1 + 0x28;
  func_0x000107c61148();
  uVar14 = *(undefined8 *)(param_1 + 0x30);
  lVar9 = param_1 + 0x38;
  func_0x000107c61148();
  uVar15 = *(undefined8 *)(param_1 + 0x40);
  lVar10 = param_1 + 0x48;
  func_0x000107c61148();
  lVar11 = param_1 + 0x50;
  func_0x000107c61148();
  uVar17 = *(undefined8 *)(param_1 + 0x60);
  uVar16 = *(undefined8 *)(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  lVar12 = param_1 + 0x78;
  func_0x000107c61148();
  lVar13 = param_1 + 0x80;
  func_0x000107c61148();
  func_0x000107c45cb0(puVar5,param_2,uVar1,uVar3,lVar6,lVar7,lVar8,uVar14,lVar9,uVar15,param_3,
                      lVar10,lVar11,uVar16,uVar17,uVar2,uVar4,lVar12,lVar13,
                      *(undefined8 *)(param_1 + 0x88));
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1007f210c; end: 1007f240b; -[SCLegacyCameraResourcesImpl initWithCameraViewType:context:cameraConfigurationServices:cameraSnapCreationLogger:cameraCrashLogger:conversationMetadataProvider:legacyCameraTooltipsService:permissionService:token:userSession:userSessionContext:userStatus:metricCoordinator:animationTransitionCoordinator:gestureCoordinator:mainCameraViewControllerLifecycleBehaviorSubject:viewControllerLifecycleBehaviorSubject:deviceMotionManager:] */

undefined8 *
FUN_1007f210c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174();
  puStack_70 = PTR_PTR_1126efcc0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0xc] = param_3;
    puVar1[0xd] = param_4;
    func_0x000107c611a0(puVar1 + 9,param_5);
    func_0x000107c611a0(puVar1 + 10,param_6);
    func_0x000107c611a0(puVar1 + 0xb,param_7);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[3];
    puVar1[3] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0xe,param_9);
    func_0x000107c61174(param_15);
    uVar2 = puVar1[6];
    puVar1[6] = param_15;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[4];
    puVar1[4] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x10,param_12);
    func_0x000107c611a0(puVar1 + 0x11,param_13);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[5];
    puVar1[5] = param_14;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_17);
    uVar2 = puVar1[8];
    puVar1[8] = param_17;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_16);
    uVar2 = puVar1[7];
    puVar1[7] = param_16;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x12,param_20);
    func_0x000107c61174(param_18);
    uVar2 = puVar1[1];
    puVar1[1] = param_18;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_19);
    uVar2 = puVar1[2];
    puVar1[2] = param_19;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  return puVar1;
}



/* Entry: 1007f240c; end: 1007f242f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f240c(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_112743238);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1007f2430; end: 1007f243f; -[_TtC39ConditionalCameraServicesImplementation38MainCameraFeatureServiceImplementation cameraFeatureScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f2430(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ef4328));
  return;
}



/* Entry: 1007f2440; end: 1007f244f; -[_TtC22SCViewfinderUIServices38SCMainCameraScopedViewfinderUIServices viewfinderUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f2440(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113076590));
  return;
}



/* Entry: 1007f2450; end: 1007f245f; -[_TtC22SCViewfinderUIServices22SCViewfinderUIServices touchController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f2450(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113076610));
  return;
}



/* Entry: 1007f2460; end: 1007f2483;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f2460(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_112743260);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1007f2484; end: 1007f2493; -[_TtC26SCCameraViewfinderServices26SCCameraViewfinderServices renderTarget] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f2484(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113076478));
  return;
}



/* Entry: 1007f2494; end: 1007f24a3; -[_TtC24SCAppTerminationServices24SCAppTerminationServices appTerminationProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f2494(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113053938));
  return;
}



/* Entry: 1007f24a4; end: 1007f24ab; -[SCMainCameraScopedCameraNightModeServices nightModeServices] */

undefined8 FUN_1007f24a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1007f24ac; end: 1007f24bb; -[_TtC28CameraModeActivationServices44MainCameraScopedCameraModeActivationServices cameraModeActivationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f24ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fe9ee0));
  return;
}



/* Entry: 1007f24bc; end: 1007f24db; -[CallUILaunchingServices modularCallLauncher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f24bc(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_11307b960));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1007f24dc; end: 1007f2ce3; -[SCCameraViewController finishInitializationWithCameraResources:snapRecoveryServices:composerServices:publicCameraFeatureCatalog:cameraHardwareServices:touchController:cameraRequestHandlerServices:cameraDeviceSettingsResolver:renderTarget:renderAgent:cameraStabilityServices:appTerminationProvider:captureServiceScopeExposer:cameraBIPAScopeExposer:cameraBIPAScopeServices:featureSettingsService:legacyLensLogger:userTrackedLogger:cameraUIScope:nightModeServices:lensCarouselStudySettings:arBarAdapter:locationPermissionsManager:systemConfiguration:photoPermissionServices:customVolumeServices:secretFeatureCheckingServices:lensCarouselManager:permissionRequestService:lensPlusTierService:notificationPermissionRequester:appStartExperimentReader:cameraModeActivationController:snapEditorTweakServices:modularCallLauncher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f24dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  long param_37)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_20);
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_23);
  func_0x000107c61174(param_24);
  func_0x000107c61174(param_25);
  func_0x000107c61174(param_26);
  func_0x000107c61174(param_27);
  func_0x000107c61174(param_28);
  func_0x000107c61174(param_29);
  func_0x000107c61174(param_30);
  func_0x000107c61174(param_31);
  func_0x000107c61174(param_32);
  func_0x000107c61174(param_33);
  func_0x000107c61174(param_34);
  func_0x000107c61174(param_35);
  func_0x000107c61174(param_36);
  func_0x000107c61174(param_37);
  lVar6 = (long)_DAT_1127624e0;
  func_0x000107c61174(param_14);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = param_14;
  func_0x000107c61170(uVar2);
  lVar6 = (long)_DAT_1127624e4;
  func_0x000107c61174(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = param_3;
  func_0x000107c61170(uVar2);
  lVar6 = (long)_DAT_1127624e8;
  func_0x000107c61174(param_4);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = param_4;
  func_0x000107c61170(uVar2);
  lVar6 = (long)_DAT_1127624ec;
  func_0x000107c61174(param_5);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = param_5;
  func_0x000107c61170(uVar2);
  lVar6 = (long)_DAT_1127624f0;
  func_0x000107c61174(param_6);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = param_6;
  func_0x000107c61170(uVar2);
  lVar6 = (long)_DAT_1127624f4;
  func_0x000107c61174(param_7);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = param_7;
  func_0x000107c61170(uVar2);
  lVar7 = (long)_DAT_1127624f8;
  func_0x000107c61174(param_9);
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = param_9;
  func_0x000107c61170(uVar2);
  lVar7 = (long)_DAT_1127624fc;
  func_0x000107c61174(param_10);
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = param_10;
  func_0x000107c61170(uVar2);
  func_0x000107c611a0(param_1 + _DAT_112762500,param_11);
  func_0x000107c611a0(param_1 + _DAT_112762504,param_12);
  lVar7 = (long)_DAT_112762508;
  func_0x000107c61174(param_13);
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = param_13;
  func_0x000107c61170(uVar2);
  func_0x000107c611a0(param_1 + _DAT_11276250c,param_15);
  func_0x000107c611a0(param_1 + _DAT_112762510,param_16);
  func_0x000107c611a0(param_1 + _DAT_112762514,param_17);
  lVar7 = (long)_DAT_112762518;
  func_0x000107c61174(param_18);
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = param_18;
  func_0x000107c61170(uVar2);
  lVar7 = (long)_DAT_11276251c;
  func_0x000107c61174(param_19);
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = param_19;
  func_0x000107c61170(uVar2);
  lVar7 = (long)_DAT_112762520;
  func_0x000107c61174(param_20);
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = param_20;
  func_0x000107c61170(uVar2);
  func_0x000107c611a0(param_1 + _DAT_112762524,param_21);
  func_0x000107c611a0(param_1 + _DAT_112762528,param_22);
  func_0x000107c611a0(param_1 + _DAT_11276252c,param_23);
  func_0x000107c611a0(param_1 + _DAT_112762530,param_24);
  func_0x000107c611a0(param_1 + _DAT_112762534,param_25);
  func_0x000107c611a0(param_1 + _DAT_112762538,param_26);
  func_0x000107c611a0(param_1 + _DAT_11276253c,param_27);
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x000107c3e47c();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar2 = uVar4;
  func_0x000107c4a6e8();
  *(char *)(param_1 + _DAT_112762540) = (char)uVar2;
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c611a0(param_1 + _DAT_112762544,param_28);
  func_0x000107c611a0(param_1 + _DAT_112762548,param_29);
  func_0x000107c611a0(param_1 + _DAT_11276254c,param_8);
  lVar6 = (long)_DAT_112762550;
  func_0x000107c61174(param_30);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = param_30;
  func_0x000107c61170(uVar2);
  func_0x000107c611a0(param_1 + _DAT_112762554,param_31);
  lVar6 = (long)_DAT_112762558;
  func_0x000107c61174(param_32);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = param_32;
  func_0x000107c61170(uVar2);
  lVar6 = (long)_DAT_11276255c;
  func_0x000107c61174(param_33);
  bVar1 = (byte)*(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = param_33;
  func_0x000107c61170();
  FUN_100456ca0();
  *(byte *)(param_1 + _DAT_112762560) = bVar1;
  *(byte *)(param_1 + _DAT_112762564) = bVar1 ^ 1;
  lVar6 = (long)_DAT_1127624dc;
  func_0x000107c61174(param_34);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = param_34;
  func_0x000107c61170(uVar2);
  func_0x000107c611a0(param_1 + _DAT_112762568);
  lVar7 = (long)_DAT_11276256c;
  func_0x000107c61174(param_36);
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = param_36;
  func_0x000107c61170(uVar2);
  puVar5 = PTR_PTR_1126ae810;
  func_0x000107c61160();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112762570);
  *(undefined **)(param_1 + _DAT_112762570) = puVar5;
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_34);
  uVar2 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = param_34;
  func_0x000107c61170(uVar2);
  if (param_37 != 0) {
    puVar5 = PTR_PTR_1126d3fe8;
    func_0x000107c610f4();
    lVar6 = param_1;
    func_0x000107c3f1ac(param_1);
    func_0x000107c61180();
    lVar7 = lVar6;
    func_0x000107c5de90();
    func_0x000107c61180();
    func_0x000107c47848();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112762574);
    *(undefined **)(param_1 + _DAT_112762574) = puVar5;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar6);
  }
  func_0x000107c4e594(*(undefined8 *)(param_1 + _DAT_1127624cc));
  func_0x000107c61144(auStack_70,param_1);
  func_0x000107c6111c(auStack_78,auStack_70);
  func_0x000107c4db94(param_8);
  func_0x000107c3c9ac(param_1);
  func_0x000107c3c648(param_1);
  func_0x000107c3c650(param_1);
  func_0x000107c61120(auStack_78);
  func_0x000107c61120(auStack_70);
  func_0x000107c61170(param_37);
  func_0x000107c61170(param_36);
  func_0x000107c61170(param_35);
  func_0x000107c61170(param_34);
  func_0x000107c61170(param_33);
  func_0x000107c61170(param_32);
  func_0x000107c61170(param_31);
  func_0x000107c61170(param_30);
  func_0x000107c61170(param_29);
  func_0x000107c61170(param_28);
  func_0x000107c61170(param_27);
  func_0x000107c61170(param_26);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1007f2ce4; end: 1007f2cff; -[SCCaptureDeviceAuthorizationCheckerImpl isVideoCaptureNotDetermined] */

bool FUN_1007f2ce4(long param_1)

{
  func_0x000107c3e494();
  return param_1 == 0;
}



/* Entry: 1007f2d00; end: 1007f2d0f; -[SCCameraViewController cameraResources] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1007f2d00(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127624e4);
}



/* Entry: 1007f2d10; end: 1007f2d13; -[SCLegacyCameraResourcesImpl viewControllerLifecycleObservable] */

void FUN_1007f2d10(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29c290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_viewControllerLifecycleBehaviorS_112684ac8);
  return;
}



/* Entry: 1007f2d14; end: 1007f2d3b; -[SCLegacyCameraResourcesImpl viewControllerLifecycleBehaviorSubject] */

void FUN_1007f2d14(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1007f2d3c; end: 1007f2d9b; -[SCModularCallOnCameraHandler initWithModularCallLauncher:viewControllerLifecycleEvents:modularCallOnCameraDelegate:] */

void FUN_1007f2d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  FUN_1007f2d9c(param_3,param_4,param_5);
  return;
}



/* Entry: 1007f2d9c; end: 1007f2efb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1007f2d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  
  puVar5 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  lVar2 = _DAT_112fe9df8;
  func_0x000107c61614(unaff_x20 + _DAT_112fe9df8,0);
  lVar1 = _DAT_112fe9e00;
  puVar4 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar3 = _DAT_112fe9e08;
  func_0x000107c61614(unaff_x20 + _DAT_112fe9e08,0);
  lVar1 = _DAT_112fe9de8;
  puVar4 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  *(undefined1 *)(unaff_x20 + _DAT_112fe9df0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fe9e10) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fe9e18) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fe9e20) = 0;
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112fe9e28) = param_2;
  func_0x000107c61604(unaff_x20 + lVar3,param_3);
  puVar4 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_2);
  func_0x000107c61154(&stack0xffffffffffffffa0,puVar4);
  func_0x000107c61180();
  FUN_1007f2efc();
  func_0x000107c61170(puVar5);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  return puVar5;
}



/* Entry: 1007f2efc; end: 1007f316b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f2efc(void)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar6 = &puStack_90;
  ppuVar8 = &puStack_90;
  ppuVar10 = &puStack_90;
  lVar2 = unaff_x20 + _DAT_112fe9df8;
  func_0x000107c61618();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 != 0) {
    uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112fe9e28);
    pcStack_70 = FUN_100856030;
    puStack_68 = (undefined *)0x0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = (code *)0x10085602c;
    puStack_78 = &UNK_1106cfc28;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c4c280(uVar12);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    uVar4 = uVar12;
    func_0x000107c421ac(uVar12);
    func_0x000107c61180();
    func_0x000107c61170(uVar12);
    lVar5 = lVar2;
    func_0x000107c4b60c(lVar2);
    func_0x000107c61180();
    pcStack_70 = FUN_1007f3420;
    puStack_68 = (undefined *)0x0;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_1007f3394;
    puStack_78 = &UNK_1106cfc50;
    func_0x000107c60bc4(&puStack_90);
    lVar7 = lVar5;
    func_0x000107c4c280(lVar5);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar5);
    pcStack_70 = (code *)0x100856158;
    puStack_68 = (undefined *)0x0;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_1008560ac;
    puStack_78 = &UNK_1106cfc78;
    func_0x000107c60bc4(&puStack_90);
    uVar12 = uVar4;
    func_0x000107c3fe00(uVar4);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar8);
    puVar9 = &UNK_1106cfcb0;
    func_0x000107c613fc(&UNK_1106cfcb0,0x18,7);
    func_0x000107c61614(puVar9 + 0x10);
    pcStack_70 = FUN_100856238;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = (code *)0x1008561f0;
    puStack_78 = &UNK_1106cfcc8;
    puStack_68 = puVar9;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    uVar11 = uVar12;
    func_0x000107c5c320(uVar12);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c61170(uVar12);
    func_0x000107c3e924(uVar11);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(uVar11);
  }
  return;
}



/* Entry: 1007f316c; end: 1007f318f;  */

void FUN_1007f316c(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007f3190; end: 1007f31a3;  */

void FUN_1007f3190(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1007f31a4; end: 1007f3263; -[_TtC19CallUILaunchingImpl19ModularCallLauncher lifecycleObservable] */

void FUN_1007f31a4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x40);
  func_0x000107c6157c();
  func_0x000107c6157c(uVar4);
  uVar2 = 0x1007f32d8;
  FUN_1000bfde0(0x1007f32d8,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar4);
  puVar1 = PTR___sSbSQsWP_11034dd50;
  FUN_1000c2068(PTR___sSbSQsWP_11034dd50);
  func_0x000107c61574(uVar2);
  uVar2 = 0;
  FUN_1007f3264(0);
  pcVar3 = FUN_1007f32f0;
  FUN_1000bfde0(FUN_1007f32f0,0,uVar2);
  func_0x000107c61574(puVar1);
  FUN_1004575f0();
  func_0x000107c61574(param_1);
  func_0x000107c61574(pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1007f3264; end: 1007f3283;  */

void FUN_1007f3264(void)

{
  func_0x000107c61168(&PTR_PTR_1129b9790);
  return;
}



/* Entry: 1007f3284; end: 1007f32ef;  */

void FUN_1007f3284(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1007f32f0; end: 1007f3333;  */

void FUN_1007f32f0(ulong *param_1,byte *param_2)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *param_2;
  FUN_1007f3264(0);
  uVar2 = (ulong)((bVar1 ^ 0xffffffff) & 1);
  FUN_1007f3334();
  *param_1 = uVar2;
  return;
}



/* Entry: 1007f3334; end: 1007f3393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f3334(char param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long alStack_40 [2];
  long alStack_30 [2];
  
  lVar2 = unaff_x20;
  func_0x000107c610f8();
  plVar1 = alStack_30;
  if (param_1 != '\x01') {
    plVar1 = alStack_40;
  }
  *(bool *)(lVar2 + _DAT_11307ba38) = param_1 == '\x01';
  *plVar1 = lVar2;
  plVar1[1] = unaff_x20;
  func_0x000107c61154(plVar1,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1007f3394; end: 1007f339b;  */

void FUN_1007f3394(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  FUN_1006732c8(auStack_50,uStack_38);
  func_0x000107c605b0();
  FUN_100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007f339c; end: 1007f341f;  */

void FUN_1007f339c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  FUN_1006732c8(auStack_50,uStack_38);
  func_0x000107c605b0();
  FUN_100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1007f3420; end: 1007f344f;  */

void FUN_1007f3420(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x000107c614f0();
  param_1[3] = uVar1;
  *param_1 = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 1007f3450; end: 1007f34fb; -[SCMainCameraViewControllerStartupWorkflow performInitialization:] */

void FUN_1007f3450(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_performInitialization__11261bc70;
  puVar2 = &uStack_40;
  puStack_38 = PTR_PTR_1126f8340;
  uStack_40 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  FUN_100805bf8();
  func_0x000107c61180();
  uVar3 = param_3;
  func_0x000107c5179c(param_3);
  func_0x000107c61180();
  func_0x000107c59e18();
  func_0x000107c61170(uVar3);
  func_0x000107c3c644(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1007f34fc; end: 1007f3b67; -[SCCameraViewControllerStartupWorkflow performInitialization:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f34fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61174(param_3);
  func_0x000107c53dec(param_3);
  uVar2 = param_3;
  func_0x000107c3de90();
  func_0x000107c61180();
  uVar24 = *(undefined8 *)(param_1 + _DAT_1127626cc);
  *(undefined8 *)(param_1 + _DAT_1127626cc) = uVar2;
  func_0x000107c61170(uVar24);
  uVar2 = param_3;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  uVar24 = param_3;
  func_0x000107c3f1ac();
  func_0x000107c61180();
  func_0x000107c57154(0x3ff0000000000000,uVar2);
  uVar25 = 0xbff0000000000000;
  func_0x000107c55a98(0xbff0000000000000,uVar2);
  uVar3 = param_3;
  func_0x000107c3f284(param_3);
  func_0x000107c61180();
  func_0x000107c519ac();
  func_0x000107c58c90(uVar2);
  func_0x000107c61170(uVar3);
  uVar3 = uVar24;
  func_0x000107c3f084();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c4008c();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  puVar5 = PTR_PTR_1126c85a8;
  func_0x000107c610f4();
  uVar3 = uVar4;
  func_0x000107c4fab8();
  func_0x000107c61180();
  uVar6 = uVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar7 = uVar4;
  func_0x000107c5b038();
  func_0x000107c61180();
  func_0x000107c3f300();
  uVar8 = param_3;
  func_0x000107c5dac4();
  func_0x000107c61180();
  uVar9 = uVar24;
  func_0x000107c3f084();
  func_0x000107c61180();
  lVar10 = param_1;
  func_0x000107c3f260();
  func_0x000107c61180();
  uVar11 = uVar4;
  func_0x000107c4cf78();
  func_0x000107c61180();
  uVar12 = uVar11;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c5ae04();
  uVar13 = uVar4;
  func_0x000107c4cf78();
  func_0x000107c61180();
  uVar14 = uVar13;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c3f06c();
  uVar15 = uVar24;
  func_0x000107c3f084();
  func_0x000107c61180();
  uVar16 = uVar15;
  func_0x000107c4008c();
  func_0x000107c61180();
  uVar17 = param_3;
  func_0x000107c5b2a4();
  func_0x000107c61180();
  uVar18 = param_3;
  func_0x000107c3f07c();
  func_0x000107c61180();
  uVar19 = uVar18;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar20 = uVar19;
  func_0x000107c3fa04();
  func_0x000107c61180();
  uVar21 = param_3;
  func_0x000107c3f07c();
  func_0x000107c61180();
  uVar22 = uVar21;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c464b0(uVar25);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  uVar3 = uVar24;
  func_0x000107c4ad08(uVar24);
  func_0x000107c61180();
  uVar6 = uVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c5abd0();
  func_0x000107c59150(puVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c53054(uVar2);
  uVar3 = uVar2;
  func_0x000107c3f16c(uVar2);
  func_0x000107c61180();
  func_0x000107c520f4();
  func_0x000107c61170(uVar3);
  uVar3 = param_3;
  func_0x000107c4b064(param_3);
  func_0x000107c61180();
  uVar6 = uVar2;
  func_0x000107c49654(uVar2);
  func_0x000107c61180();
  func_0x000107c5a1e4(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c553d4(uVar2);
  func_0x000107c61144(auStack_80,uVar24);
  uVar8 = param_3;
  func_0x000107c5bf58();
  func_0x000107c61180();
  puVar23 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc(puVar23);
  func_0x000107c61180();
  func_0x000107c58d20(uVar2);
  func_0x000107c61170(puVar23);
  uVar3 = param_3;
  func_0x000107c3f0f8();
  func_0x000107c61180();
  uVar1 = (undefined1)*(undefined8 *)(param_1 + _DAT_1127626d0);
  *(undefined8 *)(param_1 + _DAT_1127626d0) = uVar3;
  func_0x000107c61170();
  FUN_100456ca0();
  *(undefined1 *)(param_1 + _DAT_1127626d4) = uVar1;
  uVar9 = param_3;
  func_0x000107c3f1ac();
  func_0x000107c61180();
  uVar11 = uVar9;
  func_0x000107c3f084();
  func_0x000107c61180();
  uVar12 = uVar11;
  func_0x000107c4008c();
  func_0x000107c61180();
  uVar3 = uVar12;
  func_0x000107c5b038();
  func_0x000107c61180();
  uVar6 = uVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x000107c509bc();
  *(char *)(param_1 + _DAT_1127626d8) = (char)uVar7;
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar9);
  puVar23 = PTR_PTR_1126b9c88;
  func_0x000107c5c978();
  *(char *)(param_1 + _DAT_1127626dc) = (char)puVar23;
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(uVar8);
  func_0x000107c61120(auStack_80);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1007f3b68; end: 1007f3b77; -[SCCameraViewController appTerminationProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1007f3b68(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127624e0);
}



/* Entry: 1007f3b78; end: 1007f3b87; -[SCCameraViewController state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1007f3b78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127624bc);
}



/* Entry: 1007f3b88; end: 1007f3b8f; -[SCCameraViewControllerInternalState setOverlayItemsAlpha:] */

void FUN_1007f3b88(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x58) = param_1;
  return;
}



/* Entry: 1007f3b90; end: 1007f3b97; -[SCCameraViewControllerInternalState setLastSuccessfulLensActivationTime:] */

void FUN_1007f3b90(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x68) = param_1;
  return;
}



/* Entry: 1007f3b98; end: 1007f3bb7; -[SCCameraViewController cameraUIScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f3b98(long param_1)

{
  func_0x000107c61148(param_1 + _DAT_112762524);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1007f3bb8; end: 1007f3bbf; -[SCCameraViewControllerInternalState setScopedCameraType:] */

void FUN_1007f3bb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 1007f3bc0; end: 1007f3bd7; -[SCLegacyCameraResourcesImpl cameraConfigurationServices] */

void FUN_1007f3bc0(long param_1)

{
  func_0x000107c61148(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1007f3bd8; end: 1007f3bdf; -[SCCameraConfigurationImpl recordingDuration] */

undefined8 FUN_1007f3bd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1007f3be0; end: 1007f3c0f;  */

void FUN_1007f3be0(void)

{
  func_0x000107c610f4(PTR_PTR_1126b9b80);
  func_0x000107c45db0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1007f3c10; end: 1007f3c83; -[SCCameraRecordingDurationConfigurationImpl initWithCircumstanceEngine:] */

undefined1 * FUN_1007f3c10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e8950;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1007f3c84; end: 1007f3c8b; -[SCLegacyCameraResourcesImpl cameraViewType] */

undefined8 FUN_1007f3c84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1007f3c8c; end: 1007f3c9b; -[SCCameraViewController userTrackedLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1007f3c8c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762520);
}



/* Entry: 1007f3c9c; end: 1007f3cd7; -[SCMainCameraViewControllerStartupWorkflow cameraTimerStyleProvider:] */

void FUN_1007f3c9c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f8340;
  uStack_20 = param_1;
  func_0x000107c61154(&uStack_20,PTR_s_cameraTimerStyleProvider__1125a8678);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1007f3cd8; end: 1007f3cf3; -[SCCameraViewControllerStartupWorkflow cameraTimerStyleProvider:] */

void FUN_1007f3cd8(void)

{
  func_0x000107c61160(PTR_PTR_1126d4098);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1007f3cf4; end: 1007f3d4b; -[SCCameraMiniCarouselConfigurationImpl shouldUseLargeCoolRecordingCaptureButton] */

bool FUN_1007f3cf4(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = param_1;
  func_0x000107c426e0();
  if ((int)lVar2 == 0) {
    bVar1 = false;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c5c734(uVar3);
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c3f57c();
    bVar1 = (int)uVar4 == 2;
    func_0x000107c61170(uVar3);
  }
  return bVar1;
}



/* Entry: 1007f3d4c; end: 1007f3d57;  */

bool FUN_1007f3d4c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1007f3d58; end: 1007f3dc7; -[SCCameraMiniCarouselConfigurationImpl cameraCaptureButtonTapTargetScale] */

double FUN_1007f3d58(float param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c436dc(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bfe78);
  if (param_1 == 0.0) {
    func_0x000107c3f580(uVar1);
  }
  else {
    func_0x000107c436dc(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bfe78);
  }
  func_0x000107c61170(uVar1);
  return (double)param_1;
}



/* Entry: 1007f3dc8; end: 1007f3dd7; -[SCCameraViewController snapEditorTweakServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1007f3dc8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276256c);
}



/* Entry: 1007f3dd8; end: 1007f3de7; -[SCCameraViewController cameraCircumstanceEngine] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1007f3dd8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762578);
}



/* Entry: 1007f3de8; end: 1007f575f; -[SCCameraOverlayView initWithDelegate:cameraRecordingDurationConfig:simpleFeatureGatingConfig:cameraViewType:userTrackedLogger:timerStyleProvider:miniCarouselShouldUseLargeCoolRecordingCaptureButton:cameraTimerTapTargetScale:appStartExperimentReader:cameraConfig:snapEditorTweakServices:cameraViewfinderConfiguration:circumstanceEngine:cameraCircumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1007f3de8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined **param_6,undefined8 param_7,undefined8 param_8,
             undefined **param_9,undefined1 param_10,undefined4 param_11,undefined **param_12,
             undefined **param_13,undefined8 param_14,undefined **param_15,undefined **param_16,
             undefined8 param_17)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  undefined **ppuVar28;
  long lVar29;
  undefined **ppuVar30;
  undefined **ppuVar31;
  float fVar32;
  double dVar33;
  undefined8 uVar34;
  float fVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uStack_318;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined1 auStack_230 [8];
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined1 auStack_208 [8];
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined1 auStack_1e0 [8];
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [8];
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [8];
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c61180();
  func_0x000107c51724();
  puStack_150 = PTR_PTR_1126f83c8;
  puVar3 = &uStack_158;
  uStack_158 = param_2;
  func_0x000107c61154(puVar3,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61170(puVar2);
  ppuVar25 = param_6;
  ppuVar26 = param_9;
  ppuVar27 = param_12;
  ppuVar28 = param_13;
  ppuVar30 = param_15;
  ppuVar31 = param_16;
  if (puVar3 == (undefined8 *)0x0) goto LAB_1007f564c;
  func_0x000107c534b0(puVar3);
  puVar2 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  func_0x000107c61160();
  lVar20 = (long)_DAT_1127627e0;
  uVar17 = *(undefined8 *)((long)puVar3 + lVar20);
  *(undefined **)((long)puVar3 + lVar20) = puVar2;
  func_0x000107c61170(uVar17);
  func_0x000107c5521c(*(undefined8 *)((long)puVar3 + lVar20));
  func_0x000107c3d72c(puVar3);
  puVar2 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
  func_0x000107c61160();
  lVar21 = (long)_DAT_1127627e4;
  uVar17 = *(undefined8 *)((long)puVar3 + lVar21);
  *(undefined **)((long)puVar3 + lVar21) = puVar2;
  func_0x000107c61170(uVar17);
  func_0x000107c5521c(*(undefined8 *)((long)puVar3 + lVar21));
  lVar22 = (long)_DAT_1127627e8;
  func_0x000107c61174(param_6);
  uVar17 = *(undefined8 *)((long)puVar3 + lVar22);
  *(undefined ***)((long)puVar3 + lVar22) = param_6;
  func_0x000107c61170(uVar17);
  *(undefined8 *)((long)puVar3 + (long)_DAT_1127627ec) = param_7;
  lVar22 = (long)_DAT_1127627f0;
  func_0x000107c61174(param_9);
  uVar17 = *(undefined8 *)((long)puVar3 + lVar22);
  *(undefined ***)((long)puVar3 + lVar22) = param_9;
  func_0x000107c61170(uVar17);
  *(undefined1 *)((long)puVar3 + (long)_DAT_1127627f4) = param_10;
  *(undefined8 *)((long)puVar3 + (long)_DAT_1127627f8) = param_1;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c61160();
  uVar17 = *(undefined8 *)((long)puVar3 + (long)_DAT_1127627fc);
  *(undefined **)((long)puVar3 + (long)_DAT_1127627fc) = puVar2;
  func_0x000107c61170(uVar17);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c61160();
  uVar17 = *(undefined8 *)((long)puVar3 + (long)_DAT_112762800);
  *(undefined **)((long)puVar3 + (long)_DAT_112762800) = puVar2;
  func_0x000107c61170(uVar17);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c61160();
  uVar17 = *(undefined8 *)((long)puVar3 + (long)_DAT_112762804);
  *(undefined **)((long)puVar3 + (long)_DAT_112762804) = puVar2;
  func_0x000107c61170(uVar17);
  puVar13 = puVar3;
  func_0x000107c55528();
  uVar1 = SUB81(puVar13,0);
  FUN_100456ca0();
  lVar22 = (long)_DAT_112762808;
  *(undefined1 *)((long)puVar3 + lVar22) = uVar1;
  lVar23 = (long)_DAT_11276280c;
  func_0x000107c61174(param_12);
  uVar17 = *(undefined8 *)((long)puVar3 + lVar23);
  *(undefined ***)((long)puVar3 + lVar23) = param_12;
  func_0x000107c61170(uVar17);
  lVar24 = (long)_DAT_112762810;
  func_0x000107c61174(param_14);
  uVar17 = *(undefined8 *)((long)puVar3 + lVar24);
  *(undefined8 *)((long)puVar3 + lVar24) = param_14;
  func_0x000107c61170(uVar17);
  lVar24 = (long)_DAT_112762814;
  func_0x000107c61174(param_13);
  uVar17 = *(undefined8 *)((long)puVar3 + lVar24);
  *(undefined ***)((long)puVar3 + lVar24) = param_13;
  func_0x000107c61170(uVar17);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610fc();
  lVar29 = (long)_DAT_112762818;
  uVar17 = *(undefined8 *)((long)puVar3 + lVar29);
  *(undefined **)((long)puVar3 + lVar29) = puVar2;
  func_0x000107c61170(uVar17);
  func_0x000107c520f4(*(undefined8 *)((long)puVar3 + lVar29));
  func_0x000107c5a050(*(undefined8 *)((long)puVar3 + lVar29));
  lVar24 = (long)_DAT_11276281c;
  func_0x000107c61174(param_15);
  uVar17 = *(undefined8 *)((long)puVar3 + lVar24);
  *(undefined ***)((long)puVar3 + lVar24) = param_15;
  func_0x000107c61170(uVar17);
  lVar24 = (long)_DAT_112762820;
  func_0x000107c61174(param_16);
  uVar17 = *(undefined8 *)((long)puVar3 + lVar24);
  *(undefined ***)((long)puVar3 + lVar24) = param_16;
  func_0x000107c61170(uVar17);
  lVar24 = (long)_DAT_112762824;
  func_0x000107c61174(param_17);
  uVar17 = *(undefined8 *)((long)puVar3 + lVar24);
  *(undefined8 *)((long)puVar3 + lVar24) = param_17;
  func_0x000107c61170(uVar17);
  puVar13 = puVar3;
  func_0x000107c4b1a0(puVar3);
  func_0x000107c61180();
  func_0x000107c3ad24(puVar3);
  func_0x000107c61170(puVar13);
  uVar4 = *(undefined8 *)((long)puVar3 + lVar29);
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)((long)puVar3 + lVar20);
  func_0x000107c44d9c(uVar5);
  func_0x000107c61180();
  uVar17 = uVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  uStack_a0 = uVar17;
  uVar6 = *(undefined8 *)((long)puVar3 + lVar29);
  func_0x000107c5e308();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)((long)puVar3 + lVar20);
  func_0x000107c5e308(uVar7);
  func_0x000107c61180();
  uVar19 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar19;
  func_0x000107c3e17c();
  func_0x000107c61180();
  uVar18 = *(undefined8 *)((long)puVar3 + (long)_DAT_112762828);
  *(undefined **)((long)puVar3 + (long)_DAT_112762828) = puVar2;
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c3d048(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)((long)puVar3 + lVar29);
  func_0x000107c3f764();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)((long)puVar3 + lVar20);
  func_0x000107c3f764();
  func_0x000107c61180();
  uVar19 = uVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  uStack_b0 = uVar19;
  uVar6 = *(undefined8 *)((long)puVar3 + lVar29);
  func_0x000107c3f75c();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)((long)puVar3 + lVar20);
  func_0x000107c3f75c(uVar7);
  func_0x000107c61180();
  uVar17 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_a8 = uVar17;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61180();
  func_0x000107c3d048(puVar2);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  puVar2 = PTR_PTR_1126c4b80;
  func_0x000107c610f4();
  uVar34 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar36 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar37 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar38 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x000107c469a4(uVar34,uVar36,uVar37,uVar38);
  lVar24 = (long)_DAT_11276282c;
  uVar17 = *(undefined8 *)((long)puVar3 + lVar24);
  *(undefined **)((long)puVar3 + lVar24) = puVar2;
  func_0x000107c61170(uVar17);
  func_0x000107c5a050(*(undefined8 *)((long)puVar3 + lVar24));
  func_0x000107c3ad24(puVar3);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar6 = *(undefined8 *)((long)puVar3 + lVar24);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar9 = puVar3;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar19 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  uStack_d0 = uVar19;
  uVar7 = *(undefined8 *)((long)puVar3 + lVar24);
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar11 = puVar3;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar4 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  uStack_c8 = uVar4;
  uVar18 = *(undefined8 *)((long)puVar3 + lVar24);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar10 = puVar3;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar5 = uVar18;
  func_0x000107c40280();
  func_0x000107c61180();
  uStack_c0 = uVar5;
  uVar8 = *(undefined8 *)((long)puVar3 + lVar24);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar13 = puVar3;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar17 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_b8 = uVar17;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61180();
  func_0x000107c3d048(puVar2);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar6);
  puVar2 = PTR_PTR_1126c4b80;
  func_0x000107c610f4();
  func_0x000107c469a4(uVar34,uVar36,uVar37,uVar38);
  lVar24 = (long)_DAT_112762830;
  uVar17 = *(undefined8 *)((long)puVar3 + lVar24);
  *(undefined **)((long)puVar3 + lVar24) = puVar2;
  func_0x000107c61170(uVar17);
  func_0x000107c5a050(*(undefined8 *)((long)puVar3 + lVar24));
  func_0x000107c3ad24(puVar3);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar6 = *(undefined8 *)((long)puVar3 + lVar24);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar9 = puVar3;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar4 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  uStack_f0 = uVar4;
  uVar7 = *(undefined8 *)((long)puVar3 + lVar24);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar10 = puVar3;
  func_0x000107c3ec1c(puVar3);
  func_0x000107c61180();
  uVar5 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  uStack_e8 = uVar5;
  uVar18 = *(undefined8 *)((long)puVar3 + lVar24);
  func_0x000107c4ace0();
  func_0x000107c61180();
  puVar11 = puVar3;
  func_0x000107c4ace0();
  func_0x000107c61180();
  uVar17 = uVar18;
  func_0x000107c40280();
  func_0x000107c61180();
  uStack_e0 = uVar17;
  uVar8 = *(undefined8 *)((long)puVar3 + lVar24);
  func_0x000107c50890();
  func_0x000107c61180();
  puVar13 = puVar3;
  func_0x000107c50890(puVar3);
  func_0x000107c61180();
  uVar19 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_d8 = uVar19;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61180();
  func_0x000107c3d048(puVar2);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar6);
  puVar2 = PTR_PTR_1126c4b80;
  func_0x000107c610f4();
  func_0x000107c469a4(uVar34,uVar36,uVar37,uVar38);
  lVar24 = (long)_DAT_112762834;
  uVar17 = *(undefined8 *)((long)puVar3 + lVar24);
  *(undefined **)((long)puVar3 + lVar24) = puVar2;
  func_0x000107c61170(uVar17);
  func_0x000107c5a050(*(undefined8 *)((long)puVar3 + lVar24));
  func_0x000107c3ad24(puVar3);
  func_0x000107c51734(*(undefined8 *)((long)puVar3 + lVar24));
  func_0x000107c4fabc(param_5);
  uVar17 = uVar34;
  func_0x000107c4a8b4(PTR_PTR_1126c84e0);
  fVar32 = fVar35;
  func_0x000107c4a8b4(PTR_PTR_1126c84e0);
  puVar2 = PTR_PTR_1126d40c0;
  func_0x000107c610f4();
  func_0x000107c3ebd4(*(undefined8 *)((long)puVar3 + lVar23));
  fVar35 = (float)uVar17;
  func_0x000107c469c8(0,0,(double)fVar35,(double)fVar32,uVar34);
  lVar24 = (long)_DAT_112762838;
  uVar17 = *(undefined8 *)((long)puVar3 + lVar24);
  *(undefined **)((long)puVar3 + lVar24) = puVar2;
  func_0x000107c61170(uVar17);
  func_0x000107c5a378(*(undefined8 *)((long)puVar3 + lVar24));
  func_0x000107c611a0((long)puVar3 + (long)_DAT_11276283c,param_4);
  lVar23 = (long)_DAT_112762840;
  func_0x000107c61174(param_8);
  uVar17 = *(undefined8 *)((long)puVar3 + lVar23);
  *(undefined8 *)((long)puVar3 + lVar23) = param_8;
  func_0x000107c61170(uVar17);
  puVar13 = puVar3;
  func_0x000107c3f250(puVar3);
  func_0x000107c61180();
  func_0x000107c3ad24(puVar3);
  func_0x000107c61170(puVar13);
  func_0x000107c5a050(*(undefined8 *)((long)puVar3 + lVar24));
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610fc();
  lVar29 = (long)_DAT_112762844;
  uVar17 = *(undefined8 *)((long)puVar3 + lVar29);
  *(undefined **)((long)puVar3 + lVar29) = puVar2;
  func_0x000107c61170(uVar17);
  func_0x000107c5a050(*(undefined8 *)((long)puVar3 + lVar29));
  func_0x000107c52b2c(*(undefined8 *)((long)puVar3 + lVar29));
  func_0x000107c54280(*(undefined8 *)((long)puVar3 + lVar29));
  func_0x000107c52610(*(undefined8 *)((long)puVar3 + lVar29));
  uVar17 = 0;
  func_0x000107c59594(0,*(undefined8 *)((long)puVar3 + lVar29));
  func_0x000107c3ad24(puVar3);
  puVar13 = puVar3;
  func_0x000107c4168c(puVar3);
  func_0x000107c61180();
  func_0x000107c49634();
  func_0x000107c61170(puVar13);
  puVar2 = PTR_PTR_1126b9c88;
  func_0x000107c509c0();
  lVar23 = (long)_DAT_112762848;
  *(char *)((long)puVar3 + lVar23) = (char)puVar2;
  puVar13 = puVar3;
  if ((int)puVar2 == 0) {
LAB_1007f4a9c:
    if ((*(byte *)((long)puVar3 + lVar22) & 1) == 0) {
      puVar2 = PTR_PTR_1126b9e78;
      func_0x000107c49d70();
      if ((int)puVar2 != 0) {
        puVar13 = *(undefined8 **)((long)puVar3 + lVar20);
      }
    }
  }
  else {
    puVar2 = PTR_PTR_1126d40c8;
    func_0x000107c610f4();
    func_0x000107c47ce4();
    uVar19 = *(undefined8 *)((long)puVar3 + (long)_DAT_11276284c);
    *(undefined **)((long)puVar3 + (long)_DAT_11276284c) = puVar2;
    func_0x000107c61170(uVar19);
    if ((*(byte *)((long)puVar3 + lVar23) & 1) == 0) goto LAB_1007f4a9c;
  }
  func_0x000107c3ec1c();
  func_0x000107c61180();
  if ((*(char *)((long)puVar3 + lVar23) == '\x01') && ((*(byte *)((long)puVar3 + lVar22) & 1) == 0))
  {
    uStack_318 = *(undefined8 *)((long)puVar3 + lVar20);
    func_0x000107c3ec1c();
    func_0x000107c61180();
  }
  else {
    uStack_318 = 0;
  }
  puVar2 = PTR_PTR_1126c8588;
  func_0x000107c610f4();
  func_0x000107c46994(uVar17);
  uVar17 = *(undefined8 *)((long)puVar3 + (long)_DAT_112762850);
  *(undefined **)((long)puVar3 + (long)_DAT_112762850) = puVar2;
  func_0x000107c61170(uVar17);
  uVar19 = *(undefined8 *)((long)puVar3 + lVar29);
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar17 = uVar19;
  func_0x000107c40290(0);
  func_0x000107c61180();
  func_0x000107c61170(uVar19);
  fVar35 = 250.0;
  func_0x000107c5784c(0x437a0000,uVar17);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar8 = *(undefined8 *)((long)puVar3 + lVar29);
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar9 = puVar3;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar19 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  uStack_128 = uVar19;
  uVar34 = *(undefined8 *)((long)puVar3 + lVar29);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar11 = puVar3;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar4 = uVar34;
  func_0x000107c40280();
  func_0x000107c61180();
  uStack_120 = uVar4;
  uVar36 = *(undefined8 *)((long)puVar3 + lVar29);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar37 = *(undefined8 *)((long)puVar3 + lVar24);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar5 = uVar36;
  func_0x000107c40280();
  func_0x000107c61180();
  uStack_118 = uVar5;
  uStack_110 = uVar17;
  uVar38 = *(undefined8 *)((long)puVar3 + lVar24);
  func_0x000107c44d9c();
  func_0x000107c61180();
  func_0x000107c4a8b4(PTR_PTR_1126c84e0);
  dVar33 = (double)fVar35;
  uVar6 = uVar38;
  func_0x000107c40290(dVar33);
  fVar35 = SUB84(dVar33,0);
  func_0x000107c61180();
  uStack_108 = uVar6;
  uVar14 = *(undefined8 *)((long)puVar3 + lVar24);
  func_0x000107c5e308();
  func_0x000107c61180();
  func_0x000107c4a8b4(PTR_PTR_1126c84e0);
  uVar7 = uVar14;
  func_0x000107c40290((double)fVar35);
  func_0x000107c61180();
  uStack_100 = uVar7;
  uVar15 = *(undefined8 *)((long)puVar3 + lVar24);
  func_0x000107c3f75c();
  func_0x000107c61180();
  puVar10 = puVar3;
  func_0x000107c3f75c(puVar3);
  func_0x000107c61180();
  uVar18 = uVar15;
  func_0x000107c40280();
  func_0x000107c61180();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_f8 = uVar18;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61180();
  func_0x000107c3d048(puVar2);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c3d72c(puVar3);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar7 = *(undefined8 *)((long)puVar3 + lVar24);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar18 = *(undefined8 *)((long)puVar3 + lVar21);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar19 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  uStack_148 = uVar19;
  uVar8 = *(undefined8 *)((long)puVar3 + lVar24);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar34 = *(undefined8 *)((long)puVar3 + lVar21);
  func_0x000107c3ec1c(uVar34);
  func_0x000107c61180();
  uVar4 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  uStack_140 = uVar4;
  uVar36 = *(undefined8 *)((long)puVar3 + lVar24);
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar37 = *(undefined8 *)((long)puVar3 + lVar21);
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar5 = uVar36;
  func_0x000107c40280();
  func_0x000107c61180();
  uStack_138 = uVar5;
  uVar38 = *(undefined8 *)((long)puVar3 + lVar24);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar14 = *(undefined8 *)((long)puVar3 + lVar21);
  func_0x000107c5ce8c(uVar14);
  func_0x000107c61180();
  uVar6 = uVar38;
  func_0x000107c40280();
  func_0x000107c61180();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_130 = uVar6;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61180();
  func_0x000107c3d048(puVar2);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar7);
  *(undefined1 *)((long)puVar3 + (long)_DAT_112762854) = 0;
  puVar2 = PTR_PTR_1126c8600;
  func_0x000107c610f4();
  puVar9 = puVar3;
  func_0x000107c4168c(puVar3);
  func_0x000107c61180();
  func_0x000107c48c2c();
  lVar20 = (long)_DAT_112762858;
  uVar19 = *(undefined8 *)((long)puVar3 + lVar20);
  *(undefined **)((long)puVar3 + lVar20) = puVar2;
  func_0x000107c61170(uVar19);
  func_0x000107c61170(puVar9);
  func_0x000107c56704(0,*(undefined8 *)((long)puVar3 + lVar20));
  puVar9 = puVar3;
  func_0x000107c4168c();
  func_0x000107c61180();
  func_0x000107c53fcc(*(undefined8 *)((long)puVar3 + lVar20));
  func_0x000107c61170(puVar9);
  func_0x000107c3d6fc(puVar3);
  puVar2 = PTR_PTR_1126c8600;
  func_0x000107c610f4(PTR_PTR_1126c8600);
  puVar9 = puVar3;
  func_0x000107c4168c(puVar3);
  func_0x000107c61180();
  func_0x000107c48c2c(puVar2);
  func_0x000107c56144(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar9);
  puVar9 = puVar3;
  func_0x000107c4c0b4();
  func_0x000107c61180();
  func_0x000107c56704(0x3fd0000000000000);
  func_0x000107c61170(puVar9);
  puVar9 = puVar3;
  func_0x000107c4168c(puVar3);
  func_0x000107c61180();
  puVar11 = puVar3;
  func_0x000107c4c0b4();
  func_0x000107c61180();
  func_0x000107c53fcc();
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar9);
  puVar9 = puVar3;
  func_0x000107c4c0b4();
  func_0x000107c61180();
  func_0x000107c3d6fc(puVar3);
  func_0x000107c61170(puVar9);
  puVar2 = PTR__OBJC_CLASS___UIPinchGestureRecognizer_1126b3868;
  func_0x000107c610f4(PTR__OBJC_CLASS___UIPinchGestureRecognizer_1126b3868);
  puVar9 = puVar3;
  func_0x000107c4168c();
  func_0x000107c61180();
  func_0x000107c48c2c();
  func_0x000107c573b4(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar9);
  puVar11 = puVar3;
  func_0x000107c4168c();
  func_0x000107c61180();
  puVar9 = puVar3;
  func_0x000107c4e744();
  func_0x000107c61180();
  func_0x000107c53fcc();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar11);
  puVar9 = puVar3;
  func_0x000107c4e744(puVar3);
  func_0x000107c61180();
  func_0x000107c3d6fc(puVar3);
  func_0x000107c61170(puVar9);
  puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  func_0x000107c610f4(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  puVar9 = puVar3;
  func_0x000107c4168c();
  func_0x000107c61180();
  func_0x000107c48c2c();
  func_0x000107c57210(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar9);
  puVar9 = puVar3;
  func_0x000107c4168c(puVar3);
  func_0x000107c61180();
  puVar11 = puVar3;
  func_0x000107c4e324();
  func_0x000107c61180();
  func_0x000107c53fcc();
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar9);
  puVar9 = puVar3;
  func_0x000107c4e324(puVar3);
  func_0x000107c61180();
  func_0x000107c3d6fc(puVar3);
  func_0x000107c61170(puVar9);
  puVar9 = puVar3;
  func_0x000107c4e324(puVar3);
  func_0x000107c61180();
  func_0x000107c54514();
  func_0x000107c61170(puVar9);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  func_0x000107c610f4(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  puVar9 = puVar3;
  func_0x000107c4168c(puVar3);
  func_0x000107c61180();
  func_0x000107c48c2c(puVar2);
  func_0x000107c59bcc(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar9);
  puVar9 = puVar3;
  func_0x000107c4168c();
  func_0x000107c61180();
  puVar11 = puVar3;
  func_0x000107c5c6fc();
  func_0x000107c61180();
  func_0x000107c53fcc();
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar9);
  puVar9 = puVar3;
  func_0x000107c5c6fc(puVar3);
  func_0x000107c61180();
  func_0x000107c3d6fc(puVar3);
  func_0x000107c61170(puVar9);
  func_0x000107c61144(auStack_160,puVar3);
  puVar12 = PTR_PTR_1126ae720;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  pcStack_178 = FUN_100845c60;
  puStack_170 = &UNK_110988998;
  ppuVar25 = &puStack_188;
  func_0x000107c6111c(auStack_168,auStack_160);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar19 = *(undefined8 *)((long)puVar3 + (long)_DAT_11276285c);
  *(undefined **)((long)puVar3 + (long)_DAT_11276285c) = puVar12;
  func_0x000107c61170(uVar19);
  func_0x000107c61174(puVar12);
  puVar16 = PTR_PTR_1126ae720;
  puStack_1b0 = puVar2;
  uStack_1a8 = 0xc2000000;
  puStack_1a0 = &UNK_107011474;
  puStack_198 = &UNK_110988998;
  ppuVar26 = &puStack_1b0;
  func_0x000107c6111c(auStack_190,auStack_160);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar19 = *(undefined8 *)((long)puVar3 + (long)_DAT_112762860);
  *(undefined **)((long)puVar3 + (long)_DAT_112762860) = puVar16;
  func_0x000107c61170(uVar19);
  puVar16 = PTR_PTR_1126ae720;
  puStack_1d8 = puVar2;
  uStack_1d0 = 0xc2000000;
  puStack_1c8 = &UNK_1070114b8;
  puStack_1c0 = &UNK_110988998;
  ppuVar27 = &puStack_1d8;
  func_0x000107c6111c(auStack_1b8,auStack_160);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar19 = *(undefined8 *)((long)puVar3 + (long)_DAT_112762864);
  *(undefined **)((long)puVar3 + (long)_DAT_112762864) = puVar16;
  func_0x000107c61170(uVar19);
  puVar16 = PTR_PTR_1126ae720;
  puStack_200 = puVar2;
  uStack_1f8 = 0xc2000000;
  puStack_1f0 = &UNK_1070114fc;
  puStack_1e8 = &UNK_110988998;
  ppuVar30 = &puStack_200;
  func_0x000107c6111c(auStack_1e0,auStack_160);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar19 = *(undefined8 *)((long)puVar3 + (long)_DAT_112762868);
  *(undefined **)((long)puVar3 + (long)_DAT_112762868) = puVar16;
  func_0x000107c61170(uVar19);
  puVar16 = PTR_PTR_1126ae720;
  puStack_228 = puVar2;
  uStack_220 = 0xc2000000;
  puStack_218 = &UNK_107011540;
  puStack_210 = &UNK_110988998;
  ppuVar31 = &puStack_228;
  func_0x000107c6111c(auStack_208,auStack_160);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar19 = *(undefined8 *)((long)puVar3 + (long)_DAT_11276286c);
  *(undefined **)((long)puVar3 + (long)_DAT_11276286c) = puVar16;
  func_0x000107c61170(uVar19);
  puVar16 = PTR_PTR_1126ae720;
  puStack_258 = puVar2;
  uStack_250 = 0xc2000000;
  uStack_248 = 0x100845bec;
  puStack_240 = &UNK_1109889c8;
  ppuVar28 = &puStack_258;
  puStack_238 = puVar12;
  func_0x000107c6111c(auStack_230,auStack_160);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar19 = *(undefined8 *)((long)puVar3 + (long)_DAT_112762870);
  *(undefined **)((long)puVar3 + (long)_DAT_112762870) = puVar16;
  func_0x000107c61170(uVar19);
  func_0x000107c61120(auStack_230);
  func_0x000107c61120(auStack_208);
  func_0x000107c61120(auStack_1e0);
  func_0x000107c61120(auStack_1b8);
  func_0x000107c61120(auStack_190);
  func_0x000107c61170(puVar12);
  func_0x000107c61120(auStack_168);
  func_0x000107c61120(auStack_160);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uStack_318);
  func_0x000107c61170(puVar13);
LAB_1007f564c:
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar3;
  }
  func_0x000107c60e78();
  func_0x000107c61120(ppuVar28 + 5);
  func_0x000107c61120(ppuVar31 + 4);
  func_0x000107c61120(ppuVar30 + 4);
  func_0x000107c61120(ppuVar27 + 4);
  func_0x000107c61120(ppuVar26 + 4);
  func_0x000107c61120(ppuVar25 + 4);
  func_0x000107c61120(auStack_160);
  func_0x000107c60bd8();
  return *(undefined8 **)(param_4 + _DAT_112762818);
}



/* Entry: 1007f5760; end: 1007f576f; -[SCCameraOverlayView lensGestureView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1007f5760(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762818);
}



/* Entry: 1007f5770; end: 1007f57a3; -[SCCameraOverlayView _addSubviewInternal:] */

void FUN_1007f5770(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f83c8;
  uStack_20 = param_1;
  func_0x000107c61154(&uStack_20,PTR_s_addSubview__11259c880);
  return;
}



/* Entry: 1007f57a4; end: 1007f57b7;  */

void FUN_1007f57a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
             *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
             *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
             *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),param_1,
             PTR_s_sc_constrainToSuperviewEdgesWith_112630c78);
  return;
}



/* Entry: 1007f57b8; end: 1007f5a77;  */

double FUN_1007f57b8(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                    long param_5,undefined8 param_6)

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
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5a050(param_5,param_6,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = param_5;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar3 = param_5;
  func_0x000107c5c42c();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar5 = lVar2;
  func_0x000107c40284(param_1,lVar2,param_6,lVar4);
  func_0x000107c61180();
  lVar6 = param_5;
  lStack_a8 = lVar5;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar7 = param_5;
  func_0x000107c5c42c();
  func_0x000107c61180();
  lVar8 = lVar7;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar9 = lVar6;
  func_0x000107c40284(-param_3,lVar6,param_6,lVar8);
  func_0x000107c61180();
  lVar10 = param_5;
  lStack_a0 = lVar9;
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar11 = param_5;
  func_0x000107c5c42c();
  func_0x000107c61180();
  lVar12 = lVar11;
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar13 = lVar10;
  func_0x000107c40284(param_2,lVar10,param_6,lVar12);
  func_0x000107c61180();
  lVar14 = param_5;
  lStack_98 = lVar13;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c5c42c(param_5);
  func_0x000107c61180();
  lVar15 = param_5;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  param_4 = -param_4;
  lVar16 = lVar14;
  func_0x000107c40284(param_4,lVar14,param_6,lVar15);
  func_0x000107c61180();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_90 = lVar16;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&lStack_a8,4);
  func_0x000107c61180();
  func_0x000107c3d048(puVar1,param_6,puVar17);
  func_0x000107c61170(puVar17);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(param_5);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return param_4;
  }
  func_0x000107c60e78();
  uVar18 = *(undefined8 *)(lVar2 + 8);
  func_0x000107c5c734(uVar18);
  func_0x000107c61180();
  uVar19 = uVar18;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c51c10(lVar2);
  FUN_1007f5af8(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar18);
  return param_4;
}



/* Entry: 1007f5a78; end: 1007f5aef; -[SCCameraRecordingDurationConfigurationImpl recordingLengthforRecordingRingView] */

undefined8 FUN_1007f5a78(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c51c10(param_2);
  FUN_1007f5af8(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 1007f5af0; end: 1007f5af7; -[SCCameraRecordingDurationConfigurationImpl segmentRecordingTime] */

undefined8 FUN_1007f5af0(void)

{
  return 0x4024000000000000;
}



/* Entry: 1007f5af8; end: 1007f5b87;  */

double FUN_1007f5af8(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  double dVar3;
  
  func_0x000107c61174();
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d20b8;
  func_0x000107c49820();
  if (ppuVar1 == (undefined **)0x2) {
    dVar3 = 10.0;
  }
  else if (ppuVar1 == (undefined **)0x1) {
    dVar3 = 120.0;
  }
  else {
    dVar3 = param_1;
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = param_2;
      func_0x000107c4980c(param_2,param_3,&PTR____CFConstantStringClassReference_110f222d8,
                          (int)param_1,0);
      dVar3 = (double)(int)uVar2;
      if ((double)(int)uVar2 <= param_1) {
        dVar3 = param_1;
      }
    }
  }
  func_0x000107c61170(param_2);
  return dVar3;
}



/* Entry: 1007f5b88; end: 1007f5b93; +[_TtC15SCCameraUIScope20CameraTimerConstants kSCCameraTimerWidth] */

undefined8 FUN_1007f5b88(void)

{
  return 0x42c80000;
}



/* Entry: 1007f5b94; end: 1007f5db7; -[SCCameraTimerImpl initWithFrame:maximumRecordingLength:cameraViewType:styleProvider:cameraTimerStyle:miniCarouselShouldUseLargeCoolRecordingCaptureButton:captureButtonScaleAnimationDisabled:cameraConfig:snapEditorTweakServices:circumstanceEngine:appStartExperimentReader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1007f5b94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined1 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_a0;
  undefined *puStack_98;
  
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  puStack_98 = PTR_PTR_1126f83e8;
  puVar1 = &uStack_a0;
  uStack_a0 = param_6;
  func_0x000107c61154(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112762968) = param_5;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276296c) = param_8;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112762970) = param_10;
    puVar2 = PTR_PTR_1126d4138;
    func_0x000107c610f4();
    func_0x000107c45c54();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112762974);
    *(undefined **)((long)puVar1 + (long)_DAT_112762974) = puVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112762978) = 0x3ff0000000000000;
    lVar4 = (long)_DAT_11276297c;
    func_0x000107c61174(param_16);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_16;
    func_0x000107c61170(uVar3);
    lVar4 = (long)_DAT_112762980;
    func_0x000107c61174(param_9);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112762984) = param_11;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112762988) = param_12;
    lVar4 = (long)_DAT_11276298c;
    func_0x000107c61174(param_13);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_13;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112762990) = 0;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112762994) = 0;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112762998) = 0;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276299c) = 0;
    lVar4 = (long)_DAT_1127629a0;
    func_0x000107c61174(param_14);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_14;
    func_0x000107c61170(uVar3);
    lVar4 = (long)_DAT_1127629a4;
    func_0x000107c61174(param_15);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_15;
    func_0x000107c61170(uVar3);
    func_0x000107c3c670(puVar1);
  }
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_9);
  return puVar1;
}



/* Entry: 1007f5db8; end: 1007f5e23; -[SCCameraTimerTooltipManager initWithCameraTimerView:] */

undefined1 * FUN_1007f5db8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f85c0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1007f5e24; end: 1007f5ec7; -[SCCameraTimerImpl _setupInitialAppearance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f5e24(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  *(undefined8 *)(param_1 + _DAT_1127629a8) = 0;
  lVar3 = (long)_DAT_112762980;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x000107c3f254(uVar1,param_2,0);
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127629ac);
  *(undefined8 *)(param_1 + _DAT_1127629ac) = uVar1;
  func_0x000107c61170(uVar2);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x000107c3f254();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127629b0);
  *(undefined8 *)(param_1 + _DAT_1127629b0) = uVar1;
  func_0x000107c61170(uVar2);
  func_0x000107c3c164(param_1);
  func_0x000107c3c168(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bea1e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setAppearanceType_animated__112586148,1,0);
  return;
}



/* Entry: 1007f5ec8; end: 1007f5ecf; -[SCCameraTimerDefaultStyleProvider cameraTimerAppearanceWithType:] */

void FUN_1007f5ec8(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 uVar1;
  undefined *unaff_x19;
  
  if ((long)param_3 < 2) {
    if ((param_3 == (undefined *)0x0) || (param_3 == (undefined *)0x1)) {
      func_0x0001007f6030();
      func_0x000107c61180();
      unaff_x19 = param_3;
    }
  }
  else {
    if (param_3 == (undefined *)0x2) {
      unaff_x19 = PTR_PTR_1126d4298;
      func_0x000107c610fc(PTR_PTR_1126d4298);
      func_0x000107c53074(0x3ff4000000000000);
      func_0x000107c53070(0x3fd999999999999a,unaff_x19);
      func_0x000107c53068(0,unaff_x19);
      func_0x000107c59630(0x3ff0000000000000,unaff_x19);
      func_0x000107c5306c(0x4053000000000000,unaff_x19);
      func_0x000107c53078(0x3fe0000000000000,unaff_x19);
      func_0x000107c530b4(0x405e800000000000,unaff_x19);
      func_0x000107c530b8(0x4022000000000000,unaff_x19);
      uVar1 = 2;
    }
    else {
      if (param_3 != (undefined *)0x3) goto LAB_1007f6020;
      unaff_x19 = PTR_PTR_1126d4298;
      func_0x000107c610fc(PTR_PTR_1126d4298);
      func_0x000107c53074(0x3ff0000000000000);
      func_0x000107c53070(0x3fd999999999999a,unaff_x19);
      func_0x000107c53068(0,unaff_x19);
      func_0x000107c59630(0x3fe999999999999a,unaff_x19);
      func_0x000107c5306c(0x4053000000000000,unaff_x19);
      func_0x000107c53078(0x3fe0000000000000,unaff_x19);
      func_0x000107c530b4(0x405e800000000000,unaff_x19);
      func_0x000107c530b8(0x4022000000000000,unaff_x19);
      uVar1 = 3;
    }
    func_0x000107c5a0f8(unaff_x19,param_2,uVar1);
  }
LAB_1007f6020:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 1007f5ed0; end: 1007f60d3;  */

void FUN_1007f5ed0(undefined *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *unaff_x19;
  
  if ((long)param_1 < 2) {
    if ((param_1 == (undefined *)0x0) || (param_1 == (undefined *)0x1)) {
      func_0x0001007f6030();
      func_0x000107c61180();
      unaff_x19 = param_1;
    }
  }
  else {
    if (param_1 == (undefined *)0x2) {
      unaff_x19 = PTR_PTR_1126d4298;
      func_0x000107c610fc(PTR_PTR_1126d4298);
      func_0x000107c53074(0x3ff4000000000000);
      func_0x000107c53070(0x3fd999999999999a,unaff_x19);
      func_0x000107c53068(0,unaff_x19);
      func_0x000107c59630(0x3ff0000000000000,unaff_x19);
      func_0x000107c5306c(0x4053000000000000,unaff_x19);
      func_0x000107c53078(0x3fe0000000000000,unaff_x19);
      func_0x000107c530b4(0x405e800000000000,unaff_x19);
      func_0x000107c530b8(0x4022000000000000,unaff_x19);
      uVar1 = 2;
    }
    else {
      if (param_1 != (undefined *)0x3) goto LAB_1007f6020;
      unaff_x19 = PTR_PTR_1126d4298;
      func_0x000107c610fc(PTR_PTR_1126d4298);
      func_0x000107c53074(0x3ff0000000000000);
      func_0x000107c53070(0x3fd999999999999a,unaff_x19);
      func_0x000107c53068(0,unaff_x19);
      func_0x000107c59630(0x3fe999999999999a,unaff_x19);
      func_0x000107c5306c(0x4053000000000000,unaff_x19);
      func_0x000107c53078(0x3fe0000000000000,unaff_x19);
      func_0x000107c530b4(0x405e800000000000,unaff_x19);
      func_0x000107c530b8(0x4022000000000000,unaff_x19);
      uVar1 = 3;
    }
    func_0x000107c5a0f8(unaff_x19,param_2,uVar1);
  }
LAB_1007f6020:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 1007f60d4; end: 1007f618f;  */

void FUN_1007f60d4(void)

{
  func_0x000107c61168(&PTR_PTR_1129c7f38);
  return;
}



/* Entry: 1007f6190; end: 1007f61af; -[_TtC15SCCameraUIScope23SCCameraTimerAppearance init] */

void FUN_1007f6190(void)

{
  func_0x0001007f60f4();
  return;
}



/* Entry: 1007f61b0; end: 1007f61ff; -[_TtC15SCCameraUIScope23SCCameraTimerAppearance setCameraRingScale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f61b0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113082398;
  func_0x000107c61428(param_2 + _DAT_113082398,auStack_48,1,0);
  *(undefined8 *)(param_2 + lVar1) = param_1;
  return;
}



/* Entry: 1007f6200; end: 1007f624f; -[_TtC15SCCameraUIScope23SCCameraTimerAppearance setCameraRingOpacity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f6200(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130823c8;
  func_0x000107c61428(param_2 + _DAT_1130823c8,auStack_48,1,0);
  *(undefined8 *)(param_2 + lVar1) = param_1;
  return;
}



/* Entry: 1007f6250; end: 1007f629f; -[_TtC15SCCameraUIScope23SCCameraTimerAppearance setCameraRingCutoutDiameter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f6250(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130823a0;
  func_0x000107c61428(param_2 + _DAT_1130823a0,auStack_48,1,0);
  *(undefined8 *)(param_2 + lVar1) = param_1;
  return;
}



/* Entry: 1007f62a0; end: 1007f62ef; -[_TtC15SCCameraUIScope23SCCameraTimerAppearance setSpinnerScale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f62a0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130823d0;
  func_0x000107c61428(param_2 + _DAT_1130823d0,auStack_48,1,0);
  *(undefined8 *)(param_2 + lVar1) = param_1;
  return;
}



/* Entry: 1007f62f0; end: 1007f633f; -[_TtC15SCCameraUIScope23SCCameraTimerAppearance setCameraRingDiameter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f62f0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130823a8;
  func_0x000107c61428(param_2 + _DAT_1130823a8,auStack_48,1,0);
  *(undefined8 *)(param_2 + lVar1) = param_1;
  return;
}



/* Entry: 1007f6340; end: 1007f638f; -[_TtC15SCCameraUIScope23SCCameraTimerAppearance setCameraRingStrokeWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f6340(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130823b0;
  func_0x000107c61428(param_2 + _DAT_1130823b0,auStack_48,1,0);
  *(undefined8 *)(param_2 + lVar1) = param_1;
  return;
}



/* Entry: 1007f6390; end: 1007f63df; -[_TtC15SCCameraUIScope23SCCameraTimerAppearance setCameraSpinnerDiameter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f6390(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130823b8;
  func_0x000107c61428(param_2 + _DAT_1130823b8,auStack_48,1,0);
  *(undefined8 *)(param_2 + lVar1) = param_1;
  return;
}



/* Entry: 1007f63e0; end: 1007f642f; -[_TtC15SCCameraUIScope23SCCameraTimerAppearance setCameraSpinnerStrokeWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f63e0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130823c0;
  func_0x000107c61428(param_2 + _DAT_1130823c0,auStack_48,1,0);
  *(undefined8 *)(param_2 + lVar1) = param_1;
  return;
}



/* Entry: 1007f6430; end: 1007f647f; -[_TtC15SCCameraUIScope23SCCameraTimerAppearance setType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f6430(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113082390;
  func_0x000107c61428(param_1 + _DAT_113082390,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1007f6480; end: 1007f6953; -[SCCameraTimerImpl _prepareCameraRing] */

/* WARNING: Possible PIC construction at 0x0001007f65e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007f65e8) */
/* WARNING: Removing unreachable block (ram,0x0001007f6790) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1007f6480(undefined8 param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_2 + (long)_DAT_11276296c) == 9) {
    puVar3 = PTR_PTR_1126d4140;
    func_0x000107c610f4();
    func_0x000107c3afc4(param_2);
    uVar6 = param_1;
    func_0x000107c3afc4(param_2);
    dVar8 = 0.0;
    func_0x000107c469e0(0,0,param_1,uVar6);
    lVar7 = (long)_DAT_1127629b4;
    uVar6 = *(undefined8 *)(param_2 + lVar7);
    *(undefined **)(param_2 + lVar7) = puVar3;
    func_0x000107c61170(uVar6);
    func_0x000107c3ec60(param_2);
    func_0x000107c609cc();
    dVar9 = dVar8 * 0.5;
    func_0x000107c3ec60(param_2);
    func_0x000107c609b0();
    lVar1 = *(long *)(param_2 + lVar7);
    func_0x000107c532b4(dVar9,dVar8 * 0.5);
    uVar6 = *(undefined8 *)(param_2 + lVar7);
  }
  else {
    uVar2 = param_2;
    func_0x000107c3b1a4();
    if ((int)uVar2 != 0) {
      puVar3 = PTR_PTR_1126d4148;
      func_0x000107c610f4();
      func_0x000107c3b1a0(param_2);
      uVar6 = param_1;
      func_0x000107c3b1a0(param_2);
      func_0x000107c469cc(0,0,param_1,uVar6);
      lVar5 = (long)_DAT_1127629b8;
      uVar6 = *(undefined8 *)(param_2 + lVar5);
      *(undefined **)(param_2 + lVar5) = puVar3;
      func_0x000107c61170(uVar6);
      uVar6 = *(undefined8 *)(param_2 + lVar5);
      goto code_r0x000107c3d89c;
    }
    puVar3 = PTR_PTR_1126b52f0;
    func_0x000107c610f4();
    func_0x000107c3afc4(param_2);
    uVar6 = param_1;
    func_0x000107c3afc4(param_2);
    dVar8 = 0.0;
    func_0x000107c469a4(0,0,param_1,uVar6);
    lVar7 = (long)_DAT_1127629bc;
    uVar6 = *(undefined8 *)(param_2 + lVar7);
    *(undefined **)(param_2 + lVar7) = puVar3;
    func_0x000107c61170(uVar6);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61180();
    func_0x000107c61178();
    func_0x000107c3ab24();
    uVar6 = *(undefined8 *)(param_2 + lVar7);
    func_0x000107c5a92c(uVar6);
    func_0x000107c61180();
    func_0x000107c549b4();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar3);
    func_0x000107c3f1bc(*(undefined8 *)(param_2 + (long)_DAT_1127629b0));
    uVar6 = *(undefined8 *)(param_2 + lVar7);
    func_0x000107c5a92c(uVar6);
    func_0x000107c61180();
    func_0x000107c55f94(dVar8);
    func_0x000107c61170(uVar6);
    FUN_1007f73bc();
    func_0x000107c61180();
    func_0x000107c61178();
    func_0x000107c3ab24();
    uVar4 = *(undefined8 *)(param_2 + lVar7);
    func_0x000107c5a92c(uVar4);
    func_0x000107c61180();
    func_0x000107c59a18();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar6);
    func_0x000107c3ec60(param_2);
    func_0x000107c609cc();
    dVar9 = dVar8 * 0.5;
    func_0x000107c3ec60(param_2);
    func_0x000107c609b0();
    lVar1 = *(long *)(param_2 + lVar7);
    func_0x000107c532b4(dVar9,dVar8 * 0.5);
    uVar6 = *(undefined8 *)(param_2 + lVar7);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    func_0x000107c60e78();
    if (*(long *)(lVar1 + _DAT_11276296c) != 9) {
      return (ulong)(*(long *)(lVar1 + _DAT_112762970) == 1);
    }
    return 0;
  }
code_r0x000107c3d89c:
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_addSubview__11259c880,uVar6);
  return param_2;
}



/* Entry: 1007f6954; end: 1007f6987; -[SCCameraTimerImpl _coolRecordingStyleEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1007f6954(long param_1)

{
  if (*(long *)(param_1 + _DAT_11276296c) == 9) {
    return false;
  }
  return *(long *)(param_1 + _DAT_112762970) == 1;
}



/* Entry: 1007f6988; end: 1007f69d3; -[SCCameraTimerImpl _coolRecordingDiameter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1007f6988(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)param_1;
  if (*(char *)(param_1 + _DAT_112762984) == '\x01') {
    FUN_10052a7e0();
    uVar2 = 0x4053000000000000;
    if (iVar1 == 0) {
      uVar2 = 0x4055800000000000;
    }
    return uVar2;
  }
  return 0x4053000000000000;
}



/* Entry: 1007f69d4; end: 1007f7147; -[SCCameraTimerCoolRecordingRingView initWithFrame:scaleAnimationDisabled:cameraConfig:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1007f69d4(double param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5,
             undefined8 param_6,byte param_7,undefined8 param_8,undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined *puStack_b0;
  
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_b0 = PTR_PTR_1126f8598;
  puVar1 = &uStack_b8;
  uStack_b8 = param_5;
  func_0x000107c61154(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = 1;
    FUN_1007f5ed0();
    func_0x000107c61180();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276312c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276312c) = uVar2;
    func_0x000107c61170(uVar7);
    uVar2 = 2;
    FUN_1007f5ed0();
    func_0x000107c61180();
    lVar11 = (long)_DAT_112763130;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = uVar2;
    func_0x000107c61170(uVar7);
    dVar12 = param_1;
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    *(double *)((long)puVar1 + (long)_DAT_112763134) = dVar12;
    *(byte *)((long)puVar1 + (long)_DAT_112763138) = param_7 ^ 1;
    lVar8 = (long)_DAT_11276313c;
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_8;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276310c) = 0;
    lVar8 = (long)_DAT_112763140;
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_9;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126b9b20;
    func_0x000107c4064c();
    lVar8 = (long)_DAT_112763144;
    *(char *)((long)puVar1 + lVar8) = (char)puVar3;
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f4();
    func_0x000107c3ec60(puVar1);
    func_0x000107c469a4();
    lVar9 = (long)_DAT_1127630f8;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined **)((long)puVar1 + lVar9) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c3d89c(puVar1);
    func_0x000107c61144(auStack_c0,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    puStack_d8 = &UNK_10703e3a0;
    puStack_d0 = &UNK_110989110;
    func_0x000107c6111c(auStack_c8,auStack_c0);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112763108);
    *(undefined **)((long)puVar1 + (long)_DAT_112763108) = puVar3;
    func_0x000107c61170(uVar2);
    lVar10 = (long)_DAT_112763118;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = 0;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f4();
    uVar7 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x000107c469a4(uVar7,uVar14,uVar15,uVar16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined **)((long)puVar1 + lVar10) = puVar3;
    func_0x000107c61170(uVar2);
    puVar4 = puVar1;
    func_0x000107c3b3d8(puVar1);
    func_0x000107c61180();
    func_0x000107c52b50(*(undefined8 *)((long)puVar1 + lVar10));
    func_0x000107c61170(puVar4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar10);
    func_0x000107c4aba4(uVar2);
    func_0x000107c61180();
    dVar13 = 4.0;
    func_0x000107c539d4(0x4010000000000000);
    func_0x000107c61170(uVar2);
    func_0x000107c3d89c(*(undefined8 *)((long)puVar1 + lVar9));
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c6111c(auStack_f0,auStack_c0);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276311c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276311c) = puVar3;
    func_0x000107c61170(uVar2);
    puVar4 = puVar1;
    func_0x000107c3b328();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112763128);
    *(undefined8 **)((long)puVar1 + (long)_DAT_112763128) = puVar4;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126d42a0;
    func_0x000107c610f4();
    func_0x000107c3f220(*(undefined8 *)((long)puVar1 + lVar11));
    dVar12 = dVar13;
    func_0x000107c3f220(*(undefined8 *)((long)puVar1 + lVar11));
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88();
    func_0x000107c61180();
    uVar2 = 0x3fd999999999999a;
    puVar6 = puVar5;
    func_0x000107c3fdd0();
    func_0x000107c61180();
    func_0x000107c3f220(*(undefined8 *)((long)puVar1 + lVar11));
    func_0x000107c469d4(0,0,param_3 - dVar13,param_4 - dVar12,uVar2);
    lVar10 = (long)_DAT_1127630f4;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined **)((long)puVar1 + lVar10) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    dVar13 = param_1;
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    dVar12 = param_1;
    func_0x000107c609b0(param_1,param_2,param_3,param_4);
    func_0x000107c532b4(dVar13 * 0.5,dVar12 * 0.5,*(undefined8 *)((long)puVar1 + lVar10));
    func_0x000107c3d89c(puVar1);
    if (*(char *)((long)puVar1 + lVar8) == '\x01') {
      puVar3 = PTR_PTR_1126d42a8;
      func_0x000107c610f4();
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c61180();
      func_0x000107c469d4(0,0,param_3 + -7.2,param_4 + -7.2,0x401ccccccccccccd);
      lVar8 = (long)_DAT_112763110;
      uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
      *(undefined **)((long)puVar1 + lVar8) = puVar3;
      func_0x000107c61170(uVar2);
      func_0x000107c61170(puVar5);
      dVar12 = param_1;
      func_0x000107c609cc(param_1,param_2,param_3,param_4);
      func_0x000107c609b0(param_1,param_2,param_3,param_4);
      func_0x000107c532b4(dVar12 * 0.5,param_1 * 0.5,*(undefined8 *)((long)puVar1 + lVar8));
      func_0x000107c526c0(0,*(undefined8 *)((long)puVar1 + lVar8));
      func_0x000107c3d89c(puVar1);
      *(undefined8 *)((long)puVar1 + (long)_DAT_112763148) = 0x401ccccccccccccd;
      puVar3 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
      func_0x000107c4aba4();
      func_0x000107c61180();
      lVar10 = (long)_DAT_112763124;
      uVar2 = *(undefined8 *)((long)puVar1 + lVar10);
      *(undefined **)((long)puVar1 + lVar10) = puVar3;
      func_0x000107c61170(uVar2);
      func_0x000107c549b4(*(undefined8 *)((long)puVar1 + lVar10));
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c61180();
      func_0x000107c61178();
      func_0x000107c3ab24();
      func_0x000107c59a18(*(undefined8 *)((long)puVar1 + lVar10));
      func_0x000107c61170(puVar3);
      func_0x000107c55f88(*(undefined8 *)((long)puVar1 + lVar10));
      func_0x000107c59a20(0,*(undefined8 *)((long)puVar1 + lVar10));
      func_0x000107c59a1c(0x3ff0000000000000,*(undefined8 *)((long)puVar1 + lVar10));
      uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
      func_0x000107c4aba4(uVar2);
      func_0x000107c61180();
      func_0x000107c49770();
      func_0x000107c61170(uVar2);
      func_0x000107c550d8(*(undefined8 *)((long)puVar1 + lVar10));
      func_0x000107c3bc00(puVar1);
      puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x000107c610f4();
      func_0x000107c469a4(uVar7,uVar14,uVar15,uVar16);
      lVar8 = (long)_DAT_112763120;
      uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
      *(undefined **)((long)puVar1 + lVar8) = puVar3;
      func_0x000107c61170(uVar2);
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c61180();
      func_0x000107c52b50(*(undefined8 *)((long)puVar1 + lVar8));
      func_0x000107c61170(puVar3);
      func_0x000107c550d8(*(undefined8 *)((long)puVar1 + lVar8));
      func_0x000107c526c0(0,*(undefined8 *)((long)puVar1 + lVar8));
      func_0x000107c5a378(*(undefined8 *)((long)puVar1 + lVar8));
      uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
      func_0x000107c4aba4(uVar2);
      func_0x000107c61180();
      func_0x000107c562fc();
      func_0x000107c61170(uVar2);
      func_0x000107c3d89c(*(undefined8 *)((long)puVar1 + lVar9));
    }
    func_0x000107c3ba2c(puVar1);
    func_0x000107c61120(auStack_f0);
    func_0x000107c61120(auStack_c8);
    func_0x000107c61120(auStack_c0);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  return puVar1;
}



/* Entry: 1007f7148; end: 1007f71b3; -[SCCameraTimerCoolRecordingRingView _currentCaptureColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f7148(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11276315c;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x34);
    func_0x000107c61180();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    func_0x000107c61170(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  func_0x000107c61174(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1007f71b4; end: 1007f7297; -[SCCameraTimerCoolRecordingRingView _createRingShapeLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f71b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x000107c610fc(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  lVar2 = param_1;
  func_0x000107c3b370(param_1);
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c61178();
  func_0x000107c3ab30();
  func_0x000107c57274(puVar1,param_2,lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c3f1bc(*(undefined8 *)(param_1 + _DAT_11276312c));
  puVar4 = puVar1;
  func_0x000107c55f94(puVar1);
  FUN_1007f73bc();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c61178();
  func_0x000107c3ab24();
  func_0x000107c59a18(puVar1,param_2,puVar5);
  func_0x000107c61170(puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c61178();
  func_0x000107c3ab24();
  func_0x000107c549b4(puVar1,param_2,puVar5);
  func_0x000107c61170(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1007f7298; end: 1007f7377; -[SCCameraTimerCoolRecordingRingView _createStaticCutoutRing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f7298(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  lVar4 = (long)_DAT_1127630f8;
  func_0x000107c3ec60(*(undefined8 *)(param_1 + lVar4));
  func_0x000107c3e8a4(puVar1);
  func_0x000107c61180();
  dVar5 = *(double *)(param_1 + _DAT_112763134);
  dVar6 = dVar5 + -14.4;
  func_0x000107c3ec60(*(undefined8 *)(param_1 + lVar4));
  func_0x000107c609cc();
  dVar5 = (dVar5 - dVar6) * 0.5;
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x000107c3e8a4(dVar5,dVar5,dVar6,dVar6,PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3e89c();
  func_0x000107c61180();
  func_0x000107c3df0c(puVar1,param_2,puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1007f7378; end: 1007f73bb; -[_TtC15SCCameraUIScope23SCCameraTimerAppearance cameraRingStrokeWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1007f7378(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130823b0;
  func_0x000107c61428(param_1 + _DAT_1130823b0,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 1007f73bc; end: 1007f741b;  */

void FUN_1007f73bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_colorWithHexCode__1125adf08,0xd4d4d4);
  return;
}



/* Entry: 1007f741c; end: 1007f745f; -[_TtC15SCCameraUIScope23SCCameraTimerAppearance cameraSpinnerStrokeWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1007f741c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130823c0;
  func_0x000107c61428(param_1 + _DAT_1130823c0,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 1007f7460; end: 1007f7763; -[SCCameraTimerSpinnerView initWithFrame:spinnerColor:strokeWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1007f7460(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_b0 [48];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  func_0x000107c61174(param_8);
  puStack_78 = PTR_PTR_1126f85b8;
  puVar1 = &uStack_80;
  uStack_80 = param_6;
  func_0x000107c61154(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x000107c3ec60(puVar1);
    func_0x000107c3e8a4(puVar2);
    func_0x000107c61180();
    FUN_1007f7770(auStack_b0,0xbff921fb54442d18,param_1 * 0.5,param_1 * 0.5);
    func_0x000107c3e050(puVar2);
    func_0x000107c61178(puVar2);
    func_0x000107c3ab30();
    puVar3 = puVar1;
    func_0x000107c5a92c(puVar1);
    func_0x000107c61180();
    func_0x000107c57274();
    func_0x000107c61170(puVar3);
    puVar3 = puVar1;
    func_0x000107c5a92c(puVar1);
    func_0x000107c61180();
    func_0x000107c55f94(param_5);
    func_0x000107c61170(puVar3);
    puVar3 = puVar1;
    func_0x000107c5a92c(puVar1);
    func_0x000107c61180();
    func_0x000107c55f88();
    func_0x000107c61170(puVar3);
    puVar3 = puVar1;
    func_0x000107c5a92c(puVar1);
    func_0x000107c61180();
    func_0x000107c549b4();
    func_0x000107c61170(puVar3);
    func_0x000107c61178(param_8);
    func_0x000107c3ab24();
    puVar3 = puVar1;
    func_0x000107c5a92c(puVar1);
    func_0x000107c61180();
    func_0x000107c59a18();
    func_0x000107c61170(puVar3);
    puVar3 = puVar1;
    func_0x000107c5a92c(puVar1);
    func_0x000107c61180();
    func_0x000107c59a1c(0);
    func_0x000107c61170(puVar3);
    puVar4 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x000107c61160();
    lVar6 = (long)_DAT_11276317c;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar4;
    func_0x000107c61170(uVar5);
    puVar3 = puVar1;
    func_0x000107c5a92c(puVar1);
    func_0x000107c61180();
    func_0x000107c3ec60();
    func_0x000107c54b80(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x000107c61170(puVar3);
    func_0x000107c61178(puVar2);
    func_0x000107c3ab30();
    func_0x000107c57274(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x000107c55f94(param_5,*(undefined8 *)((long)puVar1 + lVar6));
    func_0x000107c55f88(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x000107c549b4(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x000107c61178(param_8);
    func_0x000107c3ab24();
    func_0x000107c59a18(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x000107c59a20(0,*(undefined8 *)((long)puVar1 + lVar6));
    func_0x000107c59a1c(0x3ff0000000000000,*(undefined8 *)((long)puVar1 + lVar6));
    func_0x000107c56f8c(0,*(undefined8 *)((long)puVar1 + lVar6));
    puVar3 = puVar1;
    func_0x000107c5a92c(puVar1);
    func_0x000107c61180();
    func_0x000107c3d894();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(param_8);
  return puVar1;
}



/* Entry: 1007f7764; end: 1007f776f; +[SIGShapeView layerClass] */

void FUN_1007f7764(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  return;
}



/* Entry: 1007f7770; end: 1007f77e3;  */

void FUN_1007f7770(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  undefined1 auStack_a0 [48];
  undefined1 auStack_70 [48];
  
  func_0x000107c60890(auStack_a0,param_3,param_4);
  func_0x000107c60894(auStack_70,param_2,auStack_a0);
  func_0x000107c6089c(param_1,-param_3,-param_4,auStack_70);
  return;
}



/* Entry: 1007f77e4; end: 1007f77e7; -[SIGShapeView shapeLayer] */

void FUN_1007f77e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08c0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layer_112600a48);
  return;
}



/* Entry: 1007f77e8; end: 1007f79db; -[SCCameraTimerContinuousCaptureSpinnerViewV2 initWithFrame:spinnerColor:strokeWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1007f77e8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_b0 [48];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  func_0x000107c61174(param_8);
  puStack_78 = PTR_PTR_1126f8590;
  puVar1 = &uStack_80;
  uStack_80 = param_6;
  func_0x000107c61154(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x000107c5a92c(puVar1);
    func_0x000107c61180();
    func_0x000107c59a18();
    func_0x000107c61170(puVar2);
    puVar2 = puVar1;
    func_0x000107c5a92c(puVar1);
    func_0x000107c61180();
    func_0x000107c549b4();
    func_0x000107c61170(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x000107c3ec60(puVar1);
    func_0x000107c3e8a4();
    func_0x000107c61180();
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    FUN_1007f7770(auStack_b0,0xbff921fb54442d18,param_1 * 0.5,param_1 * 0.5);
    func_0x000107c3e050(puVar3);
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127630bc);
    *(undefined **)((long)puVar1 + (long)_DAT_1127630bc) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar5);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127630c0) = param_5;
    lVar6 = (long)_DAT_1127630c4;
    func_0x000107c61174(param_8);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_8;
    func_0x000107c61170(uVar5);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127630c8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127630c8) = puVar4;
    func_0x000107c61170(uVar5);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127630cc);
    *(undefined **)((long)puVar1 + (long)_DAT_1127630cc) = puVar4;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127630d0) = 0;
  }
  func_0x000107c61170(param_8);
  return puVar1;
}



/* Entry: 1007f79dc; end: 1007f7aeb; -[SCCameraTimerCoolRecordingRingView _layoutHandsFreeInterstitialIdleCaptureFillProgressTrackLayerPath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f79dc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_80 [48];
  
  lVar4 = (long)_DAT_112763124;
  if (*(long *)(param_5 + lVar4) != 0) {
    uVar1 = *(ulong *)(param_5 + _DAT_112763110);
    if (uVar1 != 0) {
      func_0x000107c3ec60();
      func_0x000107c609e0();
      if ((uVar1 & 1) == 0) {
        puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
        func_0x000107c3e8a4(param_1,param_2,param_3,param_4,PTR__OBJC_CLASS___UIBezierPath_1126aec18
                           );
        func_0x000107c61180();
        func_0x000107c609cc(param_1,param_2,param_3,param_4);
        FUN_1007f7770(auStack_80,0xbff921fb54442d18,param_1 * 0.5,param_1 * 0.5);
        func_0x000107c3e050(puVar2,param_6,auStack_80);
        puVar3 = puVar2;
        func_0x000107c61178(puVar2);
        func_0x000107c3ab30();
        func_0x000107c57274(*(undefined8 *)(param_5 + lVar4),param_6,puVar3);
        func_0x000107c55f94(*(undefined8 *)(param_5 + _DAT_112763148),
                            *(undefined8 *)(param_5 + lVar4));
        func_0x000107c61170(puVar2);
      }
    }
  }
  return;
}



/* Entry: 1007f7aec; end: 1007f7e4b; -[SCCameraTimerCoolRecordingRingView _initialSetup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f7aec(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar9 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar1 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar12 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar11 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar10 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uVar8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_150 = uVar1;
  uStack_148 = uVar9;
  uStack_140 = uVar11;
  uStack_138 = uVar12;
  uStack_130 = uVar8;
  uStack_128 = uVar10;
  func_0x000107c5a03c(param_1,param_2,&uStack_150);
  lVar6 = (long)_DAT_1127630f4;
  uStack_150 = uVar1;
  uStack_148 = uVar9;
  uStack_140 = uVar11;
  uStack_138 = uVar12;
  uStack_130 = uVar8;
  uStack_128 = uVar10;
  func_0x000107c5a03c(*(undefined8 *)(param_1 + lVar6),param_2,&uStack_150);
  lVar7 = (long)_DAT_1127630f8;
  uStack_150 = uVar1;
  uStack_148 = uVar9;
  uStack_140 = uVar11;
  uStack_138 = uVar12;
  uStack_130 = uVar8;
  uStack_128 = uVar10;
  func_0x000107c5a03c(*(undefined8 *)(param_1 + lVar7),param_2,&uStack_150);
  lVar5 = (long)_DAT_1127630fc;
  uStack_150 = uVar1;
  uStack_148 = uVar9;
  uStack_140 = uVar11;
  uStack_138 = uVar12;
  uStack_130 = uVar8;
  uStack_128 = uVar10;
  func_0x000107c5a03c(*(undefined8 *)(param_1 + lVar5),param_2,&uStack_150);
  *(undefined1 *)(param_1 + (long)_DAT_112763100) = 0;
  if (*(char *)(param_1 + (long)_DAT_112763104) == '\x01') {
    *(undefined1 *)(param_1 + (long)_DAT_112763104) = 0;
    lVar4 = (long)_DAT_112763108;
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x000107c5c734(uVar1);
    func_0x000107c61180();
    func_0x000107c56f8c(0);
    func_0x000107c61170(uVar1);
    func_0x000107c60720(&uStack_d0,0,0,0x3ff0000000000000);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x000107c5c734(uVar1);
    func_0x000107c61180();
    uStack_108 = uStack_88;
    uStack_110 = uStack_90;
    uStack_f8 = uStack_78;
    uStack_100 = uStack_80;
    uStack_e8 = uStack_68;
    uStack_f0 = uStack_70;
    uStack_d8 = uStack_58;
    uStack_e0 = uStack_60;
    uStack_148 = uStack_c8;
    uStack_150 = uStack_d0;
    uStack_138 = uStack_b8;
    uStack_140 = uStack_c0;
    uStack_128 = uStack_a8;
    uStack_130 = uStack_b0;
    uStack_118 = uStack_98;
    uStack_120 = uStack_a0;
    func_0x000107c5a03c();
    func_0x000107c61170(uVar1);
  }
  lVar4 = (long)_DAT_11276310c;
  if ((*(byte *)(param_1 + lVar4) & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    func_0x000107c61180();
    func_0x000107c52b50(*(undefined8 *)(param_1 + lVar7),param_2,puVar2);
    func_0x000107c61170(puVar2);
    uVar1 = *(undefined8 *)(param_1 + lVar7);
    func_0x000107c4aba4(uVar1);
    func_0x000107c61180();
    func_0x000107c52e0c(0);
    func_0x000107c61170(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar7);
    func_0x000107c4aba4(uVar1);
    func_0x000107c61180();
    func_0x000107c539d4(0);
    func_0x000107c61170(uVar1);
    if ((*(byte *)(param_1 + lVar4) & 1) == 0) {
      func_0x000107c526c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar6));
      func_0x000107c526c0(0,*(undefined8 *)(param_1 + (long)_DAT_112763110));
    }
  }
  *(undefined1 *)(param_1 + (long)_DAT_112763114) = 0;
  func_0x000107c5be00(*(undefined8 *)(param_1 + lVar5));
  func_0x000107c53c68(*(undefined8 *)(param_1 + lVar5),param_2,0);
  func_0x000107c550d8(*(undefined8 *)(param_1 + lVar5),param_2,1);
  lVar6 = (long)_DAT_112763118;
  lVar5 = *(long *)(param_1 + lVar6);
  if ((lVar5 != 0) && ((*(byte *)(param_1 + lVar4) & 1) == 0)) {
    func_0x000107c550d8(lVar5,param_2,1);
    func_0x000107c526c0(0,*(undefined8 *)(param_1 + lVar6));
  }
  uVar1 = *(undefined8 *)(param_1 + (long)_DAT_11276311c);
  func_0x000107c4500c(uVar1);
  func_0x000107c61180();
  if ((*(char *)(param_1 + lVar4) != '\x01') ||
     (uVar3 = param_1, func_0x000107c3c7bc(), (int)uVar3 != 0)) {
    func_0x000107c550d8(uVar1,param_2,1);
    func_0x000107c526c0(0,uVar1);
  }
  lVar6 = (long)_DAT_112763120;
  lVar5 = *(long *)(param_1 + lVar6);
  if (lVar5 != 0) {
    if (*(char *)(param_1 + lVar4) == '\x01') {
      uVar3 = param_1;
      func_0x000107c3c7bc();
      if ((uVar3 & 1) != 0) goto LAB_1007f7dd0;
      lVar5 = *(long *)(param_1 + lVar6);
    }
    func_0x000107c550d8(lVar5,param_2,1);
    func_0x000107c526c0(0,*(undefined8 *)(param_1 + lVar6));
  }
LAB_1007f7dd0:
  lVar6 = (long)_DAT_112763124;
  lVar5 = *(long *)(param_1 + lVar6);
  if (lVar5 != 0) {
    if (*(char *)(param_1 + lVar4) == '\x01') {
      uVar3 = param_1;
      func_0x000107c3c7bc();
      if ((uVar3 & 1) != 0) goto LAB_1007f7e04;
      lVar5 = *(long *)(param_1 + lVar6);
    }
    func_0x000107c550d8(lVar5,param_2,1);
  }
LAB_1007f7e04:
  if ((*(byte *)(param_1 + lVar4) & 1) == 0) {
    func_0x000107c3ad0c(param_1);
    func_0x000107c550d8(*(undefined8 *)(param_1 + (long)_DAT_112763128),param_2,0);
  }
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1007f7e4c; end: 1007f7ec7; -[SCCameraTimerCoolRecordingRingView _addRingSublayers] */

/* WARNING: Possible PIC construction at 0x0001007f7e90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007f7e94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f7e4c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127630f8);
  func_0x000107c4aba4(uVar1);
  func_0x000107c61180();
  func_0x000107c3d894();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1007f7ec8; end: 1007f7fff; -[SCCameraTimerImpl _prepareLensImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f7ec8(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  func_0x000107c3ec60();
  func_0x000107c609cc();
  lVar3 = (long)_DAT_1127629b0;
  dVar5 = param_1;
  func_0x000107c3f1b8(*(undefined8 *)(param_2 + lVar3));
  param_1 = param_1 - dVar5;
  dVar6 = param_1 * 0.5;
  func_0x000107c3ec60(param_2);
  func_0x000107c609b0();
  dVar5 = param_1;
  func_0x000107c3f1b8(*(undefined8 *)(param_2 + lVar3));
  param_1 = param_1 - dVar5;
  dVar7 = param_1 * 0.5;
  func_0x000107c3f1b8(*(undefined8 *)(param_2 + lVar3));
  dVar5 = param_1;
  func_0x000107c3f1b8(*(undefined8 *)(param_2 + lVar3));
  func_0x000107c609d4(dVar6,dVar7,param_1,dVar5);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f4();
  func_0x000107c469a4(dVar6,dVar7,param_1,dVar5);
  lVar4 = (long)_DAT_1127629c0;
  uVar2 = *(undefined8 *)(param_2 + lVar4);
  *(undefined **)(param_2 + lVar4) = puVar1;
  func_0x000107c61170(uVar2);
  lVar3 = param_2;
  func_0x000107c3bca0(param_2);
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_2 + lVar4);
  func_0x000107c4aba4(uVar2);
  func_0x000107c61180();
  func_0x000107c562f4();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_addSubview__11259c880,*(undefined8 *)(param_2 + lVar4));
  return;
}



/* Entry: 1007f8000; end: 1007f8043; -[_TtC15SCCameraUIScope23SCCameraTimerAppearance cameraRingCutoutDiameter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1007f8000(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130823a0;
  func_0x000107c61428(param_1 + _DAT_1130823a0,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 1007f8044; end: 1007f8157; -[SCCameraTimerImpl _lensImageMaskForStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f8044(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  if (param_4 == 0) {
    lVar5 = (long)_DAT_1127629b0;
    func_0x000107c3f1b8(*(undefined8 *)(param_2 + lVar5));
    dVar6 = param_1 * 0.5;
    func_0x000107c3f1b8(*(undefined8 *)(param_2 + lVar5));
    dVar7 = param_1 * 0.5;
    func_0x000107c3f1b8(*(undefined8 *)(param_2 + lVar5));
    func_0x000107c3e8a0(dVar6,dVar7,param_1 * 0.5 + -2.0,0,0x401921fb54442d18,puVar1,param_3,1);
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x000107c610f4(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
    uVar2 = *(undefined8 *)(param_2 + _DAT_1127629c0);
    func_0x000107c4aba4(uVar2);
    func_0x000107c61180();
    func_0x000107c47110(puVar4,param_3,uVar2);
    func_0x000107c61170(uVar2);
    puVar3 = puVar1;
    func_0x000107c61178(puVar1);
    func_0x000107c3ab30();
    func_0x000107c57274(puVar4,param_3,puVar3);
    func_0x000107c61170(puVar1);
  }
  else {
    puVar4 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1007f8158; end: 1007f820f; -[SCCameraTimerImpl _setAppearanceType:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f8158(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x000107c3b1a4();
  if (((uVar1 & 1) == 0) && (*(long *)(param_1 + (long)_DAT_1127629a8) != param_3)) {
    *(long *)(param_1 + (long)_DAT_1127629a8) = param_3;
    uVar2 = *(undefined8 *)(param_1 + (long)_DAT_112762980);
    func_0x000107c3f254();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(param_1 + (long)_DAT_1127629ac);
    *(undefined8 *)(param_1 + (long)_DAT_1127629ac) = uVar2;
    func_0x000107c61170(uVar3);
    if (*(long *)(param_1 + (long)_DAT_11276296c) == 9) {
                    /* WARNING: Could not recover jumptable at 0x00010be28730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__handleDirectorModeRingAppearanc_112567b68);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010be2ed90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__handleRegularRingAppearance__112569500,param_4);
    return;
  }
  return;
}



/* Entry: 1007f8210; end: 1007f821f; -[SCCameraOverlayView cameraTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1007f8210(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762838);
}



/* Entry: 1007f8220; end: 1007f823f; -[SCCameraOverlayView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f8220(long param_1)

{
  func_0x000107c61148(param_1 + _DAT_11276283c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


