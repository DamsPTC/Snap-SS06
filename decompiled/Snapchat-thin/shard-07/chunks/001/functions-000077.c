/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10516e77c; end: 10516e7c3;  */

void FUN_10516e77c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be9bd60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10516e7c4; end: 10516e82f; -[SCScreenshotSharingServicesEntryPoint _screenshotSharingServiceWithOffPlatformLinkGenerationService:shareNotificationService:] */

void FUN_10516e7c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b5608;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c030fc0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10516e830; end: 10516e877; -[SCScreenshotSharingServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10516e830(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271dd8c,0);
  _objc_destroyWeak(param_1 + _DAT_11271dd88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271dd84);
  return;
}



/* Entry: 10516e878; end: 10516f47f; -[SCSendToInlineShareSheetSectionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10516e878(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
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
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  undefined *puVar47;
  undefined *puVar48;
  undefined *puVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  lVar67 = (long)_DAT_11271dd90;
  lVar65 = param_1 + lVar67;
  _objc_loadWeakRetained();
  lVar1 = lVar65;
  func_0x00010c22aec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c45a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf8a6c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    uVar4 = param_1 + lVar67;
    _objc_loadWeakRetained();
    uVar5 = uVar4;
    func_0x00010c22aec0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0c45a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c077880();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar65);
    if ((uVar7 & 1) == 0) {
      puVar48 = (undefined *)(param_1 + _DAT_11271dd94);
      _objc_loadWeakRetained();
      puVar49 = puVar48;
      func_0x00010c2a29c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar48);
      goto LAB_10516e9e0;
    }
  }
  else {
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar65);
  }
  _objc_initWeak(auStack_70,param_1);
  puVar49 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
LAB_10516e9e0:
  if (param_1 == 0) {
    lVar65 = 0;
  }
  else {
    lVar65 = param_1 + _DAT_11271ddd8;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar65;
  func_0x00010c29bd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar65);
  puVar48 = PTR_PTR_1126b5610;
  _objc_alloc();
  lVar50 = (long)_DAT_11271dd98;
  lVar65 = param_1 + lVar50;
  _objc_loadWeakRetained();
  lVar9 = lVar65;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = (long)_DAT_11271dd9c;
  lVar1 = param_1 + lVar51;
  _objc_loadWeakRetained();
  lVar10 = lVar1;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + lVar67;
  _objc_loadWeakRetained();
  lVar11 = lVar2;
  func_0x00010c22aec0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + lVar67;
  _objc_loadWeakRetained();
  lVar12 = lVar3;
  func_0x00010bf0e960();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c15d5c0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + lVar67;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bf0e960();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f95ed0();
  lVar52 = (long)_DAT_11271dda0;
  lVar16 = param_1 + lVar52;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c242d80();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = (long)_DAT_11271dda4;
  lVar18 = param_1 + lVar53;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = (long)_DAT_11271dda8;
  lVar20 = param_1 + lVar54;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = (long)_DAT_11271ddac;
  lVar22 = param_1 + lVar55;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = (long)_DAT_11271ddb0;
  lVar24 = param_1 + lVar56;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010c06a980();
  _objc_retainAutoreleasedReturnValue();
  lVar57 = (long)_DAT_11271ddb4;
  lVar26 = param_1 + lVar57;
  _objc_loadWeakRetained();
  lVar27 = lVar26;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar58 = (long)_DAT_11271ddb8;
  lVar28 = param_1 + lVar58;
  _objc_loadWeakRetained();
  lVar29 = lVar28;
  func_0x00010bf3f640();
  _objc_retainAutoreleasedReturnValue();
  lVar59 = (long)_DAT_11271ddbc;
  lVar30 = param_1 + lVar59;
  _objc_loadWeakRetained();
  lVar31 = lVar30;
  func_0x00010c26b280();
  _objc_retainAutoreleasedReturnValue();
  lVar60 = (long)_DAT_11271ddc0;
  lVar32 = param_1 + lVar60;
  _objc_loadWeakRetained();
  lVar33 = lVar32;
  func_0x00010bf9e340();
  _objc_retainAutoreleasedReturnValue();
  lVar66 = (long)_DAT_11271ddc4;
  lVar34 = param_1 + lVar66;
  _objc_loadWeakRetained();
  lVar35 = lVar34;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_1 + lVar66;
  _objc_loadWeakRetained();
  lVar37 = lVar36;
  func_0x00010c27ecc0();
  _objc_retainAutoreleasedReturnValue();
  lVar61 = (long)_DAT_11271ddc8;
  lVar38 = param_1 + lVar61;
  _objc_loadWeakRetained();
  lVar39 = lVar38;
  func_0x00010c08f100();
  _objc_retainAutoreleasedReturnValue();
  lVar62 = (long)_DAT_11271ddcc;
  lVar40 = param_1 + lVar62;
  _objc_loadWeakRetained();
  lVar63 = (long)_DAT_11271ddd0;
  lVar41 = param_1 + lVar63;
  _objc_loadWeakRetained();
  lVar42 = lVar41;
  func_0x00010c130900();
  _objc_retainAutoreleasedReturnValue();
  lVar43 = param_1 + lVar67;
  _objc_loadWeakRetained();
  func_0x00010c239cc0();
  lVar44 = param_1;
  FUN_10516f518();
  _objc_retainAutoreleasedReturnValue();
  lVar64 = (long)_DAT_11271ddd4;
  lVar45 = param_1 + lVar64;
  _objc_loadWeakRetained();
  lVar46 = lVar45;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05f560();
  _objc_release(lVar46);
  _objc_release(lVar45);
  _objc_release(lVar44);
  _objc_release(lVar43);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar3);
  _objc_release(lVar11);
  _objc_release(lVar2);
  _objc_release(lVar10);
  _objc_release(lVar1);
  _objc_release(lVar9);
  _objc_release(lVar65);
  lVar65 = param_1 + lVar63;
  _objc_loadWeakRetained(lVar65);
  lVar1 = lVar65;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar1);
  _objc_release(lVar65);
  puVar47 = PTR_PTR_1126b5610;
  _objc_alloc();
  lVar50 = param_1 + lVar50;
  _objc_loadWeakRetained();
  lVar28 = lVar50;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = param_1 + lVar51;
  _objc_loadWeakRetained();
  lVar43 = lVar51;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar65 = param_1 + lVar67;
  _objc_loadWeakRetained();
  lVar45 = lVar65;
  func_0x00010c22aec0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + lVar67;
  _objc_loadWeakRetained();
  lVar9 = lVar1;
  func_0x00010bf0e960();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c15d5c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + lVar67;
  _objc_loadWeakRetained();
  lVar11 = lVar2;
  func_0x00010bf0e960();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f95ed0();
  lVar52 = param_1 + lVar52;
  _objc_loadWeakRetained();
  lVar12 = lVar52;
  func_0x00010c242d80();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = param_1 + lVar53;
  _objc_loadWeakRetained();
  lVar13 = lVar53;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar54 = param_1 + lVar54;
  _objc_loadWeakRetained();
  lVar30 = lVar54;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar55 = param_1 + lVar55;
  _objc_loadWeakRetained();
  lVar32 = lVar55;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = param_1 + lVar56;
  _objc_loadWeakRetained();
  lVar34 = lVar56;
  func_0x00010c06a980();
  _objc_retainAutoreleasedReturnValue();
  lVar57 = param_1 + lVar57;
  _objc_loadWeakRetained();
  lVar36 = lVar57;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar58 = param_1 + lVar58;
  _objc_loadWeakRetained();
  lVar38 = lVar58;
  func_0x00010bf3f640();
  _objc_retainAutoreleasedReturnValue();
  lVar59 = param_1 + lVar59;
  _objc_loadWeakRetained();
  lVar40 = lVar59;
  func_0x00010c26b280();
  _objc_retainAutoreleasedReturnValue();
  lVar60 = param_1 + lVar60;
  _objc_loadWeakRetained();
  lVar41 = lVar60;
  func_0x00010bf9e340();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + lVar66;
  _objc_loadWeakRetained();
  lVar18 = lVar3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar66 = param_1 + lVar66;
  _objc_loadWeakRetained();
  lVar20 = lVar66;
  func_0x00010c27ecc0();
  _objc_retainAutoreleasedReturnValue();
  lVar61 = param_1 + lVar61;
  _objc_loadWeakRetained();
  lVar22 = lVar61;
  func_0x00010c08f100();
  _objc_retainAutoreleasedReturnValue();
  lVar62 = param_1 + lVar62;
  _objc_loadWeakRetained();
  lVar14 = param_1 + lVar63;
  _objc_loadWeakRetained();
  lVar16 = lVar14;
  func_0x00010c130900();
  _objc_retainAutoreleasedReturnValue();
  lVar67 = param_1 + lVar67;
  _objc_loadWeakRetained();
  func_0x00010c239cc0();
  lVar24 = param_1;
  FUN_10516f518();
  _objc_retainAutoreleasedReturnValue();
  lVar64 = param_1 + lVar64;
  _objc_loadWeakRetained();
  lVar26 = lVar64;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05f560();
  _objc_release(lVar26);
  _objc_release(lVar64);
  _objc_release(lVar24);
  _objc_release(lVar67);
  _objc_release(lVar16);
  _objc_release(lVar14);
  _objc_release(lVar62);
  _objc_release(lVar22);
  _objc_release(lVar61);
  _objc_release(lVar20);
  _objc_release(lVar66);
  _objc_release(lVar18);
  _objc_release(lVar3);
  _objc_release(lVar41);
  _objc_release(lVar60);
  _objc_release(lVar40);
  _objc_release(lVar59);
  _objc_release(lVar38);
  _objc_release(lVar58);
  _objc_release(lVar36);
  _objc_release(lVar57);
  _objc_release(lVar34);
  _objc_release(lVar56);
  _objc_release(lVar32);
  _objc_release(lVar55);
  _objc_release(lVar30);
  _objc_release(lVar54);
  _objc_release(lVar13);
  _objc_release(lVar53);
  _objc_release(lVar12);
  _objc_release(lVar52);
  _objc_release(lVar11);
  _objc_release(lVar2);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar1);
  _objc_release(lVar45);
  _objc_release(lVar65);
  _objc_release(lVar43);
  _objc_release(lVar51);
  _objc_release(lVar28);
  _objc_release(lVar50);
  param_1 = param_1 + lVar63;
  _objc_loadWeakRetained(param_1);
  lVar65 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar65);
  _objc_release(param_1);
  _objc_release(puVar47);
  _objc_release(puVar48);
  _objc_release(lVar8);
  _objc_release(puVar49);
  return;
}



/* Entry: 10516f480; end: 10516f517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10516f480(long param_1,undefined8 param_2)

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
    lVar3 = param_1 + _DAT_11271dd94;
    _objc_loadWeakRetained(lVar3);
  }
  lVar1 = lVar3;
  func_0x00010c2a29c0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(param_1);
  func_0x00010c0f05c0(lVar2,param_2,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10516f518; end: 10516f53b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10516f518(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11271dddc);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10516f53c; end: 10516f64b; -[SCSendToInlineShareSheetSectionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10516f53c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271ddd4);
  _objc_destroyWeak(param_1 + _DAT_11271ddcc);
  _objc_destroyWeak(param_1 + _DAT_11271ddc4);
  _objc_destroyWeak(param_1 + _DAT_11271ddc0);
  _objc_destroyWeak(param_1 + _DAT_11271ddc8);
  _objc_destroyWeak(param_1 + _DAT_11271ddbc);
  _objc_destroyWeak(param_1 + _DAT_11271dddc);
  _objc_destroyWeak(param_1 + _DAT_11271ddd8);
  _objc_destroyWeak(param_1 + _DAT_11271dd94);
  _objc_destroyWeak(param_1 + _DAT_11271ddb0);
  _objc_destroyWeak(param_1 + _DAT_11271ddb8);
  _objc_destroyWeak(param_1 + _DAT_11271ddb4);
  _objc_destroyWeak(param_1 + _DAT_11271dd9c);
  _objc_destroyWeak(param_1 + _DAT_11271dd98);
  _objc_destroyWeak(param_1 + _DAT_11271ddac);
  _objc_destroyWeak(param_1 + _DAT_11271dda8);
  _objc_destroyWeak(param_1 + _DAT_11271ddd0);
  _objc_destroyWeak(param_1 + _DAT_11271dd90);
  _objc_destroyWeak(param_1 + _DAT_11271dda0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271dda4);
  return;
}



/* Entry: 10516f64c; end: 10516faff; -[SCSendToInlineShareSheetSectionExtension initWithUserTrackedLogger:valdiRuntimeProvider:shareSheetConfiguration:sendToSessionId:shareSource:snapSavingService:notificationPool:performerProvider:grapheneRegistry:inviteService:circumstanceEngine:cofRxStore:temporaryFileWriter:watermarkGenerator:videoWatermarkService:externalMediaLinkSendingService:sendToExperimentConfiguration:sendToUIConfiguration:forDisplayingSelection:memoriesLogger:crashServices:renderingTracker:showSendToTray:dreamsServices:featureSettingsService:] */

undefined8 *
FUN_10516f64c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined1 param_21,undefined4 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined1 param_26,undefined4 param_27,undefined8 param_28,
             undefined8 param_29)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
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
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_28);
  _objc_retain(param_29);
  puStack_70 = PTR_PTR_1126e6878;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[9];
    puVar1[9] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    puVar1[4] = param_7;
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
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[10];
    puVar1[10] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x13) = param_21;
    _objc_retain(param_23);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_25;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x17) = param_26;
    _objc_retain(param_28);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_29;
    _objc_release(uVar2);
  }
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
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
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10516fb00; end: 10516fb8f; -[SCSendToInlineShareSheetSectionExtension sectionIdentifiers] */

void FUN_10516fb00(long param_1,undefined8 param_2)

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
  byte bVar17;
  undefined *puVar18;
  undefined *puVar19;
  ulong uVar20;
  undefined ***pppuVar21;
  ulong uVar22;
  ulong uStack_a0;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + 0x98) & 1) == 0) {
    ppuStack_28 = &PTR____CFConstantStringClassReference_110f12d38;
    pppuVar21 = &ppuStack_28;
  }
  else {
    ppuStack_20 = &PTR____CFConstantStringClassReference_110f12bf8;
    pppuVar21 = &ppuStack_20;
  }
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,pppuVar21,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  puVar19 = PTR_PTR_1126b55e8;
  _objc_alloc();
  uVar1 = *(undefined8 *)(puVar18 + 8);
  uVar9 = *(undefined8 *)(puVar18 + 0x10);
  uVar2 = *(undefined8 *)(puVar18 + 0x18);
  uVar10 = *(undefined8 *)(puVar18 + 0x20);
  uVar3 = *(undefined8 *)(puVar18 + 0x28);
  uVar11 = *(undefined8 *)(puVar18 + 0x30);
  uVar4 = *(undefined8 *)(puVar18 + 0x38);
  uVar12 = *(undefined8 *)(puVar18 + 0x40);
  uVar5 = *(undefined8 *)(puVar18 + 0x78);
  uVar13 = *(undefined8 *)(puVar18 + 0x80);
  uVar6 = *(undefined8 *)(puVar18 + 0x48);
  uVar14 = *(undefined8 *)(puVar18 + 0x50);
  uVar7 = *(undefined8 *)(puVar18 + 0x58);
  uVar15 = *(undefined8 *)(puVar18 + 0x60);
  uVar8 = *(undefined8 *)(puVar18 + 0x68);
  uVar16 = *(undefined8 *)(puVar18 + 0x70);
  uVar22 = *(ulong *)(puVar18 + 0x88);
  bVar17 = puVar18[0xb8] ^ 1 | puVar18[0x98];
  if ((bVar17 & 1) == 0) {
    uStack_a0 = uVar22;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uStack_a0;
    func_0x00010c12cb80();
    if ((uVar20 & 1) == 0) goto LAB_10516fcd0;
    func_0x00010c05f520(puVar19,param_2,uVar1,uVar6,uVar9,uVar2,uVar10,uVar3,uVar11,uVar4,uVar12,
                        uVar7,uVar5,uVar13,uVar14,uVar15,uVar8,uVar16,uVar22,0);
  }
  else {
LAB_10516fcd0:
    func_0x00010c05f520();
    if ((bVar17 & 1) != 0) goto _objc_autoreleaseReturnValue;
  }
  _objc_release(uStack_a0);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10516fb90; end: 10516fd47; -[SCSendToInlineShareSheetSectionExtension sectionCreator] */

void FUN_10516fb90(long param_1,undefined8 param_2)

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
  byte bVar17;
  undefined *puVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uStack_70;
  
  puVar18 = PTR_PTR_1126b55e8;
  _objc_alloc();
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar12 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  uVar13 = *(undefined8 *)(param_1 + 0x80);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  uVar14 = *(undefined8 *)(param_1 + 0x50);
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  uVar15 = *(undefined8 *)(param_1 + 0x60);
  uVar8 = *(undefined8 *)(param_1 + 0x68);
  uVar16 = *(undefined8 *)(param_1 + 0x70);
  uVar20 = *(ulong *)(param_1 + 0x88);
  bVar17 = *(byte *)(param_1 + 0xb8) ^ 1 | *(byte *)(param_1 + 0x98);
  if ((bVar17 & 1) == 0) {
    uStack_70 = uVar20;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uStack_70;
    func_0x00010c12cb80();
    if ((uVar19 & 1) == 0) goto LAB_10516fcd0;
    func_0x00010c05f520(puVar18,param_2,uVar1,uVar6,uVar9,uVar2,uVar10,uVar3,uVar11,uVar4,uVar12,
                        uVar7,uVar5,uVar13,uVar14,uVar15,uVar8,uVar16,uVar20,0);
  }
  else {
LAB_10516fcd0:
    func_0x00010c05f520();
    if ((bVar17 & 1) != 0) goto LAB_10516fd24;
  }
  _objc_release(uStack_70);
LAB_10516fd24:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
  return;
}



/* Entry: 10516fd48; end: 10516fd7b; -[SCSendToInlineShareSheetSectionExtension sectionDescriptor] */

void FUN_10516fd48(void)

{
  _objc_alloc(PTR_PTR_1126b5618);
  func_0x00010c0443c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10516fd7c; end: 10516fd83; -[SCSendToInlineShareSheetSectionExtension sectionLoggingParser] */

undefined8 FUN_10516fd7c(void)

{
  return 0;
}



/* Entry: 10516fd84; end: 10516fea3; -[SCSendToInlineShareSheetSectionExtension .cxx_destruct] */

void FUN_10516fd84(long param_1)

{
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
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
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10516fea4; end: 10516feaf; +[SCSendToInlineShareSheetSection announcerIdentifier] */

undefined ** FUN_10516fea4(void)

{
  return &PTR____CFConstantStringClassReference_110dc8838;
}



/* Entry: 10516feb0; end: 10516feb7; -[SCSendToInlineShareSheetSection addListener:] */

void FUN_10516feb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10516feb8; end: 10516febf; -[SCSendToInlineShareSheetSection removeListener:] */

void FUN_10516feb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10516fec0; end: 10516fec7; -[SCSendToInlineShareSheetSection didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_10516fec0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_didTriggerEventWithEventName_ann_1125bd098);
  return;
}



/* Entry: 10516fec8; end: 105170477; -[SCSendToInlineShareSheetSection initWithSupplementaryViewProvider:shareOptions:preSelectedShareDestination:shareOptionsOrder:selectionActionHandler:shareActionHandler:shareLogger:operationLogger:valdiRuntimeProvider:presentingUIContainer:eventSubject:grapheneRegistry:sendToExperimentConfiguration:shareSource:sendToTracker:selectionTracker:selectionBasedShareSheetEnabled:circumstanceEngine:isSelectionSection:cofStore:beginInCollapsedState:renderingTracker:] */

undefined8 *
FUN_10516fec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,char param_19,undefined4 param_20,
             undefined8 param_21,undefined1 param_22,undefined4 param_23,undefined8 param_24,
             char param_25,undefined4 param_26,undefined8 param_27)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
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
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_21);
  _objc_retain(param_24);
  _objc_retain(param_27);
  puStack_70 = PTR_PTR_1126e6880;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar1[6];
    puVar1[6] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar1[7];
    puVar1[7] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar1[0x1b];
    puVar1[0x1b] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar3);
    _objc_retain(param_13);
    uVar3 = puVar1[0xd];
    puVar1[0xd] = param_13;
    _objc_release(uVar3);
    puVar1[0x23] = 2;
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_14);
    uVar3 = puVar1[0x10];
    puVar1[0x10] = param_14;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 0x11) = 0;
    _objc_retain(param_15);
    uVar3 = puVar1[0x12];
    puVar1[0x12] = param_15;
    _objc_release(uVar3);
    puVar1[0x13] = param_16;
    _objc_retain(param_17);
    uVar3 = puVar1[0x1c];
    puVar1[0x1c] = param_17;
    _objc_release(uVar3);
    _objc_retain(param_18);
    uVar3 = puVar1[0x1d];
    puVar1[0x1d] = param_18;
    _objc_release(uVar3);
    *(char *)(puVar1 + 0x16) = param_19;
    _objc_retain(param_21);
    uVar3 = puVar1[0x17];
    puVar1[0x17] = param_21;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    uVar4 = 0xc2000000;
    _objc_retain(param_21);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[0x18];
    puVar1[0x18] = puVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 0x19) = param_22;
    _CACurrentMediaTime();
    puVar1[0xe] = uVar4;
    puVar1[3] = 0x4055400000000000;
    puVar2 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar3 = puVar1[0x1e];
    puVar1[0x1e] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_24);
    uVar3 = puVar1[0x1f];
    puVar1[0x1f] = param_24;
    _objc_release(uVar3);
    *(char *)((long)puVar1 + 0x105) = param_25;
    _objc_retain(param_27);
    uVar3 = puVar1[0x21];
    puVar1[0x21] = param_27;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x104) = 0;
    uVar3 = param_15;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c2908e0();
    *(char *)((long)puVar1 + 0x106) = (char)uVar4;
    _objc_release(uVar3);
    if ((*(byte *)((long)puVar1 + 0x106) & 1) == 0) {
      func_0x000108f95f00();
      *(undefined4 *)(puVar1 + 0x20) = param_5;
    }
    func_0x00010bedf680(puVar1);
    if (param_19 != '\0') {
      func_0x00010bec83a0(puVar1);
    }
    if ((*(uint *)(puVar1 + 0x20) < 0x10) &&
       ((1 << (ulong)(*(uint *)(puVar1 + 0x20) & 0x1f) & 0x8003U) != 0)) {
      func_0x000108f95f00();
    }
    func_0x00010c0e64a0(puVar1);
    if (param_25 != '\0') {
      func_0x00010bec8400(puVar1);
    }
    _objc_release(param_21);
  }
  _objc_release(param_27);
  _objc_release(param_24);
  _objc_release(param_21);
  _objc_release(param_18);
  _objc_release(param_17);
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
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105170478; end: 1051704a7;  */

void FUN_105170478(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000108faa8b0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 1051704a8; end: 105170543; -[SCSendToInlineShareSheetSection containerCellViewModelsForIndexPaths:] */

void FUN_1051704a8(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126aea98;
  _objc_alloc();
  func_0x00010bffd260();
  puStack_30 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    pcStack_38 = FUN_105170544;
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = PTR_PTR_1126b5620;
    puStack_40 = &stack0xfffffffffffffff0;
    _objc_opt_class();
    ppuVar7 = &puStack_50;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar2;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
      ___stack_chk_fail();
      lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuVar8 = ppuVar7;
      _objc_retain(ppuVar7);
      puVar2 = PTR_PTR_1126b5240;
      _objc_opt_class(PTR_PTR_1126b5240);
      ppuVar4 = ppuVar7;
      _objc_opt_isKindOfClass(ppuVar7,puVar2);
      ppuVar1 = ppuVar7;
      if (((ulong)ppuVar4 & 1) == 0) {
        ppuVar1 = (undefined **)0x0;
      }
      _objc_retain(ppuVar1);
      if (ppuVar1 != (undefined **)0x0) {
        puVar2 = PTR_PTR_1126aea98;
        _objc_alloc();
        func_0x00010bffd260();
        puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        uVar10 = *(undefined8 *)(puVar3 + 0x78);
        puVar6 = PTR_PTR_1126b5628;
        _objc_alloc(PTR_PTR_1126b5628);
        ppuVar4 = ppuVar7;
        func_0x00010c155f60(ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _CACurrentMediaTime();
        func_0x00010c0df720(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c043280(puVar6);
        func_0x00010c0d9840(uVar10);
        _objc_release(puVar6);
        _objc_release(puVar2);
        _objc_release(ppuVar4);
        puVar2 = puVar3 + 0x128;
        _objc_loadWeakRetained(puVar2);
        func_0x00010c155aa0();
        _objc_release(puVar2);
        uVar10 = *(undefined8 *)(puVar3 + 0x108);
        ppuVar4 = ppuVar7;
        func_0x00010c155f60();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar4;
        func_0x00010bf790c0(uVar10);
        _objc_release(ppuVar4);
        _objc_retain(ppuVar7);
        uVar10 = *(undefined8 *)(puVar3 + 0x138);
        *(undefined ***)(puVar3 + 0x138) = ppuVar1;
        _objc_release(uVar10);
        _objc_release(puVar5);
      }
      _objc_release(ppuVar1);
      _objc_release(ppuVar7);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
        ___stack_chk_fail();
        _objc_retain(ppuVar8);
        puVar2 = PTR_PTR_1126b1700;
        _objc_opt_class(PTR_PTR_1126b1700);
        ppuVar4 = ppuVar8;
        _objc_opt_isKindOfClass(ppuVar8,puVar2);
        ppuVar1 = ppuVar8;
        if (((ulong)ppuVar4 & 1) == 0) {
          ppuVar1 = (undefined **)0x0;
        }
        _objc_retain(ppuVar1);
        ppuVar4 = ppuVar1;
        func_0x00010bf4c1e0(ppuVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar1);
        func_0x00010c1f9220(ppuVar7);
        _objc_release(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(ppuVar8);
        return;
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105170544; end: 1051705c3; -[SCSendToInlineShareSheetSection contentCellClassesByReuseIdentifier] */

void FUN_105170544(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b5620;
  _objc_opt_class();
  ppuVar7 = &puStack_20;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = ppuVar7;
  _objc_retain(ppuVar7);
  puVar2 = PTR_PTR_1126b5240;
  _objc_opt_class(PTR_PTR_1126b5240);
  ppuVar4 = ppuVar7;
  _objc_opt_isKindOfClass(ppuVar7,puVar2);
  ppuVar1 = ppuVar7;
  if (((ulong)ppuVar4 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  if (ppuVar1 != (undefined **)0x0) {
    puVar2 = PTR_PTR_1126aea98;
    _objc_alloc();
    func_0x00010bffd260();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar10 = *(undefined8 *)(puVar3 + 0x78);
    puVar6 = PTR_PTR_1126b5628;
    _objc_alloc(PTR_PTR_1126b5628);
    ppuVar4 = ppuVar7;
    func_0x00010c155f60(ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _CACurrentMediaTime();
    func_0x00010c0df720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043280(puVar6);
    func_0x00010c0d9840(uVar10);
    _objc_release(puVar6);
    _objc_release(puVar2);
    _objc_release(ppuVar4);
    puVar2 = puVar3 + 0x128;
    _objc_loadWeakRetained(puVar2);
    func_0x00010c155aa0();
    _objc_release(puVar2);
    uVar10 = *(undefined8 *)(puVar3 + 0x108);
    ppuVar4 = ppuVar7;
    func_0x00010c155f60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar4;
    func_0x00010bf790c0(uVar10);
    _objc_release(ppuVar4);
    _objc_retain(ppuVar7);
    uVar10 = *(undefined8 *)(puVar3 + 0x138);
    *(undefined ***)(puVar3 + 0x138) = ppuVar1;
    _objc_release(uVar10);
    _objc_release(puVar5);
  }
  _objc_release(ppuVar1);
  _objc_release(ppuVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar8);
  puVar2 = PTR_PTR_1126b1700;
  _objc_opt_class(PTR_PTR_1126b1700);
  ppuVar4 = ppuVar8;
  _objc_opt_isKindOfClass(ppuVar8,puVar2);
  ppuVar1 = ppuVar8;
  if (((ulong)ppuVar4 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  ppuVar4 = ppuVar1;
  func_0x00010bf4c1e0(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  func_0x00010c1f9220(ppuVar7);
  _objc_release(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar8);
  return;
}



/* Entry: 1051705c4; end: 1051707a7; -[SCSendToInlineShareSheetSection setSectionDataModel:] */

void FUN_1051705c4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = param_3;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b5240;
  _objc_opt_class(PTR_PTR_1126b5240);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    puVar2 = PTR_PTR_1126aea98;
    _objc_alloc();
    func_0x00010bffd260();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar9 = *(undefined8 *)(param_1 + 0x78);
    puVar5 = PTR_PTR_1126b5628;
    _objc_alloc(PTR_PTR_1126b5628);
    uVar3 = param_3;
    func_0x00010c155f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _CACurrentMediaTime();
    func_0x00010c0df720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043280(puVar5);
    func_0x00010c0d9840(uVar9);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(uVar3);
    lVar6 = param_1 + 0x128;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c155aa0();
    _objc_release(lVar6);
    uVar9 = *(undefined8 *)(param_1 + 0x108);
    uVar3 = param_3;
    func_0x00010c155f60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010bf790c0(uVar9);
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar9 = *(undefined8 *)(param_1 + 0x138);
    *(ulong *)(param_1 + 0x138) = uVar1;
    _objc_release(uVar9);
    _objc_release(puVar4);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar7);
  puVar2 = PTR_PTR_1126b1700;
  _objc_opt_class(PTR_PTR_1126b1700);
  uVar3 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar2);
  uVar1 = uVar7;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010bf4c1e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1f9220(param_3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 1051707a8; end: 105170833; -[SCSendToInlineShareSheetSection applyConfiguration:] */

void FUN_1051707a8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b1700;
  _objc_opt_class(PTR_PTR_1126b1700);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010bf4c1e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1f9220(param_1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105170834; end: 10517095b; -[SCSendToInlineShareSheetSection collectionView:willDisplayCell:atIndexInSection:] */

void FUN_105170834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _CACurrentMediaTime();
  uVar1 = param_4;
  func_0x00010c070ea0();
  uVar2 = param_4;
  func_0x00010c070400();
  _objc_initWeak(auStack_58,param_2);
  uVar3 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10517095c;
  puStack_78 = &UNK_11086cd18;
  _objc_copyWeak(auStack_70,auStack_58);
  uStack_60 = (undefined1)uVar2;
  uStack_5f = (undefined1)uVar1;
  uStack_68 = param_1;
  func_0x00010007380c(uVar3,&puStack_90);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10517095c; end: 105170997;  */

void FUN_10517095c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdcb700(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105170998; end: 105170d2b; -[SCSendToInlineShareSheetSection _announceCellWillDisplayEventWithEventTime:isDecelerating:isDragging:] */

long FUN_105170998(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  long lVar1;
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
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(undefined8 *)(param_2 + 8);
  lVar1 = param_2;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110f8a838;
  puVar2 = *(undefined **)(param_2 + 0x138);
  func_0x00010bf51e00();
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110f8a7f8;
  puVar4 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  puStack_b0 = puVar3;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_3,0,0);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110f8a858;
  puVar5 = PTR_PTR_1126b3568;
  puStack_a8 = puVar4;
  _objc_alloc(PTR_PTR_1126b3568);
  puVar6 = PTR_PTR_1126b3560;
  _objc_alloc(PTR_PTR_1126b3560);
  puVar7 = PTR_PTR_1126b3558;
  _objc_alloc(PTR_PTR_1126b3558);
  func_0x00010c03d4e0();
  func_0x00010c01bce0(puVar6,param_3,puVar7,0,0,0);
  func_0x00010c03d400(puVar5,param_3,puVar6,0);
  _objc_release(puVar6);
  _objc_release(puVar7);
  puVar6 = PTR_PTR_1126b52c0;
  _objc_alloc();
  puVar7 = PTR_PTR_1126b5678;
  _objc_alloc();
  func_0x00010c043e00();
  func_0x00010c0192e0(0x7fefffffffffffff,0x3ff0000000000000,0x3fd3333333333333,0,puVar6,param_3,1,
                      0xf,1,0,0,0,0,0,0,0,puVar7,1);
  _objc_release(puVar7);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_e8 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_e8,1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110f8a8b8;
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_a0 = puVar5;
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110f8a8f8;
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_98 = puVar7;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110f8a918;
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_90 = puVar8;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_88 = puVar9;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_b0,&ppuStack_e0,6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar11,param_3,&PTR____CFConstantStringClassReference_110f8a778,lVar1,puVar10)
  ;
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar4);
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return lVar1;
  }
  ___stack_chk_fail();
  return 1;
}



/* Entry: 105170d2c; end: 105170d33; -[SCSendToInlineShareSheetSection numberOfItemsInSection:] */

undefined8 FUN_105170d2c(void)

{
  return 1;
}



/* Entry: 105170d34; end: 105170d5b; -[SCSendToInlineShareSheetSection supplementaryViewProvider] */

void FUN_105170d34(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105170d5c; end: 105170ddb; -[SCSendToInlineShareSheetSection reuseCellClassesByIdentifiers] */

void FUN_105170d5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110dc87d8;
  puVar1 = PTR_PTR_1126b5620;
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    if ((puVar2[0xb0] == '\x01') && (puVar2[200] == '\x01')) {
      func_0x00010bf529e0();
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105170ddc; end: 105170e33; -[SCSendToInlineShareSheetSection numberOfCellsInSection] */

void FUN_105170ddc(long param_1)

{
  if ((*(char *)(param_1 + 0xb0) == '\x01') && (*(char *)(param_1 + 200) == '\x01')) {
    func_0x00010bf529e0();
  }
  return;
}



/* Entry: 105170e34; end: 105170e6b; -[SCSendToInlineShareSheetSection sectionInsets] */

void FUN_105170e34(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf8d060();
  uVar2 = 0x4030000000000000;
  if (lVar1 != 1) {
    uVar2 = 0;
  }
  uVar3 = 0;
  if (lVar1 != 1) {
    uVar3 = 0x4030000000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c297350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,uVar2,0,uVar3,PTR__OBJC_CLASS___NSValue_1126afdf8,
             PTR_s_valueWithUIEdgeInsets__1126836f8);
  return;
}



/* Entry: 105170e6c; end: 105170f9b; -[SCSendToInlineShareSheetSection cellForItemAtIndexInSection:] */

void FUN_105170e6c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar1 = param_1 + 0x110;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf40940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b5620;
  _objc_retain(uVar2);
  _objc_opt_class(puVar3);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  *(ulong *)(param_1 + 0x20) = uVar1;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  lVar6 = param_1;
  func_0x00010beb1f80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fee80(uVar5);
  _objc_release(lVar6);
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x68);
    puVar3 = PTR_PTR_1126b5630;
    func_0x00010c22af60(PTR_PTR_1126b5630);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar5);
    _objc_release(puVar3);
    func_0x00010be08360(param_1);
    *(undefined1 *)(param_1 + 0x88) = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar5);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105170f9c; end: 105170fab; -[SCSendToInlineShareSheetSection sizeForItemAtIndexInSection:withWidth:] */

undefined1  [16] FUN_105170f9c(double param_1,long param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = param_1 + -16.0;
  auVar1._8_8_ = *(undefined8 *)(param_2 + 0x18);
  return auVar1;
}



/* Entry: 105170fac; end: 10517104b; -[SCSendToInlineShareSheetSection shareOptionClickedWithDestination:] */

void FUN_105170fac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b50d0;
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  uVar2 = param_3;
  func_0x000108f94954(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c268f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8de60(uVar3);
  _objc_release(puVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x000108f95f24(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bfd26f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_handleShareDestination__1125d2360,param_3);
  return;
}



/* Entry: 10517104c; end: 10517104f; -[SCSendToInlineShareSheetSection dismiss] */

void FUN_10517104c(void)

{
  return;
}



/* Entry: 105171050; end: 105171057; -[SCSendToInlineShareSheetSection shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_105171050(void)

{
  return 0;
}



/* Entry: 105171058; end: 105171073; -[SCSendToInlineShareSheetSection pushToValdiMarshaller:] */

undefined8 FUN_105171058(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126df1c8;
  puVar1 = PTR_PTR_1126df1c0;
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    _objc_retain(param_1);
    _objc_opt_class(puVar1);
    func_0x00010afa0b54();
    func_0x00010afa0aec();
  }
  else {
    _objc_retain(param_1);
    _objc_opt_class(puVar2);
    func_0x00010afa0b54();
    func_0x00010afa0aec();
  }
  return param_3;
}



/* Entry: 105171074; end: 105171077; -[SCSendToInlineShareSheetSection didRenderValdiView:] */

void FUN_105171074(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed5ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateContentHeight_1125931a0);
  return;
}



/* Entry: 105171078; end: 10517107f; -[SCSendToInlineShareSheetSection shouldRecalculateSectionHeightWithViewModelUpdates] */

undefined8 FUN_105171078(void)

{
  return 1;
}



/* Entry: 105171080; end: 105171097; -[SCSendToInlineShareSheetSection _setupShareSheetViewWithViewModel:selectionViewModel:] */

void FUN_105171080(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(char *)(param_1 + 0xb0) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010beafa90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__setupSelectionShareSheetWithVie_112589848,param_4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bead870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupLegacyShareSheetWithViewMo_112588fc0);
  return;
}



/* Entry: 105171098; end: 10517116f; -[SCSendToInlineShareSheetSection _setupLegacyShareSheetWithViewModel:] */

void FUN_105171098(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b5638;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c295200(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7bc0();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010c21e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_setUserInteractionEnabled__112665468,1);
  return;
}



/* Entry: 105171170; end: 10517125f; -[SCSendToInlineShareSheetSection _setupSelectionShareSheetWithViewModel:] */

void FUN_105171170(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0xa0) == 0) {
    if ((*(byte *)(param_1 + 200) & 1) == 0) {
      puVar1 = PTR_PTR_1126b5640;
      _objc_alloc();
      uVar2 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c142e00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c061d40(puVar1,param_2,param_3,param_1,uVar3);
      uVar4 = *(undefined8 *)(param_1 + 0xa0);
      *(undefined **)(param_1 + 0xa0) = puVar1;
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar3 = *(undefined8 *)(param_1 + 0xa0);
      func_0x00010c295200(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d7bc0();
      _objc_release(uVar3);
      func_0x00010c21e900(*(undefined8 *)(param_1 + 0xa0),param_2,1);
    }
  }
  else {
    func_0x00010c2226c0(*(long *)(param_1 + 0xa0),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105171260; end: 10517128f; -[SCSendToInlineShareSheetSection _shareView] */

void FUN_105171260(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0xa0);
  }
  _objc_retain(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105171290; end: 10517130f; -[SCSendToInlineShareSheetSection _updateContentHeight] */

void FUN_105171290(undefined8 param_1,double param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_3;
  func_0x00010beb1f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0();
  _objc_release(lVar2);
  bVar1 = true;
  if ((0.0 < param_2) && (bVar1 = false, !NAN(param_2) && !NAN(*(double *)(param_3 + 0x18)))) {
    bVar1 = param_2 == *(double *)(param_3 + 0x18);
  }
  if (bVar1) {
    return;
  }
  *(double *)(param_3 + 0x18) = param_2;
  param_3 = param_3 + 0x128;
  _objc_loadWeakRetained(param_3);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105171310; end: 10517140b; -[SCSendToInlineShareSheetSection _emitShareSheetAvailableGrapheneMetric] */

void FUN_105171310(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b5648;
  func_0x00010c22ae80(PTR_PTR_1126b5648);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dad058,
                      &PTR____CFConstantStringClassReference_110dc8818);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,
                      &PTR____CFConstantStringClassReference_110dba418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c22af20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10517140c; end: 105171553; -[SCSendToInlineShareSheetSection _selectionItemUpdateFromShareDestination:] */

void FUN_10517140c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf6eb60(param_3);
  func_0x000108f95f24();
  uVar2 = uVar1;
  func_0x000108f94918();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f92280(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b3558;
  _objc_alloc(PTR_PTR_1126b3558);
  func_0x00010c03d4e0();
  puVar4 = PTR_PTR_1126b3560;
  _objc_alloc(PTR_PTR_1126b3560);
  func_0x00010c01bce0();
  puVar5 = PTR_PTR_1126b3568;
  _objc_alloc(PTR_PTR_1126b3568);
  func_0x00010c03d400();
  puVar6 = PTR_PTR_1126b5650;
  _objc_alloc(PTR_PTR_1126b5650);
  uVar7 = param_3;
  func_0x00010c07d660(param_3);
  _objc_release(param_3);
  func_0x00010c043e20(puVar6,param_2,puVar5,uVar7,0,&PTR____CFConstantStringClassReference_110f12d38
                     );
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105171554; end: 1051715df; -[SCSendToInlineShareSheetSection _handleSynchronousDestination:] */

undefined8 FUN_105171554(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar3 = (uint)param_3;
  if ((0x1d < uVar3) || ((1 << (ulong)(uVar3 & 0x1f) & 0x20008002U) == 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0xc0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1f3c0();
    _objc_release(uVar1);
    if (uVar3 == 0) {
      return 0;
    }
    if ((int)uVar2 == 0) {
      return 0;
    }
  }
  func_0x00010c22acc0(param_1,param_2,param_3);
  return 1;
}



/* Entry: 1051715e0; end: 105171847; -[SCSendToInlineShareSheetSection onSelectionStateChangedWithDestination:isSelected:] */

void FUN_1051715e0(undefined *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  code *pcStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined1 auStack_2a8 [8];
  undefined1 auStack_2a0 [8];
  undefined *puStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined *puStack_280;
  undefined4 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_1a8;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_4 == 0) ||
     (puVar2 = param_1, func_0x00010be31940(param_1,param_2,param_3), ((ulong)puVar2 & 1) == 0)) {
    puVar2 = PTR_PTR_1126b50d0;
    iVar13 = (int)param_3;
    if (iVar13 != 0) {
      uVar14 = *(undefined8 *)(param_1 + 0xe0);
      func_0x000108f94954();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c268f60(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf8de60(uVar14);
      _objc_release(puVar2);
      _objc_release(param_3);
    }
    iVar1 = iVar13;
    if (param_4 == 0) {
      iVar1 = 0;
    }
    *(int *)(param_1 + 0x100) = iVar1;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bffc4a0();
    lVar15 = *(long *)(param_1 + 0xa8);
    _objc_retain(lVar15);
    lVar3 = lVar15;
    func_0x00010bf52a60();
    lVar12 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar18 = 0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(lVar15);
        }
        uVar17 = *(undefined8 *)(lVar18 * 8);
        uVar14 = uVar17;
        func_0x00010bf6eb60();
        if (((int)uVar14 == iVar13) || (uVar14 = uVar17, func_0x00010c07d660(), (int)uVar14 != 0)) {
          func_0x00010c1b4280(uVar17);
          puVar4 = param_1;
          func_0x00010be9e300();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(puVar4);
        }
        lVar18 = lVar18 + 1;
      } while (lVar3 != lVar18);
      lVar3 = lVar15;
      func_0x00010bf52a60();
    }
    _objc_release(lVar15);
    uVar14 = *(undefined8 *)(param_1 + 0xd8);
    puVar4 = PTR_PTR_1126b02a8;
    _objc_alloc();
    puVar5 = PTR_PTR_1126b5658;
    _objc_alloc();
    func_0x00010c043e40();
    func_0x00010c01b460();
    func_0x00010bfd0140(uVar14);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lVar10 = *(long *)(puVar2 + 0xe8);
    if (lVar10 != 0) {
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      lStack_268 = 0;
      uStack_270 = 0;
      uStack_258 = 0;
      plStack_260 = (long *)0x0;
      func_0x00010c0eccc0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar10;
      func_0x00010bf52a60();
      if (lVar3 != 0) {
        lVar12 = *plStack_260;
        do {
          lVar15 = 0;
          do {
            if (*plStack_260 != lVar12) {
              _objc_enumerationMutation(lVar10);
            }
            lVar16 = *(long *)(lStack_268 + lVar15 * 8);
            lVar18 = lVar16;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            if (lVar18 != 0) {
              lVar6 = lVar16;
              func_0x00010bfe5ec0(lVar16);
              _objc_retainAutoreleasedReturnValue();
              lVar7 = lVar6;
              func_0x00010c15ab60();
              _objc_retainAutoreleasedReturnValue();
              iVar13 = 0x10f52e98;
              func_0x00010c0720c0();
              _objc_release(lVar7);
              _objc_release(lVar6);
              _objc_release(lVar18);
              if (iVar13 != 0) {
                func_0x00010bfe5ec0(lVar16);
                _objc_retainAutoreleasedReturnValue();
                lVar18 = lVar16;
                func_0x00010c122b80();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar4);
                _objc_release(lVar18);
                _objc_release(lVar16);
              }
            }
            lVar15 = lVar15 + 1;
          } while (lVar3 != lVar15);
          lVar3 = lVar10;
          func_0x00010bf52a60();
        } while (lVar3 != 0);
      }
      _objc_release(lVar10);
    }
    if ((puVar2[0x106] & 1) == 0) {
      uStack_278 = *(undefined4 *)(puVar2 + 0x100);
    }
    else {
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x000108f94c24();
      _objc_release(puVar4);
      uStack_278 = (int)puVar5;
      func_0x000108f95f00();
      *(undefined4 *)(puVar2 + 0x100) = uStack_278;
    }
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    uVar14 = *(undefined8 *)(puVar2 + 0x30);
    puStack_298 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_290 = 0xc0000000;
    pcStack_288 = FUN_105171c08;
    puStack_280 = &UNK_11086cd48;
    func_0x000100504554(uVar14,&puStack_298);
    puVar11 = (undefined8 *)(puVar2 + 0xa8);
    uVar17 = *puVar11;
    *puVar11 = uVar14;
    _objc_release(uVar17);
    uVar14 = *puVar11;
    func_0x0001006372a4(uVar14,&PTR___NSConcreteGlobalBlock_11086cd88);
    uVar17 = *(undefined8 *)(puVar2 + 0xd0);
    *(undefined8 *)(puVar2 + 0xd0) = uVar14;
    _objc_release(uVar17);
    puVar5 = PTR_PTR_1126b5668;
    _objc_alloc();
    uVar14 = *(undefined8 *)(puVar2 + 0x30);
    func_0x00010bf00560(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff5e80();
    _objc_release(uVar14);
    uVar14 = *(undefined8 *)(puVar2 + 0x38);
    func_0x00010bf51e00(uVar14);
    func_0x00010c18af20(puVar5);
    _objc_release(uVar14);
    func_0x00010c20eaa0(puVar5);
    puVar8 = PTR_PTR_1126b5670;
    _objc_alloc();
    func_0x00010c043f20();
    _objc_initWeak(auStack_2a0,puVar2);
    puStack_2d8 = puVar4;
    uStack_2d0 = 0xc2000000;
    pcStack_2c8 = FUN_105171c78;
    puStack_2c0 = &UNK_110848218;
    _objc_copyWeak(auStack_2a8,auStack_2a0);
    _objc_retain(puVar5);
    puStack_2b8 = puVar5;
    _objc_retain(puVar8);
    ppuVar9 = &puStack_2d8;
    puStack_2b0 = puVar8;
    func_0x000100162d98("APPSTORE",ppuVar9);
    _objc_release(puStack_2b0);
    _objc_release(puStack_2b8);
    _objc_destroyWeak(auStack_2a8);
    _objc_destroyWeak(auStack_2a0);
    _objc_release(puVar8);
    _objc_release(puVar5);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
      return;
    }
    ___stack_chk_fail();
    __Unwind_Resume();
    func_0x00010c067ec0(ppuVar9);
    _objc_alloc(PTR_PTR_1126b5660);
    func_0x00010c00bb20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 105171848; end: 105171c07; -[SCSendToInlineShareSheetSection _updateSelectedDestinations] */

void FUN_105171848(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [8];
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined4 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar3 = *(long *)(param_1 + 0xe8);
  if (lVar3 != 0) {
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    func_0x00010c0eccc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar15 = *plStack_130;
      do {
        lVar13 = 0;
        do {
          if (*plStack_130 != lVar15) {
            _objc_enumerationMutation(lVar3);
          }
          lVar16 = *(long *)(lStack_138 + lVar13 * 8);
          lVar5 = lVar16;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar5 != 0) {
            lVar6 = lVar16;
            func_0x00010bfe5ec0(lVar16);
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar6;
            func_0x00010c15ab60();
            _objc_retainAutoreleasedReturnValue();
            iVar1 = 0x10f52e98;
            func_0x00010c0720c0();
            _objc_release(lVar7);
            _objc_release(lVar6);
            _objc_release(lVar5);
            if (iVar1 != 0) {
              func_0x00010bfe5ec0(lVar16);
              _objc_retainAutoreleasedReturnValue();
              lVar5 = lVar16;
              func_0x00010c122b80();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar2);
              _objc_release(lVar5);
              _objc_release(lVar16);
            }
          }
          lVar13 = lVar13 + 1;
        } while (lVar4 != lVar13);
        lVar4 = lVar3;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(lVar3);
  }
  if ((*(byte *)(param_1 + 0x106) & 1) == 0) {
    uStack_148 = *(undefined4 *)(param_1 + 0x100);
  }
  else {
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x000108f94c24();
    _objc_release(puVar2);
    uStack_148 = (int)puVar8;
    func_0x000108f95f00();
    *(undefined4 *)(param_1 + 0x100) = uStack_148;
  }
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc0000000;
  pcStack_158 = FUN_105171c08;
  puStack_150 = &UNK_11086cd48;
  func_0x000100504554(uVar11,&puStack_168);
  puVar14 = (undefined8 *)(param_1 + 0xa8);
  uVar12 = *puVar14;
  *puVar14 = uVar11;
  _objc_release(uVar12);
  uVar11 = *puVar14;
  func_0x0001006372a4(uVar11,&PTR___NSConcreteGlobalBlock_11086cd88);
  uVar12 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = uVar11;
  _objc_release(uVar12);
  puVar8 = PTR_PTR_1126b5668;
  _objc_alloc();
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf00560(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff5e80();
  _objc_release(uVar11);
  uVar11 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf51e00(uVar11);
  func_0x00010c18af20(puVar8);
  _objc_release(uVar11);
  func_0x00010c20eaa0(puVar8);
  puVar9 = PTR_PTR_1126b5670;
  _objc_alloc();
  func_0x00010c043f20();
  _objc_initWeak(auStack_170,param_1);
  puStack_1a8 = puVar2;
  uStack_1a0 = 0xc2000000;
  pcStack_198 = FUN_105171c78;
  puStack_190 = &UNK_110848218;
  _objc_copyWeak(auStack_178,auStack_170);
  _objc_retain(puVar8);
  puStack_188 = puVar8;
  _objc_retain(puVar9);
  ppuVar10 = &puStack_1a8;
  puStack_180 = puVar9;
  func_0x000100162d98("APPSTORE",ppuVar10);
  _objc_release(puStack_180);
  _objc_release(puStack_188);
  _objc_destroyWeak(auStack_178);
  _objc_destroyWeak(auStack_170);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x00010c067ec0(ppuVar10);
  _objc_alloc(PTR_PTR_1126b5660);
  func_0x00010c00bb20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105171c08; end: 105171c6f;  */

void FUN_105171c08(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067ec0(param_2);
  _objc_alloc(PTR_PTR_1126b5660);
  func_0x00010c00bb20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105171c70; end: 105171c77;  */

void FUN_105171c70(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isSelected_1125fcfa8);
  return;
}



/* Entry: 105171c78; end: 105171cab;  */

void FUN_105171c78(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010beafb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105171cac; end: 105171d8f; -[SCSendToInlineShareSheetSection _subscribeToSelectionUpdates] */

void FUN_105171cac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  func_0x00010bf6d420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  return;
}



/* Entry: 105171d90; end: 105171f0f;  */

void FUN_105171d90(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x2020000000;
    uStack_48 = 0;
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x2020000000;
    uStack_68 = 0;
    func_0x00010bf97ce0(param_2);
    if (*(int *)(puStack_58 + 3) != 0) {
      if ((*(int *)(param_1 + 0x100) == *(int *)(puStack_58 + 3)) &&
         ((*(byte *)(puStack_78 + 3) & 1) == 0)) {
        *(undefined4 *)(param_1 + 0x100) = 0;
      }
      uVar2 = 0x19;
      func_0x0001000819a8(0x19,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010007380c();
      _objc_release(uVar2);
    }
    __Block_object_dispose(&uStack_80,8);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(param_1);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 105171f10; end: 105172053;  */

void FUN_105171f10(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar2 = param_2;
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c15ab60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0720c0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((int)uVar5 != 0) {
    uVar2 = param_2;
    func_0x00010c122a80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c122b80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x000108f94c24();
    uVar1 = (undefined4)uVar5;
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x000108f95f00();
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar1;
    uVar2 = param_3;
    func_0x00010bf1f3c0();
    *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)uVar2;
    *param_4 = 1;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105172054; end: 10517205b;  */

void FUN_105172054(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateSelectedDestinations_112595748);
  return;
}



/* Entry: 10517205c; end: 105172147; -[SCSendToInlineShareSheetSection _subscribeToSendToEvents] */

void FUN_10517205c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010bf9a080(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105172148; end: 10517221f;  */

void FUN_105172148(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c1600(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105172220; end: 10517224b;  */

void FUN_105172220(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8abe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10517224c; end: 1051722c7; -[SCSendToInlineShareSheetSection _reloadSectionWithFABTapped] */

void FUN_10517224c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (((*(byte *)(param_1 + 0x104) & 1) == 0) && (*(char *)(param_1 + 0x105) == '\x01')) {
    *(undefined1 *)(param_1 + 0x104) = 1;
    puVar1 = PTR_PTR_1126b48b0;
    func_0x00010c128f60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x120);
    *(undefined **)(param_1 + 0x120) = puVar1;
    _objc_release(uVar2);
    param_1 = param_1 + 0x110;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf40a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1051722c8; end: 1051722df; -[SCSendToInlineShareSheetSection delegate] */

void FUN_1051722c8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x110);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051722e0; end: 1051722eb; -[SCSendToInlineShareSheetSection setDelegate:] */

void FUN_1051722e0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x110,param_3);
  return;
}



/* Entry: 1051722ec; end: 1051722f3; -[SCSendToInlineShareSheetSection dataLoadingStatus] */

undefined8 FUN_1051722ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 1051722f4; end: 1051722fb; -[SCSendToInlineShareSheetSection setDataLoadingStatus:] */

void FUN_1051722f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x118) = param_3;
  return;
}



/* Entry: 1051722fc; end: 105172303; -[SCSendToInlineShareSheetSection sectionUpdateModel] */

undefined8 FUN_1051722fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



/* Entry: 105172304; end: 10517230b; -[SCSendToInlineShareSheetSection setSectionUpdateModel:] */

void FUN_105172304(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10517230c; end: 105172323; -[SCSendToInlineShareSheetSection dataProviderDelegate] */

void FUN_10517230c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x128);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105172324; end: 10517232f; -[SCSendToInlineShareSheetSection setDataProviderDelegate:] */

void FUN_105172324(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x128,param_3);
  return;
}



/* Entry: 105172330; end: 105172337; -[SCSendToInlineShareSheetSection updateQueuePerformer] */

undefined8 FUN_105172330(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



/* Entry: 105172338; end: 105172367; -[SCSendToInlineShareSheetSection setUpdateQueuePerformer:] */

void FUN_105172338(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x130) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105172368; end: 10517236f; -[SCSendToInlineShareSheetSection sectionDataModel] */

undefined8 FUN_105172368(long param_1)

{
  return *(undefined8 *)(param_1 + 0x138);
}



/* Entry: 105172370; end: 105172377; -[SCSendToInlineShareSheetSection sectionDataTrackerObservable] */

undefined8 FUN_105172370(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 105172378; end: 10517237f; -[SCSendToInlineShareSheetSection useShortCopyString] */

undefined8 FUN_105172378(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



/* Entry: 105172380; end: 1051723af; -[SCSendToInlineShareSheetSection setUseShortCopyString:] */

void FUN_105172380(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x140) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051723b0; end: 1051723b7; -[SCSendToInlineShareSheetSection useDeviceLevelStorage] */

undefined8 FUN_1051723b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x148);
}



/* Entry: 1051723b8; end: 1051723e7; -[SCSendToInlineShareSheetSection setUseDeviceLevelStorage:] */

void FUN_1051723b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x148) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051723e8; end: 1051723ef; -[SCSendToInlineShareSheetSection cofStore] */

undefined8 FUN_1051723e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 1051723f0; end: 10517241f; -[SCSendToInlineShareSheetSection setCofStore:] */

void FUN_1051723f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105172420; end: 1051725bb; -[SCSendToInlineShareSheetSection .cxx_destruct] */

void FUN_105172420(long param_1)

{
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_destroyWeak(param_1 + 0x128);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_destroyWeak(param_1 + 0x110);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051725bc; end: 105172b0b; -[SCSendToInlineShareSheetSectionCreatorImpl initWithUiContainer:sendToTracker:userTrackedLogger:valdiRuntimeProvider:actionHandler:shareSheetConfiguration:sendToSessionId:shareSource:snapSavingService:notificationPool:performerProvider:grapheneRegistry:inviteService:circumstanceEngine:cofRxStore:temporaryFileWriter:watermarkGenerator:videoWatermarkService:externalMediaLinkSendingService:sendToExperimentConfiguration:selectionTracker:isSelectionSection:memoriesLogger:crashServices:renderingTracker:withoutHeader:genAIDreamsService:featureSettingsService:] */

undefined8 *
FUN_1051725bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined1 param_24,
             undefined4 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined1 param_29,undefined4 param_30,undefined8 param_31,undefined8 param_32)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
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
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_31);
  _objc_retain(param_32);
  puStack_70 = PTR_PTR_1126e6888;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
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
    uVar2 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar2);
    puVar1[10] = param_10;
    _objc_retain(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[7];
    puVar1[7] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[8];
    puVar1[8] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x16) = param_24;
    _objc_retain(param_26);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_32;
    _objc_release(uVar2);
    func_0x00010bf22720(puVar1);
    *(undefined1 *)(puVar1 + 0x21) = param_29;
    _objc_retain(param_31);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_31;
    _objc_release(uVar2);
  }
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
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
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105172b0c; end: 105172b1b; -[SCSendToInlineShareSheetSectionCreatorImpl _selectionBasedShareSheetEnabled] */

bool FUN_105172b0c(long param_1)

{
  return *(long *)(param_1 + 0x50) != 0xd;
}



/* Entry: 105172b1c; end: 105172f6f; -[SCSendToInlineShareSheetSectionCreatorImpl buildSection] */

void FUN_105172b1c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar6 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined **)(param_1 + 0xd0) = puVar1;
  _objc_release();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b5680;
  _objc_alloc();
  func_0x00010c05f160();
  uVar7 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined **)(param_1 + 0xd8) = puVar1;
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0xd0);
  puVar1 = PTR_PTR_1126b5630;
  func_0x00010c136660(PTR_PTR_1126b5630);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar7);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b5688;
  _objc_alloc();
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c26b9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf9df40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010bf53fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058480();
  uVar8 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined **)(param_1 + 0xe0) = puVar1;
  _objc_release(uVar8);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar7);
  puVar1 = PTR_PTR_1126b5690;
  _objc_alloc();
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c26b9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0c45a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0faf60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf9df40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058880();
  uVar9 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined **)(param_1 + 0xe8) = puVar1;
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar7);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c26b9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0c45a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x000108f936e8(uVar2,uVar3,0,0,0,*(undefined8 *)(param_1 + 0x90));
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = uVar7;
  _objc_release(uVar8);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar7 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = uVar7;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b5698;
  _objc_alloc();
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0c45a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bf8a6c0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c22c620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar9;
  func_0x00010c1057c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c22c620();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c22c620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045a80();
  uVar10 = *(undefined8 *)(param_1 + 0x100);
  *(undefined **)(param_1 + 0x100) = puVar1;
  _objc_release(uVar10);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 105172f70; end: 1051732bb; -[SCSendToInlineShareSheetSectionCreatorImpl sectionForDescriptor:] */

void FUN_105172f70(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((int)uVar2 == 0) {
    uVar2 = param_3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 == 0) {
      puVar5 = (undefined *)0x0;
      goto LAB_105173290;
    }
  }
  else {
    _objc_release(uVar1);
  }
  uVar2 = param_3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b1700;
  _objc_opt_class(PTR_PTR_1126b1700);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar5);
  uVar1 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf4c1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126b5240;
  _objc_opt_class(PTR_PTR_1126b5240);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar5);
  uVar1 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c155ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar6 = (undefined *)0x0;
  if ((*(byte *)(param_1 + 0x108) & 1) == 0) {
    if (*(long *)(param_1 + 0x50) == 0xd) {
      puVar6 = PTR_PTR_1126b1720;
      _objc_alloc(PTR_PTR_1126b1720);
      uVar1 = uVar2;
      func_0x00010c2711a0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      FUN_1051745a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01a160(puVar6);
      _objc_release(uVar3);
      _objc_release(uVar1);
    }
    else {
      puVar6 = PTR_PTR_1126b5398;
      _objc_alloc(PTR_PTR_1126b5398);
      func_0x00010c01a160();
    }
  }
  func_0x00010c161980(puVar6);
  puVar5 = PTR_PTR_1126b56a0;
  _objc_alloc();
  func_0x00010c105fe0();
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  func_0x000108f930fc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9e1c0();
  func_0x00010bf182a0();
  func_0x00010c04f8e0(puVar5);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 200);
  uVar1 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf79c60(uVar4);
  _objc_release(uVar1);
  _objc_release(puVar6);
  _objc_release(uVar2);
LAB_105173290:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1051732bc; end: 105173453; -[SCSendToInlineShareSheetSectionCreatorImpl .cxx_destruct] */

void FUN_1051732bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 105173454; end: 1051738e3; -[SCSendToInlineShareSheetSectionCreator initWithUserTrackedLogger:valdiRuntimeProvider:shareSheetConfiguration:sendToSessionId:shareSource:snapSavingService:notificationPool:performerProvider:grapheneRegistry:inviteService:circumstanceEngine:cofRxStore:temporaryFileWriter:watermarkGenerator:videoWatermarkService:externalMediaLinkSendingService:sendToExperimentConfiguration:isSelectionSection:memoriesLogger:crashServices:renderingTracker:withoutHeader:dreamsServices:featureSettingsService:] */

undefined8 *
FUN_105173454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined1 param_20,
             undefined4 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined1 param_25,undefined4 param_26,undefined8 param_27,undefined8 param_28)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
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
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_27);
  _objc_retain(param_28);
  puStack_70 = PTR_PTR_1126e6890;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[7];
    puVar1[7] = param_6;
    _objc_release(uVar2);
    puVar1[8] = param_7;
    _objc_retain(param_8);
    uVar2 = puVar1[9];
    puVar1[9] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[10];
    puVar1[10] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[2];
    puVar1[2] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[3];
    puVar1[3] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_19;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x13) = param_20;
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_24;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x17) = param_25;
    _objc_retain(param_27);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_28;
    _objc_release(uVar2);
  }
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
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
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1051738e4; end: 10517394b; -[SCSendToInlineShareSheetSectionCreator initWithUserTrackedLogger:valdiRuntimeProvider:shareSheetConfiguration:sendToSessionId:shareSource:snapSavingService:notificationPool:performerProvider:grapheneRegistry:inviteService:circumstanceEngine:cofRxStore:temporaryFileWriter:watermarkGenerator:videoWatermarkService:externalMediaLinkSendingService:sendToExperimentConfiguration:isSelectionSection:memoriesLogger:crashServices:withoutHeader:dreamsServices:featureSettingsService:] */

void FUN_1051738e4(void)

{
  func_0x00010c05f520();
  return;
}



/* Entry: 10517394c; end: 105173afb; -[SCSendToInlineShareSheetSectionCreator sectionCreatorWithActionHandler:sendToTracker:uiContainer:] */

void FUN_10517394c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

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
  undefined1 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  puVar12 = PTR_PTR_1126b56a8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uVar15 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar21 = *(undefined8 *)(param_1 + 0x40);
  uVar20 = *(undefined8 *)(param_1 + 0x38);
  uVar18 = *(undefined8 *)(param_1 + 0x50);
  uVar16 = *(undefined8 *)(param_1 + 0x48);
  uVar19 = *(undefined8 *)(param_1 + 0x18);
  uVar17 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uVar7 = *(undefined8 *)(param_1 + 0x60);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  uVar8 = *(undefined8 *)(param_1 + 0x70);
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  uVar9 = *(undefined8 *)(param_1 + 0x80);
  uVar5 = *(undefined8 *)(param_1 + 0x88);
  uVar10 = *(undefined8 *)(param_1 + 0x90);
  uVar13 = param_4;
  func_0x00010c15ab20();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined1 *)(param_1 + 0x98);
  uVar14 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010bfbe800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058920(puVar12,param_2,param_5,param_4,uVar15,uVar1,param_3,uVar6,uVar20,uVar21,
                      uVar16,uVar18,uVar17,uVar19,uVar7,uVar9,uVar5,uVar2,uVar3,uVar8,uVar4,uVar10,
                      uVar13,uVar11);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar14);
  _objc_release(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 105173afc; end: 105173c1b; -[SCSendToInlineShareSheetSectionCreator .cxx_destruct] */

void FUN_105173afc(long param_1)

{
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
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



/* Entry: 105173c1c; end: 105173cc7; -[SCSendToInlineShareSheetSectionDescriptor initWithSendToExperimentConfiguration:sendToUIConfiguration:isSelectionSection:] */

undefined1 *
FUN_105173c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6898;
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
    *(undefined1 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105173cc8; end: 105173df3; -[SCSendToInlineShareSheetSectionDescriptor sectionDescriptorForQuery:] */

void FUN_105173cc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_3;
  _objc_retain(param_3);
  func_0x000105173f34();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000106c9d38c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b16f8;
  _objc_alloc(PTR_PTR_1126b16f8);
  func_0x00010c028e00();
  lVar1 = 0x80;
  if (*(char *)(param_1 + 0x18) == '\0') {
    lVar1 = 0xd0;
  }
  uVar6 = *(undefined8 *)((long)&PTR_PTR_110acf8d0 + lVar1);
  _objc_retain(uVar6);
  uVar2 = param_3;
  func_0x00010c11da20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = uVar6;
  func_0x000106c9c554(0xbff0000000000000,0,0x4024000000000000,0,uVar6,uVar2,uVar3,puVar4,1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105173df4; end: 105173e23; -[SCSendToInlineShareSheetSectionDescriptor .cxx_destruct] */

void FUN_105173df4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105173e24; end: 105173e57; -[SCSendToInlineShareSheetContainerCell initWithFrame:] */

void FUN_105173e24(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e68a0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 105173e58; end: 105173ec7; -[SCSendToInlineShareSheetContainerCell setShareSheetView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105173e58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11271dff0;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar2));
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105173ec8; end: 105173f1f; -[SCSendToInlineShareSheetContainerCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105173ec8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e68a0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11271dff0));
  return;
}



/* Entry: 105173f20; end: 105173f4b; -[SCSendToInlineShareSheetContainerCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105173f20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271dff0,0);
  return;
}



/* Entry: 105173f4c; end: 10517401b;  */

void FUN_105173f4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b56b0;
  _objc_retain();
  _objc_opt_new(puVar1);
  func_0x00010c1a7ac0();
  puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc(PTR__OBJC_CLASS___UICollectionView_1126afd20);
  func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c1f7e20();
  func_0x00010c167a20(puVar2,param_2,1);
  func_0x00010c2026e0(puVar2,param_2,0);
  func_0x00010c181fc0(puVar2,param_2,2);
  func_0x00010c160fc0(puVar2,param_2,param_1);
  _objc_release(param_1);
  func_0x00010c181f80(0,0,0x402e000000000000,0,puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10517401c; end: 10517403f; -[SCAddFriendsSectionHeaderSupplementaryViewProvider initWithHeaderViewModel:] */

void FUN_10517401c(long param_1)

{
  func_0x00010c01a1a0();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



/* Entry: 105174040; end: 10517411b; -[SCAddFriendsSectionHeaderSupplementaryViewProvider initWithHeaderViewModel:badgedViewModel:badgeProvider:] */

undefined1 *
FUN_105174040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e68a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x28) = 1;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10517411c; end: 105174123; -[SCAddFriendsSectionHeaderSupplementaryViewProvider sectionHeaderDisplayStrategy] */

undefined8 FUN_10517411c(void)

{
  return 1;
}



/* Entry: 105174124; end: 1051741ef; -[SCAddFriendsSectionHeaderSupplementaryViewProvider viewClassesForSupplementaryViewsByElementKind] */

void FUN_105174124(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &puStack_30;
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    _objc_retain(ppuVar5);
    ppuVar2 = ppuVar5;
    func_0x00010c0720c0();
    if ((int)ppuVar2 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = puVar1 + 0x38;
      _objc_loadWeakRetained();
      puVar3 = puVar7;
      func_0x00010c1565c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar7 = PTR_PTR_1126b56b8;
      _objc_opt_class(PTR_PTR_1126b56b8);
      puVar4 = puVar3;
      _objc_opt_isKindOfClass(puVar3,puVar7);
      puVar7 = puVar3;
      if (((ulong)puVar4 & 1) == 0) {
        puVar7 = (undefined *)0x0;
      }
      _objc_retain(puVar7);
      _objc_release(puVar3);
      func_0x00010c2226c0(puVar7);
      func_0x00010c161980(puVar7);
      _objc_storeWeak(puVar1 + 0x20,puVar7);
      _objc_initWeak(auStack_98,puVar1);
      if (puVar1[0x28] == '\x01') {
        uVar6 = *(undefined8 *)(puVar1 + 0x18);
        _objc_copyWeak(auStack_a0,auStack_98);
        func_0x00010c283b40(uVar6);
        _objc_destroyWeak(auStack_a0);
      }
      _objc_destroyWeak(auStack_98);
    }
    _objc_release(ppuVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}


