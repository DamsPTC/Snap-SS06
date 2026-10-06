/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108f7c858; end: 108f7c8b7; -[SCAuraActionDataModel hash] */

void FUN_108f7c858(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126ff788;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f7c8b8; end: 108f7c8fb; -[SCAuraActionDataModel internalInit] */

void FUN_108f7c8b8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ff788;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f7c8fc; end: 108f7c99b; -[SCAuraActionDataModel isEqual:] */

long FUN_108f7c8fc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f7c980;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_108f7c980;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_108f7c980;
    }
  }
  lVar3 = 1;
LAB_108f7c980:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f7c99c; end: 108f7ca1f; -[SCAuraActionDataModel matchMyProfile:friendProfile:] */

void FUN_108f7c99c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x10));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f7ca20; end: 108f7ca2b; -[SCAuraActionDataModel .cxx_destruct] */

void FUN_108f7ca20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f7ca2c; end: 108f7cad7; -[SCEditSnapchatterDisplayNameActionData initWithSnapchatter:indexPath:] */

undefined1 *
FUN_108f7ca2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ff790;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f7cad8; end: 108f7cafb; -[SCEditSnapchatterDisplayNameActionData copyWithZone:] */

undefined8 FUN_108f7cad8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f7cafc; end: 108f7cb6f; -[SCEditSnapchatterDisplayNameActionData hash] */

undefined8 * FUN_108f7cafc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108f7cbf0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108f7cbfc;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_108f7cbfc;
        }
        goto LAB_108f7cbf0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108f7cbfc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108f7cb70; end: 108f7cc17; -[SCEditSnapchatterDisplayNameActionData isEqual:] */

long FUN_108f7cb70(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f7cbf0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f7cbfc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_108f7cbfc;
        }
        goto LAB_108f7cbf0;
      }
    }
    lVar3 = 0;
  }
LAB_108f7cbfc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f7cc18; end: 108f7cc1f; -[SCEditSnapchatterDisplayNameActionData snapchatter] */

undefined8 FUN_108f7cc18(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f7cc20; end: 108f7cc27; -[SCEditSnapchatterDisplayNameActionData indexPath] */

undefined8 FUN_108f7cc20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f7cc28; end: 108f7cc57; -[SCEditSnapchatterDisplayNameActionData .cxx_destruct] */

void FUN_108f7cc28(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f7cc58; end: 108f7cd8f; -[SCFriendProfileSectionScope initWithPlugInRegistry:sections:hideRecursiveOptions:sourcePage:snapchatter:conversationId:displayContentDelegate:pageActionHandler:profileSessionId:deckHierarchy:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108f7cc58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126ff798;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithPlugInRegistry_sections__1125eb720,param_3,param_4,
                      param_9,param_10,0,param_11);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277e72c) = param_5;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277e730) = param_6;
    lVar3 = (long)_DAT_11277e734;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11277e738;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11277e73c;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_12;
    _objc_release(uVar2);
  }
  _objc_release(param_12);
  _objc_release(param_8);
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 108f7cd90; end: 108f7cd9f; -[SCFriendProfileSectionScope snapchatter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f7cd90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e734);
}



/* Entry: 108f7cda0; end: 108f7cdaf; -[SCFriendProfileSectionScope conversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f7cda0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e738);
}



/* Entry: 108f7cdb0; end: 108f7cdbf; -[SCFriendProfileSectionScope hideRecursiveOptions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108f7cdb0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277e72c);
}



/* Entry: 108f7cdc0; end: 108f7cdcf; -[SCFriendProfileSectionScope sourcePage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f7cdc0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e730);
}



/* Entry: 108f7cdd0; end: 108f7cddf; -[SCFriendProfileSectionScope deckHierarchy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f7cdd0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e73c);
}



/* Entry: 108f7cde0; end: 108f7ce2f; -[SCFriendProfileSectionScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f7cde0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277e73c,0);
  _objc_storeStrong(param_1 + _DAT_11277e738,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e734,0);
  return;
}



/* Entry: 108f7ce30; end: 108f7cf2b; -[SCGroupProfileSectionScope initWithPlugInRegistry:sections:groupId:displayContentDelegate:pageActionHandler:profileSessionId:groupProfileSubType:communityId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108f7ce30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  _objc_retain(param_10);
  puStack_58 = PTR_PTR_1126ff7a0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithPlugInRegistry_sections__1125eb720,param_3,param_4,
                      param_6,param_7,0,param_8);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11277e740;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277e744) = param_9;
    lVar3 = (long)_DAT_11277e748;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 108f7cf2c; end: 108f7cf3b; -[SCGroupProfileSectionScope groupId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f7cf2c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e740);
}



/* Entry: 108f7cf3c; end: 108f7cf4b; -[SCGroupProfileSectionScope groupProfileSubType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f7cf3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e744);
}



/* Entry: 108f7cf4c; end: 108f7cf5b; -[SCGroupProfileSectionScope communityId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f7cf4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e748);
}



/* Entry: 108f7cf5c; end: 108f7cf9b; -[SCGroupProfileSectionScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f7cf5c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277e748,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e740,0);
  return;
}



/* Entry: 108f7cf9c; end: 108f7d0d7; -[SCProfileSectionScope initWithPlugInRegistry:sections:displayContentDelegate:pageActionHandler:deckContainerFactory:profileSessionId:] */

undefined1 *
FUN_108f7cf9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  puStack_58 = PTR_PTR_1126ff7a8;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_7);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f7d0d8; end: 108f7d0df; -[SCProfileSectionScope plugInRegistry] */

undefined8 FUN_108f7d0d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f7d0e0; end: 108f7d0e7; -[SCProfileSectionScope sections] */

undefined8 FUN_108f7d0e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f7d0e8; end: 108f7d0ff; -[SCProfileSectionScope displayContentDelegate] */

void FUN_108f7d0e8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f7d100; end: 108f7d117; -[SCProfileSectionScope pageActionHandler] */

void FUN_108f7d100(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f7d118; end: 108f7d11f; -[SCProfileSectionScope profileSessionId] */

undefined8 FUN_108f7d118(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108f7d120; end: 108f7d137; -[SCProfileSectionScope deckContainerFactory] */

void FUN_108f7d120(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f7d138; end: 108f7d18b; -[SCProfileSectionScope .cxx_destruct] */

void FUN_108f7d138(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f7d18c; end: 108f7d213; -[SCProfileSectionOrderedConfig initWithOrder:configuration:] */

undefined1 *
FUN_108f7d18c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ff7b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108f7d214; end: 108f7d237; -[SCProfileSectionOrderedConfig copyWithZone:] */

undefined8 FUN_108f7d214(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f7d238; end: 108f7d29f; -[SCProfileSectionOrderedConfig hash] */

long * FUN_108f7d238(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lStack_28 = -lVar1;
  if (-1 < lVar1) {
    lStack_28 = lVar1;
  }
  func_0x00010bfde980();
  plVar3 = &lStack_28;
  uStack_20 = uVar2;
  func_0x000107c3191c(plVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 != param_3) {
    plVar5 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_108f7d324;
    plVar5 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar5);
    if ((((ulong)plVar4 & 1) == 0) || (plVar3[1] != param_3[1])) {
      plVar5 = (long *)0x0;
      goto LAB_108f7d324;
    }
    plVar5 = (long *)plVar3[2];
    if (plVar5 != (long *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_108f7d324;
    }
  }
  plVar5 = (long *)0x1;
LAB_108f7d324:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 108f7d2a0; end: 108f7d33f; -[SCProfileSectionOrderedConfig isEqual:] */

long FUN_108f7d2a0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f7d324;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_108f7d324;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_108f7d324;
    }
  }
  lVar3 = 1;
LAB_108f7d324:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f7d340; end: 108f7d347; -[SCProfileSectionOrderedConfig order] */

undefined8 FUN_108f7d340(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f7d348; end: 108f7d34f; -[SCProfileSectionOrderedConfig configuration] */

undefined8 FUN_108f7d348(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f7d350; end: 108f7d35b; -[SCProfileSectionOrderedConfig .cxx_destruct] */

void FUN_108f7d350(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f7d35c; end: 108f7d3e3; -[SCProfileSectionActionDataModel initWithActionNameForLogging:actionDataModel:] */

undefined1 *
FUN_108f7d35c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ff7b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108f7d3e4; end: 108f7d407; -[SCProfileSectionActionDataModel copyWithZone:] */

undefined8 FUN_108f7d3e4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f7d408; end: 108f7d46f; -[SCProfileSectionActionDataModel hash] */

long * FUN_108f7d408(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lStack_28 = -lVar1;
  if (-1 < lVar1) {
    lStack_28 = lVar1;
  }
  func_0x00010bfde980();
  plVar3 = &lStack_28;
  uStack_20 = uVar2;
  func_0x000107c3191c(plVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 != param_3) {
    plVar5 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_108f7d4f4;
    plVar5 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar5);
    if ((((ulong)plVar4 & 1) == 0) || (plVar3[1] != param_3[1])) {
      plVar5 = (long *)0x0;
      goto LAB_108f7d4f4;
    }
    plVar5 = (long *)plVar3[2];
    if (plVar5 != (long *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_108f7d4f4;
    }
  }
  plVar5 = (long *)0x1;
LAB_108f7d4f4:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 108f7d470; end: 108f7d50f; -[SCProfileSectionActionDataModel isEqual:] */

long FUN_108f7d470(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f7d4f4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_108f7d4f4;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_108f7d4f4;
    }
  }
  lVar3 = 1;
LAB_108f7d4f4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f7d510; end: 108f7d517; -[SCProfileSectionActionDataModel actionNameForLogging] */

undefined8 FUN_108f7d510(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f7d518; end: 108f7d51f; -[SCProfileSectionActionDataModel actionDataModel] */

undefined8 FUN_108f7d518(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f7d520; end: 108f7d52b; -[SCProfileSectionActionDataModel .cxx_destruct] */

void FUN_108f7d520(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f7d52c; end: 108f7d693; -[SCFriendProfileScope initFromOptions:] */

undefined8 * FUN_108f7d52c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ff7c0;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[7] = *param_3;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_3 + 1);
    puVar1[4] = param_3[2];
    puVar1[2] = param_3[3];
    puVar1[9] = param_3[4];
    *(undefined1 *)((long)puVar1 + 9) = *(undefined1 *)(param_3 + 5);
    uVar3 = param_3[7];
    puVar1[0xc] = param_3[6];
    _objc_retain(uVar3);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = uVar3;
    _objc_release(uVar2);
    uVar2 = param_3[8];
    _objc_retain(uVar2);
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126dcbd0;
    _objc_alloc();
    uVar3 = param_3[7];
    _objc_retain(uVar3);
    uVar2 = param_3[8];
    _objc_retain(uVar2);
    if (puVar4 == (undefined *)0x0) {
      _objc_release(uVar3);
      _objc_release(uVar2);
      puVar4 = (undefined *)0x0;
    }
    else {
      func_0x00010c0321a0();
    }
    uVar3 = puVar1[0xb];
    puVar1[0xb] = puVar4;
    _objc_release(uVar3);
  }
  _objc_release(param_3[7]);
  _objc_release(param_3[8]);
  return puVar1;
}



/* Entry: 108f7d694; end: 108f7d6bb;  */

void FUN_108f7d694(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 108f7d6bc; end: 108f7d8df; -[SCFriendProfileScope initWithFriendProfileScopeOptions:uiContainer:userId:delegate:] */

long FUN_108f7d6bc(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_4 != 0) {
    func_0x00010c08fa60(param_5);
  }
  _objc_retain(&PTR____CFConstantStringClassReference_110eb8918);
  func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110eb8918);
  _objc_release(&PTR____CFConstantStringClassReference_110eb8918);
  uVar1 = *(undefined8 *)(param_3 + 0x38);
  _objc_retain(uVar1);
  uVar4 = *(undefined8 *)(param_3 + 0x40);
  _objc_retain(uVar4);
  if (param_1 == 0) {
    _objc_release(uVar1);
  }
  else {
    func_0x00010bfeebe0();
    if (param_1 == 0) goto LAB_108f7d884;
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = param_4;
    _objc_release(uVar1);
    lVar2 = param_4;
    func_0x00010bc8f3c8();
    *(char *)(param_1 + 0xb) = (char)lVar2;
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = param_5;
    _objc_release(uVar1);
    _objc_storeWeak(param_1 + 0x18,param_6);
    puVar3 = PTR_PTR_1126dcbd8;
    func_0x00010c292680();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar3;
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126dcbd0;
    _objc_alloc();
    uVar1 = *(undefined8 *)(param_3 + 0x38);
    _objc_retain(uVar1);
    uVar4 = *(undefined8 *)(param_3 + 0x40);
    _objc_retain(uVar4);
    if (puVar3 == (undefined *)0x0) {
      _objc_release(uVar1);
      _objc_release(uVar4);
      puVar3 = (undefined *)0x0;
    }
    else {
      func_0x00010c0321a0();
    }
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    *(undefined **)(param_1 + 0x58) = puVar3;
  }
  _objc_release(uVar4);
LAB_108f7d884:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(*(undefined8 *)(param_3 + 0x38));
  _objc_release(*(undefined8 *)(param_3 + 0x40));
  return param_1;
}



/* Entry: 108f7d8e0; end: 108f7daab; -[SCFriendProfileScope initWithFriendProfileScopeOptions:uiContainer:snapchatter:delegate:] */

long FUN_108f7d8e0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (((param_5 != 0) && (param_4 != 0)) && (param_6 != 0)) {
    lVar1 = param_5;
    func_0x00010c2923e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    _objc_release(lVar1);
  }
  _objc_retain(&PTR____CFConstantStringClassReference_110eb8918);
  func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110eb8918);
  _objc_release(&PTR____CFConstantStringClassReference_110eb8918);
  uVar2 = *(undefined8 *)(param_3 + 0x38);
  _objc_retain(uVar2);
  uVar4 = *(undefined8 *)(param_3 + 0x40);
  _objc_retain(uVar4);
  if (param_1 == 0) {
    _objc_release(uVar2);
  }
  else {
    func_0x00010bfeebe0();
    if (param_1 == 0) goto LAB_108f7da50;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = param_4;
    _objc_release(uVar2);
    lVar1 = param_4;
    func_0x00010bc8f3c8();
    *(char *)(param_1 + 0xb) = (char)lVar1;
    lVar1 = param_5;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    *(long *)(param_1 + 0x40) = lVar1;
    _objc_release(uVar2);
    _objc_storeWeak(param_1 + 0x18,param_6);
    puVar3 = PTR_PTR_1126dcbd8;
    func_0x00010c244820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar3;
  }
  _objc_release(uVar4);
LAB_108f7da50:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(*(undefined8 *)(param_3 + 0x38));
  _objc_release(*(undefined8 *)(param_3 + 0x40));
  return param_1;
}



/* Entry: 108f7daac; end: 108f7dcfb; -[SCFriendProfileScope initWithPageEntryTypeOptions:uiContainer:snapchatter:delegate:] */

long FUN_108f7daac(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (((param_5 != 0) && (param_4 != 0)) && (param_6 != 0)) {
    lVar4 = param_5;
    func_0x00010c2923e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    _objc_release(lVar4);
  }
  _objc_retain(&PTR____CFConstantStringClassReference_110eb8918);
  func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110eb8918);
  _objc_release(&PTR____CFConstantStringClassReference_110eb8918);
  uVar1 = *(undefined8 *)(param_3 + 0x38);
  _objc_retain(uVar1);
  uVar5 = *(undefined8 *)(param_3 + 0x40);
  _objc_retain(uVar5);
  if (param_1 == 0) {
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  else {
    func_0x00010bfeebe0();
    if (param_1 != 0) {
      _objc_retain(param_4);
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      *(long *)(param_1 + 0x30) = param_4;
      _objc_release(uVar1);
      lVar4 = param_4;
      func_0x00010bc8f3c8();
      *(char *)(param_1 + 0xb) = (char)lVar4;
      lVar4 = param_5;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + 0x40);
      *(long *)(param_1 + 0x40) = lVar4;
      _objc_release(uVar1);
      _objc_storeWeak(param_1 + 0x18,param_6);
      lVar4 = param_5;
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar4;
      func_0x00010c08fa60();
      _objc_release(lVar4);
      puVar3 = PTR_PTR_1126dcbd8;
      if (lVar2 == 0) {
        lVar4 = param_5;
        func_0x00010c2923e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c292680();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = *(undefined8 *)(param_1 + 0x28);
        *(undefined **)(param_1 + 0x28) = puVar3;
        _objc_release(uVar1);
      }
      else {
        func_0x00010c244820();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = *(long *)(param_1 + 0x28);
        *(undefined **)(param_1 + 0x28) = puVar3;
      }
      _objc_release(lVar4);
      uVar5 = *(undefined8 *)(param_3 + 0x50);
      _objc_retain(uVar5);
      uVar1 = *(undefined8 *)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x50) = uVar5;
      _objc_release(uVar1);
      *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_3 + 0x58);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x000105214218(param_3);
  return param_1;
}



/* Entry: 108f7dcfc; end: 108f7df17; -[SCFriendProfileScope initWithNavigationStyleVerticalOptions:uiContainer:snapchatter:delegate:] */

undefined1 *
FUN_108f7dcfc(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4,long param_5,
             long param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (((param_5 != 0) && (param_4 != 0)) && (param_6 != 0)) {
    lVar5 = param_5;
    func_0x00010c2923e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    _objc_release(lVar5);
  }
  _objc_retain(&PTR____CFConstantStringClassReference_110eb8918);
  func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110eb8918);
  _objc_release(&PTR____CFConstantStringClassReference_110eb8918);
  puStack_58 = PTR_PTR_1126ff7c0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(long *)((long)puVar1 + 0x30) = param_4;
    _objc_release(uVar2);
    lVar5 = param_4;
    func_0x00010bc8f3c8();
    *(char *)((long)puVar1 + 0xb) = (char)lVar5;
    lVar5 = param_5;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(long *)((long)puVar1 + 0x40) = lVar5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_6);
    lVar5 = param_5;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010c08fa60();
    _objc_release(lVar5);
    puVar4 = PTR_PTR_1126dcbd8;
    if (lVar3 == 0) {
      lVar5 = param_5;
      func_0x00010c2923e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c292680();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
      *(undefined **)((long)puVar1 + 0x28) = puVar4;
      _objc_release(uVar2);
    }
    else {
      func_0x00010c244820();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)((long)puVar1 + 0x28);
      *(undefined **)((long)puVar1 + 0x28) = puVar4;
    }
    _objc_release(lVar5);
    *(undefined8 *)((long)puVar1 + 0x38) = *param_3;
    *(undefined1 *)((long)puVar1 + 8) = *(undefined1 *)(param_3 + 1);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3[2];
    *(undefined8 *)((long)puVar1 + 0x10) = param_3[3];
    *(undefined1 *)((long)puVar1 + 0xc) = *(undefined1 *)(param_3 + 10);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3[7]);
  _objc_release(param_3[8]);
  return (undefined1 *)puVar1;
}



/* Entry: 108f7df18; end: 108f7df3f;  */

void FUN_108f7df18(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 108f7df40; end: 108f7e167; -[SCFriendProfileScope initWithOptionsClass:uiContainer:userId:delegate:] */

long FUN_108f7df40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar10 = param_3;
  func_0x00010c247980();
  uVar1 = param_3;
  func_0x00010bfe2700();
  uVar2 = param_3;
  func_0x00010c0daca0();
  uVar3 = param_3;
  func_0x00010c0dac60();
  uVar4 = param_3;
  func_0x00010c0f1180();
  uVar5 = param_3;
  func_0x00010c263da0();
  uVar6 = param_3;
  func_0x00010c116c40();
  uVar7 = param_3;
  func_0x00010bfb25e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010beef3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c064680();
  uStack_a8 = (undefined1)uVar1;
  uStack_88 = (undefined1)uVar5;
  uStack_b0 = uVar10;
  uStack_a0 = uVar2;
  uStack_98 = uVar3;
  uStack_90 = uVar4;
  uStack_80 = uVar6;
  _objc_retain(uVar7);
  uStack_78 = uVar7;
  _objc_retain(uVar8);
  uStack_68 = (undefined4)uVar9;
  uStack_70 = uVar8;
  if (param_1 == 0) {
    _objc_release(uVar7);
    _objc_release(uVar8);
    param_1 = 0;
  }
  else {
    func_0x00010c015a00(param_1,param_2,&uStack_b0,param_4,param_5,param_6);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 108f7e168; end: 108f7e44f; -[SCFriendProfileScope initWithConfiguration:options:uiContainer:userId:snapchatter:delegate:unifiedPublicProfileScopeDelegate:] */

undefined8 *
FUN_108f7e168(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
             long param_6,long param_7,long param_8,undefined8 param_9)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  if ((param_3 != 0) && (param_5 != 0)) {
    lVar1 = param_6;
    func_0x00010c08fa60();
    if ((param_8 != 0) && (lVar1 != 0)) {
      lVar1 = param_7;
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c08fa60();
      if ((param_7 != 0) && (lVar2 != 0)) {
        lVar2 = param_7;
        func_0x00010c2923e0(param_7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08fa60();
        _objc_release(lVar2);
      }
      _objc_release(lVar1);
    }
  }
  _objc_retain(&PTR____CFConstantStringClassReference_110eb8918);
  func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110eb8918);
  _objc_release(&PTR____CFConstantStringClassReference_110eb8918);
  puStack_68 = PTR_PTR_1126ff7c0;
  puVar3 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar4 = puVar3[6];
    puVar3[6] = param_5;
    _objc_release(uVar4);
    lVar1 = param_5;
    func_0x00010bc8f3c8();
    *(char *)((long)puVar3 + 0xb) = (char)lVar1;
    _objc_retain(param_6);
    uVar4 = puVar3[8];
    puVar3[8] = param_6;
    _objc_release(uVar4);
    lVar1 = param_7;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    puVar5 = PTR_PTR_1126dcbd8;
    if (lVar2 == 0) {
      func_0x00010c292680();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c244820();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar4 = puVar3[5];
    puVar3[5] = puVar5;
    _objc_release(uVar4);
    _objc_retain(param_3);
    uVar4 = puVar3[0xf];
    puVar3[0xf] = param_3;
    _objc_release(uVar4);
    _objc_storeWeak(puVar3 + 3,param_8);
    puVar5 = PTR_PTR_1126dcbd0;
    _objc_alloc();
    uVar4 = *(undefined8 *)(param_4 + 0x38);
    _objc_retain(uVar4);
    uVar6 = *(undefined8 *)(param_4 + 0x40);
    _objc_retain(uVar6);
    if (puVar5 == (undefined *)0x0) {
      _objc_release(uVar4);
      _objc_release(uVar6);
      puVar5 = (undefined *)0x0;
    }
    else {
      func_0x00010c0321a0();
    }
    uVar4 = puVar3[0xb];
    puVar3[0xb] = puVar5;
    _objc_release(uVar4);
    _objc_storeWeak(puVar3 + 0x10,param_9);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(*(undefined8 *)(param_4 + 0x38));
  _objc_release(*(undefined8 *)(param_4 + 0x40));
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 108f7e450; end: 108f7e457; -[SCFriendProfileScope hideRecursiveOptions] */

undefined1 FUN_108f7e450(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108f7e458; end: 108f7e45f; -[SCFriendProfileScope nonFriendAddPlacementType] */

undefined8 FUN_108f7e458(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f7e460; end: 108f7e477; -[SCFriendProfileScope delegate] */

void FUN_108f7e460(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f7e478; end: 108f7e47f; -[SCFriendProfileScope nonFriendAddSourceType] */

undefined8 FUN_108f7e478(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f7e480; end: 108f7e487; -[SCFriendProfileScope subject] */

undefined8 FUN_108f7e480(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108f7e488; end: 108f7e48f; -[SCFriendProfileScope uiContainer] */

undefined8 FUN_108f7e488(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108f7e490; end: 108f7e497; -[SCFriendProfileScope sourcePage] */

undefined8 FUN_108f7e490(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108f7e498; end: 108f7e49f; -[SCFriendProfileScope userId] */

undefined8 FUN_108f7e498(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108f7e4a0; end: 108f7e4a7; -[SCFriendProfileScope suppressSnapProProfileOpen] */

undefined1 FUN_108f7e4a0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108f7e4a8; end: 108f7e4af; -[SCFriendProfileScope expandBitmojiHeader] */

undefined1 FUN_108f7e4a8(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108f7e4b0; end: 108f7e4b7; -[SCFriendProfileScope pageEntryType] */

undefined8 FUN_108f7e4b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108f7e4b8; end: 108f7e4bf; -[SCFriendProfileScope sourceSessionId] */

undefined8 FUN_108f7e4b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108f7e4c0; end: 108f7e4c7; -[SCFriendProfileScope friendProfileScopeOptions] */

undefined8 FUN_108f7e4c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108f7e4c8; end: 108f7e4cf; -[SCFriendProfileScope isOverlayPresentation] */

undefined1 FUN_108f7e4c8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 108f7e4d0; end: 108f7e4d7; -[SCFriendProfileScope isNavigationStyleVerticalForSnapProProfile] */

undefined1 FUN_108f7e4d0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 108f7e4d8; end: 108f7e4df; -[SCFriendProfileScope launchBehavior] */

undefined8 FUN_108f7e4d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 108f7e4e0; end: 108f7e4e7; -[SCFriendProfileScope flashbackId] */

undefined8 FUN_108f7e4e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 108f7e4e8; end: 108f7e4ef; -[SCFriendProfileScope actionmojiId] */

undefined8 FUN_108f7e4e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 108f7e4f0; end: 108f7e4f7; -[SCFriendProfileScope configuration] */

undefined8 FUN_108f7e4f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 108f7e4f8; end: 108f7e50f; -[SCFriendProfileScope unifiedPublicProfileScopeDelegate] */

void FUN_108f7e4f8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f7e510; end: 108f7e597; -[SCFriendProfileScope .cxx_destruct] */

void FUN_108f7e510(long param_1)

{
  _objc_destroyWeak(param_1 + 0x80);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x18);
  return;
}



/* Entry: 108f7e598; end: 108f7e67b; -[SCFriendProfileScopeOptionsClass initWithOptions:] */

undefined1 * FUN_108f7e598(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ff7c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = *param_3;
    *(undefined1 *)((long)puVar1 + 8) = *(undefined1 *)(param_3 + 1);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3[2];
    *(undefined8 *)((long)puVar1 + 0x20) = param_3[3];
    *(undefined8 *)((long)puVar1 + 0x28) = param_3[4];
    *(undefined1 *)((long)puVar1 + 9) = *(undefined1 *)(param_3 + 5);
    uVar3 = param_3[7];
    *(undefined8 *)((long)puVar1 + 0x30) = param_3[6];
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar3;
    _objc_release(uVar2);
    uVar2 = param_3[8];
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0xc) = *(undefined4 *)(param_3 + 9);
  }
  _objc_release(param_3[7]);
  _objc_release(param_3[8]);
  return (undefined1 *)puVar1;
}



/* Entry: 108f7e67c; end: 108f7e76b; -[SCFriendProfileScopeOptionsClass initWithSourcePage:hideRecursiveOptions:nonFriendAddSourceType:nonFriendAddPlacementType:pageEntryType:suppressSnapProProfileOpen:profileLaunchBehavior:flashbackId:actionmojiId:initialViewState:] */

undefined1 *
FUN_108f7e67c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126ff7c8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_11;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0xc) = param_12;
  }
  _objc_release(param_11);
  _objc_release(param_10);
  return (undefined1 *)puVar1;
}



/* Entry: 108f7e76c; end: 108f7e773; -[SCFriendProfileScopeOptionsClass sourcePage] */

undefined8 FUN_108f7e76c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f7e774; end: 108f7e77b; -[SCFriendProfileScopeOptionsClass hideRecursiveOptions] */

undefined1 FUN_108f7e774(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108f7e77c; end: 108f7e783; -[SCFriendProfileScopeOptionsClass nonFriendAddSourceType] */

undefined8 FUN_108f7e77c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f7e784; end: 108f7e78b; -[SCFriendProfileScopeOptionsClass nonFriendAddPlacementType] */

undefined8 FUN_108f7e784(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f7e78c; end: 108f7e793; -[SCFriendProfileScopeOptionsClass pageEntryType] */

undefined8 FUN_108f7e78c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108f7e794; end: 108f7e79b; -[SCFriendProfileScopeOptionsClass suppressSnapProProfileOpen] */

undefined1 FUN_108f7e794(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108f7e79c; end: 108f7e7a3; -[SCFriendProfileScopeOptionsClass profileLaunchBehavior] */

undefined8 FUN_108f7e79c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108f7e7a4; end: 108f7e7ab; -[SCFriendProfileScopeOptionsClass flashbackId] */

undefined8 FUN_108f7e7a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108f7e7ac; end: 108f7e7b3; -[SCFriendProfileScopeOptionsClass actionmojiId] */

undefined8 FUN_108f7e7ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108f7e7b4; end: 108f7e7bb; -[SCFriendProfileScopeOptionsClass initialViewState] */

undefined4 FUN_108f7e7b4(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 108f7e7bc; end: 108f7e7eb; -[SCFriendProfileScopeOptionsClass .cxx_destruct] */

void FUN_108f7e7bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x38,0);
  return;
}



/* Entry: 108f7e7ec; end: 108f7e84f; +[SCFriendProfileSubject snapchatterWithSnapchatter:] */

void FUN_108f7e7ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126dcbd8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f7e850; end: 108f7e8bb; +[SCFriendProfileSubject userIdWithUserId:] */

void FUN_108f7e850(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126dcbd8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f7e8bc; end: 108f7e8df; -[SCFriendProfileSubject copyWithZone:] */

undefined8 FUN_108f7e8bc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f7e8e0; end: 108f7e957; -[SCFriendProfileSubject hash] */

void FUN_108f7e8e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126ff7d0;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f7e958; end: 108f7e99b; -[SCFriendProfileSubject internalInit] */

void FUN_108f7e958(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ff7d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f7e99c; end: 108f7ea53; -[SCFriendProfileSubject isEqual:] */

long FUN_108f7e99c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f7ea2c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f7ea38;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_108f7ea38;
        }
        goto LAB_108f7ea2c;
      }
    }
    lVar3 = 0;
  }
LAB_108f7ea38:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f7ea54; end: 108f7ead7; -[SCFriendProfileSubject matchSnapchatter:userId:] */

void FUN_108f7ea54(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_108f7eabc;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_108f7eabc;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_108f7eabc:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f7ead8; end: 108f7eb07; -[SCFriendProfileSubject .cxx_destruct] */

void FUN_108f7ead8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f7eb08; end: 108f7eb6b; -[SCFriendUnifiedProfileConfiguration initWithHideRecursiveOptions:nonFriendAddSourceType:nonFriendAddPlacementType:suppressSnapProProfileOpen:] */

void FUN_108f7eb08(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ff7d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
  }
  return;
}



/* Entry: 108f7eb6c; end: 108f7eb8f; -[SCFriendUnifiedProfileConfiguration copyWithZone:] */

undefined8 FUN_108f7eb6c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f7eb90; end: 108f7ebfb; -[SCFriendUnifiedProfileConfiguration hash] */

ulong * FUN_108f7eb90(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_28 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_20 = (ulong)*(byte *)(param_1 + 9);
  puVar1 = &uStack_38;
  func_0x000107c3191c(puVar1,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar3 = (ulong *)0x1;
  }
  else {
    puVar3 = (ulong *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar3 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) ||
         ((((char)puVar1[1] != (char)param_3[1] || (puVar1[2] != param_3[2])) ||
          (puVar1[3] != param_3[3])))) {
        puVar3 = (ulong *)0x0;
      }
      else {
        puVar3 = (ulong *)(ulong)(*(char *)((long)puVar1 + 9) == *(char *)((long)param_3 + 9));
      }
    }
  }
  _objc_release(param_3);
  return puVar3;
}


