/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106712ffc; end: 106713003; -[SCLensExplorerSectionModel registerSupplementaryViews] */

undefined8 FUN_106712ffc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106713004; end: 10671300b; -[SCLensExplorerSectionModel sectionIdentifier] */

undefined8 FUN_106713004(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10671300c; end: 106713053; -[SCLensExplorerSectionModel .cxx_destruct] */

void FUN_10671300c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106713054; end: 106713117; -[SCLensExplorerSupplementaryDequeueModel initWithViewKind:reuseIdentifier:viewClass:heightSize:] */

undefined1 *
FUN_106713054(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f2af8;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106713118; end: 10671313b; -[SCLensExplorerSupplementaryDequeueModel copyWithZone:] */

undefined8 FUN_106713118(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10671313c; end: 1067131df; -[SCLensExplorerSupplementaryDequeueModel hash] */

undefined8 * FUN_10671313c(long param_1,undefined8 param_2,undefined8 *param_3)

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
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar4 = &uStack_48;
  uStack_38 = uVar2;
  func_0x000100505190(puVar4,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_1067132ac:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1067132b8;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((ulong)puVar5 & 1) != 0) {
      dVar10 = ABS((double)puVar4[4] - (double)param_3[4]);
      dVar9 = ABS((double)puVar4[4] + (double)param_3[4]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (((bVar1) &&
          ((lVar6 = puVar4[1], lVar6 == param_3[1] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
         ((lVar6 = puVar4[2], lVar6 == param_3[2] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = (undefined8 *)puVar4[3];
        if (puVar8 != (undefined8 *)param_3[3]) {
          func_0x00010c071ae0();
          goto LAB_1067132b8;
        }
        goto LAB_1067132ac;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_1067132b8:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 1067131e0; end: 1067132d3; -[SCLensExplorerSupplementaryDequeueModel isEqual:] */

long FUN_1067131e0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1067132ac:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1067132b8;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
      dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (((bVar1) &&
          ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1067132b8;
        }
        goto LAB_1067132ac;
      }
    }
    lVar4 = 0;
  }
LAB_1067132b8:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1067132d4; end: 1067132db; -[SCLensExplorerSupplementaryDequeueModel viewKind] */

undefined8 FUN_1067132d4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1067132dc; end: 1067132e3; -[SCLensExplorerSupplementaryDequeueModel reuseIdentifier] */

undefined8 FUN_1067132dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1067132e4; end: 1067132eb; -[SCLensExplorerSupplementaryDequeueModel viewClass] */

undefined8 FUN_1067132e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1067132ec; end: 1067132f3; -[SCLensExplorerSupplementaryDequeueModel heightSize] */

undefined8 FUN_1067132ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1067132f4; end: 106713323; -[SCLensExplorerSupplementaryDequeueModel .cxx_destruct] */

void FUN_1067132f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106713324; end: 1067133cb; -[SCLensExplorerVisibleSectionModel initWithSection:items:] */

undefined1 *
FUN_106713324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2b00;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
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



/* Entry: 1067133cc; end: 1067133ef; -[SCLensExplorerVisibleSectionModel copyWithZone:] */

undefined8 FUN_1067133cc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1067133f0; end: 106713463; -[SCLensExplorerVisibleSectionModel hash] */

undefined8 * FUN_1067133f0(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_1067134e4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1067134f0;
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
          goto LAB_1067134f0;
        }
        goto LAB_1067134e4;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1067134f0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106713464; end: 10671350b; -[SCLensExplorerVisibleSectionModel isEqual:] */

long FUN_106713464(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1067134e4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1067134f0;
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
          goto LAB_1067134f0;
        }
        goto LAB_1067134e4;
      }
    }
    lVar3 = 0;
  }
LAB_1067134f0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10671350c; end: 106713513; -[SCLensExplorerVisibleSectionModel section] */

undefined8 FUN_10671350c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106713514; end: 10671351b; -[SCLensExplorerVisibleSectionModel items] */

undefined8 FUN_106713514(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10671351c; end: 10671354b; -[SCLensExplorerVisibleSectionModel .cxx_destruct] */

void FUN_10671351c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10671354c; end: 1067135d3; -[SCLensExplorerSectionVisibleItemModel initWithIndex:item:] */

undefined1 *
FUN_10671354c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2b08;
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



/* Entry: 1067135d4; end: 1067135f7; -[SCLensExplorerSectionVisibleItemModel copyWithZone:] */

undefined8 FUN_1067135d4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1067135f8; end: 106713657; -[SCLensExplorerSectionVisibleItemModel hash] */

undefined8 * FUN_1067135f8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1067136dc;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[1] != param_3[1])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_1067136dc;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_1067136dc;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_1067136dc:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 106713658; end: 1067136f7; -[SCLensExplorerSectionVisibleItemModel isEqual:] */

long FUN_106713658(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1067136dc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_1067136dc;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_1067136dc;
    }
  }
  lVar3 = 1;
LAB_1067136dc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1067136f8; end: 1067136ff; -[SCLensExplorerSectionVisibleItemModel index] */

undefined8 FUN_1067136f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106713700; end: 106713707; -[SCLensExplorerSectionVisibleItemModel item] */

undefined8 FUN_106713700(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106713708; end: 106713713; -[SCLensExplorerSectionVisibleItemModel .cxx_destruct] */

void FUN_106713708(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106713714; end: 1067137f7; -[SCLensExplorerLensCellViewModelDataProviderConfiguration initWithMinVisibleItemsCount:minColumnsCount:creatorPageEnabled:infoCardEnabled:viewCountEnabled:prefferedCellSize:sectionIndex:defaultCellType:sectionId:lensNameEnabled:] */

undefined1 *
FUN_106713714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined1 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_12);
  puStack_78 = PTR_PTR_1126f2b10;
  uStack_80 = param_3;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    *(undefined1 *)((long)puVar1 + 10) = param_9;
    *(undefined8 *)((long)puVar1 + 0x38) = param_1;
    *(undefined8 *)((long)puVar1 + 0x40) = param_2;
    *(undefined8 *)((long)puVar1 + 0x20) = param_10;
    *(undefined8 *)((long)puVar1 + 0x28) = param_11;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xb) = param_13;
  }
  _objc_release(param_12);
  return (undefined1 *)puVar1;
}



/* Entry: 1067137f8; end: 10671381b; -[SCLensExplorerLensCellViewModelDataProviderConfiguration copyWithZone:] */

undefined8 FUN_1067137f8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10671381c; end: 1067138eb; -[SCLensExplorerLensCellViewModelDataProviderConfiguration hash] */

undefined8 * FUN_10671381c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = *(undefined8 *)(param_1 + 0x18);
  uStack_80 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = (ulong)*(byte *)(param_1 + 8);
  uStack_68 = (ulong)*(byte *)(param_1 + 9);
  uStack_60 = (ulong)*(byte *)(param_1 + 10);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_58 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar4 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_50 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 0xb);
  uStack_38 = uVar1;
  func_0x000100505190(&uStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106713a04;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((((ulong)puVar3 & 1) == 0) ||
         ((((*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10) ||
            (*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18))) ||
           (*(char *)((long)puVar2 + 8) != param_3[8])) ||
          ((*(char *)((long)puVar2 + 9) != param_3[9] ||
           (*(char *)((long)puVar2 + 10) != param_3[10])))))) ||
        (*(long *)((long)puVar2 + 0x20) != *(long *)(param_3 + 0x20))) ||
       ((*(long *)((long)puVar2 + 0x28) != *(long *)(param_3 + 0x28) ||
        (*(char *)((long)puVar2 + 0xb) != param_3[0xb])))) {
      puVar5 = (undefined1 *)0x0;
      goto LAB_106713a04;
    }
    puVar5 = (undefined1 *)0x0;
    if ((*(double *)((long)puVar2 + 0x38) != *(double *)(param_3 + 0x38)) ||
       (*(double *)((long)puVar2 + 0x40) != *(double *)(param_3 + 0x40))) goto LAB_106713a04;
    puVar5 = *(undefined1 **)((long)puVar2 + 0x30);
    if (puVar5 != *(undefined1 **)(param_3 + 0x30)) {
      func_0x00010c071ae0();
      goto LAB_106713a04;
    }
  }
  puVar5 = (undefined1 *)0x1;
LAB_106713a04:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 1067138ec; end: 106713a1f; -[SCLensExplorerLensCellViewModelDataProviderConfiguration isEqual:] */

long FUN_1067138ec(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106713a04;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) == 0) ||
         ((((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
            (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) ||
           (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) ||
          ((*(char *)(param_1 + 9) != *(char *)(param_3 + 9) ||
           (*(char *)(param_1 + 10) != *(char *)(param_3 + 10))))))) ||
        (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))) ||
       ((*(long *)(param_1 + 0x28) != *(long *)(param_3 + 0x28) ||
        (*(char *)(param_1 + 0xb) != *(char *)(param_3 + 0xb))))) {
      lVar3 = 0;
      goto LAB_106713a04;
    }
    lVar3 = 0;
    if ((*(double *)(param_1 + 0x38) != *(double *)(param_3 + 0x38)) ||
       (*(double *)(param_1 + 0x40) != *(double *)(param_3 + 0x40))) goto LAB_106713a04;
    lVar3 = *(long *)(param_1 + 0x30);
    if (lVar3 != *(long *)(param_3 + 0x30)) {
      func_0x00010c071ae0();
      goto LAB_106713a04;
    }
  }
  lVar3 = 1;
LAB_106713a04:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106713a20; end: 106713a27; -[SCLensExplorerLensCellViewModelDataProviderConfiguration minVisibleItemsCount] */

undefined8 FUN_106713a20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106713a28; end: 106713a2f; -[SCLensExplorerLensCellViewModelDataProviderConfiguration minColumnsCount] */

undefined8 FUN_106713a28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106713a30; end: 106713a37; -[SCLensExplorerLensCellViewModelDataProviderConfiguration creatorPageEnabled] */

undefined1 FUN_106713a30(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106713a38; end: 106713a3f; -[SCLensExplorerLensCellViewModelDataProviderConfiguration infoCardEnabled] */

undefined1 FUN_106713a38(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106713a40; end: 106713a47; -[SCLensExplorerLensCellViewModelDataProviderConfiguration viewCountEnabled] */

undefined1 FUN_106713a40(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 106713a48; end: 106713a4f; -[SCLensExplorerLensCellViewModelDataProviderConfiguration prefferedCellSize] */

undefined1  [16] FUN_106713a48(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x38);
}



/* Entry: 106713a50; end: 106713a57; -[SCLensExplorerLensCellViewModelDataProviderConfiguration sectionIndex] */

undefined8 FUN_106713a50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106713a58; end: 106713a5f; -[SCLensExplorerLensCellViewModelDataProviderConfiguration defaultCellType] */

undefined8 FUN_106713a58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106713a60; end: 106713a67; -[SCLensExplorerLensCellViewModelDataProviderConfiguration sectionId] */

undefined8 FUN_106713a60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106713a68; end: 106713a6f; -[SCLensExplorerLensCellViewModelDataProviderConfiguration lensNameEnabled] */

undefined1 FUN_106713a68(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 106713a70; end: 106713a7b; -[SCLensExplorerLensCellViewModelDataProviderConfiguration .cxx_destruct] */

void FUN_106713a70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,0);
  return;
}



/* Entry: 106713a7c; end: 106713b53; -[SCLensExplorerHeroTileActionDataModel initWithLensCollectionId:deepLinkUrl:loggingInfo:] */

undefined1 *
FUN_106713a7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f2b18;
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



/* Entry: 106713b54; end: 106713b77; -[SCLensExplorerHeroTileActionDataModel copyWithZone:] */

undefined8 FUN_106713b54(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106713b78; end: 106713bf7; -[SCLensExplorerHeroTileActionDataModel hash] */

undefined8 * FUN_106713b78(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_106713c90:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106713c9c;
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
            goto LAB_106713c9c;
          }
          goto LAB_106713c90;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106713c9c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106713bf8; end: 106713cb7; -[SCLensExplorerHeroTileActionDataModel isEqual:] */

long FUN_106713bf8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106713c90:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106713c9c;
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
            goto LAB_106713c9c;
          }
          goto LAB_106713c90;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106713c9c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106713cb8; end: 106713cbf; -[SCLensExplorerHeroTileActionDataModel lensCollectionId] */

undefined8 FUN_106713cb8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106713cc0; end: 106713cc7; -[SCLensExplorerHeroTileActionDataModel deepLinkUrl] */

undefined8 FUN_106713cc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106713cc8; end: 106713ccf; -[SCLensExplorerHeroTileActionDataModel loggingInfo] */

undefined8 FUN_106713cc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106713cd0; end: 106713d0b; -[SCLensExplorerHeroTileActionDataModel .cxx_destruct] */

void FUN_106713cd0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106713d0c; end: 106713db7; -[SCLensExplorerFilterByCreatorActionDataModel initWithLensCreator:loggingInfo:] */

undefined1 *
FUN_106713d0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2b20;
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



/* Entry: 106713db8; end: 106713ddb; -[SCLensExplorerFilterByCreatorActionDataModel copyWithZone:] */

undefined8 FUN_106713db8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106713ddc; end: 106713e4f; -[SCLensExplorerFilterByCreatorActionDataModel hash] */

undefined8 * FUN_106713ddc(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_106713ed0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106713edc;
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
          goto LAB_106713edc;
        }
        goto LAB_106713ed0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106713edc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106713e50; end: 106713ef7; -[SCLensExplorerFilterByCreatorActionDataModel isEqual:] */

long FUN_106713e50(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106713ed0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106713edc;
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
          goto LAB_106713edc;
        }
        goto LAB_106713ed0;
      }
    }
    lVar3 = 0;
  }
LAB_106713edc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106713ef8; end: 106713eff; -[SCLensExplorerFilterByCreatorActionDataModel lensCreator] */

undefined8 FUN_106713ef8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106713f00; end: 106713f07; -[SCLensExplorerFilterByCreatorActionDataModel loggingInfo] */

undefined8 FUN_106713f00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106713f08; end: 106713f37; -[SCLensExplorerFilterByCreatorActionDataModel .cxx_destruct] */

void FUN_106713f08(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106713f38; end: 10671401f; -[SCLensExplorerRequest initWithRequestUrl:requestData:routingKey:maxNumOfRequestAttempts:] */

undefined1 *
FUN_106713f38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f2b28;
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
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106714020; end: 106714043; -[SCLensExplorerRequest copyWithZone:] */

undefined8 FUN_106714020(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106714044; end: 1067140c7; -[SCLensExplorerRequest hash] */

undefined8 * FUN_106714044(long param_1,undefined8 param_2,undefined8 *param_3)

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
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  puVar3 = &uStack_48;
  uStack_38 = uVar1;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106714170:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10671417c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[4] == param_3[4])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[3];
          if (puVar6 != (undefined8 *)param_3[3]) {
            func_0x00010c071ae0();
            goto LAB_10671417c;
          }
          goto LAB_106714170;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10671417c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1067140c8; end: 106714197; -[SCLensExplorerRequest isEqual:] */

long FUN_1067140c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106714170:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10671417c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10671417c;
          }
          goto LAB_106714170;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10671417c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106714198; end: 10671419f; -[SCLensExplorerRequest requestUrl] */

undefined8 FUN_106714198(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1067141a0; end: 1067141a7; -[SCLensExplorerRequest requestData] */

undefined8 FUN_1067141a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1067141a8; end: 1067141af; -[SCLensExplorerRequest routingKey] */

undefined8 FUN_1067141a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1067141b0; end: 1067141b7; -[SCLensExplorerRequest maxNumOfRequestAttempts] */

undefined8 FUN_1067141b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1067141b8; end: 1067141f3; -[SCLensExplorerRequest .cxx_destruct] */

void FUN_1067141b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067141f4; end: 1067143d7; -[SCLensExplorerResponseFeedModel initWithFeedIdentifier:displayName:subtitleDisplayName:categoryData:items:remoteState:renderStrategy:isDefault:feedActivation:iconUrl:] */

undefined8 *
FUN_1067141f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
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
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126f2b30;
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
    *(undefined1 *)(puVar1 + 1) = param_10;
    puVar1[9] = param_12;
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_13);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1067143d8; end: 1067143fb; -[SCLensExplorerResponseFeedModel copyWithZone:] */

undefined8 FUN_1067143d8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1067143fc; end: 1067144bf; -[SCLensExplorerResponseFeedModel hash] */

undefined8 * FUN_1067143fc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
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
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  puVar4 = &uStack_78;
  uStack_30 = uVar1;
  func_0x000100505190(puVar4,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_1067145f0:
    puVar7 = (undefined8 *)0x1;
  }
  else {
    puVar7 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1067145fc;
    puVar7 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((*(char *)(puVar4 + 1) == *(char *)(param_3 + 1) && (puVar4[9] == param_3[9])))) {
      lVar6 = puVar4[2];
      if ((lVar6 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        lVar6 = puVar4[3];
        if ((lVar6 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = puVar4[4];
          if ((lVar6 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            lVar6 = puVar4[5];
            if ((lVar6 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
              lVar6 = puVar4[6];
              if ((lVar6 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                lVar6 = puVar4[7];
                if ((lVar6 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                  lVar6 = puVar4[8];
                  if ((lVar6 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                    puVar7 = (undefined8 *)puVar4[10];
                    if (puVar7 != (undefined8 *)param_3[10]) {
                      func_0x00010c071ae0();
                      goto LAB_1067145fc;
                    }
                    goto LAB_1067145f0;
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_1067145fc:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 1067144c0; end: 106714617; -[SCLensExplorerResponseFeedModel isEqual:] */

long FUN_1067144c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1067145f0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1067145fc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x50);
                    if (lVar3 != *(long *)(param_3 + 0x50)) {
                      func_0x00010c071ae0();
                      goto LAB_1067145fc;
                    }
                    goto LAB_1067145f0;
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
LAB_1067145fc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106714618; end: 10671461f; -[SCLensExplorerResponseFeedModel feedIdentifier] */

undefined8 FUN_106714618(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106714620; end: 106714627; -[SCLensExplorerResponseFeedModel displayName] */

undefined8 FUN_106714620(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106714628; end: 10671462f; -[SCLensExplorerResponseFeedModel subtitleDisplayName] */

undefined8 FUN_106714628(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106714630; end: 106714637; -[SCLensExplorerResponseFeedModel categoryData] */

undefined8 FUN_106714630(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106714638; end: 10671463f; -[SCLensExplorerResponseFeedModel items] */

undefined8 FUN_106714638(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106714640; end: 106714647; -[SCLensExplorerResponseFeedModel remoteState] */

undefined8 FUN_106714640(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106714648; end: 10671464f; -[SCLensExplorerResponseFeedModel renderStrategy] */

undefined8 FUN_106714648(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106714650; end: 106714657; -[SCLensExplorerResponseFeedModel isDefault] */

undefined1 FUN_106714650(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106714658; end: 10671465f; -[SCLensExplorerResponseFeedModel feedActivation] */

undefined8 FUN_106714658(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106714660; end: 106714667; -[SCLensExplorerResponseFeedModel iconUrl] */

undefined8 FUN_106714660(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106714668; end: 1067146df; -[SCLensExplorerResponseFeedModel .cxx_destruct] */

void FUN_106714668(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1067146e0; end: 1067146fb; +[SCLensExplorerResponseFeedModelBuilder lensExplorerResponseFeedModel] */

void FUN_1067146e0(void)

{
  _objc_alloc_init(PTR_PTR_1126cd120);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067146fc; end: 1067149b3; +[SCLensExplorerResponseFeedModelBuilder lensExplorerResponseFeedModelFromExistingLensExplorerResponseFeedModel:] */

void FUN_1067146fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  
  puVar1 = PTR_PTR_1126cd120;
  _objc_retain(param_3);
  func_0x00010c0934e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfa3d80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2adca0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ac7a0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c260ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2ba9a0(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf332e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2aa3e0(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c084fc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c2b1bc0(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c12a440(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010c2b6c60(puVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010c130180(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010c2b6d00(puVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010c070480(param_3);
  puVar17 = puVar15;
  func_0x00010c2b05a0(puVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010bfa3660(param_3);
  puVar18 = puVar17;
  func_0x00010c2adc20(puVar17,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010bfe5be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar19 = puVar18;
  func_0x00010c2af960(puVar18,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar16);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
  return;
}



/* Entry: 1067149b4; end: 106714a0b; -[SCLensExplorerResponseFeedModelBuilder build] */

void FUN_1067149b4(void)

{
  _objc_alloc(PTR_PTR_1126ccc88);
  func_0x00010c012580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106714a0c; end: 106714a43; -[SCLensExplorerResponseFeedModelBuilder withFeedIdentifier:] */

long FUN_106714a0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106714a44; end: 106714a7b; -[SCLensExplorerResponseFeedModelBuilder withDisplayName:] */

long FUN_106714a44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106714a7c; end: 106714ab3; -[SCLensExplorerResponseFeedModelBuilder withSubtitleDisplayName:] */

long FUN_106714a7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106714ab4; end: 106714aeb; -[SCLensExplorerResponseFeedModelBuilder withCategoryData:] */

long FUN_106714ab4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106714aec; end: 106714b23; -[SCLensExplorerResponseFeedModelBuilder withItems:] */

long FUN_106714aec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106714b24; end: 106714b5b; -[SCLensExplorerResponseFeedModelBuilder withRemoteState:] */

long FUN_106714b24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106714b5c; end: 106714b93; -[SCLensExplorerResponseFeedModelBuilder withRenderStrategy:] */

long FUN_106714b5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106714b94; end: 106714b9b; -[SCLensExplorerResponseFeedModelBuilder withIsDefault:] */

void FUN_106714b94(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 106714b9c; end: 106714ba3; -[SCLensExplorerResponseFeedModelBuilder withFeedActivation:] */

void FUN_106714b9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 106714ba4; end: 106714bdb; -[SCLensExplorerResponseFeedModelBuilder withIconUrl:] */

long FUN_106714ba4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106714bdc; end: 106714c53; -[SCLensExplorerResponseFeedModelBuilder .cxx_destruct] */

void FUN_106714bdc(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 106714c54; end: 106714ce3; +[SCLensExplorerResponseCategoryData categoryWithCategoryIdentifier:subcategoriesData:] */

void FUN_106714c54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ccdf8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106714ce4; end: 106714d4f; +[SCLensExplorerResponseCategoryData subcategoryWithSubcategoryIdentifier:] */

void FUN_106714ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ccdf8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106714d50; end: 106714d73; -[SCLensExplorerResponseCategoryData copyWithZone:] */

undefined8 FUN_106714d50(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106714d74; end: 106714df7; -[SCLensExplorerResponseCategoryData hash] */

void FUN_106714d74(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
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
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126f2b38;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106714df8; end: 106714e3b; -[SCLensExplorerResponseCategoryData internalInit] */

void FUN_106714df8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f2b38;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106714e3c; end: 106714f0b; -[SCLensExplorerResponseCategoryData isEqual:] */

long FUN_106714e3c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106714ee4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106714ef0;
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
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_106714ef0;
          }
          goto LAB_106714ee4;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106714ef0:
  _objc_release(param_3);
  return lVar3;
}


