/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105d250f4; end: 105d2520b; -[SCPreviewFeatureAudioEffectsServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d250f4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c41c8;
  _objc_alloc(PTR_PTR_1126c41c8);
  func_0x00010bff52e0();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112734c00);
  }
  _objc_retain(uVar3);
  func_0x00010bf9d660(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105d2520c; end: 105d2525b;  */

void FUN_105d2520c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c110d40(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105d2525c; end: 105d2556f; -[SCPreviewFeatureAudioEffectsServicesEntryPoint previewFeatureAudioEffects] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d2525c(long param_1,undefined8 param_2)

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
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  
  puVar1 = PTR_PTR_1126c41d0;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112734bc8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112734bcc;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf207a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112734bd0;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c0d2940();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112734bd4;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bf9c660();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112734bd8;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c2a0940();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112734bdc;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c29a960();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_112734be4;
  uVar27 = *(undefined8 *)(param_1 + _DAT_112734be0);
  lVar15 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_112734be8;
  _objc_loadWeakRetained();
  lVar18 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010c08f640();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_112734bec;
  _objc_loadWeakRetained();
  lVar21 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010c240640();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_112734bf0;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010bf0f020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112734bf4;
  _objc_loadWeakRetained();
  lVar25 = param_1;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar25;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0397a0(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar11,lVar14,uVar27,lVar16,lVar17,
                      lVar19,lVar20,lVar22,lVar24,lVar26);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(param_1);
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



/* Entry: 105d25570; end: 105d2564b; -[SCPreviewFeatureAudioEffectsServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d25570(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112734c00,0);
  _objc_storeStrong(param_1 + _DAT_112734be0,0);
  _objc_destroyWeak(param_1 + _DAT_112734bfc);
  _objc_destroyWeak(param_1 + _DAT_112734bf8);
  _objc_destroyWeak(param_1 + _DAT_112734bf4);
  _objc_destroyWeak(param_1 + _DAT_112734bf0);
  _objc_destroyWeak(param_1 + _DAT_112734bcc);
  _objc_destroyWeak(param_1 + _DAT_112734bec);
  _objc_destroyWeak(param_1 + _DAT_112734bd8);
  _objc_destroyWeak(param_1 + _DAT_112734bdc);
  _objc_destroyWeak(param_1 + _DAT_112734bd0);
  _objc_destroyWeak(param_1 + _DAT_112734bd4);
  _objc_destroyWeak(param_1 + _DAT_112734be8);
  _objc_destroyWeak(param_1 + _DAT_112734be4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112734bc8);
  return;
}



/* Entry: 105d2564c; end: 105d256f7; -[SCPreviewFeatureAudioEffectsServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d2564c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112734c04;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112734c0c;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bf0f000(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105d256f8; end: 105d2573b; -[SCPreviewFeatureAudioEffectsServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d256f8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112734c0c);
  _objc_destroyWeak(param_1 + _DAT_112734c08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112734c04);
  return;
}



/* Entry: 105d2573c; end: 105d25843; -[SCPreviewFeatureAudioEffectsToolbarItemProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d2573c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112734c18;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar4;
  func_0x00010bf0f000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105d25844;
  puStack_40 = &UNK_1108e62b8;
  puVar2 = PTR_PTR_1126ae720;
  lStack_38 = lVar1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = 0;
  if (param_1 != 0) {
    lVar4 = param_1 + _DAT_112734c10;
    _objc_loadWeakRetained(lVar4);
  }
  lVar3 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 105d25844; end: 105d2588b;  */

void FUN_105d25844(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c273a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105d2588c; end: 105d258cf; -[SCPreviewFeatureAudioEffectsToolbarItemProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d2588c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112734c18);
  _objc_destroyWeak(param_1 + _DAT_112734c14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112734c10);
  return;
}



/* Entry: 105d258d0; end: 105d25a23; -[SCAudioEffectsScope initWithUiContainer:snapVolume:musicTrackId:musicVolume:musicTrackInfo:shouldShowVoiceover:delegate:] */

undefined1 *
FUN_105d258d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126ecf40;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_9);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_8;
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d25a24; end: 105d25a2b; -[SCAudioEffectsScope uiContainer] */

undefined8 FUN_105d25a24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105d25a2c; end: 105d25a5b; -[SCAudioEffectsScope setUiContainer:] */

void FUN_105d25a2c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105d25a5c; end: 105d25a73; -[SCAudioEffectsScope delegate] */

void FUN_105d25a5c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d25a74; end: 105d25a7f; -[SCAudioEffectsScope setDelegate:] */

void FUN_105d25a74(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 105d25a80; end: 105d25a87; -[SCAudioEffectsScope snapVolume] */

undefined8 FUN_105d25a80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105d25a88; end: 105d25a8f; -[SCAudioEffectsScope musicTrackId] */

undefined8 FUN_105d25a88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105d25a90; end: 105d25a97; -[SCAudioEffectsScope musicVolume] */

undefined8 FUN_105d25a90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105d25a98; end: 105d25a9f; -[SCAudioEffectsScope musicTrackInfo] */

undefined8 FUN_105d25a98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105d25aa0; end: 105d25aa7; -[SCAudioEffectsScope shouldShowVoiceover] */

undefined1 FUN_105d25aa0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105d25aa8; end: 105d25b03; -[SCAudioEffectsScope .cxx_destruct] */

void FUN_105d25aa8(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105d25b04; end: 105d25bb7; -[SCPreviewFeatureAudioPlaybackImpl initWithAudioSessionServices:] */

undefined1 * FUN_105d25b04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ecf48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c15fac0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d25bb8; end: 105d25bbf; -[SCPreviewFeatureAudioPlaybackImpl responderChainPriority] */

undefined8 FUN_105d25bb8(void)

{
  return 0x7fffffff;
}



/* Entry: 105d25bc0; end: 105d25d6f; -[SCPreviewFeatureAudioPlaybackImpl beginAudioSessionWithCompletion:] */

void FUN_105d25bc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf46680(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf55480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0d3da0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105d25d70;
  puStack_70 = &UNK_110859a38;
  uStack_68 = param_3;
  _objc_retain(param_3);
  uVar6 = uVar3;
  func_0x00010bf47660(uVar3,param_2,uVar4,uVar2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar5);
  puVar7 = PTR_PTR_1126afd78;
  _objc_alloc(PTR_PTR_1126afd78);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105d25db4;
  puStack_a0 = &UNK_110841f80;
  lStack_98 = param_1;
  uStack_90 = uVar6;
  _objc_retain(uVar6);
  func_0x00010bffae00(puVar7,param_2,&puStack_b8);
  _objc_release(uStack_90);
  _objc_release(uVar6);
  _objc_release(uStack_68);
  _objc_release(param_3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105d25d70; end: 105d25db3;  */

void FUN_105d25d70(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2 == 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d25db4; end: 105d25e1b;  */

void FUN_105d25db4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c0d3da0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1288c0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d25e1c; end: 105d25e23; -[SCPreviewFeatureAudioPlaybackImpl audioSession] */

undefined8 FUN_105d25e1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105d25e24; end: 105d25e53; -[SCPreviewFeatureAudioPlaybackImpl .cxx_destruct] */

void FUN_105d25e24(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d25e54; end: 105d25f6b; -[SCPreviewFeatureAudioPlaybackServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d25e54(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c41e0;
  _objc_alloc(PTR_PTR_1126c41e0);
  func_0x00010bff53c0();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112734c48);
  }
  _objc_retain(uVar3);
  func_0x00010bf9d660(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105d25f6c; end: 105d25fef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d25f6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c41d8;
  _objc_alloc(PTR_PTR_1126c41d8);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1 + _DAT_112734c44;
    _objc_loadWeakRetained(lVar2);
  }
  func_0x00010bff5600(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d25ff0; end: 105d26037; -[SCPreviewFeatureAudioPlaybackServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d25ff0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112734c48,0);
  _objc_destroyWeak(param_1 + _DAT_112734c44);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112734c40);
  return;
}



/* Entry: 105d26038; end: 105d260e3; -[SCPreviewFeatureAudioPlaybackServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d26038(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112734c4c;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112734c54;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010bf0f6a0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105d260e4; end: 105d26127; -[SCPreviewFeatureAudioPlaybackServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d260e4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112734c54);
  _objc_destroyWeak(param_1 + _DAT_112734c50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112734c4c);
  return;
}



/* Entry: 105d26128; end: 105d2612f; -[SCPreviewAutoCaptionsContainerView isAutoCaptions] */

undefined8 FUN_105d26128(void)

{
  return 1;
}



/* Entry: 105d26130; end: 105d26193; -[SCPreviewAutoCaptionsContainerView setScale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d26130(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ecf50;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setScale__11265b220);
  param_1 = param_1 + _DAT_112734c58;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7e8e0();
  _objc_release(param_1);
  return;
}



/* Entry: 105d26194; end: 105d261f7; -[SCPreviewAutoCaptionsContainerView setTranslation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d26194(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ecf50;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setTranslation__112664108);
  param_1 = param_1 + _DAT_112734c58;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7e8e0();
  _objc_release(param_1);
  return;
}



/* Entry: 105d261f8; end: 105d2625b; -[SCPreviewAutoCaptionsContainerView setCenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d261f8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ecf50;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setCenter__11263c3c8);
  param_1 = param_1 + _DAT_112734c58;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7e8e0();
  _objc_release(param_1);
  return;
}



/* Entry: 105d2625c; end: 105d262bf; -[SCPreviewAutoCaptionsContainerView setRotation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d2625c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ecf50;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setRotation__112659410);
  param_1 = param_1 + _DAT_112734c58;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7e8e0();
  _objc_release(param_1);
  return;
}



/* Entry: 105d262c0; end: 105d262c3; -[SCPreviewAutoCaptionsContainerView alignableTouchControlView] */

void FUN_105d262c0(void)

{
  return;
}



/* Entry: 105d262c4; end: 105d262c7; -[SCPreviewAutoCaptionsContainerView alignableContentRect] */

void FUN_105d262c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf20c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_bounds_1125a5ca8);
  return;
}



/* Entry: 105d262c8; end: 105d262cf; -[SCPreviewAutoCaptionsContainerView shouldProcessGesture:] */

undefined8 FUN_105d262c8(void)

{
  return 1;
}



/* Entry: 105d262d0; end: 105d262d3; -[SCPreviewAutoCaptionsContainerView updateAnchorState:withGestureRecognizer:] */

void FUN_105d262d0(void)

{
  return;
}



/* Entry: 105d262d4; end: 105d262d7; -[SCPreviewAutoCaptionsContainerView deletableView] */

void FUN_105d262d4(void)

{
  return;
}



/* Entry: 105d262d8; end: 105d262f7; -[SCPreviewAutoCaptionsContainerView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d262d8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112734c58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d262f8; end: 105d2630b; -[SCPreviewAutoCaptionsContainerView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d262f8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112734c58,param_3);
  return;
}



/* Entry: 105d2630c; end: 105d2631b; -[SCPreviewAutoCaptionsContainerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d2630c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112734c58);
  return;
}



/* Entry: 105d2631c; end: 105d26637; -[SCPreviewFeatureAutoCaptionsImpl initWithAutoCaptionsScopeExposer:previewConfiguration:videoPlayback:videoObjectTracker:videoTrackingServices:notificationPool:previewABServices:previewScopeServices:voiceoverFeature:videoTracking:] */

undefined8 *
FUN_105d2631c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
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
  puStack_68 = PTR_PTR_1126ecf58;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_storeWeak(puVar1 + 2,param_4);
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
    uVar2 = param_9;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c112020();
    puVar1[0x17] = uVar3;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_9;
    _objc_release(uVar2);
    puVar1[0xd] = 0;
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0x14];
    puVar1[0x14] = puVar4;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010befa300(param_4);
    puVar4 = PTR_PTR_1126ae790;
    func_0x00010bfcd0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x18];
    puVar1[0x18] = puVar4;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
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



/* Entry: 105d26638; end: 105d26663;  */

void FUN_105d26638(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c129080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d26664; end: 105d2679f; -[SCPreviewFeatureAutoCaptionsImpl activate] */

void FUN_105d26664(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c083340();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 200);
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c09af00();
    _objc_release(uVar3);
    if ((int)uVar4 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x98);
      lVar1 = param_1;
      func_0x00010bee89e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar4);
      _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be0cb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__exposeAutoCaptionsScope_112560c70);
      return;
    }
    _objc_initWeak(auStack_38,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0xc0);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(uVar4);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 105d267a0; end: 105d26897;  */

void FUN_105d267a0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bee89e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_48,param_1 + 0x20);
    _objc_retain(lVar2);
    func_0x00010c0f7fc0(lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_48);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 105d26898; end: 105d268db;  */

void FUN_105d26898(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x98),param_2,*(undefined8 *)(param_1 + 0x20));
    func_0x00010be0cb40(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105d268dc; end: 105d2690b; -[SCPreviewFeatureAutoCaptionsImpl configureWithView:] */

void FUN_105d268dc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105d2690c; end: 105d2696b; -[SCPreviewFeatureAutoCaptionsImpl didUpdateTransformForAutoCaptionsContainerView:] */

void FUN_105d2690c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010bee0980();
  func_0x00010be8c420(param_1);
  lVar1 = param_1 + 0xd8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c252440(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73060(lVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105d2696c; end: 105d2699b; -[SCPreviewFeatureAutoCaptionsImpl state] */

void FUN_105d2696c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x60);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x58);
  }
  _objc_retain(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105d2699c; end: 105d26a1f; -[SCPreviewFeatureAutoCaptionsImpl updateState:] */

void FUN_105d2699c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = param_3;
    _objc_release(uVar3);
  }
  else {
    func_0x00010be4e800(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d26a20; end: 105d26b73; -[SCPreviewFeatureAutoCaptionsImpl toolbarItemConfiguration] */

void FUN_105d26a20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar5 = PTR_PTR_1126b0c40;
  lVar4 = *(long *)(param_1 + 0xb8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (lVar4 == 2) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0x226;
  }
  else {
    if (lVar4 != 1) {
      if (lVar4 == 0) {
        puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                            &PTR____CFConstantStringClassReference_110e28d18);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar5 = (undefined *)0x0;
      }
      goto LAB_105d26afc;
    }
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0x225;
  }
  func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar5,param_2,uVar3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
LAB_105d26afc:
  puVar1 = PTR_PTR_1126c4010;
  _objc_alloc(PTR_PTR_1126c4010);
  puVar2 = puVar1;
  func_0x000108edf1b8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020380(puVar1,param_2,0xb,puVar5,puVar5,
                      &PTR____CFConstantStringClassReference_110e28d38,
                      &PTR____CFConstantStringClassReference_110e28dd8,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d26b74; end: 105d26c2b; -[SCPreviewFeatureAutoCaptionsImpl handleAutoCaptionsButtonTap] */

void FUN_105d26b74(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf08020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  lVar1 = param_1;
  if (lVar2 == 0) {
    func_0x00010bee89e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bdcfb60();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(uVar4,param_2,lVar1);
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  puVar3 = PTR__OBJC_CLASS___NSObject_1126b1300;
  _objc_alloc_init(PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x00010c0d9840(uVar4,param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105d26c2c; end: 105d26c97; -[SCPreviewFeatureAutoCaptionsImpl autoCaptionsWithGesture:] */

void FUN_105d26c2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  func_0x00010c09ef00(param_3,param_2,*(undefined8 *)(param_1 + 0x70));
  iVar1 = (int)*(undefined8 *)(param_1 + 0x70);
  func_0x00010bf20c00();
  _CGRectContainsPoint();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x70);
  }
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105d26c98; end: 105d26cdb; -[SCPreviewFeatureAutoCaptionsImpl deleteAutoCaptions] */

void FUN_105d26c98(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c41e8;
  func_0x00010bf6b820(PTR_PTR_1126c41e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x88),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d26cdc; end: 105d270b7; -[SCPreviewFeatureAutoCaptionsImpl videoTrackedImagesWithCroppingAspectRatio:] */

void FUN_105d26cdc(double param_1,double param_2,double param_3,double param_4,undefined *param_5,
                  long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *unaff_x19;
  long lVar9;
  long lVar10;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double unaff_d8;
  double unaff_d9;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  double dStack_1f0;
  double dStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  double dStack_170;
  double dStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (*(long *)(param_5 + 0x78) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    unaff_x21 = *(undefined **)(param_5 + 0x20);
    puStack_1a0 = puVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = unaff_x21;
    func_0x00010c278f80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    dVar13 = param_3;
    dVar14 = param_4;
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    dVar12 = INFINITY;
    unaff_d8 = param_3;
    unaff_d9 = param_4;
    if (param_1 != INFINITY) {
      dVar12 = param_3;
      param_2 = param_4;
      func_0x00010b690934(param_3,param_4,param_1);
      dVar13 = param_1;
      unaff_d8 = dVar12;
      unaff_d9 = param_2;
    }
    func_0x00010bf345e0(*(undefined8 *)(param_5 + 0x70));
    func_0x00010bf345e0(*(undefined8 *)(param_5 + 0x70));
    param_1 = 0.0;
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    lVar9 = *(long *)(param_5 + 0x78);
    _objc_retain(lVar9);
    lStack_1b0 = lVar9;
    func_0x00010bf52a60();
    if (lVar9 != 0) {
      lStack_1a8 = *plStack_150;
      do {
        lVar10 = 0;
        do {
          if (*plStack_150 != lStack_1a8) {
            _objc_enumerationMutation(lStack_1b0);
          }
          puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
          uVar11 = *(undefined8 *)(lStack_158 + lVar10 * 8);
          puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
          func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14e120();
          func_0x00010bfe7c80(puVar1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          uVar3 = uVar11;
          func_0x00010c26a1a0(uVar11);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c2723c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar3);
          puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_190 = 0xc2000000;
          pcStack_188 = FUN_105d270b8;
          puStack_180 = &UNK_1108e6318;
          uVar3 = uVar4;
          puStack_178 = param_5;
          dStack_170 = dVar12 / param_3;
          dStack_168 = param_2 / param_4;
          func_0x00010c0b8600(uVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR_PTR_1126c41f0;
          _objc_alloc(PTR_PTR_1126c41f0);
          uVar5 = uVar11;
          func_0x00010c26a1a0(uVar11);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bf45e20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0553e0(puVar2);
          _objc_release(uVar6);
          _objc_release(uVar5);
          unaff_x21 = PTR_PTR_1126c41f8;
          func_0x00010c279740();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR_PTR_1126c4200;
          _objc_alloc(PTR_PTR_1126c4200);
          func_0x00010bf20c00(uVar11);
          param_1 = dVar13 / unaff_d8;
          func_0x00010bf20c00(uVar11);
          func_0x00010c02fc00(param_1,dVar14 / unaff_d9,puVar7);
          puVar8 = PTR_PTR_1126ae558;
          func_0x00010bfe9ca0(PTR_PTR_1126ae558);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puStack_1a0);
          _objc_release(puVar8);
          _objc_release(puVar7);
          _objc_release(unaff_x21);
          _objc_release(puVar2);
          _objc_release(uVar3);
          _objc_release(uVar4);
          _objc_release(puVar1);
          lVar10 = lVar10 + 1;
        } while (lVar9 != lVar10);
        lVar9 = lStack_1b0;
        func_0x00010bf52a60();
        unaff_x22 = (undefined *)0x0;
      } while (lVar9 != 0);
    }
    _objc_release(lStack_1b0);
    unaff_x19 = puStack_1a0;
    puVar1 = puStack_1a0;
    func_0x00010bf51e00();
    param_5 = unaff_x19;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a0) {
    ___stack_chk_fail();
    pcStack_1b8 = FUN_105d270b8;
    dStack_1f0 = unaff_d9;
    dStack_1e8 = unaff_d8;
    puStack_1e0 = unaff_x22;
    puStack_1d8 = unaff_x21;
    puStack_1d0 = puVar1;
    puStack_1c8 = unaff_x19;
    puStack_1c0 = &stack0xfffffffffffffff0;
    _objc_retain(param_6);
    puVar2 = PTR_PTR_1126b2700;
    _objc_alloc(PTR_PTR_1126b2700);
    lVar9 = param_6;
    func_0x00010c27a460(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    dVar12 = param_1;
    func_0x00010c14e120(*(undefined8 *)(*(long *)(param_5 + 0x20) + 0x70));
    param_1 = param_1 * dVar12;
    func_0x00010c141a80(*(undefined8 *)(*(long *)(param_5 + 0x20) + 0x70));
    func_0x00010c055500(*(undefined8 *)(param_5 + 0x28),*(undefined8 *)(param_5 + 0x30),param_1,
                        dVar12,puVar2);
    _objc_release(lVar9);
    puVar1 = PTR_PTR_1126bb2a8;
    _objc_alloc(PTR_PTR_1126bb2a8);
    if (param_6 == 0) {
      uStack_208 = 0;
      uStack_200 = 0;
      uStack_1f8 = 0;
    }
    else {
      func_0x00010c26f000(&uStack_208,param_6);
    }
    func_0x00010c052280(puVar1);
    _objc_release(puVar2);
    _objc_release(param_6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d270b8; end: 105d271b3;  */

void FUN_105d270b8(double param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  double dVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2700;
  _objc_alloc(PTR_PTR_1126b2700);
  lVar2 = param_3;
  func_0x00010c27a460(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  dVar4 = param_1;
  func_0x00010c14e120(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x70));
  param_1 = param_1 * dVar4;
  func_0x00010c141a80(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x70));
  func_0x00010c055500(*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30),param_1,dVar4,
                      puVar1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126bb2a8;
  _objc_alloc(PTR_PTR_1126bb2a8);
  if (param_3 == 0) {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
  }
  else {
    func_0x00010c26f000(&uStack_58,param_3);
  }
  func_0x00010c052280(puVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105d271b4; end: 105d271bb; -[SCPreviewFeatureAutoCaptionsImpl setButtonState:] */

void FUN_105d271b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c129090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_reloadToolbarItemViewModel_112627e40);
  return;
}



/* Entry: 105d271bc; end: 105d271e3; -[SCPreviewFeatureAutoCaptionsImpl tapObservable] */

void FUN_105d271bc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d271e4; end: 105d27507; -[SCPreviewFeatureAutoCaptionsImpl renderAutoCaptionsDataModel:] */

void FUN_105d271e4(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puVar9 = param_3;
  func_0x00010c234b40();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db2d98;
  if ((int)puVar9 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  _objc_retain(ppuVar1);
  puVar9 = param_3;
  func_0x00010c272fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar9;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c272ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar9);
  puVar9 = param_3;
  func_0x00010c272fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar9;
  func_0x00010bf529e0();
  _objc_release(puVar9);
  uVar10 = 0;
  if ((undefined *)0x1 < puVar3) {
    puVar9 = (undefined *)0x1;
    puVar3 = puVar4;
    do {
      puVar4 = param_3;
      func_0x00010c272fc0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c14da60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_retain(puVar3);
      puVar6 = puVar5;
      func_0x00010c272ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110dc5ed8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126bb258;
      func_0x00010bf2c6e0(PTR_PTR_1126bb258,param_2,puVar7);
      if ((int)puVar4 == 0) {
        puVar8 = PTR_PTR_1126b3700;
        _objc_alloc(PTR_PTR_1126b3700);
        func_0x00010c035e60(uVar10);
        func_0x00010befa120(puVar2,param_2,puVar8);
        func_0x00010c2510e0(puVar5);
        puVar4 = puVar5;
        func_0x00010c272ec0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
      }
      else {
        _objc_retain(puVar7);
        puVar4 = puVar7;
        puVar8 = puVar3;
      }
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar3);
      _objc_release(puVar5);
      puVar9 = puVar9 + 1;
      puVar3 = param_3;
      func_0x00010c272fc0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010bf529e0();
      _objc_release(puVar3);
      puVar3 = puVar4;
    } while (puVar9 < puVar5);
  }
  puVar9 = puVar4;
  func_0x00010c08fa60();
  if (puVar9 != (undefined *)0x0) {
    puVar9 = PTR_PTR_1126b3700;
    _objc_alloc(PTR_PTR_1126b3700);
    func_0x00010c035e60(uVar10);
    func_0x00010befa120(puVar2,param_2,puVar9);
    _objc_release(puVar9);
  }
  puVar9 = PTR_PTR_1126b3708;
  _objc_alloc(PTR_PTR_1126b3708);
  puVar3 = param_3;
  func_0x00010c27a460(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c035ea0(puVar9,param_2,puVar2,puVar3);
  _objc_release(puVar3);
  func_0x00010be06500(param_1,param_2,puVar9);
  func_0x00010bee0980(param_1);
  func_0x00010be04680(param_1,param_2,*(undefined8 *)(param_1 + 0x70));
  _objc_release(puVar4);
  _objc_release(ppuVar1);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 105d27508; end: 105d2757b; -[SCPreviewFeatureAutoCaptionsImpl didLoadAutoCaptionsViewModel:] */

void FUN_105d27508(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar1);
  func_0x00010be06500(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010be04690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__displayHintOnView__11255eb40,*(undefined8 *)(param_1 + 0x70));
  return;
}



/* Entry: 105d2757c; end: 105d2759f; -[SCPreviewFeatureAutoCaptionsImpl didUpdateAutoCaptionsViewModel:] */

void FUN_105d2757c(undefined8 param_1)

{
  func_0x00010be06500();
                    /* WARNING: Could not recover jumptable at 0x00010bee0990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateState_112595c08);
  return;
}



/* Entry: 105d275a0; end: 105d275cf; -[SCPreviewFeatureAutoCaptionsImpl didDeleteAutoCaptions] */

void FUN_105d275a0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010be06500(param_1,param_2,0);
  func_0x00010bee0980(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be8c430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeHint_112580aa8);
  return;
}



/* Entry: 105d275d0; end: 105d2769f; -[SCPreviewFeatureAutoCaptionsImpl didReceiveAutoCaptionsError] */

void FUN_105d275d0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126afde0;
  lVar1 = param_1;
  FUN_105d299e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf57f80(puVar2,param_2,lVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6c);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf4b2a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105d276a0; end: 105d27723; -[SCPreviewFeatureAutoCaptionsImpl didTapPreviewContainerView:] */

bool FUN_105d276a0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1;
  func_0x00010bf11500();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010be8c420(param_1);
    puVar2 = PTR_PTR_1126c41e8;
    func_0x00010bf8c1e0(PTR_PTR_1126c41e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x88),param_2,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  return lVar1 == 0;
}



/* Entry: 105d27724; end: 105d27847; -[SCPreviewFeatureAutoCaptionsImpl _displayHintOnView:] */

void FUN_105d27724(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_60;
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0xa8) == 0) {
    func_0x00010bdee7e0(param_1);
  }
  func_0x00010be76360(param_1);
  func_0x00010bdcada0(param_1);
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105d27848;
  puStack_48 = &UNK_1108b0900;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retainBlock(&puStack_60);
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0xb0));
  puVar2 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010c150360(0x4008000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined **)(param_1 + 0xb0) = puVar2;
  _objc_release(uVar3);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105d27848; end: 105d27873;  */

void FUN_105d27848(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8c420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d27874; end: 105d27957; -[SCPreviewFeatureAutoCaptionsImpl _removeHint] */

void FUN_105d27874(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  ppuVar3 = &puStack_90;
  lVar1 = *(long *)(param_1 + 0xa8);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar1 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105d27958;
    puStack_50 = &UNK_110842e18;
    ppuVar2 = &puStack_68;
    lStack_48 = param_1;
    _objc_retainBlock(ppuVar2);
    uStack_88 = 0xc2000000;
    uStack_80 = 0x105d27968;
    puStack_78 = &UNK_110841f20;
    lStack_70 = param_1;
    _objc_retainBlock(&puStack_90);
    func_0x00010bf03420(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,ppuVar2,
                        ppuVar3);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
  }
  return;
}



/* Entry: 105d27958; end: 105d27973;  */

void FUN_105d27958(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105d27974; end: 105d27aa3; -[SCPreviewFeatureAutoCaptionsImpl _positionHintOnView:] */

void FUN_105d27974(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if (*(long *)(param_5 + 0xa8) != 0) {
    _objc_retain(param_7);
    func_0x00010bf20c00(param_7);
    func_0x00010bf51460(param_7);
    _objc_release(param_7);
    lVar1 = *(long *)(param_5 + 0xa8);
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befbb60(*(undefined8 *)(param_5 + 0x50));
    }
    dVar2 = param_1;
    _CGRectGetMidX(param_1,param_2,param_3,param_4);
    dVar3 = dVar2;
    func_0x00010bf20c00(*(undefined8 *)(param_5 + 0xa8));
    _CGRectGetWidth();
    _CGRectGetMinY(param_1,param_2,param_3,param_4);
    dVar4 = param_1;
    func_0x00010bf20c00(*(undefined8 *)(param_5 + 0xa8));
    _CGRectGetHeight();
    param_1 = param_1 - dVar4;
    dVar5 = param_1 + -8.0;
    func_0x00010bf20c00(*(undefined8 *)(param_5 + 0xa8));
    _CGRectGetWidth();
    dVar4 = param_1;
    func_0x00010bf20c00(*(undefined8 *)(param_5 + 0xa8));
    _CGRectGetHeight();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (dVar2 + dVar3 * -0.5,dVar5,param_1,dVar4,*(undefined8 *)(param_5 + 0xa8),
               PTR_s_setFrame__112645658);
    return;
  }
  return;
}



/* Entry: 105d27aa4; end: 105d27b3f; -[SCPreviewFeatureAutoCaptionsImpl _animateInHint] */

void FUN_105d27aa4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0xa8);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_105d27b40;
    puStack_30 = &UNK_110842e18;
    ppuVar2 = &puStack_48;
    lStack_28 = param_1;
    _objc_retainBlock(ppuVar2);
    func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,ppuVar2);
    _objc_release(ppuVar2);
  }
  return;
}



/* Entry: 105d27b40; end: 105d27b53;  */

void FUN_105d27b40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fe3333333333333,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 105d27b54; end: 105d27c37; -[SCPreviewFeatureAutoCaptionsImpl _createHintLabel] */

void FUN_105d27b54(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc_init();
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined **)(param_1 + 0xa8) = puVar1;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c21ad00(uVar3);
  func_0x000105d299f8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + 0xa8));
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fe3333333333333);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + 0xa8));
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c21e900(*(undefined8 *)(param_1 + 0xa8));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010c23d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xa8),PTR_s_sizeToFit_11266cfb0);
  return;
}



/* Entry: 105d27c38; end: 105d2800b; -[SCPreviewFeatureAutoCaptionsImpl _drawCaptionsViewModel:] */

void FUN_105d27c38(double param_1,double param_2,long param_3,undefined8 param_4,ulong param_5)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  double dVar12;
  double dVar13;
  
  _objc_retain(param_5);
  func_0x00010c12c960(*(undefined8 *)(param_3 + 0x70));
  uVar2 = *(undefined8 *)(param_3 + 0x70);
  *(undefined8 *)(param_3 + 0x70) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_3 + 0x78);
  *(undefined8 *)(param_3 + 0x78) = 0;
  _objc_release(uVar2);
  if (param_5 == 0) {
    lVar10 = param_3 + 0xd8;
    _objc_loadWeakRetained(lVar10);
    func_0x00010bf73060();
  }
  else {
    lVar3 = *(long *)(param_3 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar3;
    func_0x00010c278f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puVar4 = PTR_PTR_1126c4208;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_3 + 0x70);
    *(undefined **)(param_3 + 0x70) = puVar4;
    _objc_release(uVar2);
    func_0x00010befbb60(lVar10,param_4,*(undefined8 *)(param_3 + 0x70));
    uVar2 = *(undefined8 *)(param_3 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c276200();
    dVar13 = param_1;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar11 = param_5;
    func_0x00010c0fb840();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar11;
    func_0x00010bf529e0();
    _objc_release(uVar11);
    if (uVar5 != 0) {
      uVar11 = 1;
      do {
        uVar5 = param_5;
        func_0x00010c0fb840(param_5);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        puVar7 = PTR_PTR_1126bb258;
        _objc_alloc(PTR_PTR_1126bb258);
        uVar5 = uVar6;
        func_0x00010c0fb800(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0511e0(puVar7,param_4,uVar5);
        _objc_release(uVar5);
        func_0x00010befbb60(*(undefined8 *)(param_3 + 0x70),param_4,puVar7);
        uVar5 = param_5;
        func_0x00010c0fb840();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar5;
        func_0x00010bf529e0();
        dVar12 = dVar13;
        param_2 = param_1;
        if (uVar11 < uVar8) {
          uVar8 = param_5;
          func_0x00010c0fb840(param_5);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2510e0();
          dVar12 = dVar13;
          _objc_release(uVar9);
          _objc_release(uVar8);
          param_2 = dVar13;
        }
        dVar13 = dVar12;
        _objc_release(uVar5);
        func_0x00010c2510e0(uVar6);
        func_0x00010bdce060(param_3,param_4,puVar7);
        func_0x00010befa120(puVar4,param_4,puVar7);
        _objc_release(puVar7);
        _objc_release(uVar6);
        uVar5 = param_5;
        func_0x00010c0fb840();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bf529e0();
        _objc_release(uVar5);
        bVar1 = uVar11 < uVar6;
        uVar11 = uVar11 + 1;
      } while (bVar1);
    }
    puVar7 = puVar4;
    func_0x00010bfb1920(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c19f0e0(*(undefined8 *)(param_3 + 0x70));
    _objc_release(puVar7);
    uVar2 = *(undefined8 *)(param_3 + 0x78);
    *(undefined **)(param_3 + 0x78) = puVar4;
    _objc_retain(puVar4);
    _objc_release(uVar2);
    uVar11 = param_5;
    func_0x00010c27a460(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27ada0();
    dVar12 = dVar13;
    func_0x00010bf20c00(lVar10);
    _CGRectGetWidth();
    dVar13 = dVar13 * dVar12;
    uVar5 = param_5;
    func_0x00010c27a460(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27ada0();
    func_0x00010bf20c00(lVar10);
    _CGRectGetHeight();
    func_0x00010c219b80(dVar13,param_2 * dVar12,*(undefined8 *)(param_3 + 0x70));
    _objc_release(uVar5);
    _objc_release(uVar11);
    uVar11 = param_5;
    func_0x00010c27a460(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c141a80();
    func_0x00010c1ee7a0(*(undefined8 *)(param_3 + 0x70));
    _objc_release(uVar11);
    uVar11 = param_5;
    func_0x00010c27a460(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    func_0x00010c1f5fe0(*(undefined8 *)(param_3 + 0x70));
    _objc_release(uVar11);
    func_0x00010c18b5e0(*(undefined8 *)(param_3 + 0x70),param_4,param_3);
    func_0x00010c160fc0(*(undefined8 *)(param_3 + 0x70),param_4,
                        &PTR____CFConstantStringClassReference_110e28d58);
    _objc_release(puVar4);
  }
  _objc_release(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105d2800c; end: 105d280db; -[SCPreviewFeatureAutoCaptionsImpl _applyDurationWithStartSeconds:endSeconds:view:] */

void FUN_105d2800c(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
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
  
  _objc_retain(param_5);
  _CMTimeMakeWithSeconds(&uStack_48,param_1,0x78);
  _CMTimeMakeWithSeconds(&uStack_60,param_2 - param_1,0x78);
  uStack_d8 = uStack_40;
  uStack_e0 = uStack_48;
  uStack_d0 = uStack_38;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_a0 = uStack_50;
  _CMTimeRangeMake(&uStack_90,&uStack_e0,&uStack_b0);
  uVar1 = *(undefined8 *)(param_3 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  func_0x00010bf08380();
  _objc_release(param_5);
  _objc_release(uVar1);
  return;
}



/* Entry: 105d280dc; end: 105d2827f; -[SCPreviewFeatureAutoCaptionsImpl _assetsForBatchCapture] */

void FUN_105d280dc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar3 = param_1;
  func_0x00010bf167e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(param_1);
  lVar3 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      lVar8 = *(long *)(lVar9 * 8);
      lVar5 = lVar8;
      func_0x00010bf0b7e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar5 != 0) {
        func_0x00010bf0b7e0(lVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(lVar8);
      }
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  puVar6 = puVar2;
  func_0x00010c0b8600(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf0b9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___AVAsset_1126aff38,PTR_s_assetWithURL__1125a0820,param_2);
  return;
}



/* Entry: 105d28280; end: 105d2828f;  */

void FUN_105d28280(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0b9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___AVAsset_1126aff38,PTR_s_assetWithURL__1125a0820,param_2);
  return;
}



/* Entry: 105d28290; end: 105d28433; -[SCPreviewFeatureAutoCaptionsImpl _assetsForTimelineMode] */

void FUN_105d28290(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar3 = param_1;
  func_0x00010c26fea0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(param_1);
  lVar3 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      lVar8 = *(long *)(lVar9 * 8);
      lVar5 = lVar8;
      func_0x00010bf0b7e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar5 != 0) {
        func_0x00010bf0b7e0(lVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(lVar8);
      }
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  puVar6 = puVar2;
  func_0x00010c0b8600(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf0b9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___AVAsset_1126aff38,PTR_s_assetWithURL__1125a0820,param_2);
  return;
}



/* Entry: 105d28434; end: 105d28443;  */

void FUN_105d28434(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0b9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___AVAsset_1126aff38,PTR_s_assetWithURL__1125a0820,param_2);
  return;
}



/* Entry: 105d28444; end: 105d28447; -[SCPreviewFeatureAutoCaptionsImpl _assetsForDirectorMode] */

void FUN_105d28444(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcfb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__assetsForTimelineMode_112551868);
  return;
}



/* Entry: 105d28448; end: 105d2850f; -[SCPreviewFeatureAutoCaptionsImpl _assetsForVideo] */

void FUN_105d28448(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c29ae80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d9500();
  _objc_release(lVar1);
  _objc_release(param_1);
  puVar6 = PTR____NSArray0__struct_11034ab48;
  if (lVar2 != 0) {
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_40 = lVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_40,1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar6 = *(undefined **)(lVar2 + 0x90);
    if (puVar6 == (undefined *)0x0) {
      lVar1 = lVar2 + 0x10;
      _objc_loadWeakRetained();
      lVar3 = lVar1;
      func_0x00010c0811c0();
      _objc_release(lVar1);
      lVar1 = lVar2;
      if ((int)lVar3 == 0) {
        lVar3 = lVar2 + 0x10;
        _objc_loadWeakRetained();
        lVar4 = lVar3;
        func_0x00010c06d080();
        _objc_release(lVar3);
        if ((int)lVar4 == 0) {
          lVar3 = lVar2 + 0x10;
          _objc_loadWeakRetained();
          lVar4 = lVar3;
          func_0x00010c070a20();
          _objc_release(lVar3);
          if ((int)lVar4 == 0) {
            func_0x00010bdcfb40();
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            func_0x00010bdcfae0();
            _objc_retainAutoreleasedReturnValue();
          }
        }
        else {
          func_0x00010bdcfac0();
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        func_0x00010bdcfb20();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar5 = *(undefined8 *)(lVar2 + 0x90);
      *(long *)(lVar2 + 0x90) = lVar1;
      _objc_release(uVar5);
      puVar6 = *(undefined **)(lVar2 + 0x90);
    }
    _objc_retain(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105d28510; end: 105d28603; -[SCPreviewFeatureAutoCaptionsImpl _videoAssetsWithCache] */

void FUN_105d28510(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x90);
  if (lVar4 == 0) {
    lVar4 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar1 = lVar4;
    func_0x00010c0811c0();
    _objc_release(lVar4);
    lVar4 = param_1;
    if ((int)lVar1 == 0) {
      lVar1 = param_1 + 0x10;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010c06d080();
      _objc_release(lVar1);
      if ((int)lVar2 == 0) {
        lVar1 = param_1 + 0x10;
        _objc_loadWeakRetained();
        lVar2 = lVar1;
        func_0x00010c070a20();
        _objc_release(lVar1);
        if ((int)lVar2 == 0) {
          func_0x00010bdcfb40();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010bdcfae0();
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        func_0x00010bdcfac0();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x00010bdcfb20();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar3 = *(undefined8 *)(param_1 + 0x90);
    *(long *)(param_1 + 0x90) = lVar4;
    _objc_release(uVar3);
    lVar4 = *(long *)(param_1 + 0x90);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105d28604; end: 105d286db; -[SCPreviewFeatureAutoCaptionsImpl _assetsForVoiceover] */

void FUN_105d28604(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf08020();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf0ed20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (lVar3 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    puVar4 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar7 = *(undefined8 *)(lVar3 + 0x80);
    *(undefined **)(lVar3 + 0x80) = puVar4;
    _objc_release(uVar7);
    puVar4 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar7 = *(undefined8 *)(lVar3 + 0x88);
    *(undefined **)(lVar3 + 0x88) = puVar4;
    _objc_release(uVar7);
    puVar4 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar7 = *(undefined8 *)(lVar3 + 0x98);
    *(undefined **)(lVar3 + 0x98) = puVar4;
    _objc_release(uVar7);
    _objc_initWeak(auStack_98,lVar3);
    puVar4 = PTR_PTR_1126aeaf8;
    _objc_alloc(PTR_PTR_1126aeaf8);
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_105d288ac;
    puStack_a8 = &UNK_110849680;
    _objc_copyWeak(auStack_a0,auStack_98);
    _objc_copyWeak(auStack_c8,auStack_98);
    func_0x00010c0311a0(puVar4);
    puVar5 = PTR_PTR_1126c4210;
    _objc_alloc(PTR_PTR_1126c4210);
    func_0x00010bff5c00();
    lVar2 = lVar3 + 8;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf9d620();
    _objc_release(lVar2);
    if (*(long *)(lVar3 + 0x60) != 0) {
      func_0x00010be4e800(lVar3);
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_c8);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_98);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105d286dc; end: 105d288ab; -[SCPreviewFeatureAutoCaptionsImpl _exposeAutoCaptionsScope] */

void FUN_105d286dc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = PTR_PTR_1126ae568;
  _objc_alloc_init();
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  *(undefined **)(param_1 + 0x80) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR_PTR_1126ae568;
  _objc_alloc_init();
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  *(undefined **)(param_1 + 0x88) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  *(undefined **)(param_1 + 0x98) = puVar1;
  _objc_release(uVar4);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105d288ac;
  puStack_68 = &UNK_110849680;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010c0311a0(puVar1);
  puVar2 = PTR_PTR_1126c4210;
  _objc_alloc(PTR_PTR_1126c4210);
  func_0x00010bff5c00();
  lVar3 = param_1 + 8;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bf9d620();
  _objc_release(lVar3);
  if (*(long *)(param_1 + 0x60) != 0) {
    func_0x00010be4e800(param_1);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105d288ac; end: 105d28947;  */

void FUN_105d288ac(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7a340();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d28948; end: 105d28dab; -[SCPreviewFeatureAutoCaptionsImpl _updateState] */

void FUN_105d28948(double param_1,double param_2,double param_3,double param_4,undefined *param_5,
                  long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *unaff_x22;
  undefined8 uVar7;
  long lVar8;
  double dVar9;
  double unaff_d8;
  double unaff_d9;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  double dStack_1d0;
  double dStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  long lStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  double dStack_160;
  double dStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_5 + 0x78) == 0) {
    puVar2 = *(undefined **)(param_5 + 0x58);
    *(undefined8 *)(param_5 + 0x58) = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar1 = *(undefined **)(param_5 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = puVar1;
    func_0x00010c278f80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(unaff_x22);
    _objc_release(puVar1);
    func_0x00010bf345e0(*(undefined8 *)(param_5 + 0x70));
    func_0x00010bf345e0(*(undefined8 *)(param_5 + 0x70));
    dVar9 = 0.0;
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    lVar5 = *(long *)(param_5 + 0x78);
    _objc_retain(lVar5);
    lStack_190 = lVar5;
    func_0x00010bf52a60();
    if (lVar5 != 0) {
      param_3 = param_1 / param_3;
      lVar8 = *plStack_140;
      param_4 = param_2 / param_4;
      do {
        lVar6 = 0;
        do {
          if (*plStack_140 != lVar8) {
            _objc_enumerationMutation(lStack_190);
          }
          uVar7 = *(undefined8 *)(lStack_148 + lVar6 * 8);
          uVar4 = uVar7;
          func_0x00010c26a1a0(uVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar4;
          func_0x00010c2723c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_180 = 0xc2000000;
          pcStack_178 = FUN_105d28dac;
          puStack_170 = &UNK_1108e6318;
          uVar4 = uVar3;
          puStack_168 = param_5;
          dStack_160 = param_3;
          dStack_158 = param_4;
          func_0x00010c0b8600(uVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR_PTR_1126bcec8;
          _objc_alloc(PTR_PTR_1126bcec8);
          func_0x00010c26b700(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c051760(puVar1);
          _objc_release(uVar7);
          func_0x00010befa120(puVar2);
          _objc_release(puVar1);
          _objc_release(uVar4);
          _objc_release(uVar3);
          lVar6 = lVar6 + 1;
        } while (lVar5 != lVar6);
        lVar5 = lStack_190;
        func_0x00010bf52a60();
        unaff_x22 = (undefined *)0x0;
      } while (lVar5 != 0);
    }
    _objc_release(lStack_190);
    puVar1 = PTR_PTR_1126bced0;
    _objc_alloc();
    func_0x00010c035e80();
    uVar4 = *(undefined8 *)(param_5 + 0x58);
    *(undefined **)(param_5 + 0x58) = puVar1;
    _objc_release(uVar4);
    param_1 = dVar9;
    unaff_d8 = param_4;
    unaff_d9 = param_3;
  }
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_5 + 0x38);
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf926c0();
  _objc_release(uVar3);
  if ((int)uVar4 != 0) {
    lVar6 = *(long *)(param_5 + 0x38);
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = PTR_PTR_1126affe8;
    func_0x00010bfccec0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar6;
    func_0x00010c0ff580();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(unaff_x22);
    _objc_release(lVar6);
    if (lVar8 != 0) {
      uVar4 = *(undefined8 *)(param_5 + 0x38);
      func_0x00010c240000(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6c5a0();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar4);
    }
    if (*(long *)(param_5 + 0x58) != 0) {
      uVar4 = *(undefined8 *)(param_5 + 0x38);
      func_0x00010c240000(uVar4);
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = param_5;
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126affe8;
      func_0x00010bfccec0(PTR_PTR_1126affe8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6fe0(uVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(unaff_x22);
      _objc_release(uVar4);
    }
    _objc_release(lVar8);
  }
  puVar2 = param_5 + 0xd8;
  _objc_loadWeakRetained(puVar2);
  puVar1 = param_5;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf73060(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar2);
  lVar6 = *(long *)(param_5 + 0x38);
  func_0x00010c08f640();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d140();
  _objc_release(lVar5);
  lVar8 = lVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  pcStack_198 = FUN_105d28dac;
  dStack_1d0 = unaff_d9;
  dStack_1c8 = unaff_d8;
  puStack_1c0 = unaff_x22;
  puStack_1b8 = puVar1;
  lStack_1b0 = lVar5;
  lStack_1a8 = lVar6;
  puStack_1a0 = &stack0xfffffffffffffff0;
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126b2700;
  _objc_alloc(PTR_PTR_1126b2700);
  lVar5 = param_6;
  func_0x00010c27a460(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  dVar9 = param_1;
  func_0x00010c14e120(*(undefined8 *)(*(long *)(lVar8 + 0x20) + 0x70));
  param_1 = param_1 * dVar9;
  func_0x00010c141a80(*(undefined8 *)(*(long *)(lVar8 + 0x20) + 0x70));
  func_0x00010c055500(*(undefined8 *)(lVar8 + 0x28),*(undefined8 *)(lVar8 + 0x30),param_1,dVar9,
                      puVar2);
  _objc_release(lVar5);
  puVar1 = PTR_PTR_1126bb2a8;
  _objc_alloc(PTR_PTR_1126bb2a8);
  if (param_6 == 0) {
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
  }
  else {
    func_0x00010c26f000(&uStack_1e8,param_6);
  }
  func_0x00010c052280(puVar1);
  _objc_release(puVar2);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d28dac; end: 105d28ea7;  */

void FUN_105d28dac(double param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  double dVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2700;
  _objc_alloc(PTR_PTR_1126b2700);
  lVar2 = param_3;
  func_0x00010c27a460(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  dVar4 = param_1;
  func_0x00010c14e120(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x70));
  param_1 = param_1 * dVar4;
  func_0x00010c141a80(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x70));
  func_0x00010c055500(*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30),param_1,dVar4,
                      puVar1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126bb2a8;
  _objc_alloc(PTR_PTR_1126bb2a8);
  if (param_3 == 0) {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
  }
  else {
    func_0x00010c26f000(&uStack_58,param_3);
  }
  func_0x00010c052280(puVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105d28ea8; end: 105d28f0b;  */

bool FUN_105d28ea8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cc820();
  _objc_release(uVar1);
  _objc_release(param_2);
  return (int)uVar2 == 9;
}



/* Entry: 105d28f0c; end: 105d28f7f; -[SCPreviewFeatureAutoCaptionsImpl _loadState:] */

void FUN_105d28f0c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 != 0) {
    func_0x00010808be9c(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126c41e8;
    func_0x00010c09b120(PTR_PTR_1126c41e8,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x88),param_2,puVar1);
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 105d28f80; end: 105d2900b; -[SCPreviewFeatureAutoCaptionsImpl _presentAutoCaptionsVC:] */

void FUN_105d28f80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(param_3);
  func_0x00010c1a7f60(uVar2,param_2,1);
  func_0x00010c1a98e0(*(undefined8 *)(param_1 + 0x50),param_2,1);
  param_1 = param_1 + 0xd0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f3d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d2900c; end: 105d29073; -[SCPreviewFeatureAutoCaptionsImpl _dissmissAutoCaptionsVC] */

void FUN_105d2900c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x70),param_2,0);
  func_0x00010c1a98e0(*(undefined8 *)(param_1 + 0x50),param_2,0);
  param_1 = param_1 + 0xd0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f3d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84b00();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d29074; end: 105d29113; -[SCPreviewFeatureAutoCaptionsImpl setToolbarItemViewModel:] */

void FUN_105d29074(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0xe0);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0xe0);
    *(long *)(param_1 + 0xe0) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    puVar3 = PTR_PTR_1126ae750;
    if (param_3 == 0) {
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0d9840(uVar2,param_2,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d29114; end: 105d291d3; -[SCPreviewFeatureAutoCaptionsImpl reloadToolbarItemViewModel] */

/* WARNING: Possible PIC construction at 0x000105d291a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105d291a8) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_105d29114(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  if (*(long *)(param_1 + 0xa0) != 0) {
    uVar1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010c083340();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      puVar3 = PTR_PTR_1126c3cc0;
      _objc_alloc(PTR_PTR_1126c3cc0);
      func_0x00010c039d00();
      goto code_r0x00010c216fa0;
    }
  }
  puVar3 = (undefined *)0x0;
code_r0x00010c216fa0:
                    /* WARNING: Could not recover jumptable at 0x00010c216fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setToolbarItemViewModel__112663610,puVar3);
  return;
}



/* Entry: 105d291d4; end: 105d291fb; -[SCPreviewFeatureAutoCaptionsImpl toolbarItemViewModelObservable] */

void FUN_105d291d4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d291fc; end: 105d29213; -[SCPreviewFeatureAutoCaptionsImpl parentViewControllerDelegate] */

void FUN_105d291fc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d29214; end: 105d2921f; -[SCPreviewFeatureAutoCaptionsImpl setParentViewControllerDelegate:] */

void FUN_105d29214(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xd0,param_3);
  return;
}



/* Entry: 105d29220; end: 105d29237; -[SCPreviewFeatureAutoCaptionsImpl multiSnapDelegate] */

void FUN_105d29220(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


