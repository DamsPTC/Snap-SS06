/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10603ae3c; end: 10603af57; -[SCProfileEmbeddedMapViewModel isEqual:] */

long FUN_10603ae3c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10603af3c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) == 0) ||
         ((((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
            (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
           (*(char *)(param_1 + 10) != *(char *)(param_3 + 10))) ||
          ((*(char *)(param_1 + 0xb) != *(char *)(param_3 + 0xb) ||
           (2.220446049250313e-16 < ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20))))
          )))) || (2.220446049250313e-16 <
                   ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28)))) ||
       ((lVar3 = *(long *)(param_1 + 0x10), lVar3 != *(long *)(param_3 + 0x10) &&
        (func_0x00010c071ae0(), (int)lVar3 == 0)))) {
      lVar3 = 0;
      goto LAB_10603af3c;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_10603af3c;
    }
  }
  lVar3 = 1;
LAB_10603af3c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10603af58; end: 10603af5f; -[SCProfileEmbeddedMapViewModel requiresLocationPermission] */

undefined1 FUN_10603af58(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10603af60; end: 10603af67; -[SCProfileEmbeddedMapViewModel selectedUserId] */

undefined8 FUN_10603af60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10603af68; end: 10603af6f; -[SCProfileEmbeddedMapViewModel isActiveUser] */

undefined1 FUN_10603af68(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10603af70; end: 10603af77; -[SCProfileEmbeddedMapViewModel hideErrorViewTappableContent] */

undefined1 FUN_10603af70(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10603af78; end: 10603af7f; -[SCProfileEmbeddedMapViewModel profileSessionID] */

undefined8 FUN_10603af78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10603af80; end: 10603af87; -[SCProfileEmbeddedMapViewModel showInferredLocation] */

undefined1 FUN_10603af80(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10603af88; end: 10603af8f; -[SCProfileEmbeddedMapViewModel coordinate] */

undefined1  [16] FUN_10603af88(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x20);
}



/* Entry: 10603af90; end: 10603afbf; -[SCProfileEmbeddedMapViewModel .cxx_destruct] */

void FUN_10603af90(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10603afc0; end: 10603b097; -[SCProfileMapCardBitmojiDataModel initWithUserId:username:bitmojiAvatarId:] */

undefined1 *
FUN_10603afc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ef360;
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



/* Entry: 10603b098; end: 10603b09f; -[SCProfileMapCardBitmojiDataModel userId] */

undefined8 FUN_10603b098(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10603b0a0; end: 10603b0a7; -[SCProfileMapCardBitmojiDataModel username] */

undefined8 FUN_10603b0a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10603b0a8; end: 10603b0af; -[SCProfileMapCardBitmojiDataModel bitmojiAvatarId] */

undefined8 FUN_10603b0a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10603b0b0; end: 10603b0eb; -[SCProfileMapCardBitmojiDataModel .cxx_destruct] */

void FUN_10603b0b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10603b0ec; end: 10603b197; -[SCProfileMapCardViewModel initWithMapCellViewModel:profileCardCellViewModel:] */

undefined1 *
FUN_10603b0ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ef368;
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



/* Entry: 10603b198; end: 10603b1bb; -[SCProfileMapCardViewModel copyWithZone:] */

undefined8 FUN_10603b198(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10603b1bc; end: 10603b22f; -[SCProfileMapCardViewModel hash] */

undefined8 * FUN_10603b1bc(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10603b2b0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10603b2bc;
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
          goto LAB_10603b2bc;
        }
        goto LAB_10603b2b0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10603b2bc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10603b230; end: 10603b2d7; -[SCProfileMapCardViewModel isEqual:] */

long FUN_10603b230(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10603b2b0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10603b2bc;
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
          goto LAB_10603b2bc;
        }
        goto LAB_10603b2b0;
      }
    }
    lVar3 = 0;
  }
LAB_10603b2bc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10603b2d8; end: 10603b2df; -[SCProfileMapCardViewModel mapCellViewModel] */

undefined8 FUN_10603b2d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10603b2e0; end: 10603b2e7; -[SCProfileMapCardViewModel profileCardCellViewModel] */

undefined8 FUN_10603b2e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10603b2e8; end: 10603b317; -[SCProfileMapCardViewModel .cxx_destruct] */

void FUN_10603b2e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10603b318; end: 10603b39f; -[SCProfileMapProfileCardCellViewModel initWithFriendId:cellHeight:] */

undefined1 *
FUN_10603b318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ef370;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10603b3a0; end: 10603b3c3; -[SCProfileMapProfileCardCellViewModel copyWithZone:] */

undefined8 FUN_10603b3a0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10603b3c4; end: 10603b44f; -[SCProfileMapProfileCardCellViewModel hash] */

undefined8 * FUN_10603b3c4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar3 = &uStack_38;
  uStack_38 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10603b4ec:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10603b4f8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      dVar8 = ABS((double)puVar3[2] - (double)param_3[2]);
      dVar7 = ABS((double)puVar3[2] + (double)param_3[2]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        puVar6 = (undefined8 *)puVar3[1];
        if (puVar6 != (undefined8 *)param_3[1]) {
          func_0x00010c071ae0();
          goto LAB_10603b4f8;
        }
        goto LAB_10603b4ec;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10603b4f8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10603b450; end: 10603b513; -[SCProfileMapProfileCardCellViewModel isEqual:] */

long FUN_10603b450(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10603b4ec:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10603b4f8;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 8);
        if (lVar4 != *(long *)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_10603b4f8;
        }
        goto LAB_10603b4ec;
      }
    }
    lVar4 = 0;
  }
LAB_10603b4f8:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10603b514; end: 10603b51b; -[SCProfileMapProfileCardCellViewModel friendId] */

undefined8 FUN_10603b514(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10603b51c; end: 10603b523; -[SCProfileMapProfileCardCellViewModel cellHeight] */

undefined8 FUN_10603b51c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10603b524; end: 10603b52f; -[SCProfileMapProfileCardCellViewModel .cxx_destruct] */

void FUN_10603b524(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10603b530; end: 10603b5bb; -[SCProfileMapDataModel initWithFriendUserId:coordinate:] */

undefined1 *
FUN_10603b530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ef378;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10603b5bc; end: 10603b5df; -[SCProfileMapDataModel copyWithZone:] */

undefined8 FUN_10603b5bc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10603b5e0; end: 10603b68b; -[SCProfileMapDataModel hash] */

undefined8 * FUN_10603b5e0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar4 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_38 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar4 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_30 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_40 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10603b734;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((2.220446049250313e-16 < ABS(*(double *)((long)puVar2 + 0x10) - *(double *)(param_3 + 0x10))
        || (2.220446049250313e-16 <
            ABS(*(double *)((long)puVar2 + 0x18) - *(double *)(param_3 + 0x18)))))) {
      puVar5 = (undefined1 *)0x0;
      goto LAB_10603b734;
    }
    puVar5 = *(undefined1 **)((long)puVar2 + 8);
    if (puVar5 != *(undefined1 **)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10603b734;
    }
  }
  puVar5 = (undefined1 *)0x1;
LAB_10603b734:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 10603b68c; end: 10603b74f; -[SCProfileMapDataModel isEqual:] */

long FUN_10603b68c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10603b734;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((2.220446049250313e-16 < ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10)) ||
        (2.220446049250313e-16 < ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18))))))
    {
      lVar3 = 0;
      goto LAB_10603b734;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10603b734;
    }
  }
  lVar3 = 1;
LAB_10603b734:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10603b750; end: 10603b757; -[SCProfileMapDataModel friendUserId] */

undefined8 FUN_10603b750(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10603b758; end: 10603b75f; -[SCProfileMapDataModel coordinate] */

undefined1  [16] FUN_10603b758(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x10);
}



/* Entry: 10603b760; end: 10603b76b; -[SCProfileMapDataModel .cxx_destruct] */

void FUN_10603b760(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10603b76c; end: 10603b823; -[SCMapBitmojiAvatarGenerator initWithBitmoji3dContentFetcher:] */

undefined1 * FUN_10603b76c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ef380;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSCache_1126b3388;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    func_0x00010c184700(*(undefined8 *)((long)puVar1 + 0x10));
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126c73e8;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10603b824; end: 10603b853; +[SCMapBitmojiAvatarGenerator imageIdentifierForBitmojiAvatarId:bitmojiStickerId:] */

void FUN_10603b824(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db9f38);
  return;
}



/* Entry: 10603b854; end: 10603ba77; +[SCMapBitmojiAvatarGenerator imageIdentifierForBitmojiAvatarId:bitmojiStickerId:stickerDynamicElements:clustered:] */

void FUN_10603b854(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,int param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined1 auStack_260 [8];
  undefined1 auStack_258 [8];
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 auStack_218 [8];
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [16];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bfe7ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_5);
  puVar10 = &uStack_130;
  puVar11 = auStack_f0;
  uVar12 = 0x10;
  lVar1 = param_5;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar14 = *plStack_120;
    do {
      lVar15 = 0;
      puVar6 = param_1;
      do {
        if (*plStack_120 != lVar14) {
          _objc_enumerationMutation(param_5);
        }
        uVar16 = *(ulong *)(lStack_128 + lVar15 * 8);
        uVar2 = uVar16;
        func_0x00010bf89a60();
        param_1 = puVar6;
        if (((param_6 == 0) || ((uVar2 & 1) == 0)) &&
           (uVar2 = uVar16, func_0x00010bf8b680(), puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0,
           uVar2 == 3)) {
          func_0x00010c0ed300();
          func_0x00010c0ed340();
          func_0x00010bfbdf60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c150c20();
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar16);
          param_1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          _objc_release(puVar3);
        }
        lVar15 = lVar15 + 1;
        puVar6 = param_1;
      } while (lVar1 != lVar15);
      puVar10 = &uStack_130;
      puVar11 = auStack_f0;
      uVar12 = 0x10;
      lVar1 = param_5;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  _objc_retain(puVar11);
  _objc_retain(uVar12);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_1e0,*(undefined8 *)(param_3 + 0x18));
  puStack_210 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_208 = 0xc2000000;
  pcStack_200 = FUN_10603bdf4;
  puStack_1f8 = &UNK_1108cc7a8;
  _objc_retain(param_8);
  uStack_1e8 = param_8;
  _objc_retain(param_7);
  ppuVar4 = &puStack_210;
  uStack_1f0 = param_7;
  _objc_retainBlock();
  puVar5 = puVar10;
  func_0x00010c08fa60();
  if (puVar5 == (undefined8 *)0x0) {
    (*(code *)ppuVar4[2])(ppuVar4,0,0);
  }
  else {
    lVar1 = param_3;
    func_0x00010bdd7ee0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      _objc_initWeak(auStack_218,param_3);
      puVar6 = PTR_PTR_1126af5d8;
      _objc_alloc();
      func_0x00010bff6040();
      _CACurrentMediaTime();
      puStack_240 = &uStack_248;
      uStack_248 = 0;
      uStack_238 = 0x3032000000;
      uStack_230 = 0x10603bf30;
      uStack_228 = 0x10603bf40;
      uStack_220 = 0;
      FUN_10603cb60(*(undefined8 *)(param_3 + 0x18),1);
      uVar7 = *(undefined8 *)(param_3 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bfa9f20();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_260,auStack_1e0);
      uStack_250 = uVar9;
      _objc_copyWeak(auStack_258,auStack_218);
      _objc_retain(puVar10);
      _objc_retain(puVar11);
      _objc_retain(ppuVar4);
      uVar9 = uVar8;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = puStack_240[5];
      puStack_240[5] = uVar9;
      _objc_release(uVar13);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(ppuVar4);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_destroyWeak(auStack_258);
      _objc_destroyWeak(auStack_260);
      __Block_object_dispose(&uStack_248,8);
      _objc_release(uStack_220);
      _objc_release(puVar6);
      _objc_destroyWeak(auStack_218);
    }
    else {
      FUN_10603cbd8(*(undefined8 *)(param_3 + 0x18),1);
      (*(code *)ppuVar4[2])(ppuVar4,lVar1,0);
    }
    _objc_release(lVar1);
  }
  _objc_release(ppuVar4);
  _objc_release(uStack_1f0);
  _objc_release(uStack_1e8);
  _objc_destroyWeak(auStack_1e0);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  return;
}



/* Entry: 10603ba78; end: 10603bdf3; -[SCMapBitmojiAvatarGenerator fetchBitmojiImageForBitmojiAvatarId:bitmojiStickerId:stickerDynamicElements:clustered:completionQueue:completion:] */

void FUN_10603ba78(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_initWeak(auStack_80,*(undefined8 *)(param_2 + 0x18));
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10603bdf4;
  puStack_98 = &UNK_1108cc7a8;
  _objc_retain(param_9);
  uStack_88 = param_9;
  _objc_retain(param_8);
  ppuVar1 = &puStack_b0;
  uStack_90 = param_8;
  _objc_retainBlock();
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    (*(code *)ppuVar1[2])(ppuVar1,0,0);
  }
  else {
    lVar2 = param_2;
    func_0x00010bdd7ee0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      _objc_initWeak(auStack_b8,param_2);
      puVar3 = PTR_PTR_1126af5d8;
      _objc_alloc();
      func_0x00010bff6040();
      _CACurrentMediaTime();
      puStack_e0 = &uStack_e8;
      uStack_e8 = 0;
      uStack_d8 = 0x3032000000;
      uStack_d0 = 0x10603bf30;
      uStack_c8 = 0x10603bf40;
      uStack_c0 = 0;
      FUN_10603cb60(*(undefined8 *)(param_2 + 0x18),1);
      uVar4 = *(undefined8 *)(param_2 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bfa9f20();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_100,auStack_80);
      uStack_f0 = param_1;
      _objc_copyWeak(auStack_f8,auStack_b8);
      _objc_retain(param_4);
      _objc_retain(param_5);
      _objc_retain(ppuVar1);
      uVar6 = uVar5;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = puStack_e0[5];
      puStack_e0[5] = uVar6;
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(ppuVar1);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_f8);
      _objc_destroyWeak(auStack_100);
      __Block_object_dispose(&uStack_e8,8);
      _objc_release(uStack_c0);
      _objc_release(puVar3);
      _objc_destroyWeak(auStack_b8);
    }
    else {
      FUN_10603cbd8(*(undefined8 *)(param_2 + 0x18),1);
      (*(code *)ppuVar1[2])(ppuVar1,lVar2,0);
    }
    _objc_release(lVar2);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_90);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10603bdf4; end: 10603bf1b;  */

void FUN_10603bdf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) goto LAB_10603bef4;
  puVar2 = *(undefined **)(param_1 + 0x20);
  if (puVar2 == (undefined *)0x0) {
    pcVar1 = *(code **)(lVar3 + 0x10);
LAB_10603be6c:
    (*pcVar1)(lVar3,param_2,param_3);
  }
  else {
    if (puVar2 == PTR___dispatch_main_q_11034be20) {
      puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
      func_0x00010c077480();
      if (((ulong)puVar2 & 1) != 0) {
        lVar3 = *(long *)(param_1 + 0x28);
        pcVar1 = *(code **)(lVar3 + 0x10);
        goto LAB_10603be6c;
      }
      puVar2 = *(undefined **)(param_1 + 0x20);
      lVar3 = *(long *)(param_1 + 0x28);
    }
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10603bf1c;
    puStack_60 = &UNK_11084a9e8;
    _objc_retain(lVar3);
    lStack_48 = lVar3;
    _objc_retain(param_2);
    uStack_58 = param_2;
    _objc_retain(param_3);
    uStack_50 = param_3;
    func_0x00010007380c(puVar2,&puStack_78);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_release(lStack_48);
  }
LAB_10603bef4:
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10603bf1c; end: 10603bf47;  */

void FUN_10603bf1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010603bf2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10603bf48; end: 10603c143;  */

void FUN_10603bf48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  func_0x00010bf86d40(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  _objc_release(uVar1);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  uStack_78 = 0x10603bf30;
  uStack_70 = 0x10603bf40;
  uStack_68 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  uStack_a8 = 0x10603bf30;
  uStack_a0 = 0x10603bf40;
  uStack_98 = 0;
  _objc_copyWeak(auStack_d8,param_1 + 0x40);
  uStack_c8 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_d0,param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  func_0x00010c0c0800(param_2);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),puStack_88[5],puStack_b8[5]);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_d8);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_2);
  return;
}



/* Entry: 10603c144; end: 10603c1f3;  */

void FUN_10603c144(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_2 + 0x38;
  _objc_loadWeakRetained();
  _CACurrentMediaTime();
  if (lVar1 != 0) {
    FUN_10603cc50(lVar1,(long)((param_1 - *(double *)(param_2 + 0x48)) * 1000.0));
  }
  _objc_release(lVar1);
  lVar1 = *(long *)(*(long *)(param_2 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  param_2 = param_2 + 0x40;
  _objc_loadWeakRetained(param_2);
  func_0x00010bdd7620();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10603c1f4; end: 10603c373;  */

void FUN_10603c1f4(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  _objc_copyWeak(param_1 + 0x38,param_2 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x40,param_2 + 0x40);
  return;
}



/* Entry: 10603c374; end: 10603c4cb; -[SCMapBitmojiAvatarGenerator prefetchBitmojiImageForBitmojiAvatarId:bitmojiStickerId:completionQueue:completion:] */

void FUN_10603c374(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar1 = &puStack_80;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10603c4cc;
  puStack_68 = &UNK_11084aaa8;
  uStack_60 = param_5;
  uStack_58 = param_6;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retainBlock();
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  else {
    lVar2 = param_1;
    func_0x00010bdd7ee0(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      func_0x00010be76ee0(param_1,param_2,param_3,param_4,ppuVar1);
    }
    else {
      (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
    }
    _objc_release(lVar2);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_60);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10603c4cc; end: 10603c59f;  */

void FUN_10603c4cc(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    puVar2 = *(undefined **)(param_1 + 0x20);
    if (puVar2 == (undefined *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x10);
LAB_10603c528:
                    /* WARNING: Could not recover jumptable at 0x00010603c538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(lVar1);
      return;
    }
    if (puVar2 == PTR___dispatch_main_q_11034be20) {
      puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
      func_0x00010c077480();
      if (((ulong)puVar2 & 1) != 0) {
        lVar1 = *(long *)(param_1 + 0x28);
        UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x10);
        goto LAB_10603c528;
      }
      puVar2 = *(undefined **)(param_1 + 0x20);
      lVar1 = *(long *)(param_1 + 0x28);
    }
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10603c5a0;
    puStack_40 = &UNK_110849530;
    _objc_retain(lVar1);
    lStack_38 = lVar1;
    func_0x00010007380c(puVar2,&puStack_58);
    _objc_release(lStack_38);
  }
  return;
}



/* Entry: 10603c5a0; end: 10603c5ab;  */

void FUN_10603c5a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010603c5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10603c5ac; end: 10603c663; -[SCMapBitmojiAvatarGenerator clearCache] */

void FUN_10603c5ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10603c664;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010007380c(uVar1,&puStack_50);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10603c664; end: 10603c697;  */

void FUN_10603c664(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10603c698; end: 10603c727; -[SCMapBitmojiAvatarGenerator _cachedBitmojiImageForBitmojiAvatarId:bitmojiStickerId:] */

void FUN_10603c698(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bfe7ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0dff20(uVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10603c728; end: 10603c7d3; -[SCMapBitmojiAvatarGenerator _cacheBitmojiImage:forBitmojiAvatarId:bitmojiStickerId:] */

void FUN_10603c728(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_3 != 0) && (lVar1 = param_4, func_0x00010c08fa60(), lVar1 != 0)) {
    lVar1 = param_1;
    _objc_opt_class(param_1);
    func_0x00010bfe7ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x10),param_2,param_3,lVar1);
    _objc_release(lVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10603c7d4; end: 10603c973; -[SCMapBitmojiAvatarGenerator _prefetchActionmojiForAvatarId:sceneId:completion:] */

void FUN_10603c7d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126af5d8;
  _objc_alloc(PTR_PTR_1126af5d8);
  func_0x00010bff6040();
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  uStack_58 = 0x10603bf30;
  uStack_50 = 0x10603bf40;
  uStack_48 = 0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa9f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  uVar4 = uVar3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = puStack_68[5];
  puStack_68[5] = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_5);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10603c974; end: 10603c9bb;  */

void FUN_10603c974(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf86d40(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010603c9b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10603c9bc; end: 10603ca37; -[SCMapBitmojiAvatarGenerator .cxx_destruct] */

void FUN_10603c9bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10603ca38; end: 10603cab3; -[SCMapBitmojiServiceProvider _bitmojiAvatarGenerator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10603ca38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c73f8;
  _objc_alloc(PTR_PTR_1126c73f8);
  param_1 = param_1 + _DAT_11273d748;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf4c500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7a60(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10603cab4; end: 10603caeb; -[SCMapBitmojiServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10603cab4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273d748);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273d74c);
  return;
}



/* Entry: 10603caec; end: 10603cb5f; -[SCGrapheneMapBitmojiImageMetric2 init] */

undefined1 * FUN_10603caec(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ef388;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10603cb60; end: 10603cbd7;  */

void FUN_10603cb60(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1109090f0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 10603cbd8; end: 10603cc4f;  */

void FUN_10603cbd8(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110909140,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 10603cc50; end: 10603ccc7;  */

void FUN_10603cc50(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110909190,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 10603ccc8; end: 10603ccd3; -[SCFeatureSettingsService isPlusMyProfileUpsellCardImpressionCountAvailable] */

void FUN_10603ccc8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e39718);
  return;
}



/* Entry: 10603ccd4; end: 10603ccdf; -[SCFeatureSettingsService plusMyProfileUpsellCardImpressionCountServerParam] */

undefined ** FUN_10603ccd4(void)

{
  return &PTR____CFConstantStringClassReference_110e39718;
}



/* Entry: 10603cce0; end: 10603ccef; -[SCFeatureSettingsService setPlusMyProfileUpsellCardImpressionCount:] */

void FUN_10603cce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e39718,param_3);
  return;
}



/* Entry: 10603ccf0; end: 10603ccf7; -[SCFeatureSettingsService plus_my_profile_upsell_card_impression_count_client_value:] */

void FUN_10603ccf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 10603ccf8; end: 10603ccff; -[SCFeatureSettingsService plus_my_profile_upsell_card_impression_count_server_value:] */

void FUN_10603ccf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 10603cd00; end: 10603cd0f; -[SCFeatureSettingsService plusMyProfileUpsellCardImpressionCount] */

void FUN_10603cd00(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e39718,0);
  return;
}



/* Entry: 10603cd10; end: 10603d0b3; -[SCPlusFriendProfileSectionComposerContextProvider initWithValdiRuntimeProvider:pinBestFriendService:plusServices:plusSyncServices:circumstanceEngine:performerProvider:valdiBlizzardLoggingServices:subscribeScopeExposer:friendSnapchatter:profileSessionId:plusUpsellImpression:billboardStringsServices:deepLinkHandlingServices:grpcClientFactory:composerNetworkingBridgeServices:taskManagementServices:] */

undefined8 *
FUN_10603cd10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  _objc_retain(param_18);
  puStack_70 = PTR_PTR_1126ef390;
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
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
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
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
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
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_18);
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



/* Entry: 10603d0b4; end: 10603d2b3; -[SCPlusFriendProfileSectionComposerContextProvider setUp] */

void FUN_10603d0b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c260800(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10603d2b4;
  puStack_78 = &UNK_1108dd0a0;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar4 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c0fc3a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_98,auStack_68);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_98);
  }
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 10603d2b4; end: 10603d343;  */

void FUN_10603d2b4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea8200();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10603d344; end: 10603d393; -[SCPlusFriendProfileSectionComposerContextProvider tearDown] */

void FUN_10603d344(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x88));
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10603d394; end: 10603d4f7; -[SCPlusFriendProfileSectionComposerContextProvider valdiContext] */

void FUN_10603d394(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar1 = *(long *)(param_1 + 0xa0);
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x58);
    _objc_retain(lVar1);
    if (lVar1 == 0) goto LAB_10603d3c8;
  }
  else {
    _objc_release();
LAB_10603d3c8:
    lVar2 = *(long *)(param_1 + 0xa8);
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar1 = 0;
    uVar9 = 0;
    if (lVar2 == 0) goto LAB_10603d4dc;
  }
  lVar2 = param_1;
  func_0x00010bdf5680(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(ulong *)(param_1 + 0x90);
  if ((uVar3 == 0) || (func_0x00010bf6f140(), (uVar3 & 1) != 0)) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar4;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c7400;
    _objc_opt_class(PTR_PTR_1126c7400);
    lVar6 = param_1;
    func_0x00010bdec340(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar9;
    func_0x00010bf55740(uVar9,param_2,puVar5,lVar2,lVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = uVar7;
    _objc_release(uVar8);
    _objc_release(lVar6);
    _objc_release(uVar9);
    _objc_release(uVar4);
  }
  else {
    func_0x00010c2226c0(*(undefined8 *)(param_1 + 0x90),param_2,lVar2);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x90);
  _objc_retain(uVar9);
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_10603d4dc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return;
}



/* Entry: 10603d4f8; end: 10603d5b7; -[SCPlusFriendProfileSectionComposerContextProvider _setSubscriptionInfo:] */

void FUN_10603d4f8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0x98);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  if (uVar3 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar3);
    }
    else {
      uVar1 = uVar3;
      func_0x00010c071ae0(uVar3,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar3);
      if ((uVar1 & 1) != 0) goto LAB_10603d5a4;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    *(ulong *)(param_1 + 0x98) = param_3;
    _objc_release(uVar2);
    func_0x00010be4cc60(param_1,param_2,param_3);
    func_0x00010be64820(param_1);
  }
LAB_10603d5a4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10603d5b8; end: 10603d66b; -[SCPlusFriendProfileSectionComposerContextProvider _setHasInitialPinnedBestFriend:] */

void FUN_10603d5b8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0xa0);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  if (uVar3 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar3);
    }
    else {
      uVar1 = uVar3;
      func_0x00010c071ae0(uVar3,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar3);
      if ((uVar1 & 1) != 0) goto LAB_10603d658;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    *(ulong *)(param_1 + 0xa0) = param_3;
    _objc_release(uVar2);
    func_0x00010be64820(param_1);
  }
LAB_10603d658:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10603d66c; end: 10603d71f; -[SCPlusFriendProfileSectionComposerContextProvider _setCampaign:] */

void FUN_10603d66c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0xa8);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  if (uVar3 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar3);
    }
    else {
      uVar1 = uVar3;
      func_0x00010c071ae0(uVar3,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar3);
      if ((uVar1 & 1) != 0) goto LAB_10603d70c;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0xa8);
    *(ulong *)(param_1 + 0xa8) = param_3;
    _objc_release(uVar2);
    func_0x00010be64820(param_1);
  }
LAB_10603d70c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10603d720; end: 10603d77f; -[SCPlusFriendProfileSectionComposerContextProvider _notifyDidUpdateComposerContextIfNeeded] */

void FUN_10603d720(long param_1)

{
  if (((*(long *)(param_1 + 0x98) != 0) && (*(long *)(param_1 + 0xa8) != 0)) &&
     ((*(long *)(param_1 + 0x58) == 0 || (*(long *)(param_1 + 0xa0) != 0)))) {
    param_1 = param_1 + 0xb0;
    _objc_loadWeakRetained(param_1);
    func_0x00010c295320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10603d780; end: 10603dadb; -[SCPlusFriendProfileSectionComposerContextProvider _loadCampaignForSubscriptionInfo:] */

void FUN_10603d780(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c2665c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfa5720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar2 = lVar3;
  func_0x000106c6c0c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar9 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea28c0(param_1);
  }
  else {
    puVar9 = PTR_PTR_1126b34f8;
    _objc_alloc();
    func_0x00010bff7720();
    puVar4 = PTR_PTR_1126c7408;
    _objc_alloc(PTR_PTR_1126c7408);
    uVar12 = param_3;
    func_0x000106c6a5fc(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c2923e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03acc0(puVar4);
    _objc_release(uVar5);
    _objc_release(uVar12);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf1cf00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c171b20(puVar4);
    _objc_release(uVar12);
    _objc_release(uVar5);
    lVar6 = *(long *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar6;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010c085ce0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar6);
    if (lVar7 == 0) {
      puVar10 = PTR_PTR_1126ae750;
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea28c0(param_1);
    }
    else {
      puStack_68 = (undefined *)0x0;
      puVar8 = PTR_PTR_1126c7410;
      func_0x00010c13a9a0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puStack_68;
      _objc_retain(puStack_68);
      if (puVar8 == (undefined *)0x0) {
        puVar11 = PTR_PTR_1126ae750;
        func_0x00010c0db140(PTR_PTR_1126ae750);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bea28c0(param_1);
      }
      else {
        puVar11 = puVar8;
        func_0x00010c13a940(puVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_initWeak(auStack_70,param_1);
        uVar12 = *(undefined8 *)(param_1 + 0xb8);
        _objc_retain(uVar12);
        _objc_copyWeak(auStack_78,auStack_70);
        func_0x00010c0e3040(puVar11);
        _objc_destroyWeak(auStack_78);
        _objc_release(uVar12);
        _objc_destroyWeak(auStack_70);
      }
      _objc_release(puVar11);
      _objc_release(puVar8);
    }
    _objc_release(puVar10);
    _objc_release(lVar7);
    _objc_release(puVar4);
  }
  _objc_release(puVar9);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 10603dadc; end: 10603dbb3;  */

void FUN_10603dadc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10603dbb4; end: 10603dc37;  */

void FUN_10603dbb4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  puVar3 = PTR_PTR_1126ae750;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf63640(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec800(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea28c0(lVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10603dc38; end: 10603dd0f; -[SCPlusFriendProfileSectionComposerContextProvider _createValdiViewModel] */

void FUN_10603dc38(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x000106c6a5fc(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c7418;
  _objc_alloc(PTR_PTR_1126c7418);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c2923e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04f0a0(puVar2,param_2,uVar1,uVar3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf1f440(uVar3,param_2,&PTR____CFConstantStringClassReference_110e39738,0,0);
  if ((int)uVar3 != 0) {
    func_0x00010c1e93a0(puVar2,param_2,PTR____kCFBooleanTrue_11034ab68);
  }
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c0ec5e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c177820(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10603dd10; end: 10603e0d7; -[SCPlusFriendProfileSectionComposerContextProvider _createComponentContext] */

void FUN_10603dd10(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined1 auStack_138 [8];
  long lStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000100a15258(uVar1,*(undefined8 *)(param_1 + 0x70));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b3510;
  _objc_alloc(PTR_PTR_1126b3510);
  func_0x00010c04fdc0();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  lVar5 = *(long *)(param_1 + 0x58);
  if (lVar5 == 0) {
    lVar5 = -1;
  }
  else {
    func_0x00010bfa1820();
  }
  puVar6 = PTR_PTR_1126b1da8;
  _objc_alloc();
  func_0x00010c04abe0();
  puVar7 = puVar6;
  func_0x000106c68d1c();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c7420;
  _objc_alloc(PTR_PTR_1126c7420);
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10603e0d8;
  puStack_90 = &UNK_1108434b0;
  _objc_copyWeak(auStack_88,auStack_80);
  puStack_d0 = puVar9;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_10603e200;
  puStack_b8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_b0,auStack_80);
  puStack_f8 = puVar9;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x10603e298;
  puStack_e0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_d8,auStack_80);
  puStack_128 = puVar9;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_10603e330;
  puStack_110 = &UNK_110903380;
  puStack_108 = puVar6;
  _objc_copyWeak(auStack_100,auStack_80);
  func_0x00010c021b60(puVar8);
  _objc_copyWeak(auStack_138,auStack_80);
  lStack_130 = lVar5;
  func_0x00010c1d2680(puVar8);
  puVar9 = PTR_PTR_1126b34f0;
  _objc_alloc(PTR_PTR_1126b34f0);
  func_0x00010c009b60();
  func_0x00010c18abe0(puVar8);
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21d8a0(puVar8);
  _objc_release(puVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c0f98e0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar10;
  func_0x000106c77d90();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f5c0(puVar8);
  _objc_release(uVar3);
  _objc_release(uVar10);
  _objc_destroyWeak(auStack_138);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10603e0d8; end: 10603e1ff;  */

void FUN_10603e0d8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    puVar3 = PTR_PTR_1126afdb8;
    _objc_alloc(PTR_PTR_1126afdb8);
    func_0x00010bff0880();
    func_0x00010c01b460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e397d8,puVar3);
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)(lVar1 + 0x18);
    func_0x00010c28ee80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfb86c0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e4a00();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be25080();
    _objc_release(param_1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10603e200; end: 10603e32f;  */

void FUN_10603e200(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  puVar2 = PTR_PTR_1126afdb8;
  _objc_alloc(PTR_PTR_1126afdb8);
  func_0x00010bff0880();
  func_0x00010c01b460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e397f8,puVar2);
  _objc_release(puVar2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be25080();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10603e330; end: 10603e4cf;  */

void FUN_10603e330(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c7428;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c027800();
  _objc_release(param_2);
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  puVar3 = PTR_PTR_1126afdb8;
  _objc_alloc(PTR_PTR_1126afdb8);
  func_0x00010bff0880();
  func_0x00010c01b460(puVar2);
  _objc_release(puVar3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be25080();
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10603e4d0; end: 10603e557; -[SCPlusFriendProfileSectionComposerContextProvider _handleAction:] */

void FUN_10603e4d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_40 = FUN_10603e558;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10603e558; end: 10603e567;  */

void FUN_10603e558(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xc0),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,*(long *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),0);
  return;
}



/* Entry: 10603e568; end: 10603e56f; -[SCPlusFriendProfileSectionComposerContextProvider presentEmailRequiredDialogIfNeeded] */

undefined8 FUN_10603e568(void)

{
  return 0;
}



/* Entry: 10603e570; end: 10603e587; -[SCPlusFriendProfileSectionComposerContextProvider contextProviderDelegate] */

void FUN_10603e570(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10603e588; end: 10603e593; -[SCPlusFriendProfileSectionComposerContextProvider setContextProviderDelegate:] */

void FUN_10603e588(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xb0,param_3);
  return;
}



/* Entry: 10603e594; end: 10603e59b; -[SCPlusFriendProfileSectionComposerContextProvider updateQueuePerformer] */

undefined8 FUN_10603e594(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 10603e59c; end: 10603e5cb; -[SCPlusFriendProfileSectionComposerContextProvider setUpdateQueuePerformer:] */

void FUN_10603e59c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10603e5cc; end: 10603e5d3; -[SCPlusFriendProfileSectionComposerContextProvider actionHandler] */

undefined8 FUN_10603e5cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 10603e5d4; end: 10603e603; -[SCPlusFriendProfileSectionComposerContextProvider setActionHandler:] */

void FUN_10603e5d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10603e604; end: 10603e737; -[SCPlusFriendProfileSectionComposerContextProvider .cxx_destruct] */

void FUN_10603e604(long param_1)

{
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_destroyWeak(param_1 + 0xb0);
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



/* Entry: 10603e738; end: 10603e97b; -[SCPlusMyProfileSectionActionHandler initWithSubscribeScopeExposer:subscribeScopeServices:managementScopeExposer:pinBestFriendService:sendFriendBuddyPassScopeExposer:friendSnapchatter:profileSessionId:isFriendProfile:featureType:] */

undefined8 *
FUN_10603e738(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_a0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126ef398;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    *(undefined1 *)(puVar1 + 8) = param_10;
    puVar1[9] = param_12;
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10603e97c;
    puStack_88 = &UNK_1108606f8;
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x000106c73368();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = ppuVar4;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10603e97c; end: 10603e9c3;  */

void FUN_10603e97c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1 + 0x58;
    _objc_loadWeakRetained(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10603e9c4; end: 10603ed3f; -[SCPlusMyProfileSectionActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_10603e9c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar4 == 0) {
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar4 != 0) {
      func_0x00010be47b60(param_1);
      goto LAB_10603ed14;
    }
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar4 != 0) {
      func_0x00010be47ea0(param_1);
      goto LAB_10603ed14;
    }
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar4 == 0) {
      param_1 = 0;
      goto LAB_10603ed14;
    }
    uVar4 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126afdb8;
    _objc_opt_class(PTR_PTR_1126afdb8);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar1 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    uVar4 = uVar1;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126c7428;
    _objc_opt_class(PTR_PTR_1126c7428);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar1 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    func_0x00010be483e0(param_1);
  }
  else {
    uVar4 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126afdb8;
    _objc_opt_class(PTR_PTR_1126afdb8);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar1 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    uVar4 = uVar1;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar1 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    if (uVar1 == 0) {
      uVar5 = 0;
LAB_10603ece0:
      uVar4 = 0;
    }
    else {
      uVar5 = uVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar5 != 0) {
        uVar5 = uVar4;
        func_0x00010c0e00e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        _objc_release(uVar5);
      }
      uVar5 = uVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar5 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar4;
        func_0x00010c0e00e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
      }
      uVar3 = uVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar3 == 0) goto LAB_10603ece0;
      func_0x00010c0e00e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010be47e60(param_1);
    _objc_release(uVar4);
    _objc_release(uVar5);
  }
  _objc_release(uVar1);
LAB_10603ed14:
  _objc_release(param_4);
  return param_1;
}



/* Entry: 10603ed40; end: 10603ed87; -[SCPlusMyProfileSectionActionHandler plusManagementDidDismiss] */

void FUN_10603ed40(long param_1)

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



/* Entry: 10603ed88; end: 10603edcf; -[SCPlusMyProfileSectionActionHandler plusSubscribeDidDismiss] */

void FUN_10603ed88(long param_1)

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



/* Entry: 10603edd0; end: 10603f007; -[SCPlusMyProfileSectionActionHandler _launchOnboardingWithFeatureType:buddyPass:localExperienceType:] */

undefined8
FUN_10603edd0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc();
  lVar2 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010be5aac0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b5af8;
  if (param_4 == 0) {
    if ((param_5 == 0) ||
       (lVar7 = param_5,
       func_0x00010c071f40(param_5,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c43a8),
       (int)lVar7 == 0)) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = PTR_PTR_1126b5af8;
      func_0x00010c1309a0(PTR_PTR_1126b5af8);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    lVar7 = param_4;
    func_0x00010bfe5da0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_4;
    func_0x00010c15df40(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_4;
    func_0x00010c122360(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf5a620(param_4);
    func_0x00010c0df720(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf9cb80(param_4);
    func_0x00010c0df720(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf21c20(puVar9,param_2,lVar7,lVar3,lVar4,puVar5,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar7);
  }
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf23e60(uVar8,param_2,puVar1,lVar2,param_1,0,puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,uVar8);
  _objc_release(uVar8);
  _objc_release(puVar9);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return 1;
}



/* Entry: 10603f008; end: 10603f0c3; -[SCPlusMyProfileSectionActionHandler _launchManagement] */

undefined8 FUN_10603f008(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar2 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010be5aac0(param_1,param_2,*(undefined8 *)(param_1 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b3470;
  _objc_alloc(PTR_PTR_1126b3470);
  func_0x00010c056e40();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  return 1;
}


