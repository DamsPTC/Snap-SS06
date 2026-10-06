/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106494c28; end: 106494c2b;  */

void FUN_106494c28(void)

{
  return;
}



/* Entry: 106494c2c; end: 106494c67; -[SCContextOperaDataPublisher .cxx_destruct] */

void FUN_106494c2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106494c68; end: 1064950c7; -[SCContextOperaLayerProvider initWithUserSession:experimentsProvider:contextSpotlightScopeExposer:contextSpotlightScopeServices:tappableElementsScopeExposer:pollsDynamicStickerScopeExposer:pollsDynamicStickerScopeServices:planDynamicStickerScopeExposer:planDynamicStickerScopeServices:viewLogger:contextServices:dataPublisher:operaChromeScopeExposer:operaChromeScopeServices:aifTopLevelCardsExperimentsService:performerProvider:customAppThemeProvider:lensPromptDataProvider:nglStudySettings:storiesConfigProvider:appStartExperimentReader:] */

undefined8 *
FUN_106494c68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23)

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
  puStack_70 = PTR_PTR_1126f15b0;
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
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[10];
    puVar1[10] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    _objc_release(uVar2);
  }
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



/* Entry: 1064950c8; end: 1064951c7; -[SCContextOperaLayerProvider createLayerViewControllerWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

void FUN_1064950c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cae08;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c001ac0();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1064951c8; end: 106495213; -[SCContextOperaLayerProvider createLayerWithPage:] */

void FUN_1064951c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cae10;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106495214; end: 106495327; -[SCContextOperaLayerProvider .cxx_destruct] */

void FUN_106495214(long param_1)

{
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



/* Entry: 106495328; end: 10649544b; -[SCContextOperaPluginProvider initWithCircumstanceEngine:uccExperiments:contextExperimentService:storiesConfigProvider:memoriesConfiguration:] */

undefined1 *
FUN_106495328(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f15b8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10649544c; end: 106495453; -[SCContextOperaPluginProvider createContextOperaPlugin] */

void FUN_10649544c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf556d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_createContextOperaPluginWithDele_1125b2f58,0)
  ;
  return;
}



/* Entry: 106495454; end: 1064954bb; -[SCContextOperaPluginProvider createContextOperaPluginWithDelegate:] */

void FUN_106495454(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cae18;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bffec40();
  func_0x00010c18b5e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1064954bc; end: 10649550f; -[SCContextOperaPluginProvider .cxx_destruct] */

void FUN_1064954bc(long param_1)

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



/* Entry: 106495510; end: 10649570f; -[SCContextOperaPluginServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106495510(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_112748750;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar8;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_112748754;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar8;
  func_0x00010c27e560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_112748758;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar8;
  func_0x00010bf4e6e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_112748760;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar8;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  lVar8 = 0;
  if (param_1 != 0) {
    lVar8 = param_1 + _DAT_11274875c;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar8;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106495710;
  puStack_80 = &UNK_1109249b0;
  puVar6 = PTR_PTR_1126ae720;
  lStack_78 = lVar1;
  lStack_70 = lVar2;
  lStack_68 = lVar3;
  lStack_60 = lVar4;
  lStack_58 = lVar5;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_98);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126cae28;
  _objc_alloc(PTR_PTR_1126cae28);
  func_0x00010c037620();
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106495710; end: 106495747;  */

void FUN_106495710(void)

{
  _objc_alloc(PTR_PTR_1126cae20);
  func_0x00010bffec40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106495748; end: 106495837; -[SCContextOperaPluginServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106495748(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112748760);
  _objc_destroyWeak(param_1 + _DAT_11274875c);
  _objc_destroyWeak(param_1 + _DAT_112748758);
  _objc_destroyWeak(param_1 + _DAT_112748754);
  _objc_destroyWeak(param_1 + _DAT_112748750);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274874c);
  return;
}



/* Entry: 106495838; end: 106495d83; -[SCContextOperaServicesEntryPoint createContextOperaLayerProviderWithViewLogger:dataPublisher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106495838(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
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
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_100;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  puVar1 = PTR_PTR_1126cae38;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_112748768;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar17;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cae40;
  _objc_alloc();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_11274876c;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar18;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_112748780;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar19;
  func_0x00010bf4e6e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11274877c;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar20;
  func_0x00010c27e560();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_112748784;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar21;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe520(puVar3,param_2,lVar4,lVar5,lVar6);
  if (param_1 == 0) {
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    _objc_retain(0);
    uStack_148 = 0;
    lVar27 = 0;
    uStack_100 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_140 = 0;
    lVar22 = 0;
  }
  else {
    uStack_90 = *(undefined8 *)(param_1 + _DAT_1127487b8);
    _objc_retain();
    uStack_80 = param_1 + _DAT_1127487a8;
    _objc_loadWeakRetained();
    uStack_88 = *(undefined8 *)(param_1 + _DAT_1127487bc);
    _objc_retain();
    uStack_98 = *(undefined8 *)(param_1 + _DAT_1127487b0);
    _objc_retain();
    uStack_a0 = param_1 + _DAT_1127487b4;
    _objc_loadWeakRetained();
    uStack_100 = *(undefined8 *)(param_1 + _DAT_1127487c8);
    _objc_retain();
    uStack_a8 = param_1 + _DAT_1127487cc;
    _objc_loadWeakRetained();
    lVar27 = param_1 + _DAT_112748778;
    _objc_loadWeakRetained();
    uStack_140 = *(undefined8 *)(param_1 + _DAT_1127487c0);
    _objc_retain();
    uStack_148 = param_1 + _DAT_1127487c4;
    _objc_loadWeakRetained();
    lVar22 = param_1 + _DAT_112748788;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar22;
  func_0x00010bf9c6c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = param_1 + _DAT_112748794;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar23;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112748764;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bf611e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar24 = 0;
  }
  else {
    lVar24 = param_1 + _DAT_112748798;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar24;
  func_0x00010c119b40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar25 = 0;
  }
  else {
    lVar25 = param_1 + _DAT_11274879c;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar25;
  func_0x00010c25df60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar26 = 0;
  }
  else {
    lVar26 = param_1 + _DAT_1127487a0;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar26;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = 0;
  if (param_1 != 0) {
    lVar15 = param_1 + _DAT_1127487a4;
    _objc_loadWeakRetained();
  }
  lVar16 = lVar15;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d920(puVar1,param_2,lVar2,puVar3,uStack_90,uStack_80,uStack_88,uStack_98,uStack_a0,
                      uStack_100,uStack_a8,param_3,lVar27,param_4,uStack_140,uStack_148,lVar8,lVar9,
                      lVar11,lVar12,lVar13,lVar14,lVar16);
  _objc_release(uStack_140);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar26);
  _objc_release(lVar13);
  _objc_release(lVar25);
  _objc_release(lVar12);
  _objc_release(lVar24);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar23);
  _objc_release(lVar8);
  _objc_release(lVar22);
  _objc_release(uStack_148);
  _objc_release(uStack_100);
  _objc_release(lVar27);
  _objc_release(uStack_a8);
  _objc_release(uStack_a0);
  _objc_release(uStack_98);
  _objc_release(uStack_88);
  _objc_release(uStack_80);
  _objc_release(uStack_90);
  _objc_release(puVar3);
  _objc_release(lVar7);
  _objc_release(lVar21);
  _objc_release(lVar6);
  _objc_release(lVar20);
  _objc_release(lVar5);
  _objc_release(lVar19);
  _objc_release(lVar4);
  _objc_release(lVar18);
  _objc_release(lVar2);
  _objc_release(lVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106495d84; end: 106495e2f; -[SCContextOperaServicesEntryPoint createDataPublisher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106495d84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126cae48;
  _objc_alloc(PTR_PTR_1126cae48);
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1 + _DAT_11274878c;
    _objc_loadWeakRetained(lVar3);
  }
  lVar2 = lVar3;
  func_0x00010beedde0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24b040(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff0040(puVar1,param_2,lVar2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106495e30; end: 106495e87; -[SCContextOperaServicesEntryPoint spotlightDataFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106495e30(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112748790;
    _objc_loadWeakRetained(param_1);
  }
  lVar1 = param_1;
  func_0x00010bfab9e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106495e88; end: 106496003; -[SCContextOperaServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106495e88(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127487cc);
  _objc_storeStrong(param_1 + _DAT_1127487c8,0);
  _objc_destroyWeak(param_1 + _DAT_1127487c4);
  _objc_storeStrong(param_1 + _DAT_1127487c0,0);
  _objc_storeStrong(param_1 + _DAT_1127487bc,0);
  _objc_storeStrong(param_1 + _DAT_1127487b8,0);
  _objc_destroyWeak(param_1 + _DAT_1127487b4);
  _objc_storeStrong(param_1 + _DAT_1127487b0,0);
  _objc_storeStrong(param_1 + _DAT_1127487ac,0);
  _objc_destroyWeak(param_1 + _DAT_1127487a8);
  _objc_destroyWeak(param_1 + _DAT_1127487a4);
  _objc_destroyWeak(param_1 + _DAT_1127487a0);
  _objc_destroyWeak(param_1 + _DAT_11274879c);
  _objc_destroyWeak(param_1 + _DAT_112748798);
  _objc_destroyWeak(param_1 + _DAT_112748794);
  _objc_destroyWeak(param_1 + _DAT_112748764);
  _objc_destroyWeak(param_1 + _DAT_112748790);
  _objc_destroyWeak(param_1 + _DAT_11274878c);
  _objc_destroyWeak(param_1 + _DAT_112748788);
  _objc_destroyWeak(param_1 + _DAT_112748784);
  _objc_destroyWeak(param_1 + _DAT_112748780);
  _objc_destroyWeak(param_1 + _DAT_11274877c);
  _objc_destroyWeak(param_1 + _DAT_112748778);
  _objc_destroyWeak(param_1 + _DAT_112748774);
  _objc_destroyWeak(param_1 + _DAT_112748770);
  _objc_destroyWeak(param_1 + _DAT_11274876c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112748768);
  return;
}



/* Entry: 106496004; end: 1064960a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106496004(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126cae50;
  _objc_alloc(PTR_PTR_1126cae50);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1 + _DAT_1127487d4;
    _objc_loadWeakRetained(lVar3);
  }
  lVar2 = lVar3;
  func_0x00010c293fc0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05f0c0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1064960a4; end: 1064960db; -[SCContextViewLoggingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1064960a4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127487d4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127487d0);
  return;
}



/* Entry: 1064960dc; end: 1064961a3; -[SCContextOperaFixedNavigationManager updateWithPage:layerViewController:isFirstUpdate:] */

void FUN_1064960dc(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2d20;
  func_0x00010c128240(PTR_PTR_1126b2d20);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_4);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  func_0x00010bf885a0(uVar1);
  _objc_release(uVar1);
  *(undefined8 *)(param_2 + 0x40) = param_1;
  return;
}



/* Entry: 1064961a4; end: 1064962e7; -[SCContextOperaFixedNavigationManager layerViewController:pageabilityForRelativePosition:swipeDirection:gestureRecognizer:] */

ulong FUN_1064961a4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                   long param_6)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  double dVar4;
  double in_d3;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  if (param_5 == 0) {
    if (*(double *)(param_1 + 0x40) == -1.0) {
      lVar1 = param_3;
      func_0x00010bf5d2e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      func_0x00010c09ef00(param_6,param_2,lVar2);
      lVar1 = lVar2;
      func_0x00010c102b20(lVar2,param_2,0);
      uVar3 = (ulong)((uint)lVar1 ^ 1);
    }
    else {
      dVar4 = 0.01;
      if (*(double *)(param_1 + 0x40) < 0.01) goto LAB_1064961e0;
      lVar1 = param_6;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      if (lVar2 == 0) {
        uVar3 = 0xffffffffffffffff;
      }
      else {
        func_0x00010c09ef00(param_6,param_2,lVar2);
        func_0x00010bf20c00(lVar2);
        uVar3 = (ulong)(dVar4 < *(double *)(param_1 + 0x40) * in_d3);
      }
    }
    _objc_release(lVar2);
  }
  else {
LAB_1064961e0:
    uVar3 = 0xffffffffffffffff;
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1064962e8; end: 10649635b; -[SCContextOperaFixedNavigationManager layerViewControllerDidStartScrolling:] */

void FUN_1064962e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  func_0x00010bf5d2e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  *(undefined8 *)(param_5 + 0x20) = param_3;
  *(undefined8 *)(param_5 + 0x28) = param_4;
  _objc_release(uVar1);
  _objc_release(param_7);
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  *(undefined8 *)(param_5 + 8) = param_1;
  return;
}



/* Entry: 10649635c; end: 1064964b3; -[SCContextOperaFixedNavigationManager layerViewController:updateViewWithHorizontalPageOffset:isCurrentPage:] */

void FUN_10649635c(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
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
  
  _objc_retain(param_6);
  uVar1 = param_6;
  func_0x00010bf5d2e0(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bfb68e0(uVar2);
  uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_b0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_a0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  _CGAffineTransformTranslate(&uStack_80,-(param_3 * param_1),0,&uStack_b0);
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  func_0x00010c219960(uVar2,param_5,&uStack_b0);
  dVar3 = 1.0 - ABS(param_1);
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  func_0x00010c2835a0(dVar3,uVar2);
  uVar1 = param_6;
  func_0x00010bfdf3a0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee2aa0(param_1,param_3,param_4,param_5,uVar1);
  _objc_release(uVar1);
  uVar1 = param_6;
  func_0x00010c298e80(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010bee2aa0(param_1,param_3,param_4,param_5,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 1064964b4; end: 1064965c7; -[SCContextOperaFixedNavigationManager _updateUIContainer:horizontalPageOffset:pageWidth:] */

void FUN_1064964b4(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  double dVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 0) goto LAB_1064965ac;
  dVar1 = ABS(param_1) * -2.0 + 1.0;
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  func_0x00010c1677c0(dVar1,param_5);
  if (0.5 <= param_1) {
    dVar1 = 0.15;
LAB_106496540:
    dVar1 = param_2 * dVar1;
  }
  else {
    if (0.0 <= param_1) {
      dVar1 = 0.3;
    }
    else {
      if (param_1 < -0.5) {
        dVar1 = -0.3;
        goto LAB_106496540;
      }
      dVar1 = 0.6;
    }
    dVar1 = param_1 * param_2 * dVar1;
  }
  uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_90 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_80 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  _CGAffineTransformTranslate(&uStack_60,dVar1 - param_1 * param_2,0,&uStack_90);
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  func_0x00010c219960(param_5,param_4,&uStack_90);
LAB_1064965ac:
  _objc_release(param_5);
  return;
}



/* Entry: 1064965c8; end: 1064965cb; -[SCContextOperaFixedNavigationManager layerViewController:updateViewWithVerticalPageOffset:relativePosition:] */

void FUN_1064965c8(void)

{
  return;
}



/* Entry: 1064965cc; end: 106496687; -[SCContextOperaFixedNavigationManager layerViewControllerDidEndScrolling:] */

void FUN_1064965cc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf5d2e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c138000(param_1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c07df60();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010bf5d2e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2835a0(0x3ff0000000000000);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106496688; end: 106496743; -[SCContextOperaFixedNavigationManager reset:] */

void FUN_106496688(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar2 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar7 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uVar3 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_50 = uVar2;
  uStack_48 = uVar4;
  uStack_40 = uVar6;
  uStack_38 = uVar7;
  uStack_30 = uVar3;
  uStack_28 = uVar5;
  _objc_retain(param_3);
  func_0x00010c219960(param_3,param_2,&uStack_50);
  uVar1 = param_3;
  func_0x00010bf5d5c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uStack_50 = uVar2;
  uStack_48 = uVar4;
  uStack_40 = uVar6;
  uStack_38 = uVar7;
  uStack_30 = uVar3;
  uStack_28 = uVar5;
  func_0x00010c219960();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf5d5c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1677c0(0x3ff0000000000000,uVar1);
  _objc_release(uVar1);
  return;
}



/* Entry: 106496744; end: 106496863; -[SCContextOperaFixedNavigationManager layerViewControllerWillDismiss:isInteractive:] */

void FUN_106496744(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + 0x30);
  lVar3 = 0;
  if (uVar2 != 0) {
    func_0x00010c07cd60();
    if ((uVar2 & 1) != 0) goto LAB_106496848;
    lVar3 = *(long *)(param_1 + 0x30);
  }
  func_0x00010c252440();
  if (lVar3 == 1) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
    func_0x00010c075c40();
    if (iVar1 != 0) {
      func_0x00010c2559c0(*(undefined8 *)(param_1 + 0x30),param_2,1);
    }
  }
  uVar6 = param_3;
  func_0x00010bf5d2e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar5 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
  _objc_alloc();
  func_0x00010c00ea20(0x3fc999999999999a,0x4024000000000000);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar5;
  _objc_release(uVar6);
  func_0x00010c1d99e0(*(undefined8 *)(param_1 + 0x30),param_2,1);
  func_0x00010c24dc40(*(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar4);
LAB_106496848:
  _objc_release(param_3);
  return;
}



/* Entry: 106496864; end: 10649686f;  */

void FUN_106496864(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2835b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_updateAlpha__11267e790);
  return;
}



/* Entry: 106496870; end: 1064968e3; -[SCContextOperaFixedNavigationManager layerViewControllerDismissDidEnd:didComplete:] */

void FUN_106496870(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  if ((param_4 & 1) == 0) {
    func_0x00010c1ede40(lVar2,param_2,1);
    func_0x00010c1d99e0(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010c24dc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x30),PTR_s_startAnimation_112671138);
    return;
  }
  func_0x00010c252440();
  if (lVar2 == 1) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
    func_0x00010c075c40();
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c2559d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x30),PTR_s_stopAnimation__112673098,1);
      return;
    }
  }
  return;
}



/* Entry: 1064968e4; end: 1064968e7; -[SCContextOperaFixedNavigationManager layerViewController:pageZoomScaleDidChange:] */

void FUN_1064968e4(void)

{
  return;
}



/* Entry: 1064968e8; end: 1064968f3; -[SCContextOperaFixedNavigationManager .cxx_destruct] */

void FUN_1064968e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,0);
  return;
}



/* Entry: 1064968f4; end: 106496933; -[SCContextOperaTrayVerticalNavigationManager init] */

void FUN_1064968f4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126f15c0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 0x10) = 1;
  }
  return;
}



/* Entry: 106496934; end: 1064969af; -[SCContextOperaTrayVerticalNavigationManager updateWithPage:layerViewController:isFirstUpdate:] */

void FUN_106496934(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  int in_w4;
  
  if (in_w4 != 0) {
    func_0x00010bf5d2e0(in_x3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = in_x3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c227960(0x408f400000000000);
    _objc_release(uVar2);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(in_x3);
    return;
  }
  return;
}



/* Entry: 1064969b0; end: 106496a93; -[SCContextOperaTrayVerticalNavigationManager layerViewController:pageabilityForRelativePosition:swipeDirection:gestureRecognizer:] */

undefined8
FUN_1064969b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5,undefined8 param_6,long param_7,long param_8)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xffffffffffffffff;
  if ((param_7 == 0) && (param_8 != 0)) {
    _objc_retain(param_8);
    func_0x00010bf5d2e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    func_0x00010c09ef00(param_8,param_4,uVar2);
    _objc_release(param_8);
    uVar3 = uVar2;
    func_0x00010c102b20(param_1,param_2,uVar2,param_4,0);
    if ((uVar3 & 1) == 0) {
      uVar3 = uVar2;
      func_0x00010bf20c00();
      iVar1 = (int)uVar3;
      _CGRectInset();
      _CGRectContainsPoint();
      uVar4 = 0xffffffffffffffff;
      if (iVar1 != 0) {
        uVar4 = 1;
      }
    }
    else {
      uVar4 = 1;
    }
    _objc_release(uVar2);
  }
  return uVar4;
}



/* Entry: 106496a94; end: 106496a97; -[SCContextOperaTrayVerticalNavigationManager layerViewControllerDidStartScrolling:] */

void FUN_106496a94(void)

{
  return;
}



/* Entry: 106496a98; end: 106496a9b; -[SCContextOperaTrayVerticalNavigationManager layerViewController:updateViewWithHorizontalPageOffset:isCurrentPage:] */

void FUN_106496a98(void)

{
  return;
}



/* Entry: 106496a9c; end: 106496be7; -[SCContextOperaTrayVerticalNavigationManager layerViewController:updateViewWithVerticalPageOffset:relativePosition:] */

void FUN_106496a9c(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_6);
  uVar1 = param_6;
  func_0x00010bf5d2e0(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (1.0 <= ABS(param_1)) {
    uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_70 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    func_0x00010c219960(uVar2,param_5,&uStack_70);
  }
  else {
    uVar1 = param_6;
    func_0x00010c29bf00(param_6);
    _objc_retainAutoreleasedReturnValue();
    dVar4 = *(double *)PTR__CGPointZero_110347540;
    func_0x00010c14caa0(dVar4,*(undefined8 *)(PTR__CGPointZero_110347540 + 8));
    uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_70 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    _CGAffineTransformTranslate(&uStack_a0,0,-((dVar4 + param_3) * param_1),&uStack_70);
    uStack_68 = uStack_98;
    uStack_70 = uStack_a0;
    uStack_58 = uStack_88;
    uStack_60 = uStack_90;
    uStack_48 = uStack_78;
    uStack_50 = uStack_80;
    func_0x00010c219960(uVar2,param_5,&uStack_70);
    uVar3 = param_6;
    func_0x00010c230b80();
    if ((int)uVar3 != 0) {
      func_0x00010c1a7f60(uVar2,param_5,param_7 != 0);
    }
    _objc_release(uVar1);
  }
  _objc_release(uVar2);
  _objc_release(param_6);
  return;
}



/* Entry: 106496be8; end: 106496beb; -[SCContextOperaTrayVerticalNavigationManager layerViewControllerDidEndScrolling:] */

void FUN_106496be8(void)

{
  return;
}



/* Entry: 106496bec; end: 106496d0b; -[SCContextOperaTrayVerticalNavigationManager layerViewControllerWillDismiss:isInteractive:] */

void FUN_106496bec(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + 8);
  lVar3 = 0;
  if (uVar2 != 0) {
    func_0x00010c07cd60();
    if ((uVar2 & 1) != 0) goto LAB_106496cf0;
    lVar3 = *(long *)(param_1 + 8);
  }
  func_0x00010c252440();
  if (lVar3 == 1) {
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c075c40();
    if (iVar1 != 0) {
      func_0x00010c2559c0(*(undefined8 *)(param_1 + 8),param_2,1);
    }
  }
  uVar6 = param_3;
  func_0x00010bf5d2e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar5 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
  _objc_alloc();
  func_0x00010c00ea20(0x3fc999999999999a,0x4024000000000000);
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar5;
  _objc_release(uVar6);
  func_0x00010c1d99e0(*(undefined8 *)(param_1 + 8),param_2,1);
  func_0x00010c24dc40(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar4);
LAB_106496cf0:
  _objc_release(param_3);
  return;
}



/* Entry: 106496d0c; end: 106496d7b;  */

void FUN_106496d0c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 in_d3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c234ae0();
  if (iVar1 != 0) {
    func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x28));
    _CGAffineTransformMakeTranslation(&uStack_50,0,in_d3);
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_68 = uStack_38;
    uStack_70 = uStack_40;
    uStack_58 = uStack_28;
    uStack_60 = uStack_30;
    func_0x00010c219960(*(undefined8 *)(param_1 + 0x28),param_2,&uStack_80);
  }
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106496d7c; end: 106496def; -[SCContextOperaTrayVerticalNavigationManager layerViewControllerDismissDidEnd:didComplete:] */

void FUN_106496d7c(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if ((param_4 & 1) == 0) {
    func_0x00010c1ede40(lVar2,param_2,1);
    func_0x00010c1d99e0(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010c24dc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_startAnimation_112671138);
    return;
  }
  func_0x00010c252440();
  if (lVar2 == 1) {
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c075c40();
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c2559d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 8),PTR_s_stopAnimation__112673098,1);
      return;
    }
  }
  return;
}



/* Entry: 106496df0; end: 106496f13; -[SCContextOperaTrayVerticalNavigationManager layerViewController:pageZoomScaleDidChange:] */

void FUN_106496df0(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_7);
  uVar2 = param_7;
  func_0x00010bf5d2e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = 0x3ff0000000000000;
  if (param_1 != 1.0) {
    uVar2 = 0;
  }
  func_0x00010c1677c0(uVar2,uVar1);
  uVar2 = param_7;
  func_0x00010c29bf00(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010bf20c00(uVar2);
  _objc_release(uVar2);
  _CGAffineTransformMakeScale(&uStack_a0,param_1,param_1);
  _CGAffineTransformInvert(&uStack_70,&uStack_a0);
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  _CGAffineTransformTranslate
            (&uStack_d0,0,((param_4 - param_1 * param_4) * 0.5) / param_1,&uStack_a0);
  uStack_98 = uStack_c8;
  uStack_a0 = uStack_d0;
  uStack_88 = uStack_b8;
  uStack_90 = uStack_c0;
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  func_0x00010c219960(uVar1,param_6,&uStack_a0);
  _objc_release(uVar1);
  return;
}



/* Entry: 106496f14; end: 106496f1b; -[SCContextOperaTrayVerticalNavigationManager shouldSlideOutTrayOnDismiss] */

undefined1 FUN_106496f14(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 106496f1c; end: 106496f23; -[SCContextOperaTrayVerticalNavigationManager setShouldSlideOutTrayOnDismiss:] */

void FUN_106496f1c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 106496f24; end: 106496f2f; -[SCContextOperaTrayVerticalNavigationManager .cxx_destruct] */

void FUN_106496f24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106496f30; end: 10649706b; -[SCContextSpotlightNavigationManager updateWithPage:layerViewController:isFirstUpdate:] */

void FUN_106496f30(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  if (param_5 != 0) {
    func_0x00010bf5d2e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c227960(0x408f400000000000);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_4);
  }
  uVar3 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2d20;
  func_0x00010bf80ba0(PTR_PTR_1126b2d20);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar4);
  uVar3 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar5);
  uVar5 = uVar3;
  func_0x00010bf1f3c0();
  _objc_release(uVar3);
  *(char *)(param_1 + 0x10) = (char)uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10649706c; end: 10649715f; -[SCContextSpotlightNavigationManager layerViewController:pageabilityForRelativePosition:swipeDirection:gestureRecognizer:] */

undefined8
FUN_10649706c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,long param_10)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = 0xffffffffffffffff;
  if ((param_9 == 0) && (param_10 != 0)) {
    _objc_retain(param_10);
    func_0x00010bf5d2e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    func_0x00010bf20c00(uVar2);
    _CGRectInset();
    uVar3 = param_1;
    uVar4 = param_2;
    func_0x00010c09ef00(param_10,param_6,uVar2);
    _objc_release();
    iVar1 = (int)param_10;
    _CGRectContainsPoint(param_1,param_2,param_3,param_4,uVar3,uVar4);
    uVar3 = 0xffffffffffffffff;
    if (iVar1 != 0) {
      uVar3 = 1;
    }
    _objc_release(uVar2);
  }
  return uVar3;
}



/* Entry: 106497160; end: 106497163; -[SCContextSpotlightNavigationManager layerViewControllerDidStartScrolling:] */

void FUN_106497160(void)

{
  return;
}



/* Entry: 106497164; end: 106497167; -[SCContextSpotlightNavigationManager layerViewController:updateViewWithHorizontalPageOffset:isCurrentPage:] */

void FUN_106497164(void)

{
  return;
}



/* Entry: 106497168; end: 106497267; -[SCContextSpotlightNavigationManager layerViewController:updateViewWithVerticalPageOffset:relativePosition:] */

void FUN_106497168(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  double dVar3;
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
  
  dVar3 = param_1;
  func_0x00010bf5d2e0(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar2);
  _CGRectGetHeight(dVar3,param_2,param_3,param_4);
  uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_b0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_a0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  _CGAffineTransformTranslate(&uStack_80,0,-(dVar3 * param_1),&uStack_b0);
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  func_0x00010c219960(uVar1,param_6,&uStack_b0);
  _objc_release(uVar1);
  return;
}



/* Entry: 106497268; end: 106497323; -[SCContextSpotlightNavigationManager layerViewControllerDidEndScrolling:] */

void FUN_106497268(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf5d2e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c138000(param_1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c07df60();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010bf5d2e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2835a0(0x3ff0000000000000);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106497324; end: 1064973df; -[SCContextSpotlightNavigationManager reset:] */

void FUN_106497324(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar2 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar7 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uVar3 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_50 = uVar2;
  uStack_48 = uVar4;
  uStack_40 = uVar6;
  uStack_38 = uVar7;
  uStack_30 = uVar3;
  uStack_28 = uVar5;
  _objc_retain(param_3);
  func_0x00010c219960(param_3,param_2,&uStack_50);
  uVar1 = param_3;
  func_0x00010bf5d5c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uStack_50 = uVar2;
  uStack_48 = uVar4;
  uStack_40 = uVar6;
  uStack_38 = uVar7;
  uStack_30 = uVar3;
  uStack_28 = uVar5;
  func_0x00010c219960();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf5d5c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1677c0(0x3ff0000000000000,uVar1);
  _objc_release(uVar1);
  return;
}



/* Entry: 1064973e0; end: 1064974ff; -[SCContextSpotlightNavigationManager layerViewControllerWillDismiss:isInteractive:] */

void FUN_1064973e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + 8);
  lVar3 = 0;
  if (uVar2 != 0) {
    func_0x00010c07cd60();
    if ((uVar2 & 1) != 0) goto LAB_1064974e4;
    lVar3 = *(long *)(param_1 + 8);
  }
  func_0x00010c252440();
  if (lVar3 == 1) {
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c075c40();
    if (iVar1 != 0) {
      func_0x00010c2559c0(*(undefined8 *)(param_1 + 8),param_2,1);
    }
  }
  uVar6 = param_3;
  func_0x00010bf5d2e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar5 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
  _objc_alloc();
  func_0x00010c00ea20(0x3fc999999999999a,0x4024000000000000);
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar5;
  _objc_release(uVar6);
  func_0x00010c1d99e0(*(undefined8 *)(param_1 + 8),param_2,1);
  func_0x00010c24dc40(*(undefined8 *)(param_1 + 8));
  _objc_release(uVar4);
LAB_1064974e4:
  _objc_release(param_3);
  return;
}



/* Entry: 106497500; end: 106497563;  */

void FUN_106497500(long param_1,undefined8 param_2)

{
  undefined8 in_d3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x20));
  _CGAffineTransformMakeTranslation(&uStack_50,0,in_d3);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_80);
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106497564; end: 1064975d7; -[SCContextSpotlightNavigationManager layerViewControllerDismissDidEnd:didComplete:] */

void FUN_106497564(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if ((param_4 & 1) == 0) {
    func_0x00010c1ede40(lVar2,param_2,1);
    func_0x00010c1d99e0(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010c24dc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_startAnimation_112671138);
    return;
  }
  func_0x00010c252440();
  if (lVar2 == 1) {
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c075c40();
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c2559d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 8),PTR_s_stopAnimation__112673098,1);
      return;
    }
  }
  return;
}



/* Entry: 1064975d8; end: 1064975db; -[SCContextSpotlightNavigationManager layerViewController:pageZoomScaleDidChange:] */

void FUN_1064975d8(void)

{
  return;
}



/* Entry: 1064975dc; end: 1064975e7; -[SCContextSpotlightNavigationManager .cxx_destruct] */

void FUN_1064975dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064975e8; end: 10649768b; -[SCContextOperaLayerPresenterAISongPill initWithInteropProvider:actionHandler:] */

undefined1 *
FUN_1064975e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f15c8;
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



/* Entry: 10649768c; end: 106497aff; -[SCContextOperaLayerPresenterAISongPill setupWithPresenter:viewController:] */

void FUN_10649768c(long param_1,undefined8 param_2,long param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_storeWeak(param_1 + 0x18,param_4);
  ppuVar1 = param_4;
  func_0x00010c0f0be0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2d20;
  func_0x00010c06be00(PTR_PTR_1126b2d20);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010bf1f3c0();
  _objc_release(ppuVar4);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  if (((ulong)ppuVar5 & 1) == 0) {
    func_0x00010c26ac40(param_1);
  }
  else if (*(long *)(param_1 + 0x20) == 0) {
    puVar3 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
    _objc_alloc_init();
    puVar16 = (undefined8 *)(param_1 + 0x28);
    uVar15 = *puVar16;
    *puVar16 = puVar3;
    _objc_release(uVar15);
    ppuVar1 = param_4;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9680();
    _objc_release(ppuVar1);
    ppuVar1 = param_4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010c149040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar6 = *puVar16;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *puVar16;
    uStack_90 = uVar15;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *puVar16;
    uStack_88 = uVar8;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar2;
    func_0x00010c274200(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *puVar16;
    uStack_80 = uVar10;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar2;
    func_0x00010bf1ff80(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_78 = uVar13;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar14);
    _objc_release(uVar13);
    _objc_release(ppuVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(ppuVar5);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(ppuVar4);
    _objc_release(uVar7);
    _objc_release(uVar15);
    _objc_release(ppuVar1);
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126cae60;
    _objc_alloc();
    func_0x00010c0340c0();
    uVar15 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar3;
    _objc_release(uVar15);
    _objc_initWeak(auStack_98,param_1);
    puVar3 = PTR_PTR_1126cae68;
    _objc_alloc();
    func_0x00010bff9400(0x4050000000000000,0x4028000000000000);
    puVar16 = (undefined8 *)(param_1 + 0x30);
    uVar15 = *puVar16;
    *puVar16 = puVar3;
    _objc_release(uVar15);
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_106497b00;
    puStack_a8 = &UNK_1108434b0;
    ppuVar1 = &puStack_c0;
    _objc_copyWeak(auStack_a0,auStack_98);
    func_0x00010c1d3960(*puVar16);
    func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c235840(*(undefined8 *)(param_1 + 0x20));
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_98);
    _objc_release(ppuVar2);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar1 + 4);
  _objc_destroyWeak(auStack_98);
  __Unwind_Resume(param_3);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010be48900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106497b00; end: 106497b2b;  */

void FUN_106497b00(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be48900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106497b2c; end: 106497c5f; -[SCContextOperaLayerPresenterAISongPill _launchUpsell] */

void FUN_106497b2c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010beeed40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b6038;
      _objc_alloc(PTR_PTR_1126b6038);
      uVar4 = uVar2;
      func_0x00010bf4eae0(uVar2);
      uVar5 = uVar2;
      func_0x00010bf4eb00(uVar2);
      func_0x00010bff0a60(puVar3,param_2,5,5,uVar4,uVar5,8);
      puVar6 = PTR_PTR_1126b5b00;
      func_0x00010beff080(PTR_PTR_1126b5b00);
      _objc_retainAutoreleasedReturnValue();
      param_1 = param_1 + 0x18;
      _objc_loadWeakRetained(param_1);
      func_0x00010bfd0040(lVar1,param_2,puVar6,puVar3,param_1,0,
                          &PTR___NSConcreteGlobalBlock_110924a70);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar6);
      _objc_release(puVar3);
      _objc_release(uVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 106497c60; end: 106497c63;  */

void FUN_106497c60(void)

{
  return;
}



/* Entry: 106497c64; end: 106497c6b; -[SCContextOperaLayerPresenterAISongPill hide] */

void FUN_106497c64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe1570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_hide_1125d5f18);
  return;
}



/* Entry: 106497c6c; end: 106497c73; -[SCContextOperaLayerPresenterAISongPill show:] */

void FUN_106497c6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c235850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_show_11266b038);
  return;
}



/* Entry: 106497c74; end: 106497c7b; -[SCContextOperaLayerPresenterAISongPill prepareToDisappear] */

void FUN_106497c74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a5e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_willDisappear_1126871c8);
  return;
}



/* Entry: 106497c7c; end: 106497c83; -[SCContextOperaLayerPresenterAISongPill didDisappear] */

void FUN_106497c7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf74a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didDisappear_1125bac28);
  return;
}



/* Entry: 106497c84; end: 106497c87; -[SCContextOperaLayerPresenterAISongPill hideUntilDidAppearIfNeccessary] */

void FUN_106497c84(void)

{
  return;
}



/* Entry: 106497c88; end: 106497c8f; -[SCContextOperaLayerPresenterAISongPill prepareToAppear] */

void FUN_106497c88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a5830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_willAppear_112687030)
  ;
  return;
}



/* Entry: 106497c90; end: 106497c97; -[SCContextOperaLayerPresenterAISongPill didAppear] */

void FUN_106497c90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf72470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_didAppear_1125ba2c0);
  return;
}



/* Entry: 106497c98; end: 106497d0f; -[SCContextOperaLayerPresenterAISongPill teardown] */

void FUN_106497c98(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf6f260(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    func_0x00010c0f0780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cdc0();
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106497d10; end: 106497d17; -[SCContextOperaLayerPresenterAISongPill shouldRespondToSubscreenAppearance] */

undefined8 FUN_106497d10(void)

{
  return 0;
}



/* Entry: 106497d18; end: 106497d1b; -[SCContextOperaLayerPresenterAISongPill subscreenWillAppearWithUnhideContainers:] */

void FUN_106497d18(void)

{
  return;
}



/* Entry: 106497d1c; end: 106497d1f; -[SCContextOperaLayerPresenterAISongPill subscreenWillDisappear] */

void FUN_106497d1c(void)

{
  return;
}



/* Entry: 106497d20; end: 106497d27; -[SCContextOperaLayerPresenterAISongPill pageabilityForRelativePosition:navigationStyle:swipeDirection:gestureRecognizer:] */

undefined8 FUN_106497d20(void)

{
  return 0xffffffffffffffff;
}



/* Entry: 106497d28; end: 106497d83; -[SCContextOperaLayerPresenterAISongPill .cxx_destruct] */

void FUN_106497d28(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106497d84; end: 106498023; -[SCContextOperaLayerPresenterChrome initWithV3InteropProvider:actionHandlerDelegate:actionHandler:operaChromeScopeExposer:operaChromeScopeServices:eventAnnouncer:operaPageObservable:viewPropertiesObservable:contextExperimentService:options:operaNavigationStyle:scopeExposurePerformer:appStartExperimentReader:] */

undefined8 *
FUN_106497d84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

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
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126f15d0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_6);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 3,param_4);
    _objc_retain(param_8);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_11;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar1[0x18] = param_12;
    puVar1[0x1c] = param_13;
    _objc_retain(param_14);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_15;
    _objc_release(uVar2);
  }
  _objc_release(param_15);
  _objc_release(param_14);
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



/* Entry: 106498024; end: 10649954b; -[SCContextOperaLayerPresenterChrome setupWithPresenter:viewController:] */

void FUN_106498024(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined *param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
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
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  long lVar25;
  long lVar26;
  uint uVar27;
  ulong uVar28;
  undefined8 uVar29;
  undefined8 *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined8 uVar33;
  undefined *puStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined *puStack_310;
  undefined8 uStack_308;
  code *pcStack_300;
  undefined *puStack_2f8;
  undefined1 auStack_2f0 [8];
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2d0;
  undefined1 auStack_2c8 [8];
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined1 auStack_298 [8];
  undefined *puStack_290;
  undefined8 uStack_288;
  code *pcStack_280;
  undefined *puStack_278;
  undefined1 auStack_270 [8];
  undefined *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined1 auStack_240 [8];
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined1 auStack_218 [8];
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  undefined1 auStack_1f0 [8];
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [8];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_storeWeak(param_2 + 0x88,param_5);
  _objc_storeWeak(param_2 + 0xd8,param_4);
  if (*(long *)(param_2 + 0x28) != 0) goto LAB_106499388;
  uVar3 = *(ulong *)(param_2 + 8);
  func_0x00010beeed40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (uVar4 != 0) {
    uVar3 = uVar4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar31 = PTR_PTR_1126b2390;
    _objc_opt_class(PTR_PTR_1126b2390);
    uVar28 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar31);
    uVar3 = uVar5;
    if ((uVar28 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar5);
    if (uVar3 != 0) {
      _objc_initWeak(auStack_100,param_2);
      uVar28 = *(ulong *)(param_2 + 0xc0);
      uVar27 = (uint)uVar28;
      if ((uVar27 >> 2 & 1) == 0) {
        puStack_348 = (undefined *)0x0;
LAB_106498430:
        uVar27 = (uint)uVar28;
      }
      else {
        if (*(long *)(param_2 + 0xf8) == 0) {
          puVar31 = param_5;
          func_0x00010c29bf00();
          _objc_retainAutoreleasedReturnValue();
          if (puVar31 == (undefined *)0x0) {
            puVar32 = param_5;
            func_0x00010beec600();
            _objc_retainAutoreleasedReturnValue();
            puStack_348 = puVar32;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar33 = 9;
          }
          else {
            puVar6 = param_5;
            func_0x00010beec600();
            _objc_retainAutoreleasedReturnValue();
            puVar32 = puVar6;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar6);
            puStack_348 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
            _objc_alloc_init();
            func_0x00010bef9680(puVar31);
            puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
            puVar7 = puStack_348;
            func_0x00010c2793a0();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar32;
            func_0x00010c2793a0();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar7;
            func_0x00010bf493a0();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puStack_348;
            puStack_a8 = puVar9;
            func_0x00010c274200();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar32;
            func_0x00010c274200(puVar32);
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar10;
            func_0x00010bf49500();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puStack_348;
            puStack_a0 = puVar12;
            func_0x00010bf1ff80();
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar32;
            func_0x00010bf1ff80(puVar32);
            _objc_retainAutoreleasedReturnValue();
            puVar15 = puVar13;
            func_0x00010bf493a0();
            _objc_retainAutoreleasedReturnValue();
            puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_98 = puVar15;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010beef8c0(puVar6);
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
            uVar33 = 1;
          }
          _objc_release(puVar32);
          puVar32 = PTR_PTR_1126ae720;
          puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_150 = 0xc2000000;
          pcStack_148 = FUN_10649954c;
          puStack_140 = &UNK_110924a90;
          _objc_copyWeak(auStack_130,auStack_100);
          _objc_retain(puStack_348);
          uStack_120 = *(undefined8 *)(PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 8);
          param_1 = *(undefined8 *)PTR__NSDirectionalEdgeInsetsZero_1103457d8;
          uStack_110 = *(undefined8 *)(PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 0x18);
          uStack_118 = *(undefined8 *)(PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 0x10);
          puStack_138 = puStack_348;
          uStack_128 = param_1;
          uStack_108 = uVar33;
          func_0x00010bf11fe0();
          _objc_retainAutoreleasedReturnValue();
          uVar33 = *(undefined8 *)(param_2 + 0xf8);
          *(undefined8 *)(param_2 + 0xf8) = puVar32;
          _objc_release(uVar33);
          func_0x00010befa120(*(undefined8 *)(param_2 + 0x30));
          _objc_release(puStack_138);
          _objc_destroyWeak(auStack_130);
          _objc_release(puVar31);
          uVar28 = *(ulong *)(param_2 + 0xc0);
          goto LAB_106498430;
        }
        puStack_348 = (undefined *)0x0;
      }
      if (((uVar27 >> 1 & 1) != 0) && (*(long *)(param_2 + 0xf0) == 0)) {
        uVar28 = uVar4;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar28;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar18 = uVar17;
        func_0x00010bf1f3c0();
        _objc_release(uVar17);
        _objc_release(uVar28);
        puVar31 = param_5;
        func_0x00010c29bf00(param_5);
        _objc_retainAutoreleasedReturnValue();
        FUN_1064995dc(uVar4);
        _objc_release(puVar31);
        uVar33 = 0x404c000000000000;
        if ((int)uVar18 == 0) {
          uVar33 = 0x4010000000000000;
        }
        uVar28 = uVar4;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar28;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar18 = uVar17;
        func_0x00010bf1f3c0();
        _objc_release(uVar17);
        _objc_release(uVar28);
        uVar28 = uVar4;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar28;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar19 = uVar17;
        func_0x00010bf1f3c0();
        if ((uVar19 & 1) == 0) {
          _objc_release(uVar17);
          _objc_release(uVar28);
          uVar29 = 4;
        }
        else {
          uVar19 = uVar4;
          func_0x00010c118b40();
          _objc_retainAutoreleasedReturnValue();
          uVar20 = uVar19;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar21 = uVar20;
          func_0x00010bf1f3c0();
          _objc_release(uVar20);
          _objc_release(uVar19);
          _objc_release(uVar17);
          _objc_release(uVar28);
          uVar29 = 4;
          if ((((uint)uVar21 | (uint)uVar18) & 1) == 0) {
            uVar29 = 0xc;
          }
        }
        puVar32 = PTR_PTR_1126ae720;
        puVar31 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_190 = 0xc2000000;
        pcStack_188 = FUN_106499954;
        puStack_180 = &UNK_110924ac0;
        _objc_copyWeak(auStack_178,auStack_100);
        uStack_170 = param_1;
        uStack_168 = uVar33;
        uStack_160 = uVar29;
        func_0x00010bf11fe0();
        _objc_retainAutoreleasedReturnValue();
        uVar33 = *(undefined8 *)(param_2 + 0xf0);
        *(undefined8 *)(param_2 + 0xf0) = puVar32;
        _objc_release(uVar33);
        func_0x00010befa120(*(undefined8 *)(param_2 + 0x30));
        uVar33 = *(undefined8 *)(param_2 + 0xa8);
        puStack_1c0 = puVar31;
        uStack_1b8 = 0xc2000000;
        pcStack_1b0 = FUN_106499a2c;
        puStack_1a8 = &UNK_11085e918;
        _objc_copyWeak(auStack_1a0,auStack_100);
        func_0x00010c25ff60();
        _objc_retainAutoreleasedReturnValue();
        uVar29 = *(undefined8 *)(param_2 + 0xb8);
        *(undefined8 *)(param_2 + 0xb8) = uVar33;
        _objc_release(uVar29);
        _objc_destroyWeak(auStack_1a0);
        _objc_destroyWeak(auStack_178);
        uVar28 = *(ulong *)(param_2 + 0xc0);
      }
      puVar31 = PTR_PTR_1126ae720;
      uVar27 = (uint)uVar28;
      if (((uVar28 & 1) != 0) && (*(long *)(param_2 + 0x38) == 0)) {
        puStack_1e8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1e0 = 0xc2000000;
        pcStack_1d8 = FUN_106499a80;
        puStack_1d0 = &UNK_110845cb0;
        _objc_copyWeak(auStack_1c8,auStack_100);
        func_0x00010bf11fe0();
        _objc_retainAutoreleasedReturnValue();
        puVar30 = (undefined8 *)(param_2 + 0x38);
        uVar33 = *puVar30;
        *puVar30 = puVar31;
        _objc_release(uVar33);
        uVar33 = *puVar30;
        func_0x00010c269d40(uVar33);
        _objc_retainAutoreleasedReturnValue();
        puVar31 = PTR_PTR_1126cae70;
        _objc_alloc(PTR_PTR_1126cae70);
        func_0x00010c0549e0(0xc03e000000000000,0xc028000000000000,0xc04e000000000000,
                            0xc028000000000000);
        func_0x00010c222380(uVar33);
        _objc_release(puVar31);
        func_0x00010befa120(*(undefined8 *)(param_2 + 0x30));
        _objc_release(uVar33);
        _objc_destroyWeak(auStack_1c8);
        uVar27 = (uint)*(undefined8 *)(param_2 + 0xc0);
      }
      puVar31 = PTR_PTR_1126ae720;
      if ((*(long *)(param_2 + 0x48) == 0) && ((uVar27 >> 5 & 1) == 0)) {
        puStack_210 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_208 = 0xc2000000;
        pcStack_200 = FUN_106499b40;
        puStack_1f8 = &UNK_110845cb0;
        _objc_copyWeak(auStack_1f0,auStack_100);
        func_0x00010bf11fe0();
        _objc_retainAutoreleasedReturnValue();
        uVar33 = *(undefined8 *)(param_2 + 0x48);
        *(undefined8 *)(param_2 + 0x48) = puVar31;
        _objc_release(uVar33);
        func_0x00010befa120(*(undefined8 *)(param_2 + 0x30));
        _objc_destroyWeak(auStack_1f0);
        uVar27 = (uint)*(undefined8 *)(param_2 + 0xc0);
      }
      puVar31 = PTR_PTR_1126ae720;
      if ((*(long *)(param_2 + 0x40) == 0) && ((uVar27 >> 5 & 1) == 0)) {
        puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_230 = 0xc2000000;
        uStack_228 = 0x106499c70;
        puStack_220 = &UNK_110845cb0;
        _objc_copyWeak(auStack_218,auStack_100);
        func_0x00010bf11fe0();
        _objc_retainAutoreleasedReturnValue();
        uVar33 = *(undefined8 *)(param_2 + 0x40);
        *(undefined8 *)(param_2 + 0x40) = puVar31;
        _objc_release(uVar33);
        func_0x00010befa120(*(undefined8 *)(param_2 + 0x30));
        _objc_destroyWeak(auStack_218);
        uVar27 = (uint)*(undefined8 *)(param_2 + 0xc0);
      }
      if ((uVar27 >> 3 & 1) == 0) {
        puStack_340 = (undefined *)0x0;
      }
      else {
        if (*(long *)(param_2 + 0x58) == 0) {
          puVar31 = PTR_PTR_1126cae78;
          _objc_alloc();
          func_0x00010c01ab20();
          uVar33 = *(undefined8 *)(param_2 + 0x58);
          *(undefined **)(param_2 + 0x58) = puVar31;
          _objc_release(uVar33);
        }
        if (*(long *)(param_2 + 0x50) == 0) {
          puVar31 = (undefined *)(param_2 + 0x88);
          _objc_loadWeakRetained();
          puVar32 = puVar31;
          func_0x00010c274640();
          _objc_retainAutoreleasedReturnValue();
          puStack_340 = puVar32;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar32);
          _objc_release(puVar31);
          puVar31 = param_5;
          func_0x00010c29bf00();
          _objc_retainAutoreleasedReturnValue();
          if ((puVar31 != (undefined *)0x0) && (puStack_348 != (undefined *)0x0)) {
            _objc_retain(puStack_340);
            puVar6 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
            _objc_alloc_init();
            _objc_release(puStack_340);
            func_0x00010bef9680(puVar31);
            puVar32 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
            puVar7 = puVar6;
            func_0x00010c08de00();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puStack_340;
            func_0x00010c08de00(puStack_340);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar7;
            func_0x00010bf493a0();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar6;
            puStack_c8 = puVar9;
            func_0x00010c274200();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puStack_340;
            func_0x00010c274200();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar10;
            func_0x00010bf49460();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar6;
            puStack_c0 = puVar12;
            func_0x00010bf1ff80();
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puStack_340;
            func_0x00010bf1ff80(puStack_340);
            _objc_retainAutoreleasedReturnValue();
            puVar15 = puVar13;
            func_0x00010bf493a0();
            _objc_retainAutoreleasedReturnValue();
            puVar16 = puVar6;
            puStack_b8 = puVar15;
            func_0x00010c2793a0();
            _objc_retainAutoreleasedReturnValue();
            puVar22 = puStack_348;
            func_0x00010c08de00(puStack_348);
            _objc_retainAutoreleasedReturnValue();
            puVar23 = puVar16;
            func_0x00010bf493a0();
            _objc_retainAutoreleasedReturnValue();
            puVar24 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_b0 = puVar23;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010beef8c0(puVar32);
            _objc_release(puVar24);
            _objc_release(puVar23);
            _objc_release(puVar22);
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
            _objc_release(puStack_340);
            puStack_340 = puVar6;
          }
          puVar32 = PTR_PTR_1126ae720;
          puStack_268 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_260 = 0xc2000000;
          pcStack_258 = FUN_106499d94;
          puStack_250 = &UNK_110924af0;
          _objc_copyWeak(auStack_240,auStack_100);
          _objc_retain(puStack_340);
          puStack_248 = puStack_340;
          func_0x00010bf11fe0();
          _objc_retainAutoreleasedReturnValue();
          uVar33 = *(undefined8 *)(param_2 + 0x50);
          *(undefined8 *)(param_2 + 0x50) = puVar32;
          _objc_release(uVar33);
          _objc_release(puStack_248);
          _objc_destroyWeak(auStack_240);
          _objc_release(puVar31);
        }
        else {
          puStack_340 = (undefined *)0x0;
        }
        func_0x00010befa120(*(undefined8 *)(param_2 + 0x30));
      }
      uVar28 = uVar5;
      func_0x000108437d74();
      puVar31 = PTR_PTR_1126ae720;
      if (((int)uVar28 != 0) && (*(long *)(param_2 + 0x68) == 0)) {
        puStack_290 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_288 = 0xc2000000;
        pcStack_280 = FUN_106499e18;
        puStack_278 = &UNK_110845cb0;
        _objc_copyWeak(auStack_270,auStack_100);
        func_0x00010bf11fe0();
        _objc_retainAutoreleasedReturnValue();
        uVar33 = *(undefined8 *)(param_2 + 0x68);
        *(undefined8 *)(param_2 + 0x68) = puVar31;
        _objc_release(uVar33);
        func_0x00010befa120(*(undefined8 *)(param_2 + 0x30));
        _objc_destroyWeak(auStack_270);
      }
      if (((*(byte *)(param_2 + 0xc0) >> 4 & 1) != 0) && (*(long *)(param_2 + 0x60) == 0)) {
        if (puStack_340 == (undefined *)0x0) {
          puVar31 = param_5;
          func_0x00010bf5d2e0();
          _objc_retainAutoreleasedReturnValue();
          puVar32 = puVar31;
          func_0x00010bfe6360();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar32;
          func_0x00010c262ca0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar32);
          _objc_release(puVar31);
          if (puVar6 != (undefined *)0x0) {
            puVar32 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
            _objc_alloc_init();
            puVar31 = param_5;
            func_0x00010c29bf00(param_5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bef9680();
            _objc_release(puVar31);
            puVar31 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
            puVar6 = puVar32;
            func_0x00010c08de00();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = param_5;
            func_0x00010c29bf00();
            _objc_retainAutoreleasedReturnValue();
            puStack_350 = puVar7;
            func_0x00010c08de00();
            _objc_retainAutoreleasedReturnValue();
            puStack_358 = puVar6;
            func_0x00010bf493a0();
            _objc_retainAutoreleasedReturnValue();
            puStack_360 = puVar32;
            puStack_f8 = puStack_358;
            func_0x00010bf1ff80();
            _objc_retainAutoreleasedReturnValue();
            puStack_368 = param_5;
            func_0x00010bf5d2e0();
            _objc_retainAutoreleasedReturnValue();
            puStack_370 = puStack_368;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            puStack_378 = puStack_370;
            func_0x00010c274200();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puStack_360;
            func_0x00010bf493c0(0xc031547ae147ae14);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar32;
            puStack_f0 = puVar8;
            func_0x00010c2793a0();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = param_5;
            func_0x00010c29bf00(param_5);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar10;
            func_0x00010c2793a0();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar9;
            func_0x00010bf493a0();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_e8 = puVar12;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010beef8c0(puVar31);
            _objc_release(puVar13);
            _objc_release(puVar12);
            _objc_release(puVar11);
            _objc_release(puVar10);
            goto LAB_106498fe8;
          }
          puVar32 = (undefined *)0x0;
        }
        else {
          puVar32 = PTR__OBJC_CLASS___UILayoutGuide_1126af090;
          _objc_alloc_init();
          puVar31 = param_5;
          func_0x00010c29bf00(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef9680();
          _objc_release(puVar31);
          puVar31 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          puVar6 = puVar32;
          func_0x00010c08de00();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puStack_340;
          func_0x00010c08de00(puStack_340);
          _objc_retainAutoreleasedReturnValue();
          puStack_350 = puVar6;
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          puStack_358 = puVar32;
          puStack_e0 = puStack_350;
          func_0x00010bf1ff80();
          _objc_retainAutoreleasedReturnValue();
          puStack_360 = puStack_340;
          func_0x00010c274200();
          _objc_retainAutoreleasedReturnValue();
          puStack_368 = puStack_358;
          func_0x00010bf493c0(0xc024000000000000);
          _objc_retainAutoreleasedReturnValue();
          puStack_370 = puVar32;
          puStack_d8 = puStack_368;
          func_0x00010c2793a0();
          _objc_retainAutoreleasedReturnValue();
          puStack_378 = puStack_340;
          func_0x00010c2793a0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puStack_370;
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_d0 = puVar8;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beef8c0(puVar31);
LAB_106498fe8:
          _objc_release(puVar9);
          _objc_release(puVar8);
          _objc_release(puStack_378);
          _objc_release(puStack_370);
          _objc_release(puStack_368);
          _objc_release(puStack_360);
          _objc_release(puStack_358);
          _objc_release(puStack_350);
          _objc_release(puVar7);
          _objc_release(puVar6);
        }
        puVar31 = PTR_PTR_1126ae720;
        puStack_2c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_2b8 = 0xc2000000;
        uStack_2b0 = 0x106499edc;
        puStack_2a8 = &UNK_110924af0;
        _objc_copyWeak(auStack_298,auStack_100);
        _objc_retain(puVar32);
        puStack_2a0 = puVar32;
        func_0x00010bf11fe0();
        _objc_retainAutoreleasedReturnValue();
        uVar33 = *(undefined8 *)(param_2 + 0x60);
        *(undefined8 *)(param_2 + 0x60) = puVar31;
        _objc_release(uVar33);
        func_0x00010befa120(*(undefined8 *)(param_2 + 0x30));
        _objc_release(puStack_2a0);
        _objc_destroyWeak(auStack_298);
        _objc_release(puVar32);
      }
      uVar28 = uVar5;
      func_0x00010c29d360();
      uVar17 = uVar5;
      func_0x00010c29d360();
      func_0x00010723c744();
      if (((int)uVar5 != 0) && (*(long *)(param_2 + 0x70) == 0)) {
        uVar29 = *(undefined8 *)(param_2 + 0x98);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar33 = uVar29;
        func_0x00010c22c000();
        iVar2 = 0;
        if (uVar28 != 0x1e) {
          iVar2 = (int)uVar33;
        }
        iVar1 = 0;
        if (uVar17 != 0x1d) {
          iVar1 = iVar2;
        }
        _objc_release(uVar29);
        if (iVar1 != 0) {
          uVar33 = *(undefined8 *)(param_2 + 0x98);
          func_0x00010c269d40(uVar33);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2a27c0();
          _objc_release(uVar33);
          puVar31 = PTR_PTR_1126ae720;
          puStack_2e8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_2e0 = 0xc2000000;
          uStack_2d8 = 0x106499fe8;
          puStack_2d0 = &UNK_110924b20;
          _objc_copyWeak(auStack_2c8,auStack_100);
          func_0x00010bf11fe0();
          _objc_retainAutoreleasedReturnValue();
          uVar33 = *(undefined8 *)(param_2 + 0x70);
          *(undefined8 *)(param_2 + 0x70) = puVar31;
          _objc_release(uVar33);
          func_0x00010befa120(*(undefined8 *)(param_2 + 0x30));
          _objc_destroyWeak(auStack_2c8);
        }
      }
      if (*(long *)(param_2 + 0xe0) == 1) {
        func_0x00010c08bda0();
      }
      if ((*(byte *)(param_2 + 0xc0) >> 6 & 1) == 0) {
        uVar33 = *(undefined8 *)(param_2 + 0x80);
        lVar25 = param_2 + 0x88;
        _objc_loadWeakRetained();
        uVar5 = uVar4;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        puVar31 = PTR_PTR_1126b2d20;
        func_0x00010c27fe40(PTR_PTR_1126b2d20);
        _objc_retainAutoreleasedReturnValue();
        uVar28 = uVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        func_0x00010bf22fe0();
        _objc_retainAutoreleasedReturnValue();
        uVar29 = *(undefined8 *)(param_2 + 0x28);
        *(undefined8 *)(param_2 + 0x28) = uVar33;
        _objc_release(uVar29);
        _objc_release(uVar28);
        _objc_release(puVar31);
        _objc_release(uVar5);
        _objc_release(lVar25);
        puStack_310 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_308 = 0xc2000000;
        pcStack_300 = FUN_10649a0c0;
        puStack_2f8 = &UNK_1108434b0;
        _objc_copyWeak(auStack_2f0,auStack_100);
        func_0x000100162d98("APPSTORE",&puStack_310);
        _objc_destroyWeak(auStack_2f0);
      }
      _objc_destroyWeak(auStack_100);
      _objc_release(puStack_340);
      _objc_release(puStack_348);
    }
    _objc_release(uVar3);
  }
  _objc_release(uVar4);
LAB_106499388:
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(param_5 + 0x20);
  _objc_destroyWeak(auStack_100);
  __Unwind_Resume();
  lVar25 = param_4 + 0x28;
  _objc_loadWeakRetained();
  if (lVar25 == 0) {
    puVar31 = (undefined *)0x0;
  }
  else {
    lVar26 = lVar25 + 0x88;
    _objc_loadWeakRetained();
    if (lVar26 == 0) {
      puVar31 = (undefined *)0x0;
    }
    else {
      puVar31 = PTR_PTR_1126cae60;
      _objc_alloc(PTR_PTR_1126cae60);
      func_0x00010c0340e0(*(undefined8 *)(param_4 + 0x30),*(undefined8 *)(param_4 + 0x38),
                          *(undefined8 *)(param_4 + 0x40),*(undefined8 *)(param_4 + 0x48));
    }
    _objc_release(lVar26);
  }
  _objc_release(lVar25);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar31);
  return;
}



/* Entry: 10649954c; end: 1064995db;  */

void FUN_10649954c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar1 + 0x88;
    _objc_loadWeakRetained();
    if (lVar2 == 0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR_PTR_1126cae60;
      _objc_alloc(PTR_PTR_1126cae60);
      func_0x00010c0340e0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                          *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1064995dc; end: 106499953;  */

double FUN_1064995dc(float param_1,undefined8 param_2,undefined8 param_3,double param_4,
                    ulong param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  _objc_retain();
  uVar5 = param_5;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf1f3c0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar5 = param_5;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bf1f3c0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_retain(param_5);
  uVar5 = param_5;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  dVar15 = 0.0;
  if (uVar6 != 0) {
    uVar9 = uVar5;
    func_0x00010c0e00e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    dVar15 = (double)param_1;
    _objc_release(uVar9);
  }
  _objc_release(uVar6);
  uVar9 = uVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar11 = uVar9;
  _objc_opt_isKindOfClass(uVar9,puVar10);
  uVar6 = uVar9;
  if ((uVar11 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar9);
  uVar9 = uVar6;
  func_0x00010bf1f3c0();
  _objc_release(uVar6);
  uVar11 = uVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar12 = uVar11;
  _objc_opt_isKindOfClass(uVar11,puVar10);
  uVar6 = uVar11;
  if ((uVar12 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar11);
  func_0x00010bfb2c80(uVar6);
  _objc_release(uVar6);
  uVar11 = uVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar12 = uVar11;
  _objc_opt_isKindOfClass(uVar11,puVar10);
  uVar6 = uVar11;
  if ((uVar12 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar11);
  uVar11 = uVar6;
  func_0x00010bf1f3c0();
  _objc_release(uVar6);
  func_0x0001008522a8();
  uVar12 = param_5;
  func_0x000107d36174(param_5,uVar6);
  uVar6 = param_5;
  _objc_release();
  uVar4 = (uint)uVar6;
  dVar13 = (double)param_1;
  if (param_1 <= 0.0 && (uVar11 & 1) == 0) {
    dVar13 = 0.0;
  }
  if ((uVar9 & 1) == 0) {
    dVar14 = (double)param_1 + 0.0;
    if ((uVar11 & 1) == 0) {
      dVar14 = 0.0;
    }
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (0.0 <= dVar14) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(param_1)) {
        bVar1 = param_1 < 0.0;
        bVar2 = param_1 == 0.0;
        bVar3 = false;
      }
    }
    if (((bVar2 || bVar1 != bVar3) || dVar13 <= dVar14) &&
       (((uint)uVar11 & (uint)(dVar14 == 0.0)) == 0)) goto LAB_1064998ac;
  }
  dVar14 = dVar13;
LAB_1064998ac:
  func_0x0001008522a8();
  dVar13 = 0.0;
  if (((uVar4 | (uint)uVar12) & 1) == 0) {
    puVar10 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c252d80();
    _objc_release(puVar10);
    dVar13 = param_4;
  }
  dVar13 = dVar15 + dVar14 + dVar13;
  _objc_release(uVar5);
  dVar15 = dVar13 + 10.0;
  if (NAN(dVar13)) {
    dVar15 = 10.0;
  }
  dVar13 = dVar15 + 4.0;
  if ((int)uVar7 == 0) {
    dVar13 = dVar15;
  }
  dVar15 = dVar13 + 60.0;
  if ((int)uVar8 == 0) {
    dVar15 = dVar13;
  }
  _objc_release(param_5);
  return dVar15;
}



/* Entry: 106499954; end: 106499a2b;  */

void FUN_106499954(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar1 + 0x88;
    _objc_loadWeakRetained();
    if (lVar2 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = PTR_PTR_1126cae60;
      _objc_alloc(PTR_PTR_1126cae60);
      lVar3 = lVar2;
      func_0x00010c149080(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0340e0(*(undefined8 *)(param_1 + 0x28),0x4024000000000000,0,
                          *(undefined8 *)(param_1 + 0x30),puVar5,param_2,lVar2,lVar4,
                          *(undefined8 *)(param_1 + 0x38));
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106499a2c; end: 106499a7f;  */

void FUN_106499a2c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bed9260(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106499a80; end: 106499b3f;  */

void FUN_106499a80(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1 + 0x88;
    _objc_loadWeakRetained();
    if (lVar1 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR_PTR_1126cae60;
      _objc_alloc(PTR_PTR_1126cae60);
      lVar2 = lVar1;
      func_0x00010bf5d2e0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0615a0(puVar4,param_2,lVar3);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106499b40; end: 106499d93;  */

void FUN_106499b40(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1 + 0x88;
    _objc_loadWeakRetained();
    if (lVar1 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = PTR_PTR_1126cae60;
      _objc_alloc(PTR_PTR_1126cae60);
      lVar2 = lVar1;
      func_0x00010beec620(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010bf5d2e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bfe6360();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c0cfd40();
      uVar8 = 0xc03a000000000000;
      if (lVar6 != 3) {
        uVar8 = 0xc034000000000000;
      }
      func_0x00010c0340e0(0,0,uVar8,0,puVar7,param_2,lVar1,lVar3,0);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      func_0x00010c1ad840(puVar7,param_2,1);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106499d94; end: 106499e17;  */

void FUN_106499d94(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1 + 0x88;
    _objc_loadWeakRetained();
    if (lVar1 == 0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR_PTR_1126cae60;
      _objc_alloc(PTR_PTR_1126cae60);
      func_0x00010c0340c0();
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106499e18; end: 10649a0bf;  */

void FUN_106499e18(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1 + 0x88;
    _objc_loadWeakRetained();
    if (lVar1 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR_PTR_1126cae60;
      _objc_alloc(PTR_PTR_1126cae60);
      lVar2 = lVar1;
      func_0x00010c134540(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0340c0(puVar4,param_2,lVar1,lVar3);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10649a0c0; end: 10649a0eb;  */

void FUN_10649a0c0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c09b180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10649a0ec; end: 10649a20f; -[SCContextOperaLayerPresenterChrome loadContent] */

void FUN_10649a0ec(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if ((*(long *)(param_1 + 0x78) != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    lVar3 = param_1 + 0x88;
    _objc_loadWeakRetained(lVar3);
    lVar1 = lVar3;
    func_0x00010bf5d2e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar3);
    _objc_initWeak(auStack_38,param_1);
    lVar3 = *(long *)(param_1 + 200);
    if (lVar3 == 0) {
      func_0x00010bec1780(param_1);
    }
    else {
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x00010c0f7fc0(lVar3);
      _objc_destroyWeak(auStack_40);
    }
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 10649a210; end: 10649a23b;  */

void FUN_10649a210(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec1780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10649a23c; end: 10649a28b; -[SCContextOperaLayerPresenterChrome _startScope] */

void FUN_10649a23c(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x78);
  _objc_opt_respondsToSelector(uVar2,PTR_s_isEnabled_1125fa010);
  if ((uVar2 & 1) != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x78);
    func_0x00010c071800();
    if (iVar1 == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf9d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x78),PTR_s_exposeScope__1125c4f30,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10649a28c; end: 10649a3cf; -[SCContextOperaLayerPresenterChrome hide] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x00010649a2f0 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_10649a28c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar8);
  lVar3 = lVar8;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar8);
      }
      uVar4 = *(ulong *)(lVar9 * 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126cae60;
      _objc_opt_class(PTR_PTR_1126cae60);
      uVar6 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar5);
      uVar1 = uVar4;
      if ((uVar6 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar4);
      func_0x00010bfe1560(uVar1);
      _objc_release(uVar1);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(lVar8 + 0x30);
  _objc_retain(lVar8);
  lVar3 = lVar8;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar8);
      }
      uVar4 = *(ulong *)(lVar9 * 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126cae60;
      _objc_opt_class(PTR_PTR_1126cae60);
      uVar6 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar5);
      uVar1 = uVar4;
      if ((uVar6 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar4);
      func_0x00010c235840(uVar1);
      _objc_release(uVar1);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(lVar8 + 0x30);
  _objc_retain(lVar8);
  lVar3 = lVar8;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar8);
      }
      uVar4 = *(ulong *)(lVar9 * 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126cae60;
      _objc_opt_class(PTR_PTR_1126cae60);
      uVar6 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar5);
      uVar1 = uVar4;
      if ((uVar6 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar4);
      func_0x00010c2a5e80(uVar1);
      _objc_release(uVar1);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(lVar8 + 0x30);
  _objc_retain(lVar8);
  lVar3 = lVar8;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar8);
      }
      uVar4 = *(ulong *)(lVar9 * 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126cae60;
      _objc_opt_class(PTR_PTR_1126cae60);
      uVar6 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar5);
      uVar1 = uVar4;
      if ((uVar6 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar4);
      func_0x00010bf74a00(uVar1);
      _objc_release(uVar1);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release(lVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 10649a3d0; end: 10649a513; -[SCContextOperaLayerPresenterChrome show:] */

void FUN_10649a3d0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar8);
  lVar3 = lVar8;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar8);
      }
      uVar4 = *(ulong *)(lVar9 * 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126cae60;
      _objc_opt_class(PTR_PTR_1126cae60);
      uVar6 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar5);
      uVar1 = uVar4;
      if ((uVar6 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar4);
      func_0x00010c235840(uVar1);
      _objc_release(uVar1);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(lVar8 + 0x30);
  _objc_retain(lVar8);
  lVar3 = lVar8;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar8);
      }
      uVar4 = *(ulong *)(lVar9 * 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126cae60;
      _objc_opt_class(PTR_PTR_1126cae60);
      uVar6 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar5);
      uVar1 = uVar4;
      if ((uVar6 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar4);
      func_0x00010c2a5e80(uVar1);
      _objc_release(uVar1);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(lVar8 + 0x30);
  _objc_retain(lVar8);
  lVar3 = lVar8;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar8);
      }
      uVar4 = *(ulong *)(lVar9 * 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126cae60;
      _objc_opt_class(PTR_PTR_1126cae60);
      uVar6 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar5);
      uVar1 = uVar4;
      if ((uVar6 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar4);
      func_0x00010bf74a00(uVar1);
      _objc_release(uVar1);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release(lVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 10649a514; end: 10649a657; -[SCContextOperaLayerPresenterChrome prepareToDisappear] */

void FUN_10649a514(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar8);
  lVar3 = lVar8;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar8);
      }
      uVar4 = *(ulong *)(lVar9 * 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126cae60;
      _objc_opt_class(PTR_PTR_1126cae60);
      uVar6 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar5);
      uVar1 = uVar4;
      if ((uVar6 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar4);
      func_0x00010c2a5e80(uVar1);
      _objc_release(uVar1);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(lVar8 + 0x30);
  _objc_retain(lVar8);
  lVar3 = lVar8;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar8);
      }
      uVar4 = *(ulong *)(lVar9 * 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126cae60;
      _objc_opt_class(PTR_PTR_1126cae60);
      uVar6 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar5);
      uVar1 = uVar4;
      if ((uVar6 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar4);
      func_0x00010bf74a00(uVar1);
      _objc_release(uVar1);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release(lVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 10649a658; end: 10649a79b; -[SCContextOperaLayerPresenterChrome didDisappear] */

void FUN_10649a658(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar8);
  lVar3 = lVar8;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar8);
      }
      uVar4 = *(ulong *)(lVar9 * 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126cae60;
      _objc_opt_class(PTR_PTR_1126cae60);
      uVar6 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar5);
      uVar1 = uVar4;
      if ((uVar6 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar4);
      func_0x00010bf74a00(uVar1);
      _objc_release(uVar1);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release(lVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 10649a79c; end: 10649a79f; -[SCContextOperaLayerPresenterChrome hideUntilDidAppearIfNeccessary] */

void FUN_10649a79c(void)

{
  return;
}



/* Entry: 10649a7a0; end: 10649a8e3; -[SCContextOperaLayerPresenterChrome prepareToAppear] */

void FUN_10649a7a0(long param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar10);
  lVar4 = lVar10;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar10);
      }
      uVar5 = *(ulong *)(lVar11 * 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126cae60;
      _objc_opt_class(PTR_PTR_1126cae60);
      uVar7 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar6);
      uVar1 = uVar5;
      if ((uVar7 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar5);
      func_0x00010c2a5820(uVar1);
      _objc_release(uVar1);
      lVar11 = lVar11 + 1;
    } while (lVar4 != lVar11);
    lVar4 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *(long *)(lVar10 + 0x30);
  _objc_retain(lVar10);
  lVar4 = lVar10;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar10);
      }
      uVar5 = *(ulong *)(lVar11 * 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126cae60;
      _objc_opt_class(PTR_PTR_1126cae60);
      uVar7 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar6);
      uVar1 = uVar5;
      if ((uVar7 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar5);
      func_0x00010bf72460(uVar1);
      _objc_release(uVar1);
      lVar11 = lVar11 + 1;
    } while (lVar4 != lVar11);
    lVar4 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf86d40(*(undefined8 *)(lVar10 + 0xb8));
  uVar8 = *(undefined8 *)(lVar10 + 0xb8);
  *(undefined8 *)(lVar10 + 0xb8) = 0;
  _objc_release(uVar8);
  if (*(long *)(lVar10 + 0x28) != 0) {
    iVar3 = (int)*(undefined8 *)(lVar10 + 0x78);
    func_0x00010c072560();
    if (iVar3 != 0) {
      func_0x00010c12e1e0(*(undefined8 *)(lVar10 + 0x78));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  uVar8 = *(undefined8 *)(lVar10 + 0x78);
  *(undefined8 *)(lVar10 + 0x78) = 0;
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(lVar10 + 0x28);
  *(undefined8 *)(lVar10 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 10649a8e4; end: 10649aa27; -[SCContextOperaLayerPresenterChrome didAppear] */

void FUN_10649a8e4(long param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar10);
  lVar4 = lVar10;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar10);
      }
      uVar5 = *(ulong *)(lVar11 * 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126cae60;
      _objc_opt_class(PTR_PTR_1126cae60);
      uVar7 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar6);
      uVar1 = uVar5;
      if ((uVar7 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar5);
      func_0x00010bf72460(uVar1);
      _objc_release(uVar1);
      lVar11 = lVar11 + 1;
    } while (lVar4 != lVar11);
    lVar4 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf86d40(*(undefined8 *)(lVar10 + 0xb8));
  uVar8 = *(undefined8 *)(lVar10 + 0xb8);
  *(undefined8 *)(lVar10 + 0xb8) = 0;
  _objc_release(uVar8);
  if (*(long *)(lVar10 + 0x28) != 0) {
    iVar3 = (int)*(undefined8 *)(lVar10 + 0x78);
    func_0x00010c072560();
    if (iVar3 != 0) {
      func_0x00010c12e1e0(*(undefined8 *)(lVar10 + 0x78));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  uVar8 = *(undefined8 *)(lVar10 + 0x78);
  *(undefined8 *)(lVar10 + 0x78) = 0;
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(lVar10 + 0x28);
  *(undefined8 *)(lVar10 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 10649aa28; end: 10649aa93; -[SCContextOperaLayerPresenterChrome teardown] */

void FUN_10649aa28(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0xb8));
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  _objc_release(uVar2);
  if (*(long *)(param_1 + 0x28) != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x78);
    func_0x00010c072560();
    if (iVar1 != 0) {
      func_0x00010c12e1e0(*(undefined8 *)(param_1 + 0x78),param_2,*(undefined8 *)(param_1 + 0x28));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10649aa94; end: 10649ab67; -[SCContextOperaLayerPresenterChrome _updateHeaderTopMarginForPage:animated:] */

void FUN_10649aa94(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + 0xf0);
  if (uVar2 != 0) {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cae60;
    _objc_opt_class(PTR_PTR_1126cae60);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    if (uVar1 != 0) {
      param_1 = param_1 + 0x88;
      _objc_loadWeakRetained(param_1);
      lVar5 = param_1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      FUN_1064995dc(param_3);
      func_0x00010c28b340(uVar2);
      _objc_release(lVar5);
    }
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10649ab68; end: 10649ab6f; -[SCContextOperaLayerPresenterChrome shouldRespondToSubscreenAppearance] */

undefined8 FUN_10649ab68(void)

{
  return 1;
}


