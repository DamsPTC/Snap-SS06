/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10660ac78; end: 10660ad03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10660ac78(long param_1)

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
    lVar3 = param_1 + _DAT_11274c100;
    _objc_loadWeakRetained(lVar3);
  }
  lVar1 = lVar3;
  func_0x00010c293740(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf25180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10660ad04; end: 10660adb7; -[SCImpalaNotificationProcessorEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10660ad04(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  undefined *puStack_48;
  
  lVar1 = param_1 + _DAT_11274c0fc;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf05c00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12dd20();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_48 = PTR_PTR_1126f2140;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10660adb8; end: 10660adff; -[SCImpalaNotificationProcessorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10660adb8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274c0fc);
  _objc_destroyWeak(param_1 + _DAT_11274c100);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274c0f8,0);
  return;
}



/* Entry: 10660ae00; end: 10660b117; -[SCImpalaStoryPlaybackVendor initWithUserSession:navigationServices:circumstanceEngine:storyPlayerPresenterCreator:bitmojiAvatarProvider:bitmojiFriendAvatarProvider:creatorSettingsDataFetcher:readReceiptCoordinator:publicStoryDataProvider:discoverFeedEventsController:storiesConfigProvider:optInDataProvider:discoverFeedDataMutator:playableViewModelGenerator:] */

undefined8 *
FUN_10660ae00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

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
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_68 = PTR_PTR_1126f2148;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
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
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_16;
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



/* Entry: 10660b118; end: 10660b1bb; -[SCImpalaStoryPlaybackVendor playerWithPresentingViewController:] */

void FUN_10660b118(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126cc1e8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c05df80(puVar1,param_2,lVar2,*(undefined8 *)(param_1 + 0x10),param_3,
                      *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x68),
                      *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78));
  _objc_release(param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10660b1bc; end: 10660b283; -[SCImpalaStoryPlaybackVendor .cxx_destruct] */

void FUN_10660b1bc(long param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10660b284; end: 10660b3bb; -[SCImpalaStoryPlaybackServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10660b284(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11274c188;
    _objc_loadWeakRetained();
  }
  lVar1 = param_1;
  func_0x00010bf5b760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cc1f0;
  _objc_alloc(PTR_PTR_1126cc1f0);
  func_0x00010c000a60();
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_40);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10660b3bc; end: 10660b403;  */

void FUN_10660b3bc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf41e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10660b404; end: 10660b75b; -[SCImpalaStoryPlaybackServiceProvider _createStoryPlayerVendor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10660b404(long param_1,undefined8 param_2,undefined8 param_3)

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
  long lVar27;
  
  puVar1 = PTR_PTR_1126cc1f8;
  _objc_retain(param_3);
  _objc_alloc();
  if (param_1 == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = param_1 + _DAT_11274c180;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar27;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_11274c140;
  _objc_loadWeakRetained();
  lVar4 = param_1 + _DAT_11274c144;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11274c148;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bfea2e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bfea320();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bfea340();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11274c14c;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_11274c150;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bfb7c20();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_11274c154;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010bdf2160();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_11274c158;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010c08d460();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_11274c15c;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + _DAT_11274c160;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010c0ebe80();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_11274c164;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010c08d440();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11274c168;
  _objc_loadWeakRetained();
  lVar26 = param_1;
  func_0x00010c29d900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05df60(puVar1,param_2,lVar2,lVar3,lVar5,lVar10,lVar12,lVar14,param_3,lVar16,lVar17,
                      lVar19,lVar21,lVar23,lVar25,lVar26);
  _objc_release(param_3);
  _objc_release(lVar26);
  _objc_release(param_1);
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
  _objc_release(lVar27);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10660b75c; end: 10660ba2f; -[SCImpalaStoryPlaybackServiceProvider _createPublicStoryDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10660b75c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_initWeak(auStack_70,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2a60;
  _objc_alloc();
  lVar3 = param_1 + _DAT_11274c16c;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c258580();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11274c170;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = (long)_DAT_11274c154;
  lVar7 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar18 = param_1 + lVar18;
  _objc_loadWeakRetained(lVar18);
  lVar10 = lVar18;
  func_0x00010c08d320();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11274c15c;
  _objc_loadWeakRetained(lVar11);
  lVar12 = lVar11;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_11274c144;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_11274c174;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11274c178;
  _objc_loadWeakRetained();
  lVar17 = param_1;
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021fa0();
  _objc_release(lVar17);
  _objc_release(param_1);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar18);
  _objc_release(puVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10660ba30; end: 10660ba9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10660ba30(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1 + _DAT_11274c18c;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c260aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10660baa0; end: 10660bbaf; -[SCImpalaStoryPlaybackServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10660baa0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274c178);
  _objc_destroyWeak(param_1 + _DAT_11274c18c);
  _objc_destroyWeak(param_1 + _DAT_11274c168);
  _objc_destroyWeak(param_1 + _DAT_11274c164);
  _objc_destroyWeak(param_1 + _DAT_11274c160);
  _objc_destroyWeak(param_1 + _DAT_11274c15c);
  _objc_destroyWeak(param_1 + _DAT_11274c174);
  _objc_destroyWeak(param_1 + _DAT_11274c158);
  _objc_destroyWeak(param_1 + _DAT_11274c170);
  _objc_destroyWeak(param_1 + _DAT_11274c16c);
  _objc_destroyWeak(param_1 + _DAT_11274c154);
  _objc_destroyWeak(param_1 + _DAT_11274c188);
  _objc_destroyWeak(param_1 + _DAT_11274c150);
  _objc_destroyWeak(param_1 + _DAT_11274c14c);
  _objc_destroyWeak(param_1 + _DAT_11274c184);
  _objc_destroyWeak(param_1 + _DAT_11274c148);
  _objc_destroyWeak(param_1 + _DAT_11274c144);
  _objc_destroyWeak(param_1 + _DAT_11274c140);
  _objc_destroyWeak(param_1 + _DAT_11274c180);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274c17c);
  return;
}



/* Entry: 10660bbb0; end: 10660c167; -[SCMyProfileSnapProSectionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10660bbb0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae568;
  _objc_opt_new();
  uVar20 = *(undefined8 *)(param_1 + _DAT_11274c190);
  *(undefined **)(param_1 + _DAT_11274c190) = puVar1;
  _objc_release(uVar20);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afda8;
  _objc_alloc();
  func_0x00010c032260();
  lVar21 = (long)_DAT_11274c194;
  lVar3 = param_1 + lVar21;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar5 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126cc200;
  _objc_alloc();
  lVar22 = (long)_DAT_11274c19c;
  lVar3 = param_1 + lVar22;
  _objc_loadWeakRetained(lVar3);
  lVar7 = lVar3;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11274c1a0;
  _objc_loadWeakRetained(lVar4);
  lVar23 = (long)_DAT_11274c1a4;
  lVar8 = param_1 + lVar23;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + lVar21;
  _objc_loadWeakRetained(lVar10);
  lVar11 = lVar10;
  func_0x00010c0f0c00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11274c1a8;
  _objc_loadWeakRetained(lVar12);
  lVar13 = lVar12;
  func_0x00010c0ee220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05e520();
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(lVar3);
  puVar14 = PTR_PTR_1126cc208;
  _objc_alloc();
  lVar3 = param_1 + _DAT_11274c1ac;
  _objc_loadWeakRetained();
  lVar9 = lVar3;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar13 = lVar22;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11274c1b0;
  _objc_loadWeakRetained();
  lVar8 = param_1 + _DAT_11274c1b4;
  _objc_loadWeakRetained(lVar8);
  lVar15 = lVar8;
  func_0x00010c08f380();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + lVar23;
  _objc_loadWeakRetained(lVar23);
  lVar16 = lVar23;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11274c1b8;
  _objc_loadWeakRetained();
  lVar12 = param_1 + _DAT_11274c1bc;
  _objc_loadWeakRetained();
  lVar17 = lVar12;
  func_0x00010c11ab80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11274c1c0;
  _objc_loadWeakRetained();
  lVar18 = lVar7;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01c880();
  _objc_release(lVar18);
  _objc_release(lVar7);
  _objc_release(lVar17);
  _objc_release(lVar12);
  _objc_release(lVar10);
  _objc_release(lVar16);
  _objc_release(lVar23);
  _objc_release(lVar15);
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(lVar13);
  _objc_release(lVar22);
  _objc_release(lVar11);
  _objc_release(lVar9);
  _objc_release(lVar3);
  lVar3 = param_1 + _DAT_11274c1c4;
  _objc_loadWeakRetained();
  lVar10 = lVar3;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar8;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar10);
  _objc_release(lVar3);
  puVar19 = PTR_PTR_1126b12b8;
  _objc_alloc(PTR_PTR_1126b12b8);
  func_0x00010c00bac0();
  param_1 = param_1 + lVar21;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010c156b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(puVar19);
  _objc_release(lVar4);
  _objc_release(puVar14);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 10660c168; end: 10660c1a7;  */

void FUN_10660c168(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdc4360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10660c1a8; end: 10660c1cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10660c1a8(long param_1)

{
  _objc_loadWeakRetained(*(long *)(param_1 + 0x20) + (long)_DAT_11274c198);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10660c1cc; end: 10660c597; -[SCMyProfileSnapProSectionEntryPoint _actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10660c1cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
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
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  
  lVar1 = param_1 + _DAT_11274c1c8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c119b40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0b7320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126cc210;
  _objc_alloc();
  lVar1 = param_1 + _DAT_11274c19c;
  _objc_loadWeakRetained();
  lVar6 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_11274c1cc;
  _objc_loadWeakRetained();
  lVar7 = lVar2;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_11274c1a8;
  _objc_loadWeakRetained();
  lVar9 = lVar3;
  func_0x00010c0ee220();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11274c1b0;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c0d4b00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11274c1a0;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_11274c1a4;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = (long)_DAT_11274c1d4;
  uVar30 = *(undefined8 *)(param_1 + _DAT_11274c1d0);
  lVar16 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bfe4c00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010bfe4d40();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_11274c1bc;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010c11ab80();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = *(undefined8 *)(param_1 + _DAT_11274c1d8);
  lVar22 = param_1 + _DAT_11274c1b8;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010c2598a0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_11274c1dc;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010c2587e0();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = *(undefined8 *)(param_1 + _DAT_11274c190);
  param_1 = param_1 + _DAT_11274c1e0;
  _objc_loadWeakRetained();
  lVar26 = param_1;
  func_0x00010bfea2e0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar26;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar27;
  func_0x00010bfea320();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar28;
  func_0x00010bfea2c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05dea0(puVar5,param_2,lVar6,lVar8,lVar9,lVar11,lVar4,lVar13,lVar15,uVar30,lVar17,
                      lVar19,lVar21,uVar31,lVar23,lVar25,uVar32,lVar29);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(param_1);
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
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar6);
  _objc_release(lVar1);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10660c598; end: 10660c6ff; -[SCMyProfileSnapProSectionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10660c598(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274c1d8,0);
  _objc_storeStrong(param_1 + _DAT_11274c1d0,0);
  _objc_storeStrong(param_1 + _DAT_11274c1f4,0);
  _objc_destroyWeak(param_1 + _DAT_11274c1c8);
  _objc_destroyWeak(param_1 + _DAT_11274c1f0);
  _objc_destroyWeak(param_1 + _DAT_11274c1e0);
  _objc_destroyWeak(param_1 + _DAT_11274c1dc);
  _objc_destroyWeak(param_1 + _DAT_11274c1bc);
  _objc_destroyWeak(param_1 + _DAT_11274c1b8);
  _objc_destroyWeak(param_1 + _DAT_11274c1ac);
  _objc_destroyWeak(param_1 + _DAT_11274c1d4);
  _objc_destroyWeak(param_1 + _DAT_11274c1b4);
  _objc_destroyWeak(param_1 + _DAT_11274c1ec);
  _objc_destroyWeak(param_1 + _DAT_11274c198);
  _objc_destroyWeak(param_1 + _DAT_11274c1c4);
  _objc_destroyWeak(param_1 + _DAT_11274c1a0);
  _objc_destroyWeak(param_1 + _DAT_11274c1e8);
  _objc_destroyWeak(param_1 + _DAT_11274c1b0);
  _objc_destroyWeak(param_1 + _DAT_11274c1e4);
  _objc_destroyWeak(param_1 + _DAT_11274c1a8);
  _objc_destroyWeak(param_1 + _DAT_11274c1c0);
  _objc_destroyWeak(param_1 + _DAT_11274c1cc);
  _objc_destroyWeak(param_1 + _DAT_11274c1a4);
  _objc_destroyWeak(param_1 + _DAT_11274c194);
  _objc_destroyWeak(param_1 + _DAT_11274c19c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274c190,0);
  return;
}



/* Entry: 10660c700; end: 10660cb6f;  */

void FUN_10660c700(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,
                  undefined8 param_5,int param_6,int param_7,uint param_8,undefined4 param_9,
                  int param_10,long param_11,long param_12,long param_13,char param_14)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  ulong uStack_138;
  long lStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined4 uStack_d0;
  long lStack_c0;
  uint uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = param_4;
  uStack_b0 = param_8;
  uStack_ac = param_9;
  _objc_retain();
  uStack_a8 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  if ((uint)param_4 == 0) {
    uVar12 = 0;
  }
  else {
    uVar1 = 3;
    if (param_14 == '\0') {
      uVar1 = 1;
    }
    if (param_7 == 0) {
      uVar1 = 0;
    }
    uVar12 = 2;
    if (param_6 == 0) {
      uVar12 = uVar1;
    }
    uVar10 = 0;
    func_0x000108f746a0(0x4000000000000000,0x3ff8000000000000);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_retain(param_3);
  _objc_retain(uVar12);
  _objc_retain(uStack_a8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_3);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  uStack_b4 = (uint)param_4 ^ 1;
  if ((((param_10 == 0) || (uStack_b4 == 0)) ||
      (lVar2 = param_11, func_0x00010c08fa60(), lVar2 == 0)) ||
     ((lVar2 = param_12, func_0x00010c08fa60(), lVar2 == 0 ||
      (lVar2 = param_13, func_0x00010c08fa60(), puVar4 = PTR_PTR_1126b4858, lVar2 == 0)))) {
    lVar2 = param_3;
    func_0x00010c08fa60();
    puVar13 = PTR_PTR_1126b4860;
    if (lVar2 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0fde60();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10660c960;
    }
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = PTR_PTR_1126b19f8;
    func_0x00010bfe9de0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a0 = puVar13;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1c100(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar13);
    puVar13 = PTR_PTR_1126b4860;
    func_0x00010bf1c1e0();
    _objc_retainAutoreleasedReturnValue();
LAB_10660c960:
    _objc_release(puVar4);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126b45f8;
  func_0x00010bfe9200(PTR_PTR_1126b45f8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b4608;
  _objc_alloc(PTR_PTR_1126b4608);
  uStack_d0 = 1;
  func_0x00010bff7b20();
  puVar5 = PTR_PTR_1126cc220;
  _objc_alloc(PTR_PTR_1126cc220);
  uVar1 = uStack_a8;
  uVar14 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  uVar15 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  uVar16 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  uVar17 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  lStack_c0 = param_3;
  func_0x00010bff6300(param_1,param_2,uVar14,uVar15,uVar16,uVar17,0x3ff0000000000000);
  puVar6 = PTR_PTR_1126cb048;
  _objc_alloc();
  func_0x00010bff5f60(uVar14,uVar15,uVar16,uVar17);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar13);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(uVar1);
  _objc_release(uVar12);
  lVar2 = lStack_c0;
  _objc_release(lStack_c0);
  puVar4 = PTR_PTR_1126cc218;
  _objc_alloc();
  uVar11 = (ulong)(uStack_b0 & uStack_b4);
  puVar3 = puVar6;
  func_0x00010c052140();
  _objc_release(puVar6);
  _objc_release(uVar12);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(uVar1);
  lVar7 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  lStack_100 = param_13;
  lStack_f8 = param_12;
  lStack_f0 = lVar2;
  uStack_e8 = uVar1;
  pcStack_d8 = FUN_10660cb70;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = puVar13;
  puStack_118 = puVar6;
  puStack_110 = puVar4;
  uStack_108 = uVar12;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(uVar10);
  _objc_retain(puVar3);
  _objc_retain(uVar11);
  if (uVar11 == 0) goto LAB_10660cd2c;
  lVar2 = lVar7;
  func_0x00010c0de640();
  if ((int)lVar2 == 0) {
LAB_10660cce0:
    puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_150 = 0xc2000000;
    pcStack_148 = FUN_10660cd84;
    puStack_140 = &UNK_110849530;
    _objc_retain(uVar11);
    uStack_138 = uVar11;
    func_0x00010007380c(uVar10,&puStack_158);
    uVar9 = uStack_138;
  }
  else {
    lVar2 = lVar7;
    func_0x00010c089fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    if (lVar8 == 0) goto LAB_10660cce0;
    puVar4 = puVar3;
    func_0x00010c08d900(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar7;
    func_0x00010c089fc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_130 = lVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar10);
    _objc_retain(uVar11);
    func_0x00010c121840(puVar13);
    _objc_release(puVar5);
    _objc_release(lVar2);
    _objc_release(puVar13);
    _objc_release(puVar4);
    _objc_release(uVar11);
    uVar9 = uVar10;
  }
  _objc_release(uVar9);
LAB_10660cd2c:
  _objc_release(uVar11);
  _objc_release(puVar3);
  _objc_release(uVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010660cd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar7 + 0x20) + 0x10))(*(long *)(lVar7 + 0x20),0);
  return;
}



/* Entry: 10660cb70; end: 10660cd83;  */

void FUN_10660cb70(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) goto LAB_10660cd2c;
  lVar1 = param_1;
  func_0x00010c0de640();
  if ((int)lVar1 == 0) {
LAB_10660cce0:
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10660cd84;
    puStack_70 = &UNK_110849530;
    _objc_retain(param_4);
    lStack_68 = param_4;
    func_0x00010007380c(param_2,&puStack_88);
    lVar1 = lStack_68;
  }
  else {
    lVar1 = param_1;
    func_0x00010c089fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 == 0) goto LAB_10660cce0;
    uVar3 = param_3;
    func_0x00010c08d900(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c089fc0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_60 = lVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    _objc_retain(param_4);
    func_0x00010c121840(uVar4);
    _objc_release(puVar5);
    _objc_release(lVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(param_4);
    lVar1 = param_2;
  }
  _objc_release(lVar1);
LAB_10660cd2c:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010660cd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10660cd84; end: 10660cd93;  */

void FUN_10660cd84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010660cd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10660cd94; end: 10660ce33;  */

void FUN_10660cd94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10660ce34;
  puStack_48 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_40 = param_2;
  uStack_38 = uVar2;
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10660ce34; end: 10660ce63;  */

void FUN_10660ce34(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf529e0(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010660ce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,lVar2 == 0);
  return;
}



/* Entry: 10660ce64; end: 10660d13f; +[SCFriendProfileSnapProPublicStoryDataProviderFactory publicStoryDataProviderWithStoriesServices:userStorageServices:storiesSnapReadReceiptService:storiesExperimentServices:applicationCircumstanceEngineServices:grapheneServices:creatorSubscriptionsServices:plusServices:] */

void FUN_10660ce64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_initWeak(auStack_70,param_9);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2a60;
  _objc_alloc(PTR_PTR_1126c2a60);
  uVar3 = param_3;
  func_0x00010c258580(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010bf87660(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_5;
  func_0x00010c08d900(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar7 = param_5;
  func_0x00010c08d320(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_6;
  func_0x00010c258480(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_7;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_8;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_10;
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021fa0(puVar2);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10660d140; end: 10660d18f;  */

void FUN_10660d140(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c260aa0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10660d190; end: 10660d3cb; -[SCFriendUnifiedProfileSnapProSectionActionHandler initWithUserSession:navigationServices:circumstanceEngine:bitmojiAvatarProvider:bitmojiFriendAvatarProvider:storyPlayerPresenterCreator:publicStoryDataProvider:adConfigProvider:discoverFeedEventsController:storiesReadReceiptCoordinator:] */

undefined8 *
FUN_10660d190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  puStack_68 = PTR_PTR_1126f2150;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 5,param_3);
    _objc_retain(param_4);
    uVar2 = puVar1[6];
    puVar1[6] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126cc1e8;
    _objc_alloc();
    func_0x00010c05df20();
    uVar2 = puVar1[1];
    puVar1[1] = puVar4;
    _objc_release(uVar2);
    func_0x00010c18b5e0(puVar1[1]);
    puVar4 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = puVar1[2];
    puVar1[2] = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
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



/* Entry: 10660d3cc; end: 10660d3cf;  */

void FUN_10660d3cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c3121c();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126dc8e0;
  _objc_opt_class(PTR_PTR_1126dc8e0);
  uVar2 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar1,&PTR___NSConcreteGlobalBlock_110acb5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010bfe63a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10660d3d0; end: 10660d3db; +[SCFriendUnifiedProfileSnapProSectionActionHandler announcerIdentifier] */

undefined ** FUN_10660d3d0(void)

{
  return &PTR____CFConstantStringClassReference_110e56e38;
}



/* Entry: 10660d3dc; end: 10660d3e3; -[SCFriendUnifiedProfileSnapProSectionActionHandler addListener:] */

void FUN_10660d3dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10660d3e4; end: 10660d3eb; -[SCFriendUnifiedProfileSnapProSectionActionHandler removeListener:] */

void FUN_10660d3e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10660d3ec; end: 10660d42f; -[SCFriendUnifiedProfileSnapProSectionActionHandler setPresentingViewController:] */

void FUN_10660d3ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x20,param_3);
  func_0x00010c1e1580(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10660d430; end: 10660d703; -[SCFriendUnifiedProfileSnapProSectionActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_10660d430(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      uVar7 = 0;
      goto LAB_10660d6d8;
    }
    uVar2 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar6 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar5);
    uVar1 = uVar2;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010c08fa60();
    if (uVar2 != 0) {
      func_0x00010be74a60(param_1);
    }
LAB_10660d6bc:
    uVar7 = 1;
  }
  else {
    uVar2 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126afdb8;
    _objc_opt_class(PTR_PTR_1126afdb8);
    uVar6 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar5);
    uVar1 = uVar2;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar5 = PTR_PTR_1126cc228;
    _objc_opt_class(PTR_PTR_1126cc228);
    uVar6 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar5);
    uVar1 = uVar2;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c08fa60();
    _objc_release(uVar2);
    if (uVar6 != 0) {
      puVar5 = PTR_PTR_1126b0f10;
      _objc_alloc(PTR_PTR_1126b0f10);
      func_0x00010c033440();
      puVar3 = puVar5;
      func_0x0001004fa310();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126cc1d0);
      puVar4 = puVar3;
      func_0x00010beecc40(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = puVar4;
      func_0x00010bfe63a0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf25140(uVar1);
      _objc_retainAutoreleasedReturnValue();
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained(param_1);
      func_0x00010bfe9fe0(puVar3);
      _objc_release(param_1);
      _objc_release(uVar2);
      _objc_release(puVar3);
      _objc_release(puVar4);
      _objc_release(puVar5);
      goto LAB_10660d6bc;
    }
    uVar7 = 0;
  }
  _objc_release(uVar1);
LAB_10660d6d8:
  _objc_release(param_5);
  _objc_release(param_4);
  return uVar7;
}



/* Entry: 10660d704; end: 10660d70b;  */

void FUN_10660d704(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfea170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_impalaPublicProfilePresentationH_1125d8220);
  return;
}



/* Entry: 10660d70c; end: 10660d84f; -[SCFriendUnifiedProfileSnapProSectionActionHandler _playStoryForBusinessProfileId:baseView:] */

void FUN_10660d70c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf25180();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfd3360();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010bfd3240(lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10660d850; end: 10660d8b7;  */

void FUN_10660d850(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0fe920(*(undefined8 *)(param_1 + 8));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10660d8b8; end: 10660d913; -[SCFriendUnifiedProfileSnapProSectionActionHandler storyPlayerWillBeginDismissing] */

void FUN_10660d8b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,&PTR____CFConstantStringClassReference_110ebb158,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10660d914; end: 10660d917; -[SCFriendUnifiedProfileSnapProSectionActionHandler storyPlayerWillBeginPresenting] */

void FUN_10660d914(void)

{
  return;
}



/* Entry: 10660d918; end: 10660d91b; -[SCFriendUnifiedProfileSnapProSectionActionHandler storyPlayerDidFinishDismissing] */

void FUN_10660d918(void)

{
  return;
}



/* Entry: 10660d91c; end: 10660d933; -[SCFriendUnifiedProfileSnapProSectionActionHandler presentingViewController] */

void FUN_10660d91c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10660d934; end: 10660d94b; -[SCFriendUnifiedProfileSnapProSectionActionHandler userSession] */

void FUN_10660d934(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10660d94c; end: 10660d953; -[SCFriendUnifiedProfileSnapProSectionActionHandler navigationServices] */

undefined8 FUN_10660d94c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10660d954; end: 10660d9ab; -[SCFriendUnifiedProfileSnapProSectionActionHandler .cxx_destruct] */

void FUN_10660d954(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10660d9ac; end: 10660db47; -[SCFriendUnifiedProfileSnapProSectionDataProvider initWithUserSession:snapchatter:snapchatterServices:imageDownloader:storiesSnapReadReceiptService:circumstanceEngine:sectionHeaderViewProvider:] */

undefined1 *
FUN_10660d9ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126f2158;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x70),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x78),param_6);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x48),param_9);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    func_0x00010c244b40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    _objc_release(uVar4);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10660db48; end: 10660db8f; -[SCFriendUnifiedProfileSnapProSectionDataProvider dealloc] */

void FUN_10660db48(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x18));
  puStack_28 = PTR_PTR_1126f2158;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10660db90; end: 10660dbe7; -[SCFriendUnifiedProfileSnapProSectionDataProvider _reload] */

void FUN_10660db90(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10660dbe8;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 10660dbe8; end: 10660dc13;  */

void FUN_10660dbe8(long param_1)

{
  func_0x00010bdee620(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bed5030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(long *)(param_1 + 0x20),PTR_s__updateCellViewModelForHandlerIf_112592db0,
             *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  return;
}



/* Entry: 10660dc14; end: 10660de13; -[SCFriendUnifiedProfileSnapProSectionDataProvider _createHandlerIfNeeded] */

void FUN_10660dc14(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x30);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08fa60();
  if ((lVar4 == 0) && (lVar4 = lVar3, func_0x00010c08fa60(), lVar4 == 0)) goto LAB_10660ddc4;
  _objc_initWeak(auStack_48,param_1);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
  func_0x000108f493c0();
  if (iVar1 == 0) {
    lVar4 = lVar2;
    func_0x00010c08fa60();
    if (lVar4 != 0) {
      param_1 = param_1 + 0x70;
      _objc_loadWeakRetained(param_1);
      lVar4 = param_1;
      func_0x00010bf25180();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0b7ee0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = auStack_78;
      _objc_copyWeak(puVar6,auStack_48);
      func_0x00010bfd3240(lVar5);
      goto LAB_10660dd9c;
    }
  }
  else {
    param_1 = param_1 + 0x70;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010bf25180();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfd3360();
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10660de14;
    puStack_58 = &UNK_110852b30;
    puVar6 = auStack_50;
    _objc_copyWeak(puVar6,auStack_48);
    func_0x00010bfd3280(lVar5);
LAB_10660dd9c:
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(param_1);
    _objc_destroyWeak(puVar6);
  }
  _objc_destroyWeak(auStack_48);
LAB_10660ddc4:
  _objc_release(lVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 10660de14; end: 10660debb;  */

void FUN_10660de14(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    func_0x00010c2a14c0(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(param_2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 10660debc; end: 10660df1b;  */

void FUN_10660debc(long param_1,ulong param_2)

{
  ulong uVar1;
  
  func_0x00010bf25000();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c07a1e0();
  _objc_release(param_2);
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea4430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setHandlerAndObserve__112586ab0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10660df1c; end: 10660df6b;  */

void FUN_10660df1c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bea4420(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10660df6c; end: 10660e077; -[SCFriendUnifiedProfileSnapProSectionDataProvider _setHandlerAndObserve:] */

void FUN_10660df6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x18));
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010befa2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar2);
  func_0x00010bed5020(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10660e078; end: 10660e0bf;  */

void FUN_10660e078(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed5020();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10660e0c0; end: 10660e24f; -[SCFriendUnifiedProfileSnapProSectionDataProvider _updateCellViewModelForHandlerIfNeeded:] */

void FUN_10660e0c0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c2a24e0();
  if ((int)lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = param_3;
      func_0x00010bf63640(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bed8a40(param_1);
      _objc_release(lVar2);
      _objc_initWeak(auStack_48,param_1);
      lVar2 = param_3;
      func_0x00010bf63640(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c258f40();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR___dispatch_main_q_11034be20;
      _objc_retain(PTR___dispatch_main_q_11034be20);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_10660e250;
      puStack_60 = &UNK_11084b7a0;
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_3);
      lStack_58 = param_3;
      FUN_10660cb70(lVar3,puVar1,uVar4,&puStack_78);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lStack_58);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10660e250; end: 10660e2ff;  */

void FUN_10660e250(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126aea98;
    _objc_alloc(PTR_PTR_1126aea98);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf63640(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_10660ec64();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffd260(puVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010bed5040(lVar1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10660e300; end: 10660e3e3; -[SCFriendUnifiedProfileSnapProSectionDataProvider _updateFriendsOnlyStateFromHandlerData:] */

void FUN_10660e300(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
  func_0x000108fab298();
  if ((iVar1 != 0) && ((*(byte *)(param_1 + 0x50) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x50) = 1;
    uVar2 = param_3;
    func_0x00010bf25000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf4de40();
    _objc_release(uVar2);
    ppuVar4 = &PTR____CFConstantStringClassReference_110db7358;
    if ((int)uVar3 != 1) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110e38fb8;
    }
    func_0x00010bcbeaa8(ppuVar4,0);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x48;
    _objc_loadWeakRetained(param_1);
    ppuVar5 = ppuVar4;
    func_0x000108f728c0(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c289900(param_1);
    _objc_release(ppuVar5);
    _objc_release(param_1);
    _objc_release(ppuVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10660e3e4; end: 10660e4d3; -[SCFriendUnifiedProfileSnapProSectionDataProvider _updateCellViewModelIfNeeded:] */

void FUN_10660e3e4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_retain(uVar3);
  if (param_3 == uVar3) {
    _objc_release(uVar3);
    _objc_release(param_3);
  }
  else {
    if (uVar3 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0(param_3,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_10660e4b8;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(ulong *)(param_1 + 0x20) = param_3;
    _objc_release(uVar2);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10660e4d4;
    puStack_40 = &UNK_110842e18;
    lStack_38 = param_1;
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x60),param_2,&puStack_58);
  }
LAB_10660e4b8:
  _objc_release(param_3);
  return;
}



/* Entry: 10660e4d4; end: 10660e50b;  */

void FUN_10660e4d4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x58;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10660e50c; end: 10660e517; +[SCFriendUnifiedProfileSnapProSectionDataProvider announcerIdentifier] */

undefined ** FUN_10660e50c(void)

{
  return &PTR____CFConstantStringClassReference_110e56e78;
}



/* Entry: 10660e518; end: 10660e51f; -[SCFriendUnifiedProfileSnapProSectionDataProvider addListener:] */

void FUN_10660e518(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10660e520; end: 10660e527; -[SCFriendUnifiedProfileSnapProSectionDataProvider removeListener:] */

void FUN_10660e520(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10660e528; end: 10660e55f; -[SCFriendUnifiedProfileSnapProSectionDataProvider setSectionDataModel:] */

void FUN_10660e528(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be8a690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reload_112580340);
  return;
}



/* Entry: 10660e560; end: 10660e56f; -[SCFriendUnifiedProfileSnapProSectionDataProvider numberOfItemsInSection:] */

bool FUN_10660e560(long param_1)

{
  return *(long *)(param_1 + 0x20) != 0;
}



/* Entry: 10660e570; end: 10660e5c3; -[SCFriendUnifiedProfileSnapProSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_10660e570(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10660e5c4;
  puStack_20 = &UNK_110845ab0;
  uStack_18 = param_1;
  func_0x000100504554(param_3,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10660e5c4; end: 10660e5ef;  */

void FUN_10660e5c4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10660e5f0; end: 10660e66f; -[SCFriendUnifiedProfileSnapProSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_10660e5f0(void)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_initWeak(auStack_80,puVar2);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10660e79c;
    puStack_90 = &UNK_110845ae0;
    puVar7 = auStack_80;
    _objc_copyWeak(auStack_88);
    ppuVar3 = &puStack_a8;
    _objc_retainBlock();
    ppuStack_78 = &PTR____CFConstantStringClassReference_110e56e58;
    ppuVar4 = ppuVar3;
    _objc_retainBlock();
    ppuStack_70 = ppuVar4;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_destroyWeak(auStack_88);
    puVar5 = auStack_80;
    _objc_destroyWeak();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
      ___stack_chk_fail();
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_80);
      __Unwind_Resume();
      _objc_retain(puVar7);
      puVar5 = puVar5 + 0x20;
      _objc_loadWeakRetained();
      puVar2 = PTR_PTR_1126cc230;
      if (puVar5 != (undefined1 *)0x0) {
        _objc_retain(puVar7);
        _objc_opt_class(puVar2);
        puVar6 = puVar7;
        _objc_opt_isKindOfClass(puVar7,puVar2);
        puVar1 = puVar7;
        if (((ulong)puVar6 & 1) == 0) {
          puVar1 = (undefined1 *)0x0;
        }
        _objc_retain(puVar1);
        _objc_release(puVar7);
        puVar6 = puVar5 + 0x78;
        _objc_loadWeakRetained(puVar6);
        func_0x00010c1aa200(puVar1);
        _objc_release(puVar1);
        _objc_release(puVar6);
      }
      _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar7);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10660e670; end: 10660e79b; -[SCFriendUnifiedProfileSnapProSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_10660e670(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_50,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10660e79c;
  puStack_60 = &UNK_110845ae0;
  puVar7 = auStack_50;
  _objc_copyWeak(auStack_58);
  ppuVar2 = &puStack_78;
  _objc_retainBlock();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e56e58;
  ppuVar3 = ppuVar2;
  _objc_retainBlock();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_40 = ppuVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_58);
  puVar5 = auStack_50;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_50);
  __Unwind_Resume();
  _objc_retain(puVar7);
  puVar5 = puVar5 + 0x20;
  _objc_loadWeakRetained();
  puVar4 = PTR_PTR_1126cc230;
  if (puVar5 != (undefined1 *)0x0) {
    _objc_retain(puVar7);
    _objc_opt_class(puVar4);
    puVar6 = puVar7;
    _objc_opt_isKindOfClass(puVar7,puVar4);
    puVar1 = puVar7;
    if (((ulong)puVar6 & 1) == 0) {
      puVar1 = (undefined1 *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(puVar7);
    puVar6 = puVar5 + 0x78;
    _objc_loadWeakRetained(puVar6);
    func_0x00010c1aa200(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 10660e79c; end: 10660e84b;  */

void FUN_10660e79c(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126cc230;
  if (param_1 != 0) {
    _objc_retain(param_2);
    _objc_opt_class(puVar2);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    uVar1 = param_2;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_2);
    lVar4 = param_1 + 0x78;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c1aa200(uVar1);
    _objc_release(uVar1);
    _objc_release(lVar4);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10660e84c; end: 10660e84f; -[SCFriendUnifiedProfileSnapProSectionDataProvider didStartSnapchattersUpdateDataRequest:] */

void FUN_10660e84c(void)

{
  return;
}



/* Entry: 10660e850; end: 10660ea1b; -[SCFriendUnifiedProfileSnapProSectionDataProvider didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_10660e850(long param_1,undefined1 *param_2,long param_3,int param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined **unaff_x25;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_4 != 0) {
    _objc_initWeak(auStack_68,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c244620();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_60 = uVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10660ea1c;
    puStack_78 = &UNK_1108434e0;
    param_2 = auStack_68;
    _objc_copyWeak(auStack_70,param_2);
    func_0x00010c09d7c0(uVar2);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    unaff_x25 = &puStack_90;
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x25 + 0x20));
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume(param_3);
  _objc_retain(param_2);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  puVar5 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be8af40(param_3);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10660ea1c; end: 10660ea8b;  */

void FUN_10660ea1c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be8af40(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10660ea8c; end: 10660ead7; -[SCFriendUnifiedProfileSnapProSectionDataProvider _reloadWithSnapchatter:] */

void FUN_10660ea8c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = param_3;
    _objc_release(uVar1);
    func_0x00010be8a680(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10660ead8; end: 10660eb1f; -[SCFriendUnifiedProfileSnapProSectionDataProvider didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_10660ead8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ebb158);
  if ((int)param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be8a690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reload_112580340);
    return;
  }
  return;
}



/* Entry: 10660eb20; end: 10660eb37; -[SCFriendUnifiedProfileSnapProSectionDataProvider dataProviderDelegate] */

void FUN_10660eb20(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10660eb38; end: 10660eb43; -[SCFriendUnifiedProfileSnapProSectionDataProvider setDataProviderDelegate:] */

void FUN_10660eb38(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 10660eb44; end: 10660eb4b; -[SCFriendUnifiedProfileSnapProSectionDataProvider updateQueuePerformer] */

undefined8 FUN_10660eb44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10660eb4c; end: 10660eb7b; -[SCFriendUnifiedProfileSnapProSectionDataProvider setUpdateQueuePerformer:] */

void FUN_10660eb4c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10660eb7c; end: 10660eb83; -[SCFriendUnifiedProfileSnapProSectionDataProvider sectionDataModel] */

undefined8 FUN_10660eb7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10660eb84; end: 10660eb9b; -[SCFriendUnifiedProfileSnapProSectionDataProvider userSession] */

void FUN_10660eb84(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10660eb9c; end: 10660ebb3; -[SCFriendUnifiedProfileSnapProSectionDataProvider imageDownloader] */

void FUN_10660eb9c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10660ebb4; end: 10660ec63; -[SCFriendUnifiedProfileSnapProSectionDataProvider .cxx_destruct] */

void FUN_10660ebb4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x78);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x48);
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



/* Entry: 10660ec64; end: 10660f177;  */

void FUN_10660ec64(ulong param_1,undefined4 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined **ppuVar18;
  undefined *puVar19;
  int iVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined *puStack_98;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf25000();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c258f40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0de640();
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x000108f62f68();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bfe4520();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c08fa60();
  _objc_release(uVar2);
  uVar2 = uVar4;
  if (uVar5 != 0) {
    _objc_retain(uVar1);
    uVar5 = uVar1;
    func_0x00010c078f80(uVar1);
    func_0x00010c0691a0(uVar1);
    _objc_release(uVar1);
    func_0x000108f473c8(uVar4,uVar5 & 0xffffffff);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  uVar4 = uVar1;
  func_0x00010c25e9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x000107d6fd98();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c08fa60();
  if (uVar6 == 0) {
    puStack_98 = (undefined *)0x0;
  }
  else {
    uVar6 = uVar5;
    func_0x000108f63554();
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR_PTR_1126c72f8;
    _objc_alloc();
    puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c044860();
    _objc_release(puVar19);
    _objc_release(uVar6);
  }
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar7 = PTR_PTR_1126cc228;
  _objc_alloc();
  uVar4 = uVar1;
  func_0x00010bfe5ea0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff9e60();
  _objc_release(uVar4);
  puVar8 = PTR_PTR_1126afdb8;
  _objc_alloc();
  func_0x00010bff0880();
  puVar9 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  puVar10 = PTR_PTR_1126b02a8;
  _objc_alloc();
  uVar4 = uVar1;
  func_0x00010bfe5ea0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b460();
  _objc_release(uVar4);
  iVar20 = (int)uVar3;
  puVar19 = puVar10;
  if (iVar20 < 1) {
    puVar19 = puVar9;
  }
  puVar11 = puVar19;
  _objc_retain();
  uVar21 = 0x402e000000000000;
  uVar22 = 0x402e000000000000;
  if (iVar20 < 1) {
    func_0x000108f62ef8(0x402e000000000000,0x402e000000000000,0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf24fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0b7d60();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000108f62de4();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c26e3a0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar3);
  func_0x00010c08e740(puVar11);
  uVar3 = uVar1;
  func_0x00010bf24fa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c070480();
  uVar6 = uVar1;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar1;
  func_0x00010bf1c0a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar1;
  func_0x00010bfe44e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar4;
  FUN_10660c700(uVar21,uVar22,uVar4,0 < iVar20,puVar19,0,param_2,0,0,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar6);
  _objc_release(uVar3);
  puVar15 = PTR_PTR_1126b2c10;
  _objc_alloc(PTR_PTR_1126b2c10);
  puVar16 = puVar15;
  func_0x000108f637bc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053700(puVar15);
  _objc_release(puVar19);
  _objc_release(puVar16);
  _objc_release(uVar14);
  _objc_release(uVar4);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puStack_98);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
    ___stack_chk_fail();
    _objc_retain();
    uVar1 = param_1;
    func_0x00010bf3cf60(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bfd6f60();
    if ((uVar2 & 1) == 0) {
      uVar2 = param_1;
      func_0x00010c079ce0();
      if ((uVar2 & 1) == 0) {
        uVar2 = param_1;
        func_0x00010c07d320();
        if ((uVar2 & 1) == 0) {
          uVar2 = param_1;
          func_0x00010c2709c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          ppuVar18 = &PTR_PTR_110accfe0;
          if (uVar2 != 0) {
            ppuVar18 = &PTR_PTR_110accfc0;
          }
        }
        else {
          ppuVar18 = &PTR_PTR_110accfc8;
        }
      }
      else {
        ppuVar18 = &PTR_PTR_110accfd0;
      }
    }
    else {
      ppuVar18 = &PTR_PTR_110accfd8;
    }
    puVar19 = *ppuVar18;
    _objc_retain(puVar19);
    puVar15 = PTR_PTR_1126cc238;
    _objc_alloc(PTR_PTR_1126cc238);
    func_0x00010c047220();
    _objc_release(puVar19);
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 10660f178; end: 10660f2f7;  */

void FUN_10660f178(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf3cf60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfd6f60();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c079ce0();
    if ((uVar2 & 1) == 0) {
      uVar2 = param_1;
      func_0x00010c07d320();
      if ((uVar2 & 1) == 0) {
        uVar2 = param_1;
        func_0x00010c2709c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        ppuVar4 = &PTR_PTR_110accfe0;
        if (uVar2 != 0) {
          ppuVar4 = &PTR_PTR_110accfc0;
        }
      }
      else {
        ppuVar4 = &PTR_PTR_110accfc8;
      }
    }
    else {
      ppuVar4 = &PTR_PTR_110accfd0;
    }
  }
  else {
    ppuVar4 = &PTR_PTR_110accfd8;
  }
  puVar5 = *ppuVar4;
  _objc_retain(puVar5);
  puVar3 = PTR_PTR_1126cc238;
  _objc_alloc(PTR_PTR_1126cc238);
  func_0x00010c047220();
  _objc_release(puVar5);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10660f2f8; end: 10660f847; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider initWithProfileId:userSession:myStoriesDataCoordinator:profileTooltipsService:imageDownloader:storiesSnapReadReceiptService:circumstanceEngine:storyDraftingDataCoordinator:storyCardFetcher:discoverFeedDataFetcher:nativeStoryClientModelGenerator:] */

undefined8 *
FUN_10660f2f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  puStack_80 = PTR_PTR_1126f2160;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar7 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar7);
    _objc_storeWeak(puVar1 + 2,param_4);
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    puVar1[0x1e] = 4;
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    uVar2 = puVar1[4];
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    uVar7 = puVar1[4];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010bfcacc0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puVar1[0x14];
    puVar1[0x14] = uVar2;
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_retain(param_11);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_12;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[0x15];
    puVar1[0x15] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[0x16];
    puVar1[0x16] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_13;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b10e0;
    _objc_opt_new();
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_90,puVar1);
    _objc_retain(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar2);
    uVar2 = param_10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c242980();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10660f848;
    puStack_a0 = &UNK_110842c58;
    _objc_copyWeak(auStack_98,auStack_90);
    uVar8 = uVar7;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = puVar1[0xb];
    puVar1[0xb] = uVar8;
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar2);
    uVar2 = puVar1[10];
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c266600();
    _objc_release(uVar2);
    func_0x00010bee3be0(puVar1);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x17];
    puVar1[0x17] = puVar3;
    _objc_release(uVar2);
    puVar4 = puVar1 + 2;
    _objc_loadWeakRetained(puVar4);
    puVar5 = puVar4;
    func_0x00010bf25180();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0b7ee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_c0,auStack_90);
    func_0x00010bfd3240(puVar6);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_retain(param_6);
    uVar2 = puVar1[9];
    puVar1[9] = param_6;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c157a20();
    *(char *)(puVar1 + 0xe) = (char)uVar7;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
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



/* Entry: 10660f848; end: 10660f8bb;  */

void FUN_10660f848(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee3be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10660f8bc; end: 10660f91b; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider dealloc] */

void FUN_10660f8bc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x38));
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x40));
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x58));
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0xb8));
  puStack_28 = PTR_PTR_1126f2160;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10660f91c; end: 10660fd87; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider _setHandler:] */

void FUN_10660f91c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  if (param_3 != *(long *)(param_1 + 0x30)) {
    func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x38));
    func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x40));
    func_0x00010bf86d80(*(undefined8 *)(param_1 + 0xb8));
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = param_3;
    _objc_release(uVar1);
    lVar2 = param_3;
    func_0x00010bf25000();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfe44e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    *(long *)(param_1 + 0x90) = lVar3;
    _objc_release(uVar1);
    _objc_release(lVar2);
    func_0x00010bee3be0(param_1);
    _objc_initWeak(auStack_80,param_1);
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10660fd88;
    puStack_90 = &UNK_110852b30;
    _objc_copyWeak(auStack_88,auStack_80);
    lVar2 = param_3;
    func_0x00010befa2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(long *)(param_1 + 0x38) = lVar2;
    _objc_release(uVar1);
    lVar2 = param_3;
    func_0x00010c259c00();
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = puVar6;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x10660fdc4;
    puStack_b8 = &UNK_110852b00;
    _objc_copyWeak(auStack_b0,auStack_80);
    lVar3 = lVar2;
    func_0x00010befa2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(long *)(param_1 + 0x40) = lVar3;
    _objc_release(uVar1);
    _objc_release(lVar2);
    uVar7 = *(undefined8 *)(param_1 + 0xa0);
    puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e0e60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar7;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_f8 = puVar6;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_10660fe00;
    puStack_e0 = &UNK_11092f7d0;
    _objc_copyWeak(auStack_d8,auStack_80);
    uVar5 = uVar1;
    func_0x00010c25ff60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_release(uVar7);
    _objc_release(puVar4);
    uVar7 = *(undefined8 *)(param_1 + 0xb0);
    puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e0e60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar7;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_120 = puVar6;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_10660feb4;
    puStack_108 = &UNK_11092f800;
    _objc_copyWeak(auStack_100,auStack_80);
    uVar5 = uVar1;
    func_0x00010c25ff60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_release(uVar7);
    _objc_release(puVar4);
    uVar7 = *(undefined8 *)(param_1 + 0xd8);
    puVar6 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e0e60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar7;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_128,auStack_80);
    uVar5 = uVar1;
    func_0x00010c25ff60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_destroyWeak(auStack_128);
    _objc_destroyWeak(auStack_100);
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10660fd88; end: 10660fdff;  */

void FUN_10660fd88(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x71) = 1;
    func_0x00010bee3be0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10660fe00; end: 10660feb3;  */

void FUN_10660fe00(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010bf24f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf24ec0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf4b900();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 != 0) {
      uVar1 = param_2;
      func_0x00010c09dc40();
      *(undefined8 *)(param_1 + 0xc0) = uVar1;
    }
    func_0x00010bee3be0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10660feb4; end: 10660ff63;  */

void FUN_10660feb4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = param_2;
    _objc_release(uVar1);
    func_0x00010bee3be0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10660ff64; end: 10661000f; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider _transitionPublicStorySnapStateAndLogIfAbleForDataModel:] */

void FUN_10660ff64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c23f800(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0xd0);
  FUN_106614dd0(uVar3,uVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xe0));
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106610010; end: 10661004b; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider _transitionPublicStorySnapStateAndLogIfAbleForState:hasStory:hasUnviewed:] */

void FUN_106610010(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  FUN_106614e98(uVar1,*(undefined8 *)(param_1 + 0xe8));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10661004c; end: 106610107; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider _parseRawStoryCardIntoSCDiscoverFeedStory] */

void FUN_10661004c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c259c00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2592e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  FUN_1066159e8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar4 == 0) {
    func_0x000108f34fe8(*(undefined8 *)(param_1 + 0xd0),
                        &PTR____CFConstantStringClassReference_110e56e98,0,1);
  }
  else {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0xb0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 106610108; end: 106610163; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider _removePendingSnaps] */

void FUN_106610108(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf24ec0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12afa0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106610164; end: 1066102d7; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider _updateViewModelsIfNeeded] */

void FUN_106610164(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    func_0x00010bf25020();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c291840();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c074e40();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar3 == 0) {
      if (*(char *)(param_1 + 0x71) == '\x01') {
        *(undefined1 *)(param_1 + 0x71) = 0;
        func_0x00010be70440(param_1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bee3a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__updateViewModelsAfterHigherMedi_112596840);
      return;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    FUN_10661c644(uVar4,0,0,0,0,0,0,1,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_38,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x108);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(uVar4);
    func_0x00010c0f7fc0(uVar5);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(uVar4);
  }
  return;
}



/* Entry: 1066102d8; end: 106610313;  */

void FUN_1066102d8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee3c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106610314; end: 1066103bb; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider _updateViewModelsAfterHigherMediaQualityCheck] */

void FUN_106610314(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1066103bc;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1066103bc; end: 1066104c7;  */

void FUN_1066103bc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x30);
    func_0x00010c258f40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___dispatch_main_q_11034be20;
    _objc_retain(PTR___dispatch_main_q_11034be20);
    uVar4 = *(undefined8 *)(lVar2 + 0x28);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1066104c8;
    puStack_50 = &UNK_110849200;
    _objc_copyWeak(auStack_48,param_1 + 0x20);
    FUN_10660cb70(uVar3,puVar1,uVar4,&puStack_68);
    _objc_release(uVar4);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 1066104c8; end: 106610503;  */

void FUN_1066104c8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bee3c00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106610504; end: 10661069b; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider _updateViewModelsIfNeededWithHasUnviewedSnaps:] */

void FUN_106610504(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf24ec0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c259c00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c25a380();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf8d2c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  FUN_106614f7c();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  uStack_70 = param_3;
  func_0x00010c11d940(uVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 10661069c; end: 1066106ef;  */

void FUN_10661069c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2ea00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066106f0; end: 1066108b7; -[SCMyUnifiedProfilePublicProfilesSectionDataProvider _handleQueriedPendingSnap:hasUnviewedSnaps:] */

void FUN_1066106f0(long param_1,undefined8 param_2,long param_3,undefined1 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_78 [8];
  long lStack_70;
  long lStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_1066150d8();
  uVar2 = *(ulong *)(param_1 + 0x78);
  func_0x000108f4853c();
  if ((uVar2 & 1) == 0) {
    lVar5 = param_3;
    func_0x00010bf529e0();
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010bfaea40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf529e0();
    _objc_release(lVar4);
    _objc_release(puVar3);
  }
  _objc_initWeak(auStack_58,param_1);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c242980();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_58);
  _objc_retain(param_3);
  lStack_70 = lVar5 - lVar1;
  lStack_68 = lVar1;
  uStack_60 = param_4;
  func_0x00010c25ff60(uVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}


