/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108037864; end: 1080378b7; -[SCStoriesTrayCellViewModel .cxx_destruct] */

void FUN_108037864(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1080378b8; end: 108037deb; -[SCStoriesTrayDataSource initWithUserSession:snapchattersDataFetcher:customStoriesDataFetcher:customStoriesDataMutator:snapProProfilesProvider:snapProUserProfileIdProvider:snapProPreferencesManager:previewTooltipsProvider:mediaSupportsSpotlightSection:circumstanceEngine:complianceEngine:ourStoriesOnboardingManager:ourStoriesAttributionManager:topicsCollection:hideSnapMap:hidePublicStory:quickPostTrayRefreshEnabled:storyPrivacySettingManager:featureSettingsService:snapchatterPublicInfoFetcher:creatorInfoProvider:] */

undefined8 *
FUN_1080378b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,byte param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined4 param_18,undefined4 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_c8 [8];
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
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  puStack_80 = PTR_PTR_1126fc2f0;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_13);
    uVar2 = puVar1[9];
    puVar1[9] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[10];
    puVar1[10] = param_14;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 9) = (undefined1)param_18;
    *(undefined1 *)((long)puVar1 + 10) = param_18._1_1_;
    uVar2 = param_13;
    func_0x0001009703d0(param_13,param_14);
    *(byte *)(puVar1 + 1) = param_11 & (byte)uVar2;
    _objc_retain(param_5);
    uVar2 = puVar1[8];
    puVar1[8] = param_5;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[6];
    puVar1[6] = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[4];
    puVar1[4] = param_8;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x89) = 0;
    _objc_retain(param_17);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_17;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x11) = param_18._2_1_;
    _objc_initWeak(auStack_90,puVar1);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    uVar4 = puVar1[0xd];
    func_0x00010c15a2a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_108037dec;
    puStack_a0 = &UNK_110842c58;
    _objc_copyWeak(auStack_98,auStack_90);
    uVar2 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_initWeak(auStack_c0,puVar1);
    uVar2 = param_7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_c8,auStack_c0);
    uVar4 = uVar2;
    func_0x00010c0b8000();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[5];
    puVar1[5] = uVar4;
    _objc_release(uVar5);
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
    uVar2 = puVar1[7];
    puVar1[7] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_23;
    _objc_release(uVar2);
    uVar2 = param_13;
    func_0x00010bf1f440();
    *(char *)(puVar1 + 0x15) = (char)uVar2;
    _objc_destroyWeak(auStack_c8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
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



/* Entry: 108037dec; end: 108037e67;  */

void FUN_108037dec(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be887c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108037e68; end: 108037e6f; -[SCStoriesTrayDataSource _setCanPostToHostPublicProfile:] */

void FUN_108037e68(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x89) = param_3;
  return;
}



/* Entry: 108037e70; end: 1080380d7; -[SCStoriesTrayDataSource _handleSnapProManagedProfiles:] */

void FUN_108037e70(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [136];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_f8,param_1);
  puVar6 = auStack_f8;
  _objc_copyWeak(auStack_100,puVar6);
  lVar3 = lVar2;
  func_0x00010c246d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      uVar8 = *(undefined8 *)(lVar9 * 8);
      func_0x00010c1164a0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar8;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar4);
      _objc_release(uVar7);
      _objc_release(uVar8);
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    lVar2 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  puVar5 = puVar4;
  func_0x00010bf51e00();
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar5;
  _objc_release(uVar7);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_f8);
  _objc_release(lVar3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_f8);
  __Unwind_Resume(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bf2d170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar6,PTR_s_canPostToStory_1125a8e00);
  return;
}



/* Entry: 1080380d8; end: 1080380df;  */

void FUN_1080380d8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2d170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_canPostToStory_1125a8e00);
  return;
}



/* Entry: 1080380e0; end: 10803815b;  */

ulong FUN_1080380e0(long param_1,int param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  func_0x00010c074e40();
  if (param_2 == 0) {
    uVar1 = param_3;
    func_0x00010c074e40(param_3);
    uVar1 = uVar1 & 0xffffffff;
  }
  else {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bea28e0();
    _objc_release(param_1);
    uVar1 = 0xffffffffffffffff;
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10803815c; end: 10803822b; -[SCStoriesTrayDataSource _refreshOurStoryTopics] */

void FUN_10803815c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  func_0x00010bfca060(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10803822c; end: 108038283;  */

void FUN_10803822c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = param_2;
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108038284; end: 10803836b; -[SCStoriesTrayDataSource fetchDataWithCompletion:] */

void FUN_108038284(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar2 = param_3;
  _objc_retain();
  _dispatch_group_create();
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  _objc_release(uVar1);
  _dispatch_group_enter(*(undefined8 *)(param_1 + 0x80));
  func_0x00010bed68e0(param_1);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10803836c;
  puStack_50 = &UNK_110848708;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x000100bc0718(uVar2,PTR___dispatch_main_q_11034be20,&puStack_68);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10803836c; end: 1080383f3;  */

void FUN_10803836c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1080383f4;
  puStack_30 = &UNK_110a18410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uStack_28 = uVar2;
  func_0x00010be22360(lVar1,param_2,&puStack_48);
  _objc_release(lVar1);
  _objc_release(uStack_28);
  return;
}



/* Entry: 1080383f4; end: 1080383ff;  */

void FUN_1080383f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001080383fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 108038400; end: 108038407; -[SCStoriesTrayDataSource canPostToHostPublicProfile] */

undefined1 FUN_108038400(long param_1)

{
  return *(undefined1 *)(param_1 + 0x89);
}



/* Entry: 108038408; end: 1080384df; -[SCStoriesTrayDataSource _addCustomStoryWithMutableRowData:storyType:displayName:subText:storyID:error:quickPostTrayRefreshEnabled:] */

void FUN_108038408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d8e90;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c04e2c0();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  func_0x00010befa120(param_3,param_2,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1080384e0; end: 108038577; -[SCStoriesTrayDataSource _repositionStory:toIndex:inArray:] */

void FUN_1080384e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010bfecde0(param_5,param_2,param_3);
  uVar2 = param_5;
  func_0x00010bf529e0();
  if (((param_4 < uVar2) && (uVar1 != 0x7fffffffffffffff)) && (uVar1 != param_4)) {
    func_0x00010c12d3c0(param_5,param_2,uVar1);
    func_0x00010c066b00(param_5,param_2,param_3,param_4);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108038578; end: 1080390c7; -[SCStoriesTrayDataSource _getRowOrderWithCompletion:] */

void FUN_108038578(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined **ppuVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  ulong uVar20;
  long lVar21;
  undefined *puVar22;
  long lVar23;
  undefined8 uStack_238;
  undefined *puStack_220;
  long lStack_218;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [8];
  undefined1 uStack_1b8;
  undefined1 uStack_1b7;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  long lStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined1 auStack_170 [8];
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 8) == '\x01') {
    puVar4 = puVar3;
    func_0x000108f5833c();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126d8e90;
    _objc_alloc(PTR_PTR_1126d8e90);
    lVar13 = param_1;
    func_0x00010bebf080(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e2c0(puVar5);
    func_0x00010befa120(puVar3);
    _objc_release(puVar5);
    _objc_release(lVar13);
    _objc_release(puVar4);
  }
  puVar4 = PTR_PTR_1126d8e90;
  _objc_alloc();
  lVar13 = param_1;
  func_0x00010be61d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010be61d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e2c0();
  _objc_release(lVar11);
  _objc_release(lVar13);
  puVar5 = puVar3;
  func_0x00010befa120();
  if ((*(byte *)(param_1 + 10) & 1) != 0) {
    puStack_220 = (undefined *)0x0;
    uStack_238 = 0;
    goto LAB_108038ad4;
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lVar13 = *(long *)(param_1 + 0x18);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lStack_218 = lVar13;
  func_0x00010bf52a60();
  if (lStack_218 == 0) {
    _objc_release(lVar13);
    uStack_238 = 0;
LAB_108038abc:
    puStack_220 = (undefined *)0x0;
  }
  else {
    uStack_238 = 0;
    lVar11 = *plStack_140;
    puStack_220 = (undefined *)0x0;
    do {
      lVar21 = 0;
      do {
        if (*plStack_140 != lVar11) {
          _objc_enumerationMutation(lVar13);
        }
        lVar23 = *(long *)(lStack_148 + lVar21 * 8);
        lVar14 = lVar23;
        func_0x00010c1164a0(lVar23);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26e7a0();
        _objc_release(lVar14);
        lVar14 = lVar23;
        func_0x00010c1164a0(lVar23);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar14;
        func_0x00010c2711a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar14);
        lVar14 = lVar23;
        func_0x00010c074e40();
        if ((int)lVar14 == 0) {
          puVar19 = PTR_PTR_1126d8e90;
          _objc_alloc(PTR_PTR_1126d8e90);
          lVar14 = lVar23;
          func_0x00010c1164a0(lVar23);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar14;
          func_0x00010c116a20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1164a0(lVar23);
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar23;
          func_0x00010c0b4680();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c04e2c0(puVar19);
          _objc_release(lVar9);
          _objc_release(lVar23);
          _objc_release(lVar8);
          _objc_release(lVar14);
          func_0x00010befa120(puVar5);
          _objc_release(puVar19);
          lVar14 = lVar6;
        }
        else {
          func_0x000108f591dc();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar6);
          puVar19 = PTR_PTR_1126d8e90;
          _objc_alloc();
          puVar22 = puVar19;
          func_0x000108f591ac();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar23;
          func_0x00010c1164a0(lVar23);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar6;
          func_0x00010c116a20();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar23;
          func_0x00010c1164a0(lVar23);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar9;
          func_0x00010c0b4680();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c04e2c0();
          _objc_release(puStack_220);
          _objc_release(lVar7);
          _objc_release(lVar9);
          _objc_release(lVar8);
          _objc_release(lVar6);
          _objc_release(puVar22);
          lVar6 = lVar23;
          func_0x00010c1164a0();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar6;
          func_0x00010c26e7a0();
          if (lVar8 == 2) {
            uStack_238 = CONCAT44(1,(uint)uStack_238);
          }
          else {
            lVar8 = lVar23;
            func_0x00010c1164a0();
            _objc_retainAutoreleasedReturnValue();
            lVar9 = lVar8;
            func_0x00010c26e7a0();
            uStack_238 = (ulong)CONCAT14(lVar9 == 3,(uint)uStack_238);
            _objc_release(lVar8);
          }
          _objc_release(lVar6);
          lVar6 = param_1;
          func_0x00010be37a80();
          puStack_220 = puVar19;
          if ((int)lVar6 != 0) {
            func_0x00010c1164a0();
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar23;
            func_0x00010c26e7a0();
            _objc_release(lVar23);
            uStack_238 = CONCAT44(uStack_238._4_4_,lVar6 < 2 | (uint)uStack_238);
          }
        }
        _objc_release(lVar14);
        lVar21 = lVar21 + 1;
      } while (lStack_218 != lVar21);
      lStack_218 = lVar13;
      func_0x00010bf52a60();
    } while (lStack_218 != 0);
    _objc_release(lVar13);
    if (puStack_220 == (undefined *)0x0) goto LAB_108038abc;
    func_0x00010befa120(puVar3);
  }
  func_0x00010befa160(puVar3);
  _objc_release();
LAB_108038ad4:
  _dispatch_group_create();
  _objc_initWeak(auStack_158,param_1);
  uVar20 = 0;
  do {
    uVar10 = *(ulong *)(param_1 + 0x10);
    func_0x00010bf529e0();
    if (uVar10 <= uVar20) {
      if ((*(byte *)(param_1 + 9) & 1) == 0) {
        puVar19 = PTR_PTR_1126d8e90;
        _objc_alloc(PTR_PTR_1126d8e90);
        ppuVar12 = &PTR____CFConstantStringClassReference_110e2c118;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2c118,0);
        _objc_retainAutoreleasedReturnValue();
        lVar13 = param_1;
        func_0x00010bebce80(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04e2c0(puVar19);
        func_0x00010befa120(puVar3);
        _objc_release(puVar19);
        _objc_release(lVar13);
        _objc_release(ppuVar12);
      }
      lVar13 = *(long *)(param_1 + 0xa0);
      if ((lVar13 == 0) || (func_0x00010bf5ba20(), (int)lVar13 == 0)) {
        puVar19 = (undefined *)0x0;
      }
      else {
        lVar11 = *(long *)(param_1 + 0x20);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar11;
        func_0x00010c116a20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar11);
        if (lVar13 == 0) {
          puVar22 = (undefined *)0x0;
        }
        else {
          puVar22 = PTR_PTR_1126c3320;
          func_0x00010c271d40(PTR_PTR_1126c3320);
          _objc_retainAutoreleasedReturnValue();
        }
        lVar14 = *(long *)(param_1 + 0xa0);
        func_0x00010c2608e0();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        lVar11 = lVar14;
        func_0x000108f57dfc();
        _objc_retainAutoreleasedReturnValue();
        lVar21 = lVar14;
        if (lVar14 == 0) {
          lVar21 = lVar11;
          func_0x000108f598b4();
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010c14de00(puVar15);
        _objc_retainAutoreleasedReturnValue();
        if (lVar14 == 0) {
          _objc_release(lVar21);
        }
        _objc_release(lVar11);
        puVar19 = PTR_PTR_1126d8e90;
        _objc_alloc();
        cVar2 = *(char *)(param_1 + 0xa8);
        if (cVar2 == '\x01') {
          puVar17 = puVar19;
          func_0x000108f598fc();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar17 = (undefined *)0x0;
        }
        func_0x00010c04e2c0();
        if (cVar2 != '\0') {
          _objc_release(puVar17);
        }
        func_0x00010befa120(puVar3);
        _objc_release(puVar15);
        _objc_release(lVar14);
        _objc_release(puVar22);
        _objc_release(lVar13);
      }
      puStack_208 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_200 = 0xc2000000;
      uStack_1f8 = 0x108039154;
      puStack_1f0 = &UNK_110a184b0;
      _objc_copyWeak(auStack_1c0,auStack_158);
      uStack_1b8 = (undefined1)(uStack_238 >> 0x20);
      uStack_1b7 = (undefined1)uStack_238;
      puStack_1d8 = puStack_220;
      puStack_1e8 = puVar3;
      puStack_1e0 = puVar4;
      puStack_1d0 = puVar19;
      uStack_1c8 = param_3;
      _objc_retain();
      _objc_retain(puVar19);
      _objc_retain(puStack_220);
      _objc_retain(puVar4);
      _objc_retain(puVar3);
      ppuVar12 = &puStack_208;
      puVar22 = PTR___dispatch_main_q_11034be20;
      func_0x000100bc0718(puVar5,PTR___dispatch_main_q_11034be20,ppuVar12);
      _objc_release(uStack_1c8);
      _objc_release(puStack_1d0);
      _objc_release(puStack_1d8);
      _objc_release(puStack_1e0);
      _objc_release(puStack_1e8);
      _objc_release(puVar19);
      _objc_destroyWeak(auStack_1c0);
      _objc_destroyWeak(auStack_158);
      _objc_release(puVar5);
      _objc_release(puStack_220);
      _objc_release(param_3);
      _objc_release(puVar4);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
        ___stack_chk_fail();
        _objc_destroyWeak(auStack_158);
        __Unwind_Resume();
        _objc_retain(ppuVar12);
        _objc_retain(puVar22);
        puVar4 = puVar3 + 0x40;
        _objc_loadWeakRetained(puVar4);
        func_0x00010bdc6760();
        _objc_release(ppuVar12);
        _objc_release(puVar22);
        _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(puVar3 + 0x38));
        return;
      }
      return;
    }
    lVar11 = *(long *)(param_1 + 0x10);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar11;
    func_0x00010c27dd80();
    if (lVar13 == 2) {
      uVar18 = 4;
LAB_108038b7c:
      uVar16 = *(undefined8 *)(param_1 + 0x58);
      lVar13 = lVar11;
      func_0x00010c11ac00(lVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar16);
      _objc_release(lVar13);
      lVar13 = lVar11;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      lVar21 = lVar11;
      func_0x00010c11ac00();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined1 *)(param_1 + 0x88);
      _dispatch_group_enter(puVar5);
      lVar14 = lVar11;
      func_0x00010c0f4aa0(lVar11);
      _objc_retainAutoreleasedReturnValue();
      puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1a8 = 0xc2000000;
      pcStack_1a0 = FUN_1080390c8;
      puStack_198 = &UNK_110a18440;
      _objc_copyWeak(auStack_170,auStack_158);
      _objc_retain(puVar3);
      puStack_190 = puVar3;
      uStack_168 = uVar18;
      _objc_retain(lVar13);
      lStack_188 = lVar13;
      _objc_retain(lVar21);
      lStack_180 = lVar21;
      uStack_160 = uVar1;
      _objc_retain(puVar5);
      puStack_178 = puVar5;
      func_0x00010bdd6760(param_1);
      _objc_release(lVar14);
      _objc_release(puStack_178);
      _objc_release(lStack_180);
      _objc_release(lStack_188);
      _objc_release(puStack_190);
      _objc_destroyWeak(auStack_170);
      _objc_release(lVar21);
      _objc_release(lVar13);
    }
    else {
      lVar13 = lVar11;
      func_0x00010c27dd80();
      if (lVar13 != 1) {
        lVar13 = lVar11;
        func_0x00010c27dd80();
        if (lVar13 == 6) {
          uVar18 = 6;
        }
        else {
          lVar13 = lVar11;
          func_0x00010c27dd80();
          if (((lVar13 == 10) || (lVar13 = lVar11, func_0x00010c27dd80(), lVar13 != 7)) ||
             (lVar13 = param_1, func_0x00010be08a80(), (int)lVar13 == 0)) goto LAB_108038cb0;
          uVar18 = 4;
        }
        goto LAB_108038b7c;
      }
      lVar13 = lVar11;
      func_0x00010c1143e0();
      if (lVar13 != 3) {
        uVar18 = 5;
        goto LAB_108038b7c;
      }
    }
LAB_108038cb0:
    _objc_release(lVar11);
    uVar20 = uVar20 + 1;
  } while( true );
}



/* Entry: 1080390c8; end: 1080392ff;  */

void FUN_1080390c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdc6760();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 108039300; end: 108039433; -[SCStoriesTrayDataSource _getFirstNameFromUserId:completion:] */

void FUN_108039300(long param_1,undefined **param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined *puStack_290;
  undefined8 uStack_288;
  code *pcStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined **ppuStack_268;
  undefined8 *puStack_260;
  undefined **ppuStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  code *pcStack_240;
  undefined *puStack_238;
  undefined **ppuStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined1 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(param_3);
  puVar13 = (undefined *)0x3;
  puVar8 = puVar2;
  func_0x00010c09d7c0(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar8);
  ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
  if (puVar8 == (undefined *)0x0) {
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = param_2;
    func_0x00010901d7c4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    ppuVar15 = ppuVar6;
    func_0x00010bf44740();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar15;
    func_0x00010bf529e0();
    if (ppuVar7 == (undefined **)0x0) {
      ppuVar7 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar7 = ppuVar15;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar12 = (undefined **)0x0;
    (**(code **)(*(long *)(param_3 + 0x28) + 0x10))(*(long *)(param_3 + 0x28),ppuVar7);
    _objc_release(ppuVar7);
    _objc_release(ppuVar15);
  }
  else {
    puVar3 = puVar8;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar8;
    func_0x00010bf3ec40();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar4 = puVar8;
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    ppuVar12 = ppuVar6;
    (**(code **)(*(long *)(param_3 + 0x28) + 0x10))(*(long *)(param_3 + 0x28),0);
  }
  _objc_release(ppuVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
    ___stack_chk_fail();
    _objc_retain(ppuVar12);
    _objc_retain(puVar13);
    if (((puVar8[0x88] & 1) == 0) ||
       (ppuVar6 = ppuVar12, func_0x00010bf529e0(), ppuVar6 == (undefined **)0x0)) {
      (**(code **)(puVar13 + 0x10))(puVar13,0,0);
    }
    else {
      ppuVar9 = ppuVar6;
      _dispatch_group_create();
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = (undefined **)0x0;
      puStack_190 = &uStack_198;
      uStack_198 = 0;
      uStack_188 = 0x3032000000;
      pcStack_180 = FUN_1080399ac;
      uStack_178 = 0x1080399bc;
      uStack_170 = 0;
      ppuVar7 = ppuVar6;
      if ((undefined **)0x3 < ppuVar6) {
        ppuVar7 = (undefined **)0x4;
      }
      do {
        ppuVar10 = ppuVar12;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _dispatch_group_enter(ppuVar9);
        ppuVar11 = ppuVar10;
        func_0x00010c2923e0(ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1d0 = 0xc2000000;
        pcStack_1c8 = FUN_1080399c4;
        puStack_1c0 = &UNK_110a184e0;
        _objc_retain(ppuVar10);
        puStack_1a0 = &uStack_198;
        ppuStack_1b8 = ppuVar10;
        _objc_retain(ppuVar9);
        ppuStack_1b0 = ppuVar9;
        _objc_retain(puVar2);
        puStack_1a8 = puVar2;
        func_0x00010be1f1c0(puVar8);
        _objc_release(ppuVar11);
        _objc_release(puStack_1a8);
        _objc_release(ppuStack_1b0);
        _objc_release(ppuStack_1b8);
        _objc_release(ppuVar10);
        puStack_290 = PTR___NSConcreteStackBlock_11034bd00;
        ppuVar15 = (undefined **)((long)ppuVar15 + 1);
      } while (ppuVar7 != ppuVar15);
      puStack_200 = &uStack_1f8;
      uStack_1f8 = 0;
      uStack_1e8 = 0x2020000000;
      uStack_1e0 = 0;
      puStack_228 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_220 = 0xc2000000;
      pcStack_218 = FUN_108039b90;
      puStack_210 = &UNK_1108aa400;
      puStack_1f0 = puStack_200;
      _objc_retain(puVar13);
      ppuVar15 = &puStack_228;
      puStack_208 = puVar13;
      _objc_retainBlock();
      uVar1 = 0;
      _dispatch_time(0,500000000);
      puStack_250 = puStack_290;
      uStack_248 = 0xc2000000;
      pcStack_240 = FUN_108039bb8;
      puStack_238 = &UNK_110849530;
      _objc_retain(ppuVar15);
      puVar8 = PTR___dispatch_main_q_11034be20;
      ppuStack_230 = ppuVar15;
      func_0x00010058c530(uVar1,PTR___dispatch_main_q_11034be20,&puStack_250);
      uStack_288 = 0xc2000000;
      pcStack_280 = FUN_108039c18;
      puStack_278 = &UNK_110a18510;
      puStack_260 = &uStack_198;
      puStack_270 = puVar2;
      ppuStack_268 = ppuVar15;
      ppuStack_258 = ppuVar6;
      _objc_retain(puVar2);
      _objc_retain(ppuVar15);
      func_0x000100bc0718(ppuVar9,puVar8,&puStack_290);
      _objc_release(puVar8);
      _objc_release(puStack_270);
      _objc_release(ppuStack_268);
      _objc_release(ppuStack_230);
      _objc_release(ppuVar15);
      _objc_release(puStack_208);
      __Block_object_dispose(&uStack_1f8,8);
      __Block_object_dispose(&uStack_198,8);
      _objc_release(uStack_170);
      _objc_release(puVar2);
      _objc_release(ppuVar9);
    }
    _objc_release(puVar13);
    _objc_release(ppuVar12);
    return;
  }
  return;
}



/* Entry: 108039434; end: 108039653;  */

void FUN_108039434(long param_1,undefined **param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined **ppuStack_1f8;
  undefined8 *puStack_1f0;
  undefined **ppuStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  undefined *puStack_1c8;
  undefined **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined *puStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
  if (param_3 == 0) {
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = param_2;
    func_0x00010901d7c4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    ppuVar13 = ppuVar5;
    func_0x00010bf44740();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar13;
    func_0x00010bf529e0();
    if (ppuVar6 == (undefined **)0x0) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar6 = ppuVar13;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar11 = (undefined **)0x0;
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),ppuVar6);
    _objc_release(ppuVar6);
    _objc_release(ppuVar13);
  }
  else {
    lVar1 = param_3;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    param_4 = param_3;
    func_0x00010bf3ec40();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar2 = param_3;
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    ppuVar11 = ppuVar5;
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
  }
  _objc_release(ppuVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    _objc_retain(ppuVar11);
    _objc_retain(param_4);
    if (((*(byte *)(param_3 + 0x88) & 1) == 0) ||
       (ppuVar5 = ppuVar11, func_0x00010bf529e0(), ppuVar5 == (undefined **)0x0)) {
      (**(code **)(param_4 + 0x10))(param_4,0,0);
    }
    else {
      ppuVar7 = ppuVar5;
      _dispatch_group_create();
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = (undefined **)0x0;
      puStack_120 = &uStack_128;
      uStack_128 = 0;
      uStack_118 = 0x3032000000;
      pcStack_110 = FUN_1080399ac;
      uStack_108 = 0x1080399bc;
      uStack_100 = 0;
      ppuVar6 = ppuVar5;
      if ((undefined **)0x3 < ppuVar5) {
        ppuVar6 = (undefined **)0x4;
      }
      do {
        ppuVar8 = ppuVar11;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _dispatch_group_enter(ppuVar7);
        ppuVar9 = ppuVar8;
        func_0x00010c2923e0(ppuVar8);
        _objc_retainAutoreleasedReturnValue();
        puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_160 = 0xc2000000;
        pcStack_158 = FUN_1080399c4;
        puStack_150 = &UNK_110a184e0;
        _objc_retain(ppuVar8);
        puStack_130 = &uStack_128;
        ppuStack_148 = ppuVar8;
        _objc_retain(ppuVar7);
        ppuStack_140 = ppuVar7;
        _objc_retain(puVar3);
        puStack_138 = puVar3;
        func_0x00010be1f1c0(param_3);
        _objc_release(ppuVar9);
        _objc_release(puStack_138);
        _objc_release(ppuStack_140);
        _objc_release(ppuStack_148);
        _objc_release(ppuVar8);
        puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
        ppuVar13 = (undefined **)((long)ppuVar13 + 1);
      } while (ppuVar6 != ppuVar13);
      puStack_190 = &uStack_188;
      uStack_188 = 0;
      uStack_178 = 0x2020000000;
      uStack_170 = 0;
      puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1b0 = 0xc2000000;
      pcStack_1a8 = FUN_108039b90;
      puStack_1a0 = &UNK_1108aa400;
      puStack_180 = puStack_190;
      _objc_retain(param_4);
      ppuVar13 = &puStack_1b8;
      lStack_198 = param_4;
      _objc_retainBlock();
      uVar10 = 0;
      _dispatch_time(0,500000000);
      puStack_1e0 = puStack_220;
      uStack_1d8 = 0xc2000000;
      pcStack_1d0 = FUN_108039bb8;
      puStack_1c8 = &UNK_110849530;
      _objc_retain(ppuVar13);
      puVar4 = PTR___dispatch_main_q_11034be20;
      ppuStack_1c0 = ppuVar13;
      func_0x00010058c530(uVar10,PTR___dispatch_main_q_11034be20,&puStack_1e0);
      uStack_218 = 0xc2000000;
      pcStack_210 = FUN_108039c18;
      puStack_208 = &UNK_110a18510;
      puStack_1f0 = &uStack_128;
      puStack_200 = puVar3;
      ppuStack_1f8 = ppuVar13;
      ppuStack_1e8 = ppuVar5;
      _objc_retain(puVar3);
      _objc_retain(ppuVar13);
      func_0x000100bc0718(ppuVar7,puVar4,&puStack_220);
      _objc_release(puVar4);
      _objc_release(puStack_200);
      _objc_release(ppuStack_1f8);
      _objc_release(ppuStack_1c0);
      _objc_release(ppuVar13);
      _objc_release(lStack_198);
      __Block_object_dispose(&uStack_188,8);
      __Block_object_dispose(&uStack_128,8);
      _objc_release(uStack_100);
      _objc_release(puVar3);
      _objc_release(ppuVar7);
    }
    _objc_release(param_4);
    _objc_release(ppuVar11);
    return;
  }
  return;
}



/* Entry: 108039654; end: 1080399ab; -[SCStoriesTrayDataSource _buildParticipantsString:completion:] */

void FUN_108039654(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined **ppuStack_178;
  undefined8 *puStack_170;
  ulong uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined **ppuStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (((*(byte *)(param_1 + 0x88) & 1) == 0) || (uVar3 = param_3, func_0x00010bf529e0(), uVar3 == 0)
     ) {
    (**(code **)(param_4 + 0x10))(param_4,0,0);
  }
  else {
    uVar4 = uVar3;
    _dispatch_group_create();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = 0;
    puStack_a0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_1080399ac;
    uStack_88 = 0x1080399bc;
    uStack_80 = 0;
    uVar1 = uVar3;
    if (3 < uVar3) {
      uVar1 = 4;
    }
    do {
      uVar6 = param_3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_group_enter(uVar4);
      uVar7 = uVar6;
      func_0x00010c2923e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e0 = 0xc2000000;
      pcStack_d8 = FUN_1080399c4;
      puStack_d0 = &UNK_110a184e0;
      _objc_retain(uVar6);
      puStack_b0 = &uStack_a8;
      uStack_c8 = uVar6;
      _objc_retain(uVar4);
      uStack_c0 = uVar4;
      _objc_retain(puVar5);
      puStack_b8 = puVar5;
      func_0x00010be1f1c0(param_1);
      _objc_release(uVar7);
      _objc_release(puStack_b8);
      _objc_release(uStack_c0);
      _objc_release(uStack_c8);
      _objc_release(uVar6);
      puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
      uVar10 = uVar10 + 1;
    } while (uVar1 != uVar10);
    puStack_110 = &uStack_108;
    uStack_108 = 0;
    uStack_f8 = 0x2020000000;
    uStack_f0 = 0;
    puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_130 = 0xc2000000;
    pcStack_128 = FUN_108039b90;
    puStack_120 = &UNK_1108aa400;
    puStack_100 = puStack_110;
    _objc_retain(param_4);
    ppuVar8 = &puStack_138;
    lStack_118 = param_4;
    _objc_retainBlock();
    uVar9 = 0;
    _dispatch_time(0,500000000);
    puStack_160 = puStack_1a0;
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_108039bb8;
    puStack_148 = &UNK_110849530;
    _objc_retain(ppuVar8);
    puVar2 = PTR___dispatch_main_q_11034be20;
    ppuStack_140 = ppuVar8;
    func_0x00010058c530(uVar9,PTR___dispatch_main_q_11034be20,&puStack_160);
    uStack_198 = 0xc2000000;
    pcStack_190 = FUN_108039c18;
    puStack_188 = &UNK_110a18510;
    puStack_170 = &uStack_a8;
    puStack_180 = puVar5;
    ppuStack_178 = ppuVar8;
    uStack_168 = uVar3;
    _objc_retain(puVar5);
    _objc_retain(ppuVar8);
    func_0x000100bc0718(uVar4,puVar2,&puStack_1a0);
    _objc_release(puVar2);
    _objc_release(puStack_180);
    _objc_release(ppuStack_178);
    _objc_release(ppuStack_140);
    _objc_release(ppuVar8);
    _objc_release(lStack_118);
    __Block_object_dispose(&uStack_108,8);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
    _objc_release(puVar5);
    _objc_release(uVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1080399ac; end: 1080399c3;  */

void FUN_1080399ac(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1080399c4; end: 108039b8f;  */

void FUN_1080399c4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (param_3 == 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x30));
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    lVar7 = param_3;
    func_0x00010bf87dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ec40(param_3);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_release(uVar1);
    _objc_release(lVar7);
    lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar1 = *(undefined8 *)(lVar7 + 0x28);
    *(undefined **)(lVar7 + 0x28) = puVar5;
    _objc_retain(puVar5);
    _objc_release(uVar1);
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar5);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)(*(long *)(param_3 + 0x28) + 8);
  if ((*(byte *)(lVar6 + 0x18) & 1) != 0) {
    return;
  }
  *(undefined1 *)(lVar6 + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x000108039bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))();
  return;
}



/* Entry: 108039b90; end: 108039bb7;  */

void FUN_108039b90(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  if ((*(byte *)(lVar1 + 0x18) & 1) != 0) {
    return;
  }
  *(undefined1 *)(lVar1 + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x000108039bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 108039bb8; end: 108039c17;  */

void FUN_108039bb8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110ecfcb8,
                      &PTR____CFConstantStringClassReference_110ecfd18,0);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108039c18; end: 108039e87;  */

void FUN_108039c18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long lVar5;
  ulong uVar6;
  
  ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108039c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
    return;
  }
  uVar6 = *(ulong *)(param_1 + 0x38);
  lVar5 = param_1;
  if ((long)uVar6 < 3) {
    if (uVar6 == 1) {
      ppuVar4 = *(undefined ***)(param_1 + 0x20);
      func_0x00010bfb1920(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108039e48;
    }
    if (uVar6 != 2) {
LAB_108039d1c:
      if (uVar6 < 5) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
        goto LAB_108039e48;
      }
      func_0x000108f57d9c();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108039e08;
    }
    func_0x000108f57d54();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (uVar6 == 3) {
      func_0x000108f57d6c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (uVar6 != 4) goto LAB_108039d1c;
      func_0x000108f57d84();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
LAB_108039e08:
    func_0x00010c14de00(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(lVar5);
LAB_108039e48:
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),ppuVar4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
  return;
}



/* Entry: 108039e88; end: 108039e8f; -[SCStoriesTrayDataSource customStoryMetadataForStoryId:] */

void FUN_108039e88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 108039e90; end: 10803a313; -[SCStoriesTrayDataSource getSelectedRowStories:] */

void FUN_108039e90(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined1 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_140 = puVar3;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puStack_158 = puVar4;
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010bf52a60();
  if (lVar5 == 0) {
    puStack_138 = (undefined *)0x0;
    uStack_148 = 0;
    bVar1 = false;
    uStack_150 = (undefined *)((ulong)uStack_150._4_4_ << 0x20);
  }
  else {
    puStack_138 = (undefined *)0x0;
    uStack_148 = 0;
    bVar1 = false;
    uStack_150 = (undefined *)((ulong)uStack_150._4_4_ << 0x20);
    lVar12 = *plStack_120;
    do {
      lVar13 = 0;
      bVar2 = bVar1;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        lVar16 = *(long *)(lStack_128 + lVar13 * 8);
        lVar15 = *(long *)(param_1 + 0x18);
        lVar6 = lVar16;
        func_0x00010c259c80(lVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar15;
        func_0x00010c1164a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar15);
        _objc_release(lVar6);
        lVar15 = *(long *)(param_1 + 0x58);
        lVar6 = lVar16;
        func_0x00010c259c80(lVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
        lVar6 = lVar16;
        func_0x00010c25b720();
        puVar3 = PTR_PTR_1126c3320;
        bVar1 = bVar2;
        if (lVar6 < 3) {
          if (lVar6 == 0) {
            uStack_148 = CONCAT44(1,(undefined4)uStack_148);
          }
          else if (lVar6 == 1) {
            if (lVar7 != 0) {
              func_0x00010befa120(puStack_158);
            }
          }
          else {
            bVar1 = true;
            if (lVar6 != 2) {
              bVar1 = bVar2;
            }
          }
        }
        else if (lVar6 - 4U < 3) {
          if (lVar15 != 0) {
            lVar6 = lVar15;
            FUN_1084388e0(lVar15,0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puStack_140);
            _objc_release(lVar6);
          }
        }
        else if (lVar6 == 3) {
          uStack_150 = (undefined *)CONCAT44(uStack_150._4_4_,1);
        }
        else if (lVar6 == 7) {
          func_0x00010c259c80(lVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c272080();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puStack_138);
          _objc_release(lVar16);
          uStack_148 = CONCAT44(uStack_148._4_4_,1);
          puStack_138 = puVar3;
        }
        _objc_release(lVar15);
        _objc_release(lVar7);
        lVar13 = lVar13 + 1;
        bVar2 = bVar1;
      } while (lVar5 != lVar13);
      lVar5 = param_3;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(param_3);
  puVar3 = uStack_150;
  if ((((ulong)uStack_150 & 1) != 0) || (bVar1)) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar8 = puVar4;
    if (bVar1) {
      func_0x00010befa120(puVar4);
    }
    if (((ulong)puVar3 & 1) != 0) {
      puVar8 = puVar4;
      func_0x00010befa120(puVar4);
    }
    FUN_10853f454();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar8;
    func_0x000108f5833c();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126cc7d0;
    _objc_alloc();
    puVar10 = puVar8;
    uStack_150 = puVar9;
    func_0x00010c259cc0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar10;
    func_0x000108f580b4();
    _objc_retainAutoreleasedReturnValue();
    uStack_160 = *(undefined8 *)(param_1 + 0x78);
    puVar11 = puVar4;
    func_0x00010bf51e00();
    lVar5 = param_1;
    func_0x00010bf120a0();
    func_0x00010be1bbc0();
    _objc_retainAutoreleasedReturnValue();
    uStack_170 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_188 = 0;
    uStack_198 = (undefined1)lVar5;
    puVar14 = uStack_150;
    puStack_1a0 = puVar11;
    lStack_190 = param_1;
    func_0x00010c04d720(uStack_150);
    _objc_release(param_1);
    _objc_release(puVar11);
    _objc_release(puVar9);
    _objc_release(puVar10);
    _objc_release(puVar3);
    _objc_release(puVar8);
    _objc_release(puVar4);
  }
  else {
    puVar14 = (undefined *)0x0;
  }
  puVar9 = PTR_PTR_1126d8e98;
  _objc_alloc(PTR_PTR_1126d8e98);
  puVar8 = puStack_138;
  puVar4 = puStack_140;
  puVar3 = puStack_158;
  func_0x00010bff24c0();
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar14);
  _objc_release(puVar8);
  lVar5 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puStack_1c0 = puVar4;
    pcStack_1a8 = FUN_10803a314;
    lStack_1b8 = param_3;
    puStack_1b0 = &stack0xfffffffffffffff0;
    func_0x00010bf2dba0(*(undefined8 *)(lVar5 + 0x28));
    puStack_1c8 = PTR_PTR_1126fc2f0;
    lStack_1d0 = lVar5;
    _objc_msgSendSuper2(&lStack_1d0,PTR_s_dealloc_112525b20);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10803a314; end: 10803a35b; -[SCStoriesTrayDataSource dealloc] */

void FUN_10803a314(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x28));
  puStack_28 = PTR_PTR_1126fc2f0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10803a35c; end: 10803a373; -[SCStoriesTrayDataSource _enablePrivateStoryRecencyRanking] */

void FUN_10803a35c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110ecfc58,0,0);
  return;
}



/* Entry: 10803a374; end: 10803a38b; -[SCStoriesTrayDataSource _enableCommunityStories] */

void FUN_10803a374(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110ecfc78,0,0);
  return;
}



/* Entry: 10803a38c; end: 10803a3a3; -[SCStoriesTrayDataSource _enablePublicStoryOrdering] */

void FUN_10803a38c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110ecfc98,0,0);
  return;
}



/* Entry: 10803a3a4; end: 10803a3ab; -[SCStoriesTrayDataSource _impalaPublicStoryAfterMyStoryEnabled] */

undefined8 FUN_10803a3a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain();
  uVar2 = uVar1;
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110de6218,0,0);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10803a3ac; end: 10803a49b; -[SCStoriesTrayDataSource _updateCustomStories] */

void FUN_10803a3ac(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c1055a0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10803a49c; end: 10803a4e3;  */

void FUN_10803a49c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32900();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10803a4e4; end: 10803a58f; -[SCStoriesTrayDataSource _handleUpdatePostableCustomStories:] */

void FUN_10803a4e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be08f20();
  uVar2 = param_3;
  if ((int)lVar1 != 0) {
    _objc_retain(param_3);
    _objc_retain(&PTR___NSConcreteGlobalBlock_110aca118);
    func_0x00010c246ca0(param_3,param_2,&PTR___NSConcreteGlobalBlock_110aca118);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(&PTR___NSConcreteGlobalBlock_110aca118);
    _objc_release(param_3);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  _objc_retain(uVar2);
  _objc_release(uVar3);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10803a590; end: 10803a593; -[SCStoriesTrayDataSource didUpdateCustomStoriesWithPublicationIds:] */

void FUN_10803a590(void)

{
  return;
}



/* Entry: 10803a594; end: 10803a597; -[SCStoriesTrayDataSource didUpdatePostableStories] */

void FUN_10803a594(void)

{
  return;
}



/* Entry: 10803a598; end: 10803a5d7; -[SCStoriesTrayDataSource _shareAnonymouslySpotlightEnabled] */

undefined8 FUN_10803a598(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdc480();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10803a5d8; end: 10803a617; -[SCStoriesTrayDataSource _shareAnonymouslySnapMapEnabled] */

undefined8 FUN_10803a5d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdc480();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10803a618; end: 10803a673; -[SCStoriesTrayDataSource _spotlightSubtext] */

void FUN_10803a618(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c073920();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    func_0x000108f5836c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000108f583e4();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10803a674; end: 10803a677; -[SCStoriesTrayDataSource _snapMapSubtext] */

void FUN_10803a674(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f0f778;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110f0f778,
                      &PTR____CFConstantStringClassReference_110f0f278,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10803a678; end: 10803a68f; -[SCStoriesTrayDataSource _generateShareAnonymouslyMetadata] */

void FUN_10803a678(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0cc8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c4ea8,PTR_s_metadataWithProfileIdProvider_fe_112610c40,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x98));
  return;
}



/* Entry: 10803a690; end: 10803a703; -[SCStoriesTrayDataSource automaticallyCreateHighlight] */

uint FUN_10803a690(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0824a0();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c239b40();
  _objc_release(uVar3);
  return ((uint)uVar2 ^ 1) & (uint)uVar1;
}



/* Entry: 10803a704; end: 10803a75f; -[SCStoriesTrayDataSource _myStoryTitleText] */

void FUN_10803a704(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25aac0();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    func_0x000108f57dfc();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000108f5923c();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10803a760; end: 10803a7e3; -[SCStoriesTrayDataSource _myStorySubtitleText] */

void FUN_10803a760(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25aac0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    if (lVar2 == 2) {
      func_0x000108f591c4();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (*(char *)(param_1 + 0x88) == '\x01') {
      func_0x000108f581ec();
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10803a7e4; end: 10803a8d3; -[SCStoriesTrayDataSource .cxx_destruct] */

void FUN_10803a7e4(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10803a8d4; end: 10803a923; -[SCStoriesTraySendButton initWithFrame:] */

undefined1 * FUN_10803a8d4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fc2f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bea9ce0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10803a924; end: 10803ad27; -[SCStoriesTraySendButton _setUpViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803a924(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar11 = (long)_DAT_1127737ec;
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  _objc_release(uVar10);
  ppuVar2 = &PTR____CFConstantStringClassReference_110dc2298;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc2298,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar11));
  _objc_release(ppuVar2);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar11));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar11));
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  lVar12 = (long)_DAT_1127737f0;
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar1;
  _objc_release(uVar10);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c23bb80(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar12));
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar12));
  func_0x00010befbb60(param_1);
  func_0x00010befbb60(param_1);
  puStack_e8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  uStack_b0 = uVar10;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_b8 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar11);
  uStack_c0 = uVar10;
  uStack_a8 = uVar10;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  uStack_c8 = uVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lStack_d0 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  uStack_d8 = uVar4;
  uStack_a0 = uVar4;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  uStack_e0 = uVar10;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lStack_f0 = lVar3;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar11);
  uStack_f8 = uVar10;
  uStack_98 = uVar10;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uStack_100 = uVar4;
  func_0x00010bf49420(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar12);
  uStack_108 = uVar4;
  uStack_90 = uVar4;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar12);
  uStack_88 = uVar10;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c1408a0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar12);
  uStack_80 = uVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_e8);
  _objc_release(puVar1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar10);
  _objc_release(lVar3);
  _objc_release(uVar5);
  _objc_release(uStack_108);
  _objc_release(uStack_100);
  _objc_release(uStack_f8);
  _objc_release(lStack_f0);
  _objc_release(uStack_e0);
  _objc_release(uStack_d8);
  _objc_release(lStack_d0);
  _objc_release(uStack_c8);
  _objc_release(uStack_c0);
  _objc_release(lStack_b8);
  _objc_release(uStack_b0);
  func_0x00010c071800(param_1);
  lVar3 = param_1;
  func_0x00010bed5840();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_10803ad28;
  puStack_138 = PTR_PTR_1126fc2f8;
  lStack_140 = lVar3;
  uStack_130 = uVar9;
  lStack_128 = param_1;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_140,PTR_s_setEnabled__112642f38);
  func_0x00010bed5840(lVar3);
  return;
}



/* Entry: 10803ad28; end: 10803ad77; -[SCStoriesTraySendButton setEnabled:] */

void FUN_10803ad28(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fc2f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setEnabled__112642f38);
  func_0x00010bed5840(param_1);
  return;
}



/* Entry: 10803ad78; end: 10803ae57; -[SCStoriesTraySendButton _updateColorsForEnabledState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803ad78(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (param_3 == 0) {
    uVar3 = 0x6f;
  }
  else {
    uVar3 = 0x6a;
    func_0x00010b83340c(0x6a);
  }
  func_0x00010c23ba80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010b88a460();
  func_0x00010b833398(0xc4,uVar3,puVar1,2 < lRam00000001138466f0);
  func_0x00010c23ba80(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_1127737ec));
  func_0x00010c216160(*(undefined8 *)(param_1 + _DAT_1127737f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10803ae58; end: 10803ae67; -[SCStoriesTraySendButton setTypeStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803ae58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21ad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127737ec),PTR_s_setTypeStyle__112664568);
  return;
}



/* Entry: 10803ae68; end: 10803ae77; -[SCStoriesTraySendButton quickPostTrayRefreshEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10803ae68(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127737e8);
}



/* Entry: 10803ae78; end: 10803ae87; -[SCStoriesTraySendButton setQuickPostTrayRefreshEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803ae78(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127737e8) = param_3;
  return;
}



/* Entry: 10803ae88; end: 10803aec7; -[SCStoriesTraySendButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803ae88(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127737f0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127737ec,0);
  return;
}



/* Entry: 10803aec8; end: 10803af7f; -[SCStoriesTrayViewController initWithUserSession:snapchattersDataFetcher:customStoriesDataFetcher:customStoriesDataMutator:snapProProfilesProvider:snapProUserProfileIdProvider:snapchatterPublicInfoFetcher:snapProPreferencesManager:previewTooltipsProvider:mediaSupportsSpotlightSection:circumstanceEngine:complianceEngine:featureSettingsService:viewController:ourStoriesOnboardingManager:ourStoriesAttributionManager:bitmojiSelfieFetcher:bitmojiSelfieRequest:preselectedPublicationIds:topicsCollection:customStoriesOnboardingPresenter:webBrowsingScopeExposer:storyPrivacySettingManager:quickPostTooltipsService:sendToOnboardingScopeExposer:hideSnapMap:valdiRuntimeProvider:quickPostTrayRefreshEnabled:quickPostPreselectRefreshEnabled:snapSource:includePublicStories:resourceDownloader:performer:spotlightAutoShareService:creatorInfoProvider:] */

void FUN_10803aec8(void)

{
  func_0x00010c05e6a0();
  return;
}



/* Entry: 10803af80; end: 10803b9ab; -[SCStoriesTrayViewController initWithUserSession:snapchattersDataFetcher:customStoriesDataFetcher:customStoriesDataMutator:snapProProfilesProvider:snapProUserProfileIdProvider:snapchatterPublicInfoFetcher:snapProPreferencesManager:previewTooltipsProvider:mediaSupportsSpotlightSection:circumstanceEngine:complianceEngine:featureSettingsService:viewController:ourStoriesOnboardingManager:ourStoriesAttributionManager:bitmojiSelfieFetcher:bitmojiSelfieRequest:preselectedPublicationIds:topicsCollection:customStoriesOnboardingPresenter:webBrowsingScopeExposer:webBrowsingScopeServices:storyPrivacySettingManager:quickPostTooltipsService:sendToOnboardingScopeExposer:sendToOnboardingScopeServices:hideSnapMap:valdiRuntimeProvider:quickPostTrayRefreshEnabled:quickPostPreselectRefreshEnabled:snapSource:includePublicStories:resourceDownloader:performer:spotlightAutoShareService:creatorInfoProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10803af80(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined *param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
             undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined4 param_31,undefined4 param_32,
             undefined8 param_33,undefined4 param_34,undefined4 param_35,undefined8 param_36,
             undefined1 param_37,undefined4 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  long lVar38;
  undefined *puVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  undefined8 uVar44;
  undefined8 *puStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 *puStack_490;
  undefined8 *puStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 *puStack_470;
  undefined8 *puStack_460;
  undefined8 *puStack_458;
  undefined8 *puStack_450;
  undefined8 *puStack_448;
  undefined8 *puStack_440;
  undefined8 *puStack_438;
  undefined8 *puStack_430;
  undefined8 *puStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 *puStack_410;
  undefined8 *puStack_408;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain();
  _objc_retain();
  _objc_retain(param_29);
  _objc_retain();
  _objc_retain(param_33);
  _objc_retain();
  _objc_retain(param_40);
  _objc_retain();
  _objc_retain(param_42);
  puStack_f8 = PTR_PTR_1126fc300;
  puVar1 = &uStack_100;
  uStack_100 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar42 = (long)_DAT_1127737f4;
    _objc_retain(param_41);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar42);
    *(undefined8 *)((long)puVar1 + lVar42) = param_41;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127737f8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127737f8) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127737fc);
    *(undefined **)((long)puVar1 + (long)_DAT_1127737fc) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112773800) = 1;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112773804) = (undefined1)param_34;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112773808) = param_34._1_1_;
    lVar42 = (long)_DAT_11277380c;
    _objc_retain(param_33);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar42);
    *(undefined8 *)((long)puVar1 + lVar42) = param_33;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b10e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112773810);
    *(undefined **)((long)puVar1 + (long)_DAT_112773810) = puVar3;
    _objc_release(uVar2);
    lVar38 = (long)_DAT_112773814;
    *(undefined8 *)((long)puVar1 + lVar38) = param_36;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112773818) = param_37;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277381c) = 0;
    puVar4 = param_3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112773820);
    *(undefined8 **)((long)puVar1 + (long)_DAT_112773820) = puVar4;
    _objc_release(uVar2);
    lVar42 = (long)_DAT_112773824;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar42);
    *(long *)((long)puVar1 + lVar42) = param_7;
    _objc_release(uVar2);
    func_0x00010c229a20(puVar1);
    func_0x00010c189400(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112773828);
    *(undefined **)((long)puVar1 + (long)_DAT_112773828) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277382c);
    *(undefined **)((long)puVar1 + (long)_DAT_11277382c) = puVar3;
    _objc_release(uVar2);
    lVar41 = (long)_DAT_112773830;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar41);
    *(undefined8 *)((long)puVar1 + lVar41) = param_14;
    _objc_release(uVar2);
    lVar42 = (long)_DAT_112773834;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar42);
    *(undefined8 *)((long)puVar1 + lVar42) = param_15;
    _objc_release(uVar2);
    lVar42 = param_7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar40 = lVar42;
    func_0x00010c080fe0();
    _objc_release(lVar42);
    if ((int)lVar40 == 0) {
      puVar3 = param_8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = param_8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010c082880();
      _objc_release(puVar3);
      uVar7 = *(ulong *)((long)puVar1 + lVar41);
      func_0x000108f482e0();
      if ((uVar7 & 1) == 0) {
        puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
        _objc_alloc();
        func_0x00010bff4000();
        puVar6 = puVar3;
        func_0x00010c174bc0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar42 = param_7;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar41 = lVar42;
        func_0x00010c0b7fc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar42);
        lVar42 = lVar41;
        func_0x00010bf52a60();
        lVar40 = lRam0000000000000000;
        while (lVar42 != 0) {
          lVar43 = 0;
          do {
            if (lRam0000000000000000 != lVar40) {
              _objc_enumerationMutation(lVar41);
            }
            uVar44 = *(undefined8 *)(lVar43 * 8);
            uVar2 = uVar44;
            func_0x00010c074e40();
            if ((int)uVar2 != 0) {
              func_0x00010c1164a0();
              _objc_retainAutoreleasedReturnValue();
              uVar2 = uVar44;
              func_0x00010c070540();
              _objc_release(uVar44);
              if ((int)uVar2 == 0) {
                _objc_release(lVar41);
                if ((((uint)(puVar5 != (undefined *)0x0) & (uint)puVar6) != 1) ||
                   (*(long *)((long)puVar1 + lVar38) != 8)) goto LAB_10803b624;
                puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
                _objc_alloc();
                func_0x00010bff4000();
                goto LAB_10803b648;
              }
            }
            lVar43 = lVar43 + 1;
          } while (lVar42 != lVar43);
          lVar42 = lVar41;
          func_0x00010bf52a60();
        }
        _objc_release(lVar41);
LAB_10803b624:
        puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
        _objc_alloc();
        func_0x00010bff4000();
LAB_10803b648:
        puVar6 = puVar3;
        func_0x00010c174bc0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar39 = *(undefined **)((long)puVar1 + (long)_DAT_112773838);
      *(undefined **)((long)puVar1 + (long)_DAT_112773838) = puVar6;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
      _objc_alloc();
      func_0x00010bff4000();
      puVar3 = param_8;
      func_0x00010c269d40(param_8);
      _objc_retainAutoreleasedReturnValue();
      puVar39 = puVar3;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c174bc0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112773838);
      *(undefined **)((long)puVar1 + (long)_DAT_112773838) = puVar6;
      _objc_release(uVar2);
    }
    _objc_release(puVar39);
    _objc_release(puVar3);
    _objc_release(puVar5);
    lVar42 = (long)_DAT_11277383c;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar42);
    *(undefined8 *)((long)puVar1 + lVar42) = param_18;
    _objc_release(uVar2);
    lVar42 = (long)_DAT_112773840;
    _objc_retain(param_19);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar42);
    *(undefined8 *)((long)puVar1 + lVar42) = param_19;
    _objc_release(uVar2);
    lVar42 = (long)_DAT_112773844;
    _objc_retain(param_20);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar42);
    *(undefined8 *)((long)puVar1 + lVar42) = param_20;
    _objc_release(uVar2);
    lVar42 = (long)_DAT_112773848;
    _objc_retain(param_21);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar42);
    *(undefined8 *)((long)puVar1 + lVar42) = param_21;
    _objc_release(uVar2);
    lVar42 = (long)_DAT_11277384c;
    _objc_retain(param_28);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar42);
    *(undefined8 *)((long)puVar1 + lVar42) = param_28;
    _objc_release(uVar2);
    lVar42 = (long)_DAT_112773850;
    _objc_retain(param_39);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar42);
    *(undefined8 *)((long)puVar1 + lVar42) = param_39;
    _objc_release(uVar2);
    lVar42 = (long)_DAT_112773854;
    _objc_retain(param_40);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar42);
    *(undefined8 *)((long)puVar1 + lVar42) = param_40;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d8ea0;
    _objc_alloc();
    func_0x00010c05e680();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112773858);
    *(undefined **)((long)puVar1 + (long)_DAT_112773858) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d8b68;
    _objc_alloc();
    func_0x00010c007f80();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277385c);
    *(undefined **)((long)puVar1 + (long)_DAT_11277385c) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_33);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
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
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  lVar42 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar40 = (long)_DAT_112773860;
  uVar2 = *(undefined8 *)((long)param_3 + lVar40);
  *(undefined **)((long)param_3 + lVar40) = puVar3;
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)((long)param_3 + lVar40));
  func_0x00010c189840(*(undefined8 *)((long)param_3 + lVar40));
  func_0x00010c160fc0(*(undefined8 *)((long)param_3 + lVar40));
  lVar38 = (long)_DAT_112773804;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)((long)param_3 + lVar40));
  _objc_release(puVar3);
  func_0x00010c1fce40(*(undefined8 *)((long)param_3 + lVar40));
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if ((*(byte *)((long)param_3 + lVar38) & 1) == 0) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c23bb00();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1fcde0(*(undefined8 *)((long)param_3 + lVar40));
  _objc_release(puVar3);
  func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                      *(undefined8 *)((long)param_3 + lVar40));
  func_0x00010c1f7b20(*(undefined8 *)((long)param_3 + lVar40));
  func_0x00010c1f7e20(*(undefined8 *)((long)param_3 + lVar40));
  func_0x00010c2026e0(*(undefined8 *)((long)param_3 + lVar40));
  func_0x00010c1738c0(*(undefined8 *)((long)param_3 + lVar40));
  func_0x00010c219b60(*(undefined8 *)((long)param_3 + lVar40));
  func_0x00010c167680(*(undefined8 *)((long)param_3 + lVar40));
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if ((*(byte *)((long)param_3 + lVar38) & 1) == 0) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c23bb00();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c16e440(*(undefined8 *)((long)param_3 + lVar40));
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)((long)param_3 + lVar40);
  _objc_opt_class(PTR_PTR_1126d8ea8);
  func_0x00010c125fe0(uVar2);
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  func_0x00010c219b60();
  puVar4 = (undefined8 *)PTR_PTR_1126aea58;
  _objc_opt_new();
  func_0x00010c21ad00();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar4);
  _objc_release(puVar3);
  func_0x000108f590a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar4);
  _objc_release(puVar3);
  func_0x00010c219b60(puVar4);
  puVar3 = PTR_PTR_1126d8eb0;
  _objc_opt_new();
  lVar41 = (long)_DAT_112773864;
  uVar2 = *(undefined8 *)((long)param_3 + lVar41);
  *(undefined **)((long)param_3 + lVar41) = puVar3;
  _objc_release(uVar2);
  func_0x00010c21ad00(*(undefined8 *)((long)param_3 + lVar41));
  func_0x00010c219b60(*(undefined8 *)((long)param_3 + lVar41));
  func_0x00010c195460(*(undefined8 *)((long)param_3 + lVar41));
  uVar2 = *(undefined8 *)((long)param_3 + lVar41);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4039000000000000);
  _objc_release(uVar2);
  func_0x00010befbd60(*(undefined8 *)((long)param_3 + lVar41));
  if ((*(byte *)((long)param_3 + lVar38) & 1) == 0) {
    puVar8 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar8);
    func_0x00010befbb60(puVar1);
  }
  puVar8 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar8);
  puVar8 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar8);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puStack_458 = param_3;
  puStack_408 = param_3;
  puStack_430 = param_3;
  if (*(char *)((long)param_3 + lVar38) == '\x01') {
    puStack_428 = *(undefined8 **)((long)param_3 + lVar40);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_480 = puStack_458;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_4a0 = puStack_428;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = *(undefined8 **)((long)param_3 + lVar40);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_410 = puStack_408;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_418 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_420 = *(undefined8 **)((long)param_3 + lVar40);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puStack_430;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_438 = puStack_420;
    func_0x00010bf493a0(puStack_420,puVar11,puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = *(undefined8 **)((long)param_3 + lVar40);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puStack_440 = *(undefined8 **)((long)param_3 + lVar41);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_448 = puVar9;
    func_0x00010bf493c0(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    puStack_450 = *(undefined8 **)((long)param_3 + lVar41);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puStack_460 = param_3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puStack_460;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puStack_470 = puStack_450;
    func_0x00010bf493c0(0xc03e000000000000,puStack_450,puVar12,puVar12);
    _objc_retainAutoreleasedReturnValue();
    puStack_478 = *(undefined8 **)((long)param_3 + lVar41);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_488 = param_3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puStack_488;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_490 = puStack_478;
    func_0x00010bf493c0(0x4034000000000000,puStack_478,puVar13,puVar13);
    _objc_retainAutoreleasedReturnValue();
    puStack_498 = *(undefined8 **)((long)param_3 + lVar41);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_4a8 = param_3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puStack_4a8;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_4b0 = puStack_498;
    func_0x00010bf493c0(0xc034000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = *(undefined8 **)((long)param_3 + lVar41);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar10;
    func_0x00010bf49420(0x4049000000000000);
    _objc_retainAutoreleasedReturnValue();
    puStack_4b8 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
  }
  else {
    puStack_428 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_480 = puStack_458;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_4a0 = puStack_428;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_410 = puStack_408;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_418 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_420 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puStack_430;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_438 = puStack_420;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar4;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puStack_440 = puVar9;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    puStack_448 = puVar4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_450 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_460 = puStack_448;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar4;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puStack_470 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puStack_478 = puVar12;
    func_0x00010bf493c0(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    puStack_488 = puVar4;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_490 = puStack_488;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puStack_498 = puVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_4a8 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puStack_498;
    func_0x00010bf493c0(0xc030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puStack_4b0 = *(undefined8 **)((long)param_3 + lVar40);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar10;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_4b8 = puStack_4b0;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)param_3 + lVar40);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = param_3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)((long)param_3 + lVar40);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar44 = uVar19;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)((long)param_3 + lVar40);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)((long)param_3 + lVar41);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar21;
    func_0x00010bf493c0(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar24 = *(undefined8 *)((long)param_3 + lVar41);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = param_3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar25;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar24;
    func_0x00010bf493c0(0xc03e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar28 = *(undefined8 *)((long)param_3 + lVar41);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar29 = param_3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar30 = puVar29;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar31 = uVar28;
    func_0x00010bf493c0(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar32 = *(undefined8 *)((long)param_3 + lVar41);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar33 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar34 = puVar33;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar35 = uVar32;
    func_0x00010bf493c0(0xc034000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar36 = *(undefined8 *)((long)param_3 + lVar41);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar37 = uVar36;
    func_0x00010bf49420(0x4049000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar5);
    _objc_release(uVar37);
    _objc_release(uVar36);
    _objc_release(uVar35);
    _objc_release(puVar34);
    _objc_release(puVar33);
    _objc_release(uVar32);
    _objc_release(uVar31);
    _objc_release(puVar30);
    _objc_release(puVar29);
    _objc_release(uVar28);
    _objc_release(uVar27);
    _objc_release(puVar26);
    _objc_release(puVar25);
    _objc_release(uVar24);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar44);
    _objc_release(puVar20);
    _objc_release(uVar19);
    _objc_release(uVar2);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(uVar16);
  }
  _objc_release(puStack_4b8);
  _objc_release(puVar15);
  _objc_release(puVar10);
  _objc_release(puStack_4b0);
  _objc_release(puVar14);
  _objc_release(puStack_4a8);
  _objc_release(puStack_498);
  _objc_release(puStack_490);
  _objc_release(puVar13);
  _objc_release(puStack_488);
  _objc_release(puStack_478);
  _objc_release(puStack_470);
  _objc_release(puVar12);
  _objc_release(puStack_460);
  _objc_release(puStack_450);
  _objc_release(puStack_448);
  _objc_release(puStack_440);
  _objc_release(puVar9);
  _objc_release(puStack_438);
  _objc_release(puVar11);
  _objc_release(puStack_430);
  _objc_release(puStack_420);
  _objc_release(puStack_418);
  _objc_release(puStack_410);
  _objc_release(puStack_408);
  _objc_release(puVar8);
  _objc_release(puStack_4a0);
  _objc_release(puStack_480);
  _objc_release(puStack_458);
  _objc_release(puStack_428);
  _objc_release(puVar4);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar42) {
    return puVar1;
  }
  ___stack_chk_fail();
  return (undefined8 *)0x1;
}



/* Entry: 10803b9ac; end: 10803c787; -[SCStoriesTrayViewController setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10803b9ac(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined *puVar35;
  long lVar36;
  undefined8 uVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  
  lVar36 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar38 = (long)_DAT_112773860;
  uVar37 = *(undefined8 *)(param_1 + lVar38);
  *(undefined **)(param_1 + lVar38) = puVar1;
  _objc_release(uVar37);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar38));
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar38));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar38));
  lVar40 = (long)_DAT_112773804;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar38));
  _objc_release(puVar1);
  func_0x00010c1fce40(*(undefined8 *)(param_1 + lVar38));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if ((param_1[lVar40] & 1) == 0) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c23bb00();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1fcde0(*(undefined8 *)(param_1 + lVar38));
  _objc_release(puVar1);
  func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                      *(undefined8 *)(param_1 + lVar38));
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar38));
  func_0x00010c1f7e20(*(undefined8 *)(param_1 + lVar38));
  func_0x00010c2026e0(*(undefined8 *)(param_1 + lVar38));
  func_0x00010c1738c0(*(undefined8 *)(param_1 + lVar38));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar38));
  func_0x00010c167680(*(undefined8 *)(param_1 + lVar38));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if ((param_1[lVar40] & 1) == 0) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c23bb00();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar38));
  _objc_release(puVar1);
  uVar37 = *(undefined8 *)(param_1 + lVar38);
  _objc_opt_class(PTR_PTR_1126d8ea8);
  func_0x00010c125fe0(uVar37);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  func_0x00010c219b60();
  puVar2 = PTR_PTR_1126aea58;
  _objc_opt_new();
  func_0x00010c21ad00();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar2);
  _objc_release(puVar3);
  func_0x000108f590a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(puVar2);
  _objc_release(puVar3);
  func_0x00010c219b60(puVar2);
  puVar3 = PTR_PTR_1126d8eb0;
  _objc_opt_new();
  lVar39 = (long)_DAT_112773864;
  uVar37 = *(undefined8 *)(param_1 + lVar39);
  *(undefined **)(param_1 + lVar39) = puVar3;
  _objc_release(uVar37);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar39));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar39));
  func_0x00010c195460(*(undefined8 *)(param_1 + lVar39));
  uVar37 = *(undefined8 *)(param_1 + lVar39);
  func_0x00010c08c0e0(uVar37);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4039000000000000);
  _objc_release(uVar37);
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar39));
  if ((param_1[lVar40] & 1) == 0) {
    puVar3 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    func_0x00010befbb60(puVar1);
  }
  puVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar3);
  puVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puStack_188 = param_1;
  puStack_138 = param_1;
  puStack_160 = param_1;
  if (param_1[lVar40] == '\x01') {
    puStack_158 = *(undefined **)(param_1 + lVar38);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_1b0 = puStack_188;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_1d0 = puStack_158;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = *(undefined **)(param_1 + lVar38);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_140 = puStack_138;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_148 = puVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_150 = *(undefined **)(param_1 + lVar38);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puStack_160;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_168 = puStack_150;
    func_0x00010bf493a0(puStack_150,puVar7,puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = *(undefined **)(param_1 + lVar38);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puStack_170 = *(undefined **)(param_1 + lVar39);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_178 = puVar5;
    func_0x00010bf493c0(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    puStack_180 = *(undefined **)(param_1 + lVar39);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puStack_190 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puStack_190;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puStack_1a0 = puStack_180;
    func_0x00010bf493c0(0xc03e000000000000,puStack_180,puVar8,puVar8);
    _objc_retainAutoreleasedReturnValue();
    puStack_1a8 = *(undefined **)(param_1 + lVar39);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_1b8 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puStack_1b8;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_1c0 = puStack_1a8;
    func_0x00010bf493c0(0x4034000000000000,puStack_1a8,puVar9,puVar9);
    _objc_retainAutoreleasedReturnValue();
    puStack_1c8 = *(undefined **)(param_1 + lVar39);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_1d8 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puStack_1d8;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_1e0 = puStack_1c8;
    func_0x00010bf493c0(0xc034000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = *(undefined **)(param_1 + lVar39);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar6;
    func_0x00010bf49420(0x4049000000000000);
    _objc_retainAutoreleasedReturnValue();
    puStack_1e8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
  }
  else {
    puStack_158 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_1b0 = puStack_188;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_1d0 = puStack_158;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_140 = puStack_138;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_148 = puVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_150 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puStack_160;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_168 = puStack_150;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puStack_170 = puVar5;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    puStack_178 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_180 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_190 = puStack_178;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puStack_1a0 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puStack_1a8 = puVar8;
    func_0x00010bf493c0(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    puStack_1b8 = puVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_1c0 = puStack_1b8;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puStack_1c8 = puVar2;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_1d8 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puStack_1c8;
    func_0x00010bf493c0(0xc030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puStack_1e0 = *(undefined **)(param_1 + lVar38);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar6;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_1e8 = puStack_1e0;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + lVar38);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar37 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + lVar38);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_1 + lVar38);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(param_1 + lVar39);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar18;
    func_0x00010bf493c0(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(param_1 + lVar39);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar22;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar21;
    func_0x00010bf493c0(0xc03e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar25 = *(undefined8 *)(param_1 + lVar39);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = puVar26;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = uVar25;
    func_0x00010bf493c0(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar29 = *(undefined8 *)(param_1 + lVar39);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar30 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar31 = puVar30;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar32 = uVar29;
    func_0x00010bf493c0(0xc034000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar33 = *(undefined8 *)(param_1 + lVar39);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar34 = uVar33;
    func_0x00010bf49420(0x4049000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar35 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar35);
    _objc_release(uVar34);
    _objc_release(uVar33);
    _objc_release(uVar32);
    _objc_release(puVar31);
    _objc_release(puVar30);
    _objc_release(uVar29);
    _objc_release(uVar28);
    _objc_release(puVar27);
    _objc_release(puVar26);
    _objc_release(uVar25);
    _objc_release(uVar24);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(puVar16);
    _objc_release(uVar15);
    _objc_release(uVar37);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(uVar12);
  }
  _objc_release(puStack_1e8);
  _objc_release(puVar11);
  _objc_release(puVar6);
  _objc_release(puStack_1e0);
  _objc_release(puVar10);
  _objc_release(puStack_1d8);
  _objc_release(puStack_1c8);
  _objc_release(puStack_1c0);
  _objc_release(puVar9);
  _objc_release(puStack_1b8);
  _objc_release(puStack_1a8);
  _objc_release(puStack_1a0);
  _objc_release(puVar8);
  _objc_release(puStack_190);
  _objc_release(puStack_180);
  _objc_release(puStack_178);
  _objc_release(puStack_170);
  _objc_release(puVar5);
  _objc_release(puStack_168);
  _objc_release(puVar7);
  _objc_release(puStack_160);
  _objc_release(puStack_150);
  _objc_release(puStack_148);
  _objc_release(puStack_140);
  _objc_release(puStack_138);
  _objc_release(puVar4);
  _objc_release(puStack_1d0);
  _objc_release(puStack_1b0);
  _objc_release(puStack_188);
  _objc_release(puStack_158);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar36) {
    return puVar1;
  }
  ___stack_chk_fail();
  return (undefined *)0x1;
}



/* Entry: 10803c788; end: 10803c78f; -[SCStoriesTrayViewController tray:canUseGestureToExpandOrCollapse:] */

undefined8 FUN_10803c788(void)

{
  return 1;
}



/* Entry: 10803c790; end: 10803c7e7; -[SCStoriesTrayViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803c790(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fc300;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010be04c20(param_1);
  *(undefined1 *)(param_1 + _DAT_112773868) = 1;
  return;
}



/* Entry: 10803c7e8; end: 10803c8f7; -[SCStoriesTrayViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803c7e8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126fc300;
  lStack_70 = param_1;
  _objc_msgSendSuper2(&lStack_70,PTR_s_viewWillDisappear__112685438);
  lVar2 = (long)_DAT_11277386c;
  lVar3 = param_1 + lVar2;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bf75280();
  _objc_release(lVar3);
  lVar3 = (long)_DAT_112773870;
  if ((*(byte *)(param_1 + lVar3) & 1) == 0) {
    lVar2 = param_1 + lVar2;
    _objc_loadWeakRetained(lVar2);
    lVar1 = param_1;
    func_0x00010bec5160(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8e000(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar2);
    *(undefined1 *)(param_1 + lVar3) = 1;
  }
  return;
}



/* Entry: 10803c8f8; end: 10803ca4b; -[SCStoriesTrayViewController _storyTypesFromSelectedRows] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803c8f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 unaff_x21;
  undefined *unaff_x22;
  long lVar13;
  long unaff_x23;
  long lVar14;
  undefined **unaff_x24;
  long lVar15;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [128];
  long lStack_168;
  undefined **ppuStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar12 = *(long *)(param_1 + _DAT_112773828);
  _objc_retain(lVar12);
  lVar2 = lVar12;
  func_0x00010bf52a60(lVar12,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar2 != 0) {
    unaff_x23 = *plStack_110;
    unaff_x24 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    do {
      lVar15 = 0;
      do {
        if (*plStack_110 != unaff_x23) {
          _objc_enumerationMutation(lVar12);
        }
        unaff_x22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar3 = *(undefined8 *)(lStack_118 + lVar15 * 8);
        func_0x00010c25b720(uVar3);
        func_0x00010c0df840(unaff_x22,param_2,uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_2,unaff_x22);
        _objc_release(unaff_x22);
        lVar15 = lVar15 + 1;
      } while (lVar2 != lVar15);
      lVar2 = lVar12;
      func_0x00010bf52a60(lVar12,param_2,&uStack_120,auStack_d8,0x10);
      unaff_x21 = 0;
    } while (lVar2 != 0);
  }
  lVar2 = lVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_10803ca4c;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lVar15 = *(long *)(lVar2 + _DAT_112773828);
  ppuStack_160 = unaff_x24;
  lStack_158 = unaff_x23;
  puStack_150 = unaff_x22;
  uStack_148 = unaff_x21;
  lStack_140 = lVar12;
  puStack_138 = puVar1;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(lVar15);
  lVar12 = lVar15;
  func_0x00010bf52a60(lVar15,param_2,&uStack_230,auStack_1e8,0x10);
  if (lVar12 != 0) {
    lVar13 = *plStack_220;
    do {
      lVar14 = 0;
      do {
        if (*plStack_220 != lVar13) {
          _objc_enumerationMutation(lVar15);
        }
        lVar4 = *(long *)(lStack_228 + lVar14 * 8);
        func_0x00010c25b720();
        if (lVar4 == 5) {
          _objc_release(lVar15);
          lVar15 = *(long *)(lVar2 + _DAT_11277385c);
          func_0x00010c239460();
          goto LAB_10803cb38;
        }
        lVar14 = lVar14 + 1;
      } while (lVar12 != lVar14);
      lVar12 = lVar15;
      func_0x00010bf52a60(lVar15,param_2,&uStack_230,auStack_1e8,0x10);
    } while (lVar12 != 0);
  }
  _objc_release();
LAB_10803cb38:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c195460(*(undefined8 *)(lVar15 + _DAT_112773864),param_2,0);
  uVar5 = *(ulong *)(lVar15 + _DAT_112773858);
  func_0x00010bfca020(uVar5,param_2,*(undefined8 *)(lVar15 + _DAT_112773828));
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar15;
  func_0x00010bec5160();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_112773800;
  *(undefined8 *)(lVar15 + lVar13) = 2;
  lVar2 = lVar15 + _DAT_11277386c;
  _objc_loadWeakRetained(lVar2);
  uVar6 = uVar5;
  func_0x00010befc400();
  uVar7 = uVar5;
  func_0x00010bfa09c0(uVar5);
  uVar8 = uVar5;
  func_0x00010bfa0920(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar5;
  func_0x00010c0ee420(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar5;
  func_0x00010bf620e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar5;
  func_0x00010bf25220(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf78b40(lVar2,param_2,uVar6 & 0xffffffff,uVar7,uVar8,uVar9,uVar10,uVar11,
                      *(undefined8 *)(lVar15 + _DAT_112773874),
                      *(undefined8 *)(lVar15 + _DAT_1127737f8),
                      *(undefined8 *)(lVar15 + _DAT_1127737fc),lVar12,
                      *(undefined8 *)(lVar15 + _DAT_112773878),4,*(undefined8 *)(lVar15 + lVar13));
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar2);
  *(undefined1 *)(lVar15 + _DAT_112773870) = 1;
  _objc_release(lVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 10803ca4c; end: 10803cb6b; -[SCStoriesTrayViewController _displayPrivateStoryPreselectionOnboardingIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803ca4c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar10 = *(long *)(param_1 + _DAT_112773828);
  _objc_retain(lVar10);
  lVar1 = lVar10;
  func_0x00010bf52a60(lVar10,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar1 != 0) {
    lVar11 = *plStack_100;
    do {
      lVar12 = 0;
      do {
        if (*plStack_100 != lVar11) {
          _objc_enumerationMutation(lVar10);
        }
        lVar2 = *(long *)(lStack_108 + lVar12 * 8);
        func_0x00010c25b720();
        if (lVar2 == 5) {
          _objc_release(lVar10);
          lVar10 = *(long *)(param_1 + _DAT_11277385c);
          func_0x00010c239460();
          goto LAB_10803cb38;
        }
        lVar12 = lVar12 + 1;
      } while (lVar1 != lVar12);
      lVar1 = lVar10;
      func_0x00010bf52a60(lVar10,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
LAB_10803cb38:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c195460(*(undefined8 *)(lVar10 + _DAT_112773864),param_2,0);
  uVar3 = *(ulong *)(lVar10 + _DAT_112773858);
  func_0x00010bfca020(uVar3,param_2,*(undefined8 *)(lVar10 + _DAT_112773828));
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bec5160();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_112773800;
  *(undefined8 *)(lVar10 + lVar12) = 2;
  lVar1 = lVar10 + _DAT_11277386c;
  _objc_loadWeakRetained(lVar1);
  uVar4 = uVar3;
  func_0x00010befc400();
  uVar5 = uVar3;
  func_0x00010bfa09c0(uVar3);
  uVar6 = uVar3;
  func_0x00010bfa0920(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c0ee420(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010bf620e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010bf25220(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf78b40(lVar1,param_2,uVar4 & 0xffffffff,uVar5,uVar6,uVar7,uVar8,uVar9,
                      *(undefined8 *)(lVar10 + _DAT_112773874),
                      *(undefined8 *)(lVar10 + _DAT_1127737f8),
                      *(undefined8 *)(lVar10 + _DAT_1127737fc),lVar11,
                      *(undefined8 *)(lVar10 + _DAT_112773878),4,*(undefined8 *)(lVar10 + lVar12));
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar1);
  *(undefined1 *)(lVar10 + _DAT_112773870) = 1;
  _objc_release(lVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10803cb6c; end: 10803cd13; -[SCStoriesTrayViewController _sendButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803cb6c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  func_0x00010c195460(*(undefined8 *)(param_1 + _DAT_112773864),param_2,0);
  uVar1 = *(ulong *)(param_1 + _DAT_112773858);
  func_0x00010bfca020(uVar1,param_2,*(undefined8 *)(param_1 + _DAT_112773828));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bec5160();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_112773800;
  *(undefined8 *)(param_1 + lVar10) = 2;
  lVar3 = param_1 + _DAT_11277386c;
  _objc_loadWeakRetained(lVar3);
  uVar4 = uVar1;
  func_0x00010befc400();
  uVar5 = uVar1;
  func_0x00010bfa09c0(uVar1);
  uVar6 = uVar1;
  func_0x00010bfa0920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c0ee420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010bf620e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010bf25220(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf78b40(lVar3,param_2,uVar4 & 0xffffffff,uVar5,uVar6,uVar7,uVar8,uVar9,
                      *(undefined8 *)(param_1 + _DAT_112773874),
                      *(undefined8 *)(param_1 + _DAT_1127737f8),
                      *(undefined8 *)(param_1 + _DAT_1127737fc),lVar2,
                      *(undefined8 *)(param_1 + _DAT_112773878),4,*(undefined8 *)(param_1 + lVar10))
  ;
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar3);
  *(undefined1 *)(param_1 + _DAT_112773870) = 1;
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10803cd14; end: 10803cd6f; -[SCStoriesTrayViewController _isEligibleForCrossPosting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10803cd14(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(char *)(param_1 + _DAT_11277387c) == '\x01') {
    lVar2 = (long)_DAT_1127737f4;
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    func_0x00010c06fa80(uVar1,param_2,1);
    if ((int)uVar1 != 0) {
      uVar1 = *(undefined8 *)(param_1 + lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c07b9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_isQuickPostTrayCrossPostingEnabl_1125fc888)
      ;
      return uVar1;
    }
  }
  return 0;
}



/* Entry: 10803cd70; end: 10803ce6b; -[SCStoriesTrayViewController _isStoryEligibleForCrossPosting:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10803cd70(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c25b720();
  uVar3 = 1;
  if (uVar1 < 8) {
    if ((1L << (uVar1 & 0x3f) & 0xccU) == 0) {
      if (uVar1 == 1) {
        uVar3 = *(undefined8 *)(param_1 + _DAT_1127737f4);
        func_0x00010c06faa0(uVar3);
      }
      else if (uVar1 == 4) {
        lVar4 = *(long *)(param_1 + _DAT_112773858);
        uVar1 = param_3;
        func_0x00010c259c80(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf62540(lVar4,param_2,uVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
        if ((lVar4 == 0) || (lVar2 = lVar4, func_0x00010c27dd80(), lVar2 != 7)) {
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
        _objc_release(lVar4);
      }
    }
    else {
      uVar3 = 0;
    }
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10803ce6c; end: 10803cfc3; -[SCStoriesTrayViewController _updateCrossPostIconsIdEligibleForCrossPosting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803ce6c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar1 = param_1;
  func_0x00010be3fe20();
  lVar8 = (long)_DAT_11277382c;
  lVar2 = *(long *)(param_1 + lVar8);
  func_0x00010bf529e0();
  if (0 < lVar2) {
    lVar2 = 0;
    do {
      puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,lVar2,0);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *(long *)(param_1 + _DAT_112773860);
      func_0x00010bf33b80(lVar4,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 != 0) {
        if ((int)lVar1 == 0) {
          lVar6 = 0;
        }
        else {
          uVar5 = *(undefined8 *)(param_1 + lVar8);
          func_0x00010c0dfd40(uVar5,param_2,lVar2);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = param_1;
          func_0x00010be44400(param_1,param_2,uVar5);
          _objc_release(uVar5);
        }
        func_0x00010c1862c0(lVar4,param_2,lVar6);
        uVar7 = *(undefined8 *)(param_1 + _DAT_112773828);
        uVar5 = *(undefined8 *)(param_1 + lVar8);
        func_0x00010c0dfd40(uVar5,param_2,lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900(uVar7,param_2,uVar5);
        func_0x00010c1fade0(lVar4,param_2,uVar7,0);
        _objc_release(uVar5);
      }
      _objc_release(lVar4);
      _objc_release(puVar3);
      lVar2 = lVar2 + 1;
      lVar4 = *(long *)(param_1 + lVar8);
      func_0x00010bf529e0();
    } while (lVar2 < lVar4);
  }
  return;
}



/* Entry: 10803cfc4; end: 10803d1bf; -[SCStoriesTrayViewController tableView:cellForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803cfc4(double param_1,ulong param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_5);
  func_0x00010bf6e080(param_4,param_3,&PTR____CFConstantStringClassReference_110e22938,param_5);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UITableViewCell_1126afcb8;
    _objc_opt_new(PTR__OBJC_CLASS___UITableViewCell_1126afcb8);
  }
  else {
    func_0x00010c18b5e0(param_4,param_3,param_2);
    lVar8 = (long)_DAT_11277382c;
    uVar5 = *(undefined8 *)(param_2 + lVar8);
    uVar1 = param_5;
    func_0x00010c142240(param_5);
    func_0x00010c0dfd40(uVar5,param_3,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c229d20(param_4,param_3,uVar5);
    _objc_release(uVar5);
    uVar2 = param_2;
    func_0x00010be3fe20();
    if ((uVar2 & 1) == 0) {
      func_0x00010c1862c0(param_4,param_3,0);
    }
    else {
      uVar5 = *(undefined8 *)(param_2 + lVar8);
      uVar1 = param_5;
      func_0x00010c142240(param_5);
      func_0x00010c0dfd40(uVar5,param_3,uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_2;
      func_0x00010be44400(param_2,param_3,uVar5);
      func_0x00010c1862c0(param_4,param_3,uVar2);
      _objc_release(uVar5);
    }
    lVar7 = (long)_DAT_1127737fc;
    lVar4 = *(long *)(param_2 + lVar7);
    func_0x00010bf529e0();
    if (lVar4 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      *(long *)(param_2 + (long)_DAT_112773878) = (long)(param_1 * 1000.0);
      _objc_release(puVar3);
    }
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar6 = *(undefined8 *)(param_2 + lVar7);
    uVar5 = *(undefined8 *)(param_2 + lVar8);
    uVar1 = param_5;
    func_0x00010c142240(param_5);
    func_0x00010c0dfd40(uVar5,param_3,uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010c25b720();
    func_0x00010c0df840(puVar3,param_3,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar6,param_3,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar5);
    _objc_retain(param_4);
    puVar3 = param_4;
  }
  _objc_release(param_4);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10803d1c0; end: 10803d1cf; -[SCStoriesTrayViewController tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803d1c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277382c),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10803d1d0; end: 10803d1d7; -[SCStoriesTrayViewController numberOfSectionsInTableView:] */

undefined8 FUN_10803d1d0(void)

{
  return 1;
}



/* Entry: 10803d1d8; end: 10803d1ff; -[SCStoriesTrayViewController tableView:heightForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10803d1d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x4050800000000000;
  if (*(char *)(param_1 + _DAT_112773804) == '\0') {
    uVar1 = 0x404a000000000000;
  }
  return uVar1;
}



/* Entry: 10803d200; end: 10803d387; -[SCStoriesTrayViewController tableView:didSelectRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803d200(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c142240();
  lVar5 = (long)_DAT_11277382c;
  uVar2 = *(ulong *)(param_1 + lVar5);
  func_0x00010bf529e0();
  if (uVar1 < uVar2) {
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c142240(param_4);
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112773860);
    func_0x00010bf33b80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fadc0();
    _objc_release(uVar3);
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(uVar4);
    _objc_retain(param_4);
    func_0x00010be00380(param_1);
    _objc_release(param_4);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10803d388; end: 10803d483;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803d388(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (lVar1 != 0)) {
    func_0x00010c1554e0(*(undefined8 *)(param_1 + 0x28));
    func_0x00010bdfb0c0(lVar1);
    func_0x00010c1554e0(*(undefined8 *)(param_1 + 0x28));
    func_0x00010be29520(lVar1);
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112773860);
    func_0x00010bf33b80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fadc0();
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112773828;
    func_0x00010befa120(*(undefined8 *)(lVar1 + lVar3));
    lVar3 = *(long *)(lVar1 + lVar3);
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      func_0x00010c195460(*(undefined8 *)(lVar1 + _DAT_112773864));
    }
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010c25b720();
    if (lVar3 == 2) {
      *(undefined1 *)(lVar1 + _DAT_11277387c) = 1;
      func_0x00010bed64e0(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10803d484; end: 10803d777; -[SCStoriesTrayViewController _deselectConflictingStoryRowsForSelectedRow:inSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803d484(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  puVar10 = param_4;
  _objc_retain(param_3);
  lVar11 = (long)_DAT_112773824;
  uVar1 = *(ulong *)(param_1 + lVar11);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar1;
  func_0x00010bfdc4a0();
  if ((uVar13 & 1) != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010c080fe0();
    if ((int)uVar8 == 0) {
      uVar3 = *(ulong *)(param_1 + lVar11);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar3;
      func_0x00010bfdc4e0();
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if (((uVar13 & 1) == 0) &&
         ((puVar7 = param_3, func_0x00010c25b720(), puVar7 == (undefined8 *)0x0 ||
          (puVar7 = param_3, func_0x00010c25b720(), puVar7 == (undefined8 *)0x1)))) {
        puVar4 = param_3;
        func_0x00010c25b720();
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        lVar15 = (long)_DAT_11277382c;
        lVar11 = *(long *)(param_1 + lVar15);
        func_0x00010bf529e0();
        if (lVar11 != 0) {
          uVar13 = 0;
          do {
            uVar3 = *(ulong *)(param_1 + lVar15);
            func_0x00010c0dfd40(uVar3,param_2,uVar13);
            _objc_retainAutoreleasedReturnValue();
            uVar1 = uVar3;
            func_0x00010c25b720();
            if (uVar1 == (puVar4 == (undefined8 *)0x0)) {
              puVar6 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
              func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,uVar13,param_4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar5,param_2,puVar6);
              _objc_release(puVar6);
            }
            _objc_release(uVar3);
            uVar13 = uVar13 + 1;
            uVar1 = *(ulong *)(param_1 + lVar15);
            func_0x00010bf529e0();
          } while (uVar13 < uVar1);
        }
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        lStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        plStack_120 = (long *)0x0;
        _objc_retain(puVar5);
        puVar4 = &uStack_130;
        puVar10 = auStack_f0;
        puVar6 = puVar5;
        func_0x00010bf52a60();
        if (puVar6 != (undefined *)0x0) {
          lVar11 = *plStack_120;
          do {
            puVar12 = (undefined *)0x0;
            do {
              if (*plStack_120 != lVar11) {
                _objc_enumerationMutation(puVar5);
              }
              uVar2 = *(undefined8 *)(lStack_128 + (long)puVar12 * 8);
              uVar8 = *(undefined8 *)(param_1 + _DAT_112773860);
              func_0x00010bf33b80(uVar8,param_2,uVar2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1fadc0();
              _objc_release(uVar8);
              uVar14 = *(undefined8 *)(param_1 + _DAT_112773828);
              uVar8 = *(undefined8 *)(param_1 + lVar15);
              func_0x00010c142240(uVar2);
              func_0x00010c0dfd40(uVar8,param_2,uVar2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c12d360(uVar14,param_2,uVar8);
              _objc_release(uVar8);
              puVar12 = puVar12 + 1;
            } while (puVar6 != puVar12);
            puVar4 = &uStack_130;
            puVar10 = auStack_f0;
            puVar6 = puVar5;
            func_0x00010bf52a60();
          } while (puVar6 != (undefined *)0x0);
        }
        _objc_release(puVar5);
        _objc_release(puVar5);
      }
      goto LAB_10803d518;
    }
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
LAB_10803d518:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  puVar7 = puVar4;
  func_0x00010c25b720();
  if (puVar7 == (undefined8 *)0x7) {
    puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    _objc_retainAutoreleasedReturnValue();
    lVar15 = (long)_DAT_11277382c;
    lVar11 = *(long *)((long)param_3 + lVar15);
    func_0x00010bf529e0();
    if (lVar11 != 0) {
      uVar13 = 0;
      do {
        puVar7 = *(undefined8 **)((long)param_3 + lVar15);
        func_0x00010c0dfd40(puVar7,param_2,uVar13);
        _objc_retainAutoreleasedReturnValue();
        if (puVar7 != puVar4) {
          uVar8 = *(undefined8 *)((long)param_3 + (long)_DAT_112773828);
          func_0x00010bf4b900(uVar8,param_2,puVar7);
          if ((int)uVar8 != 0) {
            uVar8 = *(undefined8 *)((long)param_3 + (long)_DAT_112773860);
            puVar6 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
            func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,uVar13,puVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf6e880(uVar8,param_2,puVar6,0);
            _objc_release(puVar6);
            func_0x00010befa120(puVar5,param_2,puVar7);
          }
        }
        _objc_release(puVar7);
        uVar13 = uVar13 + 1;
        uVar1 = *(ulong *)((long)param_3 + lVar15);
        func_0x00010bf529e0();
      } while (uVar13 < uVar1);
    }
    func_0x00010c0ce860(*(undefined8 *)((long)param_3 + (long)_DAT_112773828),param_2,puVar5);
    *(undefined1 *)((long)param_3 + (long)_DAT_11277387c) = 0;
    func_0x00010bed64e0(param_3);
    _objc_release(puVar5);
  }
  else {
    lVar15 = (long)_DAT_11277382c;
    lVar11 = *(long *)((long)param_3 + lVar15);
    func_0x00010bf529e0();
    if (lVar11 != 0) {
      uVar13 = 0;
      do {
        lVar9 = *(long *)((long)param_3 + lVar15);
        func_0x00010c0dfd40(lVar9,param_2,uVar13);
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar9;
        func_0x00010c25b720();
        if (lVar11 == 7) {
          lVar11 = (long)_DAT_112773828;
          uVar8 = *(undefined8 *)((long)param_3 + lVar11);
          func_0x00010bf4b900(uVar8,param_2,lVar9);
          if ((int)uVar8 != 0) {
            uVar8 = *(undefined8 *)((long)param_3 + (long)_DAT_112773860);
            puVar5 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
            func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,uVar13,puVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf6e880(uVar8,param_2,puVar5,0);
            _objc_release(puVar5);
            func_0x00010c12d360(*(undefined8 *)((long)param_3 + lVar11),param_2,lVar9);
          }
        }
        _objc_release(lVar9);
        uVar13 = uVar13 + 1;
        uVar1 = *(ulong *)((long)param_3 + lVar15);
        func_0x00010bf529e0();
      } while (uVar13 < uVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10803d778; end: 10803d99f; -[SCStoriesTrayViewController _handleFanPassMutualExclusivityForSelectedRow:inSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803d778(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c25b720();
  if (lVar1 == 7) {
    puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_11277382c;
    lVar1 = *(long *)(param_1 + lVar8);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      uVar7 = 0;
      do {
        lVar1 = *(long *)(param_1 + lVar8);
        func_0x00010c0dfd40(lVar1,param_2,uVar7);
        _objc_retainAutoreleasedReturnValue();
        if (lVar1 != param_3) {
          uVar2 = *(undefined8 *)(param_1 + _DAT_112773828);
          func_0x00010bf4b900(uVar2,param_2,lVar1);
          if ((int)uVar2 != 0) {
            uVar2 = *(undefined8 *)(param_1 + _DAT_112773860);
            puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
            func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,uVar7,param_4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf6e880(uVar2,param_2,puVar3,0);
            _objc_release(puVar3);
            func_0x00010befa120(puVar6,param_2,lVar1);
          }
        }
        _objc_release(lVar1);
        uVar7 = uVar7 + 1;
        uVar4 = *(ulong *)(param_1 + lVar8);
        func_0x00010bf529e0();
      } while (uVar7 < uVar4);
    }
    func_0x00010c0ce860(*(undefined8 *)(param_1 + _DAT_112773828),param_2,puVar6);
    *(undefined1 *)(param_1 + _DAT_11277387c) = 0;
    func_0x00010bed64e0(param_1);
    _objc_release(puVar6);
  }
  else {
    lVar8 = (long)_DAT_11277382c;
    lVar1 = *(long *)(param_1 + lVar8);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      uVar7 = 0;
      do {
        lVar5 = *(long *)(param_1 + lVar8);
        func_0x00010c0dfd40(lVar5,param_2,uVar7);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar5;
        func_0x00010c25b720();
        if (lVar1 == 7) {
          lVar1 = (long)_DAT_112773828;
          uVar2 = *(undefined8 *)(param_1 + lVar1);
          func_0x00010bf4b900(uVar2,param_2,lVar5);
          if ((int)uVar2 != 0) {
            uVar2 = *(undefined8 *)(param_1 + _DAT_112773860);
            puVar6 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
            func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,uVar7,param_4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf6e880(uVar2,param_2,puVar6,0);
            _objc_release(puVar6);
            func_0x00010c12d360(*(undefined8 *)(param_1 + lVar1),param_2,lVar5);
          }
        }
        _objc_release(lVar5);
        uVar7 = uVar7 + 1;
        uVar4 = *(ulong *)(param_1 + lVar8);
        func_0x00010bf529e0();
      } while (uVar7 < uVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10803d9a0; end: 10803da7b; -[SCStoriesTrayViewController tableView:didDeselectRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803d9a0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c142240();
  lVar3 = (long)_DAT_11277382c;
  uVar2 = *(ulong *)(param_1 + lVar3);
  func_0x00010bf529e0();
  if (uVar1 < uVar2) {
    lVar3 = *(long *)(param_1 + lVar3);
    uVar1 = param_4;
    func_0x00010c142240(param_4);
    func_0x00010c0dfd40(lVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_112773828;
    func_0x00010c12d360(*(undefined8 *)(param_1 + lVar4),param_2,lVar3);
    lVar4 = *(long *)(param_1 + lVar4);
    func_0x00010bf529e0();
    if (lVar4 == 0) {
      func_0x00010c195460(*(undefined8 *)(param_1 + _DAT_112773864),param_2,0);
    }
    lVar4 = lVar3;
    func_0x00010c25b720();
    if (lVar4 == 2) {
      *(undefined1 *)(param_1 + _DAT_11277387c) = 0;
      func_0x00010bed64e0(param_1);
    }
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10803da7c; end: 10803db2b; -[SCStoriesTrayViewController tableView:willDisplayCell:forRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803da7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277382c);
  uVar1 = param_5;
  func_0x00010c142240(param_5);
  func_0x00010c0dfd40(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112773828);
  func_0x00010bf4b900(uVar1,param_2,uVar2);
  if ((int)uVar1 != 0) {
    func_0x00010c158fe0(param_3,param_2,param_5,0,0);
  }
  _objc_release(uVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10803db2c; end: 10803dd27; -[SCStoriesTrayViewController _didSelectRow:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803db2c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c25b720();
  if (lVar1 == 3) {
    func_0x00010c238cc0(*(undefined8 *)(param_1 + _DAT_11277385c));
  }
  else {
    lVar1 = param_3;
    func_0x00010c25b720();
    if (lVar1 == 0) {
      func_0x00010c238ca0(*(undefined8 *)(param_1 + _DAT_11277385c));
    }
    else {
      lVar1 = param_3;
      func_0x00010c25b720();
      if (lVar1 == 2) {
        func_0x00010c238ce0(*(undefined8 *)(param_1 + _DAT_11277385c));
      }
      else {
        lVar1 = param_3;
        func_0x00010c25b720();
        if (((lVar1 == 4) || (lVar1 = param_3, func_0x00010c25b720(), lVar1 == 6)) ||
           (lVar1 = param_3, func_0x00010c25b720(), lVar1 == 5)) {
          puVar3 = *(undefined **)(param_1 + _DAT_112773858);
          lVar1 = param_3;
          func_0x00010c259c80(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf62540(puVar3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar1);
          func_0x00010c238c80(*(undefined8 *)(param_1 + _DAT_11277385c));
        }
        else {
          lVar1 = param_3;
          func_0x00010c25b720();
          if (lVar1 != 1) {
            (**(code **)(param_4 + 0x10))(param_4,1);
            goto LAB_10803dc64;
          }
          puVar3 = PTR_PTR_1126aead8;
          _objc_alloc(PTR_PTR_1126aead8);
          func_0x00010c038f40();
          uVar4 = *(undefined8 *)(param_1 + _DAT_11277385c);
          uVar2 = *(undefined8 *)(param_1 + _DAT_112773848);
          func_0x00010bf12ea0(uVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c238c60(uVar4);
          _objc_release(uVar2);
        }
        _objc_release(puVar3);
      }
    }
  }
LAB_10803dc64:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10803dd28; end: 10803de7b; -[SCStoriesTrayViewController fetchBitmojiSelfieImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803dd28(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + _DAT_112773848) == 0) {
    (**(code **)(param_3 + 0x10))(param_3,0);
    uVar1 = 0;
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112773844);
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010bfaa020(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10803de7c; end: 10803ded7;  */

void FUN_10803de7c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10803ded8; end: 10803e003; -[SCStoriesTrayViewController fetchImageWithUrl:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803ded8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112773854);
  _objc_retain(uVar1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10803e004; end: 10803e237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803e004(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar1 == 0) {
    lVar7 = *(long *)(param_1 + 0x30);
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    param_2 = 0;
    (**(code **)(lVar7 + 0x10))(lVar7,0,puVar5);
    _objc_release(puVar5);
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112773850);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126aebd8;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e320(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126aebf0;
    _objc_alloc(PTR_PTR_1126aebf0);
    lVar7 = lVar1;
    _objc_opt_class(lVar1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011b80(puVar4);
    puVar9 = *(undefined **)(param_1 + 0x28);
    _objc_retain(puVar9);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar8);
    func_0x00010bf88c20(uVar2);
    _objc_release(puVar4);
    _objc_release(lVar7);
    _objc_release(puVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar8);
  }
  _objc_release(puVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(lVar1 + 0x20);
  uVar3 = *(undefined8 *)(lVar1 + 0x28);
  _objc_retain(uVar3);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar3);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 10803e238; end: 10803e3ff;  */

void FUN_10803e238(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 10803e400; end: 10803e423; -[SCStoriesTrayViewController spotlightIconCOF] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803e400(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112773830),
             PTR_s_stringValueForConfigKeySync_defa_112675008,
             &PTR____CFConstantStringClassReference_110ecfd98,
             &PTR____CFConstantStringClassReference_110daafd8,0);
  return;
}



/* Entry: 10803e424; end: 10803e427; -[SCStoriesTrayViewController tray:positionDidChange:] */

void FUN_10803e424(void)

{
  return;
}



/* Entry: 10803e428; end: 10803e45b; -[SCStoriesTrayViewController tray:heightForPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803e428(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277382c);
  func_0x00010bf529e0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010becf7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__trayHeightForRowCount__112591798,uVar1);
  return;
}



/* Entry: 10803e45c; end: 10803e563; -[SCStoriesTrayViewController presentUsingTray:inContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803e45c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112773858);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bfa6320(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10803e564; end: 10803e753;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10803e564(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                    long param_5,long param_6,ulong param_7)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  lVar7 = param_5 + 0x30;
  _objc_loadWeakRetained();
  if (lVar7 != 0) {
    lVar6 = (long)_DAT_11277382c;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)(lVar7 + lVar6);
    *(long *)(lVar7 + lVar6) = param_6;
    _objc_release(uVar3);
    func_0x00010beaf000(lVar7);
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    *(long *)(lVar7 + _DAT_112773874) = (long)(param_1 * 1000.0);
    _objc_release(puVar4);
    lVar8 = (long)_DAT_1127737f8;
    func_0x00010c12adc0(*(undefined8 *)(lVar7 + lVar8));
    param_1 = 0.0;
    _objc_retain(param_6);
    lVar6 = param_6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_6);
        }
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar3 = *(undefined8 *)(lVar7 + lVar8);
        func_0x00010c25b720(*(undefined8 *)(lVar9 * 8));
        func_0x00010c0df840(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar3);
        _objc_release(puVar4);
        lVar9 = lVar9 + 1;
      } while (lVar6 != lVar9);
      lVar6 = param_6;
      func_0x00010bf52a60();
    }
    _objc_release(param_6);
    func_0x00010c128b60(*(undefined8 *)(lVar7 + _DAT_112773860));
    param_7 = *(ulong *)(param_5 + 0x28);
    func_0x00010c10c6a0(*(undefined8 *)(param_5 + 0x20));
  }
  _objc_release(lVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar7 = (long)_DAT_112773804;
  dVar10 = 0.9;
  if (*(char *)(param_6 + lVar7) == '\0') {
    dVar10 = 0.75;
  }
  _objc_release(puVar4);
  bVar2 = *(char *)(param_6 + lVar7) == '\0';
  dVar12 = 66.0;
  if (bVar2) {
    dVar12 = 52.0;
  }
  dVar11 = 120.0;
  if (bVar2) {
    dVar11 = 170.0;
  }
  dVar11 = dVar11 + (double)param_7 * dVar12;
  dVar12 = param_4 * dVar10;
  if (dVar11 <= param_4 * dVar10) {
    dVar12 = dVar11;
  }
  return dVar12;
}



/* Entry: 10803e754; end: 10803e80b; -[SCStoriesTrayViewController _trayHeightForRowCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10803e754(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double in_d3;
  
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar3 = (long)_DAT_112773804;
  dVar4 = 0.9;
  if (*(char *)(param_1 + lVar3) == '\0') {
    dVar4 = 0.75;
  }
  _objc_release(puVar2);
  bVar1 = *(char *)(param_1 + lVar3) == '\0';
  dVar6 = 66.0;
  if (bVar1) {
    dVar6 = 52.0;
  }
  dVar5 = 120.0;
  if (bVar1) {
    dVar5 = 170.0;
  }
  dVar5 = dVar5 + (double)param_3 * dVar6;
  dVar6 = in_d3 * dVar4;
  if (dVar5 <= in_d3 * dVar4) {
    dVar6 = dVar5;
  }
  return dVar6;
}



/* Entry: 10803e80c; end: 10803ea37; -[SCStoriesTrayViewController _setupPreselectionForRowData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803e80c(long param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  double dVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  undefined1 auStack_100 [8];
  undefined1 uStack_f8;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar11 = (long)_DAT_112773808;
  uVar1 = *(undefined1 *)(param_1 + lVar11);
  _objc_initWeak(auStack_f0,param_1);
  puVar7 = auStack_f0;
  _objc_copyWeak(auStack_100);
  uStack_f8 = uVar1;
  _objc_retain(param_3);
  func_0x00010bf97e80(param_3);
  lVar12 = (long)_DAT_112773828;
  lVar10 = *(long *)(param_1 + lVar12);
  _objc_retain(lVar10);
  puVar6 = auStack_e8;
  lVar5 = lVar10;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar10);
      }
      lVar4 = *(long *)(lVar13 * 8);
      func_0x00010c25b720();
      if (lVar4 == 2) {
        *(undefined1 *)(param_1 + _DAT_11277387c) = 1;
        goto LAB_10803e96c;
      }
      lVar13 = lVar13 + 1;
    } while (lVar5 != lVar13);
    puVar6 = auStack_e8;
    lVar5 = lVar10;
    func_0x00010bf52a60();
  }
LAB_10803e96c:
  _objc_release(lVar10);
  if (*(char *)(param_1 + lVar11) == '\x01') {
    func_0x00010be613e0(param_1);
  }
  lVar5 = *(long *)(param_1 + lVar12);
  func_0x00010bf529e0();
  uVar8 = (ulong)(lVar5 != 0);
  func_0x00010c195460(*(undefined8 *)(param_1 + _DAT_112773864));
  _objc_release(param_3);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_f0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_f0);
  __Unwind_Resume();
  _objc_retain(puVar7);
  lVar5 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (lVar5 != 0) {
    if ((*(byte *)(param_3 + 0x30) & 1) == 0) {
      dVar14 = (double)(uVar8 + 1);
      dVar2 = dVar14 * 66.0;
      func_0x00010bf529e0(*(undefined8 *)(param_3 + 0x20));
      func_0x00010becf7c0(lVar5);
      if (dVar14 < dVar2 + 120.0) {
        *puVar6 = 1;
        goto LAB_10803eb38;
      }
    }
    iVar9 = (int)*(undefined8 *)(lVar5 + _DAT_112773838);
    puVar6 = puVar7;
    func_0x00010c259c80(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(puVar6);
    if (iVar9 != 0) {
      func_0x00010befa120(*(undefined8 *)(lVar5 + _DAT_112773828));
      puVar6 = puVar7;
      func_0x00010c25b720();
      if (puVar6 == (undefined1 *)0x1) {
        *(long *)(lVar5 + _DAT_11277381c) = *(long *)(lVar5 + _DAT_11277381c) + 1;
      }
    }
  }
LAB_10803eb38:
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 10803ea38; end: 10803eb5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803ea38(long param_1,long param_2,long param_3,undefined1 *param_4)

{
  double dVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  double dVar5;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
      dVar5 = (double)(param_3 + 1);
      dVar1 = dVar5 * 66.0;
      func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
      func_0x00010becf7c0(lVar2);
      if (dVar5 < dVar1 + 120.0) {
        *param_4 = 1;
        goto LAB_10803eb38;
      }
    }
    iVar4 = (int)*(undefined8 *)(lVar2 + _DAT_112773838);
    lVar3 = param_2;
    func_0x00010c259c80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(lVar3);
    if (iVar4 != 0) {
      func_0x00010befa120(*(undefined8 *)(lVar2 + _DAT_112773828));
      lVar3 = param_2;
      func_0x00010c25b720();
      if (lVar3 == 1) {
        *(long *)(lVar2 + _DAT_11277381c) = *(long *)(lVar2 + _DAT_11277381c) + 1;
      }
    }
  }
LAB_10803eb38:
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10803eb5c; end: 10803ec67; -[SCStoriesTrayViewController _moveSelectedRowsToTop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803eb5c(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_70;
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10803ec68;
  puStack_58 = &UNK_110a185a0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retainBlock(&puStack_70);
  lVar5 = (long)_DAT_11277382c;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c246ca0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10803ec68; end: 10803ed0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10803ec68(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar4 = (long)_DAT_112773828;
  uVar1 = (uint)*(undefined8 *)(param_1 + lVar4);
  func_0x00010bf4b900();
  _objc_release(param_2);
  uVar2 = (uint)*(undefined8 *)(param_1 + lVar4);
  func_0x00010bf4b900();
  _objc_release(param_3);
  uVar3 = (ulong)((uVar1 ^ 1) & uVar2);
  if (((uVar1 ^ 1 | uVar2) & 1) == 0) {
    uVar3 = 0xffffffffffffffff;
  }
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 10803ed10; end: 10803ef67; -[SCStoriesTrayViewController logStoriesSelectionWithLoggingParamsBuilder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803ed10(long param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar9 = *(long *)(param_1 + _DAT_112773828);
  _objc_retain(lVar9);
  lVar2 = lVar9;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  if (lVar2 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = 0;
    do {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(lVar9);
        }
        lVar11 = *(long *)(lVar12 * 8);
        lVar3 = lVar11;
        func_0x00010c25b720();
        if ((lVar3 != 4) &&
           ((lVar3 = lVar11, func_0x00010c25b720(), lVar3 == 3 ||
            (func_0x00010c25b720(), lVar11 == 2)))) {
          iVar7 = iVar7 + 1;
        }
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      lVar2 = lVar9;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar9);
  lVar9 = *(long *)(param_1 + _DAT_11277382c);
  _objc_retain(lVar9);
  lVar4 = lVar9;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar9);
      }
      func_0x00010c25b720();
      lVar12 = lVar12 + 1;
    } while (lVar4 != lVar12);
    lVar4 = lVar9;
    func_0x00010bf52a60();
  }
  _objc_release(lVar9);
  func_0x00010c2aefc0(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a8de0(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b8660(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    if (*(char *)(param_3 + _DAT_112773868) != '\x01') {
      return;
    }
    uVar5 = *(undefined8 *)(param_3 + _DAT_112773814);
    func_0x0001008cc2b4(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010bdd1b00(param_3);
    lVar2 = param_3;
    func_0x00010be9dda0(param_3);
    lVar8 = (long)_DAT_112773810;
    func_0x000108f37aa4(*(undefined8 *)(param_3 + lVar8),uVar5,1);
    uVar10 = *(undefined8 *)(param_3 + lVar8);
    uVar1 = *(undefined1 *)(param_3 + _DAT_112773818);
    uVar6 = *(undefined8 *)(param_3 + _DAT_112773858);
    func_0x00010bf2d100(uVar6);
    func_0x000108f36ae0(uVar10,&PTR____CFConstantStringClassReference_110f09738,uVar1,0 < lVar4,
                        uVar6,1);
    func_0x00010be57660(param_3);
    func_0x000108f36d20(*(undefined8 *)(param_3 + lVar8),uVar5,
                        *(undefined8 *)(param_3 + _DAT_11277381c));
    func_0x000108f36e94(*(undefined8 *)(param_3 + lVar8),uVar5,lVar2);
    if (iVar7 != 0) {
      func_0x000108f37008(*(undefined8 *)(param_3 + lVar8),uVar5,lVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar5);
    return;
  }
  return;
}



/* Entry: 10803ef68; end: 10803f097; -[SCStoriesTrayViewController logPublicStoryMetricsWithIsSending:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803ef68(long param_1,undefined8 param_2,int param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  if (*(char *)(param_1 + _DAT_112773868) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112773814);
    func_0x0001008cc2b4(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bdd1b00(param_1);
    lVar4 = param_1;
    func_0x00010be9dda0(param_1);
    lVar7 = (long)_DAT_112773810;
    func_0x000108f37aa4(*(undefined8 *)(param_1 + lVar7),uVar2,1);
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    uVar1 = *(undefined1 *)(param_1 + _DAT_112773818);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112773858);
    func_0x00010bf2d100(uVar5);
    func_0x000108f36ae0(uVar6,&PTR____CFConstantStringClassReference_110f09738,uVar1,0 < lVar3,uVar5
                        ,1);
    func_0x00010be57660(param_1);
    func_0x000108f36d20(*(undefined8 *)(param_1 + lVar7),uVar2,
                        *(undefined8 *)(param_1 + _DAT_11277381c));
    func_0x000108f36e94(*(undefined8 *)(param_1 + lVar7),uVar2,lVar4);
    if (param_3 != 0) {
      func_0x000108f37008(*(undefined8 *)(param_1 + lVar7),uVar2,lVar4);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10803f098; end: 10803f1b3; -[SCStoriesTrayViewController _logPublicStoryAvailableWithValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803f098(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112773814);
  func_0x0001008cc2b4();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10803f1b4;
  puStack_58 = &UNK_110842a68;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(uVar1);
  uStack_50 = uVar1;
  uStack_40 = param_3;
  if (lRam0000000113728bd0 != -1) {
    func_0x000107c27d9c(0x113728bd0,&puStack_70);
  }
  func_0x000108f367f8(*(undefined8 *)(param_1 + _DAT_112773810),uVar1,param_3);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  return;
}



/* Entry: 10803f1b4; end: 10803f1eb;  */

void FUN_10803f1b4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be386c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10803f1ec; end: 10803f203; -[SCStoriesTrayViewController _incrementPublicStoryAvailableFirstTimeWithSnapSource:value:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803f1ec(long param_1,undefined8 param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined1 *puVar13;
  undefined8 *unaff_x24;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined1 *puStack_3b8;
  undefined8 *puStack_3b0;
  undefined *puStack_3a8;
  undefined8 ***pppuStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 *puStack_370;
  undefined8 auStack_368 [2];
  char cStack_351;
  undefined8 auStack_350 [2];
  char cStack_339;
  long lStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  long *plStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined8 ***pppuStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 *puStack_2d8;
  undefined8 auStack_2d0 [2];
  char cStack_2b9;
  long lStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  long *plStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined8 ***pppuStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 *puStack_258;
  undefined8 auStack_250 [2];
  char cStack_239;
  long lStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  long *plStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined1 ***pppuStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 *puStack_1d8;
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined1 *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined1 **ppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + _DAT_112773810);
  puVar9 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar8 = param_4;
  puVar5 = param_4;
  _objc_retain(param_3);
  if (lVar1 != 0) {
    plVar12 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar2 = &UNK_10f53482e;
    }
    else {
      puVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar2 = &UNK_110acc3e8;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar8 = puVar9;
    puVar5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar8 = puVar9;
      puVar5 = param_4;
    }
  }
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puStack_88 = &SUB_108f36ae0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puVar9 = puVar8;
  puVar11 = puVar5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  puVar13 = (undefined1 *)0x0;
  if (puVar3 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar3 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f53482e;
    }
    else {
      puVar3 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_148,puVar3);
    puVar3 = &UNK_10f534b63;
    if ((int)puVar8 == 0) {
      puVar3 = &UNK_10f534b68;
    }
    func_0x000107c278b8(auStack_130,puVar3);
    puVar3 = &UNK_10f534b63;
    if ((int)puVar5 == 0) {
      puVar3 = &UNK_10f534b68;
    }
    func_0x000107c278b8(auStack_118,puVar3);
    unaff_x24 = auStack_100;
    puVar3 = &UNK_10f534b63;
    if ((int)param_5 == 0) {
      puVar3 = &UNK_10f534b68;
    }
    func_0x000107c278b8(unaff_x24,puVar3);
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    func_0x000107c27984(&uStack_168,auStack_148,&lStack_e8,4);
    puVar6 = &UNK_110acc438;
    param_5 = &uStack_168;
    puVar9 = &uStack_168;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110acc438,puVar9,param_6);
    puStack_150 = param_5;
    func_0x000107c278ac(&puStack_150);
    lVar1 = 0;
    puVar13 = auStack_148;
    puVar11 = param_6;
    do {
      if ((&cStack_e9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x60);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar10 = &uStack_1f0;
  puStack_178 = &SUB_108f36d20;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puVar8 = puVar9;
  puStack_1b0 = unaff_x24;
  puStack_1a8 = puVar5;
  puStack_1a0 = param_5;
  puStack_198 = puVar13;
  puStack_190 = puVar3;
  puStack_188 = puVar2;
  ppuStack_180 = &puStack_90;
  _objc_retain(puVar6);
  plVar12 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar2 = &UNK_10f53482e;
    }
    else {
      puVar2 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    puVar5 = auStack_1d0;
    func_0x000107c278b8(auStack_1d0,puVar2);
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    func_0x000107c27984(&uStack_1f0,auStack_1d0,&lStack_1b8,1);
    puVar7 = &UNK_110acc488;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110acc488,&uStack_1f0,puVar9);
    puStack_1d8 = (undefined1 *)&uStack_1f0;
    func_0x000107c278ac(&puStack_1d8);
    puVar8 = puVar10;
    puVar11 = puVar9;
    param_5 = &uStack_1f0;
    if (cStack_1b9 < '\0') {
      __ZdlPv(auStack_1d0[0]);
      puVar8 = puVar10;
      puVar11 = puVar9;
      param_5 = &uStack_1f0;
    }
  }
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar10 = &uStack_270;
  puStack_1f8 = &SUB_108f36e94;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar7;
  puVar9 = puVar8;
  puStack_230 = unaff_x24;
  puStack_228 = puVar5;
  puStack_220 = param_5;
  plStack_218 = plVar12;
  puStack_210 = puVar2;
  puStack_208 = puVar6;
  pppuStack_200 = &ppuStack_180;
  _objc_retain(puVar7);
  plVar12 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f53482e;
    }
    else {
      puVar2 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    puVar5 = auStack_250;
    func_0x000107c278b8(auStack_250,puVar2);
    uStack_270 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    func_0x000107c27984(&uStack_270,auStack_250,&lStack_238,1);
    puVar3 = &UNK_110acc4d8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110acc4d8,&uStack_270,puVar8);
    puStack_258 = (undefined1 *)&uStack_270;
    func_0x000107c278ac(&puStack_258);
    puVar9 = puVar10;
    puVar11 = puVar8;
    param_5 = &uStack_270;
    if (cStack_239 < '\0') {
      __ZdlPv(auStack_250[0]);
      puVar9 = puVar10;
      puVar11 = puVar8;
      param_5 = &uStack_270;
    }
  }
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar10 = &uStack_2f0;
  puStack_278 = &SUB_108f37008;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar3;
  puVar8 = puVar9;
  puStack_2b0 = unaff_x24;
  puStack_2a8 = puVar5;
  puStack_2a0 = param_5;
  plStack_298 = plVar12;
  puStack_290 = puVar2;
  puStack_288 = puVar7;
  pppuStack_280 = &pppuStack_200;
  _objc_retain(puVar3);
  plVar12 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = &UNK_10f53482e;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    puVar5 = auStack_2d0;
    func_0x000107c278b8(auStack_2d0,puVar2);
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    func_0x000107c27984(&uStack_2f0,auStack_2d0,&lStack_2b8,1);
    puVar6 = &UNK_110acc528;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110acc528,&uStack_2f0,puVar9);
    puStack_2d8 = (undefined1 *)&uStack_2f0;
    func_0x000107c278ac(&puStack_2d8);
    puVar8 = puVar10;
    puVar11 = puVar9;
    param_5 = &uStack_2f0;
    if (cStack_2b9 < '\0') {
      __ZdlPv(auStack_2d0[0]);
      puVar8 = puVar10;
      puVar11 = puVar9;
      param_5 = &uStack_2f0;
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar4 = puVar2;
  __Unwind_Resume();
  puStack_2f8 = &UNK_108f3717c;
  lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puStack_330 = unaff_x24;
  puStack_328 = puVar5;
  puStack_320 = param_5;
  plStack_318 = plVar12;
  puStack_310 = puVar2;
  puStack_308 = puVar3;
  pppuStack_300 = &pppuStack_280;
  _objc_retain(puVar6);
  _objc_retain(puVar8);
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar2 = &UNK_10f53482e;
    }
    else {
      puVar2 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x000107c278b8(auStack_368,puVar2);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f53482e;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar5 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x000107c278b8(auStack_350,puVar5);
    uStack_388 = 0;
    uStack_380 = 0;
    uStack_378 = 0;
    func_0x000107c27984(&uStack_388,auStack_368,&lStack_338,2);
    puVar7 = &UNK_110acc578;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110acc578,&uStack_388,puVar11);
    puStack_370 = &uStack_388;
    func_0x000107c278ac(&puStack_370);
    lVar1 = 0;
    do {
      if ((&cStack_339)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_350 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(puVar8);
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_338) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_351 < '\0') {
    __ZdlPv(auStack_368[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar6);
  __Unwind_Resume();
  puStack_3b8 = (undefined1 *)&uStack_3d0;
  puStack_398 = &UNK_108f373ac;
  if (puVar2 != (undefined *)0x0) {
    uStack_3d0 = 0;
    uStack_3c8 = 0;
    uStack_3c0 = 0;
    puStack_3b0 = puVar8;
    puStack_3a8 = puVar6;
    pppuStack_3a0 = &pppuStack_300;
    (**(code **)(**(long **)(puVar2 + 8) + 0x18))
              (*(long **)(puVar2 + 8),&UNK_110acc5c8,&uStack_3d0,puVar7);
    func_0x000107c278ac(&puStack_3b8);
  }
  return;
}



/* Entry: 10803f204; end: 10803f313; -[SCStoriesTrayViewController _selectedBusinessStoryCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10803f204(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1d8 [128];
  long lStack_158;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar2 = *(long *)(param_1 + _DAT_112773828);
  _objc_retain(lVar2);
  lVar3 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    lVar5 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(lVar2);
        }
        lVar1 = *(long *)(lStack_108 + lVar6 * 8);
        func_0x00010c25b720();
        if (lVar1 == 1) {
          lVar4 = lVar4 + 1;
        }
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
      lVar3 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    plStack_210 = (long *)0x0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    lVar3 = *(long *)(lVar2 + _DAT_11277382c);
    _objc_retain(lVar3);
    lVar2 = lVar3;
    func_0x00010bf52a60(lVar3,param_2,&uStack_220,auStack_1d8,0x10);
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      lVar5 = *plStack_210;
      do {
        lVar6 = 0;
        do {
          if (*plStack_210 != lVar5) {
            _objc_enumerationMutation(lVar3);
          }
          lVar1 = *(long *)(lStack_218 + lVar6 * 8);
          func_0x00010c25b720();
          if (lVar1 == 1) {
            lVar4 = lVar4 + 1;
          }
          lVar6 = lVar6 + 1;
        } while (lVar2 != lVar6);
        lVar2 = lVar3;
        func_0x00010bf52a60(lVar3,param_2,&uStack_220,auStack_1d8,0x10);
      } while (lVar2 != 0);
    }
    _objc_release(lVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_158) {
      ___stack_chk_fail();
      lVar3 = lVar3 + _DAT_11277386c;
      _objc_loadWeakRetained(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
      return lVar3;
    }
    return lVar4;
  }
  return lVar4;
}



/* Entry: 10803f314; end: 10803f423; -[SCStoriesTrayViewController _availableBusinessStoryCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10803f314(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar3 = *(long *)(param_1 + _DAT_11277382c);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    lVar5 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(lVar3);
        }
        lVar2 = *(long *)(lStack_108 + lVar6 * 8);
        func_0x00010c25b720();
        if (lVar2 == 1) {
          lVar4 = lVar4 + 1;
        }
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    lVar3 = lVar3 + _DAT_11277386c;
    _objc_loadWeakRetained(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return lVar3;
  }
  return lVar4;
}



/* Entry: 10803f424; end: 10803f443; -[SCStoriesTrayViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10803f424(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277386c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


