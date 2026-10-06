/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105c62c9c; end: 105c62c9f; -[SCManageContactsSettingsComposerViewController preferredStatusBarStyle] */

undefined8 FUN_105c62c9c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c292b20();
    _objc_release(param_1);
    uVar1 = 3;
    if (lVar2 == 2) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 3;
}



/* Entry: 105c62ca0; end: 105c62caf; -[SCManageContactsSettingsComposerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c62ca0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + _DAT_112732eb0));
  return;
}



/* Entry: 105c62cb0; end: 105c62cc3; -[SCManageContactsSettingsComposerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c62cb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112732eb0,0);
  return;
}



/* Entry: 105c62cc4; end: 105c63077; -[SCManageContactsSettingsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c62cc4(long param_1)

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
  long lVar28;
  long lVar29;
  undefined8 uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  
  puVar1 = PTR_PTR_1126c3778;
  _objc_alloc();
  lVar31 = (long)_DAT_112732eb4;
  lVar2 = param_1 + lVar31;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112732eb8;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112732ebc;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = (long)_DAT_112732ec0;
  lVar8 = param_1 + lVar34;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112732ec4;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010beff660();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1 + lVar31;
  _objc_loadWeakRetained();
  lVar12 = lVar31;
  func_0x00010c244f20();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_112732ec8;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bfb9560();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_112732ecc;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = (long)_DAT_112732ed0;
  lVar17 = param_1 + lVar32;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010bf46520();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1 + lVar32;
  _objc_loadWeakRetained();
  lVar19 = lVar32;
  func_0x00010bf46500();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_112732ed4;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010bf49f00();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = (long)_DAT_112732ed8;
  lVar22 = param_1 + lVar33;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010bf49f40();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1 + lVar33;
  _objc_loadWeakRetained();
  lVar24 = lVar33;
  func_0x00010bf49f80();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + _DAT_112732edc;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + _DAT_112732ee4;
  _objc_loadWeakRetained();
  lVar28 = lVar27;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1 + lVar34;
  _objc_loadWeakRetained();
  lVar29 = lVar34;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049c60();
  lVar35 = (long)_DAT_112732ee8;
  uVar30 = *(undefined8 *)(param_1 + lVar35);
  *(undefined **)(param_1 + lVar35) = puVar1;
  _objc_release(uVar30);
  _objc_release(lVar29);
  _objc_release(lVar34);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar33);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar32);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar31);
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
                    /* WARNING: Could not recover jumptable at 0x00010c238470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar35),PTR_s_showManageContactsSettingsPage_11266bb40);
  return;
}



/* Entry: 105c63078; end: 105c63147; -[SCManageContactsSettingsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c63078(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112732ebc);
  _objc_storeStrong(param_1 + _DAT_112732ee0,0);
  _objc_destroyWeak(param_1 + _DAT_112732eb8);
  _objc_destroyWeak(param_1 + _DAT_112732ee4);
  _objc_destroyWeak(param_1 + _DAT_112732ec4);
  _objc_destroyWeak(param_1 + _DAT_112732ed8);
  _objc_destroyWeak(param_1 + _DAT_112732ed4);
  _objc_destroyWeak(param_1 + _DAT_112732ed0);
  _objc_destroyWeak(param_1 + _DAT_112732ecc);
  _objc_destroyWeak(param_1 + _DAT_112732ec8);
  _objc_destroyWeak(param_1 + _DAT_112732eb4);
  _objc_destroyWeak(param_1 + _DAT_112732ec0);
  _objc_destroyWeak(param_1 + _DAT_112732edc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112732ee8,0);
  return;
}



/* Entry: 105c63148; end: 105c63523; -[SCManageContactsSettingsRouter initWithSnapchattersDataMutator:circumstanceEngine:appStartExperimentReader:uIContainer:alertPresenterFactory:snapchattersloggingEventRepository:friendingMetricsLogger:performerProvider:friendingConfigsProvider:friendingConfigsMutator:contactPermissionEventsLogger:contactPermissionInfoProvider:contactPermissionManager:applicationLifecycleEvents:webBrowsingScopeExposer:valdiRuntimeProvider:manageContactsSettingsDelegate:] */

undefined8 *
FUN_105c63148(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

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
  puStack_70 = PTR_PTR_1126ec998;
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
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[6];
    puVar1[6] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[7];
    puVar1[7] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[8];
    puVar1[8] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[9];
    puVar1[9] = param_15;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c3760;
    _objc_alloc();
    func_0x00010c002400();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_18;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x13,param_19);
  }
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



/* Entry: 105c63524; end: 105c635cb; -[SCManageContactsSettingsRouter showManageContactsSettingsPage] */

void FUN_105c63524(undefined8 param_1)

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
  pcStack_40 = FUN_105c635cc;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105c635cc; end: 105c635f7;  */

void FUN_105c635cc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb9c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c635f8; end: 105c63637; -[SCManageContactsSettingsRouter _showManageContactsSettingsPageOnMainThread] */

void FUN_105c635f8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010bdefc80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  *(long *)(param_1 + 0xa8) = lVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_attachUI__1125a0c08,
             *(undefined8 *)(param_1 + 0xa8));
  return;
}



/* Entry: 105c63638; end: 105c6367f; -[SCManageContactsSettingsRouter webBrowserDidDismiss:] */

void FUN_105c63638(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x88);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x88));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105c63680; end: 105c636b3; -[SCManageContactsSettingsRouter didMoveToParentViewController:] */

void FUN_105c63680(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return;
  }
  param_1 = param_1 + 0x98;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0b7d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c636b4; end: 105c6370b; -[SCManageContactsSettingsRouter _presentWebViewControllerFromComposer:] */

void FUN_105c636b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  _objc_retain(param_3);
  func_0x00010c0d66a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c6370c; end: 105c63747; -[SCManageContactsSettingsRouter _dismissWebPageFromCompsoer] */

void FUN_105c6370c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c0d66a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c63748; end: 105c63983; -[SCManageContactsSettingsRouter _createManageContactsValdiViewController] */

void FUN_105c63748(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126aeaf8;
  _objc_alloc();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105c63984;
  puStack_90 = &UNK_110849680;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010c0311a0();
  puVar2 = PTR_PTR_1126c3780;
  _objc_alloc();
  func_0x00010c062e40();
  puVar3 = PTR_PTR_1126c3788;
  _objc_alloc();
  lVar4 = param_1;
  func_0x00010bdef0a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb53c0();
  func_0x00010bfef9a0();
  uVar5 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined **)(param_1 + 0xa0) = puVar3;
  _objc_release(uVar5);
  _objc_release(lVar4);
  puVar3 = PTR_PTR_1126c3790;
  _objc_alloc(PTR_PTR_1126c3790);
  uVar5 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010bf4a6c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05fe60(puVar3);
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105c63984; end: 105c639f7;  */

void FUN_105c63984(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7f5c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c639f8; end: 105c63aaf; -[SCManageContactsSettingsRouter _createLazyAlertPresenter] */

void FUN_105c639f8(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105c63ab0; end: 105c63aef;  */

void FUN_105c63ab0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdea980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105c63af0; end: 105c63c47; -[SCManageContactsSettingsRouter _createAlertPresenter] */

void FUN_105c63af0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105c63c48;
  puStack_68 = &UNK_110849680;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010c0311a0(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b7600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105c63c48; end: 105c63c97;  */

void FUN_105c63c48(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7a140();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c63c98; end: 105c63c9b;  */

void FUN_105c63c98(void)

{
  return;
}



/* Entry: 105c63c9c; end: 105c63d33;  */

void FUN_105c63c9c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_retain(param_2);
  func_0x00010be02500(param_1);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 105c63d34; end: 105c63d47;  */

void FUN_105c63d34(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105c63d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105c63d48; end: 105c63d57; -[SCManageContactsSettingsRouter _presentAlertViewController:completion:] */

void FUN_105c63d48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10edb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xa8),PTR_s_presentViewController_animated_c_112621588,
             param_3,1,param_4);
  return;
}



/* Entry: 105c63d58; end: 105c63e1f; -[SCManageContactsSettingsRouter _dismissAlertViewController:] */

void FUN_105c63d58(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))(param_3);
      }
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0xa8);
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_105c63e20;
      puStack_40 = &UNK_110849530;
      _objc_retain(param_3);
      lStack_38 = param_3;
      func_0x00010bf84b00(uVar2,param_2,1,&puStack_58);
      _objc_release(lStack_38);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105c63e20; end: 105c63e33;  */

void FUN_105c63e20(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105c63e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105c63e34; end: 105c63f5b; -[SCManageContactsSettingsRouter tryToEnableContactSyncWithConfirmCallback:cancelCallback:completionQueue:] */

void FUN_105c63e34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_38,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105c63f5c;
  puStack_60 = &UNK_110861918;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(param_4);
  uStack_48 = param_4;
  _objc_retain(param_5);
  uStack_58 = param_5;
  func_0x0001000d76cc("APPSTORE",&puStack_78);
  _objc_release(uStack_58);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c63f5c; end: 105c63f93;  */

void FUN_105c63f5c(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed0460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c63f94; end: 105c642cb; -[SCManageContactsSettingsRouter _tryToEnableContactSyncOnMainThreadWithConfirmCallback:cancelCallback:completionQueue:] */

void FUN_105c63f94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined **ppuStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_150 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105c642cc;
  puStack_a0 = &UNK_1108e0d38;
  uStack_148 = param_3;
  uStack_98 = param_3;
  _objc_retain(param_3);
  ppuVar2 = &puStack_b8;
  _objc_retainBlock();
  puStack_e0 = puVar7;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_105c64354;
  puStack_c8 = &UNK_1108e0d38;
  uStack_c0 = param_4;
  _objc_retain(param_4);
  ppuVar3 = &puStack_e0;
  _objc_retainBlock();
  puVar11 = PTR___dispatch_main_q_11034be20;
  if (param_5 == (undefined *)0x0) {
    puVar4 = PTR___dispatch_main_q_11034be20;
    _objc_retain(PTR___dispatch_main_q_11034be20);
  }
  else {
    puVar4 = param_5;
    _objc_retain(param_5);
    puVar11 = param_5;
  }
  puVar5 = PTR_PTR_1126aed70;
  func_0x000105c65e9c();
  _objc_retainAutoreleasedReturnValue();
  puStack_110 = puVar7;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_105c643dc;
  puStack_f8 = &UNK_11085c768;
  ppuStack_e8 = ppuVar2;
  _objc_retain(puVar11);
  puStack_f0 = puVar11;
  _objc_retain(ppuVar2);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar6 = PTR_PTR_1126aed70;
  func_0x000105c65e84();
  _objc_retainAutoreleasedReturnValue();
  puStack_140 = puVar7;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x105c644c0;
  puStack_128 = &UNK_11085c768;
  ppuStack_158 = ppuVar2;
  puStack_120 = puVar11;
  ppuStack_118 = ppuVar3;
  _objc_retain(puVar11);
  _objc_retain(ppuVar3);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar7 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = puVar7;
  func_0x000105c65dc4();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar4;
  func_0x000105c65ddc();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar5;
  puStack_88 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar7);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar4);
  lVar1 = lStack_150;
  func_0x00010c18b5e0(puVar7);
  func_0x00010c10eda0(*(undefined8 *)(lVar1 + 0xa8));
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puStack_120);
  _objc_release(ppuStack_118);
  _objc_release(puVar5);
  _objc_release(puStack_f0);
  _objc_release(ppuStack_e8);
  _objc_release(puVar11);
  _objc_release(ppuVar3);
  _objc_release(uStack_c0);
  _objc_release(ppuStack_158);
  _objc_release(uStack_98);
  _objc_release(param_4);
  _objc_release(uStack_148);
  puVar7 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  lStack_180 = lVar1;
  pcStack_168 = FUN_105c642cc;
  puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a0 = 0xc2000000;
  pcStack_198 = FUN_105c64340;
  puStack_190 = &UNK_110849530;
  uVar10 = *(undefined8 *)(puVar7 + 0x20);
  puStack_178 = param_5;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain(uVar10);
  uStack_188 = uVar10;
  func_0x00010007380c(param_2,&puStack_1a8);
  _objc_release(uStack_188);
  return;
}



/* Entry: 105c642cc; end: 105c6433f;  */

void FUN_105c642cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105c64340;
  puStack_30 = &UNK_110849530;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_28 = uVar1;
  func_0x00010007380c(param_2,&puStack_48);
  _objc_release(uStack_28);
  return;
}



/* Entry: 105c64340; end: 105c64353;  */

void FUN_105c64340(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105c6434c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105c64354; end: 105c643c7;  */

void FUN_105c64354(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105c643c8;
  puStack_30 = &UNK_110849530;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_28 = uVar1;
  func_0x00010007380c(param_2,&puStack_48);
  _objc_release(uStack_28);
  return;
}



/* Entry: 105c643c8; end: 105c643db;  */

void FUN_105c643c8(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105c643d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105c643dc; end: 105c64477;  */

void FUN_105c643dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 105c64478; end: 105c644f3;  */

void FUN_105c64478(long param_1)

{
  undefined *puVar1;
  
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c644f4; end: 105c6459b; -[SCManageContactsSettingsRouter showAllContactsPage] */

void FUN_105c644f4(undefined8 param_1)

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
  pcStack_40 = FUN_105c6459c;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105c6459c; end: 105c645c7;  */

void FUN_105c6459c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb7be0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c645c8; end: 105c6462f; -[SCManageContactsSettingsRouter _showAllContactsPageOnMainThread] */

void FUN_105c645c8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c3798;
  _objc_alloc(PTR_PTR_1126c3798);
  func_0x00010c008800();
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c0d66a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c64630; end: 105c646d7; -[SCManageContactsSettingsRouter dismiss] */

void FUN_105c64630(undefined8 param_1)

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
  pcStack_40 = FUN_105c646d8;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105c646d8; end: 105c64703;  */

void FUN_105c646d8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be02f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c64704; end: 105c6473f; -[SCManageContactsSettingsRouter _dismissOnMainThread] */

void FUN_105c64704(long param_1,undefined8 param_2)

{
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x20),param_2,0);
  param_1 = param_1 + 0x98;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0b7d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c64740; end: 105c64747; -[SCManageContactsSettingsRouter _shouldRemoveUserLevelPermission] */

byte FUN_105c64740(long param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61174();
  if (lRam00000001136c6d88 != -1) {
    func_0x00010002a2fc(0x1136c6d88,&PTR___NSConcreteGlobalBlock_110968228);
  }
  if ((bRam00000001136c6d52 & 1) == 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    puStack_38 = &UNK_10097d06c;
    puStack_30 = &UNK_110842e18;
    func_0x000107c61174(uVar1);
    uStack_28 = uVar1;
    if (lRam00000001136c6d58 != -1) {
      func_0x00010002a2fc(0x1136c6d58,&puStack_48);
    }
    bVar2 = bRam00000001136c6d50;
    func_0x000107c61170(uStack_28);
  }
  else {
    bVar2 = 0;
  }
  func_0x000107c61170(uVar1);
  return bVar2 & 1;
}



/* Entry: 105c64748; end: 105c64857; -[SCManageContactsSettingsRouter .cxx_destruct] */

void FUN_105c64748(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_destroyWeak(param_1 + 0x98);
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



/* Entry: 105c64858; end: 105c649bf; -[SCViewContactsSettingsViewController initWithDataMutator:snapchattersLoggingDataObservable:friendingMetricsLogger:performerProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105c64858(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126ec9a0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar4 = (long)_DAT_112732f40;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112732f44);
    *(undefined **)((long)puVar1 + (long)_DAT_112732f44) = puVar3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732f48;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732f4c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112732f50;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112732f54);
    *(undefined **)((long)puVar1 + (long)_DAT_112732f54) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105c649c0; end: 105c64e0b; -[SCViewContactsSettingsViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c649c0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lStack_110;
  undefined *puStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126ec9a0;
  lStack_98 = param_1;
  _objc_msgSendSuper2(&lStack_98,PTR_s_loadView_112604be0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc();
  func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar9 = (long)_DAT_112732f58;
  uVar8 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar1;
  _objc_release(uVar8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar9));
  _objc_release(puVar1);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar9));
  func_0x00010c16e9a0(*(undefined8 *)(param_1 + lVar9));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar9));
  func_0x00010c1eeb20(*(undefined8 *)PTR__UITableViewAutomaticDimension_110345db8,
                      *(undefined8 *)(param_1 + lVar9));
  func_0x00010c167740(*(undefined8 *)(param_1 + lVar9));
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar9));
  func_0x00010c1974c0(0x404e000000000000,*(undefined8 *)(param_1 + lVar9));
  func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                      *(undefined8 *)(param_1 + lVar9));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcde0(*(undefined8 *)(param_1 + lVar9));
  _objc_release(puVar1);
  uVar8 = *(undefined8 *)(param_1 + lVar9);
  _objc_opt_class(PTR_PTR_1126b5a18);
  func_0x00010c125fe0(uVar8);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar9));
  puStack_d8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar3 = *(long *)(param_1 + lVar9);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  lStack_a8 = lVar3;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_a0 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_b0 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar9);
  lStack_b8 = lVar3;
  lStack_88 = lVar3;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_c8 = uVar4;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_c0 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_d0 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar9);
  uStack_80 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  uStack_78 = uVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_d8);
  _objc_release(puVar1);
  _objc_release(uVar7);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(uVar8);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lStack_d0);
  _objc_release(lStack_c0);
  _objc_release(uStack_c8);
  _objc_release(lStack_b8);
  _objc_release(lStack_b0);
  _objc_release(lStack_a0);
  lVar3 = lStack_a8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_105c64e0c;
  puStack_108 = PTR_PTR_1126ec9a0;
  lStack_110 = lVar3;
  lStack_100 = lVar2;
  lStack_f8 = param_1;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_110,PTR_s_viewDidLoad_112684cd8);
  uVar8 = *(undefined8 *)(lVar3 + _DAT_112732f54);
  puVar1 = PTR_PTR_1126b1560;
  func_0x00010c29cac0(PTR_PTR_1126b1560);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar8);
  _objc_release(puVar1);
  return;
}



/* Entry: 105c64e0c; end: 105c64e83; -[SCViewContactsSettingsViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c64e0c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ec9a0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112732f54);
  puVar1 = PTR_PTR_1126b1560;
  func_0x00010c29cac0(PTR_PTR_1126b1560);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 105c64e84; end: 105c64efb; -[SCViewContactsSettingsViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c64e84(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ec9a0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112732f54);
  puVar1 = PTR_PTR_1126b1560;
  func_0x00010c29e700(PTR_PTR_1126b1560);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 105c64efc; end: 105c65047; -[SCViewContactsSettingsViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c64efc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ec9a0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidAppear__112684bd0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112732f54);
  puVar1 = PTR_PTR_1126b1560;
  func_0x00010c29c680(PTR_PTR_1126b1560);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112732f40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bfaa180(uVar2);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105c65048; end: 105c65097;  */

void FUN_105c65048(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return;
  }
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8aca0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c65098; end: 105c6510f; -[SCViewContactsSettingsViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c65098(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ec9a0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112732f54);
  puVar1 = PTR_PTR_1126b1560;
  func_0x00010c29e820(PTR_PTR_1126b1560);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 105c65110; end: 105c65187; -[SCViewContactsSettingsViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c65110(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ec9a0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112732f54);
  puVar1 = PTR_PTR_1126b1560;
  func_0x00010c29c860(PTR_PTR_1126b1560);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 105c65188; end: 105c65207; -[SCViewContactsSettingsViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c65188(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112732f54);
  puVar1 = PTR_PTR_1126b1560;
  func_0x00010c2a5e20(PTR_PTR_1126b1560);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  puStack_38 = PTR_PTR_1126ec9a0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105c65208; end: 105c65247; -[SCViewContactsSettingsViewController _reloadServerContacts:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c65208(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112732f44);
  *(undefined8 *)(param_1 + _DAT_112732f44) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be8adb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reloadTable_112580508);
  return;
}



/* Entry: 105c65248; end: 105c6524b; -[SCViewContactsSettingsViewController getTitle] */

void FUN_105c65248(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e24bf8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e24bf8,
                      &PTR____CFConstantStringClassReference_110e24bd8,0);
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



/* Entry: 105c6524c; end: 105c65257; -[SCViewContactsSettingsViewController supportedInterfaceOrientations] */

undefined8 FUN_105c6524c(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 105c65258; end: 105c6525f; -[SCViewContactsSettingsViewController numberOfSectionsInTableView:] */

undefined8 FUN_105c65258(void)

{
  return 1;
}



/* Entry: 105c65260; end: 105c6526f; -[SCViewContactsSettingsViewController tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c65260(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112732f44),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105c65270; end: 105c653df; -[SCViewContactsSettingsViewController tableView:cellForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c65270(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112732f58);
  _objc_retain(param_4);
  func_0x00010bf6e060(uVar3,param_2,&PTR____CFConstantStringClassReference_110e248f8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(ulong *)(param_1 + _DAT_112732f44);
  uVar1 = param_4;
  func_0x00010c142240(param_4);
  _objc_release(param_4);
  func_0x00010c0dfd20(uVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c27f7a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216540();
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_retain(uVar4);
  uVar2 = uVar4;
  func_0x00010bfdb6a0();
  if (((int)uVar2 == 0) || (uVar2 = uVar4, func_0x00010bfda2e0(), (uVar2 & 1) == 0)) {
    uVar2 = uVar4;
    func_0x00010bfdb6a0();
    if ((uVar2 & 1) == 0) {
      uVar2 = uVar4;
      func_0x00010bfda2e0();
      ppuVar5 = &PTR____CFConstantStringClassReference_110e24978;
      if ((int)uVar2 == 0) {
        ppuVar5 = (undefined **)0x0;
      }
    }
    else {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e24958;
    }
  }
  else {
    ppuVar5 = &PTR____CFConstantStringClassReference_110e24938;
  }
  _objc_release(uVar4);
  _objc_retain(ppuVar5);
  uVar1 = uVar3;
  func_0x00010c27f7a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c5c0();
  _objc_release(ppuVar5);
  _objc_release(uVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105c653e0; end: 105c653ef; -[SCViewContactsSettingsViewController _reloadTable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c653e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112732f58),PTR_s_reloadData_112627cf8);
  return;
}



/* Entry: 105c653f0; end: 105c6548f; -[SCViewContactsSettingsViewController tableView:heightForHeaderInSection:] */

undefined8
FUN_105c653f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_s_class_1125ac0b8;
  puVar2 = &uStack_50;
  puStack_48 = PTR_PTR_1126ec9a0;
  uStack_50 = param_2;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&uStack_50,puVar1);
  func_0x00010be46bc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0780(puVar2);
  _objc_release(param_4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105c65490; end: 105c6582b; -[SCViewContactsSettingsViewController tableView:viewForHeaderInSection:] */

void FUN_105c65490(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
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
  long lVar16;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar2 = PTR_PTR_1126af270;
  _objc_alloc_init();
  func_0x00010c1cfce0();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010c1bdd60(puVar2);
  func_0x00010c162900(puVar2);
  func_0x00010c213040(puVar2);
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar2);
  _objc_release(puVar3);
  func_0x00010c160fc0(puVar2);
  uVar5 = param_1;
  func_0x00010be46bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(puVar2);
  _objc_release(uVar5);
  func_0x00010c18b5e0(puVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar2);
  _objc_release(puVar3);
  func_0x00010be46bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099980(puVar2);
  _objc_release(param_1);
  func_0x00010c219b60(puVar2);
  func_0x00010befbb60(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar6 = puVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010c08de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf493c0(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  func_0x00010c2793a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010bf493c0(0xc040000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  func_0x00010c274200(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be7f650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105c6582c; end: 105c65833; -[SCViewContactsSettingsViewController attributedLabel:didSelectLinkWithURL:] */

void FUN_105c6582c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7f650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentWebViewWithUrl__11257d730,param_4);
  return;
}



/* Entry: 105c65834; end: 105c658b3; -[SCViewContactsSettingsViewController _presentWebViewWithUrl:] */

void FUN_105c65834(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afb78;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c057840();
  _objc_release(param_3);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c658b4; end: 105c658b7; -[SCViewContactsSettingsViewController _labelTextOfHeader] */

void FUN_105c658b4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e24cb8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e24cb8,
                      &PTR____CFConstantStringClassReference_110e24bd8,0);
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



/* Entry: 105c658b8; end: 105c658c7; -[SCViewContactsSettingsViewController pageEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105c658b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112732f54);
}



/* Entry: 105c658c8; end: 105c65907; -[SCViewContactsSettingsViewController setPageEventObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c658c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112732f54;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c65908; end: 105c65997; -[SCViewContactsSettingsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c65908(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112732f54,0);
  _objc_storeStrong(param_1 + _DAT_112732f50,0);
  _objc_storeStrong(param_1 + _DAT_112732f4c,0);
  _objc_storeStrong(param_1 + _DAT_112732f48,0);
  _objc_storeStrong(param_1 + _DAT_112732f44,0);
  _objc_storeStrong(param_1 + _DAT_112732f58,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112732f40,0);
  return;
}



/* Entry: 105c65998; end: 105c659a3; +[SCCContactSyncSettingsView componentPath] */

undefined ** FUN_105c65998(void)

{
  return &PTR____CFConstantStringClassReference_110e24998;
}



/* Entry: 105c659a4; end: 105c659d7; -[SCCContactSyncSettingsView initWithViewModel:componentContext:runtime:] */

void FUN_105c659a4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ec9a8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105c659d8; end: 105c65a27; -[SCCContactSyncSettingsView setViewModel:] */

void FUN_105c659d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c65a28; end: 105c65a6b; -[SCCContactSyncSettingsView viewModel] */

void FUN_105c65a28(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105c65a6c; end: 105c65bcf; -[SCCContactSyncSettingsContext initWithContactPermissionsStatusObservable:contactSyncEnabledObservable:alertPresenter:urlActionHandler:onDismissButtonTapped:onSeeContactsButtontapped:updateContactSyncEnabledSetting:deleteContacts:] */

undefined8 *
FUN_105c65a6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar1 = param_8;
  _objc_retainBlock();
  _objc_release(param_8);
  uVar2 = param_9;
  _objc_retainBlock();
  _objc_release(param_9);
  uVar3 = param_10;
  _objc_retainBlock();
  _objc_release(param_10);
  puStack_68 = PTR_PTR_1126ec9b0;
  puVar4 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar4,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_7);
  return puVar4;
}



/* Entry: 105c65bd0; end: 105c65bf7; +[SCCContactSyncSettingsContext valdiMarshallableObjectDescriptor] */

void FUN_105c65bd0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108e0d98;
  param_1[1] = &PTR_s_SCBridgeObservable_1108e0ee8;
  param_1[2] = &PTR_s_ob_v_1108e0d68;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105c65bf8; end: 105c65c1f;  */

undefined8 FUN_105c65bf8(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 105c65c20; end: 105c65c9f;  */

void FUN_105c65c20(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105c65cec;
  puStack_30 = &UNK_110842508;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105c65ca0; end: 105c65cd3; -[SCCContactSyncSettingsViewModel init] */

void FUN_105c65ca0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ec9b8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 105c65cd4; end: 105c65ceb; +[SCCContactSyncSettingsViewModel valdiMarshallableObjectDescriptor] */

void FUN_105c65cd4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10ddcc828;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105c65cec; end: 105c65d1b;  */

void FUN_105c65cec(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105c65d1c; end: 105c65fd3;  */

void FUN_105c65d1c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e249b8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e249b8,
                      &PTR____CFConstantStringClassReference_110e249d8,0);
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



/* Entry: 105c65fd4; end: 105c66047; -[SCContactEventsLoggerServices initWithContactPermissionEventsLogger:] */

undefined1 * FUN_105c65fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ec9c0;
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



/* Entry: 105c66048; end: 105c6604f; -[SCContactEventsLoggerServices contactPermissionEventsLogger] */

undefined8 FUN_105c66048(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105c66050; end: 105c6605b; -[SCContactEventsLoggerServices .cxx_destruct] */

void FUN_105c66050(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c6605c; end: 105c6629b; -[SCSearchHistoryManager initWithUserSession:userStorageServices:userNetworkServices:grapheneRegistry:valdiRuntimeProvider:alertPresenter:userInfoProvider:grpcServiceFactory:circumstanceEngine:notificationPresenterFactory:] */

undefined8 *
FUN_105c6605c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

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
  puStack_68 = PTR_PTR_1126ec9c8;
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
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
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



/* Entry: 105c6629c; end: 105c662f7; -[SCSearchHistoryManager clearRecentSearchedFriends] */

void FUN_105c6629c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c1067a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1d0640(uVar2,param_2,0,&PTR____CFConstantStringClassReference_110e24d18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105c662f8; end: 105c664cb; -[SCSearchHistoryManager deleteUserSearchHistory:] */

void FUN_105c662f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  func_0x00010bf3be40(param_1);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfe4d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf225e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar5);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfe4c00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010c25f600(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(puVar1);
  return;
}



/* Entry: 105c664cc; end: 105c664cf;  */

void FUN_105c664cc(void)

{
  return;
}



/* Entry: 105c664d0; end: 105c666ef;  */

void FUN_105c664d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c153a20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c37a0;
  func_0x00010bf3bfe0(PTR_PTR_1126c37a0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c252ee0(param_4);
  _objc_release(param_4);
  func_0x00010c0df780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c2ac460(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c153a20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c37a0;
  func_0x00010bf3bfe0(PTR_PTR_1126c37a0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0(uVar3);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_6 == 0,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 105c666f0; end: 105c6678b; -[SCSearchHistoryManager presentClearSearchHistory] */

void FUN_105c666f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105c6678c;
  puStack_40 = &UNK_110847628;
  lStack_38 = param_1;
  func_0x00010bfc69a0(uVar2,param_2,&puStack_58);
  _objc_release(uVar2);
  return;
}



/* Entry: 105c6678c; end: 105c66817;  */

void FUN_105c6678c(long param_1,undefined8 param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105c66818;
  puStack_38 = &UNK_110841f80;
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = param_2;
  _objc_retain(param_2);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(param_2);
  return;
}



/* Entry: 105c66818; end: 105c6690f;  */

void FUN_105c66818(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar2 = PTR_PTR_1126c37a8;
  func_0x00010bfbc0e0(PTR_PTR_1126c37a8,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0b75e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010bf55220(puVar2,param_2,uVar1,uVar3,uVar5,
                      *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x40));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar7 = puVar6;
  func_0x00010c10ba60();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar7 + 0x10))();
  _objc_release(puVar7);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105c66910; end: 105c6699f; -[SCSearchHistoryManager .cxx_destruct] */

void FUN_105c66910(long param_1)

{
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



/* Entry: 105c669a0; end: 105c66aa3; -[SCSearchHistoryServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c669a0(long param_1)

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
  uVar3 = *(undefined8 *)(param_1 + _DAT_112732fac);
  puVar2 = PTR_PTR_1126c37b8;
  _objc_alloc(PTR_PTR_1126c37b8);
  func_0x00010c01a840();
  func_0x00010bf9d660(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105c66aa4; end: 105c66d5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c66aa4(long param_1)

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
  undefined *puVar20;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar20 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR_PTR_1126c37b0;
    _objc_alloc();
    lVar2 = param_1 + _DAT_112732f88;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + _DAT_112732f8c;
    _objc_loadWeakRetained();
    lVar5 = param_1 + _DAT_112732f90;
    _objc_loadWeakRetained(lVar5);
    lVar6 = param_1 + _DAT_112732f94;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + _DAT_112732f98;
    _objc_loadWeakRetained();
    lVar9 = lVar8;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1 + _DAT_112732f9c;
    _objc_loadWeakRetained();
    lVar11 = lVar10;
    func_0x00010c2928c0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1 + _DAT_112732fa0;
    _objc_loadWeakRetained();
    lVar14 = lVar13;
    func_0x00010bfcfa80();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_1 + _DAT_112732fa4;
    _objc_loadWeakRetained();
    lVar17 = lVar16;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_1 + _DAT_112732fa8;
    _objc_loadWeakRetained();
    lVar19 = lVar18;
    func_0x00010c0dc680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05ebe0(puVar20);
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
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return;
}



/* Entry: 105c66d60; end: 105c66d67;  */

void FUN_105c66d60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdea990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__createAlertPresenter_112558400);
  return;
}



/* Entry: 105c66d68; end: 105c66e5f; -[SCSearchHistoryServicesEntryPoint _createAlertPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c66d68(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + _DAT_112732fb0;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0cf9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_112732fa8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010beff660();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b7600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105c66e60; end: 105c66e9b; -[SCSearchHistoryServicesEntryPoint end] */

void FUN_105c66e60(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ec9d0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c66e9c; end: 105c66f4f; -[SCSearchHistoryServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c66e9c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112732fa4);
  _objc_destroyWeak(param_1 + _DAT_112732fa0);
  _objc_destroyWeak(param_1 + _DAT_112732f9c);
  _objc_destroyWeak(param_1 + _DAT_112732fb0);
  _objc_destroyWeak(param_1 + _DAT_112732fa8);
  _objc_destroyWeak(param_1 + _DAT_112732f98);
  _objc_destroyWeak(param_1 + _DAT_112732f94);
  _objc_storeStrong(param_1 + _DAT_112732fac,0);
  _objc_destroyWeak(param_1 + _DAT_112732f90);
  _objc_destroyWeak(param_1 + _DAT_112732f8c);
  _objc_destroyWeak(param_1 + _DAT_112732fb4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112732f88);
  return;
}



/* Entry: 105c66f50; end: 105c66f7b; +[SCGrapheneSearchMetric clearSearchHistory] */

void FUN_105c66f50(void)

{
  _objc_alloc(PTR_PTR_1126c37a0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c66f7c; end: 105c6701b; -[SCGrapheneSearchMetric description] */

void FUN_105c66f7c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110db9e78;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110db9e78,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126ec9d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 105c6701c; end: 105c6715f; -[SCGrapheneRegistry searchGraphene] */

void FUN_105c6701c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105c670a4;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c1eb8 != -1) {
    func_0x00010002a2fc(0x1136c1eb8,&puStack_48);
  }
  uVar1 = uRam00000001136c1eb0;
  _objc_retain(uRam00000001136c1eb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105c67160; end: 105c6716b; +[SCCSearchHistoryCreateClearSearchHistoryManager modulePath] */

undefined ** FUN_105c67160(void)

{
  return &PTR____CFConstantStringClassReference_110e24d78;
}


