/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104e411b8; end: 104e411db; -[SCSpotlightManagementProfileSimpleButtonCellViewModel copyWithZone:] */

undefined8 FUN_104e411b8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104e411dc; end: 104e41267; -[SCSpotlightManagementProfileSimpleButtonCellViewModel hash] */

undefined8 * FUN_104e411dc(long param_1,undefined8 param_2,undefined8 *param_3)

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
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_104e41318:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_104e41324;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071c60(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071c60(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_104e41324;
            }
            goto LAB_104e41318;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_104e41324:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 104e41268; end: 104e4133f; -[SCSpotlightManagementProfileSimpleButtonCellViewModel isEqual:] */

long FUN_104e41268(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104e41318:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104e41324;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071c60(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071c60(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_104e41324;
            }
            goto LAB_104e41318;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_104e41324:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104e41340; end: 104e41347; -[SCSpotlightManagementProfileSimpleButtonCellViewModel titleText] */

undefined8 FUN_104e41340(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104e41348; end: 104e4134f; -[SCSpotlightManagementProfileSimpleButtonCellViewModel customBackgroundColor] */

undefined8 FUN_104e41348(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104e41350; end: 104e41357; -[SCSpotlightManagementProfileSimpleButtonCellViewModel customForegroundColor] */

undefined8 FUN_104e41350(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104e41358; end: 104e4135f; -[SCSpotlightManagementProfileSimpleButtonCellViewModel actionModel] */

undefined8 FUN_104e41358(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104e41360; end: 104e413a7; -[SCSpotlightManagementProfileSimpleButtonCellViewModel .cxx_destruct] */

void FUN_104e41360(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e413a8; end: 104e414d3; -[SCSpotlightManagementProfileSectionSnapCellViewModel initWithThumbnailInfo:viewCountText:isUploading:hasFailed:isMapSnap:tapActionModel:longPressActionModel:] */

undefined1 *
FUN_104e413a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e4770;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    *(undefined1 *)((long)puVar1 + 10) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e414d4; end: 104e414f7; -[SCSpotlightManagementProfileSectionSnapCellViewModel copyWithZone:] */

undefined8 FUN_104e414d4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104e414f8; end: 104e41593; -[SCSpotlightManagementProfileSectionSnapCellViewModel hash] */

undefined8 * FUN_104e414f8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uStack_50 = (ulong)*(byte *)(param_1 + 8);
  uStack_48 = (ulong)*(byte *)(param_1 + 9);
  uStack_40 = (ulong)*(byte *)(param_1 + 10);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_104e41674:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_104e41680;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9]))
        && (*(char *)((long)puVar3 + 10) == param_3[10])))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
            if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_104e41680;
            }
            goto LAB_104e41674;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_104e41680:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 104e41594; end: 104e4169b; -[SCSpotlightManagementProfileSectionSnapCellViewModel isEqual:] */

long FUN_104e41594(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104e41674:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104e41680;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
        (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_104e41680;
            }
            goto LAB_104e41674;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_104e41680:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104e4169c; end: 104e416a3; -[SCSpotlightManagementProfileSectionSnapCellViewModel thumbnailInfo] */

undefined8 FUN_104e4169c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104e416a4; end: 104e416ab; -[SCSpotlightManagementProfileSectionSnapCellViewModel viewCountText] */

undefined8 FUN_104e416a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104e416ac; end: 104e416b3; -[SCSpotlightManagementProfileSectionSnapCellViewModel isUploading] */

undefined1 FUN_104e416ac(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104e416b4; end: 104e416bb; -[SCSpotlightManagementProfileSectionSnapCellViewModel hasFailed] */

undefined1 FUN_104e416b4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 104e416bc; end: 104e416c3; -[SCSpotlightManagementProfileSectionSnapCellViewModel isMapSnap] */

undefined1 FUN_104e416bc(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 104e416c4; end: 104e416cb; -[SCSpotlightManagementProfileSectionSnapCellViewModel tapActionModel] */

undefined8 FUN_104e416c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104e416cc; end: 104e416d3; -[SCSpotlightManagementProfileSectionSnapCellViewModel longPressActionModel] */

undefined8 FUN_104e416cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104e416d4; end: 104e4171b; -[SCSpotlightManagementProfileSectionSnapCellViewModel .cxx_destruct] */

void FUN_104e416d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104e4171c; end: 104e41813; -[SCFavouritesManagementProfileSectionSnapCellViewModel initWithThumbnailModel:tapActionModel:longPressActionModel:boostTimestamp:isRecommended:] */

undefined1 *
FUN_104e4171c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126e4778;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
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
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
    *(undefined1 *)((long)puVar1 + 8) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 104e41814; end: 104e41837; -[SCFavouritesManagementProfileSectionSnapCellViewModel copyWithZone:] */

undefined8 FUN_104e41814(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104e41838; end: 104e418e3; -[SCFavouritesManagementProfileSectionSnapCellViewModel hash] */

undefined8 * FUN_104e41838(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_40 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_104e419c0:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_104e419cc;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) && (*(char *)((long)puVar4 + 8) == param_3[8])) {
      dVar10 = ABS(*(double *)((long)puVar4 + 0x28) - *(double *)(param_3 + 0x28));
      dVar9 = ABS(*(double *)((long)puVar4 + 0x28) + *(double *)(param_3 + 0x28)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (((bVar1) &&
          ((lVar6 = *(long *)((long)puVar4 + 0x10), lVar6 == *(long *)(param_3 + 0x10) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
         ((lVar6 = *(long *)((long)puVar4 + 0x18), lVar6 == *(long *)(param_3 + 0x18) ||
          (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = *(undefined1 **)((long)puVar4 + 0x20);
        if (puVar8 != *(undefined1 **)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_104e419cc;
        }
        goto LAB_104e419c0;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_104e419cc:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 104e418e4; end: 104e419e7; -[SCFavouritesManagementProfileSectionSnapCellViewModel isEqual:] */

long FUN_104e418e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104e419c0:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104e419cc;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      dVar6 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
      dVar5 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (((bVar1) &&
          ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x20);
        if (lVar4 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_104e419cc;
        }
        goto LAB_104e419c0;
      }
    }
    lVar4 = 0;
  }
LAB_104e419cc:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 104e419e8; end: 104e419ef; -[SCFavouritesManagementProfileSectionSnapCellViewModel thumbnailModel] */

undefined8 FUN_104e419e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104e419f0; end: 104e419f7; -[SCFavouritesManagementProfileSectionSnapCellViewModel tapActionModel] */

undefined8 FUN_104e419f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104e419f8; end: 104e419ff; -[SCFavouritesManagementProfileSectionSnapCellViewModel longPressActionModel] */

undefined8 FUN_104e419f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104e41a00; end: 104e41a07; -[SCFavouritesManagementProfileSectionSnapCellViewModel boostTimestamp] */

undefined8 FUN_104e41a00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104e41a08; end: 104e41a0f; -[SCFavouritesManagementProfileSectionSnapCellViewModel isRecommended] */

undefined1 FUN_104e41a08(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104e41a10; end: 104e41a4b; -[SCFavouritesManagementProfileSectionSnapCellViewModel .cxx_destruct] */

void FUN_104e41a10(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104e41a4c; end: 104e41ae3; +[SCFavouritesManagementProfileSectionSnapThumbnailModel boltFirstFrameWithContentObject:contentObjectKey:] */

void FUN_104e41a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b1120;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e41ae4; end: 104e41b4f; +[SCFavouritesManagementProfileSectionSnapThumbnailModel cameoTileWithCameoTile:] */

void FUN_104e41ae4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1120;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e41b50; end: 104e41bb3; +[SCFavouritesManagementProfileSectionSnapThumbnailModel networkImageWithNetworkImage:] */

void FUN_104e41b50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1120;
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



/* Entry: 104e41bb4; end: 104e41da3; -[SCFavouritesManagementProfileSectionSnapThumbnailModel initWithCoder:] */

undefined8 * FUN_104e41bb4(undefined8 param_1,undefined8 param_2,ulong param_3)

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
  puStack_60 = PTR_PTR_1126e4780;
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
      if ((int)uVar2 == 0) {
        uVar2 = unaff_x21;
        func_0x00010c0720c0();
        if ((uVar2 & 1) == 0) goto LAB_104e41d30;
        uVar5 = 2;
        lVar6 = 0x28;
      }
      else {
        uVar2 = param_3;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = puVar1[3];
        puVar1[3] = uVar2;
        _objc_release(uVar5);
        uVar5 = 1;
        lVar6 = 0x20;
      }
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
LAB_104e41d30:
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



/* Entry: 104e41da4; end: 104e41dc7; -[SCFavouritesManagementProfileSectionSnapThumbnailModel copyWithZone:] */

undefined8 FUN_104e41da4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104e41dc8; end: 104e41e8b; -[SCFavouritesManagementProfileSectionSnapThumbnailModel encodeWithCoder:] */

void FUN_104e41dc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110db7038;
    lVar2 = 0x10;
    ppuVar1 = &PTR____CFConstantStringClassReference_110db7058;
  }
  else if (lVar2 == 2) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110db70d8;
    lVar2 = 0x28;
    ppuVar1 = &PTR____CFConstantStringClassReference_110db70f8;
  }
  else {
    if (lVar2 != 1) goto LAB_104e41e78;
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                        &PTR____CFConstantStringClassReference_110db7098);
    ppuVar3 = &PTR____CFConstantStringClassReference_110db7078;
    lVar2 = 0x20;
    ppuVar1 = &PTR____CFConstantStringClassReference_110db70b8;
  }
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + lVar2),ppuVar1);
  func_0x00010c14cb00(param_3,param_2,ppuVar3,&PTR____CFConstantStringClassReference_110db7018);
LAB_104e41e78:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e41e8c; end: 104e41f1b; -[SCFavouritesManagementProfileSectionSnapThumbnailModel hash] */

void FUN_104e41e8c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_80;
  undefined *puStack_78;
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
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126e4780;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e41f1c; end: 104e41f5f; -[SCFavouritesManagementProfileSectionSnapThumbnailModel internalInit] */

void FUN_104e41f1c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e4780;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e41f60; end: 104e42047; -[SCFavouritesManagementProfileSectionSnapThumbnailModel isEqual:] */

long FUN_104e41f60(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104e42020:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104e4202c;
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
              goto LAB_104e4202c;
            }
            goto LAB_104e42020;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_104e4202c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104e42048; end: 104e420fb; -[SCFavouritesManagementProfileSectionSnapThumbnailModel matchNetworkImage:boltFirstFrame:cameoTile:] */

void FUN_104e42048(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 2) {
    if (param_5 == 0) goto LAB_104e420d8;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  else {
    if (lVar2 == 1) {
      if (param_4 != 0) {
        (**(code **)(param_4 + 0x10))
                  (param_4,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
      }
      goto LAB_104e420d8;
    }
    if ((lVar2 != 0) || (param_3 == 0)) goto LAB_104e420d8;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_3 + 0x10);
    lVar2 = param_3;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_104e420d8:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e420fc; end: 104e42143; -[SCFavouritesManagementProfileSectionSnapThumbnailModel .cxx_destruct] */

void FUN_104e420fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104e42144; end: 104e421eb;  */

void FUN_104e42144(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db7178;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db7178,
                      &PTR____CFConstantStringClassReference_110db7198,0);
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



/* Entry: 104e421ec; end: 104e4242f; -[SCSpotlightRepliesSettingPageEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e421ec(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  
  lVar1 = param_1 + _DAT_1127144f0;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_1127144f4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c24be40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_initWeak(auStack_68,param_1);
  puVar4 = PTR_PTR_1126b11b0;
  _objc_alloc_init(PTR_PTR_1126b11b0);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104e42430;
  puStack_78 = &UNK_110846710;
  _objc_retain(lVar2);
  lStack_70 = lVar2;
  func_0x00010c1f5a20(puVar4);
  _objc_copyWeak(auStack_98,auStack_68);
  func_0x00010c1d3a00(puVar4);
  puVar5 = PTR_PTR_1126b11b8;
  _objc_alloc(PTR_PTR_1126b11b8);
  lVar6 = (long)_DAT_1127144f8;
  lVar1 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf13840();
  func_0x00010c05fcc0(puVar5);
  _objc_release(lVar1);
  param_1 = param_1 + lVar6;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_98);
  _objc_release(lStack_70);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar2);
  _objc_release(lVar3);
  return;
}



/* Entry: 104e42430; end: 104e42473;  */

void FUN_104e42430(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a2e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e42474; end: 104e4249f;  */

void FUN_104e42474(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfb700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e424a0; end: 104e424db; -[SCSpotlightRepliesSettingPageEntryPoint end] */

void FUN_104e424a0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e4788;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e424dc; end: 104e42573; -[SCSpotlightRepliesSettingPageEntryPoint didDismissSpotlightRepliesSettingPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e424dc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127144f8;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf74060(lVar2,param_2,param_1);
    _objc_release(param_1);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 104e42574; end: 104e42637; -[SCSpotlightRepliesSettingPageEntryPoint _detachSpotlightRepliesSettingPageUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e42574(long param_1)

{
  long lVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  lVar1 = param_1 + _DAT_1127144f8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_28,param_1);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_104e42638;
    puStack_38 = &UNK_1108434b0;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x0001000d76cc("APPSTORE",&puStack_50);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 104e42638; end: 104e4267f;  */

void FUN_104e42638(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdfb720();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf751e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e42680; end: 104e426cf; -[SCSpotlightRepliesSettingPageEntryPoint _detachUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e42680(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_1127144f8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e426d0; end: 104e4271f; -[SCSpotlightRepliesSettingPageEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e426d0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127144fc);
  _objc_destroyWeak(param_1 + _DAT_1127144f4);
  _objc_destroyWeak(param_1 + _DAT_1127144f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127144f8);
  return;
}



/* Entry: 104e42720; end: 104e4281b; -[SCSpotlightRepliesSettingPageViewController initWithValdiRuntime:spotlightRepliesFeatureSettingsManager:spotlightRepliesSettingPageContext:backArrowPointsDownward:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104e42720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126e4790;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112714500;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112714504;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112714508;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11271450c) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e4281c; end: 104e42857; -[SCSpotlightRepliesSettingPageViewController loadView] */

void FUN_104e4281c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bdf3c80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c222380(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e42858; end: 104e4295f; -[SCSpotlightRepliesSettingPageViewController _createSpotlightRepliesSettingPageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e42858(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b11c0;
  _objc_opt_new(PTR_PTR_1126b11c0);
  lVar2 = *(long *)(param_1 + _DAT_112714504);
  func_0x00010c269d40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c24bde0();
  func_0x00010c16cb80((double)lVar3,puVar1);
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c201060(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(undefined1 *)(param_1 + _DAT_11271450c));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e0e0(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126b11c8;
  _objc_alloc(PTR_PTR_1126b11c8);
  func_0x00010c061d40();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104e42960; end: 104e429af; -[SCSpotlightRepliesSettingPageViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e42960(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112714508,0);
  _objc_storeStrong(param_1 + _DAT_112714504,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112714500,0);
  return;
}



/* Entry: 104e429b0; end: 104e429bb; +[SCCSpotlightRepliesSettingPageView componentPath] */

undefined ** FUN_104e429b0(void)

{
  return &PTR____CFConstantStringClassReference_110db7278;
}



/* Entry: 104e429bc; end: 104e429ef; -[SCCSpotlightRepliesSettingPageView initWithViewModel:componentContext:runtime:] */

void FUN_104e429bc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e4798;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 104e429f0; end: 104e42a3f; -[SCCSpotlightRepliesSettingPageView setViewModel:] */

void FUN_104e429f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e42a40; end: 104e42a83; -[SCCSpotlightRepliesSettingPageView viewModel] */

void FUN_104e42a40(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e42a84; end: 104e42b1b; -[SCCSpotlightRepliesSettingPageContext initWithSaveSpotlightRepliesAutoApprovalOption:onTapBackButton:] */

undefined8 *
FUN_104e42a84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  puStack_38 = PTR_PTR_1126e47a0;
  puVar2 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 104e42b1c; end: 104e42b3b; +[SCCSpotlightRepliesSettingPageContext valdiMarshallableObjectDescriptor] */

void FUN_104e42b1c(undefined8 *param_1)

{
  *param_1 = &PTR_s_saveSpotlightRepliesAutoApproval_1108530b0;
  param_1[1] = 0;
  param_1[2] = &PTR_s_od_v_110853080;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104e42b3c; end: 104e42b5f;  */

undefined8 FUN_104e42b3c(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[1],*param_2);
  return 0;
}



/* Entry: 104e42b60; end: 104e42bdf;  */

void FUN_104e42b60(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104e42c3c;
  puStack_30 = &UNK_110853170;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 104e42be0; end: 104e42c23; -[SCCSpotlightRepliesSettingPageViewModel initWithAutoApprovalOption:] */

void FUN_104e42be0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e47a8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 104e42c24; end: 104e42c3b; +[SCCSpotlightRepliesSettingPageViewModel valdiMarshallableObjectDescriptor] */

void FUN_104e42c24(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_autoApprovalOption_1108530f8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104e42c3c; end: 104e42c67;  */

void FUN_104e42c3c(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 104e42c68; end: 104e430f7; -[SCUnifiedProfileStoryActionMenuActionHandler initWithStoriesDataSourceManager:storyShareScopeExposer:storyShareScopeServices:memoriesAutosaveMigrator:businessProfileManager:currentUserId:userSession:parentActionHandler:customStoryMenuScopeExposer:circumstanceEngine:ourStoriesAttributionManager:deleteStorySnapScopeExposer:deleteStorySnapScopeServices:sendToScopeExposer:sendToScopeServices:snapProShareMessageSender:snapProProfilesProvider:actionHandlerLogger:offPlatformLinkGenerationService:creatorInfoProvider:plusFeatureGating:customStoryMenuScopeServices:] */

undefined8 *
FUN_104e42c68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

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
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  puStack_70 = PTR_PTR_1126e47b0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[9];
    puVar1[9] = param_6;
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
    _objc_storeWeak(puVar1 + 8,param_10);
    _objc_retain(param_11);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_11;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xd,param_24);
    puVar1[0xb] = 3;
    _objc_retain(param_13);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_23;
    _objc_release(uVar2);
  }
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
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



/* Entry: 104e430f8; end: 104e43b27; -[SCUnifiedProfileStoryActionMenuActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_104e430f8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_104e433cc:
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar14 != 0) {
      uVar1 = param_4;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR_PTR_1126b11d0;
      _objc_opt_class(PTR_PTR_1126b11d0);
      uVar2 = uVar1;
      _objc_opt_isKindOfClass(uVar1,puVar12);
      uVar14 = uVar1;
      if ((uVar2 & 1) == 0) {
        uVar14 = 0;
      }
      _objc_retain(uVar14);
      _objc_release(uVar1);
      _objc_initWeak(auStack_70,param_1);
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      _objc_copyWeak(auStack_b8,auStack_70);
      _objc_retain(uVar14);
      func_0x00010bf83dc0(uVar9);
      _objc_release(uVar14);
      puVar11 = auStack_b8;
      goto LAB_104e434b0;
    }
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar1;
    func_0x00010c0720c0();
    if ((int)uVar14 != 0) {
      _objc_release(uVar1);
LAB_104e43568:
      uVar9 = 1;
      func_0x00010bf83dc0(*(undefined8 *)(param_1 + 0x10));
      goto LAB_104e434c8;
    }
    uVar14 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar14;
    func_0x00010c0720c0();
    _objc_release(uVar14);
    _objc_release(uVar1);
    if ((int)uVar2 != 0) goto LAB_104e43568;
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar14 == 0) {
      uVar1 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      if ((int)uVar14 == 0) {
        uVar1 = param_4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar1;
        func_0x00010c0720c0();
        if ((int)uVar14 == 0) {
          uVar14 = param_4;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar14;
          func_0x00010c0720c0();
          _objc_release(uVar14);
          _objc_release(uVar1);
          if ((int)uVar2 == 0) {
            uVar1 = param_4;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            uVar14 = uVar1;
            func_0x00010c0720c0();
            if ((int)uVar14 == 0) {
              uVar14 = param_4;
              func_0x00010bfe5ec0();
              _objc_retainAutoreleasedReturnValue();
              uVar2 = uVar14;
              func_0x00010c0720c0();
              if ((int)uVar2 == 0) {
                uVar2 = param_4;
                func_0x00010bfe5ec0();
                _objc_retainAutoreleasedReturnValue();
                uVar3 = uVar2;
                func_0x00010c0720c0();
                _objc_release(uVar2);
                _objc_release(uVar14);
                _objc_release(uVar1);
                if ((int)uVar3 == 0) {
                  uVar1 = param_4;
                  func_0x00010bfe5ec0();
                  _objc_retainAutoreleasedReturnValue();
                  uVar14 = uVar1;
                  func_0x00010c0720c0();
                  if ((int)uVar14 == 0) {
                    uVar14 = param_4;
                    func_0x00010bfe5ec0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar2 = uVar14;
                    func_0x00010c0720c0();
                    _objc_release(uVar14);
                    _objc_release(uVar1);
                    if ((int)uVar2 != 0) goto LAB_104e439b0;
                  }
                  else {
                    _objc_release(uVar1);
LAB_104e439b0:
                    uVar14 = param_4;
                    func_0x00010beee2e0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar12 = PTR_PTR_1126b11d0;
                    _objc_opt_class(PTR_PTR_1126b11d0);
                    uVar2 = uVar14;
                    _objc_opt_isKindOfClass(uVar14,puVar12);
                    uVar1 = uVar14;
                    if ((uVar2 & 1) == 0) {
                      uVar1 = 0;
                    }
                    _objc_retain(uVar1);
                    _objc_release(uVar14);
                    uVar2 = uVar1;
                    func_0x00010bf63dc0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar12 = PTR_PTR_1126b11d8;
                    _objc_opt_class(PTR_PTR_1126b11d8);
                    uVar3 = uVar2;
                    _objc_opt_isKindOfClass(uVar2,puVar12);
                    uVar14 = uVar2;
                    if ((uVar3 & 1) == 0) {
                      uVar14 = 0;
                    }
                    _objc_retain(uVar14);
                    _objc_release(uVar2);
                    func_0x00010c0a03e0(*(undefined8 *)(param_1 + 0xb8));
                    puVar12 = PTR_PTR_1126b11e0;
                    _objc_alloc(PTR_PTR_1126b11e0);
                    lVar13 = param_1 + 0x40;
                    _objc_loadWeakRetained(lVar13);
                    uVar2 = uVar14;
                    func_0x00010bf45e20(uVar14);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(uVar14);
                    func_0x00010bff0260(puVar12);
                    _objc_release(uVar1);
                    _objc_release(uVar2);
                    _objc_release(lVar13);
                    param_1 = param_1 + 0xd0;
                    _objc_loadWeakRetained(param_1);
                    func_0x00010c10b000(puVar12);
                    _objc_release(param_1);
                    _objc_release(puVar12);
                  }
                  uVar9 = 0;
                  goto LAB_104e434c8;
                }
              }
              else {
                _objc_release(uVar14);
                _objc_release(uVar1);
              }
            }
            else {
              _objc_release(uVar1);
            }
            uVar14 = param_4;
            func_0x00010beee2e0();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = PTR_PTR_1126b11d0;
            _objc_opt_class(PTR_PTR_1126b11d0);
            uVar2 = uVar14;
            _objc_opt_isKindOfClass(uVar14,puVar12);
            uVar1 = uVar14;
            if ((uVar2 & 1) == 0) {
              uVar1 = 0;
            }
            _objc_retain(uVar1);
            _objc_release(uVar14);
            uVar14 = param_4;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0720c0();
            _objc_release(uVar14);
            func_0x00010c25b720(uVar1);
            uVar14 = uVar1;
            func_0x00010c259cc0(uVar1);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar1;
            func_0x00010c23f800(uVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf6b180(uVar1);
            func_0x00010bf6b180(uVar1);
            _objc_release(uVar1);
            func_0x00010be7cb40(param_1);
            _objc_release(uVar2);
            goto LAB_104e434c0;
          }
        }
        else {
          _objc_release(uVar1);
        }
        uVar14 = param_4;
        func_0x00010beee2e0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR_PTR_1126b11d0;
        _objc_opt_class(PTR_PTR_1126b11d0);
        uVar2 = uVar14;
        _objc_opt_isKindOfClass(uVar14,puVar12);
        uVar1 = uVar14;
        if ((uVar2 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar14);
        func_0x00010c25b720(uVar1);
        uVar14 = uVar1;
        func_0x00010c259cc0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf63dc0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
        func_0x00010be7cb60(param_1);
        _objc_release(uVar2);
      }
      else {
        uVar14 = param_1 + 0x40;
        _objc_loadWeakRetained(uVar14);
        func_0x00010bfd0140();
      }
      goto LAB_104e434c0;
    }
    uVar14 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126b11d0;
    _objc_opt_class(PTR_PTR_1126b11d0);
    uVar2 = uVar14;
    _objc_opt_isKindOfClass(uVar14,puVar12);
    uVar1 = uVar14;
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar14);
    uVar14 = uVar1;
    func_0x00010bf63dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar2 = uVar14;
    _objc_opt_isKindOfClass(uVar14,puVar12);
    uVar1 = uVar14;
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar14);
    func_0x00010bf1f3c0(uVar1);
    _objc_release(uVar1);
    func_0x00010bea4220(param_1);
  }
  else {
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar1;
    func_0x00010c0720c0();
    if ((uVar14 & 1) == 0) {
      uVar14 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar14;
      func_0x00010c0720c0();
      if ((uVar2 & 1) != 0) {
LAB_104e43298:
        _objc_release(uVar14);
        goto LAB_104e432a0;
      }
      uVar2 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0720c0();
      if ((uVar3 & 1) != 0) {
LAB_104e43290:
        _objc_release(uVar2);
        goto LAB_104e43298;
      }
      uVar3 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0720c0();
      if ((uVar4 & 1) != 0) {
LAB_104e43288:
        _objc_release(uVar3);
        goto LAB_104e43290;
      }
      uVar4 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0720c0();
      if ((uVar5 & 1) != 0) {
LAB_104e43280:
        _objc_release(uVar4);
        goto LAB_104e43288;
      }
      uVar5 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0720c0();
      if ((uVar6 & 1) != 0) {
LAB_104e43274:
        _objc_release(uVar5);
        goto LAB_104e43280;
      }
      uVar6 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c0720c0();
      if ((uVar7 & 1) != 0) {
LAB_104e43268:
        _objc_release(uVar6);
        goto LAB_104e43274;
      }
      uVar7 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c0720c0();
      if ((uVar8 & 1) != 0) {
        _objc_release(uVar7);
        goto LAB_104e43268;
      }
      uVar8 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar8;
      func_0x00010c0720c0();
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar14);
      _objc_release(uVar1);
      if ((uVar10 & 1) == 0) goto LAB_104e433cc;
    }
    else {
LAB_104e432a0:
      _objc_release(uVar1);
    }
    uVar14 = *(ulong *)(param_1 + 0x10);
    _objc_retain(uVar14);
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar9);
    _objc_initWeak(auStack_70,param_1);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_104e43b28;
    puStack_98 = &UNK_110850cf8;
    _objc_copyWeak(auStack_78,auStack_70);
    _objc_retain(param_3);
    uStack_90 = param_3;
    _objc_retain(param_4);
    uStack_88 = param_4;
    _objc_retain(param_5);
    uStack_80 = param_5;
    func_0x00010bf83dc0(uVar14);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    puVar11 = auStack_78;
LAB_104e434b0:
    _objc_destroyWeak(puVar11);
    _objc_destroyWeak(auStack_70);
LAB_104e434c0:
    _objc_release(uVar14);
  }
  uVar9 = 1;
LAB_104e434c8:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 104e43b28; end: 104e43b5f;  */

void FUN_104e43b28(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be25160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e43b60; end: 104e43bbf;  */

void FUN_104e43b60(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = lVar1 + 0xd0;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c15caa0(lVar1,param_2,uVar3,lVar2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e43bc0; end: 104e43c13; -[SCUnifiedProfileStoryActionMenuActionHandler _setGalleryStoryAutoSaving:] */

void FUN_104e43bc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28c4c0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c28a530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_updateStoryAutoSaving__112680370,param_3);
  return;
}



/* Entry: 104e43c14; end: 104e43ce3; -[SCUnifiedProfileStoryActionMenuActionHandler sendSnapWithDataModel:presentingViewController:] */

void FUN_104e43c14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c23f800(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c259cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = param_4;
  func_0x00010c0f2220(param_4);
  func_0x00010bf22b60(uVar4,param_2,uVar1,uVar2,param_4,uVar3,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 104e43ce4; end: 104e43d2b; -[SCUnifiedProfileStoryActionMenuActionHandler didCompleteStoryShareScope] */

void FUN_104e43ce4(long param_1)

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



/* Entry: 104e43d2c; end: 104e43dab; -[SCUnifiedProfileStoryActionMenuActionHandler _handleActionInParentActionHandler:actionModel:fromSourceView:] */

void FUN_104e43d2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd0140();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e43dac; end: 104e43f8f; -[SCUnifiedProfileStoryActionMenuActionHandler _presentMyStoryStoryActionMenu:storyId:dataModel:] */

void FUN_104e43dac(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_3 - 5U < 4) || (param_3 == 1)) {
    puVar6 = PTR_PTR_1126b11e8;
    _objc_opt_class(PTR_PTR_1126b11e8);
    uVar2 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar6);
    uVar1 = param_5;
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    puVar6 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar3 = param_1 + 0xd0;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c038f40(puVar6);
    _objc_release(lVar3);
    if (uVar1 != 0) {
      func_0x00010bfdcc20();
    }
    lVar3 = param_1 + 0x68;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar3 != 0) {
      lVar3 = param_1 + 0x68;
      _objc_loadWeakRetained(lVar3);
      lVar4 = param_1 + 0xd0;
      _objc_loadWeakRetained(lVar4);
      lVar5 = lVar3;
      func_0x00010bf24480(lVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar3);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x60));
      _objc_release(lVar5);
    }
    _objc_release(puVar6);
    _objc_release(uVar1);
  }
  else {
    puVar6 = PTR_PTR_1126b11f0;
    _objc_alloc();
    func_0x00010c04d100();
    uVar7 = *(undefined8 *)(param_1 + 0x50);
    *(undefined **)(param_1 + 0x50) = puVar6;
    _objc_release(uVar7);
    func_0x00010bf847e0(*(undefined8 *)(param_1 + 8));
    func_0x00010be7c780(param_1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104e43f90; end: 104e4403b; -[SCUnifiedProfileStoryActionMenuActionHandler _presentMyStorySnapActionMenu:storyId:snapClientId:isSavable:isDeletable:isShareable:] */

void FUN_104e43f90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b11f8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c04e300();
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010be7c780(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e4403c; end: 104e44123; -[SCUnifiedProfileStoryActionMenuActionHandler _presentMenuViewWithDataProvider:] */

void FUN_104e4403c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b1200;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c063540();
  puVar2 = PTR_PTR_1126b1208;
  _objc_alloc();
  uVar3 = 9;
  func_0x00010bc9107c(9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02b180(puVar2,param_2,param_3,puVar1,0,0,uVar3);
  _objc_release(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar2;
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x10),param_2,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  param_1 = param_1 + 0xd0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10d0c0(uVar3,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e44124; end: 104e44133; -[SCUnifiedProfileStoryActionMenuActionHandler unifiedActionMenuPresenterDidDismiss:] */

void FUN_104e44124(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e44134; end: 104e44137; -[SCUnifiedProfileStoryActionMenuActionHandler unifiedActionMenuPresenterWillDismiss:] */

void FUN_104e44134(void)

{
  return;
}



/* Entry: 104e44138; end: 104e44257; -[SCUnifiedProfileStoryActionMenuActionHandler didSelectAddToStoryWithPublicationId:storyType:] */

void FUN_104e44138(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  if (param_4 < 6) {
    if (param_4 == 0) goto LAB_104e44240;
    if ((param_4 == 2) || (uVar2 = 5, param_4 == 5)) {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 7;
    if (param_4 != 10) {
      uVar2 = 5;
    }
    uVar1 = 8;
    if (param_4 != 7) {
      uVar1 = uVar2;
    }
    uVar2 = 6;
    if (param_4 != 6) {
      uVar2 = uVar1;
    }
  }
  func_0x000107d0fb58(uVar2,*(undefined8 *)(param_1 + 0x58));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  puVar4 = PTR_PTR_1126b11d0;
  _objc_alloc(PTR_PTR_1126b11d0);
  func_0x00010c04e320();
  func_0x00010c01b460(puVar3);
  _objc_release(puVar4);
  func_0x00010be25160(param_1);
  _objc_release(puVar3);
  _objc_release(uVar2);
LAB_104e44240:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e44258; end: 104e4429f; -[SCUnifiedProfileStoryActionMenuActionHandler didCompleteCustomStoryMenuScope] */

void FUN_104e44258(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x60));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104e442a0; end: 104e442b7; -[SCUnifiedProfileStoryActionMenuActionHandler presentingViewController] */

void FUN_104e442a0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e442b8; end: 104e442c3; -[SCUnifiedProfileStoryActionMenuActionHandler setPresentingViewController:] */

void FUN_104e442b8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xd0,param_3);
  return;
}



/* Entry: 104e442c4; end: 104e443fb; -[SCUnifiedProfileStoryActionMenuActionHandler .cxx_destruct] */

void FUN_104e442c4(long param_1)

{
  _objc_destroyWeak(param_1 + 0xd0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 104e443fc; end: 104e44723; -[SCUnifiedProfileMyStoriesActionMenuDataProvider initWithStoriesDataSourceManager:storyType:storyId:currentUserId:businessProfileManager:memoriesAutosaveMigrator:addToStoriesType:ourStoriesAttributionManager:] */

undefined8 *
FUN_104e443fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,ulong param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126e47b8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar1[2] = param_4;
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
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    uVar2 = puVar1[6];
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[7];
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21b4a0(puVar1[8]);
    _objc_release(uVar2);
    uVar4 = param_8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfbda60();
    puVar1[9] = uVar5 & 0xffffffff;
    _objc_release(uVar4);
    *(undefined1 *)(puVar1 + 10) = 0;
    puVar1[0xc] = param_9;
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    uVar6 = puVar1[1];
    func_0x00010c25af20(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c0e0e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar7 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104e44724; end: 104e4476b;  */

void FUN_104e44724(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a460();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e4476c; end: 104e44843; -[SCUnifiedProfileMyStoriesActionMenuDataProvider updateViewModelWithCompletionBlock:] */

void FUN_104e4476c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104e44844; end: 104e44877;  */

void FUN_104e44844(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee3920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e44878; end: 104e44d9b; -[SCUnifiedProfileMyStoriesActionMenuDataProvider _updateViewModelWithCompletionBlock:] */

void FUN_104e44878(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  _objc_opt_new(puVar2);
  puVar3 = PTR_PTR_1126b02a8;
  uVar8 = *(ulong *)(param_1 + 0x10);
  if ((uVar8 & 0xfffffffffffffffe) != 2) {
    uVar10 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar10);
    _objc_alloc(puVar3);
    FUN_104e44f00(uVar8,uVar10,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    func_0x00010c01b460(puVar3);
    _objc_release(uVar8);
    ppuVar7 = &PTR____CFConstantStringClassReference_110db72b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db72b8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar7;
    func_0x000107d4bc38();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    _objc_release(puVar3);
    func_0x00010befa120(puVar2);
    _objc_release(ppuVar4);
    uVar8 = *(ulong *)(param_1 + 0x10);
  }
  if ((uVar8 & 0xfffffffffffffffe) == 2) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
    func_0x00010c07f7a0();
    if (iVar1 != 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
      func_0x00010c0715a0();
      puVar3 = PTR_PTR_1126b02a8;
      if (iVar1 != 0) {
        uVar9 = *(undefined8 *)(param_1 + 0x18);
        _objc_retain(uVar9);
        _objc_alloc(puVar3);
        uVar10 = 2;
        FUN_104e44f00(2,uVar9,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
        func_0x00010c01b460(puVar3);
        _objc_release(uVar10);
        ppuVar7 = &PTR____CFConstantStringClassReference_110db6e18;
        func_0x0001052c56b4(&PTR____CFConstantStringClassReference_110db6e18,
                            &PTR____CFConstantStringClassReference_110db6e38);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar7;
        func_0x000107d4ba6c();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar7);
        _objc_release(puVar3);
        func_0x00010befa120(puVar2);
        _objc_release(ppuVar4);
      }
    }
  }
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  uVar11 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar9);
  uVar5 = uVar10;
  func_0x000107d0fb58(uVar10,uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  FUN_104e44f00(uVar10,uVar9,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  func_0x00010c01b460(puVar3);
  _objc_release(uVar10);
  ppuVar7 = &PTR____CFConstantStringClassReference_110db72d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db72d8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar7;
  func_0x000107d4bc38();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  _objc_release(puVar3);
  _objc_release(uVar5);
  func_0x00010befa120(puVar2);
  _objc_release(ppuVar4);
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar9);
    puVar3 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = 0;
    FUN_104e44f00(0,uVar9,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    func_0x00010c01b460(puVar3);
    _objc_release(uVar10);
    _objc_release(puVar6);
    ppuVar7 = &PTR____CFConstantStringClassReference_110db72f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db72f8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar7;
    func_0x000107d4be64();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    _objc_release(puVar3);
    func_0x00010befa120(puVar2);
    _objc_release(ppuVar4);
  }
  puVar3 = PTR_PTR_1126b02a8;
  if (*(char *)(param_1 + 0x50) == '\x01') {
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar9);
    _objc_alloc(puVar3);
    FUN_104e44f00(uVar10,uVar9,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    func_0x00010c01b460(puVar3);
    _objc_release(uVar10);
    ppuVar7 = &PTR____CFConstantStringClassReference_110db7318;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db7318,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar7;
    func_0x000107d4bc38();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    _objc_release(puVar3);
    func_0x00010befa120(puVar2);
    _objc_release(ppuVar4);
  }
  puVar3 = PTR_PTR_1126b1210;
  _objc_alloc(PTR_PTR_1126b1210);
  ppuVar7 = &PTR____CFConstantStringClassReference_110eb7918;
  func_0x000107d4bf04(&PTR____CFConstantStringClassReference_110eb7918);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019f60(puVar3);
  _objc_release(ppuVar7);
  (**(code **)(param_3 + 0x10))(param_3,puVar3);
  _objc_release(param_3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104e44d9c; end: 104e44dd7; -[SCUnifiedProfileMyStoriesActionMenuDataProvider updateStoryAutoSaving:] */

void FUN_104e44d9c(long param_1,undefined8 param_2,ulong param_3)

{
  *(ulong *)(param_1 + 0x48) = param_3 & 0xffffffff;
  param_1 = param_1 + 0x68;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf64160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e44dd8; end: 104e44e17; -[SCUnifiedProfileMyStoriesActionMenuDataProvider _onNewStorySavable:] */

void FUN_104e44dd8(long param_1,undefined8 param_2,undefined1 param_3)

{
  func_0x00010bf1f3c0();
  *(undefined1 *)(param_1 + 0x50) = param_3;
  param_1 = param_1 + 0x68;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf64160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e44e18; end: 104e44e5b; -[SCUnifiedProfileMyStoriesActionMenuDataProvider didUpdateOurStoriesAttributionEnabled:] */

void FUN_104e44e18(long param_1)

{
  if (*(long *)(param_1 + 0x10) == 2) {
    param_1 = param_1 + 0x68;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf64160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104e44e5c; end: 104e44e73; -[SCUnifiedProfileMyStoriesActionMenuDataProvider delegate] */

void FUN_104e44e5c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e44e74; end: 104e44e7f; -[SCUnifiedProfileMyStoriesActionMenuDataProvider setDelegate:] */

void FUN_104e44e74(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x68,param_3);
  return;
}



/* Entry: 104e44e80; end: 104e44eff; -[SCUnifiedProfileMyStoriesActionMenuDataProvider .cxx_destruct] */

void FUN_104e44e80(long param_1)

{
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 104e44f00; end: 104e4505f;  */

void FUN_104e44f00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b11d0;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c04e320();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e45060; end: 104e4527b; -[SCMyProfileStoriesNewStoryActionsManager initWithCustomStoriesDataFetcher:currentUserId:storiesGrapheneMetricsEmitter:circumstanceEngine:] */

undefined8 *
FUN_104e45060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR_PTR_1126e47c0;
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
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    uVar4 = puVar1[1];
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf62560();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar5 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104e4527c; end: 104e452eb;  */

void FUN_104e4527c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bf00d20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bed6900(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e452ec; end: 104e45313; -[SCMyProfileStoriesNewStoryActionsManager newStoryActionsTypeObservable] */

undefined8 FUN_104e452ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  return uVar1;
}



/* Entry: 104e45314; end: 104e4540b; -[SCMyProfileStoriesNewStoryActionsManager _updateCustomStories:] */

/* WARNING: Possible PIC construction at 0x000104e453e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104e453e4) */
/* WARNING: Removing unreachable block (ram,0x00010c0a46c0) */

void FUN_104e45314(long param_1,undefined8 param_2,ulong param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar2);
  _objc_retain(uVar2);
  func_0x00010bf04920();
  _objc_release(uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if ((param_3 & 1) == 0) {
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be198;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_next__112614028,ppuVar1);
  return;
}


