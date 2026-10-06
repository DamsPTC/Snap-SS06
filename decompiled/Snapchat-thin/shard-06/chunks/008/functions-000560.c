/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104eb4060; end: 104eb451b; -[SCLensModularReplyCameraEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb4060(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
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
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 uStack_e8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_112715d48;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar21;
  func_0x00010c11a2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar21);
  puVar2 = PTR_PTR_1126b1ba0;
  _objc_alloc();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_112715d4c;
    _objc_loadWeakRetained(lVar21);
  }
  lVar3 = lVar21;
  func_0x00010c278c20(lVar21);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be8f180(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = param_1 + _DAT_112715d54;
    _objc_loadWeakRetained(lVar22);
  }
  lVar14 = lVar22;
  func_0x00010c095b60(lVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfeeec0(puVar2,param_2,lVar3,lVar4,lVar14);
  _objc_release(lVar14);
  _objc_release(lVar22);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar21);
  lVar21 = param_1;
  FUN_104eb451c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar21;
  func_0x00010c095620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar21);
  puVar5 = PTR_PTR_1126b1ba8;
  _objc_alloc();
  lVar21 = param_1 + _DAT_112715d30;
  _objc_loadWeakRetained();
  lVar4 = lVar21;
  func_0x00010c0979e0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1;
  FUN_104eb451c();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_90 = 0;
    uStack_a0 = 0;
    lVar14 = 0;
  }
  else {
    uStack_a0 = param_1 + _DAT_112715d40;
    _objc_loadWeakRetained();
    uStack_90 = param_1 + _DAT_112715d44;
    _objc_loadWeakRetained();
    lVar14 = param_1 + _DAT_112715d50;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar14;
  func_0x00010c0937c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    lVar23 = 0;
    uStack_e8 = 0;
    lVar15 = 0;
  }
  else {
    uStack_e8 = *(undefined8 *)(param_1 + _DAT_112715d78);
    _objc_retain();
    lVar23 = param_1 + _DAT_112715d3c;
    _objc_loadWeakRetained();
    lVar15 = param_1 + _DAT_112715d68;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar15;
  func_0x00010c08b6e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_112715d58;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar16;
  func_0x00010bf24d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_112715d5c;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar17;
  func_0x00010c29c2c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_112715d64;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar18;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_112715d6c;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar19;
  func_0x00010c090c40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar24 = 0;
  }
  else {
    lVar24 = param_1 + _DAT_112715d70;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar24;
  func_0x00010c090800();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar13;
  func_0x00010c27ff80();
  func_0x00010c023a40(puVar5,param_2,lVar4,lVar22,uStack_a0,lVar3,lVar1,uStack_90,puVar2,lVar6,
                      uStack_e8,lVar23,lVar7,lVar8,lVar9,lVar10,lVar11,(char)lVar25);
  lVar25 = (long)_DAT_112715d34;
  uVar20 = *(undefined8 *)(param_1 + lVar25);
  *(undefined **)(param_1 + lVar25) = puVar5;
  _objc_release(uVar20);
  _objc_release(uStack_e8);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar24);
  _objc_release(lVar11);
  _objc_release(lVar19);
  _objc_release(lVar10);
  _objc_release(lVar18);
  _objc_release(lVar9);
  _objc_release(lVar17);
  _objc_release(lVar8);
  _objc_release(lVar16);
  _objc_release(lVar7);
  _objc_release(lVar15);
  _objc_release(lVar23);
  _objc_release(lVar6);
  _objc_release(lVar14);
  _objc_release(uStack_90);
  _objc_release(uStack_a0);
  _objc_release(lVar22);
  _objc_release(lVar4);
  _objc_release(lVar21);
  func_0x00010bf17a60(*(undefined8 *)(param_1 + lVar25));
  _objc_release(lVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104eb451c; end: 104eb453f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb451c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112715d38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104eb4540; end: 104eb47f7; -[SCLensModularReplyCameraEntryPoint _replyParams] */

void FUN_104eb4540(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
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
  undefined *puVar21;
  undefined *puVar22;
  
  puVar21 = PTR_PTR_1126b1bb0;
  uVar1 = param_1;
  FUN_104eb451c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0967e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf16600();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  FUN_104eb451c();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0967e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0967e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_104eb451c();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c0967e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bfbe400();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  FUN_104eb451c();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c0967e0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bfea1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_1;
  FUN_104eb451c();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c0967e0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf4efc0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_1;
  FUN_104eb451c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c0967e0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010c275580();
  _objc_retainAutoreleasedReturnValue();
  FUN_104eb451c();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_1;
  func_0x00010c0967e0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010c091be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0967c0(puVar21,param_2,uVar3,uVar6,uVar9,uVar12,uVar15,uVar18,uVar20);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(param_1);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar22 = puVar21;
  func_0x00010c2720a0(puVar21);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar21);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar22);
  return;
}



/* Entry: 104eb47f8; end: 104eb4903; -[SCLensModularReplyCameraEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb47f8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112715d78,0);
  _objc_destroyWeak(param_1 + _DAT_112715d74);
  _objc_destroyWeak(param_1 + _DAT_112715d70);
  _objc_destroyWeak(param_1 + _DAT_112715d6c);
  _objc_destroyWeak(param_1 + _DAT_112715d68);
  _objc_destroyWeak(param_1 + _DAT_112715d64);
  _objc_destroyWeak(param_1 + _DAT_112715d60);
  _objc_destroyWeak(param_1 + _DAT_112715d5c);
  _objc_destroyWeak(param_1 + _DAT_112715d58);
  _objc_destroyWeak(param_1 + _DAT_112715d30);
  _objc_destroyWeak(param_1 + _DAT_112715d54);
  _objc_destroyWeak(param_1 + _DAT_112715d50);
  _objc_destroyWeak(param_1 + _DAT_112715d4c);
  _objc_destroyWeak(param_1 + _DAT_112715d48);
  _objc_destroyWeak(param_1 + _DAT_112715d44);
  _objc_destroyWeak(param_1 + _DAT_112715d40);
  _objc_destroyWeak(param_1 + _DAT_112715d3c);
  _objc_destroyWeak(param_1 + _DAT_112715d38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112715d34,0);
  return;
}



/* Entry: 104eb4904; end: 104eb4c6f; -[SCLensModularReplyCameraWorkflow initWithLensDataProviderFactory:lensModularReplyCameraScope:lensesModularCameraScopeServices:lensModularCameraLensData:publicFeatureCatalog:cameraHardwareServices:usedLensUnlocker:studySettings:captureScopeExposer:captureScopeServices:lensEffectLaunchDataStore:bundledLensProvider:viewControllerLifecycleObservable:circumstanceEngine:lensCarouselManager:unifiedModularCameraEnabled:] */

undefined8 *
FUN_104eb4904(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
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
  puStack_70 = PTR_PTR_1126e4cb0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c10fd00(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c095620(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010c0967e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef0340(puVar1[2]);
    uVar5 = param_5;
    func_0x00010bf23700();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = puVar1[3];
    puVar1[3] = uVar5;
    _objc_release(uVar10);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar6 = PTR_PTR_1126b1bb8;
    _objc_alloc();
    func_0x00010c02c860();
    puVar7 = PTR_PTR_1126b1bc0;
    uVar2 = param_14;
    func_0x00010c269d40(param_14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf46740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar8 = PTR_PTR_1126b1bc8;
    _objc_alloc(PTR_PTR_1126b1bc8);
    func_0x00010c023a20();
    puVar9 = PTR_PTR_1126b1bd0;
    _objc_alloc();
    func_0x00010c025f80();
    uVar2 = puVar1[1];
    puVar1[1] = puVar9;
    _objc_release(uVar2);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
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



/* Entry: 104eb4c70; end: 104eb4c77; -[SCLensModularReplyCameraWorkflow begin] */

void FUN_104eb4c70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf17a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_begin_1125a3840);
  return;
}



/* Entry: 104eb4c78; end: 104eb4cb7; -[SCLensModularReplyCameraWorkflow didFinishWorkflowWithScope:] */

void FUN_104eb4c78(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf83300();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104eb4cb8; end: 104eb4d1f; -[SCLensModularReplyCameraWorkflow willFinishWorkflowWithScope:didSendSnap:] */

void FUN_104eb4cb8(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010c071ae0();
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x20) = param_4;
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf6b020(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a5cc0();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 104eb4d20; end: 104eb4d7f; -[SCLensModularReplyCameraWorkflow willFinishWorkflowWithScope:error:] */

void FUN_104eb4d20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a5ce0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104eb4d80; end: 104eb4ddf; -[SCLensModularReplyCameraWorkflow workflowWithScope:didSendEvent:] */

void FUN_104eb4d80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0967a0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104eb4de0; end: 104eb4e1b; -[SCLensModularReplyCameraWorkflow .cxx_destruct] */

void FUN_104eb4de0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104eb4e1c; end: 104eb5253; -[SCLensesCollectionModularCameraEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb4e1c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_initWeak(auStack_70,param_1);
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_112715d94;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar21;
  func_0x00010c11a2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar21);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1ba0;
  _objc_alloc();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_112715da8;
    _objc_loadWeakRetained(lVar21);
  }
  lVar13 = lVar21;
  func_0x00010c278c20(lVar21);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be8f180(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  FUN_104eb5294(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar14;
  func_0x00010c095b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfeeec0();
  _objc_release(lVar5);
  _objc_release(lVar14);
  _objc_release(lVar4);
  _objc_release(lVar13);
  _objc_release(lVar21);
  puVar6 = PTR_PTR_1126b1bd8;
  _objc_alloc();
  if (param_1 == 0) {
    _objc_retain(0);
    lVar21 = 0;
    uVar18 = 0;
    lVar13 = 0;
  }
  else {
    uVar18 = *(undefined8 *)(param_1 + _DAT_112715dc0);
    _objc_retain(uVar18);
    lVar21 = param_1 + _DAT_112715da0;
    _objc_loadWeakRetained(lVar21);
    lVar13 = param_1 + _DAT_112715d98;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar13;
  func_0x00010c29c2c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_112715db8;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar14;
  func_0x00010c090c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x000104eb52b8();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_112715db4;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar15;
  func_0x00010c091500();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  FUN_104eb5294();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c095b60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_112715dac;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar20;
  func_0x00010c0974c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_112715dbc;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar19;
  func_0x00010c0937c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc960();
  lVar17 = (long)_DAT_112715d8c;
  uVar16 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar6;
  _objc_release(uVar16);
  _objc_release(lVar12);
  _objc_release(lVar19);
  _objc_release(lVar11);
  _objc_release(lVar20);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar15);
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(lVar14);
  _objc_release(lVar4);
  _objc_release(lVar13);
  _objc_release(lVar21);
  _objc_release(uVar18);
  func_0x00010bf17a60(*(undefined8 *)(param_1 + lVar17));
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_78);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_70);
  return;
}



/* Entry: 104eb5254; end: 104eb5293;  */

void FUN_104eb5254(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be4aa00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104eb5294; end: 104eb52db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb5294(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112715db0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104eb52dc; end: 104eb533f; -[SCLensesCollectionModularCameraEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb52dc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  lVar2 = (long)_DAT_112715d8c;
  func_0x00010bf940a0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126e4cb8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104eb5340; end: 104eb53a7; -[SCLensesCollectionModularCameraEntryPoint _lensDataProviderFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb5340(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_112715d90;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0979e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104eb53a8; end: 104eb565f; -[SCLensesCollectionModularCameraEntryPoint _replyParams] */

void FUN_104eb53a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
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
  undefined *puVar21;
  undefined *puVar22;
  
  puVar21 = PTR_PTR_1126b1bb0;
  uVar1 = param_1;
  func_0x000104eb52b8();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf16600();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x000104eb52b8();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0967e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x000104eb52b8();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bfbe400();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x000104eb52b8();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bfea1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_1;
  func_0x000104eb52b8();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf4efc0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_1;
  func_0x000104eb52b8(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010c275580();
  _objc_retainAutoreleasedReturnValue();
  func_0x000104eb52b8();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_1;
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010c091be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0967c0(puVar21,param_2,uVar3,uVar6,uVar9,uVar12,uVar15,uVar18,uVar20);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(param_1);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar22 = puVar21;
  func_0x00010c2720a0(puVar21);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar21);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar22);
  return;
}



/* Entry: 104eb5660; end: 104eb572f; -[SCLensesCollectionModularCameraEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb5660(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112715dc0,0);
  _objc_destroyWeak(param_1 + _DAT_112715d90);
  _objc_destroyWeak(param_1 + _DAT_112715dbc);
  _objc_destroyWeak(param_1 + _DAT_112715db8);
  _objc_destroyWeak(param_1 + _DAT_112715db4);
  _objc_destroyWeak(param_1 + _DAT_112715db0);
  _objc_destroyWeak(param_1 + _DAT_112715dac);
  _objc_destroyWeak(param_1 + _DAT_112715da8);
  _objc_destroyWeak(param_1 + _DAT_112715da4);
  _objc_destroyWeak(param_1 + _DAT_112715da0);
  _objc_destroyWeak(param_1 + _DAT_112715d9c);
  _objc_destroyWeak(param_1 + _DAT_112715d98);
  _objc_destroyWeak(param_1 + _DAT_112715d94);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112715d8c,0);
  return;
}



/* Entry: 104eb5730; end: 104eb5a27; -[SCLensesCollectionModularCameraWorkflow initWithCaptureScopeExposer:captureScopeServices:publicCameraFeatureCatalog:cameraLifecycleObservable:lensCarouselManager:lensesCollectionModularCameraScope:usedLensUnlocker:lensDataProviderFactory:lensCollectionDataProvider:lensPerformerProvider:lensThumbnailLogger:studySettings:] */

undefined8 *
FUN_104eb5730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

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
  puStack_68 = PTR_PTR_1126e4cc0;
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
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
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



/* Entry: 104eb5a28; end: 104eb5b87; -[SCLensesCollectionModularCameraWorkflow begin] */

void FUN_104eb5a28(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  lVar1 = param_1;
  func_0x00010be8f000();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c10fd00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bdef700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf23740();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
  _objc_initWeak(auStack_48,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c297280(uVar5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104eb5b88; end: 104eb5bff;  */

void FUN_104eb5b88(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    lVar1 = param_2;
    func_0x00010c269d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc4a40(param_1);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104eb5c00; end: 104eb5c4b; -[SCLensesCollectionModularCameraWorkflow end] */

void FUN_104eb5c00(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uVar1 = uVar2;
  func_0x00010c2bd480(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf77060();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104eb5c4c; end: 104eb5c6b; -[SCLensesCollectionModularCameraWorkflow didDismissCaptureFlow:] */

void FUN_104eb5c4c(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104eb5c6c; end: 104eb5d6f; -[SCLensesCollectionModularCameraWorkflow captureWorkflowWillSetCameraViewConfiguration:] */

void FUN_104eb5c6c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_1;
    func_0x00010be8f000(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,lVar1,8,0);
    _objc_release(lVar1);
  }
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c297280(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104eb5d70; end: 104eb5e6b;  */

void FUN_104eb5d70(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    lVar1 = param_2;
    func_0x00010c269d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bef0b80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0e0ec0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf43280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010beeff20(*(undefined8 *)(param_1 + 0x38));
    _objc_release(lVar5);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104eb5e6c; end: 104eb5e73;  */

void FUN_104eb5e6c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ec5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_optional_112618b90);
  return;
}



/* Entry: 104eb5e74; end: 104eb5ebb; -[SCLensesCollectionModularCameraWorkflow captureWorkflowDidDismissWithDidSendSnap:] */

void FUN_104eb5e74(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    func_0x00010c280e40(*(undefined8 *)(param_1 + 0x38));
  }
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c2bd480(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a6560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104eb5ebc; end: 104eb5ec3; -[SCLensesCollectionModularCameraWorkflow captureWorkflowDidSaveSnapToMemories] */

void FUN_104eb5ebc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c280e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_unlockUsedLens_11267ddb8);
  return;
}



/* Entry: 104eb5ec4; end: 104eb5f23; -[SCLensesCollectionModularCameraWorkflow _finishWorkflowWithError:] */

void FUN_104eb5ec4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c2bd480(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a65a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104eb5f24; end: 104eb6223; -[SCLensesCollectionModularCameraWorkflow _activateCollectionCarauselWithCarouselManager:] */

void FUN_104eb5f24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined *puStack_c0;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar9 = *(undefined8 *)(param_1 + 0x78);
  lVar1 = param_1;
  func_0x00010be4f160();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_70 = lVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar9);
  _objc_release(puVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010be4bf40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puStack_c0 = PTR____NSArray0__struct_11034ab48;
  }
  else {
    puStack_c0 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_78 = lVar1;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf3fe40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010c098580(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  lVar5 = param_1;
  func_0x00010bddbba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010bf41860(uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_initWeak(auStack_80,param_1);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010c0b6bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e0ea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = auStack_80;
  _objc_copyWeak(auStack_88,puVar8);
  _objc_retain(lVar1);
  _objc_retain(param_3);
  uVar7 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(lVar5);
  _objc_release(uVar3);
  _objc_release(puStack_c0);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume(param_3);
  _objc_retain(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 104eb6224; end: 104eb624b;  */

void FUN_104eb6224(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 104eb624c; end: 104eb636f;  */

void FUN_104eb624c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104eb6370;
  puStack_70 = &UNK_1108576a8;
  _objc_copyWeak(auStack_58,param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = uVar1;
  _objc_retain(uVar2);
  uStack_60 = uVar2;
  _objc_copyWeak(auStack_90,param_1 + 0x30);
  func_0x00010c0c0800(param_2);
  _objc_destroyWeak(auStack_90);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 104eb6370; end: 104eb63c3;  */

void FUN_104eb6370(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc4ac0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104eb63c4; end: 104eb640b;  */

void FUN_104eb63c4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be17580();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104eb640c; end: 104eb64e7; -[SCLensesCollectionModularCameraWorkflow _carouselActivationObservableWithCarouselManager:] */

void FUN_104eb640c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfad7a0(uVar1,param_2,&PTR___NSConcreteGlobalBlock_1108576f8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c268560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104eb65e4;
  puStack_40 = &UNK_1108577b8;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar1 = uVar2;
  func_0x00010bfb26a0(uVar2,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104eb64e8; end: 104eb65bf;  */

undefined1 FUN_104eb64e8(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_2);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0c15c0(param_2);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 104eb65c0; end: 104eb65e3;  */

void FUN_104eb65c0(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 104eb65e4; end: 104eb6657;  */

void FUN_104eb65e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef1060(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c268560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104eb6658; end: 104eb665f;  */

void FUN_104eb6658(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 104eb6660; end: 104eb6777; -[SCLensesCollectionModularCameraWorkflow _activateCollectionWithLenses:lensToPreselect:carouselManager:] */

void FUN_104eb6660(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0b8600(param_3,param_2,&PTR___NSConcreteGlobalBlock_110857808);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x78),param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf324e0();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b00f8;
  if (param_4 != 0) {
    lVar2 = param_4;
    func_0x00010c094540(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4a500(param_1,param_2,param_4);
    func_0x00010c158d00(puVar3,param_2,lVar2,0,param_1,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010bf08620(param_5,param_2,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104eb6778; end: 104eb679f;  */

void FUN_104eb6778(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 104eb67a0; end: 104eb67cb; -[SCLensesCollectionModularCameraWorkflow _lensCameraPostionForLens:] */

undefined1 FUN_104eb67a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  
  func_0x00010bef0200();
  uVar1 = 2;
  if (param_3 != 1) {
    uVar1 = param_3 == 0;
  }
  return uVar1;
}



/* Entry: 104eb67cc; end: 104eb6843; -[SCLensesCollectionModularCameraWorkflow _loadingPlaceholderLens] */

void FUN_104eb67cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0820;
  _objc_opt_new(PTR_PTR_1126b0820);
  func_0x00010c2b2880();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aa840(puVar1,param_2,&PTR____CFConstantStringClassReference_110f776f8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104eb6844; end: 104eb68e3; -[SCLensesCollectionModularCameraWorkflow _lensToPreselect] */

void FUN_104eb6844(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c10aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b0820;
    _objc_opt_new(PTR_PTR_1126b0820);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c10aa60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b2880(puVar2,param_2,uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar4 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104eb68e4; end: 104eb697f; -[SCLensesCollectionModularCameraWorkflow _createLensesdataProvider] */

void FUN_104eb68e4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b1bc0;
  func_0x00010bf46720(PTR_PTR_1126b1bc0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c097a20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 104eb6980; end: 104eb6983; -[SCLensesCollectionModularCameraWorkflow lensDataProvider:didAddLens:] */

void FUN_104eb6980(void)

{
  return;
}



/* Entry: 104eb6984; end: 104eb6987; -[SCLensesCollectionModularCameraWorkflow lensDataProvider:didRemoveLens:withError:] */

void FUN_104eb6984(void)

{
  return;
}



/* Entry: 104eb6988; end: 104eb698f; -[SCLensesCollectionModularCameraWorkflow lensDataProvider:didRemoveAllLensesWithError:] */

void FUN_104eb6988(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be17590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__finishWorkflowWithError__112563700,param_4);
  return;
}



/* Entry: 104eb6990; end: 104eb6b83; -[SCLensesCollectionModularCameraWorkflow _replyConfiguration] */

void FUN_104eb6990(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  
  puVar15 = PTR_PTR_1126b1bb0;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf16600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0967e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfbe400();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bfea1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c131e40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf4efc0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c131e40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c275580();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c091be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0967c0(puVar15,param_2,uVar2,uVar4,uVar6,uVar8,uVar10,uVar12,uVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 104eb6b84; end: 104eb6c4f; -[SCLensesCollectionModularCameraWorkflow .cxx_destruct] */

void FUN_104eb6b84(long param_1)

{
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



/* Entry: 104eb6c50; end: 104eb6d37; -[SCLensesModularCameraUsedLensUnlocker initLensUnlocker:replyParameters:lensPerformerProvider:] */

undefined1 *
FUN_104eb6c50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e4cc8;
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
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104eb6d38; end: 104eb6e87; -[SCLensesModularCameraUsedLensUnlocker activateWithActiveLensObservable:] */

void FUN_104eb6d38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x20));
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b6bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0e0ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 104eb6e88; end: 104eb6edf;  */

void FUN_104eb6e88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = param_2;
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104eb6ee0; end: 104eb701f; -[SCLensesModularCameraUsedLensUnlocker unlockUsedLens] */

void FUN_104eb6ee0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010c280dc0();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b1be0;
    _objc_alloc(PTR_PTR_1126b1be0);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0915a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0242e0(puVar2);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x11;
    _dispatch_get_global_queue(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar1);
    func_0x00010c0f8060(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar1);
    _objc_release(puVar2);
  }
  return;
}



/* Entry: 104eb7020; end: 104eb7023;  */

void FUN_104eb7020(void)

{
  return;
}



/* Entry: 104eb7024; end: 104eb7037; -[SCLensesModularCameraUsedLensUnlocker unlockSource] */

void FUN_104eb7024(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed1670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b1ba0,PTR_s__unlockSourceFromReplyParameters_112591f40,
             *(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 104eb7038; end: 104eb71c3; +[SCLensesModularCameraUsedLensUnlocker _unlockSourceFromReplyParameters:] */

undefined8 FUN_104eb7038(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0d6ca0();
  if (uVar1 == 0x18) {
    uVar2 = 0x16;
    goto LAB_104eb7128;
  }
  uVar1 = param_3;
  func_0x00010c0f1ce0();
  if ((long)uVar1 < 0x26) {
    if ((long)uVar1 < 6) {
      if (uVar1 < 3) {
LAB_104eb7124:
        uVar2 = 10;
        goto LAB_104eb7128;
      }
      if (uVar1 == 3) goto code_r0x000104eb7184;
    }
    else if ((long)uVar1 < 0x13) {
      if (uVar1 - 6 < 2) goto LAB_104eb7124;
      if (uVar1 == 0xc) {
        uVar2 = 0x15;
        goto LAB_104eb7128;
      }
    }
    else {
      if (uVar1 == 0x13) {
        uVar2 = 1;
        goto LAB_104eb7128;
      }
      if (uVar1 == 0x14) {
        uVar2 = 2;
        goto LAB_104eb7128;
      }
    }
LAB_104eb71bc:
    uVar2 = 0;
  }
  else {
    if (0x47 < (long)uVar1) {
      if ((long)uVar1 < 0x59) {
        if (uVar1 == 0x48) goto LAB_104eb7170;
        if (uVar1 == 0x52) {
          uVar2 = 0x18;
          goto LAB_104eb7128;
        }
      }
      else {
        if (uVar1 == 0x59) {
LAB_104eb7170:
          uVar2 = 0x17;
          goto LAB_104eb7128;
        }
        if (uVar1 == 0x5b) {
          uVar2 = 0x19;
          goto LAB_104eb7128;
        }
        if (uVar1 == 0x5d) {
          uVar2 = 0x1a;
          goto LAB_104eb7128;
        }
      }
      goto LAB_104eb71bc;
    }
    switch(uVar1) {
    case 0x26:
    case 0x2a:
    case 0x2b:
    case 0x3c:
      goto LAB_104eb7124;
    default:
      goto LAB_104eb71bc;
    case 0x2e:
      uVar1 = param_3;
      func_0x00010c1413e0();
      if (uVar1 + 1 < 6) {
        uVar2 = *(undefined8 *)(&UNK_10dd8d4b8 + (uVar1 + 1) * 8);
        break;
      }
    case 0x2d:
      uVar2 = 3;
      break;
    case 0x30:
      uVar2 = 0x14;
      break;
    case 0x31:
code_r0x000104eb7184:
      uVar2 = 0xc;
      break;
    case 0x36:
      uVar2 = 0x11;
      break;
    case 0x39:
      uVar2 = 0x13;
      break;
    case 0x3b:
      uVar2 = 0x12;
    }
  }
LAB_104eb7128:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 104eb71c4; end: 104eb7217; -[SCLensesModularCameraUsedLensUnlocker .cxx_destruct] */

void FUN_104eb71c4(long param_1)

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



/* Entry: 104eb7218; end: 104eb770b; -[SCLensesUnlockableModularCameraEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb7218(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_112715e44;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar16;
  func_0x00010c11a2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar16);
  lVar16 = param_1;
  FUN_104eb770c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar16;
  func_0x00010c095620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar16);
  lVar16 = param_1;
  func_0x00010be8f180();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1ba0;
  _objc_alloc();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_112715e54;
    _objc_loadWeakRetained(lVar17);
  }
  lVar19 = lVar17;
  func_0x00010c278c20(lVar17);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be8f180(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_112715e38;
    _objc_loadWeakRetained(lVar21);
  }
  lVar5 = lVar21;
  func_0x00010c095b60(lVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfeeec0(puVar3,param_2,lVar19,lVar4,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar21);
  _objc_release(lVar4);
  _objc_release(lVar19);
  _objc_release(lVar17);
  puVar6 = PTR_PTR_1126b1bb8;
  _objc_alloc();
  lVar17 = param_1;
  FUN_104eb770c(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_112715e58;
    _objc_loadWeakRetained(lVar19);
  }
  lVar4 = lVar19;
  func_0x00010c08b6e0(lVar19);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_112715e5c;
    _objc_loadWeakRetained(lVar21);
  }
  lVar5 = lVar21;
  func_0x00010bf398e0(lVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02c860(puVar6,param_2,lVar17,lVar4,lVar5);
  lVar20 = (long)_DAT_112715e14;
  uVar15 = *(undefined8 *)(param_1 + lVar20);
  *(undefined **)(param_1 + lVar20) = puVar6;
  _objc_release(uVar15);
  _objc_release(lVar5);
  _objc_release(lVar21);
  _objc_release(lVar4);
  _objc_release(lVar19);
  _objc_release(lVar17);
  lVar17 = param_1;
  FUN_104eb770c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar17;
  func_0x00010bef0340();
  lVar7 = param_1;
  func_0x00010be4a9e0(param_1,param_2,lVar19);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar17);
  lVar17 = param_1;
  FUN_104eb770c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar17;
  func_0x00010c0e2da0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bdf8020(param_1,param_2,lVar7,lVar16,lVar19);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar19);
  _objc_release(lVar17);
  puVar6 = PTR_PTR_1126b1bd0;
  _objc_alloc();
  lVar9 = param_1;
  FUN_104eb770c();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_112715e3c;
  _objc_loadWeakRetained();
  lVar19 = param_1 + _DAT_112715e28;
  _objc_loadWeakRetained();
  lVar10 = lVar19;
  func_0x00010c0937c0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + _DAT_112715e64);
  _objc_retain(uVar22);
  lVar4 = param_1 + _DAT_112715e40;
  _objc_loadWeakRetained();
  uVar15 = *(undefined8 *)(param_1 + lVar20);
  lVar21 = param_1 + _DAT_112715e48;
  _objc_loadWeakRetained();
  lVar20 = lVar21;
  func_0x00010c29c2c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112715e18;
  _objc_loadWeakRetained();
  lVar11 = lVar5;
  func_0x00010c090c40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x000104eb7730();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c090800();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar14;
  func_0x00010c27ff80();
  func_0x00010c025f80(puVar6,param_2,lVar9,lVar8,lVar2,lVar1,lVar17,puVar3,lVar10,uVar22,lVar4,
                      uVar15,lVar7,lVar20,lVar11,(char)lVar18);
  lVar18 = (long)_DAT_112715e1c;
  uVar15 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar6;
  _objc_release(uVar15);
  _objc_release(uVar22);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar5);
  _objc_release(lVar20);
  _objc_release(lVar21);
  _objc_release(lVar4);
  _objc_release(lVar10);
  _objc_release(lVar19);
  _objc_release(lVar17);
  _objc_release(lVar9);
  func_0x00010bf17a60(*(undefined8 *)(param_1 + lVar18));
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(puVar3);
  _objc_release(lVar16);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104eb770c; end: 104eb7753;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb770c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112715e50);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104eb7754; end: 104eb77ab; -[SCLensesUnlockableModularCameraEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb7754(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf3a420(*(undefined8 *)(param_1 + _DAT_112715e14));
  puStack_28 = PTR_PTR_1126e4cd0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104eb77ac; end: 104eb7a63; -[SCLensesUnlockableModularCameraEntryPoint _replyParams] */

void FUN_104eb77ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
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
  undefined *puVar21;
  undefined *puVar22;
  
  puVar21 = PTR_PTR_1126b1bb0;
  uVar1 = param_1;
  FUN_104eb770c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf16600();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  FUN_104eb770c();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0967e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_104eb770c();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bfbe400();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  FUN_104eb770c();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bfea1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_1;
  FUN_104eb770c();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf4efc0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_1;
  FUN_104eb770c(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010c275580();
  _objc_retainAutoreleasedReturnValue();
  FUN_104eb770c();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_1;
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010c091be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0967c0(puVar21,param_2,uVar3,uVar6,uVar9,uVar12,uVar15,uVar18,uVar20);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(param_1);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar22 = puVar21;
  func_0x00010c2720a0(puVar21);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar21);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar22);
  return;
}



/* Entry: 104eb7a64; end: 104eb7b8b; -[SCLensesUnlockableModularCameraEntryPoint _lensDataProviderConfigurationForActivationSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb7a64(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  if (param_3 == 5) {
    puVar5 = PTR_PTR_1126b1bc0;
    func_0x00010bf46700(PTR_PTR_1126b1bc0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_1;
    func_0x000104eb7730();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c090800();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c27ff80();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar5 = PTR_PTR_1126b1bc0;
    if ((int)lVar4 == 0) {
      func_0x00010bf46780(PTR_PTR_1126b1bc0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_1 = param_1 + _DAT_112715e20;
      _objc_loadWeakRetained(param_1);
      lVar1 = param_1;
      func_0x00010bf24d40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf46740(puVar5,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104eb7b8c; end: 104eb7e5b; -[SCLensesUnlockableModularCameraEntryPoint _dataproviderWithDataProviderConfiguration:replyParams:contextUpdaterBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb7b8c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
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
  long lVar18;
  long lVar19;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  FUN_104eb770c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0956a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c23cc20();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    uVar4 = param_4;
    func_0x00010c0f1ce0(param_4);
    uVar1 = param_1;
    func_0x00010be418c0(param_1,param_2,uVar4);
    if ((int)uVar1 != 0) {
      puVar17 = PTR_PTR_1126b1be8;
      _objc_alloc();
      lVar18 = param_1 + (long)_DAT_112715e24;
      _objc_loadWeakRetained(lVar18);
      lVar19 = lVar18;
      func_0x00010c0979e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1 + (long)_DAT_112715e28;
      _objc_loadWeakRetained();
      lVar6 = lVar5;
      func_0x00010c0937c0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1 + (long)_DAT_112715e2c;
      _objc_loadWeakRetained();
      lVar8 = lVar7;
      func_0x00010c092300();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_1 + (long)_DAT_112715e30;
      _objc_loadWeakRetained();
      lVar10 = lVar9;
      func_0x00010c092540();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_1 + (long)_DAT_112715e34;
      _objc_loadWeakRetained();
      lVar12 = lVar11;
      func_0x00010c09a7e0();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = param_1 + (long)_DAT_112715e20;
      _objc_loadWeakRetained();
      lVar14 = lVar13;
      func_0x00010bf24d40();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = param_1 + (long)_DAT_112715e38;
      _objc_loadWeakRetained();
      lVar16 = lVar15;
      func_0x00010c095b60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beb4200();
      func_0x00010c023a60(puVar17,param_2,lVar19,lVar6,lVar8,param_3,lVar10,lVar12,lVar14,lVar16,
                          (char)param_1);
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
      goto LAB_104eb7e10;
    }
  }
  puVar17 = PTR_PTR_1126b1bc8;
  _objc_alloc(PTR_PTR_1126b1bc8);
  lVar18 = param_1 + (long)_DAT_112715e24;
  _objc_loadWeakRetained(lVar18);
  lVar19 = lVar18;
  func_0x00010c0979e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023a20(puVar17,param_2,lVar19,param_3,param_5);
LAB_104eb7e10:
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 104eb7e5c; end: 104eb804f; -[SCLensesUnlockableModularCameraEntryPoint _isLiveLensesAllowedForPageSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_104eb7e5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + _DAT_112715e28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0937c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lVar1 = lVar2;
  func_0x00010c269d40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c09a940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar3,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar1);
  func_0x000104eb7730();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c090800();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c27ff80();
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(param_1);
  if ((int)lVar5 != 0) {
    uVar6 = 0x13;
    func_0x0001008cc2b4();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0x2e;
    uStack_68 = uVar6;
    func_0x0001008cc2b4();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_60 = uVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_68,2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar6);
    func_0x00010befa160(puVar3,param_2,puVar8);
    _objc_release(puVar8);
  }
  func_0x0001008cc2b4();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  func_0x00010bf4b900(puVar3,param_2,param_3);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    lVar1 = lVar2;
    func_0x000104eb7730();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c090800();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar5;
    func_0x00010c27ff80();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar1);
    if ((int)lVar9 != 0) {
      func_0x000104eb770c();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      func_0x00010bef0340();
      _objc_release(lVar2);
      if (lVar1 == 0xb) {
        return (undefined *)0x1;
      }
    }
    return (undefined *)0x0;
  }
  return puVar8;
}



/* Entry: 104eb8050; end: 104eb8107; -[SCLensesUnlockableModularCameraEntryPoint _shouldIgnoreLensesInjectionBeforeLiveLenses] */

undefined8 FUN_104eb8050(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x000104eb7730();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c090800();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c27ff80();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar4 != 0) {
    func_0x000104eb770c();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bef0340();
    _objc_release(param_1);
    if (lVar1 == 0xb) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 104eb8108; end: 104eb822f; -[SCLensesUnlockableModularCameraEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb8108(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112715e64,0);
  _objc_destroyWeak(param_1 + _DAT_112715e60);
  _objc_destroyWeak(param_1 + _DAT_112715e18);
  _objc_destroyWeak(param_1 + _DAT_112715e34);
  _objc_destroyWeak(param_1 + _DAT_112715e30);
  _objc_destroyWeak(param_1 + _DAT_112715e20);
  _objc_destroyWeak(param_1 + _DAT_112715e5c);
  _objc_destroyWeak(param_1 + _DAT_112715e58);
  _objc_destroyWeak(param_1 + _DAT_112715e24);
  _objc_destroyWeak(param_1 + _DAT_112715e38);
  _objc_destroyWeak(param_1 + _DAT_112715e2c);
  _objc_destroyWeak(param_1 + _DAT_112715e28);
  _objc_destroyWeak(param_1 + _DAT_112715e54);
  _objc_destroyWeak(param_1 + _DAT_112715e50);
  _objc_destroyWeak(param_1 + _DAT_112715e4c);
  _objc_destroyWeak(param_1 + _DAT_112715e48);
  _objc_destroyWeak(param_1 + _DAT_112715e44);
  _objc_destroyWeak(param_1 + _DAT_112715e40);
  _objc_destroyWeak(param_1 + _DAT_112715e3c);
  _objc_storeStrong(param_1 + _DAT_112715e14,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112715e1c,0);
  return;
}



/* Entry: 104eb8230; end: 104eb85df; -[SCLensesUnlockableModularCameraWorkflow initWithLensesModularCameraScope:modularCameraLensDataProvider:lensModularCameraLensData:publicFeatureCatalog:cameraHardwareServices:usedLensUnlocker:studySettings:captureScopeExposer:captureScopeServices:launchParamConfigurer:lensDataProviderConfiguration:viewControllerLifecycleObservable:lensCarouselManager:unifiedModularCameraEnabled:] */

undefined8 *
FUN_104eb8230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined1 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  puStack_70 = PTR_PTR_1126e4cd8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[3];
    puVar1[3] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c22ad80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 1,param_10);
    _objc_retain(param_11);
    uVar2 = puVar1[2];
    puVar1[2] = param_11;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x12];
    puVar1[0x12] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x14];
    puVar1[0x14] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[8];
    puVar1[8] = param_14;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0xf) = param_16;
    _objc_initWeak(auStack_80,puVar1);
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010c297280(param_15);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
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



/* Entry: 104eb85e0; end: 104eb864b;  */

void FUN_104eb85e0(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 == 0)) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *(long *)(param_1 + 0x70) = param_2;
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104eb864c; end: 104eb8717; -[SCLensesUnlockableModularCameraWorkflow begin] */

void FUN_104eb864c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c0b8600(uVar1,param_2,&PTR___NSConcreteGlobalBlock_1108578a8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bf641e0(uVar2,param_2,uVar1,param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bddb760(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  if ((*(char *)(param_1 + 0x78) != '\x01') ||
     (lVar4 = param_1, func_0x00010bddbbc0(), lVar4 != 0x14)) {
    func_0x00010be65ce0(param_1,param_2,lVar3);
  }
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9d620();
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104eb8718; end: 104eb878f;  */

void FUN_104eb8718(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c098240(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104eb8790; end: 104eb87eb; -[SCLensesUnlockableModularCameraWorkflow captureWorkflowDidDismissWithDidSendSnap:] */

void FUN_104eb8790(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  *(char *)(param_1 + 0x50) = (char)param_3;
  if (param_3 != 0) {
    func_0x00010c280e40(*(undefined8 *)(param_1 + 0x38));
  }
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c2bd480(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a6580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104eb87ec; end: 104eb87f3; -[SCLensesUnlockableModularCameraWorkflow captureWorkflowDidSaveSnapToMemories] */

void FUN_104eb87ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c280e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_unlockUsedLens_11267ddb8);
  return;
}



/* Entry: 104eb87f4; end: 104eb88b7; -[SCLensesUnlockableModularCameraWorkflow lensDataProvider:didAddLens:] */

void FUN_104eb87f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c094540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    lVar4 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    if (lVar5 != 0) {
      func_0x00010bde4ca0(param_1,param_2,param_4,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104eb88b8; end: 104eb88bb; -[SCLensesUnlockableModularCameraWorkflow lensDataProvider:didRemoveLens:withError:] */

void FUN_104eb88b8(void)

{
  return;
}



/* Entry: 104eb88bc; end: 104eb891b; -[SCLensesUnlockableModularCameraWorkflow lensDataProvider:didRemoveAllLensesWithError:] */

void FUN_104eb88bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  func_0x00010c2bd480(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a65a0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104eb891c; end: 104eb89db; -[SCLensesUnlockableModularCameraWorkflow _captureScopeWithLensDataProvider:] */

void FUN_104eb891c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be8f000(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c10fd00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf23740(uVar3,param_2,uVar4,lVar1,uVar2,param_1,param_1,param_3,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104eb89dc; end: 104eb8b6f; -[SCLensesUnlockableModularCameraWorkflow _performCameraConfigurationForSelectedLens:cameraUIMode:captureScope:] */

void FUN_104eb89dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_1 + 0x80);
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x90));
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = param_3;
    _objc_release(uVar3);
    func_0x00010bde4ca0(param_1);
    _objc_initWeak(auStack_58,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    _objc_retain(param_5);
    func_0x00010c297280(uVar3);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 104eb8b70; end: 104eb8bf7;  */

void FUN_104eb8b70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010c269d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be66420(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104eb8bf8; end: 104eb8d0f; -[SCLensesUnlockableModularCameraWorkflow _observeCameraViewControllerLifeCycleEventsWithCaptureScope:] */

void FUN_104eb8bf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  *(undefined **)(param_1 + 0x98) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104eb8d10; end: 104eb8deb;  */

void FUN_104eb8d10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c15c0(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104eb8dec; end: 104eb8df3;  */

void FUN_104eb8dec(void)

{
  return;
}



/* Entry: 104eb8df4; end: 104eb8e27;  */

void FUN_104eb8df4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be66680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104eb8e28; end: 104eb8e2f;  */

void FUN_104eb8e28(void)

{
  return;
}



/* Entry: 104eb8e30; end: 104eb8f77; -[SCLensesUnlockableModularCameraWorkflow _observeModularCameraLensDataWithCaptureScope:] */

void FUN_104eb8e30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010bf86d80(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0ec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uVar2 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 104eb8f78; end: 104eb905b;  */

void FUN_104eb8f78(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x00010c159a40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = param_2;
      func_0x00010c159a40(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0924a0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fb2e0();
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(lVar1 + 0x18);
      func_0x00010c0956a0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2b5a0();
      func_0x00010be71720(lVar1);
      _objc_release(uVar3);
      _objc_release(lVar2);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104eb905c; end: 104eb927b; -[SCLensesUnlockableModularCameraWorkflow _observeLensActivationForLens:captureScope:lensCarouselManager:] */

void FUN_104eb905c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 != 0) {
    func_0x00010bf86d80(*(undefined8 *)(param_1 + 0xa0));
    _objc_initWeak(auStack_78,param_1);
    lVar1 = param_5;
    func_0x00010bef0b80();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0e0ec0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf43280();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_104eb9284;
    puStack_88 = &UNK_110857a38;
    _objc_retain(param_3);
    lVar6 = lVar5;
    uStack_80 = param_3;
    func_0x00010bfad7a0(lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a8,auStack_78);
    lVar7 = lVar6;
    func_0x00010c25ff60(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_a8);
    _objc_release(uStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104eb927c; end: 104eb9283;  */

void FUN_104eb927c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ec5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_optional_112618b90);
  return;
}



/* Entry: 104eb9284; end: 104eb938b;  */

undefined8 FUN_104eb9284(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c094540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 104eb938c; end: 104eb93fb; -[SCLensesUnlockableModularCameraWorkflow _configureCameraForLens:uiMode:] */

void FUN_104eb938c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b1bf8;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bef0200(param_3);
  func_0x00010c0b7de0(puVar2,param_2,uVar1);
  func_0x00010bde4c60(param_1,param_2,puVar2);
  func_0x00010bde5280(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104eb93fc; end: 104eb94c3; -[SCLensesUnlockableModularCameraWorkflow _configureCameraDevicePostion:] */

void FUN_104eb93fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  char *pcVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf299a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126afed0;
  func_0x00010c0db140(PTR_PTR_1126afed0);
  pcVar5 = "-[SCLensesUnlockableModularCameraWorkflow _configureCameraDevicePostion:]";
  uVar6 = 0x14f;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db92b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18cd00(uVar2,param_2,param_3,puVar3,&PTR___NSConcreteGlobalBlock_110857a68,puVar4,
                      in_x6,in_x7,pcVar5,uVar6);
  _objc_release(puVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104eb94c4; end: 104eb94c7;  */

void FUN_104eb94c4(void)

{
  return;
}



/* Entry: 104eb94c8; end: 104eb963f; -[SCLensesUnlockableModularCameraWorkflow _configureLensActivationWithLens:uiMode:] */

void FUN_104eb94c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x70);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    uVar5 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf471a0(uVar6,param_2,uVar5);
    _objc_release(uVar5);
    func_0x00010bddbbc0(param_1);
    puVar2 = PTR_PTR_1126b1c00;
    _objc_alloc(PTR_PTR_1126b1c00);
    lVar1 = param_1;
    func_0x00010beea1a0(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff2e20(puVar2,param_2,0,lVar1);
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126b00f8;
    uVar5 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c159160(puVar3,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar4 = PTR_PTR_1126b0240;
    _objc_alloc(PTR_PTR_1126b0240);
    func_0x00010bff0c60();
    uVar5 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef0080();
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104eb9640; end: 104eb9673; -[SCLensesUnlockableModularCameraWorkflow _carouselActivationSource] */

undefined8 FUN_104eb9640(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010bef0340();
  if (uVar1 < 0x11) {
    uVar2 = *(undefined8 *)(&UNK_10dd8d4e8 + uVar1 * 8);
  }
  else {
    uVar2 = 5;
  }
  return uVar2;
}



/* Entry: 104eb9674; end: 104eb96d3; -[SCLensesUnlockableModularCameraWorkflow _notifyEvent:] */

void FUN_104eb9674(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c2bd480(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bd520();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104eb96d4; end: 104eb98c7; -[SCLensesUnlockableModularCameraWorkflow _replyConfiguration] */

void FUN_104eb96d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  
  puVar15 = PTR_PTR_1126b1bb0;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf16600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0967e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfbe400();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bfea1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c131e40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf4efc0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c131e40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c275580();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c091be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0967c0(puVar15,param_2,uVar2,uVar4,uVar6,uVar8,uVar10,uVar12,uVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 104eb98c8; end: 104eb99f7; -[SCLensesUnlockableModularCameraWorkflow _visibleInterfaceElementsWithUIMode:] */

void FUN_104eb98c8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  puVar1 = PTR_PTR_1126b1c08;
  func_0x00010bf83340(PTR_PTR_1126b1c08);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 1) {
    lVar2 = param_1;
    func_0x00010be43020();
    if ((int)lVar2 == 0) {
      puVar10 = PTR_PTR_1126b1c08;
      func_0x00010beffb20(PTR_PTR_1126b1c08);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104eb99d8;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c131e40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c091be0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c118700();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf8f8a0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((int)uVar6 != 0) {
      puVar10 = PTR_PTR_1126b1c08;
      _objc_alloc(PTR_PTR_1126b1c08);
      puVar7 = puVar1;
      func_0x00010c120420(puVar1);
      puVar8 = PTR_PTR_1126b1c08;
      func_0x00010bf30a00(PTR_PTR_1126b1c08);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c120420();
      func_0x00010c03ce00(puVar10,param_2,(uint)puVar9 | (uint)puVar7);
      _objc_release(puVar8);
      goto LAB_104eb99d8;
    }
  }
  _objc_retain(puVar1);
  puVar10 = puVar1;
LAB_104eb99d8:
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 104eb99f8; end: 104eb9abb; -[SCLensesUnlockableModularCameraWorkflow _isPromptLensReply] */

bool FUN_104eb99f8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c091be0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c118700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar2 = lVar3;
  func_0x00010c1185e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010c13b900(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar3);
  return lVar1 != 0 && lVar4 == 0;
}



/* Entry: 104eb9abc; end: 104eb9b47; -[SCLensesUnlockableModularCameraWorkflow didDismissCaptureFlow:] */

void FUN_104eb9abc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c12e1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c2bd480(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf77060();
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b1bf0;
  func_0x00010bf75480(PTR_PTR_1126b1bf0,param_2,*(undefined1 *)(param_1 + 0x50));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be648c0(param_1,param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 104eb9b48; end: 104eb9c4b; -[SCLensesUnlockableModularCameraWorkflow captureWorkflowWillSetCameraViewConfiguration:] */

void FUN_104eb9b48(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_1;
    func_0x00010be8f000(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,lVar1,8,0);
    _objc_release(lVar1);
  }
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c297280(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}


