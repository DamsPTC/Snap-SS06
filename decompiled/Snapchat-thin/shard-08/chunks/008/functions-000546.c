/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106661448; end: 10666158b; -[SCImpalaSnapInsightsOperaPlaylistPluginActionHandler .cxx_destruct] */

void FUN_106661448(long param_1)

{
  _objc_destroyWeak(param_1 + 0xd0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_destroyWeak(param_1 + 0xa0);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10666158c; end: 106661613; -[SCImpalaSnapInsightsProfilePresenterProvider initWithSnapchatterServices:sourcePageType:attributedPage:] */

undefined1 *
FUN_10666158c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f2378;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106661614; end: 1066616cf; -[SCImpalaSnapInsightsProfilePresenterProvider profilePresenterForPresentingViewController:] */

void FUN_106661614(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cc1d0;
  _objc_opt_class(PTR_PTR_1126cc1d0);
  uVar3 = uVar1;
  func_0x00010beecc40(uVar1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_110931e08);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010bfe63a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bfea100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1066616d0; end: 1066616d7;  */

void FUN_1066616d0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfea170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_impalaPublicProfilePresentationH_1125d8220);
  return;
}



/* Entry: 1066616d8; end: 1066616e3; -[SCImpalaSnapInsightsProfilePresenterProvider .cxx_destruct] */

void FUN_1066616d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1066616e4; end: 1066617a7; -[SCImpalaSnapInsightsReportPagePresenter initWithUserSession:snapchatterServices:safetyReportScopeExposer:] */

undefined1 *
FUN_1066616e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f2380;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066617a8; end: 106661a13; -[SCImpalaSnapInsightsReportPagePresenter presentReportPageForUserId:presentingViewController:] */

void FUN_1066617a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c244ac0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c244620(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x10666189c;
  puStack_58 = &UNK_11086fc78;
  uStack_50 = param_4;
  lStack_48 = param_1;
  _objc_retain(param_4);
  func_0x000108f050a4(param_3,uVar2,uVar1,PTR___dispatch_main_q_11034be20,&puStack_70);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uStack_50);
  _objc_release(param_4);
  return;
}



/* Entry: 106661a14; end: 106661a5b; -[SCImpalaSnapInsightsReportPagePresenter reportDidCompleteWithCancelled:] */

void FUN_106661a14(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106661a5c; end: 106661a93; -[SCImpalaSnapInsightsReportPagePresenter .cxx_destruct] */

void FUN_106661a5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106661a94; end: 106661b73; -[SCImpalaSnapInsightsSnapDeletionHandler initWithFriendStories:] */

undefined1 * FUN_106661a94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f2388;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106661b74; end: 106661d1f; -[SCImpalaSnapInsightsSnapDeletionHandler _didDeleteSnap:] */

undefined * FUN_106661b74(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c0dfc60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cbca0;
  _objc_opt_class(PTR_PTR_1126cbca0);
  puVar2 = puVar1;
  _objc_opt_isKindOfClass(puVar1,puVar3);
  puVar3 = puVar1;
  if (((ulong)puVar2 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  _objc_release(puVar1);
  if (puVar2 != (undefined *)0x0) {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    puVar1 = puVar3;
    func_0x00010be36bc0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar6);
    _objc_release(puVar1);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    uVar6 = *(undefined8 *)(param_1 + 8);
    param_1 = puVar3;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c12e680(uVar6);
    _objc_release(puVar1);
    _objc_release(param_1);
  }
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume();
  _objc_retain(puVar4);
  _objc_retain(param_3);
  _objc_sync_enter(param_3);
  puVar3 = *(undefined **)(param_3 + 0x10);
  func_0x00010bf4b900(puVar3);
  _objc_sync_exit(param_3);
  _objc_release(param_3);
  _objc_release(puVar4);
  return puVar3;
}



/* Entry: 106661d20; end: 106661d9f; -[SCImpalaSnapInsightsSnapDeletionHandler snapIsDeleted:] */

undefined8 FUN_106661d20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106661da0; end: 106661dcf; -[SCImpalaSnapInsightsSnapDeletionHandler .cxx_destruct] */

void FUN_106661da0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106661dd0; end: 106661eaf; -[SCImpalaSnapInsightsStoryCardSnapDeletionHandler initWithStorySnaps:] */

undefined1 * FUN_106661dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f2390;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106661eb0; end: 106661eb3; -[SCImpalaSnapInsightsStoryCardSnapDeletionHandler _didDeleteSnap:] */

void FUN_106661eb0(void)

{
  return;
}



/* Entry: 106661eb4; end: 106661ebb; -[SCImpalaSnapInsightsStoryCardSnapDeletionHandler snapIsDeleted:] */

void FUN_106661eb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_containsObject__1125b07e8);
  return;
}



/* Entry: 106661ebc; end: 106661eeb; -[SCImpalaSnapInsightsStoryCardSnapDeletionHandler .cxx_destruct] */

void FUN_106661ebc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106661eec; end: 1066621c3;  */

void FUN_106661eec(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
                  undefined4 param_13,undefined8 param_14)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_14);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if ((lVar1 != 0) || (lVar1 = param_3, func_0x00010bf529e0(), lVar1 != 0)) {
    func_0x000108605534();
    func_0x00010bf529e0();
    lVar1 = param_3;
    func_0x000107e327dc(param_3,param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_7;
    func_0x00010c269d40(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c246920();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_1);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_8);
    _objc_retain(param_9);
    _objc_retain(param_10);
    _objc_retain(param_11);
    uVar4 = param_14;
    _objc_retain(param_14);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_14);
    _objc_release(param_11);
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_1);
    _objc_release(lVar1);
  }
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 1066621c4; end: 1066626bb;  */

void FUN_1066621c4(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  if (param_3 != 0) {
    return;
  }
  _objc_retain(param_2);
  lVar6 = param_2;
  func_0x00010bf026a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x0001086063f4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  uVar17 = *(undefined8 *)(param_1 + 0x20);
  lVar8 = param_2;
  func_0x00010bf50b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar6 = *(long *)(param_1 + 0x28);
  puVar3 = *(undefined **)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  uVar15 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar17);
  _objc_retain(lVar8);
  _objc_retain(lVar6);
  _objc_retain(puVar3);
  _objc_retain(lVar7);
  _objc_retain(uVar1);
  _objc_retain(uVar4);
  _objc_retain(uVar2);
  _objc_retain(uVar5);
  _objc_retain(uVar15);
  lVar9 = lVar8;
  func_0x00010bf529e0();
  if (lVar9 != 0) {
    lVar9 = lVar7;
    func_0x000108605098(lVar7,uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar6;
    func_0x00010c08fa60();
    if (lVar16 == 0) {
      lVar16 = 0;
    }
    else {
      lVar16 = lVar9;
      func_0x000108604db4(lVar9);
      _objc_retainAutoreleasedReturnValue();
    }
    puStack_90 = &uStack_98;
    uStack_98 = 0;
    uStack_88 = 0x2020000000;
    uStack_80 = 0;
    puVar10 = puVar3;
    func_0x00010bf0e700(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar2);
    func_0x00010c0c1320(puVar10);
    _objc_release(puVar10);
    lVar11 = lVar8;
    func_0x00010bf529e0();
    if (lVar11 != 0) {
      if (*(char *)(puStack_90 + 3) == '\x01') {
        puVar10 = PTR_PTR_1126b1a58;
        _objc_opt_new(PTR_PTR_1126b1a58);
        puVar12 = puVar3;
        func_0x00010bf5b080(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar12;
        func_0x00010bf5b1a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a99c0(puVar10);
        _objc_release(puVar13);
        _objc_release(puVar12);
        uVar14 = uVar4;
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar3;
        func_0x00010c15f2e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(uVar15);
        func_0x00010c22b020(uVar14);
      }
      else {
        puVar10 = PTR_PTR_1126c2810;
        _objc_alloc(PTR_PTR_1126c2810);
        puVar12 = puVar3;
        func_0x00010c15f2e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar3;
        func_0x00010c0c5340(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c27dd80();
        func_0x00010c04e240(puVar10);
        _objc_release(puVar13);
        _objc_release(puVar12);
        uVar14 = uVar1;
        func_0x00010c269d40(uVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(PTR___dispatch_main_q_11034be20);
        _objc_retain(uVar15);
        func_0x00010c15d8c0(uVar14);
        puVar12 = PTR___dispatch_main_q_11034be20;
      }
      _objc_release(puVar12);
      _objc_release(uVar14);
      _objc_release(uVar15);
      _objc_release(puVar10);
    }
    _objc_release(uVar2);
    __Block_object_dispose(&uStack_98,8);
    _objc_release(lVar16);
    _objc_release(lVar9);
  }
  _objc_release(uVar15);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(lVar7);
  _objc_release(puVar3);
  _objc_release(lVar6);
  _objc_release(lVar8);
  _objc_release(uVar17);
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 1066626bc; end: 106662707;  */

void FUN_1066626bc(long param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if ((param_2 & 0xfffffffffffffffe) == 2) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110e581f8,1,0);
    *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)uVar1;
  }
  return;
}



/* Entry: 106662708; end: 10666277f;  */

void FUN_106662708(void)

{
  return;
}



/* Entry: 106662780; end: 106662807;  */

void FUN_106662780(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf66980(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf44a60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf55800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106662808; end: 1066631db; -[SCLegacyImpalaSnapInsightsHelper addSnapInsightsLayerToPagePropertiesWithNavigationDelegate:story:friendStories:pageProperties:] */

void FUN_106662808(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

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
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined *puVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined *puVar44;
  undefined8 uVar45;
  undefined8 uStack_138;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar25 = *(undefined8 *)(param_1 + 0x10);
  uVar23 = *(undefined8 *)(param_1 + 0x18);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  uVar42 = *(undefined8 *)(param_1 + 0x28);
  uVar26 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar27 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  uVar45 = *(undefined8 *)(param_1 + 0x58);
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  uVar10 = *(undefined8 *)(param_1 + 0x68);
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  uVar11 = *(undefined8 *)(param_1 + 0x78);
  uVar6 = *(undefined8 *)(param_1 + 0x80);
  uVar12 = *(undefined8 *)(param_1 + 0x88);
  uVar7 = *(undefined8 *)(param_1 + 0x90);
  uVar13 = *(undefined8 *)(param_1 + 0x98);
  uVar24 = *(undefined8 *)(param_1 + 0xa0);
  uVar14 = *(undefined8 *)(param_1 + 0xa8);
  _objc_retain(uVar1);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(uVar2);
  _objc_retain(uVar5);
  _objc_retain(uVar7);
  puVar15 = PTR_PTR_1126cc638;
  _objc_retain(uVar14);
  _objc_retain(uVar24);
  _objc_retain(uVar13);
  _objc_retain(uVar6);
  _objc_retain(uVar11);
  _objc_retain(uVar12);
  _objc_retain(uVar10);
  _objc_retain(uVar4);
  _objc_retain(uVar45);
  _objc_retain(uVar9);
  _objc_retain(uVar3);
  _objc_retain(uVar27);
  _objc_retain(uVar26);
  _objc_retain(uVar8);
  _objc_retain(uVar42);
  _objc_retain(uVar23);
  _objc_retain(uVar25);
  _objc_alloc();
  func_0x00010c015c20();
  puVar16 = puVar15;
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126b88d8);
  puVar17 = puVar16;
  func_0x00010beecc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126ba6e0);
  puVar18 = puVar16;
  func_0x00010beecc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  puVar16 = PTR_PTR_1126b0e10;
  _objc_alloc();
  uVar19 = uVar2;
  func_0x00010beee460(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar17;
  func_0x00010bfe63a0(puVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar20;
  func_0x000108f2293c();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar18;
  func_0x00010bfe63a0(puVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05ddc0();
  _objc_release(uVar24);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(uVar19);
  puVar20 = PTR_PTR_1126b1038;
  _objc_alloc();
  func_0x00010c049560();
  puVar21 = PTR_PTR_1126b0e18;
  _objc_alloc();
  func_0x00010c05e0c0();
  _objc_release(uVar23);
  _objc_release(uVar25);
  puVar22 = PTR_PTR_1126b0e20;
  _objc_alloc();
  func_0x00010c05e640();
  _objc_release(uVar27);
  _objc_release(uVar26);
  uVar23 = param_4;
  func_0x00010bf25280();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar23;
  func_0x00010bf06820();
  if ((int)uVar24 == 0) {
    uStack_138 = (undefined *)0x0;
  }
  else {
    uStack_138 = PTR_PTR_1126b33c0;
    _objc_opt_new();
  }
  _objc_release();
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bb668);
  uVar24 = uVar23;
  func_0x00010beecc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126ba648);
  uVar25 = uVar23;
  func_0x00010beecc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126cc640);
  uVar26 = uVar23;
  func_0x00010beecc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126cc648);
  uVar27 = uVar23;
  func_0x00010beecc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar23);
  puVar28 = PTR_PTR_1126cc358;
  _objc_alloc();
  uVar23 = param_4;
  func_0x00010bf25000();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar23;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = param_4;
  func_0x00010c25ece0();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = param_5;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar30;
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar31;
  func_0x000100504554();
  _objc_release(uVar31);
  _objc_release(uVar30);
  puVar33 = puVar18;
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  puVar34 = puVar33;
  func_0x000106af9874();
  _objc_retainAutoreleasedReturnValue();
  puVar35 = puVar34;
  func_0x000108f2293c();
  _objc_retainAutoreleasedReturnValue();
  puVar36 = puVar35;
  func_0x000108f229ec();
  _objc_retainAutoreleasedReturnValue();
  puVar37 = puVar36;
  func_0x000100c68168();
  _objc_retainAutoreleasedReturnValue();
  puVar38 = puVar37;
  func_0x000108f22d5c();
  _objc_retainAutoreleasedReturnValue();
  puVar39 = puVar38;
  func_0x000108f22b4c();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar24;
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar25;
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = uVar26;
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  uVar41 = uVar42;
  func_0x00010c23c760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar42);
  uVar42 = uVar27;
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  uVar43 = param_4;
  func_0x00010bf4cc60();
  _objc_retainAutoreleasedReturnValue();
  puVar44 = PTR_PTR_1126ae720;
  _objc_retain(uVar5);
  _objc_retain(uVar7);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d300();
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar6);
  _objc_release(uVar11);
  _objc_release(uVar12);
  _objc_release(uVar10);
  _objc_release(uVar4);
  _objc_release(uVar45);
  _objc_release(uVar9);
  _objc_release(uVar3);
  _objc_release(uVar8);
  _objc_release(puVar44);
  _objc_release(uVar43);
  _objc_release(uVar42);
  _objc_release(uVar41);
  _objc_release(uVar40);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(puVar39);
  _objc_release(puVar38);
  _objc_release(puVar37);
  _objc_release(puVar36);
  _objc_release(puVar35);
  _objc_release(puVar34);
  _objc_release(puVar33);
  _objc_release(uVar32);
  _objc_release(uVar29);
  _objc_release(uVar19);
  _objc_release(uVar23);
  func_0x00010c1d0640(param_6);
  uVar23 = param_5;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar42 = uVar23;
  func_0x00010bfda7c0();
  _objc_release(uVar23);
  if ((int)uVar42 != 0) {
    func_0x00010c1d0640(param_6);
    func_0x00010c1d0640(param_6);
  }
  func_0x000107d74fcc(param_6,puVar28,0);
  _objc_release(puVar28);
  _objc_release(uVar5);
  _objc_release(uVar7);
  _objc_release(uVar7);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uStack_138);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar16);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar15);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar1);
  return;
}



/* Entry: 1066631dc; end: 1066632ef; -[SCLegacyImpalaSnapInsightsHelper .cxx_destruct] */

void FUN_1066631dc(long param_1)

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



/* Entry: 1066632f0; end: 106663947;  */

void FUN_1066632f0(double param_1,undefined8 param_2,long param_3)

{
  long lVar1;
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
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  undefined *puVar20;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf25280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0ccea0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar20 = (undefined *)0x0;
  }
  else {
    puVar20 = PTR_PTR_1126b0ec8;
    _objc_alloc();
    lVar3 = param_3;
    func_0x00010bf25280();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c120680();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c067fc0();
    param_1 = (double)lVar5;
    lVar5 = param_3;
    func_0x00010bf25280();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c151b00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c067fc0();
    lVar19 = param_3;
    func_0x00010bf25280();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar19;
    func_0x00010c25ac80();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_3;
    func_0x00010bf25280();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bf1fa00();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_3;
    func_0x00010bf25280(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c22c540();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_3;
    func_0x00010bf25280(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c260680();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_3;
    func_0x00010bf25280(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x00010c120680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0624a0(param_1,(double)lVar7);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar19);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (puVar20 == (undefined *)0x0) goto LAB_106663624;
    lVar1 = param_3;
    func_0x00010bf25280(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0f2a60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d8c40(puVar20);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf25280(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0f2a00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d8c20(puVar20);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf25280(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf41960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17ecc0(puVar20);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf25280(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf41900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eca0(puVar20);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
LAB_106663624:
  puVar17 = PTR_PTR_1126b0ed0;
  _objc_alloc();
  lVar1 = param_3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf25280();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c26e3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010bf0d6a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c08fa60();
  if (lVar7 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_3;
    func_0x00010bf0d6a0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar8 = param_3;
  func_0x00010c2709c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  lVar9 = param_3;
  func_0x00010bf30620(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_3;
  func_0x00010bf25280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14b740();
  lVar11 = param_3;
  func_0x00010bf25280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6b200();
  func_0x00010c047aa0(param_1 * 1000.0,puVar17);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  if (lVar7 != 0) {
    _objc_release(lVar19);
  }
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf25280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf93c60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    puVar18 = PTR_PTR_1126b63f8;
    _objc_opt_new(PTR_PTR_1126b63f8);
    lVar1 = param_3;
    func_0x00010c0c54a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b6b40(puVar18);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c0c5480(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b64a0(puVar18);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf25280(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf93c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21d340(puVar18);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c175100(puVar18);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf3cfc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17cd20(puVar18);
    _objc_release(lVar1);
    func_0x00010c214160(puVar17);
    _objc_release(puVar18);
  }
  _objc_release(puVar20);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 106663948; end: 106663a73; -[SCImpalaLensActionHandler initWithViewController:lensModularCameraPresentation:roleType:urlPreviewProvider:simpleContentFetcher:externalLinkSendingService:] */

undefined1 *
FUN_106663948(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f23a0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x38),param_3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106663a74; end: 106663adb; -[SCImpalaLensActionHandler presentLensWithLens:] */

void FUN_106663a74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c55b8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c04aae0();
  func_0x00010c10cda0(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106663adc; end: 106663b93; -[SCImpalaLensActionHandler presentLensWithContextWithLens:analyticsContext:] */

void FUN_106663adc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  pcStack_58 = FUN_106663b94;
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



/* Entry: 106663b94; end: 106663d7f;  */

void FUN_106663b94(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *unaff_x22;
  undefined8 unaff_x23;
  undefined *unaff_x24;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined *)(*(long *)(param_1 + 0x20) + 0x38);
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  func_0x00010c06d1a0();
  puVar3 = puVar1;
  _objc_release();
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = (undefined *)(*(long *)(param_1 + 0x20) + 0x38);
    _objc_loadWeakRetained();
    puVar1 = puVar2;
    func_0x000108f04e30();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126ae6a8;
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c094540(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfe5be0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fdac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    unaff_x22 = PTR_PTR_1126ae6b0;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c025e20();
    _objc_release(puVar3);
    unaff_x23 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be4ba80();
    _objc_retainAutoreleasedReturnValue();
    param_1 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
    param_6 = 0;
    param_3 = puVar1;
    param_4 = unaff_x24;
    param_5 = unaff_x23;
    func_0x00010c10b600(param_1);
    _objc_release(unaff_x24);
    _objc_release(param_1);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(puVar2);
    puVar3 = puVar1;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_106663d80;
  puStack_90 = unaff_x24;
  uStack_88 = unaff_x23;
  puStack_80 = unaff_x22;
  puStack_78 = puVar2;
  lStack_70 = param_1;
  puStack_68 = puVar1;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_106663e8c;
  puStack_c0 = &UNK_110852488;
  puStack_b8 = puVar3;
  puStack_b0 = param_3;
  puStack_a8 = param_4;
  uStack_a0 = param_5;
  uStack_98 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_d8);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(puStack_a8);
  _objc_release(puStack_b0);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106663d80; end: 106663e8b; -[SCImpalaLensActionHandler presentLensesWithContextWithLenses:selectedLens:analyticsContext:onCarouselEnd:] */

void FUN_106663d80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106663e8c;
  puStack_70 = &UNK_110852488;
  uStack_68 = param_1;
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_50 = param_5;
  uStack_48 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_88);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106663e8c; end: 106664057;  */

void FUN_106663e8c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  uVar1 = *(long *)(param_1 + 0x20) + 0x38;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c06d1a0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x20) + 0x38;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x000108f04e30();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x2020000000;
    uStack_48 = 1;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c272160(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar9);
    uVar6 = uVar5;
    func_0x00010c0b8600(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be4ba80(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c094540(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10b660(uVar7);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar9);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(lVar4);
  }
  return;
}



/* Entry: 106664058; end: 106664167;  */

void FUN_106664058(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x00010c0b8600(param_2,param_2,&PTR___NSConcreteGlobalBlock_110932138);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) == '\x01') {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_106664170;
    puStack_40 = &UNK_110857a38;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    ppuVar1 = &puStack_58;
    uStack_38 = uVar3;
    _objc_retainBlock(ppuVar1);
    uVar3 = param_2;
    func_0x00010bfb2040(param_2);
    _objc_retainAutoreleasedReturnValue();
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
    _objc_release(ppuVar1);
    _objc_release(uStack_38);
  }
  else {
    uVar3 = 0;
  }
  puVar2 = PTR_PTR_1126ae6b0;
  _objc_alloc(PTR_PTR_1126ae6b0);
  func_0x00010c025e20();
  _objc_release(uVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106664168; end: 10666416f;  */

void FUN_106664168(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0a850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_asLensMetadata_1125a03b8);
  return;
}



/* Entry: 106664170; end: 1066641df;  */

undefined8 FUN_106664170(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c094540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 1066641e0; end: 106664267; -[SCImpalaLensActionHandler sendLensWithLens:] */

void FUN_1066641e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106664268;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 106664268; end: 106664273;  */

void FUN_106664268(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9f650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__sendLensWithLensItem__112585738,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106664274; end: 106664277; -[SCImpalaLensActionHandler openLensExplorer] */

void FUN_106664274(void)

{
  return;
}



/* Entry: 106664278; end: 10666427b; -[SCImpalaLensActionHandler openLensExplorerFeedWithFeedId:] */

void FUN_106664278(void)

{
  return;
}



/* Entry: 10666427c; end: 1066643af; -[SCImpalaLensActionHandler _lensReplyParamsWithAnalyticsContext:] */

void FUN_10666427c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126ae6d0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c03e5a0();
  puVar2 = PTR_PTR_1126ae6d8;
  _objc_alloc(PTR_PTR_1126ae6d8);
  func_0x00010c0460c0();
  puVar3 = PTR_PTR_1126b47d0;
  _objc_alloc(PTR_PTR_1126b47d0);
  uVar4 = param_3;
  func_0x00010c15ffa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c03ca00(puVar3,param_2,&PTR____CFConstantStringClassReference_110daafd8,
                      &PTR____CFConstantStringClassReference_110daafd8,uVar4,0);
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126b0100;
  _objc_alloc(PTR_PTR_1126b0100);
  func_0x00010bff7380();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1066643b0; end: 10666451f; -[SCImpalaLensActionHandler _sendLensWithLensItem:] */

void FUN_1066643b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126cc650;
  _objc_retain(param_3);
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar5 = param_3;
  func_0x00010bf68980(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c009d80(puVar1,param_2,puVar2,0,4,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),0,0);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126ae6a8;
  uVar5 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bfe5be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0fdac0(puVar2,param_2,uVar5,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 8);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x000108f04e30();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15d2a0(uVar5,param_2,lVar3,puVar2);
  _objc_release(lVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106664520; end: 106664527; -[SCImpalaLensActionHandler shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_106664520(void)

{
  return 0;
}



/* Entry: 106664528; end: 106664533; -[SCImpalaLensActionHandler pushToValdiMarshaller:] */

undefined8 FUN_106664528(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df460;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  _objc_release(param_1);
  return param_3;
}



/* Entry: 106664534; end: 10666454b; -[SCImpalaLensActionHandler viewController] */

void FUN_106664534(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10666454c; end: 1066645a7; -[SCImpalaLensActionHandler .cxx_destruct] */

void FUN_10666454c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066645a8; end: 10666474b; -[SCImpalaProfilePresenter initWithUserSession:snapchattersDataFetcher:snapchatterPublicInfoFetcher:viewController:sourcePageType:attributedPage:friendProfileScopeLauncher:friendActionSheetScopeExposer:unifiedPublicProfilesScopeLauncher:pageLauncher:] */

undefined8 *
FUN_1066645a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126f23a8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 0xe,param_3);
    _objc_storeWeak(puVar1 + 0xf,param_6);
    puVar1[1] = param_7;
    puVar1[2] = param_8;
    _objc_retain(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[10];
    puVar1[10] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10666474c; end: 106664753; -[SCImpalaProfilePresenter presentPublicProfileWithProfileId:] */

void FUN_10666474c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7f210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentUnifiedPublicProfileWith_11257d620,param_3,0);
  return;
}



/* Entry: 106664754; end: 10666475b; -[SCImpalaProfilePresenter presentPublisherProfileWithProfileId:showId:] */

void FUN_106664754(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7f210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentUnifiedPublicProfileWith_11257d620,param_3,1);
  return;
}



/* Entry: 10666475c; end: 106664853; -[SCImpalaProfilePresenter presentUserProfileWithUserId:] */

void FUN_10666475c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR___dispatch_main_q_11034be20;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106664854;
  puStack_58 = &UNK_110861a28;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x000108f050a4(param_3,uVar3,uVar2,puVar1,&puStack_70);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 106664854; end: 1066648a7;  */

void FUN_106664854(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be7f1c0();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1066648a8; end: 1066649a7; -[SCImpalaProfilePresenter presentUserActionSheetWithUserId:hideUserDetails:] */

void FUN_1066648a8(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR___dispatch_main_q_11034be20;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1066649a8;
  puStack_60 = &UNK_11092f178;
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_4;
  func_0x000108f050a4(param_3,uVar3,uVar2,puVar1,&puStack_78);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1066649a8; end: 106664a07;  */

void FUN_1066649a8(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be7f1a0();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106664a08; end: 106664bb3; -[SCImpalaProfilePresenter _presentUnifiedProfileForSnapchatter:] */

void FUN_106664a08(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x70;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0720c0(uVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  if ((uVar4 & 1) == 0) {
    _objc_retain(param_3);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    *(ulong *)(param_1 + 0x18) = param_3;
    _objc_release(uVar5);
    lVar2 = param_1 + 0x78;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    FUN_106664bb4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      puVar6 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
      puVar7 = PTR_PTR_1126b3fa0;
      _objc_alloc();
      if (puVar7 == (undefined *)0x0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        func_0x00010c0159e0();
      }
      _objc_retain(puVar7);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      *(undefined **)(param_1 + 0x28) = puVar7;
      _objc_release(uVar5);
      func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x30),param_2,puVar7,param_1);
      _objc_release(puVar7);
      _objc_release(puVar6);
    }
    _objc_release(lVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106664bb4; end: 106664c73;  */

void FUN_106664bb4(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c275140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010010fab4(lVar2,PTR_DAT_1126a4e58);
  _objc_release(lVar2);
  if ((int)lVar1 == 0 || lVar2 == 0) {
    _objc_retain();
    lVar2 = param_1;
  }
  else {
    lVar1 = param_1;
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c275140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106664c74; end: 106664df3; -[SCImpalaProfilePresenter _presentUnifiedActionSheetForSnapchatter:hideUserDetails:] */

void FUN_106664c74(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x70;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0720c0(uVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  if ((uVar4 & 1) == 0) {
    _objc_retain(param_3);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    *(ulong *)(param_1 + 0x18) = param_3;
    _objc_release(uVar5);
    lVar2 = param_1 + 0x78;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    FUN_106664bb4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      puVar6 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
      puVar7 = PTR_PTR_1126b2860;
      _objc_alloc(PTR_PTR_1126b2860);
      func_0x00010c058980();
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x38),param_2,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar6);
    }
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106664df4; end: 106664f5f; -[SCImpalaProfilePresenter _presentUnifiedPublicProfileWithProfileId:isPublisherProfile:] */

void FUN_106664df4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x48) == 0) {
    puVar1 = PTR_PTR_1126b0f10;
    _objc_alloc(PTR_PTR_1126b0f10);
    func_0x00010c033440();
    puVar2 = PTR_PTR_1126b0f18;
    _objc_alloc();
    func_0x00010bff9da0();
    func_0x00010c1cd960();
    func_0x00010c1cd9a0(puVar2);
    _objc_initWeak(auStack_48,param_1);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106664f60;
    puStack_68 = &UNK_110848218;
    _objc_copyWeak(auStack_50,auStack_48);
    puStack_60 = puVar2;
    lStack_58 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_80);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106664f60; end: 106664fbf;  */

void FUN_106664f60(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar1 = PTR_PTR_1126b0f20;
  _objc_alloc();
  func_0x00010c001da0();
  func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x40),param_2,puVar1,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106664fc0; end: 106664fc7; -[SCImpalaProfilePresenter friendActionSheetOpenProfile:] */

void FUN_106664fc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7f1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentUnifiedProfileForSnapcha_11257d610,
             *(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 106664fc8; end: 10666527f; -[SCImpalaProfilePresenter friendActionSheetShowCameraForSnap:] */

void FUN_106664fc8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b1010;
  _objc_alloc(PTR_PTR_1126b1010);
  func_0x00010c02ec80();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb2e0(puVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c294420(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb300(puVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010901d7c4(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb080(puVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010901cdb0(uVar2,puVar3);
  func_0x00010c1af8a0(puVar1);
  _objc_release(puVar3);
  func_0x00010c1d86a0(puVar1);
  lVar4 = param_1 + 0x78;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  FUN_106664bb4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = lVar5;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  _objc_release();
  if (lVar4 == 0) {
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126caae0);
    lVar4 = lVar6;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(long *)(param_1 + 0x60) = lVar4;
    _objc_release(uVar2);
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126caae0);
    lVar4 = lVar6;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    *(long *)(param_1 + 0x68) = lVar4;
    _objc_release(uVar2);
    _objc_release(lVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010c071800();
    _objc_release(uVar7);
    if ((int)uVar2 != 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010bfe63a0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010c271a20(puVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar7;
      func_0x00010bf23680(uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(uVar7);
      uVar7 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010bfe63a0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08b7c0();
      _objc_release(uVar7);
      _objc_release(uVar2);
    }
  }
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106665280; end: 10666528f;  */

void FUN_106665280(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf36110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_chatCameraScopeLauncher_1125ab1e8);
  return;
}



/* Entry: 106665290; end: 1066652d7; -[SCImpalaProfilePresenter friendActionSheetDidDismiss:] */

void FUN_106665290(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1066652d8; end: 106665463; -[SCImpalaProfilePresenter friendActionSheetDidDismiss:withRequestedChat:deepLinkURL:] */

void FUN_1066652d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x78;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  FUN_106664bb4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b1068;
  _objc_alloc(PTR_PTR_1126b1068);
  func_0x00010c057c40();
  _objc_release(param_5);
  func_0x00010c13a640(PTR_PTR_1126b41f8,param_2,puVar3);
  puVar4 = PTR_PTR_1126b3520;
  _objc_alloc(PTR_PTR_1126b3520);
  func_0x00010bffdd20();
  puVar5 = PTR_PTR_1126cb610;
  _objc_alloc(PTR_PTR_1126cb610);
  func_0x00010c038820();
  puVar6 = PTR_PTR_1126cc148;
  _objc_alloc(PTR_PTR_1126cc148);
  puVar7 = PTR_PTR_1126b3530;
  _objc_alloc(PTR_PTR_1126b3530);
  func_0x00010c038f40();
  func_0x00010bffdb00(puVar6,param_2,param_4,puVar4,puVar5,0,puVar7);
  _objc_release(param_4);
  _objc_release(puVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08c080();
  _objc_release(uVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106665464; end: 1066654db; -[SCImpalaProfilePresenter presentingViewControllerForUnifiedPublicProfilesPresenterScope] */

void FUN_106665464(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x78;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  FUN_106664bb4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    _objc_retain(lVar1);
    lVar2 = lVar1;
  }
  else {
    lVar2 = 0;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1066654dc; end: 106665513; -[SCImpalaProfilePresenter unifiedPublicProfilesPresenterScopeDidComplete] */

void FUN_1066654dc(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x00010bf94c80(*(undefined8 *)(param_1 + 0x40));
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106665514; end: 10666555f; -[SCImpalaProfilePresenter friendProfileDidDismiss:] */

void FUN_106665514(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010bf94c80(*(undefined8 *)(param_1 + 0x30));
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    _objc_release(uVar1);
  }
  param_1 = param_1 + 0x80;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf75040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106665560; end: 106665567; -[SCImpalaProfilePresenter shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_106665560(void)

{
  return 0;
}



/* Entry: 106665568; end: 106665573; -[SCImpalaProfilePresenter pushToValdiMarshaller:] */

void FUN_106665568(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b046e08(param_3,param_1);
  func_0x00010b046ddc();
  func_0x00010b046de4();
  func_0x00010b046d54();
  func_0x00010b046d94();
  return;
}



/* Entry: 106665574; end: 1066655f7; -[SCImpalaProfilePresenter dismissCameraScope:] */

void FUN_106665574(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010bfe63a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 1066655f8; end: 10666560f; -[SCImpalaProfilePresenter userSession] */

void FUN_1066655f8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106665610; end: 106665627; -[SCImpalaProfilePresenter viewController] */

void FUN_106665610(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106665628; end: 10666563f; -[SCImpalaProfilePresenter delegate] */

void FUN_106665628(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106665640; end: 10666564b; -[SCImpalaProfilePresenter setDelegate:] */

void FUN_106665640(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x80,param_3);
  return;
}



/* Entry: 10666564c; end: 1066656ff; -[SCImpalaProfilePresenter .cxx_destruct] */

void FUN_10666564c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x80);
  _objc_destroyWeak(param_1 + 0x78);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106665700; end: 106665a4f; -[SCImpalaCommunityLensProfileViewController initWithUserId:displayName:navigationDelegate:mixerEndpointManager:valdiRuntimeProvider:actionSheetPresenterFactory:snapTokenProvider:lensModularCameraPresentation:loggingInfo:composerNetworkingClient:urlPreviewProvider:simpleContentFetcher:externalLinkSendingService:circumstanceEngine:composerBlizzardLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106665700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
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
  puStack_70 = PTR_PTR_1126f23b0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274d1f8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274d1f8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274d1fc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274d1fc) = uVar2;
    _objc_release(uVar3);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11274d200,param_5);
    lVar4 = (long)_DAT_11274d204;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274d208;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274d20c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274d210;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274d214;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274d218;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_13;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274d21c;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_14;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274d220;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274d224;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_15;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274d228;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_16;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274d22c;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_17;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274d230;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
  }
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



/* Entry: 106665a50; end: 106665d97; -[SCImpalaCommunityLensProfileViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106665a50(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126f23b0;
  lStack_70 = param_1;
  _objc_msgSendSuper2(&lStack_70,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c1c8b40(param_1);
  puVar1 = PTR_PTR_1126cc068;
  _objc_alloc_init(PTR_PTR_1126cc068);
  lVar11 = (long)_DAT_11274d204;
  uVar2 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c247a20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206fa0(puVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c247a00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206f80(puVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c0f1180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d80e0(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126cc658;
  _objc_alloc();
  func_0x00010c05bde0();
  puVar4 = PTR_PTR_1126ba010;
  _objc_opt_new();
  puVar5 = PTR_PTR_1126b0fe0;
  _objc_alloc(PTR_PTR_1126b0fe0);
  func_0x00010c0617a0();
  puVar6 = PTR_PTR_1126cc660;
  _objc_alloc(PTR_PTR_1126cc660);
  func_0x00010c0617e0();
  puVar7 = PTR_PTR_1126cc668;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274d210);
  func_0x000107d704c8(uVar2,*(undefined8 *)(param_1 + _DAT_11274d228));
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_11274d214);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + _DAT_11274d22c);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff3900();
  lVar11 = (long)_DAT_11274d234;
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar7;
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar2);
  uVar8 = *(undefined8 *)(param_1 + _DAT_11274d230);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010c0b7620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161e00(*(undefined8 *)(param_1 + lVar11));
  _objc_release(uVar2);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + _DAT_11274d20c);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  puVar7 = PTR_PTR_1126cc670;
  _objc_alloc();
  func_0x00010c061d40();
  lVar11 = (long)_DAT_11274d238;
  uVar8 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar7;
  _objc_release(uVar8);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar11));
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 106665d98; end: 106665e07; -[SCImpalaCommunityLensProfileViewController viewWillLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106665d98(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f23b0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillLayoutSubviews_112526958);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11274d238));
  _objc_release(lVar1);
  return;
}



/* Entry: 106665e08; end: 106665e4f; -[SCImpalaCommunityLensProfileViewController viewWillAppear:] */

void FUN_106665e08(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f23b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c1cbec0(param_1);
  return;
}



/* Entry: 106665e50; end: 106665e97; -[SCImpalaCommunityLensProfileViewController viewDidAppear:] */

void FUN_106665e50(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f23b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010c1cbec0(param_1);
  return;
}



/* Entry: 106665e98; end: 106665e9f; -[SCImpalaCommunityLensProfileViewController prefersStatusBarHidden] */

undefined8 FUN_106665e98(void)

{
  return 0;
}



/* Entry: 106665ea0; end: 106665ea7; -[SCImpalaCommunityLensProfileViewController preferredStatusBarStyle] */

undefined8 FUN_106665ea0(void)

{
  return 1;
}



/* Entry: 106665ea8; end: 106665f5b; -[SCImpalaCommunityLensProfileViewController setNeedsStatusBarAppearanceUpdate] */

void FUN_106665ea8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f23b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setNeedsStatusBarAppearanceUpdat_1126509d8);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106ec0(param_1);
  func_0x00010c14dc80(puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1070e0(param_1);
  func_0x00010c14dc40(puVar1);
  _objc_release(puVar1);
  return;
}



/* Entry: 106665f5c; end: 106666037; -[SCImpalaCommunityLensProfileViewController presentOverViewController:performHapticFeedback:animated:completion:dismissBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106665f5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274d23c);
  *(undefined8 *)(param_1 + _DAT_11274d23c) = param_7;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b0f00;
  _objc_alloc();
  func_0x00010c038ea0();
  _objc_release(param_3);
  lVar3 = (long)_DAT_11274d240;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1da860(*(undefined8 *)(param_1 + lVar3),param_2,param_4);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3),param_2,param_1);
  func_0x00010c10eda0(*(undefined8 *)(param_1 + lVar3),param_2,param_1,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 106666038; end: 106666043; -[SCImpalaCommunityLensProfileViewController defaultProjectNameV2] */

void FUN_106666038(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5bc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_creators_1125b48c0);
  return;
}



/* Entry: 106666044; end: 10666604b; -[SCImpalaCommunityLensProfileViewController shouldDismissViewControllerWhenEnterBackground] */

undefined8 FUN_106666044(void)

{
  return 1;
}



/* Entry: 10666604c; end: 10666604f; -[SCImpalaCommunityLensProfileViewController showProfilePresenterDidStartPresenting:withSwipeDirection:] */

void FUN_10666604c(void)

{
  return;
}



/* Entry: 106666050; end: 106666097; -[SCImpalaCommunityLensProfileViewController showProfilePresenterDidFinishDismissing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106666050(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274d23c;
  if (*(long *)(param_1 + lVar2) != 0) {
    (**(code **)(*(long *)(param_1 + lVar2) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106666098; end: 10666609f; -[SCImpalaCommunityLensProfileViewController pageViewName] */

undefined8 FUN_106666098(void)

{
  return 0xdd;
}



/* Entry: 1066660a0; end: 1066660af; -[SCImpalaCommunityLensProfileViewController userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066660a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d1f8);
}



/* Entry: 1066660b0; end: 1066660bf; -[SCImpalaCommunityLensProfileViewController displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066660b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274d1fc);
}



/* Entry: 1066660c0; end: 1066660df; -[SCImpalaCommunityLensProfileViewController navigationDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066660c0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274d200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066660e0; end: 10666622b; -[SCImpalaCommunityLensProfileViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066660e0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274d200);
  _objc_storeStrong(param_1 + _DAT_11274d1fc,0);
  _objc_storeStrong(param_1 + _DAT_11274d1f8,0);
  _objc_storeStrong(param_1 + _DAT_11274d22c,0);
  _objc_storeStrong(param_1 + _DAT_11274d228,0);
  _objc_storeStrong(param_1 + _DAT_11274d230,0);
  _objc_storeStrong(param_1 + _DAT_11274d224,0);
  _objc_storeStrong(param_1 + _DAT_11274d214,0);
  _objc_storeStrong(param_1 + _DAT_11274d21c,0);
  _objc_storeStrong(param_1 + _DAT_11274d218,0);
  _objc_storeStrong(param_1 + _DAT_11274d23c,0);
  _objc_storeStrong(param_1 + _DAT_11274d220,0);
  _objc_storeStrong(param_1 + _DAT_11274d240,0);
  _objc_storeStrong(param_1 + _DAT_11274d208,0);
  _objc_storeStrong(param_1 + _DAT_11274d20c,0);
  _objc_storeStrong(param_1 + _DAT_11274d210,0);
  _objc_storeStrong(param_1 + _DAT_11274d234,0);
  _objc_storeStrong(param_1 + _DAT_11274d238,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274d204,0);
  return;
}



/* Entry: 10666622c; end: 10666640f; -[SCDeeplinkSendToEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10666622c(long param_1,undefined8 param_2)

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
  
  func_0x00010be8f600();
  puVar1 = PTR_PTR_1126cc678;
  _objc_alloc();
  lVar14 = (long)_DAT_11274d244;
  lVar2 = param_1 + lVar14;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar14;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11274d248;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c28f860();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11274d24c;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010c23c760();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11274d250;
  _objc_loadWeakRetained(lVar10);
  lVar11 = lVar10;
  func_0x00010c0e1840();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11274d254;
  _objc_loadWeakRetained(lVar12);
  lVar13 = lVar12;
  func_0x00010bf9e260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0017e0(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar11,lVar13);
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
  param_1 = param_1 + lVar14;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106666410; end: 10666645b; -[SCDeeplinkSendToEntryPoint end] */

void FUN_106666410(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be8f620();
  puStack_28 = PTR_PTR_1126f23b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10666645c; end: 10666658f; -[SCDeeplinkSendToEntryPoint _reportDeeplinkSendToScopeLifecycleEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10666645c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  param_1 = param_1 + _DAT_11274d258;
  _objc_loadWeakRetained();
  uVar1 = 0;
  _dispatch_get_global_queue(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106666534;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x00010007380c(uVar1,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(lStack_40);
  _objc_release(param_3);
  _objc_release(param_1);
  return;
}



/* Entry: 106666590; end: 1066665d3; -[SCDeeplinkSendToEntryPoint _reportDeeplinkSendToScopeBegan] */

void FUN_106666590(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cc680;
  func_0x00010c15d4c0(PTR_PTR_1126cc680);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8f640(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066665d4; end: 106666617; -[SCDeeplinkSendToEntryPoint _reportDeeplinkSendToScopeEnded] */

void FUN_1066665d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cc680;
  func_0x00010c15d4e0(PTR_PTR_1126cc680);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8f640(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106666618; end: 106666697; -[SCDeeplinkSendToEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106666618(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274d254);
  _objc_destroyWeak(param_1 + _DAT_11274d260);
  _objc_destroyWeak(param_1 + _DAT_11274d258);
  _objc_destroyWeak(param_1 + _DAT_11274d250);
  _objc_destroyWeak(param_1 + _DAT_11274d25c);
  _objc_destroyWeak(param_1 + _DAT_11274d244);
  _objc_destroyWeak(param_1 + _DAT_11274d24c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274d248);
  return;
}



/* Entry: 106666698; end: 106666817; -[SCDeeplinkSendToController initWithConfiguration:delegate:urlPreviewProvider:simpleContentFetcher:offPlatformLinkGenerationService:externalLinkSendingService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106666698(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126f23c0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11274d264;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11274d268),param_4);
    lVar3 = (long)_DAT_11274d26c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11274d270;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11274d274;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11274d278;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    func_0x00010c1c8b80(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106666818; end: 106666853; -[SCDeeplinkSendToController loadView] */

void FUN_106666818(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c222380(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106666854; end: 106666977; -[SCDeeplinkSendToController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106666854(long param_1)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f23c0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidAppear__112684bd0);
  lVar1 = (long)_DAT_11274d27c;
  if (*(long *)(param_1 + lVar1) == 0) {
    func_0x00010c0be8c0(*(undefined8 *)(param_1 + _DAT_11274d264));
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar1));
  }
  return;
}



/* Entry: 106666978; end: 106666a53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106666978(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126cc650;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010c009dc0();
  _objc_release(param_4);
  _objc_release(param_2);
  lVar3 = (long)_DAT_11274d27c;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3);
  *(undefined **)(*(long *)(param_1 + 0x20) + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c15d2a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


