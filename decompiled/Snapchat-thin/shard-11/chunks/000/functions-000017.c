/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108051d50; end: 108051d57; -[SCCustomStoriesOnboardingManager _resetCustomStoryIntroPromptAccepted] */

void FUN_108051d50(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c190350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setDisplayedCustomStorySendToInt_112641af0,0)
  ;
  return;
}



/* Entry: 108051d58; end: 108051d5f; -[SCCustomStoriesOnboardingManager _resetCommunityStoryIntroPromptAccepted] */

void FUN_108051d58(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1902b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setDisplayedCommunityStorySendTo_112641ac8,0)
  ;
  return;
}



/* Entry: 108051d60; end: 108051de3; -[SCCustomStoriesOnboardingManager .cxx_destruct] */

void FUN_108051d60(long param_1)

{
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



/* Entry: 108051de4; end: 108051f5f; -[SCCustomStoriesOnboardingPresenter initWithCurrentUserId:onboardingManager:snapchattersDataFetcher:blockedSnapchattersFetcher:imageDownloader:storiesBlizzardLogger:circumstanceEngine:] */

undefined1 *
FUN_108051de4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
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
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126fc330;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108051f60; end: 10805215b; -[SCCustomStoriesOnboardingPresenter _presentCustomStoryFirstTimePostingAlertWithCustomStory:hasBlockedFriends:onDetails:onCancel:] */

void FUN_108051f60(long param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [8];
  byte bStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar4 = param_3;
  func_0x00010bf5a820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf5bbc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar2 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  if ((param_4 & 1) == 0) {
    func_0x00010bf86940();
  }
  else {
    func_0x00010bf86960();
  }
  _objc_release(uVar2);
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010c0720c0();
  if (((uVar3 & 1) == 0) && ((uVar2 & 1) == 0)) {
    _objc_initWeak(auStack_58,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_68,auStack_58);
    _objc_retain(param_3);
    bStack_60 = param_4;
    _objc_retain(param_5);
    _objc_retain(param_6);
    func_0x00010c2448c0(uVar4);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar4);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10805215c; end: 108052203;  */

void FUN_10805215c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = param_2;
    func_0x00010c294420(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    lVar2 = lVar1;
  }
  _objc_release(lVar1);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb92a0();
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108052204; end: 1080526cb; -[SCCustomStoriesOnboardingPresenter _showFirstTimePostingCustomStoryAlertWithCreatorDisplayName:customStory:hasBlockedFriends:onDetails:onCancel:] */

void FUN_108052204(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5
                  ,undefined8 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_a0,param_1);
  puVar2 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2b758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2b758,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1080526cc;
  puStack_b8 = &UNK_1108d5570;
  _objc_copyWeak(auStack_b0,auStack_a0);
  uStack_a8 = (undefined1)param_5;
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2b798;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2b798,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_100 = puVar4;
  uStack_f8 = 0xc2000000;
  uStack_f0 = 0x10805277c;
  puStack_e8 = &UNK_110853c30;
  _objc_copyWeak(auStack_d8,auStack_a0);
  _objc_retain(param_6);
  uStack_e0 = param_6;
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_108,auStack_a0);
  _objc_retain(param_7);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_5 == 0) {
    if (param_3 == 0) {
      func_0x000108f57c4c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e2b7f8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2b7f8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar1);
      ppuVar1 = ppuVar5;
    }
  }
  else if (param_3 == 0) {
    func_0x000108f57c64();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e2b7d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2b7d8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    ppuVar1 = ppuVar5;
  }
  puVar6 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  ppuVar5 = &PTR____CFConstantStringClassReference_110e2b818;
  uVar10 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2b818,0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar2;
  puStack_90 = puVar3;
  puStack_88 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar6);
  _objc_release(puVar7);
  _objc_release(ppuVar5);
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(ppuVar1);
  _objc_release(puVar4);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_108);
  _objc_release(puVar3);
  _objc_release(uStack_e0);
  _objc_destroyWeak(auStack_d8);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a0);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_108);
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_a0);
    __Unwind_Resume();
    _objc_retain(uVar10);
    lVar8 = param_3 + 0x20;
    _objc_loadWeakRetained();
    if (lVar8 != 0) {
      if (*(char *)(param_3 + 0x28) == '\x01') {
        uVar9 = *(undefined8 *)(lVar8 + 0x10);
        func_0x00010c269d40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c190360();
        _objc_release(uVar9);
      }
      uVar9 = *(undefined8 *)(lVar8 + 0x10);
      func_0x00010c269d40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c190340();
      _objc_release(uVar9);
      func_0x00010be024c0(lVar8);
    }
    _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar10);
    return;
  }
  return;
}



/* Entry: 1080526cc; end: 108052833;  */

void FUN_1080526cc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x28) == '\x01') {
      uVar2 = *(undefined8 *)(lVar1 + 0x10);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c190360();
      _objc_release(uVar2);
    }
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c190340();
    _objc_release(uVar2);
    func_0x00010be024c0(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108052834; end: 108052c17; -[SCCustomStoriesOnboardingPresenter _showFirstTimePostingPrivateStoryAlertWithOnDetails:onCancel:] */

void FUN_108052834(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [8];
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
  _objc_retain(param_4);
  _objc_initWeak(auStack_a0,param_1);
  puVar2 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2b758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2b758,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_108052c18;
  puStack_b0 = &UNK_1108482a8;
  _objc_copyWeak(auStack_a8,auStack_a0);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2b798;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2b798,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_f8 = puVar4;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x108052c98;
  puStack_e0 = &UNK_110853c30;
  _objc_copyWeak(auStack_d0,auStack_a0);
  _objc_retain(param_3);
  lStack_d8 = param_3;
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_100,auStack_a0);
  _objc_retain(param_4);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar5 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc75f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc75f8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110e2b7b8;
  uVar9 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2b7b8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar2;
  puStack_90 = puVar3;
  puStack_88 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar5);
  _objc_release(puVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar1);
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_100);
  _objc_release(puVar3);
  _objc_release(lStack_d8);
  _objc_destroyWeak(auStack_d0);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  __Unwind_Resume();
  _objc_retain(uVar9);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    uVar8 = *(undefined8 *)(param_3 + 0x10);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c190640();
    _objc_release(uVar8);
    func_0x00010be024c0(param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 108052c18; end: 108052d4f;  */

void FUN_108052c18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c190640();
    _objc_release(uVar1);
    func_0x00010be024c0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108052d50; end: 108052d5b; -[SCCustomStoriesOnboardingPresenter _dismissAlertDialog:completion:] */

void FUN_108052d50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_dismissViewControllerAnimated_co_1125bec68,1)
  ;
  return;
}



/* Entry: 108052d5c; end: 108052f37; -[SCCustomStoriesOnboardingPresenter showFirstTimePostingForCustomStoryIfNecessary:onDetails:onCancel:] */

void FUN_108052d5c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c27dd80();
  if (uVar1 < 0xb) {
    if ((1L << (uVar1 & 0x3f) & 0x4e4U) == 0) {
      if (uVar1 == 1) {
        uVar4 = *(ulong *)(param_1 + 0x10);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar4;
        func_0x00010bf86b20();
        _objc_release(uVar4);
        if ((uVar1 & 1) == 0) {
          func_0x00010beb92c0(param_1);
        }
      }
    }
    else {
      _objc_initWeak(auStack_48,param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = 0x15;
      func_0x0001000819a8(0x15,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_3);
      _objc_retain(param_4);
      _objc_retain(param_5);
      func_0x00010bf1d7c0(uVar2);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108052f38; end: 108052faf;  */

void FUN_108052f38(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf529e0(param_2);
  _objc_release(param_2);
  func_0x00010be7adc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108052fb0; end: 108053163; -[SCCustomStoriesOnboardingPresenter showTrustAndSafetyPromptForSharedStoryPostingIfNecessaryWithOnAccept:onCancel:onDiscarded:webBrowsingScopeExposer:browserDelegate:] */

void FUN_108052fb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar2 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22c3c0();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    _objc_initWeak(auStack_68,param_1);
    puVar1 = PTR_PTR_1126c24a8;
    _objc_retain(param_3);
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c10fd00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2393a0(puVar1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_70);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_68);
  }
  else {
    (**(code **)(param_5 + 0x10))(param_5);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108053164; end: 1080531c3;  */

void FUN_108053164(long param_1)

{
  undefined8 uVar1;
  
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ff280();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1080531c4; end: 108053297; -[SCCustomStoriesOnboardingPresenter showBlockedUsersPromptForSharedStoryPostingWithBlockedSnapchatters:publicationId:onAccept:onCancel:] */

void FUN_1080531c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c24a8;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010c10fd00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c239ec0(puVar1,param_2,param_3,param_4,param_5,param_6,lVar2,0,
                      *(undefined8 *)(param_1 + 0x28));
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108053298; end: 108053473; -[SCCustomStoriesOnboardingPresenter showFirstTimePostingForCommunityStoryIfNecessary:onAccept:onDetails:onCancel:webBrowsingScopeExposer:browserDelegate:] */

void FUN_108053298(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x30);
  func_0x000108f42124();
  if (iVar2 != 0) {
    uVar3 = *(ulong *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf86920();
    _objc_release(uVar3);
    if ((uVar4 & 1) == 0) {
      _objc_initWeak(auStack_68,param_1);
      puVar1 = PTR_PTR_1126c24a8;
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(param_4);
      func_0x00010c10fd00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c239380(puVar1);
      _objc_release(param_1);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
      goto LAB_108053408;
    }
  }
  func_0x00010c237860(param_1);
LAB_108053408:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108053474; end: 1080534db;  */

void FUN_108053474(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1902a0();
    _objc_release(uVar2);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1080534dc; end: 1080534f3; -[SCCustomStoriesOnboardingPresenter presentingViewController] */

void FUN_1080534dc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080534f4; end: 1080534ff; -[SCCustomStoriesOnboardingPresenter setPresentingViewController:] */

void FUN_1080534f4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 108053500; end: 108053573; -[SCCustomStoriesOnboardingPresenter .cxx_destruct] */

void FUN_108053500(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
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



/* Entry: 108053574; end: 108053613; -[SCFriendOfGroupStoryPostableConsentObserver reconcileFriendOfGroupPostableConsentForPublicationId:] */

void FUN_108053574(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_108053614;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_60);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108053614; end: 10805361f;  */

void FUN_108053614(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0f470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fetchAndApplyConsentForPublicat_1125616b8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108053620; end: 10805371f;  */

void FUN_108053620(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      _objc_retain(param_2);
      _objc_retain(lVar2);
      func_0x00010c0f7fc0(uVar3);
      _objc_release(lVar2);
      _objc_release(param_2);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 108053720; end: 10805372f;  */

void FUN_108053720(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be27930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleConversationUpdateEvent_p_1125677e8,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 108053730; end: 10805381b;  */

void FUN_108053730(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      _objc_retain(lVar2);
      func_0x00010c0f7fc0(uVar3);
      _objc_release(lVar2);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 10805381c; end: 108053827;  */

void FUN_10805381c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0f470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fetchAndApplyConsentForPublicat_1125616b8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108053828; end: 1080538f7;  */

void FUN_108053828(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      _objc_retain(lVar1);
      func_0x00010c0f7fc0(uVar3);
      _objc_release(lVar1);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 1080538f8; end: 108053923;  */

void FUN_1080538f8(long param_1,undefined8 param_2)

{
  func_0x00010c12d3e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48),param_2,
                      *(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010be0f470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fetchAndApplyConsentForPublicat_1125616b8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108053924; end: 1080539c3; -[SCFriendOfGroupStoryPostableConsentObserver missingMetadataFetchDidFinishForPublicationId:] */

void FUN_108053924(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1080539c4;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_60);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1080539c4; end: 1080539cf;  */

void FUN_1080539c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40),PTR_s_removeObject__112628ef8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1080539d0; end: 108053b47; -[SCFriendOfGroupStoryPostableConsentObserver _handleConversationUpdateEvent:publicationId:] */

void FUN_1080539d0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  
  _objc_retain(param_4);
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 8);
  FUN_1084dc184(lVar3,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar4 == 0) {
    uVar7 = 0;
  }
  else {
    lVar3 = lVar4;
    func_0x00010c27dd80();
    uVar7 = (uint)(lVar3 == 10);
  }
  if (param_3 == 0) {
    func_0x00010be0f460(param_1);
  }
  else {
    lVar3 = param_3;
    FUN_10805f774(param_3,*(undefined8 *)(param_1 + 0x18));
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c0dff20(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    FUN_10805f864(uVar7,uVar5,lVar3);
    if (uVar2 != 0) {
      lVar6 = lVar3;
      func_0x00010c06fe60();
      if ((int)lVar6 == 0) {
        bVar1 = false;
      }
      else {
        lVar6 = lVar3;
        func_0x00010bf490a0();
        bVar1 = lVar6 == 1;
      }
      if (uVar7 == 0 && !bVar1) {
        func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x48));
      }
      else {
        func_0x00010c1d0560();
      }
      func_0x00010bdcde40(param_1);
    }
    _objc_release(uVar5);
    _objc_release(lVar3);
  }
  _objc_release(lVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108053b48; end: 108053c5f; -[SCFriendOfGroupStoryPostableConsentObserver _fetchAndApplyConsentForPublicationIdOnPerformer:] */

void FUN_108053b48(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = param_3;
      func_0x00010bf51e00();
      _objc_initWeak(auStack_38,param_1);
      _objc_copyWeak(auStack_40,auStack_38);
      _objc_retain(lVar2);
      func_0x00010bfa5f80(lVar1);
      _objc_release(lVar2);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108053c60; end: 108053d23;  */

void FUN_108053c60(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    _objc_retain(param_2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(param_2);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 108053d24; end: 108053d33;  */

void FUN_108053d24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcde50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__applyConsentForPublicationId_co_112551130,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 108053d34; end: 108053e87; -[SCFriendOfGroupStoryPostableConsentObserver _applyConsentForPublicationId:conversation:] */

void FUN_108053d34(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 8);
  FUN_1084dc184(lVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if ((lVar2 == 0) || (lVar1 = lVar2, func_0x00010c27dd80(), lVar1 != 10)) {
    if ((param_4 != 0) &&
       (lVar1 = param_4, func_0x00010805f700(param_4,*(undefined8 *)(param_1 + 0x18)),
       (int)lVar1 != 0)) {
      func_0x00010be91520(param_1);
    }
  }
  else {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x40));
    lVar1 = param_4;
    func_0x00010805f700(param_4,*(undefined8 *)(param_1 + 0x18));
    lVar3 = lVar2;
    func_0x00010bf60900();
    if ((int)lVar1 != (int)lVar3) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      _objc_retain(param_3);
      func_0x00010c0f8500(uVar4);
      _objc_release(param_3);
    }
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108053e88; end: 108053f5f;  */

void FUN_108053e88(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  FUN_1084dc184(param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (((lVar3 != 0) && (lVar2 = lVar3, func_0x00010c27dd80(), lVar2 == 10)) &&
     (bVar1 = *(byte *)(param_1 + 0x28), lVar2 = lVar3, func_0x00010bf60900(),
     (uint)bVar1 != (uint)lVar2)) {
    puVar4 = PTR_PTR_1126d8f60;
    FUN_108509e24(PTR_PTR_1126d8f60,lVar3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      puVar4[0x14] = *(undefined1 *)(param_1 + 0x28);
    }
    func_0x00010c25ed40(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108053f60; end: 108053fcb; -[SCFriendOfGroupStoryPostableConsentObserver _requestMissingMetadataForPublicationIdIfNeeded:] */

void FUN_108053f60(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x38) != 0)) {
    uVar2 = *(ulong *)(param_1 + 0x40);
    func_0x00010bf4b900();
    if ((uVar2 & 1) == 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x40));
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108053fcc; end: 1080540f7; -[SCFriendOfGroupStoryPostableConsentObserver .cxx_destruct] */

void FUN_108053fcc(long param_1)

{
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



/* Entry: 1080540f8; end: 1080541bb; -[SCPostableCustomStoriesObserver postableCustomStoryMetadataWithCompletionQueue:completion:] */

void FUN_1080540f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bf51e00();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1080541bc;
  puStack_48 = &UNK_11084aaa8;
  uStack_40 = uVar1;
  uStack_38 = param_4;
  _objc_retain();
  _objc_retain(param_4);
  func_0x00010007380c(param_3,&puStack_60);
  _objc_release(param_3);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 1080541bc; end: 1080541cb;  */

void FUN_1080541bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001080541c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1080541cc; end: 1080541e3; -[SCPostableCustomStoriesObserver delegate] */

void FUN_1080541cc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080541e4; end: 10805423f; -[SCPostableCustomStoriesObserver .cxx_destruct] */

void FUN_1080541e4(long param_1)

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



/* Entry: 108054240; end: 108054263;  */

undefined8 FUN_108054240(int param_1)

{
  if (param_1 - 1U < 0xf) {
    return *(undefined8 *)(&UNK_10deed6b8 + (ulong)(param_1 - 1U) * 8);
  }
  return 0;
}



/* Entry: 108054264; end: 1080548db;  */

void FUN_108054264(long param_1,ulong param_2,uint param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  undefined8 uStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_438;
  undefined8 *puStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  long lStack_3b8;
  ulong uStack_2d8;
  undefined1 auStack_180 [256];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar17 = param_2;
  func_0x00010bf002e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  FUN_1084e73c8(param_1,uVar17);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar17);
  _objc_retain(param_2);
  puVar18 = auStack_180;
  uVar17 = param_2;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  do {
    if (uVar17 == 0) {
      _objc_release(param_2);
      puVar8 = puVar3;
      func_0x00010bf51e00();
      uVar17 = (ulong)param_3;
      puVar12 = puVar8;
      FUN_1084ec4a4(param_1);
      _objc_release(puVar8);
      puVar8 = puVar2;
      func_0x00010bf51e00();
      _objc_release(lVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(param_2);
      lVar13 = param_1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
        return;
      }
      ___stack_chk_fail();
      _objc_release(puVar8);
      _objc_release(lVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(param_2);
      _objc_release(param_1);
      __Unwind_Resume();
      lStack_3b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain();
      _objc_retain(puVar12);
      _objc_retain(uVar17);
      _objc_retain(puVar18);
      puVar2 = puVar12;
      func_0x00010bfceb20();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x000108f579f0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      lVar4 = lVar13;
      FUN_1084dc184(lVar13,puVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      puVar2 = puVar12;
      func_0x00010bf5a680(puVar12);
      puVar8 = PTR_PTR_1126d8f98;
      _objc_alloc();
      func_0x00010c006aa0((double)(long)puVar2 / 1000.0);
      uVar7 = uVar17;
      func_0x00010c1057e0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar17;
      func_0x00010c29ef80();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar7);
      _objc_retain(uVar14);
      puVar11 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
      _objc_retain(uVar7);
      uVar6 = uVar7;
      func_0x00010bf52a60();
      lVar4 = lRam0000000000000000;
      while (uVar6 != 0) {
        uVar20 = 0;
        do {
          if (lRam0000000000000000 != lVar4) {
            _objc_enumerationMutation(uVar7);
          }
          puVar15 = PTR_PTR_1126d8fc8;
          _objc_alloc(PTR_PTR_1126d8fc8);
          func_0x00010c05ac00();
          func_0x00010befa120(puVar11);
          _objc_release(puVar15);
          uVar20 = uVar20 + 1;
        } while (uVar6 != uVar20);
        uVar6 = uVar7;
        func_0x00010bf52a60();
      }
      _objc_release(uVar7);
      _objc_retain(uVar14);
      uVar6 = uVar14;
      func_0x00010bf52a60();
      lVar4 = lRam0000000000000000;
      while (uVar6 != 0) {
        uVar20 = 0;
        do {
          if (lRam0000000000000000 != lVar4) {
            _objc_enumerationMutation(uVar14);
          }
          puVar15 = PTR_PTR_1126d8fc8;
          _objc_alloc(PTR_PTR_1126d8fc8);
          func_0x00010c05ac00();
          func_0x00010befa120(puVar11);
          _objc_release(puVar15);
          uVar20 = uVar20 + 1;
        } while (uVar6 != uVar20);
        uVar6 = uVar14;
        func_0x00010bf52a60();
      }
      _objc_release(uVar14);
      puVar15 = puVar11;
      func_0x00010bf00560(puVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(uVar14);
      _objc_release(uVar7);
      _objc_release(uVar14);
      _objc_release(uVar7);
      puStack_430 = &uStack_438;
      uStack_438 = 0;
      uStack_428 = 0x2020000000;
      uStack_420 = 0;
      puStack_4b0 = &uStack_4b8;
      uStack_4b8 = 0;
      uStack_4a8 = 0x2020000000;
      uStack_4a0 = 0;
      uVar6 = uVar17;
      func_0x00010c27dea0(uVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bf5e0();
      _objc_release(uVar6);
      puVar11 = PTR_PTR_1126b47a0;
      _objc_alloc(PTR_PTR_1126b47a0);
      uVar6 = uVar17;
      func_0x00010bf85d80(uVar17);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar17;
      func_0x00010c1057e0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar17;
      func_0x00010c29ef80();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar8;
      func_0x00010bf5bbc0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0();
      func_0x00010bf11be0();
      func_0x00010bfcf560();
      func_0x00010c03bf60((double)(long)puVar2 / 1000.0,puVar11);
      _objc_release(puVar16);
      _objc_release(uVar14);
      _objc_release(uVar7);
      _objc_release(uVar6);
      puVar2 = PTR_PTR_1126d8f60;
      FUN_108509684(PTR_PTR_1126d8f60,puVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(lVar13);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar11);
      __Block_object_dispose(&uStack_4b8,8);
      __Block_object_dispose(&uStack_438,8);
      _objc_release(puVar15);
      _objc_release(puVar8);
      _objc_release(lVar5);
      _objc_release(puVar3);
      _objc_release(puVar18);
      _objc_release(uVar17);
      _objc_release(puVar12);
      lVar4 = lVar13;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3b8) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(puVar2);
      _objc_release(puVar11);
      __Block_object_dispose(&uStack_4b8,8);
      __Block_object_dispose(&uStack_438,8);
      _objc_release(puVar15);
      _objc_release(puVar8);
      _objc_release(lVar5);
      _objc_release(puVar3);
      _objc_release(puVar18);
      _objc_release(uVar17);
      _objc_release(puVar12);
      _objc_release(lVar13);
      __Unwind_Resume();
      *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 8) + 0x18) = 1;
      *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x28) + 8) + 0x18) = 1;
      return;
    }
    uStack_2d8 = 0;
    do {
      if (lRam0000000000000000 != lVar13) {
        _objc_enumerationMutation(param_2);
      }
      lVar5 = lVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 != 0) {
        uVar6 = param_2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c067fc0();
        _objc_release(uVar6);
        if (uVar7 < 0xb) {
          if ((1L << (uVar7 & 0x3f) & 0x4e4U) == 0) {
            if (uVar7 != 1) goto LAB_108054674;
            func_0x00010befa120(puVar3);
          }
          puVar8 = PTR_PTR_1126d6798;
          FUN_10850eb48(PTR_PTR_1126d6798,lVar5);
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar5;
          func_0x00010c25b340();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          lVar10 = lVar9;
          func_0x00010bf529e0();
          puVar12 = PTR____NSArray0__struct_11034ab48;
          if (lVar10 != 0) {
            puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00();
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(lVar9);
            lVar10 = lVar9;
            func_0x00010bf52a60();
            lVar1 = lRam0000000000000000;
            while (lVar10 != 0) {
              lVar21 = 0;
              do {
                if (lRam0000000000000000 != lVar1) {
                  _objc_enumerationMutation(lVar9);
                }
                uVar19 = *(undefined8 *)(lVar21 * 8);
                func_0x00010bf0e700();
                _objc_retainAutoreleasedReturnValue();
                _objc_retain(puVar11);
                _objc_retain(puVar11);
                _objc_retain(puVar11);
                _objc_retain(puVar11);
                func_0x00010c0c1340(uVar19);
                _objc_release(uVar19);
                _objc_release(puVar11);
                _objc_release(puVar11);
                _objc_release(puVar11);
                _objc_release(puVar11);
                lVar21 = lVar21 + 1;
              } while (lVar10 != lVar21);
              lVar10 = lVar9;
              func_0x00010bf52a60();
            }
            _objc_release(lVar9);
            puVar12 = puVar11;
            func_0x00010c246ca0(puVar11);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar11);
          }
          _objc_release(lVar9);
          if (puVar8 == (undefined *)0x0) {
            _objc_release(puVar12);
            _objc_release(lVar9);
            uVar19 = 0;
          }
          else {
            _objc_setProperty_nonatomic_copy();
            _objc_release(puVar12);
            _objc_release(lVar9);
            uVar19 = *(undefined8 *)(puVar8 + 0x20);
          }
          _objc_retain(uVar19);
          func_0x00010c1d0640(puVar2);
          _objc_release(uVar19);
          func_0x00010c25ed40(param_1);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar8);
        }
      }
LAB_108054674:
      _objc_release(lVar5);
      uStack_2d8 = uStack_2d8 + 1;
    } while (uStack_2d8 != uVar17);
    puVar18 = auStack_180;
    uVar17 = param_2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1080548dc; end: 108055047;  */

void FUN_1080548dc(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_2;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000108f579f0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  FUN_1084dc184(param_1,lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar4 = param_2;
  func_0x00010bf5a680(param_2);
  puVar5 = PTR_PTR_1126d8f98;
  _objc_alloc();
  func_0x00010c006aa0((double)lVar4 / 1000.0);
  lVar6 = param_3;
  func_0x00010c1057e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_3;
  func_0x00010c29ef80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar6);
  _objc_retain(lVar7);
  puVar8 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  _objc_retain(lVar6);
  lVar1 = lVar6;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(lVar6);
      }
      puVar9 = PTR_PTR_1126d8fc8;
      _objc_alloc(PTR_PTR_1126d8fc8);
      func_0x00010c05ac00();
      func_0x00010befa120(puVar8);
      _objc_release(puVar9);
      lVar12 = lVar12 + 1;
    } while (lVar1 != lVar12);
    lVar1 = lVar6;
    func_0x00010bf52a60();
  }
  _objc_release(lVar6);
  _objc_retain(lVar7);
  lVar1 = lVar7;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(lVar7);
      }
      puVar9 = PTR_PTR_1126d8fc8;
      _objc_alloc(PTR_PTR_1126d8fc8);
      func_0x00010c05ac00();
      func_0x00010befa120(puVar8);
      _objc_release(puVar9);
      lVar12 = lVar12 + 1;
    } while (lVar1 != lVar12);
    lVar1 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  puVar9 = puVar8;
  func_0x00010bf00560(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar7);
  _objc_release(lVar6);
  puStack_100 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x2020000000;
  uStack_f0 = 0;
  puStack_180 = &uStack_188;
  uStack_188 = 0;
  uStack_178 = 0x2020000000;
  uStack_170 = 0;
  lVar1 = param_3;
  func_0x00010c27dea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf5e0();
  _objc_release(lVar1);
  puVar8 = PTR_PTR_1126b47a0;
  _objc_alloc(PTR_PTR_1126b47a0);
  lVar1 = param_3;
  func_0x00010bf85d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_3;
  func_0x00010c1057e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010c29ef80();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar5;
  func_0x00010bf5bbc0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  func_0x00010bf11be0();
  func_0x00010bfcf560();
  func_0x00010c03bf60((double)lVar4 / 1000.0,puVar8);
  _objc_release(puVar11);
  _objc_release(lVar6);
  _objc_release(lVar10);
  _objc_release(lVar1);
  puVar11 = PTR_PTR_1126d8f60;
  FUN_108509684(PTR_PTR_1126d8f60,puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar8);
  __Block_object_dispose(&uStack_188,8);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(puVar9);
  _objc_release(puVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  lVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  _objc_release(puVar8);
  __Block_object_dispose(&uStack_188,8);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(puVar9);
  _objc_release(puVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  *(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x20) + 8) + 0x18) = 1;
  *(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x28) + 8) + 0x18) = 1;
  return;
}



/* Entry: 108055048; end: 1080550af;  */

void FUN_108055048(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1080550b0; end: 108055b2b;  */

undefined8
FUN_1080550b0(double param_1,double param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
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
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  long lStack_148;
  
  lVar25 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  FUN_1084de31c(param_3,param_5);
  FUN_1084de8ec(param_3,param_5);
  puVar3 = PTR_PTR_1126d8fa0;
  _objc_alloc();
  func_0x00010c015e40(param_1 + param_2);
  puVar4 = puVar3;
  FUN_1085248e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  lVar5 = param_4;
  func_0x00010bf622c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar6 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar6 != 0) {
    lStack_148 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      lVar26 = *(long *)(lStack_148 * 8);
      func_0x00010bf626e0();
      FUN_108055b2c();
      puVar4 = PTR_PTR_1126d8fa8;
      _objc_alloc();
      lVar7 = lVar26;
      func_0x00010bf43080();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf1f020();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c0c54a0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar26;
      func_0x00010bf43080();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010bf1f020();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010c0c5480();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar26;
      func_0x00010bf43080(lVar26);
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      func_0x00010bf1f020();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar14;
      func_0x00010c120140();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar26;
      func_0x00010bf43080(lVar26);
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lVar16;
      func_0x00010bf1f020();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar17;
      func_0x00010c279e80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c029860();
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
      puVar19 = PTR_PTR_1126d8fa8;
      _objc_alloc();
      lVar7 = lVar26;
      func_0x00010bf43080();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf1f040();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c0c54a0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar26;
      func_0x00010bf43080();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010bf1f040();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010c0c5480();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar26;
      func_0x00010bf43080(lVar26);
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      func_0x00010bf1f040();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar14;
      func_0x00010c120140();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar26;
      func_0x00010bf43080(lVar26);
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lVar16;
      func_0x00010bf1f040();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar17;
      func_0x00010c279e80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c029860();
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
      puVar20 = PTR_PTR_1126d8fb0;
      _objc_alloc();
      lVar7 = lVar26;
      func_0x00010bf43080(lVar26);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf1b400();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bf8aa00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00e720();
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      lVar7 = lVar26;
      func_0x00010bf43080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ecf20();
      _objc_release(lVar7);
      puVar21 = PTR_PTR_1126d8fb8;
      _objc_alloc(PTR_PTR_1126d8fb8);
      lVar7 = lVar26;
      func_0x00010bf43080(lVar26);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf6e6e0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar26;
      func_0x00010bf43080(lVar26);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c22d240();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar26;
      func_0x00010bf43080(lVar26);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010c0ecf00();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar12;
      func_0x000108f579f0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04d660(puVar21);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      puVar22 = PTR_PTR_1126d8fc0;
      _objc_alloc(PTR_PTR_1126d8fc0);
      lVar7 = lVar26;
      func_0x00010bfceb20(lVar26);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x000108f579f0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar26;
      func_0x00010bf85d80(lVar26);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5a680(lVar26);
      func_0x00010c015e60((double)lVar26,puVar22);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      puVar23 = puVar22;
      FUN_1085233e4(puVar22,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar23);
      _objc_release(puVar22);
      _objc_release(puVar21);
      _objc_release(puVar20);
      _objc_release(puVar19);
      _objc_release(puVar4);
      lStack_148 = lStack_148 + 1;
    } while (lVar6 != lStack_148);
    lVar6 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  _objc_release(lVar5);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  uVar24 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar25) {
    ___stack_chk_fail();
    iVar2 = (int)uVar24;
    _objc_release(lVar5);
    _objc_release(lVar5);
    _objc_release(puVar3);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    __Unwind_Resume();
    if (7 < iVar2 - 1U) {
      return 0;
    }
    return *(undefined8 *)(&UNK_10deed730 + (ulong)(iVar2 - 1U) * 8);
  }
  return uVar24;
}



/* Entry: 108055b2c; end: 108055b67;  */

undefined8 FUN_108055b2c(int param_1)

{
  if (param_1 - 1U < 8) {
    return *(undefined8 *)(&UNK_10deed730 + (ulong)(param_1 - 1U) * 8);
  }
  return 0;
}



/* Entry: 108055b68; end: 108055ff3;  */

void FUN_108055b68(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  byte bVar17;
  long lVar18;
  long lVar19;
  byte bVar20;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 uVar25;
  ulong uVar21;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar21 = param_1;
  func_0x00010c0f0700();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar21;
  func_0x000108f579f0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar21);
  uVar21 = param_1;
  func_0x00010bf5a680(param_1);
  puVar2 = PTR_PTR_1126d8f98;
  _objc_alloc();
  func_0x00010c006aa0((double)(long)uVar21 / 1000.0);
  uVar22 = uVar1;
  func_0x00010c0720c0();
  bVar17 = (byte)uVar22;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar21 = param_1;
  func_0x00010bf15860();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar21;
  func_0x000100504554();
  _objc_release(uVar21);
  uVar8 = param_1;
  func_0x00010c0c7940();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf52a60();
  lVar19 = lRam0000000000000000;
  uVar21 = 0;
  bVar20 = 0;
  while (uVar9 != 0) {
    uVar23 = 0;
    do {
      if (lRam0000000000000000 != lVar19) {
        _objc_enumerationMutation(uVar8);
      }
      uVar24 = *(ulong *)(uVar23 * 8);
      uVar10 = uVar24;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x000108f579f0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      uVar25 = param_2;
      func_0x00010c0720c0();
      if ((int)uVar25 != 0) {
        uVar21 = uVar24;
        func_0x00010bf11c80();
      }
      bVar20 = (byte)uVar21;
      puVar12 = PTR_PTR_1126d8fc8;
      _objc_alloc();
      func_0x00010c05ac00();
      func_0x00010befa120(puVar3);
      _objc_release(puVar12);
      func_0x00010befa120(puVar5);
      uVar10 = uVar24;
      func_0x00010c0c79e0();
      if ((((int)uVar10 == 2) || (uVar10 = uVar24, func_0x00010c0c79e0(), (int)uVar10 == 3)) ||
         (uVar10 = uVar24, func_0x00010c0c79e0(), (int)uVar10 == 4)) {
        func_0x00010befa120(puVar4);
        func_0x00010c0c79e0();
        if ((int)uVar24 == 4) {
          func_0x00010befa120(puVar6);
        }
        if ((uVar22 & 1) == 0) {
          uVar22 = uVar11;
          func_0x00010c0720c0();
        }
        else {
          uVar22 = 1;
        }
      }
      bVar17 = (byte)uVar22;
      _objc_release(uVar11);
      uVar23 = uVar23 + 1;
    } while (uVar9 != uVar23);
    uVar9 = uVar8;
    func_0x00010bf52a60();
  }
  _objc_release(uVar8);
  bVar17 = bVar17 & 1;
  puVar12 = puVar3;
  puVar13 = puVar4;
  puVar14 = puVar5;
  puVar15 = puVar6;
  uVar22 = uVar7;
  puVar16 = puVar2;
  (**(code **)(param_3 + 0x10))();
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  uVar21 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  _objc_retain(puVar12);
  _objc_retain(puVar13);
  _objc_retain(puVar14);
  _objc_retain(puVar15);
  _objc_retain(uVar22);
  _objc_retain(puVar16);
  lVar19 = *(long *)(*(long *)(uVar21 + 0x20) + 8);
  uVar25 = *(undefined8 *)(lVar19 + 0x28);
  *(undefined **)(lVar19 + 0x28) = puVar12;
  _objc_retain(puVar12);
  _objc_release(uVar25);
  lVar19 = *(long *)(*(long *)(uVar21 + 0x28) + 8);
  uVar25 = *(undefined8 *)(lVar19 + 0x28);
  *(undefined **)(lVar19 + 0x28) = puVar13;
  _objc_retain(puVar13);
  _objc_release(uVar25);
  lVar19 = *(long *)(*(long *)(uVar21 + 0x30) + 8);
  uVar25 = *(undefined8 *)(lVar19 + 0x28);
  *(undefined **)(lVar19 + 0x28) = puVar14;
  _objc_retain(puVar14);
  _objc_release(uVar25);
  lVar19 = *(long *)(*(long *)(uVar21 + 0x38) + 8);
  uVar25 = *(undefined8 *)(lVar19 + 0x28);
  *(undefined **)(lVar19 + 0x28) = puVar15;
  _objc_retain(puVar15);
  _objc_release(uVar25);
  lVar19 = *(long *)(*(long *)(uVar21 + 0x40) + 8);
  uVar25 = *(undefined8 *)(lVar19 + 0x28);
  *(ulong *)(lVar19 + 0x28) = uVar22;
  _objc_retain(uVar22);
  _objc_release(uVar25);
  lVar19 = *(long *)(*(long *)(uVar21 + 0x48) + 8);
  uVar25 = *(undefined8 *)(lVar19 + 0x28);
  *(undefined **)(lVar19 + 0x28) = puVar16;
  _objc_retain(puVar16);
  _objc_release(uVar25);
  *(byte *)(*(long *)(*(long *)(uVar21 + 0x50) + 8) + 0x18) = bVar17;
  *(byte *)(*(long *)(*(long *)(uVar21 + 0x58) + 8) + 0x18) = bVar20 & 1;
  _objc_release(puVar16);
  _objc_release(uVar22);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar12);
  return;
}



/* Entry: 108055ff4; end: 108056183;  */

void FUN_108055ff4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined1 param_9)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x18) = param_8;
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x18) = param_9;
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108056184; end: 1080562cf;  */

void FUN_108056184(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),8);
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  return;
}



/* Entry: 1080562d0; end: 108056677;  */

void FUN_1080562d0(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_2 == 0) || (lVar1 = param_2, func_0x00010bf529e0(), lVar1 == 0)) {
    (**(code **)(param_4 + 0x10))(param_4,PTR____NSDictionary0__struct_11034ab58);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  lVar1 = param_2;
  func_0x00010bf002e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_retain(puVar4);
  puVar5 = puVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar4);
      }
      puVar6 = puVar3;
      func_0x00010bf4b900();
      if ((int)puVar6 != 0) {
        lVar7 = param_2;
        func_0x00010c0e00e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(lVar7);
      }
      puVar10 = puVar10 + 1;
    } while (puVar5 != puVar10);
    puVar5 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_3);
      }
      func_0x00010c12d3e0(puVar2);
      lVar11 = lVar11 + 1;
    } while (lVar1 != lVar11);
    lVar1 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar5 = puVar2;
  func_0x00010bf51e00();
  puVar10 = puVar5;
  (**(code **)(param_4 + 0x10))();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  lVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  _objc_retain(puVar10);
  puVar5 = puVar10;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(*(long *)(lVar1 + 0x20) + 8);
  uVar9 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined **)(lVar8 + 0x28) = puVar5;
  _objc_release(uVar9);
  puVar5 = puVar10;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(*(long *)(lVar1 + 0x28) + 8);
  uVar9 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined **)(lVar8 + 0x28) = puVar5;
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
}



/* Entry: 108056678; end: 108056707;  */

void FUN_108056678(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_2;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108056708; end: 1080567af;  */

undefined8 FUN_108056708(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bf626e0();
  if ((int)uVar2 == 1) {
    uVar2 = param_1;
    func_0x00010c1143c0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c261480();
    _objc_release(uVar2);
    uVar2 = 3;
    if ((int)uVar1 != 1) {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1080567b0; end: 10805732b;  */

void FUN_1080567b0(undefined *param_1,undefined8 param_2)

{
  int iVar1;
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
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  
  _objc_retain();
  puVar2 = param_1;
  func_0x00010c116e40();
  if ((int)puVar2 == 0x11) {
    puVar2 = PTR_PTR_1126d8fa8;
    _objc_alloc();
    puVar13 = param_1;
    func_0x00010bf43080();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar13;
    func_0x00010bf1f020();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar15;
    func_0x00010c0c54a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010bf43080();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf1f020();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0c5480();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_1;
    func_0x00010bf43080(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf1f020();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c120140();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_1;
    func_0x00010bf43080(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf1f020();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c279e80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c029860(puVar2,param_2,puVar14,puVar6,puVar9,puVar12);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar14);
    _objc_release(puVar15);
    _objc_release(puVar13);
    puVar13 = PTR_PTR_1126d8fa8;
    _objc_alloc();
    puVar15 = param_1;
    func_0x00010bf43080();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar15;
    func_0x00010bf1f040();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar14;
    func_0x00010c0c54a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010bf43080();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf1f040();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c0c5480();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_1;
    func_0x00010bf43080(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf1f040();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c120140();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_1;
    func_0x00010bf43080(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bf1f040();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar12;
    func_0x00010c279e80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c029860(puVar13,param_2,puVar4,puVar7,puVar10,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar14);
    _objc_release(puVar15);
    puVar14 = PTR_PTR_1126d8fb0;
    _objc_alloc();
    puVar15 = param_1;
    func_0x00010bf43080(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar15;
    func_0x00010bf1b400();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf8aa00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00e720(puVar14,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar15);
    puVar15 = param_1;
    func_0x00010bf43080();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar15;
    func_0x00010c0ecf20();
    iVar1 = (int)puVar4;
    if ((iVar1 == -0x4524111) || (iVar1 == 0)) {
      uVar16 = 0;
    }
    else if (iVar1 == 2) {
      uVar16 = 2;
    }
    else {
      uVar16 = 1;
    }
    _objc_release(puVar15);
    puVar4 = PTR_PTR_1126d8fb8;
    _objc_alloc(PTR_PTR_1126d8fb8);
    puVar15 = param_1;
    func_0x00010bf43080(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar15;
    func_0x00010bf6e6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_1;
    func_0x00010bf43080(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c22d240();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_1;
    func_0x00010bf43080(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c0ecf00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x000108f579f0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04d660(puVar4,param_2,puVar5,puVar7,puVar2,puVar13,puVar10,puVar14,uVar16);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar15);
    puVar15 = PTR_PTR_1126d8fd0;
    func_0x00010bf42f60(PTR_PTR_1126d8fd0,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar14);
LAB_108056f70:
    _objc_release(puVar13);
  }
  else {
    puVar2 = param_1;
    func_0x00010c116e40();
    if ((int)puVar2 == 0xf) {
      puVar2 = PTR_PTR_1126d8fa8;
      _objc_alloc();
      puVar13 = param_1;
      func_0x00010c22c1e0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar13;
      func_0x00010bf1f020();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar15;
      func_0x00010c0c54a0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      func_0x00010c22c1e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf1f020();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c0c5480();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_1;
      func_0x00010c22c1e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf1f020();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c120140();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = param_1;
      func_0x00010c22c1e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010bf1f020();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c279e80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c029860(puVar2,param_2,puVar14,puVar6,puVar9,puVar12);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar14);
      _objc_release(puVar15);
      _objc_release(puVar13);
      puVar13 = PTR_PTR_1126d8fd8;
      _objc_alloc(PTR_PTR_1126d8fd8);
      puVar15 = param_1;
      func_0x00010c22c1e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar15;
      func_0x00010bf6e6e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04d640(puVar13,param_2,puVar14,puVar2);
      _objc_release(puVar14);
      _objc_release(puVar15);
      puVar15 = PTR_PTR_1126d8fd0;
      func_0x00010c22c160(PTR_PTR_1126d8fd0,param_2,puVar13);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108056f70;
    }
    puVar2 = param_1;
    func_0x00010c116e40();
    if ((int)puVar2 != 0xe) {
LAB_108056e40:
      puVar15 = (undefined *)0x0;
      goto LAB_108056f80;
    }
    puVar2 = param_1;
    func_0x00010c1143c0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar2;
    func_0x00010c261480();
    if ((int)puVar13 == 1) {
      puVar13 = param_1;
      func_0x00010c1143c0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar13;
      func_0x00010c22d540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar13);
      _objc_release(puVar2);
      if (puVar15 != (undefined *)0x0) {
        puVar13 = param_1;
        func_0x00010c1143c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar13;
        func_0x00010c22d540();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar15;
        func_0x00010c09a080();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar14;
        func_0x000108f579f0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_release(puVar15);
        _objc_release(puVar13);
        puVar13 = PTR_PTR_1126d8fe0;
        _objc_alloc(PTR_PTR_1126d8fe0);
        func_0x00010c045ea0();
        puVar15 = PTR_PTR_1126d8fd0;
        func_0x00010c22d700(PTR_PTR_1126d8fd0,param_2,puVar13);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_108056f70;
      }
      goto LAB_108056e40;
    }
    puVar15 = (undefined *)0x0;
  }
  _objc_release(puVar2);
LAB_108056f80:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 10805732c; end: 10805754b;  */

double FUN_10805732c(undefined *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  double dVar11;
  double dVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  dVar11 = 0.0;
  _objc_retain(param_1);
  puVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (puVar2 == (undefined *)0x0) {
      _objc_release(param_1);
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      dVar12 = dVar11 * 1000.0;
LAB_108057484:
      _objc_release(puVar2);
      _objc_release(param_2);
      puVar10 = param_1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
        return dVar12;
      }
      ___stack_chk_fail();
      _objc_release(puVar2);
      _objc_release(param_2);
      _objc_release(param_1);
      __Unwind_Resume();
      _objc_retain();
      puVar2 = puVar10;
      FUN_1084dc688(puVar10,uVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      if (puVar6 != (undefined *)0x0) {
        puVar2 = PTR_PTR_1126d8fe8;
        FUN_10851ceac(PTR_PTR_1126d8fe8,puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(puVar10);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar2);
      }
      _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar10);
      return dVar11;
    }
    puVar10 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      lVar9 = *(long *)((long)puVar10 * 8);
      lVar3 = lVar9;
      func_0x00010c2923e0(lVar9);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x000108f579f0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_2;
      func_0x00010c0720c0();
      _objc_release(lVar4);
      _objc_release(lVar3);
      if ((int)uVar5 != 0) {
        func_0x00010c085c00(lVar9);
        dVar12 = (double)lVar9;
        puVar2 = param_1;
        goto LAB_108057484;
      }
      puVar10 = puVar10 + 1;
    } while (puVar2 != puVar10);
    puVar2 = param_1;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10805754c; end: 108057637;  */

void FUN_10805754c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain();
  lVar1 = param_1;
  FUN_1084dc688(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126d8fe8;
    FUN_10851ceac(PTR_PTR_1126d8fe8,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108057638; end: 108057fff;  */

void FUN_108057638(undefined8 param_1,long param_2)

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
  undefined *puVar10;
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
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126d8ff0;
  _objc_alloc();
  lVar2 = param_2;
  func_0x00010c0f7660();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x000108f579f0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x00010c0f7660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf626e0();
  FUN_108055b2c();
  lVar6 = param_2;
  func_0x00010c0f7660();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_2;
  func_0x00010c0f7660();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar9 = lVar8;
  func_0x00010bf626e0();
  if ((int)lVar9 == 7) {
    puVar10 = PTR_PTR_1126d8fa8;
    _objc_alloc();
    lVar9 = lVar8;
    func_0x00010bf43080();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar9;
    func_0x00010bf1f020();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c0c54a0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar8;
    func_0x00010bf43080();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010bf1f020();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010c0c5480();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar8;
    func_0x00010bf43080(lVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar16;
    func_0x00010bf1f020();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar17;
    func_0x00010c120140();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar8;
    func_0x00010bf43080(lVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar19;
    func_0x00010bf1f020();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar20;
    func_0x00010c279e80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c029860();
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
    _objc_release(lVar9);
    puVar22 = PTR_PTR_1126d8fa8;
    _objc_alloc();
    lVar9 = lVar8;
    func_0x00010bf43080();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar9;
    func_0x00010bf1f040();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c0c54a0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar8;
    func_0x00010bf43080();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010bf1f040();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010c0c5480();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar8;
    func_0x00010bf43080(lVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar16;
    func_0x00010bf1f040();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar17;
    func_0x00010c120140();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar8;
    func_0x00010bf43080(lVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar19;
    func_0x00010bf1f040();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar20;
    func_0x00010c279e80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c029860();
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
    _objc_release(lVar9);
    puVar23 = PTR_PTR_1126d8fb0;
    _objc_alloc();
    lVar9 = lVar8;
    func_0x00010bf43080(lVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar9;
    func_0x00010bf1b400();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010bf8aa00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00e720();
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar9);
    lVar9 = lVar8;
    func_0x00010bf43080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ecf20();
    _objc_release(lVar9);
    puVar24 = PTR_PTR_1126d8fb8;
    _objc_alloc(PTR_PTR_1126d8fb8);
    lVar9 = lVar8;
    func_0x00010bf43080(lVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar9;
    func_0x00010bf6e6e0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar8;
    func_0x00010bf43080(lVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010c22d240();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar8;
    func_0x00010bf43080(lVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010c0ecf00();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x000108f579f0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04d660(puVar24);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar9);
    puVar25 = PTR_PTR_1126d8fd0;
    func_0x00010bf42f60(PTR_PTR_1126d8fd0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar24);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(puVar10);
  }
  else {
    puVar25 = (undefined *)0x0;
  }
  _objc_release(lVar8);
  lVar9 = param_2;
  func_0x00010c0f77e0(param_2);
  func_0x00010c03bf80((double)lVar9,puVar1);
  _objc_release(puVar25);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar25 = puVar1;
  FUN_10851cf20(puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar25);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108058000; end: 1080587fb;  */

void FUN_108058000(long param_1,long param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar4 = param_2;
  func_0x00010bfceec0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x000108f579f0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  puStack_1f8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  uStack_98 = 0x108055b50;
  uStack_90 = 0x108055b60;
  uStack_88 = 0;
  puStack_1f0 = &uStack_e0;
  uStack_e0 = 0;
  uStack_d0 = 0x3032000000;
  uStack_c8 = 0x108055b50;
  uStack_c0 = 0x108055b60;
  uStack_b8 = 0;
  puStack_1e8 = &uStack_110;
  uStack_110 = 0;
  uStack_100 = 0x3032000000;
  uStack_f8 = 0x108055b50;
  uStack_f0 = 0x108055b60;
  uStack_e8 = 0;
  puStack_1e0 = &uStack_140;
  uStack_140 = 0;
  uStack_130 = 0x3032000000;
  uStack_128 = 0x108055b50;
  uStack_120 = 0x108055b60;
  uStack_118 = 0;
  puStack_1d8 = &uStack_170;
  uStack_170 = 0;
  uStack_160 = 0x3032000000;
  uStack_158 = 0x108055b50;
  uStack_150 = 0x108055b60;
  uStack_148 = 0;
  puStack_1d0 = &uStack_1a0;
  uStack_1a0 = 0;
  uStack_190 = 0x3032000000;
  uStack_188 = 0x108055b50;
  uStack_180 = 0x108055b60;
  uStack_178 = 0;
  puStack_1c8 = &uStack_1c0;
  uStack_1c0 = 0;
  uStack_1b0 = 0x2020000000;
  uStack_1a8 = 0;
  puStack_218 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_210 = 0xc2000000;
  pcStack_208 = FUN_1080587fc;
  puStack_200 = &UNK_110a192c0;
  puStack_1b8 = puStack_1c8;
  puStack_198 = puStack_1d0;
  puStack_168 = puStack_1d8;
  puStack_138 = puStack_1e0;
  puStack_108 = puStack_1e8;
  puStack_d8 = puStack_1f0;
  puStack_a8 = puStack_1f8;
  FUN_108055b68(lVar4,param_3,&puStack_218);
  lVar5 = lVar4;
  func_0x00010bf626e0();
  FUN_108055b2c();
  lVar7 = param_1;
  FUN_1084dc184(param_1,lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  puVar14 = PTR_PTR_1126d8f60;
  if (lVar8 == 0) {
    FUN_108509684(PTR_PTR_1126d8f60,0);
    _objc_retainAutoreleasedReturnValue();
    if (puVar14 == (undefined *)0x0) goto LAB_108058644;
    _objc_setProperty_nonatomic_copy(puVar14);
    bVar2 = true;
  }
  else {
    FUN_108509e24(PTR_PTR_1126d8f60,lVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar8;
    func_0x00010c27dd80();
    bVar2 = lVar7 == 0;
    if (puVar14 == (undefined *)0x0) {
      puVar14 = (undefined *)0x0;
      bVar1 = true;
      goto LAB_108058258;
    }
  }
  bVar1 = false;
  *(long *)(puVar14 + 0x28) = lVar5;
LAB_108058258:
  while( true ) {
    lVar7 = lVar4;
    FUN_108056708();
    if (!bVar1) {
      *(long *)(puVar14 + 0xa0) = lVar7;
    }
    lVar7 = lVar4;
    func_0x00010bf85d80(lVar4);
    _objc_retainAutoreleasedReturnValue();
    if (bVar1) {
      _objc_release(lVar7);
    }
    else {
      _objc_setProperty_nonatomic_copy(puVar14);
      _objc_release(lVar7);
      puVar14[0x15] = 0;
    }
    uVar9 = puStack_198[5];
    func_0x00010bf5bbc0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = param_3;
    func_0x00010c0720c0();
    if (!bVar1) {
      uVar3 = (undefined1)uVar13;
      if (lVar5 == 6) {
        uVar3 = 1;
      }
      if (lVar5 == 10) {
        uVar3 = 1;
      }
      puVar14[0x16] = uVar3;
    }
    _objc_release(uVar9);
    lVar7 = lVar4;
    func_0x00010bf11c80();
    if (!bVar1) {
      puVar14[0x17] = (char)lVar7;
    }
    lVar7 = lVar4;
    func_0x00010bfcf560();
    if (!bVar1) {
      *(long *)(puVar14 + 0x60) = lVar7;
      _objc_setProperty_nonatomic_copy(puVar14);
      puVar14[0x14] = *(undefined1 *)(puStack_1b8 + 3);
      _objc_setProperty_nonatomic_copy(puVar14);
      _objc_setProperty_nonatomic_copy(puVar14);
      _objc_setProperty_nonatomic_copy(puVar14);
      _objc_setProperty_nonatomic_copy(puVar14);
      _objc_setProperty_nonatomic_copy(puVar14);
    }
    lVar7 = lVar4;
    FUN_1080567b0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    if (!bVar1) {
      _objc_setProperty_nonatomic_copy(puVar14);
    }
    _objc_release(lVar7);
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    if (bVar2) {
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lStack_80 = lVar6;
      func_0x00010c0df7c0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_78 = puVar10;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1;
      FUN_108054264(param_1,puVar11,param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(puVar10);
      lVar12 = lVar7;
      func_0x00010bf529e0();
      if (lVar12 != 0) {
        FUN_1084ee948(param_1,2,lVar7,0,PTR____NSArray0__struct_11034ab48,
                      PTR____NSDictionary0__struct_11034ab58,PTR____NSDictionary0__struct_11034ab58,
                      param_5);
      }
      if (lVar5 == 1) {
        lVar12 = puStack_198[5];
        func_0x00010bf5bbc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar10 = PTR__OBJC_CLASS___NSSet_1126ae870;
        if (lVar12 != 0) {
          uVar13 = puStack_198[5];
          func_0x00010bf5bbc0(uVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2268e0(puVar10);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = param_1;
          FUN_1084ea0fc(param_1,puVar10);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar10);
          _objc_release(uVar13);
          FUN_1084ee948(param_1,1,lVar5,0,PTR____NSArray0__struct_11034ab48,
                        PTR____NSDictionary0__struct_11034ab58,
                        PTR____NSDictionary0__struct_11034ab58,param_5);
          _objc_release(lVar5);
        }
      }
      _objc_release(lVar7);
    }
    _objc_release(lVar8);
    _objc_release(puVar14);
    __Block_object_dispose(&uStack_1c0,8);
    __Block_object_dispose(&uStack_1a0,8);
    _objc_release(uStack_178);
    __Block_object_dispose(&uStack_170,8);
    _objc_release(uStack_148);
    __Block_object_dispose(&uStack_140,8);
    _objc_release(uStack_118);
    __Block_object_dispose(&uStack_110,8);
    _objc_release(uStack_e8);
    __Block_object_dispose(&uStack_e0,8);
    _objc_release(uStack_b8);
    __Block_object_dispose(&uStack_b0,8);
    _objc_release(uStack_88);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(param_3);
    _objc_release(param_2);
    _objc_release(param_1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) break;
    ___stack_chk_fail();
LAB_108058644:
    puVar14 = (undefined *)0x0;
    bVar1 = true;
    bVar2 = true;
  }
  return;
}



/* Entry: 1080587fc; end: 10805897b;  */

void FUN_1080587fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x18) = param_8;
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10805897c; end: 108058a73;  */

void FUN_10805897c(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),8);
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  return;
}



/* Entry: 108058a74; end: 10805914b;  */

void FUN_108058a74(undefined *param_1,undefined *param_2,undefined *param_3,undefined1 *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *unaff_x24;
  undefined8 uVar11;
  undefined *puStack_2b8;
  undefined1 auStack_1f0 [384];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = param_2;
  func_0x00010c11ac00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  puVar8 = puVar2;
  FUN_1084dc184(param_1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (puVar4 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126d8f60;
    puVar8 = puVar4;
    FUN_108509e24(PTR_PTR_1126d8f60,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_2;
    func_0x00010c288340();
    if (((ulong)puVar5 & 1) != 0) {
      puVar3 = param_2;
      func_0x00010c28d2c0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 != (undefined *)0x0) {
        param_4 = (undefined1 *)0x30;
        _objc_setProperty_nonatomic_copy(puVar2);
      }
      _objc_release(puVar3);
    }
    puVar5 = param_2;
    func_0x00010c288340();
    if ((((uint)puVar5 >> 1 & 1) != 0) &&
       (puVar5 = param_2, func_0x00010c28d200(), puVar2 != (undefined *)0x0)) {
      puVar2[0x17] = (char)puVar5;
    }
    puVar5 = param_2;
    func_0x00010c288340();
    if ((((uint)puVar5 >> 2 & 1) != 0) ||
       (puVar5 = param_2, func_0x00010c288340(), ((uint)puVar5 >> 3 & 1) != 0)) {
      puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_opt_new();
      puVar5 = param_2;
      func_0x00010c288340();
      if (((uint)puVar5 >> 2 & 1) == 0) {
        puVar5 = puVar4;
        func_0x00010c1057e0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar3);
      }
      else {
        puVar5 = param_2;
        func_0x00010c28d520(param_2);
        _objc_retainAutoreleasedReturnValue();
        if (puVar2 != (undefined *)0x0) {
          _objc_setProperty_nonatomic_copy(puVar2);
        }
        _objc_release(puVar5);
        puVar5 = param_2;
        func_0x00010c28d520(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar3);
      }
      _objc_release(puVar5);
      puVar5 = param_2;
      func_0x00010c288340();
      if (((uint)puVar5 >> 3 & 1) == 0) {
        puVar5 = puVar4;
        func_0x00010c29ef80(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar3);
      }
      else {
        puVar5 = param_2;
        func_0x00010c28d6c0(param_2);
        _objc_retainAutoreleasedReturnValue();
        if (puVar2 != (undefined *)0x0) {
          _objc_setProperty_nonatomic_copy(puVar2);
        }
        _objc_release(puVar5);
        puVar5 = param_2;
        func_0x00010c28d6c0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar3);
      }
      _objc_release(puVar5);
      unaff_x24 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      puVar5 = puVar4;
      func_0x00010c0f4aa0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010bf71fe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar10 = puVar4;
      func_0x00010c0f4aa0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar10;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar5 != (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar10);
          }
          uVar11 = *(undefined8 *)((long)puVar9 * 8);
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(unaff_x24);
          _objc_release(uVar11);
          puVar9 = puVar9 + 1;
        } while (puVar5 != puVar9);
        puVar5 = puVar10;
        func_0x00010bf52a60();
      }
      _objc_release(puVar10);
      _objc_retain(puVar3);
      puVar5 = puVar3;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar5 != (undefined *)0x0) {
        puVar10 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar3);
          }
          puVar9 = unaff_x24;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar9 == (undefined *)0x0) {
            puVar9 = PTR_PTR_1126d8fc8;
            _objc_alloc();
            func_0x00010c05ac00();
            func_0x00010c1d0640(unaff_x24);
            _objc_release(puVar9);
          }
          puVar10 = puVar10 + 1;
        } while (puVar5 != puVar10);
        puVar5 = puVar3;
        func_0x00010bf52a60();
      }
      _objc_release(puVar3);
      puVar10 = unaff_x24;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      param_4 = auStack_1f0;
      puVar5 = puVar10;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar5 != (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar10);
          }
          puVar6 = puVar3;
          func_0x00010bf4b900();
          if (((ulong)puVar6 & 1) == 0) {
            func_0x00010c12d3e0(unaff_x24);
          }
          puVar9 = puVar9 + 1;
        } while (puVar5 != puVar9);
        param_4 = auStack_1f0;
        puVar5 = puVar10;
        func_0x00010bf52a60();
      }
      _objc_release(puVar10);
      puVar5 = unaff_x24;
      func_0x00010bf00d20();
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 != (undefined *)0x0) {
        param_4 = (undefined1 *)0x40;
        _objc_setProperty_nonatomic_copy(puVar2);
      }
      _objc_release(puVar5);
      _objc_release(unaff_x24);
      _objc_release(puVar3);
    }
    param_3 = puVar2;
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    puStack_2b8 = puVar4;
  }
  _objc_release(puVar4);
  _objc_release(param_2);
  puVar4 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x24);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puStack_2b8);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(puVar8);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = param_3;
  func_0x00010c08fa60();
  if ((puVar2 != (undefined *)0x0) &&
     (puVar7 = param_4, func_0x00010c08fa60(), puVar7 != (undefined1 *)0x0)) {
    puVar2 = puVar4;
    FUN_1084dc184(puVar4,puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (puVar3 != (undefined *)0x0) {
      puVar5 = PTR_PTR_1126d8f60;
      FUN_108509e24(PTR_PTR_1126d8f60,puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      puVar10 = puVar3;
      func_0x00010c0d02e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0a0c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      puVar10 = puVar2;
      func_0x00010bf4b900();
      if ((int)puVar10 != 0) {
        func_0x00010c12d360(puVar2);
      }
      if (puVar5 != (undefined *)0x0) {
        _objc_setProperty_nonatomic_copy(puVar5);
      }
      puVar10 = PTR_PTR_1126d8f98;
      _objc_alloc(PTR_PTR_1126d8f98);
      puVar9 = puVar3;
      func_0x00010bf5a820(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5ab40();
      func_0x00010c006aa0(puVar10);
      if (puVar5 != (undefined *)0x0) {
        _objc_setProperty_nonatomic_copy(puVar5);
      }
      _objc_release(puVar10);
      _objc_release(puVar9);
      func_0x00010c25ed40(puVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar5);
    }
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10805914c; end: 1080593c3;  */

void FUN_10805914c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((lVar1 != 0) && (lVar1 = param_4, func_0x00010c08fa60(), lVar1 != 0)) {
    lVar1 = param_1;
    FUN_1084dc184(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126d8f60;
      FUN_108509e24(PTR_PTR_1126d8f60,lVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      lVar1 = lVar2;
      func_0x00010c0d02e0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0a0c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      puVar5 = puVar4;
      func_0x00010bf4b900();
      if ((int)puVar5 != 0) {
        func_0x00010c12d360(puVar4);
      }
      if (puVar3 != (undefined *)0x0) {
        _objc_setProperty_nonatomic_copy(puVar3);
      }
      puVar5 = PTR_PTR_1126d8f98;
      _objc_alloc(PTR_PTR_1126d8f98);
      lVar1 = lVar2;
      func_0x00010bf5a820(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5ab40();
      func_0x00010c006aa0(puVar5);
      if (puVar3 != (undefined *)0x0) {
        _objc_setProperty_nonatomic_copy(puVar3);
      }
      _objc_release(puVar5);
      _objc_release(lVar1);
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1080593c4; end: 1080599a7;  */

void FUN_1080593c4(long param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x25;
  undefined *unaff_x26;
  long unaff_x27;
  undefined *unaff_x28;
  undefined *puStack_2b8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_2;
  puVar7 = param_3;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf529e0();
  if (puVar1 != (undefined *)0x0) {
    lVar2 = param_1;
    lVar6 = param_2;
    FUN_1084dc184(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (unaff_x22 != 0) {
      unaff_x23 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      puStack_2b8 = PTR_PTR_1126d8f60;
      lVar6 = unaff_x22;
      FUN_108509e24(PTR_PTR_1126d8f60,unaff_x22);
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      lVar2 = unaff_x22;
      func_0x00010c0f4aa0(unaff_x22);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar11 = unaff_x22;
      func_0x00010c0f4aa0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar11;
      func_0x00010bf52a60();
      lVar3 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(lVar11);
          }
          uVar9 = *(undefined8 *)(lVar10 * 8);
          func_0x00010c2923e0(uVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = unaff_x23;
          func_0x00010bf4b900();
          _objc_release(uVar9);
          if (((ulong)puVar1 & 1) == 0) {
            func_0x00010befa120(unaff_x25);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar11;
        func_0x00010bf52a60();
      }
      _objc_release(lVar11);
      if (puStack_2b8 != (undefined *)0x0) {
        _objc_setProperty_nonatomic_copy();
      }
      unaff_x26 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      lVar2 = unaff_x22;
      func_0x00010c1057e0(unaff_x22);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar11 = unaff_x22;
      func_0x00010c1057e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar11;
      func_0x00010bf52a60();
      lVar3 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(lVar11);
          }
          puVar1 = unaff_x23;
          func_0x00010bf4b900();
          if (((ulong)puVar1 & 1) == 0) {
            func_0x00010befa120(unaff_x26);
          }
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar11;
        func_0x00010bf52a60();
      }
      _objc_release(lVar11);
      if (puStack_2b8 != (undefined *)0x0) {
        _objc_setProperty_nonatomic_copy(puStack_2b8);
      }
      unaff_x28 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      lVar2 = unaff_x22;
      func_0x00010c29ef80(unaff_x22);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010bf0a0e0(unaff_x28);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      unaff_x27 = unaff_x22;
      func_0x00010c29ef80();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = unaff_x27;
      func_0x00010bf52a60();
      lVar3 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar11 = 0;
        do {
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(unaff_x27);
          }
          puVar1 = unaff_x23;
          func_0x00010bf4b900();
          if (((ulong)puVar1 & 1) == 0) {
            func_0x00010befa120(unaff_x28);
          }
          lVar11 = lVar11 + 1;
        } while (lVar2 != lVar11);
        lVar2 = unaff_x27;
        func_0x00010bf52a60();
      }
      _objc_release(unaff_x27);
      if (puStack_2b8 != (undefined *)0x0) {
        _objc_setProperty_nonatomic_copy(puStack_2b8);
      }
      puVar7 = puStack_2b8;
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(unaff_x28);
      _objc_release(unaff_x26);
      _objc_release(unaff_x25);
      _objc_release(puStack_2b8);
      _objc_release(unaff_x23);
    }
    _objc_release(unaff_x22);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  lVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x27);
  _objc_release(unaff_x28);
  _objc_release(unaff_x26);
  _objc_release(unaff_x25);
  _objc_release(puStack_2b8);
  _objc_release(unaff_x23);
  _objc_release(unaff_x22);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(lVar6);
  _objc_retain(puVar7);
  puVar1 = puVar7;
  func_0x00010c08fa60();
  if (puVar1 != (undefined *)0x0) {
    lVar8 = lVar2;
    FUN_1084dc184(lVar2,lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar8;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    if (lVar3 != 0) {
      puVar4 = PTR_PTR_1126d8f60;
      FUN_108509e24(PTR_PTR_1126d8f60,lVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      lVar8 = lVar3;
      func_0x00010c0d02e0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0a0c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      puVar5 = puVar1;
      func_0x00010bf4b900();
      if (((ulong)puVar5 & 1) == 0) {
        func_0x00010befa120(puVar1);
      }
      if (puVar4 != (undefined *)0x0) {
        _objc_setProperty_nonatomic_copy(puVar4);
      }
      func_0x00010c25ed40(lVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(puVar4);
    }
    _objc_release(lVar3);
  }
  _objc_release(puVar7);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1080599a8; end: 108059b73;  */

void FUN_1080599a8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = param_1;
    FUN_1084dc184(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126d8f60;
      FUN_108509e24(PTR_PTR_1126d8f60,lVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      lVar1 = lVar2;
      func_0x00010c0d02e0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0a0c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      puVar5 = puVar4;
      func_0x00010bf4b900();
      if (((ulong)puVar5 & 1) == 0) {
        func_0x00010befa120(puVar4);
      }
      if (puVar3 != (undefined *)0x0) {
        _objc_setProperty_nonatomic_copy(puVar3);
      }
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108059b74; end: 108059d3f;  */

void FUN_108059b74(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = param_1;
    FUN_1084dc184(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126d8f60;
      FUN_108509e24(PTR_PTR_1126d8f60,lVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      lVar1 = lVar2;
      func_0x00010c0d02e0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0a0c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      puVar5 = puVar4;
      func_0x00010bf4b900();
      if ((int)puVar5 != 0) {
        func_0x00010c12d360(puVar4);
      }
      if (puVar3 != (undefined *)0x0) {
        _objc_setProperty_nonatomic_copy(puVar3);
      }
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108059d40; end: 10805a1e3;  */

void FUN_108059d40(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **unaff_x22;
  undefined *puVar7;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  long lVar8;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  code *pcStack_2d0;
  undefined *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined **ppuStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf529e0();
  if (puVar1 != (undefined *)0x0) {
    unaff_x23 = param_1;
    FUN_1084dc184(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = unaff_x23;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x23);
    if (unaff_x25 != (undefined *)0x0) {
      unaff_x23 = PTR_PTR_1126d8f60;
      puStack_1f8 = unaff_x25;
      FUN_108509e24(PTR_PTR_1126d8f60,unaff_x25);
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
      func_0x00010bf1d8c0(unaff_x25);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ecd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x25);
      puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
      puVar2 = puStack_1f8;
      func_0x00010bf1d820(puStack_1f8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ecd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      plStack_1a0 = (long *)0x0;
      _objc_retain(param_3);
      puVar2 = param_3;
      func_0x00010bf52a60();
      if (puVar2 != (undefined *)0x0) {
        lVar8 = *plStack_1a0;
        do {
          puVar7 = (undefined *)0x0;
          do {
            if (*plStack_1a0 != lVar8) {
              _objc_enumerationMutation(param_3);
            }
            puVar3 = unaff_x24;
            func_0x00010bf4b900();
            if (((ulong)puVar3 & 1) == 0) {
              func_0x00010befa120(unaff_x24);
            }
            puVar7 = puVar7 + 1;
          } while (puVar2 != puVar7);
          puVar2 = param_3;
          func_0x00010bf52a60();
        } while (puVar2 != (undefined *)0x0);
      }
      _objc_release(param_3);
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 0;
      plStack_1e0 = (long *)0x0;
      _objc_retain(unaff_x24);
      puVar2 = unaff_x24;
      func_0x00010bf52a60();
      if (puVar2 != (undefined *)0x0) {
        lVar8 = *plStack_1e0;
        do {
          puVar7 = (undefined *)0x0;
          do {
            if (*plStack_1e0 != lVar8) {
              _objc_enumerationMutation(unaff_x24);
            }
            puVar3 = puVar1;
            func_0x00010bf4b900();
            if ((int)puVar3 != 0) {
              func_0x00010c12d360(puVar1);
            }
            puVar7 = puVar7 + 1;
          } while (puVar2 != puVar7);
          puVar2 = unaff_x24;
          func_0x00010bf52a60();
        } while (puVar2 != (undefined *)0x0);
      }
      _objc_release(unaff_x24);
      puVar2 = unaff_x24;
      func_0x00010bf09f00(unaff_x24);
      _objc_retainAutoreleasedReturnValue();
      if (unaff_x23 != (undefined *)0x0) {
        _objc_setProperty_nonatomic_copy(unaff_x23);
      }
      _objc_release(puVar2);
      unaff_x22 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      if (unaff_x23 != (undefined *)0x0) {
        _objc_setProperty_nonatomic_copy(unaff_x23);
      }
      _objc_release(puVar2);
      unaff_x26 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      if (unaff_x23 != (undefined *)0x0) {
        _objc_setProperty_nonatomic_copy(unaff_x23);
      }
      _objc_release(unaff_x26);
      puVar2 = unaff_x23;
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(unaff_x24);
      _objc_release(unaff_x23);
      unaff_x25 = puStack_1f8;
    }
    _objc_release(unaff_x25);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x26);
  _objc_release(unaff_x25);
  _objc_release(unaff_x24);
  _objc_release(unaff_x23);
  _objc_release(puStack_1f8);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  puVar7 = puVar1;
  __Unwind_Resume();
  pcStack_208 = FUN_10805a1e4;
  puStack_250 = puVar1;
  puStack_248 = unaff_x25;
  puStack_240 = unaff_x24;
  puStack_238 = unaff_x23;
  ppuStack_230 = unaff_x22;
  puStack_228 = param_3;
  uStack_220 = param_2;
  puStack_218 = param_1;
  puStack_210 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(unaff_x26);
  _objc_retain(puVar2);
  puVar1 = puVar2;
  func_0x00010bf529e0();
  if (puVar1 != (undefined *)0x0) {
    puVar1 = puVar7;
    FUN_1084dc184(puVar7,unaff_x26);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if (puVar3 != (undefined *)0x0) {
      puStack_278 = &uStack_280;
      uStack_280 = 0;
      uStack_270 = 0x3032000000;
      uStack_268 = 0x108055b50;
      uStack_260 = 0x108055b60;
      uStack_258 = 0;
      puStack_2a8 = &uStack_2b0;
      uStack_2b0 = 0;
      uStack_2a0 = 0x3032000000;
      uStack_298 = 0x108055b50;
      uStack_290 = 0x108055b60;
      uStack_288 = 0;
      puVar1 = puVar3;
      func_0x00010c1057e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf1d8c0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puStack_2e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2d8 = 0xc2000000;
      pcStack_2d0 = FUN_10805a518;
      puStack_2c8 = &UNK_110a19290;
      puStack_2c0 = &uStack_280;
      puStack_2b8 = &uStack_2b0;
      FUN_1080562d0(puVar1,puVar2,puVar4,&puStack_2e0);
      _objc_release(puVar4);
      _objc_release(puVar1);
      puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
      puVar5 = puVar3;
      func_0x00010bf1d820(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c225c20(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c072060();
      _objc_release(puVar1);
      _objc_release(puVar5);
      _objc_release(puVar4);
      if (((ulong)puVar6 & 1) == 0) {
        puVar1 = PTR_PTR_1126d8f60;
        FUN_108509e24(PTR_PTR_1126d8f60,puVar3);
        _objc_retainAutoreleasedReturnValue();
        if (puVar1 != (undefined *)0x0) {
          _objc_setProperty_nonatomic_copy(puVar1);
          _objc_setProperty_nonatomic_copy(puVar1);
        }
        func_0x00010c25ed40(puVar7);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar1);
      }
      __Block_object_dispose(&uStack_2b0,8);
      _objc_release(uStack_288);
      __Block_object_dispose(&uStack_280,8);
      _objc_release(uStack_258);
    }
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(unaff_x26);
  _objc_release(puVar7);
  return;
}



/* Entry: 10805a1e4; end: 10805a517;  */

void FUN_10805a1e4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_1;
    FUN_1084dc184(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      puStack_78 = &uStack_80;
      uStack_80 = 0;
      uStack_70 = 0x3032000000;
      uStack_68 = 0x108055b50;
      uStack_60 = 0x108055b60;
      uStack_58 = 0;
      puStack_a8 = &uStack_b0;
      uStack_b0 = 0;
      uStack_a0 = 0x3032000000;
      uStack_98 = 0x108055b50;
      uStack_90 = 0x108055b60;
      uStack_88 = 0;
      lVar1 = lVar2;
      func_0x00010c1057e0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf1d8c0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d8 = 0xc2000000;
      pcStack_d0 = FUN_10805a518;
      puStack_c8 = &UNK_110a19290;
      puStack_c0 = &uStack_80;
      puStack_b8 = &uStack_b0;
      FUN_1080562d0(lVar1,param_3,lVar3,&puStack_e0);
      _objc_release(lVar3);
      _objc_release(lVar1);
      puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
      lVar1 = lVar2;
      func_0x00010bf1d820(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c225c20(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c072060();
      _objc_release(puVar5);
      _objc_release(lVar1);
      _objc_release(puVar4);
      if (((ulong)puVar6 & 1) == 0) {
        puVar5 = PTR_PTR_1126d8f60;
        FUN_108509e24(PTR_PTR_1126d8f60,lVar2);
        _objc_retainAutoreleasedReturnValue();
        if (puVar5 != (undefined *)0x0) {
          _objc_setProperty_nonatomic_copy(puVar5);
          _objc_setProperty_nonatomic_copy(puVar5);
        }
        func_0x00010c25ed40(param_1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar5);
      }
      __Block_object_dispose(&uStack_b0,8);
      _objc_release(uStack_88);
      __Block_object_dispose(&uStack_80,8);
      _objc_release(uStack_58);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 10805a518; end: 10805a5a7;  */

void FUN_10805a518(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_2;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10805a5a8; end: 10805a7cf;  */

void FUN_10805a5a8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_1;
    FUN_1084dc184(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_3;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c29ef80(lVar2);
      _objc_retainAutoreleasedReturnValue();
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_10805a7d0;
      puStack_60 = &UNK_110a192f0;
      _objc_retain(lVar1);
      lVar4 = lVar3;
      lStack_58 = lVar1;
      func_0x000100504554(lVar3,&puStack_78);
      _objc_release(lVar3);
      puVar5 = PTR_PTR_1126d8f60;
      FUN_108509e24(PTR_PTR_1126d8f60,lVar2);
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 != (undefined *)0x0) {
        _objc_setProperty_nonatomic_copy(puVar5);
      }
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(lVar4);
      _objc_release(lStack_58);
      _objc_release(lVar1);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10805a7d0; end: 10805a83b;  */

void FUN_10805a7d0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf4b900();
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_2);
    uVar2 = param_2;
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10805a83c; end: 10805ad53;  */

void FUN_10805a83c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000108f579f0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = param_1;
  FUN_1084dc184(param_1,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar7 = param_2;
  func_0x00010c0c7940();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar7;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar7);
      }
      uVar14 = *(undefined8 *)(lVar15 * 8);
      puVar8 = PTR_PTR_1126d8fc8;
      _objc_alloc(PTR_PTR_1126d8fc8);
      uVar3 = uVar14;
      func_0x00010c2923e0(uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar3;
      func_0x000108f579f0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05ac00(puVar8);
      func_0x00010befa120(puVar5);
      _objc_release(puVar8);
      _objc_release(uVar12);
      _objc_release(uVar3);
      func_0x00010c2923e0(uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar14;
      func_0x000108f579f0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar6);
      _objc_release(uVar3);
      _objc_release(uVar14);
      lVar15 = lVar15 + 1;
    } while (lVar1 != lVar15);
    lVar1 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  func_0x00010bf626e0();
  FUN_108055b2c();
  FUN_108056708();
  puVar8 = PTR_PTR_1126b47a0;
  _objc_alloc();
  lVar1 = param_2;
  func_0x00010bf85d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  func_0x00010bfcf560();
  lVar9 = param_2;
  FUN_1080567b0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_2;
  func_0x00010c0c7940(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10805732c();
  func_0x00010c03bf60();
  _objc_release(lVar7);
  _objc_release(lVar9);
  _objc_release(lVar1);
  uVar12 = 0;
  puVar10 = puVar8;
  FUN_10850a6d0(puVar8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  uVar3 = param_1;
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume(uVar3);
  _objc_retain();
  _objc_retain(uVar12);
  uVar4 = uVar12;
  func_0x00010c0f7660(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar4;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar14;
  func_0x000108f579f0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  _objc_release(uVar4);
  uVar4 = uVar3;
  FUN_1084dc184(uVar3,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  FUN_108057638(uVar3,uVar12);
  _objc_release(uVar14);
  _objc_release(uVar11);
  _objc_release(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10805ad54; end: 10805ae97;  */

void FUN_10805ad54(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0f7660(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108f579f0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  FUN_1084dc184(param_1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  FUN_108057638(param_1,param_2);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10805ae98; end: 10805b5eb;  */

/* WARNING: Possible PIC construction at 0x00010805b030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010805b154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010805b264: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010805b374: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010805b774: Changing call to branch */

void FUN_10805ae98(undefined *param_1,undefined *param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *puVar10;
  undefined *puVar11;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined *puStack_4e0;
  undefined *puStack_380;
  undefined *puStack_378;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_2;
  puVar11 = param_3;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010bf529e0();
  puVar10 = param_3;
  puVar3 = unaff_x25;
  if (puVar2 != (undefined *)0x0) {
    puVar3 = param_1;
    puVar6 = param_2;
    FUN_1084dc184();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = puVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (unaff_x22 != (undefined *)0x0) {
      unaff_x23 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      puStack_380 = PTR_PTR_1126d8f60;
      puVar6 = unaff_x22;
      FUN_108509e24();
      _objc_retainAutoreleasedReturnValue();
      puStack_378 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      puVar3 = unaff_x22;
      func_0x00010bf15880(unaff_x22);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0a0c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_retain(unaff_x23);
      puVar2 = unaff_x23;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar2 != (undefined *)0x0) {
        puVar10 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(unaff_x23);
          }
          uVar8 = *(undefined8 *)((long)puVar10 * 8);
          puVar3 = unaff_x22;
          func_0x00010bf15880();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar3;
          func_0x00010bf4b900();
          _objc_release(puVar3);
          puVar3 = puStack_378;
          if (((ulong)puVar11 & 1) == 0) goto code_r0x00010befa120;
          puVar10 = puVar10 + 1;
        } while (puVar2 != puVar10);
        puVar2 = unaff_x23;
        func_0x00010bf52a60();
      }
      _objc_release(unaff_x23);
      if (puStack_380 != (undefined *)0x0) {
        _objc_setProperty_nonatomic_copy();
      }
      unaff_x26 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      puVar3 = unaff_x22;
      func_0x00010c0f4aa0(unaff_x22);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar10 = unaff_x22;
      func_0x00010c0f4aa0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar10;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar2 != (undefined *)0x0) {
        unaff_x25 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar10);
          }
          uVar8 = *(undefined8 *)((long)unaff_x25 * 8);
          uVar4 = uVar8;
          func_0x00010c2923e0(uVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = unaff_x23;
          func_0x00010bf4b900();
          _objc_release(uVar4);
          puVar3 = unaff_x26;
          if (((ulong)puVar11 & 1) == 0) goto code_r0x00010befa120;
          unaff_x25 = unaff_x25 + 1;
        } while (puVar2 != unaff_x25);
        puVar2 = puVar10;
        func_0x00010bf52a60();
      }
      _objc_release(puVar10);
      if (puStack_380 != (undefined *)0x0) {
        _objc_setProperty_nonatomic_copy(puStack_380);
      }
      unaff_x27 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      puVar3 = unaff_x22;
      func_0x00010c1057e0(unaff_x22);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar10 = unaff_x22;
      func_0x00010c1057e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar10;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar2 != (undefined *)0x0) {
        puVar11 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar10);
          }
          uVar8 = *(undefined8 *)((long)puVar11 * 8);
          puVar9 = unaff_x23;
          func_0x00010bf4b900();
          puVar3 = unaff_x27;
          if (((ulong)puVar9 & 1) == 0) goto code_r0x00010befa120;
          puVar11 = puVar11 + 1;
        } while (puVar2 != puVar11);
        puVar2 = puVar10;
        func_0x00010bf52a60();
      }
      _objc_release(puVar10);
      if (puStack_380 != (undefined *)0x0) {
        _objc_setProperty_nonatomic_copy(puStack_380);
      }
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      puVar2 = unaff_x22;
      func_0x00010c29ef80(unaff_x22);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar10 = unaff_x22;
      func_0x00010c29ef80();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar10;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar2 != (undefined *)0x0) {
        unaff_x25 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar10);
          }
          uVar8 = *(undefined8 *)((long)unaff_x25 * 8);
          puVar11 = unaff_x23;
          func_0x00010bf4b900();
          if (((ulong)puVar11 & 1) == 0) goto code_r0x00010befa120;
          unaff_x25 = unaff_x25 + 1;
        } while (puVar2 != unaff_x25);
        puVar2 = puVar10;
        func_0x00010bf52a60();
      }
      _objc_release(puVar10);
      if (puStack_380 != (undefined *)0x0) {
        _objc_setProperty_nonatomic_copy(puStack_380);
      }
      puVar11 = puStack_380;
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(unaff_x27);
      _objc_release(unaff_x26);
      _objc_release(puStack_378);
      _objc_release(puStack_380);
      _objc_release(unaff_x23);
      unaff_x28 = puVar3;
    }
    _objc_release(unaff_x22);
    puVar3 = unaff_x25;
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  _objc_release(unaff_x28);
  _objc_release(unaff_x27);
  _objc_release(unaff_x26);
  _objc_release(puStack_378);
  _objc_release(puStack_380);
  _objc_release(unaff_x23);
  _objc_release(unaff_x22);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(puVar6);
  _objc_retain(puVar11);
  puVar10 = puVar11;
  func_0x00010bf529e0();
  if (puVar10 != (undefined *)0x0) {
    unaff_x23 = puVar2;
    FUN_1084dc184(puVar2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = unaff_x23;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x23);
    if (unaff_x22 != (undefined *)0x0) {
      unaff_x23 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      puStack_4e0 = PTR_PTR_1126d8f60;
      FUN_108509e24(PTR_PTR_1126d8f60,unaff_x22);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      puVar10 = unaff_x22;
      func_0x00010bf15880(unaff_x22);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010bf0a0e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      unaff_x27 = unaff_x22;
      func_0x00010bf15880();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = unaff_x27;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar10 != (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(unaff_x27);
          }
          uVar8 = *(undefined8 *)((long)puVar9 * 8);
          puVar5 = unaff_x23;
          func_0x00010bf4b900();
          if (((ulong)puVar5 & 1) == 0) goto code_r0x00010befa120;
          puVar9 = puVar9 + 1;
        } while (puVar10 != puVar9);
        puVar10 = unaff_x27;
        func_0x00010bf52a60();
      }
      _objc_release(unaff_x27);
      if (puStack_4e0 != (undefined *)0x0) {
        _objc_setProperty_nonatomic_copy(puStack_4e0);
      }
      func_0x00010c25ed40(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puStack_4e0);
      _objc_release(unaff_x23);
    }
    _objc_release(unaff_x22);
  }
  _objc_release(puVar11);
  _objc_release(puVar6);
  puVar10 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x27);
  _objc_release(puVar3);
  _objc_release(puStack_4e0);
  _objc_release(unaff_x23);
  _objc_release(unaff_x22);
  _objc_release(puVar11);
  _objc_release(puVar6);
  _objc_release(puVar2);
  __Unwind_Resume();
  uVar8 = *(undefined8 *)(puVar10 + 0x20);
  puVar3 = *(undefined **)(puVar10 + 0x28);
code_r0x00010befa120:
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar3,PTR_s_addObject__11259c1f0,uVar8);
  return;
}



/* Entry: 10805b5ec; end: 10805b8f3;  */

/* WARNING: Possible PIC construction at 0x00010805b774: Changing call to branch */

void FUN_10805b5ec(undefined *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x25;
  undefined *unaff_x27;
  undefined8 uVar6;
  undefined *puStack_140;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    unaff_x23 = param_1;
    FUN_1084dc184(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = unaff_x23;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x23);
    if (unaff_x22 != (undefined *)0x0) {
      unaff_x23 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      puStack_140 = PTR_PTR_1126d8f60;
      FUN_108509e24(PTR_PTR_1126d8f60,unaff_x22);
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      puVar2 = unaff_x22;
      func_0x00010bf15880(unaff_x22);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010bf0a0e0(unaff_x25);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      unaff_x27 = unaff_x22;
      func_0x00010bf15880();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = unaff_x27;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar2 != (undefined *)0x0) {
        puVar5 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(unaff_x27);
          }
          uVar6 = *(undefined8 *)((long)puVar5 * 8);
          puVar3 = unaff_x23;
          func_0x00010bf4b900();
          if (((ulong)puVar3 & 1) == 0) goto code_r0x00010befa120;
          puVar5 = puVar5 + 1;
        } while (puVar2 != puVar5);
        puVar2 = unaff_x27;
        func_0x00010bf52a60();
      }
      _objc_release(unaff_x27);
      if (puStack_140 != (undefined *)0x0) {
        _objc_setProperty_nonatomic_copy(puStack_140);
      }
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(unaff_x25);
      _objc_release(puStack_140);
      _objc_release(unaff_x23);
    }
    _objc_release(unaff_x22);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x27);
  _objc_release(unaff_x25);
  _objc_release(puStack_140);
  _objc_release(unaff_x23);
  _objc_release(unaff_x22);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  uVar6 = *(undefined8 *)(puVar2 + 0x20);
  unaff_x25 = *(undefined **)(puVar2 + 0x28);
code_r0x00010befa120:
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(unaff_x25,PTR_s_addObject__11259c1f0,uVar6);
  return;
}



/* Entry: 10805b8f4; end: 10805b8ff;  */

void FUN_10805b8f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_addObject__11259c1f0,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10805b900; end: 10805bab3;  */

void FUN_10805b900(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_5d8 [1416];
  
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010c27dd80();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (lVar3 == 0) {
    lVar3 = param_2;
    func_0x00010c259cc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf62820(param_2);
    _objc_retain(lVar3);
    func_0x00010b627f84(auStack_5d8,uVar2);
    puVar4 = PTR_PTR_1126c3328;
    _objc_alloc(PTR_PTR_1126c3328);
    func_0x00010c04dca0();
    puVar5 = PTR_PTR_1126c2fd0;
    func_0x00010bf62300(PTR_PTR_1126c2fd0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b62a3cc(auStack_5d8,puVar5);
    puVar6 = auStack_5d8;
    func_0x00010b629614(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    FUN_10805bacc(auStack_5d8);
    _objc_release(lVar3);
    func_0x00010befa120(uVar1);
    _objc_release(puVar6);
    _objc_release(lVar3);
  }
  else {
    func_0x00010befa120(uVar1);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10805bab4; end: 10805bacb;  */

void FUN_10805bab4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_addObject__11259c1f0,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10805bacc; end: 10805bedf;  */

long FUN_10805bacc(long param_1)

{
  long lVar1;
  
  _objc_release(*(undefined8 *)(param_1 + 0x570));
  _objc_release(*(undefined8 *)(param_1 + 0x550));
  _objc_release(*(undefined8 *)(param_1 + 0x548));
  _objc_release(*(undefined8 *)(param_1 + 0x540));
  _objc_release(*(undefined8 *)(param_1 + 0x520));
  _objc_release(*(undefined8 *)(param_1 + 0x518));
  _objc_release(*(undefined8 *)(param_1 + 0x508));
  _objc_release(*(undefined8 *)(param_1 + 0x460));
  _objc_release(*(undefined8 *)(param_1 + 0x458));
  _objc_release(*(undefined8 *)(param_1 + 0x448));
  _objc_release(*(undefined8 *)(param_1 + 0x438));
  _objc_release(*(undefined8 *)(param_1 + 0x430));
  _objc_release(*(undefined8 *)(param_1 + 0x420));
  _objc_release(*(undefined8 *)(param_1 + 0x3a8));
  _objc_release(*(undefined8 *)(param_1 + 0x398));
  _objc_release(*(undefined8 *)(param_1 + 0x380));
  _objc_release(*(undefined8 *)(param_1 + 0x358));
  _objc_release(*(undefined8 *)(param_1 + 0x348));
  _objc_release(*(undefined8 *)(param_1 + 0x338));
  _objc_release(*(undefined8 *)(param_1 + 0x330));
  _objc_release(*(undefined8 *)(param_1 + 0x318));
  _objc_release(*(undefined8 *)(param_1 + 0x308));
  _objc_release(*(undefined8 *)(param_1 + 0x2f8));
  _objc_release(*(undefined8 *)(param_1 + 0x2e8));
  _objc_release(*(undefined8 *)(param_1 + 0x2d0));
  _objc_release(*(undefined8 *)(param_1 + 0x2c8));
  _objc_release(*(undefined8 *)(param_1 + 0x2b8));
  _objc_release(*(undefined8 *)(param_1 + 0x2b0));
  _objc_release(*(undefined8 *)(param_1 + 0x2a8));
  _objc_release(*(undefined8 *)(param_1 + 0x298));
  _objc_release(*(undefined8 *)(param_1 + 0x290));
  _objc_release(*(undefined8 *)(param_1 + 0x288));
  _objc_release(*(undefined8 *)(param_1 + 0x280));
  _objc_release(*(undefined8 *)(param_1 + 0x278));
  _objc_release(*(undefined8 *)(param_1 + 0x270));
  _objc_release(*(undefined8 *)(param_1 + 0x268));
  _objc_release(*(undefined8 *)(param_1 + 0x250));
  _objc_release(*(undefined8 *)(param_1 + 0x240));
  _objc_release(*(undefined8 *)(param_1 + 0x228));
  _objc_release(*(undefined8 *)(param_1 + 0x208));
  _objc_release(*(undefined8 *)(param_1 + 0x1b0));
  _objc_release(*(undefined8 *)(param_1 + 400));
  _objc_release(*(undefined8 *)(param_1 + 0x188));
  _objc_release(*(undefined8 *)(param_1 + 0x180));
  _objc_release(*(undefined8 *)(param_1 + 0x178));
  _objc_release(*(undefined8 *)(param_1 + 0x170));
  _objc_release(*(undefined8 *)(param_1 + 0x168));
  _objc_release(*(undefined8 *)(param_1 + 0x160));
  _objc_release(*(undefined8 *)(param_1 + 0x158));
  _objc_release(*(undefined8 *)(param_1 + 0x150));
  _objc_release(*(undefined8 *)(param_1 + 0x138));
  _objc_release(*(undefined8 *)(param_1 + 0x130));
  _objc_release(*(undefined8 *)(param_1 + 0x120));
  _objc_release(*(undefined8 *)(param_1 + 0x118));
  _objc_release(*(undefined8 *)(param_1 + 0x110));
  _objc_release(*(undefined8 *)(param_1 + 0x108));
  _objc_release(*(undefined8 *)(param_1 + 0x100));
  _objc_release(*(undefined8 *)(param_1 + 0xf8));
  _objc_release(*(undefined8 *)(param_1 + 0xe0));
  _objc_release(*(undefined8 *)(param_1 + 0xd8));
  _objc_release(*(undefined8 *)(param_1 + 200));
  _objc_release(*(undefined8 *)(param_1 + 0xc0));
  _objc_release(*(undefined8 *)(param_1 + 0xb8));
  _objc_release(*(undefined8 *)(param_1 + 0x80));
  _objc_release(*(undefined8 *)(param_1 + 0x78));
  _objc_release(*(undefined8 *)(param_1 + 0x70));
  _objc_release(*(undefined8 *)(param_1 + 0x68));
  _objc_release(*(undefined8 *)(param_1 + 0x60));
  _objc_release(*(undefined8 *)(param_1 + 0x58));
  _objc_release(*(undefined8 *)(param_1 + 0x50));
  lVar1 = *(long *)(param_1 + 0x40);
  *(long *)(param_1 + 0x40) = 0;
  if (lVar1 != 0) {
    func_0x00010805bd90();
  }
  func_0x00010805bdd0(param_1 + 0x38,0);
  lVar1 = *(long *)(param_1 + 0x30);
  *(long *)(param_1 + 0x30) = 0;
  if (lVar1 != 0) {
    func_0x00010805be0c();
  }
  lVar1 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = 0;
  if (lVar1 != 0) {
    func_0x00010805be5c();
  }
  func_0x00010805bea4(param_1 + 0x20,0);
  lVar1 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  _objc_release(*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 10805bee0; end: 10805bf3f;  */

void FUN_10805bee0(undefined8 param_1,undefined8 param_2)

{
  func_0x000108f579f0(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10805bf40; end: 10805c267;  */

void FUN_10805bf40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_opt_class(PTR_PTR_1126d8ff8);
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_1);
  }
  puVar2 = &uStack_111;
  func_0x00010055c144();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  _objc_retain(param_3);
  ppuStack_188 = &PTR_DAT_110862760;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_108 = 10;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_SUB_110862700;
  uStack_c0 = 0;
  uStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  puStack_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  uStack_1a4 = 0;
  puVar3 = &uStack_a0;
  uStack_158 = param_3;
  puStack_d8 = puVar2;
  pppuStack_d0 = &ppuStack_188;
  func_0x0001000e77a0(puVar3,&ppuStack_110,&puStack_1a0,&uStack_1a4);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_1a0 != (undefined8 *)0x0) {
    puStack_198 = puStack_1a0;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_SUB_110862700;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_c8;
  func_0x000100105004(&puStack_1a0);
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_DAT_110862760;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_140;
  func_0x000100105004(&puStack_1a0);
  _objc_release(uStack_158);
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  puVar4 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d9000;
  if (puVar4 == (undefined8 *)0x0) {
    FUN_1085071fc(PTR_PTR_1126d9000,0);
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 != (undefined *)0x0) {
      _objc_setProperty_nonatomic_copy(puVar5);
      goto LAB_10805c19c;
    }
  }
  else {
    FUN_1085073c4(PTR_PTR_1126d9000,puVar4);
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 != (undefined *)0x0) {
LAB_10805c19c:
      _objc_setProperty_nonatomic_copy(puVar5);
      goto LAB_10805c1b0;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_10805c1b0:
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 10805c268; end: 10805c2e3;  */

undefined * FUN_10805c268(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113728be0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ed0558,
                        &UNK_10deed770,&UNK_10deeda0c,0x21,FUN_10805c2e4,0);
    do {
      if (puRam0000000113728be0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113728be0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113728be0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113728be0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113728be0;
}



/* Entry: 10805c2e4; end: 10805c2ef;  */

bool FUN_10805c2e4(uint param_1)

{
  return param_1 < 0x21;
}



/* Entry: 10805c2f0; end: 10805c36b;  */

undefined * FUN_10805c2f0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113728be8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ed0578,
                        &UNK_10deeda90,&UNK_10deedb20,9,FUN_10805c36c,0);
    do {
      if (puRam0000000113728be8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113728be8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113728be8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113728be8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113728be8;
}



/* Entry: 10805c36c; end: 10805c377;  */

bool FUN_10805c36c(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 10805c378; end: 10805c3df; +[ResponseStatus descriptor] */

void FUN_10805c378(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728bf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b93ba0,
                        &PTR____CFConstantStringClassReference_110ed0598,&PTR_DAT_1132508f8,
                        &PTR_s_code_113250910,1,8,0x1c);
    puRam0000000113728bf0 = puVar1;
  }
  return;
}



/* Entry: 10805c3e0; end: 10805c447; +[CreateCustomStoryGroupRequest descriptor] */

void FUN_10805c3e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728bf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b93bf0,
                        &PTR____CFConstantStringClassReference_110ed05b8,&PTR_DAT_1132508f8,
                        &PTR_DAT_1132509d0,2,0x18,0x1c);
    puRam0000000113728bf8 = puVar1;
  }
  return;
}



/* Entry: 10805c448; end: 10805c4af; +[CreateCustomStoryGroupResponse descriptor] */

void FUN_10805c448(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728c00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b93c40,
                        &PTR____CFConstantStringClassReference_110ed05d8,&PTR_DAT_1132508f8,
                        &PTR_DAT_113250c10,3,0x20,0x1c);
    puRam0000000113728c00 = puVar1;
  }
  return;
}



/* Entry: 10805c4b0; end: 10805c517; +[DeleteCustomStoryGroupRequest descriptor] */

void FUN_10805c4b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728c08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b93c90,
                        &PTR____CFConstantStringClassReference_110ed05f8,&PTR_DAT_1132508f8,
                        &PTR_DAT_113250a10,2,0x18,0x1c);
    puRam0000000113728c08 = puVar1;
  }
  return;
}



/* Entry: 10805c518; end: 10805c57f; +[DeleteCustomStoryGroupResponse descriptor] */

void FUN_10805c518(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728c10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b93ce0,
                        &PTR____CFConstantStringClassReference_110ed0618,&PTR_DAT_1132508f8,0,0,4,
                        0x1c);
    puRam0000000113728c10 = puVar1;
  }
  return;
}



/* Entry: 10805c580; end: 10805c60b; +[UpdateCustomStoryGroupRequest descriptor] */

undefined * FUN_10805c580(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728c18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b93d30,
                        &PTR____CFConstantStringClassReference_110ed0638,&PTR_DAT_1132508f8,
                        &PTR_DAT_1132512b0,0xd,0x60,0x1c);
    func_0x00010c229040();
    puRam0000000113728c18 = puVar1;
  }
  return puRam0000000113728c18;
}



/* Entry: 10805c60c; end: 10805c673; +[UpdateCustomStoryGroupResponse descriptor] */

void FUN_10805c60c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728c20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b93d80,
                        &PTR____CFConstantStringClassReference_110ed0658,&PTR_DAT_1132508f8,
                        &PTR_s_groupVersion_113250930,1,0x10,0x1c);
    puRam0000000113728c20 = puVar1;
  }
  return;
}



/* Entry: 10805c674; end: 10805c6ff; +[UpdateCustomStoryGroupLegacyRequest descriptor] */

undefined * FUN_10805c674(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728c28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b93dd0,
                        &PTR____CFConstantStringClassReference_110ed0678,&PTR_DAT_1132508f8,
                        &PTR_DAT_1132510d0,7,0x30,0x1c);
    func_0x00010c229040();
    puRam0000000113728c28 = puVar1;
  }
  return puRam0000000113728c28;
}



/* Entry: 10805c700; end: 10805c767; +[UpdateCustomStoryGroupLegacyResponse descriptor] */

void FUN_10805c700(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728c30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b93e20,
                        &PTR____CFConstantStringClassReference_110ed0698,&PTR_DAT_1132508f8,
                        &PTR_DAT_113250c70,3,0x20,0x1c);
    puRam0000000113728c30 = puVar1;
  }
  return;
}



/* Entry: 10805c768; end: 10805c7f3; +[UpdateCustomStoryGroupMembershipRequest descriptor] */

undefined * FUN_10805c768(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728c38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b93e70,
                        &PTR____CFConstantStringClassReference_110ed06b8,&PTR_DAT_1132508f8,
                        &PTR_DAT_1132511b0,8,0x30,0x1c);
    func_0x00010c229040();
    puRam0000000113728c38 = puVar1;
  }
  return puRam0000000113728c38;
}



/* Entry: 10805c7f4; end: 10805c85b; +[UpdateCustomStoryGroupMembershipResponse descriptor] */

void FUN_10805c7f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728c40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b93ec0,
                        &PTR____CFConstantStringClassReference_110ed06d8,&PTR_DAT_1132508f8,
                        &PTR_s_groupVersion_113250950,1,0x10,0x1c);
    puRam0000000113728c40 = puVar1;
  }
  return;
}



/* Entry: 10805c85c; end: 10805c8d7; +[GetCustomStoryGroupRequest descriptor] */

undefined * FUN_10805c85c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728c48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b93f10,
                        &PTR____CFConstantStringClassReference_110ed06f8,&PTR_DAT_1132508f8,
                        &PTR_DAT_113250df0,4,0x18,0x1c);
    func_0x00010c2289e0();
    puRam0000000113728c48 = puVar1;
  }
  return puRam0000000113728c48;
}



/* Entry: 10805c8d8; end: 10805c93f; +[GetCustomStoryGroupResponse descriptor] */

void FUN_10805c8d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728c50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b93f60,
                        &PTR____CFConstantStringClassReference_110ed0718,&PTR_DAT_1132508f8,
                        &PTR_DAT_113250a50,2,0x18,0x1c);
    puRam0000000113728c50 = puVar1;
  }
  return;
}



/* Entry: 10805c940; end: 10805c9a7; +[MemberPublicInfo descriptor] */

void FUN_10805c940(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728c58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b93fb0,
                        &PTR____CFConstantStringClassReference_110ed0738,&PTR_DAT_1132508f8,
                        &PTR_s_userId_113251010,6,0x38,0x1c);
    puRam0000000113728c58 = puVar1;
  }
  return;
}


