/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105021408; end: 10502144f; -[SCMyProfileIdentityPillsSectionActionHandler didDismissCommunitySharingFlow] */

void FUN_105021408(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105021450; end: 10502146f; -[SCMyProfileIdentityPillsSectionActionHandler _handleSaturnUpsellPillTap] */

undefined8 FUN_105021450(undefined8 param_1,undefined8 param_2)

{
  func_0x00010be6d560(param_1,param_2,&PTR____CFConstantStringClassReference_110dc2e18);
  return 1;
}



/* Entry: 105021470; end: 1050217db; -[SCMyProfileIdentityPillsSectionActionHandler _launchSaturnUpsellTray] */

undefined8 FUN_105021470(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined8 *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined8 *puStack_108;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar2 = param_1;
  _dispatch_group_create();
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  pcStack_80 = FUN_1050217dc;
  uStack_78 = 0x1050217ec;
  uStack_70 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x3032000000;
  pcStack_b0 = FUN_1050217dc;
  uStack_a8 = 0x1050217ec;
  uStack_a0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_1050217dc;
  uStack_d8 = 0x1050217ec;
  uStack_d0 = 0;
  _objc_initWeak(auStack_100,param_1);
  lVar3 = *(long *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar3 != 0) {
    _dispatch_group_enter(lVar2);
    puStack_130 = puVar1;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_1050217f4;
    puStack_118 = &UNK_1108635f8;
    puStack_108 = &uStack_98;
    _objc_retain(lVar2);
    lStack_110 = lVar2;
    func_0x00010bfaa580(lVar3);
    _objc_release(lStack_110);
  }
  lVar4 = *(long *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x00010bf42ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 != 0) {
      lVar11 = lVar6;
      func_0x00010bfa2680();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar11;
      func_0x00010bf0a5c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar11);
      if (lVar7 == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = lVar7;
        func_0x00010c0ecf00();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010c22d240();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = puStack_c0[5];
        puStack_c0[5] = lVar8;
        _objc_release(uVar10);
        lVar8 = lVar11;
        func_0x00010c08fa60();
        if (lVar8 != 0) {
          _dispatch_group_enter(lVar2);
          puVar9 = auStack_100;
          _objc_loadWeakRetained(puVar9);
          puStack_160 = puVar1;
          uStack_158 = 0xc2000000;
          uStack_150 = 0x105021850;
          puStack_148 = &UNK_11084a578;
          puStack_138 = &uStack_f8;
          _objc_retain(lVar2);
          lStack_140 = lVar2;
          func_0x00010be13be0(puVar9);
          _objc_release(puVar9);
          _objc_release(lStack_140);
        }
      }
      _objc_release(lVar7);
      _objc_release(lVar11);
    }
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  puStack_1a0 = puVar1;
  uStack_198 = 0xc2000000;
  pcStack_190 = FUN_1050218ac;
  puStack_188 = &UNK_110863628;
  _objc_copyWeak(auStack_168,auStack_100);
  puStack_180 = &uStack_98;
  puStack_178 = &uStack_c8;
  puStack_170 = &uStack_f8;
  func_0x000100bc0718(lVar2,PTR___dispatch_main_q_11034be20,&puStack_1a0);
  _objc_destroyWeak(auStack_168);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_100);
  __Block_object_dispose(&uStack_f8,8);
  _objc_release(uStack_d0);
  __Block_object_dispose(&uStack_c8,8);
  _objc_release(uStack_a0);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(uStack_70);
  _objc_release(lVar2);
  return 1;
}



/* Entry: 1050217dc; end: 1050217f3;  */

void FUN_1050217dc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1050217f4; end: 1050218ab;  */

void FUN_1050217f4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1050218ac; end: 10502193f;  */

void FUN_1050218ac(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7e3a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105021940; end: 105021c83; -[SCMyProfileIdentityPillsSectionActionHandler _fetchSchoolColorForOrgId:completion:] */

void FUN_105021940(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
  }
  else {
    puVar2 = PTR_PTR_1126b3e68;
    func_0x00010c0cb140(PTR_PTR_1126b3e68);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x000100576d08(param_3,auStack_48,auStack_50);
    if ((int)uVar3 != 0) {
      puVar4 = PTR_PTR_1126b3e70;
      _objc_alloc_init(PTR_PTR_1126b3e70);
      func_0x00010c1a85a0();
      func_0x00010c1c0fe0(puVar4);
      func_0x00010c1d63e0(puVar2);
      _objc_release(puVar4);
    }
    puVar4 = puVar2;
    func_0x00010bf63640(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    func_0x00010c27f2e0(lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(param_4);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105021c84; end: 105021cb3;  */

void FUN_105021c84(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105021c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 105021cb4; end: 105021d03;  */

void FUN_105021cb4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x000105021d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x10))(lVar3,uVar2);
    return;
  }
  return;
}



/* Entry: 105021d04; end: 105021f7f; -[SCMyProfileIdentityPillsSectionActionHandler _presentSaturnUpsellTrayWithSocialContext:schoolName:schoolColor:] */

void FUN_105021d04(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined2 uStack_62;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = PTR_PTR_1126b3d50;
  uStack_62 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d4900(puVar3,param_2,uVar2,param_4,param_5,(long)&uStack_62 + 1,&uStack_62);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar8 = param_1 + 0x70;
  _objc_loadWeakRetained(lVar8);
  func_0x00010c038f40(puVar3,param_2,lVar8,1);
  _objc_release(lVar8);
  puVar4 = PTR_PTR_1126b3d58;
  _objc_alloc(PTR_PTR_1126b3d58);
  lVar8 = param_3;
  func_0x00010bfb8520(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010bfb7d00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010c154bc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_3;
    func_0x00010c276640();
  }
  func_0x00010c056c20(puVar4,param_2,puVar3,0,0,0,0,lVar8,lVar5,lVar6,lVar7,param_4,param_5,
                      uStack_62._1_1_);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar8);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_3 == 0) {
    func_0x00010c2066c0(puVar4,param_2,PTR____NSArray0__struct_11034ab48);
    func_0x00010c2066e0(puVar4,param_2,puVar1);
  }
  else {
    lVar8 = param_3;
    func_0x00010c2743e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2066c0(puVar4,param_2,lVar8);
    _objc_release(lVar8);
    lVar8 = param_3;
    func_0x00010c274400(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2066e0(puVar4,param_2,lVar8);
    _objc_release(lVar8);
  }
  lVar8 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar8 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x30),param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105021f80; end: 105021fc7; -[SCMyProfileIdentityPillsSectionActionHandler saturnUpsellTrayDidDismiss] */

void FUN_105021f80(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105021fc8; end: 10502215f; -[SCMyProfileIdentityPillsSectionActionHandler _handleNowPlayingPillTap] */

undefined8 FUN_105021fc8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + 0x70;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x60);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126aeae0;
      func_0x00010c2a4c00(PTR_PTR_1126aeae0,param_2,3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b3e80;
      func_0x00010c27c3a0(PTR_PTR_1126b3e80,param_2,puVar2,1,0);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1 + 0x70;
      _objc_loadWeakRetained();
      lVar4 = lVar1;
      func_0x00010c0d66a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar1);
      if (lVar4 == 0) {
        puVar5 = PTR_PTR_1126aead8;
        _objc_alloc(PTR_PTR_1126aead8);
        lVar1 = param_1 + 0x70;
        _objc_loadWeakRetained(lVar1);
        func_0x00010c038f40(puVar5,param_2,lVar1,1);
      }
      else {
        puVar5 = PTR_PTR_1126aead0;
        _objc_alloc(PTR_PTR_1126aead0);
        lVar1 = param_1 + 0x70;
        _objc_loadWeakRetained(lVar1);
        lVar4 = lVar1;
        func_0x00010c0d66a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c02e4c0(puVar5,param_2,lVar4);
        _objc_release(lVar4);
      }
      _objc_release(lVar1);
      uVar6 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010bf22f40(uVar6,param_2,param_1,puVar3,puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x60),param_2,uVar6);
      _objc_release(uVar6);
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
  }
  return 1;
}



/* Entry: 105022160; end: 1050221db; -[SCMyProfileIdentityPillsSectionActionHandler settingsScopeWantsDismiss] */

void FUN_105022160(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c150520(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f440();
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1050221dc; end: 105022223; -[SCMyProfileIdentityPillsSectionActionHandler settingsScopeDidDismiss] */

void FUN_1050221dc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x60));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105022224; end: 10502223b; -[SCMyProfileIdentityPillsSectionActionHandler presentingViewController] */

void FUN_105022224(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10502223c; end: 105022247; -[SCMyProfileIdentityPillsSectionActionHandler setPresentingViewController:] */

void FUN_10502223c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 105022248; end: 105022303; -[SCMyProfileIdentityPillsSectionActionHandler .cxx_destruct] */

void FUN_105022248(long param_1)

{
  _objc_destroyWeak(param_1 + 0x70);
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



/* Entry: 105022304; end: 10502279f; -[SCMyProfileIdentityPillsSectionDataProvider initWithScoreInfoProvider:birthdayProvider:saturnUserIdProvider:valdiRuntimeProvider:snapcodeScopeExposer:circumstanceEngine:cofStore:featureSettingsService:grapheneServices:communityOrgService:alertPresenter:birthdayPageContextProviderServices:crashLogger:communityStoreProvider:saturnExperimentProvider:nowPlayingPillContextProviderServices:messageExperimentService:topicPageLauncherFactory:navigationDelegate:deckHierarchyFactory:friendsFeedNavigationService:] */

undefined8 *
FUN_105022304(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  puStack_70 = PTR_PTR_1126e5a98;
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
    _objc_retain(param_16);
    uVar2 = puVar1[10];
    puVar1[10] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_23;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126aeea8;
    _objc_opt_new();
    uVar2 = puVar1[0x17];
    puVar1[0x17] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_15;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b0c28;
    _objc_opt_new();
    uVar2 = puVar1[0x19];
    puVar1[0x19] = puVar3;
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



/* Entry: 1050227a0; end: 1050228a7; -[SCMyProfileIdentityPillsSectionDataProvider setUp] */

void FUN_1050227a0(long param_1)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0xd0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c295320();
  _objc_release(lVar1);
  _objc_initWeak(auStack_38,param_1);
  lVar1 = param_1;
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_opt_class(PTR_PTR_1126b3e88);
  func_0x00010c1275a0(lVar1);
  _objc_release(lVar1);
  func_0x00010be6ee00(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1050228a8; end: 1050228fb;  */

void FUN_1050228a8(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b3e88;
    _objc_alloc(PTR_PTR_1126b3e88);
    func_0x00010c04a0a0();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050228fc; end: 105022927; -[SCMyProfileIdentityPillsSectionDataProvider tearDown] */

void FUN_1050228fc(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0xa8));
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105022928; end: 1050229b3; -[SCMyProfileIdentityPillsSectionDataProvider _bridgeObservableFromStringUserInfoProvider:] */

void FUN_105022928(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
  uVar1 = uVar2;
  func_0x00010b09c8d0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1050229b4; end: 105022a17;  */

void FUN_1050229b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2619e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105022a18; end: 105022c7f; -[SCMyProfileIdentityPillsSectionDataProvider _snapScoreBridgeObservable] */

void FUN_105022a18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  uVar2 = *(undefined8 *)(param_1 + 200);
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar5);
  uVar3 = uVar4;
  func_0x00010b09c8d0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105022c80; end: 105022d4f; -[SCMyProfileIdentityPillsSectionDataProvider _birthdayBridgeObservable] */

void FUN_105022c80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000108435fdc();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar3;
  func_0x00010b09c8d0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105022d50; end: 105022e57;  */

void FUN_105022d50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  _objc_retain(param_2);
  func_0x00010bf5e300(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar3 = puVar1;
  func_0x00010bf44640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b3db0;
  _objc_alloc(PTR_PTR_1126b3db0);
  puVar4 = puVar3;
  func_0x00010c0d0e40(puVar3);
  puVar5 = puVar3;
  func_0x00010bf65700(puVar3);
  func_0x00010c02c8e0((double)(long)puVar4,(double)(long)puVar5,puVar1);
  puVar4 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105022e58; end: 105022eff; -[SCMyProfileIdentityPillsSectionDataProvider _enableCommunitiesBridgeObservable] */

void FUN_105022e58(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x000108060890(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010b09c8d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105022f00; end: 105022f9f; -[SCMyProfileIdentityPillsSectionDataProvider _enableCommunitiesMocksBridgeObservable] */

void FUN_105022f00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010b09c8d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105022fa0; end: 105023047; -[SCMyProfileIdentityPillsSectionDataProvider _disableCommunitiesEntryPointBridgeObservable] */

void FUN_105022fa0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x0001080608ec(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010b09c8d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105023048; end: 1050230ef; -[SCMyProfileIdentityPillsSectionDataProvider _enableMultipleCommunitiesBridgeObservable] */

void FUN_105023048(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x000108060ea8(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010b09c8d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1050230f0; end: 1050231c3; -[SCMyProfileIdentityPillsSectionDataProvider valdiContext] */

void FUN_1050230f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b3ea0;
  _objc_opt_class(PTR_PTR_1126b3ea0);
  lVar3 = param_1;
  func_0x00010bdec340(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010bf55740(uVar6,param_2,puVar2,0,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = uVar4;
  _objc_release(uVar5);
  _objc_release(lVar3);
  _objc_release(uVar6);
  _objc_release(uVar1);
  func_0x00010c1d7bc0(*(undefined8 *)(param_1 + 0xb0),param_2,param_1);
  uVar6 = *(undefined8 *)(param_1 + 0xb0);
  _objc_retain(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1050231c4; end: 105023a23; -[SCMyProfileIdentityPillsSectionDataProvider _createComponentContext] */

void FUN_1050231c4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auStack_240 [8];
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined1 auStack_218 [8];
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined1 auStack_1f0 [8];
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
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
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
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
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126b3dd8;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010bebd1c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c048600();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105023a24;
  puStack_90 = &UNK_110863718;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010c1d3960(puVar1);
  puStack_d0 = puVar3;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x105023a50;
  puStack_b8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010c1d2680(puVar1);
  lVar2 = param_1;
  func_0x00010bdd4380(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b3df0;
  _objc_alloc();
  func_0x00010bff77e0();
  puStack_f8 = puVar3;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_105023a7c;
  puStack_e0 = &UNK_110863718;
  _objc_copyWeak(auStack_d8,auStack_80);
  func_0x00010c1d3960(puVar4);
  puVar5 = PTR_PTR_1126b3ea8;
  _objc_alloc(PTR_PTR_1126b3ea8);
  puStack_120 = puVar3;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_105023b50;
  puStack_108 = &UNK_110843540;
  _objc_copyWeak(auStack_100,auStack_80);
  puStack_148 = puVar3;
  uStack_140 = 0xc2000000;
  uStack_138 = 0x105023b98;
  puStack_130 = &UNK_110843540;
  _objc_copyWeak(auStack_128,auStack_80);
  func_0x00010c031240(puVar5);
  puStack_170 = puVar3;
  uStack_168 = 0xc2000000;
  uStack_160 = 0x105023be0;
  puStack_158 = &UNK_110843540;
  _objc_copyWeak(auStack_150,auStack_80);
  func_0x00010c1d2d40(puVar5);
  puStack_198 = puVar3;
  uStack_190 = 0xc2000000;
  pcStack_188 = FUN_105023c28;
  puStack_180 = &UNK_110863748;
  _objc_copyWeak(auStack_178,auStack_80);
  func_0x00010c1b9820(puVar5);
  puStack_1c0 = puVar3;
  uStack_1b8 = 0xc2000000;
  pcStack_1b0 = FUN_105023c80;
  puStack_1a8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_1a0,auStack_80);
  func_0x00010c1d1440(puVar5);
  puStack_1e8 = puVar3;
  uStack_1e0 = 0xc2000000;
  uStack_1d8 = 0x105023cac;
  puStack_1d0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_1c8,auStack_80);
  func_0x00010c1d1420(puVar5);
  func_0x00010c17df40(puVar5);
  lVar6 = *(long *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166b20(puVar5);
  _objc_release();
  func_0x0001080608e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c08fa60();
  if (lVar7 != 0) {
    func_0x00010c17f800(puVar5);
  }
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4ce0(puVar5);
  _objc_release(uVar8);
  lVar7 = param_1;
  func_0x00010be08a40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c194b40(puVar5);
  _objc_release(lVar7);
  lVar7 = param_1;
  func_0x00010be01be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18e740(puVar5);
  _objc_release(lVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17f8a0(puVar5);
  _objc_release(uVar8);
  lVar7 = param_1;
  func_0x00010be08e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c194f00(puVar5);
  _objc_release(lVar7);
  puVar9 = PTR_PTR_1126b3eb0;
  _objc_alloc(PTR_PTR_1126b3eb0);
  func_0x00010c048620();
  puVar10 = PTR_PTR_1126b3da8;
  _objc_alloc(PTR_PTR_1126b3da8);
  func_0x00010bff77e0();
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9820(puVar10);
  _objc_release(puVar11);
  uVar12 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bf1a740(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar8;
  func_0x00010bf1a720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c170440(puVar10);
  _objc_release(uVar14);
  _objc_release(uVar8);
  _objc_release(uVar12);
  func_0x00010c1704e0(puVar9);
  lVar13 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar13;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  puVar11 = PTR_PTR_1126b3e10;
  _objc_alloc_init(PTR_PTR_1126b3e10);
  lVar13 = lVar7;
  func_0x00010c08fa60();
  if (lVar13 != 0) {
    uVar14 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar14;
    func_0x00010c07b920();
    _objc_release(uVar14);
    if ((int)uVar8 != 0) {
      func_0x00010c1f5660(puVar11);
      puStack_210 = puVar3;
      uStack_208 = 0xc2000000;
      uStack_200 = 0x105023cd8;
      puStack_1f8 = &UNK_110843540;
      _objc_copyWeak(auStack_1f0,auStack_80);
      func_0x00010c1d3960(puVar11);
      _objc_destroyWeak(auStack_1f0);
    }
  }
  puStack_238 = puVar3;
  uStack_230 = 0xc2000000;
  uStack_228 = 0x105023d20;
  puStack_220 = &UNK_1108434b0;
  _objc_copyWeak(auStack_218,auStack_80);
  func_0x00010c1d4300(puVar11);
  func_0x00010c1f5560(puVar9);
  lVar13 = *(long *)(param_1 + 0x78);
  func_0x00010c0dd8c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar13 != 0) {
    _objc_copyWeak(auStack_240,auStack_80);
    func_0x00010c1d2bc0(lVar13);
    func_0x00010c1ce8c0(puVar9);
    _objc_destroyWeak(auStack_240);
  }
  func_0x00010becd800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c217780(puVar9);
  _objc_release(param_1);
  _objc_release(lVar13);
  _objc_destroyWeak(auStack_218);
  _objc_release(puVar11);
  _objc_release(lVar7);
  _objc_release(puVar10);
  _objc_release(lVar6);
  _objc_destroyWeak(auStack_1c8);
  _objc_destroyWeak(auStack_1a0);
  _objc_destroyWeak(auStack_178);
  _objc_destroyWeak(auStack_150);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_128);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_d8);
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 105023a24; end: 105023a7b;  */

void FUN_105023a24(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6b860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105023a7c; end: 105023b4f;  */

void FUN_105023a7c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b3d80;
  func_0x00010c0d47c0(PTR_PTR_1126b3d80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b460(puVar1);
  _objc_release(puVar2);
  uVar3 = param_2;
  func_0x00010b9688dc(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be250a0();
  _objc_release(param_1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105023b50; end: 105023c27;  */

void FUN_105023b50(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be685e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105023c28; end: 105023c7f;  */

void FUN_105023c28(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6c7a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105023c80; end: 105023daf;  */

void FUN_105023c80(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be67a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105023db0; end: 105023fc7; -[SCMyProfileIdentityPillsSectionDataProvider _topicChatPillContext] */

void FUN_105023db0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf913c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x90);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c275b20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar4 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      lVar5 = *(long *)(param_1 + 0x98);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar5;
      func_0x00010bf55bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      if (lVar3 == 0) {
        puVar8 = (undefined *)0x0;
      }
      else {
        lVar6 = *(long *)(param_1 + 0x88);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar6;
        func_0x00010c275420();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
        if (lVar5 == 0) {
          puVar8 = (undefined *)0x0;
        }
        else {
          puVar8 = PTR_PTR_1126b3dc0;
          _objc_opt_new(PTR_PTR_1126b3dc0);
          lVar6 = lVar3;
          func_0x00010bf553a0(lVar3);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010bf668c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c18a1e0(puVar8);
          _objc_release(lVar7);
          _objc_release(lVar6);
          func_0x00010c2178a0(puVar8);
          _objc_initWeak(auStack_58,param_1);
          _objc_copyWeak(auStack_60,auStack_58);
          func_0x00010c1d14e0(puVar8);
          _objc_destroyWeak(auStack_60);
          _objc_destroyWeak(auStack_58);
        }
        _objc_release(lVar5);
      }
      _objc_release(lVar3);
    }
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105023fc8; end: 105024093;  */

void FUN_105023fc8(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105024040;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x000100162d98("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105024094; end: 105024107; -[SCMyProfileIdentityPillsSectionDataProvider _onCommunityPillTapWithStoryId:] */

void FUN_105024094(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01b460();
  _objc_release(param_3);
  func_0x00010be250a0(param_1,param_2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105024108; end: 10502415b; -[SCMyProfileIdentityPillsSectionDataProvider _onAddCollegeTap] */

void FUN_105024108(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010be250a0(param_1,param_2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10502415c; end: 1050241af; -[SCMyProfileIdentityPillsSectionDataProvider _onAddCommunityTap] */

void FUN_10502415c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010be250a0(param_1,param_2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050241b0; end: 105024223; -[SCMyProfileIdentityPillsSectionDataProvider _onCommunityPillLongPressWithStoryId:] */

void FUN_1050241b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01b460();
  _objc_release(param_3);
  func_0x00010be250a0(param_1,param_2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105024224; end: 105024297; -[SCMyProfileIdentityPillsSectionDataProvider _onPendingCommunityPillLongPressWithStoryId:] */

void FUN_105024224(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01b460();
  _objc_release(param_3);
  func_0x00010be250a0(param_1,param_2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105024298; end: 1050242df; -[SCMyProfileIdentityPillsSectionDataProvider _setSnapcodeExpandTimestamp] */

void FUN_105024298(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beec800(*(undefined8 *)(param_2 + 0xb8));
  func_0x00010c206000(uVar1,param_3,(long)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050242e0; end: 1050243a3; -[SCMyProfileIdentityPillsSectionDataProvider _setSnapcodeTooltipLastImpressionTimestamp] */

void FUN_1050242e0(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beec800(*(undefined8 *)(param_2 + 0xb8));
  func_0x00010c2060a0(uVar1,param_3,(long)param_1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b3d60;
  func_0x00010c2451c0(PTR_PTR_1126b3d60);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  func_0x00010bfcdfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c116880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1050243a4; end: 1050245c7; -[SCMyProfileIdentityPillsSectionDataProvider _onSnapScoreTap] */

void FUN_1050243a4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c276ac0();
  func_0x00010c15e2e0();
  func_0x00010c122260();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110dc2e78);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c276ac0();
  if (uVar1 == 0) {
    puVar4 = PTR_PTR_1126b3e90;
    _objc_opt_new(PTR_PTR_1126b3e90);
    func_0x00010c1e3ee0();
    uVar10 = *(undefined8 *)(param_1 + 0xc0);
    puVar5 = PTR_PTR_1126b3e98;
    func_0x00010bf60460(PTR_PTR_1126b3e98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c133420(uVar10,param_2,puVar4,0,puVar3,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  puVar5 = PTR_PTR_1126b3e60;
  _objc_alloc(PTR_PTR_1126b3e60);
  uVar1 = uVar2;
  func_0x00010c276ac0(uVar2);
  uVar6 = uVar2;
  func_0x00010c15e2e0(uVar2);
  uVar7 = uVar2;
  func_0x00010c122260(uVar2);
  func_0x00010c0485e0((double)uVar1,(double)uVar6,(double)uVar7,puVar5);
  lVar8 = *(long *)(param_1 + 0x30);
  func_0x000108fab38c();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (0 < lVar8) {
    uVar1 = uVar2;
    func_0x00010c258a00(uVar2);
    func_0x00010c0df720((double)uVar1,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20c780(puVar5,param_2,puVar4);
    _objc_release(puVar4);
  }
  puVar4 = PTR_PTR_1126afdb8;
  _objc_alloc(PTR_PTR_1126afdb8);
  func_0x00010bff0880();
  puVar9 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010be250a0(param_1,param_2,puVar9,0);
  _objc_release(puVar9);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1050245c8; end: 105024687; -[SCMyProfileIdentityPillsSectionDataProvider _onWaitlistPillTapWithIsVerified:completion:] */

void FUN_1050245c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b3e48;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c01fb00();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126afdb8;
  _objc_alloc(PTR_PTR_1126afdb8);
  func_0x00010bff0880();
  puVar3 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010be250a0(param_1,param_2,puVar3,0);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105024688; end: 10502471f; -[SCMyProfileIdentityPillsSectionDataProvider _onSaturnPillTapWithURL:] */

void FUN_105024688(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afdb8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bff0880();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010be250a0(param_1,param_2,puVar2,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105024720; end: 105024773; -[SCMyProfileIdentityPillsSectionDataProvider _onSaturnUpsellPillTap] */

void FUN_105024720(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010be250a0(param_1,param_2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105024774; end: 10502482b; -[SCMyProfileIdentityPillsSectionDataProvider _handleAction:fromSourceView:] */

void FUN_105024774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10502482c;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10502482c; end: 10502483f;  */

void FUN_10502482c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xe0),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,*(long *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 105024840; end: 1050248b3; -[SCMyProfileIdentityPillsSectionDataProvider _overrideViewedSaturnPrivacySettingsForInternalTesting] */

void FUN_105024840(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x000108fab238();
  if (lVar1 != 1) {
    lVar1 = *(long *)(param_1 + 0x30);
    func_0x000108fab238();
    if (lVar1 != 2) {
      return;
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c222f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1050248b4; end: 1050248cb; -[SCMyProfileIdentityPillsSectionDataProvider contextProviderDelegate] */

void FUN_1050248b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050248cc; end: 1050248d7; -[SCMyProfileIdentityPillsSectionDataProvider setContextProviderDelegate:] */

void FUN_1050248cc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xd0,param_3);
  return;
}



/* Entry: 1050248d8; end: 1050248df; -[SCMyProfileIdentityPillsSectionDataProvider updateQueuePerformer] */

undefined8 FUN_1050248d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 1050248e0; end: 10502490f; -[SCMyProfileIdentityPillsSectionDataProvider setUpdateQueuePerformer:] */

void FUN_1050248e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105024910; end: 105024917; -[SCMyProfileIdentityPillsSectionDataProvider actionHandler] */

undefined8 FUN_105024910(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 105024918; end: 105024947; -[SCMyProfileIdentityPillsSectionDataProvider setActionHandler:] */

void FUN_105024918(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105024948; end: 105024aab; -[SCMyProfileIdentityPillsSectionDataProvider .cxx_destruct] */

void FUN_105024948(long param_1)

{
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_destroyWeak(param_1 + 0xd0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
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



/* Entry: 105024aac; end: 105024beb; -[SCMyProfileIdentityPillsSectionPluginsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105024aac(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_1 + _DAT_112719b18;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0cf9a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112719b1c);
  *(long *)(param_1 + _DAT_112719b1c) = lVar4;
  _objc_release(uVar6);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bf22740(&uStack_58,param_1);
  puVar5 = PTR_PTR_1126afda8;
  _objc_alloc(PTR_PTR_1126afda8);
  func_0x00010c032260();
  param_1 = param_1 + _DAT_112719b20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(uStack_58);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  return;
}



/* Entry: 105024bec; end: 105024dd3; -[SCMyProfileIdentityPillsSectionPluginsEntryPoint buildSectionData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105024bec(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_2);
  lVar1 = param_2 + _DAT_112719b24;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar7 = *(undefined8 *)(param_2 + _DAT_112719b1c);
  _objc_retain(uVar7);
  puVar5 = PTR_PTR_1126ae720;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105024dd4;
  puStack_88 = &UNK_110862bf8;
  _objc_copyWeak(auStack_70,auStack_68);
  lStack_80 = lVar4;
  uStack_78 = uVar7;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_a8,auStack_68);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  *param_1 = puVar5;
  param_1[1] = puVar6;
  param_1[2] = lVar4;
  _objc_retain(lVar4);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar7);
  _objc_release(lVar4);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 105024dd4; end: 105024e5b;  */

void FUN_105024dd4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf2fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105024e5c; end: 1050254eb; -[SCMyProfileIdentityPillsSectionPluginsEntryPoint _createSectionWithPerformer:uiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105024e5c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
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
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  undefined *puVar37;
  undefined *puVar38;
  long lVar39;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_98,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1050254ec;
  puStack_a8 = &UNK_110863778;
  _objc_copyWeak(auStack_a0,auStack_98);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_c8,auStack_98);
  _objc_retain(param_4);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b3eb8;
  _objc_alloc();
  lVar39 = (long)_DAT_112719b28;
  lVar4 = param_1 + lVar39;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c150cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + lVar39;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bf1a840();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = param_1 + lVar39;
  _objc_loadWeakRetained();
  lVar8 = lVar39;
  func_0x00010c149d00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112719b2c;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112719b34;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_112719b38;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bf3f680();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_112719b3c;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_112719b40;
  _objc_loadWeakRetained();
  lVar19 = param_1 + _DAT_112719b44;
  _objc_loadWeakRetained();
  lVar20 = param_1 + _DAT_112719b48;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010bf53fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + _DAT_112719b4c;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010bf43140();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_112719b50;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010c149ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + _DAT_112719b54;
  _objc_loadWeakRetained();
  lVar27 = param_1 + _DAT_112719b58;
  _objc_loadWeakRetained();
  lVar28 = lVar27;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1 + _DAT_112719b5c;
  _objc_loadWeakRetained();
  lVar30 = lVar29;
  func_0x00010c275400();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1 + _DAT_112719b18;
  _objc_loadWeakRetained();
  lVar32 = lVar31;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1 + _DAT_112719b60;
  _objc_loadWeakRetained();
  lVar34 = lVar33;
  func_0x00010bf66980();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = lVar34;
  func_0x00010bf66920();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112719b64;
  _objc_loadWeakRetained();
  lVar36 = param_1;
  func_0x00010bfba180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c042300();
  _objc_release(lVar36);
  _objc_release(param_1);
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
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar39);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  ppuStack_90 = &PTR____CFConstantStringClassReference_110eb4ff8;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110f12198;
  puVar37 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar38 = PTR_PTR_1126b2b48;
  _objc_alloc(PTR_PTR_1126b2b48);
  func_0x00010c000720(0,0x4030000000000000,0,0x4030000000000000);
  func_0x00010c21c600();
  _objc_release(puVar37);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_c8);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_c8);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_98);
    __Unwind_Resume(param_3);
    puVar1 = (undefined *)(param_3 + 0x20);
    _objc_loadWeakRetained(puVar1);
    puVar38 = puVar1;
    func_0x00010bdec300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar38);
  return;
}



/* Entry: 1050254ec; end: 105025573;  */

void FUN_1050254ec(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdec300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105025574; end: 105025803; -[SCMyProfileIdentityPillsSectionPluginsEntryPoint _createActionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105025574(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
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
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_initWeak(auStack_70,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b3ec0;
  _objc_alloc();
  lVar3 = param_1 + _DAT_112719b2c;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112719b34;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112719b7c;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c149be0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112719b50;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c149ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112719b80;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bf42d20();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112719b88;
  _objc_loadWeakRetained();
  func_0x00010c05fdc0(puVar2);
  _objc_release(param_1);
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
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105025804; end: 105025843;  */

void FUN_105025804(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdec300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105025844; end: 1050259cf; -[SCMyProfileIdentityPillsSectionPluginsEntryPoint _createCommunityOrgService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105025844(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar1,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar1,param_2,60000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_112719b24;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_112719b8c;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bfcfa80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0b7020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1050259d0; end: 105025a73; -[SCMyProfileIdentityPillsSectionPluginsEntryPoint _createAlertPresenterWithUIContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050259d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112719b90;
  _objc_retain(param_3);
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010beff660();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b7600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105025a74; end: 105025cb7; -[SCMyProfileIdentityPillsSectionPluginsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105025a74(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112719b88);
  _objc_storeStrong(param_1 + _DAT_112719b84,0);
  _objc_destroyWeak(param_1 + _DAT_112719b64);
  _objc_destroyWeak(param_1 + _DAT_112719b60);
  _objc_destroyWeak(param_1 + _DAT_112719b5c);
  _objc_destroyWeak(param_1 + _DAT_112719b58);
  _objc_destroyWeak(param_1 + _DAT_112719b54);
  _objc_storeStrong(param_1 + _DAT_112719b78,0);
  _objc_storeStrong(param_1 + _DAT_112719bbc,0);
  _objc_storeStrong(param_1 + _DAT_112719b70,0);
  _objc_storeStrong(param_1 + _DAT_112719b6c,0);
  _objc_storeStrong(param_1 + _DAT_112719b68,0);
  _objc_storeStrong(param_1 + _DAT_112719b74,0);
  _objc_storeStrong(param_1 + _DAT_112719bb8,0);
  _objc_storeStrong(param_1 + _DAT_112719b30,0);
  _objc_storeStrong(param_1 + _DAT_112719bb4,0);
  _objc_destroyWeak(param_1 + _DAT_112719b80);
  _objc_destroyWeak(param_1 + _DAT_112719b7c);
  _objc_destroyWeak(param_1 + _DAT_112719b50);
  _objc_destroyWeak(param_1 + _DAT_112719b48);
  _objc_destroyWeak(param_1 + _DAT_112719b44);
  _objc_destroyWeak(param_1 + _DAT_112719bb0);
  _objc_destroyWeak(param_1 + _DAT_112719bac);
  _objc_destroyWeak(param_1 + _DAT_112719ba8);
  _objc_destroyWeak(param_1 + _DAT_112719b18);
  _objc_destroyWeak(param_1 + _DAT_112719b90);
  _objc_destroyWeak(param_1 + _DAT_112719b8c);
  _objc_destroyWeak(param_1 + _DAT_112719b4c);
  _objc_destroyWeak(param_1 + _DAT_112719b40);
  _objc_destroyWeak(param_1 + _DAT_112719b3c);
  _objc_destroyWeak(param_1 + _DAT_112719b24);
  _objc_destroyWeak(param_1 + _DAT_112719ba4);
  _objc_destroyWeak(param_1 + _DAT_112719ba0);
  _objc_destroyWeak(param_1 + _DAT_112719b38);
  _objc_destroyWeak(param_1 + _DAT_112719b34);
  _objc_destroyWeak(param_1 + _DAT_112719b9c);
  _objc_destroyWeak(param_1 + _DAT_112719b98);
  _objc_destroyWeak(param_1 + _DAT_112719b2c);
  _objc_destroyWeak(param_1 + _DAT_112719b94);
  _objc_destroyWeak(param_1 + _DAT_112719b20);
  _objc_destroyWeak(param_1 + _DAT_112719b28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112719b1c,0);
  return;
}



/* Entry: 105025cb8; end: 105025cc3; +[SCCProfile3MyProfile3RootComponent componentPath] */

undefined ** FUN_105025cb8(void)

{
  return &PTR____CFConstantStringClassReference_110dc2ed8;
}



/* Entry: 105025cc4; end: 105025ce7; -[SCCProfile3MyProfile3RootComponent initWithViewModel:componentContext:runtime:] */

void FUN_105025cc4(void)

{
  FUN_105025e08(PTR_PTR_1126e5aa0);
  return;
}



/* Entry: 105025ce8; end: 105025d1f; -[SCCProfile3MyProfile3RootComponent setViewModel:] */

void FUN_105025ce8(void)

{
  func_0x000105025e24();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105025e34();
  func_0x000105025e1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105025d20; end: 105025d5f; -[SCCProfile3MyProfile3RootComponent viewModel] */

void FUN_105025d20(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105025e1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105025d60; end: 105025d6b; +[SCCProfile3UserProfileV2RootComponent componentPath] */

undefined ** FUN_105025d60(void)

{
  return &PTR____CFConstantStringClassReference_110dc2ef8;
}



/* Entry: 105025d6c; end: 105025d8f; -[SCCProfile3UserProfileV2RootComponent initWithViewModel:componentContext:runtime:] */

void FUN_105025d6c(void)

{
  FUN_105025e08(PTR_PTR_1126e5aa8);
  return;
}



/* Entry: 105025d90; end: 105025dc7; -[SCCProfile3UserProfileV2RootComponent setViewModel:] */

void FUN_105025d90(void)

{
  func_0x000105025e24();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105025e34();
  func_0x000105025e1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105025dc8; end: 105025e07; -[SCCProfile3UserProfileV2RootComponent viewModel] */

void FUN_105025dc8(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105025e1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105025e08; end: 105025e3f;  */

void FUN_105025e08(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 105025e40; end: 105025e7b; -[SCCProfile3MyProfile3Context initWithDependencyContext:] */

void FUN_105025e40(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e5ab0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105025e7c; end: 105025e8f; +[SCCProfile3MyProfile3Context valdiMarshallableObjectDescriptor] */

void FUN_105025e7c(undefined8 *param_1)

{
  *param_1 = &PTR_s_dependencyContext_1108637d8;
  param_1[1] = &PTR_s_SCCProfile3ApiMyProfile3PublicCo_110863808;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105025e90; end: 105025ec3; -[SCCProfile3MyProfile3ViewModel init] */

void FUN_105025e90(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e5ab8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 105025ec4; end: 105025edb; +[SCCProfile3MyProfile3ViewModel valdiMarshallableObjectDescriptor] */

void FUN_105025ec4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10dd8df50;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105025edc; end: 105025f0f; -[SCCProfile3UserProfileV2Context initWithPublicProfileContext:publicProfileViewModel:privateProfileContext:] */

void FUN_105025edc(undefined8 param_1)

{
  func_0x000105025f7c(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 105025f10; end: 105025f23; +[SCCProfile3UserProfileV2Context valdiMarshallableObjectDescriptor] */

void FUN_105025f10(undefined8 *param_1)

{
  *param_1 = &PTR_s_publicProfileContext_110863818;
  param_1[1] = &PTR_s_SCCFoundationProvider_110863878;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105025f24; end: 105025f57; -[SCCProfile3UserProfileV2ViewModel initWithPrivateProfileViewModel:hasPublicProfile:] */

void FUN_105025f24(undefined8 param_1)

{
  func_0x000105025f7c(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 105025f58; end: 105025f8b; +[SCCProfile3UserProfileV2ViewModel valdiMarshallableObjectDescriptor] */

void FUN_105025f58(undefined8 *param_1)

{
  *param_1 = &PTR_s_privateProfileViewModel_1108638a0;
  param_1[1] = &PTR_s_SCProfileFlatlandFriendProfileVi_110863900;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105025f8c; end: 105025fdf; -[SCProfileFlatlandMyProfileLoggingHelper friendshipStatus] */

void FUN_105025f8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105025fe0; end: 105025fe7; -[SCProfileFlatlandMyProfileLoggingHelper shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_105025fe0(void)

{
  return 0;
}



/* Entry: 105025fe8; end: 105025ff3; -[SCProfileFlatlandMyProfileLoggingHelper pushToValdiMarshaller:] */

void FUN_105025fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b046e08(param_3,param_1);
  func_0x00010b046ddc();
  func_0x00010b046de4();
  func_0x00010b046d54();
  func_0x00010b046d94();
  return;
}



/* Entry: 105025ff4; end: 105025ffb; -[SCProfileFlatlandMyProfileLoggingHelper profileSessionId] */

undefined8 FUN_105025ff4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105025ffc; end: 105026003; -[SCProfileFlatlandMyProfileLoggingHelper setProfileSessionId:] */

void FUN_105025ffc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105026004; end: 10502600b; -[SCProfileFlatlandMyProfileLoggingHelper blizzardLogger] */

undefined8 FUN_105026004(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10502600c; end: 10502603b; -[SCProfileFlatlandMyProfileLoggingHelper setBlizzardLogger:] */

void FUN_10502600c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10502603c; end: 10502606b; -[SCProfileFlatlandMyProfileLoggingHelper .cxx_destruct] */

void FUN_10502603c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10502606c; end: 105026697; -[SCProfileFlatlandMyProfileRootViewCreator initWithScopedValdiRuntimeProvider:myUserId:myUsernameProvider:myDisplayNameProvider:myBitmojiAvatarIdProvider:bitmojiServiceFactory:displaySnapcodeViewSubject:snapcodeScopeExposer:composerAlertPresenterFactory:sharePageController:flatlandLoggingHelper:composerCOFStore:circumstanceEngine:phoneNumberProvider:contactPermissionInfoProvider:featureSettings:profileBackgroundPickerMode:plusFeatureBadging:generativeBackgroundsFeatureStatusProvider:generativeBackgroundsComposerContextFactory:openningData:glbFetcher:bitmojiAvatarProvider:transitionToViewStateSubject:updateScrollPositionYSubject:deckServices:linkGenerationService:notificationPool:userTrackedLogger:offPlatformShareFeatureProvider:showBitmojiIdentityViewOnOpen:] */

undefined8 *
FUN_10502606c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined1 param_33)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  func_0x00010c08fa60(param_4);
  puStack_70 = PTR_PTR_1126e5ad0;
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
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    puVar1[0x11] = param_19;
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_27;
    _objc_release(uVar2);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = 0;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_25;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x19];
    puVar1[0x19] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126aeea8;
    _objc_opt_new();
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_32;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x23) = param_33;
  }
  _objc_release(param_32);
  _objc_release(param_31);
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



/* Entry: 105026698; end: 10502669f; -[SCProfileFlatlandMyProfileRootViewCreator warmup] */

void FUN_105026698(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x68),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dc39d8,0,0);
  return;
}



/* Entry: 1050266a0; end: 105026897; -[SCProfileFlatlandMyProfileRootViewCreator createRootViewAsyncWithOwner:actionHandler:profileManagementComposerViewProvider:presentingViewController:delegate:] */

void FUN_1050266a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_7);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_60,param_1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_70,auStack_60);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = auStack_68;
  _objc_copyWeak(puVar2,auStack_58);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc9d60(uVar4);
  _objc_release(puVar2);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_60);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105026898; end: 10502694b;  */

void FUN_105026898(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar1;
  func_0x00010bdf2aa0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10502694c; end: 105026b9f; -[SCProfileFlatlandMyProfileRootViewCreator _createRootViewWithOwner:valdiRuntime:actionHandler:profileManagementComposerViewProvider:presentingViewController:delegate:] */

void FUN_10502694c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_68,param_8);
  func_0x000105be7354(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x70),
                      *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),
                      *(undefined8 *)(param_1 + 0x68));
  puVar1 = auStack_68;
  _objc_loadWeakRetained(puVar1);
  lVar2 = param_1;
  func_0x00010bdec780(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  lVar3 = param_1;
  func_0x00010bdf59a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd4300(param_1);
  puVar4 = PTR_PTR_1126b3ec8;
  _objc_alloc(PTR_PTR_1126b3ec8);
  func_0x00010c032a60();
  _objc_initWeak(auStack_70,param_1);
  puVar5 = puVar4;
  func_0x00010c295200(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_70);
  _objc_opt_class(PTR_PTR_1126b3e88);
  func_0x00010c1275a0(puVar5);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}


