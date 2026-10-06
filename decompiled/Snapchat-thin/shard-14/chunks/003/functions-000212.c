/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0e6044; end: 10b0e604b; -[SCBitmojiFlatlandBackgroundListResponse plusExclusiveIds] */

undefined8 FUN_10b0e6044(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0e604c; end: 10b0e6087; -[SCBitmojiFlatlandBackgroundListResponse .cxx_destruct] */

void FUN_10b0e604c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0e6088; end: 10b0e61b7; -[SCBitmojiFlatlandSceneFetchRequest initWithAvatarID:friendAvatarID:sceneID:format:scale:feature:renderStyle:from2DFetcher:isReaction:desiredSize:] */

undefined1 *
FUN_10b0e6088(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10,undefined8 param_11,undefined4 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_78 = PTR_PTR_112705b70;
  uStack_80 = param_3;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    *(undefined4 *)((long)puVar1 + 0xc) = param_10;
    *(undefined8 *)((long)puVar1 + 0x38) = param_11;
    *(undefined1 *)((long)puVar1 + 8) = (undefined1)param_12;
    *(undefined1 *)((long)puVar1 + 9) = param_12._1_1_;
    *(undefined8 *)((long)puVar1 + 0x40) = param_1;
    *(undefined8 *)((long)puVar1 + 0x48) = param_2;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0e61b8; end: 10b0e61db; -[SCBitmojiFlatlandSceneFetchRequest copyWithZone:] */

undefined8 FUN_10b0e61b8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0e61dc; end: 10b0e62bf; -[SCBitmojiFlatlandSceneFetchRequest hash] */

undefined8 * FUN_10b0e61dc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_78 = uVar3;
  func_0x00010bfde980();
  uStack_60 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = *(undefined8 *)(param_1 + 0x28);
  lStack_58 = (long)*(int *)(param_1 + 0xc);
  uStack_50 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uStack_40 = (ulong)*(byte *)(param_1 + 9);
  uVar7 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar7 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_70 = uVar2;
  func_0x000107c3191c(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10b0e63dc:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b0e63e8;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((((ulong)puVar5 & 1) != 0) &&
        ((((*(long *)((long)puVar4 + 0x28) == *(long *)(param_3 + 0x28) &&
           (*(long *)((long)puVar4 + 0x30) == *(long *)(param_3 + 0x30))) &&
          (*(int *)((long)puVar4 + 0xc) == *(int *)(param_3 + 0xc))) &&
         ((*(long *)((long)puVar4 + 0x38) == *(long *)(param_3 + 0x38) &&
          (*(char *)((long)puVar4 + 8) == param_3[8])))))) &&
       (*(char *)((long)puVar4 + 9) == param_3[9])) {
      puVar8 = (undefined1 *)0x0;
      if ((*(double *)((long)puVar4 + 0x40) != *(double *)(param_3 + 0x40)) ||
         (*(double *)((long)puVar4 + 0x48) != *(double *)(param_3 + 0x48))) goto LAB_10b0e63e8;
      lVar6 = *(long *)((long)puVar4 + 0x10);
      if (((lVar6 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
         ((lVar6 = *(long *)((long)puVar4 + 0x18), lVar6 == *(long *)(param_3 + 0x18) ||
          (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = *(undefined1 **)((long)puVar4 + 0x20);
        if (puVar8 != *(undefined1 **)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10b0e63e8;
        }
        goto LAB_10b0e63dc;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_10b0e63e8:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 10b0e62c0; end: 10b0e6403; -[SCBitmojiFlatlandSceneFetchRequest isEqual:] */

long FUN_10b0e62c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0e63dc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0e63e8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28) &&
           (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
          (*(int *)(param_1 + 0xc) == *(int *)(param_3 + 0xc))) &&
         ((*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38) &&
          (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))))) &&
       (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) {
      lVar3 = 0;
      if ((*(double *)(param_1 + 0x40) != *(double *)(param_3 + 0x40)) ||
         (*(double *)(param_1 + 0x48) != *(double *)(param_3 + 0x48))) goto LAB_10b0e63e8;
      lVar3 = *(long *)(param_1 + 0x10);
      if (((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
         ((lVar3 = *(long *)(param_1 + 0x18), lVar3 == *(long *)(param_3 + 0x18) ||
          (func_0x00010c071ae0(), (int)lVar3 != 0)))) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10b0e63e8;
        }
        goto LAB_10b0e63dc;
      }
    }
    lVar3 = 0;
  }
LAB_10b0e63e8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0e6404; end: 10b0e640b; -[SCBitmojiFlatlandSceneFetchRequest avatarID] */

undefined8 FUN_10b0e6404(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0e640c; end: 10b0e6413; -[SCBitmojiFlatlandSceneFetchRequest friendAvatarID] */

undefined8 FUN_10b0e640c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0e6414; end: 10b0e641b; -[SCBitmojiFlatlandSceneFetchRequest sceneID] */

undefined8 FUN_10b0e6414(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0e641c; end: 10b0e6423; -[SCBitmojiFlatlandSceneFetchRequest format] */

undefined8 FUN_10b0e641c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b0e6424; end: 10b0e642b; -[SCBitmojiFlatlandSceneFetchRequest scale] */

undefined8 FUN_10b0e6424(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b0e642c; end: 10b0e6433; -[SCBitmojiFlatlandSceneFetchRequest feature] */

undefined4 FUN_10b0e642c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b0e6434; end: 10b0e643b; -[SCBitmojiFlatlandSceneFetchRequest renderStyle] */

undefined8 FUN_10b0e6434(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b0e643c; end: 10b0e6443; -[SCBitmojiFlatlandSceneFetchRequest from2DFetcher] */

undefined1 FUN_10b0e643c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b0e6444; end: 10b0e644b; -[SCBitmojiFlatlandSceneFetchRequest isReaction] */

undefined1 FUN_10b0e6444(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b0e644c; end: 10b0e6453; -[SCBitmojiFlatlandSceneFetchRequest desiredSize] */

undefined1  [16] FUN_10b0e644c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x40);
}



/* Entry: 10b0e6454; end: 10b0e648f; -[SCBitmojiFlatlandSceneFetchRequest .cxx_destruct] */

void FUN_10b0e6454(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0e6490; end: 10b0e6543; -[SCBitmojiFlatlandSceneListResponse initWithVersion:identifiers:latestIdentifiers:] */

undefined1 *
FUN_10b0e6490(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112705b78;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
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
  return (undefined1 *)puVar1;
}



/* Entry: 10b0e6544; end: 10b0e6567; -[SCBitmojiFlatlandSceneListResponse copyWithZone:] */

undefined8 FUN_10b0e6544(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0e6568; end: 10b0e65e7; -[SCBitmojiFlatlandSceneListResponse hash] */

long * FUN_10b0e6568(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  plVar3 = &lStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lStack_40 = -lVar5;
  if (-1 < lVar5) {
    lStack_40 = lVar5;
  }
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&lStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == (long *)param_3) {
LAB_10b0e6678:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b0e6684;
    puVar6 = (undefined1 *)plVar3;
    _objc_opt_class(plVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)plVar3 + 8) == *(long *)(param_3 + 8))) {
      lVar5 = *(long *)((long)plVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)plVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b0e6684;
        }
        goto LAB_10b0e6678;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b0e6684:
  _objc_release(param_3);
  return (long *)puVar6;
}



/* Entry: 10b0e65e8; end: 10b0e669f; -[SCBitmojiFlatlandSceneListResponse isEqual:] */

long FUN_10b0e65e8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0e6678:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0e6684;
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
          goto LAB_10b0e6684;
        }
        goto LAB_10b0e6678;
      }
    }
    lVar3 = 0;
  }
LAB_10b0e6684:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0e66a0; end: 10b0e66a7; -[SCBitmojiFlatlandSceneListResponse version] */

undefined8 FUN_10b0e66a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0e66a8; end: 10b0e66af; -[SCBitmojiFlatlandSceneListResponse identifiers] */

undefined8 FUN_10b0e66a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0e66b0; end: 10b0e66b7; -[SCBitmojiFlatlandSceneListResponse latestIdentifiers] */

undefined8 FUN_10b0e66b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0e66b8; end: 10b0e66e7; -[SCBitmojiFlatlandSceneListResponse .cxx_destruct] */

void FUN_10b0e66b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0e66e8; end: 10b0e6747; -[SCBitmojiFlatlandNewContentAlertsResponse initWithEnableToasts:enableShortcutBadges:enableContentPickerBadges:] */

void FUN_10b0e66e8(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112705b80;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
  }
  return;
}



/* Entry: 10b0e6748; end: 10b0e676b; -[SCBitmojiFlatlandNewContentAlertsResponse copyWithZone:] */

undefined8 FUN_10b0e6748(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0e676c; end: 10b0e67cf; -[SCBitmojiFlatlandNewContentAlertsResponse hash] */

ulong * FUN_10b0e676c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_28 = (ulong)*(byte *)(param_1 + 9);
  uStack_20 = (ulong)*(byte *)(param_1 + 10);
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (ulong *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) ||
         ((*(char *)((long)puVar1 + 8) != param_3[8] || (*(char *)((long)puVar1 + 9) != param_3[9]))
         )) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(char *)((long)puVar1 + 10) == param_3[10]);
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar3;
}



/* Entry: 10b0e67d0; end: 10b0e6877; -[SCBitmojiFlatlandNewContentAlertsResponse isEqual:] */

bool FUN_10b0e67d0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) ||
         ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
          (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 10) == *(char *)(param_3 + 10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b0e6878; end: 10b0e687f; -[SCBitmojiFlatlandNewContentAlertsResponse enableToasts] */

undefined1 FUN_10b0e6878(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b0e6880; end: 10b0e6887; -[SCBitmojiFlatlandNewContentAlertsResponse enableShortcutBadges] */

undefined1 FUN_10b0e6880(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b0e6888; end: 10b0e688f; -[SCBitmojiFlatlandNewContentAlertsResponse enableContentPickerBadges] */

undefined1 FUN_10b0e6888(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b0e6890; end: 10b0e6917; -[SCBitmojiFlatlandSelfieFetchRequest initWithSceneRequest:type:] */

undefined1 *
FUN_10b0e6890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112705b88;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0e6918; end: 10b0e693b; -[SCBitmojiFlatlandSelfieFetchRequest copyWithZone:] */

undefined8 FUN_10b0e6918(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0e693c; end: 10b0e69a7; -[SCBitmojiFlatlandSelfieFetchRequest hash] */

undefined8 * FUN_10b0e693c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b0e6a2c;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10b0e6a2c;
    }
    puVar4 = (undefined8 *)puVar2[1];
    if (puVar4 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_10b0e6a2c;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10b0e6a2c:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b0e69a8; end: 10b0e6a47; -[SCBitmojiFlatlandSelfieFetchRequest isEqual:] */

long FUN_10b0e69a8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0e6a2c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_10b0e6a2c;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b0e6a2c;
    }
  }
  lVar3 = 1;
LAB_10b0e6a2c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0e6a48; end: 10b0e6a4f; -[SCBitmojiFlatlandSelfieFetchRequest sceneRequest] */

undefined8 FUN_10b0e6a48(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0e6a50; end: 10b0e6a57; -[SCBitmojiFlatlandSelfieFetchRequest type] */

undefined8 FUN_10b0e6a50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0e6a58; end: 10b0e6a63; -[SCBitmojiFlatlandSelfieFetchRequest .cxx_destruct] */

void FUN_10b0e6a58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0e6a64; end: 10b0e6b4b; -[SCBitmojiFlatlandSceneContentResponse initWithRequest:contentType:result:cacheKey:] */

undefined1 *
FUN_10b0e6a64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112705b90;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0e6b4c; end: 10b0e6b6f; -[SCBitmojiFlatlandSceneContentResponse copyWithZone:] */

undefined8 FUN_10b0e6b4c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0e6b70; end: 10b0e6bf3; -[SCBitmojiFlatlandSceneContentResponse hash] */

undefined8 * FUN_10b0e6b70(long param_1,undefined8 param_2,undefined8 *param_3)

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
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_40 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b0e6c9c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b0e6ca8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[2] == param_3[2])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_10b0e6ca8;
          }
          goto LAB_10b0e6c9c;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b0e6ca8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b0e6bf4; end: 10b0e6cc3; -[SCBitmojiFlatlandSceneContentResponse isEqual:] */

long FUN_10b0e6bf4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0e6c9c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0e6ca8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10b0e6ca8;
          }
          goto LAB_10b0e6c9c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b0e6ca8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0e6cc4; end: 10b0e6ccb; -[SCBitmojiFlatlandSceneContentResponse request] */

undefined8 FUN_10b0e6cc4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0e6ccc; end: 10b0e6cd3; -[SCBitmojiFlatlandSceneContentResponse contentType] */

undefined8 FUN_10b0e6ccc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0e6cd4; end: 10b0e6cdb; -[SCBitmojiFlatlandSceneContentResponse result] */

undefined8 FUN_10b0e6cd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0e6cdc; end: 10b0e6ce3; -[SCBitmojiFlatlandSceneContentResponse cacheKey] */

undefined8 FUN_10b0e6cdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0e6ce4; end: 10b0e6d1f; -[SCBitmojiFlatlandSceneContentResponse .cxx_destruct] */

void FUN_10b0e6ce4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0e6d20; end: 10b0e6da7; -[SCBitmojiFlatlandContentDataResponse initWithIsFromCache:data:] */

undefined1 *
FUN_10b0e6d20(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112705b98;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0e6da8; end: 10b0e6dcb; -[SCBitmojiFlatlandContentDataResponse copyWithZone:] */

undefined8 FUN_10b0e6da8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0e6dcc; end: 10b0e6e2f; -[SCBitmojiFlatlandContentDataResponse hash] */

ulong * FUN_10b0e6dcc(long param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (ulong *)0x0;
    if ((puVar2 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_10b0e6eb4;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || ((char)puVar2[1] != (char)param_3[1])) {
      puVar4 = (ulong *)0x0;
      goto LAB_10b0e6eb4;
    }
    puVar4 = (ulong *)puVar2[2];
    if (puVar4 != (ulong *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10b0e6eb4;
    }
  }
  puVar4 = (ulong *)0x1;
LAB_10b0e6eb4:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b0e6e30; end: 10b0e6ecf; -[SCBitmojiFlatlandContentDataResponse isEqual:] */

long FUN_10b0e6e30(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0e6eb4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10b0e6eb4;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b0e6eb4;
    }
  }
  lVar3 = 1;
LAB_10b0e6eb4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0e6ed0; end: 10b0e6ed7; -[SCBitmojiFlatlandContentDataResponse isFromCache] */

undefined1 FUN_10b0e6ed0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b0e6ed8; end: 10b0e6edf; -[SCBitmojiFlatlandContentDataResponse data] */

undefined8 FUN_10b0e6ed8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0e6ee0; end: 10b0e6eeb; -[SCBitmojiFlatlandContentDataResponse .cxx_destruct] */

void FUN_10b0e6ee0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0e6eec; end: 10b0e6f57; +[SCBitmojiBackground boltUrlWithValue:] */

void FUN_10b0e6eec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126afd80;
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



/* Entry: 10b0e6f58; end: 10b0e6fbb; +[SCBitmojiBackground idWithValue:] */

void FUN_10b0e6f58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126afd80;
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



/* Entry: 10b0e6fbc; end: 10b0e715b; -[SCBitmojiBackground initWithCoder:] */

undefined8 * FUN_10b0e6fbc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong unaff_x21;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined **ppuStack_58;
  ulong uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_60 = PTR_PTR_112705ba0;
  puVar1 = &uStack_68;
  uStack_68 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x21 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = unaff_x21;
    func_0x00010c0720c0();
    if ((uVar2 & 1) == 0) {
      uVar2 = unaff_x21;
      func_0x00010c0720c0();
      if ((uVar2 & 1) == 0) goto LAB_10b0e70e8;
      uVar5 = 1;
      lVar6 = 0x18;
    }
    else {
      uVar5 = 0;
      lVar6 = 0x10;
    }
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(ulong *)((long)puVar1 + lVar6) = uVar2;
    _objc_release(uVar4);
    puVar1[1] = uVar5;
    _objc_release(unaff_x21);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_10b0e70e8:
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSException_1126af520;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110db7158;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_50 = unaff_x21;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar3);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 10b0e715c; end: 10b0e717f; -[SCBitmojiBackground copyWithZone:] */

undefined8 FUN_10b0e715c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0e7180; end: 10b0e720f; -[SCBitmojiBackground encodeWithCoder:] */

void FUN_10b0e7180(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110f5e8f8;
    lVar2 = 0x10;
    ppuVar1 = &PTR____CFConstantStringClassReference_110f5e918;
  }
  else {
    if (*(long *)(param_1 + 8) != 1) goto LAB_10b0e71fc;
    ppuVar3 = &PTR____CFConstantStringClassReference_110f5e938;
    lVar2 = 0x18;
    ppuVar1 = &PTR____CFConstantStringClassReference_110f5e958;
  }
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + lVar2),ppuVar1);
  func_0x00010c14cb00(param_3,param_2,ppuVar3,&PTR____CFConstantStringClassReference_110db7018);
LAB_10b0e71fc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0e7210; end: 10b0e7287; -[SCBitmojiBackground hash] */

void FUN_10b0e7210(long param_1)

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
  puStack_68 = PTR_PTR_112705ba0;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0e7288; end: 10b0e72cb; -[SCBitmojiBackground internalInit] */

void FUN_10b0e7288(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112705ba0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0e72cc; end: 10b0e7383; -[SCBitmojiBackground isEqual:] */

long FUN_10b0e72cc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0e735c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0e7368;
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
          goto LAB_10b0e7368;
        }
        goto LAB_10b0e735c;
      }
    }
    lVar3 = 0;
  }
LAB_10b0e7368:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0e7384; end: 10b0e7407; -[SCBitmojiBackground matchId:boltUrl:] */

void FUN_10b0e7384(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_10b0e73ec;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_10b0e73ec;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10b0e73ec:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0e7408; end: 10b0e7437; -[SCBitmojiBackground .cxx_destruct] */

void FUN_10b0e7408(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0e7438; end: 10b0e7773;  */

undefined **
FUN_10b0e7438(float param_1,undefined *param_2,double param_3,undefined **param_4,
             undefined **param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **unaff_x21;
  double dVar6;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  double dStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = param_4;
  _objc_retain();
  _objc_retain(param_4);
  puVar5 = param_2;
  func_0x00010c08fa60();
  if (puVar5 == (undefined *)0x0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    _objc_retain(param_2);
    _objc_retain(param_4);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc();
    func_0x00010c00c560();
    if (param_3 != 0.0) {
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      dStack_80 = param_3;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(puVar1);
    }
    ppuVar2 = param_4;
    func_0x00010bf90ca0();
    if ((int)ppuVar2 != 0) {
      func_0x00010c1d0640(puVar5);
    }
    func_0x00010c0cb120(param_4);
    if ((0.0 < param_1) &&
       (func_0x00010c0cb120(param_4), puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0, param_1 < 1.0))
    {
      func_0x00010c0cb120(param_4);
      dVar6 = (double)param_1;
      dStack_80 = dVar6;
      func_0x00010c14de00(puVar1);
      param_1 = SUB84(dVar6,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(puVar1);
    }
    func_0x00010c26cee0(param_4);
    if ((0.0 < param_1) &&
       (func_0x00010c26cee0(param_4), puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0, param_1 < 1.0))
    {
      func_0x00010c26cee0(param_4);
      dStack_80 = (double)param_1;
      func_0x00010c14de00(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(puVar1);
    }
    ppuVar2 = param_4;
    func_0x00010bf909e0();
    if ((int)ppuVar2 != 0) {
      func_0x00010c1d0640(puVar5);
    }
    ppuStack_78 = &PTR____CFConstantStringClassReference_110de1878;
    ppuStack_70 = &PTR____CFConstantStringClassReference_110de1838;
    ppuStack_60 = &PTR____CFConstantStringClassReference_110de1898;
    ppuStack_68 = &PTR____CFConstantStringClassReference_110de1858;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_58 = param_2;
    puStack_50 = puVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(param_4);
    _objc_release(param_2);
    ppuStack_60 = (undefined **)0x0;
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60();
    _objc_retainAutoreleasedReturnValue();
    if (ppuStack_60 == (undefined **)0x0) {
      unaff_x21 = ppuVar2;
      func_0x00010bf15da0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      unaff_x21 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    _objc_release(ppuVar2);
    _objc_release(puVar1);
    ppuVar2 = &PTR____CFConstantStringClassReference_110db9ab8;
    param_5 = &PTR____CFConstantStringClassReference_110daafd8;
    ppuVar3 = unaff_x21;
    func_0x00010c25cfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x21);
  }
  _objc_release(param_4);
  puVar5 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
    return ppuVar3;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_c0;
  pcStack_88 = FUN_10b0e7774;
  ppuStack_b0 = ppuVar3;
  ppuStack_a8 = unaff_x21;
  ppuStack_a0 = param_4;
  puStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar2);
  _objc_retain(param_5);
  puStack_b8 = PTR_PTR_112705ba8;
  puStack_c0 = puVar5;
  _objc_msgSendSuper2(&puStack_c0,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined **)0x0) {
    _objc_retain(ppuVar2);
    puVar5 = ppuVar4[1];
    ppuVar4[1] = (undefined *)ppuVar2;
    _objc_release(puVar5);
    _objc_retain(param_5);
    puVar5 = ppuVar4[2];
    ppuVar4[2] = (undefined *)param_5;
    _objc_release(puVar5);
  }
  _objc_release(param_5);
  _objc_release(ppuVar2);
  return ppuVar4;
}



/* Entry: 10b0e7774; end: 10b0e7817; -[SCBitmojiGLBDownloadInfo initWithDownloadRequestFuture:seralizedMetadata:] */

undefined1 *
FUN_10b0e7774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112705ba8;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0e7818; end: 10b0e781f; -[SCBitmojiGLBDownloadInfo downloadRequestFuture] */

undefined8 FUN_10b0e7818(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0e7820; end: 10b0e7827; -[SCBitmojiGLBDownloadInfo seralizedMetadata] */

undefined8 FUN_10b0e7820(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0e7828; end: 10b0e7857; -[SCBitmojiGLBDownloadInfo .cxx_destruct] */

void FUN_10b0e7828(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0e7858; end: 10b0e7887; -[SCBitmojiGLBServices .cxx_destruct] */

void FUN_10b0e7858(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0e7888; end: 10b0e799b; -[SCBitmojiGLBAsset initWithAssetType:assetId:parameters:encodedConfig:hashId:] */

undefined1 *
FUN_10b0e7888(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_112705bb8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
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
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0e799c; end: 10b0e7aaf; -[SCBitmojiGLBAsset initWithCoder:] */

undefined1 * FUN_10b0e799c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112705bb8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0e7ab0; end: 10b0e7ad3; -[SCBitmojiGLBAsset copyWithZone:] */

undefined8 FUN_10b0e7ab0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0e7ad4; end: 10b0e7b6f; -[SCBitmojiGLBAsset encodeWithCoder:] */

void FUN_10b0e7ad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110ecf3b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e21e18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f5e978);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f5e998);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f5e9b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0e7b70; end: 10b0e7bff; -[SCBitmojiGLBAsset hash] */

undefined8 * FUN_10b0e7b70(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b0e7cc0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b0e7ccc;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 8) == *(long *)(param_3 + 8))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
            if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10b0e7ccc;
            }
            goto LAB_10b0e7cc0;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b0e7ccc:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b0e7c00; end: 10b0e7ce7; -[SCBitmojiGLBAsset isEqual:] */

long FUN_10b0e7c00(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0e7cc0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0e7ccc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10b0e7ccc;
            }
            goto LAB_10b0e7cc0;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b0e7ccc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0e7ce8; end: 10b0e7cef; -[SCBitmojiGLBAsset assetType] */

undefined8 FUN_10b0e7ce8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0e7cf0; end: 10b0e7cf7; -[SCBitmojiGLBAsset assetId] */

undefined8 FUN_10b0e7cf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0e7cf8; end: 10b0e7cff; -[SCBitmojiGLBAsset parameters] */

undefined8 FUN_10b0e7cf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0e7d00; end: 10b0e7d07; -[SCBitmojiGLBAsset encodedConfig] */

undefined8 FUN_10b0e7d00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0e7d08; end: 10b0e7d0f; -[SCBitmojiGLBAsset hashId] */

undefined8 FUN_10b0e7d08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b0e7d10; end: 10b0e7d57; -[SCBitmojiGLBAsset .cxx_destruct] */

void FUN_10b0e7d10(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0e7d58; end: 10b0e7d73; +[SCBitmojiGLBAssetBuilder bitmojiGLBAsset] */

void FUN_10b0e7d58(void)

{
  _objc_alloc_init(PTR_PTR_1126dfaf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0e7d74; end: 10b0e7ef7; +[SCBitmojiGLBAssetBuilder bitmojiGLBAssetFromExistingBitmojiGLBAsset:] */

void FUN_10b0e7d74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  puVar1 = PTR_PTR_1126dfaf0;
  _objc_retain(param_3);
  func_0x00010bf1b7a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf0b760(param_3);
  puVar3 = puVar1;
  func_0x00010c2a8800(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf0b260(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2a87e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0f3840(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c2b5500(puVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bf93420(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c2ad1e0(puVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010bfdea00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar10 = puVar8;
  func_0x00010c2af640(puVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10b0e7ef8; end: 10b0e7f2f; -[SCBitmojiGLBAssetBuilder build] */

void FUN_10b0e7ef8(void)

{
  _objc_alloc(PTR_PTR_1126b9668);
  func_0x00010bff45e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0e7f30; end: 10b0e7f37; -[SCBitmojiGLBAssetBuilder withAssetType:] */

void FUN_10b0e7f30(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b0e7f38; end: 10b0e7f6f; -[SCBitmojiGLBAssetBuilder withAssetId:] */

long FUN_10b0e7f38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0e7f70; end: 10b0e7fa7; -[SCBitmojiGLBAssetBuilder withParameters:] */

long FUN_10b0e7f70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0e7fa8; end: 10b0e7fdf; -[SCBitmojiGLBAssetBuilder withEncodedConfig:] */

long FUN_10b0e7fa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0e7fe0; end: 10b0e8017; -[SCBitmojiGLBAssetBuilder withHashId:] */

long FUN_10b0e7fe0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b0e8018; end: 10b0e805f; -[SCBitmojiGLBAssetBuilder .cxx_destruct] */

void FUN_10b0e8018(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b0e8060; end: 10b0e8187; -[SCBitmojiSceneData initWithCoder:] */

undefined1 * FUN_10b0e8060(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112705bc0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0e8188; end: 10b0e82bf; -[SCBitmojiSceneData initWithSceneId:renderSurface:avatars:props:payload:] */

undefined1 *
FUN_10b0e8188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_112705bc0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0e82c0; end: 10b0e82e3; -[SCBitmojiSceneData copyWithZone:] */

undefined8 FUN_10b0e82c0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0e82e4; end: 10b0e837f; -[SCBitmojiSceneData encodeWithCoder:] */

void FUN_10b0e82e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f5e9d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f5e9f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f5ea18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f5ea38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f5ea58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0e8380; end: 10b0e8417; -[SCBitmojiSceneData hash] */

undefined8 * FUN_10b0e8380(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b0e84e0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b0e84ec;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
              if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_10b0e84ec;
              }
              goto LAB_10b0e84e0;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b0e84ec:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b0e8418; end: 10b0e8507; -[SCBitmojiSceneData isEqual:] */

long FUN_10b0e8418(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0e84e0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0e84ec;
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
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if (lVar3 != *(long *)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_10b0e84ec;
              }
              goto LAB_10b0e84e0;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b0e84ec:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0e8508; end: 10b0e850f; -[SCBitmojiSceneData sceneId] */

undefined8 FUN_10b0e8508(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0e8510; end: 10b0e8517; -[SCBitmojiSceneData renderSurface] */

undefined8 FUN_10b0e8510(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


