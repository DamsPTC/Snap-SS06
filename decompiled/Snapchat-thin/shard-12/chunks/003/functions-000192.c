/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108f5a854; end: 108f5a877; -[SCSendToCreatorsConfigurableDataModel copyWithZone:] */

undefined8 FUN_108f5a854(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f5a878; end: 108f5a87f; -[SCSendToCreatorsConfigurableDataModel hash] */

undefined1 FUN_108f5a878(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108f5a880; end: 108f5a907; -[SCSendToCreatorsConfigurableDataModel isEqual:] */

bool FUN_108f5a880(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 8) == *(char *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108f5a908; end: 108f5a90f; -[SCSendToCreatorsConfigurableDataModel isCreateHighlightSelected] */

undefined1 FUN_108f5a908(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108f5a910; end: 108f5a987; -[SCSendToSingleCellDataModel initWithSectionType:] */

undefined1 * FUN_108f5a910(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff528;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f5a988; end: 108f5a9ab; -[SCSendToSingleCellDataModel copyWithZone:] */

undefined8 FUN_108f5a988(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f5a9ac; end: 108f5a9b3; -[SCSendToSingleCellDataModel hash] */

void FUN_108f5a9ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 108f5a9b4; end: 108f5aa43; -[SCSendToSingleCellDataModel isEqual:] */

long FUN_108f5a9b4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f5aa28;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_108f5aa28;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_108f5aa28;
    }
  }
  lVar3 = 1;
LAB_108f5aa28:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f5aa44; end: 108f5aa4b; -[SCSendToSingleCellDataModel sectionType] */

undefined8 FUN_108f5aa44(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f5aa4c; end: 108f5aa57; -[SCSendToSingleCellDataModel .cxx_destruct] */

void FUN_108f5aa4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f5aa58; end: 108f5ab57; -[SCSendToShareSnapViewModel initWithLabelText:image:tapActionModel:cellHeight:shouldShowSeparatorLine:numberOfCellInOneRow:] */

undefined1 *
FUN_108f5aa58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

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
  puStack_58 = PTR_PTR_1126ff530;
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
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108f5ab58; end: 108f5ab7b; -[SCSendToShareSnapViewModel copyWithZone:] */

undefined8 FUN_108f5ab58(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f5ab7c; end: 108f5ac27; -[SCSendToShareSnapViewModel hash] */

undefined8 * FUN_108f5ab7c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar3;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_40 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  puVar4 = &uStack_58;
  uStack_48 = uVar2;
  func_0x000107c3191c(puVar4,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_108f5ad14:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108f5ad20;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((*(char *)(puVar4 + 1) == *(char *)(param_3 + 1) && (puVar4[6] == param_3[6])))) {
      dVar10 = ABS((double)puVar4[5] - (double)param_3[5]);
      dVar9 = ABS((double)puVar4[5] + (double)param_3[5]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (((bVar1) &&
          ((lVar6 = puVar4[2], lVar6 == param_3[2] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
         ((lVar6 = puVar4[3], lVar6 == param_3[3] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = (undefined8 *)puVar4[4];
        if (puVar8 != (undefined8 *)param_3[4]) {
          func_0x00010c071ae0();
          goto LAB_108f5ad20;
        }
        goto LAB_108f5ad14;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_108f5ad20:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 108f5ac28; end: 108f5ad3b; -[SCSendToShareSnapViewModel isEqual:] */

long FUN_108f5ac28(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f5ad14:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f5ad20;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))))) {
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
          goto LAB_108f5ad20;
        }
        goto LAB_108f5ad14;
      }
    }
    lVar4 = 0;
  }
LAB_108f5ad20:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 108f5ad3c; end: 108f5ad43; -[SCSendToShareSnapViewModel labelText] */

undefined8 FUN_108f5ad3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f5ad44; end: 108f5ad4b; -[SCSendToShareSnapViewModel image] */

undefined8 FUN_108f5ad44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f5ad4c; end: 108f5ad53; -[SCSendToShareSnapViewModel tapActionModel] */

undefined8 FUN_108f5ad4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f5ad54; end: 108f5ad5b; -[SCSendToShareSnapViewModel cellHeight] */

undefined8 FUN_108f5ad54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108f5ad5c; end: 108f5ad63; -[SCSendToShareSnapViewModel shouldShowSeparatorLine] */

undefined1 FUN_108f5ad5c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108f5ad64; end: 108f5ad6b; -[SCSendToShareSnapViewModel numberOfCellInOneRow] */

undefined8 FUN_108f5ad64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108f5ad6c; end: 108f5ada7; -[SCSendToShareSnapViewModel .cxx_destruct] */

void FUN_108f5ad6c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f5ada8; end: 108f5aeb3; -[SCCheetahSendToGroupDataModel initWithGroupId:groupTitle:groupDescription:sectionType:] */

undefined1 *
FUN_108f5ada8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126ff538;
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f5aeb4; end: 108f5aed7; -[SCCheetahSendToGroupDataModel copyWithZone:] */

undefined8 FUN_108f5aeb4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f5aed8; end: 108f5af63; -[SCCheetahSendToGroupDataModel hash] */

undefined8 * FUN_108f5aed8(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108f5b014:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108f5b020;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_108f5b020;
            }
            goto LAB_108f5b014;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108f5b020:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108f5af64; end: 108f5b03b; -[SCCheetahSendToGroupDataModel isEqual:] */

long FUN_108f5af64(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f5b014:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f5b020;
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
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_108f5b020;
            }
            goto LAB_108f5b014;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108f5b020:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f5b03c; end: 108f5b043; -[SCCheetahSendToGroupDataModel groupId] */

undefined8 FUN_108f5b03c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f5b044; end: 108f5b04b; -[SCCheetahSendToGroupDataModel groupTitle] */

undefined8 FUN_108f5b044(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f5b04c; end: 108f5b053; -[SCCheetahSendToGroupDataModel groupDescription] */

undefined8 FUN_108f5b04c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f5b054; end: 108f5b05b; -[SCCheetahSendToGroupDataModel sectionType] */

undefined8 FUN_108f5b054(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f5b05c; end: 108f5b0a3; -[SCCheetahSendToGroupDataModel .cxx_destruct] */

void FUN_108f5b05c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f5b0a4; end: 108f5b25f; -[SCCheetahSendToFriendDataModel initWithUserId:username:displayName:emojis:streakCount:friendKey:isOfficial:itemType:suggestReason:sectionType:] */

undefined8 *
FUN_108f5b0a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126ff540;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    puVar1[6] = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_9;
    puVar1[8] = param_11;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108f5b260; end: 108f5b283; -[SCCheetahSendToFriendDataModel copyWithZone:] */

undefined8 FUN_108f5b260(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f5b284; end: 108f5b34f; -[SCCheetahSendToFriendDataModel hash] */

undefined8 * FUN_108f5b284(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x30);
  uStack_50 = *(undefined8 *)(param_1 + 0x38);
  lStack_58 = -lVar5;
  if (-1 < lVar5) {
    lStack_58 = lVar5;
  }
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x40);
  uStack_38 = *(undefined8 *)(param_1 + 0x48);
  lStack_40 = -lVar5;
  if (-1 < lVar5) {
    lStack_40 = lVar5;
  }
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bfde980();
  puVar3 = &uStack_78;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108f5b478:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108f5b484;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((puVar3[6] == param_3[6] && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) &&
        (puVar3[8] == param_3[8])))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[7];
              if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[9];
                if ((lVar5 == param_3[9]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  puVar6 = (undefined8 *)puVar3[10];
                  if (puVar6 != (undefined8 *)param_3[10]) {
                    func_0x00010c071ae0();
                    goto LAB_108f5b484;
                  }
                  goto LAB_108f5b478;
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108f5b484:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108f5b350; end: 108f5b49f; -[SCCheetahSendToFriendDataModel isEqual:] */

long FUN_108f5b350(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f5b478:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f5b484;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
        (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x48);
                if ((lVar3 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x50);
                  if (lVar3 != *(long *)(param_3 + 0x50)) {
                    func_0x00010c071ae0();
                    goto LAB_108f5b484;
                  }
                  goto LAB_108f5b478;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108f5b484:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f5b4a0; end: 108f5b4a7; -[SCCheetahSendToFriendDataModel userId] */

undefined8 FUN_108f5b4a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f5b4a8; end: 108f5b4af; -[SCCheetahSendToFriendDataModel username] */

undefined8 FUN_108f5b4a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f5b4b0; end: 108f5b4b7; -[SCCheetahSendToFriendDataModel displayName] */

undefined8 FUN_108f5b4b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f5b4b8; end: 108f5b4bf; -[SCCheetahSendToFriendDataModel emojis] */

undefined8 FUN_108f5b4b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108f5b4c0; end: 108f5b4c7; -[SCCheetahSendToFriendDataModel streakCount] */

undefined8 FUN_108f5b4c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108f5b4c8; end: 108f5b4cf; -[SCCheetahSendToFriendDataModel friendKey] */

undefined8 FUN_108f5b4c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108f5b4d0; end: 108f5b4d7; -[SCCheetahSendToFriendDataModel isOfficial] */

undefined1 FUN_108f5b4d0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108f5b4d8; end: 108f5b4df; -[SCCheetahSendToFriendDataModel itemType] */

undefined8 FUN_108f5b4d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108f5b4e0; end: 108f5b4e7; -[SCCheetahSendToFriendDataModel suggestReason] */

undefined8 FUN_108f5b4e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108f5b4e8; end: 108f5b4ef; -[SCCheetahSendToFriendDataModel sectionType] */

undefined8 FUN_108f5b4e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108f5b4f0; end: 108f5b55b; -[SCCheetahSendToFriendDataModel .cxx_destruct] */

void FUN_108f5b4f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f5b55c; end: 108f5b5e3; -[SCSendToScrollLabelModel initWithLabelText:isSectionHeader:] */

undefined1 *
FUN_108f5b55c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ff548;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f5b5e4; end: 108f5b607; -[SCSendToScrollLabelModel copyWithZone:] */

undefined8 FUN_108f5b5e4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f5b608; end: 108f5b673; -[SCSendToScrollLabelModel hash] */

undefined8 * FUN_108f5b608(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
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
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108f5b6f8;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_108f5b6f8;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_108f5b6f8;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_108f5b6f8:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 108f5b674; end: 108f5b713; -[SCSendToScrollLabelModel isEqual:] */

long FUN_108f5b674(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f5b6f8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_108f5b6f8;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_108f5b6f8;
    }
  }
  lVar3 = 1;
LAB_108f5b6f8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f5b714; end: 108f5b71b; -[SCSendToScrollLabelModel labelText] */

undefined8 FUN_108f5b714(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f5b71c; end: 108f5b723; -[SCSendToScrollLabelModel isSectionHeader] */

undefined1 FUN_108f5b71c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108f5b724; end: 108f5b72f; -[SCSendToScrollLabelModel .cxx_destruct] */

void FUN_108f5b724(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f5b730; end: 108f5b8ab; -[SCSendToCTAWithSecondaryActionViewModel initWithLabelText:leftImage:rightImage:primaryTapActionModel:secondaryTapActionModel:cellHeight:badgeViewModel:] */

undefined1 *
FUN_108f5b730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126ff550;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
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
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108f5b8ac; end: 108f5b8cf; -[SCSendToCTAWithSecondaryActionViewModel copyWithZone:] */

undefined8 FUN_108f5b8ac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f5b8d0; end: 108f5b997; -[SCSendToCTAWithSecondaryActionViewModel hash] */

undefined8 * FUN_108f5b8d0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar5 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar8 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_38 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_40 = uVar4;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == (undefined8 *)param_3) {
LAB_108f5baac:
    puVar9 = (undefined1 *)0x1;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108f5bab8;
    puVar9 = (undefined1 *)puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if (((ulong)puVar6 & 1) != 0) {
      dVar11 = ABS(*(double *)((long)puVar5 + 0x30) - *(double *)(param_3 + 0x30));
      dVar10 = ABS(*(double *)((long)puVar5 + 0x30) + *(double *)(param_3 + 0x30)) *
               2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar10))) {
        bVar1 = dVar11 < dVar10;
      }
      if ((((bVar1) &&
           ((lVar7 = *(long *)((long)puVar5 + 8), lVar7 == *(long *)(param_3 + 8) ||
            (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
          ((lVar7 = *(long *)((long)puVar5 + 0x10), lVar7 == *(long *)(param_3 + 0x10) ||
           (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
         ((((lVar7 = *(long *)((long)puVar5 + 0x18), lVar7 == *(long *)(param_3 + 0x18) ||
            (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
           ((lVar7 = *(long *)((long)puVar5 + 0x20), lVar7 == *(long *)(param_3 + 0x20) ||
            (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
          ((lVar7 = *(long *)((long)puVar5 + 0x28), lVar7 == *(long *)(param_3 + 0x28) ||
           (func_0x00010c071ae0(), (int)lVar7 != 0)))))) {
        puVar9 = *(undefined1 **)((long)puVar5 + 0x38);
        if (puVar9 != *(undefined1 **)(param_3 + 0x38)) {
          func_0x00010c071ae0();
          goto LAB_108f5bab8;
        }
        goto LAB_108f5baac;
      }
    }
    puVar9 = (undefined1 *)0x0;
  }
LAB_108f5bab8:
  _objc_release(param_3);
  return (undefined8 *)puVar9;
}



/* Entry: 108f5b998; end: 108f5bad3; -[SCSendToCTAWithSecondaryActionViewModel isEqual:] */

long FUN_108f5b998(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f5baac:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f5bab8;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
      dVar5 = ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((((bVar1) &&
           ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
           ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))))) {
        lVar4 = *(long *)(param_1 + 0x38);
        if (lVar4 != *(long *)(param_3 + 0x38)) {
          func_0x00010c071ae0();
          goto LAB_108f5bab8;
        }
        goto LAB_108f5baac;
      }
    }
    lVar4 = 0;
  }
LAB_108f5bab8:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 108f5bad4; end: 108f5badb; -[SCSendToCTAWithSecondaryActionViewModel labelText] */

undefined8 FUN_108f5bad4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f5badc; end: 108f5bae3; -[SCSendToCTAWithSecondaryActionViewModel leftImage] */

undefined8 FUN_108f5badc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f5bae4; end: 108f5baeb; -[SCSendToCTAWithSecondaryActionViewModel rightImage] */

undefined8 FUN_108f5bae4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f5baec; end: 108f5baf3; -[SCSendToCTAWithSecondaryActionViewModel primaryTapActionModel] */

undefined8 FUN_108f5baec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f5baf4; end: 108f5bafb; -[SCSendToCTAWithSecondaryActionViewModel secondaryTapActionModel] */

undefined8 FUN_108f5baf4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108f5bafc; end: 108f5bb03; -[SCSendToCTAWithSecondaryActionViewModel cellHeight] */

undefined8 FUN_108f5bafc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108f5bb04; end: 108f5bb0b; -[SCSendToCTAWithSecondaryActionViewModel badgeViewModel] */

undefined8 FUN_108f5bb04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108f5bb0c; end: 108f5bb6b; -[SCSendToCTAWithSecondaryActionViewModel .cxx_destruct] */

void FUN_108f5bb0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f5bb6c; end: 108f5bce7; -[SCSendToCTAWithSecondaryActionAndSubtextViewModel initWithLabelText:labelSubtext:leftImage:rightImage:primaryTapActionModel:secondaryTapActionModel:cellHeight:] */

undefined1 *
FUN_108f5bb6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126ff558;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
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
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x38) = param_1;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108f5bce8; end: 108f5bd0b; -[SCSendToCTAWithSecondaryActionAndSubtextViewModel copyWithZone:] */

undefined8 FUN_108f5bce8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f5bd0c; end: 108f5bdd3; -[SCSendToCTAWithSecondaryActionAndSubtextViewModel hash] */

undefined8 * FUN_108f5bd0c(long param_1,undefined8 param_2,undefined1 *param_3)

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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_38 = uVar3;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_108f5bee8:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108f5bef4;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((ulong)puVar5 & 1) != 0) {
      dVar10 = ABS(*(double *)((long)puVar4 + 0x38) - *(double *)(param_3 + 0x38));
      dVar9 = ABS(*(double *)((long)puVar4 + 0x38) + *(double *)(param_3 + 0x38)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if ((((bVar1) &&
           ((lVar6 = *(long *)((long)puVar4 + 8), lVar6 == *(long *)(param_3 + 8) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
          ((lVar6 = *(long *)((long)puVar4 + 0x10), lVar6 == *(long *)(param_3 + 0x10) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
         ((((lVar6 = *(long *)((long)puVar4 + 0x18), lVar6 == *(long *)(param_3 + 0x18) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
           ((lVar6 = *(long *)((long)puVar4 + 0x20), lVar6 == *(long *)(param_3 + 0x20) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
          ((lVar6 = *(long *)((long)puVar4 + 0x28), lVar6 == *(long *)(param_3 + 0x28) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)))))) {
        puVar8 = *(undefined1 **)((long)puVar4 + 0x30);
        if (puVar8 != *(undefined1 **)(param_3 + 0x30)) {
          func_0x00010c071ae0();
          goto LAB_108f5bef4;
        }
        goto LAB_108f5bee8;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_108f5bef4:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 108f5bdd4; end: 108f5bf0f; -[SCSendToCTAWithSecondaryActionAndSubtextViewModel isEqual:] */

long FUN_108f5bdd4(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f5bee8:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f5bef4;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
      dVar5 = ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((((bVar1) &&
           ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
           ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))))) {
        lVar4 = *(long *)(param_1 + 0x30);
        if (lVar4 != *(long *)(param_3 + 0x30)) {
          func_0x00010c071ae0();
          goto LAB_108f5bef4;
        }
        goto LAB_108f5bee8;
      }
    }
    lVar4 = 0;
  }
LAB_108f5bef4:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 108f5bf10; end: 108f5bf17; -[SCSendToCTAWithSecondaryActionAndSubtextViewModel labelText] */

undefined8 FUN_108f5bf10(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f5bf18; end: 108f5bf1f; -[SCSendToCTAWithSecondaryActionAndSubtextViewModel labelSubtext] */

undefined8 FUN_108f5bf18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f5bf20; end: 108f5bf27; -[SCSendToCTAWithSecondaryActionAndSubtextViewModel leftImage] */

undefined8 FUN_108f5bf20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f5bf28; end: 108f5bf2f; -[SCSendToCTAWithSecondaryActionAndSubtextViewModel rightImage] */

undefined8 FUN_108f5bf28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f5bf30; end: 108f5bf37; -[SCSendToCTAWithSecondaryActionAndSubtextViewModel primaryTapActionModel] */

undefined8 FUN_108f5bf30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108f5bf38; end: 108f5bf3f; -[SCSendToCTAWithSecondaryActionAndSubtextViewModel secondaryTapActionModel] */

undefined8 FUN_108f5bf38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108f5bf40; end: 108f5bf47; -[SCSendToCTAWithSecondaryActionAndSubtextViewModel cellHeight] */

undefined8 FUN_108f5bf40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108f5bf48; end: 108f5bfa7; -[SCSendToCTAWithSecondaryActionAndSubtextViewModel .cxx_destruct] */

void FUN_108f5bf48(long param_1)

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



/* Entry: 108f5bfa8; end: 108f5c373; -[SCSendToRecipientViewModel initWithRowIndex:recipientType:recipientId:title:subtitle:attributedSubtitle:avatarViewModel:suggestReason:emoji:streakCount:shouldShowSeparatorLine:isSelected:justToggled:numberOfCellInOneRow:cellHeight:cornerRadii:tapActionModel:longPressActionModel:scrollLabelModel:itemType:iconImage:iconBackgroundColor:officialBadgeType:officialFriendmoji:viewStyle:accessoryButtonViewModel:] */

undefined8 *
FUN_108f5bfa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined4 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_25);
  _objc_retain(param_27);
  puStack_70 = PTR_PTR_1126ff560;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_13;
    *(undefined1 *)((long)puVar1 + 9) = param_13._1_1_;
    *(undefined1 *)((long)puVar1 + 10) = param_13._2_1_;
    puVar1[0xb] = param_12;
    puVar1[0xc] = param_15;
    puVar1[0xd] = param_16;
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_19;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_20;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    _objc_release(uVar3);
    puVar1[0x12] = param_21;
    uVar2 = param_22;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x13];
    puVar1[0x13] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_23;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x14];
    puVar1[0x14] = uVar2;
    _objc_release(uVar3);
    puVar1[0x15] = param_24;
    uVar2 = param_25;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x16];
    puVar1[0x16] = uVar2;
    _objc_release(uVar3);
    puVar1[0x17] = param_26;
    uVar2 = param_27;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x18];
    puVar1[0x18] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_27);
  _objc_release(param_25);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 108f5c374; end: 108f5c397; -[SCSendToRecipientViewModel copyWithZone:] */

undefined8 FUN_108f5c374(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f5c398; end: 108f5c4ff; -[SCSendToRecipientViewModel hash] */

undefined8 * FUN_108f5c398(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  puVar3 = &uStack_100;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_100 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_f8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_f0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_e8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_e0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_d8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_d0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_c8 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x58);
  lStack_b8 = -lVar5;
  if (-1 < lVar5) {
    lStack_b8 = lVar5;
  }
  uStack_b0 = (ulong)*(byte *)(param_1 + 8);
  uStack_a8 = (ulong)*(byte *)(param_1 + 9);
  uStack_a0 = (ulong)*(byte *)(param_1 + 10);
  uStack_90 = *(undefined8 *)(param_1 + 0x68);
  uStack_98 = *(undefined8 *)(param_1 + 0x60);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uStack_c0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x90);
  uStack_60 = *(undefined8 *)(param_1 + 0x98);
  lStack_68 = -lVar5;
  if (-1 < lVar5) {
    lStack_68 = lVar5;
  }
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0xa8);
  uStack_48 = *(undefined8 *)(param_1 + 0xb0);
  lStack_50 = -lVar5;
  if (-1 < lVar5) {
    lStack_50 = lVar5;
  }
  uStack_58 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0xb8);
  uStack_38 = *(undefined8 *)(param_1 + 0xc0);
  lStack_40 = -lVar5;
  if (-1 < lVar5) {
    lStack_40 = lVar5;
  }
  func_0x00010bfde980();
  func_0x000107c3191c(&uStack_100,0x1a);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108f5c768:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108f5c774;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((((ulong)puVar4 & 1) != 0) &&
         ((((*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10) &&
            (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18))) &&
           (*(long *)((long)puVar3 + 0x58) == *(long *)(param_3 + 0x58))) &&
          ((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9])
           ))))) && (*(char *)((long)puVar3 + 10) == param_3[10])) &&
       (((*(long *)((long)puVar3 + 0x60) == *(long *)(param_3 + 0x60) &&
         (*(long *)((long)puVar3 + 0x68) == *(long *)(param_3 + 0x68))) &&
        ((*(long *)((long)puVar3 + 0x90) == *(long *)(param_3 + 0x90) &&
         ((*(long *)((long)puVar3 + 0xa8) == *(long *)(param_3 + 0xa8) &&
          (*(long *)((long)puVar3 + 0xb8) == *(long *)(param_3 + 0xb8))))))))) {
      lVar5 = *(long *)((long)puVar3 + 0x20);
      if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x28);
        if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x30);
          if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x38);
            if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x40);
              if ((lVar5 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x48);
                if ((lVar5 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x50);
                  if ((lVar5 == *(long *)(param_3 + 0x50)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = *(long *)((long)puVar3 + 0x70);
                    if ((lVar5 == *(long *)(param_3 + 0x70)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = *(long *)((long)puVar3 + 0x78);
                      if ((lVar5 == *(long *)(param_3 + 0x78)) ||
                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        lVar5 = *(long *)((long)puVar3 + 0x80);
                        if ((lVar5 == *(long *)(param_3 + 0x80)) ||
                           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                          lVar5 = *(long *)((long)puVar3 + 0x88);
                          if ((lVar5 == *(long *)(param_3 + 0x88)) ||
                             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                            lVar5 = *(long *)((long)puVar3 + 0x98);
                            if ((lVar5 == *(long *)(param_3 + 0x98)) ||
                               (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                              lVar5 = *(long *)((long)puVar3 + 0xa0);
                              if ((lVar5 == *(long *)(param_3 + 0xa0)) ||
                                 (func_0x00010c071c60(), (int)lVar5 != 0)) {
                                lVar5 = *(long *)((long)puVar3 + 0xb0);
                                if ((lVar5 == *(long *)(param_3 + 0xb0)) ||
                                   (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                  puVar6 = *(undefined1 **)((long)puVar3 + 0xc0);
                                  if (puVar6 != *(undefined1 **)(param_3 + 0xc0)) {
                                    func_0x00010c071ae0();
                                    goto LAB_108f5c774;
                                  }
                                  goto LAB_108f5c768;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108f5c774:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108f5c500; end: 108f5c78f; -[SCSendToRecipientViewModel isEqual:] */

long FUN_108f5c500(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f5c768:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f5c774;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
            (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
           (*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58))) &&
          ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
           (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))))) &&
        (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
       (((*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60) &&
         (*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68))) &&
        ((*(long *)(param_1 + 0x90) == *(long *)(param_3 + 0x90) &&
         ((*(long *)(param_1 + 0xa8) == *(long *)(param_3 + 0xa8) &&
          (*(long *)(param_1 + 0xb8) == *(long *)(param_3 + 0xb8))))))))) {
      lVar3 = *(long *)(param_1 + 0x20);
      if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x28);
        if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x30);
          if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x38);
            if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x40);
              if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x48);
                if ((lVar3 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x50);
                  if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x70);
                    if ((lVar3 == *(long *)(param_3 + 0x70)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x78);
                      if ((lVar3 == *(long *)(param_3 + 0x78)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x80);
                        if ((lVar3 == *(long *)(param_3 + 0x80)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x88);
                          if ((lVar3 == *(long *)(param_3 + 0x88)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + 0x98);
                            if ((lVar3 == *(long *)(param_3 + 0x98)) ||
                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                              lVar3 = *(long *)(param_1 + 0xa0);
                              if ((lVar3 == *(long *)(param_3 + 0xa0)) ||
                                 (func_0x00010c071c60(), (int)lVar3 != 0)) {
                                lVar3 = *(long *)(param_1 + 0xb0);
                                if ((lVar3 == *(long *)(param_3 + 0xb0)) ||
                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                  lVar3 = *(long *)(param_1 + 0xc0);
                                  if (lVar3 != *(long *)(param_3 + 0xc0)) {
                                    func_0x00010c071ae0();
                                    goto LAB_108f5c774;
                                  }
                                  goto LAB_108f5c768;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108f5c774:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f5c790; end: 108f5c797; -[SCSendToRecipientViewModel rowIndex] */

undefined8 FUN_108f5c790(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f5c798; end: 108f5c79f; -[SCSendToRecipientViewModel recipientType] */

undefined8 FUN_108f5c798(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f5c7a0; end: 108f5c7a7; -[SCSendToRecipientViewModel recipientId] */

undefined8 FUN_108f5c7a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f5c7a8; end: 108f5c7af; -[SCSendToRecipientViewModel title] */

undefined8 FUN_108f5c7a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108f5c7b0; end: 108f5c7b7; -[SCSendToRecipientViewModel subtitle] */

undefined8 FUN_108f5c7b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108f5c7b8; end: 108f5c7bf; -[SCSendToRecipientViewModel attributedSubtitle] */

undefined8 FUN_108f5c7b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108f5c7c0; end: 108f5c7c7; -[SCSendToRecipientViewModel avatarViewModel] */

undefined8 FUN_108f5c7c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108f5c7c8; end: 108f5c7cf; -[SCSendToRecipientViewModel suggestReason] */

undefined8 FUN_108f5c7c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108f5c7d0; end: 108f5c7d7; -[SCSendToRecipientViewModel emoji] */

undefined8 FUN_108f5c7d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108f5c7d8; end: 108f5c7df; -[SCSendToRecipientViewModel streakCount] */

undefined8 FUN_108f5c7d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108f5c7e0; end: 108f5c7e7; -[SCSendToRecipientViewModel shouldShowSeparatorLine] */

undefined1 FUN_108f5c7e0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108f5c7e8; end: 108f5c7ef; -[SCSendToRecipientViewModel isSelected] */

undefined1 FUN_108f5c7e8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108f5c7f0; end: 108f5c7f7; -[SCSendToRecipientViewModel justToggled] */

undefined1 FUN_108f5c7f0(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108f5c7f8; end: 108f5c7ff; -[SCSendToRecipientViewModel numberOfCellInOneRow] */

undefined8 FUN_108f5c7f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 108f5c800; end: 108f5c807; -[SCSendToRecipientViewModel cellHeight] */

undefined8 FUN_108f5c800(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 108f5c808; end: 108f5c80f; -[SCSendToRecipientViewModel cornerRadii] */

undefined8 FUN_108f5c808(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 108f5c810; end: 108f5c817; -[SCSendToRecipientViewModel tapActionModel] */

undefined8 FUN_108f5c810(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 108f5c818; end: 108f5c81f; -[SCSendToRecipientViewModel longPressActionModel] */

undefined8 FUN_108f5c818(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 108f5c820; end: 108f5c827; -[SCSendToRecipientViewModel scrollLabelModel] */

undefined8 FUN_108f5c820(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 108f5c828; end: 108f5c82f; -[SCSendToRecipientViewModel itemType] */

undefined8 FUN_108f5c828(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}


