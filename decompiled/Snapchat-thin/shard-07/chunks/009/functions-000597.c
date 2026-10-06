/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105b12aa4; end: 105b12bc7; -[SCCustomStoryCreationWorkflow didDismissWithSelectedItems:title:] */

void FUN_105b12aa4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    func_0x00010bf83d20(uVar3);
    uVar3 = param_3;
    func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108d55a0);
    _objc_release(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    _objc_release(uVar1);
    lVar2 = param_4;
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      _objc_retain(param_4);
      uVar3 = *(undefined8 *)(param_1 + 0x68);
      *(long *)(param_1 + 0x68) = param_4;
      _objc_release(uVar3);
    }
    func_0x00010be54c60(param_1);
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf74ce0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105b12bc8; end: 105b12bff; -[SCCustomStoryCreationWorkflow didSubmitCustomStoryName:] */

void FUN_105b12bc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdec9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__createCustomStory_112558c08);
  return;
}



/* Entry: 105b12c00; end: 105b12f3b; -[SCCustomStoryCreationWorkflow _createCustomStory] */

void FUN_105b12c00(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **unaff_x28;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  long lStack_78;
  
  puVar7 = (undefined *)0x0;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 < 2) {
    puVar2 = param_1;
    if (lVar5 == 0) goto LAB_105b12ec4;
    puVar6 = (undefined *)0x0;
    puVar2 = (undefined *)0x0;
    if (lVar5 == 1) {
      uStack_80 = *(undefined8 *)(param_1 + 0x38);
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_80,1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = *(undefined **)(param_1 + 0x50);
      _objc_retain(puVar6);
      puVar7 = PTR_PTR_1126c24b0;
      func_0x00010c114400();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (lVar5 == 2) {
    puVar6 = *(undefined **)(param_1 + 0x50);
    func_0x00010bf09f60(puVar6,param_2,*(undefined8 *)(param_1 + 0x38));
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puVar7 = PTR_PTR_1126c24b0;
    func_0x00010bf62780();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar6;
  }
  else {
    puVar6 = (undefined *)0x0;
    puVar2 = (undefined *)0x0;
    if (lVar5 == 3) {
      puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_alloc();
      func_0x00010bff4000();
      func_0x00010befa120();
      puVar6 = puVar2;
      func_0x00010bf00560();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      puVar7 = PTR_PTR_1126c24b0;
      func_0x00010c22c080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = puVar6;
    }
  }
  puVar3 = PTR_PTR_1126c24b8;
  _objc_alloc(PTR_PTR_1126c24b8);
  func_0x00010c00d340();
  _objc_initWeak(auStack_88,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_105b12f3c;
  puStack_98 = &UNK_110843540;
  _objc_copyWeak(auStack_90,auStack_88);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x105b12f84;
  puStack_c0 = &UNK_1108d55c0;
  unaff_x28 = &puStack_d8;
  param_2 = auStack_88;
  _objc_copyWeak(auStack_b8,param_2);
  func_0x00010bf55a40(uVar4);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar3);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release();
LAB_105b12ec4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x28 + 4);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  __Unwind_Resume(puVar2);
  _objc_retain(param_2);
  puVar2 = puVar2 + 0x20;
  _objc_loadWeakRetained(puVar2);
  func_0x00010be27c40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105b12f3c; end: 105b12fb7;  */

void FUN_105b12f3c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27c40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b12fb8; end: 105b13027; -[SCCustomStoryCreationWorkflow _handleCustomStoryCreationSuccessWithPublicationId:] */

void FUN_105b12fb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf74340();
  _objc_release(param_3);
  _objc_release(lVar2);
  if (*(long *)(param_1 + 0x78) != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db7338;
    if (*(long *)(param_1 + 0x78) != 2) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e1e7b8;
    }
    if (*(ulong *)(param_1 + 0x48) < 4) {
      ppuVar3 = (undefined **)(&PTR_PTR_1108d55f0)[*(ulong *)(param_1 + 0x48)];
    }
    else {
      ppuVar3 = &PTR____CFConstantStringClassReference_110e1e7d8;
    }
                    /* WARNING: Could not recover jumptable at 0x00010c0a46b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_logCustomStoryNewStoryActionsCre_112606bb8,
               ppuVar1,ppuVar3,&PTR____CFConstantStringClassReference_110dab0d8);
    return;
  }
  return;
}



/* Entry: 105b13028; end: 105b13063; -[SCCustomStoryCreationWorkflow _handleCustomStoryCreationFailureWithResponseCode:] */

void FUN_105b13028(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  func_0x00010bf18ae0(*(undefined8 *)(param_1 + 8),param_2,param_3,param_1);
  if (*(long *)(param_1 + 0x78) != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db7338;
    if (*(long *)(param_1 + 0x78) != 2) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e1e7b8;
    }
    if (*(ulong *)(param_1 + 0x48) < 4) {
      ppuVar2 = (undefined **)(&PTR_PTR_1108d55f0)[*(ulong *)(param_1 + 0x48)];
    }
    else {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e1e7d8;
    }
                    /* WARNING: Could not recover jumptable at 0x00010c0a46b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_logCustomStoryNewStoryActionsCre_112606bb8,
               ppuVar1,ppuVar2,&PTR____CFConstantStringClassReference_110de9cf8);
    return;
  }
  return;
}



/* Entry: 105b13064; end: 105b13097; -[SCCustomStoryCreationWorkflow didCancelCustomStoryName] */

void FUN_105b13064(long param_1)

{
  func_0x00010be54c60();
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf74ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b13098; end: 105b130eb; -[SCCustomStoryCreationWorkflow didDismissCustomStoryErrorWithAllowRetryNaming:] */

void FUN_105b13098(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf18b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_beginStoryNameSelectionWithStory_1125a3c68,
               *(undefined8 *)(param_1 + 0x48),param_1);
    return;
  }
  func_0x00010be54c60(param_1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf74ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b130ec; end: 105b131e7; -[SCCustomStoryCreationWorkflow _logIncompleteCreationSession] */

void FUN_105b130ec(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c24c0;
  _objc_alloc(PTR_PTR_1126c24c0);
  func_0x00010c08fa60(*(undefined8 *)(param_1 + 0x68));
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x50));
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x50));
  func_0x00010c01f900(puVar1);
  func_0x00010c0a4080(*(undefined8 *)(param_1 + 0x20));
  func_0x000105b12194(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x78),
                      *(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110daf8b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b131e8; end: 105b13267; -[SCCustomStoryCreationWorkflow .cxx_destruct] */

void FUN_105b131e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b13268; end: 105b1341f; -[SCCustomStoryMemberActionSheetEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b13268(long param_1)

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
  undefined8 uVar14;
  long lVar15;
  
  puVar1 = PTR_PTR_1126c24c8;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11272fc08;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11272fc0c;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf62080();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11272fc10;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11272fc14;
  _objc_loadWeakRetained(lVar8);
  lVar9 = param_1 + _DAT_11272fc18;
  _objc_loadWeakRetained(lVar9);
  lVar10 = param_1 + _DAT_11272fc1c;
  _objc_loadWeakRetained(lVar10);
  lVar11 = lVar10;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11272fc20;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d5e0();
  lVar15 = (long)_DAT_11272fc24;
  uVar14 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar1;
  _objc_release(uVar14);
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
                    /* WARNING: Could not recover jumptable at 0x00010bf192d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar15),PTR_s_beginWorkflow_1125a3e58);
  return;
}



/* Entry: 105b13420; end: 105b134a3; -[SCCustomStoryMemberActionSheetEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b13420(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272fc20);
  _objc_destroyWeak(param_1 + _DAT_11272fc1c);
  _objc_destroyWeak(param_1 + _DAT_11272fc14);
  _objc_destroyWeak(param_1 + _DAT_11272fc10);
  _objc_destroyWeak(param_1 + _DAT_11272fc0c);
  _objc_destroyWeak(param_1 + _DAT_11272fc08);
  _objc_destroyWeak(param_1 + _DAT_11272fc18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272fc24,0);
  return;
}



/* Entry: 105b134a4; end: 105b13617; -[SCCustomStoryMemberActionSheetWorkflow initWithUserSession:customStoriesDataMutator:snapchattersDataMutator:userNetworkServices:memberActionSheetScope:notificationPool:circumstanceEngine:] */

undefined1 *
FUN_105b134a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126ebda0;
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    uVar2 = param_9;
    func_0x000108f421ec();
    *(char *)((long)puVar1 + 0x38) = (char)uVar2;
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



/* Entry: 105b13618; end: 105b1361b; -[SCCustomStoryMemberActionSheetWorkflow beginWorkflow] */

void FUN_105b13618(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6cd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__open_112578ce0);
  return;
}



/* Entry: 105b1361c; end: 105b13c47; -[SCCustomStoryMemberActionSheetWorkflow _open] */

void FUN_105b1361c(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined *puVar16;
  
  puVar5 = PTR_PTR_1126b10a0;
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110dec718);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c244280(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar4;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf32140(puVar5,param_2,puVar3,uVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  _objc_release(uVar4);
  _objc_release(puVar3);
  func_0x000108f58aa4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c5c0(puVar5,param_2,puVar3);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c25a6c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf60940(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar4;
  func_0x00010c0720c0(uVar4,param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar4);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c25a580();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf60940(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010bf4b900(uVar6,param_2,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c25a6c0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2923e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010c0720c0(uVar7,param_2,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c25a580();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2923e0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bf4b900(uVar8,param_2,uVar9);
  uVar1 = (uint)uVar7 & (uint)uVar4;
  _objc_release(uVar9);
  _objc_release(uVar8);
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b10a0;
  uVar2 = ((uint)uVar14 | (uint)uVar4) ^ 1 | (uint)uVar6;
  puVar12 = puVar10;
  if (((uVar2 & 1) == 0) && ((uVar1 & 1) == 0)) {
    puVar11 = puVar10;
    func_0x000108f58abc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f180(puVar3,param_2,puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar3;
    func_0x00010c269d60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar11);
    func_0x00010befa120(puVar10,param_2,puVar12);
    _objc_release(puVar12);
  }
  if ((uint)uVar14 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c25a580();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c2923e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar6;
    func_0x00010bf4b900(uVar6,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126b10a0;
    if ((int)uVar14 != 0) {
      func_0x000108f58c3c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6f180(puVar3,param_2,uVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar3;
      func_0x00010c269d60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(uVar6);
      func_0x00010befa120(puVar10,param_2,puVar12);
      _objc_release(puVar12);
    }
    uVar13 = *(ulong *)(param_1 + 0x28);
    func_0x00010c25a6c0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c2923e0(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar13;
    func_0x00010c0720c0(uVar13,param_2,uVar14);
    _objc_release(uVar14);
    _objc_release(uVar13);
    puVar3 = PTR_PTR_1126b10a0;
    if ((uVar15 & 1) == 0) {
      func_0x000108f58b64();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ec240(puVar3,param_2,uVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar3;
      func_0x00010c269d60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(uVar13);
      func_0x00010befa120(puVar10,param_2,puVar12);
      _objc_release(puVar12);
    }
    puVar16 = *(undefined **)(param_1 + 0x28);
    func_0x00010c25a580();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c2923e0(uVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar16;
    func_0x00010bf4b900(puVar16,param_2,uVar14);
    _objc_release(uVar14);
    _objc_release(puVar16);
    puVar3 = PTR_PTR_1126b10a0;
    puVar12 = puVar16;
    if (((ulong)puVar11 & 1) == 0) {
      func_0x000108f58bac();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ec240(puVar3,param_2,puVar16);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar3;
      func_0x00010c269d60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar16);
      func_0x00010befa120(puVar10,param_2,puVar12);
      _objc_release(puVar12);
    }
  }
  puVar3 = PTR_PTR_1126b10a0;
  if (((uVar2 | *(byte *)(param_1 + 0x38) ^ 0xffffffff | uVar1) & 1) == 0) {
    func_0x000108f590bc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ec240(puVar3,param_2,puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar3;
    func_0x00010c269d60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar12);
    func_0x00010befa120(puVar10,param_2,puVar11);
    _objc_release(puVar11);
  }
  puVar3 = puVar10;
  func_0x00010bf529e0();
  if (puVar3 == (undefined *)0x0) {
    func_0x00010bde1540(param_1);
  }
  else {
    puVar12 = PTR_PTR_1126b10a8;
    _objc_alloc(PTR_PTR_1126b10a8);
    puVar3 = PTR_PTR_1126b10a0;
    puVar11 = puVar12;
    func_0x000108f58b1c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb42c0(puVar3,param_2,puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar3;
    func_0x00010c269d60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c019f40(puVar12,param_2,0,0,puVar10,puVar16);
    _objc_release(puVar16);
    _objc_release(puVar3);
    _objc_release(puVar11);
    func_0x00010c18b5e0(puVar12,param_2,param_1);
    uVar14 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c10fd00(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10af80();
    _objc_release(uVar14);
    _objc_release(puVar12);
  }
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105b13c48; end: 105b13c4b; -[SCCustomStoryMemberActionSheetWorkflow actionSheetDidDismiss:] */

void FUN_105b13c48(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde1550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__close_112555ef0);
  return;
}



/* Entry: 105b13c4c; end: 105b13c87; -[SCCustomStoryMemberActionSheetWorkflow _close] */

void FUN_105b13c4c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf62340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b13c88; end: 105b13d6b; -[SCCustomStoryMemberActionSheetWorkflow _removeMemberTapped:] */

void FUN_105b13c88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010beeee80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf83000(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105b13d6c; end: 105b13d97;  */

void FUN_105b13d6c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7e160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b13d98; end: 105b13e7b; -[SCCustomStoryMemberActionSheetWorkflow _setMemberAsOwnerTapped:] */

void FUN_105b13d98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010beeee80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf83000(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105b13e7c; end: 105b13ea7;  */

void FUN_105b13e7c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7e6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b13ea8; end: 105b13f8b; -[SCCustomStoryMemberActionSheetWorkflow _setMemberAsModeratorTapped:] */

void FUN_105b13ea8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010beeee80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf83000(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105b13f8c; end: 105b13fb7;  */

void FUN_105b13f8c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6b700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b13fb8; end: 105b1409b; -[SCCustomStoryMemberActionSheetWorkflow _demoteMemberAsModeratorTapped:] */

void FUN_105b13fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010beeee80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf83000(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105b1409c; end: 105b140c7;  */

void FUN_105b1409c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7af20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b140c8; end: 105b141ab; -[SCCustomStoryMemberActionSheetWorkflow _doneTapped:] */

void FUN_105b140c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010beeee80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf83000(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105b141ac; end: 105b141d7;  */

void FUN_105b141ac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde1540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b141d8; end: 105b142bb; -[SCCustomStoryMemberActionSheetWorkflow _banMemberTapped:] */

void FUN_105b141d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010beeee80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf83000(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105b142bc; end: 105b142e7;  */

void FUN_105b142bc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7a400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b142e8; end: 105b14567; -[SCCustomStoryMemberActionSheetWorkflow _presentSetMemberAsOwnerDialog] */

void FUN_105b142e8(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = auStack_90;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000108f58b34();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105b14568;
  puStack_a0 = &UNK_1108482a8;
  _objc_copyWeak(auStack_98,auStack_90);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar4 = PTR_PTR_1126aed70;
  ppuVar3 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = puVar5;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_105b1463c;
  puStack_c8 = &UNK_1108482a8;
  puVar1 = auStack_90;
  _objc_copyWeak(auStack_c0,puVar1);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  puVar5 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar6 = puVar5;
  func_0x000108f58b7c();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x000108f58b94();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar2;
  puStack_80 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar5);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x00010be79fe0(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_c0);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_98);
  puVar9 = auStack_90;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  puVar10 = puVar9;
  __Unwind_Resume(puVar9);
  pcStack_e8 = FUN_105b14568;
  puStack_110 = puVar6;
  puStack_108 = puVar4;
  puStack_100 = puVar2;
  puStack_f8 = puVar9;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_copyWeak(auStack_118,puVar10 + 0x20);
  func_0x00010bf84b00(puVar1);
  _objc_destroyWeak(auStack_118);
  _objc_release(puVar1);
  return;
}



/* Entry: 105b14568; end: 105b1460f;  */

void FUN_105b14568(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf84b00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b14610; end: 105b1463b;  */

void FUN_105b14610(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea5960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b1463c; end: 105b146e3;  */

void FUN_105b1463c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf84b00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b146e4; end: 105b1470f;  */

void FUN_105b146e4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde1540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b14710; end: 105b1488f; -[SCCustomStoryMemberActionSheetWorkflow _setMemberAsOwner] */

void FUN_105b14710(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c25a6c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if ((lVar3 == 0) || (uVar4 = uVar1, func_0x00010c0720c0(), (int)uVar4 != 0)) {
    func_0x00010bea5980(param_1);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c259cc0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c27a340(uVar4);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 105b14890; end: 105b148c3;  */

void FUN_105b14890(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea5980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b148c4; end: 105b14937; -[SCCustomStoryMemberActionSheetWorkflow _setMemberAsOwnerDidFinish:] */

void FUN_105b148c4(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf6b020(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf621e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  lVar2 = param_1;
  func_0x000108f58b04();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb8ea0(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bde1550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__close_112555ef0);
  return;
}



/* Entry: 105b14938; end: 105b14bb7; -[SCCustomStoryMemberActionSheetWorkflow _presentRemoveMemberDialog] */

void FUN_105b14938(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = auStack_90;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000108f58b4c();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105b14bb8;
  puStack_a0 = &UNK_1108482a8;
  _objc_copyWeak(auStack_98,auStack_90);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar4 = PTR_PTR_1126aed70;
  ppuVar3 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = puVar5;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_105b14c8c;
  puStack_c8 = &UNK_1108482a8;
  puVar1 = auStack_90;
  _objc_copyWeak(auStack_c0,puVar1);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  puVar5 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar6 = puVar5;
  func_0x000108f58ad4();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x000108f58aec();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar2;
  puStack_80 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar5);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x00010be79fe0(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_c0);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_98);
  puVar9 = auStack_90;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  puVar10 = puVar9;
  __Unwind_Resume(puVar9);
  pcStack_e8 = FUN_105b14bb8;
  puStack_110 = puVar6;
  puStack_108 = puVar4;
  puStack_100 = puVar2;
  puStack_f8 = puVar9;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_copyWeak(auStack_118,puVar10 + 0x20);
  func_0x00010bf84b00(puVar1);
  _objc_destroyWeak(auStack_118);
  _objc_release(puVar1);
  return;
}



/* Entry: 105b14bb8; end: 105b14c5f;  */

void FUN_105b14bb8(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf84b00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b14c60; end: 105b14c8b;  */

void FUN_105b14c60(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8c8a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b14c8c; end: 105b14d33;  */

void FUN_105b14c8c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf84b00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b14d34; end: 105b14d5f;  */

void FUN_105b14d34(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde1540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b14d60; end: 105b14f4b; -[SCCustomStoryMemberActionSheetWorkflow _removeMember] */

/* WARNING: Possible PIC construction at 0x000105b14f6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105b14f70) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_105b14d60(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **unaff_x22;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release();
  if (lVar2 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) goto code_r0x00010be8cce0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_40 = uVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105b14f4c;
    puStack_58 = &UNK_110849200;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c12d800(uVar3);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar4);
    _objc_release();
    unaff_x22 = &puStack_70;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x22 + 0x20));
  _objc_destroyWeak(auStack_48);
  __Unwind_Resume(lVar1);
  _objc_loadWeakRetained(lVar1 + 0x20);
code_r0x00010be8cce0:
                    /* WARNING: Could not recover jumptable at 0x00010be8ccf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105b14f4c; end: 105b14f7f;  */

void FUN_105b14f4c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8cce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b14f80; end: 105b14ff3; -[SCCustomStoryMemberActionSheetWorkflow _removeParticipantsDidFinish:] */

void FUN_105b14f80(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf6b020(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf621a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  lVar2 = param_1;
  func_0x000108f58b04();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb8ea0(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bde1550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__close_112555ef0);
  return;
}



/* Entry: 105b14ff4; end: 105b15057; -[SCCustomStoryMemberActionSheetWorkflow _onSetMemberAsModeratorTapped] */

void FUN_105b14ff4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010c25a580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if (uVar2 < 5) {
                    /* WARNING: Could not recover jumptable at 0x00010be7e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentSetMemberAsModeratorDial_11257d350)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7dfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentReachMaxModeratorsDialog_11257d188);
  return;
}



/* Entry: 105b15058; end: 105b152d7; -[SCCustomStoryMemberActionSheetWorkflow _presentSetMemberAsModeratorDialog] */

void FUN_105b15058(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = auStack_90;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000108f58b34();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105b152d8;
  puStack_a0 = &UNK_1108482a8;
  _objc_copyWeak(auStack_98,auStack_90);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar4 = PTR_PTR_1126aed70;
  ppuVar3 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = puVar5;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_105b153ac;
  puStack_c8 = &UNK_1108482a8;
  puVar1 = auStack_90;
  _objc_copyWeak(auStack_c0,puVar1);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  puVar5 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar6 = puVar5;
  func_0x000108f58bc4();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x000108f58bdc();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar2;
  puStack_80 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar5);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x00010be79fe0(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_c0);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_98);
  puVar9 = auStack_90;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  puVar10 = puVar9;
  __Unwind_Resume(puVar9);
  pcStack_e8 = FUN_105b152d8;
  puStack_110 = puVar6;
  puStack_108 = puVar4;
  puStack_100 = puVar2;
  puStack_f8 = puVar9;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_copyWeak(auStack_118,puVar10 + 0x20);
  func_0x00010bf84b00(puVar1);
  _objc_destroyWeak(auStack_118);
  _objc_release(puVar1);
  return;
}



/* Entry: 105b152d8; end: 105b1537f;  */

void FUN_105b152d8(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf84b00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b15380; end: 105b153ab;  */

void FUN_105b15380(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea5920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b153ac; end: 105b15453;  */

void FUN_105b153ac(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf84b00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b15454; end: 105b1547f;  */

void FUN_105b15454(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde1540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b15480; end: 105b15643; -[SCCustomStoryMemberActionSheetWorkflow _setMemberAsModerator] */

void FUN_105b15480(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c25a580();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf4b900();
    _objc_release(uVar3);
    if ((int)uVar4 == 0) {
      _objc_initWeak(auStack_58,param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c259cc0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(PTR___dispatch_main_q_11034be20);
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_105b15644;
      puStack_68 = &UNK_110849200;
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_copyWeak(auStack_88,auStack_58);
      func_0x00010bef9da0(uVar4);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(uVar3);
      _objc_release(uVar4);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      goto LAB_105b155f4;
    }
  }
  func_0x00010bea5940(param_1);
LAB_105b155f4:
  _objc_release(lVar1);
  return;
}



/* Entry: 105b15644; end: 105b156af;  */

void FUN_105b15644(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea5940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b156b0; end: 105b15893; -[SCCustomStoryMemberActionSheetWorkflow _presentReachMaxModeratorsDialog] */

void FUN_105b156b0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_68,param_1);
  puVar2 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105b15894;
  puStack_78 = &UNK_1108482a8;
  puVar9 = auStack_68;
  _objc_copyWeak(auStack_70,puVar9);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar4 = puVar3;
  func_0x000108f58c0c();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000108f58c24();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010be79fe0(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_70);
  puVar7 = auStack_68;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  puVar8 = puVar7;
  __Unwind_Resume(puVar7);
  pcStack_98 = FUN_105b15894;
  puStack_c0 = puVar5;
  puStack_b8 = puVar4;
  puStack_b0 = puVar2;
  puStack_a8 = puVar7;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  _objc_copyWeak(auStack_c8,puVar8 + 0x20);
  func_0x00010bf84b00(puVar9);
  _objc_destroyWeak(auStack_c8);
  _objc_release(puVar9);
  return;
}



/* Entry: 105b15894; end: 105b1593b;  */

void FUN_105b15894(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf84b00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b1593c; end: 105b15967;  */

void FUN_105b1593c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde1540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b15968; end: 105b159db; -[SCCustomStoryMemberActionSheetWorkflow _setMemberAsModeratorDidFinish:] */

void FUN_105b15968(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf6b020(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf621c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  lVar2 = param_1;
  func_0x000108f58bf4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb8ea0(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bde1550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__close_112555ef0);
  return;
}



/* Entry: 105b159dc; end: 105b15c5b; -[SCCustomStoryMemberActionSheetWorkflow _presentDemoteMemberAsModeratorDialog] */

void FUN_105b159dc(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = auStack_90;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000108f58b34();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105b15c5c;
  puStack_a0 = &UNK_1108482a8;
  _objc_copyWeak(auStack_98,auStack_90);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar4 = PTR_PTR_1126aed70;
  ppuVar3 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = puVar5;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_105b15d30;
  puStack_c8 = &UNK_1108482a8;
  puVar1 = auStack_90;
  _objc_copyWeak(auStack_c0,puVar1);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  puVar5 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar6 = puVar5;
  func_0x000108f58c54();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x000108f58c6c();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar2;
  puStack_80 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar5);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x00010be79fe0(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_c0);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_98);
  puVar9 = auStack_90;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  puVar10 = puVar9;
  __Unwind_Resume(puVar9);
  pcStack_e8 = FUN_105b15c5c;
  puStack_110 = puVar6;
  puStack_108 = puVar4;
  puStack_100 = puVar2;
  puStack_f8 = puVar9;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_copyWeak(auStack_118,puVar10 + 0x20);
  func_0x00010bf84b00(puVar1);
  _objc_destroyWeak(auStack_118);
  _objc_release(puVar1);
  return;
}



/* Entry: 105b15c5c; end: 105b15d03;  */

void FUN_105b15c5c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf84b00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b15d04; end: 105b15d2f;  */

void FUN_105b15d04(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfac20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b15d30; end: 105b15dd7;  */

void FUN_105b15d30(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf84b00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b15dd8; end: 105b15e03;  */

void FUN_105b15dd8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde1540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b15e04; end: 105b15f7f; -[SCCustomStoryMemberActionSheetWorkflow _demoteMemberAsModerator] */

void FUN_105b15e04(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    uVar3 = *(ulong *)(param_1 + 0x28);
    func_0x00010c25a580();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf4b900();
    _objc_release(uVar3);
    if ((uVar4 & 1) != 0) {
      _objc_initWeak(auStack_48,param_1);
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c259cc0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(PTR___dispatch_main_q_11034be20);
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x00010bf6d7c0(uVar5);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
      goto LAB_105b15f3c;
    }
  }
  func_0x00010bdfac40(param_1);
LAB_105b15f3c:
  _objc_release(lVar1);
  return;
}



/* Entry: 105b15f80; end: 105b15fb3;  */

void FUN_105b15f80(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfac40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b15fb4; end: 105b16027; -[SCCustomStoryMemberActionSheetWorkflow _demoteMemberAsModeratorDidFinish:] */

void FUN_105b15fb4(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf6b020(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf62180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  lVar2 = param_1;
  func_0x000108f58c84();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb8ea0(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bde1550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__close_112555ef0);
  return;
}



/* Entry: 105b16028; end: 105b16343; -[SCCustomStoryMemberActionSheetWorkflow _presentBanMemberDialog] */

void FUN_105b16028(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
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
  puVar1 = auStack_a0;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000108f58b4c();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_105b16344;
  puStack_b0 = &UNK_1108482a8;
  _objc_copyWeak(auStack_a8,auStack_a0);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126aed70;
  func_0x000108f590d4();
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = puVar6;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_105b16418;
  puStack_d8 = &UNK_1108482a8;
  _objc_copyWeak(auStack_d0,auStack_a0);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar5 = PTR_PTR_1126aed70;
  ppuVar4 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_118 = puVar6;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_105b164ec;
  puStack_100 = &UNK_1108482a8;
  puVar1 = auStack_a0;
  _objc_copyWeak(auStack_f8,puVar1);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  puVar6 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar7 = puVar6;
  func_0x000108f590ec();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x000108f59104();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_98 = puVar2;
  puStack_90 = puVar3;
  puStack_88 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar6);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  func_0x00010be79fe0(param_1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_f8);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_d0);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_a8);
  puVar10 = auStack_a0;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  puVar11 = puVar10;
  __Unwind_Resume(puVar10);
  pcStack_128 = FUN_105b16344;
  puStack_150 = puVar5;
  puStack_148 = puVar3;
  puStack_140 = puVar2;
  puStack_138 = puVar10;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_copyWeak(auStack_158,puVar11 + 0x20);
  func_0x00010bf84b00(puVar1);
  _objc_destroyWeak(auStack_158);
  _objc_release(puVar1);
  return;
}



/* Entry: 105b16344; end: 105b163eb;  */

void FUN_105b16344(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf84b00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b163ec; end: 105b16417;  */

void FUN_105b163ec(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8c8a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b16418; end: 105b164bf;  */

void FUN_105b16418(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf84b00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b164c0; end: 105b164eb;  */

void FUN_105b164c0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd28e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b164ec; end: 105b16593;  */

void FUN_105b164ec(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf84b00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b16594; end: 105b165bf;  */

void FUN_105b16594(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde1540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b165c0; end: 105b16617; -[SCCustomStoryMemberActionSheetWorkflow _banMember] */

void FUN_105b165c0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    func_0x00010bdd2900(param_1,param_2,0);
  }
  else {
    func_0x00010bdfac40(param_1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b16618; end: 105b16667; -[SCCustomStoryMemberActionSheetWorkflow _banMemberDidFinish:] */

void FUN_105b16618(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf6b020(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf62160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bde1550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__close_112555ef0);
  return;
}



/* Entry: 105b16668; end: 105b166bf; -[SCCustomStoryMemberActionSheetWorkflow _presentAlertDialog:] */

void FUN_105b16668(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c10fd00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10eda0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b166c0; end: 105b1671f; -[SCCustomStoryMemberActionSheetWorkflow _showErrorBanner:] */

void FUN_105b166c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126afde0;
  func_0x00010bf55ce0(PTR_PTR_1126afde0,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b16720; end: 105b1677f; -[SCCustomStoryMemberActionSheetWorkflow .cxx_destruct] */

void FUN_105b16720(long param_1)

{
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



/* Entry: 105b16780; end: 105b16853; -[SCSelectionRecipientContactsActionHandler initWithSelectionTracker:delegate:selectedItemSubject:enableSelectableContacts:] */

undefined1 *
FUN_105b16780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ebda8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105b16854; end: 105b16c13; -[SCSelectionRecipientContactsActionHandler handleActionWithSender:actionModel:fromSourceView:] */

bool FUN_105b16854(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar3 = param_1 + 0x10;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar3 == 0) {
    bVar2 = false;
  }
  else {
    uVar4 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b5658;
    _objc_opt_class(PTR_PTR_1126b5658);
    uVar6 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    uVar1 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    uVar4 = uVar1;
    func_0x00010c15a7c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf529e0();
    _objc_release(uVar4);
    if (uVar6 == 0) {
      bVar2 = false;
    }
    else {
      uVar4 = uVar1;
      func_0x00010c15a7c0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      uVar4 = uVar6;
      func_0x00010c15a7a0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar4;
      func_0x00010c122a80();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c15ab60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      _objc_release(uVar7);
      uVar7 = uVar9;
      func_0x00010c0720c0();
      if ((int)uVar7 == 0) {
        bVar2 = false;
      }
      else {
        uVar7 = uVar4;
        func_0x00010c122a80();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010befcf80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        puVar5 = PTR_PTR_1126c24d0;
        _objc_opt_class(PTR_PTR_1126c24d0);
        uVar10 = uVar8;
        _objc_opt_isKindOfClass(uVar8,puVar5);
        uVar7 = uVar8;
        if ((uVar10 & 1) == 0) {
          uVar7 = 0;
        }
        _objc_retain(uVar7);
        _objc_release(uVar8);
        uVar8 = uVar7;
        func_0x00010c0faf60();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar8;
        func_0x00010c08fa60();
        _objc_release(uVar8);
        bVar2 = uVar10 != 0;
        if (uVar10 != 0) {
          puVar5 = PTR__OBJC_CLASS___CNPhoneNumber_1126b4ae0;
          _objc_alloc();
          uVar8 = uVar7;
          func_0x00010c0faf60(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c04e8c0();
          _objc_release(uVar8);
          uVar12 = *(undefined8 *)(param_1 + 0x18);
          uVar13 = *(undefined8 *)(param_1 + 8);
          uStack_68 = *(undefined1 *)(param_1 + 0x20);
          puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_b0 = 0xc2000000;
          pcStack_a8 = FUN_105b16c14;
          puStack_a0 = &UNK_110853a60;
          uStack_98 = uVar13;
          _objc_retain(uVar6);
          uStack_90 = uVar6;
          uStack_88 = uVar4;
          _objc_retain(uVar7);
          uStack_80 = uVar7;
          _objc_retain(param_5);
          uStack_78 = param_5;
          uStack_70 = uVar12;
          _objc_retain(uVar13);
          _objc_retain(uVar12);
          ppuVar11 = &puStack_b8;
          _objc_retainBlock(ppuVar11);
          param_1 = param_1 + 0x10;
          _objc_loadWeakRetained(param_1);
          uVar8 = uVar6;
          func_0x00010c15a7a0(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf7c840(param_1);
          _objc_release(uVar8);
          _objc_release(param_1);
          _objc_release(ppuVar11);
          _objc_release(uStack_78);
          _objc_release(uStack_80);
          _objc_release(uStack_90);
          _objc_release(uVar13);
          _objc_release(uVar12);
          _objc_release(puVar5);
        }
        _objc_release(uVar7);
      }
      _objc_release(uVar9);
      _objc_release(uVar4);
      _objc_release(uVar6);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return bVar2;
}



/* Entry: 105b16c14; end: 105b16e5b;  */

undefined *
FUN_105b16c14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_5 + 0x50) == '\x01') {
    uVar6 = *(undefined8 *)(param_5 + 0x20);
    uVar7 = *(undefined8 *)(param_5 + 0x28);
    func_0x00010c15a7a0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar7;
    func_0x00010c122a80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&uStack_70,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15aa20(uVar6,param_6,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar7);
    uVar4 = *(undefined8 *)(param_5 + 0x30);
    func_0x00010c122a80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    func_0x00010c0e00e0(uVar6,param_6,uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1f3c0();
    _objc_release(uVar1);
    _objc_release(uVar7);
    _objc_release(uVar4);
    uVar7 = *(undefined8 *)(param_5 + 0x28);
    uVar1 = *(undefined8 *)(param_5 + 0x30);
    uVar4 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010c247520(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb940(uVar4,param_6,uVar1,(uint)uVar2 ^ 1,uVar7);
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  puVar5 = *(undefined **)(param_5 + 0x28);
  func_0x00010c07d660();
  puVar3 = PTR_PTR_1126c24d8;
  if ((int)puVar5 != 0) {
    uVar6 = *(undefined8 *)(param_5 + 0x38);
    func_0x00010c0faf60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + 0x40));
    uVar7 = *(undefined8 *)(param_5 + 0x28);
    func_0x00010c247520(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23cd00(param_1,param_2,param_3,param_4,puVar3,param_6,uVar6,uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar6);
    func_0x00010c0d9840(*(undefined8 *)(param_5 + 0x48),param_6,puVar3);
    _objc_release();
    puVar5 = puVar3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar5;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar5 + 0x28);
}



/* Entry: 105b16e5c; end: 105b16e63; -[SCSelectionRecipientContactsActionHandler uiContainer] */

undefined8 FUN_105b16e5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105b16e64; end: 105b16e93; -[SCSelectionRecipientContactsActionHandler setUiContainer:] */

void FUN_105b16e64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b16e94; end: 105b16ed7; -[SCSelectionRecipientContactsActionHandler .cxx_destruct] */

void FUN_105b16e94(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b16ed8; end: 105b16f43; -[SCSelectionRecipientLongPressActionHandler initWithRecipientPickerLongPressDelegate:] */

undefined1 * FUN_105b16ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ebdb0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105b16f44; end: 105b17073; -[SCSelectionRecipientLongPressActionHandler handleActionWithSender:actionModel:fromSourceView:] */

bool FUN_105b16f44(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_4);
  lVar3 = param_1 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar3 == 0) {
    bVar2 = false;
  }
  else {
    uVar4 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c24e0;
    _objc_opt_class(PTR_PTR_1126c24e0);
    uVar6 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    uVar1 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    if (uVar1 == 0) {
      bVar2 = false;
    }
    else {
      func_0x00010c15a7a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c122a80();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar4);
      bVar2 = uVar7 != 0;
      if (uVar7 != 0) {
        param_1 = param_1 + 8;
        _objc_loadWeakRetained(param_1);
        func_0x00010c122c80();
        _objc_release(param_1);
      }
      _objc_release(uVar7);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  return bVar2;
}



/* Entry: 105b17074; end: 105b1707b; -[SCSelectionRecipientLongPressActionHandler uiContainer] */

undefined8 FUN_105b17074(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105b1707c; end: 105b170ab; -[SCSelectionRecipientLongPressActionHandler setUiContainer:] */

void FUN_105b1707c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105b170ac; end: 105b170d7; -[SCSelectionRecipientLongPressActionHandler .cxx_destruct] */

void FUN_105b170ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105b170d8; end: 105b172a3; -[SCRecipientPickerConfiguration initWithAlphabeticalIndexes:] */

undefined8 * FUN_105b170d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ebdb8;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105b172a4; end: 105b172f7; -[SCRecipientPickerConfiguration precedingSections] */

void FUN_105b172a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
  func_0x00010afe5038();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ecd40(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105b172f8; end: 105b1734b; -[SCRecipientPickerConfiguration subsequentSections] */

void FUN_105b172f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
  func_0x00010afe50dc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ecd40(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105b1734c; end: 105b17393; -[SCRecipientPickerConfiguration sectionIdentifiersForQueryText:querySource:] */

void FUN_105b1734c(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c08fa60();
  if (param_3 == 0) {
    func_0x00010c269d40(*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010afe514c();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b17394; end: 105b1739f; -[SCRecipientPickerConfiguration .cxx_destruct] */

void FUN_105b17394(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b173a0; end: 105b17447; -[SCRecipientPickerEntryPoint begin] */

void FUN_105b173a0(undefined8 param_1)

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
  pcStack_40 = FUN_105b17448;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105b17448; end: 105b1747b;  */

void FUN_105b17448(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdd38a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b1747c; end: 105b17caf; -[SCRecipientPickerEntryPoint _beginOnMainThread] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b1747c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar23 = param_1 + _DAT_11272fc64;
  lVar27 = lVar23;
  _objc_loadWeakRetained();
  lVar1 = lVar27;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar27);
  puVar2 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = (long)_DAT_11272fc68;
  uVar25 = *(undefined8 *)(param_1 + lVar27);
  *(undefined **)(param_1 + lVar27) = puVar2;
  _objc_release(uVar25);
  uVar3 = *(undefined8 *)(param_1 + lVar27);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar3;
  func_0x00010bf1f3c0();
  _objc_release(uVar3);
  if ((int)uVar25 != 0) {
    lVar28 = (long)_DAT_11272fc6c;
    lVar27 = param_1 + lVar28;
    _objc_loadWeakRetained();
    lVar4 = lVar27;
    func_0x00010bf5f860();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = lVar4;
    func_0x00010bfcbb00();
    *(long *)(param_1 + _DAT_11272fc70) = lVar26;
    _objc_release(lVar4);
    _objc_release(lVar27);
    lVar28 = param_1 + lVar28;
    _objc_loadWeakRetained(lVar28);
    lVar27 = lVar28;
    func_0x00010bf5f860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24fc40();
    _objc_release(lVar27);
    _objc_release(lVar28);
  }
  lVar27 = param_1 + _DAT_11272fc74;
  _objc_loadWeakRetained();
  lVar28 = lVar27;
  func_0x00010c244ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar28;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf01c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar28);
  _objc_release(lVar27);
  puVar2 = PTR_PTR_1126c24e8;
  _objc_alloc();
  func_0x00010bff2bc0();
  puVar6 = PTR_PTR_1126c24f0;
  _objc_opt_new();
  puVar7 = PTR_PTR_1126c24f8;
  _objc_alloc();
  lVar27 = param_1 + _DAT_11272fc78;
  _objc_loadWeakRetained(lVar27);
  lVar28 = param_1 + _DAT_11272fc7c;
  _objc_loadWeakRetained(lVar28);
  lVar4 = lVar28;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049540();
  _objc_release(lVar4);
  _objc_release(lVar28);
  _objc_release(lVar27);
  puVar8 = PTR_PTR_1126c2500;
  _objc_alloc();
  func_0x00010c044000();
  puVar9 = PTR_PTR_1126c2508;
  _objc_alloc();
  lVar29 = (long)_DAT_11272fc80;
  lVar27 = param_1 + lVar29;
  _objc_loadWeakRetained(lVar27);
  lVar28 = lVar27;
  func_0x00010c0b4dc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03d540();
  _objc_release(lVar28);
  _objc_release(lVar27);
  puVar10 = PTR_PTR_1126c2510;
  _objc_alloc();
  lVar27 = param_1 + lVar29;
  _objc_loadWeakRetained(lVar27);
  lVar4 = lVar27;
  func_0x00010bf4a860();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + lVar29;
  _objc_loadWeakRetained(lVar28);
  func_0x00010bfebbc0();
  func_0x00010c043fe0();
  _objc_release(lVar28);
  _objc_release(lVar4);
  _objc_release(lVar27);
  puVar11 = PTR_PTR_1126c2518;
  _objc_alloc();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff0760();
  _objc_release(puVar12);
  lVar26 = (long)_DAT_11272fc84;
  lVar27 = param_1 + lVar26;
  _objc_loadWeakRetained();
  lVar28 = lVar27;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar28;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar4;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar28);
  _objc_release(lVar27);
  lVar14 = param_1;
  func_0x00010be9cda0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126c2520;
  _objc_opt_new();
  puVar15 = PTR_PTR_1126c2528;
  _objc_alloc();
  func_0x00010bff0600();
  puVar16 = PTR_PTR_1126c2530;
  _objc_alloc();
  lVar27 = param_1 + lVar29;
  _objc_loadWeakRetained(lVar27);
  lVar4 = lVar27;
  func_0x00010bf480e0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + lVar29;
  _objc_loadWeakRetained(lVar28);
  lVar17 = lVar28;
  func_0x00010bfdfd00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002060();
  _objc_release(lVar17);
  _objc_release(lVar28);
  _objc_release(lVar4);
  _objc_release(lVar27);
  puVar18 = PTR_PTR_1126c2538;
  _objc_alloc();
  lVar27 = param_1 + lVar29;
  _objc_loadWeakRetained(lVar27);
  lVar17 = lVar27;
  func_0x00010c105f80();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + lVar29;
  _objc_loadWeakRetained(lVar28);
  lVar19 = lVar28;
  func_0x00010bf80de0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar29;
  _objc_loadWeakRetained();
  lVar20 = lVar4;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010dc0();
  _objc_release(lVar20);
  _objc_release(lVar4);
  _objc_release(lVar19);
  _objc_release(lVar28);
  _objc_release(lVar17);
  _objc_release(lVar27);
  puVar21 = PTR_PTR_1126c2540;
  _objc_alloc();
  lVar26 = param_1 + lVar26;
  _objc_loadWeakRetained();
  lVar4 = lVar26;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + lVar29;
  _objc_loadWeakRetained();
  func_0x00010bf8e660();
  _objc_loadWeakRetained();
  lVar17 = lVar23;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + _DAT_11272fc88;
  _objc_loadWeakRetained();
  lVar19 = lVar28;
  func_0x00010bf611e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010ae0(puVar21);
  _objc_release(lVar19);
  _objc_release(lVar28);
  _objc_release(lVar17);
  _objc_release(lVar23);
  _objc_release(lVar27);
  _objc_release(lVar4);
  _objc_release(lVar26);
  puVar22 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  func_0x00010c21b220(puVar18);
  func_0x00010c21b220(puVar15);
  func_0x00010c222400(puVar15);
  func_0x00010c21b220(puVar9);
  func_0x00010c21b220(puVar10);
  func_0x00010c09c7a0(puVar21);
  param_1 = param_1 + lVar29;
  _objc_loadWeakRetained();
  lVar23 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar23);
  _objc_release(param_1);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar18);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar12);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar25 = *(undefined8 *)(lVar1 + 0x20);
  func_0x00010bf1f440(uVar25);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar2,PTR_s_numberWithBool__1126157d0,uVar25);
  return;
}



/* Entry: 105b17cb0; end: 105b17cef;  */

void FUN_105b17cb0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110e1e838,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 105b17cf0; end: 105b17db3; -[SCRecipientPickerEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b17cf0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272fc68);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    lVar3 = param_1 + _DAT_11272fc6c;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010bf5f860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24fc40();
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  puStack_38 = PTR_PTR_1126ebdc0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b17db4; end: 105b17ff7; -[SCRecipientPickerEntryPoint _sectionExtensionsProviderFutureWithActionHandler:alphabeticalIndexes:configuration:eventTracker:performer:selectionTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b17db4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  lVar2 = param_1 + _DAT_11272fc8c;
  _objc_loadWeakRetained();
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  uVar4 = *(undefined8 *)(param_1 + _DAT_11272fc90);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105b17ff8;
  puStack_a0 = &UNK_1108645b8;
  _objc_retain(param_3);
  uStack_98 = param_3;
  _objc_retain(param_6);
  uStack_90 = param_6;
  _objc_retain(param_7);
  uStack_88 = param_7;
  _objc_retain(param_8);
  puStack_118 = puVar3;
  uStack_110 = 0xc2000000;
  uStack_108 = 0x105b18058;
  puStack_100 = &UNK_1108d5610;
  lStack_f8 = lVar2;
  uStack_f0 = param_3;
  uStack_e8 = param_6;
  uStack_e0 = param_7;
  uStack_d8 = param_8;
  uStack_d0 = param_4;
  uStack_c8 = param_5;
  puStack_c0 = puVar1;
  uStack_80 = param_8;
  _objc_retain(puVar1);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010bf9d5c0(uVar4,param_2,&puStack_b8,&puStack_118);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105b17ff8; end: 105b180eb;  */

void FUN_105b17ff8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c2548;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010bff0300();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


