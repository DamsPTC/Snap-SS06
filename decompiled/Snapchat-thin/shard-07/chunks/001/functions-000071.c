/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10515105c; end: 105151067; -[SCSelectionListsPrivateStoriesActionModel .cxx_destruct] */

void FUN_10515105c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105151068; end: 10515113f; -[SCSelectionListsPrivateStoriesViewModel initWithListId:title:recipients:] */

undefined1 *
FUN_105151068(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e6718;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105151140; end: 105151163; -[SCSelectionListsPrivateStoriesViewModel copyWithZone:] */

undefined8 FUN_105151140(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105151164; end: 1051511e3; -[SCSelectionListsPrivateStoriesViewModel hash] */

undefined8 * FUN_105151164(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10515127c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105151288;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_105151288;
          }
          goto LAB_10515127c;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105151288:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1051511e4; end: 1051512a3; -[SCSelectionListsPrivateStoriesViewModel isEqual:] */

long FUN_1051511e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10515127c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105151288;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_105151288;
          }
          goto LAB_10515127c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_105151288:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1051512a4; end: 1051512ab; -[SCSelectionListsPrivateStoriesViewModel listId] */

undefined8 FUN_1051512a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1051512ac; end: 1051512b3; -[SCSelectionListsPrivateStoriesViewModel title] */

undefined8 FUN_1051512ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1051512b4; end: 1051512bb; -[SCSelectionListsPrivateStoriesViewModel recipients] */

undefined8 FUN_1051512b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1051512bc; end: 1051512f7; -[SCSelectionListsPrivateStoriesViewModel .cxx_destruct] */

void FUN_1051512bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051512f8; end: 10515178b; -[SCSendToListsSectionActionHandler initWithListsDataManager:snapchattersDataFetcher:groupsDataFetcher:sendToTracker:listIdentifier:userId:myDisplayName:grapheneRegistry:shortcutsDataFetcher:circumstanceEngine:logger:] */

undefined8 *
FUN_1051512f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  puStack_80 = PTR_PTR_1126e6720;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
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
    _objc_storeWeak(puVar1 + 5,param_6);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_11;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 4,param_13);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_90,puVar1);
    puVar5 = puVar1 + 5;
    _objc_loadWeakRetained(puVar5);
    puVar6 = puVar5;
    func_0x00010bf9a080();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10515178c;
    puStack_a0 = &UNK_11086a5e0;
    _objc_copyWeak(auStack_98,auStack_90);
    puVar7 = puVar6;
    func_0x00010c25ff60(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    uVar8 = puVar1[0xe];
    puStack_e0 = puVar3;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_1051517d4;
    puStack_c8 = &UNK_11086bca8;
    _objc_retain(param_11);
    uStack_c0 = param_11;
    func_0x00010c2656e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_e8,auStack_90);
    uVar2 = uVar8;
    func_0x00010c25ff60(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar8);
    _objc_destroyWeak(auStack_e8);
    _objc_release(uStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
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



/* Entry: 10515178c; end: 1051517d3;  */

void FUN_10515178c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a5c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051517d4; end: 105151863;  */

void FUN_1051517d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c22d6a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010c268560(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105151864; end: 10515190b;  */

void FUN_105151864(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c122f00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c22d640(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06f580(param_2);
  _objc_release(param_2);
  func_0x00010becc9e0(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10515190c; end: 105151973; -[SCSendToListsSectionActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_10515190c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0720c0();
  _objc_release(param_4);
  if ((int)uVar1 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x70),param_2,*(undefined8 *)(param_1 + 0x48));
  }
  return uVar1;
}



/* Entry: 105151974; end: 105151bd3; -[SCSendToListsSectionActionHandler _toggleAllShortcutRecipientsWithShortcutRecipients:shortcutId:isContextual:] */

void FUN_105151974(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar8 = *(undefined8 *)(lVar7 * 8);
      _objc_retain(puVar2);
      _objc_retain(puVar3);
      func_0x00010c0c0000(uVar8);
      _objc_release(puVar3);
      _objc_release(puVar2);
      lVar7 = lVar7 + 1;
    } while (lVar4 != lVar7);
    lVar4 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar5 = puVar2;
  func_0x00010bf529e0();
  if ((puVar5 != (undefined *)0x0) ||
     (puVar5 = puVar3, func_0x00010bf529e0(), puVar5 != (undefined *)0x0)) {
    uVar8 = param_1;
    func_0x00010be9e260(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010becc9a0(param_1);
    _objc_release(uVar8);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_addObject__11259c1f0,param_2);
  return;
}



/* Entry: 105151bd4; end: 105151bef;  */

void FUN_105151bd4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0,param_2);
  return;
}



/* Entry: 105151bf0; end: 105151d4f; -[SCSendToListsSectionActionHandler _handleUsersListSelectionWithListName:listDataModels:] */

void FUN_105151bf0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar8 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_4);
        }
        puVar8 = *(undefined8 **)(lStack_128 + lVar10 * 8);
        puVar2 = (undefined1 *)puVar8;
        func_0x00010c0d4f60();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c071ae0();
        _objc_release(puVar2);
        if ((int)puVar3 != 0) {
          func_0x00010becc940(param_1);
          goto LAB_105151cfc;
        }
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = param_4;
      puVar8 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
LAB_105151cfc:
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  puVar2 = (undefined1 *)puVar8;
  func_0x00010bfceb60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = (undefined1 *)puVar8;
    func_0x00010c244720();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf529e0();
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (puVar4 == (undefined1 *)0x0) goto LAB_105151ea0;
  }
  else {
    _objc_release(puVar2);
  }
  puVar5 = PTR_PTR_1126b53f8;
  func_0x00010c159100(PTR_PTR_1126b53f8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + 0x60);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c09a680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar7);
  _objc_release(uVar6);
  puVar2 = (undefined1 *)puVar8;
  func_0x00010bfceb60(puVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010be9e260(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = (undefined1 *)puVar8;
  func_0x00010c244720(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010becc9a0(param_3,param_2,puVar2,lVar1,&PTR____CFConstantStringClassReference_110f12d98)
  ;
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(puVar5);
LAB_105151ea0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 105151d50; end: 105151eb7; -[SCSendToListsSectionActionHandler _toggleAllListRecipientsWithListDataModel:] */

void FUN_105151d50(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfceb60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010c244720();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 0) goto LAB_105151ea0;
  }
  else {
    _objc_release(lVar1);
  }
  puVar4 = PTR_PTR_1126b53f8;
  func_0x00010c159100(PTR_PTR_1126b53f8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c09a680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  lVar1 = param_3;
  func_0x00010bfceb60(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be9e260(param_1,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c244720(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010becc9a0(param_1,param_2,lVar1,lVar2,&PTR____CFConstantStringClassReference_110f12d98);
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(puVar4);
LAB_105151ea0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105151eb8; end: 105152017; -[SCSendToListsSectionActionHandler _toggleAllListRecipientsWithSnapchatterUserIds:groups:source:] */

void FUN_105151eb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c244e80(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105152018; end: 10515206b;  */

void FUN_105152018(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea74e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10515206c; end: 1051521f3; -[SCSendToListsSectionActionHandler _setSelectionTrackerWithSnapchatters:groups:source:] */

void FUN_10515206c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010901f964(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  FUN_105158bb0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c15ab20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c15aa20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  FUN_105158950(param_4,param_3,lVar4);
  uVar5 = param_3;
  FUN_105158c64(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c15ab20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb980();
  _objc_release(param_5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7a6a0();
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051521f4; end: 105152403; -[SCSendToListsSectionActionHandler _selectionGroupsWithGroupIds:] */

void FUN_1051521f4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *unaff_x27;
  long unaff_x28;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  long lStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 *puStack_138;
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
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_alloc();
  puVar9 = param_3;
  func_0x00010bff4000();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  puVar7 = puVar1;
  if (puVar3 == (undefined *)0x0) {
    func_0x00010bf51e00(puVar1);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x18);
    puStack_138 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfc22c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(lVar5);
    puVar9 = &uStack_130;
    lVar4 = lVar5;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      unaff_x28 = *plStack_120;
      do {
        lVar10 = 0;
        do {
          if (*plStack_120 != unaff_x28) {
            _objc_enumerationMutation(lVar5);
          }
          uVar11 = *(undefined8 *)(lStack_128 + lVar10 * 8);
          uVar6 = uVar11;
          func_0x00010bfceb20(uVar11);
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = puVar2;
          func_0x00010bf4b900();
          _objc_release(uVar6);
          if ((int)unaff_x27 != 0) {
            func_0x000108ef14b4(uVar11,*(undefined8 *)(param_1 + 0x38),
                                *(undefined8 *)(param_1 + 0x40));
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar1);
            _objc_release(uVar11);
          }
          lVar10 = lVar10 + 1;
        } while (lVar4 != lVar10);
        puVar9 = &uStack_130;
        lVar4 = lVar5;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(lVar5);
    func_0x00010bf51e00(puVar1);
    _objc_release(lVar5);
    param_3 = puStack_138;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar8 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_105152404;
  lStack_170 = unaff_x28;
  puStack_168 = unaff_x27;
  puStack_160 = puVar1;
  puStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  _objc_initWeak(auStack_178,puVar8);
  _objc_copyWeak(auStack_180,auStack_178);
  func_0x00010c0c1600(puVar9);
  _objc_destroyWeak(auStack_180);
  _objc_destroyWeak(auStack_178);
  _objc_release(puVar9);
  return;
}



/* Entry: 105152404; end: 1051524f7; -[SCSendToListsSectionActionHandler _onNextSendToEvent:] */

void FUN_105152404(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0c1600(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1051524f8; end: 10515255f;  */

void FUN_1051524f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedaca0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105152560; end: 10515265f; -[SCSendToListsSectionActionHandler _updateListIdentifierWithName:listId:] */

void FUN_105152560(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105152660; end: 105152693;  */

void FUN_105152660(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedf6c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105152694; end: 1051526f7; -[SCSendToListsSectionActionHandler _updateSelectedListName:listId:] */

void FUN_105152694(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1051526f8; end: 1051527af; -[SCSendToListsSectionActionHandler .cxx_destruct] */

void FUN_1051526f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051527b0; end: 105152c3f; -[SCSendToListsSectionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051527b0(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126b5400;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11271d6c8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c09a560();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = (long)_DAT_11271d6cc;
  lVar4 = param_1 + lVar38;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11271d6d0;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11271d6d4;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11271d6d8;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bfb98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11271d6dc;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = (long)_DAT_11271d6e0;
  lVar14 = param_1 + lVar40;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bf85f80();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = param_1 + lVar40;
  _objc_loadWeakRetained();
  lVar16 = lVar40;
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_11271d6e4;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_11271d6e8;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_11271d6ec;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_11271d6f0;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010c22d820();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_1 + lVar38;
  _objc_loadWeakRetained();
  lVar25 = lVar38;
  func_0x00010c0db000();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + _DAT_11271d6f4;
  _objc_loadWeakRetained();
  lVar27 = lVar26;
  func_0x00010bf4a300();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + _DAT_11271d6f8;
  _objc_loadWeakRetained();
  lVar29 = lVar28;
  func_0x00010c122ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lVar29;
  func_0x00010c2312a0();
  lVar39 = (long)_DAT_11271d6fc;
  lVar31 = param_1 + lVar39;
  _objc_loadWeakRetained();
  lVar32 = lVar31;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = param_1 + lVar39;
  _objc_loadWeakRetained();
  lVar33 = lVar39;
  func_0x00010c27ecc0();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1 + _DAT_11271d700;
  _objc_loadWeakRetained();
  lVar35 = lVar34;
  func_0x00010c15d320();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_1 + _DAT_11271d704;
  _objc_loadWeakRetained();
  lVar37 = lVar36;
  func_0x00010bf12e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0264c0(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar11,lVar13,lVar15,lVar16,lVar18,
                      lVar20,lVar22,lVar24,lVar25,lVar27,(char)lVar30);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar39);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar38);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar40);
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
  param_1 = param_1 + _DAT_11271d708;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105152c40; end: 105152d2b; -[SCSendToListsSectionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105152c40(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271d6fc);
  _objc_destroyWeak(param_1 + _DAT_11271d700);
  _objc_destroyWeak(param_1 + _DAT_11271d6f4);
  _objc_destroyWeak(param_1 + _DAT_11271d6f0);
  _objc_destroyWeak(param_1 + _DAT_11271d6e4);
  _objc_destroyWeak(param_1 + _DAT_11271d6e8);
  _objc_destroyWeak(param_1 + _DAT_11271d6d8);
  _objc_destroyWeak(param_1 + _DAT_11271d704);
  _objc_destroyWeak(param_1 + _DAT_11271d6dc);
  _objc_destroyWeak(param_1 + _DAT_11271d6d0);
  _objc_destroyWeak(param_1 + _DAT_11271d6cc);
  _objc_destroyWeak(param_1 + _DAT_11271d6e0);
  _objc_destroyWeak(param_1 + _DAT_11271d6d4);
  _objc_destroyWeak(param_1 + _DAT_11271d6c8);
  _objc_destroyWeak(param_1 + _DAT_11271d6ec);
  _objc_destroyWeak(param_1 + _DAT_11271d708);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271d6f8);
  return;
}



/* Entry: 105152d2c; end: 105153117; -[SCSendToListsSectionExtension initWithListsDataCoordinator:snapchattersDataFetcher:groupsDataFetcher:userSession:friendmojiPresenter:imageDownloader:displayNameProvider:usernameProvider:messagingExperimentService:circumstanceEngine:grapheneRegistry:shortcutsDataFetcher:nonSnapchattersObservableRepository:contactPhotosService:shouldIncludeSelectableContacts:sendToExperimentConfiguration:sendToUIConfiguration:logger:avatarFactory:] */

undefined8 *
FUN_105152d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined1 param_17,undefined4 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22)

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
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  puStack_70 = PTR_PTR_1126e6728;
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
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
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
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_16;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0xe) = param_17;
    _objc_retain(param_19);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_22;
    _objc_release(uVar2);
  }
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
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



/* Entry: 105153118; end: 105153187; -[SCSendToListsSectionExtension sectionIdentifiers] */

void FUN_105153118(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110f12d98;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    _objc_alloc(PTR_PTR_1126b5408);
    func_0x00010c0264c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105153188; end: 105153203; -[SCSendToListsSectionExtension sectionCreator] */

void FUN_105153188(void)

{
  _objc_alloc(PTR_PTR_1126b5408);
  func_0x00010c0264c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105153204; end: 10515328f; -[SCSendToListsSectionExtension sectionDescriptor] */

void FUN_105153204(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000108f3df24(*(undefined8 *)(param_1 + 0x48));
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_alloc(PTR__OBJC_CLASS___NSSet_1126ae870);
  func_0x00010c0309a0();
  puVar2 = PTR_PTR_1126b5410;
  _objc_alloc(PTR_PTR_1126b5410);
  func_0x00010c004860();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105153290; end: 105153297; -[SCSendToListsSectionExtension sectionLoggingParser] */

undefined8 FUN_105153290(void)

{
  return 0;
}



/* Entry: 105153298; end: 105153387; -[SCSendToListsSectionExtension .cxx_destruct] */

void FUN_105153298(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
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
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105153388; end: 1051537e7; -[SCSendToListsSectionCreatorImpl initWithActionHandler:listsDataCoordinator:sendToTracker:viewModelSource:snapchattersDataFetcher:groupsDataFetcher:userSession:imageDownloader:displayNameProvider:usernameProvider:circumstanceEngine:grapheneRegistry:shortcutsDataFetcher:nonSnapchattersObservableRepository:contactPhotosService:shouldIncludeSelectableContacts:sendToExperimentConfiguration:sendToUIConfiguration:logger:avatarFactory:] */

undefined8 *
FUN_105153388(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,long param_11,long param_12,undefined8 param_13,
             undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17,
             undefined1 param_18,undefined4 param_19,undefined8 param_20,undefined8 param_21,
             undefined8 param_22,undefined8 param_23)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
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
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  puStack_70 = PTR_PTR_1126e6730;
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
    _objc_retain(param_23);
    uVar2 = puVar1[9];
    puVar1[9] = param_23;
    _objc_release(uVar2);
    lVar3 = param_11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_12;
    if (lVar4 != 0) {
      lVar5 = param_11;
    }
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[10];
    puVar1[10] = lVar6;
    _objc_release(uVar2);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x10) = param_18;
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
  }
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
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



/* Entry: 1051537e8; end: 10515396b; -[SCSendToListsSectionCreatorImpl sectionForDescriptor:] */

void FUN_1051537e8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((int)uVar2 == 0) {
    uVar2 = param_3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfda7c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 == 0) {
      param_1 = 0;
      goto LAB_10515394c;
    }
  }
  else {
    _objc_release(uVar1);
  }
  uVar2 = param_3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b1700;
  _objc_opt_class(PTR_PTR_1126b1700);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar4);
  uVar1 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf4c1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b5240;
  _objc_opt_class(PTR_PTR_1126b5240);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar4);
  uVar1 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4c760(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar2);
LAB_10515394c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10515396c; end: 105153bfb; -[SCSendToListsSectionCreatorImpl _listsSectionForIdentifier:withSectionDataModel:] */

void FUN_10515396c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010c155ea0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5418;
  _objc_alloc(PTR_PTR_1126b5418);
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = param_4;
  func_0x00010c11d080(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c2923e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c026520(puVar2,param_2,uVar9,uVar12,uVar6,uVar7,uVar3,uVar4,
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x60),
                      *(undefined8 *)(param_1 + 0x98));
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126b5398;
  _objc_alloc(PTR_PTR_1126b5398);
  func_0x00010c01a160();
  func_0x00010c161980();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c15a840(uVar6,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c15a6e0(uVar7,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar8 = PTR_PTR_1126b5420;
  _objc_alloc(PTR_PTR_1126b5420);
  uVar12 = *(undefined8 *)(param_1 + 0x10);
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c15ab20(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0264a0(puVar8,param_2,uVar12,uVar9,*(undefined8 *)(param_1 + 0x40),uVar6,uVar7,
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x68),
                      *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x70),
                      *(undefined8 *)(param_1 + 0x78),*(undefined1 *)(param_1 + 0x80));
  _objc_release(uVar9);
  puVar10 = PTR_PTR_1126b1108;
  _objc_alloc(PTR_PTR_1126b1108);
  func_0x00010c04f820();
  func_0x00010c1f9240();
  func_0x00010c161980(puVar10,param_2,*(undefined8 *)(param_1 + 8));
  puVar11 = PTR_PTR_1126b5260;
  _objc_alloc(PTR_PTR_1126b5260);
  uVar12 = uVar1;
  func_0x00010c06ef40(uVar1);
  uVar9 = uVar1;
  func_0x00010bfcf7e0(uVar1);
  func_0x00010c01edc0(puVar11,param_2,uVar12,uVar9);
  func_0x00010c222a60(puVar10,param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105153bfc; end: 105153ceb; -[SCSendToListsSectionCreatorImpl .cxx_destruct] */

void FUN_105153bfc(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
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



/* Entry: 105153cec; end: 1051540df; -[SCSendToListsSectionCreator initWithListsDataCoordinator:snapchattersDataFetcher:groupsDataFetcher:userSession:friendmojiPresenter:imageDownloader:displayNameProvider:usernameProvider:messagingExperimentService:circumstanceEngine:grapheneRegistry:shortcutsDataFetcher:nonSnapchattersObservableRepository:contactPhotosService:shouldIncludeSelectableContacts:sendToExperimentConfiguration:sendToUIConfiguration:logger:avatarFactory:] */

undefined8 *
FUN_105153cec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined1 param_17,undefined4 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22)

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
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  puStack_70 = PTR_PTR_1126e6738;
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
    uVar2 = puVar1[7];
    puVar1[7] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[6];
    puVar1[6] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
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
    _objc_retain(param_15);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_16;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x10) = param_17;
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
  }
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
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



/* Entry: 1051540e0; end: 1051541cf; -[SCSendToListsSectionCreator sectionCreatorWithActionHandler:sendToTracker:uiContainer:] */

void FUN_1051540e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b5428;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0160e0();
  puVar2 = PTR_PTR_1126b5430;
  _objc_alloc(PTR_PTR_1126b5430);
  func_0x00010bff0500();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1051541d0; end: 1051542bf; -[SCSendToListsSectionCreator .cxx_destruct] */

void FUN_1051541d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
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



/* Entry: 1051542c0; end: 1051546e3; -[SCSendToListsSectionDataProvider initWithListsDataCoordinator:selectionTracker:imageDownloader:snapchatterViewModelGenerator:groupViewModelGenerator:snapchattersDataFetcher:groupsDataFetcher:userSession:myDisplayName:sendToTracker:shortcutsDataFetcher:circumstanceEngine:nonSnapchattersObservableRepository:contactPhotosService:shouldIncludeSelectableContacts:sendToExperimentConfiguration:sendToUIConfiguration:avatarFactory:] */

undefined8 *
FUN_1051542c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined1 param_17,undefined4 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  puStack_70 = PTR_PTR_1126e6740;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    uVar2 = param_6;
    _objc_retainBlock();
    uVar4 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_7;
    _objc_retainBlock();
    uVar4 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_8);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[1];
    puVar1[1] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[2];
    puVar1[2] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_16;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x17) = param_17;
    uVar2 = puVar1[6];
    puVar1[6] = &PTR____CFConstantStringClassReference_110dc76d8;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    _objc_opt_new();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_20;
    _objc_release(uVar2);
  }
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
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



/* Entry: 1051546e4; end: 1051546ef; +[SCSendToListsSectionDataProvider announcerIdentifier] */

undefined ** FUN_1051546e4(void)

{
  return &PTR____CFConstantStringClassReference_110dc76f8;
}



/* Entry: 1051546f0; end: 1051546f7; -[SCSendToListsSectionDataProvider addListener:] */

void FUN_1051546f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1051546f8; end: 1051546ff; -[SCSendToListsSectionDataProvider removeListener:] */

void FUN_1051546f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105154700; end: 105154773; -[SCSendToListsSectionDataProvider setUpdateQueuePerformer:] */

void FUN_105154700(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21b4a0(*(undefined8 *)(param_1 + 0x50),param_2,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105154774; end: 105154937; -[SCSendToListsSectionDataProvider setUp] */

void FUN_105154774(long param_1)

{
  undefined8 uVar1;
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
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf6d420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0e60();
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105154938;
  puStack_68 = &UNK_1108531d0;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010bf9a080(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105154938; end: 1051549c7;  */

void FUN_105154938(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea4fa0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051549c8; end: 1051549cf; -[SCSendToListsSectionDataProvider tearDown] */

void FUN_1051549c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x48),PTR_s_disposeAll_1125bf508)
  ;
  return;
}



/* Entry: 1051549d0; end: 1051549d7; -[SCSendToListsSectionDataProvider dataLoadingStatus] */

undefined8 FUN_1051549d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1051549d8; end: 1051549df; -[SCSendToListsSectionDataProvider numberOfItemsInSection:] */

void FUN_1051549d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x60),PTR_s_count_1125b2420);
  return;
}



/* Entry: 1051549e0; end: 105154a33; -[SCSendToListsSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_1051549e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105154a34;
  puStack_20 = &UNK_110845ab0;
  uStack_18 = param_1;
  func_0x000100504554(param_3,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105154a34; end: 105154a63;  */

void FUN_105154a34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  func_0x00010c0840e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_objectAtIndexedSubscript__112615968,param_2);
  return;
}



/* Entry: 105154a64; end: 105154adf; -[SCSendToListsSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_105154a64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 0x30);
  puVar1 = PTR_PTR_1126b5290;
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_20,&uStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    _objc_retain(*(undefined8 *)(puVar2 + 0x60));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105154ae0; end: 105154b07; -[SCSendToListsSectionDataProvider containerCellViewModels] */

void FUN_105154ae0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105154b08; end: 105154bab; -[SCSendToListsSectionDataProvider setSectionDataModel:] */

void FUN_105154b08(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b5240;
  _objc_opt_class(PTR_PTR_1126b5240);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + 0xd8);
    *(ulong *)(param_1 + 0xd8) = uVar1;
    _objc_release(uVar4);
    uVar3 = param_3;
    func_0x00010c11d080(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed5f20(param_1);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105154bac; end: 105154cdf; -[SCSendToListsSectionDataProvider _updateContainerViewModelWithShortcutId:] */

void FUN_105154bac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22d6a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uVar1 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 105154ce0; end: 105154d33;  */

void FUN_105154ce0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed5f40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105154d34; end: 105155177; -[SCSendToListsSectionDataProvider _updateContainerViewModelWithShortcutRecipients:shortcutId:] */

void FUN_105154d34(long param_1,undefined1 *param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auStack_1f0 [8];
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [8];
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar5 = param_3;
  func_0x00010c122f00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf52a60();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar6 != 0) {
    lVar12 = *plStack_130;
    do {
      lVar11 = 0;
      do {
        if (*plStack_130 != lVar12) {
          _objc_enumerationMutation(lVar5);
        }
        uVar10 = *(undefined8 *)(lStack_138 + lVar11 * 8);
        puStack_168 = puVar1;
        uStack_160 = 0xc2000000;
        pcStack_158 = FUN_105155178;
        puStack_150 = &UNK_1108450c8;
        _objc_retain(puVar2);
        puStack_190 = puVar1;
        uStack_188 = 0xc2000000;
        uStack_180 = 0x105155184;
        puStack_178 = &UNK_1108450c8;
        puStack_148 = puVar2;
        _objc_retain(puVar3);
        puStack_1b8 = puVar1;
        uStack_1b0 = 0xc2000000;
        uStack_1a8 = 0x105155190;
        puStack_1a0 = &UNK_1108450f8;
        puStack_170 = puVar3;
        _objc_retain(puVar4);
        puStack_198 = puVar4;
        func_0x00010c0c0000(uVar10);
        _objc_release(puStack_198);
        _objc_release(puStack_170);
        _objc_release(puStack_148);
        lVar11 = lVar11 + 1;
      } while (lVar6 != lVar11);
      lVar6 = lVar5;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release(lVar5);
  puVar7 = puVar2;
  func_0x00010bf529e0();
  if (((puVar7 != (undefined *)0x0) ||
      (puVar7 = puVar3, func_0x00010bf529e0(), puVar7 != (undefined *)0x0)) ||
     (puVar7 = puVar4, func_0x00010bf529e0(), puVar7 != (undefined *)0x0)) {
    lVar5 = param_1;
    func_0x00010be9e260();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_1c0,param_1);
    uVar8 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf49e40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    lVar6 = param_1;
    func_0x00010bde7260(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + 0xa0);
    _objc_retain(uVar13);
    puStack_1e8 = puVar1;
    uStack_1e0 = 0xc2000000;
    uStack_1d8 = 0x10515519c;
    puStack_1d0 = &UNK_11086bda8;
    uVar8 = uVar10;
    uStack_1c8 = uVar13;
    func_0x00010bf41860(uVar10);
    _objc_retainAutoreleasedReturnValue();
    param_2 = auStack_1c0;
    _objc_copyWeak(auStack_1f0,param_2);
    _objc_retain(puVar4);
    _objc_retain(puVar2);
    _objc_retain(lVar5);
    _objc_retain(param_3);
    uVar9 = uVar8;
    func_0x00010c25ff60(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(param_3);
    _objc_release(lVar5);
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_1f0);
    _objc_release(uVar13);
    _objc_release(lVar6);
    _objc_release(uVar10);
    _objc_destroyWeak(auStack_1c0);
    _objc_release(lVar5);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_1c0);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_addObject__11259c1f0,param_2);
  return;
}



/* Entry: 105155178; end: 1051551b3;  */

void FUN_105155178(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0,param_2);
  return;
}



/* Entry: 1051551b4; end: 10515522b;  */

void FUN_1051551b4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c06f580(*(undefined8 *)(param_1 + 0x38));
  func_0x00010bed5f80(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10515522c; end: 1051552db; -[SCSendToListsSectionDataProvider _contactPhotosObservable] */

void FUN_10515522c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09b160();
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010c2519e0(puVar1,param_2,PTR____NSDictionary0__struct_11034ab58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1051552dc; end: 1051552f3;  */

void FUN_1051552dc(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,param_2);
    return;
  }
  return;
}



/* Entry: 1051552f4; end: 1051553cb; -[SCSendToListsSectionDataProvider _updateContainerViewModelWithSortedPhoneNumbers:contactNonSnapchatters:snapchatterUserIds:groups:isContextual:] */

void FUN_1051552f4(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf529e0();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (lVar1 != 0) {
    puVar2 = param_1;
    func_0x00010be15f80(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bed5f60(param_1,param_2,param_5,param_6,puVar2,param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051553cc; end: 105155493; -[SCSendToListsSectionDataProvider _filterContactsWithPhoneNumbers:contactNonSnapchatters:] */

void FUN_1051553cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010bff4000();
  _objc_release(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105155494;
  puStack_40 = &UNK_11086bdd8;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  uVar2 = param_4;
  func_0x0001006372a4(param_4,&puStack_58);
  _objc_release(param_4);
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105155494; end: 1051554df;  */

undefined8 FUN_105155494(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0faf60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1051554e0; end: 105155567; -[SCSendToListsSectionDataProvider _containerCellViewModelForContactNonSnapchatter:isSelected:index:count:] */

void FUN_1051554e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x000105e53d54(param_3,param_5,&PTR____CFConstantStringClassReference_110daafd8,param_6,
                      &PTR____CFConstantStringClassReference_110f12e38,
                      *(undefined1 *)(param_1 + 0xb8),param_4,1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  func_0x00010bffd260();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105155568; end: 10515560f; -[SCSendToListsSectionDataProvider _updateContainerViewModelWithSelectedList:] */

void FUN_105155568(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfceb60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be9e260(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c244720(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bed5f60(param_1,param_2,uVar1,uVar2,PTR____NSArray0__struct_11034ab48,0);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105155610; end: 10515575f; -[SCSendToListsSectionDataProvider _selectionGroupsWithGroupIds:] */

void FUN_105155610(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bfc61c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1051556e0;
  puStack_40 = &UNK_11086be08;
  uVar3 = uVar1;
  lStack_38 = param_1;
  func_0x000100504554(uVar1,&puStack_58);
  uVar2 = uVar3;
  func_0x00010bf51e00();
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105155760; end: 1051558cf; -[SCSendToListsSectionDataProvider _updateContainerViewModelWithSnapchatterUserIds:groups:contactNonSnapchatters:isContextual:] */

void FUN_105155760(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c27f840(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_60 = param_6;
  func_0x00010c244e80(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051558d0; end: 105155927;  */

void FUN_1051558d0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea7460();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105155928; end: 105155a53; -[SCSendToListsSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_105155928(long param_1)

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
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_50,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105155a54;
  puStack_60 = &UNK_110845ae0;
  puVar5 = auStack_50;
  _objc_copyWeak(auStack_58,puVar5);
  ppuVar1 = &puStack_78;
  _objc_retainBlock();
  uStack_48 = *(undefined8 *)(param_1 + 0x30);
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
  func_0x00010bde5680();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105155a54; end: 105155a9b;  */

void FUN_105155a54(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5680();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105155a9c; end: 105155ee7; -[SCSendToListsSectionDataProvider _setSelectionRecipients:groups:contactNonSnapchatters:isContextual:] */

void FUN_105155a9c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  ulong param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined1 auStack_110 [8];
  long lStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [8];
  long lStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined1 auStack_90 [8];
  long lStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010901f964();
  _objc_retainAutoreleasedReturnValue();
  *(undefined8 *)(param_1 + 0x40) = 1;
  lVar1 = param_1;
  func_0x00010be87080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010c15aa20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf529e0();
  lVar4 = param_4;
  func_0x00010bf529e0();
  lVar5 = param_5;
  func_0x00010bf529e0();
  _objc_initWeak(auStack_80,param_1);
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  if ((param_6 & 1) == 0) {
    lVar3 = param_1;
    func_0x00010bebe3e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bde7820();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x60);
    *(long *)(param_1 + 0x60) = lVar4;
    _objc_release(uVar10);
    lVar4 = param_1;
    func_0x00010be36ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x0001084256c4();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x58);
    *(long *)(param_1 + 0x58) = lVar5;
    _objc_release(uVar10);
    _objc_release(lVar4);
  }
  else {
    lVar3 = lVar4 + lVar5 + lVar3;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105155ee8;
    puStack_a0 = &UNK_11086be68;
    _objc_retain(lVar2);
    lStack_98 = lVar2;
    _objc_copyWeak(auStack_90,auStack_80);
    lVar4 = param_4;
    lStack_88 = lVar3;
    func_0x00010bd86420(param_4,&puStack_b8);
    lVar5 = param_4;
    func_0x00010bf529e0();
    puStack_f8 = puVar9;
    uStack_f0 = 0xc2000000;
    uStack_e8 = 0x105155fac;
    puStack_e0 = &UNK_11086be98;
    _objc_retain(lVar2);
    lStack_d8 = lVar2;
    _objc_copyWeak(auStack_d0,auStack_80);
    lVar6 = param_3;
    lStack_c8 = lVar5;
    lStack_c0 = lVar3;
    func_0x00010bd86420(param_3,&puStack_f8);
    lVar7 = param_3;
    func_0x00010bf529e0();
    puStack_138 = puVar9;
    uStack_130 = 0xc2000000;
    uStack_128 = 0x105156074;
    puStack_120 = &UNK_11086bec8;
    _objc_retain(lVar2);
    lStack_118 = lVar2;
    _objc_copyWeak(auStack_110,auStack_80);
    lVar8 = param_5;
    lStack_108 = lVar7 + lVar5;
    lStack_100 = lVar3;
    func_0x00010bd86420(param_5,&puStack_138);
    puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_4;
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      func_0x00010befa160(puVar9);
    }
    lVar3 = param_3;
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      func_0x00010befa160(puVar9);
    }
    lVar3 = param_5;
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      func_0x00010befa160(puVar9);
    }
    _objc_retain(puVar9);
    uVar10 = *(undefined8 *)(param_1 + 0x60);
    *(undefined **)(param_1 + 0x60) = puVar9;
    _objc_release(uVar10);
    lVar3 = lVar1;
    func_0x0001084256c4();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x58);
    *(long *)(param_1 + 0x58) = lVar3;
    _objc_release(uVar10);
    _objc_release(puVar9);
    _objc_release(lVar8);
    _objc_destroyWeak(auStack_110);
    _objc_release(lStack_118);
    _objc_release(lVar6);
    _objc_destroyWeak(auStack_d0);
    _objc_release(lStack_d8);
    _objc_release(lVar4);
    _objc_destroyWeak(auStack_90);
    lVar3 = lStack_98;
  }
  _objc_release(lVar3);
  *(undefined8 *)(param_1 + 0x40) = 2;
  param_1 = param_1 + 0xd0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
  _objc_release(param_1);
  _objc_destroyWeak(auStack_80);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105155ee8; end: 105156137;  */

void FUN_105155ee8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x000108ef7580(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar3);
  _objc_release(uVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bde73e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105156138; end: 105156293; -[SCSendToListsSectionDataProvider _sortedRecipientsListFromSnapchatters:groups:contactNonSnapchatters:] */

void FUN_105156138(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bf529e0(param_3);
  func_0x00010bf529e0(param_4);
  func_0x00010bf529e0(param_5);
  func_0x00010bffc4a0(puVar1);
  uVar2 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_11086bf18);
  _objc_release(param_3);
  func_0x00010befa160(puVar1);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_11086bf58);
  _objc_release(param_4);
  func_0x00010befa160(puVar1);
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x000100504554(param_5,&PTR___NSConcreteGlobalBlock_11086bf98);
  _objc_release(param_5);
  func_0x00010befa160(puVar1);
  _objc_release(uVar2);
  _objc_retain(&PTR___NSConcreteGlobalBlock_11096dcb0);
  puVar3 = puVar1;
  func_0x00010c246ca0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR___NSConcreteGlobalBlock_11096dcb0);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105156294; end: 1051562b3;  */

void FUN_105156294(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c244890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b5438,PTR_s_snapchatterWithSnapchatter_story_11266ec48,param_2,0,0,0,0);
  return;
}



/* Entry: 1051562b4; end: 10515630f;  */

void FUN_1051562b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b5438;
  _objc_retain(param_2);
  func_0x00010c07be00(param_2);
  func_0x00010c15a700(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105156310; end: 10515631f;  */

void FUN_105156310(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b5438,PTR_s_contactNonSnapchatterWithContact_1125b0120,param_2);
  return;
}



/* Entry: 105156320; end: 105156423; -[SCSendToListsSectionDataProvider _containerViewModelsForRecipients:identifierToStateMap:] */

void FUN_105156320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105156424;
  puStack_58 = &UNK_11086c048;
  _objc_retain(param_4);
  uStack_50 = param_4;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uVar1 = param_3;
  uStack_48 = param_3;
  func_0x00010bd86420(param_3,&puStack_70);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105156424; end: 105156673;  */

void FUN_105156424(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_140 [8];
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_105156674;
  uStack_80 = 0x105156684;
  uStack_78 = 0;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_10515668c;
  puStack_d0 = &UNK_11086bfb8;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_98 = &uStack_a0;
  _objc_retain(uVar2);
  uStack_c8 = uVar2;
  puStack_b8 = &uStack_a0;
  _objc_copyWeak(auStack_b0,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_a8 = param_3;
  _objc_retain(uVar2);
  puStack_130 = puVar1;
  uStack_128 = 0xc2000000;
  uStack_120 = 0x105156770;
  puStack_118 = &UNK_11086bfe8;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_c0 = uVar2;
  _objc_retain(uVar3);
  uStack_110 = uVar3;
  puStack_100 = &uStack_a0;
  _objc_copyWeak(auStack_f8,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_f0 = param_3;
  _objc_retain(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uStack_108 = uVar2;
  _objc_retain(uVar4);
  _objc_copyWeak(auStack_140,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_138 = param_3;
  _objc_retain(uVar2);
  func_0x00010c0c0060(param_2);
  uVar3 = puStack_98[5];
  _objc_retain(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_140);
  _objc_release(uVar4);
  _objc_release(uStack_108);
  _objc_destroyWeak(auStack_f8);
  _objc_release(uStack_110);
  _objc_release(uStack_c0);
  _objc_destroyWeak(auStack_b0);
  _objc_release(uStack_c8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105156674; end: 10515668b;  */

void FUN_105156674(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10515668c; end: 105156927;  */

void FUN_10515668c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar3 = param_2;
  func_0x000108ef8240(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar5);
  _objc_release(uVar3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x28));
  lVar2 = lVar1;
  func_0x00010bde7480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105156928; end: 105156a13; -[SCSendToListsSectionDataProvider _recipientIdentifiers:groups:contactNonSnapchatters:] */

void FUN_105156928(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_11086c098);
  uVar1 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_11086c0d8);
  _objc_release(param_3);
  uVar2 = param_5;
  func_0x000100504554(param_5,&PTR___NSConcreteGlobalBlock_11086c118);
  _objc_release(param_5);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010bff4000();
  func_0x00010befa160();
  func_0x00010befa160(puVar3);
  puVar4 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105156a14; end: 105156a2b;  */

void FUN_105156a14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b3558;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010bfceb20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c03d4e0(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105156a2c; end: 105156a4b; -[SCSendToListsSectionDataProvider _identifiersForRecipients:] */

void FUN_105156a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_11086c158);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105156a4c; end: 105156b67;  */

void FUN_105156a4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105156674;
  uStack_30 = 0x105156684;
  uStack_28 = 0;
  func_0x00010c0c0060(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105156b68; end: 105156c27;  */

void FUN_105156b68(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000108ef8240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105156c28; end: 105156e97; -[SCSendToListsSectionDataProvider _setItemToSelectionStateMap:] */

void FUN_105156c28(long param_1,undefined8 param_2,long param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined *unaff_x24;
  ulong uVar9;
  long unaff_x25;
  ulong unaff_x26;
  long lVar10;
  undefined1 *puVar11;
  code *pcVar12;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar11 = &stack0xfffffffffffffff0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_3;
  func_0x000108425790(param_3,*(undefined8 *)(param_1 + 0x58));
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x40) = 1;
    unaff_x21 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c0d3c80();
    _objc_retain(param_3);
    param_4 = auStack_f0;
    param_5 = 0x10;
    lVar1 = param_3;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x23 = *(undefined8 *)(lVar10 * 8);
        uVar9 = *(ulong *)(param_1 + 0x60);
        func_0x00010c2827c0(unaff_x23);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar9;
        func_0x00010bf4ddc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
        puVar3 = PTR_PTR_1126b52c0;
        _objc_opt_class(PTR_PTR_1126b52c0);
        uVar4 = uVar2;
        _objc_opt_isKindOfClass(uVar2,puVar3);
        uVar9 = uVar2;
        if ((uVar4 & 1) == 0) {
          uVar9 = 0;
        }
        _objc_retain(uVar9);
        _objc_release(uVar2);
        unaff_x25 = param_3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = unaff_x25;
        func_0x00010bf1f3c0();
        unaff_x26 = uVar9;
        func_0x000106c9d504(uVar9,lVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
        _objc_release(unaff_x25);
        unaff_x24 = PTR_PTR_1126aea98;
        _objc_alloc();
        func_0x00010bffd260();
        func_0x00010c2827c0(unaff_x23);
        func_0x00010c1d04c0(unaff_x21);
        _objc_release(unaff_x24);
        _objc_release(unaff_x26);
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      param_4 = auStack_f0;
      param_5 = 0x10;
      lVar1 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    uVar6 = unaff_x21;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = uVar6;
    _objc_release(uVar8);
    *(undefined8 *)(param_1 + 0x40) = 2;
    unaff_x22 = param_1 + 0xd0;
    _objc_loadWeakRetained();
    lVar7 = param_1;
    func_0x00010c155aa0();
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
  }
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126aea98;
  pcVar12 = FUN_105156e98;
  _objc_retain(lVar7);
  _objc_alloc(puVar3);
  lVar1 = *(long *)(lVar1 + 0x28);
  (**(code **)(lVar1 + 0x10))
            (lVar1,lVar7,param_5,0,param_4,param_6,param_7,param_8,unaff_x26,unaff_x25,unaff_x24,
             unaff_x23,unaff_x22,unaff_x21,param_1,param_3,puVar11,pcVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  func_0x00010bffd260(puVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105156e98; end: 105156f4b; -[SCSendToListsSectionDataProvider _containerCellViewModelForGroup:index:isSelected:count:] */

void FUN_105156e98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126aea98;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = *(long *)(param_1 + 0x28);
  (**(code **)(lVar2 + 0x10))(lVar2,param_3,param_5,0,param_4,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bffd260(puVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105156f4c; end: 105157007; -[SCSendToListsSectionDataProvider _containerCellViewModelForSelectionSnapchatter:index:isSelected:count:addActiviyIndicator:] */

void FUN_105156f4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126aea98;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  (**(code **)(lVar2 + 0x10))(lVar2,param_3,param_5,param_4,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bffd260(puVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105157008; end: 105157083; -[SCSendToListsSectionDataProvider _configureRecipientCollectionViewCell:] */

void FUN_105157008(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b5290;
  _objc_opt_class(PTR_PTR_1126b5290);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1aa200(uVar1);
  func_0x00010c16d9c0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105157084; end: 105157107; -[SCSendToListsSectionDataProvider _selectionIdentifierFromRecipient:] */

void FUN_105157084(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b3558;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c03d4e0(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110f52c78);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105157108; end: 1051572a3; -[SCSendToListsSectionDataProvider _onNextSendToEvent:] */

void FUN_105157108(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1051572b8;
  puStack_58 = &UNK_110843540;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c0c1600(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1051572a4; end: 1051572b7;  */

void FUN_1051572a4(void)

{
  return;
}



/* Entry: 1051572b8; end: 1051572eb;  */

void FUN_1051572b8(long param_1,long param_2)

{
  if (param_2 != 0) {
    return;
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde0780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051572ec; end: 105157303;  */

void FUN_1051572ec(void)

{
  return;
}



/* Entry: 105157304; end: 10515732f;  */

void FUN_105157304(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde0780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


