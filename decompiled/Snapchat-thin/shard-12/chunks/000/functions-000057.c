/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108cc73ec; end: 108cc73f3; -[SCLensConfiguration lensSwipeId] */

undefined8 FUN_108cc73ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108cc73f4; end: 108cc73fb; -[SCLensConfiguration faceFrontCameraCount] */

undefined8 FUN_108cc73f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108cc73fc; end: 108cc7403; -[SCLensConfiguration faceBackCameraCount] */

undefined8 FUN_108cc73fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108cc7404; end: 108cc740b; -[SCLensConfiguration lensIndexPos] */

undefined8 FUN_108cc7404(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108cc740c; end: 108cc7413; -[SCLensConfiguration lensIndexCount] */

undefined8 FUN_108cc740c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108cc7414; end: 108cc741b; -[SCLensConfiguration lensApplicableContext] */

undefined8 FUN_108cc7414(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 108cc741c; end: 108cc7423; -[SCLensConfiguration timelineLensIds] */

undefined8 FUN_108cc741c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 108cc7424; end: 108cc742b; -[SCLensConfiguration lensOptionSourceType] */

undefined8 FUN_108cc7424(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 108cc742c; end: 108cc7433; -[SCLensConfiguration lensSource] */

undefined8 FUN_108cc742c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 108cc7434; end: 108cc743b; -[SCLensConfiguration cameraNavigationType] */

undefined8 FUN_108cc7434(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 108cc743c; end: 108cc7443; -[SCLensConfiguration venues] */

undefined8 FUN_108cc743c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 108cc7444; end: 108cc744b; -[SCLensConfiguration freemiumGroupId] */

undefined8 FUN_108cc7444(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 108cc744c; end: 108cc7453; -[SCLensConfiguration lensSuggestedSpotlight] */

undefined1 FUN_108cc744c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108cc7454; end: 108cc74e3; -[SCLensConfiguration .cxx_destruct] */

void FUN_108cc7454(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108cc74e4; end: 108cc74ff; +[SCLensConfigurationBuilder lensConfiguration] */

void FUN_108cc74e4(void)

{
  _objc_alloc_init(PTR_PTR_1126b13a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cc7500; end: 108cc793f; +[SCLensConfigurationBuilder lensConfigurationFromExistingLensConfiguration:] */

void FUN_108cc7500(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined *puVar28;
  undefined8 uVar29;
  undefined *puVar30;
  
  puVar1 = PTR_PTR_1126b13a0;
  _objc_retain(param_3);
  func_0x00010c091c00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b2620(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c095a20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2b2ac0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c096600();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2b2c20(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf09180();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2a8720(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010bf09160();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c2a8700(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c0972c0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010c2b2d20(puVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010bf9f120(param_3);
  puVar15 = puVar13;
  func_0x00010c2ada00(puVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010bf9f040(param_3);
  puVar16 = puVar15;
  func_0x00010c2ad9e0(puVar15,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010c094800(param_3);
  puVar17 = puVar16;
  func_0x00010c2b28e0(puVar16,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010c0947c0(param_3);
  puVar18 = puVar17;
  func_0x00010c2b28c0(puVar17,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010c08fde0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar18;
  func_0x00010c2b2680(puVar18,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_3;
  func_0x00010c270160();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar19;
  func_0x00010c2bb2a0(puVar19,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010c095a80(param_3);
  puVar23 = puVar21;
  func_0x00010c2b2ae0(puVar21,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010c096ca0(param_3);
  puVar24 = puVar23;
  func_0x00010c2b2ca0(puVar23,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010bf2a040(param_3);
  puVar25 = puVar24;
  func_0x00010c2a9e00(puVar24,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010c2981c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  func_0x00010c2bc5c0(puVar25,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  uVar27 = param_3;
  func_0x00010bfb75c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar26;
  func_0x00010c2ae680(puVar26,param_2,uVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = param_3;
  func_0x00010c0971e0(param_3);
  _objc_release(param_3);
  puVar30 = puVar28;
  func_0x00010c2b2d00(puVar28,param_2,uVar29);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar28);
  _objc_release(uVar27);
  _objc_release(puVar26);
  _objc_release(uVar22);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar21);
  _objc_release(uVar20);
  _objc_release(puVar19);
  _objc_release(uVar14);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar30);
  return;
}



/* Entry: 108cc7940; end: 108cc79af; -[SCLensConfigurationBuilder build] */

void FUN_108cc7940(void)

{
  _objc_alloc(PTR_PTR_1126c8218);
  func_0x00010c0228a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cc79b0; end: 108cc79e7; -[SCLensConfigurationBuilder withLens:] */

long FUN_108cc79b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108cc79e8; end: 108cc7a1f; -[SCLensConfigurationBuilder withLensOptionId:] */

long FUN_108cc79e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108cc7a20; end: 108cc7a57; -[SCLensConfigurationBuilder withLensRankingId:] */

long FUN_108cc7a20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108cc7a58; end: 108cc7a8f; -[SCLensConfigurationBuilder withArBarTabSessionId:] */

long FUN_108cc7a58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108cc7a90; end: 108cc7ac7; -[SCLensConfigurationBuilder withArBarTabCategoryId:] */

long FUN_108cc7a90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108cc7ac8; end: 108cc7aff; -[SCLensConfigurationBuilder withLensSwipeId:] */

long FUN_108cc7ac8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108cc7b00; end: 108cc7b07; -[SCLensConfigurationBuilder withFaceFrontCameraCount:] */

void FUN_108cc7b00(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 108cc7b08; end: 108cc7b0f; -[SCLensConfigurationBuilder withFaceBackCameraCount:] */

void FUN_108cc7b08(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 108cc7b10; end: 108cc7b17; -[SCLensConfigurationBuilder withLensIndexPos:] */

void FUN_108cc7b10(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 108cc7b18; end: 108cc7b1f; -[SCLensConfigurationBuilder withLensIndexCount:] */

void FUN_108cc7b18(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 108cc7b20; end: 108cc7b57; -[SCLensConfigurationBuilder withLensApplicableContext:] */

long FUN_108cc7b20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108cc7b58; end: 108cc7b8f; -[SCLensConfigurationBuilder withTimelineLensIds:] */

long FUN_108cc7b58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108cc7b90; end: 108cc7b97; -[SCLensConfigurationBuilder withLensOptionSourceType:] */

void FUN_108cc7b90(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 108cc7b98; end: 108cc7b9f; -[SCLensConfigurationBuilder withLensSource:] */

void FUN_108cc7b98(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x70) = param_3;
  return;
}



/* Entry: 108cc7ba0; end: 108cc7ba7; -[SCLensConfigurationBuilder withCameraNavigationType:] */

void FUN_108cc7ba0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 108cc7ba8; end: 108cc7bdf; -[SCLensConfigurationBuilder withVenues:] */

long FUN_108cc7ba8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108cc7be0; end: 108cc7c17; -[SCLensConfigurationBuilder withFreemiumGroupId:] */

long FUN_108cc7be0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108cc7c18; end: 108cc7c1f; -[SCLensConfigurationBuilder withLensSuggestedSpotlight:] */

void FUN_108cc7c18(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x90) = param_3;
  return;
}



/* Entry: 108cc7c20; end: 108cc7caf; -[SCLensConfigurationBuilder .cxx_destruct] */

void FUN_108cc7c20(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 108cc7cb0; end: 108cc7d1b; +[SCAuraProfileInfo compatibilityProfileWithSharingUserId:] */

void FUN_108cc7cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b4450;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cc7d1c; end: 108cc7d7f; +[SCAuraProfileInfo personalityProfileWithOwnerUserId:] */

void FUN_108cc7d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b4450;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cc7d80; end: 108cc7da3; -[SCAuraProfileInfo copyWithZone:] */

undefined8 FUN_108cc7d80(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108cc7da4; end: 108cc7e1b; -[SCAuraProfileInfo hash] */

void FUN_108cc7da4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126fe2e0;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cc7e1c; end: 108cc7e5f; -[SCAuraProfileInfo internalInit] */

void FUN_108cc7e1c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fe2e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cc7e60; end: 108cc7f17; -[SCAuraProfileInfo isEqual:] */

long FUN_108cc7e60(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108cc7ef0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108cc7efc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_108cc7efc;
        }
        goto LAB_108cc7ef0;
      }
    }
    lVar3 = 0;
  }
LAB_108cc7efc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108cc7f18; end: 108cc7f9b; -[SCAuraProfileInfo matchPersonalityProfile:compatibilityProfile:] */

void FUN_108cc7f18(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_108cc7f80;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_108cc7f80;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_108cc7f80:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cc7f9c; end: 108cc7fcb; -[SCAuraProfileInfo .cxx_destruct] */

void FUN_108cc7f9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108cc7fcc; end: 108cc803f; -[SCPreviewFeatureUcoInMemoriesServices initWithUcoInMemories:] */

undefined1 * FUN_108cc7fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe2e8;
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



/* Entry: 108cc8040; end: 108cc8047; -[SCPreviewFeatureUcoInMemoriesServices ucoInMemories] */

undefined8 FUN_108cc8040(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108cc8048; end: 108cc8053; -[SCPreviewFeatureUcoInMemoriesServices .cxx_destruct] */

void FUN_108cc8048(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cc8054; end: 108cc8073; -[SCPreviewSnapchatGalleryConfiguration isFromGallerySnap] */

bool FUN_108cc8054(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    return *(long *)(param_1 + 0x18) != 0;
  }
  return false;
}



/* Entry: 108cc8074; end: 108cc8083; -[SCPreviewSnapchatGalleryConfiguration isFromiOSPhoto] */

bool FUN_108cc8074(long param_1)

{
  return *(long *)(param_1 + 0x38) != 0;
}



/* Entry: 108cc8084; end: 108cc80a3; -[SCPreviewSnapchatGalleryConfiguration isLongSnap] */

bool FUN_108cc8084(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    return *(long *)(param_1 + 0x48) != 0;
  }
  return false;
}



/* Entry: 108cc80a4; end: 108cc80c7; -[SCPreviewSnapchatGalleryConfiguration isPhotoSnap] */

bool FUN_108cc80a4(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  bVar1 = false;
  if (lVar2 != 0) {
    func_0x00010b5fa088();
    bVar1 = lVar2 == 0;
  }
  return bVar1;
}



/* Entry: 108cc80c8; end: 108cc80eb; -[SCPreviewSnapchatGalleryConfiguration isVideoSnap] */

bool FUN_108cc80c8(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  bVar1 = false;
  if (lVar2 != 0) {
    func_0x00010b5fa088();
    bVar1 = lVar2 == 1;
  }
  return bVar1;
}



/* Entry: 108cc80ec; end: 108cc8113; -[SCPreviewSnapchatGalleryConfiguration isSpectaclesSnap] */

bool FUN_108cc80ec(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  bVar1 = false;
  if (lVar2 != 0) {
    func_0x00010b5fa088();
    bVar1 = lVar2 - 2U < 0xb;
  }
  return bVar1;
}



/* Entry: 108cc8114; end: 108cc814b; -[SCPreviewSnapchatGalleryConfiguration rotationManipulatorFormat] */

undefined8 FUN_108cc8114(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010b5fa088();
  if (lVar1 - 9U < 4) {
    uVar2 = *(undefined8 *)(&UNK_10df9f638 + (lVar1 - 9U) * 8);
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}



/* Entry: 108cc814c; end: 108cc816f; -[SCPreviewSnapchatGalleryConfiguration isGhostmantisSnap] */

bool FUN_108cc814c(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  bVar1 = false;
  if (lVar2 != 0) {
    func_0x00010b5fa088();
    bVar1 = lVar2 == 7;
  }
  return bVar1;
}



/* Entry: 108cc8170; end: 108cc817f; -[SCPreviewSnapchatGalleryConfiguration isSpectaclesPhotoSnap] */

long FUN_108cc8170(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    _objc_retain();
    lVar2 = lVar1;
    func_0x00010b5fa088();
    if (lVar2 - 2U < 0xb) {
      lVar2 = lVar1;
      func_0x00010b5fa088(lVar1);
      func_0x00010b5fa4c8();
    }
    else {
      lVar2 = 0;
    }
    _objc_release(lVar1);
    return lVar2;
  }
  return 0;
}



/* Entry: 108cc8180; end: 108cc81a3; -[SCPreviewSnapchatGalleryConfiguration isNewportVideoSnap] */

bool FUN_108cc8180(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  bVar1 = false;
  if (lVar2 != 0) {
    func_0x00010b5fa088();
    bVar1 = lVar2 == 8;
  }
  return bVar1;
}



/* Entry: 108cc81a4; end: 108cc81c7; -[SCPreviewSnapchatGalleryConfiguration isSpectaclesGenericPhoto] */

bool FUN_108cc81a4(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  bVar1 = false;
  if (lVar2 != 0) {
    func_0x00010b5fa088();
    bVar1 = lVar2 == 9;
  }
  return bVar1;
}



/* Entry: 108cc81c8; end: 108cc81eb; -[SCPreviewSnapchatGalleryConfiguration isSpectaclesGenericVideo] */

bool FUN_108cc81c8(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  bVar1 = false;
  if (lVar2 != 0) {
    func_0x00010b5fa088();
    bVar1 = lVar2 == 10;
  }
  return bVar1;
}



/* Entry: 108cc81ec; end: 108cc81fb; -[SCPreviewSnapchatGalleryConfiguration isCheeriosSnap] */

bool FUN_108cc81ec(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    _objc_retain();
    lVar3 = lVar2;
    func_0x00010b5fa088();
    if (lVar3 == 0xb) {
      bVar1 = true;
    }
    else {
      lVar3 = lVar2;
      func_0x00010b5fa088(lVar2);
      bVar1 = lVar3 == 0xc;
    }
    _objc_release(lVar2);
    return bVar1;
  }
  return false;
}



/* Entry: 108cc81fc; end: 108cc821f; -[SCPreviewSnapchatGalleryConfiguration isCheeriosVideoSnap] */

bool FUN_108cc81fc(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  bVar1 = false;
  if (lVar2 != 0) {
    func_0x00010b5fa088();
    bVar1 = lVar2 == 0xc;
  }
  return bVar1;
}



/* Entry: 108cc8220; end: 108cc822f; -[SCPreviewSnapchatGalleryConfiguration isSpectaclesVideoSnap] */

uint FUN_108cc8220(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  if (uVar1 == 0) {
    return 0;
  }
  _objc_retain();
  uVar2 = uVar1;
  func_0x00010b5fa088();
  if (uVar2 - 2 < 0xb) {
    uVar2 = uVar1;
    func_0x00010b5fa088();
    uVar3 = 0;
    if (uVar2 < 0xd) {
      uVar3 = 0x1566 >> (ulong)((uint)uVar2 & 0x1f);
    }
  }
  else {
    uVar3 = 0;
  }
  _objc_release(uVar1);
  return uVar3 & 1;
}



/* Entry: 108cc8230; end: 108cc823f; -[SCPreviewSnapchatGalleryConfiguration isUCOEligibleSpectaclesPhotoSnap] */

bool FUN_108cc8230(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    _objc_retain();
    lVar3 = lVar2;
    func_0x00010b5fa088();
    if (lVar3 == 9) {
      bVar1 = true;
    }
    else {
      lVar3 = lVar2;
      func_0x00010b5fa088(lVar2);
      bVar1 = lVar3 == 0xb;
    }
    _objc_release(lVar2);
    return bVar1;
  }
  return false;
}



/* Entry: 108cc8240; end: 108cc824f; -[SCPreviewSnapchatGalleryConfiguration isUCOEligibleSpectaclesVideoSnap] */

bool FUN_108cc8240(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    _objc_retain();
    lVar3 = lVar2;
    func_0x00010b5fa088();
    if (lVar3 == 10) {
      bVar1 = true;
    }
    else {
      lVar3 = lVar2;
      func_0x00010b5fa088(lVar2);
      bVar1 = lVar3 == 0xc;
    }
    _objc_release(lVar2);
    return bVar1;
  }
  return false;
}



/* Entry: 108cc8250; end: 108cc8273; -[SCPreviewSnapchatGalleryConfiguration isUCOEligibleSpectaclesWithARFilters] */

bool FUN_108cc8250(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  bVar1 = false;
  if (lVar2 != 0) {
    func_0x00010b5fa088();
    bVar1 = lVar2 == 0xc;
  }
  return bVar1;
}



/* Entry: 108cc8274; end: 108cc82bf; -[SCPreviewSnapchatGalleryConfiguration isStereoSnap] */

bool FUN_108cc8274(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) {
    return false;
  }
  func_0x00010b5fa088();
  if (10 < lVar3 - 2U) {
    return false;
  }
  lVar3 = *(long *)(param_1 + 0x90);
  if (lVar3 == 0) {
    return false;
  }
  _objc_retain();
  lVar4 = lVar3;
  func_0x00010bf29de0();
  iVar2 = (int)lVar4;
  if (iVar2 != -0x4524111) {
    if (iVar2 == 2) {
      bVar1 = true;
      goto LAB_10902468c;
    }
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_10902468c;
    }
  }
  lVar4 = lVar3;
  func_0x00010c298be0(lVar3);
  bVar1 = (int)lVar4 - 3U < 2;
LAB_10902468c:
  _objc_release(lVar3);
  return bVar1;
}



/* Entry: 108cc82c0; end: 108cc830b; -[SCPreviewSnapchatGalleryConfiguration shouldScaleSnap] */

undefined8 FUN_108cc82c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (((lVar1 != 0) && (func_0x00010b5fa088(), lVar1 - 2U < 0xb)) &&
     (lVar1 = *(long *)(param_1 + 0x90), lVar1 != 0)) {
    func_0x00010c298be0();
    if (((uint)lVar1 < 6) && ((uint)lVar1 == 2)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0;
}



/* Entry: 108cc830c; end: 108cc836b; -[SCPreviewSnapchatGalleryConfiguration scaleFactor] */

undefined8 FUN_108cc830c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  uVar2 = 0x3ff0000000000000;
  if (lVar1 != 0) {
    func_0x00010b5fa088();
    if (lVar1 - 2U < 0xb) {
      func_0x00010c232fa0();
      uVar2 = 0x3fee79e79e79e79e;
      if ((int)param_1 == 0) {
        uVar2 = 0x3ff0000000000000;
      }
    }
  }
  return uVar2;
}



/* Entry: 108cc836c; end: 108cc83b3; -[SCPreviewSnapchatGalleryConfiguration shouldDrawBlackMask] */

uint FUN_108cc836c(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if ((lVar1 != 0) && (func_0x00010b5fa088(), lVar1 - 2U < 0xb)) {
    uVar2 = *(ulong *)(param_1 + 0x18);
    _objc_retain();
    uVar3 = uVar2;
    func_0x00010b5fa088();
    if ((uVar3 - 2 < 0xb) && (uVar3 = uVar2, FUN_109023acc(), (int)uVar3 != 0)) {
      uVar3 = uVar2;
      func_0x00010b5fa088();
      uVar4 = 1;
      if (uVar3 < 7) {
        uVar4 = 0x33 >> (ulong)((uint)uVar3 & 0x1f);
      }
    }
    else {
      uVar4 = 0;
    }
    _objc_release(uVar2);
    return uVar4 & 1;
  }
  return 0;
}



/* Entry: 108cc83b4; end: 108cc83d7; -[SCPreviewSnapchatGalleryConfiguration isImageAsset] */

bool FUN_108cc83b4(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x38);
  bVar1 = false;
  if (lVar2 != 0) {
    func_0x00010c0c6c20();
    bVar1 = lVar2 == 1;
  }
  return bVar1;
}



/* Entry: 108cc83d8; end: 108cc83fb; -[SCPreviewSnapchatGalleryConfiguration isVideoAsset] */

bool FUN_108cc83d8(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x38);
  bVar1 = false;
  if (lVar2 != 0) {
    func_0x00010c0c6c20();
    bVar1 = lVar2 == 2;
  }
  return bVar1;
}



/* Entry: 108cc83fc; end: 108cc8467; -[SCPreviewSnapchatGalleryConfiguration isSnapFramed] */

bool FUN_108cc83fc(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bfb73c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf59920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 != 0;
}



/* Entry: 108cc8468; end: 108cc8477; -[SCPreviewSnapchatGalleryConfiguration hasMultipleExportFormats] */

uint FUN_108cc8468(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    _objc_retain();
    lVar2 = lVar1;
    func_0x00010b5fa088();
    if (lVar2 - 2U < 0xb) {
      lVar2 = lVar1;
      func_0x00010b5fa760(lVar1);
      uVar3 = (uint)lVar2 ^ 1;
    }
    else {
      uVar3 = 0;
    }
    _objc_release(lVar1);
    return uVar3;
  }
  return 0;
}



/* Entry: 108cc8478; end: 108cc848b; -[SCPreviewSnapchatGalleryConfiguration gallerySnapMediaType] */

long FUN_108cc8478(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    _objc_retain();
    lVar2 = lVar1;
    func_0x00010c246620();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar3 = lVar1;
      func_0x00010c0c6c20(lVar1);
      _objc_release(lVar1);
      lVar1 = (long)(int)lVar3;
    }
    else {
      lVar3 = lVar1;
      func_0x00010c246620(lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar1 = lVar3;
      func_0x00010c067ec0(lVar3);
      func_0x00010b5f9f38();
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
    return lVar1;
  }
  return 9999;
}



/* Entry: 108cc848c; end: 108cc8533; -[SCPreviewSnapchatGalleryConfiguration savedSnaps] */

undefined * FUN_108cc848c(undefined *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = *(undefined **)(param_1 + 0x48);
  if (((puVar2 == (undefined *)0x0) &&
      (puVar2 = *(undefined **)(param_1 + 0x80), puVar2 == (undefined *)0x0)) &&
     (puVar2 = *(undefined **)(param_1 + 0x68), puVar2 == (undefined *)0x0)) {
    plVar1 = (long *)(param_1 + 0x18);
    if (*plVar1 == 0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      param_1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_30 = *plVar1;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_30,1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_1;
    }
  }
  else {
    param_1 = puVar2;
    _objc_retain();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  return (undefined *)(ulong)(*(long *)(param_1 + 0x30) - 0x12U < 4);
}



/* Entry: 108cc8534; end: 108cc8547; -[SCPreviewSnapchatGalleryConfiguration shouldShowDefaultPreviewUI] */

bool FUN_108cc8534(long param_1)

{
  return *(long *)(param_1 + 0x30) - 0x12U < 4;
}



/* Entry: 108cc8548; end: 108cc854f; -[SCPreviewSnapchatGalleryConfiguration entry] */

undefined8 FUN_108cc8548(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108cc8550; end: 108cc857f; -[SCPreviewSnapchatGalleryConfiguration setEntry:] */

void FUN_108cc8550(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cc8580; end: 108cc8587; -[SCPreviewSnapchatGalleryConfiguration snap] */

undefined8 FUN_108cc8580(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108cc8588; end: 108cc85b7; -[SCPreviewSnapchatGalleryConfiguration setSnap:] */

void FUN_108cc8588(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cc85b8; end: 108cc85bf; -[SCPreviewSnapchatGalleryConfiguration cloudFile] */

undefined8 FUN_108cc85b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108cc85c0; end: 108cc85ef; -[SCPreviewSnapchatGalleryConfiguration setCloudFile:] */

void FUN_108cc85c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cc85f0; end: 108cc85f7; -[SCPreviewSnapchatGalleryConfiguration assetCloudFiles] */

undefined8 FUN_108cc85f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108cc85f8; end: 108cc8627; -[SCPreviewSnapchatGalleryConfiguration setAssetCloudFiles:] */

void FUN_108cc85f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cc8628; end: 108cc862f; -[SCPreviewSnapchatGalleryConfiguration userContext] */

undefined8 FUN_108cc8628(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108cc8630; end: 108cc8637; -[SCPreviewSnapchatGalleryConfiguration setUserContext:] */

void FUN_108cc8630(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 108cc8638; end: 108cc863f; -[SCPreviewSnapchatGalleryConfiguration asset] */

undefined8 FUN_108cc8638(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108cc8640; end: 108cc866f; -[SCPreviewSnapchatGalleryConfiguration setAsset:] */

void FUN_108cc8640(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cc8670; end: 108cc8677; -[SCPreviewSnapchatGalleryConfiguration contentEditingInput] */

undefined8 FUN_108cc8670(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108cc8678; end: 108cc86a7; -[SCPreviewSnapchatGalleryConfiguration setContentEditingInput:] */

void FUN_108cc8678(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cc86a8; end: 108cc86af; -[SCPreviewSnapchatGalleryConfiguration multiSnapSegments] */

undefined8 FUN_108cc86a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108cc86b0; end: 108cc86df; -[SCPreviewSnapchatGalleryConfiguration setMultiSnapSegments:] */

void FUN_108cc86b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cc86e0; end: 108cc86e7; -[SCPreviewSnapchatGalleryConfiguration multiSnapTimeRanges] */

undefined8 FUN_108cc86e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108cc86e8; end: 108cc8717; -[SCPreviewSnapchatGalleryConfiguration setMultiSnapTimeRanges:] */

void FUN_108cc86e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cc8718; end: 108cc871f; -[SCPreviewSnapchatGalleryConfiguration multiSnapCloudFiles] */

undefined8 FUN_108cc8718(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108cc8720; end: 108cc874f; -[SCPreviewSnapchatGalleryConfiguration setMultiSnapCloudFiles:] */

void FUN_108cc8720(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cc8750; end: 108cc8757; -[SCPreviewSnapchatGalleryConfiguration batchCaptureEntries] */

undefined8 FUN_108cc8750(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 108cc8758; end: 108cc8787; -[SCPreviewSnapchatGalleryConfiguration setBatchCaptureEntries:] */

void FUN_108cc8758(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cc8788; end: 108cc878f; -[SCPreviewSnapchatGalleryConfiguration batchCaptureSnaps] */

undefined8 FUN_108cc8788(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 108cc8790; end: 108cc87bf; -[SCPreviewSnapchatGalleryConfiguration setBatchCaptureSnaps:] */

void FUN_108cc8790(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


