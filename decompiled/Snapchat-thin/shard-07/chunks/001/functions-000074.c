/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10516019c; end: 1051601c3;  */

void FUN_10516019c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e3c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onDismissButtonTapped_112616930);
  return;
}



/* Entry: 1051601c4; end: 1051601cb; -[SCBugsAndSuggestionsViewController onReportBugTapped] */

void FUN_1051601c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7be30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentInSettingReportPageWithT_11257c928,1)
  ;
  return;
}



/* Entry: 1051601cc; end: 105160223; -[SCBugsAndSuggestionsViewController onDismissButtonTapped] */

void FUN_1051601cc(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105160224;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 105160224; end: 105160263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105160224(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_11271da6c;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf21f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105160264; end: 10516026b; -[SCBugsAndSuggestionsViewController onMakeSuggestionButtonTapped] */

void FUN_105160264(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7be30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentInSettingReportPageWithT_11257c928,2)
  ;
  return;
}



/* Entry: 10516026c; end: 105160273; -[SCBugsAndSuggestionsViewController onShakeToReportTapped] */

void FUN_10516026c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7be30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentInSettingReportPageWithT_11257c928,6)
  ;
  return;
}



/* Entry: 105160274; end: 105160277; -[SCBugsAndSuggestionsViewController onMadeForMePanelTapped] */

void FUN_105160274(void)

{
  return;
}



/* Entry: 105160278; end: 1051603df; -[SCBugsAndSuggestionsViewController _presentInSettingReportPageWithType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105160278(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c0311a0(puVar1);
  puVar2 = PTR_PTR_1126b54f0;
  _objc_alloc(PTR_PTR_1126b54f0);
  func_0x00010c0458e0();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11271da50);
  func_0x00010bf24040(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11271da4c));
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1051603e0; end: 10516043b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051603e0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c11c520(*(undefined8 *)(param_1 + _DAT_11271da5c));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10516043c; end: 10516043f;  */

void FUN_10516043c(void)

{
  return;
}



/* Entry: 105160440; end: 105160497; -[SCBugsAndSuggestionsViewController shakeReportDidComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105160440(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271da4c;
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



/* Entry: 105160498; end: 105160563; -[SCBugsAndSuggestionsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105160498(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271da5c,0);
  _objc_storeStrong(param_1 + _DAT_11271da54,0);
  _objc_storeStrong(param_1 + _DAT_11271da58,0);
  _objc_storeStrong(param_1 + _DAT_11271da50,0);
  _objc_storeStrong(param_1 + _DAT_11271da4c,0);
  _objc_storeStrong(param_1 + _DAT_11271da60,0);
  _objc_storeStrong(param_1 + _DAT_11271da68,0);
  _objc_storeStrong(param_1 + _DAT_11271da64,0);
  _objc_storeStrong(param_1 + _DAT_11271da74,0);
  _objc_storeStrong(param_1 + _DAT_11271da70,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271da6c);
  return;
}



/* Entry: 105160564; end: 10516098b; -[SCSettingsLegacyPluginsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105160564(long param_1)

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
  undefined8 uVar26;
  
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar26 = *(undefined8 *)(param_1 + _DAT_11271da78);
  *(undefined **)(param_1 + _DAT_11271da78) = puVar1;
  _objc_release(uVar26);
  puVar1 = PTR_PTR_1126b54f8;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11271da7c;
  _objc_loadWeakRetained();
  lVar3 = param_1 + _DAT_11271da80;
  _objc_loadWeakRetained();
  lVar4 = param_1 + _DAT_11271da88;
  _objc_loadWeakRetained();
  lVar5 = param_1 + _DAT_11271da90;
  _objc_loadWeakRetained();
  lVar6 = param_1 + _DAT_11271da94;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010beeee00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11271da98;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bf611e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11271daa8;
  _objc_loadWeakRetained();
  lVar11 = param_1 + _DAT_11271dab0;
  _objc_loadWeakRetained();
  lVar12 = param_1 + _DAT_11271dab8;
  _objc_loadWeakRetained();
  lVar13 = param_1 + _DAT_11271dabc;
  _objc_loadWeakRetained();
  lVar14 = param_1 + _DAT_11271dac4;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_11271dac8;
  _objc_loadWeakRetained();
  lVar17 = param_1 + _DAT_11271dacc;
  _objc_loadWeakRetained();
  lVar18 = param_1 + _DAT_11271dad0;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_11271dad4;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + _DAT_11271dad8;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_11271dadc;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010c0f14e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c500();
  uVar26 = *(undefined8 *)(param_1 + _DAT_11271dae4);
  *(undefined **)(param_1 + _DAT_11271dae4) = puVar1;
  _objc_release(uVar26);
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
  func_0x00010beac200(param_1);
  func_0x00010beaaec0(param_1);
  func_0x00010beaaee0(param_1);
  func_0x00010beaa940(param_1);
  func_0x00010beafd20(param_1);
  func_0x00010bead5c0(param_1);
  func_0x00010beaa880(param_1);
  func_0x00010beeade0(param_1);
  func_0x00010beeadc0(param_1);
  func_0x00010be39320(param_1);
  func_0x00010be392c0(param_1);
  func_0x00010be39300(param_1);
  func_0x00010be392e0(param_1);
  func_0x00010be0ef20(param_1);
  func_0x00010be0ef60(param_1);
  func_0x00010be0ef40(param_1);
  func_0x00010bdc4420(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc4630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__actionMyData_11254eb28);
  return;
}



/* Entry: 10516098c; end: 105160bbb; -[SCSettingsLegacyPluginsEntryPoint _setupDisplayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10516098c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar8 = (long)_DAT_11271da7c;
  lVar1 = param_1 + lVar8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf85f80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010be049c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126aeae0;
  func_0x00010beed6c0(PTR_PTR_1126aeae0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be89d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  param_1 = param_1 + lVar8;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010bf85f80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar8;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(lVar2);
  lVar7 = lVar6;
  func_0x00010c25ff60(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar2);
  _objc_release(puVar5);
  _objc_release(lVar1);
  _objc_release(lVar4);
  return;
}



/* Entry: 105160bbc; end: 105160c4f;  */

void FUN_105160bbc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = param_2;
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = lVar1;
  func_0x00010be049c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    func_0x00010c28bf40(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105160c50; end: 105160d17; -[SCSettingsLegacyPluginsEntryPoint _displayNameViewModel:] */

void FUN_105160c50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  puVar1 = PTR_PTR_1126aeaf0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  ppuVar3 = &PTR____CFConstantStringClassReference_110dc7918;
  ppuVar2 = ppuVar3;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7918,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7918,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053ba0(puVar1);
  _objc_release(param_3);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105160d18; end: 105160f43; -[SCSettingsLegacyPluginsEntryPoint _setupBirthday] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105160d18(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar7 = (long)_DAT_11271da7c;
  lVar1 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf1a840();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126aeae0;
  func_0x00010beed6c0(PTR_PTR_1126aeae0);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bdd44a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be89d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_initWeak(auStack_68,param_1);
  param_1 = param_1 + lVar7;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf1a840();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(lVar2);
  lVar6 = lVar7;
  func_0x00010c25ff60(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar6);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar2);
  _objc_release(puVar5);
  _objc_release(lVar4);
  return;
}



/* Entry: 105160f44; end: 105160fd7;  */

void FUN_105160f44(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = param_2;
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = lVar1;
  func_0x00010bdd44a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    func_0x00010c28bf40(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105160fd8; end: 1051610bb; -[SCSettingsLegacyPluginsEntryPoint _birthdayViewModel:] */

void FUN_105160fd8(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  if (param_3 == (undefined **)0x0) {
    param_3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    func_0x00010c25d3e0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar1 = PTR_PTR_1126aeaf0;
  _objc_alloc(PTR_PTR_1126aeaf0);
  ppuVar2 = &PTR____CFConstantStringClassReference_110dc7938;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7938,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110dc7958;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7958,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053ba0(puVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1051610bc; end: 1051611af; -[SCSettingsLegacyPluginsEntryPoint _setupBitmoji] */

void FUN_1051610bc(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126aeaf0;
  _objc_alloc(PTR_PTR_1126aeaf0);
  ppuVar3 = &PTR____CFConstantStringClassReference_110dc7978;
  ppuVar2 = ppuVar3;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7978,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7978,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053ba0(puVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  puVar4 = PTR_PTR_1126aeae0;
  func_0x00010beed6c0(PTR_PTR_1126aeae0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be89d20(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1051611b0; end: 10516127b; -[SCSettingsLegacyPluginsEntryPoint _setupAppsFromSnap] */

void FUN_1051611b0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc7998;
  func_0x0001000f6108(&PTR____CFConstantStringClassReference_110dc7998,
                      &PTR____CFConstantStringClassReference_110dc79b8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aeaf0;
  _objc_alloc(PTR_PTR_1126aeaf0);
  func_0x00010c053ba0();
  puVar3 = PTR_PTR_1126aeae0;
  func_0x00010beed6c0(PTR_PTR_1126aeae0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be89d20(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 10516127c; end: 10516136f; -[SCSettingsLegacyPluginsEntryPoint _setupSnapConnect] */

void FUN_10516127c(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126aeaf0;
  _objc_alloc(PTR_PTR_1126aeaf0);
  ppuVar3 = &PTR____CFConstantStringClassReference_110dc79d8;
  ppuVar2 = ppuVar3;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc79d8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc79d8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053ba0(puVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  puVar4 = PTR_PTR_1126aeae0;
  func_0x00010beed6c0(PTR_PTR_1126aeae0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be89d20(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105161370; end: 105161443; -[SCSettingsLegacyPluginsEntryPoint _setupLanguage] */

void FUN_105161370(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  FUN_1051663c8();
  if ((int)uVar1 != 0) {
    FUN_1051662c8();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126aeaf0;
    _objc_alloc(PTR_PTR_1126aeaf0);
    func_0x00010c053ba0();
    puVar3 = PTR_PTR_1126aeae0;
    func_0x00010beed6c0(PTR_PTR_1126aeae0,param_2,0x19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be89d20(param_1,param_2,puVar3,puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105161444; end: 1051615d7; -[SCSettingsLegacyPluginsEntryPoint _setupAppAppearance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105161444(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11271da9c);
  func_0x00010c071800();
  if (iVar1 != 0) {
    lVar2 = param_1 + _DAT_11271dae8;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010bfa2420();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c27caa0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c252440();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar7 == 0) {
      ppuVar8 = &PTR____CFConstantStringClassReference_110dc7a18;
      func_0x0001000f6108(&PTR____CFConstantStringClassReference_110dc7a18,
                          &PTR____CFConstantStringClassReference_110dc7a38,0);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126aeaf0;
      _objc_alloc(PTR_PTR_1126aeaf0);
      func_0x00010c053ba0();
      puVar10 = PTR_PTR_1126aeae0;
      func_0x00010beed6c0(PTR_PTR_1126aeae0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be89d20(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(ppuVar8);
      return;
    }
  }
  return;
}



/* Entry: 1051615d8; end: 105161727; -[SCSettingsLegacyPluginsEntryPoint _whoCanViewMyStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051615d8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x00010bee43c0();
  _objc_initWeak(auStack_58,param_1);
  param_1 = param_1 + _DAT_11271daec;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c25aae0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c25ab00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  lVar4 = lVar3;
  func_0x00010c25ff60(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105161728; end: 105161753;  */

void FUN_105161728(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee43c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105161754; end: 10516195f; -[SCSettingsLegacyPluginsEntryPoint _updateWhoCanViewMyStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105161754(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  
  uVar1 = param_1 + _DAT_11271daec;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c25aae0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c25aac0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (uVar4 < 3) {
    puVar5 = (&PTR_PTR_11086c7a0)[uVar4];
    puVar11 = (&PTR_PTR_11086c7b8)[uVar4];
    func_0x00010bcbeaa8(puVar5,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bcbeaa8(puVar11,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar11 = (undefined *)0x0;
    puVar5 = (undefined *)0x0;
  }
  puVar6 = PTR_PTR_1126aeaf0;
  _objc_alloc(PTR_PTR_1126aeaf0);
  ppuVar7 = &PTR____CFConstantStringClassReference_110dc7b38;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7b38,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053ba0(puVar6);
  _objc_release(ppuVar7);
  lVar12 = (long)_DAT_11271daf0;
  if (*(long *)(param_1 + lVar12) == 0) {
    puVar8 = PTR_PTR_1126aeae0;
    func_0x00010c2a4c00(PTR_PTR_1126aeae0);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126b5500;
    _objc_alloc();
    func_0x00010c043620();
    uVar10 = *(undefined8 *)(param_1 + lVar12);
    *(undefined **)(param_1 + lVar12) = puVar9;
    _objc_release(uVar10);
    param_1 = param_1 + _DAT_11271daf4;
    _objc_loadWeakRetained(param_1);
    lVar12 = param_1;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar12);
    _objc_release(param_1);
    _objc_release(puVar8);
  }
  else {
    func_0x00010c28bf40();
  }
  _objc_release(puVar6);
  _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105161960; end: 105161d17; -[SCSettingsLegacyPluginsEntryPoint _whoCanSeeMyLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105161960(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_11271dafc;
    _objc_loadWeakRetained(lVar7);
  }
  lVar1 = lVar7;
  func_0x00010c0dfbc0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf70de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ff60();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar7);
  if ((*(byte *)(puStack_58 + 3) & 1) == 0) {
    lVar7 = param_1 + _DAT_11271daf8;
    _objc_loadWeakRetained();
    lVar1 = lVar7;
    func_0x00010c1068a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar7);
    lVar7 = lVar3;
    func_0x00010bfcc660();
    if ((int)lVar7 == 0) {
      lVar7 = lVar3;
      func_0x00010c22c5c0();
      ppuVar8 = (undefined **)0x0;
      if (lVar7 < 2) {
        if (lVar7 == 0) {
          ppuVar8 = &PTR____CFConstantStringClassReference_110dc7b78;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7b78,0);
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = &PTR____CFConstantStringClassReference_110dc7b78;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7b78,0);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          ppuVar9 = (undefined **)0x0;
          if (lVar7 == 1) {
            ppuVar8 = &PTR____CFConstantStringClassReference_110dc7b98;
            func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7b98,0);
            _objc_retainAutoreleasedReturnValue();
            ppuVar9 = &PTR____CFConstantStringClassReference_110dc7ad8;
            func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7ad8,0);
            _objc_retainAutoreleasedReturnValue();
          }
        }
      }
      else if (lVar7 == 2) {
        ppuVar8 = &PTR____CFConstantStringClassReference_110dc7bf8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7bf8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = &PTR____CFConstantStringClassReference_110dc7c18;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7c18,0);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        ppuVar9 = (undefined **)0x0;
        if (lVar7 == 3) {
          ppuVar8 = &PTR____CFConstantStringClassReference_110dc7bb8;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7bb8,0);
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = &PTR____CFConstantStringClassReference_110dc7bd8;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7bd8,0);
          _objc_retainAutoreleasedReturnValue();
        }
      }
    }
    else {
      ppuVar8 = &PTR____CFConstantStringClassReference_110dc7b78;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7b78,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = &PTR____CFConstantStringClassReference_110dc7b78;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7b78,0);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar4 = PTR_PTR_1126aeaf0;
    _objc_alloc(PTR_PTR_1126aeaf0);
    ppuVar5 = &PTR____CFConstantStringClassReference_110dc7c38;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7c38,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c053ba0(puVar4);
    _objc_release(ppuVar5);
    puVar6 = PTR_PTR_1126aeae0;
    func_0x00010c2a4c00(PTR_PTR_1126aeae0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be89d20(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(ppuVar9);
    _objc_release(ppuVar8);
    _objc_release(lVar3);
  }
  __Block_object_dispose(&uStack_60,8);
  return;
}



/* Entry: 105161d18; end: 105161d77;  */

void FUN_105161d18(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105161d78;
  puStack_20 = &UNK_110847658;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0be760(param_2,param_2,0,&puStack_38,0);
  return;
}



/* Entry: 105161d78; end: 105161d8b;  */

void FUN_105161d78(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105161d8c; end: 105161ecf; -[SCSettingsLegacyPluginsEntryPoint _feedbackABug] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105161d8c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  
  uVar1 = param_1 + _DAT_11271dad8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126aeaf0;
  _objc_alloc(PTR_PTR_1126aeaf0);
  ppuVar5 = &PTR____CFConstantStringClassReference_110dc7c58;
  ppuVar4 = ppuVar5;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7c58,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7c58,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053ba0(puVar3);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  uVar1 = uVar2;
  func_0x00010bf1f440();
  if ((uVar1 & 1) == 0) {
    puVar6 = PTR_PTR_1126aeae0;
    func_0x00010bfa45c0(PTR_PTR_1126aeae0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be89d20(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105161ed0; end: 105162013; -[SCSettingsLegacyPluginsEntryPoint _feedbackSuggestion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105161ed0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  
  uVar1 = param_1 + _DAT_11271dad8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126aeaf0;
  _objc_alloc(PTR_PTR_1126aeaf0);
  ppuVar5 = &PTR____CFConstantStringClassReference_110dc7c78;
  ppuVar4 = ppuVar5;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7c78,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7c78,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053ba0(puVar3);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  uVar1 = uVar2;
  func_0x00010bf1f440();
  if ((uVar1 & 1) == 0) {
    puVar6 = PTR_PTR_1126aeae0;
    func_0x00010bfa45c0(PTR_PTR_1126aeae0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be89d20(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105162014; end: 105162157; -[SCSettingsLegacyPluginsEntryPoint _feedbackShakeToReport] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105162014(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  
  uVar1 = param_1 + _DAT_11271dad8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126aeaf0;
  _objc_alloc(PTR_PTR_1126aeaf0);
  ppuVar5 = &PTR____CFConstantStringClassReference_110dc7c98;
  ppuVar4 = ppuVar5;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7c98,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7c98,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053ba0(puVar3);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  uVar1 = uVar2;
  func_0x00010bf1f440();
  if ((uVar1 & 1) == 0) {
    puVar6 = PTR_PTR_1126aeae0;
    func_0x00010bfa45c0(PTR_PTR_1126aeae0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be89d20(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105162158; end: 10516224b; -[SCSettingsLegacyPluginsEntryPoint _informationSafetyCenter] */

void FUN_105162158(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126aeaf0;
  _objc_alloc(PTR_PTR_1126aeaf0);
  ppuVar3 = &PTR____CFConstantStringClassReference_110dc7cb8;
  ppuVar2 = ppuVar3;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7cb8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7cb8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053ba0(puVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  puVar4 = PTR_PTR_1126aeae0;
  func_0x00010bfee160(PTR_PTR_1126aeae0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be89d20(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10516224c; end: 105162343; -[SCSettingsLegacyPluginsEntryPoint _informationTOS] */

void FUN_10516224c(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126aeaf0;
  _objc_alloc(PTR_PTR_1126aeaf0);
  ppuVar2 = &PTR____CFConstantStringClassReference_110dc7cd8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7cd8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110dc7cf8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7cf8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053ba0(puVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  puVar4 = PTR_PTR_1126aeae0;
  func_0x00010bfee160(PTR_PTR_1126aeae0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be89d20(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105162344; end: 105162433; -[SCSettingsLegacyPluginsEntryPoint _informationOtherLegal] */

void FUN_105162344(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126aeaf0;
  _objc_alloc(PTR_PTR_1126aeaf0);
  ppuVar3 = &PTR____CFConstantStringClassReference_110dc7d18;
  ppuVar2 = ppuVar3;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7d18,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7d18,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053ba0(puVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  puVar4 = PTR_PTR_1126aeae0;
  func_0x00010bfee160(PTR_PTR_1126aeae0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be89d20(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105162434; end: 105162523; -[SCSettingsLegacyPluginsEntryPoint _informationPrivacyPolicy] */

void FUN_105162434(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126aeaf0;
  _objc_alloc(PTR_PTR_1126aeaf0);
  ppuVar3 = &PTR____CFConstantStringClassReference_110dc7d58;
  ppuVar2 = ppuVar3;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7d58,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7d58,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053ba0(puVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  puVar4 = PTR_PTR_1126aeae0;
  func_0x00010bfee160(PTR_PTR_1126aeae0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be89d20(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105162524; end: 105162637; -[SCSettingsLegacyPluginsEntryPoint _actionJoinSnapchatBeta] */

void FUN_105162524(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  
  uVar1 = param_1;
  func_0x000100150168();
  if ((uVar1 & 1) != 0) {
    return;
  }
  puVar2 = PTR_PTR_1126aeaf0;
  _objc_alloc(PTR_PTR_1126aeaf0);
  ppuVar4 = &PTR____CFConstantStringClassReference_110dc7d78;
  ppuVar3 = ppuVar4;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7d78,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7d78,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053ba0(puVar2);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  puVar5 = PTR_PTR_1126aeae0;
  func_0x00010beef5c0(PTR_PTR_1126aeae0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be89d20(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105162638; end: 10516272b; -[SCSettingsLegacyPluginsEntryPoint _actionMyData] */

void FUN_105162638(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126aeaf0;
  _objc_alloc(PTR_PTR_1126aeaf0);
  ppuVar3 = &PTR____CFConstantStringClassReference_110dc7d98;
  ppuVar2 = ppuVar3;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7d98,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7d98,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053ba0(puVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  puVar4 = PTR_PTR_1126aeae0;
  func_0x00010c2a4c00(PTR_PTR_1126aeae0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be89d20(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10516272c; end: 1051627eb; -[SCSettingsLegacyPluginsEntryPoint _registerRow:rowViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10516272c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b5500;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c043620();
  _objc_release(param_4);
  _objc_release(param_3);
  param_1 = param_1 + _DAT_11271daf4;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1051627ec; end: 1051629d3; -[SCSettingsLegacyPluginsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051627ec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271dae0,0);
  _objc_storeStrong(param_1 + _DAT_11271dac0,0);
  _objc_destroyWeak(param_1 + _DAT_11271dab8);
  _objc_storeStrong(param_1 + _DAT_11271dab4,0);
  _objc_storeStrong(param_1 + _DAT_11271daac,0);
  _objc_destroyWeak(param_1 + _DAT_11271dab0);
  _objc_storeStrong(param_1 + _DAT_11271daa4,0);
  _objc_destroyWeak(param_1 + _DAT_11271daa8);
  _objc_storeStrong(param_1 + _DAT_11271da8c,0);
  _objc_destroyWeak(param_1 + _DAT_11271da90);
  _objc_storeStrong(param_1 + _DAT_11271daa0,0);
  _objc_storeStrong(param_1 + _DAT_11271da9c,0);
  _objc_storeStrong(param_1 + _DAT_11271da84,0);
  _objc_destroyWeak(param_1 + _DAT_11271dafc);
  _objc_destroyWeak(param_1 + _DAT_11271dae8);
  _objc_destroyWeak(param_1 + _DAT_11271dadc);
  _objc_destroyWeak(param_1 + _DAT_11271dad8);
  _objc_destroyWeak(param_1 + _DAT_11271dad0);
  _objc_destroyWeak(param_1 + _DAT_11271dacc);
  _objc_destroyWeak(param_1 + _DAT_11271dac8);
  _objc_destroyWeak(param_1 + _DAT_11271dac4);
  _objc_destroyWeak(param_1 + _DAT_11271dabc);
  _objc_destroyWeak(param_1 + _DAT_11271da98);
  _objc_destroyWeak(param_1 + _DAT_11271da94);
  _objc_destroyWeak(param_1 + _DAT_11271daec);
  _objc_destroyWeak(param_1 + _DAT_11271daf8);
  _objc_destroyWeak(param_1 + _DAT_11271dad4);
  _objc_destroyWeak(param_1 + _DAT_11271da80);
  _objc_destroyWeak(param_1 + _DAT_11271da88);
  _objc_destroyWeak(param_1 + _DAT_11271da7c);
  _objc_destroyWeak(param_1 + _DAT_11271daf4);
  _objc_storeStrong(param_1 + _DAT_11271da78,0);
  _objc_storeStrong(param_1 + _DAT_11271daf0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271dae4,0);
  return;
}



/* Entry: 1051629d4; end: 1051629db; -[SCSettingsLegacyRowProvider initWithSectionRow:rowViewModel:settingsPresenter:] */

void FUN_1051629d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c043650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithSectionRow_rowViewModel__1125ee790);
  return;
}



/* Entry: 1051629dc; end: 105162afb; -[SCSettingsLegacyRowProvider initWithSectionRow:rowViewModel:settingsPresenter:isHidden:] */

undefined1 *
FUN_1051629dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e67f0;
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
    *(undefined1 *)((long)puVar1 + 0x20) = param_6;
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar4);
    func_0x00010be08580(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105162afc; end: 105162bfb; -[SCSettingsLegacyRowProvider handleWithContext:] */

void FUN_105162afc(long param_1,undefined8 param_2)

{
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00010c1eeb00(*(undefined8 *)(param_1 + 0x18));
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105162bfc;
  puStack_30 = &UNK_110855e40;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x105162cbc;
  puStack_58 = &UNK_110855e40;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x105162d00;
  puStack_80 = &UNK_110855e40;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x105162d48;
  puStack_a8 = &UNK_110855e40;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x105162da0;
  puStack_d0 = &UNK_110855e40;
  lStack_c8 = param_1;
  lStack_a0 = param_1;
  lStack_78 = param_1;
  lStack_50 = param_1;
  lStack_28 = param_1;
  func_0x00010c0bc5e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_48,
                      &PTR___NSConcreteGlobalBlock_11086c7d0,&PTR___NSConcreteGlobalBlock_11086c7f0,
                      &puStack_70,&PTR___NSConcreteGlobalBlock_11086c810,&puStack_98,
                      &PTR___NSConcreteGlobalBlock_11086c830,&puStack_c0,&puStack_e8);
  func_0x00010c1eeb00(*(undefined8 *)(param_1 + 0x18),param_2,0);
  return;
}



/* Entry: 105162bfc; end: 105162db3;  */

void FUN_105162bfc(long param_1,long param_2)

{
  if (param_2 < 0x17) {
    if (param_2 < 7) {
      if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c10beb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),
                   PTR_s_presentDisplayNameSettings_1126209c8);
        return;
      }
      if (param_2 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010c10b450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),
                   PTR_s_presentBirthdaySettings_112620730);
        return;
      }
    }
    else {
      if (param_2 == 7) {
                    /* WARNING: Could not recover jumptable at 0x00010c10b470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),
                   PTR_s_presentBitmojiSettings_112620738);
        return;
      }
      if (param_2 == 0x11) {
                    /* WARNING: Could not recover jumptable at 0x00010c10b550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),
                   PTR_s_presentCameraSettings_112620770);
        return;
      }
    }
  }
  else if (param_2 < 0x19) {
    if (param_2 == 0x17) {
                    /* WARNING: Could not recover jumptable at 0x00010c10b270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),
                 PTR_s_presentAppsFromSnap_1126206b8);
      return;
    }
    if (param_2 == 0x18) {
                    /* WARNING: Could not recover jumptable at 0x00010c10e4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),
                 PTR_s_presentSnapConnectSettings_112621350);
      return;
    }
  }
  else {
    if (param_2 == 0x19) {
                    /* WARNING: Could not recover jumptable at 0x00010c10c910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),
                 PTR_s_presentLanguageSettings_112620c60);
      return;
    }
    if (param_2 == 0x1a) {
                    /* WARNING: Could not recover jumptable at 0x00010c10b210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),
                 PTR_s_presentAppAppearanceSettings_1126206a0);
      return;
    }
  }
  return;
}



/* Entry: 105162db4; end: 105162ddb; -[SCSettingsLegacyRowProvider rowViewModel] */

void FUN_105162db4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105162ddc; end: 105162e03; -[SCSettingsLegacyRowProvider sectionRow] */

void FUN_105162ddc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105162e04; end: 105162ee3; -[SCSettingsLegacyRowProvider updateViewModel:] */

void FUN_105162e04(long param_1,undefined8 param_2,undefined *param_3)

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
      if (((ulong)puVar1 & 1) != 0) goto LAB_105162ed0;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = param_3;
    _objc_release(uVar2);
    if ((*(byte *)(param_1 + 0x20) & 1) != 0) goto LAB_105162ed0;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puVar3 = PTR_PTR_1126ae750;
    func_0x00010c0ec800(PTR_PTR_1126ae750,param_2,*(undefined8 *)(param_1 + 0x10));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2,param_2,puVar3);
  }
  _objc_release(puVar3);
LAB_105162ed0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105162ee4; end: 105162efb; -[SCSettingsLegacyRowProvider setIsHidden:] */

void FUN_105162ee4(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0x20) == param_3) {
    return;
  }
  *(char *)(param_1 + 0x20) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010be08590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__emitUpdate_11255fb00);
  return;
}



/* Entry: 105162efc; end: 105162f57; -[SCSettingsLegacyRowProvider _emitUpdate] */

void FUN_105162efc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
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



/* Entry: 105162f58; end: 105162fab; -[SCSettingsLegacyRowProvider .cxx_destruct] */

void FUN_105162f58(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105162fac; end: 1051634e3; -[SCSettingsLegacySubscreensPresenter initWithUserInfoService:snapchatterServices:appsFromSnapScopeExposer:appsFromSnapScopeServices:storyPrivacySettingsScopeExposer:storyPrivacySettingsScopeServices:changeLanguageInSettingsActionRecorder:plusCustomAppThemeProvider:appAppearanceSettingsScopeExposer:canvasConnectedAppsScopeExposer:inSettingReportScopeExposer:inSettingReportScopeServices:bitmojiSettingsScopeExposer:bitmojiSettingsScopeServices:clearConversationsScopeExposer:clearConversationsScopeBuilderServices:auraServices:auraSettingScopeExposer:featureSettingsService:searchHistoryServices:reauthenticationServices:userPreferences:snapTokenProvider:circumstanceEngine:pageLauncher:webBrowsingScopeExposer:] */

undefined8 *
FUN_105162fac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28)

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
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  puStack_70 = PTR_PTR_1126e67f8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[6];
    puVar1[6] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[7];
    puVar1[7] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[10];
    puVar1[10] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_17;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xd,param_18);
    _objc_retain(param_15);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[4];
    puVar1[4] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[5];
    puVar1[5] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_26;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x1b,param_27);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_28;
    _objc_release(uVar2);
  }
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
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1051634e4; end: 105163513; -[SCSettingsLegacySubscreensPresenter setRowHandleContext:] */

void FUN_1051634e4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105163514; end: 1051635bf; -[SCSettingsLegacySubscreensPresenter presentDisplayNameSettings] */

void FUN_105163514(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b5508;
  _objc_alloc(PTR_PTR_1126b5508);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf85f80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf85f60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d5c0(puVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0d66a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1051635c0; end: 1051637b7; -[SCSettingsLegacySubscreensPresenter presentBirthdaySettings] */

void FUN_1051635c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110dc7e18,0,0);
  if ((int)uVar1 == 0) {
    puVar4 = PTR_PTR_1126b4378;
    _objc_alloc(PTR_PTR_1126b4378);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf1a840(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf1a6e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010c127bc0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    uVar10 = *(undefined8 *)(param_1 + 0x80);
    uVar7 = *(undefined8 *)(param_1 + 0xb8);
    func_0x00010c121fe0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff7900(puVar4,param_2,uVar1,uVar5,uVar6,uVar9,uVar10,uVar7,
                        *(undefined8 *)(param_1 + 0x98),0,*(undefined8 *)(param_1 + 0xd0));
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar1);
    puVar8 = *(undefined **)(param_1 + 0x10);
    func_0x00010c0d66a0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11c520();
  }
  else {
    puVar4 = PTR_PTR_1126aead0;
    _objc_alloc(PTR_PTR_1126aead0);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0d66a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02e500(puVar4,param_2,uVar1,&PTR___NSConcreteGlobalBlock_11086c850);
    _objc_release(uVar1);
    puVar8 = PTR_PTR_1126b0ea8;
    _objc_opt_new(PTR_PTR_1126b0ea8);
    puVar2 = PTR_PTR_1126b5510;
    _objc_opt_new(PTR_PTR_1126b5510);
    func_0x00010c170540(puVar8,param_2,puVar2);
    _objc_release(puVar2);
    param_1 = param_1 + 0xd8;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08c020();
    _objc_release(lVar3);
    _objc_release(param_1);
  }
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1051637b8; end: 1051637bf;  */

undefined8 FUN_1051637b8(void)

{
  return 1;
}



/* Entry: 1051637c0; end: 1051639df; -[SCSettingsLegacySubscreensPresenter presentBitmojiSettings] */

void FUN_1051637c0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = *(long *)(param_1 + 0xa8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = *(long *)(param_1 + 0x10);
      func_0x00010c292820();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar3 != 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c292820(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar4;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067ec0();
        _objc_release(uVar6);
        _objc_release(uVar4);
      }
    }
    _objc_initWeak(auStack_58,param_1);
    puVar5 = PTR_PTR_1126aeaf8;
    _objc_alloc(PTR_PTR_1126aeaf8);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1051639e0;
    puStack_68 = &UNK_110849680;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_copyWeak(auStack_88,auStack_58);
    func_0x00010c0311a0(puVar5);
    uVar6 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010bf23040(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0xa8));
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 1051639e0; end: 105163adb;  */

void FUN_1051639e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0d66a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11c520();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105163adc; end: 105163b3b; -[SCSettingsLegacySubscreensPresenter presentCameraSettings] */

void FUN_105163adc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b5518;
  _objc_alloc(PTR_PTR_1126b5518);
  func_0x00010c011c80();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0d66a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105163b3c; end: 105163bd7; -[SCSettingsLegacySubscreensPresenter presentAppsFromSnap] */

void FUN_105163b3c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c27ece0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf23ce0(uVar3,param_2,uVar2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x30),param_2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105163bd8; end: 105163d2b; -[SCSettingsLegacySubscreensPresenter presentSnapConnectSettings] */

void FUN_105163bd8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
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
  pcStack_70 = FUN_105163d2c;
  puStack_68 = &UNK_110849680;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010c0311a0(puVar1);
  puVar2 = PTR_PTR_1126b5520;
  _objc_alloc(PTR_PTR_1126b5520);
  func_0x00010c0567c0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x48));
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105163d2c; end: 105163e27;  */

void FUN_105163d2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0d66a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11c520();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105163e28; end: 105163e87; -[SCSettingsLegacySubscreensPresenter presentLanguageSettings] */

void FUN_105163e28(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b5528;
  _objc_alloc(PTR_PTR_1126b5528);
  func_0x00010bffd680();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0d66a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105163e88; end: 105163f13; -[SCSettingsLegacySubscreensPresenter presentAppAppearanceSettings] */

void FUN_105163e88(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined **)(param_1 + 0x40);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126b5530;
    _objc_alloc(PTR_PTR_1126b5530);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0d66a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02e520(puVar1,param_2,uVar2,param_1);
    _objc_release(uVar2);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x40),param_2,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105163f14; end: 105163faf; -[SCSettingsLegacySubscreensPresenter presentViewMyStories] */

void FUN_105163f14(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0d66a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf23480(uVar3,param_2,uVar2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x50),param_2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105163fb0; end: 1051640bb; -[SCSettingsLegacySubscreensPresenter presentMapSettings] */

void FUN_105163fb0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0d66a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar1,param_2,uVar2,1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b0ea8;
  _objc_opt_new(PTR_PTR_1126b0ea8);
  func_0x00010c19a840();
  puVar4 = PTR_PTR_1126b5538;
  _objc_opt_new(PTR_PTR_1126b5538);
  func_0x00010c1bfc40(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010c09f540(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b9580();
  _objc_release(puVar4);
  param_1 = param_1 + 0xd8;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08c020();
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1051640bc; end: 105164183; -[SCSettingsLegacySubscreensPresenter presentPrivacyPolicy] */

void FUN_1051640bc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126afb78;
  _objc_alloc(PTR_PTR_1126afb78);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057840(puVar1);
  _objc_release(puVar2);
  ppuVar3 = &PTR____CFConstantStringClassReference_110dc7d58;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7d58,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(puVar1);
  _objc_release(ppuVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0d66a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105164184; end: 10516424b; -[SCSettingsLegacySubscreensPresenter presentTermsOfUse] */

void FUN_105164184(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126afb78;
  _objc_alloc(PTR_PTR_1126afb78);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057840(puVar1);
  _objc_release(puVar2);
  ppuVar3 = &PTR____CFConstantStringClassReference_110dc7cd8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7cd8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(puVar1);
  _objc_release(ppuVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0d66a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10516424c; end: 1051642ab; -[SCSettingsLegacySubscreensPresenter presentOtherLegal] */

void FUN_10516424c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b5540;
  _objc_alloc(PTR_PTR_1126b5540);
  func_0x00010bffe1e0();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0d66a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1051642ac; end: 105164417; -[SCSettingsLegacySubscreensPresenter presentSafetyCenter] */

void FUN_1051642ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126ae630;
  func_0x00010bfe6000(PTR_PTR_1126ae630);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2b9b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new(PTR_PTR_1126ae560);
  func_0x00010bfee200();
  puVar3 = puVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar3,param_2,&PTR___NSConcreteGlobalBlock_11086c870,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126aead0;
  _objc_alloc(PTR_PTR_1126aead0);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0d66a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e4c0(puVar3,param_2,uVar5);
  _objc_release(uVar5);
  puVar4 = PTR_PTR_1126ae638;
  _objc_opt_new(PTR_PTR_1126ae638);
  puVar6 = puVar4;
  func_0x00010bf22ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0xe0),param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105164418; end: 105164483;  */

void FUN_105164418(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if ((param_2 != 0) && (param_3 == 0)) {
    _objc_retain(param_2);
    func_0x00010bdc3460(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09c520(param_2);
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105164484; end: 1051644cb; -[SCSettingsLegacySubscreensPresenter webBrowserDidDismiss:] */

void FUN_105164484(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xe0);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0xe0));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1051644cc; end: 1051644cf; -[SCSettingsLegacySubscreensPresenter presentReportScreenSelectionPage:] */

void FUN_1051644cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7be30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentInSettingReportPageWithT_11257c928);
  return;
}



/* Entry: 1051644d0; end: 1051644d7; -[SCSettingsLegacySubscreensPresenter presentShakeToReport] */

void FUN_1051644d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7be30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentInSettingReportPageWithT_11257c928,6)
  ;
  return;
}



/* Entry: 1051644d8; end: 10516462f; -[SCSettingsLegacySubscreensPresenter _presentInSettingReportPageWithType:] */

void FUN_1051644d8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c0311a0(puVar1);
  puVar2 = PTR_PTR_1126b54f0;
  _objc_alloc(PTR_PTR_1126b54f0);
  func_0x00010c0458e0();
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bf24040(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x70));
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105164630; end: 1051646a3;  */

void FUN_105164630(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0d66a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11c520();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1051646a4; end: 1051646a7;  */

void FUN_1051646a4(void)

{
  return;
}



/* Entry: 1051646a8; end: 10516476f; -[SCSettingsLegacySubscreensPresenter presentClearConversations] */

void FUN_1051646a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_1 + 0x68;
      _objc_loadWeakRetained(lVar1);
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c0d66a0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010bf23480(lVar1,param_2,uVar2,param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(lVar1);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x60),param_2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar3);
      return;
    }
  }
  return;
}



/* Entry: 105164770; end: 105164957; -[SCSettingsLegacySubscreensPresenter promptToClearSearchHistory] */

void FUN_105164770(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  
  puVar2 = PTR_PTR_1126af180;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc7e78;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7e78,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126af180;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc7e98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7e98,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110dc7eb8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7eb8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar4);
  _objc_release(puVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bde0e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar2 + 0x20),PTR_s__clearSearchHistory_112555d40);
  return;
}



/* Entry: 105164958; end: 10516496f;  */

void FUN_105164958(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde0e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__clearSearchHistory_112555d40);
  return;
}



/* Entry: 105164970; end: 105164a3f; -[SCSettingsLegacySubscreensPresenter _clearSearchHistory] */

void FUN_105164970(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfe3940(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6cdc0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105164a40; end: 105164c27; -[SCSettingsLegacySubscreensPresenter clearStickerSearch] */

void FUN_105164a40(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar2 = PTR_PTR_1126af180;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc7f18;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7f18,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126af180;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc7f38;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7f38,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110dc7f58;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7f58,0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar4);
  _objc_release(puVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = *(undefined8 *)(*(long *)(puVar2 + 0x20) + 0xa0);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3be60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 105164c28; end: 105164c5f;  */

void FUN_105164c28(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3be60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105164c60; end: 105164c6f;  */

void FUN_105164c60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf464b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af4b0,PTR_s_configWithStyle__1125af2d0,1);
  return;
}



/* Entry: 105164c70; end: 105164f9f; -[SCSettingsLegacySubscreensPresenter presentMyData] */

void FUN_105164c70(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar12);
  iVar1 = (int)*(undefined8 *)(param_1 + 0xd0);
  func_0x00010bf1f440();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSHTTPCookie_1126aedf0;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010af82634();
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  lVar9 = lVar12;
  if (iVar1 == 0) {
    puVar3 = PTR_PTR_1126b5548;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0579a0();
    uVar10 = *(undefined8 *)(param_1 + 200);
    *(undefined **)(param_1 + 200) = puVar3;
    _objc_release(uVar10);
    _objc_release(puVar5);
    _objc_release(puVar4);
    ppuVar8 = &PTR____CFConstantStringClassReference_110dc7d98;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7d98,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(*(undefined8 *)(param_1 + 200));
    _objc_release(ppuVar8);
    func_0x00010c0d66a0(lVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11c520();
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar12);
    func_0x00010be1af00(param_1);
    _objc_release(puVar3);
  }
  _objc_release(lVar9);
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  ppuVar8 = &PTR____CFConstantStringClassReference_110dc7d98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7d98,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(*(undefined8 *)(*(long *)(lVar12 + 0x20) + 200));
  _objc_release(ppuVar8);
  uVar10 = *(undefined8 *)(lVar12 + 0x28);
  func_0x00010c0d66a0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar10);
  return;
}



/* Entry: 105164fa0; end: 105165017;  */

void FUN_105164fa0(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc7d98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc7d98,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(*(undefined8 *)(*(long *)(param_1 + 0x20) + 200));
  _objc_release(ppuVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0d66a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105165018; end: 1051650af; -[SCSettingsLegacySubscreensPresenter presentJoinSnapchatBeta] */

void FUN_105165018(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126afb78;
  _objc_alloc(PTR_PTR_1126afb78);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110dc7f78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057840(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0d66a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1051650b0; end: 105165107; -[SCSettingsLegacySubscreensPresenter appAppearanceSettingsScopeWantsDismissal:] */

void FUN_1051650b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x40));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105165108; end: 10516514f; -[SCSettingsLegacySubscreensPresenter appAppearanceSettingsScopeDidDismiss:] */

void FUN_105165108(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x40));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105165150; end: 10516516f; -[SCSettingsLegacySubscreensPresenter appsFromSnapScopeWantsDismiss] */

void FUN_105165150(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105165170; end: 1051651b7; -[SCSettingsLegacySubscreensPresenter appsFromSnapScopeDidDismiss] */

void FUN_105165170(long param_1)

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



/* Entry: 1051651b8; end: 1051651bb; -[SCSettingsLegacySubscreensPresenter connectedAppsViewControllerDidAppear] */

void FUN_1051651b8(void)

{
  return;
}



/* Entry: 1051651bc; end: 105165203; -[SCSettingsLegacySubscreensPresenter connectedAppsViewControllerDidDisappear] */

void FUN_1051651bc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x48));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105165204; end: 10516525b; -[SCSettingsLegacySubscreensPresenter storyPrivacySettingsScopeWillDismiss:] */

void FUN_105165204(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x50));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10516525c; end: 1051652a3; -[SCSettingsLegacySubscreensPresenter storyPrivacySettingsScopeDidDismiss:] */

void FUN_10516525c(long param_1)

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



/* Entry: 1051652a4; end: 1051652fb; -[SCSettingsLegacySubscreensPresenter clearConversationsScopeWantsDismiss:] */

void FUN_1051652a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x60));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1051652fc; end: 105165343; -[SCSettingsLegacySubscreensPresenter clearConversationsScopeDidDismiss:] */

void FUN_1051652fc(long param_1)

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



/* Entry: 105165344; end: 105165363; -[SCSettingsLegacySubscreensPresenter shakeReportDidComplete] */

void FUN_105165344(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x70));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105165364; end: 10516539b; -[SCSettingsLegacySubscreensPresenter bitmojiSettingsScopeDidFinish:] */

void FUN_105165364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c27ece0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10516539c; end: 1051654e3; -[SCSettingsLegacySubscreensPresenter _generateDataControllerWithCookies:completion:] */

void FUN_10516539c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1051654e4;
  puStack_70 = &UNK_11086c960;
  lStack_68 = param_1;
  _objc_retain(param_3);
  uStack_60 = param_3;
  _objc_retain(param_4);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x105165628;
  puStack_a8 = &UNK_110864758;
  lStack_a0 = param_1;
  uStack_98 = param_3;
  uStack_90 = param_4;
  uStack_58 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR___dispatch_main_q_11034be20;
  func_0x00010bfa48e0(uVar2,param_2,6,PTR___dispatch_main_q_11034be20,
                      PTR___dispatch_main_q_11034be20,&puStack_88,&puStack_c0);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}


