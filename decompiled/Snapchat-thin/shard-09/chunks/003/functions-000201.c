/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106b9f124; end: 106b9f1cf; -[SCLensExplorerLayoutType matchGroup:image:text:] */

void FUN_106b9f124(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_106b9f1ac;
    lVar2 = 0x20;
    lVar1 = param_5;
  }
  else if (lVar1 == 1) {
    if (param_4 == 0) goto LAB_106b9f1ac;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if ((lVar1 != 0) || (param_3 == 0)) goto LAB_106b9f1ac;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_106b9f1ac:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b9f1d0; end: 106b9f20b; -[SCLensExplorerLayoutType .cxx_destruct] */

void FUN_106b9f1d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106b9f20c; end: 106b9f26b; -[SCLensExplorerLayoutSpaceMultipliers initWithStart:end:top:bottom:] */

void FUN_106b9f20c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f55f0;
  uStack_40 = param_5;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
  }
  return;
}



/* Entry: 106b9f26c; end: 106b9f28f; -[SCLensExplorerLayoutSpaceMultipliers copyWithZone:] */

undefined8 FUN_106b9f26c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b9f290; end: 106b9f363; -[SCLensExplorerLayoutSpaceMultipliers hash] */

ulong * FUN_106b9f290(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  double dVar7;
  double dVar8;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_38 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_20 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  puVar3 = &uStack_38;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
    puVar6 = (ulong *)0x1;
  }
  else {
    puVar6 = (ulong *)0x0;
    if ((puVar3 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar6 = puVar3;
      _objc_opt_class(puVar3);
      puVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar6);
      if (((ulong)puVar4 & 1) != 0) {
        dVar8 = ABS((double)puVar3[1] - (double)param_3[1]);
        dVar7 = ABS((double)puVar3[1] + (double)param_3[1]) * 2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
          bVar2 = dVar8 < dVar7;
        }
        if (bVar2) {
          dVar8 = ABS((double)puVar3[2] - (double)param_3[2]);
          dVar7 = ABS((double)puVar3[2] + (double)param_3[2]) * 2.220446049250313e-16;
          bVar2 = true;
          if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
            bVar2 = dVar8 < dVar7;
          }
          if (bVar2) {
            dVar8 = ABS((double)puVar3[3] - (double)param_3[3]);
            dVar7 = ABS((double)puVar3[3] + (double)param_3[3]) * 2.220446049250313e-16;
            bVar2 = true;
            if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
              bVar2 = dVar8 < dVar7;
            }
            if (bVar2) {
              dVar7 = ABS((double)puVar3[4] + (double)param_3[4]) * 2.220446049250313e-16;
              if (dVar7 <= 2.2250738585072014e-308) {
                dVar7 = 2.2250738585072014e-308;
              }
              puVar6 = (ulong *)(ulong)(ABS((double)puVar3[4] - (double)param_3[4]) < dVar7);
              goto LAB_106b9f490;
            }
          }
        }
      }
      puVar6 = (ulong *)0x0;
    }
  }
LAB_106b9f490:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106b9f364; end: 106b9f4ab; -[SCLensExplorerLayoutSpaceMultipliers isEqual:] */

bool FUN_106b9f364(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  
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
      if ((uVar3 & 1) != 0) {
        dVar5 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
        dVar4 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
          bVar1 = dVar5 < dVar4;
        }
        if (bVar1) {
          dVar5 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
          dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
            bVar1 = dVar5 < dVar4;
          }
          if (bVar1) {
            dVar5 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
            dVar4 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                    2.220446049250313e-16;
            bVar1 = true;
            if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
              bVar1 = dVar5 < dVar4;
            }
            if (bVar1) {
              dVar4 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                      2.220446049250313e-16;
              if (dVar4 <= 2.2250738585072014e-308) {
                dVar4 = 2.2250738585072014e-308;
              }
              bVar1 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20)) < dVar4;
              goto LAB_106b9f490;
            }
          }
        }
      }
      bVar1 = false;
    }
  }
LAB_106b9f490:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106b9f4ac; end: 106b9f4b3; -[SCLensExplorerLayoutSpaceMultipliers start] */

undefined8 FUN_106b9f4ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b9f4b4; end: 106b9f4bb; -[SCLensExplorerLayoutSpaceMultipliers end] */

undefined8 FUN_106b9f4b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b9f4bc; end: 106b9f4c3; -[SCLensExplorerLayoutSpaceMultipliers top] */

undefined8 FUN_106b9f4bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106b9f4c4; end: 106b9f4cb; -[SCLensExplorerLayoutSpaceMultipliers bottom] */

undefined8 FUN_106b9f4c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106b9f4cc; end: 106b9f563; -[SCLensExplorerImageLayout initWithSizeMultiplier:edgeInsetMultipliers:tintColor:] */

undefined1 *
FUN_106b9f4cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f55f8;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106b9f564; end: 106b9f587; -[SCLensExplorerImageLayout copyWithZone:] */

undefined8 FUN_106b9f564(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b9f588; end: 106b9f617; -[SCLensExplorerImageLayout hash] */

ulong * FUN_106b9f588(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  double dVar7;
  double dVar8;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_40 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (ulong *)param_3) {
LAB_106b9f6c4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106b9f6d0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18)))
    {
      dVar8 = ABS(*(double *)((long)puVar3 + 8) - *(double *)(param_3 + 8));
      dVar7 = ABS(*(double *)((long)puVar3 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x10);
        if (puVar6 != *(undefined1 **)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_106b9f6d0;
        }
        goto LAB_106b9f6c4;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106b9f6d0:
  _objc_release(param_3);
  return (ulong *)puVar6;
}



/* Entry: 106b9f618; end: 106b9f6eb; -[SCLensExplorerImageLayout isEqual:] */

long FUN_106b9f618(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106b9f6c4:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106b9f6d0;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      dVar6 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
      dVar5 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_106b9f6d0;
        }
        goto LAB_106b9f6c4;
      }
    }
    lVar4 = 0;
  }
LAB_106b9f6d0:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 106b9f6ec; end: 106b9f6f3; -[SCLensExplorerImageLayout sizeMultiplier] */

undefined8 FUN_106b9f6ec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b9f6f4; end: 106b9f6fb; -[SCLensExplorerImageLayout edgeInsetMultipliers] */

undefined8 FUN_106b9f6f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b9f6fc; end: 106b9f703; -[SCLensExplorerImageLayout tintColor] */

undefined8 FUN_106b9f6fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106b9f704; end: 106b9f70f; -[SCLensExplorerImageLayout .cxx_destruct] */

void FUN_106b9f704(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106b9f710; end: 106b9f76f; -[SCLensExplorerTextLayout initWithStyle:alignment:linesCount:textColor:] */

void FUN_106b9f710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f5600;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  return;
}



/* Entry: 106b9f770; end: 106b9f793; -[SCLensExplorerTextLayout copyWithZone:] */

undefined8 FUN_106b9f770(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b9f794; end: 106b9f7fb; -[SCLensExplorerTextLayout hash] */

undefined8 * FUN_106b9f794(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  puVar2 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = *(undefined8 *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x18);
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  lStack_30 = -lVar1;
  if (-1 < lVar1) {
    lStack_30 = lVar1;
  }
  func_0x000100505190(&uStack_40,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x1;
  }
  else {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar4 = (undefined1 *)puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if ((((ulong)puVar3 & 1) == 0) ||
         (((*(long *)((long)puVar2 + 8) != *(long *)(param_3 + 8) ||
           (*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10))) ||
          (*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18))))) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        puVar4 = (undefined1 *)(ulong)(*(long *)((long)puVar2 + 0x20) == *(long *)(param_3 + 0x20));
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 106b9f7fc; end: 106b9f8b3; -[SCLensExplorerTextLayout isEqual:] */

bool FUN_106b9f7fc(ulong param_1,undefined8 param_2,ulong param_3)

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
         (((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
           (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
          (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106b9f8b4; end: 106b9f8bb; -[SCLensExplorerTextLayout style] */

undefined8 FUN_106b9f8b4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b9f8bc; end: 106b9f8c3; -[SCLensExplorerTextLayout alignment] */

undefined8 FUN_106b9f8bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b9f8c4; end: 106b9f8cb; -[SCLensExplorerTextLayout linesCount] */

undefined8 FUN_106b9f8c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106b9f8cc; end: 106b9f8d3; -[SCLensExplorerTextLayout textColor] */

undefined8 FUN_106b9f8cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106b9f8d4; end: 106b9f91f; -[SCLensExplorerLayoutShapedBackground initWithShape:color:] */

void FUN_106b9f8d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f5608;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 106b9f920; end: 106b9f943; -[SCLensExplorerLayoutShapedBackground copyWithZone:] */

undefined8 FUN_106b9f920(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106b9f944; end: 106b9f99b; -[SCLensExplorerLayoutShapedBackground hash] */

undefined8 * FUN_106b9f944(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 8);
  func_0x000100505190(&uStack_30,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) || (*(long *)((long)puVar1 + 8) != *(long *)(param_3 + 8))) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(long *)((long)puVar1 + 0x10) == *(long *)(param_3 + 0x10));
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar3;
}



/* Entry: 106b9f99c; end: 106b9fa33; -[SCLensExplorerLayoutShapedBackground isEqual:] */

bool FUN_106b9f99c(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106b9fa34; end: 106b9fa3b; -[SCLensExplorerLayoutShapedBackground shape] */

undefined8 FUN_106b9fa34(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106b9fa3c; end: 106b9fa43; -[SCLensExplorerLayoutShapedBackground color] */

undefined8 FUN_106b9fa3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106b9fa44; end: 106b9fa4f; +[SCCLensActivityCenterLensActivityCenter componentPath] */

undefined ** FUN_106b9fa44(void)

{
  return &PTR____CFConstantStringClassReference_110e76cd8;
}



/* Entry: 106b9fa50; end: 106b9fa83; -[SCCLensActivityCenterLensActivityCenter initWithViewModel:componentContext:runtime:] */

void FUN_106b9fa50(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f5610;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 106b9fa84; end: 106b9fad3; -[SCCLensActivityCenterLensActivityCenter setViewModel:] */

void FUN_106b9fa84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106b9fad4; end: 106b9fb17; -[SCCLensActivityCenterLensActivityCenter viewModel] */

void FUN_106b9fad4(undefined8 param_1)

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



/* Entry: 106b9fb18; end: 106b9fc33; -[SCCLensActivityCenterLensActivityCenterContext initWithNetworkingClient:grpcService:lensActionHandler:subscriptionStore:userInfoProvider:blizzardLogger:navigator:closePageHandler:] */

undefined8 *
FUN_106b9fb18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  puStack_68 = PTR_PTR_1126f5618;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_10);
  return puVar1;
}



/* Entry: 106b9fc34; end: 106b9fc53; +[SCCLensActivityCenterLensActivityCenterContext valdiMarshallableObjectDescriptor] */

void FUN_106b9fc34(undefined8 *param_1)

{
  *param_1 = &PTR_s_networkingClient_110964988;
  param_1[1] = &PTR_s_SCComposerNetworkingClientProtoc_110964a60;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106b9fc54; end: 106b9fc93; -[SCCLensActivityCenterLensActivityCenterViewModel initWithAnalyticsSessionId:wasEntryPointBadged:] */

void FUN_106b9fc54(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f5620;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 106b9fc94; end: 106b9fcab; +[SCCLensActivityCenterLensActivityCenterViewModel valdiMarshallableObjectDescriptor] */

void FUN_106b9fc94(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110964aa0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106b9fcac; end: 106b9fd4f; -[SCSharedStoryProfileAddToStoryCoordinator initWithAddToStoryScopeExposer:addToStoryCameraScopeBuilder:] */

undefined1 *
FUN_106b9fcac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f5628;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b9fd50; end: 106b9ff0b; -[SCSharedStoryProfileAddToStoryCoordinator addToSharedStoryWithStoryId:presentingViewController:delegate:] */

void FUN_106b9fd50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c071800();
  if ((uVar1 & 1) == 0) {
    puVar6 = (undefined *)(param_1 + 8);
    _objc_loadWeakRetained(puVar6);
    func_0x00010bf74b20();
  }
  else {
    _objc_storeWeak(param_1 + 8,param_5);
    puVar6 = PTR_PTR_1126ae6c0;
    func_0x00010c25bbc0(PTR_PTR_1126ae6c0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ae6c8;
    _objc_alloc(PTR_PTR_1126ae6c8);
    puVar3 = puVar2;
    func_0x000108f581a4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03e6c0(puVar2);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126ae6d0;
    _objc_alloc(PTR_PTR_1126ae6d0);
    func_0x00010c03e5a0();
    puVar4 = PTR_PTR_1126b1bb0;
    func_0x00010bf165e0(PTR_PTR_1126b1bb0);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf237e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10));
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b9ff0c; end: 106b9ff77; -[SCSharedStoryProfileAddToStoryCoordinator _removeScopeWithDidSendSnap:] */

void FUN_106b9ff0c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf74b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b9ff78; end: 106b9ff7f; -[SCSharedStoryProfileAddToStoryCoordinator dismissCameraScope:] */

void FUN_106b9ff78(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8d2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeScopeWithDidSendSnap__112580e48,0);
  return;
}



/* Entry: 106b9ff80; end: 106b9ffb7; -[SCSharedStoryProfileAddToStoryCoordinator .cxx_destruct] */

void FUN_106b9ff80(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106b9ffb8; end: 106ba0273; -[SCSharedStoryProfileServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106b9ffb8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106ba0274;
  puStack_90 = &UNK_110964b00;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_d0 = puVar4;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x106ba02b4;
  puStack_b8 = &UNK_1108d5900;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae720;
  puStack_f8 = puVar4;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x106ba02f4;
  puStack_e0 = &UNK_110964b30;
  _objc_copyWeak(auStack_d8,auStack_80);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_100,auStack_80);
  func_0x00010bf11fe0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d0d78;
  _objc_alloc(PTR_PTR_1126d0d78);
  lVar6 = param_1 + _DAT_11275971c;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c0d4b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02d2a0(puVar5);
  _objc_release(lVar7);
  _objc_release(lVar6);
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_112759720));
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_100);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_d8);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 106ba0274; end: 106ba0373;  */

void FUN_106ba0274(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf1860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106ba0374; end: 106ba03e3; -[SCSharedStoryProfileServicesEntryPoint _createAddToStoryCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ba0374(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d0d80;
  _objc_alloc(PTR_PTR_1126d0d80);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112759724);
  param_1 = param_1 + _DAT_112759728;
  _objc_loadWeakRetained(param_1);
  func_0x00010bff24e0(puVar1,param_2,uVar2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106ba03e4; end: 106ba0717; -[SCSharedStoryProfileServicesEntryPoint _createPlaybackCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ba03e4(long param_1,undefined8 param_2)

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
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long lVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  
  puVar1 = PTR_PTR_1126d0d88;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11275972c;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112759730;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112759734;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bf9e260();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + _DAT_112759738);
  uVar25 = *(undefined8 *)(param_1 + _DAT_11275973c);
  lVar8 = param_1 + _DAT_112759740;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c14a6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112759744;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + _DAT_112759748);
  lVar12 = param_1 + _DAT_11275974c;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c26b280();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + _DAT_112759750);
  uVar29 = *(undefined8 *)(param_1 + _DAT_112759754);
  uVar28 = *(undefined8 *)(param_1 + _DAT_112759758);
  lVar14 = param_1 + _DAT_11275975c;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c0ee220();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_112759760;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c0dc400();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_112759764;
  _objc_loadWeakRetained();
  lVar30 = (long)_DAT_112759768;
  lVar19 = param_1 + lVar30;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010c24c220();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1 + lVar30;
  _objc_loadWeakRetained();
  lVar21 = lVar30;
  func_0x00010c24ba80();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = *(undefined8 *)(param_1 + _DAT_11275976c);
  uVar32 = *(undefined8 *)(param_1 + _DAT_112759770);
  lVar22 = param_1 + _DAT_112759774;
  _objc_loadWeakRetained();
  param_1 = param_1 + _DAT_112759778;
  _objc_loadWeakRetained();
  lVar23 = param_1;
  func_0x00010c08d460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e8c0(puVar1,param_2,lVar3,lVar5,lVar7,uVar24,uVar25,lVar9,lVar11,uVar26,lVar13,
                      uVar27,uVar29,uVar28,lVar15,lVar17,lVar18,lVar20,lVar21,uVar31,uVar32,lVar22,
                      lVar23);
  _objc_release(lVar23);
  _objc_release(param_1);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar30);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106ba0718; end: 106ba0947; -[SCSharedStoryProfileServicesEntryPoint _createStoryProfileMembersDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ba0718(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126d0d90;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11275977c;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf62120();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c11ac00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_112759780;
  lVar5 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar7 = lVar16;
  func_0x00010bf620a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_112759784;
  lVar8 = param_1 + lVar17;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + lVar17;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c244620();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + lVar17;
  _objc_loadWeakRetained(lVar12);
  lVar13 = lVar12;
  func_0x00010bf1d740();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + lVar17;
  _objc_loadWeakRetained();
  lVar14 = lVar17;
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112759788;
  _objc_loadWeakRetained();
  lVar15 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03be20(puVar1,param_2,lVar4,lVar6,lVar7,lVar9,lVar11,lVar13,lVar14,lVar15);
  _objc_release(lVar15);
  _objc_release(param_1);
  _objc_release(lVar14);
  _objc_release(lVar17);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar16);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c206920(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106ba0948; end: 106ba0a6b; -[SCSharedStoryProfileServicesEntryPoint _createPlaybackManagementDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ba0948(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112759780;
  lVar1 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c258580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11275978c;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010bfb8c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar5 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar5);
  lVar1 = lVar5;
  func_0x00010c243de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  puVar4 = PTR_PTR_1126cf4c8;
  _objc_alloc(PTR_PTR_1126cf4c8);
  param_1 = param_1 + _DAT_11275971c;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010c0d4b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04cfe0(puVar4,param_2,lVar2,lVar5,lVar3,0,lVar1);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106ba0a6c; end: 106ba0c1b; -[SCSharedStoryProfileServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ba0a6c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112759774);
  _objc_storeStrong(param_1 + _DAT_112759770,0);
  _objc_storeStrong(param_1 + _DAT_112759754,0);
  _objc_storeStrong(param_1 + _DAT_112759758,0);
  _objc_storeStrong(param_1 + _DAT_112759750,0);
  _objc_storeStrong(param_1 + _DAT_112759748,0);
  _objc_storeStrong(param_1 + _DAT_11275973c,0);
  _objc_storeStrong(param_1 + _DAT_112759738,0);
  _objc_storeStrong(param_1 + _DAT_11275976c,0);
  _objc_destroyWeak(param_1 + _DAT_112759778);
  _objc_destroyWeak(param_1 + _DAT_11275975c);
  _objc_storeStrong(param_1 + _DAT_112759720,0);
  _objc_destroyWeak(param_1 + _DAT_11275974c);
  _objc_destroyWeak(param_1 + _DAT_112759734);
  _objc_destroyWeak(param_1 + _DAT_11275972c);
  _objc_destroyWeak(param_1 + _DAT_112759740);
  _objc_destroyWeak(param_1 + _DAT_112759728);
  _objc_storeStrong(param_1 + _DAT_112759724,0);
  _objc_destroyWeak(param_1 + _DAT_112759764);
  _objc_destroyWeak(param_1 + _DAT_112759760);
  _objc_destroyWeak(param_1 + _DAT_112759730);
  _objc_destroyWeak(param_1 + _DAT_112759788);
  _objc_destroyWeak(param_1 + _DAT_11275978c);
  _objc_destroyWeak(param_1 + _DAT_112759784);
  _objc_destroyWeak(param_1 + _DAT_112759780);
  _objc_destroyWeak(param_1 + _DAT_112759768);
  _objc_destroyWeak(param_1 + _DAT_11275971c);
  _objc_destroyWeak(param_1 + _DAT_112759790);
  _objc_destroyWeak(param_1 + _DAT_112759744);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275977c);
  return;
}



/* Entry: 106ba0c1c; end: 106ba1073; -[SCSharedStoryProfileStoryPlaybackCoordinator initWithNavigationDelegate:storiesBlizzardLogger:externalLinkSendingService:safetyReportScopeExposer:operaSessionScopeExposer:saveFriendStoryOperaPluginProvider:applicationLifecycleEvents:bloopsReportScopeExposer:temporaryFileWriter:customStoryMembersScopeExposer:saveStoryScopeExposer:deleteStorySnapScopeExposer:ourStoriesAttributionManager:notificationOSSettingsRetriever:offPlatformShareServices:spotlightShareSender:spotlightPlatformAnalyticsCreator:webBrowsingScopeExposer:contentProductPlaybackScopeExposer:contentProductPlaybackScopeServices:discoverFeedEventsController:] */

undefined8 *
FUN_106ba0c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23)

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
  puStack_70 = PTR_PTR_1126f5630;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
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
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    _objc_release(uVar2);
  }
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



/* Entry: 106ba1074; end: 106ba11cf; -[SCSharedStoryProfileStoryPlaybackCoordinator tapActionModelForSnapPlaybackInfo:storyId:currentUserId:storyCreatorUserId:] */

void FUN_106ba1074(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf5bbc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((uVar2 & 1) == 0) {
    uVar5 = param_6;
    func_0x00010c0720c0(param_6,param_2,param_5);
  }
  else {
    uVar5 = 1;
  }
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b11d0;
  _objc_alloc(PTR_PTR_1126b11d0);
  uVar1 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c15f2e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e320(puVar3,param_2,6,param_4,uVar1,uVar2,uVar5,param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106ba11d0; end: 106ba1277; -[SCSharedStoryProfileStoryPlaybackCoordinator tapActionModelForStoryPlaybackInfo:storyId:] */

void FUN_106ba11d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b11d0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c04e320();
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106ba1278; end: 106ba1503; -[SCSharedStoryProfileStoryPlaybackCoordinator createPlayStoryActionHandlerWithUserSession:myStoriesPlaybackDataProvider:playbackManagementDataProvider:remoteStoriesDataProvider:myStoriesDataCoordinator:storiesMediaCoordinator:readReceiptCoordinator:circumstanceEngine:snapchattersSynchronousDataFetcher:customStoriesDataFetcher:customStoriesDataSyncer:customStoriesDataMutator:snapchattersDataFetcher:snapchattersPublicInfoFetcher:blockedSnapchatterFetcher:notificationPool:notificationOSSettingsRetriever:] */

void FUN_106ba1278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b40b8;
  _objc_retain();
  _objc_retain(param_17);
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c05de20();
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106ba1504; end: 106ba1613; -[SCSharedStoryProfileStoryPlaybackCoordinator .cxx_destruct] */

void FUN_106ba1504(long param_1)

{
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106ba1614; end: 106ba1773; -[SCSharedStoryProfileFooterCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106ba1614(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_1126f5638;
  uStack_70 = param_5;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b0648;
    _objc_alloc_init();
    lVar5 = (long)_DAT_1127597e8;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    lVar6 = (long)_DAT_1127597ec;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar4);
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127597f0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127597f0) = puVar2;
    _objc_release(uVar4);
    func_0x00010c1aa620(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106ba1774; end: 106ba1857; -[SCSharedStoryProfileFooterCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ba1774(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f5638;
  lStack_50 = param_2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  lVar1 = (long)_DAT_1127597e8;
  func_0x00010c23d620(*(undefined8 *)(param_2 + lVar1));
  func_0x00010bf20ca0(param_2);
  param_1 = param_1 * 0.5;
  func_0x00010c17a6a0(param_1,0x404c000000000000,*(undefined8 *)(param_2 + lVar1));
  func_0x00010bf20ca0(param_2);
  lVar1 = (long)_DAT_1127597ec;
  dVar2 = 0.0;
  func_0x00010c1739e0(0,0,param_1 + -24.0,0,*(undefined8 *)(param_2 + lVar1));
  func_0x00010c23d620(*(undefined8 *)(param_2 + lVar1));
  func_0x00010bf20ca0(param_2);
  dVar3 = dVar2 * 0.5;
  func_0x00010bfe0640(*(undefined8 *)(param_2 + lVar1));
  func_0x00010c17a6a0(dVar3,dVar2 * 0.5 + 77.0,*(undefined8 *)(param_2 + lVar1));
  return;
}



/* Entry: 106ba1858; end: 106ba1863; +[SCSharedStoryProfileFooterCell sizeWithViewModel:constrainedToSize:] */

void FUN_106ba1858(void)

{
  return;
}



/* Entry: 106ba1864; end: 106ba195b; -[SCSharedStoryProfileFooterCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ba1864(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d0d98;
  _objc_opt_class(PTR_PTR_1126d0d98);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar6 = (long)_DAT_1127597f4;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(uVar1);
  if (uVar5 == uVar1) {
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  else {
    if (uVar1 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar3 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar3 & 1) != 0) goto LAB_106ba193c;
    }
    _objc_retain(uVar1);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar1;
    _objc_release(uVar4);
    func_0x00010bee4860(param_1);
  }
LAB_106ba193c:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ba195c; end: 106ba19c3; -[SCSharedStoryProfileFooterCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ba195c(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f5638;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127597f4);
  *(undefined8 *)(param_1 + _DAT_1127597f4) = 0;
  _objc_release(uVar1);
  func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_1127597ec));
  return;
}



/* Entry: 106ba19c4; end: 106ba1b8b; -[SCSharedStoryProfileFooterCell _updateWithFooterViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ba19c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf0e540(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720(*(undefined8 *)(param_1 + _DAT_1127597ec));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf0e540(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(param_1);
  _objc_release(uVar4);
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c292b20();
  _objc_release(lVar2);
  uVar1 = param_3;
  func_0x00010bf96120();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  uVar4 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106ba1b8c;
  puStack_68 = &UNK_1108488f8;
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(uVar1);
  uStack_60 = uVar1;
  uStack_50 = lVar3 == 2;
  func_0x00010007380c(uVar4,&puStack_80);
  _objc_release(uVar4);
  func_0x00010c1cbe20(param_1);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106ba1b8c; end: 106ba1bc3;  */

void FUN_106ba1b8c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed8dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ba1bc4; end: 106ba1ca7; -[SCSharedStoryProfileFooterCell _updateGhostImageWithBaseImage:isDarkMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ba1bc4(long param_1,undefined8 param_2,undefined *param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127597f0);
  _objc_retain(param_3);
  puVar2 = param_3;
  if ((param_4 & 1) == 0) {
    _objc_retain(param_3);
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xce);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bb380(param_3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  }
  PTR__OBJC_CLASS___UIImage_1126aea68 = puVar1;
  if (puVar2 == (undefined *)0x0) {
    _objc_opt_new(puVar1);
  }
  else {
    _objc_retain(puVar2);
    puVar1 = puVar2;
  }
  _objc_release(puVar2);
  _objc_release(param_3);
  func_0x00010c0d9840(uVar3,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ba1ca8; end: 106ba1cb7; -[SCSharedStoryProfileFooterCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ba1ca8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127597f4);
}



/* Entry: 106ba1cb8; end: 106ba1d17; -[SCSharedStoryProfileFooterCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ba1cb8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127597f4,0);
  _objc_storeStrong(param_1 + _DAT_1127597f0,0);
  _objc_storeStrong(param_1 + _DAT_1127597ec,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127597e8,0);
  return;
}



/* Entry: 106ba1d18; end: 106ba1dbb; -[SCSharedStoryProfileFooterSectionCreator initWithCustomStoryMetadata:ghostImageService:] */

undefined1 *
FUN_106ba1d18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f5640;
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



/* Entry: 106ba1dbc; end: 106ba1dc3; -[SCSharedStoryProfileFooterSectionCreator sharedStoryProfileSectionOrder] */

undefined8 FUN_106ba1dbc(void)

{
  return 4;
}



/* Entry: 106ba1dc4; end: 106ba1eb7; -[SCSharedStoryProfileFooterSectionCreator sharedStoryProfileOrderedConfig] */

void FUN_106ba1dc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b1700;
  _objc_alloc(PTR_PTR_1126b1700);
  puVar2 = PTR_PTR_1126b16f8;
  _objc_alloc(PTR_PTR_1126b16f8);
  func_0x00010c028e00();
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297340(0,0,0x4048000000000000,0,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043020(0,puVar1,param_2,0,puVar2,puVar3,1,1,0);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b12f8;
  _objc_alloc(PTR_PTR_1126b12f8);
  func_0x00010c22c300(param_1);
  func_0x00010c0322a0(puVar2,param_2,param_1,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106ba1eb8; end: 106ba1f1b; -[SCSharedStoryProfileFooterSectionCreator section] */

void FUN_106ba1eb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1108;
  _objc_alloc(PTR_PTR_1126b1108);
  func_0x00010c04f820();
  puVar2 = PTR_PTR_1126d0da0;
  _objc_alloc(PTR_PTR_1126d0da0);
  func_0x00010c008020();
  func_0x00010c1f9240(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106ba1f1c; end: 106ba1f23; -[SCSharedStoryProfileFooterSectionCreator actionHandler] */

undefined8 FUN_106ba1f1c(void)

{
  return 0;
}



/* Entry: 106ba1f24; end: 106ba1f53; -[SCSharedStoryProfileFooterSectionCreator .cxx_destruct] */

void FUN_106ba1f24(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ba1f54; end: 106ba2073; -[SCSharedStoryProfileFooterSectionDataProvider initWithCustomStoryMetadata:ghostImageService:] */

undefined1 *
FUN_106ba1f54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f5648;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ba2074; end: 106ba2457; -[SCSharedStoryProfileFooterSectionDataProvider _createFooterViewModel] */

void FUN_106ba2074(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_opt_new();
  func_0x00010c189b60();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf5a820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf5ab40();
  func_0x000109021670();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c25d400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000108f58a8c();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar6 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41560();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSShadow_1126b6158;
  _objc_alloc_init();
  puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41560(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740(puVar8);
  _objc_release(puVar9);
  func_0x00010c1fe7a0(0,0x3fe0000000000000,puVar8);
  func_0x00010c1fe720(0,puVar8);
  uStack_a0 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  uStack_98 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  uStack_90 = *(undefined8 *)PTR__NSShadowAttributeName_110345828;
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_88 = puVar6;
  puStack_80 = puVar7;
  puStack_78 = puVar8;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  func_0x00010c04e840();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf96100(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126aea98;
  _objc_alloc();
  puVar12 = PTR_PTR_1126d0da8;
  _objc_opt_class(PTR_PTR_1126d0da8);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126d0d98;
  _objc_alloc(PTR_PTR_1126d0d98);
  func_0x00010bff4f60();
  func_0x00010bffd260();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a8 = puVar11;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_initWeak(auStack_b0,param_1);
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_106ba2458;
  puStack_c8 = &UNK_110841fb0;
  _objc_copyWeak(auStack_b8,auStack_b0);
  _objc_retain(puVar14);
  puStack_c0 = puVar14;
  func_0x0001000d76cc("APPSTORE",&puStack_e0);
  _objc_release(puStack_c0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar14);
  _objc_release(uVar4);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_b0);
  __Unwind_Resume();
  puVar1 = puVar1 + 0x28;
  _objc_loadWeakRetained(puVar1);
  func_0x00010bdcede0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106ba2458; end: 106ba248b;  */

void FUN_106ba2458(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcede0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ba248c; end: 106ba2553; -[SCSharedStoryProfileFooterSectionDataProvider _applyViewModelsOnMainQueue:] */

void FUN_106ba248c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 8);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  if (uVar3 == param_3) {
    _objc_release(param_3);
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
      if ((uVar1 & 1) != 0) goto LAB_106ba2540;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(ulong *)(param_1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x00010bf64120(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c155aa0();
    uVar3 = param_1;
  }
  _objc_release(uVar3);
LAB_106ba2540:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ba2554; end: 106ba25fb; -[SCSharedStoryProfileFooterSectionDataProvider setUp] */

void FUN_106ba2554(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106ba25fc; end: 106ba2627;  */

void FUN_106ba25fc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdedde0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ba2628; end: 106ba262f; -[SCSharedStoryProfileFooterSectionDataProvider numberOfItemsInSection:] */

void FUN_106ba2628(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_count_1125b2420);
  return;
}



/* Entry: 106ba2630; end: 106ba26d7; -[SCSharedStoryProfileFooterSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_106ba2630(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d0da8;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d0da8;
  _objc_opt_class();
  ppuVar4 = &puStack_30;
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    uVar5 = *(undefined8 *)(puVar1 + 8);
    _objc_retain(ppuVar4);
    func_0x00010bf51e00();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_106ba277c;
    puStack_80 = &UNK_110845ab0;
    uStack_78 = uVar5;
    _objc_retain();
    ppuVar3 = ppuVar4;
    func_0x000100504554(ppuVar4,&puStack_98);
    _objc_release(ppuVar4);
    _objc_release(uStack_78);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 106ba26d8; end: 106ba277b; -[SCSharedStoryProfileFooterSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_106ba26d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf51e00();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106ba277c;
  puStack_40 = &UNK_110845ab0;
  uStack_38 = uVar2;
  _objc_retain();
  uVar1 = param_3;
  func_0x000100504554(param_3,&puStack_58);
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ba277c; end: 106ba27a7;  */

void FUN_106ba277c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0840e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_objectAtIndexedSubscript__112615968,param_2);
  return;
}



/* Entry: 106ba27a8; end: 106ba27bb; +[SCSharedStoryProfileFooterSectionDataProvider announcerIdentifier] */

void FUN_106ba27a8(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 106ba27bc; end: 106ba27bf; -[SCSharedStoryProfileFooterSectionDataProvider addListener:] */

void FUN_106ba27bc(void)

{
  return;
}



/* Entry: 106ba27c0; end: 106ba27c3; -[SCSharedStoryProfileFooterSectionDataProvider removeListener:] */

void FUN_106ba27c0(void)

{
  return;
}



/* Entry: 106ba27c4; end: 106ba27db; -[SCSharedStoryProfileFooterSectionDataProvider dataProviderDelegate] */

void FUN_106ba27c4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ba27dc; end: 106ba27e7; -[SCSharedStoryProfileFooterSectionDataProvider setDataProviderDelegate:] */

void FUN_106ba27dc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 106ba27e8; end: 106ba27ef; -[SCSharedStoryProfileFooterSectionDataProvider sectionDataModel] */

undefined8 FUN_106ba27e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106ba27f0; end: 106ba27f7; -[SCSharedStoryProfileFooterSectionDataProvider setSectionDataModel:] */

void FUN_106ba27f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106ba27f8; end: 106ba27ff; -[SCSharedStoryProfileFooterSectionDataProvider updateQueuePerformer] */

undefined8 FUN_106ba27f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106ba2800; end: 106ba282f; -[SCSharedStoryProfileFooterSectionDataProvider setUpdateQueuePerformer:] */

void FUN_106ba2800(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ba2830; end: 106ba2897; -[SCSharedStoryProfileFooterSectionDataProvider .cxx_destruct] */

void FUN_106ba2830(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ba2898; end: 106ba291f;  */

void FUN_106ba2898(undefined8 param_1,long param_2)

{
  func_0x00010c292b20();
  if (param_2 == 2) {
    func_0x00010bf3ae40();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ba2920; end: 106ba29cb; -[SCSharedStoryProfileFooterCellViewModel initWithAttributedText:engravedGhostImage:] */

undefined1 *
FUN_106ba2920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f5650;
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



/* Entry: 106ba29cc; end: 106ba29ef; -[SCSharedStoryProfileFooterCellViewModel copyWithZone:] */

undefined8 FUN_106ba29cc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106ba29f0; end: 106ba2a63; -[SCSharedStoryProfileFooterCellViewModel hash] */

undefined8 * FUN_106ba29f0(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_106ba2ae4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106ba2af0;
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
          goto LAB_106ba2af0;
        }
        goto LAB_106ba2ae4;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106ba2af0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106ba2a64; end: 106ba2b0b; -[SCSharedStoryProfileFooterCellViewModel isEqual:] */

long FUN_106ba2a64(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106ba2ae4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106ba2af0;
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
          goto LAB_106ba2af0;
        }
        goto LAB_106ba2ae4;
      }
    }
    lVar3 = 0;
  }
LAB_106ba2af0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106ba2b0c; end: 106ba2b13; -[SCSharedStoryProfileFooterCellViewModel attributedText] */

undefined8 FUN_106ba2b0c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106ba2b14; end: 106ba2b1b; -[SCSharedStoryProfileFooterCellViewModel engravedGhostImage] */

undefined8 FUN_106ba2b14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


