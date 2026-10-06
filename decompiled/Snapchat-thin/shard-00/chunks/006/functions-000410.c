/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10087d354; end: 10087d3ef; -[SCStateRequesterPair initWithState:requester:] */

undefined1 *
FUN_10087d354(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112701e40;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x10),param_4);
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10087d3f0; end: 10087d407; -[SCStateRequesterPair state] */

undefined8 FUN_10087d3f0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10087d408; end: 10087d443;  */

void FUN_10087d408(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x20;
  
  puVar3 = *(undefined8 **)(unaff_x20 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  uVar2 = *puVar3;
  *puVar3 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10087d444; end: 10087d503;  */

/* WARNING: Possible PIC construction at 0x00010087d488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010087d49c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010087d4e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010087d4a0) */
/* WARNING: Removing unreachable block (ram,0x00010087d4dc) */
/* WARNING: Removing unreachable block (ram,0x00010087d4d4) */
/* WARNING: Removing unreachable block (ram,0x00010087d4e0) */
/* WARNING: Removing unreachable block (ram,0x00010087d48c) */
/* WARNING: Removing unreachable block (ram,0x00010087d4e8) */

void FUN_10087d444(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c3ebcc(param_2);
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c53130();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10087d504; end: 10087d50b; -[SCCameraLegacyDataSource setCameraVisible:] */

void FUN_10087d504(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10087d50c; end: 10087d523; -[SCCameraLegacyDataSource delegate] */

void FUN_10087d50c(long param_1)

{
  func_0x000107c61148(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10087d524; end: 10087d5ab; -[SCViewfinderDataSourceCoordinatorImpl dataSourceDidStart:] */

/* WARNING: Possible PIC construction at 0x00010087d56c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010087d594: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010087d570) */
/* WARNING: Removing unreachable block (ram,0x00010087d598) */
/* WARNING: Removing unreachable block (ram,0x00010087d574) */

void FUN_10087d524(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c3d114(param_1);
  func_0x000107c61180();
  func_0x000107c49cec(param_3,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10087d5ac; end: 10087d60b; -[SCViewfinderDataSourceCoordinatorImpl activeDataSource] */

void FUN_10087d5ac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c611ec(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x000107c40808();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x000107c61174(uVar2);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c4aa28(uVar2);
    func_0x000107c61180();
  }
  func_0x000107c611f0(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10087d60c; end: 10087d623; -[SCViewfinderDataSourceCoordinatorImpl delegate] */

void FUN_10087d60c(long param_1)

{
  func_0x000107c61148(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10087d624; end: 10087d643; -[SCViewfinderPipelineCoordinator dataSourceDidStart:] */

void FUN_10087d624(void)

{
  return;
}



/* Entry: 10087d644; end: 10087d7b7;  */

/* WARNING: Possible PIC construction at 0x00010087d674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010087d6c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010087d6d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010087d72c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010087d73c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010087d78c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010087d79c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010087d790) */
/* WARNING: Removing unreachable block (ram,0x00010087d740) */
/* WARNING: Removing unreachable block (ram,0x00010087d730) */
/* WARNING: Removing unreachable block (ram,0x00010087d6d8) */
/* WARNING: Removing unreachable block (ram,0x00010087d6c8) */
/* WARNING: Removing unreachable block (ram,0x00010087d678) */
/* WARNING: Removing unreachable block (ram,0x00010087d7a0) */

void FUN_10087d644(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined **)(lVar2 + 0x28) = PTR____kCFBooleanTrue_11034ab68;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10087d7b8; end: 10087d82b;  */

void FUN_10087d7b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c8f48;
  func_0x000107c610f4(PTR_PTR_1126c8f48);
  lVar2 = param_1 + 0x20;
  func_0x000107c61148(lVar2);
  param_1 = param_1 + 0x28;
  func_0x000107c61148(param_1);
  func_0x000107c47290(puVar1,param_2,lVar2,param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10087d82c; end: 10087d8bf; -[SCCameraCaptureLensProviderAdapter initWithLensEffectApplicator:processingPipeline:] */

undefined1 *
FUN_10087d82c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f0808;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10087d8c0; end: 10087d997;  */

/* WARNING: Possible PIC construction at 0x00010087d8d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010087d8d8) */

void FUN_10087d8c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x28);
  return;
}



/* Entry: 10087d998; end: 10087d99f;  */

void FUN_10087d998(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd97d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__cameraWillAppear_112553f90);
  return;
}



/* Entry: 10087d9a0; end: 10087d9c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087d9a0(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_1127611c0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10087d9c4; end: 10087da3b; -[SCSRLensEffectPluginCameraLifecycleObservingEntryPoint _cameraWillAppear] */

/* WARNING: Possible PIC construction at 0x00010087da1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010087da20) */

void FUN_10087d9c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_10087d9a0();
  func_0x000107c61180();
  func_0x000107c3f134();
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126d3358;
  func_0x000107c3f324(PTR_PTR_1126d3358);
  func_0x000107c61180();
  func_0x000107c4d664(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10087da3c; end: 10087da43; -[SCSRLensEffectPluginCameraLifecycleProxyServices cameraLifecycleEventSubject] */

undefined8 FUN_10087da3c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10087da44; end: 10087da8b; +[SCSRCameraLifecycleEvent cameraWillAppear] */

void FUN_10087da44(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d3358;
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c498b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10087da8c; end: 10087dafb; -[SCSRCameraLifecycleEvent internalInit] */

void FUN_10087da8c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x000107c61174();
  puStack_28 = PTR_PTR_1126f7d70;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10087dafc; end: 10087db93; -[SCCameraFeatureScopeWorkflow _handleFeatureActivation] */

/* WARNING: Possible PIC construction at 0x00010087db28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010087db48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010087db68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010087db4c) */
/* WARNING: Removing unreachable block (ram,0x00010087db2c) */
/* WARNING: Removing unreachable block (ram,0x00010087db6c) */

void FUN_10087dafc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c3d06c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10087db94; end: 10087ddb7; -[SCCameraDefaultFeatureActivatorImpl activateFeaturesAfterStartup] */

void FUN_10087db94(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  
  func_0x000107c61144(auStack_78,param_1);
  puStack_a0 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_10087ddb8;
  puStack_b0 = &UNK_11084b9d0;
  lStack_a8 = param_1;
  puStack_90 = puStack_a0;
  func_0x000107c4b944(*(undefined8 *)(param_1 + 8));
  if ((*(byte *)(puStack_90 + 3) & 1) == 0) {
    lVar1 = param_1 + 0x10;
    func_0x000107c61148();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar4 = PTR_PTR_1126ae960;
    puVar3 = PTR_PTR_1126c82e8;
    func_0x000107c4d704(PTR_PTR_1126c82e8);
    func_0x000107c61180();
    func_0x000107c3f044(puVar4);
    func_0x000107c61180();
    puVar5 = PTR_PTR_1126ae970;
    func_0x000107c44e60(PTR_PTR_1126ae970);
    func_0x000107c61180();
    puVar6 = puVar5;
    FUN_100078e94();
    func_0x000107c61180();
    puVar7 = puVar6;
    func_0x000107c4f7c0();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_d0,auStack_78);
    lVar8 = lVar2;
    func_0x000107c5e08c();
    func_0x000107c61180();
    uVar9 = *(undefined8 *)(param_1 + 0x48);
    *(long *)(param_1 + 0x48) = lVar8;
    func_0x000107c61170(uVar9);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c61120(auStack_d0);
  }
  func_0x000107c60bcc(&uStack_98,8);
  func_0x000107c61120(auStack_78);
  return;
}



/* Entry: 10087ddb8; end: 10087ddcb;  */

void FUN_10087ddb8(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x31);
  return;
}



/* Entry: 10087ddcc; end: 10087ddd3; +[SCAttributedCameraTask nonCriticalfeatureActivation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087ddcc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309aeb0) = 2;
  *(undefined8 *)(lVar1 + _DAT_11309aeb8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec0) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aed0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10087ddd4; end: 10087ddfb; -[SCMainQueuePerformerImpl queue] */

void FUN_10087ddd4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10087ddfc; end: 10087de1b;  */

void FUN_10087ddfc(void)

{
  return;
}



/* Entry: 10087de1c; end: 10087de1f; -[SCMainCameraViewControllerStartupWorkflow logPageViewAndStartCameraWhenViewAppears:] */

void FUN_10087de1c(void)

{
  return;
}



/* Entry: 10087de20; end: 10087dea3; -[SCMainCameraViewController viewDidAppearAtOffset:] */

/* WARNING: Possible PIC construction at 0x00010087de78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010087de7c) */

void FUN_10087de20(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x000107c5bcbc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126c8d40;
  func_0x000107c61158(PTR_PTR_1126c8d40);
  uVar3 = param_1;
  func_0x000107c6115c(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10087dea4; end: 10087deb3; -[SCCameraViewController startupWorkflow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10087dea4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127624cc);
}



/* Entry: 10087deb4; end: 10087df93; -[SCMainCameraViewControllerStartupWorkflow performViewDidAppear:atOffset:] */

/* WARNING: Possible PIC construction at 0x00010087df6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010087df7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010087df80) */

void FUN_10087deb4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  lVar2 = param_3;
  func_0x000107c49b18();
  if ((int)lVar2 == 0) {
    func_0x000107c5be34(param_3);
    lVar2 = lVar1;
    func_0x000107c3f300();
    if (lVar2 != 0) {
      func_0x000107c3f16c(lVar1);
      func_0x000107c61180();
      func_0x000107c57d5c();
      goto code_r0x000107c61170;
    }
  }
  else {
    func_0x000107c5bad8(param_1,param_2,param_3);
    lVar2 = lVar1;
    func_0x000107c3f300();
    if (lVar2 != 0) {
      lVar2 = lVar1;
      func_0x000107c3f16c(lVar1);
      func_0x000107c61180();
      func_0x000107c3f300(lVar1);
      func_0x000107c52ec8(lVar2,param_2,lVar1);
      lVar1 = lVar2;
      goto code_r0x000107c61170;
    }
  }
  func_0x000107c40184(param_3);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10087df94; end: 10087e003; -[SCMainCameraViewController isCameraViewFullyVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10087df94(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276230c;
  lVar1 = param_1 + lVar2;
  func_0x000107c61148();
  if (lVar1 == 0) {
    lVar2 = 1;
  }
  else {
    param_1 = param_1 + lVar2;
    func_0x000107c61148(param_1);
    lVar2 = param_1;
    func_0x000107c49e48();
    func_0x000107c61170(param_1);
  }
  func_0x000107c61170(lVar1);
  return lVar2;
}



/* Entry: 10087e004; end: 10087e00b; -[SCSwipeViewContainerViewController isFullyVisible:] */

void FUN_10087e004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c074210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_isFullyVisible_withReason__1125faa90,param_3,0);
  return;
}



/* Entry: 10087e00c; end: 10087e05b; -[SCSwipeViewContainerViewController isFullyVisible:withReason:] */

uint FUN_10087e00c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x000107c49e44();
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = &PTR____CFConstantStringClassReference_110ee4b98;
    }
  }
  else {
    func_0x000107c3bad0(param_1,param_2,param_4);
    uVar1 = (uint)param_1 ^ 1;
  }
  return uVar1;
}



/* Entry: 10087e05c; end: 10087e06b; -[SCSwipeViewContainerViewController isFullyVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10087e05c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112776ad8);
}



/* Entry: 10087e06c; end: 10087e0d3; -[SCCameraViewController stopHandlingVolumeButtonEvents] */

/* WARNING: Possible PIC construction at 0x00010087e0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010087e0b8) */

void FUN_10087e06c(undefined8 param_1)

{
  func_0x000107c3f0bc();
  func_0x000107c61180();
  func_0x000107c5e02c();
  func_0x000107c61180();
  func_0x000107c42e38();
  func_0x000107c61180();
  func_0x000107c5be34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10087e0d4; end: 10087e103;  */

bool FUN_10087e0d4(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c61170();
  return param_1 != 0;
}



/* Entry: 10087e104; end: 10087e1eb;  */

void FUN_10087e104(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126c79d8;
    func_0x000107c610f4(PTR_PTR_1126c79d8);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x000107c5c734(uVar1);
    func_0x000107c61180();
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    func_0x000107c3f0f4(uVar2);
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(param_1 + 400);
    func_0x000107c41178(uVar3);
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    func_0x000107c5e030(uVar4);
    func_0x000107c61180();
    func_0x000107c4584c(puVar5,param_2,uVar1,uVar2,uVar3,uVar4);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10087e1ec; end: 10087e1f3; -[SCCameraConfigurationImpl volumeButtonCaptureConfiguration] */

undefined8 FUN_10087e1ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x138);
}



/* Entry: 10087e1f4; end: 10087e34b; -[SCFeatureVolumeButtonCaptureImpl initWithAudioSession:cameraHardwareResource:customVolumeController:volumeButtonCaptureConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10087e1f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_58 = PTR_PTR_1126efff0;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112741480;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112741484) = 0;
    func_0x000107c611a0((undefined1 *)((long)puVar1 + (long)_DAT_112741488),param_4);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + (long)_DAT_11274148c),param_5);
    lVar5 = (long)_DAT_112741490;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112741494);
    *(undefined **)((long)puVar1 + (long)_DAT_112741494) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c3d740(*(undefined8 *)((long)puVar1 + lVar4));
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10087e34c; end: 10087e353; -[SCAudioSessionCore addListener:] */

void FUN_10087e34c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10087e354; end: 10087e5ff; -[SCAudioSessionListenerAnnouncer addListener:] */

undefined8 FUN_10087e354(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c60d88(param_1 + 8);
  plVar3 = (long *)0x30;
  func_0x000107c60e20();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_DAT_110d5b3b0;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    func_0x000107c61144(auStack_90,param_3);
    FUN_10087e600(plVar10,auStack_90);
    func_0x000107c61120(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_10087e740(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_10087e508:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        func_0x000107c60d68(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        func_0x000107c61148();
        func_0x000107c61170();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_10087e528;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      func_0x000107c61148();
      func_0x000107c61170();
      if (lVar5 != 0) {
        FUN_10087e600(plVar10,lVar7);
      }
    }
    func_0x000107c61144(auStack_78,param_3);
    FUN_10087e600(plVar10,auStack_78);
    func_0x000107c61120(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_10087e740(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_10087e508;
    }
  }
  uVar9 = 1;
LAB_10087e528:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      func_0x000107c60d68(plVar3);
    }
  }
  func_0x000107c60d8c(param_1 + 8);
  func_0x000107c61170(param_3);
  return uVar9;
}



/* Entry: 10087e600; end: 10087e73f;  */

void FUN_10087e600(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    func_0x000107c6111c(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      func_0x000107c30964();
LAB_10087e73c:
      func_0x000104bd35f4();
      plVar5 = param_1;
      func_0x000107c60c40();
      func_0x000107c60dc4();
      lVar9 = *param_2;
      lVar11 = param_1[1];
      lVar4 = *param_1;
      param_1[1] = param_2[1];
      *param_1 = lVar9;
      param_2[1] = lVar11;
      *param_2 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_10087e73c;
      lVar4 = uVar7 << 3;
      func_0x000107c60e20();
    }
    lVar9 = lVar4 + lVar9;
    func_0x000107c6111c(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar11 = lVar8;
    lVar10 = lVar1;
    if (lVar3 != lVar8) {
      do {
        func_0x000107c6114c(lVar10,lVar11);
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar11 != lVar3);
      do {
        func_0x000107c61120(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      func_0x000107c60e14(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 10087e740; end: 10087e787;  */

void FUN_10087e740(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x000107c60c40();
  func_0x000107c60dc4();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 10087e788; end: 10087e7e7;  */

void FUN_10087e788(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(lVar2);
  lVar1 = lVar2;
  FUN_10010fab4(lVar2,PTR_DAT_1126a5898);
  if ((int)lVar1 == 0 || lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x000107c61174(lVar2);
    lVar1 = lVar2;
  }
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10087e7e8; end: 10087e7fb; -[SCFeatureVolumeButtonCaptureImpl setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087e7e8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127414a4,param_3);
  return;
}



/* Entry: 10087e7fc; end: 10087e877; -[SCFeatureVolumeButtonCaptureImpl stopHandlingVolumeButtonEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087e7fc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x000107c44680();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4a22c();
  func_0x000107c61170(lVar1);
  lVar1 = param_1;
  func_0x000107c44680(param_1);
  func_0x000107c61180();
  if ((int)lVar2 == 0) {
    func_0x000107c5be34();
  }
  else {
    func_0x000107c5be38();
  }
  func_0x000107c61170(lVar1);
  *(undefined1 *)(param_1 + _DAT_112741478) = 0;
  return;
}



/* Entry: 10087e878; end: 10087e8d7; -[SCFeatureVolumeButtonCaptureImpl handler] */

void FUN_10087e878(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x000107c4168c();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5e034();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c53fcc(uVar2,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10087e8d8; end: 10087e8f7; -[SCFeatureVolumeButtonCaptureImpl delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087e8d8(long param_1)

{
  func_0x000107c61148(param_1 + _DAT_1127414a4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10087e8f8; end: 10087e907; -[SCCameraViewController volumeButtonCaptureHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087e8f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a0f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127624bc),PTR_s_volumeButtonHandler_112685de8);
  return;
}



/* Entry: 10087e908; end: 10087e90f; -[SCCameraViewControllerInternalState volumeButtonHandler] */

undefined8 FUN_10087e908(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10087e910; end: 10087ea8f; -[SCMainCameraViewController configureToolbarExpandCollapseObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087e910(long param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61144(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c61160();
  uVar8 = *(undefined8 *)(param_1 + _DAT_11276234c);
  *(undefined **)(param_1 + _DAT_11276234c) = puVar1;
  func_0x000107c61170(uVar8);
  puVar2 = auStack_68;
  func_0x000107c61148(puVar2);
  puVar3 = puVar2;
  func_0x000107c3f0bc();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c3f268();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c42e38();
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c3f26c();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_70,auStack_68);
  puVar7 = puVar6;
  func_0x000107c5c320(puVar6);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
  return;
}



/* Entry: 10087ea90; end: 10087eb17;  */

bool FUN_10087ea90(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c61170();
  return param_1 != 0;
}



/* Entry: 10087eb18; end: 10087ed7b; -[SCCameraCoreFeatureProviderPluginWorkflow _createVerticalToolbar:] */

void FUN_10087eb18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  func_0x000107c61174(param_3);
  puVar3 = PTR_PTR_1126c7b50;
  func_0x000107c610f4();
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5de90();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4c168();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c3f300(uVar6);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10087ed7c;
  puStack_88 = &UNK_11084e7d0;
  func_0x000107c61174(param_3);
  ppuVar7 = &puStack_a0;
  uStack_80 = param_3;
  FUN_10087ed7c();
  func_0x000107c61180();
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c5dd3c();
  func_0x000107c61180();
  uVar9 = uVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar10 = *(undefined8 *)(param_1 + 0x78);
  func_0x000107c3f0f4();
  func_0x000107c61180();
  uVar16 = *(undefined8 *)(param_1 + 0x28);
  puStack_c8 = puVar2;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_10087ee58;
  puStack_b0 = &UNK_11084e7d0;
  uStack_a8 = param_3;
  func_0x000107c61174(param_3);
  ppuVar11 = &puStack_c8;
  FUN_10087ee58();
  func_0x000107c61180();
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c4d16c();
  func_0x000107c61180();
  uVar13 = uVar12;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar14 = *(undefined8 *)(param_1 + 0x60);
  func_0x000107c4ec80();
  func_0x000107c61180();
  uVar15 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c3f274();
  func_0x000107c61180();
  func_0x000107c45738(puVar3,param_2,uVar1,uVar4,uVar5,uVar6,ppuVar7,uVar9,uVar10,uVar16,ppuVar11,
                      uVar13,uVar14,uVar15,*(undefined8 *)(param_1 + 0x1f0),
                      *(undefined8 *)(param_1 + 0xf0));
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(ppuVar11);
  func_0x000107c61170(uStack_a8);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(ppuVar7);
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10087ed7c; end: 10087ee57;  */

void FUN_10087ed7c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10087ee58; end: 10087ef33;  */

void FUN_10087ee58(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10087ef34; end: 10087ef63;  */

void FUN_10087ef34(void)

{
  func_0x000107c610f4(PTR_PTR_1126b9be0);
  func_0x000107c45db0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10087ef64; end: 10087efd7; -[SCCameraMultiCamModeConfigurationImpl initWithCircumstanceEngine:] */

undefined1 * FUN_10087ef64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e8930;
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



/* Entry: 10087efd8; end: 10087f853; -[SCCameraVerticalToolbar initWithApplicationLifecycleEvents:viewControllerLifecycleEvents:mainCameraViewControllerLifecycleEvents:cameraViewType:cameraUserActionLogger:verticalToolbarConfiguration:cameraHardwareResource:cameraConfiguration:afterCaptureActionTracker:multiCamModeConfig:userPreferences:cameraToolbarUIOrchestrator:appStartExperimentReader:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10087efd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
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
  puStack_80 = PTR_PTR_1126f04b8;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112742b20) = param_6;
    lVar11 = (long)_DAT_112742b24;
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_8;
    func_0x000107c61170(uVar2);
    lVar11 = (long)_DAT_112742b28;
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_7;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSObject_1126b1300;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112742b2c);
    *(undefined **)((long)puVar1 + (long)_DAT_112742b2c) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSObject_1126b1300;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112742b30);
    *(undefined **)((long)puVar1 + (long)_DAT_112742b30) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112742b34);
    *(undefined **)((long)puVar1 + (long)_DAT_112742b34) = puVar3;
    func_0x000107c61170(uVar2);
    lVar11 = (long)_DAT_112742b38;
    func_0x000107c61174(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_14;
    func_0x000107c61170(uVar2);
    uVar2 = param_14;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar9 = uVar2;
    func_0x000107c41620();
    func_0x000107c61180();
    uVar10 = uVar9;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    uVar8 = *(undefined8 *)((long)puVar1 + (long)_DAT_112742b3c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112742b3c) = uVar10;
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126b9cb0;
    uVar2 = param_16;
    func_0x000107c3de48(param_16);
    func_0x000107c61180();
    func_0x000107c5cbb8();
    *(bool *)((long)puVar1 + (long)_DAT_112742b40) = puVar3 == (undefined *)0x2;
    func_0x000107c61170(uVar2);
    uVar2 = param_12;
    func_0x000107c4a0a0();
    *(byte *)((long)puVar1 + (long)_DAT_112742b44) = (byte)uVar2 ^ 1;
    puVar4 = puVar1;
    func_0x000107c3c7b8();
    *(char *)((long)puVar1 + (long)_DAT_112742b48) = (char)puVar4;
    uVar2 = param_11;
    func_0x000107c42e38();
    func_0x000107c61180();
    lVar11 = (long)_DAT_112742b4c;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = uVar2;
    func_0x000107c61170(uVar9);
    uVar2 = param_9;
    func_0x000107c5c734(param_9);
    func_0x000107c61180();
    uVar9 = uVar2;
    func_0x000107c3f630();
    func_0x000107c61180();
    uVar10 = param_9;
    func_0x000107c5c734(param_9);
    func_0x000107c61180();
    uVar8 = uVar10;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    uVar5 = uVar8;
    func_0x000107c40794();
    uVar6 = param_9;
    func_0x000107c5c734(param_9);
    func_0x000107c61180();
    uVar7 = uVar6;
    func_0x000107c4c238();
    func_0x000107c61180();
    func_0x000107c5bb2c(puVar1);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112742b50);
    *(undefined **)((long)puVar1 + (long)_DAT_112742b50) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112742b54);
    *(undefined **)((long)puVar1 + (long)_DAT_112742b54) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112742b58);
    *(undefined **)((long)puVar1 + (long)_DAT_112742b58) = puVar3;
    func_0x000107c61170(uVar2);
    lVar12 = (long)_DAT_112742b5c;
    func_0x000107c61174(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112742b60,param_13);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112742b64);
    *(undefined **)((long)puVar1 + (long)_DAT_112742b64) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_90,puVar1);
    uVar2 = param_3;
    func_0x000107c5e39c(param_3);
    func_0x000107c61180();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    puStack_a8 = &UNK_1061e4a84;
    puStack_a0 = &UNK_110846510;
    func_0x000107c6111c(auStack_98,auStack_90);
    uVar9 = uVar2;
    func_0x000107c5c320(uVar2);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar2);
    uVar2 = param_3;
    func_0x000107c41b80(param_3);
    func_0x000107c61180();
    puStack_e0 = puVar3;
    uStack_d8 = 0xc2000000;
    puStack_d0 = &UNK_1061e4abc;
    puStack_c8 = &UNK_110846510;
    func_0x000107c6111c(auStack_c0,auStack_90);
    uVar9 = uVar2;
    func_0x000107c5c320(uVar2);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar2);
    uStack_100 = 0;
    uStack_f0 = 0x2020000000;
    uStack_e8 = 0;
    puStack_130 = puVar3;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_10087fb28;
    puStack_118 = &UNK_1109151f8;
    puStack_f8 = &uStack_100;
    func_0x000107c6111c(auStack_108,auStack_90);
    uVar2 = param_4;
    puStack_110 = &uStack_100;
    func_0x000107c5c320(param_4);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar2);
    puStack_158 = puVar3;
    uStack_150 = 0xc2000000;
    pcStack_148 = FUN_1008bb598;
    puStack_140 = &UNK_11090b470;
    func_0x000107c6111c(auStack_138,auStack_90);
    uVar2 = param_5;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar2);
    uVar9 = *(undefined8 *)((long)puVar1 + lVar11);
    func_0x000107c3da18();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_160,auStack_90);
    uVar2 = uVar9;
    func_0x000107c5c320();
    func_0x000107c61180();
    uVar10 = *(undefined8 *)((long)puVar1 + (long)_DAT_112742b68);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112742b68) = uVar2;
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar9);
    lVar11 = (long)_DAT_112742b6c;
    func_0x000107c61174(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_15;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112742b70,param_16);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112742b74);
    *(undefined **)((long)puVar1 + (long)_DAT_112742b74) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112742b78);
    *(undefined **)((long)puVar1 + (long)_DAT_112742b78) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112742b7c);
    *(undefined **)((long)puVar1 + (long)_DAT_112742b7c) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112742b80);
    *(undefined **)((long)puVar1 + (long)_DAT_112742b80) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_160);
    func_0x000107c61120(auStack_138);
    func_0x000107c61120(auStack_108);
    func_0x000107c60bcc(&uStack_100,8);
    func_0x000107c61120(auStack_c0);
    func_0x000107c61120(auStack_98);
    func_0x000107c61120(auStack_90);
  }
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
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10087f854; end: 10087f85b; -[SCStateOrchestrator defaultState] */

undefined8 FUN_10087f854(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10087f85c; end: 10087f85f; -[SCCameraMultiCamModeConfigurationImpl isMultiCamSupported] */

void FUN_10087f85c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be44690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isSupported_11256eb40);
  return;
}



/* Entry: 10087f860; end: 10087f86b; -[SCCameraMultiCamModeConfigurationImpl _isSupported] */

void FUN_10087f860(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c078050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___AVCaptureMultiCamSession_1126b70a0,
             PTR_s_isMultiCamSupported_1125fba20);
  return;
}



/* Entry: 10087f86c; end: 10087f913; -[SCCameraVerticalToolbar _shouldShowCameraLabelsOnLaunch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10087f86c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  func_0x000107c61174(param_3);
  lVar4 = (long)_DAT_112742b20;
  if (*(long *)(param_1 + lVar4) == 0) {
LAB_10087f8f0:
    uVar3 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126b9cb0;
    func_0x000107c4d610(PTR_PTR_1126b9cb0,param_2,param_3);
    if (((ulong)puVar1 & 1) == 0) {
      lVar5 = (long)_DAT_112742b24;
      uVar2 = *(ulong *)(param_1 + lVar5);
      func_0x000107c41d24(uVar2,param_2,*(undefined8 *)(param_1 + lVar4));
      if ((uVar2 & 1) == 0) {
        puVar1 = PTR_PTR_1126b9cb0;
        func_0x000107c4dde0(PTR_PTR_1126b9cb0,param_2,param_3);
        if ((int)puVar1 != 0) {
          func_0x000107c559e8(*(undefined8 *)(param_1 + lVar5),param_2,
                              *(undefined8 *)(param_1 + lVar4));
        }
        goto LAB_10087f8f0;
      }
    }
    uVar3 = 0;
  }
  func_0x000107c61170(param_3);
  return uVar3;
}



/* Entry: 10087f914; end: 10087f983;  */

void FUN_10087f914(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c3da14(param_1);
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c42e38();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10087f984; end: 10087f98b; -[SCMutablePublicCameraFeatureCatalog afterCaptureActionTracker] */

undefined8 FUN_10087f984(long param_1)

{
  return *(undefined8 *)(param_1 + 0x290);
}



/* Entry: 10087f98c; end: 10087fb27; -[SCCameraVerticalToolbar startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087f98c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61144(auStack_68,param_1);
  lVar6 = (long)_DAT_112742be4;
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    func_0x000107c61170(uVar5);
    uVar5 = param_5;
    func_0x000107c5c734(param_5);
    func_0x000107c61180();
    uVar2 = uVar5;
    func_0x000107c4c940();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5d58c();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_70,auStack_68);
    uVar4 = uVar3;
    func_0x000107c5c320(uVar3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar5);
    func_0x000107c61120(auStack_70);
  }
  func_0x000107c61120(auStack_68);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10087fb28; end: 10087fc33;  */

void FUN_10087fb28(long param_1,undefined8 param_2)

{
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1008c9998;
  puStack_58 = &UNK_11090b200;
  func_0x000107c6111c(auStack_48,param_1 + 0x28);
  uStack_50 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c6111c(auStack_78,param_1 + 0x28);
  func_0x000107c4c7b0(param_2);
  func_0x000107c61120(auStack_78);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 10087fc34; end: 10087fc37;  */

void FUN_10087fc34(void)

{
  return;
}



/* Entry: 10087fc38; end: 10087fcb3;  */

bool FUN_10087fc38(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c61170();
  return param_1 != 0;
}



/* Entry: 10087fcb4; end: 10087fd1f; -[SCFeatureAfterCaptureActionTrackerImpl init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10087fcb4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ef908;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273ee44);
    *(undefined **)((long)puVar1 + (long)_DAT_11273ee44) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10087fd20; end: 10087fd2f; -[SCFeatureAfterCaptureActionTrackerImpl afterCaptureActionTrackerObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10087fd20(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273ee44);
}



/* Entry: 10087fd30; end: 10087fd3b; -[SCFeatureReference .cxx_destruct] */

void FUN_10087fd30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10087fd3c; end: 10087fd4f; -[SCCameraVerticalToolbar configureLayout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087fd3c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112742bbc,param_3);
  return;
}



/* Entry: 10087fd50; end: 10087fdc3; -[SCCameraVerticalToolbar configureWithView:] */

/* WARNING: Possible PIC construction at 0x00010087fd84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010087fdac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010087fd88) */
/* WARNING: Removing unreachable block (ram,0x00010087fdb0) */
/* WARNING: Removing unreachable block (ram,0x00010087fd8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087fd50(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61148(param_1 + _DAT_112742bb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10087fdc4; end: 1008800d3; -[SCCameraVerticalToolbar _createAndSetupView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10087fdc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_78,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1008800d4;
  puStack_90 = &UNK_110855770;
  func_0x000107c6111c(auStack_80,auStack_78);
  func_0x000107c61174(param_3);
  uStack_88 = param_3;
  func_0x000107c4c268();
  func_0x000107c61180();
  lVar8 = (long)_DAT_112742bd8;
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar1;
  func_0x000107c61170(uVar7);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_b0,auStack_78);
  func_0x000107c4c268();
  func_0x000107c61180();
  lVar9 = (long)_DAT_112742bac;
  uVar7 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar1;
  func_0x000107c61170(uVar7);
  func_0x000107c40aa4(*(undefined8 *)(param_1 + lVar8));
  func_0x000107c611b0();
  func_0x000107c40aa4(*(undefined8 *)(param_1 + lVar9));
  func_0x000107c611b0();
  uVar2 = *(ulong *)(param_1 + lVar8);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126c8b18;
  func_0x000107c61158(PTR_PTR_1126c8b18);
  uVar3 = uVar2;
  func_0x000107c6115c(uVar2,puVar1);
  func_0x000107c61170(uVar2);
  if ((uVar3 & 1) != 0) {
    uVar7 = *(undefined8 *)(param_1 + lVar8);
    func_0x000107c5c734(uVar7);
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(param_1 + lVar9);
    func_0x000107c5c734(uVar4);
    func_0x000107c61180();
    func_0x000107c59eb0(uVar7);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar7);
  }
  func_0x000107c3c030(param_1);
  lVar10 = (long)_DAT_112742bbc;
  lVar5 = param_1 + lVar10;
  func_0x000107c61148(lVar5);
  lVar6 = lVar5;
  func_0x000107c5dd40();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(param_1 + lVar8);
  func_0x000107c5c734(uVar7);
  func_0x000107c61180();
  func_0x000107c3e2c8(lVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  lVar10 = param_1 + lVar10;
  func_0x000107c61148(lVar10);
  lVar8 = lVar10;
  func_0x000107c5dd44();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(param_1 + lVar9);
  func_0x000107c5c734(uVar7);
  func_0x000107c61180();
  func_0x000107c3e2c8(lVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar10);
  func_0x000107c3c6c8(param_1);
  func_0x000107c3cbd4(param_1);
  func_0x000107c3cb68(param_1);
  func_0x000107c3c658(param_1);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61170(uStack_88);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_78);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008800d4; end: 10088011b;  */

void FUN_1008800d4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b3a4();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10088011c; end: 10088056b; -[SCCameraVerticalToolbar _createToolbarBackgroundView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10088011c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
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
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  
  puVar1 = PTR_PTR_1126c8b18;
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c610f4();
  func_0x000107c469a4(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x000107c537e8();
  func_0x000107c61170(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112742bac);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  func_0x000107c59eb0(puVar1);
  func_0x000107c61170(uVar2);
  param_1 = param_1 + _DAT_112742b70;
  func_0x000107c61148(param_1);
  func_0x000107c5340c(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c527b0(puVar1);
  puVar3 = PTR_PTR_1126b1198;
  func_0x000107c61160();
  func_0x000107c5a378();
  func_0x000107c5a050(puVar3);
  func_0x000107c3d89c(puVar1);
  puVar17 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar3;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar5 = puVar1;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar6 = puVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  puVar7 = puVar3;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar8 = puVar1;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar9 = puVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  puVar10 = puVar3;
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar11 = puVar1;
  func_0x000107c4acb0(puVar1);
  func_0x000107c61180();
  puVar12 = puVar10;
  func_0x000107c40280();
  func_0x000107c61180();
  puVar13 = puVar3;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar14 = puVar1;
  func_0x000107c5ce8c(puVar1);
  func_0x000107c61180();
  puVar15 = puVar13;
  func_0x000107c40280();
  func_0x000107c61180();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61180();
  func_0x000107c3d048(puVar17);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  puVar17 = puVar3;
  func_0x000107c44470(puVar3);
  func_0x000107c61180();
  func_0x000107c597c4(0x3ff0000000000000,0x3fe0000000000000);
  func_0x000107c61170(puVar17);
  puVar17 = puVar3;
  func_0x000107c44470(puVar3);
  func_0x000107c61180();
  func_0x000107c54598(0,0x3fe0000000000000);
  func_0x000107c61170(puVar17);
  puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar4 = puVar17;
  func_0x000107c3fdd0(0x3fe999999999999a);
  func_0x000107c61180();
  func_0x000107c61178();
  func_0x000107c3ab24();
  puVar5 = puVar17;
  func_0x000107c3fdd0(0);
  func_0x000107c61180();
  func_0x000107c61178();
  func_0x000107c3ab24();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61180();
  func_0x000107c535a0(puVar3);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  puVar4 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  func_0x000107c610f4(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
  func_0x000107c48c2c();
  func_0x000107c56704(0);
  puVar5 = puVar4;
  func_0x000107c3d6fc(puVar1);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar17);
  func_0x000107c61170(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(puVar3 + _DAT_112742b14,puVar5);
  return;
}



/* Entry: 10088056c; end: 10088057f; -[SCCameraToolbarOverlayView setContainerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10088056c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112742b14,param_3);
  return;
}



/* Entry: 100880580; end: 100880593; -[SCCameraToolbarOverlayView setToolbarView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100880580(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112742b10,param_3);
  return;
}



/* Entry: 100880594; end: 1008805a7; -[SCCameraToolbarOverlayView setCircumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100880594(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112742b18,param_3);
  return;
}



/* Entry: 1008805a8; end: 1008805bb; -[SCCameraToolbarOverlayView setAppStartExperimentReader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008805a8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112742b1c,param_3);
  return;
}



/* Entry: 1008805bc; end: 1008805c7; +[SCGradientView layerClass] */

void FUN_1008805bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  return;
}



/* Entry: 1008805c8; end: 1008805cb; -[SCGradientView gradientLayer] */

void FUN_1008805c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08c0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layer_112600a48);
  return;
}



/* Entry: 1008805cc; end: 10088064b; -[SCGradientView setColors:] */

/* WARNING: Possible PIC construction at 0x00010088062c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100880630) */

void FUN_1008805cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c44470(param_1);
  func_0x000107c61180();
  puVar1 = PTR_s_colors_1125adf58;
  func_0x000107c60b18(PTR_s_colors_1125adf58);
  func_0x000107c61180();
  func_0x000107c51720(param_1,param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10088064c; end: 100880a8f;  */

/* WARNING: Possible PIC construction at 0x0001008806c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100880710: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100880744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100880790: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008807bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100880808: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100880848: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100880878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008808e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100880920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100880940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100880958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100880970: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100880a3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100880a4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008809d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100880a40) */
/* WARNING: Removing unreachable block (ram,0x000100880974) */
/* WARNING: Removing unreachable block (ram,0x00010088095c) */
/* WARNING: Removing unreachable block (ram,0x000100880944) */
/* WARNING: Removing unreachable block (ram,0x000100880924) */
/* WARNING: Removing unreachable block (ram,0x0001008808e8) */
/* WARNING: Removing unreachable block (ram,0x00010088094c) */
/* WARNING: Removing unreachable block (ram,0x0001008808f0) */
/* WARNING: Removing unreachable block (ram,0x000100880900) */
/* WARNING: Removing unreachable block (ram,0x00010088087c) */
/* WARNING: Removing unreachable block (ram,0x00010088084c) */
/* WARNING: Removing unreachable block (ram,0x00010088080c) */
/* WARNING: Removing unreachable block (ram,0x0001008809ec) */
/* WARNING: Removing unreachable block (ram,0x000100880a30) */
/* WARNING: Removing unreachable block (ram,0x000100880810) */
/* WARNING: Removing unreachable block (ram,0x000100880794) */
/* WARNING: Removing unreachable block (ram,0x0001008807c0) */
/* WARNING: Removing unreachable block (ram,0x000100880a78) */
/* WARNING: Removing unreachable block (ram,0x0001008807f0) */
/* WARNING: Removing unreachable block (ram,0x000100880798) */
/* WARNING: Removing unreachable block (ram,0x000100880748) */
/* WARNING: Removing unreachable block (ram,0x000100880714) */
/* WARNING: Removing unreachable block (ram,0x000100880754) */
/* WARNING: Removing unreachable block (ram,0x000100880718) */
/* WARNING: Removing unreachable block (ram,0x0001008806c4) */
/* WARNING: Removing unreachable block (ram,0x00010088097c) */
/* WARNING: Removing unreachable block (ram,0x0001008809d8) */
/* WARNING: Removing unreachable block (ram,0x000100880a38) */
/* WARNING: Removing unreachable block (ram,0x0001008809ac) */
/* WARNING: Removing unreachable block (ram,0x0001008806e0) */
/* WARNING: Removing unreachable block (ram,0x000100880a50) */

void FUN_10088064c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puVar1 = PTR_s_backgroundColor_1125a28f8;
  func_0x000107c60b18(PTR_s_backgroundColor_1125a28f8);
  func_0x000107c61180();
  func_0x000107c3cfb4(param_1,param_2,puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100880a90; end: 100880b1b;  */

/* WARNING: Possible PIC construction at 0x000100880adc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100880ae0) */

void FUN_100880a90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___CATransaction_1126b5718;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c41ea8(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c18e5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___CATransaction_1126b5718,PTR_s_setDisableActions__112641398,1);
  return;
}



/* Entry: 100880b1c; end: 100880b5b;  */

void FUN_100880b1c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b3b0();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100880b5c; end: 100880b8b; -[SCCameraVerticalToolbar _createToolbarView] */

void FUN_100880b5c(void)

{
  func_0x000107c610f4(PTR_PTR_1126c8b20);
  func_0x000107c469a4(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100880b8c; end: 100880c23; -[SCCameraToolbarView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100880b8c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f04a8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c8b08;
    func_0x000107c610f4();
    func_0x000107c3ec60(puVar1);
    func_0x000107c469dc();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112742b08);
    *(undefined **)((long)puVar1 + (long)_DAT_112742b08) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c49778(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100880c24; end: 100880e0f; -[SCCameraToolbarNGSBackgroundView initWithFrame:style:theme:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_100880c24(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126f04a0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f4();
    func_0x000107c3ec60(puVar1);
    func_0x000107c469a4();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112742af4);
    *(undefined **)((long)puVar1 + (long)_DAT_112742af4) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(puVar2);
    func_0x000107c5a050(puVar2);
    puVar4 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x000107c610fc();
    lVar6 = (long)_DAT_112742af8;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar4;
    func_0x000107c61170(uVar3);
    func_0x000107c3ec60(puVar1);
    func_0x000107c3ec60(puVar1);
    puVar4 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x000107c3ec60(puVar1);
    func_0x000107c3e8ac(puVar4);
    func_0x000107c61180();
    func_0x000107c61178();
    func_0x000107c3ab30();
    func_0x000107c57274(*(undefined8 *)((long)puVar1 + lVar6));
    puVar5 = puVar2;
    func_0x000107c4aba4(puVar2);
    func_0x000107c61180();
    func_0x000107c3d894();
    func_0x000107c61170(puVar5);
    func_0x000107c59a2c(puVar1);
    func_0x000107c59cb0(puVar1);
    func_0x000107c3d89c(puVar1);
    func_0x000107c61174(puVar1);
    func_0x000107c4c52c(puVar2);
    func_0x000107c611b0();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar4);
  }
  return puVar1;
}



/* Entry: 100880e10; end: 100880fb3; -[SCCameraToolbarNGSBackgroundView setStyle:] */

/* WARNING: Possible PIC construction at 0x000100880e68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100880f94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100880eac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100880f3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100880eb0) */
/* WARNING: Removing unreachable block (ram,0x000100880f98) */
/* WARNING: Removing unreachable block (ram,0x000100880e6c) */
/* WARNING: Removing unreachable block (ram,0x000100880f40) */
/* WARNING: Removing unreachable block (ram,0x000100880f68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100880e10(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + _DAT_112742afc) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_112742afc) = param_3;
  if (param_3 < 2) {
    if (param_3 == 0) {
      func_0x000107c526c0(0,param_1);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c61180();
      func_0x000107c61178();
      func_0x000107c3ab24();
      func_0x000107c549b4(*(undefined8 *)(param_1 + _DAT_112742af8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar1);
      return;
    }
    if (param_3 != 1) {
      return;
    }
  }
  else if ((param_3 != 2) && (param_3 != 3)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0x3ff0000000000000,param_1,PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 100880fb4; end: 100880fcf; -[SCCameraToolbarNGSBackgroundView setTheme:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100880fb4(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_112742af0) != param_3) {
    *(long *)(param_1 + _DAT_112742af0) = param_3;
  }
  return;
}



/* Entry: 100880fd0; end: 100881053;  */

void FUN_100880fd0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c5a050(param_1);
  puVar1 = PTR_PTR_1126e13c0;
  func_0x000107c610f4(PTR_PTR_1126e13c0);
  func_0x000107c494d4();
  (**(code **)(param_3 + 0x10))(param_3,puVar1);
  func_0x000107c61170(param_3);
  puVar2 = puVar1;
  func_0x000107c497b4(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100881054; end: 1008810bb;  */

/* WARNING: Possible PIC construction at 0x0001008810a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008810a8) */

void FUN_100881054(undefined8 param_1,long param_2)

{
  func_0x000107c423f0();
  func_0x000107c61180();
  func_0x000107c42a10();
  func_0x000107c61180();
  (**(code **)(param_2 + 0x10))();
  func_0x000107c611b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1008810bc; end: 1008810c3; -[MASConstraintMaker edges] */

void FUN_1008810bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef79b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_addConstraintWithAttributes__11259b810,0x1e);
  return;
}



/* Entry: 1008810c4; end: 100881193;  */

void FUN_1008810c4(void)

{
  func_0x000107c610f4(PTR_PTR_1126e13a8);
  func_0x000107c494d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100881194; end: 1008812b3; -[SCCameraVerticalToolbar _observeUIStateOrchestrator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100881194(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar5 = (long)_DAT_112742bd4;
  if (*(long *)(param_1 + lVar5) == 0) {
    func_0x000107c61144(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112742b38);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c4da04();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_50,auStack_48);
    uVar3 = uVar2;
    func_0x000107c5c320();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = uVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
    func_0x000107c61120(auStack_50);
    func_0x000107c61120(auStack_48);
  }
  return;
}



/* Entry: 1008812b4; end: 10088137b;  */

/* WARNING: Possible PIC construction at 0x00010088132c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100881350: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100881360: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100881354) */
/* WARNING: Removing unreachable block (ram,0x000100881330) */
/* WARNING: Removing unreachable block (ram,0x000100881364) */

void FUN_1008812b4(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c5bcc0(param_2);
  func_0x000107c61180();
  func_0x000107c5cf4c(param_2);
  func_0x000107c61180();
  func_0x000107c49a18();
  func_0x000107c5cf4c(param_2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10088137c; end: 100881383; -[SCStateTransition transitionInfo] */

undefined8 FUN_10088137c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100881384; end: 100881793; -[SCCameraVerticalToolbar _didUpdateUIVisibilityState:animated:didSelectionChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_100881384(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_228 [8];
  undefined1 uStack_220;
  undefined1 uStack_21f;
  undefined1 auStack_218 [8];
  undefined8 uStack_210;
  undefined8 uStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  lVar10 = (long)_DAT_112742b3c;
  lVar2 = *(long *)(param_1 + lVar10);
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  uVar3 = *(undefined8 *)(param_1 + lVar10);
  *(ulong *)(param_1 + lVar10) = param_3;
  func_0x000107c61170(uVar3);
  uVar4 = param_1;
  func_0x000107c49d18();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(param_1 + (long)_DAT_112742b80);
  func_0x000107c5dfc4(param_3);
  func_0x000107c4d974(puVar5);
  func_0x000107c61180();
  func_0x000107c4d664(uVar3);
  func_0x000107c61170(puVar5);
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  lVar6 = *(long *)(param_1 + (long)_DAT_112742b90);
  func_0x000107c40794();
  lVar10 = lVar6;
  func_0x000107c4080c();
  if (lVar10 != 0) {
    lVar9 = *plStack_1c0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_1c0 != lVar9) {
          func_0x000107c61128(lVar6);
        }
        uVar3 = *(undefined8 *)(lStack_1c8 + lVar11 * 8);
        func_0x000107c5dfc4(param_3);
        func_0x000107c4a3b4(uVar3);
        uVar7 = param_1;
        func_0x000107c3bb30();
        if ((int)uVar7 != 0) {
          func_0x000107c3af74(param_1);
          func_0x000107c611b0();
        }
        lVar11 = lVar11 + 1;
      } while (lVar10 != lVar11);
      lVar10 = lVar6;
      func_0x000107c4080c();
    } while (lVar10 != 0);
  }
  func_0x000107c61170(lVar6);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c61160();
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  plStack_200 = (long *)0x0;
  lVar9 = (long)_DAT_112742b84;
  lVar6 = *(long *)(param_1 + lVar9);
  func_0x000107c40794();
  lVar10 = lVar6;
  func_0x000107c4080c();
  if (lVar10 != 0) {
    lVar11 = *plStack_200;
    do {
      lVar12 = 0;
      do {
        if (*plStack_200 != lVar11) {
          func_0x000107c61128(lVar6);
        }
        uVar8 = *(undefined8 *)(param_1 + lVar9);
        func_0x000107c4d9e8();
        func_0x000107c61180();
        func_0x000107c5dfc4(param_3);
        func_0x000107c51c54(uVar8);
        func_0x000107c3bb30(param_1);
        func_0x000107c5560c(uVar8);
        uVar3 = uVar8;
        func_0x000107c49c70();
        if ((int)uVar3 != 0) {
          func_0x000107c3d798(puVar5);
        }
        func_0x000107c61170(uVar8);
        lVar12 = lVar12 + 1;
      } while (lVar10 != lVar12);
      lVar10 = lVar6;
      func_0x000107c4080c();
    } while (lVar10 != 0);
  }
  func_0x000107c61170(lVar6);
  lVar10 = lVar2;
  func_0x000107c5dfc4();
  uVar1 = (char)uVar4;
  if (lVar10 == 2) {
    uVar1 = 1;
  }
  if (((uVar4 & 1) == 0) && (lVar10 == 2)) {
    func_0x000107c3c39c(param_1);
  }
  func_0x000107c61144(auStack_218,param_1);
  func_0x000107c6111c(auStack_228,auStack_218);
  func_0x000107c61174(param_3);
  uStack_220 = uVar1;
  uStack_21f = (char)uVar4;
  func_0x000107c61174(puVar5);
  func_0x000107c3c2ac(0x3fd999999999999a,param_1);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_228);
  func_0x000107c61120(auStack_218);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(lVar2);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return param_3;
  }
  func_0x000107c60e78();
  func_0x000107c61120(auStack_228);
  func_0x000107c61120(auStack_218);
  func_0x000107c60bd8();
  lVar10 = *(long *)(param_3 + (long)_DAT_112742b3c);
  func_0x000107c5dfc4(lVar10);
  return (ulong)(lVar10 == 2);
}



/* Entry: 100881794; end: 1008817bb; -[SCCameraVerticalToolbar isExpanded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100881794(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112742b3c);
  func_0x000107c5dfc4(lVar1);
  return lVar1 == 2;
}


