/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105108db8; end: 105108e1f; -[SCCommunityPillTapRouteActionImpl .cxx_destruct] */

void FUN_105108db8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
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



/* Entry: 105108e20; end: 105108fdf; -[SCCommunityPillTapWorkflow initWithRouter:groupId:customStoriesDataFetcher:delegate:performer:userId:circumstanceEngine:runtime:communityOrgService:] */

undefined1 *
FUN_105108e20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar2 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126e6318;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined8 *)((long)puVar2 + 8) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined8 *)((long)puVar2 + 0x10) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x18);
    *(undefined8 *)((long)puVar2 + 0x18) = param_5;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar2 + 0x20),param_6);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x28);
    *(undefined8 *)((long)puVar2 + 0x28) = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x30);
    *(undefined8 *)((long)puVar2 + 0x30) = param_8;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x38);
    *(undefined8 *)((long)puVar2 + 0x38) = param_11;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x40);
    *(undefined8 *)((long)puVar2 + 0x40) = param_12;
    _objc_release(uVar3);
    puVar1 = PTR_PTR_1133ba4b8;
    _objc_retain(PTR_PTR_1133ba4b8);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x48);
    *(undefined **)((long)puVar2 + 0x48) = puVar1;
    _objc_release(uVar3);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 105108fe0; end: 1051090cf; -[SCCommunityPillTapWorkflow beginWorkflow] */

void FUN_105108fe0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf625a0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1051090d0; end: 105109117;  */

void FUN_1051090d0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7ab60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105109118; end: 1051093af; -[SCCommunityPillTapWorkflow _presentCommunityProfileOrOtherActionsWithCustomStories:] */

void FUN_105109118(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_f0,auStack_68);
    _objc_retain(param_3);
    func_0x00010c0f7480(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_f0);
    goto LAB_105109340;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar6);
  lVar2 = lVar1;
  func_0x00010bf60900();
  if ((int)lVar2 == 0) {
    uVar8 = *(undefined8 *)(param_1 + 8);
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    uStack_d8 = 0x105109414;
    puStack_d0 = &UNK_110868198;
    puVar7 = auStack_b0;
    _objc_copyWeak(puVar7,auStack_68);
    uStack_c8 = uVar4;
    uStack_c0 = uVar5;
    uStack_b8 = uVar6;
    func_0x00010c1429e0(uVar8);
LAB_105109320:
    _objc_destroyWeak(puVar7);
  }
  else {
    lVar2 = lVar1;
    func_0x00010c29ef80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      uVar8 = *(undefined8 *)(param_1 + 8);
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_1051093b0;
      puStack_90 = &UNK_110868198;
      puVar7 = auStack_70;
      _objc_copyWeak(puVar7,auStack_68);
      uStack_88 = uVar4;
      uStack_80 = uVar5;
      uStack_78 = uVar6;
      func_0x00010c1429e0(uVar8);
      goto LAB_105109320;
    }
  }
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
LAB_105109340:
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 1051093b0; end: 1051094cb;  */

void FUN_1051093b0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c10bb40(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1051094cc; end: 10510979f; -[SCCommunityPillTapWorkflow _presentPendingCommunityDialogOrOtherActionsWithCustomStories:pendingCustomStories:] */

void FUN_1051094cc(long param_1,undefined1 *param_2,long param_3,undefined **param_4)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  bool bVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [264];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar1 == (undefined **)0x0) {
    lVar2 = param_3;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52a60();
    lVar6 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(lVar2);
        }
        lVar4 = *(long *)(lVar9 * 8);
        func_0x00010c27dd80();
        if (lVar4 == 7) {
          bVar8 = true;
          goto LAB_105109648;
        }
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    }
    bVar8 = false;
LAB_105109648:
    _objc_release(lVar2);
    ppuVar1 = param_4;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar1;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (ppuVar5 != (undefined **)0x0) {
      ppuVar10 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(ppuVar1);
        }
        lVar6 = *(long *)((long)ppuVar10 * 8);
        func_0x00010c27dd80();
        if (lVar6 == 7) {
          _objc_release(ppuVar1);
          goto LAB_105109708;
        }
        ppuVar10 = (undefined **)((long)ppuVar10 + 1);
      } while (ppuVar5 != ppuVar10);
      ppuVar5 = ppuVar1;
      func_0x00010bf52a60();
    }
    _objc_release(ppuVar1);
    if (bVar8) {
LAB_105109708:
      ppuVar1 = (undefined **)PTR_PTR_1133ba4a8;
      _objc_retain(PTR_PTR_1133ba4a8);
      uVar7 = *(undefined8 *)(param_1 + 0x48);
      *(undefined ***)(param_1 + 0x48) = ppuVar1;
      _objc_release(uVar7);
      func_0x00010be47dc0(param_1);
    }
    else {
      func_0x00010be47e00(param_1);
    }
  }
  else {
    _objc_initWeak(auStack_170,param_1);
    uVar7 = *(undefined8 *)(param_1 + 8);
    puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_190 = 0xc2000000;
    pcStack_188 = FUN_1051097a0;
    puStack_180 = &UNK_1108681c8;
    ppuVar1 = &puStack_198;
    param_2 = auStack_170;
    _objc_copyWeak(auStack_178,param_2);
    func_0x00010c1429e0(uVar7);
    _objc_destroyWeak(auStack_178);
    _objc_destroyWeak(auStack_170);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar1 + 4);
  _objc_destroyWeak(auStack_170);
  __Unwind_Resume();
  _objc_retain(param_2);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    func_0x00010c10d7e0(param_2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1051097a0; end: 1051097ef;  */

void FUN_1051097a0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c10d7e0(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1051097f0; end: 1051098bf; -[SCCommunityPillTapWorkflow _launchNonVerifiedProfileIfQualified] */

void FUN_1051097f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfc69a0(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  return;
}



/* Entry: 1051098c0; end: 1051099b3;  */

void FUN_1051098c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b4d98;
  func_0x00010bfbc0e0(PTR_PTR_1126b4d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = auStack_48;
  _objc_copyWeak(puVar2,param_1 + 0x28);
  func_0x0001080608e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a1720(puVar1);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1051099b4; end: 1051099fb;  */

void FUN_1051099b4(double param_1,long param_2)

{
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  if (param_1 == 0.0) {
    func_0x00010be47dc0();
  }
  else {
    func_0x00010be489a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1051099fc; end: 105109af7; -[SCCommunityPillTapWorkflow _launchNonVerifiedCommunityProfile] */

void FUN_1051099fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c1429e0(uVar4);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105109af8; end: 105109b5b;  */

void FUN_105109af8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10bb40(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105109b5c; end: 105109c53; -[SCCommunityPillTapWorkflow didSelectLeavePendingCommunity] */

void FUN_105109b5c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7420(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105109c54; end: 105109c9b;  */

void FUN_105109c54(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7c160();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105109c9c; end: 105109daf; -[SCCommunityPillTapWorkflow _presentLeaveCustomStoryAlertWithPendingCustomStory:] */

void FUN_105109c9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_PTR_1126b47a8;
  _objc_retain(param_3);
  _objc_alloc();
  uVar4 = param_3;
  func_0x00010c11ac00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c27dd80(param_3);
  uVar3 = param_3;
  func_0x00010bf85d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c03bfa0(puVar1,param_2,uVar4,uVar2,1,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105109db0;
  puStack_50 = &UNK_110868258;
  puStack_48 = puVar1;
  _objc_retain(puVar1);
  func_0x00010c1429e0(uVar4,param_2,&puStack_68);
  _objc_release(puStack_48);
  _objc_release(puVar1);
  return;
}



/* Entry: 105109db0; end: 105109dbb;  */

void FUN_105109db0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_presentLeaveCustomStoryAlertCust_112620c80,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105109dbc; end: 105109dbf; -[SCCommunityPillTapWorkflow didComplete] */

void FUN_105109dbc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be09fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__endWorkflow_112560190);
  return;
}



/* Entry: 105109dc0; end: 105109deb; -[SCCommunityPillTapWorkflow _endWorkflow] */

void FUN_105109dc0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf73cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105109dec; end: 105109e2b; -[SCCommunityPillTapWorkflow _launchWaitlistNonVerifiedCommunityProfile] */

void FUN_105109dec(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1133ba4a8;
  _objc_retain(PTR_PTR_1133ba4a8);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be47dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__launchNonVerifiedCommunityProfi_11256f910);
  return;
}



/* Entry: 105109e2c; end: 105109e6b; -[SCCommunityPillTapWorkflow launchPendingNonVerifiedCommunityProfile] */

void FUN_105109e2c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1133ba4b0;
  _objc_retain(PTR_PTR_1133ba4b0);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be47dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__launchNonVerifiedCommunityProfi_11256f910);
  return;
}



/* Entry: 105109e6c; end: 105109eeb; -[SCCommunityPillTapWorkflow .cxx_destruct] */

void FUN_105109e6c(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105109eec; end: 10510a093; -[SCCommunitySendToPresenter initWithUiContainer:sendToScopeLauncher:sendToScopeServices:conversationParser:messageSender:externalLinkSendingService:notificationPool:offPlatformLinkGenerationService:] */

undefined1 *
FUN_105109eec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126e6320;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10510a094; end: 10510a52f; -[SCCommunitySendToPresenter presentSendToWithSourcePageViewName:delegate:] */

void FUN_10510a094(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
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
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c076220();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar2;
    func_0x00010bfbf740();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae720;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_10510a530;
    puStack_98 = &UNK_110850038;
    _objc_retain();
    uStack_90 = uVar14;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b0808;
    _objc_alloc();
    func_0x00010c051820();
    puVar5 = PTR_PTR_1126b4da0;
    _objc_alloc();
    func_0x00010c058900();
    uVar15 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar5;
    _objc_release(uVar15);
    puVar6 = PTR_PTR_1126b0810;
    _objc_alloc();
    func_0x00010c046120();
    puVar7 = PTR_PTR_1126b0818;
    _objc_alloc();
    puVar5 = puVar7;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c044540();
    _objc_release(puVar5);
    _objc_initWeak(auStack_b8,param_1);
    puVar5 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_c0,auStack_b8);
    func_0x00010bf11fe0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126b07e8;
    _objc_alloc();
    func_0x00010c061960();
    puVar9 = PTR_PTR_1126b4da8;
    _objc_alloc();
    func_0x00010c01e380(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18));
    puVar10 = PTR_PTR_1126b2960;
    _objc_alloc();
    puVar11 = puVar10;
    func_0x000108061d50();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010beec820(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00d260(0x3ff0000000000000);
    _objc_release(uVar15);
    _objc_release(puVar11);
    puVar11 = PTR_PTR_1126b07f0;
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe43e0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    puVar12 = PTR_PTR_1126b07f8;
    _objc_alloc(PTR_PTR_1126b07f8);
    lVar13 = param_1;
    func_0x00010be21980(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01dde0(puVar12);
    _objc_release(lVar13);
    uVar15 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf23ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x10));
    _objc_release(uVar15);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uStack_90);
    _objc_release(uVar14);
    _objc_release(uVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_b8);
  __Unwind_Resume();
  puVar3 = PTR_PTR_1126ae558;
  puVar5 = PTR_PTR_1126b0800;
  _objc_alloc(PTR_PTR_1126b0800);
  uVar14 = *(undefined8 *)(param_4 + 0x20);
  func_0x00010beec820(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051840(puVar5);
  func_0x00010bfe9ca0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10510a530; end: 10510a5cf;  */

void FUN_10510a530(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126ae558;
  puVar1 = PTR_PTR_1126b0800;
  _objc_alloc(PTR_PTR_1126b0800);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010beec820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051840(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x20),0,0x12,0,0);
  func_0x00010bfe9ca0(puVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10510a5d0; end: 10510a60f;  */

void FUN_10510a5d0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be21a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10510a610; end: 10510a6af; -[SCCommunitySendToPresenter _getPreviewImage] */

void FUN_10510a610(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110dc61d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x3a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c182220(puVar1,param_2,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10510a6b0; end: 10510a6db; -[SCCommunitySendToPresenter _getPrefillMessageWithSourcePageViewName:] */

void FUN_10510a6b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0x38) {
    func_0x000108061de0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10510a6dc; end: 10510a75f; -[SCCommunitySendToPresenter .cxx_destruct] */

void FUN_10510a6dc(long param_1)

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



/* Entry: 10510a760; end: 10510a8d3; -[SCCommunitySendToWorkflowDelegate initWithUiContainer:sendToScopeLauncher:sharingScopeDelegate:conversationParser:messageSender:externalLinkSendingService:notificationPool:] */

undefined1 *
FUN_10510a760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126e6328;
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
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
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



/* Entry: 10510a8d4; end: 10510a8d7; -[SCCommunitySendToWorkflowDelegate didDismissWithSelectedItems:sendToDismissSource:] */

void FUN_10510a8d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde3970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__completeWorkflow_1125567f8);
  return;
}



/* Entry: 10510a8d8; end: 10510ad1f; -[SCCommunitySendToWorkflowDelegate didSendWithSelectionState:] */

void FUN_10510a8d8(long param_1,undefined1 *param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *unaff_x25;
  undefined **unaff_x26;
  undefined **ppuVar11;
  undefined1 auStack_210 [8];
  undefined *puStack_208;
  undefined **ppuStack_200;
  undefined *puStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  long lStack_1d0;
  undefined **ppuStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined **ppuStack_150;
  undefined1 auStack_148 [8];
  long lStack_140;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = param_3;
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010c1599e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf529e0();
  ppuVar8 = param_3;
  func_0x00010c159d20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar8;
  func_0x00010bf529e0();
  _objc_release(ppuVar8);
  _objc_release(ppuVar1);
  if ((long)ppuVar2 + (long)ppuVar9 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    lStack_198 = param_1;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    uStack_1a8 = uVar3;
    func_0x00010c22aec0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    uStack_1a0 = uVar3;
    _objc_alloc_init();
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    ppuStack_190 = param_3;
    puStack_180 = puVar4;
    func_0x00010c1599e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = &puStack_130;
    ppuStack_188 = param_3;
    func_0x00010bf52a60();
    param_1 = 0;
    if (param_3 != (undefined **)0x0) {
      lVar6 = *plStack_120;
      do {
        ppuVar8 = (undefined **)0x0;
        do {
          if (*plStack_120 != lVar6) {
            _objc_enumerationMutation(ppuStack_188);
          }
          ppuVar11 = *(undefined ***)(lStack_128 + (long)ppuVar8 * 8);
          ppuVar7 = ppuVar11;
          func_0x00010c0f4aa0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          puVar4 = PTR_PTR_1126b01c0;
          ppuVar9 = (undefined **)(ulong)(ppuVar7 == (undefined **)0x0);
          unaff_x26 = ppuVar11;
          func_0x00010c122a80();
          _objc_retainAutoreleasedReturnValue();
          ppuVar1 = unaff_x26;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar2 = ppuVar1;
          func_0x00010c122b80();
          _objc_retainAutoreleasedReturnValue();
          if (ppuVar7 == (undefined **)0x0) {
            func_0x00010c294260(puVar4);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar2);
            _objc_release(ppuVar1);
            ppuVar7 = (undefined **)0x1;
          }
          else {
            func_0x00010bfcf680(puVar4);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar2);
            _objc_release(ppuVar1);
            _objc_release(unaff_x26);
            func_0x00010c0f4aa0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar7 = ppuVar11;
            func_0x00010bf529e0();
            unaff_x26 = ppuVar11;
          }
          _objc_release(unaff_x26);
          func_0x00010befa120(puStack_180);
          _objc_release(puVar4);
          param_1 = (long)ppuVar7 + param_1;
          ppuVar8 = (undefined **)((long)ppuVar8 + 1);
        } while (param_3 != ppuVar8);
        ppuVar7 = &puStack_130;
        param_3 = ppuStack_188;
        func_0x00010bf52a60();
      } while (param_3 != (undefined **)0x0);
    }
    unaff_x25 = (undefined *)0x0;
    _objc_release(ppuStack_188);
    puVar4 = puStack_180;
    func_0x00010bf529e0();
    if (puVar4 != (undefined *)0x0) {
      _objc_initWeak(auStack_138,lStack_198);
      ppuVar9 = *(undefined ***)(lStack_198 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = puStack_180;
      func_0x00010bf51e00();
      unaff_x26 = ppuVar9;
      func_0x00010c246920();
      _objc_retainAutoreleasedReturnValue();
      puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_170 = 0xc2000000;
      pcStack_168 = FUN_10510ad20;
      puStack_160 = &UNK_1108682b8;
      uStack_158 = uStack_1a0;
      param_2 = auStack_138;
      _objc_copyWeak(auStack_148);
      ppuVar7 = ppuStack_190;
      ppuVar1 = ppuStack_190;
      _objc_retain(ppuStack_190);
      ppuStack_150 = ppuVar7;
      lStack_140 = param_1;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = &puStack_178;
      func_0x00010c297260(unaff_x26);
      _objc_release(ppuVar1);
      _objc_release(unaff_x26);
      _objc_release(unaff_x25);
      _objc_release(ppuVar9);
      _objc_release(ppuStack_150);
      _objc_destroyWeak(auStack_148);
      _objc_destroyWeak(auStack_138);
    }
    ppuVar1 = ppuStack_190;
    func_0x00010c159d20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010bf529e0();
    _objc_release(ppuVar1);
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar1 = ppuStack_190;
      func_0x00010c159d20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar1;
      func_0x00010be9f140(lStack_198);
      _objc_release(ppuVar1);
    }
    func_0x00010bde3960(lStack_198);
    _objc_release(puStack_180);
    _objc_release(uStack_1a0);
    _objc_release(uStack_1a8);
    param_3 = ppuStack_190;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar2 + 6);
  _objc_destroyWeak(auStack_138);
  ppuVar11 = param_3;
  __Unwind_Resume();
  pcStack_1b8 = FUN_10510ad20;
  ppuStack_200 = unaff_x26;
  puStack_1f8 = unaff_x25;
  ppuStack_1f0 = ppuVar9;
  ppuStack_1e8 = ppuVar8;
  ppuStack_1e0 = ppuVar2;
  ppuStack_1d8 = ppuVar1;
  lStack_1d0 = param_1;
  ppuStack_1c8 = param_3;
  puStack_1c0 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  _objc_retain(ppuVar7);
  puVar5 = ppuVar11[4];
  func_0x00010c26b9e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_210,ppuVar11 + 6);
  _objc_retain(param_2);
  puVar10 = ppuVar11[5];
  _objc_retain(puVar10);
  puStack_208 = ppuVar11[7];
  func_0x00010c297260(puVar4);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar10);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_210);
  _objc_release(ppuVar7);
  _objc_release(param_2);
  return;
}



/* Entry: 10510ad20; end: 10510ae53;  */

void FUN_10510ad20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26b9e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,param_1 + 0x30);
  _objc_retain(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uStack_58 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c297260(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10510ae54; end: 10510aef7;  */

void FUN_10510ae54(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = param_2;
  func_0x00010c26bac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010befd440(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9f7e0(lVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10510aef8; end: 10510b19b; -[SCCommunitySendToWorkflowDelegate _sendMessageToConversations:text:additionalText:numOfRecipients:] */

void FUN_10510aef8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b1a40;
  _objc_opt_new(PTR_PTR_1126b1a40);
  func_0x00010c2b9b80();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2aa660(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bc480(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2afd40(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar3 = param_3;
  func_0x00010bf026a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x0001086063f4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c2ac2e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf37880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_initWeak(auStack_68,param_1);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf50b20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c15d840(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10510b19c; end: 10510b1cf;  */

void FUN_10510b19c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beba600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10510b1d0; end: 10510b2ff; -[SCCommunitySendToWorkflowDelegate _sendExternallyToSelectedContacts:configuration:] */

void FUN_10510b1d0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if ((param_4 != 0) && (lVar1 != 0)) {
    lVar1 = param_4;
    func_0x00010c26b9e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_4;
      func_0x00010c26b9e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar1);
      if (lVar2 != 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = param_4;
        func_0x00010c26b9e0(param_4);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_4;
        func_0x00010c22c620(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c15c5a0(uVar3,param_2,param_3,lVar2,lVar4);
        _objc_release(lVar4);
        _objc_release(lVar2);
        _objc_release(lVar1);
        _objc_release(uVar3);
      }
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10510b300; end: 10510b3c7; -[SCCommunitySendToWorkflowDelegate _showPostSendAlertWithResult:] */

void FUN_10510b300(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined **ppuStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  if (param_3 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110dc61f8;
    func_0x000108061d20();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110dc6218;
    func_0x000108061d38();
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10510b3c8;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = uVar1;
  uStack_40 = uVar2;
  ppuStack_38 = ppuVar3;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 10510b3c8; end: 10510b413;  */

void FUN_10510b3c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR_PTR_1126afde0;
  func_0x00010bf55ce0(PTR_PTR_1126afde0,param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340(uVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10510b414; end: 10510b4d7; -[SCCommunitySendToWorkflowDelegate _completeWorkflow] */

void FUN_10510b414(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_28,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010bf94c40(uVar2);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 10510b4d8; end: 10510b567;  */

void FUN_10510b4d8(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10510b568;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10510b568; end: 10510b593;  */

void FUN_10510b568(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfb720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10510b594; end: 10510b5db; -[SCCommunitySendToWorkflowDelegate _detachUI] */

void FUN_10510b594(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 8),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf74c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10510b5dc; end: 10510b643; -[SCCommunitySendToWorkflowDelegate .cxx_destruct] */

void FUN_10510b5dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 10510b644; end: 10510b8b7; -[SCCommunitySharingEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10510b644(long param_1,undefined8 param_2)

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
  undefined8 uVar17;
  long lVar18;
  undefined8 uStack_90;
  
  puVar1 = PTR_PTR_1126b4db0;
  _objc_alloc();
  lVar16 = (long)_DAT_11271c79c;
  lVar2 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11271c7a0;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c15d560();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uStack_90 = 0;
  }
  else {
    uStack_90 = param_1 + _DAT_11271c7bc;
    _objc_loadWeakRetained();
  }
  lVar6 = param_1 + _DAT_11271c7a4;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bf501a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11271c7a8;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c26c760();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11271c7ac;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bf9e260();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11271c7b0;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_11271c7b4;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c0e1840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0588e0(puVar1,param_2,lVar3,lVar5,uStack_90,lVar7,lVar9,lVar11,lVar13,lVar15);
  lVar18 = (long)_DAT_11271c7b8;
  uVar17 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar1;
  _objc_release(uVar17);
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
  _objc_release(uStack_90);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar17 = *(undefined8 *)(param_1 + lVar18);
  lVar2 = param_1 + lVar16;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010c247a40();
  param_1 = param_1 + lVar16;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10e180(uVar17,param_2,lVar4,lVar3);
  _objc_release(lVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10510b8b8; end: 10510b947; -[SCCommunitySharingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10510b8b8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271c7bc);
  _objc_destroyWeak(param_1 + _DAT_11271c7a0);
  _objc_destroyWeak(param_1 + _DAT_11271c7b0);
  _objc_destroyWeak(param_1 + _DAT_11271c7a8);
  _objc_destroyWeak(param_1 + _DAT_11271c7a4);
  _objc_destroyWeak(param_1 + _DAT_11271c7b4);
  _objc_destroyWeak(param_1 + _DAT_11271c7ac);
  _objc_destroyWeak(param_1 + _DAT_11271c79c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271c7b8,0);
  return;
}



/* Entry: 10510b948; end: 10510b963; -[SCUnifiedProfileCommunitiesSection sectionInsets] */

void FUN_10510b948(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c297350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0x4030000000000000,0x4024000000000000,0x4030000000000000,
             PTR__OBJC_CLASS___NSValue_1126afdf8,PTR_s_valueWithUIEdgeInsets__1126836f8);
  return;
}



/* Entry: 10510b964; end: 10510b9e7; -[SCUnifiedProfileCommunitiesSection sectionInfo] */

undefined1 * FUN_10510b964(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined8 uVar6;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110eb4ff8;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110e20e18;
  pppuVar4 = &ppuStack_20;
  pppuVar5 = &ppuStack_28;
  uVar6 = 1;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar1;
  }
  ___stack_chk_fail();
  ppuVar2 = &puStack_80;
  _objc_retain(pppuVar4);
  _objc_retain(pppuVar5);
  _objc_retain(uVar6);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  puStack_78 = PTR_PTR_1126e6330;
  puStack_80 = puVar1;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
  if (ppuVar2 != (undefined **)0x0) {
    _objc_retain(pppuVar4);
    uVar3 = *(undefined8 *)((long)ppuVar2 + 8);
    *(undefined ****)((long)ppuVar2 + 8) = pppuVar4;
    _objc_release(uVar3);
    _objc_retain(pppuVar5);
    uVar3 = *(undefined8 *)((long)ppuVar2 + 0x10);
    *(undefined ****)((long)ppuVar2 + 0x10) = pppuVar5;
    _objc_release(uVar3);
    _objc_retain(uVar6);
    uVar3 = *(undefined8 *)((long)ppuVar2 + 0x18);
    *(undefined8 *)((long)ppuVar2 + 0x18) = uVar6;
    _objc_release(uVar3);
    _objc_retain(in_x5);
    uVar3 = *(undefined8 *)((long)ppuVar2 + 0x20);
    *(undefined8 *)((long)ppuVar2 + 0x20) = in_x5;
    _objc_release(uVar3);
    _objc_retain(in_x6);
    uVar3 = *(undefined8 *)((long)ppuVar2 + 0x28);
    *(undefined8 *)((long)ppuVar2 + 0x28) = in_x6;
    _objc_release(uVar3);
  }
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(uVar6);
  _objc_release(pppuVar5);
  _objc_release(pppuVar4);
  return (undefined1 *)ppuVar2;
}



/* Entry: 10510b9e8; end: 10510bb0b; -[SCUnifiedProfileCommunitiesSectionActionHandler initWithCommunitiesOnboardingScopeExposer:communitiesProfileScopeLauncher:communityPillTapScopeExposer:featureSettingsService:circumstanceEngine:communitiesAttributionProviding:] */

undefined1 *
FUN_10510b9e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e6330;
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
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10510bb0c; end: 10510bde7; -[SCUnifiedProfileCommunitiesSectionActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_10510bb0c(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  _objc_retain(param_4);
  puVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar4 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c038f40(puVar2);
  _objc_release(lVar4);
  puVar3 = puVar1;
  func_0x00010c0720c0();
  if ((int)puVar3 == 0) {
    puVar3 = puVar1;
    func_0x00010c0720c0();
    if ((int)puVar3 == 0) goto LAB_10510bd24;
    puVar8 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b4db8;
    _objc_opt_class(PTR_PTR_1126b4db8);
    puVar6 = puVar8;
    _objc_opt_isKindOfClass(puVar8,puVar3);
    puVar3 = puVar8;
    if (((ulong)puVar6 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar8);
    if (puVar3 != (undefined *)0x0) {
      func_0x00010bee1820(param_1);
      puVar3 = puVar8;
      func_0x00010c082fe0();
      if ((int)puVar3 == 0) {
        puVar3 = PTR_PTR_1126b1008;
        _objc_alloc(PTR_PTR_1126b1008);
        puVar6 = puVar8;
        func_0x00010bfceb20(puVar8);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_1 + 0x38;
        _objc_loadWeakRetained(lVar4);
        func_0x00010c018fc0(puVar3);
        _objc_release(lVar4);
        _objc_release(puVar6);
        func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18));
      }
      else {
        puVar3 = PTR_PTR_1126b1450;
        _objc_alloc(PTR_PTR_1126b1450);
        puVar6 = puVar8;
        func_0x00010bfceb20(puVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = 9;
        func_0x00010bc9107c(9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0190a0(puVar3);
        _objc_release(uVar7);
        _objc_release(puVar6);
        func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x10));
      }
      _objc_release(puVar3);
      goto LAB_10510bda4;
    }
    puVar8 = (undefined *)0x0;
    uVar7 = 0;
  }
  else {
    func_0x00010bee1820(param_1);
    lVar4 = *(long *)(param_1 + 8);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
LAB_10510bd24:
      uVar7 = 0;
      goto LAB_10510bdb0;
    }
    puVar8 = PTR_PTR_1126b3e50;
    _objc_alloc(PTR_PTR_1126b3e50);
    uVar5 = 3;
    func_0x000100c6f294(3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0569a0(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar5);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
LAB_10510bda4:
    uVar7 = 1;
  }
  _objc_release(puVar8);
LAB_10510bdb0:
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  return uVar7;
}



/* Entry: 10510bde8; end: 10510be93; -[SCUnifiedProfileCommunitiesSectionActionHandler _updateSupIfNeeded] */

void FUN_10510bde8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000108060b30(uVar1,*(undefined8 *)(param_1 + 0x20));
  if ((int)uVar1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf42e80();
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar2);
    func_0x00010c17f6c0(uVar1);
    func_0x00010c17f6e0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10510be94; end: 10510bedb; -[SCUnifiedProfileCommunitiesSectionActionHandler verifiedCommunitiesOnboardingDidFinishWithComplete:] */

void FUN_10510be94(long param_1)

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



/* Entry: 10510bedc; end: 10510beeb; -[SCUnifiedProfileCommunitiesSectionActionHandler communitiesProfileDidDismissWithScope:] */

void FUN_10510bedc(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf94c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x10),PTR_s_endLaunchedFeatureWithScope__1125c2cc8);
    return;
  }
  return;
}



/* Entry: 10510beec; end: 10510bf33; -[SCUnifiedProfileCommunitiesSectionActionHandler didCompleteCommunityPillTapScope] */

void FUN_10510beec(long param_1)

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



/* Entry: 10510bf34; end: 10510bf4b; -[SCUnifiedProfileCommunitiesSectionActionHandler presentingViewController] */

void FUN_10510bf34(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10510bf4c; end: 10510bf57; -[SCUnifiedProfileCommunitiesSectionActionHandler setPresentingViewController:] */

void FUN_10510bf4c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 10510bf58; end: 10510bfbf; -[SCUnifiedProfileCommunitiesSectionActionHandler .cxx_destruct] */

void FUN_10510bf58(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
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



/* Entry: 10510bfc0; end: 10510c113; -[SCUnifiedProfileCommunitiesSectionDataProvider initWithCommunitiesAttributionProviding:resourceDownloader:customStoriesDataFetcher:featureSettingsService:circumstanceEngine:] */

undefined1 *
FUN_10510bfc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e6338;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b1130;
    func_0x00010c070420();
    *(char *)((long)puVar1 + 0x50) = (char)puVar3;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10510c114; end: 10510c203; -[SCUnifiedProfileCommunitiesSectionDataProvider setUp] */

void FUN_10510c114(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c155aa0();
  _objc_release(lVar1);
  func_0x00010be67060(param_1);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10510c204; end: 10510c24b;  */

void FUN_10510c204(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x58;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c155aa0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10510c24c; end: 10510c253; -[SCUnifiedProfileCommunitiesSectionDataProvider numberOfItemsInSection:] */

undefined8 FUN_10510c24c(void)

{
  return 1;
}



/* Entry: 10510c254; end: 10510c31b; -[SCUnifiedProfileCommunitiesSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_10510c254(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10510c31c;
  puStack_48 = &UNK_11085e2f8;
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x000100504554(param_3,&puStack_60);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10510c31c; end: 10510c35b;  */

void FUN_10510c31c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bde7360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10510c35c; end: 10510c3b3; -[SCUnifiedProfileCommunitiesSectionDataProvider _containerCellViewModel] */

void FUN_10510c35c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bf430a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010be6cb20(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bde25a0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10510c3b4; end: 10510c3cf; -[SCUnifiedProfileCommunitiesSectionDataProvider getLeftSIGIcon] */

void FUN_10510c3b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe7b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4038000000000000,0x4038000000000000,PTR_PTR_1126b0c40,
             PTR_s_imageFromIconType_size_sigColor__1125d7888,0x132,0x49);
  return;
}



/* Entry: 10510c3d0; end: 10510c567; -[SCUnifiedProfileCommunitiesSectionDataProvider _onboardingCellViewModel] */

void FUN_10510c3d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  uVar1 = param_1;
  func_0x00010bfc6ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  puVar3 = PTR_PTR_1126b2c10;
  _objc_alloc(PTR_PTR_1126b2c10);
  puVar4 = puVar3;
  func_0x000108061e10();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000108061e28();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x000108f63ca4(puVar4,puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x000108f637bc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd2820();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x000108f62d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053700(puVar3);
  _objc_release(uVar8);
  _objc_release(param_1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  func_0x00010bffd260();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10510c568; end: 10510c71f; -[SCUnifiedProfileCommunitiesSectionDataProvider _communityCellViewModel] */

void FUN_10510c568(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  
  lVar1 = param_1;
  func_0x00010bfc6ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf51e00(uVar3);
  func_0x00010c01b460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dc62b8,uVar3);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126b2c10;
  _objc_alloc(PTR_PTR_1126b2c10);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf430a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x000108f62f68();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  func_0x000108f634a8(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x000108f637bc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd2820();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x000108f62cd0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053700(puVar4,param_2,uVar3,uVar6,0,uVar7,param_1,puVar2,0,0,0,lVar8,
                      &PTR____CFConstantStringClassReference_110dc6258,lVar1);
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar5);
  puVar9 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  func_0x00010bffd260();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10510c720; end: 10510c79f; -[SCUnifiedProfileCommunitiesSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_10510c720(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_initWeak(auStack_80,puVar1);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10510c8cc;
    puStack_90 = &UNK_110845ae0;
    puVar5 = auStack_80;
    _objc_copyWeak(auStack_88,puVar5);
    ppuVar2 = &puStack_a8;
    _objc_retainBlock();
    ppuStack_78 = &PTR____CFConstantStringClassReference_110dc6238;
    ppuVar3 = ppuVar2;
    _objc_retainBlock();
    ppuStack_70 = ppuVar3;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_88);
    puVar4 = auStack_80;
    _objc_destroyWeak();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
      ___stack_chk_fail();
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_80);
      __Unwind_Resume(puVar4);
      _objc_retain(puVar5);
      puVar4 = puVar4 + 0x20;
      _objc_loadWeakRetained(puVar4);
      func_0x00010bde4d40();
      _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10510c7a0; end: 10510c8cb; -[SCUnifiedProfileCommunitiesSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_10510c7a0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
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
  pcStack_68 = FUN_10510c8cc;
  puStack_60 = &UNK_110845ae0;
  puVar5 = auStack_50;
  _objc_copyWeak(auStack_58,puVar5);
  ppuVar1 = &puStack_78;
  _objc_retainBlock();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110dc6238;
  ppuVar2 = ppuVar1;
  _objc_retainBlock();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_40 = ppuVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_58);
  puVar4 = auStack_50;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_50);
  __Unwind_Resume(puVar4);
  _objc_retain(puVar5);
  puVar4 = puVar4 + 0x20;
  _objc_loadWeakRetained(puVar4);
  func_0x00010bde4d40();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10510c8cc; end: 10510c913;  */

void FUN_10510c8cc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde4d40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10510c914; end: 10510c983; -[SCUnifiedProfileCommunitiesSectionDataProvider _configureCell:] */

void FUN_10510c914(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126aeaa0;
  _objc_opt_class(PTR_PTR_1126aeaa0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1eccc0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10510c984; end: 10510ca73; -[SCUnifiedProfileCommunitiesSectionDataProvider setSectionDataModel:] */

void FUN_10510c984(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar3;
  long lVar4;
  long lVar2;
  
  _objc_retain(param_3);
  lVar4 = *(long *)(param_1 + 0x68);
  _objc_retain(lVar4);
  _objc_retain(param_3);
  if (lVar4 == param_3) {
    iVar1 = 1;
  }
  else if (param_3 == 0) {
    iVar1 = 0;
  }
  else {
    lVar2 = lVar4;
    func_0x00010c071ae0(lVar4,param_2,param_3);
    iVar1 = (int)lVar2;
  }
  _objc_release(param_3);
  _objc_release(lVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  *(long *)(param_1 + 0x68) = param_3;
  _objc_release(uVar3);
  if (*(char *)(param_1 + 0x50) == '\x01') {
    if ((iVar1 == 0) || ((*(byte *)(param_1 + 0x51) & 1) == 0)) {
      lVar4 = param_1 + 0x58;
      _objc_loadWeakRetained(lVar4);
      func_0x00010c155aa0();
      _objc_release(lVar4);
      *(undefined1 *)(param_1 + 0x51) = 1;
    }
    return;
  }
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10510ca74; end: 10510ca7b; -[SCUnifiedProfileCommunitiesSectionDataProvider dataLoadingStatus] */

undefined8 FUN_10510ca74(void)

{
  return 2;
}



/* Entry: 10510ca7c; end: 10510ca7f; -[SCUnifiedProfileCommunitiesSectionDataProvider didUpdateWithAnnouncerIdentifier:] */

void FUN_10510ca7c(void)

{
  return;
}



/* Entry: 10510ca80; end: 10510ca83; -[SCUnifiedProfileCommunitiesSectionDataProvider addListener:] */

void FUN_10510ca80(void)

{
  return;
}



/* Entry: 10510ca84; end: 10510ca87; -[SCUnifiedProfileCommunitiesSectionDataProvider removeListener:] */

void FUN_10510ca84(void)

{
  return;
}



/* Entry: 10510ca88; end: 10510ca93; +[SCUnifiedProfileCommunitiesSectionDataProvider announcerIdentifier] */

undefined ** FUN_10510ca88(void)

{
  return &PTR____CFConstantStringClassReference_110dc6278;
}



/* Entry: 10510ca94; end: 10510cbd3; -[SCUnifiedProfileCommunitiesSectionDataProvider _observeVerifiedAndPendingCommunitiesMembershipChange] */

void FUN_10510ca94(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf62560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0f7460();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar5 = uVar2;
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10510cbd4; end: 10510cf93;  */

void FUN_10510cbd4(long param_1,undefined *param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar2 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      puVar9 = *(undefined **)((long)puVar11 * 8);
      puVar10 = puVar9;
      func_0x00010bfa2680();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar10;
      func_0x00010bf0a5c0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 == (undefined *)0x0) {
        _objc_release(puVar10);
      }
      else {
        puVar5 = puVar9;
        func_0x00010bf60900();
        _objc_release(puVar3);
        _objc_release(puVar10);
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (((ulong)puVar5 & 1) != 0) {
          func_0x000108061e40();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar9;
          func_0x00010c0f4aa0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf529e0();
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          _objc_release(puVar10);
          puVar2 = (undefined *)(param_1 + 0x20);
          _objc_loadWeakRetained();
          puVar11 = puVar9;
          func_0x00010c11ac00(puVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf85d80();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar2;
          puVar5 = puVar11;
          puVar6 = puVar9;
          puVar7 = puVar3;
          func_0x00010bea2d00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar9);
          goto LAB_10510cf30;
        }
      }
      puVar11 = puVar11 + 1;
    } while (puVar2 != puVar11);
    puVar2 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  param_2 = param_3;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (puVar2 == (undefined *)0x0) {
      _objc_release(param_2);
      param_2 = (undefined *)(param_1 + 0x20);
      _objc_loadWeakRetained();
      puVar5 = (undefined *)0x0;
      puVar6 = (undefined *)0x0;
      puVar7 = (undefined *)0x0;
      puVar10 = param_2;
      func_0x00010bea2d00();
      _objc_retainAutoreleasedReturnValue();
LAB_10510cf44:
      _objc_release(param_2);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
        ___stack_chk_fail();
        _objc_retain(puVar7);
        puVar2 = PTR_PTR_1126b4db8;
        _objc_retain(puVar6);
        _objc_retain(puVar5);
        _objc_alloc();
        func_0x00010c018b00();
        _objc_release(puVar6);
        _objc_release(puVar5);
        uVar4 = *(undefined8 *)(param_3 + 0x30);
        *(undefined **)(param_3 + 0x30) = puVar2;
        _objc_release(uVar4);
        uVar4 = *(undefined8 *)(param_3 + 0x40);
        *(undefined **)(param_3 + 0x40) = puVar7;
        _objc_retain(puVar7);
        _objc_release(uVar4);
        puVar10 = *(undefined **)(param_3 + 0x30);
        _objc_retain(puVar10);
        _objc_release(puVar7);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
      return;
    }
    puVar10 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      puVar11 = *(undefined **)((long)puVar10 * 8);
      puVar3 = puVar11;
      func_0x00010bfa2680();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar3;
      func_0x00010bf0a5c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar3);
      if (puVar9 != (undefined *)0x0) {
        puVar3 = (undefined *)(param_1 + 0x20);
        _objc_loadWeakRetained();
        puVar2 = puVar11;
        func_0x00010c11ac00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar11;
        func_0x000108061e58();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar3;
        puVar5 = puVar2;
        puVar6 = puVar11;
        puVar7 = puVar9;
        func_0x00010bea2d00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
LAB_10510cf30:
        _objc_release(puVar11);
        _objc_release(puVar2);
        _objc_release(puVar3);
        goto LAB_10510cf44;
      }
      puVar10 = puVar10 + 1;
    } while (puVar2 != puVar10);
    puVar2 = param_2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10510cf94; end: 10510d057; -[SCUnifiedProfileCommunitiesSectionDataProvider _setCommunityAttributesWithGroupId:communityName:isVerified:subtitle:] */

void FUN_10510cf94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b4db8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c018b00();
  _objc_release(param_4);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10510d058; end: 10510d163; -[SCUnifiedProfileCommunitiesSectionDataProvider _badgeViewModel] */

void FUN_10510d058(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17f760();
  _objc_release(uVar1);
  uVar2 = *(ulong *)(param_1 + 0x28);
  func_0x000108060b30(uVar2,*(undefined8 *)(param_1 + 0x20));
  if ((uVar2 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x000108060c3c(uVar1,*(undefined8 *)(param_1 + 8));
    if ((int)uVar1 == 0) {
      puVar4 = (undefined *)0x0;
      goto LAB_10510d150;
    }
  }
  puVar4 = PTR_PTR_1126b4dc0;
  _objc_alloc(PTR_PTR_1126b4dc0);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff6820(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17f6a0();
  _objc_release(uVar1);
LAB_10510d150:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10510d164; end: 10510d1cb; -[SCUnifiedProfileCommunitiesSectionDataProvider _resetBadgingSup] */

void FUN_10510d164(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17f6a0();
  func_0x00010c17f6e0(uVar1,param_2,0);
  func_0x00010c17f6c0(uVar1,param_2,0);
  func_0x00010c17f880(uVar1,param_2,0);
  func_0x00010c17f760(uVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10510d1cc; end: 10510d1e3; -[SCUnifiedProfileCommunitiesSectionDataProvider dataProviderDelegate] */

void FUN_10510d1cc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10510d1e4; end: 10510d1ef; -[SCUnifiedProfileCommunitiesSectionDataProvider setDataProviderDelegate:] */

void FUN_10510d1e4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 10510d1f0; end: 10510d1f7; -[SCUnifiedProfileCommunitiesSectionDataProvider updateQueuePerformer] */

undefined8 FUN_10510d1f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10510d1f8; end: 10510d227; -[SCUnifiedProfileCommunitiesSectionDataProvider setUpdateQueuePerformer:] */

void FUN_10510d1f8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10510d228; end: 10510d22f; -[SCUnifiedProfileCommunitiesSectionDataProvider sectionDataModel] */

undefined8 FUN_10510d228(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10510d230; end: 10510d2d3; -[SCUnifiedProfileCommunitiesSectionDataProvider .cxx_destruct] */

void FUN_10510d230(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x58);
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



/* Entry: 10510d2d4; end: 10510d54b; -[SCUnifiedProfileCommunitiesSectionPluginsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10510d2d4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar9 = (long)_DAT_11271c814;
  uVar1 = param_1 + lVar9;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108060890();
  if ((uVar3 & 1) != 0) {
    lVar9 = param_1 + lVar9;
    _objc_loadWeakRetained();
    lVar4 = lVar9;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010806087c();
    _objc_release(lVar4);
    _objc_release(lVar9);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)lVar5 != 0) {
      uVar1 = param_1 + _DAT_11271c818;
      _objc_loadWeakRetained();
      uVar2 = uVar1;
      func_0x00010bfe2700();
      _objc_release(uVar1);
      if ((uVar2 & 1) == 0) {
        _objc_initWeak(auStack_68,param_1);
        puVar6 = PTR_PTR_1126ae720;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0xc2000000;
        pcStack_80 = FUN_10510d54c;
        puStack_78 = &UNK_11085a8b8;
        _objc_copyWeak(auStack_70,auStack_68);
        func_0x00010bf11fe0(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126ae720;
        _objc_copyWeak(auStack_98,auStack_68);
        func_0x00010bf11fe0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR_PTR_1126afda8;
        _objc_alloc(PTR_PTR_1126afda8);
        func_0x00010c032260();
        param_1 = param_1 + _DAT_11271c81c;
        _objc_loadWeakRetained(param_1);
        lVar9 = param_1;
        func_0x00010c1018e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c125b60();
        _objc_release(lVar9);
        _objc_release(param_1);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_destroyWeak(auStack_98);
        _objc_release(puVar6);
        _objc_destroyWeak(auStack_70);
        _objc_destroyWeak(auStack_68);
      }
    }
    return;
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10510d54c; end: 10510d5cb;  */

void FUN_10510d54c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be9cb80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10510d5cc; end: 10510d68b; -[SCUnifiedProfileCommunitiesSectionPluginsEntryPoint _section] */

void FUN_10510d5cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b1100;
  _objc_alloc(PTR_PTR_1126b1100);
  puVar2 = puVar1;
  func_0x000108061df8();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000108f728c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043040(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b4dc8;
  _objc_alloc(PTR_PTR_1126b4dc8);
  func_0x00010c04f820();
  func_0x00010bdf7e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9240(puVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10510d68c; end: 10510d7d7; -[SCUnifiedProfileCommunitiesSectionPluginsEntryPoint _actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10510d68c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = PTR_PTR_1126b4dd0;
  _objc_alloc();
  uVar9 = *(undefined8 *)(param_1 + _DAT_11271c820);
  lVar2 = param_1 + _DAT_11271c824;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf42de0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + _DAT_11271c828);
  lVar4 = param_1 + _DAT_11271c82c;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11271c814;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11271c830;
  _objc_loadWeakRetained(param_1);
  lVar8 = param_1;
  func_0x00010bf42d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000220(puVar1,param_2,uVar9,lVar3,uVar10,lVar5,lVar7,lVar8);
  _objc_release(lVar8);
  _objc_release(param_1);
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



/* Entry: 10510d7d8; end: 10510d947; -[SCUnifiedProfileCommunitiesSectionPluginsEntryPoint _dataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10510d7d8(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126b4dd8;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11271c830;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf42d20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11271c834;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11271c838;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11271c82c;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11271c814;
  _objc_loadWeakRetained(param_1);
  lVar10 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0001e0(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar10);
  _objc_release(lVar10);
  _objc_release(param_1);
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



/* Entry: 10510d948; end: 10510d9e7; -[SCUnifiedProfileCommunitiesSectionPluginsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10510d948(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271c828,0);
  _objc_storeStrong(param_1 + _DAT_11271c820,0);
  _objc_destroyWeak(param_1 + _DAT_11271c82c);
  _objc_destroyWeak(param_1 + _DAT_11271c824);
  _objc_destroyWeak(param_1 + _DAT_11271c838);
  _objc_destroyWeak(param_1 + _DAT_11271c834);
  _objc_destroyWeak(param_1 + _DAT_11271c830);
  _objc_destroyWeak(param_1 + _DAT_11271c814);
  _objc_destroyWeak(param_1 + _DAT_11271c818);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271c81c);
  return;
}



/* Entry: 10510d9e8; end: 10510da9b; -[SCUnifiedProfileCommunitiesSectionActionModel initWithGroupId:communityName:isVerified:] */

undefined1 *
FUN_10510d9e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6340;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10510da9c; end: 10510dabf; -[SCUnifiedProfileCommunitiesSectionActionModel copyWithZone:] */

undefined8 FUN_10510da9c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10510dac0; end: 10510db37; -[SCUnifiedProfileCommunitiesSectionActionModel hash] */

undefined8 * FUN_10510dac0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10510dbc8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10510dbd4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10510dbd4;
        }
        goto LAB_10510dbc8;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10510dbd4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10510db38; end: 10510dbef; -[SCUnifiedProfileCommunitiesSectionActionModel isEqual:] */

long FUN_10510db38(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10510dbc8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10510dbd4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10510dbd4;
        }
        goto LAB_10510dbc8;
      }
    }
    lVar3 = 0;
  }
LAB_10510dbd4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10510dbf0; end: 10510dbf7; -[SCUnifiedProfileCommunitiesSectionActionModel groupId] */

undefined8 FUN_10510dbf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10510dbf8; end: 10510dbff; -[SCUnifiedProfileCommunitiesSectionActionModel communityName] */

undefined8 FUN_10510dbf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


