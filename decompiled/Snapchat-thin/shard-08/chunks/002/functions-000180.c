/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105f28bfc; end: 105f28c03; -[SCMapViewLogger setInMap:] */

void FUN_105f28bfc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 105f28c04; end: 105f28c0b; -[SCMapViewLogger seenFriendUserIds] */

undefined8 FUN_105f28c04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 105f28c0c; end: 105f28c13; -[SCMapViewLogger seenBestFriendUserIds] */

undefined8 FUN_105f28c0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 105f28c14; end: 105f28c1b; -[SCMapViewLogger maxFriendsInViewport] */

undefined8 FUN_105f28c14(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 105f28c1c; end: 105f28c23; -[SCMapViewLogger seenPoiIds] */

undefined8 FUN_105f28c1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 105f28c24; end: 105f28c2b; -[SCMapViewLogger seenStatusIds] */

undefined8 FUN_105f28c24(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 105f28c2c; end: 105f28c33; -[SCMapViewLogger maxStatusesInViewport] */

undefined8 FUN_105f28c2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 105f28c34; end: 105f28c3b; -[SCMapViewLogger highlightedUniqueFriendUserIds] */

undefined8 FUN_105f28c34(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 105f28c3c; end: 105f28c43; -[SCMapViewLogger highlightedBestFriendUserIds] */

undefined8 FUN_105f28c3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 105f28c44; end: 105f28c4b; -[SCMapViewLogger highlightedUniqueClusterIds] */

undefined8 FUN_105f28c44(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 105f28c4c; end: 105f28c53; -[SCMapViewLogger friendStoryUniqueUserIdCount] */

undefined8 FUN_105f28c4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 105f28c54; end: 105f28c5b; -[SCMapViewLogger friendStoryUniqueThumbnailCount] */

undefined8 FUN_105f28c54(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 105f28c5c; end: 105f28c63; -[SCMapViewLogger friendStoryTapCount] */

undefined8 FUN_105f28c5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 105f28c64; end: 105f28c6b; -[SCMapViewLogger clustersInHighlightZoneCount] */

undefined8 FUN_105f28c64(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 105f28c6c; end: 105f28c73; -[SCMapViewLogger clustersHighlightedCount] */

undefined8 FUN_105f28c6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 105f28c74; end: 105f28d9b; -[SCMapViewLogger .cxx_destruct] */

void FUN_105f28c74(long param_1)

{
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_destroyWeak(param_1 + 0x90);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f28d9c; end: 105f28e0f; -[SCGrapheneMapInitialViewportMetric2 init] */

undefined1 * FUN_105f28d9c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ee0e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105f28e10; end: 105f290cf;  */

/* WARNING: Removing unreachable block (ram,0x000105f29098) */
/* WARNING: Removing unreachable block (ram,0x000105f294cc) */

undefined *
FUN_105f28e10(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 *unaff_x24;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined8 auStack_1b0 [2];
  char cStack_199;
  long lStack_198;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar9 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  puVar4 = param_4;
  puVar11 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f34f3aa;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f34f3aa;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f34f3aa;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_1108f96d0;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar12 = 0;
    puVar5 = (undefined *)puVar9;
    puVar4 = param_5;
    do {
      if ((&cStack_59)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar12 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puStack_f8 = auStack_a0;
  do {
    unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (undefined8 *)puStack_f8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  puVar9 = &uStack_140;
  pcStack_c8 = FUN_105f290d0;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar1;
  puVar10 = puVar5;
  puStack_100 = (undefined1 *)unaff_x24;
  puStack_f0 = puVar2;
  puStack_e8 = param_4;
  puStack_e0 = param_3;
  puStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar3 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar4 = &UNK_10f34f3aa;
    }
    else {
      puVar4 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_120,puVar4);
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    func_0x00010007e1e8(&uStack_140,auStack_120,&lStack_108,1);
    puVar8 = &UNK_1108f9720;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_128 = (undefined1 *)&uStack_140;
    func_0x00010007e5dc(&puStack_128);
    puVar10 = (undefined *)puVar9;
    puVar4 = puVar5;
    if (cStack_109 < '\0') {
      __ZdlPv(auStack_120[0]);
      puVar10 = (undefined *)puVar9;
      puVar4 = puVar5;
    }
  }
  puVar5 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar9 = &uStack_200;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar10;
  puVar2 = puVar4;
  puVar3 = puVar11;
  _objc_retain(puVar8);
  _objc_retain(puVar10);
  _objc_retain(puVar4);
  if (puVar5 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar5 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar1 = &UNK_10f34f3aa;
    }
    else {
      puVar1 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_1e0,puVar1);
    _objc_retain(puVar10);
    if (puVar10 == (undefined *)0x0) {
      puVar1 = &UNK_10f34f3aa;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar1 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_1c8,puVar1);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f34f3aa;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar1 = puVar4;
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_1b0,puVar1);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_198,3);
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1108f9770);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    lVar12 = 0;
    puVar1 = (undefined *)puVar9;
    puVar2 = puVar11;
    do {
      if ((&cStack_199)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1b0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      unaff_x24 = &uStack_200;
    } while (lVar12 != -0x48);
  }
  _objc_release(puVar4);
  _objc_release(puVar10);
  puVar5 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
    ___stack_chk_fail();
    _objc_release(puVar4);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_1e0);
    _objc_release(puVar4);
    _objc_release(puVar10);
    _objc_release(puVar8);
    __Unwind_Resume();
    ppuVar6 = &puStack_270;
    _objc_retain(puVar1);
    _objc_retain(puVar2);
    _objc_retain(puVar3);
    _objc_retain(param_6);
    _objc_retain(param_7);
    puStack_268 = PTR_PTR_1126ee0e8;
    puStack_270 = puVar5;
    _objc_msgSendSuper2(&puStack_270,PTR_s_init_1125d9248);
    if (ppuVar6 != (undefined **)0x0) {
      _objc_retain(puVar1);
      uVar7 = *(undefined8 *)((long)ppuVar6 + 8);
      *(undefined **)((long)ppuVar6 + 8) = puVar1;
      _objc_release(uVar7);
      _objc_retain(puVar2);
      uVar7 = *(undefined8 *)((long)ppuVar6 + 0x10);
      *(undefined **)((long)ppuVar6 + 0x10) = puVar2;
      _objc_release(uVar7);
      _objc_retain(puVar3);
      uVar7 = *(undefined8 *)((long)ppuVar6 + 0x18);
      *(undefined **)((long)ppuVar6 + 0x18) = puVar3;
      _objc_release(uVar7);
      _objc_retain(param_7);
      uVar7 = *(undefined8 *)((long)ppuVar6 + 0x58);
      *(undefined8 *)((long)ppuVar6 + 0x58) = param_7;
      _objc_release(uVar7);
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init();
      uVar7 = *(undefined8 *)((long)ppuVar6 + 0x38);
      *(undefined **)((long)ppuVar6 + 0x38) = puVar5;
      _objc_release(uVar7);
      puVar5 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
      func_0x00010c2a2c00();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)((long)ppuVar6 + 0x40);
      *(undefined **)((long)ppuVar6 + 0x40) = puVar5;
      _objc_release(uVar7);
      puVar5 = PTR_PTR_1126ae820;
      _objc_alloc();
      puVar4 = PTR_PTR_1126ae750;
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c060400();
      uVar7 = *(undefined8 *)((long)ppuVar6 + 0x48);
      *(undefined **)((long)ppuVar6 + 0x48) = puVar5;
      _objc_release(uVar7);
      _objc_release(puVar4);
      puVar5 = PTR_PTR_1126ae820;
      _objc_alloc();
      func_0x00010c060400();
      uVar7 = *(undefined8 *)((long)ppuVar6 + 0x50);
      *(undefined **)((long)ppuVar6 + 0x50) = puVar5;
      _objc_release(uVar7);
      puVar5 = PTR_PTR_1126ae810;
      _objc_alloc_init();
      uVar7 = *(undefined8 *)((long)ppuVar6 + 0x30);
      *(undefined **)((long)ppuVar6 + 0x30) = puVar5;
      _objc_release(uVar7);
      func_0x00010beab820(ppuVar6);
      func_0x00010beadfe0(ppuVar6);
    }
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    return (undefined *)ppuVar6;
  }
  return puVar5;
}



/* Entry: 105f290d0; end: 105f29243;  */

/* WARNING: Removing unreachable block (ram,0x000105f294cc) */

undefined *
FUN_105f290d0(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 *unaff_x24;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f34f3aa;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1108f9720;
    (**(code **)(*plVar10 + 0x18))(plVar10);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined *)puVar6;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined *)puVar6;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_2);
    _objc_release(param_2);
    __Unwind_Resume();
    puVar6 = &uStack_140;
    lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar7 = puVar5;
    puVar8 = param_4;
    puVar9 = param_5;
    _objc_retain(puVar1);
    _objc_retain(puVar5);
    _objc_retain(param_4);
    if (puVar2 != (undefined *)0x0) {
      plVar10 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f34f3aa;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_120,puVar2);
      _objc_retain(puVar5);
      if (puVar5 == (undefined *)0x0) {
        puVar2 = &UNK_10f34f3aa;
      }
      else {
        _objc_retainAutorelease(puVar5);
        puVar2 = puVar5;
        func_0x00010bdc3520(puVar5);
      }
      _objc_release(puVar5);
      func_0x00010002b838(auStack_108,puVar2);
      _objc_retain(param_4);
      if (param_4 == (undefined *)0x0) {
        puVar2 = &UNK_10f34f3aa;
      }
      else {
        _objc_retainAutorelease(param_4);
        puVar2 = param_4;
        func_0x00010bdc3520();
      }
      _objc_release(param_4);
      func_0x00010002b838(auStack_f0,puVar2);
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      func_0x00010007e1e8(&uStack_140,auStack_120,&lStack_d8,3);
      (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108f9770);
      puStack_128 = (undefined1 *)&uStack_140;
      func_0x00010007e5dc(&puStack_128);
      lVar11 = 0;
      puVar7 = (undefined *)puVar6;
      puVar8 = param_5;
      do {
        if ((&cStack_d9)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar11));
        }
        lVar11 = lVar11 + -0x18;
        unaff_x24 = &uStack_140;
      } while (lVar11 != -0x48);
    }
    _objc_release(param_4);
    _objc_release(puVar5);
    puVar2 = puVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
      ___stack_chk_fail();
      _objc_release(param_4);
      do {
        unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
      } while (unaff_x24 != (undefined8 *)auStack_120);
      _objc_release(param_4);
      _objc_release(puVar5);
      _objc_release(puVar1);
      __Unwind_Resume();
      ppuVar3 = &puStack_1b0;
      _objc_retain(puVar7);
      _objc_retain(puVar8);
      _objc_retain(puVar9);
      _objc_retain(param_6);
      _objc_retain(param_7);
      puStack_1a8 = PTR_PTR_1126ee0e8;
      puStack_1b0 = puVar2;
      _objc_msgSendSuper2(&puStack_1b0,PTR_s_init_1125d9248);
      if (ppuVar3 != (undefined **)0x0) {
        _objc_retain(puVar7);
        uVar4 = *(undefined8 *)((long)ppuVar3 + 8);
        *(undefined **)((long)ppuVar3 + 8) = puVar7;
        _objc_release(uVar4);
        _objc_retain(puVar8);
        uVar4 = *(undefined8 *)((long)ppuVar3 + 0x10);
        *(undefined **)((long)ppuVar3 + 0x10) = puVar8;
        _objc_release(uVar4);
        _objc_retain(puVar9);
        uVar4 = *(undefined8 *)((long)ppuVar3 + 0x18);
        *(undefined **)((long)ppuVar3 + 0x18) = puVar9;
        _objc_release(uVar4);
        _objc_retain(param_7);
        uVar4 = *(undefined8 *)((long)ppuVar3 + 0x58);
        *(undefined8 *)((long)ppuVar3 + 0x58) = param_7;
        _objc_release(uVar4);
        puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc_init();
        uVar4 = *(undefined8 *)((long)ppuVar3 + 0x38);
        *(undefined **)((long)ppuVar3 + 0x38) = puVar1;
        _objc_release(uVar4);
        puVar1 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
        func_0x00010c2a2c00();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)((long)ppuVar3 + 0x40);
        *(undefined **)((long)ppuVar3 + 0x40) = puVar1;
        _objc_release(uVar4);
        puVar1 = PTR_PTR_1126ae820;
        _objc_alloc();
        puVar5 = PTR_PTR_1126ae750;
        func_0x00010c0db140(PTR_PTR_1126ae750);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c060400();
        uVar4 = *(undefined8 *)((long)ppuVar3 + 0x48);
        *(undefined **)((long)ppuVar3 + 0x48) = puVar1;
        _objc_release(uVar4);
        _objc_release(puVar5);
        puVar1 = PTR_PTR_1126ae820;
        _objc_alloc();
        func_0x00010c060400();
        uVar4 = *(undefined8 *)((long)ppuVar3 + 0x50);
        *(undefined **)((long)ppuVar3 + 0x50) = puVar1;
        _objc_release(uVar4);
        puVar1 = PTR_PTR_1126ae810;
        _objc_alloc_init();
        uVar4 = *(undefined8 *)((long)ppuVar3 + 0x30);
        *(undefined **)((long)ppuVar3 + 0x30) = puVar1;
        _objc_release(uVar4);
        func_0x00010beab820(ppuVar3);
        func_0x00010beadfe0(ppuVar3);
      }
      _objc_release(param_7);
      _objc_release(param_6);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      return (undefined *)ppuVar3;
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 105f29244; end: 105f29503;  */

/* WARNING: Removing unreachable block (ram,0x000105f294cc) */

undefined *
FUN_105f29244(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *unaff_x24;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar6 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar7 = param_4;
  puVar8 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f34f3aa;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f34f3aa;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f34f3aa;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108f9770);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar9 = 0;
    puVar1 = (undefined *)puVar6;
    puVar7 = param_5;
    do {
      if ((&cStack_59)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar9 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_a0);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume();
    ppuVar3 = &puStack_130;
    _objc_retain(puVar1);
    _objc_retain(puVar7);
    _objc_retain(puVar8);
    _objc_retain(param_6);
    _objc_retain(param_7);
    puStack_128 = PTR_PTR_1126ee0e8;
    puStack_130 = puVar2;
    _objc_msgSendSuper2(&puStack_130,PTR_s_init_1125d9248);
    if (ppuVar3 != (undefined **)0x0) {
      _objc_retain(puVar1);
      uVar4 = *(undefined8 *)((long)ppuVar3 + 8);
      *(undefined **)((long)ppuVar3 + 8) = puVar1;
      _objc_release(uVar4);
      _objc_retain(puVar7);
      uVar4 = *(undefined8 *)((long)ppuVar3 + 0x10);
      *(undefined **)((long)ppuVar3 + 0x10) = puVar7;
      _objc_release(uVar4);
      _objc_retain(puVar8);
      uVar4 = *(undefined8 *)((long)ppuVar3 + 0x18);
      *(undefined **)((long)ppuVar3 + 0x18) = puVar8;
      _objc_release(uVar4);
      _objc_retain(param_7);
      uVar4 = *(undefined8 *)((long)ppuVar3 + 0x58);
      *(undefined8 *)((long)ppuVar3 + 0x58) = param_7;
      _objc_release(uVar4);
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc_init();
      uVar4 = *(undefined8 *)((long)ppuVar3 + 0x38);
      *(undefined **)((long)ppuVar3 + 0x38) = puVar2;
      _objc_release(uVar4);
      puVar2 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
      func_0x00010c2a2c00();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)((long)ppuVar3 + 0x40);
      *(undefined **)((long)ppuVar3 + 0x40) = puVar2;
      _objc_release(uVar4);
      puVar2 = PTR_PTR_1126ae820;
      _objc_alloc();
      puVar5 = PTR_PTR_1126ae750;
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c060400();
      uVar4 = *(undefined8 *)((long)ppuVar3 + 0x48);
      *(undefined **)((long)ppuVar3 + 0x48) = puVar2;
      _objc_release(uVar4);
      _objc_release(puVar5);
      puVar2 = PTR_PTR_1126ae820;
      _objc_alloc();
      func_0x00010c060400();
      uVar4 = *(undefined8 *)((long)ppuVar3 + 0x50);
      *(undefined **)((long)ppuVar3 + 0x50) = puVar2;
      _objc_release(uVar4);
      puVar2 = PTR_PTR_1126ae810;
      _objc_alloc_init();
      uVar4 = *(undefined8 *)((long)ppuVar3 + 0x30);
      *(undefined **)((long)ppuVar3 + 0x30) = puVar2;
      _objc_release(uVar4);
      func_0x00010beab820(ppuVar3);
      func_0x00010beadfe0(ppuVar3);
    }
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar1);
    return (undefined *)ppuVar3;
  }
  return puVar2;
}



/* Entry: 105f29504; end: 105f29703; -[SCMapMultiTrayManager initWithMapView:mapBrowsingContextManager:sdkSession:gestureManager:mapChromeV2Provider:] */

undefined1 *
FUN_105f29504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126ee0e8;
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c2a2c00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc();
    puVar4 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060400();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc();
    func_0x00010c060400();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    func_0x00010beab820(puVar1);
    func_0x00010beadfe0(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f29704; end: 105f297bb; -[SCMapMultiTrayManager mapCameraInsetsForSinglePoint] */

double FUN_105f29704(undefined8 param_1,double param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_3 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c148fc0();
  func_0x00010c27b3e0(param_3);
  param_2 = param_2 * 0.25;
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  lVar1 = param_3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c148fc0();
  _objc_release(lVar1);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 105f297bc; end: 105f29873; -[SCMapMultiTrayManager mapCameraInsetsForHalfTrayPosition] */

double FUN_105f297bc(undefined8 param_1,double param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_3 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c148fc0();
  func_0x00010c27b3e0(param_3);
  param_2 = param_2 * 0.5;
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  lVar1 = param_3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c148fc0();
  _objc_release(lVar1);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 105f29874; end: 105f2992b; -[SCMapMultiTrayManager mapCameraInsetsForMeTrayPosition] */

double FUN_105f29874(undefined8 param_1,double param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_3 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c148fc0();
  func_0x00010c27b3e0(param_3);
  param_2 = param_2 / 2.75;
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  lVar1 = param_3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c148fc0();
  _objc_release(lVar1);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 105f2992c; end: 105f299f7; -[SCMapMultiTrayManager mapCameraInsetsForCoordinateBounds] */

double FUN_105f2992c(undefined8 param_1,double param_2,double param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_4 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c148fc0();
  func_0x00010c27b3e0(param_4);
  param_3 = param_3 + param_2 * 0.5;
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_4 = param_4 + 0x20;
  _objc_loadWeakRetained(param_4);
  lVar1 = param_4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c148fc0();
  _objc_release(lVar1);
  _objc_release(param_4);
  return param_3 + 50.0;
}



/* Entry: 105f299f8; end: 105f29aab; -[SCMapMultiTrayManager mapCameraInsetsForTrayWithHeightRatio:] */

undefined8 FUN_105f299f8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c148fc0();
  func_0x00010c27b3e0(param_2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  lVar1 = param_2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c148fc0();
  _objc_release(lVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105f29aac; end: 105f29b37; -[SCMapMultiTrayManager setParentViewController:defaultCameraProvider:] */

void FUN_105f29aac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_3);
  _objc_retain(param_4);
  puVar1 = auStack_38;
  _objc_loadWeakRetained(puVar1);
  _objc_storeWeak(param_1 + 0x20,puVar1);
  _objc_release(puVar1);
  uVar2 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105f29b38; end: 105f29b5f; -[SCMapMultiTrayManager createTrayWithViewController:configuration:isModal:initialPosition:collapsedHeight:halfTrayHeightRatioOverride:] */

void FUN_105f29b38(void)

{
  func_0x00010bf59b80();
  return;
}



/* Entry: 105f29b60; end: 105f29ba3; -[SCMapMultiTrayManager createTrayWithViewController:configuration:isModal:initialPosition:collapsedHeight:halfTrayHeightRatioOverride:desiredPositionOnMapInteraction:chromeConfiguration:mapCameraProvider:closeButtonCompletion:] */

void FUN_105f29b60(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf59b20(param_1,param_2,0);
  return;
}



/* Entry: 105f29ba4; end: 105f29beb; -[SCMapMultiTrayManager createTrayWithViewController:configuration:isModal:initialPosition:collapsedHeight:halfTrayHeight:desiredPositionOnMapInteraction:chromeConfiguration:mapCameraProvider:closeButtonCompletion:] */

void FUN_105f29ba4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf59b20(param_1,0,param_2);
  return;
}



/* Entry: 105f29bec; end: 105f29f73; -[SCMapMultiTrayManager createTrayWithViewController:accessoryViewController:configuration:isModal:initialPosition:collapsedHeight:halfTrayHeightRatioOverride:halfTrayHeight:desiredPositionOnMapInteraction:chromeConfiguration:mapCameraProvider:closeButtonCompletion:] */

void FUN_105f29bec(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  int param_9,undefined8 param_10,undefined8 param_11,long param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [16];
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  if (param_9 == 0) {
    puVar1 = PTR_PTR_1126c6010;
    _objc_alloc(PTR_PTR_1126c6010);
    lVar2 = param_4 + 0x20;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c034140(puVar1);
  }
  else {
    puVar1 = PTR_PTR_1126c6008;
    _objc_alloc(PTR_PTR_1126c6008);
    lVar2 = param_4 + 0x20;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c01aac0(puVar1);
  }
  _objc_release(lVar2);
  _objc_initWeak(auStack_90,param_4);
  puVar3 = puVar1;
  func_0x00010c0687c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_90);
  puVar4 = puVar3;
  func_0x00010c25ff60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ae568;
  _objc_alloc_init(PTR_PTR_1126ae568);
  puVar5 = PTR_PTR_1126c6018;
  _objc_alloc(PTR_PTR_1126c6018);
  func_0x00010c01e660(param_1,param_2,param_3);
  if (param_12 != 0) {
    func_0x00010bdcdd20(param_4);
  }
  func_0x00010befa120(*(undefined8 *)(param_4 + 0x38));
  func_0x00010c1d0560(*(undefined8 *)(param_4 + 0x40));
  puVar8 = PTR_PTR_1126ae750;
  uVar10 = *(undefined8 *)(param_4 + 0x48);
  puVar6 = puVar1;
  func_0x00010c27b740(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c27b2c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2468a0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar10);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  uVar9 = *(ulong *)(param_4 + 0x38);
  func_0x00010bf529e0();
  if ((1 < uVar9) && (uVar10 = param_8, func_0x00010bfe1e60(), (int)uVar10 != 0)) {
    func_0x00010be35aa0(param_4);
  }
  func_0x00010c219f00(puVar1);
  func_0x00010bdcdc60(param_4);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar1);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105f29f74; end: 105f29fbb;  */

void FUN_105f29f74(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be324a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f29fbc; end: 105f2a0f7; -[SCMapMultiTrayManager createTrayWithViewController:actionBarDataSource:configuration:isModal:initialPosition:collapsedHeight:halfTrayHeightRatioOverride:desiredPositionOnMapInteraction:chromeConfiguration:mapCameraProvider:closeButtonCompletion:] */

void FUN_105f29fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c6020;
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  func_0x00010c008d60();
  _objc_release(param_6);
  func_0x00010bf59b20(param_1,param_2,0,param_3,param_4,param_5,puVar1,param_7,param_8,param_9,
                      param_10,param_11,param_12,param_13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105f2a0f8; end: 105f2a11f; -[SCMapMultiTrayManager activeTrayFeatureObservable] */

void FUN_105f2a0f8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f2a120; end: 105f2a1fb; -[SCMapMultiTrayManager currentActiveTrayFeature] */

void FUN_105f2a120(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x38);
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf5fb20();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 2) {
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c089820(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c068460();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010c27b740();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar4);
      uVar6 = uVar5;
      func_0x00010c27b2c0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      goto LAB_105f2a1e8;
    }
  }
  uVar6 = 0;
LAB_105f2a1e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 105f2a1fc; end: 105f2a2ff; -[SCMapMultiTrayManager restoreTray:animated:] */

void FUN_105f2a1fc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010bfecde0(lVar1,param_2,param_3);
  if (lVar1 != 0x7fffffffffffffff) {
    lVar2 = *(long *)(param_1 + 0x38);
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != param_3) {
      lVar2 = *(long *)(param_1 + 0x38);
      func_0x00010bf529e0(lVar2);
      lVar3 = *(long *)(param_1 + 0x38);
      func_0x00010c25e980(lVar3,param_2,lVar1 + 1,lVar2 - (lVar1 + 1));
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar3;
      func_0x00010bf529e0();
      if (lVar1 != 0) {
        lVar1 = lVar3;
        func_0x00010bf529e0();
        if (lVar1 == 1) {
          lVar1 = lVar3;
          func_0x00010bfb1920(lVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12ed20(param_1,param_2,lVar1,0);
          _objc_release(lVar1);
        }
        else {
          func_0x00010c12ed60(param_1,param_2,lVar3,param_4);
        }
      }
      _objc_release(lVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f2a300; end: 105f2a307; -[SCMapMultiTrayManager removeTray:animated:] */

void FUN_105f2a300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12ed50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_removeTray_animated_interactionM_112629570,param_3,param_4,0);
  return;
}



/* Entry: 105f2a308; end: 105f2a477; -[SCMapMultiTrayManager removeTray:animated:interactionMethod:] */

void FUN_105f2a308(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 0x38);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105f2a478;
  puStack_50 = &UNK_1108f9860;
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x00010bfb2040(lVar3,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == lVar1) {
      uVar2 = *(ulong *)(param_1 + 0x38);
      func_0x00010bf529e0();
      if (uVar2 < 2) {
        func_0x00010be35f40(param_1,param_2,lVar3,param_4,1,param_5);
      }
      else {
        lVar4 = *(long *)(param_1 + 0x38);
        lVar1 = lVar4;
        func_0x00010bf529e0(lVar4);
        func_0x00010c0dfd40(lVar4,param_2,lVar1 + -2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be35f40(param_1,param_2,lVar3,param_4,1,param_5);
        if (lVar4 != 0) {
          func_0x00010be958e0(param_1,param_2,lVar4);
          _objc_release(lVar4);
          goto LAB_105f2a44c;
        }
      }
      func_0x00010be25900(param_1,param_2,lVar3);
    }
    else {
      func_0x00010be8d580(param_1,param_2,lVar3);
    }
  }
LAB_105f2a44c:
  _objc_release(lVar3);
  _objc_release(uStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f2a478; end: 105f2a487;  */

bool FUN_105f2a478(long param_1,long param_2)

{
  return param_2 == *(long *)(param_1 + 0x20);
}



/* Entry: 105f2a488; end: 105f2a4cf; -[SCMapMultiTrayManager removeAllTraysAnimated:] */

void FUN_105f2a488(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf51e00(uVar1);
  func_0x00010c12ed60(param_1,param_2,uVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f2a4d0; end: 105f2a6df; -[SCMapMultiTrayManager removeTraysWithLifecycles:animated:] */

void FUN_105f2a4d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  long lStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = *(undefined8 **)(param_1 + 0x38);
  func_0x00010c0d3c80();
  puVar3 = *(undefined8 **)(param_1 + 0x38);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar4 = puVar2;
  puStack_138 = puVar3;
  func_0x00010bf51e00();
  puVar3 = &uStack_130;
  puVar5 = puVar4;
  func_0x00010bf52a60();
  if (puVar5 != (undefined8 *)0x0) {
    lVar10 = *plStack_120;
    do {
      puVar9 = (undefined8 *)0x0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(puVar4);
        }
        puVar3 = *(undefined8 **)(lStack_128 + (long)puVar9 * 8);
        puVar6 = puVar1;
        func_0x00010bf4b900(puVar1,param_2,puVar3);
        if ((int)puVar6 != 0) {
          puVar7 = puVar2;
          func_0x00010c089820();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar3 == puVar7) {
            func_0x00010be35f20(param_1,param_2,puVar3,param_4,1);
          }
          else {
            func_0x00010be8d580();
          }
          func_0x00010c12d360(puVar1,param_2,puVar3);
          func_0x00010c12d360(puVar2);
          puVar6 = puVar1;
          func_0x00010bf529e0();
          if (puVar6 == (undefined *)0x0) goto LAB_105f2a634;
        }
        puVar9 = (undefined8 *)((long)puVar9 + 1);
      } while (puVar5 != puVar9);
      puVar3 = &uStack_130;
      puVar5 = puVar4;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined8 *)0x0);
  }
LAB_105f2a634:
  _objc_release(puVar4);
  puVar9 = puVar2;
  func_0x00010bf529e0();
  puVar5 = puStack_138;
  if (puVar9 == (undefined8 *)0x0) {
    if (puStack_138 != (undefined8 *)0x0) {
      puVar3 = puStack_138;
      func_0x00010be25900(param_1);
    }
  }
  else {
    param_4 = puVar2;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_4;
    func_0x00010be958e0(param_1);
    _objc_release(param_4);
    puVar5 = puStack_138;
  }
  _objc_release(puVar5);
  _objc_release(puVar2);
  puVar6 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_105f2a6e0;
  puStack_180 = puVar4;
  puStack_178 = param_4;
  puStack_170 = puVar5;
  lStack_168 = param_1;
  puStack_160 = puVar2;
  puStack_158 = puVar1;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  lVar10 = *(long *)(puVar6 + 0x38);
  puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a0 = 0xc2000000;
  pcStack_198 = FUN_105f2a7e0;
  puStack_190 = &UNK_1108f9860;
  _objc_retain(puVar3);
  puStack_188 = puVar3;
  func_0x00010bfb2040(lVar10,param_2,&puStack_1a8);
  _objc_retainAutoreleasedReturnValue();
  if (lVar10 != 0) {
    lVar8 = *(long *)(puVar6 + 0x38);
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar10 == lVar8) {
      lVar8 = lVar10;
      func_0x00010c068460(lVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c219f20();
      _objc_release(lVar8);
    }
  }
  _objc_release(lVar10);
  _objc_release(puStack_188);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105f2a6e0; end: 105f2a7df; -[SCMapMultiTrayManager setTrayPosition:position:animated:] */

void FUN_105f2a6e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x38);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105f2a7e0;
  puStack_50 = &UNK_1108f9860;
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x00010bfb2040(lVar2,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == lVar1) {
      lVar1 = lVar2;
      func_0x00010c068460(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c219f20();
      _objc_release(lVar1);
    }
  }
  _objc_release(lVar2);
  _objc_release(uStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f2a7e0; end: 105f2a7ef;  */

bool FUN_105f2a7e0(long param_1,long param_2)

{
  return param_2 == *(long *)(param_1 + 0x20);
}



/* Entry: 105f2a7f0; end: 105f2a8f3; -[SCMapMultiTrayManager setTrayPosition:position:animated:interactionMethod:] */

void FUN_105f2a7f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x38);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105f2a8f4;
  puStack_50 = &UNK_1108f9860;
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x00010bfb2040(lVar2,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == lVar1) {
      lVar1 = lVar2;
      func_0x00010c068460(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c219f20();
      _objc_release(lVar1);
    }
  }
  _objc_release(lVar2);
  _objc_release(uStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f2a8f4; end: 105f2a903;  */

bool FUN_105f2a8f4(long param_1,long param_2)

{
  return param_2 == *(long *)(param_1 + 0x20);
}



/* Entry: 105f2a904; end: 105f2a9ef; -[SCMapMultiTrayManager resizeTray:animated:] */

void FUN_105f2a904(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x38);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105f2a9f0;
  puStack_40 = &UNK_1108f9860;
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x00010bfb2040(lVar2,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == lVar1) {
      lVar1 = lVar2;
      func_0x00010c068460(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13a300();
      _objc_release(lVar1);
    }
  }
  _objc_release(lVar2);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f2a9f0; end: 105f2a9ff;  */

bool FUN_105f2a9f0(long param_1,long param_2)

{
  return param_2 == *(long *)(param_1 + 0x20);
}



/* Entry: 105f2aa00; end: 105f2aa7b; -[SCMapMultiTrayManager visibleTrayHeight] */

undefined8 FUN_105f2aa00(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_2 + 0x38);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c068460();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    param_1 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x00010bf5fb20(lVar2);
    func_0x00010c27b360(lVar2,param_3,lVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  return param_1;
}



/* Entry: 105f2aa7c; end: 105f2aac3; -[SCMapMultiTrayManager visibleTrayAccessoryHeight] */

undefined8 FUN_105f2aa7c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c089820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27b140();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105f2aac4; end: 105f2ad07; -[SCMapMultiTrayManager addFloatingAccessoryView:position:] */

void FUN_105f2aac4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x60) != 0) {
    func_0x00010c12c700(param_1);
  }
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(long *)(param_1 + 0x60) = param_3;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + 0x60),param_2,0);
  lVar3 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  if (param_4 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf493c0(0xc044000000000000,uVar5,param_2,lVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x60);
    uStack_78 = uVar2;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    lVar8 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010bf493a0(uVar7,param_2,lVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_78,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1,param_2,puVar11);
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(param_1);
    _objc_release(uVar7);
    _objc_release(uVar2);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(uVar5);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_3 + 0x60) != 0) {
    func_0x00010c12c960();
    uVar2 = *(undefined8 *)(param_3 + 0x60);
    *(undefined8 *)(param_3 + 0x60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105f2ad08; end: 105f2ad43; -[SCMapMultiTrayManager removeFloatingAccessoryView] */

void FUN_105f2ad08(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    func_0x00010c12c960();
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105f2ad44; end: 105f2ad8b; -[SCMapMultiTrayManager _currentTrayController] */

void FUN_105f2ad44(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c089820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c068460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105f2ad8c; end: 105f2ad93; -[SCMapMultiTrayManager _hideTrayWithState:animated:destroyOnHidden:] */

void FUN_105f2ad8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be35f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hideTrayWithState_animated_dest_11256b170);
  return;
}



/* Entry: 105f2ad94; end: 105f2ae93; -[SCMapMultiTrayManager _hideTrayWithState:animated:destroyOnHidden:interactionMethod:] */

void FUN_105f2ad94(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c068460(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5fb20();
  func_0x00010c1b8580(param_3,param_2,lVar2);
  _objc_release(lVar1);
  func_0x00010c2000e0(param_3,param_2,param_5);
  lVar1 = param_3;
  func_0x00010c068460();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5fb20();
  _objc_release(lVar1);
  if (lVar2 == 2) {
    if ((int)param_5 != 0) {
      func_0x00010be8d580(param_1,param_2,param_3);
    }
  }
  else {
    func_0x00010c1af860(param_3,param_2,param_5);
    lVar1 = param_3;
    func_0x00010c068460(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219f20();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f2ae94; end: 105f2af17; -[SCMapMultiTrayManager _restoreTrayWithState:] */

void FUN_105f2ae94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c068460(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c089ac0(param_3);
  func_0x00010c219f00(uVar1,param_2,uVar2,1);
  _objc_release(uVar1);
  func_0x00010bdcdc60(param_1,param_2,param_3,1);
  func_0x00010bdcdd20(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f2af18; end: 105f2b0d3; -[SCMapMultiTrayManager _removeState:] */

void FUN_105f2af18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  uVar6 = param_3;
  func_0x00010c0687e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf86d40();
  _objc_release(uVar6);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x38),param_2,param_3);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  uVar6 = param_3;
  func_0x00010c068460(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar7,param_2,uVar6);
  _objc_release(uVar6);
  uVar6 = param_3;
  func_0x00010bf9a2e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar1 = PTR_PTR_1126c6028;
  func_0x00010c2a25a0(PTR_PTR_1126c6028);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar6,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar6);
  lVar2 = *(long *)(param_1 + 0x38);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    puVar1 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar6,param_2,puVar1);
  }
  else {
    puVar3 = *(undefined **)(param_1 + 0x38);
    func_0x00010c089820(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c068460();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c27b740();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar5;
    func_0x00010c27b2c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    puVar4 = PTR_PTR_1126ae750;
    func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar6,param_2,puVar4);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f2b0d4; end: 105f2b1bf; -[SCMapMultiTrayManager _applyCameraForState:context:] */

void FUN_105f2b0d4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0b89a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c0b89a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0baae0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b1e20;
      _objc_alloc(PTR_PTR_1126b1e20);
      func_0x00010c00eb00(0x3fd3333333333333);
      func_0x00010c176120(uVar3);
      _objc_release(puVar4);
      _objc_release(uVar3);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f2b1c0; end: 105f2b36b; -[SCMapMultiTrayManager _applyChromeConfigurationForState:] */

void FUN_105f2b1c0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf39160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010be926c0(param_1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    lVar1 = param_3;
    func_0x00010bf39160();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c06ea40();
    _objc_release(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    if ((int)lVar2 == 0) {
      lVar1 = param_3;
      func_0x00010bf39160(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29fcc0();
      func_0x00010c223900(uVar3);
      _objc_release(lVar1);
      func_0x00010c17d680(*(undefined8 *)(param_1 + 0x58));
    }
    else {
      lVar1 = param_3;
      func_0x00010bf39160(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29fcc0();
      func_0x00010c223900(uVar3);
      _objc_release(lVar1);
      uVar3 = *(undefined8 *)(param_1 + 0x58);
      _objc_retain(param_3);
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x00010c17d680(uVar3);
      _objc_destroyWeak(auStack_40);
      _objc_release(param_3);
    }
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105f2b36c; end: 105f2b3e7;  */

void FUN_105f2b36c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf3db40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be35f40();
  }
  else {
    param_1 = *(long *)(param_1 + 0x20);
    func_0x00010bf3db40();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f2b3e8; end: 105f2b523; -[SCMapMultiTrayManager _handleAllTraysClosedWithLastState:] */

void FUN_105f2b3e8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  func_0x00010be926c0(param_1);
  func_0x00010c12c700(param_1);
  func_0x00010be92460(param_1);
  lVar1 = param_3;
  func_0x00010c0b89a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c0b89a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x00010c0b89a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  if (lVar1 == 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 == 0) goto LAB_105f2b4ac;
    (**(code **)(lVar3 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release();
  lVar2 = lVar3;
LAB_105f2b4ac:
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0baae0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b1e20;
    _objc_alloc(PTR_PTR_1126b1e20);
    func_0x00010c00eb00(0x3fd3333333333333);
    func_0x00010c176120(uVar4);
    _objc_release(puVar5);
    _objc_release(uVar4);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f2b524; end: 105f2b56b; -[SCMapMultiTrayManager _resetChromeToDefaults] */

void FUN_105f2b524(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010beffb20(PTR_PTR_1126b1f10);
  func_0x00010c223900(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c17d690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_setCloseableHeaderButton_onClose_11263cfc0,0,0);
  return;
}



/* Entry: 105f2b56c; end: 105f2b573; -[SCMapMultiTrayManager _resetBrowsingState] */

void FUN_105f2b56c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18aeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setDefaultBrowsingContext_1126405c8);
  return;
}



/* Entry: 105f2b574; end: 105f2b5ff; -[SCMapMultiTrayManager _hideOtherTraysForNewState:] */

void FUN_105f2b574(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105f2b600;
  puStack_48 = &UNK_1108f9890;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010bf97e80(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f2b600; end: 105f2b667;  */

void FUN_105f2b600(long param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  if (((param_2 != *(ulong *)(param_1 + 0x20)) &&
      (uVar1 = param_2, func_0x00010bf5fb20(), uVar1 != 2)) &&
     (uVar1 = param_2, func_0x00010c06d200(), (uVar1 & 1) == 0)) {
    func_0x00010be35f20(*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105f2b668; end: 105f2b6df; -[SCMapMultiTrayManager _handleTrayInteraction:] */

void FUN_105f2b668(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105f2b6e0;
  puStack_20 = &UNK_1108f98c0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105f2b8a8;
  puStack_48 = &UNK_1108f98f0;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0c17e0(param_3,param_2,&puStack_38,&puStack_60);
  return;
}



/* Entry: 105f2b6e0; end: 105f2b8a7;  */

void FUN_105f2b6e0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010c0dff20(lVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf9a2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c6028;
  func_0x00010c2a5c00(PTR_PTR_1126c6028);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(lVar3);
  _objc_release(puVar2);
  _objc_release(lVar3);
  if (param_3 == 0x10) {
    lVar3 = lVar1;
    func_0x00010bf39160(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29fcc0();
    func_0x00010bfdf380(PTR_PTR_1126b1f10);
    _objc_release(lVar3);
    func_0x00010c223900(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58));
  }
  else {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
    lVar3 = lVar1;
    func_0x00010bf39160(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29fcc0();
    func_0x00010c223900(uVar5);
    _objc_release(lVar3);
    if (param_3 == 2) {
      if (param_4 != 0) {
        func_0x00010c2000e0(lVar1);
      }
      lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 == lVar3) {
        uVar4 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x38);
        func_0x00010bf529e0();
        lVar3 = *(long *)(param_1 + 0x20);
        if (uVar4 < 2) {
          func_0x00010be25900(lVar3);
        }
        else {
          uVar5 = *(undefined8 *)(lVar3 + 0x38);
          func_0x00010bf529e0(uVar5);
          func_0x00010c0dfd40(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be958e0(lVar3);
          _objc_release(uVar5);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f2b8a8; end: 105f2b967;  */

void FUN_105f2b8a8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010c0dff20(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 == 2) && (uVar2 = uVar1, func_0x00010c22e240(), (int)uVar2 != 0)) {
    func_0x00010be8d580(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar2 = uVar1;
    func_0x00010bf9a2e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c6028;
    func_0x00010bf73740(PTR_PTR_1126c6028);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  func_0x00010beded20(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f2b968; end: 105f2ba53; -[SCMapMultiTrayManager _setupChromeUpdateObservations] */

void FUN_105f2b968(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c0e4ba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105f2ba54; end: 105f2ba7f;  */

void FUN_105f2ba54(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beded20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f2ba80; end: 105f2bb8f; -[SCMapMultiTrayManager _setupMapInteractionObservationsWithGestureManager:] */

void FUN_105f2ba80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = param_3;
  func_0x00010c0687c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7e00(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105f2bb90; end: 105f2bc13;  */

void FUN_105f2bb90(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf6eb00();
    if (lVar2 != 1) {
      func_0x00010be2bf60(param_1);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105f2bc14; end: 105f2bcf3; -[SCMapMultiTrayManager _handleMapInteraction:state:] */

void FUN_105f2bc14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105f2bcf4;
  puStack_58 = &UNK_110841f80;
  uStack_50 = param_1;
  _objc_retain(param_4);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x105f2bd04;
  puStack_88 = &UNK_1108a77e8;
  uStack_80 = param_1;
  uStack_78 = param_4;
  uStack_48 = param_4;
  _objc_retain(param_4);
  func_0x00010c0c03c0(param_3,param_2,&puStack_70,&puStack_a0,0,0,0,0,0);
  _objc_release(uStack_78);
  _objc_release(uStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105f2bcf4; end: 105f2bd13;  */

void FUN_105f2bcf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee29d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateTrayPositionIfNecessary_i_112596418,
             *(undefined8 *)(param_1 + 0x28),3);
  return;
}



/* Entry: 105f2bd14; end: 105f2bd97; -[SCMapMultiTrayManager _updateTrayPositionIfNecessary:interactionMethod:] */

void FUN_105f2bd14(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf6eb00();
  if (lVar1 != 1) {
    lVar1 = param_3;
    func_0x00010bf5fb20();
    lVar2 = param_3;
    func_0x00010bf6eb00();
    if (lVar1 != lVar2) {
      lVar1 = param_3;
      func_0x00010bf6eb00(param_3);
      func_0x00010c219f60(param_1,param_2,param_3,lVar1,1,param_4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f2bd98; end: 105f2bd9b; -[SCMapMultiTrayManager parentViewControllerDidAppear] */

void FUN_105f2bd98(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be86930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reanchorVisibleTray_11257f3e8);
  return;
}



/* Entry: 105f2bd9c; end: 105f2bddb; -[SCMapMultiTrayManager parentViewLayoutDidChange] */

void FUN_105f2bd9c(double param_1,double param_2,long param_3)

{
  bool bVar1;
  
  func_0x00010c27b3e0();
  bVar1 = false;
  if ((param_1 == *(double *)(param_3 + 0x90)) &&
     (bVar1 = false, !NAN(param_2) && !NAN(*(double *)(param_3 + 0x98)))) {
    bVar1 = param_2 == *(double *)(param_3 + 0x98);
  }
  if (!bVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010be86930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__reanchorVisibleTray_11257f3e8);
    return;
  }
  return;
}



/* Entry: 105f2bddc; end: 105f2be43; -[SCMapMultiTrayManager _reanchorVisibleTray] */

void FUN_105f2bddc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c27b3e0();
  *(undefined8 *)(param_3 + 0x90) = param_1;
  *(undefined8 *)(param_3 + 0x98) = param_2;
  func_0x00010beded20(param_3);
  lVar1 = *(long *)(param_3 + 0x38);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (lVar2 = lVar1, func_0x00010bf5fb20(), lVar2 != 2)) {
    func_0x00010c13a2e0(param_3,param_4,lVar1,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f2be44; end: 105f2be9b; -[SCMapMultiTrayManager _updateSDKEdgeInsets] */

void FUN_105f2be44(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105f2be9c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 105f2be9c; end: 105f2c183;  */

void FUN_105f2be9c(double param_1,double param_2,double param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  puVar1 = PTR_PTR_1126c5fb0;
  _objc_alloc_init(PTR_PTR_1126c5fb0);
  func_0x00010bf8c020(*(undefined8 *)(*(long *)(param_5 + 0x20) + 0x58));
  dVar13 = param_3;
  func_0x00010c2172c0(puVar1);
  func_0x00010c2a0140(*(undefined8 *)(param_5 + 0x20));
  dVar11 = param_1;
  func_0x00010c2a0120(*(undefined8 *)(param_5 + 0x20));
  lVar2 = *(long *)(param_5 + 0x20) + 0x20;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c148fc0();
  dVar13 = param_1 + dVar11 + dVar13;
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (param_3 <= dVar13) {
    param_3 = dVar13;
  }
  func_0x00010c173440(param_3,puVar1);
  func_0x00010c1ee020(param_4,puVar1);
  func_0x00010c1ba100(puVar1);
  func_0x00010c289600(*(undefined8 *)(*(long *)(param_5 + 0x20) + 0x18),param_6,puVar1);
  uVar4 = *(undefined8 *)(*(long *)(param_5 + 0x20) + 0x18);
  func_0x00010bfc3540();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar4;
  func_0x00010c071800();
  puVar5 = PTR_PTR_1126b1dc8;
  if ((int)uVar10 != 0) {
    func_0x00010c274140(puVar1);
    dVar11 = param_2;
    func_0x00010bf1fec0(puVar1);
    func_0x00010c271cc0(param_2,0,dVar11,0,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126c6030;
    _objc_alloc(PTR_PTR_1126c6030);
    func_0x00010c063600(0,0);
    puVar7 = PTR_PTR_1126c6030;
    _objc_alloc(PTR_PTR_1126c6030);
    param_2 = 0.25;
    func_0x00010c063600(0x3fd0000000000000,0x3ff0000000000000);
    puVar8 = PTR_PTR_1126c6038;
    _objc_alloc(PTR_PTR_1126c6038);
    func_0x00010c032b60();
    puVar9 = PTR_PTR_1126c6040;
    _objc_alloc(PTR_PTR_1126c6040);
    func_0x00010c00ea80();
    func_0x00010c193420(uVar4,param_6,puVar5,puVar9);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  uVar10 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c274140(puVar1);
  dVar11 = param_2;
  func_0x00010c08e360(puVar1);
  dVar13 = dVar11;
  func_0x00010bf1fec0(puVar1);
  dVar12 = dVar13;
  func_0x00010c140820(puVar1);
  func_0x00010beded40(param_2,dVar11,dVar13,dVar12,uVar10);
  func_0x00010c2a0140(*(undefined8 *)(param_5 + 0x20));
  dVar11 = param_2;
  func_0x00010c2a0120(*(undefined8 *)(param_5 + 0x20));
  lVar2 = *(long *)(param_5 + 0x20) + 0x20;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c148fc0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  dVar13 = param_2 + dVar11 + dVar13;
  if (param_2 + dVar11 <= 0.0) {
    dVar13 = 0.0;
  }
  uVar10 = *(undefined8 *)(*(long *)(param_5 + 0x20) + 0x50);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar13,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar10,param_6,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f2c184; end: 105f2c1ab; -[SCMapMultiTrayManager trayHeightObservable] */

void FUN_105f2c184(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f2c1ac; end: 105f2c27b; -[SCMapMultiTrayManager trayHostFrameSize] */

undefined1  [16]
FUN_105f2c1ac(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  long lVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  lVar1 = param_5 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c148fc0();
  dVar3 = param_3;
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_5 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_5 = param_5 + 0x20;
  _objc_loadWeakRetained(param_5);
  lVar1 = param_5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(lVar1);
  _objc_release(param_5);
  auVar4._8_8_ = param_4 - param_3;
  auVar4._0_8_ = dVar3;
  return auVar4;
}



/* Entry: 105f2c27c; end: 105f2c287; -[SCMapMultiTrayManager trayFullishOffsetFromTopForTrayController:] */

void FUN_105f2c27c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIScreen_1126aea10,PTR_s_sc_headerSafeInsets_112630e00);
  return;
}



/* Entry: 105f2c288; end: 105f2c31b; -[SCMapMultiTrayManager trayHalfTrayHeightRatioForTrayController:] */

double FUN_105f2c288(double param_1,double param_2,long param_3)

{
  long lVar1;
  double dVar2;
  
  lVar1 = *(long *)(param_3 + 0x40);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  dVar2 = 0.5;
  if (lVar1 != 0) {
    func_0x00010bfcfe80(lVar1);
    if (param_1 <= 0.0) {
      func_0x00010bfcfea0(lVar1);
      if (0.0 < param_1) {
        func_0x00010bfcfea0(lVar1);
        dVar2 = param_1;
      }
    }
    else {
      func_0x00010c27b3e0(param_3);
      func_0x00010bfcfe80(lVar1);
      dVar2 = param_1 / param_2;
    }
  }
  _objc_release(lVar1);
  return dVar2;
}



/* Entry: 105f2c31c; end: 105f2c447; -[SCMapMultiTrayManager mapTrayController:didUpdateHeight:] */

void FUN_105f2c31c(double param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  ushort uVar8;
  double dVar9;
  
  uVar1 = *(undefined8 *)(param_4 + 0x18);
  dVar6 = param_1;
  func_0x00010bfc3540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071800();
  if ((int)uVar2 != 0) {
    func_0x00010bf8c020(*(undefined8 *)(param_4 + 0x58));
    dVar7 = dVar6;
    dVar9 = param_3;
    func_0x00010c2a0120(param_4);
    lVar3 = param_4 + 0x20;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c148fc0();
    dVar9 = param_1 + dVar7 + dVar9;
    _objc_release(lVar4);
    _objc_release(lVar3);
    if (param_3 <= dVar9) {
      param_3 = dVar9;
    }
    uVar8 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_4 + 0x88) == 0.0),
                                CONCAT24(-(ushort)(param_3 == *(double *)(param_4 + 0x80)),
                                         CONCAT22(-(ushort)(*(double *)(param_4 + 0x78) == 0.0),
                                                  -(ushort)(dVar6 == *(double *)(param_4 + 0x70)))))
                       ,2);
    if ((uVar8 & 1) == 0) {
      *(double *)(param_4 + 0x70) = dVar6;
      *(undefined8 *)(param_4 + 0x78) = 0;
      *(double *)(param_4 + 0x80) = param_3;
      *(undefined8 *)(param_4 + 0x88) = 0;
      puVar5 = PTR_PTR_1126b1dc8;
      func_0x00010c271cc0(dVar6,0,PTR_PTR_1126b1dc8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c193420(uVar1,param_5,puVar5,0);
      _objc_release(puVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f2c448; end: 105f2c4a3; -[SCMapMultiTrayManager trayCollapsedHeightForTrayController:] */

undefined8 FUN_105f2c448(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x40);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    param_1 = 0x4059000000000000;
  }
  else {
    func_0x00010bf3fb60(lVar1);
  }
  _objc_release(lVar1);
  return param_1;
}



/* Entry: 105f2c4a4; end: 105f2c4f3; -[SCMapMultiTrayManager handleModalTrayScrimInteraction:] */

undefined8 FUN_105f2c4a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0dff20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be35f20(param_1,param_2,uVar1,1,1);
  _objc_release(uVar1);
  return 1;
}



/* Entry: 105f2c4f4; end: 105f2c4f7; -[SCMapMultiTrayManager _updateSDKEdgeInsetsDebugView:] */

void FUN_105f2c4f4(void)

{
  return;
}



/* Entry: 105f2c4f8; end: 105f2c5a7; -[SCMapMultiTrayManager .cxx_destruct] */

void FUN_105f2c4f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 105f2c5a8; end: 105f2c6a7; -[SCMapMultiTrayServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f2c5a8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c6048;
  _objc_alloc(PTR_PTR_1126c6048);
  func_0x00010c02cb80();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_11273a9d4));
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105f2c6a8; end: 105f2c6e7;  */

void FUN_105f2c6a8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010becf880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105f2c6e8; end: 105f2c723; -[SCMapMultiTrayServicesEntryPoint end] */

void FUN_105f2c6e8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee0f0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f2c724; end: 105f2c73f; -[SCMapMultiTrayServicesEntryPoint _trayManager] */

void FUN_105f2c724(void)

{
  func_0x00010be73820();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f2c740; end: 105f2c8bf; -[SCMapMultiTrayServicesEntryPoint _phoneMultiTrayManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f2c740(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = param_1 + _DAT_11273a9d8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11273a9dc;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfc1a20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126c6050;
  _objc_alloc(PTR_PTR_1126c6050);
  lVar1 = lVar3;
  func_0x00010bf218e0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c1530a0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11273a9e0;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010c0b8ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c028880(puVar5,param_2,lVar3,lVar1,lVar2,lVar4,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105f2c8c0; end: 105f2c9cb; -[SCMapMultiTrayServicesEntryPoint _demoMultiTrayManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f2c8c0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = param_1 + _DAT_11273a9d8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_11273a9dc;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfc1a20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  puVar4 = PTR_PTR_1126c6058;
  _objc_alloc(PTR_PTR_1126c6058);
  lVar1 = lVar3;
  func_0x00010c1530a0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0288c0(puVar4,param_2,lVar3,lVar1,lVar2);
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105f2c9cc; end: 105f2ca37; -[SCMapMultiTrayServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f2c9cc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273a9d4,0);
  _objc_destroyWeak(param_1 + _DAT_11273a9e0);
  _objc_destroyWeak(param_1 + _DAT_11273a9e8);
  _objc_destroyWeak(param_1 + _DAT_11273a9dc);
  _objc_destroyWeak(param_1 + _DAT_11273a9d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273a9e4);
  return;
}



/* Entry: 105f2ca38; end: 105f2cc3f; -[SCMapTabletDemoMultiTrayManager initWithMapView:sdkSession:gestureManager:] */

undefined8 *
FUN_105f2ca38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ee0f8;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
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
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c2a2c00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc();
    puVar4 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060400();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_initWeak(auStack_58,puVar1);
    uVar2 = param_5;
    func_0x00010c0687c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    uVar5 = uVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[7];
    puVar1[7] = uVar5;
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105f2cc40; end: 105f2cc6f;  */

void FUN_105f2cc40(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12b140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f2cc70; end: 105f2cc83; -[SCMapTabletDemoMultiTrayManager mapCameraInsetsForSinglePoint] */

undefined8 FUN_105f2cc70(void)

{
  return *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
}



/* Entry: 105f2cc84; end: 105f2cc97; -[SCMapTabletDemoMultiTrayManager mapCameraInsetsForCoordinateBounds] */

undefined8 FUN_105f2cc84(void)

{
  return *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
}



/* Entry: 105f2cc98; end: 105f2ccab; -[SCMapTabletDemoMultiTrayManager mapCameraInsetsForMeTrayPosition] */

undefined8 FUN_105f2cc98(void)

{
  return *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
}


