/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104e28e68; end: 104e2900f; -[SCActivityFeedViewController _handleSettingsTapWithProfileId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e28e68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038f40();
  puVar2 = PTR_PTR_1126b0ea8;
  _objc_opt_new(PTR_PTR_1126b0ea8);
  func_0x00010c19a840();
  puVar3 = PTR_PTR_1126b0eb0;
  _objc_opt_new(PTR_PTR_1126b0eb0);
  func_0x00010c1e4340(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c116d60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e4140();
  _objc_release(param_3);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c116d60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c199d60();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c116d60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1acca0();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c116d60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b220();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c116d60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18ab40();
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112713dec);
  func_0x00010c0f14e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08c020();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e29010; end: 104e29067; -[SCActivityFeedViewController _onTapDismiss] */

void FUN_104e29010(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104e29068;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_38);
  return;
}



/* Entry: 104e29068; end: 104e290d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e29068(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112713df8;
  lVar1 = *(long *)(param_1 + 0x20) + lVar2;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20) + lVar2;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bef1540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 104e290d4; end: 104e29147; -[SCActivityFeedViewController _handlePushNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e290d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + _DAT_112713e04) & 1) == 0) {
    lVar2 = (long)_DAT_112713dfc;
    if (*(long *)(param_1 + lVar2) != 0) {
      func_0x00010c0e9860(*(undefined8 *)(param_1 + _DAT_112713de8),param_2,
                          *(long *)(param_1 + lVar2),1,0,0,0,0);
      uVar1 = *(undefined8 *)(param_1 + lVar2);
      *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 104e29148; end: 104e2933f; -[SCActivityFeedViewController _checkIfUserHasPostedSpotlightWithDatabaseStore:] */

undefined * FUN_104e29148(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bfa94c0(param_3,param_2,3);
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain();
  puVar8 = &uStack_1b0;
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,puVar8,auStack_f0,0x10);
  puVar9 = (undefined *)0x0;
  if (lVar1 != 0) {
    lVar10 = *plStack_1a0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_1a0 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        lVar2 = *(long *)(lStack_1a8 + lVar11 * 8);
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        func_0x00010c25b340();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        puVar8 = &uStack_1f0;
        func_0x00010bf52a60();
        if (lVar3 != 0) {
          lVar12 = *plStack_1e0;
          do {
            lVar13 = 0;
            do {
              if (*plStack_1e0 != lVar12) {
                _objc_enumerationMutation(lVar2);
              }
              uVar4 = *(ulong *)(lStack_1e8 + lVar13 * 8);
              func_0x00010bf0e700();
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar4;
              func_0x00010bf0a8c0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar4);
              uVar4 = uVar5;
              func_0x00010c07f5e0();
              _objc_release(uVar5);
              if ((uVar4 & 1) != 0) {
                _objc_release(lVar2);
                puVar9 = (undefined *)0x1;
                goto LAB_104e292f0;
              }
              lVar13 = lVar13 + 1;
            } while (lVar3 != lVar13);
            lVar3 = lVar2;
            puVar8 = &uStack_1f0;
            func_0x00010bf52a60(lVar2,param_2,&uStack_1f0,auStack_170,0x10);
          } while (lVar3 != 0);
        }
        _objc_release(lVar2);
        lVar11 = lVar11 + 1;
      } while (lVar11 != lVar1);
      puVar8 = &uStack_1b0;
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,puVar8,auStack_f0,0x10);
    } while (lVar1 != 0);
    puVar9 = (undefined *)0x0;
  }
LAB_104e292f0:
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar9;
  }
  ___stack_chk_fail();
  puVar9 = PTR_PTR_1126b0eb8;
  _objc_retain(puVar8);
  _objc_alloc_init(puVar9);
  puVar6 = puVar9;
  func_0x000108f27420();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar8;
  func_0x000108f277a0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  lVar1 = param_3;
  func_0x00010bebd040(param_3,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebd040(param_3,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a89e0(puVar9,param_2,lVar1);
  func_0x00010c20d9a0(puVar9,param_2,param_3);
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(puVar7);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return puVar9;
}



/* Entry: 104e29340; end: 104e29423; -[SCActivityFeedViewController _createServiceConfigWithCircumstanceEngine:] */

void FUN_104e29340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b0eb8;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  puVar2 = puVar1;
  func_0x000108f27420();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x000108f277a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = param_1;
  func_0x00010bebd040(param_1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebd040(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a89e0(puVar1,param_2,uVar4);
  func_0x00010c20d9a0(puVar1,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e29424; end: 104e2950f; -[SCActivityFeedViewController _snapProRPCConfigToConfigValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e29424(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b0ec0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bf162c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c150960(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c142020(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112713e00);
  func_0x000108f27828(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7180(puVar1,param_2,uVar2,uVar3,uVar4,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e29510; end: 104e29517; -[SCActivityFeedViewController pageViewName] */

undefined8 FUN_104e29510(void)

{
  return 4;
}



/* Entry: 104e29518; end: 104e29523; -[SCActivityFeedViewController defaultProjectNameV2] */

void FUN_104e29518(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dcc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_notification_center_112614d18);
  return;
}



/* Entry: 104e29524; end: 104e2957b; -[SCActivityFeedViewController reportDidCompleteWithCancelled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e29524(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112713de4;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104e2957c; end: 104e2957f; -[SCActivityFeedViewController activityFeedViewController] */

void FUN_104e2957c(void)

{
  return;
}



/* Entry: 104e29580; end: 104e2961b; -[SCActivityFeedViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e29580(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112713df4,0);
  _objc_storeStrong(param_1 + _DAT_112713dec,0);
  _objc_destroyWeak(param_1 + _DAT_112713df8);
  _objc_storeStrong(param_1 + _DAT_112713e00,0);
  _objc_storeStrong(param_1 + _DAT_112713dfc,0);
  _objc_storeStrong(param_1 + _DAT_112713de8,0);
  _objc_storeStrong(param_1 + _DAT_112713de4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112713df0,0);
  return;
}



/* Entry: 104e2961c; end: 104e296b7; -[SCSnapInsightsPresenter initWithSnapInsightsScopeExposer:viewController:] */

undefined1 *
FUN_104e2961c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e46d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e296b8; end: 104e29a33; -[SCSnapInsightsPresenter launchInsightsWithProfileId:snapId:thumbnailUrl:timestamp:animated:] */

void FUN_104e296b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x104e29800;
  puStack_98 = &UNK_110852860;
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_90 = param_4;
  uStack_88 = param_5;
  uStack_80 = param_3;
  uStack_78 = param_1;
  uStack_70 = param_7;
  uStack_60 = param_6;
  _objc_retain(param_7);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_b0);
  _objc_release(uStack_70);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 104e29a34; end: 104e29a8f; -[SCSnapInsightsPresenter snapInsightsDidComplete] */

void FUN_104e29a34(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 104e29a90; end: 104e29b37; -[SCSnapInsightsPresenter snapInsightsNeedsRemoval] */

void FUN_104e29a90(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf6f440(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e29b38; end: 104e29b6b;  */

void FUN_104e29b38(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c241760(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e29b6c; end: 104e29cf7; -[SCSnapInsightsPresenter providedViewControllerWithProvidedViewControllerBlock:] */

void FUN_104e29b6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126aeaf8;
  _objc_alloc();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104e29cf8;
  puStack_70 = &UNK_110852890;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  uStack_68 = param_3;
  _objc_copyWeak(auStack_90,auStack_58);
  func_0x00010c0311a0();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b0ee8;
  _objc_alloc(PTR_PTR_1126b0ee8);
  func_0x00010c058940();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_90);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 104e29cf8; end: 104e29d87;  */

void FUN_104e29cf8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
    _objc_alloc();
    func_0x00010c0402e0();
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined **)(lVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    func_0x00010c1cb780(*(undefined8 *)(lVar1 + 0x20));
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
              (*(long *)(param_1 + 0x20),*(undefined8 *)(lVar1 + 0x20));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e29d88; end: 104e29dcf;  */

void FUN_104e29d88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf84b00(*(undefined8 *)(param_1 + 0x20),param_2,1,0);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e29dd0; end: 104e29dd3; -[SCSnapInsightsPresenter swipeInteractionPresenter:didStartPresentingWithSwipeDirection:] */

void FUN_104e29dd0(void)

{
  return;
}



/* Entry: 104e29dd4; end: 104e29dd7; -[SCSnapInsightsPresenter swipeInteractionPresenterDidFinishDismissing:] */

void FUN_104e29dd4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_snapInsightsDidComplete_11266e000);
  return;
}



/* Entry: 104e29dd8; end: 104e29ddf; -[SCSnapInsightsPresenter swipeInteractionPresenter:swipeEnabledWithDirection:] */

undefined8 FUN_104e29dd8(void)

{
  return 0;
}



/* Entry: 104e29de0; end: 104e29deb; -[SCSnapInsightsPresenter pushToValdiMarshaller:] */

undefined8 FUN_104e29de0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000106830df8(param_3,param_1);
  func_0x000106830e00();
  func_0x000106830d80();
  func_0x000106830d6c();
  return param_3;
}



/* Entry: 104e29dec; end: 104e29e47; -[SCSnapInsightsPresenter .cxx_destruct] */

void FUN_104e29dec(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e29e48; end: 104e29f8f; -[SCSnapMentionsPresenter initWithSnapRepostMentionScopeExposer:conversationIdResolver:viewController:storiesNetworkRequester:networkConnectivityMonitor:circumstanceEngine:storyPlayer:adRenderDataParser:] */

undefined1 *
FUN_104e29e48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_58 = PTR_PTR_1126e46d8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e29f90; end: 104e29f93; -[SCSnapMentionsPresenter launchRepostMentionWithMediaId:mediaType:snapId:userId:musicTrackInfo:] */

void FUN_104e29f90(void)

{
  return;
}



/* Entry: 104e29f94; end: 104e2a0af; -[SCSnapMentionsPresenter launchPlaybackWithRawStoryCard:] */

void FUN_104e29f94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  puVar2 = PTR_PTR_1126b0ef0;
  func_0x00010c0f40e0(PTR_PTR_1126b0ef0,param_2,param_3,&uStack_48);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uStack_48;
  _objc_retain(uStack_48);
  puVar3 = PTR_PTR_1126b0ef8;
  _objc_alloc(PTR_PTR_1126b0ef8);
  func_0x00010c03ef40();
  puVar4 = puVar2;
  func_0x000108482f84(puVar2,puVar3,0,0,0,0,0,0,0,0,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fe960(*(undefined8 *)(param_1 + 0x28));
  _objc_release(uVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 104e2a0b0; end: 104e2a0f7; -[SCSnapMentionsPresenter didDismissRepostMention] */

void FUN_104e2a0b0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104e2a0f8; end: 104e2a103; -[SCSnapMentionsPresenter pushToValdiMarshaller:] */

undefined8 FUN_104e2a0f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000106830df8(param_3,param_1);
  func_0x000106830e00();
  func_0x000106830d80();
  func_0x000106830d6c();
  return param_3;
}



/* Entry: 104e2a104; end: 104e2a15f; -[SCSnapMentionsPresenter .cxx_destruct] */

void FUN_104e2a104(long param_1)

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



/* Entry: 104e2a160; end: 104e2a737; -[SCBusinessProfilesPresenterEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e2a160(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_112713e38;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar9;
  func_0x00010c1173c0();
  _objc_release(lVar9);
  if (lVar1 == 3) {
    puVar2 = PTR_PTR_1126b0f00;
    _objc_alloc();
    lVar11 = (long)_DAT_112713e38;
    lVar9 = param_1 + lVar11;
    _objc_loadWeakRetained(lVar9);
    lVar4 = lVar9;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + lVar11;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c078840();
    func_0x00010c039160();
    lVar12 = (long)_DAT_112713e3c;
    uVar8 = *(undefined8 *)(param_1 + lVar12);
    *(undefined **)(param_1 + lVar12) = puVar2;
    _objc_release(uVar8);
    _objc_release(lVar1);
    _objc_release(lVar4);
    _objc_release(lVar9);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar12));
    func_0x00010c1da860(*(undefined8 *)(param_1 + lVar12));
    puVar2 = PTR_PTR_1126b0f08;
    _objc_alloc(PTR_PTR_1126b0f08);
    lVar9 = param_1 + lVar11;
    _objc_loadWeakRetained(lVar9);
    lVar4 = lVar9;
    func_0x00010c247a20();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + lVar11;
    _objc_loadWeakRetained();
    lVar10 = lVar1;
    func_0x00010c0f1180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04abc0(puVar2);
    _objc_release(lVar10);
    _objc_release(lVar1);
    _objc_release(lVar4);
    _objc_release(lVar9);
    lVar9 = param_1 + _DAT_112713e50;
    _objc_loadWeakRetained();
    lVar1 = lVar9;
    func_0x00010c29c340();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar9);
    lVar9 = param_1 + lVar11;
    _objc_loadWeakRetained(lVar9);
    lVar1 = lVar9;
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1 + lVar11;
    _objc_loadWeakRetained(lVar11);
    lVar10 = lVar11;
    func_0x00010c2394a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010bf55360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    _objc_release(lVar11);
    _objc_release(lVar1);
    _objc_release(lVar9);
    _objc_initWeak(auStack_68,param_1);
    uVar8 = *(undefined8 *)(param_1 + lVar12);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(lVar3);
    func_0x00010c10eda0(uVar8);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(lVar3);
    _objc_release(lVar4);
    _objc_release(puVar2);
  }
  else {
    lVar9 = (long)_DAT_112713e40;
    if (*(long *)(param_1 + lVar9) == 0) {
      puVar2 = PTR_PTR_1126b0f10;
      _objc_alloc();
      lVar10 = (long)_DAT_112713e38;
      lVar1 = param_1 + lVar10;
      _objc_loadWeakRetained(lVar1);
      lVar3 = lVar1;
      func_0x00010c247a20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bc9109c();
      lVar11 = param_1 + lVar10;
      _objc_loadWeakRetained(lVar11);
      lVar12 = lVar11;
      func_0x00010c0f1180();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001066080ec();
      lVar4 = param_1 + lVar10;
      _objc_loadWeakRetained(lVar4);
      lVar5 = lVar4;
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c033460(puVar2);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar3);
      _objc_release(lVar1);
      lVar1 = param_1 + lVar10;
      _objc_loadWeakRetained();
      lVar11 = lVar1;
      func_0x00010c1173c0();
      if (lVar11 != 1) {
        lVar11 = param_1 + lVar10;
        _objc_loadWeakRetained();
        func_0x00010c1173c0();
        _objc_release(lVar11);
      }
      _objc_release(lVar1);
      puVar6 = PTR_PTR_1126b0f18;
      _objc_alloc(PTR_PTR_1126b0f18);
      lVar1 = param_1 + lVar10;
      _objc_loadWeakRetained(lVar1);
      lVar4 = lVar1;
      func_0x00010bf25140();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_1 + lVar10;
      _objc_loadWeakRetained(lVar11);
      func_0x00010c078840();
      func_0x00010bff9da0(puVar6);
      _objc_release(lVar11);
      _objc_release(lVar4);
      _objc_release(lVar1);
      lVar1 = param_1 + lVar10;
      _objc_loadWeakRetained(lVar1);
      lVar11 = lVar1;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21e620(puVar6);
      _objc_release(lVar11);
      _objc_release(lVar1);
      lVar1 = param_1 + lVar10;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c0dac80();
      func_0x00010c1cd960(puVar6);
      _objc_release(lVar1);
      lVar10 = param_1 + lVar10;
      _objc_loadWeakRetained(lVar10);
      func_0x00010c0dacc0();
      func_0x00010c1cd9a0(puVar6);
      _objc_release(lVar10);
      puVar7 = PTR_PTR_1126b0f20;
      _objc_alloc();
      func_0x00010c001da0();
      uVar8 = *(undefined8 *)(param_1 + lVar9);
      *(undefined **)(param_1 + lVar9) = puVar7;
      _objc_release(uVar8);
      param_1 = param_1 + _DAT_112713e44;
      _objc_loadWeakRetained(param_1);
      lVar9 = param_1;
      func_0x00010c2802a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08b7c0();
      _objc_release(lVar9);
      _objc_release(param_1);
      _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar2);
      return;
    }
  }
  return;
}



/* Entry: 104e2a738; end: 104e2a76b;  */

void FUN_104e2a738(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c239580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e2a76c; end: 104e2a83f; -[SCBusinessProfilesPresenterEntryPoint _callShowProfileDelegateMethodForViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e2a76c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_112713e38;
  uVar1 = param_1 + lVar6;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    lVar4 = param_1 + lVar6;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + lVar6;
    _objc_loadWeakRetained(param_1);
    func_0x00010c239560(lVar5);
    _objc_release(param_1);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e2a840; end: 104e2a8f3; -[SCBusinessProfilesPresenterEntryPoint _callShowProfileDelegatePresentingViewControllerViewDidAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e2a840(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112713e38;
  uVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    param_1 = param_1 + lVar4;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2395e0();
    _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104e2a8f4; end: 104e2a8f7; -[SCBusinessProfilesPresenterEntryPoint showProfilePresenterDidStartPresenting:withSwipeDirection:] */

void FUN_104e2a8f4(void)

{
  return;
}



/* Entry: 104e2a8f8; end: 104e2a8fb; -[SCBusinessProfilesPresenterEntryPoint showProfilePresenterDidFinishPresentingProfileViewController:] */

void FUN_104e2a8f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd8d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__callShowProfileDelegateMethodFo_112553d00);
  return;
}



/* Entry: 104e2a8fc; end: 104e2a8ff; -[SCBusinessProfilesPresenterEntryPoint showProfilePresenterDidFinishDismissing:] */

void FUN_104e2a8fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd8b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__callBusinessProfilesPresenterSc_112553c68);
  return;
}



/* Entry: 104e2a900; end: 104e2a903; -[SCBusinessProfilesPresenterEntryPoint unifiedPublicProfilesPresenterScopeDidFinishPresentingViewController:] */

void FUN_104e2a900(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd8d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__callShowProfileDelegateMethodFo_112553d00);
  return;
}



/* Entry: 104e2a904; end: 104e2a98b; -[SCBusinessProfilesPresenterEntryPoint unifiedPublicProfilesPresenterScopeDidComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e2a904(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112713e40;
  if (*(long *)(param_1 + lVar4) == 0) {
    uVar3 = 0;
  }
  else {
    lVar1 = param_1 + _DAT_112713e44;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c2802a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94c80();
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
  }
  *(undefined8 *)(param_1 + lVar4) = 0;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdd8b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__callBusinessProfilesPresenterSc_112553c68);
  return;
}



/* Entry: 104e2a98c; end: 104e2a98f; -[SCBusinessProfilesPresenterEntryPoint unifiedPublicProfilesPresenterScopePresentingViewControllerViewDidAppear] */

void FUN_104e2a98c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd8db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__callShowProfileDelegatePresenti_112553d08);
  return;
}



/* Entry: 104e2a990; end: 104e2a9d7; -[SCBusinessProfilesPresenterEntryPoint presentingViewControllerForUnifiedPublicProfilesPresenterScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e2a990(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112713e38;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104e2a9d8; end: 104e2aa67; -[SCBusinessProfilesPresenterEntryPoint _callBusinessProfilesPresenterScopeWillDismissOnce] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e2a9d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((*(byte *)(param_1 + _DAT_112713e48) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_112713e48) = 1;
  lVar3 = (long)_DAT_112713e38;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf251e0(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e2aa68; end: 104e2aad7; -[SCBusinessProfilesPresenterEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e2aa68(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112713e44);
  _objc_destroyWeak(param_1 + _DAT_112713e38);
  _objc_destroyWeak(param_1 + _DAT_112713e50);
  _objc_destroyWeak(param_1 + _DAT_112713e4c);
  _objc_storeStrong(param_1 + _DAT_112713e40,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112713e3c,0);
  return;
}



/* Entry: 104e2aad8; end: 104e2ac97; -[SCSettingsBusinessProfilesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e2aad8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112713e58);
  *(undefined **)(param_1 + _DAT_112713e58) = puVar1;
  _objc_release(uVar5);
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112713e5c);
  *(undefined **)(param_1 + _DAT_112713e5c) = puVar1;
  _objc_release(uVar5);
  lVar6 = (long)_DAT_112713e60;
  lVar2 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c11a760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar6 = param_1 + lVar6;
  _objc_loadWeakRetained();
  lVar2 = lVar6;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar6);
  func_0x00010be89c20(param_1);
  lVar2 = lVar4;
  func_0x00010bfd88a0();
  if ((int)lVar2 == 0) {
    func_0x00010be89dc0(param_1);
  }
  else {
    lVar2 = lVar4;
    func_0x00010c0b7fc0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be89dc0(param_1);
    _objc_release(lVar2);
  }
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c269fc0(lVar3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(lVar4);
  _objc_release(lVar3);
  return;
}



/* Entry: 104e2ac98; end: 104e2acdf;  */

void FUN_104e2ac98(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be66780();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e2ace0; end: 104e2ad37; -[SCSettingsBusinessProfilesEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e2ace0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_112713e5c));
  puStack_28 = PTR_PTR_1126e46e0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e2ad38; end: 104e2af3f; -[SCSettingsBusinessProfilesEntryPoint _observeOnManagedPublicProfilesAndPendingRoles:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e2ad38(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c09a220();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c272160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bfda180();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c272160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_68,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104e2af40;
  puStack_78 = &UNK_1108528f0;
  _objc_copyWeak(auStack_70,auStack_68);
  lVar1 = lVar3;
  func_0x00010c25ff60(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar1);
  _objc_copyWeak(auStack_98,auStack_68);
  lVar1 = lVar4;
  func_0x00010c25ff60(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 104e2af40; end: 104e2afe7;  */

void FUN_104e2af40(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104e2afe8;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  uStack_40 = param_2;
  _objc_retain(param_2);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104e2afe8; end: 104e2b027;  */

void FUN_104e2afe8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    func_0x00010bedb140(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e2b028; end: 104e2b0cf;  */

void FUN_104e2b028(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104e2b0d0;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  uStack_40 = param_2;
  _objc_retain(param_2);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104e2b0d0; end: 104e2b117;  */

void FUN_104e2b0d0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (lVar2 = *(long *)(param_1 + 0x20), lVar2 != 0)) {
    func_0x00010bf1f3c0();
    func_0x00010bedcd20(lVar1,param_2,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e2b118; end: 104e2b12b; -[SCSettingsBusinessProfilesEntryPoint _updatePendingBusinessInvites:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e2b118(long param_1,undefined8 param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b1a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112713e64),PTR_s_setIsHidden__11264a0c8,param_3 ^ 1);
  return;
}



/* Entry: 104e2b12c; end: 104e2b417; -[SCSettingsBusinessProfilesEntryPoint _updateManagedBusinessProfiles:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e2b12c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
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
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010c117620();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = &uStack_130;
  lVar13 = param_3;
  func_0x00010bf52a60();
  if (lVar13 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      uVar12 = (ulong)(int)uVar12;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        uVar15 = *(undefined8 *)(lStack_128 + lVar11 * 8);
        lVar14 = (long)_DAT_112713e58;
        uVar1 = *(ulong *)(param_1 + lVar14);
        func_0x00010bf529e0();
        if (uVar1 <= uVar12) goto LAB_104e2b37c;
        uVar2 = uVar15;
        func_0x00010c074e40();
        if ((int)uVar2 != 0) {
          lVar16 = (long)_DAT_112713e68;
          _objc_retain(uVar15);
          uVar2 = *(undefined8 *)(param_1 + lVar16);
          *(undefined8 *)(param_1 + lVar16) = uVar15;
          _objc_release(uVar2);
          func_0x00010c288ce0(*(undefined8 *)(param_1 + _DAT_112713e64));
        }
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        ppuVar3 = &PTR____CFConstantStringClassReference_110db6cb8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db6cb8,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1164a0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar15;
        func_0x00010c2711a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        _objc_release(uVar15);
        _objc_release(ppuVar3);
        puVar5 = (undefined8 *)PTR_PTR_1126aeaf0;
        _objc_alloc();
        func_0x00010c053b60();
        uVar15 = *(undefined8 *)(param_1 + lVar14);
        func_0x00010c0dfd40(uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1b1a80();
        _objc_release(uVar15);
        uVar15 = *(undefined8 *)(param_1 + lVar14);
        func_0x00010c0dfd40(uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c288ce0();
        _objc_release(uVar15);
        uVar15 = *(undefined8 *)(param_1 + lVar14);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar5;
        func_0x00010c28bf40();
        _objc_release(uVar15);
        uVar12 = uVar12 + 1;
        _objc_release(puVar5);
        _objc_release(puVar4);
        lVar11 = lVar11 + 1;
      } while (lVar13 != lVar11);
      puVar9 = &uStack_130;
      lVar13 = param_3;
      func_0x00010bf52a60();
    } while (lVar13 != 0);
  }
LAB_104e2b37c:
  _objc_release(param_3);
  lVar13 = (long)_DAT_112713e58;
  uVar1 = *(ulong *)(param_1 + lVar13);
  func_0x00010bf529e0();
  if ((ulong)(long)(int)uVar12 < uVar1) {
    uVar12 = (ulong)(int)uVar12;
    do {
      uVar15 = *(undefined8 *)(param_1 + lVar13);
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = (undefined8 *)0x1;
      func_0x00010c1b1a80();
      _objc_release(uVar15);
      uVar12 = uVar12 + 1;
      uVar1 = *(ulong *)(param_1 + lVar13);
      func_0x00010bf529e0();
    } while (uVar12 < uVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar4 = PTR_PTR_1126aeaf0;
    _objc_retain(puVar9);
    _objc_alloc(puVar4);
    ppuVar3 = &PTR____CFConstantStringClassReference_110db6cd8;
    ppuVar6 = ppuVar3;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db6cd8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db6cd8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c053ba0(puVar4);
    _objc_release(ppuVar3);
    _objc_release(ppuVar6);
    puVar7 = PTR_PTR_1126aeae0;
    func_0x00010bf25340(PTR_PTR_1126aeae0);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126b0f28;
    _objc_alloc();
    func_0x00010c043600();
    _objc_release(puVar9);
    uVar15 = *(undefined8 *)(uVar1 + (long)_DAT_112713e64);
    *(undefined **)(uVar1 + (long)_DAT_112713e64) = puVar8;
    _objc_release(uVar15);
    lVar13 = uVar1 + (long)_DAT_112713e70;
    _objc_loadWeakRetained(lVar13);
    lVar10 = lVar13;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar10);
    _objc_release(lVar13);
    _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 104e2b418; end: 104e2b59b; -[SCSettingsBusinessProfilesEntryPoint _registerPendingInvitationsProviderWithInitialProfile:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e2b418(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126aeaf0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  ppuVar3 = &PTR____CFConstantStringClassReference_110db6cd8;
  ppuVar2 = ppuVar3;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db6cd8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db6cd8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053ba0(puVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  puVar4 = PTR_PTR_1126aeae0;
  func_0x00010bf25340(PTR_PTR_1126aeae0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b0f28;
  _objc_alloc();
  func_0x00010c043600();
  _objc_release(param_3);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112713e64);
  *(undefined **)(param_1 + _DAT_112713e64) = puVar5;
  _objc_release(uVar6);
  param_1 = param_1 + _DAT_112713e70;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e2b59c; end: 104e2b89f; -[SCSettingsBusinessProfilesEntryPoint _registerSynchronizedManagedPublicProfilePlaceholdersWithProfiles:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e2b59c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar1 = 10;
    if (param_3 != 0) {
      lVar1 = 0;
    }
  }
  else {
    lVar1 = param_3;
    func_0x00010bf529e0();
  }
  lVar11 = param_1 + _DAT_112713e60;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  _objc_release(lVar11);
  if (0 < lVar1) {
    lVar11 = 0;
    do {
      lVar12 = param_3;
      func_0x00010bf529e0();
      if (lVar11 < lVar12) {
        lVar12 = param_3;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar12 = 0;
      }
      lVar3 = lVar12;
      func_0x00010c1164a0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      lVar3 = lVar4;
      func_0x00010c08fa60();
      ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (lVar3 == 0) {
        ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
      }
      else {
        ppuVar5 = &PTR____CFConstantStringClassReference_110db6cb8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db6cb8,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar5);
      }
      puVar7 = PTR_PTR_1126aeaf0;
      _objc_alloc(PTR_PTR_1126aeaf0);
      func_0x00010c08fa60();
      func_0x00010c053ba0(puVar7);
      puVar8 = PTR_PTR_1126aeae0;
      func_0x00010bf25340(PTR_PTR_1126aeae0);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126b0f28;
      _objc_alloc(PTR_PTR_1126b0f28);
      lVar3 = lVar12;
      func_0x00010c1164a0(lVar12);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar3;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c043600(puVar9);
      _objc_release(lVar10);
      _objc_release(lVar3);
      lVar3 = param_1 + _DAT_112713e70;
      _objc_loadWeakRetained(lVar3);
      lVar10 = lVar3;
      func_0x00010c1018e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c125b60();
      _objc_release(lVar10);
      _objc_release(lVar3);
      func_0x00010befa120(*(undefined8 *)(param_1 + _DAT_112713e58));
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(ppuVar6);
      _objc_release(lVar4);
      _objc_release(lVar12);
      lVar11 = lVar11 + 1;
    } while (lVar1 != lVar11);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e2b8a0; end: 104e2b943; -[SCSettingsBusinessProfilesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e2b8a0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112713e60);
  _objc_storeStrong(param_1 + _DAT_112713e6c,0);
  _objc_destroyWeak(param_1 + _DAT_112713e70);
  _objc_destroyWeak(param_1 + _DAT_112713e74);
  _objc_storeStrong(param_1 + _DAT_112713e68,0);
  _objc_storeStrong(param_1 + _DAT_112713e5c,0);
  _objc_storeStrong(param_1 + _DAT_112713e78,0);
  _objc_storeStrong(param_1 + _DAT_112713e58,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112713e64,0);
  return;
}



/* Entry: 104e2b944; end: 104e2bae7; -[SCSettingsLegacyBusinessRowProvider initWithSectionRow:rowViewModel:managedPublicProfile:businessProfileId:profilesProvider:isHidden:profileManagementScopeExposer:] */

undefined1 *
FUN_104e2b944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e46e8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 0x18) = param_8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_7;
    _objc_release(uVar2);
    func_0x00010be08580(puVar1);
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e2bae8; end: 104e2bbef; -[SCSettingsLegacyBusinessRowProvider _presentForManagedPublicProfile:withRouteName:context:] */

void FUN_104e2bae8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar4 = PTR_PTR_1126b0f30;
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar2 = param_3;
    func_0x00010bf6daa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lStack_58 = 0;
    func_0x00010c0f40e0(puVar4,param_2,lVar2,&lStack_58);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lStack_58;
    _objc_release(lVar2);
    if (lVar1 != 0) goto LAB_104e2bbb4;
  }
  uVar3 = param_5;
  func_0x00010c0d66a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7c540(param_1,param_2,puVar4,param_4,uVar3);
  _objc_release(uVar3);
LAB_104e2bbb4:
  _objc_release(puVar4);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104e2bbf0; end: 104e2bd3b; -[SCSettingsLegacyBusinessRowProvider _presentForBusinessProfileId:withRouteName:context:] */

void FUN_104e2bbf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar1 = param_5;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    _objc_retain(uVar1);
    func_0x00010bfd3260(uVar2);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104e2bd3c; end: 104e2be17;  */

void FUN_104e2bd3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c2a14c0(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104e2be18; end: 104e2be7f;  */

void FUN_104e2be18(long param_1,long param_2,long param_3)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (((param_2 != 0) && (param_3 == 0)) && (param_1 != 0)) {
    func_0x00010be7c540(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e2be80; end: 104e2bf9f; -[SCSettingsLegacyBusinessRowProvider _presentManagementScopeWithBusinessProfileAndUserData:routeName:navigationController:] */

void FUN_104e2be80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126aead0;
    _objc_alloc();
    func_0x00010c02e4c0();
    puVar3 = PTR_PTR_1126b0f38;
    _objc_alloc(PTR_PTR_1126b0f38);
    func_0x00010c0581c0();
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar2;
    _objc_retain(puVar2);
    _objc_release(uVar4);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x50),param_2,puVar3);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e2bfa0; end: 104e2c073; -[SCSettingsLegacyBusinessRowProvider handleWithContext:] */

void FUN_104e2bfa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104e2c078;
  puStack_48 = &UNK_1108529c0;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0bc5e0(uVar1,param_2,&PTR___NSConcreteGlobalBlock_1108529a0,&puStack_60,
                      &PTR___NSConcreteGlobalBlock_1108529f0,&PTR___NSConcreteGlobalBlock_110852a10,
                      &PTR___NSConcreteGlobalBlock_110852a30,&PTR___NSConcreteGlobalBlock_110852a50,
                      &PTR___NSConcreteGlobalBlock_110852a70,&PTR___NSConcreteGlobalBlock_110852a90,
                      &PTR___NSConcreteGlobalBlock_110852ab0);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e2c074; end: 104e2c077;  */

void FUN_104e2c074(void)

{
  return;
}



/* Entry: 104e2c078; end: 104e2c10b;  */

void FUN_104e2c078(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  if (param_2 == 1) {
    lVar1 = *(long *)(param_1 + 0x20);
    lVar2 = *(long *)(lVar1 + 0x30);
    if (lVar2 == 0) {
      lVar1 = *(long *)(lVar1 + 0x38);
      func_0x00010c08fa60();
      if (lVar1 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010be7b650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(long *)(param_1 + 0x20),PTR_s__presentForBusinessProfileId_wit_11257c730,
                 *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38),
                 &PTR____CFConstantStringClassReference_110e2ea58,*(undefined8 *)(param_1 + 0x28));
      return;
    }
    ppuVar3 = &PTR____CFConstantStringClassReference_110e2ea58;
    uVar4 = *(undefined8 *)(param_1 + 0x28);
  }
  else {
    if (param_2 != 0) {
      return;
    }
    lVar1 = *(long *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    lVar2 = *(long *)(lVar1 + 0x30);
    ppuVar3 = &PTR____CFConstantStringClassReference_110e2ea98;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7b690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (lVar1,PTR_s__presentForManagedPublicProfile__11257c740,lVar2,ppuVar3,uVar4);
  return;
}



/* Entry: 104e2c10c; end: 104e2c127;  */

void FUN_104e2c10c(void)

{
  return;
}



/* Entry: 104e2c128; end: 104e2c14f; -[SCSettingsLegacyBusinessRowProvider rowViewModel] */

void FUN_104e2c128(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e2c150; end: 104e2c177; -[SCSettingsLegacyBusinessRowProvider sectionRow] */

void FUN_104e2c150(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e2c178; end: 104e2c18f; -[SCSettingsLegacyBusinessRowProvider setIsHidden:] */

void FUN_104e2c178(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0x18) == param_3) {
    return;
  }
  *(char *)(param_1 + 0x18) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010be08590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__emitUpdate_11255fb00);
  return;
}



/* Entry: 104e2c190; end: 104e2c26f; -[SCSettingsLegacyBusinessRowProvider updateViewModel:] */

void FUN_104e2c190(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar3 = *(undefined **)(param_1 + 0x10);
  _objc_retain(param_3);
  _objc_retain(puVar3);
  if (param_3 == puVar3) {
    _objc_release(puVar3);
    puVar3 = param_3;
  }
  else {
    if (puVar3 == (undefined *)0x0) {
      _objc_release();
    }
    else {
      puVar1 = param_3;
      func_0x00010c071ae0(param_3,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(param_3);
      if (((ulong)puVar1 & 1) != 0) goto LAB_104e2c25c;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = param_3;
    _objc_release(uVar2);
    if ((*(byte *)(param_1 + 0x18) & 1) != 0) goto LAB_104e2c25c;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puVar3 = PTR_PTR_1126ae750;
    func_0x00010c0ec800(PTR_PTR_1126ae750,param_2,*(undefined8 *)(param_1 + 0x10));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2,param_2,puVar3);
  }
  _objc_release(puVar3);
LAB_104e2c25c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e2c270; end: 104e2c313; -[SCSettingsLegacyBusinessRowProvider updateProfile:] */

void FUN_104e2c270(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + 0x30);
  _objc_retain(param_3);
  _objc_retain(uVar2);
  if (param_3 == uVar2) {
    _objc_release(uVar2);
    uVar2 = param_3;
  }
  else {
    if (uVar2 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0(param_3,param_2,uVar2);
      _objc_release(uVar2);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_104e2c300;
    }
    _objc_retain(param_3);
    uVar2 = *(ulong *)(param_1 + 0x30);
    *(ulong *)(param_1 + 0x30) = param_3;
  }
  _objc_release(uVar2);
LAB_104e2c300:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e2c314; end: 104e2c36f; -[SCSettingsLegacyBusinessRowProvider _emitUpdate] */

void FUN_104e2c314(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  else {
    uVar2 = 0;
  }
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010c0ec800(PTR_PTR_1126ae750,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e2c370; end: 104e2c3b7; -[SCSettingsLegacyBusinessRowProvider impalaProfileDidComplete] */

void FUN_104e2c370(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x50));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104e2c3b8; end: 104e2c45f; -[SCSettingsLegacyBusinessRowProvider impalaProfileNeedsRemoval] */

void FUN_104e2c3b8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf6f440(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e2c460; end: 104e2c493;  */

void FUN_104e2c460(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bfea060(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e2c494; end: 104e2c517; -[SCSettingsLegacyBusinessRowProvider .cxx_destruct] */

void FUN_104e2c494(long param_1)

{
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



/* Entry: 104e2c518; end: 104e2c787; -[SCProfileOnboardingEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e2c518(long param_1,undefined8 param_2)

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
  undefined8 uVar19;
  long lVar20;
  
  puVar1 = PTR_PTR_1126b0f40;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112713ea4;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112713ea8;
  _objc_loadWeakRetained();
  lVar5 = param_1 + _DAT_112713eac;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112713eb0;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112713eb4;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c0ee220();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112713eb8;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_112713ebc;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_112713ec0;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_112713ec4;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010c2932e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05eba0(puVar1,param_2,lVar3,lVar4,lVar6,lVar8,lVar10,lVar12,lVar14,lVar16,lVar18,
                      *(undefined8 *)(param_1 + _DAT_112713ec8));
  lVar20 = (long)_DAT_112713ecc;
  uVar19 = *(undefined8 *)(param_1 + lVar20);
  *(undefined **)(param_1 + lVar20) = puVar1;
  _objc_release(uVar19);
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
  uVar19 = *(undefined8 *)(param_1 + lVar20);
  param_1 = param_1 + _DAT_112713ed0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10f120(uVar19,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e2c788; end: 104e2c83f; -[SCProfileOnboardingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e2c788(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112713ec8,0);
  _objc_destroyWeak(param_1 + _DAT_112713ec4);
  _objc_destroyWeak(param_1 + _DAT_112713ec0);
  _objc_destroyWeak(param_1 + _DAT_112713ebc);
  _objc_destroyWeak(param_1 + _DAT_112713eb8);
  _objc_destroyWeak(param_1 + _DAT_112713eac);
  _objc_destroyWeak(param_1 + _DAT_112713ea4);
  _objc_destroyWeak(param_1 + _DAT_112713eb0);
  _objc_destroyWeak(param_1 + _DAT_112713eb4);
  _objc_destroyWeak(param_1 + _DAT_112713ea8);
  _objc_destroyWeak(param_1 + _DAT_112713ed0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112713ecc,0);
  return;
}



/* Entry: 104e2c840; end: 104e2c927; -[SCProfileBillboardSignalProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e2c840(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b0f48;
  _objc_alloc(PTR_PTR_1126b0f48);
  lVar2 = param_1 + _DAT_112713ed4;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112713ed8;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c05e500(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112713edc;
    _objc_loadWeakRetained(lVar2);
  }
  lVar4 = lVar2;
  func_0x00010c1018e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e2c928; end: 104e2c96b; -[SCProfileBillboardSignalProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e2c928(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112713ed8);
  _objc_destroyWeak(param_1 + _DAT_112713ed4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112713edc);
  return;
}



/* Entry: 104e2c96c; end: 104e2ca0f; -[SCProfileEligibilityProvider initWithUserSession:snapProServices:] */

undefined1 *
FUN_104e2c96c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e46f0;
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



/* Entry: 104e2ca10; end: 104e2ca17; -[SCProfileEligibilityProvider preCheckSource] */

undefined8 FUN_104e2ca10(void)

{
  return 7;
}



/* Entry: 104e2ca18; end: 104e2cabb; -[SCProfileEligibilityProvider eligibleWithRequestor:campaignName:] */

void FUN_104e2ca18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2932e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf2c720();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126ae558;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9ca0(puVar5,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104e2cabc; end: 104e2caeb; -[SCProfileEligibilityProvider .cxx_destruct] */

void FUN_104e2cabc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e2caec; end: 104e2dbff; -[SCPublicProfileManagementEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e2caec(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
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
  long lVar47;
  long lVar48;
  long lVar49;
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
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  long lVar77;
  long lVar78;
  long lVar79;
  long lVar80;
  long lVar81;
  long lVar82;
  long lVar83;
  long lVar84;
  long lVar85;
  long lVar86;
  long lVar87;
  long lVar88;
  long lVar89;
  long lVar90;
  long lVar91;
  long lVar92;
  long lVar93;
  long lVar94;
  long lVar95;
  long lVar96;
  long lVar97;
  long lVar98;
  long lVar99;
  long lVar100;
  long lVar101;
  long lVar102;
  long lVar103;
  long lVar104;
  long lVar105;
  long lVar106;
  long lVar107;
  long lVar108;
  long lVar109;
  long lVar110;
  long lVar111;
  long lVar112;
  long lVar113;
  long lVar114;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_initWeak(auStack_70,param_1);
  lVar112 = param_1 + _DAT_112713ee8;
  _objc_loadWeakRetained();
  lVar1 = lVar112;
  func_0x00010bf3f680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar112);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar112 = param_1 + _DAT_112713ef0;
  _objc_loadWeakRetained();
  lVar3 = lVar112;
  func_0x00010bf075a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar112);
  puVar5 = PTR_PTR_1126b0c98;
  _objc_alloc();
  func_0x00010c0368e0();
  lVar112 = param_1 + _DAT_112713ef4;
  _objc_loadWeakRetained();
  lVar3 = lVar112;
  func_0x00010bfb8b80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  (**(code **)(lVar3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar112);
  puVar8 = PTR_PTR_1126b0f50;
  _objc_alloc();
  lVar112 = param_1 + _DAT_112713ef8;
  _objc_loadWeakRetained();
  lVar9 = lVar112;
  func_0x00010c22b5c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112713efc;
  _objc_loadWeakRetained();
  lVar10 = lVar3;
  func_0x00010bf64080();
  _objc_retainAutoreleasedReturnValue();
  lVar109 = (long)_DAT_112713f00;
  lVar6 = param_1 + lVar109;
  _objc_loadWeakRetained(lVar6);
  lVar11 = lVar6;
  func_0x00010bfe7700();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + lVar109;
  _objc_loadWeakRetained(lVar12);
  lVar13 = lVar12;
  func_0x00010c299fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112713f04;
  _objc_loadWeakRetained(lVar14);
  lVar15 = lVar14;
  func_0x00010bf0c120();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_112713f08;
  _objc_loadWeakRetained(lVar16);
  lVar110 = lVar16;
  func_0x00010bf53fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045b60();
  _objc_release(lVar110);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar6);
  _objc_release(lVar10);
  _objc_release(lVar3);
  _objc_release(lVar9);
  _objc_release(lVar112);
  if (param_1 == 0) {
    lVar112 = 0;
  }
  else {
    lVar112 = param_1 + _DAT_112713eec;
    _objc_loadWeakRetained();
  }
  lVar17 = lVar112;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar112);
  puVar18 = PTR_PTR_1126b0f58;
  _objc_alloc();
  lVar112 = param_1 + _DAT_112713f0c;
  _objc_loadWeakRetained();
  lVar19 = lVar112;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112713f10;
  _objc_loadWeakRetained();
  lVar20 = lVar3;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar114 = (long)_DAT_112713f14;
  lVar6 = param_1 + lVar114;
  _objc_loadWeakRetained();
  lVar22 = lVar6;
  func_0x00010bf25020();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + lVar114;
  _objc_loadWeakRetained();
  func_0x00010bf9f6c0();
  lVar14 = param_1 + lVar114;
  _objc_loadWeakRetained();
  lVar23 = lVar14;
  func_0x00010c0dbb80();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + lVar114;
  _objc_loadWeakRetained();
  lVar24 = lVar16;
  func_0x00010c0643a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112713f18;
  _objc_loadWeakRetained();
  lVar10 = param_1 + _DAT_112713f1c;
  _objc_loadWeakRetained();
  lVar25 = lVar10;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112713f20;
  _objc_loadWeakRetained();
  lVar109 = param_1 + lVar109;
  _objc_loadWeakRetained();
  lVar110 = (long)_DAT_112713f24;
  lVar13 = param_1 + lVar110;
  _objc_loadWeakRetained();
  lVar26 = lVar13;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + lVar110;
  _objc_loadWeakRetained();
  lVar27 = lVar15;
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar110 = param_1 + lVar110;
  _objc_loadWeakRetained();
  lVar28 = lVar110;
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1 + _DAT_112713f2c;
  _objc_loadWeakRetained();
  lVar30 = lVar29;
  func_0x00010c1490a0();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1 + _DAT_112713f30;
  _objc_loadWeakRetained();
  lVar32 = lVar31;
  func_0x00010c0dc6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = lVar32;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1 + _DAT_112713f34;
  _objc_loadWeakRetained();
  lVar35 = lVar34;
  func_0x00010bf67f80();
  _objc_retainAutoreleasedReturnValue();
  lVar111 = (long)_DAT_112713f38;
  lVar36 = param_1 + lVar111;
  _objc_loadWeakRetained();
  lVar37 = lVar36;
  func_0x00010c1176a0();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_1 + _DAT_112713f3c;
  _objc_loadWeakRetained();
  lVar39 = lVar38;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = param_1 + _DAT_112713f40;
  _objc_loadWeakRetained();
  lVar41 = lVar40;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = param_1 + _DAT_112713f44;
  _objc_loadWeakRetained();
  lVar43 = lVar42;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = param_1 + _DAT_112713f48;
  _objc_loadWeakRetained();
  lVar45 = lVar44;
  func_0x00010bf1ef20();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = param_1 + _DAT_112713f4c;
  _objc_loadWeakRetained();
  lVar47 = lVar46;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = param_1 + _DAT_112713f50;
  _objc_loadWeakRetained();
  lVar49 = lVar48;
  func_0x00010c095660();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = param_1 + _DAT_112713f54;
  _objc_loadWeakRetained();
  lVar113 = (long)_DAT_112713f58;
  lVar51 = param_1 + lVar113;
  _objc_loadWeakRetained();
  lVar52 = lVar51;
  func_0x00010c0d8300();
  _objc_retainAutoreleasedReturnValue();
  lVar53 = param_1 + _DAT_112713f5c;
  _objc_loadWeakRetained();
  lVar54 = param_1 + _DAT_112713f60;
  _objc_loadWeakRetained();
  lVar55 = lVar54;
  func_0x00010bfea2e0();
  _objc_retainAutoreleasedReturnValue();
  lVar56 = lVar55;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar57 = lVar56;
  func_0x00010bfea320();
  _objc_retainAutoreleasedReturnValue();
  lVar58 = lVar57;
  func_0x00010bfea2c0();
  _objc_retainAutoreleasedReturnValue();
  lVar59 = param_1 + _DAT_112713ff4;
  _objc_loadWeakRetained();
  lVar60 = param_1 + _DAT_112713f68;
  _objc_loadWeakRetained();
  lVar61 = lVar60;
  func_0x00010c2802a0();
  _objc_retainAutoreleasedReturnValue();
  lVar62 = param_1 + _DAT_112713f74;
  _objc_loadWeakRetained();
  lVar63 = param_1 + lVar114;
  _objc_loadWeakRetained();
  lVar64 = lVar63;
  func_0x00010c116dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar113 = param_1 + lVar113;
  _objc_loadWeakRetained();
  lVar65 = lVar113;
  func_0x00010bfcfa80();
  _objc_retainAutoreleasedReturnValue();
  lVar111 = param_1 + lVar111;
  _objc_loadWeakRetained();
  lVar66 = lVar111;
  func_0x00010c11a760();
  _objc_retainAutoreleasedReturnValue();
  lVar67 = param_1 + _DAT_112713f7c;
  _objc_loadWeakRetained();
  lVar68 = lVar67;
  func_0x00010c22ac20();
  _objc_retainAutoreleasedReturnValue();
  lVar69 = param_1 + _DAT_112713f84;
  _objc_loadWeakRetained();
  lVar70 = param_1 + _DAT_112713f8c;
  _objc_loadWeakRetained();
  lVar71 = param_1 + lVar114;
  _objc_loadWeakRetained();
  lVar72 = lVar71;
  func_0x00010bf6a640();
  _objc_retainAutoreleasedReturnValue();
  lVar73 = param_1 + lVar114;
  _objc_loadWeakRetained();
  lVar74 = lVar73;
  func_0x00010bf68960();
  _objc_retainAutoreleasedReturnValue();
  lVar75 = param_1 + lVar114;
  _objc_loadWeakRetained();
  func_0x00010bf68600();
  lVar76 = param_1 + _DAT_112713f98;
  _objc_loadWeakRetained();
  lVar77 = lVar76;
  func_0x00010c0e1840();
  _objc_retainAutoreleasedReturnValue();
  lVar78 = param_1 + lVar114;
  _objc_loadWeakRetained();
  func_0x00010bf684e0();
  lVar79 = param_1 + _DAT_112713f9c;
  _objc_loadWeakRetained();
  lVar80 = lVar79;
  func_0x00010befc3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar81 = param_1 + _DAT_112713ff0;
  _objc_loadWeakRetained();
  lVar82 = param_1 + lVar114;
  _objc_loadWeakRetained();
  lVar83 = lVar82;
  func_0x00010bf68500();
  _objc_retainAutoreleasedReturnValue();
  lVar84 = param_1 + lVar114;
  _objc_loadWeakRetained();
  lVar85 = lVar84;
  func_0x00010bf68860();
  _objc_retainAutoreleasedReturnValue();
  lVar86 = param_1 + lVar114;
  _objc_loadWeakRetained();
  lVar87 = lVar86;
  func_0x00010bf68840();
  _objc_retainAutoreleasedReturnValue();
  lVar88 = param_1 + lVar114;
  _objc_loadWeakRetained();
  lVar89 = lVar88;
  func_0x00010bf686c0();
  _objc_retainAutoreleasedReturnValue();
  lVar90 = param_1 + _DAT_112713fa4;
  _objc_loadWeakRetained();
  lVar91 = lVar90;
  func_0x00010bf43140();
  _objc_retainAutoreleasedReturnValue();
  lVar92 = param_1 + _DAT_112713fa8;
  _objc_loadWeakRetained();
  lVar93 = param_1 + _DAT_112713fb0;
  _objc_loadWeakRetained();
  lVar94 = param_1 + _DAT_112713fb4;
  _objc_loadWeakRetained();
  lVar95 = param_1 + _DAT_112713fb8;
  _objc_loadWeakRetained();
  lVar96 = lVar95;
  func_0x00010c0d4b00();
  _objc_retainAutoreleasedReturnValue();
  lVar97 = param_1 + _DAT_112713fbc;
  _objc_loadWeakRetained();
  lVar98 = lVar97;
  func_0x00010c258d80();
  _objc_retainAutoreleasedReturnValue();
  lVar99 = param_1 + _DAT_112713fc4;
  _objc_loadWeakRetained();
  lVar100 = param_1 + _DAT_112713fd0;
  _objc_loadWeakRetained();
  lVar101 = lVar100;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar102 = param_1 + _DAT_112713ff8;
  _objc_loadWeakRetained();
  lVar103 = param_1 + _DAT_112713fd8;
  _objc_loadWeakRetained();
  lVar104 = param_1 + _DAT_112713fdc;
  _objc_loadWeakRetained();
  lVar105 = param_1 + _DAT_112713fe0;
  _objc_loadWeakRetained();
  lVar106 = lVar105;
  func_0x00010bfb9460();
  _objc_retainAutoreleasedReturnValue();
  lVar107 = param_1 + _DAT_112713fe4;
  _objc_loadWeakRetained();
  lVar108 = param_1 + _DAT_112713fe8;
  _objc_loadWeakRetained();
  func_0x00010c05de40();
  _objc_release(lVar108);
  _objc_release(lVar107);
  _objc_release(lVar106);
  _objc_release(lVar105);
  _objc_release(lVar104);
  _objc_release(lVar103);
  _objc_release(lVar102);
  _objc_release(lVar101);
  _objc_release(lVar100);
  _objc_release(lVar99);
  _objc_release(lVar98);
  _objc_release(lVar97);
  _objc_release(lVar96);
  _objc_release(lVar95);
  _objc_release(lVar94);
  _objc_release(lVar93);
  _objc_release(lVar92);
  _objc_release(lVar91);
  _objc_release(lVar90);
  _objc_release(lVar89);
  _objc_release(lVar88);
  _objc_release(lVar87);
  _objc_release(lVar86);
  _objc_release(lVar85);
  _objc_release(lVar84);
  _objc_release(lVar83);
  _objc_release(lVar82);
  _objc_release(lVar81);
  _objc_release(lVar80);
  _objc_release(lVar79);
  _objc_release(lVar78);
  _objc_release(lVar77);
  _objc_release(lVar76);
  _objc_release(lVar75);
  _objc_release(lVar74);
  _objc_release(lVar73);
  _objc_release(lVar72);
  _objc_release(lVar71);
  _objc_release(lVar70);
  _objc_release(lVar69);
  _objc_release(lVar68);
  _objc_release(lVar67);
  _objc_release(lVar66);
  _objc_release(lVar111);
  _objc_release(lVar65);
  _objc_release(lVar113);
  _objc_release(lVar64);
  _objc_release(lVar63);
  _objc_release(lVar62);
  _objc_release(lVar61);
  _objc_release(lVar60);
  _objc_release(lVar59);
  _objc_release(lVar58);
  _objc_release(lVar57);
  _objc_release(lVar56);
  _objc_release(lVar55);
  _objc_release(lVar54);
  _objc_release(lVar53);
  _objc_release(lVar52);
  _objc_release(lVar51);
  _objc_release(lVar50);
  _objc_release(lVar49);
  _objc_release(lVar48);
  _objc_release(lVar47);
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
  _objc_release(lVar110);
  _objc_release(lVar27);
  _objc_release(lVar15);
  _objc_release(lVar26);
  _objc_release(lVar13);
  _objc_release(lVar109);
  _objc_release(lVar11);
  _objc_release(lVar25);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar24);
  _objc_release(lVar16);
  _objc_release(lVar23);
  _objc_release(lVar14);
  _objc_release(lVar12);
  _objc_release(lVar22);
  _objc_release(lVar6);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar3);
  _objc_release(lVar19);
  _objc_release(lVar112);
  param_1 = param_1 + lVar114;
  _objc_loadWeakRetained(param_1);
  lVar112 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar112);
  _objc_release(param_1);
  _objc_release(puVar18);
  _objc_release(lVar17);
  _objc_release(puVar8);
  _objc_release(lVar7);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_78);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_70);
  return;
}



/* Entry: 104e2dc00; end: 104e2dcb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e2dc00(long param_1,undefined8 param_2)

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
    puVar4 = PTR_PTR_1126b0e90;
    _objc_alloc(PTR_PTR_1126b0e90);
    lVar1 = param_1 + _DAT_112713eec;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011c80(puVar4,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104e2dcb8; end: 104e2e04f; -[SCPublicProfileManagementEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e2dcb8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112713ff8);
  _objc_storeStrong(param_1 + _DAT_112713fd4,0);
  _objc_storeStrong(param_1 + _DAT_112713fcc,0);
  _objc_storeStrong(param_1 + _DAT_112713fc8,0);
  _objc_destroyWeak(param_1 + _DAT_112713fc4);
  _objc_storeStrong(param_1 + _DAT_112713fc0,0);
  _objc_storeStrong(param_1 + _DAT_112713fa0,0);
  _objc_storeStrong(param_1 + _DAT_112713fac,0);
  _objc_storeStrong(param_1 + _DAT_112713f94,0);
  _objc_storeStrong(param_1 + _DAT_112713f90,0);
  _objc_storeStrong(param_1 + _DAT_112713f80,0);
  _objc_storeStrong(param_1 + _DAT_112713f70,0);
  _objc_storeStrong(param_1 + _DAT_112713f28,0);
  _objc_destroyWeak(param_1 + _DAT_112713ff4);
  _objc_storeStrong(param_1 + _DAT_112713f64,0);
  _objc_storeStrong(param_1 + _DAT_112713f6c,0);
  _objc_storeStrong(param_1 + _DAT_112713f78,0);
  _objc_storeStrong(param_1 + _DAT_112713f88,0);
  _objc_destroyWeak(param_1 + _DAT_112713f84);
  _objc_destroyWeak(param_1 + _DAT_112713fb0);
  _objc_destroyWeak(param_1 + _DAT_112713f74);
  _objc_destroyWeak(param_1 + _DAT_112713fe8);
  _objc_destroyWeak(param_1 + _DAT_112713fe4);
  _objc_destroyWeak(param_1 + _DAT_112713fe0);
  _objc_destroyWeak(param_1 + _DAT_112713fdc);
  _objc_destroyWeak(param_1 + _DAT_112713fd8);
  _objc_destroyWeak(param_1 + _DAT_112713fbc);
  _objc_destroyWeak(param_1 + _DAT_112713fd0);
  _objc_destroyWeak(param_1 + _DAT_112713fb8);
  _objc_destroyWeak(param_1 + _DAT_112713ff0);
  _objc_destroyWeak(param_1 + _DAT_112713f9c);
  _objc_destroyWeak(param_1 + _DAT_112713f7c);
  _objc_destroyWeak(param_1 + _DAT_112713f68);
  _objc_destroyWeak(param_1 + _DAT_112713fb4);
  _objc_destroyWeak(param_1 + _DAT_112713fa8);
  _objc_destroyWeak(param_1 + _DAT_112713fec);
  _objc_destroyWeak(param_1 + _DAT_112713f18);
  _objc_destroyWeak(param_1 + _DAT_112713f98);
  _objc_destroyWeak(param_1 + _DAT_112713f08);
  _objc_destroyWeak(param_1 + _DAT_112713f8c);
  _objc_destroyWeak(param_1 + _DAT_112713f04);
  _objc_destroyWeak(param_1 + _DAT_112713efc);
  _objc_destroyWeak(param_1 + _DAT_112713ef8);
  _objc_destroyWeak(param_1 + _DAT_112713f0c);
  _objc_destroyWeak(param_1 + _DAT_112713ee8);
  _objc_destroyWeak(param_1 + _DAT_112713f40);
  _objc_destroyWeak(param_1 + _DAT_112713f44);
  _objc_destroyWeak(param_1 + _DAT_112713f4c);
  _objc_destroyWeak(param_1 + _DAT_112713f38);
  _objc_destroyWeak(param_1 + _DAT_112713f24);
  _objc_destroyWeak(param_1 + _DAT_112713f2c);
  _objc_destroyWeak(param_1 + _DAT_112713f30);
  _objc_destroyWeak(param_1 + _DAT_112713f10);
  _objc_destroyWeak(param_1 + _DAT_112713f60);
  _objc_destroyWeak(param_1 + _DAT_112713f34);
  _objc_destroyWeak(param_1 + _DAT_112713eec);
  _objc_destroyWeak(param_1 + _DAT_112713f50);
  _objc_destroyWeak(param_1 + _DAT_112713fa4);
  _objc_destroyWeak(param_1 + _DAT_112713f3c);
  _objc_destroyWeak(param_1 + _DAT_112713ef4);
  _objc_destroyWeak(param_1 + _DAT_112713f58);
  _objc_destroyWeak(param_1 + _DAT_112713f54);
  _objc_destroyWeak(param_1 + _DAT_112713f00);
  _objc_destroyWeak(param_1 + _DAT_112713f5c);
  _objc_destroyWeak(param_1 + _DAT_112713ef0);
  _objc_destroyWeak(param_1 + _DAT_112713f1c);
  _objc_destroyWeak(param_1 + _DAT_112713f48);
  _objc_destroyWeak(param_1 + _DAT_112713f20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112713f14);
  return;
}



/* Entry: 104e2e050; end: 104e2ef67; -[SCPublicProfileManagementViewController initWithUserSession:navigationDelegate:businessProfileAndUserData:fadeInPresentation:notification:initialRouteName:publicProfileManagementContextServices:circumstanceEngine:complianceEngine:composerApplication:friendStore:composerMediaBridgeServices:featureSettingsService:snapchattersDataFetcher:snapchattersDataMutator:snapchattersDataTracker:webBrowserScopeExposer:safeBrowsingAPI:legacyNotificationManager:deepLinkHandler:snapProProfilesProvider:valdiRuntimeProvider:composerBlizzardLogger:userBlizzard:boltDataUploader:storiesSnapReadReceiptCoordinator:lensModularCameraPresentation:composerCameraRollServices:composerNetworkingClient:composerCoreUIServices:cofStore:supStore:storyPlayerCreator:chatCameraScopeExposer:chatCameraScopeServices:unifiedPublicProfilesPresenterScopeLauncher:deepLinkSendToScopeExposer:sendToScopeExposer:sendToScopeServices:profileManagementScopeDelegate:grpcServiceFactory:activityFeedScopeExposer:publicProfileManager:snapProShareMessageSender:memoriesPickerScopeExposer:memoriesPickerV2ScopeServices:memoriesTranscoder:nativeStoryClientModelGenerator:contentProductPlaybackScopeExposer:discoverFeedStoryPlayer:businessIAPServices:adPreviewScopeExposer:defaultTab:deeplinkURL:deeplinkHandlingId:shareScopeExposer:linkGenerationService:deeplinkAction:addToStoryCameraScopeLauncher:addToStoryCameraScopeBuilder:deeplinkAdId:deeplinkSnapId:deeplinkSnapContentType:deeplinkPlaybackParams:communityPillTapScopeExposer:communityStoreProvider:multiProfileServices:directorModeScopeExposer:directorModeScopeServices:pageLauncherServices:myStoriesDataCoordinator:storiesThumbnailCoordinator:creatorsProfileImageScopeExposer:creatorsProfileImageScopeServices:memoriesQuickPostScopeExposer:qrCodeCardScopeExposer:notificationPool:spotlightSubmissionScopeExposer:spotlightSubmissionScopeServices:composerSafetyReportServices:deckServices:friendingExperimentReader:creatorSubscriptionOnboardingScopeFactoryServices:creatorSubscriptionsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104e2e050(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                    undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                    undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                    undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                    undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                    undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                    undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                    undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                    undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                    undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                    undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                    undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                    undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined4 param_60,
                    undefined4 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                    undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                    undefined8 param_69,undefined8 param_70,undefined8 param_71)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
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
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain(param_51);
  _objc_retain(param_52);
  _objc_retain(param_53);
  _objc_retain(param_54);
  _objc_retain(param_55);
  _objc_retain(param_56);
  _objc_retain(param_58);
  _objc_retain(param_59);
  _objc_retain(param_62);
  _objc_retain(param_63);
  _objc_retain(param_64);
  _objc_retain(param_65);
  _objc_retain(param_66);
  _objc_retain(param_67);
  _objc_retain(param_68);
  _objc_retain(param_69);
  _objc_retain(param_70);
  _objc_retain(param_71);
  _objc_retain(in_stack_000001f0);
  _objc_retain(in_stack_000001f8);
  _objc_retain(in_stack_00000200);
  _objc_retain(in_stack_00000208);
  _objc_retain(in_stack_00000210);
  _objc_retain(in_stack_00000218);
  _objc_retain(in_stack_00000220);
  _objc_retain(in_stack_00000228);
  _objc_retain(in_stack_00000230);
  _objc_retain(in_stack_00000238);
  _objc_retain(in_stack_00000240);
  _objc_retain(in_stack_00000248);
  _objc_retain(in_stack_00000250);
  _objc_retain(in_stack_00000258);
  _objc_retain(in_stack_00000260);
  _objc_retain(in_stack_00000268);
  lVar8 = (long)_DAT_112714008;
  _objc_retain(in_stack_00000268);
  uVar1 = *(undefined8 *)(param_1 + lVar8);
  *(undefined8 *)(param_1 + lVar8) = in_stack_00000268;
  _objc_release(uVar1);
  lVar9 = (long)_DAT_11271400c;
  _objc_retain(param_15);
  uVar1 = *(undefined8 *)(param_1 + lVar9);
  *(undefined8 *)(param_1 + lVar9) = param_15;
  _objc_release(uVar1);
  lVar8 = (long)_DAT_112714010;
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + lVar8);
  *(undefined8 *)(param_1 + lVar8) = param_7;
  _objc_release(uVar1);
  lVar8 = (long)_DAT_112714014;
  _objc_retain(param_23);
  uVar1 = *(undefined8 *)(param_1 + lVar8);
  *(undefined8 *)(param_1 + lVar8) = param_23;
  _objc_release(uVar1);
  lVar10 = (long)_DAT_112714018;
  _objc_retain(param_55);
  uVar1 = *(undefined8 *)(param_1 + lVar10);
  *(undefined8 *)(param_1 + lVar10) = param_55;
  _objc_release(uVar1);
  lVar8 = (long)_DAT_11271401c;
  *(undefined8 *)(param_1 + lVar8) = param_57;
  *(undefined1 *)(param_1 + _DAT_112714020) = param_6;
  lVar7 = (long)_DAT_112714024;
  *(undefined4 *)(param_1 + lVar7) = param_60;
  lVar11 = (long)_DAT_112714028;
  _objc_retain(param_64);
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  *(undefined8 *)(param_1 + lVar11) = param_64;
  _objc_release(uVar1);
  lVar11 = (long)_DAT_11271402c;
  _objc_retain(param_65);
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  *(undefined8 *)(param_1 + lVar11) = param_65;
  _objc_release(uVar1);
  lVar11 = (long)_DAT_112714030;
  _objc_retain(param_66);
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  *(undefined8 *)(param_1 + lVar11) = param_66;
  _objc_release(uVar1);
  lVar11 = (long)_DAT_112714034;
  _objc_retain(param_67);
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  *(undefined8 *)(param_1 + lVar11) = param_67;
  _objc_release(uVar1);
  lVar11 = (long)_DAT_112714038;
  _objc_retain(param_70);
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  *(undefined8 *)(param_1 + lVar11) = param_70;
  _objc_release(uVar1);
  lVar11 = (long)_DAT_11271403c;
  _objc_retain(param_26);
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  *(undefined8 *)(param_1 + lVar11) = param_26;
  _objc_release(uVar1);
  lVar11 = (long)_DAT_112714040;
  _objc_retain(in_stack_00000230);
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  *(undefined8 *)(param_1 + lVar11) = in_stack_00000230;
  _objc_release(uVar1);
  lVar11 = (long)_DAT_112714044;
  _objc_retain(in_stack_00000258);
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  *(undefined8 *)(param_1 + lVar11) = in_stack_00000258;
  _objc_release(uVar1);
  lVar11 = (long)_DAT_112714048;
  _objc_retain(in_stack_00000260);
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  *(undefined8 *)(param_1 + lVar11) = in_stack_00000260;
  _objc_release(uVar1);
  uVar6 = param_7;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010681dc64(param_3,param_5,uVar1,param_8,param_10,param_11,
                      *(undefined8 *)(param_1 + lVar9),*(undefined8 *)(param_1 + lVar10),
                      *(undefined8 *)(param_1 + _DAT_11271404c),*(undefined8 *)(param_1 + lVar8),
                      *(undefined4 *)(param_1 + lVar7));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar6);
  lVar8 = param_1;
  func_0x00010be5bbe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b0f60;
  _objc_alloc();
  uVar6 = param_24;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40();
  _objc_release(uVar1);
  _objc_release(uVar6);
  puStack_70 = PTR_PTR_1126e46f8;
  plVar4 = &lStack_78;
  lStack_78 = param_1;
  _objc_msgSendSuper2(plVar4,PTR_s_initWithValdiView_viewModel_comp_1125f5ab8,puVar3,0,lVar8,
                      param_24);
  if (plVar4 != (long *)0x0) {
    func_0x00010c189400(plVar4);
    lVar7 = (long)_DAT_112714050;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)((long)plVar4 + lVar7);
    *(undefined8 *)((long)plVar4 + lVar7) = param_3;
    _objc_release(uVar1);
    lVar11 = (long)_DAT_112714054;
    _objc_retain(puVar3);
    uVar1 = *(undefined8 *)((long)plVar4 + lVar11);
    *(undefined **)((long)plVar4 + lVar11) = puVar3;
    _objc_release(uVar1);
    lVar11 = (long)_DAT_112714058;
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)((long)plVar4 + lVar11);
    *(undefined8 *)((long)plVar4 + lVar11) = param_4;
    _objc_release(uVar1);
    lVar11 = (long)_DAT_11271405c;
    _objc_retain(param_8);
    uVar1 = *(undefined8 *)((long)plVar4 + lVar11);
    *(undefined8 *)((long)plVar4 + lVar11) = param_8;
    _objc_release(uVar1);
    lVar11 = (long)_DAT_112714060;
    _objc_retain(param_10);
    uVar1 = *(undefined8 *)((long)plVar4 + lVar11);
    *(undefined8 *)((long)plVar4 + lVar11) = param_10;
    _objc_release(uVar1);
    lVar11 = (long)_DAT_112714064;
    _objc_retain(param_11);
    uVar1 = *(undefined8 *)((long)plVar4 + lVar11);
    *(undefined8 *)((long)plVar4 + lVar11) = param_11;
    _objc_release(uVar1);
    lVar11 = (long)_DAT_112714068;
    _objc_retain(param_21);
    uVar1 = *(undefined8 *)((long)plVar4 + lVar11);
    *(undefined8 *)((long)plVar4 + lVar11) = param_21;
    _objc_release(uVar1);
    lVar11 = (long)_DAT_11271406c;
    _objc_retain(param_36);
    uVar1 = *(undefined8 *)((long)plVar4 + lVar11);
    *(undefined8 *)((long)plVar4 + lVar11) = param_36;
    _objc_release(uVar1);
    lVar11 = (long)_DAT_112714070;
    _objc_retain(param_37);
    uVar1 = *(undefined8 *)((long)plVar4 + lVar11);
    *(undefined8 *)((long)plVar4 + lVar11) = param_37;
    _objc_release(uVar1);
    _objc_storeWeak((long)plVar4 + (long)_DAT_112714074,param_42);
    if (param_5 != 0) {
      puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)((long)plVar4 + (long)_DAT_112714078);
      *(undefined **)((long)plVar4 + (long)_DAT_112714078) = puVar5;
      _objc_release(uVar1);
      _objc_initWeak(auStack_80,plVar4);
      uVar6 = *(undefined8 *)((long)plVar4 + lVar7);
      func_0x00010bf25180(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar6;
      func_0x00010c0b7ee0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_5;
      func_0x00010bf25000(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar7;
      func_0x00010bfe5ea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_88,auStack_80);
      func_0x00010bfd3240(uVar1);
      _objc_release(lVar11);
      _objc_release(lVar7);
      _objc_release(uVar1);
      _objc_release(uVar6);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_80);
    }
  }
  _objc_release(puVar3);
  _objc_release(lVar8);
  _objc_release(uVar2);
  _objc_release(in_stack_00000268);
  _objc_release(in_stack_00000260);
  _objc_release(in_stack_00000258);
  _objc_release(in_stack_00000250);
  _objc_release(in_stack_00000248);
  _objc_release(in_stack_00000240);
  _objc_release(in_stack_00000238);
  _objc_release(in_stack_00000230);
  _objc_release(in_stack_00000228);
  _objc_release(in_stack_00000220);
  _objc_release(in_stack_00000218);
  _objc_release(in_stack_00000210);
  _objc_release(in_stack_00000208);
  _objc_release(in_stack_00000200);
  _objc_release(in_stack_000001f8);
  _objc_release(in_stack_000001f0);
  _objc_release(param_71);
  _objc_release(param_70);
  _objc_release(param_69);
  _objc_release(param_68);
  _objc_release(param_67);
  _objc_release(param_66);
  _objc_release(param_65);
  _objc_release(param_64);
  _objc_release(param_63);
  _objc_release(param_62);
  _objc_release(param_59);
  _objc_release(param_58);
  _objc_release(param_56);
  _objc_release(param_55);
  _objc_release(param_54);
  _objc_release(param_53);
  _objc_release(param_52);
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
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
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return plVar4;
}



/* Entry: 104e2ef68; end: 104e2f013;  */

void FUN_104e2ef68(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010befa2a0(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104e2f014; end: 104e2f0b3;  */

void FUN_104e2f014(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126b0f68;
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
    if (uVar1 != 0) {
      func_0x00010bdd7120(param_1);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e2f0b4; end: 104e30907; -[SCPublicProfileManagementViewController _makeImpalaContextWithUserSession:navigationDelegate:businessProfileAndUserData:fadeInPresentation:notification:initialRouteName:publicProfileManagementContextServices:circumstanceEngine:composerApplication:friendStore:composerMediaBridgeServices:featureSettingsService:snapchattersDataFetcher:snapchattersDataMutator:snapchattersDataTracker:webBrowserScopeExposer:safeBrowsingAPI:unifiedPublicProfilesPresenterScopeLauncher:shareScopeExposer:linkGenerationService:storyPlayerCreator:discoverFeedStoryPlayer:storiesSnapReadReceiptCoordinator:lensModularCameraPresentation:deepLinkSendToScopeExposer:deepLinkHandler:boltDataUploader:composerBlizzardLogger:userBlizzard:profileManagementScopeDelegate:sendToScopeExposer:sendToScopeServices:adPreviewScopeExposer:contentProductPlaybackScopeExposer:composerCameraRollServices:activityFeedScopeExposer:snapProShareMessageSender:memoriesPickerScopeExposer:memoriesPickerV2ScopeServices:composerCoreUIServices:businessIAPServices:memoriesTranscoder:cofStore:supStore:valdiRuntimeProvider:composerNetworkingClient:publicProfileManager:grpcServiceFactory:nativeStoryClientModelGenerator:addToStoryCameraScopeLauncher:addToStoryCameraScopeBuilder:communityPillTapScopeExposer:communityStoreProvider:directorModeScopeExposer:directorModeScopeServices:pageLauncherServices:myStoriesDataCoordinator:storiesThumbnailCoordinator:creatorsProfileImageScopeExposer:creatorsProfileImageScopeServices:memoriesQuickPostScopeExposer:qrCodeCardScopeExposer:spotlightSubmissionScopeExposer:spotlightSubmissionScopeServices:composerSafetyReportServices:deckServices:creatorSubscriptionsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e2f0b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined *puVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined8 uVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined *puVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined *puVar52;
  undefined8 uVar53;
  undefined *puVar54;
  undefined *puVar55;
  long lVar56;
  long lStack_490;
  ulong uStack_3e8;
  undefined *puStack_3d0;
  undefined *puStack_398;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
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
  _objc_retain(param_4);
  _objc_retain(param_5);
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
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain(param_51);
  _objc_retain(param_52);
  _objc_retain(param_53);
  _objc_retain(param_54);
  _objc_retain(param_55);
  _objc_retain(param_56);
  _objc_retain(param_57);
  _objc_retain(param_58);
  _objc_retain(param_59);
  _objc_retain(param_60);
  _objc_retain(param_61);
  _objc_retain(param_62);
  _objc_retain(param_63);
  _objc_retain(param_64);
  _objc_retain(param_65);
  _objc_retain(param_66);
  _objc_retain(param_67);
  _objc_retain(param_68);
  _objc_retain(param_69);
  puVar1 = PTR_PTR_1126b0f70;
  _objc_alloc();
  func_0x00010bff0f00();
  lVar56 = (long)_DAT_11271407c;
  _objc_retain(param_38);
  uVar2 = *(undefined8 *)(param_1 + lVar56);
  *(undefined8 *)(param_1 + lVar56) = param_38;
  _objc_release(uVar2);
  lVar56 = (long)_DAT_112714080;
  _objc_retain(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar56);
  *(undefined **)(param_1 + lVar56) = puVar1;
  _objc_release(uVar2);
  lVar56 = (long)_DAT_11271400c;
  uVar2 = *(undefined8 *)(param_1 + lVar56);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5bd80();
  func_0x00010c1ce320(param_1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar56);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5bda0();
  func_0x00010c1ce340(param_1);
  _objc_release(uVar2);
  _objc_initWeak(auStack_80,param_1);
  puVar3 = PTR_PTR_1126b0f78;
  _objc_alloc();
  puVar35 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104e30908;
  puStack_90 = &UNK_110849200;
  _objc_copyWeak(auStack_88,auStack_80);
  puStack_d0 = puVar35;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x104e3094c;
  puStack_b8 = &UNK_110849200;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010c0597c0();
  puVar4 = PTR_PTR_1126b0f80;
  _objc_alloc();
  uVar2 = param_55;
  func_0x00010c269d40(param_55);
  _objc_retainAutoreleasedReturnValue();
  puStack_f8 = puVar35;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_104e30990;
  puStack_e0 = &UNK_110852b60;
  _objc_copyWeak(auStack_d8,auStack_80);
  func_0x00010c0002e0();
  _objc_release(uVar2);
  uVar2 = param_42;
  func_0x00010c0dc680();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0b75e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar2);
  uVar2 = param_10;
  func_0x000108f48514();
  if ((int)uVar2 == 0) {
    puStack_398 = PTR_PTR_1126aff58;
    _objc_alloc();
    func_0x00010c038f60();
    uVar7 = param_5;
    func_0x00010c291840();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c074e40();
    if ((uVar8 & 1) == 0) {
      uStack_3e8 = param_5;
      func_0x000105e9b17c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uStack_3e8 = 0;
    }
    _objc_release(uVar7);
    puVar9 = PTR_PTR_1126b0e80;
    _objc_alloc();
    uVar7 = param_5;
    func_0x00010bf25000(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0585e0();
    _objc_release(uVar8);
    _objc_release(uVar7);
    puVar10 = PTR_PTR_1126b0f88;
    _objc_alloc();
    lVar56 = param_1 + _DAT_112714074;
    _objc_loadWeakRetained();
    func_0x00010c042140();
    _objc_release(lVar56);
    uVar2 = param_23;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf56860();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010c1e1580(uVar5);
    func_0x00010c1e1580(param_24);
    puVar11 = PTR_PTR_1126b0f90;
    _objc_alloc();
    func_0x00010c03d080();
    uVar7 = param_5;
    func_0x00010c291840(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c141400();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar8;
    func_0x000107d709a4(uVar8,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107d70860();
    _objc_release(uVar12);
    _objc_release(uVar2);
    _objc_release(uVar8);
    _objc_release(uVar7);
    puVar13 = PTR_PTR_1126b0f98;
    _objc_alloc();
    func_0x00010c061880();
    puVar14 = PTR_PTR_1126b0e68;
    _objc_alloc();
    uVar7 = param_5;
    func_0x00010bf25000();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02e980();
    _objc_release(uVar8);
    _objc_release(uVar7);
    puVar15 = PTR_PTR_1126b0fa0;
    _objc_alloc();
    func_0x00010c009380();
    puVar16 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    puVar17 = PTR_PTR_1126b0fa8;
    _objc_alloc();
    func_0x00010c034960();
    uVar2 = param_10;
    func_0x000108f27828();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = param_3;
    func_0x00010bf25180();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar18;
    func_0x00010c142320();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar19;
    func_0x00010bfe3680();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar20;
    func_0x000107d70788();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release();
    func_0x000108f27630();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar18;
    func_0x000107d70788();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar18);
    uVar18 = param_3;
    func_0x00010bf25180();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar18;
    func_0x00010c142320();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar20;
    func_0x00010c067760();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar22;
    func_0x000107d70788();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar22);
    _objc_release(uVar20);
    _objc_release(uVar18);
    uVar18 = param_10;
    func_0x000108f27718();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar18;
    func_0x000107d70788();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar18);
    uVar18 = param_10;
    func_0x000108f277a0();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar18;
    func_0x000107d70788();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar18);
    puVar25 = PTR_PTR_1126b0fb0;
    _objc_alloc_init();
    func_0x00010c1613e0(puVar25);
    func_0x00010c20d9a0(puVar25);
    func_0x00010c1a89e0(puVar25);
    func_0x00010c20d920(puVar25);
    func_0x00010c1ad9e0(puVar25);
    uVar26 = param_3;
    func_0x00010bf25180();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar26;
    func_0x00010c142320();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar27;
    func_0x00010c096b00();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar22;
    func_0x000107d70788();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bcbc0(puVar25);
    _objc_release(uVar18);
    _objc_release(uVar22);
    _objc_release(uVar27);
    _objc_release(uVar26);
    uVar18 = param_30;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar28 = PTR_PTR_1126b0fb8;
    _objc_alloc();
    func_0x00010c0093c0();
    uVar22 = param_37;
    func_0x00010bf2a9e0();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar22;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar29 = uVar27;
    func_0x00010c0b7000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar27);
    _objc_release(uVar22);
    uVar22 = param_42;
    func_0x00010beef000();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar22;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar30 = uVar27;
    func_0x00010c0b7620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar27);
    _objc_release(uVar22);
    puVar31 = PTR_PTR_1126aead8;
    _objc_alloc();
    func_0x00010c038f40();
    uVar27 = param_42;
    func_0x00010beff660();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar27;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar26;
    func_0x00010c0b7600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar26);
    _objc_release(uVar27);
    puVar32 = PTR_PTR_1126b0fc0;
    _objc_alloc();
    func_0x00010c0588c0();
    puVar33 = PTR_PTR_1126b0fc8;
    _objc_alloc();
    func_0x00010bff9ba0();
    puVar34 = PTR_PTR_1126b0fd0;
    _objc_alloc();
    puVar35 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_118 = 0xc2000000;
    uStack_110 = 0x104e309f8;
    puStack_108 = &UNK_1108434b0;
    _objc_copyWeak(auStack_100,auStack_80);
    puStack_148 = puVar35;
    uStack_140 = 0xc2000000;
    pcStack_138 = FUN_104e30b04;
    puStack_130 = &UNK_1108434b0;
    _objc_copyWeak(auStack_128,auStack_80);
    puStack_170 = puVar35;
    uStack_168 = 0xc2000000;
    pcStack_160 = FUN_104e30c10;
    puStack_158 = &UNK_1108434b0;
    _objc_copyWeak(auStack_150,auStack_80);
    _objc_copyWeak(auStack_178,auStack_80);
    func_0x00010c03e0a0();
    uVar27 = param_47;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = uVar27;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar27);
    puVar35 = PTR_PTR_1126afe50;
    _objc_alloc();
    func_0x00010c040b80();
    func_0x00010c1c1bc0();
    if (param_5 == 0) {
      lStack_490 = 0;
    }
    else {
      uVar27 = param_45;
      func_0x00010c269d40(param_45);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdf1f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar27);
      lStack_490 = param_1;
    }
    uVar27 = param_58;
    func_0x00010c0f14e0();
    _objc_retainAutoreleasedReturnValue();
    uVar36 = uVar27;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar27);
    puVar37 = PTR_PTR_1126b0fd8;
    _objc_alloc();
    func_0x00010c02d260();
    puVar38 = PTR_PTR_1126b0fe0;
    _objc_alloc();
    func_0x00010c0617a0();
    uVar27 = param_67;
    func_0x00010c1493c0();
    _objc_retainAutoreleasedReturnValue();
    uVar39 = uVar27;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar40 = uVar39;
    func_0x00010c1493a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar39);
    _objc_release(uVar27);
    uVar27 = param_68;
    func_0x00010bf66980();
    _objc_retainAutoreleasedReturnValue();
    uVar39 = uVar27;
    func_0x00010bf44a60();
    _objc_retainAutoreleasedReturnValue();
    uVar41 = uVar39;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar42 = uVar41;
    func_0x00010bf55800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar41);
    _objc_release(uVar39);
    _objc_release(uVar27);
    puStack_3d0 = PTR_PTR_1126b0fe8;
    _objc_alloc();
    uVar27 = param_13;
    func_0x00010bfe7700();
    _objc_retainAutoreleasedReturnValue();
    uVar39 = uVar27;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar41 = param_48;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar43 = param_45;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar44 = param_46;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar45 = param_49;
    func_0x00010c0e0460();
    _objc_retainAutoreleasedReturnValue();
    uVar46 = param_50;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar47 = param_51;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar48 = PTR_PTR_1126b0ff0;
    _objc_alloc_init();
    uVar49 = param_69;
    func_0x00010bf5b4a0();
    _objc_retainAutoreleasedReturnValue();
    uVar50 = uVar49;
    func_0x00010c260900();
    _objc_retainAutoreleasedReturnValue();
    uVar51 = uVar50;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    puVar52 = PTR_PTR_1126ae820;
    _objc_alloc();
    puVar54 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar53 = param_69;
    func_0x00010bf5b4a0(param_69);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5ba20();
    func_0x00010c0df6e0(puVar54);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060400();
    puVar55 = puVar52;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff3880();
    _objc_release(puVar55);
    _objc_release(puVar52);
    _objc_release(puVar54);
    _objc_release(uVar53);
    _objc_release(uVar51);
    _objc_release(uVar50);
    _objc_release(uVar49);
    _objc_release(puVar48);
    _objc_release(uVar47);
    _objc_release(uVar46);
    _objc_release(uVar45);
    _objc_release(uVar44);
    _objc_release(uVar43);
    _objc_release(uVar41);
    _objc_release(uVar39);
    _objc_release(uVar27);
    _objc_release(uVar42);
    _objc_release(uVar40);
    _objc_release(puVar38);
    _objc_release(puVar37);
    _objc_release(uVar36);
    _objc_release(lStack_490);
    _objc_release(puVar35);
    _objc_release(uVar26);
    _objc_release(puVar34);
    _objc_destroyWeak(auStack_178);
    _objc_destroyWeak(auStack_150);
    _objc_destroyWeak(auStack_128);
    _objc_destroyWeak(auStack_100);
    _objc_release(puVar33);
    _objc_release(puVar32);
    _objc_release(uVar22);
    _objc_release(puVar31);
    _objc_release(uVar30);
    _objc_release(uVar29);
    _objc_release(puVar28);
    _objc_release(uVar18);
    _objc_release(puVar25);
    _objc_release(uVar24);
    _objc_release(uVar20);
    _objc_release(uVar23);
    _objc_release(uVar19);
    _objc_release(uVar21);
    _objc_release(uVar2);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar11);
    _objc_release(uVar5);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(uStack_3e8);
  }
  else {
    puVar35 = param_9;
    func_0x00010c119b40();
    _objc_retainAutoreleasedReturnValue();
    puStack_398 = puVar35;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar35);
    puStack_3d0 = puStack_398;
    func_0x00010c1199e0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puStack_398);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_d8);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar1);
  _objc_release(param_69);
  _objc_release(param_68);
  _objc_release(param_67);
  _objc_release(param_66);
  _objc_release(param_65);
  _objc_release(param_64);
  _objc_release(param_63);
  _objc_release(param_62);
  _objc_release(param_61);
  _objc_release(param_60);
  _objc_release(param_59);
  _objc_release(param_58);
  _objc_release(param_57);
  _objc_release(param_56);
  _objc_release(param_55);
  _objc_release(param_54);
  _objc_release(param_53);
  _objc_release(param_52);
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
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
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_3d0);
  return;
}



/* Entry: 104e30908; end: 104e3098f;  */

void FUN_104e30908(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c1ce320(param_1);
    func_0x00010bedc360(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e30990; end: 104e30abf;  */

void FUN_104e30990(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be685a0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e30ac0; end: 104e30b03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e30ac0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271400c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a82e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e30b04; end: 104e30bcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e30b04(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11271400c);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = 0x11;
    func_0x0001000819a8(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8520(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 104e30bcc; end: 104e30c0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e30bcc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271400c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a8320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e30c10; end: 104e30cd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e30c10(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11271400c);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = 0x11;
    func_0x0001000819a8(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8520(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 104e30cd8; end: 104e30d1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e30cd8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271400c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a8420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e30d1c; end: 104e30de3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e30d1c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11271400c);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = 0x11;
    func_0x0001000819a8(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8520(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  return;
}


