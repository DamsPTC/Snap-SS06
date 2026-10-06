/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1063c25ec; end: 1063c266f; -[SCCompositeAdDataSource adPositionForItem:] */

undefined8 FUN_1063c25ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc5a00(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bef3ee0();
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1063c2670; end: 1063c26f3; -[SCCompositeAdDataSource adInsertPositionForItem:] */

undefined8 FUN_1063c2670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc5a00(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bef2ee0();
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1063c26f4; end: 1063c2777; -[SCCompositeAdDataSource snapIndexPosForItem:] */

undefined8 FUN_1063c26f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc5a00(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c241620();
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1063c2778; end: 1063c2803; -[SCCompositeAdDataSource adRequestClientIdForItem:] */

void FUN_1063c2778(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc5a00(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bef4800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1063c2804; end: 1063c2873; -[SCCompositeAdDataSource adResponseForItemId:] */

void FUN_1063c2804(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bdc5a00(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bef4b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1063c2874; end: 1063c2a8b; -[SCCompositeAdDataSource adResponseForAdRequestClientId:] */

void FUN_1063c2874(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar7 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_3);
  puVar8 = param_3;
  func_0x00010c08fa60();
  if (puVar8 == (undefined1 *)0x0) {
    puVar8 = (undefined1 *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(param_1 + 0x30) != 0) {
      func_0x00010befa120(puVar2);
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      func_0x00010befa120(puVar2);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar2);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar2);
    _objc_release(uVar3);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(puVar2);
    puVar4 = puVar2;
    func_0x00010bf52a60();
    if (puVar4 != (undefined *)0x0) {
      lVar9 = *plStack_120;
      do {
        puVar1 = PTR_s_adResponseForAdRequestClientId__11259ac50;
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(puVar2);
          }
          puVar8 = *(undefined1 **)(lStack_128 + (long)puVar10 * 8);
          puVar5 = puVar8;
          _objc_opt_respondsToSelector(puVar8,puVar1);
          if (((ulong)puVar5 & 1) != 0) {
            puVar7 = (undefined8 *)param_3;
            func_0x00010bef4aa0();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar8;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x00010c08fa60();
            _objc_release(puVar5);
            if (puVar6 != (undefined1 *)0x0) goto LAB_1063c2a2c;
            _objc_release(puVar8);
          }
          puVar10 = puVar10 + 1;
        } while (puVar4 != puVar10);
        puVar4 = puVar2;
        puVar7 = &uStack_130;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined *)0x0);
    }
    puVar8 = (undefined1 *)0x0;
LAB_1063c2a2c:
    _objc_release(puVar2);
    _objc_release(puVar2);
    puVar5 = (undefined1 *)puVar7;
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar5);
    puVar6 = puVar5;
    func_0x00010be36bc0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc5a00(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_3;
    func_0x00010bef6240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(param_3);
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1063c2a8c; end: 1063c2b17; -[SCCompositeAdDataSource adViewContextForItem:] */

void FUN_1063c2a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc5a00(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bef6240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1063c2b18; end: 1063c2b1f; -[SCCompositeAdDataSource skippedAdItemIdsAroundItem:pageLeft:] */

void FUN_1063c2b18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23e670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_skippedAdItemIdsAroundItem_pageL_11266d3c0);
  return;
}



/* Entry: 1063c2b20; end: 1063c2b27; -[SCCompositeAdDataSource adViewContextForSkippedItemId:aroundItem:pageLeft:] */

void FUN_1063c2b20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef6290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_adViewContextForSkippedItemId_ar_11259b248);
  return;
}



/* Entry: 1063c2b28; end: 1063c2b2f; -[SCCompositeAdDataSource logAdSkipWithAdItemId:aroundItem:pageLeft:] */

void FUN_1063c2b28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a0870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_logAdSkipWithAdItemId_aroundItem_112605c28);
  return;
}



/* Entry: 1063c2b30; end: 1063c2b97; -[SCCompositeAdDataSource isNofillAdItemId:] */

undefined8 FUN_1063c2b30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bdc5a00(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c078c60();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1063c2b98; end: 1063c2bff; -[SCCompositeAdDataSource isNofillUnskippableAdItemId:] */

undefined8 FUN_1063c2b98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bdc5a00(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c078c80();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1063c2c00; end: 1063c2c7f; -[SCCompositeAdDataSource hasEndCardForAdIdentifier:] */

undefined * FUN_1063c2c00(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  puVar2 = PTR_PTR_1126ca220;
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf94460(puVar2,param_2,param_1,param_3);
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 1063c2c80; end: 1063c2d4f; -[SCCompositeAdDataSource insertEndCardForPrimaryGroupId:] */

ulong FUN_1063c2c80(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdf7f20();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    func_0x00010bdc5a00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ca4c8;
    _objc_opt_class(PTR_PTR_1126ca4c8);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar2);
    uVar4 = param_1;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_1);
  }
  else {
    _objc_retain(uVar1);
    uVar4 = uVar1;
  }
  _objc_release(uVar1);
  uVar1 = uVar4;
  func_0x00010c066760(uVar4);
  _objc_release(uVar4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1063c2d50; end: 1063c2d57; -[SCCompositeAdDataSource skippedAdGroupIdsAroundGroup:pagedLeft:] */

void FUN_1063c2d50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23e650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_skippedAdGroupIdsAroundGroup_pag_11266d3b8);
  return;
}



/* Entry: 1063c2d58; end: 1063c2d5f; -[SCCompositeAdDataSource adRequestClientIdForGroupId:] */

void FUN_1063c2d58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef47f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_adRequestClientIdForGroupId__11259aba0);
  return;
}



/* Entry: 1063c2d60; end: 1063c2d67; -[SCCompositeAdDataSource adResponseForGroupId:] */

void FUN_1063c2d60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef4af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_adResponseForGroupId__11259ac60);
  return;
}



/* Entry: 1063c2d68; end: 1063c2d6f; -[SCCompositeAdDataSource adViewContextForSkippedGroupId:] */

void FUN_1063c2d68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef6270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_adViewContextForSkippedGroupId__11259b240);
  return;
}



/* Entry: 1063c2d70; end: 1063c2d77; -[SCCompositeAdDataSource logAdSkipWithAdGroupId:aroundGroup:pagedLeft:] */

void FUN_1063c2d70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a0850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_logAdSkipWithAdGroupId_aroundGro_112605c20);
  return;
}



/* Entry: 1063c2d78; end: 1063c2d7f; -[SCCompositeAdDataSource isNofillAdGroupId:] */

void FUN_1063c2d78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c078c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_isNofillAdGroupId__1125fbd20);
  return;
}



/* Entry: 1063c2d80; end: 1063c2d87; -[SCCompositeAdDataSource totalTopSnapsMediaDurationInSecForAdGroup:] */

void FUN_1063c2d80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c276f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_totalTopSnapsMediaDurationInSecF_11267b5f0);
  return;
}



/* Entry: 1063c2d88; end: 1063c2db3; -[SCCompositeAdDataSource adSessionId] */

void FUN_1063c2d88(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x50);
  }
  func_0x00010bef4ec0(lVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063c2db4; end: 1063c2e37; -[SCCompositeAdDataSource totalAdCountForItem:] */

undefined8 FUN_1063c2db4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc5a00(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c275f20();
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1063c2e38; end: 1063c2ebf; -[SCCompositeAdDataSource adProductTypeForItem:] */

undefined8 FUN_1063c2e38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc5a00(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bef4260(param_1,param_2,param_3);
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1063c2ec0; end: 1063c2f47; -[SCCompositeAdDataSource isDynamicInsertionEligibleForItem:] */

undefined8 FUN_1063c2ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc5a00(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c0710c0(param_1,param_2,param_3);
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1063c2f48; end: 1063c2fa7; -[SCCompositeAdDataSource editionEntrySnapIndexForItem:] */

undefined8 FUN_1063c2f48(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x30);
  _objc_opt_respondsToSelector(uVar1,PTR_s_editionEntrySnapIndexForItem__1125c0c00);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf8c960(uVar2);
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1063c2fa8; end: 1063c3027; -[SCCompositeAdDataSource hideAdWithItem:] */

void FUN_1063c2fa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x71) = 0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf7f40(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bfe1700(param_1,param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063c3028; end: 1063c302f; -[SCCompositeAdDataSource setAdPlaybackConfig:] */

void FUN_1063c3028(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c163e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_setAdPlaybackConfig__1126369a8);
  return;
}



/* Entry: 1063c3030; end: 1063c3037; -[SCCompositeAdDataSource adPlaybackConfig] */

void FUN_1063c3030(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef3c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_adPlaybackConfig_11259a8c0);
  return;
}



/* Entry: 1063c3038; end: 1063c3073; -[SCCompositeAdDataSource operaMediaBundleProvider] */

void FUN_1063c3038(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x60);
  func_0x00010c24cee0();
  if (iVar1 == 0) {
    param_1 = 0;
  }
  else {
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1063c3074; end: 1063c311b; -[SCCompositeAdDataSource canProvideMediaBundleForPlaylistItem:] */

undefined8 FUN_1063c3074(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_1;
  func_0x00010bf63e00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ca218;
  _objc_opt_class(PTR_PTR_1126ca218);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c29d360(uVar6);
  uVar7 = uVar5;
  FUN_106433ea8(uVar5,uVar1,uVar6);
  _objc_release(uVar1);
  _objc_release(uVar5);
  return uVar7;
}



/* Entry: 1063c311c; end: 1063c3267; -[SCCompositeAdDataSource mediaBundleFromPlaylistItem:] */

void FUN_1063c311c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  _objc_retain(param_3);
  uVar10 = param_1;
  func_0x00010bf2d280();
  if ((int)uVar10 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = param_1;
    func_0x00010bf63e00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ca218;
    _objc_opt_class(PTR_PTR_1126ca218);
    uVar3 = uVar10;
    _objc_opt_isKindOfClass(uVar10,puVar2);
    uVar1 = uVar10;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar10);
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c0c5940(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c29d360(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010bef2520(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf925a0();
    uVar10 = uVar1;
    func_0x0001084c51f4(uVar1,uVar5,uVar6,uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
  return;
}



/* Entry: 1063c3268; end: 1063c32eb; -[SCCompositeAdDataSource adMetadataForPageId:] */

void FUN_1063c3268(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  func_0x00010bdc55c0(param_1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1063c32ec; end: 1063c336f; -[SCCompositeAdDataSource adMetadataForItemId:] */

void FUN_1063c32ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c101420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  func_0x00010bdc55c0(param_1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1063c3370; end: 1063c35d7; -[SCCompositeAdDataSource enumerateAdMetadataFromCurrentPage:] */

void FUN_1063c3370(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = uVar2;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf5ee40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bfecde0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  if (uVar1 != 0x7fffffffffffffff) {
    uVar3 = uVar2;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf529e0();
    _objc_release(uVar3);
    if (uVar1 < uVar4) {
      do {
        uVar3 = uVar2;
        func_0x00010bfcf800();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        uVar5 = uVar4;
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar4;
        func_0x00010bf5f0a0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar5;
        func_0x00010bfecde0();
        _objc_release(uVar6);
        _objc_release(uVar5);
        if (uVar3 == 0x7fffffffffffffff) {
LAB_1063c35a8:
          _objc_release(uVar4);
          break;
        }
        while( true ) {
          uVar5 = uVar4;
          func_0x00010c084fc0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bf529e0();
          _objc_release(uVar5);
          if (uVar6 <= uVar3) break;
          uVar5 = uVar4;
          func_0x00010c084fc0(uVar4);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = param_1;
          func_0x00010bdc55c0(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar6);
          _objc_release(uVar5);
          uVar5 = param_3;
          (**(code **)(param_3 + 0x10))(param_3,lVar7,0);
          _objc_release(lVar7);
          if ((uVar5 & 1) != 0) goto LAB_1063c35a8;
          uVar3 = uVar3 + 1;
        }
        _objc_release(uVar4);
        uVar1 = uVar1 + 1;
        uVar3 = uVar2;
        func_0x00010bfcf800();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf529e0();
        _objc_release(uVar3);
      } while (uVar1 < uVar4);
    }
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063c35d8; end: 1063c36f7; -[SCCompositeAdDataSource preparedMediaForPageId:] */

void FUN_1063c35d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  uVar3 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  func_0x00010bf63e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126ca218;
  _objc_opt_class(PTR_PTR_1126ca218);
  uVar6 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar3 = uVar4;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  lVar1 = lVar2;
  func_0x00010be36bc0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf7f40(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c10a4e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1063c36f8; end: 1063c3767; -[SCCompositeAdDataSource adMediaManagerForPageId:] */

void FUN_1063c36f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c084540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf7f40(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bef3680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1063c3768; end: 1063c3813; -[SCCompositeAdDataSource isPageCurrent:] */

long FUN_1063c3768(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f1b80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5f780();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar4;
}



/* Entry: 1063c3814; end: 1063c3aaf; -[SCCompositeAdDataSource _adMetadataForItem:] */

void FUN_1063c3814(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar2 = param_3;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126c9a78;
    func_0x00010c1015e0(PTR_PTR_1126c9a78);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0720c0();
    _objc_release(puVar10);
    _objc_release(lVar2);
    if ((int)lVar3 != 0) {
      lVar2 = param_3;
      func_0x00010be36bc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010bef4b20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      uVar5 = param_1;
      func_0x00010bf63e00();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126ca218;
      _objc_opt_class(PTR_PTR_1126ca218);
      uVar6 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar10);
      uVar1 = uVar5;
      if ((uVar6 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      if (uVar1 == 0) {
LAB_1063c39dc:
        uVar8 = *(undefined8 *)(param_1 + 0x60);
        func_0x00010bf53fa0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar4;
        func_0x00010bef2c20(uVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR_PTR_1126b3e90;
        func_0x00010befdec0(PTR_PTR_1126b3e90);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0ad80(uVar9);
        _objc_release(puVar10);
        _objc_release(uVar6);
        _objc_release(uVar9);
        _objc_release(uVar8);
        puVar10 = (undefined *)0x0;
      }
      else {
        lVar2 = param_3;
        func_0x00010be36bc0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bef4240(uVar5);
        lVar3 = lVar2;
        FUN_10640b154(lVar2,uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c071ae0();
        _objc_release(lVar3);
        _objc_release(lVar2);
        puVar10 = PTR_PTR_1126ca4d0;
        if ((int)uVar6 == 0) {
          if (uVar4 == 0) goto LAB_1063c39dc;
          puVar7 = PTR_PTR_1126ca4d8;
          _objc_alloc(PTR_PTR_1126ca4d8);
          func_0x00010bff1d40();
          puVar10 = PTR_PTR_1126ca4d0;
          func_0x00010c09cae0(PTR_PTR_1126ca4d0);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar7);
        }
        else {
          func_0x00010bef4240(uVar5);
          func_0x00010c09d560(puVar10);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      _objc_release(uVar1);
      _objc_release(uVar5);
      _objc_release(uVar4);
      goto LAB_1063c3a8c;
    }
  }
  puVar10 = (undefined *)0x0;
LAB_1063c3a8c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1063c3ab0; end: 1063c3b2f; -[SCCompositeAdDataSource itemIdForPageId:] */

void FUN_1063c3ab0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010be36bc0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1063c3b30; end: 1063c3c67; -[SCCompositeAdDataSource composerCtaContainerViewModelForPageId:] */

void FUN_1063c3b30(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar5 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar1 = uVar5;
  func_0x00010c0f1b80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5f780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar5);
  uVar5 = uVar2;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c0720c0();
  _objc_release(param_3);
  _objc_release(uVar5);
  if ((int)uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = uVar2;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bfe00;
    func_0x00010bef1b00(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ca4e0;
    _objc_opt_class(PTR_PTR_1126ca4e0);
    uVar4 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar3);
    uVar5 = uVar1;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar1);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1063c3c68; end: 1063c3c73; -[SCCompositeAdDataSource uiContainer] */

void FUN_1063c3c68(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27edb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_uiContainerWithDidPresentBlock_d_11267d590,0,0);
  return;
}



/* Entry: 1063c3c74; end: 1063c3c7b; -[SCCompositeAdDataSource uiContainerWithDidPresentBlock:didDismissBlock:] */

void FUN_1063c3c74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27edd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_uiContainerWithDidPresentBlock_d_11267d598,param_3,param_4,1);
  return;
}



/* Entry: 1063c3c7c; end: 1063c3dbf; -[SCCompositeAdDataSource uiContainerWithDidPresentBlock:didDismissBlock:shouldHandleModalPresentation:] */

void FUN_1063c3c7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  ppuVar1 = &puStack_80;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1063c3dc0;
  puStack_68 = &UNK_110920558;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retainBlock(&puStack_80);
  puVar2 = PTR_PTR_1126ca4e8;
  _objc_alloc(PTR_PTR_1126ca4e8);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bf53fa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c031cc0(puVar2);
  _objc_release(uVar3);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1063c3dc0; end: 1063c3e07;  */

void FUN_1063c3dc0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1063c3e08; end: 1063c3ec7; -[SCCompositeAdDataSource _topmostOperaPresentedViewController] */

void FUN_1063c3e08(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c27f040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c27f020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  lVar1 = lVar2;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  while (lVar1 != 0) {
    lVar3 = lVar2;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar1 = lVar3;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar2 = lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1063c3ec8; end: 1063c403f; -[SCCompositeAdDataSource plainOverlayUIContainer] */

void FUN_1063c3ec8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = param_1;
  func_0x00010becd860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    puStack_70 = &uStack_78;
    uStack_78 = 0;
    uStack_68 = 0x3042000000;
    pcStack_60 = FUN_1063c4040;
    uStack_58 = 0x1063c404c;
    _objc_initWeak(auStack_50,0);
    puVar2 = PTR_PTR_1126aeaf8;
    _objc_alloc(PTR_PTR_1126aeaf8);
    _objc_copyWeak(auStack_80,auStack_48);
    func_0x00010c0311a0(puVar2);
    _objc_destroyWeak(auStack_80);
    __Block_object_dispose(&uStack_78,8);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1063c4040; end: 1063c4053;  */

void FUN_1063c4040(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_moveWeak_11034d280)(param_1 + 0x28,param_2 + 0x28);
  return;
}



/* Entry: 1063c4054; end: 1063c4173;  */

void FUN_1063c4054(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010becd860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    _objc_storeWeak(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28,param_2);
    func_0x00010c1c8b80(param_2);
    func_0x00010c10eda0(lVar2);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1063c4174; end: 1063c4303;  */

void FUN_1063c4174(ulong param_1,long param_2)

{
  ulong uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_1;
  func_0x00010c06d1a0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) {
      uVar1 = param_1;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      if (uVar1 == 0) {
        _objc_retain(param_2);
        func_0x00010bf84b00(param_1);
        _objc_release(param_2);
      }
      else {
        _objc_initWeak(auStack_38,param_1);
        puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_60 = 0xc2000000;
        pcStack_58 = FUN_1063c5020;
        puStack_50 = &UNK_110848708;
        _objc_copyWeak(auStack_40,auStack_38);
        _objc_retain(param_2);
        lStack_48 = param_2;
        FUN_1063c4174(uVar1,&puStack_68);
        _objc_release(lStack_48);
        _objc_destroyWeak(auStack_40);
        _objc_destroyWeak(auStack_38);
      }
      _objc_release(uVar1);
      goto LAB_1063c42c4;
    }
  }
  if (param_2 != 0) {
    (**(code **)(param_2 + 0x10))(param_2);
  }
LAB_1063c42c4:
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 1063c4304; end: 1063c4347; -[SCCompositeAdDataSource didPresentCustomOverlay] */

void FUN_1063c4304(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0cfb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cfba0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063c4348; end: 1063c438b; -[SCCompositeAdDataSource didDismissCustomOverlay] */

void FUN_1063c4348(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0cfb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cfa60();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063c438c; end: 1063c438f; -[SCCompositeAdDataSource operaPresentingViewController] */

void FUN_1063c438c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becd870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__topmostOperaPresentedViewContro_112590fc0);
  return;
}



/* Entry: 1063c4390; end: 1063c43e7; -[SCCompositeAdDataSource operaNavigationStyle] */

long FUN_1063c4390(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d6c60();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 1063c43e8; end: 1063c476f; -[SCCompositeAdDataSource presentAttachmentWithAdType:collectionItemUrl:itemIndex:defaultAttachmentIndex:error:] */

undefined *
FUN_1063c43e8(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
             undefined **param_5,undefined **param_6,undefined8 *param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined8 *puVar14;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_3;
  puVar11 = param_4;
  ppuVar12 = param_5;
  ppuVar13 = param_6;
  puVar14 = param_7;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010bf53fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b3e90;
    func_0x00010befdec0(PTR_PTR_1126b3e90,param_2,3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = &PTR____CFConstantStringClassReference_110e4d558;
    ppuVar13 = &PTR____CFConstantStringClassReference_110e4d578;
    puVar9 = (undefined *)0x0;
    puVar11 = puVar3;
    func_0x00010bf0ad80(uVar10,param_2,0,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar10);
    _objc_release(uVar2);
  }
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  _objc_release();
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar1 == 0) {
    if (param_7 == (undefined8 *)0x0) goto LAB_1063c4710;
    puVar6 = PTR_PTR_1126ca4f0;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    puVar7 = PTR_PTR_1126ca4f0;
    func_0x00010c0cebe0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar7;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,&uStack_78,1);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = (undefined *)0x1;
    puVar9 = puVar6;
    ppuVar12 = ppuVar8;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_7 = puVar3;
    _objc_release(ppuVar8);
    _objc_release(puVar7);
  }
  else {
    if (param_3 == (undefined *)0xa) {
      puVar9 = (undefined *)(param_1 + 0x10);
      _objc_loadWeakRetained();
      puVar3 = puVar9;
      func_0x00010c29dfe0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010bf60c40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c0d3c80();
      _objc_release(puVar6);
      _objc_release(puVar3);
      _objc_release(puVar9);
      if (((param_5 != (undefined **)0x0) &&
          (ppuVar8 = param_5, func_0x00010c067fc0(), 0 < (long)ppuVar8)) ||
         (ppuVar8 = param_6, func_0x00010c067fc0(), 0 < (long)ppuVar8)) {
        ppuVar8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5b90;
        if (param_5 != (undefined **)0x0) {
          ppuVar8 = param_5;
        }
        puVar9 = PTR_PTR_1126c9410;
        func_0x00010c089240(PTR_PTR_1126c9410);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar7,param_2,ppuVar8,puVar9);
        _objc_release(puVar9);
        puVar9 = PTR_PTR_1126c9410;
        func_0x00010c2a4460(PTR_PTR_1126c9410);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar7,param_2,param_4,puVar9);
        _objc_release(puVar9);
        lVar4 = param_1 + 0x10;
        _objc_loadWeakRetained();
        lVar5 = lVar4;
        func_0x00010bf99b80();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR_PTR_1126ca320;
        func_0x00010c158b00(PTR_PTR_1126ca320);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar7;
        func_0x00010c0eb7e0(lVar5,param_2,puVar9,puVar7);
        _objc_release(puVar9);
        _objc_release(lVar5);
        _objc_release(lVar4);
      }
      _objc_release(puVar7);
    }
    puVar6 = (undefined *)(param_1 + 0x10);
    _objc_loadWeakRetained();
    puVar3 = puVar6;
    func_0x00010c0d6240();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = (undefined *)0x1;
    func_0x00010c0d5ee0();
    _objc_release(puVar3);
  }
  _objc_release(puVar6);
LAB_1063c4710:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(puVar11);
    _objc_retain(ppuVar12);
    _objc_retain(ppuVar13);
    if (puVar9 == (undefined *)0x2) {
      ppuVar8 = ppuVar12;
      func_0x00010c067ec0();
      if ((int)ppuVar8 < 1) {
        ppuVar8 = ppuVar13;
        func_0x00010c067ec0();
        uVar10 = 0xc;
        if ((int)ppuVar8 < 1) {
          uVar10 = 10;
        }
      }
      else {
        uVar10 = 0xc;
      }
    }
    else if (puVar9 == (undefined *)0x1) {
      puVar9 = param_4 + 0x10;
      _objc_loadWeakRetained();
      puVar3 = puVar9;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010c0d6c60();
      _objc_release(puVar3);
      _objc_release(puVar9);
      uVar10 = 7;
      if (puVar6 != (undefined *)0x1) {
        uVar10 = 9;
      }
    }
    else {
      uVar10 = 0;
    }
    func_0x00010c1b7fe0(param_4,param_2,uVar10,puVar11,puVar14);
    _objc_release(ppuVar13);
    _objc_release(ppuVar12);
    _objc_release(puVar11);
    return param_4;
  }
  return (undefined *)(ulong)(lVar1 != 0);
}



/* Entry: 1063c4770; end: 1063c488f; -[SCCompositeAdDataSource setLastInteractionV2WithTriggerType:touchPoint:collectionItemIndex:defaultAttachmentIndex:error:] */

long FUN_1063c4770(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 == 2) {
    uVar5 = param_5;
    func_0x00010c067ec0();
    if ((int)uVar5 < 1) {
      uVar4 = param_6;
      func_0x00010c067ec0();
      uVar5 = 0xc;
      if ((int)uVar4 < 1) {
        uVar5 = 10;
      }
    }
    else {
      uVar5 = 0xc;
    }
  }
  else if (param_3 == 1) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0d6c60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar5 = 7;
    if (lVar3 != 1) {
      uVar5 = 9;
    }
  }
  else {
    uVar5 = 0;
  }
  func_0x00010c1b7fe0(param_1,param_2,uVar5,param_4,param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 1063c4890; end: 1063c4bef; -[SCCompositeAdDataSource setLastInteractionV2WithInteractionType:touchPoint:error:] */

undefined8
FUN_1063c4890(undefined8 param_1,undefined *param_2,undefined8 param_3,long param_4,long param_5,
             undefined8 *param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puVar1 = param_2 + 0x10;
  _objc_loadWeakRetained();
  _objc_release();
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (puVar1 != (undefined *)0x0) {
    if (param_4 + 1U < 0x1a) {
      param_6 = *(undefined8 **)(&UNK_10dddbd20 + (param_4 + 1U) * 8);
    }
    else {
      param_6 = (undefined8 *)0x1;
    }
    if (param_5 == 0) goto LAB_1063c4bb0;
    uVar6 = *(undefined8 *)(param_5 + 0x10);
    while( true ) {
      _objc_retain(uVar6);
      func_0x00010bf885a0(uVar6);
      uVar10 = param_1;
      _objc_release(uVar6);
      if (param_5 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(param_5 + 0x18);
      }
      _objc_retain(uVar6);
      func_0x00010bf885a0(uVar6);
      uVar11 = uVar10;
      _objc_release(uVar6);
      if (param_5 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(param_5 + 0x30);
      }
      _objc_retain(uVar6);
      func_0x00010bf885a0(uVar6);
      uVar12 = uVar11;
      _objc_release(uVar6);
      if (param_5 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(param_5 + 0x38);
      }
      _objc_retain(uVar6);
      func_0x00010bf885a0(uVar6);
      uVar13 = uVar12;
      _objc_release(uVar6);
      puVar2 = (undefined8 *)PTR_PTR_1126c98a0;
      if (param_5 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(param_5 + 0x20);
      }
      _objc_retain(uVar6);
      func_0x00010bf885a0(uVar6);
      if (param_5 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(param_5 + 0x28);
      }
      uVar14 = uVar13;
      _objc_retain(uVar7);
      func_0x00010bf885a0(uVar7);
      if (param_5 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined8 *)(param_5 + 0x40);
      }
      uVar15 = uVar14;
      _objc_retain(uVar8);
      func_0x00010bf885a0(uVar8);
      if (param_5 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)(param_5 + 0x48);
      }
      uVar16 = uVar15;
      _objc_retain(uVar9);
      func_0x00010bf885a0(uVar9);
      func_0x00010c068a20(param_1,uVar10,uVar13,uVar14,uVar11,uVar12,uVar15,uVar16,puVar2,param_3,
                          param_6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      puVar5 = param_2 + 0x10;
      _objc_loadWeakRetained(puVar5);
      puVar1 = puVar5;
      func_0x00010c0688c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b8f80();
      _objc_release(puVar1);
      _objc_release(puVar5);
      param_6 = puVar2;
LAB_1063c4b58:
      _objc_release(puVar2);
      param_2 = puVar5;
LAB_1063c4b5c:
      _objc_release(param_5);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) break;
      ___stack_chk_fail();
LAB_1063c4bb0:
      uVar6 = 0;
    }
    return 0;
  }
  if (param_6 == (undefined8 *)0x0) goto LAB_1063c4b5c;
  puVar2 = (undefined8 *)PTR_PTR_1126ca4f0;
  func_0x00010bf87dc0(PTR_PTR_1126ca4f0);
  _objc_retainAutoreleasedReturnValue();
  uStack_a8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  puVar1 = PTR_PTR_1126ca4f0;
  func_0x00010c0cebe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_a0 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_a0,&uStack_a8,1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x00010bf99240(puVar5,param_3,puVar2,1,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  *param_6 = puVar4;
  _objc_release(puVar3);
  _objc_release(puVar1);
  goto LAB_1063c4b58;
}



/* Entry: 1063c4bf0; end: 1063c4bf7; -[SCCompositeAdDataSource isPresentingAdReportingView] */

undefined1 FUN_1063c4bf0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x70);
}



/* Entry: 1063c4bf8; end: 1063c4c0b; -[SCCompositeAdDataSource isAdHiddenWithAdRequestClientId:] */

undefined8 FUN_1063c4bf8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_containsObject__1125b07e8);
    return uVar1;
  }
  return 0;
}



/* Entry: 1063c4c0c; end: 1063c4d67; -[SCCompositeAdDataSource _handleAdReportEventV2:] */

void FUN_1063c4c0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
LAB_1063c4d30:
    _objc_release();
  }
  else {
    lVar2 = *(long *)(lVar2 + 0x18);
    _objc_release();
    if (lVar2 < 6) {
      if (lVar2 - 3U < 3) {
        func_0x00010be254a0(param_1);
      }
      goto LAB_1063c4d34;
    }
    if (lVar2 != 6) {
      if (lVar2 == 7) {
        lVar2 = param_3;
        func_0x00010bf99b20();
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 == 0) {
          bVar5 = 0;
        }
        else {
          bVar5 = *(byte *)(lVar2 + 9);
        }
        lVar2 = param_3;
        func_0x00010bf428e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined8 *)(lVar2 + 0x28);
        }
        _objc_retain(uVar3);
        lVar1 = param_3;
        func_0x00010bf428e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar1 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined8 *)(lVar1 + 0x10);
        }
        _objc_retain(uVar4);
        func_0x00010be2a760(param_1,param_2,bVar5 & 1,uVar3,uVar4);
        _objc_release(uVar4);
        _objc_release(lVar1);
        _objc_release(uVar3);
        _objc_release(lVar2);
        goto LAB_1063c4d30;
      }
      if (lVar2 != 8) goto LAB_1063c4d34;
    }
    func_0x00010be25480(param_1);
  }
LAB_1063c4d34:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063c4d68; end: 1063c4db7; -[SCCompositeAdDataSource _handleAdReportEventPresented] */

void FUN_1063c4d68(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + 0x70) = 1;
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0f60();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063c4db8; end: 1063c4e03; -[SCCompositeAdDataSource _handleAdReportEventDismissed] */

void FUN_1063c4db8(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + 0x70) = 0;
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0f60();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063c4e04; end: 1063c4f43; -[SCCompositeAdDataSource _handleHideAdDismissedWithAdHidden:pageId:adIdentifier:] */

void FUN_1063c4e04(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  )

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  *(undefined1 *)(param_1 + 0x70) = 0;
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0f60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (param_3 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x68),param_2,param_5);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c101440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c282860(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010be36bc0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf77300(uVar3,param_2,param_5,lVar4,lVar1);
    _objc_release(lVar1);
    _objc_release(lVar4);
    _objc_release(uVar3);
    func_0x00010bfe1700(param_1,param_2,lVar2);
    _objc_release(lVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1063c4f44; end: 1063c4f4b; -[SCCompositeAdDataSource isPresentingPharmaDisclaimer] */

undefined1 FUN_1063c4f44(long param_1)

{
  return *(undefined1 *)(param_1 + 0x71);
}



/* Entry: 1063c4f4c; end: 1063c4f53; -[SCCompositeAdDataSource setPresentingPharmaDisclaimer:] */

void FUN_1063c4f4c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x71) = param_3;
  return;
}



/* Entry: 1063c4f54; end: 1063c501f; -[SCCompositeAdDataSource .cxx_destruct] */

void FUN_1063c4f54(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
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
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1063c5020; end: 1063c50f3;  */

void FUN_1063c5020(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((uVar1 != 0) && (uVar2 = uVar1, func_0x00010c06d1a0(), (uVar2 & 1) == 0)) {
    uVar2 = uVar1;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar2 != 0) {
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_1063c50f4;
      puStack_40 = &UNK_110849530;
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar3);
      uStack_38 = uVar3;
      func_0x00010bf84b00(uVar1,param_2,1,&puStack_58);
      _objc_release(uStack_38);
      goto LAB_1063c50d8;
    }
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
LAB_1063c50d8:
  _objc_release(uVar1);
  return;
}



/* Entry: 1063c50f4; end: 1063c511b;  */

void FUN_1063c50f4(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001063c5100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1063c511c; end: 1063c520f; -[SCPromotedStoryAdDataSource initWithDependencies:pendingDisplayAdData:] */

undefined8 *
FUN_1063c511c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f11b8;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithDependencies_pendingDisp_1125e0768,param_3,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1063c5210;
    puStack_58 = &UNK_110841f80;
    _objc_retain(puVar1);
    puStack_50 = puVar1;
    _objc_retain(param_4);
    uStack_48 = param_4;
    func_0x00010007380c(uVar2,&puStack_70);
    _objc_release(uVar2);
    _objc_release(uStack_48);
    _objc_release(puStack_50);
  }
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 1063c5210; end: 1063c521f;  */

void FUN_1063c5210(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be12730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fetchMediaIfNecessary_reloadOpe_112562368,
             *(undefined8 *)(param_1 + 0x28),0);
  return;
}



/* Entry: 1063c5220; end: 1063c529b; -[SCPromotedStoryAdDataSource userDidTapLoadingErrorCta:] */

void FUN_1063c5220(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010007380c();
  _objc_release(uVar1);
  return;
}



/* Entry: 1063c529c; end: 1063c5337;  */

void FUN_1063c529c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = uVar5;
  func_0x00010bef4120(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be12720(uVar5,param_2,uVar4,1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1063c5338; end: 1063c5413; -[SCPromotedStoryAdDataSource mediaLoadContexts] */

void FUN_1063c5338(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined **ppuVar17;
  int iVar18;
  undefined1 *puVar19;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined1 *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [16];
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  ppuVar17 = &puStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b19f8;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b19f8;
  puStack_50 = puVar1;
  func_0x00010bf81400();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b19f8;
  puStack_48 = puVar2;
  func_0x00010c23f2e0();
  _objc_retainAutoreleasedReturnValue();
  iVar18 = 3;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar17);
  puVar19 = (undefined1 *)ppuVar17;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar19;
  func_0x00010bf529e0();
  _objc_release(puVar19);
  if (puVar5 != (undefined1 *)0x0) {
    puVar19 = (undefined1 *)0x0;
    do {
      puVar5 = (undefined1 *)ppuVar17;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar2 = puVar1;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0c4740();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar1;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c0c5940();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar1;
      func_0x00010bf6d940(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010bef2520();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010bf925a0();
      puVar5 = puVar6;
      func_0x0001084c4f90(puVar6,puVar9,puVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar4;
      func_0x00010c0c56e0();
      _objc_release(puVar5);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar13 != (undefined *)0x3) {
        _objc_initWeak(auStack_d0,puVar1);
        puVar5 = puVar6;
        func_0x00010c242040();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar5;
        func_0x00010c274c60();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar6;
        func_0x00010bfe5ec0(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar14;
        func_0x0001084c506c(puVar14,puVar15);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar15);
        _objc_release(puVar14);
        _objc_release(puVar5);
        puVar2 = puVar1;
        func_0x00010bf6d940(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c0c4e40();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar1;
        func_0x00010c0c5660(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef4240(puVar1);
        puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_108 = 0xc2000000;
        pcStack_100 = FUN_1063c5868;
        puStack_f8 = &UNK_11085a5d8;
        puStack_f0 = puVar1;
        _objc_retain(puVar6);
        puStack_e8 = puVar6;
        _objc_retain(puVar16);
        puStack_e0 = puVar16;
        _objc_copyWeak(auStack_d8,auStack_d0);
        func_0x00010bfa87a0(puVar4);
        _objc_release(puVar7);
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(puVar2);
        if (iVar18 != 0) {
          puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_138 = 0xc2000000;
          pcStack_130 = FUN_1063c58ac;
          puStack_128 = &UNK_110841f80;
          puStack_120 = puVar1;
          _objc_retain(puVar6);
          puStack_118 = puVar6;
          func_0x0001000d76cc("APPSTORE",&puStack_140);
          _objc_release(puStack_118);
        }
        _objc_destroyWeak(auStack_d8);
        _objc_release(puStack_e0);
        _objc_release(puStack_e8);
        _objc_release(puVar16);
        _objc_destroyWeak(auStack_d0);
      }
      _objc_release(puVar6);
      puVar19 = puVar19 + 1;
      puVar5 = (undefined1 *)ppuVar17;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf529e0();
      _objc_release(puVar5);
    } while (puVar19 < puVar6);
  }
  _objc_release(ppuVar17);
  return;
}



/* Entry: 1063c5414; end: 1063c5867; -[SCPromotedStoryAdDataSource _fetchMediaIfNecessary:reloadOperaItemIfStatusChanged:] */

void FUN_1063c5414(long param_1,undefined8 param_2,ulong param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
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
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  uVar16 = param_3;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar16;
  func_0x00010bf529e0();
  _objc_release(uVar16);
  if (uVar1 != 0) {
    uVar16 = 0;
    do {
      uVar1 = param_3;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      lVar3 = param_1;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0c4740();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c0c5940();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_1;
      func_0x00010bf6d940(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010bef2520();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010bf925a0();
      uVar1 = uVar2;
      func_0x0001084c4f90(uVar2,lVar8,lVar12);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar5;
      func_0x00010c0c56e0();
      _objc_release(uVar1);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      if (lVar12 != 3) {
        _objc_initWeak(auStack_80,param_1);
        uVar1 = uVar2;
        func_0x00010c242040();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar1;
        func_0x00010c274c60();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar2;
        func_0x00010bfe5ec0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar13;
        func_0x0001084c506c(uVar13,uVar14);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar14);
        _objc_release(uVar13);
        _objc_release(uVar1);
        lVar3 = param_1;
        func_0x00010bf6d940(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c0c4e40();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = param_1;
        func_0x00010c0c5660(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef4240(param_1);
        puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b8 = 0xc2000000;
        pcStack_b0 = FUN_1063c5868;
        puStack_a8 = &UNK_11085a5d8;
        lStack_a0 = param_1;
        _objc_retain(uVar2);
        uStack_98 = uVar2;
        _objc_retain(uVar15);
        uStack_90 = uVar15;
        _objc_copyWeak(auStack_88,auStack_80);
        func_0x00010bfa87a0(lVar5);
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(lVar3);
        if (param_4 != 0) {
          puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_e8 = 0xc2000000;
          pcStack_e0 = FUN_1063c58ac;
          puStack_d8 = &UNK_110841f80;
          lStack_d0 = param_1;
          _objc_retain(uVar2);
          uStack_c8 = uVar2;
          func_0x0001000d76cc("APPSTORE",&puStack_f0);
          _objc_release(uStack_c8);
        }
        _objc_destroyWeak(auStack_88);
        _objc_release(uStack_90);
        _objc_release(uStack_98);
        _objc_release(uVar15);
        _objc_destroyWeak(auStack_80);
      }
      _objc_release(uVar2);
      uVar16 = uVar16 + 1;
      uVar1 = param_3;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf529e0();
      _objc_release(uVar1);
    } while (uVar16 < uVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1063c5868; end: 1063c58ab;  */

void FUN_1063c5868(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063c58ac; end: 1063c5907;  */

void FUN_1063c58ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c1013e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c280580(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c101400(uVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1063c5908; end: 1063c59ef; -[SCPromotedStoryAdDataSource isAdContentLoopingForDataModel:] */

undefined8 FUN_1063c5908(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ca218;
  _objc_opt_class(PTR_PTR_1126ca218);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010bef4820(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfe5ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar4 = param_1;
  func_0x00010c0e00e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_1);
  uVar5 = uVar4;
  func_0x00010c258fc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c2318c0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 1063c59f0; end: 1063c5cbb; -[SCPromotedStoryAdDataSource pageDataForDataModel:completion:] */

void FUN_1063c59f0(ulong param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126ca218;
  _objc_opt_class(PTR_PTR_1126ca218);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c5940();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf925a0();
  uVar10 = uVar1;
  func_0x0001084c4f90(uVar1,uVar5,uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c4740();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0c56e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126b23e0;
  uVar3 = uVar1;
  if (uVar6 == 2) {
    if (param_4 == 0) goto LAB_1063c5c7c;
    _objc_alloc(PTR_PTR_1126b23e0);
    func_0x00010c280580(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4240(param_1);
    uVar4 = uVar3;
    func_0x00010640ad5c(uVar3,param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (1 < uVar6) {
      puStack_68 = PTR_PTR_1126f11b8;
      uStack_70 = param_1;
      _objc_msgSendSuper2(&uStack_70,PTR_s_pageDataForDataModel_completion__112619db8,param_3,
                          param_4);
      goto LAB_1063c5c7c;
    }
    if (param_4 == 0) goto LAB_1063c5c7c;
    _objc_alloc(PTR_PTR_1126b23e0);
    func_0x00010c280580(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4240(param_1);
    uVar4 = uVar3;
    func_0x00010640abd4(uVar3,param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c033240(puVar2);
  (**(code **)(param_4 + 0x10))(param_4,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
LAB_1063c5c7c:
  _objc_release(uVar10);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1063c5cbc; end: 1063c5e6b; -[SCPromotedStoryAdDataSource initialAdSnapToDisplayForAdDataModel:] */

undefined8 FUN_1063c5cbc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
      uVar11 = 0;
LAB_1063c5e1c:
      _objc_release(lVar2);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar11);
        return uVar11;
      }
      ___stack_chk_fail();
      return 4;
    }
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar11 = *(undefined8 *)(lVar10 * 8);
      uVar4 = param_1;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c1181e0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_3;
      func_0x0001084c659c(param_3,uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010c06b960();
      _objc_release(lVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      if ((int)uVar8 == 0) {
        _objc_retain(uVar11);
        goto LAB_1063c5e1c;
      }
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1063c5e6c; end: 1063c5e73; -[SCPromotedStoryAdDataSource adProductType] */

undefined8 FUN_1063c5e6c(void)

{
  return 4;
}



/* Entry: 1063c5e74; end: 1063c5eeb; -[SCPromotedStoryAdDataSource _handleMediaFetchResult:adSnap:] */

void FUN_1063c5e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010c1013e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c280580(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c101400(param_1,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063c5eec; end: 1063c5ef3; -[SCPromotedStoryAdDataSource adPositionForItem:] */

undefined8 FUN_1063c5eec(void)

{
  return 0;
}



/* Entry: 1063c5ef4; end: 1063c5efb; -[SCPromotedStoryAdDataSource totalAdCountForItem:] */

undefined8 FUN_1063c5ef4(void)

{
  return 1;
}



/* Entry: 1063c5efc; end: 1063c5f77; -[SCPromotedStoryAdDataSource adSessionId] */

void FUN_1063c5efc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c118160();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5e6e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1063c5f78; end: 1063c62c3; -[SCContentInterstitialAdDataSource initWithDependencies:pendingDisplayAdData:adMediaManager:adPreparationManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1063c5f78(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126f11c0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithDependencies_pendingDisp_1125e0770);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_112746ee4);
    *(undefined **)((long)puVar1 + (long)_DAT_112746ee4) = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_112746ee8);
    *(undefined **)((long)puVar1 + (long)_DAT_112746ee8) = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_112746eec);
    *(undefined **)((long)puVar1 + (long)_DAT_112746eec) = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_112746ef0);
    *(undefined **)((long)puVar1 + (long)_DAT_112746ef0) = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_112746ef4);
    *(undefined **)((long)puVar1 + (long)_DAT_112746ef4) = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_112746ef8);
    *(undefined **)((long)puVar1 + (long)_DAT_112746ef8) = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_112746efc);
    *(undefined **)((long)puVar1 + (long)_DAT_112746efc) = puVar2;
    _objc_release(uVar7);
    func_0x00010c07c9c0(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x00010c18b560(puVar1);
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bef4240();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bf6d940(puVar1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined1 *)0x6) {
      puVar3 = puVar4;
      func_0x00010bf4c840();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c137fe0();
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(puVar4);
      puVar4 = (undefined1 *)puVar1;
      func_0x00010bf6d940(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      func_0x00010bf07ae0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf26ec0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = puVar4;
      func_0x00010bf07ae0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf26ea0();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c175420(puVar1);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar4);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bef2560();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf1f480();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    if ((int)puVar6 != 0) {
      func_0x00010bef4240(puVar1);
      puVar3 = (undefined1 *)puVar1;
      func_0x00010bf271c0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = (undefined1 *)puVar1;
      func_0x00010bf6d940(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bef2fc0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a0580();
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1063c62c4; end: 1063c6af7; -[SCContentInterstitialAdDataSource startViewingPlaylistItemGroup:previousItemGroup:currentItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063c62c4(undefined *param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined8 uVar1;
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
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar16 = (long)_DAT_112746f00;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = param_3;
  _objc_release(uVar1);
  puVar19 = param_1;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar19;
  func_0x00010bf63e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar19);
  puVar19 = param_3;
  FUN_10643f30c();
  if (param_4 == 0) {
    puVar12 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = puVar12;
    func_0x00010bef3a00();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puStack_80;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = param_1;
    func_0x00010c0ea260(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010c0eb3e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e6600(puVar18);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar18);
LAB_1063c6960:
    _objc_release(puStack_80);
    puVar18 = puVar19;
  }
  else {
    puVar18 = param_1;
    func_0x00010c0ea260();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar18;
    func_0x00010c0688c0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010c089060();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar14;
    func_0x00010c27dd80();
    puVar4 = param_1;
    func_0x00010c0ea180();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0d6c60();
    puVar12 = param_3;
    if (puVar5 == (undefined *)0x1) {
      if (puVar3 != (undefined *)0x6) goto LAB_1063c63c8;
LAB_1063c6750:
      _objc_release(puVar4);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar18);
LAB_1063c6774:
      puVar18 = (undefined *)((ulong)puVar19 & 0xffffffff);
      puVar13 = param_3;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010c08fa60();
      _objc_release(puVar13);
      if (puVar14 == (undefined *)0x0) {
        puVar12 = param_1;
        func_0x00010bf6d940();
        _objc_retainAutoreleasedReturnValue();
        puStack_80 = puVar12;
        func_0x00010bf53fa0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puStack_80;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126b3e90;
        func_0x00010befde80();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        puVar4 = param_1;
        func_0x00010c0ea260();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c0688c0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c089060();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c27dd80();
        func_0x00010c0df840();
        _objc_retainAutoreleasedReturnValue();
        lVar16 = param_4;
        func_0x00010c27dd80();
        _objc_retainAutoreleasedReturnValue();
        lVar15 = param_4;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = param_3;
        func_0x00010c27dd80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar18);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0ad80(puVar14);
        _objc_release(puVar18);
        _objc_release(puVar7);
        _objc_release(lVar15);
        _objc_release(lVar16);
        _objc_release(puVar13);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
LAB_1063c6950:
        puVar19 = (undefined *)((ulong)puVar19 & 0xffffffff);
        _objc_release(puVar3);
        _objc_release(puVar14);
        goto LAB_1063c6960;
      }
      uVar1 = *(undefined8 *)(param_1 + _DAT_112746ee4);
      func_0x00010be36bc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar1);
    }
    else {
      if (puVar3 == (undefined *)0x8) goto LAB_1063c6750;
LAB_1063c63c8:
      puVar3 = param_1;
      func_0x00010c0ea260();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c0688c0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c089060();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c27dd80();
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(puVar4);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar18);
      puVar18 = (undefined *)((ulong)puVar19 & 0xffffffff);
      if (puVar7 == (undefined *)0x4) goto LAB_1063c6774;
      uVar17 = *(ulong *)(param_1 + _DAT_112746eec);
      func_0x00010be36bc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900();
      if ((uVar17 & 1) == 0) {
        uVar17 = *(ulong *)(param_1 + _DAT_112746ee8);
        puVar13 = param_3;
        func_0x00010be36bc0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900();
        _objc_release(puVar13);
        _objc_release(puVar12);
        if ((uVar17 & 1) != 0) goto LAB_1063c696c;
        lVar16 = param_4;
        func_0x00010be36bc0(param_4);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = param_1;
        func_0x00010c23e620();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        _objc_release(puVar12);
        _objc_release(lVar16);
        puVar12 = param_1;
        func_0x00010bf6d940();
        _objc_retainAutoreleasedReturnValue();
        puStack_80 = puVar12;
        func_0x00010bef3a00();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puStack_80;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef4240();
        puVar3 = param_1;
        func_0x00010bef4120();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c258fe0(param_1);
        func_0x00010bf5f900();
        func_0x000106416d48();
        FUN_10643f30c();
        puVar13 = param_1;
        func_0x00010bf6d940();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar13;
        func_0x00010bf4c840();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c258ea0();
        puVar6 = param_1;
        func_0x00010bf6d940();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010bf4c840();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c245cc0();
        puVar18 = PTR_PTR_1126afec0;
        puVar9 = param_1;
        func_0x00010bf6d940(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010bf4c840();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26fc20();
        func_0x00010c155420(puVar18);
        func_0x00010c0e56e0(puVar14);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar13);
        goto LAB_1063c6950;
      }
    }
  }
  _objc_release(puVar12);
LAB_1063c696c:
  puVar19 = PTR_PTR_1126b8e08;
  if (((ulong)puVar18 & 1) == 0) {
    lVar16 = (long)_DAT_112746eec;
    uVar17 = *(ulong *)(param_1 + lVar16);
    puVar19 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(puVar19);
    if ((uVar17 & 1) == 0) {
      puVar19 = param_3;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar19 != (undefined *)0x0) {
        uVar1 = *(undefined8 *)(param_1 + lVar16);
        puVar19 = param_3;
        func_0x00010be36bc0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar1);
        _objc_release(puVar19);
      }
      puVar19 = param_1;
      func_0x00010bf6d940(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar19;
      func_0x00010bf4c840();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec8e0();
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar19);
    }
  }
  else {
    _objc_retain(puVar2);
    _objc_opt_class(puVar19);
    puVar12 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar19);
    puVar19 = puVar2;
    if (((ulong)puVar12 & 1) == 0) {
      puVar19 = (undefined *)0x0;
    }
    _objc_retain(puVar19);
    _objc_release(puVar2);
    func_0x00010be148e0(param_1);
    _objc_release(puVar19);
    lVar16 = (long)_DAT_112746eec;
  }
  lVar16 = *(long *)(param_1 + lVar16);
  func_0x00010bf529e0();
  if (lVar16 == 1 && ((ulong)puVar18 & 1) == 0) {
    func_0x00010be5b460(param_1);
  }
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063c6af8; end: 1063c755f; -[SCContentInterstitialAdDataSource startViewingPlaylistItem:page:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063c6af8(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_112746f04;
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_2 + lVar21);
  *(ulong *)(param_2 + lVar21) = param_4;
  _objc_release(uVar2);
  func_0x00010c069d00(*(undefined8 *)(param_2 + (long)_DAT_112746f08));
  func_0x00010c163ca0(param_2);
  uVar3 = uVar1;
  FUN_10643f30c();
  uVar22 = param_4;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c9a78;
  func_0x00010c1015e0(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar22;
  func_0x00010c0720c0();
  _objc_release(puVar4);
  _objc_release(uVar22);
  uVar22 = param_2;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar22;
  func_0x00010c0f0800();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010be36bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010c075a20();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar22);
  uVar22 = uVar1;
  func_0x00010be36bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010c067220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar22);
  if ((((uVar3 & 1) != 0) || ((uVar5 & 1) != 0)) || ((int)uVar9 != 0)) {
    uVar2 = *(undefined8 *)(param_2 + (long)_DAT_112746ef4);
    uVar22 = param_4;
    func_0x00010be36bc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar2);
    _objc_release(uVar22);
    uVar22 = param_2;
    func_0x00010bf6d940(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar22;
    func_0x00010bf4c840();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2569e0();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar22);
    uVar22 = param_2;
    func_0x00010bf6d940(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar22;
    func_0x00010bf4c840();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1396e0();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar22);
    if (((((uint)uVar3 | (uint)uVar5 ^ 0xffffffff) & 1) == 0) &&
       (uVar3 = uVar6, func_0x00010bf529e0(), uVar3 != 0)) {
      func_0x00010be8b3c0(param_2);
    }
    goto LAB_1063c7198;
  }
  uVar3 = param_2;
  func_0x00010bf6d940(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar3;
  func_0x00010bf4c840();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar22;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c250880();
  _objc_release(uVar5);
  _objc_release(uVar22);
  _objc_release(uVar3);
  lVar21 = (long)_DAT_112746ef0;
  uVar22 = *(ulong *)(param_2 + lVar21);
  uVar3 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(uVar3);
  if ((uVar22 & 1) == 0) {
    uVar3 = param_2;
    func_0x00010bf6d940(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar3;
    func_0x00010bf4c840();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar22;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec880();
    _objc_release(uVar5);
    _objc_release(uVar22);
    _objc_release(uVar3);
    uVar2 = *(undefined8 *)(param_2 + lVar21);
    uVar3 = param_4;
    func_0x00010be36bc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar2);
    _objc_release(uVar3);
  }
  uVar3 = uVar6;
  func_0x00010bf529e0();
  if (uVar3 != 0) goto LAB_1063c7198;
  uVar22 = *(ulong *)(param_2 + (long)_DAT_112746ee4);
  uVar3 = uVar1;
  func_0x00010be36bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(uVar3);
  if ((uVar22 & 1) != 0) goto LAB_1063c7198;
  uVar3 = param_2;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar3;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar22;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bfecde0();
  _objc_release(uVar3);
  uVar3 = param_2;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c258fe0(param_2);
  uVar7 = uVar3;
  func_0x00010bf5f900();
  _objc_release(uVar3);
  uVar3 = param_2;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf1f480();
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar3);
  if ((int)uVar10 == 0) {
    puVar4 = PTR_PTR_1126b8c98;
    func_0x00010bf90d40();
    if (((ulong)puVar4 & 1) == 0) {
      uVar3 = param_2;
      func_0x00010bef4120();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar3;
      func_0x00010c0f7700();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010bef4c60();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010bef2f80();
      _objc_retainAutoreleasedReturnValue();
      if (uVar11 == 0) {
        lVar21 = *(long *)(param_2 + (long)_DAT_112746f0c);
        func_0x00010bf529e0();
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar3);
        if (lVar21 == 0) {
          uVar3 = uVar1;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = param_2;
          func_0x00010bf6d940();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          func_0x00010bf4c840();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar9;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar10;
          func_0x00010c258ea0();
          uVar12 = param_2;
          func_0x00010bf6d940();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar12;
          func_0x00010bf4c840();
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar13;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar14;
          func_0x00010c245cc0();
          uVar16 = param_2;
          func_0x00010bf6d940();
          _objc_retainAutoreleasedReturnValue();
          uVar17 = uVar16;
          func_0x00010bf4c840();
          _objc_retainAutoreleasedReturnValue();
          uVar18 = uVar17;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26fc20();
          uVar19 = uVar22;
          func_0x00010bfcf800(uVar22);
          _objc_retainAutoreleasedReturnValue();
          uVar20 = uVar19;
          func_0x00010bf529e0();
          FUN_106416fbc(param_1,uVar11,uVar15,uVar20 - uVar5,0x8000000000000000);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar3;
          FUN_10641701c(uVar3,uVar7,0,2,uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c163ca0(param_2);
          _objc_release(uVar5);
          _objc_release(uVar11);
          _objc_release(uVar19);
          _objc_release(uVar18);
          _objc_release(uVar17);
          _objc_release(uVar16);
          _objc_release(uVar14);
          _objc_release(uVar13);
          _objc_release(uVar12);
          _objc_release(uVar10);
          _objc_release(uVar9);
          _objc_release(uVar8);
          _objc_release(uVar3);
          if ((uVar7 & 0xfffffffffffffffd) == 0) {
            func_0x00010be5b460(param_2);
          }
          goto LAB_1063c7190;
        }
      }
      else {
        _objc_release();
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar3);
      }
    }
LAB_1063c7184:
    func_0x00010be0b4c0(param_2);
  }
  else {
    lVar21 = *(long *)(param_2 + (long)_DAT_112746f0c);
    func_0x00010bf529e0();
    if (lVar21 != 0) goto LAB_1063c7184;
    uVar3 = param_2;
    func_0x00010bef4120();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010c0f7700();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bef4c60();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bef2f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar3);
    if (uVar11 != 0) goto LAB_1063c7184;
    if ((uVar7 & 0xfffffffffffffffd) == 0) {
      func_0x00010be5b460(param_2);
    }
    uVar3 = param_2;
    func_0x00010bf271c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar3 == 0) {
      uVar3 = uVar1;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_2;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010bf4c840();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010c258ea0();
      uVar12 = param_2;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar12;
      func_0x00010bf4c840();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar13;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar14;
      func_0x00010c245cc0();
      uVar16 = param_2;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar16;
      func_0x00010bf4c840();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar17;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26fc20();
      uVar19 = uVar22;
      func_0x00010bfcf800(uVar22);
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar19;
      func_0x00010bf529e0();
      FUN_106416fbc(param_1,uVar11,uVar15,uVar20 - uVar5,0x8000000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      FUN_10641701c(uVar3,uVar7,0,0x12,uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c163ca0(param_2);
      _objc_release(uVar5);
      _objc_release(uVar11);
      _objc_release(uVar19);
      _objc_release(uVar18);
      _objc_release(uVar17);
      _objc_release(uVar16);
      _objc_release(uVar14);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
    }
    else {
      uVar5 = param_2;
      func_0x00010bef4240();
      uVar7 = param_2;
      func_0x00010bf271c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar7;
      if (uVar5 == 6) {
        func_0x0001063cee08();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x0001063cec80();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(uVar7);
      func_0x00010be0b4e0(param_2);
    }
    _objc_release(uVar3);
  }
LAB_1063c7190:
  _objc_release(uVar22);
LAB_1063c7198:
  _objc_release(uVar6);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1063c7560; end: 1063c9583; -[SCContentInterstitialAdDataSource _evaluateInsertionRulesAndInsertAdIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063c7560(double param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  undefined8 uVar35;
  ulong uVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  ulong uVar40;
  undefined8 uVar41;
  ulong uVar42;
  undefined8 uVar43;
  ulong uVar44;
  ulong uVar45;
  double dVar46;
  ulong uStack_1b8;
  ulong uStack_160;
  
  lVar37 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar40 = *(ulong *)(param_2 + (long)_DAT_112746f04);
  _objc_retain(uVar40);
  uVar5 = uVar40;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  uVar42 = param_2;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c258fe0(param_2);
  uVar36 = uVar42;
  func_0x00010bf5f900();
  _objc_release(uVar42);
  uVar42 = param_2;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar42;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar42);
  uVar42 = uVar6;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar42;
  func_0x00010bfecde0();
  _objc_release(uVar42);
  uVar42 = param_2;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar42;
  func_0x00010bf63e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar42);
  uVar42 = param_2;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar42;
  func_0x00010bf63e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar42);
  uVar42 = uVar6;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  uVar44 = uVar42;
  func_0x00010bf529e0();
  _objc_release(uVar42);
  if (uVar7 + 1 < uVar44) {
    uVar44 = uVar6;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    uVar42 = uVar44;
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar44);
    uVar44 = param_2;
    func_0x00010c1013e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_160 = uVar44;
    func_0x00010bf63e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar44);
    uVar10 = param_2;
    func_0x00010c1013e0();
    _objc_retainAutoreleasedReturnValue();
    uVar45 = uVar42;
    func_0x00010c084fc0(uVar42);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar45;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar44 = uVar10;
    func_0x00010bf63e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    _objc_release(uVar45);
    _objc_release(uVar10);
  }
  else {
    uVar44 = 0;
    uStack_160 = 0;
    uVar42 = 0;
  }
  uVar10 = param_2;
  func_0x00010bf6d940(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar45 = uVar10;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar45;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  FUN_1063fd368(uVar9,uVar44,uVar11);
  _objc_release(uVar11);
  _objc_release(uVar45);
  _objc_release(uVar10);
  uVar10 = param_2;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar45 = uVar10;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar45;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  FUN_1063fc8d0();
  if ((int)uVar12 != 0) {
    lVar13 = *(long *)(param_2 + (long)_DAT_112746f0c);
    func_0x00010bf529e0();
    _objc_release(uVar11);
    _objc_release(uVar45);
    _objc_release(uVar10);
    if (lVar13 != 0) goto LAB_1063c79ac;
    uVar10 = param_2;
    func_0x00010bef4120();
    _objc_retainAutoreleasedReturnValue();
    uVar45 = param_2;
    func_0x00010bf6d940(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar45;
    func_0x00010bef2fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4240(param_2);
    uVar12 = uVar10;
    func_0x00010c131000();
    _objc_release(uVar11);
    _objc_release(uVar45);
    _objc_release(uVar10);
    if ((uVar12 & 1) != 0) goto LAB_1063c79ac;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_2;
    func_0x00010bf53fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR_PTR_1126b3e90;
    func_0x00010befde80(PTR_PTR_1126b3e90);
    _objc_retainAutoreleasedReturnValue();
    uVar36 = 0;
    func_0x00010bf0ad80(uVar10);
    _objc_release(puVar21);
    _objc_release(uVar10);
    _objc_release(uVar7);
    uVar10 = param_2;
LAB_1063c8540:
    _objc_release(uVar10);
    goto LAB_1063c9508;
  }
  _objc_release(uVar11);
  _objc_release(uVar45);
  _objc_release(uVar10);
LAB_1063c79ac:
  uVar10 = param_2;
  func_0x00010bef4240();
  uVar45 = param_2;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar45;
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar12;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_2;
  func_0x00010bf6d940(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010bef2fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_2;
  func_0x00010bf6d940(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001063fcf48(uVar10,uVar14,uVar9,uVar8,uVar17,0,uVar20);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar45);
  if ((uVar10 & 1) == 0) {
    uVar7 = uVar5;
    func_0x00010be36bc0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    FUN_10640a74c(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar45 = uVar8;
    FUN_10640b8b8(uVar8);
    uVar11 = uStack_160;
    FUN_10640b8b8(uStack_160);
    uVar12 = uVar9;
    FUN_1063fc8dc(uVar9);
    uVar14 = uVar44;
    FUN_1063fc8dc(uVar44);
    uVar41 = 1;
    FUN_106416d68(1,uVar10,uVar45,uVar11,uVar12,uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar45 = uVar7;
    FUN_10641701c(uVar7,uVar36,uVar41,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c163ca0(param_2);
    _objc_release(uVar45);
    _objc_release(uVar41);
    _objc_release(uVar10);
    _objc_release(uVar7);
    uVar7 = param_2;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010bef3a00();
    _objc_retainAutoreleasedReturnValue();
    uVar45 = uVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4240(param_2);
    uVar36 = 0;
    func_0x00010c0e4a60(uVar45);
    _objc_release(uVar45);
    _objc_release(uVar10);
    _objc_release(uVar7);
    goto LAB_1063c9508;
  }
  uVar10 = param_2;
  func_0x00010bef4240();
  uVar45 = param_2;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar45;
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar12;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_2;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010bef2fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_2;
  func_0x00010bf6d940(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001063fcf48(uVar10,uVar14,uVar44,uStack_160,uVar17,1,uVar20);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar45);
  if ((uVar10 & 1) == 0) {
    uVar7 = uVar5;
    func_0x00010be36bc0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar44;
    FUN_10640a74c(uVar44);
    _objc_retainAutoreleasedReturnValue();
    uVar45 = uVar8;
    FUN_10640b8b8(uVar8);
    uVar11 = uStack_160;
    FUN_10640b8b8(uStack_160);
    uVar12 = uVar9;
    FUN_1063fc8dc(uVar9);
    uVar14 = uVar44;
    FUN_1063fc8dc(uVar44);
    uVar41 = 0;
    FUN_106416d68(0,uVar10,uVar45,uVar11,uVar12,uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar45 = uVar7;
    FUN_10641701c(uVar7,uVar36,uVar41,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c163ca0(param_2);
    _objc_release(uVar45);
    _objc_release(uVar41);
    _objc_release(uVar10);
    _objc_release(uVar7);
    uVar7 = param_2;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010bef3a00();
    _objc_retainAutoreleasedReturnValue();
    uVar45 = uVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4240(param_2);
    uVar36 = 0;
    func_0x00010c0e4a60(uVar45);
    _objc_release(uVar45);
    _objc_release(uVar10);
    _objc_release(uVar7);
    goto LAB_1063c9508;
  }
  param_1 = 0.0;
  uVar10 = param_2;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  uVar45 = uVar10;
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar45;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar45);
  _objc_release(uVar10);
  uVar10 = uVar11;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  while (uVar10 != 0) {
    uVar45 = 0;
    do {
      if (lRam0000000000000000 != lVar13) {
        _objc_enumerationMutation(uVar11);
      }
      uVar41 = *(undefined8 *)(uVar45 * 8);
      puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = param_2;
      func_0x00010bef4840(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe5ec0(uVar41);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar12);
      _objc_release(uVar41);
      _objc_release(uVar12);
      _objc_release(puVar21);
      uVar45 = uVar45 + 1;
    } while (uVar10 != uVar45);
    uVar10 = uVar11;
    func_0x00010bf52a60();
  }
  _objc_release(uVar11);
  uVar10 = param_2;
  func_0x00010bef4240();
  if (uVar10 == 6) {
    uVar10 = uVar9;
    FUN_10640a52c();
    if ((int)uVar10 != 0) {
      uVar7 = uVar5;
      func_0x00010be36bc0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      FUN_10640a74c(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar41 = 1;
      FUN_106416e18(1,uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar45 = uVar7;
      FUN_10641701c(uVar7,uVar36,uVar41,0,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c163ca0(param_2);
      _objc_release(uVar45);
      _objc_release(uVar41);
      _objc_release(uVar10);
      _objc_release(uVar7);
      uVar7 = param_2;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar7;
      func_0x00010bef3a00();
      _objc_retainAutoreleasedReturnValue();
      uVar45 = uVar10;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef4240(param_2);
      uVar36 = 0;
      func_0x00010c0e4a60(uVar45);
      _objc_release(uVar45);
      _objc_release(uVar10);
      _objc_release(uVar7);
      goto LAB_1063c9508;
    }
    uVar45 = uVar42;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar45;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar45);
    uVar45 = uVar44;
    FUN_10640a52c();
    if ((int)uVar45 == 0) {
      uVar45 = uVar6;
      func_0x00010bfcf800();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar45;
      func_0x00010bf529e0();
      _objc_release(uVar45);
      uVar45 = uVar5;
      if (uVar11 <= uVar7 + 2) {
LAB_1063c8354:
        if (0 < (long)uVar7) {
          uVar11 = uVar6;
          func_0x00010bfcf800();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar11;
          func_0x00010bf529e0();
          _objc_release(uVar11);
          if (uVar7 - 1 < uVar12) {
            uVar7 = uVar6;
            func_0x00010bfcf800();
            _objc_retainAutoreleasedReturnValue();
            uVar12 = uVar7;
            func_0x00010c0dfd20();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar7);
            uVar7 = uVar12;
            func_0x00010c084fc0(uVar12);
            _objc_retainAutoreleasedReturnValue();
            uVar14 = uVar7;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar7);
            uVar7 = param_2;
            func_0x00010c1013e0();
            _objc_retainAutoreleasedReturnValue();
            uVar15 = uVar7;
            func_0x00010bf63e60();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar7);
            uVar7 = uVar15;
            FUN_10640a52c();
            if ((int)uVar7 != 0) {
              func_0x00010be36bc0(uVar5);
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar15;
              FUN_10640a74c(uVar15);
              _objc_retainAutoreleasedReturnValue();
              uVar41 = 1;
              goto LAB_1063c8450;
            }
            _objc_release(uVar15);
            _objc_release(uVar14);
            _objc_release(uVar12);
          }
        }
        _objc_release(uVar10);
        goto LAB_1063c8574;
      }
      uVar11 = uVar6;
      func_0x00010bfcf800();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      uVar11 = uVar12;
      func_0x00010c084fc0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar11;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      uVar11 = param_2;
      func_0x00010c1013e0();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar11;
      func_0x00010bf63e60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      uVar11 = uVar15;
      FUN_10640a52c();
      if ((int)uVar11 == 0) {
        _objc_release(uVar15);
        _objc_release(uVar14);
        _objc_release(uVar12);
        goto LAB_1063c8354;
      }
      func_0x00010be36bc0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar15;
      FUN_10640a74c(uVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar41 = 0;
LAB_1063c8450:
      FUN_106416e18(uVar41,uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar45;
      FUN_10641701c(uVar45,uVar36,uVar41,0,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c163ca0(param_2);
      _objc_release(uVar11);
      _objc_release(uVar41);
      _objc_release(uVar7);
      _objc_release(uVar45);
      uVar7 = param_2;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      uVar45 = uVar7;
      func_0x00010bef3a00();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar45;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef4240(param_2);
      uVar36 = 0;
      func_0x00010c0e4a60(uVar11);
      _objc_release(uVar11);
      _objc_release(uVar45);
      _objc_release(uVar7);
    }
    else {
      uVar7 = uVar5;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      uVar45 = uVar44;
      FUN_10640a74c();
      _objc_retainAutoreleasedReturnValue();
      uVar41 = 0;
      FUN_106416e18(0,uVar45);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar7;
      FUN_10641701c(uVar7,uVar36,uVar41,0,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c163ca0(param_2);
      _objc_release(uVar11);
      _objc_release(uVar41);
      _objc_release(uVar45);
      _objc_release(uVar7);
      uVar12 = param_2;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar12;
      func_0x00010bef3a00();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar14;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef4240(param_2);
      uVar36 = 0;
      func_0x00010c0e4a60(uVar15);
    }
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar12);
    goto LAB_1063c8540;
  }
LAB_1063c8574:
  uVar7 = param_2;
  func_0x00010bf6d940(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bef3a00();
  _objc_retainAutoreleasedReturnValue();
  uVar45 = uVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240(param_2);
  func_0x00010c0e4a60(uVar45);
  _objc_release(uVar45);
  _objc_release(uVar10);
  _objc_release(uVar7);
  uVar7 = param_2;
  func_0x00010bf6d940(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bef3a00();
  _objc_retainAutoreleasedReturnValue();
  uVar45 = uVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240(param_2);
  uVar11 = param_2;
  func_0x00010bef4120(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c258fe0(param_2);
  func_0x00010bf5f900(uVar11);
  func_0x000106416d48();
  func_0x00010c0e7360(uVar45);
  _objc_release(uVar11);
  _objc_release(uVar45);
  _objc_release(uVar10);
  _objc_release(uVar7);
  lVar13 = *(long *)(param_2 + (long)_DAT_112746ef4);
  func_0x00010bf529e0();
  lVar38 = (long)_DAT_112746f10;
  uVar41 = *(undefined8 *)(param_2 + lVar38);
  uVar7 = param_2;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf4c840();
  _objc_retainAutoreleasedReturnValue();
  uVar45 = uVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar45;
  func_0x00010c258ea0();
  uVar12 = param_2;
  func_0x00010bf6d940(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar12;
  func_0x00010bf4c840();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010c245cc0();
  uVar17 = param_2;
  func_0x00010bf6d940(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010bf4c840();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26fc20();
  uVar20 = param_2;
  uStack_1b8 = param_2;
  uVar22 = param_2;
  if (lVar13 == 0) {
    func_0x0001063fd408(uVar41,uVar11,uVar16);
    uVar2 = (uint)uVar41;
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar12);
    _objc_release(uVar45);
    _objc_release(uVar10);
    _objc_release(uVar7);
    uVar41 = *(undefined8 *)(param_2 + lVar38);
    uVar7 = param_2;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010bf4c840();
    _objc_retainAutoreleasedReturnValue();
    uVar45 = uVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar45;
    func_0x00010c258ea0();
    uVar12 = param_2;
    func_0x00010bf6d940(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar12;
    func_0x00010bf4c840();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010c245cc0();
    uVar17 = param_2;
    func_0x00010bf6d940(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar17;
    func_0x00010bf4c840();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar18;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26fc20();
    func_0x0001063fd4b4(uVar41,uVar11,uVar16);
    uVar3 = (uint)uVar41;
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar12);
    _objc_release(uVar45);
    _objc_release(uVar10);
    _objc_release(uVar7);
    lVar39 = *(long *)(param_2 + lVar38);
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar20;
    func_0x00010bf4c840();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar45 = uVar10;
    func_0x00010c258ea0();
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uStack_1b8;
    func_0x00010bf4c840();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar12;
    func_0x00010c245cc0();
    func_0x00010bf6d940(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar22;
    func_0x00010bf4c840();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26fc20();
    func_0x0001063fd6a8(lVar39,uVar45,uVar14);
    dVar46 = param_1;
  }
  else {
    func_0x0001063fd558(uVar41,uVar11,uVar16);
    uVar2 = (uint)uVar41;
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar12);
    _objc_release(uVar45);
    _objc_release(uVar10);
    _objc_release(uVar7);
    uVar41 = *(undefined8 *)(param_2 + lVar38);
    uVar7 = param_2;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010bf4c840();
    _objc_retainAutoreleasedReturnValue();
    uVar45 = uVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar45;
    func_0x00010c258ea0();
    uVar12 = param_2;
    func_0x00010bf6d940(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar12;
    func_0x00010bf4c840();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010c245cc0();
    uVar17 = param_2;
    func_0x00010bf6d940(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar17;
    func_0x00010bf4c840();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar18;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26fc20();
    func_0x0001063fd604(uVar41,uVar11,uVar16);
    uVar3 = (uint)uVar41;
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar12);
    _objc_release(uVar45);
    _objc_release(uVar10);
    _objc_release(uVar7);
    lVar39 = *(long *)(param_2 + lVar38);
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar20;
    func_0x00010bf4c840();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar45 = uVar10;
    func_0x00010c258ea0();
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uStack_1b8;
    func_0x00010bf4c840();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar12;
    func_0x00010c245cc0();
    func_0x00010bf6d940(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar22;
    func_0x00010bf4c840();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26fc20();
    func_0x0001063fd784(lVar39,uVar45,uVar14);
    dVar46 = param_1;
  }
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar22);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uStack_1b8);
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar20);
  uVar7 = param_2;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf5ca20();
  _objc_retainAutoreleasedReturnValue();
  uVar45 = uVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240(param_2);
  uVar11 = uVar45;
  func_0x00010c230360();
  _objc_release(uVar45);
  _objc_release(uVar10);
  _objc_release(uVar7);
  uVar1 = (uint)uVar11 ^ 1;
  uVar4 = uVar1 & uVar2;
  if (((uVar1 & 1) == 0) && (uVar2 != 0)) {
    uVar41 = *(undefined8 *)(param_2 + lVar38);
    uVar7 = param_2;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010bf5ca20();
    _objc_retainAutoreleasedReturnValue();
    uVar45 = uVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar45;
    func_0x00010c258ea0();
    uVar12 = param_2;
    func_0x00010bf6d940(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar12;
    func_0x00010bf5ca20();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010c245cc0();
    uVar17 = param_2;
    func_0x00010bf6d940(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar17;
    func_0x00010bf5ca20();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar18;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26fc20();
    func_0x0001063fd860(uVar41,uVar11,uVar16);
    uVar4 = (uint)uVar41;
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar12);
    _objc_release(uVar45);
    _objc_release(uVar10);
    _objc_release(uVar7);
  }
  uVar7 = param_2;
  func_0x00010bf6d940(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf4c840();
  _objc_retainAutoreleasedReturnValue();
  uVar45 = uVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f240();
  param_1 = dVar46;
  _objc_release(uVar45);
  _objc_release(uVar10);
  _objc_release(uVar7);
  if ((((uVar4 ^ 1) & uVar3) != 1) || (dVar46 <= 0.0)) {
    if ((((uVar4 | uVar3) & 1) == 0) && (lVar39 != 0)) {
      if (lVar39 < 3) {
        if (lVar39 == 1) {
LAB_1063c8efc:
          FUN_106416eb4();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x000106416f0c();
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        if (lVar39 != 3) goto LAB_1063c8efc;
        func_0x000106416f64();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar36 = uVar5;
      func_0x00010be36bc0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar36;
      FUN_10641701c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c163ca0(param_2);
      _objc_release(uVar10);
      _objc_release(uVar36);
      _objc_release(uVar7);
    }
  }
  else {
    uVar7 = uVar5;
    func_0x00010be36bc0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    FUN_106416eb4();
    _objc_retainAutoreleasedReturnValue();
    uVar45 = uVar7;
    FUN_10641701c(uVar7,uVar36,uVar10,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c163ca0(param_2);
    _objc_release(uVar45);
    _objc_release(uVar10);
    _objc_release(uVar7);
    if ((uVar36 & 0xfffffffffffffffb) == 3) {
      func_0x00010be9b680(param_2);
      param_1 = dVar46;
    }
  }
  uVar36 = param_2;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar36;
  func_0x00010bef2fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240();
  uVar45 = param_2;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar45;
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar12;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_2;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010bf4c840();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c258ea0();
  uVar18 = param_2;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010bf4c840();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c245cc0();
  uVar22 = param_2;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar22;
  func_0x00010bf4c840();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar23;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26fc20();
  uVar25 = param_2;
  dVar46 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar25;
  func_0x00010bf5ca20();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar26;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c258ea0();
  uVar28 = param_2;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar28;
  func_0x00010bf5ca20();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar29;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c245cc0();
  uVar31 = param_2;
  func_0x00010bf6d940(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar31;
  func_0x00010bf5ca20();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = uVar32;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26fc20();
  uVar34 = param_2;
  func_0x00010c067240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c0a05c0(param_1,dVar46,uVar10);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar45);
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar36);
  uVar7 = param_2;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bef3a00();
  _objc_retainAutoreleasedReturnValue();
  uVar45 = uVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = param_2;
  func_0x00010bef4240();
  if (lVar13 == 0) {
    func_0x00010c0cdb80();
    func_0x00010c0cdae0();
    puVar21 = PTR_PTR_1126afec0;
    func_0x00010c0cdcc0(*(undefined8 *)(param_2 + lVar38));
  }
  else {
    func_0x00010c0cdb40();
    func_0x00010c0cdaa0();
    puVar21 = PTR_PTR_1126afec0;
    func_0x00010c0cdca0(*(undefined8 *)(param_2 + lVar38));
  }
  func_0x00010c155420(puVar21);
  uVar11 = param_2;
  dVar46 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf4c840();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c258ea0();
  uVar15 = param_2;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010bf4c840();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c245cc0();
  puVar21 = PTR_PTR_1126afec0;
  uVar18 = param_2;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010bf4c840();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26fc20();
  func_0x00010c155420(puVar21);
  func_0x00010c0e4980(param_1,dVar46,uVar45);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar45);
  _objc_release(uVar10);
  _objc_release(uVar7);
  if (uVar4 != 0) {
    uVar36 = param_2;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar36;
    func_0x00010bef3a00();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4240(param_2);
    func_0x00010c0e49a0(uVar10);
    _objc_release(uVar10);
    _objc_release(uVar7);
    _objc_release(uVar36);
    uVar36 = uVar40;
    func_0x00010be3c260(param_2);
  }
LAB_1063c9508:
  _objc_release(uVar44);
  _objc_release(uStack_160);
  _objc_release(uVar42);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar37) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar36);
  uVar43 = *(undefined8 *)(uVar40 + (long)_DAT_112746f04);
  _objc_retain(uVar43);
  uVar41 = uVar43;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar40;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c258fe0(uVar40);
  uVar42 = uVar5;
  func_0x00010bf5f900();
  _objc_release(uVar5);
  uVar5 = uVar40;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = uVar6;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bfecde0();
  _objc_release(uVar5);
  uVar5 = uVar40;
  func_0x00010bf6d940(uVar40);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bef3a00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240(uVar40);
  uVar44 = uVar40;
  func_0x00010bef4120(uVar40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c258fe0(uVar40);
  func_0x00010bf5f900(uVar44);
  func_0x000106416d48();
  func_0x00010c0e7360(uVar9);
  _objc_release(uVar44);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar5);
  lVar37 = *(long *)(uVar40 + (long)_DAT_112746ef4);
  func_0x00010bf529e0();
  _objc_release(uVar43);
  uVar5 = uVar40;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bf4c840();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar44 = uVar9;
  func_0x00010c258ea0();
  uVar10 = uVar40;
  func_0x00010bf6d940(uVar40);
  _objc_retainAutoreleasedReturnValue();
  uVar45 = uVar10;
  func_0x00010bf4c840();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar45;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c245cc0();
  uVar14 = uVar40;
  func_0x00010bf6d940(uVar40);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf4c840();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26fc20();
  if (lVar37 == 0) {
    uVar17 = uVar36;
    func_0x0001063fd408(uVar36,uVar44,uVar12);
    uVar2 = (uint)uVar17;
  }
  else {
    uVar44 = uVar36;
    func_0x0001063fd558();
    uVar2 = (uint)uVar44;
  }
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar11);
  _objc_release(uVar45);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar5);
  uVar5 = uVar40;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bf5ca20();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240(uVar40);
  uVar44 = uVar9;
  func_0x00010c230360();
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar5);
  uVar4 = (uint)uVar44 ^ 1;
  uVar3 = uVar4 & uVar2;
  if (((uVar4 & 1) == 0) && (uVar2 != 0)) {
    uVar5 = uVar40;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bf5ca20();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar44 = uVar9;
    func_0x00010c258ea0();
    uVar10 = uVar40;
    func_0x00010bf6d940(uVar40);
    _objc_retainAutoreleasedReturnValue();
    uVar45 = uVar10;
    func_0x00010bf5ca20();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar45;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c245cc0();
    uVar14 = uVar40;
    func_0x00010bf6d940(uVar40);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010bf5ca20();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26fc20();
    uVar17 = uVar36;
    func_0x0001063fd860(uVar36,uVar44,uVar12);
    uVar3 = (uint)uVar17;
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar11);
    _objc_release(uVar45);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar5);
  }
  uVar5 = uVar40;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bef3a00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240();
  if (lVar37 == 0) {
    func_0x00010c0cdb80();
    func_0x00010c0cdae0();
    puVar21 = PTR_PTR_1126afec0;
    func_0x00010c0cdcc0(uVar36);
  }
  else {
    func_0x00010c0cdb40();
    func_0x00010c0cdaa0();
    puVar21 = PTR_PTR_1126afec0;
    func_0x00010c0cdca0(uVar36);
  }
  func_0x00010c155420(puVar21);
  uVar44 = uVar40;
  dVar46 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar44;
  func_0x00010bf4c840();
  _objc_retainAutoreleasedReturnValue();
  uVar45 = uVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c258ea0();
  uVar11 = uVar40;
  func_0x00010bf6d940(uVar40);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf4c840();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c245cc0();
  puVar21 = PTR_PTR_1126afec0;
  uVar15 = uVar40;
  func_0x00010bf6d940(uVar40);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010bf4c840();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26fc20();
  func_0x00010c155420(puVar21);
  func_0x00010c0e4980(param_1,dVar46,uVar9);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar45);
  _objc_release(uVar10);
  _objc_release(uVar44);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar5);
  if (uVar3 != 0) {
    uVar5 = uVar40;
    func_0x00010bf6d940(uVar40);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bef3a00();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4240(uVar40);
    func_0x00010c0e49a0(uVar9);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar5);
    uVar43 = uVar41;
    func_0x00010be36bc0(uVar41);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar40;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bf4c840();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar44 = uVar9;
    func_0x00010c258ea0();
    uVar10 = uVar40;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar45 = uVar10;
    func_0x00010bf4c840();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar45;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c245cc0();
    uVar14 = uVar40;
    func_0x00010bf6d940(uVar40);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010bf4c840();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26fc20();
    uVar17 = uVar6;
    func_0x00010bfcf800(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar17;
    func_0x00010bf529e0();
    FUN_106416fbc(param_1,uVar44,uVar12,uVar18 - uVar7,0x8000000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar35 = uVar43;
    FUN_10641701c(uVar43,uVar42,0,2,uVar44);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c163ca0(uVar40);
    _objc_release(uVar35);
    _objc_release(uVar44);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar11);
    _objc_release(uVar45);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar5);
    _objc_release(uVar43);
  }
  _objc_release(uVar6);
  _objc_release(uVar41);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar36);
  return;
}



/* Entry: 1063c9584; end: 1063c9df7; -[SCContentInterstitialAdDataSource _evaluateInsertionThresholdsOnlyWithConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063c9584(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
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
  undefined8 uVar21;
  undefined *puVar22;
  undefined8 uVar23;
  
  _objc_retain(param_4);
  uVar23 = *(undefined8 *)(param_2 + _DAT_112746f04);
  _objc_retain(uVar23);
  uVar4 = uVar23;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c258fe0(param_2);
  lVar6 = lVar5;
  func_0x00010bf5f900();
  _objc_release(lVar5);
  lVar5 = param_2;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = lVar7;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar5;
  func_0x00010bfecde0();
  _objc_release(lVar5);
  lVar5 = param_2;
  func_0x00010bf6d940(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar5;
  func_0x00010bef3a00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240(param_2);
  lVar11 = param_2;
  func_0x00010bef4120(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c258fe0(param_2);
  func_0x00010bf5f900(lVar11);
  func_0x000106416d48();
  func_0x00010c0e7360(lVar10);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar5);
  lVar12 = *(long *)(param_2 + _DAT_112746ef4);
  func_0x00010bf529e0();
  _objc_release(uVar23);
  lVar5 = param_2;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar5;
  func_0x00010bf4c840();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c258ea0();
  lVar13 = param_2;
  func_0x00010bf6d940(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010bf4c840();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c245cc0();
  lVar17 = param_2;
  func_0x00010bf6d940(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010bf4c840();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26fc20();
  if (lVar12 == 0) {
    uVar23 = param_4;
    func_0x0001063fd408(param_4,lVar11,lVar16);
    uVar2 = (uint)uVar23;
  }
  else {
    uVar23 = param_4;
    func_0x0001063fd558();
    uVar2 = (uint)uVar23;
  }
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar5);
  lVar5 = param_2;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar5;
  func_0x00010bf5ca20();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240(param_2);
  lVar11 = lVar10;
  func_0x00010c230360();
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar5);
  uVar1 = (uint)lVar11 ^ 1;
  uVar3 = uVar1 & uVar2;
  if (((uVar1 & 1) == 0) && (uVar2 != 0)) {
    lVar5 = param_2;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar5;
    func_0x00010bf5ca20();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c258ea0();
    lVar13 = param_2;
    func_0x00010bf6d940(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010bf5ca20();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x00010c245cc0();
    lVar17 = param_2;
    func_0x00010bf6d940(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar17;
    func_0x00010bf5ca20();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar18;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26fc20();
    uVar23 = param_4;
    func_0x0001063fd860(param_4,lVar11,lVar16);
    uVar3 = (uint)uVar23;
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar5);
  }
  lVar5 = param_2;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar5;
  func_0x00010bef3a00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240();
  if (lVar12 == 0) {
    func_0x00010c0cdb80();
    func_0x00010c0cdae0();
    puVar22 = PTR_PTR_1126afec0;
    func_0x00010c0cdcc0(param_4);
  }
  else {
    func_0x00010c0cdb40();
    func_0x00010c0cdaa0();
    puVar22 = PTR_PTR_1126afec0;
    func_0x00010c0cdca0(param_4);
  }
  func_0x00010c155420(puVar22);
  lVar11 = param_2;
  uVar23 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar11;
  func_0x00010bf4c840();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c258ea0();
  lVar15 = param_2;
  func_0x00010bf6d940(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010bf4c840();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c245cc0();
  puVar22 = PTR_PTR_1126afec0;
  lVar18 = param_2;
  func_0x00010bf6d940(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010bf4c840();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar19;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26fc20();
  func_0x00010c155420(puVar22);
  func_0x00010c0e4980(param_1,uVar23,lVar10);
  _objc_release(lVar12);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar5);
  if (uVar3 != 0) {
    lVar5 = param_2;
    func_0x00010bf6d940(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar5;
    func_0x00010bef3a00();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4240(param_2);
    func_0x00010c0e49a0(lVar10);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar5);
    uVar23 = uVar4;
    func_0x00010be36bc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_2;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar5;
    func_0x00010bf4c840();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c258ea0();
    lVar13 = param_2;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010bf4c840();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x00010c245cc0();
    lVar17 = param_2;
    func_0x00010bf6d940(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar17;
    func_0x00010bf4c840();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar18;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26fc20();
    lVar12 = lVar7;
    func_0x00010bfcf800(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar12;
    func_0x00010bf529e0();
    FUN_106416fbc(param_1,lVar11,lVar16,lVar20 - lVar8,0x8000000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar23;
    FUN_10641701c(uVar23,lVar6,0,2,lVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c163ca0(param_2);
    _objc_release(uVar21);
    _objc_release(lVar11);
    _objc_release(lVar12);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar5);
    _objc_release(uVar23);
  }
  _objc_release(lVar7);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1063c9df8; end: 1063ca0fb; -[SCContentInterstitialAdDataSource stopViewingPlaylistItemId:isViewingLongform:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063c9df8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_3);
  func_0x00010c069d00(*(undefined8 *)(param_1 + (long)_DAT_112746f08));
  uVar1 = param_1;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c101420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (uVar2 != 0) {
    uVar1 = uVar2;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c9a78;
    func_0x00010c1015e0(PTR_PTR_1126c9a78);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c0720c0(uVar1,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar1);
    if ((uVar4 & 1) == 0) {
      func_0x00010c0a0740(param_1,param_2,uVar2);
    }
  }
  uVar1 = param_1;
  func_0x00010c0ea260();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0688c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c27dd80();
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar1);
  if (uVar5 == 2) {
    uVar1 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bf4c840();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2569e0();
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010c075a00(param_1,param_2,param_3);
  if ((int)uVar1 != 0) {
    lVar8 = (long)_DAT_112746ee8;
    uVar6 = *(ulong *)(param_1 + lVar8);
    uVar1 = uVar2;
    func_0x00010bfce400(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(uVar6,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar1);
    if (((uVar6 & 1) == 0) &&
       (uVar1 = param_1, func_0x00010bf76fc0(param_1,param_2,param_3,param_4), (int)uVar1 != 0)) {
      uVar1 = uVar2;
      func_0x00010bfce400();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar1);
      if (uVar4 != 0) {
        uVar7 = *(undefined8 *)(param_1 + lVar8);
        uVar1 = uVar2;
        func_0x00010bfce400(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar1;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar7,param_2,uVar4);
        _objc_release(uVar4);
        _objc_release(uVar1);
      }
      func_0x00010bea1a80(param_1);
      uVar1 = param_1;
      func_0x00010bf6d940(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010bf4c840();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c137fe0();
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_release(uVar1);
      uVar1 = param_1;
      func_0x00010c070c20(param_1,param_2,param_3,param_4);
      if ((uVar1 & 1) == 0) {
        func_0x00010be5b460(param_1,param_2,2);
      }
    }
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063ca0fc; end: 1063ca36f; -[SCContentInterstitialAdDataSource stopViewingPlaylistItemGroupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063ca0fc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010c0759e0(param_1,param_2,param_3);
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0f0800();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c075a20();
    if ((uVar3 & 1) != 0) {
      puVar1 = (ulong *)(param_1 + (long)_DAT_112746ee8);
      uVar3 = *puVar1;
      func_0x00010bf4b900(uVar3,param_2,param_3);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar2);
      goto joined_r0x0001063ca1c8;
    }
    _objc_release(uVar5);
LAB_1063ca344:
    _objc_release(uVar4);
  }
  else {
    puVar1 = (ulong *)(param_1 + (long)_DAT_112746ee8);
    uVar3 = *puVar1;
    func_0x00010bf4b900(uVar3,param_2,param_3);
joined_r0x0001063ca1c8:
    if ((uVar3 & 1) != 0) goto LAB_1063ca354;
    func_0x00010befa120(*puVar1,param_2,param_3);
    func_0x00010bea1a80(param_1);
    uVar2 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf4c840();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c137fe0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar4 = param_1;
    func_0x00010c067200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = uVar2;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c08fa60();
    _objc_release(uVar4);
    if (uVar5 != 0) {
      uVar5 = param_1;
      func_0x00010bef4b40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfe5ec0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010c0e00e0(uVar5,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar5);
      uVar5 = uVar4;
      func_0x00010bef4c60();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010bfecde0();
      uVar6 = uVar4;
      func_0x00010bef4c60();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf529e0();
      _objc_release(uVar6);
      _objc_release(uVar5);
      if (uVar7 - 1 <= uVar3) {
        func_0x00010be5b460(param_1,param_2,2);
      }
      goto LAB_1063ca344;
    }
  }
  _objc_release(uVar2);
LAB_1063ca354:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063ca370; end: 1063ca373; -[SCContentInterstitialAdDataSource stopViewingOptOutInterstitialForPlaylistItemGroup:] */

void FUN_1063ca370(void)

{
  return;
}



/* Entry: 1063ca374; end: 1063ca44f; -[SCContentInterstitialAdDataSource startViewingPlaylistChapterId:currentItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1063ca374(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar5 = (long)_DAT_112746ef8;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    lVar2 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf4c840();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec880();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010befa120(*(undefined8 *)(param_1 + lVar5),param_2,param_3);
  }
  func_0x00010c251920(param_1,param_2,param_4,0);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063ca450; end: 1063ca457; -[SCContentInterstitialAdDataSource isRetryInsertionEnabled] */

undefined8 FUN_1063ca450(void)

{
  return 1;
}



/* Entry: 1063ca458; end: 1063ca567; -[SCContentInterstitialAdDataSource shouldDelayFiringAdOpportunity] */

bool FUN_1063ca458(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010bef39c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0ebcc0();
  if (lVar2 == 2) {
    _objc_release(lVar1);
  }
  else {
    lVar2 = param_1;
    func_0x00010bef39c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0ebcc0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0x12) {
      return false;
    }
  }
  func_0x00010bef4120(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bef2f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar4 == 0;
}



/* Entry: 1063ca568; end: 1063ca707; -[SCContentInterstitialAdDataSource targetingParameters] */

void FUN_1063ca568(long param_1)

{
  undefined **ppuVar1;
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
  undefined **ppuVar12;
  
  lVar2 = param_1;
  func_0x00010bef4240();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dfc018;
  if (lVar2 != 6) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dfbff8;
  }
  _objc_retain(ppuVar1);
  lVar2 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c29d360();
  lVar4 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001084c0d90(lVar3,lVar6);
  lVar7 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240(param_1);
  ppuVar12 = ppuVar1;
  FUN_1063fa06c(ppuVar1,lVar3,lVar9,lVar11,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar12);
  return;
}



/* Entry: 1063ca708; end: 1063ca86b; -[SCContentInterstitialAdDataSource adProductType] */

undefined8 FUN_1063ca708(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar2 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c29d360();
  _objc_release(lVar2);
  if (0x19 < lVar3 - 0x49U || (1L << (lVar3 - 0x49U & 0x3f) & 0x2020001U) == 0) {
    if (lVar3 == 0x1d) {
      lVar2 = param_1;
      func_0x00010c0ea180();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c0d6c60();
      if (lVar4 == 1) {
        func_0x00010bf6d940();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_1;
        func_0x00010bef2560();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c0ec0c0();
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(param_1);
        uVar7 = 5;
        if ((int)lVar6 != 0) {
          uVar7 = 6;
        }
      }
      else {
        uVar7 = 5;
      }
      _objc_release(lVar2);
    }
    else {
      uVar7 = 5;
    }
    uVar1 = lVar3 - 0x57U >> 1;
    if ((7 < (uVar1 | lVar3 - 0x57U << 0x3f)) || ((0xb1U >> (ulong)((uint)uVar1 & 0x1f) & 1) == 0))
    {
      if (0x29 < lVar3 - 0x42U) {
        return uVar7;
      }
      if ((1L << (lVar3 - 0x42U & 0x3f) & 0x3c000100701U) == 0) {
        return uVar7;
      }
    }
  }
  return 6;
}



/* Entry: 1063ca86c; end: 1063ca917; -[SCContentInterstitialAdDataSource upcomingStoriesContext] */

void FUN_1063ca86c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  FUN_10640d5d0(uVar1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1063ca918; end: 1063ca9f3; -[SCContentInterstitialAdDataSource mediaLoadContexts] */

undefined * FUN_1063ca918(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b19f8;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b19f8;
  puStack_50 = puVar1;
  func_0x00010bf81400();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b19f8;
  puStack_48 = puVar2;
  func_0x00010c23f2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  return (undefined *)0x1;
}



/* Entry: 1063ca9f4; end: 1063ca9fb; -[SCContentInterstitialAdDataSource storyAdMediaLoadStatusSnapCount] */

undefined8 FUN_1063ca9f4(void)

{
  return 1;
}


