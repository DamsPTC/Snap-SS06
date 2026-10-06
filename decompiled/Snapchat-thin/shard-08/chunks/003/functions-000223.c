/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105fe7b58; end: 105fe7b9b; -[SCClearFeedTableView loadMoreConversationsIfPossibleForceOnFailed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe7b58(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273c7fc);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09bba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fe7b9c; end: 105fe7c1f; -[SCClearFeedTableView isClearingFeedId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105fe7b9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_11273c804);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf3c620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b900();
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return uVar2;
}



/* Entry: 105fe7c20; end: 105fe7c67; -[SCClearFeedTableView shouldDisplayClearConversationConfirmation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105fe7c20(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273c808);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22f4c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105fe7c68; end: 105fe7cdb; -[SCClearFeedTableView clearConversationForFeedId:isGroup:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe7c68(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273c804);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    func_0x00010bf3b440();
  }
  else {
    func_0x00010bf3b420();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fe7cdc; end: 105fe7ce3; -[SCClearFeedTableView forceLoadMoreConversations] */

void FUN_105fe7cdc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09bbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_loadMoreConversationsIfPossibleF_1126048f8,1)
  ;
  return;
}



/* Entry: 105fe7ce4; end: 105fe7da3; -[SCClearFeedTableView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe7ce4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273c808,0);
  _objc_storeStrong(param_1 + _DAT_11273c804,0);
  _objc_storeStrong(param_1 + _DAT_11273c800,0);
  _objc_storeStrong(param_1 + _DAT_11273c7fc,0);
  _objc_storeStrong(param_1 + _DAT_11273c7f8,0);
  _objc_storeStrong(param_1 + _DAT_11273c7f4,0);
  _objc_storeStrong(param_1 + _DAT_11273c810,0);
  _objc_storeStrong(param_1 + _DAT_11273c818,0);
  _objc_storeStrong(param_1 + _DAT_11273c814,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273c80c,0);
  return;
}



/* Entry: 105fe7da4; end: 105fe809b; -[SCClearFeedViewController initWithUserId:friendsFeedDataCoordinator:friendsFeedFetcher:conversationManager:nativeMessagingFeedManager:friendsFeedLoadingStatusStream:clearConversationActionHandler:delegate:legacyChatTooltipsService:messagingExperimentService:circumstanceEngine:plusServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105fe7da4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
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
  puStack_68 = PTR_PTR_1126eede0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273c81c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273c81c) = uVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273c820;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11273c824;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11273c828;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    func_0x00010bec7c40(puVar1);
    lVar4 = (long)_DAT_11273c82c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11273c830;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11273c834;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11273c838,param_10);
    lVar4 = (long)_DAT_11273c83c;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11273c840;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11273c844;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_13;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11273c848;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_14;
    _objc_release(uVar2);
  }
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



/* Entry: 105fe809c; end: 105fe810f; -[SCClearFeedViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe809c(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + _DAT_11273c84c));
  lVar1 = param_1 + _DAT_11273c838;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf3b460();
  _objc_release(lVar1);
  puStack_28 = PTR_PTR_1126eede0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105fe8110; end: 105fe8157; -[SCClearFeedViewController loadView] */

void FUN_105fe8110(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126eede0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_loadView_112604be0);
  func_0x00010c229760(param_1);
  return;
}



/* Entry: 105fe8158; end: 105fe848b; -[SCClearFeedViewController setupTableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe8158(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c6e48;
  _objc_alloc();
  uStack_f0 = *(undefined8 *)(param_1 + _DAT_11273c834);
  uStack_e8 = *(undefined8 *)(param_1 + _DAT_11273c83c);
  uStack_e0 = *(undefined8 *)(param_1 + _DAT_11273c840);
  uStack_d8 = *(undefined8 *)(param_1 + _DAT_11273c844);
  uStack_d0 = *(undefined8 *)(param_1 + _DAT_11273c848);
  func_0x00010c05b2c0();
  lVar10 = (long)_DAT_11273c850;
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar1;
  _objc_release(uVar9);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar10));
  puStack_c8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_98 = uVar9;
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  lStack_90 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_a0 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar10);
  uStack_a8 = uVar9;
  uStack_88 = uVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_b8 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_b0 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_c0 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar10);
  uStack_80 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar10);
  uStack_78 = uVar9;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_c8);
  _objc_release(puVar1);
  _objc_release(uVar7);
  _objc_release(lVar10);
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(uVar9);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lStack_c0);
  _objc_release(lStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_a8);
  _objc_release(lStack_a0);
  _objc_release(lStack_90);
  uVar7 = uStack_98;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_f8 = FUN_105fe848c;
  puStack_128 = PTR_PTR_1126eede0;
  uStack_130 = uVar7;
  uStack_120 = uVar9;
  lStack_118 = lVar5;
  lStack_110 = param_1;
  lStack_108 = lVar2;
  puStack_100 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&uStack_130,PTR_s_viewDidLoad_112684cd8);
  puVar8 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126afdd8;
  func_0x00010c0f2220(uVar7);
  func_0x00010bfc8740(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e20(puVar8);
  _objc_release(puVar1);
  _objc_release(puVar8);
  return;
}



/* Entry: 105fe848c; end: 105fe852f; -[SCClearFeedViewController viewDidLoad] */

void FUN_105fe848c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126eede0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afdd8;
  func_0x00010c0f2220(param_1);
  func_0x00010bfc8740(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e20(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 105fe8530; end: 105fe856b; -[SCClearFeedViewController leftButtonPressed] */

void FUN_105fe8530(undefined8 param_1)

{
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fe856c; end: 105fe857b; -[SCClearFeedViewController getTitle] */

void FUN_105fe856c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e358d8;
  func_0x000107c312f0(&PTR____CFConstantStringClassReference_110e358d8,0);
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137fe070 != -1) {
    func_0x000107c27d9c(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x00010bcbea50(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105fe857c; end: 105fe86eb; -[SCClearFeedViewController _subscribeToLoadingStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe857c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_11273c84c;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar7));
  _objc_initWeak(auStack_58,param_1);
  uVar1 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09d440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar5 = uVar4;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = uVar5;
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 105fe86ec; end: 105fe874b;  */

void FUN_105fe86ec(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c09d440(param_2);
  _objc_release(param_2);
  func_0x00010be2b8c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fe874c; end: 105fe874f; -[SCClearFeedViewController _handleLoadingStatusChanged:] */

void FUN_105fe874c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee1b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateTableSubviews_112596078);
  return;
}



/* Entry: 105fe8750; end: 105fe875b; -[SCClearFeedViewController supportedInterfaceOrientations] */

undefined8 FUN_105fe8750(void)

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



/* Entry: 105fe875c; end: 105fe8763; -[SCClearFeedViewController pageViewName] */

undefined8 FUN_105fe875c(void)

{
  return 0x2d;
}



/* Entry: 105fe8764; end: 105fe876b; -[SCClearFeedViewController shouldPopToRootViewController] */

undefined8 FUN_105fe8764(void)

{
  return 0;
}



/* Entry: 105fe876c; end: 105fe8773; -[SCClearFeedViewController shouldPopToRootViewControllerLater] */

undefined8 FUN_105fe876c(void)

{
  return 1;
}



/* Entry: 105fe8774; end: 105fe8783; -[SCClearFeedViewController _updateTableSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe8774(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28a970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273c850),PTR_s_updateSubviews_112680480);
  return;
}



/* Entry: 105fe8784; end: 105fe887f; -[SCClearFeedViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe8784(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273c848,0);
  _objc_storeStrong(param_1 + _DAT_11273c844,0);
  _objc_storeStrong(param_1 + _DAT_11273c840,0);
  _objc_storeStrong(param_1 + _DAT_11273c83c,0);
  _objc_storeStrong(param_1 + _DAT_11273c834,0);
  _objc_destroyWeak(param_1 + _DAT_11273c838);
  _objc_storeStrong(param_1 + _DAT_11273c830,0);
  _objc_storeStrong(param_1 + _DAT_11273c84c,0);
  _objc_storeStrong(param_1 + _DAT_11273c82c,0);
  _objc_storeStrong(param_1 + _DAT_11273c828,0);
  _objc_storeStrong(param_1 + _DAT_11273c824,0);
  _objc_storeStrong(param_1 + _DAT_11273c820,0);
  _objc_storeStrong(param_1 + _DAT_11273c81c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273c850,0);
  return;
}



/* Entry: 105fe8880; end: 105fe90df; -[SCFeedClearTableViewCell initWithStyle:reuseIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_105fe8880(double param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined *unaff_x20;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined8 *puStack_258;
  undefined1 *puStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_108 = PTR_PTR_1126eede8;
  puVar1 = &uStack_110;
  uStack_110 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithStyle_reuseIdentifier__1125f1528,3);
  puVar11 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = (long)_DAT_11273c854;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined **)((long)puVar1 + lVar14) = puVar2;
    _objc_release(uVar12);
    uVar12 = *(undefined8 *)((long)puVar1 + lVar14);
    puVar3 = puVar1;
    func_0x00010bddff00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fc0(uVar12);
    _objc_release(puVar3);
    func_0x00010bddff20(puVar1);
    func_0x00010c1aa240(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar14));
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    lVar16 = (long)_DAT_11273c858;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar16);
    *(undefined **)((long)puVar1 + lVar16) = puVar2;
    _objc_release(uVar12);
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126aea58;
    _objc_opt_new();
    lVar13 = (long)_DAT_11273c85c;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined **)((long)puVar1 + lVar13) = puVar2;
    _objc_release(uVar12);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar16));
    puVar2 = PTR_PTR_1126aea58;
    _objc_opt_new();
    lVar15 = (long)_DAT_11273c860;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined **)((long)puVar1 + lVar15) = puVar2;
    _objc_release(uVar12);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar15));
    func_0x00010c165e20(*(undefined8 *)((long)puVar1 + lVar15));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar16));
    func_0x00010bddff40(puVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar16));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar15));
    puStack_1a8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar14);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uStack_118 = uVar12;
    func_0x00010bf49420(0x4049000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_100 = uVar12;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar14);
    uStack_120 = uVar12;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uStack_128 = uVar4;
    func_0x00010bf49420(0x4049000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_f8 = uVar4;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar14);
    uStack_130 = uVar4;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    uStack_140 = uVar12;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_138 = puVar3;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_148 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = uVar12;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar14);
    uStack_150 = uVar12;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    uStack_160 = uVar4;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_158 = puVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_168 = puVar3;
    func_0x00010bf493c0(-param_1);
    _objc_retainAutoreleasedReturnValue();
    uStack_e8 = uVar4;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar16);
    uStack_170 = uVar4;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    uStack_180 = uVar12;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_178 = puVar3;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_188 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_e0 = uVar12;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar16);
    uStack_190 = uVar12;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    uStack_1a0 = uVar4;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_198 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_1b0 = puVar3;
    func_0x00010bf493c0(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = uVar4;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar16);
    uStack_1b8 = uVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    uStack_1c8 = uVar12;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_1c0 = puVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_1d0 = puVar3;
    func_0x00010bf49520(-(param_1 + 50.0));
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = uVar12;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar13);
    uStack_1d8 = uVar12;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar1 + lVar16);
    uStack_1e0 = uVar4;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uStack_1e8 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uVar4;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar13);
    uStack_1f0 = uVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar1 + lVar16);
    uStack_1f8 = uVar5;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_200 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar5;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar13);
    uStack_208 = uVar5;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar1 + lVar16);
    uStack_210 = uVar4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uStack_218 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar4;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar15);
    uStack_220 = uVar4;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar1 + lVar16);
    uStack_228 = uVar5;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uStack_230 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar5;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar15);
    uStack_238 = uVar5;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + lVar16);
    uStack_240 = uVar6;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar6;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar4;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)puVar1 + lVar16);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar12;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_1a8);
    _objc_release(unaff_x20);
    _objc_release(uVar12);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar4);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uStack_240);
    _objc_release(uStack_238);
    _objc_release(uStack_230);
    _objc_release(uStack_228);
    _objc_release(uStack_220);
    _objc_release(uStack_218);
    _objc_release(uStack_210);
    _objc_release(uStack_208);
    _objc_release(uStack_200);
    _objc_release(uStack_1f8);
    _objc_release(uStack_1f0);
    _objc_release(uStack_1e8);
    _objc_release(uStack_1e0);
    _objc_release(uStack_1d8);
    _objc_release(puStack_1d0);
    _objc_release(puStack_1c0);
    _objc_release(uStack_1c8);
    _objc_release(uStack_1b8);
    _objc_release(puStack_1b0);
    _objc_release(puStack_198);
    _objc_release(uStack_1a0);
    _objc_release(uStack_190);
    _objc_release(puStack_188);
    _objc_release(puStack_178);
    _objc_release(uStack_180);
    _objc_release(uStack_170);
    _objc_release(puStack_168);
    _objc_release(puStack_158);
    _objc_release(uStack_160);
    _objc_release(uStack_150);
    _objc_release(puStack_148);
    _objc_release(puStack_138);
    _objc_release(uStack_140);
    _objc_release(uStack_130);
    _objc_release(uStack_128);
    _objc_release(uStack_120);
    _objc_release(uStack_118);
    func_0x00010c1fbac0(puVar1);
    func_0x00010befd8a0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_248 = FUN_105fe90e0;
  puStack_268 = PTR_PTR_1126eede8;
  puStack_270 = puVar11;
  puStack_260 = unaff_x20;
  puStack_258 = puVar1;
  puStack_250 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_270,PTR_s_layoutSubviews_112600e60);
  puVar11 = *(undefined8 **)((long)puVar11 + (long)_DAT_11273c864);
  func_0x00010bf85d80(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bd8e0();
  _objc_release(puVar11);
  return puVar11;
}



/* Entry: 105fe90e0; end: 105fe919b; -[SCFeedClearTableViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe90e0(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126eede8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273c864);
  func_0x00010bf85d80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bd8e0();
  _objc_release(uVar1);
  return;
}



/* Entry: 105fe919c; end: 105fe91b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe919c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11273c85c),
             PTR_s_setText__1126625f0,param_2);
  return;
}



/* Entry: 105fe91b4; end: 105fe928b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe91b4(double param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_5;
  _objc_retain(param_5);
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bf20c00(*(undefined8 *)(param_4 + 0x20));
  func_0x00010bddff40(*(undefined8 *)(param_4 + 0x20));
  uVar1 = param_5;
  func_0x000108ef620c(((param_3 + -50.0) - param_1) + -15.0 + -50.0,param_5,uVar2,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c212f20(*(undefined8 *)(*(long *)(param_4 + 0x20) + (long)_DAT_11273c85c));
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105fe928c; end: 105fe928f; -[SCFeedClearTableViewCell _clearButtonImage] */

void FUN_105fe928c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be36b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__iconXSignFillImage_11256b468);
  return;
}



/* Entry: 105fe9290; end: 105fe92e3; -[SCFeedClearTableViewCell _clearButtonInsetsLength] */

double FUN_105fe9290(double param_1,undefined8 param_2)

{
  func_0x00010bddff00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(param_2);
  return (50.0 - param_1) * 0.5;
}



/* Entry: 105fe92e4; end: 105fe92ff; -[SCFeedClearTableViewCell _clearButtonRightMarginLength] */

double FUN_105fe92e4(double param_1)

{
  func_0x00010bddff20();
  return 24.0 - param_1;
}



/* Entry: 105fe9300; end: 105fe94df; -[SCFeedClearTableViewCell activityIndicatorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe9300(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = (long)_DAT_11273c868;
  lVar10 = *(long *)(param_1 + lVar11);
  if (lVar10 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
    _objc_alloc();
    func_0x00010bff0f20();
    uVar9 = *(undefined8 *)(param_1 + lVar11);
    *(undefined **)(param_1 + lVar11) = puVar1;
    _objc_release(uVar9);
    lVar10 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar10);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar11));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar2 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = (long)_DAT_11273c854;
    uVar3 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010bf348e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010bf34860(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar7;
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar9);
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar10 = *(long *)(param_1 + lVar11);
  }
  lVar11 = lVar10;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar10);
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf51e00();
  uVar9 = *(undefined8 *)(lVar11 + _DAT_11273c864);
  *(undefined **)(lVar11 + _DAT_11273c864) = param_3;
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010c28c190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar11,PTR_s_updateViews_112680a88);
  return;
}



/* Entry: 105fe94e0; end: 105fe951f; -[SCFeedClearTableViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe94e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273c864);
  *(undefined8 *)(param_1 + _DAT_11273c864) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c28c190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateViews_112680a88);
  return;
}



/* Entry: 105fe9520; end: 105fe9697; -[SCFeedClearTableViewCell updateViews] */

/* WARNING: Possible PIC construction at 0x000105fe95d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105fe9610: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105fe966c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105fe9614) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Removing unreachable block (ram,0x000105fe95d8) */
/* WARNING: Removing unreachable block (ram,0x000105fe9670) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe9520(long param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  long lVar6;
  
  uVar2 = param_1 + _DAT_11273c86c;
  _objc_loadWeakRetained();
  lVar6 = (long)_DAT_11273c864;
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010bfe5ec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c06e980();
  _objc_release(uVar3);
  _objc_release(uVar2);
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c2709c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11273c860));
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11273c854);
  }
  else {
    ppuVar5 = &PTR____CFConstantStringClassReference_110e35918;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e35918,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11273c860));
    _objc_release(ppuVar5);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11273c854);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_setHidden__1126479f8,!bVar1);
  return;
}



/* Entry: 105fe9698; end: 105fe9743; -[SCFeedClearTableViewCell clearButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe9698(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + _DAT_11273c86c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c22f4c0();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    func_0x00010bf85460(PTR_PTR_1126b2a28);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf3af70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_clearConversation_1125ac580);
  return;
}



/* Entry: 105fe9744; end: 105fe9753;  */

void FUN_105fe9744(long param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf3af70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_clearConversation_1125ac580);
    return;
  }
  return;
}



/* Entry: 105fe9754; end: 105fe97d3; -[SCFeedClearTableViewCell clearConversation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe9754(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + _DAT_11273c86c;
  _objc_loadWeakRetained(lVar1);
  lVar3 = (long)_DAT_11273c864;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bfe5ec0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0748c0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010bf3afc0(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c28c190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateViews_112680a88);
  return;
}



/* Entry: 105fe97d4; end: 105fe984f; -[SCFeedClearTableViewCell _iconXSignFillImage] */

void FUN_105fe97d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x7f);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4039000000000000,0x4039000000000000,0x3ff0000000000000,0x3ff0000000000000,
                      0x3ff0000000000000,0x3ff0000000000000,puVar2,param_2,0x2f3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105fe9850; end: 105fe985f; -[SCFeedClearTableViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105fe9850(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273c864);
}



/* Entry: 105fe9860; end: 105fe987f; -[SCFeedClearTableViewCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe9860(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11273c86c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fe9880; end: 105fe9893; -[SCFeedClearTableViewCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe9880(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11273c86c,param_3);
  return;
}



/* Entry: 105fe9894; end: 105fe991f; -[SCFeedClearTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fe9894(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273c86c);
  _objc_storeStrong(param_1 + _DAT_11273c864,0);
  _objc_storeStrong(param_1 + _DAT_11273c868,0);
  _objc_storeStrong(param_1 + _DAT_11273c860,0);
  _objc_storeStrong(param_1 + _DAT_11273c85c,0);
  _objc_storeStrong(param_1 + _DAT_11273c858,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273c854,0);
  return;
}



/* Entry: 105fe9920; end: 105fe9a07; -[SCClearFeedCellViewModel initWithIdentifier:displayName:timestamp:isGroup:] */

undefined1 *
FUN_105fe9920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126eedf0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105fe9a08; end: 105fe9a2b; -[SCClearFeedCellViewModel copyWithZone:] */

undefined8 FUN_105fe9a08(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105fe9a2c; end: 105fe9aaf; -[SCClearFeedCellViewModel hash] */

undefined8 * FUN_105fe9a2c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar3 = &uStack_48;
  uStack_38 = uVar1;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105fe9b58:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105fe9b64;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_105fe9b64;
          }
          goto LAB_105fe9b58;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105fe9b64:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105fe9ab0; end: 105fe9b7f; -[SCClearFeedCellViewModel isEqual:] */

long FUN_105fe9ab0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105fe9b58:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105fe9b64;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_105fe9b64;
          }
          goto LAB_105fe9b58;
        }
      }
    }
    lVar3 = 0;
  }
LAB_105fe9b64:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105fe9b80; end: 105fe9b87; -[SCClearFeedCellViewModel identifier] */

undefined8 FUN_105fe9b80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105fe9b88; end: 105fe9b8f; -[SCClearFeedCellViewModel displayName] */

undefined8 FUN_105fe9b88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105fe9b90; end: 105fe9b97; -[SCClearFeedCellViewModel timestamp] */

undefined8 FUN_105fe9b90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105fe9b98; end: 105fe9b9f; -[SCClearFeedCellViewModel isGroup] */

undefined1 FUN_105fe9b98(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105fe9ba0; end: 105fe9bdb; -[SCClearFeedCellViewModel .cxx_destruct] */

void FUN_105fe9ba0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105fe9bdc; end: 105fe9c6f; -[SCClearConversationsScope initWithNavigationController:delegate:] */

undefined1 *
FUN_105fe9bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eedf8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105fe9c70; end: 105fe9c87; -[SCClearConversationsScope navigationController] */

void FUN_105fe9c70(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fe9c88; end: 105fe9c9f; -[SCClearConversationsScope delegate] */

void FUN_105fe9c88(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fe9ca0; end: 105fe9cc7; -[SCClearConversationsScope .cxx_destruct] */

void FUN_105fe9ca0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105fe9cc8; end: 105fe9dc3; -[SCGroupNameMaxLengthFieldDelegate textField:shouldChangeCharactersInRange:replacementString:] */

ulong FUN_105fe9cc8(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,long param_5,
                   undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  uVar2 = param_3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c08fa60();
  _objc_release(uVar2);
  if (uVar1 < (ulong)(param_5 + param_4)) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c25cf80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010c08fa60();
    if (uVar2 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = uVar1;
      func_0x000108ef36d0(uVar1);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 105fe9dc4; end: 105fea2e7; -[SCEditGroupNameAlertView initWithGroup:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined **
FUN_105fe9dc4(undefined *param_1,undefined8 param_2,undefined **param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_4;
  _objc_retain();
  FUN_105feb320();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_3;
  func_0x00010bfcef60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c08fa60();
  _objc_release(ppuVar2);
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar2 = param_3;
    func_0x00010bfcef60();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_initWeak(auStack_a8,param_1);
  puVar4 = PTR_PTR_1126aed70;
  ppuVar3 = &PTR____CFConstantStringClassReference_110db2cf8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2cf8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_105fea2e8;
  puStack_c8 = &UNK_110866148;
  _objc_copyWeak(auStack_b0,auStack_a8);
  ppuStack_c0 = ppuVar2;
  _objc_retain(param_3);
  ppuStack_b8 = param_3;
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  puVar5 = PTR_PTR_1126aed70;
  ppuVar3 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = puVar6;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_105fea360;
  puStack_f0 = &UNK_110848c78;
  _objc_retain(param_4);
  puStack_e8 = param_4;
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  puVar6 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_alloc(PTR__OBJC_CLASS___UIStackView_1126aefe8);
  uVar11 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar11,uVar12,uVar13,uVar14);
  func_0x00010c16e060();
  func_0x00010c207380(0x4038000000000000,puVar6);
  func_0x00010c1b9ba0(puVar6);
  func_0x00010c1b9b80(0x4038000000000000,0x4038000000000000,0x4038000000000000,0x4038000000000000,
                      puVar6);
  puVar7 = PTR_PTR_1126aea58;
  _objc_alloc(PTR_PTR_1126aea58);
  func_0x00010c013de0(uVar11,uVar12,uVar13,uVar14);
  func_0x00010c212f20();
  func_0x00010c213040(puVar7);
  func_0x00010c21ad00(puVar7);
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar7);
  _objc_release(puVar8);
  func_0x00010c1cfce0(puVar7);
  func_0x00010c23d620(puVar7);
  func_0x00010bef6d60(puVar6);
  puVar8 = PTR_PTR_1126b3f70;
  _objc_alloc();
  func_0x00010c013de0(uVar11,uVar12,uVar13,uVar14);
  lVar10 = (long)_DAT_11273c888;
  uVar11 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar8;
  _objc_release(uVar11);
  uVar11 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c08c0e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4024000000000000);
  _objc_release(uVar11);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar10));
  puVar8 = PTR_PTR_1126c6e50;
  _objc_opt_new();
  uVar11 = *(undefined8 *)(param_1 + _DAT_11273c88c);
  *(undefined **)(param_1 + _DAT_11273c88c) = puVar8;
  _objc_release(uVar11);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar10));
  uVar11 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c212f20(uVar11);
  func_0x000105feb338();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dc9c0(*(undefined8 *)(param_1 + lVar10));
  _objc_release(uVar11);
  func_0x00010c23d620(*(undefined8 *)(param_1 + lVar10));
  func_0x00010bef6d60(puVar6);
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a0 = puVar4;
  puStack_98 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puStack_110 = PTR_PTR_1126eee00;
  ppuVar3 = &puStack_118;
  puVar9 = PTR_s_initWithAccessoryView_title_dial_1125d9970;
  puStack_118 = param_1;
  _objc_msgSendSuper2(ppuVar3,PTR_s_initWithAccessoryView_title_dial_1125d9970,puVar6,0,0,0,puVar8,0
                      ,0,0);
  _objc_release(puVar8);
  if (ppuVar3 != (undefined **)0x0) {
    func_0x00010c1611e0(ppuVar3);
    puVar9 = param_4;
    _objc_storeWeak((long)ppuVar3 + (long)_DAT_11273c890,param_4);
  }
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puStack_e8);
  _objc_release(puVar4);
  _objc_release(ppuStack_b8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(ppuVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  __Unwind_Resume();
  _objc_retain(puVar9);
  ppuVar2 = param_3 + 6;
  _objc_loadWeakRetained(ppuVar2);
  puVar1 = param_3[5];
  func_0x00010bfceb20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be28c00(ppuVar2);
  _objc_release(puVar9);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return ppuVar2;
}



/* Entry: 105fea2e8; end: 105fea35f;  */

void FUN_105fea2e8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfceb20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be28c00(lVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105fea360; end: 105fea3d7;  */

void FUN_105fea360(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 105fea3d8; end: 105fea3df;  */

void FUN_105fea3d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf74b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didDismissAlertView_1125bac78);
  return;
}



/* Entry: 105fea3e0; end: 105fea453; -[SCEditGroupNameAlertView viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fea3e0(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126eee00;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillAppear__1126853f0);
  lVar2 = (long)_DAT_11273c888;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bf179a0(*(undefined8 *)(param_1 + lVar2));
  }
  return;
}



/* Entry: 105fea454; end: 105fea533; -[SCEditGroupNameAlertView viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fea454(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126eee00;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidAppear__112684bd0);
  lVar5 = (long)_DAT_11273c888;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    uVar2 = uVar4;
    func_0x00010bf193c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf94e60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26c600(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb600(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 105fea534; end: 105fea80f; -[SCEditGroupNameAlertView _handleEditGroupName:groupId:sender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fea534(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273c888);
  func_0x00010c26b700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_11273c890;
  lVar2 = param_1 + lVar9;
  _objc_loadWeakRetained();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00();
  puVar7 = PTR_PTR_1126aed70;
  if ((int)puVar3 == 0) {
    func_0x00010c0720c0();
    if ((int)param_3 != 0) {
      func_0x00010bf84b00(param_5);
      goto LAB_105fea7a8;
    }
    func_0x00010c1beb60(param_5);
    puVar7 = (undefined *)(param_1 + lVar9);
    _objc_loadWeakRetained(puVar7);
    func_0x00010bfd0f20();
  }
  else {
    ppuVar4 = &PTR____CFConstantStringClassReference_110dad758;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beff4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    puVar3 = PTR_PTR_1126aed78;
    _objc_alloc(PTR_PTR_1126aed78);
    ppuVar4 = &PTR____CFConstantStringClassReference_110dc3e98;
    param_2 = 0;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc3e98,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x000105feb350();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052ec0(puVar3);
    _objc_release(puVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    func_0x00010c10eda0(param_5);
    _objc_release(puVar3);
  }
  _objc_release(puVar7);
LAB_105fea7a8:
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(param_2);
  return;
}



/* Entry: 105fea810; end: 105fea86b;  */

void FUN_105fea810(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105fea86c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf84b00(param_2,param_2,1,&puStack_38);
  return;
}



/* Entry: 105fea86c; end: 105fea883;  */

void FUN_105fea86c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf74b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didDismissAlertView_1125bac78);
  return;
}



/* Entry: 105fea884; end: 105fea8cf; -[SCEditGroupNameAlertView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105fea884(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273c88c,0);
  _objc_storeStrong(param_1 + _DAT_11273c888,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273c890);
  return;
}



/* Entry: 105fea8d0; end: 105fea99b; -[SCEditGroupNameAlertViewController initWithGroupsDataFetcher:groupsDataMutator:notificationPool:] */

undefined1 *
FUN_105fea8d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126eee08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
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



/* Entry: 105fea99c; end: 105feab0f; -[SCEditGroupNameAlertViewController presentEditGroupNameAlertViewForGroupId:uiContainer:] */

void FUN_105fea99c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((param_4 == 0) || (lVar1 == 0)) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf74d40();
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((param_4 != 0) && (lVar1 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    _objc_retain(PTR___dispatch_main_q_11034be20);
    func_0x00010bfc6120(uVar2);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar2);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105feab10; end: 105feab63;  */

void FUN_105feab10(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfee60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105feab64; end: 105feabff; -[SCEditGroupNameAlertViewController _didPressEditNameButtonForGroup:uiContainer:] */

void FUN_105feab64(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 == 0) || (param_4 == 0)) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf74d40();
    _objc_release(param_1);
  }
  puVar1 = PTR_PTR_1126c6e58;
  _objc_alloc(PTR_PTR_1126c6e58);
  func_0x00010c018980();
  func_0x00010bf0c980(param_4,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105feac00; end: 105fead9f; -[SCEditGroupNameAlertViewController handleEditGroupName:groupId:sender:] */

void FUN_105feac00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  ppuVar2 = &puStack_a0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar3 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar3 == 0) {
    _objc_initWeak(auStack_58,param_1);
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar4);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_105feada0;
    puStack_88 = &UNK_110906030;
    _objc_retain(param_5);
    uStack_80 = param_5;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    uStack_78 = param_3;
    uStack_70 = uVar4;
    lStack_68 = lVar1;
    _objc_retainBlock(&puStack_a0);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c286340();
    _objc_release(uVar3);
    _objc_release(ppuVar2);
    _objc_release(uStack_78);
    _objc_destroyWeak(auStack_60);
    _objc_release(uStack_80);
    _objc_release(uVar4);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_58);
  }
  else {
    func_0x00010c1beb60(param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105feada0; end: 105feaebf;  */

void FUN_105feada0(long param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105feaec0;
  puStack_88 = &UNK_110906000;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_2;
  _objc_retain(uVar1);
  uStack_80 = uVar1;
  uStack_50 = param_4;
  _objc_copyWeak(auStack_58,param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  uStack_78 = uVar1;
  _objc_retain(param_3);
  uStack_60 = *(undefined8 *)(param_1 + 0x38);
  uStack_68 = *(undefined8 *)(param_1 + 0x30);
  uStack_70 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_a0);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_58);
  _objc_release(uStack_80);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105feaec0; end: 105feafcb;  */

void FUN_105feaec0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_105feafcc;
    puStack_30 = &UNK_110842e18;
    uStack_28 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bf84b00(*(undefined8 *)(param_1 + 0x20),param_2,1,&puStack_48);
    return;
  }
  func_0x00010c1beb60(*(undefined8 *)(param_1 + 0x20),param_2,0);
  if (*(long *)(param_1 + 0x50) == 1) {
    lVar1 = param_1 + 0x48;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf51e00();
      uVar4 = *(undefined8 *)(lVar1 + 0x20);
      *(undefined8 *)(lVar1 + 0x20) = uVar2;
      _objc_release(uVar4);
    }
    _objc_release(lVar1);
  }
  puVar3 = PTR_PTR_1126afde0;
  func_0x00010bf55ce0(PTR_PTR_1126afde0,param_2,*(undefined8 *)(param_1 + 0x30),0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105feafcc; end: 105feafd7;  */

void FUN_105feafcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf74d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didDismissEditGroupNameAlertView_1125bacf8,1);
  return;
}



/* Entry: 105feafd8; end: 105feb007; -[SCEditGroupNameAlertViewController didDismissAlertView] */

void FUN_105feafd8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf74d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105feb008; end: 105feb01f; -[SCEditGroupNameAlertViewController delegate] */

void FUN_105feb008(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105feb020; end: 105feb02b; -[SCEditGroupNameAlertViewController setDelegate:] */

void FUN_105feb020(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 105feb02c; end: 105feb07b; -[SCEditGroupNameAlertViewController .cxx_destruct] */

void FUN_105feb02c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105feb07c; end: 105feb247; -[SCEditGroupNameScopeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105feb07c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126c6e60;
  _objc_alloc();
  lVar7 = (long)_DAT_11273c8a8;
  lVar2 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar2);
  lVar8 = lVar2;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar7);
  lVar3 = lVar7;
  func_0x00010bfcf8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11273c8ac;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0193a0(puVar1,param_2,lVar8,lVar3,lVar5);
  lVar9 = (long)_DAT_11273c8b0;
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar1;
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar8);
  _objc_release(lVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar9),param_2,param_1);
  lVar8 = (long)_DAT_11273c8b4;
  lVar2 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar7);
  func_0x00010c2a60e0(lVar4,param_2,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar4);
  _objc_release(lVar2);
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  lVar2 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar2);
  lVar7 = lVar2;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar8;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10bf20(uVar6,param_2,lVar7,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105feb248; end: 105feb2cb; -[SCEditGroupNameScopeEntryPoint didDismissEditGroupNameAlertView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105feb248(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11273c8b4;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf74d60(lVar2,param_2,param_1,param_3);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105feb2cc; end: 105feb31f; -[SCEditGroupNameScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105feb2cc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273c8b4);
  _objc_destroyWeak(param_1 + _DAT_11273c8ac);
  _objc_destroyWeak(param_1 + _DAT_11273c8a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273c8b0,0);
  return;
}



/* Entry: 105feb320; end: 105feb367;  */

void FUN_105feb320(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e35978;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e35978,
                      &PTR____CFConstantStringClassReference_110e35958,0);
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



/* Entry: 105feb368; end: 105feb42b; -[SCEditGroupNameScope initWithGroupId:uiContainer:delegate:] */

undefined1 *
FUN_105feb368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126eee10;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105feb42c; end: 105feb433; -[SCEditGroupNameScope groupId] */

undefined8 FUN_105feb42c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105feb434; end: 105feb43b; -[SCEditGroupNameScope uiContainer] */

undefined8 FUN_105feb434(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105feb43c; end: 105feb453; -[SCEditGroupNameScope delegate] */

void FUN_105feb43c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105feb454; end: 105feb48b; -[SCEditGroupNameScope .cxx_destruct] */

void FUN_105feb454(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105feb48c; end: 105feb57f; -[SCChatEraseMessageController initWithConversationManager:notificationPool:delegate:uiContainer:userPreferences:] */

undefined1 *
FUN_105feb48c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126eee18;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105feb580; end: 105feb62f; -[SCChatEraseMessageController dismissPresentedDialogIfNeeded] */

void FUN_105feb580(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(long *)(param_1 + 0x30) != 0) {
    _objc_initWeak(auStack_28,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010bf6f440(uVar1);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 105feb630; end: 105feb65b;  */

void FUN_105feb630(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105feb65c; end: 105feb78f; -[SCChatEraseMessageController beginEraseFlowForConversationParticipants:isGroupConversation:message:] */

void FUN_105feb65c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf4b900(param_3,param_2,&PTR____CFConstantStringClassReference_110e12b58);
  if (((uVar1 & 1) == 0) &&
     (uVar1 = param_5,
     func_0x00010bfd90c0(param_5,param_2,&PTR____CFConstantStringClassReference_110e12b58),
     (uVar1 & 1) == 0)) {
    uVar1 = param_5;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1fdc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
    if (uVar2 == 0) {
      uVar5 = 0;
      goto LAB_105feb700;
    }
  }
  uVar5 = 1;
LAB_105feb700:
  _objc_release(param_3);
  _objc_release(param_5);
  uVar1 = param_5;
  func_0x00010c07ea80(param_5);
  lVar3 = param_1;
  func_0x00010bddd440(param_1,param_2,uVar1 & 0xffffffff);
  lVar4 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bf986a0();
  _objc_release(lVar4);
  if ((int)lVar3 == 0) {
    func_0x00010be7b2e0(param_1,param_2,param_5,uVar1 & 0xffffffff,param_4,uVar5);
  }
  else {
    func_0x00010be7c140();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105feb790; end: 105febc03; -[SCChatEraseMessageController _presentEraseMessagePromptForMessage:dialogType:isGroupConversation:botParticipant:] */

void FUN_105feb790(long param_1,undefined8 param_2,long param_3,long param_4,int param_5,
                  undefined8 param_6)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined1 auStack_1a8 [8];
  undefined *puStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  long lStack_120;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined1 auStack_e8 [8];
  long lStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = auStack_a0;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000105fed04c();
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_105febc04;
  puStack_b0 = &UNK_1108482a8;
  _objc_copyWeak(auStack_a8,auStack_a0);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126aed70;
  func_0x000105fecf14();
  _objc_retainAutoreleasedReturnValue();
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_105febcd8;
  puStack_f8 = &UNK_110906060;
  _objc_copyWeak(auStack_e8,auStack_a0);
  _objc_retain(param_3);
  uStack_d0 = (undefined1)param_5;
  lStack_f0 = param_3;
  lStack_e0 = param_4;
  uStack_d8 = param_6;
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x000105fed034();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126aed70;
  puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_138 = 0xc2000000;
  pcStack_130 = FUN_105febde8;
  puStack_128 = &UNK_110849410;
  _objc_copyWeak(auStack_118,auStack_a0);
  _objc_retain(param_3);
  lStack_120 = param_3;
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar4;
  if (param_4 == 0) {
    if (param_5 == 0) {
      func_0x000105fecfd4();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000105fecfbc();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar12 = puVar11;
    func_0x000105fecfec();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_4 == 1) {
    if (param_5 == 0) {
      func_0x000105fecf44();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000105fecf5c();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar12 = puVar11;
    func_0x000105fecf2c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar11 = (undefined *)0x0;
    puVar12 = (undefined *)0x0;
  }
  puVar5 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar4;
  puStack_90 = puVar3;
  puStack_88 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  puVar13 = (undefined8 *)(param_1 + 0x30);
  uVar10 = *puVar13;
  *puVar13 = puVar5;
  _objc_release(uVar10);
  _objc_release(puVar6);
  func_0x00010c18b5e0(*puVar13);
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  uStack_158 = 0x105febedc;
  puStack_150 = &UNK_1108434b0;
  puVar9 = auStack_a0;
  _objc_copyWeak(auStack_148,puVar9);
  ppuVar7 = &puStack_168;
  _objc_retainBlock();
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  *(undefined ***)(param_1 + 0x38) = ppuVar7;
  _objc_release(uVar10);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x20));
  _objc_destroyWeak(auStack_148);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar4);
  _objc_release(lStack_120);
  _objc_destroyWeak(auStack_118);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(lStack_f0);
  _objc_destroyWeak(auStack_e8);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_118);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_a0);
    lVar8 = param_3;
    __Unwind_Resume(param_3);
    pcStack_178 = FUN_105febc04;
    puStack_1a0 = puVar3;
    lStack_198 = param_1;
    puStack_190 = puVar2;
    lStack_188 = param_3;
    puStack_180 = &stack0xfffffffffffffff0;
    _objc_retain(puVar9);
    _objc_copyWeak(auStack_1a8,lVar8 + 0x20);
    func_0x00010bf84b00(puVar9);
    _objc_destroyWeak(auStack_1a8);
    _objc_release(puVar9);
    return;
  }
  return;
}



/* Entry: 105febc04; end: 105febcab;  */

void FUN_105febc04(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf84b00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105febcac; end: 105febcd7;  */

void FUN_105febcac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105febcd8; end: 105febda7;  */

void FUN_105febcd8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_50,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_38 = *(undefined1 *)(param_1 + 0x40);
  uStack_40 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_2);
  return;
}



/* Entry: 105febda8; end: 105febde7;  */

void FUN_105febda8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7c140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105febde8; end: 105febeaf;  */

void FUN_105febde8(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  func_0x00010bf84b00(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0ad80();
  _objc_release(param_1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105febeb0; end: 105febf07;  */

void FUN_105febeb0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105febf08; end: 105fec26f; -[SCChatEraseMessageController _presentLearnMorePromptForMessage:dialogType:isGroupConversation:botParticipant:isPresentedFirst:] */

void FUN_105febf08(long param_1,undefined8 param_2,long param_3,ulong param_4,undefined1 param_5,
                  long param_6,int param_7)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [8];
  ulong uStack_a8;
  long lStack_a0;
  undefined1 uStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_initWeak(auStack_90,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_105fec270;
  puStack_c0 = &UNK_1108ad600;
  _objc_copyWeak(auStack_b0,auStack_90);
  _objc_retain(param_3);
  ppuVar2 = &puStack_d8;
  lStack_b8 = param_3;
  uStack_a8 = param_4;
  lStack_a0 = param_6;
  uStack_98 = param_5;
  _objc_retainBlock();
  puVar3 = PTR_PTR_1126aed70;
  ppuVar9 = ppuVar2;
  func_0x000105fed01c();
  _objc_retainAutoreleasedReturnValue();
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_105fec2ac;
  puStack_e8 = &UNK_11084e500;
  _objc_retain(ppuVar2);
  ppuStack_e0 = ppuVar2;
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_4 < 2) {
    func_0x000105fecf8c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar8 = ppuVar9;
    if (param_6 == 1) {
      func_0x000105fecfa4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar9);
      _objc_release(ppuVar8);
      ppuVar9 = ppuVar8;
      ppuVar8 = ppuVar4;
    }
  }
  else {
    ppuVar8 = (undefined **)0x0;
  }
  if (param_4 == 1) {
    func_0x000105fecf74();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_4 == 0) {
    func_0x000105fed004();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar9 = (undefined **)0x0;
  }
  puVar5 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar5;
  _objc_release(uVar7);
  _objc_release(puVar6);
  ppuVar4 = ppuVar2;
  if (param_7 != 0) {
    puStack_128 = puVar1;
    uStack_120 = 0xc2000000;
    pcStack_118 = FUN_105fec2bc;
    puStack_110 = &UNK_1108434b0;
    puVar6 = auStack_108;
    _objc_copyWeak(puVar6,auStack_90);
    ppuVar4 = &puStack_128;
  }
  _objc_retainBlock();
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  *(undefined ***)(param_1 + 0x38) = ppuVar4;
  _objc_release(uVar7);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x30));
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x20));
  if (param_7 != 0) {
    _objc_destroyWeak(puVar6);
  }
  _objc_release(ppuVar9);
  _objc_release(ppuVar8);
  _objc_release(puVar3);
  _objc_release(ppuStack_e0);
  _objc_release(ppuVar2);
  _objc_release(lStack_b8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_90);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_90);
    __Unwind_Resume();
    param_3 = param_3 + 0x28;
    _objc_loadWeakRetained(param_3);
    func_0x00010be7b2e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 105fec270; end: 105fec2ab;  */

void FUN_105fec270(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7b2e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fec2ac; end: 105fec2bb;  */

void FUN_105fec2ac(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105fec2bc; end: 105fec2e7;  */

void FUN_105fec2bc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


