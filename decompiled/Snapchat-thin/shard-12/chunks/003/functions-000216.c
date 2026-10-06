/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108fb9e20; end: 108fb9e27; -[SCSnapchatterBackgroundShadowViewModel opacity] */

undefined8 FUN_108fb9e20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108fb9e28; end: 108fb9f6f; -[SCSnapchatterBasicInfoViewModel initWithPrimaryLabelAttributedText:secondaryLabelAttributedText:tertiaryLabelAttributedText:contentInsets:primarySecondaryLabelPadding:secondaryTertiaryLabelPadding:tapActionModel:] */

undefined1 *
FUN_108fb9e28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_78 = PTR_PTR_1126ffa80;
  uStack_80 = param_7;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x38) = param_1;
    *(undefined8 *)((long)puVar1 + 0x40) = param_2;
    *(undefined8 *)((long)puVar1 + 0x48) = param_3;
    *(undefined8 *)((long)puVar1 + 0x50) = param_4;
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  return (undefined1 *)puVar1;
}



/* Entry: 108fb9f70; end: 108fb9f93; -[SCSnapchatterBasicInfoViewModel copyWithZone:] */

undefined8 FUN_108fb9f70(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108fb9f94; end: 108fba0e7; -[SCSnapchatterBasicInfoViewModel hash] */

undefined8 * FUN_108fb9f94(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  double dVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ushort uVar12;
  double dVar13;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uStack_78 = uVar4;
  func_0x00010bfde980();
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = uVar5;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar10 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
  uStack_60 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar10 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
  uStack_58 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar10 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
  uStack_50 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar10 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
  uStack_48 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar10 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_40 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar10 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
  uStack_38 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_68 = uVar6;
  func_0x00010bfde980();
  puVar7 = &uStack_78;
  uStack_30 = uVar4;
  func_0x000107c3191c(puVar7,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar7;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar7 == param_3) {
LAB_108fba22c:
    puVar11 = (undefined8 *)0x1;
  }
  else {
    puVar11 = (undefined8 *)0x0;
    if ((puVar7 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108fba238;
    puVar11 = puVar7;
    _objc_opt_class(puVar7);
    puVar8 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar11);
    if ((((ulong)puVar8 & 1) != 0) &&
       (uVar12 = NEON_uminv(CONCAT26(-(ushort)((double)puVar7[10] == (double)param_3[10]),
                                     CONCAT24(-(ushort)((double)puVar7[9] == (double)param_3[9]),
                                              CONCAT22(-(ushort)((double)puVar7[8] ==
                                                                (double)param_3[8]),
                                                       -(ushort)((double)puVar7[7] ==
                                                                (double)param_3[7])))),2),
       (uVar12 & 1) != 0)) {
      dVar13 = ABS((double)puVar7[4] - (double)param_3[4]);
      dVar2 = ABS((double)puVar7[4] + (double)param_3[4]) * 2.220446049250313e-16;
      bVar3 = true;
      if ((2.2250738585072014e-308 <= dVar13) && (bVar3 = false, !NAN(dVar13) && !NAN(dVar2))) {
        bVar3 = dVar13 < dVar2;
      }
      if (bVar3) {
        dVar13 = ABS((double)puVar7[5] - (double)param_3[5]);
        dVar2 = ABS((double)puVar7[5] + (double)param_3[5]) * 2.220446049250313e-16;
        bVar3 = true;
        if ((2.2250738585072014e-308 <= dVar13) && (bVar3 = false, !NAN(dVar13) && !NAN(dVar2))) {
          bVar3 = dVar13 < dVar2;
        }
        if ((((bVar3) &&
             ((lVar9 = puVar7[1], lVar9 == param_3[1] || (func_0x00010c071ae0(), (int)lVar9 != 0))))
            && ((lVar9 = puVar7[2], lVar9 == param_3[2] || (func_0x00010c071ae0(), (int)lVar9 != 0))
               )) && ((lVar9 = puVar7[3], lVar9 == param_3[3] ||
                      (func_0x00010c071ae0(), (int)lVar9 != 0)))) {
          puVar11 = (undefined8 *)puVar7[6];
          if (puVar11 != (undefined8 *)param_3[6]) {
            func_0x00010c071ae0();
            goto LAB_108fba238;
          }
          goto LAB_108fba22c;
        }
      }
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_108fba238:
  _objc_release(param_3);
  return puVar11;
}



/* Entry: 108fba0e8; end: 108fba253; -[SCSnapchatterBasicInfoViewModel isEqual:] */

long FUN_108fba0e8(ulong param_1,undefined8 param_2,ulong param_3)

{
  double dVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ushort uVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108fba22c:
    lVar5 = 1;
  }
  else {
    lVar5 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108fba238;
    uVar3 = param_1;
    _objc_opt_class(param_1);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar3);
    if (((uVar4 & 1) != 0) &&
       (uVar6 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_1 + 0x50) ==
                                             *(double *)(param_3 + 0x50)),
                                    CONCAT24(-(ushort)(*(double *)(param_1 + 0x48) ==
                                                      *(double *)(param_3 + 0x48)),
                                             CONCAT22(-(ushort)(*(double *)(param_1 + 0x40) ==
                                                               *(double *)(param_3 + 0x40)),
                                                      -(ushort)(*(double *)(param_1 + 0x38) ==
                                                               *(double *)(param_3 + 0x38))))),2),
       (uVar6 & 1) != 0)) {
      dVar7 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
      dVar1 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) * 2.220446049250313e-16
      ;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar2 = false, !NAN(dVar7) && !NAN(dVar1))) {
        bVar2 = dVar7 < dVar1;
      }
      if (bVar2) {
        dVar7 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
        dVar1 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar7) && (bVar2 = false, !NAN(dVar7) && !NAN(dVar1))) {
          bVar2 = dVar7 < dVar1;
        }
        if ((((bVar2) &&
             ((lVar5 = *(long *)(param_1 + 8), lVar5 == *(long *)(param_3 + 8) ||
              (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
            ((lVar5 = *(long *)(param_1 + 0x10), lVar5 == *(long *)(param_3 + 0x10) ||
             (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
           ((lVar5 = *(long *)(param_1 + 0x18), lVar5 == *(long *)(param_3 + 0x18) ||
            (func_0x00010c071ae0(), (int)lVar5 != 0)))) {
          lVar5 = *(long *)(param_1 + 0x30);
          if (lVar5 != *(long *)(param_3 + 0x30)) {
            func_0x00010c071ae0();
            goto LAB_108fba238;
          }
          goto LAB_108fba22c;
        }
      }
    }
    lVar5 = 0;
  }
LAB_108fba238:
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 108fba254; end: 108fba25b; -[SCSnapchatterBasicInfoViewModel primaryLabelAttributedText] */

undefined8 FUN_108fba254(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108fba25c; end: 108fba263; -[SCSnapchatterBasicInfoViewModel secondaryLabelAttributedText] */

undefined8 FUN_108fba25c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108fba264; end: 108fba26b; -[SCSnapchatterBasicInfoViewModel tertiaryLabelAttributedText] */

undefined8 FUN_108fba264(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108fba26c; end: 108fba277; -[SCSnapchatterBasicInfoViewModel contentInsets] */

undefined8 FUN_108fba26c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108fba278; end: 108fba27f; -[SCSnapchatterBasicInfoViewModel primarySecondaryLabelPadding] */

undefined8 FUN_108fba278(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108fba280; end: 108fba287; -[SCSnapchatterBasicInfoViewModel secondaryTertiaryLabelPadding] */

undefined8 FUN_108fba280(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108fba288; end: 108fba28f; -[SCSnapchatterBasicInfoViewModel tapActionModel] */

undefined8 FUN_108fba288(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108fba290; end: 108fba2d7; -[SCSnapchatterBasicInfoViewModel .cxx_destruct] */

void FUN_108fba290(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108fba2d8; end: 108fba3bb; -[SCSnapchatterButtonAccessoryViewModel initWithActionButtonViewModel:sideActionButtonViewModel:contentInsets:actionButtonSideActionButtonPadding:] */

undefined1 *
FUN_108fba2d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126ffa88;
  uStack_70 = param_6;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_2;
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  return (undefined1 *)puVar1;
}



/* Entry: 108fba3bc; end: 108fba3df; -[SCSnapchatterButtonAccessoryViewModel copyWithZone:] */

undefined8 FUN_108fba3bc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108fba3e0; end: 108fba4f7; -[SCSnapchatterButtonAccessoryViewModel hash] */

undefined8 * FUN_108fba3e0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  double dVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined1 *puVar10;
  ushort uVar11;
  double dVar12;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar6 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = uVar4;
  func_0x00010bfde980();
  uVar9 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_50 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_48 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar9 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_40 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_38 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_30 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_58 = uVar5;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar6 == (undefined8 *)param_3) {
LAB_108fba5d0:
    puVar10 = (undefined1 *)0x1;
  }
  else {
    puVar10 = (undefined1 *)0x0;
    if ((puVar6 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108fba5dc;
    puVar10 = (undefined1 *)puVar6;
    _objc_opt_class(puVar6);
    puVar7 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar10);
    if ((((ulong)puVar7 & 1) != 0) &&
       (uVar11 = NEON_uminv(CONCAT26(-(ushort)(*(double *)((long)puVar6 + 0x38) ==
                                              *(double *)(param_3 + 0x38)),
                                     CONCAT24(-(ushort)(*(double *)((long)puVar6 + 0x30) ==
                                                       *(double *)(param_3 + 0x30)),
                                              CONCAT22(-(ushort)(*(double *)((long)puVar6 + 0x28) ==
                                                                *(double *)(param_3 + 0x28)),
                                                       -(ushort)(*(double *)((long)puVar6 + 0x20) ==
                                                                *(double *)(param_3 + 0x20))))),2),
       (uVar11 & 1) != 0)) {
      dVar12 = ABS(*(double *)((long)puVar6 + 0x18) - *(double *)(param_3 + 0x18));
      dVar2 = ABS(*(double *)((long)puVar6 + 0x18) + *(double *)(param_3 + 0x18)) *
              2.220446049250313e-16;
      bVar3 = true;
      if ((2.2250738585072014e-308 <= dVar12) && (bVar3 = false, !NAN(dVar12) && !NAN(dVar2))) {
        bVar3 = dVar12 < dVar2;
      }
      if ((bVar3) &&
         ((lVar8 = *(long *)((long)puVar6 + 8), lVar8 == *(long *)(param_3 + 8) ||
          (func_0x00010c071ae0(), (int)lVar8 != 0)))) {
        puVar10 = *(undefined1 **)((long)puVar6 + 0x10);
        if (puVar10 != *(undefined1 **)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_108fba5dc;
        }
        goto LAB_108fba5d0;
      }
    }
    puVar10 = (undefined1 *)0x0;
  }
LAB_108fba5dc:
  _objc_release(param_3);
  return (undefined8 *)puVar10;
}



/* Entry: 108fba4f8; end: 108fba5f7; -[SCSnapchatterButtonAccessoryViewModel isEqual:] */

long FUN_108fba4f8(ulong param_1,undefined8 param_2,ulong param_3)

{
  double dVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ushort uVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108fba5d0:
    lVar5 = 1;
  }
  else {
    lVar5 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108fba5dc;
    uVar3 = param_1;
    _objc_opt_class(param_1);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar3);
    if (((uVar4 & 1) != 0) &&
       (uVar6 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_1 + 0x38) ==
                                             *(double *)(param_3 + 0x38)),
                                    CONCAT24(-(ushort)(*(double *)(param_1 + 0x30) ==
                                                      *(double *)(param_3 + 0x30)),
                                             CONCAT22(-(ushort)(*(double *)(param_1 + 0x28) ==
                                                               *(double *)(param_3 + 0x28)),
                                                      -(ushort)(*(double *)(param_1 + 0x20) ==
                                                               *(double *)(param_3 + 0x20))))),2),
       (uVar6 & 1) != 0)) {
      dVar7 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar1 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
      ;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar2 = false, !NAN(dVar7) && !NAN(dVar1))) {
        bVar2 = dVar7 < dVar1;
      }
      if ((bVar2) &&
         ((lVar5 = *(long *)(param_1 + 8), lVar5 == *(long *)(param_3 + 8) ||
          (func_0x00010c071ae0(), (int)lVar5 != 0)))) {
        lVar5 = *(long *)(param_1 + 0x10);
        if (lVar5 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_108fba5dc;
        }
        goto LAB_108fba5d0;
      }
    }
    lVar5 = 0;
  }
LAB_108fba5dc:
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 108fba5f8; end: 108fba5ff; -[SCSnapchatterButtonAccessoryViewModel actionButtonViewModel] */

undefined8 FUN_108fba5f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108fba600; end: 108fba607; -[SCSnapchatterButtonAccessoryViewModel sideActionButtonViewModel] */

undefined8 FUN_108fba600(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108fba608; end: 108fba613; -[SCSnapchatterButtonAccessoryViewModel contentInsets] */

undefined8 FUN_108fba608(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108fba614; end: 108fba61b; -[SCSnapchatterButtonAccessoryViewModel actionButtonSideActionButtonPadding] */

undefined8 FUN_108fba614(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108fba61c; end: 108fba64b; -[SCSnapchatterButtonAccessoryViewModel .cxx_destruct] */

void FUN_108fba61c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108fba64c; end: 108fba713; -[SCSnapchatterDoubleButtonAccessoryViewModel initWithPrimaryActionButtonViewModel:secondaryActionButtonViewModel:buttonBackgroundColor:buttonIconColor:useSmallerSize:] */

undefined1 *
FUN_108fba64c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ffa90;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    *(undefined1 *)((long)puVar1 + 8) = param_7;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108fba714; end: 108fba737; -[SCSnapchatterDoubleButtonAccessoryViewModel copyWithZone:] */

undefined8 FUN_108fba714(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108fba738; end: 108fba7bf; -[SCSnapchatterDoubleButtonAccessoryViewModel hash] */

undefined8 * FUN_108fba738(long param_1,undefined8 param_2,undefined1 *param_3)

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
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_48 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108fba870:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108fba87c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20) &&
         (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))) &&
        (*(char *)((long)puVar3 + 8) == param_3[8])))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_108fba87c;
        }
        goto LAB_108fba870;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108fba87c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108fba7c0; end: 108fba897; -[SCSnapchatterDoubleButtonAccessoryViewModel isEqual:] */

long FUN_108fba7c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108fba870:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108fba87c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
         (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_108fba87c;
        }
        goto LAB_108fba870;
      }
    }
    lVar3 = 0;
  }
LAB_108fba87c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108fba898; end: 108fba89f; -[SCSnapchatterDoubleButtonAccessoryViewModel primaryActionButtonViewModel] */

undefined8 FUN_108fba898(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108fba8a0; end: 108fba8a7; -[SCSnapchatterDoubleButtonAccessoryViewModel secondaryActionButtonViewModel] */

undefined8 FUN_108fba8a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108fba8a8; end: 108fba8af; -[SCSnapchatterDoubleButtonAccessoryViewModel buttonBackgroundColor] */

undefined8 FUN_108fba8a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108fba8b0; end: 108fba8b7; -[SCSnapchatterDoubleButtonAccessoryViewModel buttonIconColor] */

undefined8 FUN_108fba8b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108fba8b8; end: 108fba8bf; -[SCSnapchatterDoubleButtonAccessoryViewModel useSmallerSize] */

undefined1 FUN_108fba8b8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108fba8c0; end: 108fba8ef; -[SCSnapchatterDoubleButtonAccessoryViewModel .cxx_destruct] */

void FUN_108fba8c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108fba8f0; end: 108fba977; -[SCSnapchatterCheckboxAccessoryViewModel initWithIsSelected:actionModel:] */

undefined1 *
FUN_108fba8f0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ffa98;
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



/* Entry: 108fba978; end: 108fba99b; -[SCSnapchatterCheckboxAccessoryViewModel copyWithZone:] */

undefined8 FUN_108fba978(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108fba99c; end: 108fba9ff; -[SCSnapchatterCheckboxAccessoryViewModel hash] */

ulong * FUN_108fba99c(long param_1,undefined8 param_2,ulong *param_3)

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
    if ((puVar2 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_108fbaa84;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || ((char)puVar2[1] != (char)param_3[1])) {
      puVar4 = (ulong *)0x0;
      goto LAB_108fbaa84;
    }
    puVar4 = (ulong *)puVar2[2];
    if (puVar4 != (ulong *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_108fbaa84;
    }
  }
  puVar4 = (ulong *)0x1;
LAB_108fbaa84:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 108fbaa00; end: 108fbaa9f; -[SCSnapchatterCheckboxAccessoryViewModel isEqual:] */

long FUN_108fbaa00(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108fbaa84;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_108fbaa84;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_108fbaa84;
    }
  }
  lVar3 = 1;
LAB_108fbaa84:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108fbaaa0; end: 108fbaaa7; -[SCSnapchatterCheckboxAccessoryViewModel isSelected] */

undefined1 FUN_108fbaaa0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108fbaaa8; end: 108fbaaaf; -[SCSnapchatterCheckboxAccessoryViewModel actionModel] */

undefined8 FUN_108fbaaa8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108fbaab0; end: 108fbaabb; -[SCSnapchatterCheckboxAccessoryViewModel .cxx_destruct] */

void FUN_108fbaab0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108fbaabc; end: 108fbab93; -[SCSnapchatterChatInfoViewModel initWithPrimaryLabelAttributedText:secondaryLabelAttributedText:seondaryIconImage:] */

undefined1 *
FUN_108fbaabc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ffaa0;
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



/* Entry: 108fbab94; end: 108fbabb7; -[SCSnapchatterChatInfoViewModel copyWithZone:] */

undefined8 FUN_108fbab94(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108fbabb8; end: 108fbac37; -[SCSnapchatterChatInfoViewModel hash] */

undefined8 * FUN_108fbabb8(long param_1,undefined8 param_2,undefined1 *param_3)

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
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108fbacd0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108fbacdc;
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
            goto LAB_108fbacdc;
          }
          goto LAB_108fbacd0;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108fbacdc:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108fbac38; end: 108fbacf7; -[SCSnapchatterChatInfoViewModel isEqual:] */

long FUN_108fbac38(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108fbacd0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108fbacdc;
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
            goto LAB_108fbacdc;
          }
          goto LAB_108fbacd0;
        }
      }
    }
    lVar3 = 0;
  }
LAB_108fbacdc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108fbacf8; end: 108fbacff; -[SCSnapchatterChatInfoViewModel primaryLabelAttributedText] */

undefined8 FUN_108fbacf8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108fbad00; end: 108fbad07; -[SCSnapchatterChatInfoViewModel secondaryLabelAttributedText] */

undefined8 FUN_108fbad00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108fbad08; end: 108fbad0f; -[SCSnapchatterChatInfoViewModel seondaryIconImage] */

undefined8 FUN_108fbad08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108fbad10; end: 108fbad4b; -[SCSnapchatterChatInfoViewModel .cxx_destruct] */

void FUN_108fbad10(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108fbad4c; end: 108fbadeb; -[SCSnapchatterFriendmojiAccessoryViewModel initWithFriendmojiDisplayString:contentInsets:] */

undefined1 *
FUN_108fbad4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ffaa8;
  uStack_50 = param_5;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 108fbadec; end: 108fbae0f; -[SCSnapchatterFriendmojiAccessoryViewModel copyWithZone:] */

undefined8 FUN_108fbadec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108fbae10; end: 108fbaefb; -[SCSnapchatterFriendmojiAccessoryViewModel hash] */

undefined8 * FUN_108fbae10(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ushort uVar7;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_48 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_40 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_38 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_50 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108fbaf90:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108fbaf94;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      uVar7 = NEON_uminv(CONCAT26(-(ushort)(*(double *)((long)puVar3 + 0x28) ==
                                           *(double *)(param_3 + 0x28)),
                                  CONCAT24(-(ushort)(*(double *)((long)puVar3 + 0x20) ==
                                                    *(double *)(param_3 + 0x20)),
                                           CONCAT22(-(ushort)(*(double *)((long)puVar3 + 0x18) ==
                                                             *(double *)(param_3 + 0x18)),
                                                    -(ushort)(*(double *)((long)puVar3 + 0x10) ==
                                                             *(double *)(param_3 + 0x10))))),2);
      if ((uVar7 & 1) != 0) {
        puVar6 = *(undefined1 **)((long)puVar3 + 8);
        if (puVar6 != *(undefined1 **)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_108fbaf94;
        }
        goto LAB_108fbaf90;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108fbaf94:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108fbaefc; end: 108fbafaf; -[SCSnapchatterFriendmojiAccessoryViewModel isEqual:] */

long FUN_108fbaefc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ushort uVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108fbaf90:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108fbaf94;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      uVar4 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_1 + 0x28) ==
                                           *(double *)(param_3 + 0x28)),
                                  CONCAT24(-(ushort)(*(double *)(param_1 + 0x20) ==
                                                    *(double *)(param_3 + 0x20)),
                                           CONCAT22(-(ushort)(*(double *)(param_1 + 0x18) ==
                                                             *(double *)(param_3 + 0x18)),
                                                    -(ushort)(*(double *)(param_1 + 0x10) ==
                                                             *(double *)(param_3 + 0x10))))),2);
      if ((uVar4 & 1) != 0) {
        lVar3 = *(long *)(param_1 + 8);
        if (lVar3 != *(long *)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_108fbaf94;
        }
        goto LAB_108fbaf90;
      }
    }
    lVar3 = 0;
  }
LAB_108fbaf94:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108fbafb0; end: 108fbafb7; -[SCSnapchatterFriendmojiAccessoryViewModel friendmojiDisplayString] */

undefined8 FUN_108fbafb0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108fbafb8; end: 108fbafc3; -[SCSnapchatterFriendmojiAccessoryViewModel contentInsets] */

undefined8 FUN_108fbafb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108fbafc4; end: 108fbafcf; -[SCSnapchatterFriendmojiAccessoryViewModel .cxx_destruct] */

void FUN_108fbafc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108fbafd0; end: 108fbb033; +[SCSnapchatterInfoViewModel basicWithBasicInfoViewModel:] */

void FUN_108fbafd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d77b0;
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



/* Entry: 108fbb034; end: 108fbb09f; +[SCSnapchatterInfoViewModel chatWithChatInfoViewModel:] */

void FUN_108fbb034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d77b0;
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



/* Entry: 108fbb0a0; end: 108fbb0c3; -[SCSnapchatterInfoViewModel copyWithZone:] */

undefined8 FUN_108fbb0a0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108fbb0c4; end: 108fbb13b; -[SCSnapchatterInfoViewModel hash] */

void FUN_108fbb0c4(long param_1)

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
  puStack_68 = PTR_PTR_1126ffab0;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fbb13c; end: 108fbb17f; -[SCSnapchatterInfoViewModel internalInit] */

void FUN_108fbb13c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ffab0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fbb180; end: 108fbb237; -[SCSnapchatterInfoViewModel isEqual:] */

long FUN_108fbb180(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108fbb210:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108fbb21c;
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
          goto LAB_108fbb21c;
        }
        goto LAB_108fbb210;
      }
    }
    lVar3 = 0;
  }
LAB_108fbb21c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108fbb238; end: 108fbb2bb; -[SCSnapchatterInfoViewModel matchBasic:chat:] */

void FUN_108fbb238(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_108fbb2a0;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_108fbb2a0;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_108fbb2a0:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108fbb2bc; end: 108fbb2eb; -[SCSnapchatterInfoViewModel .cxx_destruct] */

void FUN_108fbb2bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108fbb2ec; end: 108fbb3c7; -[SCSnapchatterThumbnailViewModel initWithAvatarContainerViewModel:contentInsets:sideActionButtonViewModel:isRecentlyActive:] */

undefined1 *
FUN_108fbb2ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ffab8;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    *(undefined8 *)((long)puVar1 + 0x28) = param_2;
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_9;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 108fbb3c8; end: 108fbb3eb; -[SCSnapchatterThumbnailViewModel copyWithZone:] */

undefined8 FUN_108fbb3c8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108fbb3ec; end: 108fbb4eb; -[SCSnapchatterThumbnailViewModel hash] */

undefined8 * FUN_108fbb3ec(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ushort uVar9;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_58 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_50 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar7 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_48 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_40 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar3;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_108fbb5a8:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108fbb5ac;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) && (*(char *)((long)puVar4 + 8) == param_3[8])) {
      uVar9 = NEON_uminv(CONCAT26(-(ushort)(*(double *)((long)puVar4 + 0x38) ==
                                           *(double *)(param_3 + 0x38)),
                                  CONCAT24(-(ushort)(*(double *)((long)puVar4 + 0x30) ==
                                                    *(double *)(param_3 + 0x30)),
                                           CONCAT22(-(ushort)(*(double *)((long)puVar4 + 0x28) ==
                                                             *(double *)(param_3 + 0x28)),
                                                    -(ushort)(*(double *)((long)puVar4 + 0x20) ==
                                                             *(double *)(param_3 + 0x20))))),2);
      if ((uVar9 & 1) != 0) {
        lVar6 = *(long *)((long)puVar4 + 0x10);
        if ((lVar6 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          puVar8 = *(undefined1 **)((long)puVar4 + 0x18);
          if (puVar8 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_108fbb5ac;
          }
          goto LAB_108fbb5a8;
        }
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_108fbb5ac:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 108fbb4ec; end: 108fbb5c7; -[SCSnapchatterThumbnailViewModel isEqual:] */

long FUN_108fbb4ec(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ushort uVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108fbb5a8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108fbb5ac;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      uVar4 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_1 + 0x38) ==
                                           *(double *)(param_3 + 0x38)),
                                  CONCAT24(-(ushort)(*(double *)(param_1 + 0x30) ==
                                                    *(double *)(param_3 + 0x30)),
                                           CONCAT22(-(ushort)(*(double *)(param_1 + 0x28) ==
                                                             *(double *)(param_3 + 0x28)),
                                                    -(ushort)(*(double *)(param_1 + 0x20) ==
                                                             *(double *)(param_3 + 0x20))))),2);
      if ((uVar4 & 1) != 0) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_108fbb5ac;
          }
          goto LAB_108fbb5a8;
        }
      }
    }
    lVar3 = 0;
  }
LAB_108fbb5ac:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108fbb5c8; end: 108fbb5cf; -[SCSnapchatterThumbnailViewModel avatarContainerViewModel] */

undefined8 FUN_108fbb5c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108fbb5d0; end: 108fbb5db; -[SCSnapchatterThumbnailViewModel contentInsets] */

undefined8 FUN_108fbb5d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108fbb5dc; end: 108fbb5e3; -[SCSnapchatterThumbnailViewModel sideActionButtonViewModel] */

undefined8 FUN_108fbb5dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108fbb5e4; end: 108fbb5eb; -[SCSnapchatterThumbnailViewModel isRecentlyActive] */

undefined1 FUN_108fbb5e4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108fbb5ec; end: 108fbb61b; -[SCSnapchatterThumbnailViewModel .cxx_destruct] */

void FUN_108fbb5ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108fbb61c; end: 108fbb6f3; -[SCSnapchatterViewModel initWithThumbnailViewModel:infoViewModel:accessoryViewModel:] */

undefined1 *
FUN_108fbb61c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ffac0;
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



/* Entry: 108fbb6f4; end: 108fbb717; -[SCSnapchatterViewModel copyWithZone:] */

undefined8 FUN_108fbb6f4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108fbb718; end: 108fbb797; -[SCSnapchatterViewModel hash] */

undefined8 * FUN_108fbb718(long param_1,undefined8 param_2,undefined1 *param_3)

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
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108fbb830:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108fbb83c;
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
            goto LAB_108fbb83c;
          }
          goto LAB_108fbb830;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108fbb83c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108fbb798; end: 108fbb857; -[SCSnapchatterViewModel isEqual:] */

long FUN_108fbb798(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108fbb830:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108fbb83c;
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
            goto LAB_108fbb83c;
          }
          goto LAB_108fbb830;
        }
      }
    }
    lVar3 = 0;
  }
LAB_108fbb83c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108fbb858; end: 108fbb85f; -[SCSnapchatterViewModel thumbnailViewModel] */

undefined8 FUN_108fbb858(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108fbb860; end: 108fbb867; -[SCSnapchatterViewModel infoViewModel] */

undefined8 FUN_108fbb860(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108fbb868; end: 108fbb86f; -[SCSnapchatterViewModel accessoryViewModel] */

undefined8 FUN_108fbb868(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108fbb870; end: 108fbb8ab; -[SCSnapchatterViewModel .cxx_destruct] */

void FUN_108fbb870(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108fbb8ac; end: 108fbb93b; -[SCFriendsFeedNewUserContactNonSnapchatterCellModel initWithSnapchatter:isInvited:isLoading:] */

undefined1 *
FUN_108fbb8ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ffac8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108fbb93c; end: 108fbb95f; -[SCFriendsFeedNewUserContactNonSnapchatterCellModel copyWithZone:] */

undefined8 FUN_108fbb93c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108fbb960; end: 108fbb9d3; -[SCFriendsFeedNewUserContactNonSnapchatterCellModel hash] */

undefined8 * FUN_108fbb960(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108fbba68;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(char *)((long)puVar2 + 8) != param_3[8] || (*(char *)((long)puVar2 + 9) != param_3[9]))))
    {
      puVar4 = (undefined1 *)0x0;
      goto LAB_108fbba68;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar4 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_108fbba68;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_108fbba68:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 108fbb9d4; end: 108fbba83; -[SCFriendsFeedNewUserContactNonSnapchatterCellModel isEqual:] */

long FUN_108fbb9d4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108fbba68;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
        (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) {
      lVar3 = 0;
      goto LAB_108fbba68;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_108fbba68;
    }
  }
  lVar3 = 1;
LAB_108fbba68:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108fbba84; end: 108fbba8b; -[SCFriendsFeedNewUserContactNonSnapchatterCellModel snapchatter] */

undefined8 FUN_108fbba84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108fbba8c; end: 108fbba93; -[SCFriendsFeedNewUserContactNonSnapchatterCellModel isInvited] */

undefined1 FUN_108fbba8c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108fbba94; end: 108fbba9b; -[SCFriendsFeedNewUserContactNonSnapchatterCellModel isLoading] */

undefined1 FUN_108fbba94(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108fbba9c; end: 108fbbaa7; -[SCFriendsFeedNewUserContactNonSnapchatterCellModel .cxx_destruct] */

void FUN_108fbba9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108fbbaa8; end: 108fbbb1f; -[SCSnapchatterGroupProfileAddButtonAccessoryViewModel initWithButtonAccessoryViewModel:] */

undefined1 * FUN_108fbbaa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ffad0;
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



/* Entry: 108fbbb20; end: 108fbbb43; -[SCSnapchatterGroupProfileAddButtonAccessoryViewModel copyWithZone:] */

undefined8 FUN_108fbbb20(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108fbbb44; end: 108fbbb4b; -[SCSnapchatterGroupProfileAddButtonAccessoryViewModel hash] */

void FUN_108fbbb44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 108fbbb4c; end: 108fbbbdb; -[SCSnapchatterGroupProfileAddButtonAccessoryViewModel isEqual:] */

long FUN_108fbbb4c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108fbbbc0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_108fbbbc0;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_108fbbbc0;
    }
  }
  lVar3 = 1;
LAB_108fbbbc0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108fbbbdc; end: 108fbbbe3; -[SCSnapchatterGroupProfileAddButtonAccessoryViewModel buttonAccessoryViewModel] */

undefined8 FUN_108fbbbdc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108fbbbe4; end: 108fbbbef; -[SCSnapchatterGroupProfileAddButtonAccessoryViewModel .cxx_destruct] */

void FUN_108fbbbe4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108fbbbf0; end: 108fbbc77; -[SCContainerCellViewModel xLogObjectInfo] */

void FUN_108fbbbf0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf4ddc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  func_0x00010bf4ddc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  if ((uVar2 & 1) != 0) {
    func_0x00010c2bea20(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108fbbc78; end: 108fbbda7; -[SCContainerCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108fbbc78(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ffad8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c160fc0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
    _objc_opt_new(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
    func_0x00010c1f7ac0();
    puVar3 = PTR_PTR_1126b4900;
    _objc_alloc();
    func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar6 = (long)_DAT_11277f090;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar5);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c1f7e20(*(undefined8 *)((long)puVar1 + lVar6));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar3);
    func_0x00010c1738c0(*(undefined8 *)((long)puVar1 + lVar6));
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108fbbda8; end: 108fbbeb3; -[SCContainerCollectionViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fbbda8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ffad8;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_layoutSubviews_112600e60);
  lVar4 = (long)_DAT_11277f090;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar4));
  uVar1 = param_5;
  uVar3 = param_1;
  uVar5 = param_2;
  uVar6 = param_3;
  uVar7 = param_4;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf20c00();
  _CGRectEqualToRect(param_1,param_2,param_3,param_4,uVar3,uVar5,uVar6,uVar7);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar4));
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_5 + lVar4);
    func_0x00010bf408e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069fe0();
    _objc_release(uVar3);
  }
  return;
}



/* Entry: 108fbbeb4; end: 108fbbf23; -[SCContainerCollectionViewCell applyLayoutAttributes:] */

void FUN_108fbbeb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_applyLayoutAttributes__112527ed0;
  puStack_38 = PTR_PTR_1126ffad8;
  uStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  FUN_108fdaa20(param_1,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 108fbbf24; end: 108fbbfb3; -[SCContainerCollectionViewCell collectionView:layout:sizeForItemAtIndexPath:] */

undefined1  [16]
FUN_108fbbf24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auVar1 [16];
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010bf6b020(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4ace0();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 108fbbfb4; end: 108fbc04b; -[SCContainerCollectionViewCell collectionView:layout:insetForSectionAtIndex:] */

undefined8
FUN_108fbbfb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  _objc_retain(param_5);
  func_0x00010bf6b020(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4ac40();
  _objc_release(param_5);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108fbc04c; end: 108fbc14b; -[SCContainerCollectionViewCell collectionView:willDisplayCell:forItemAtIndexPath:] */

void FUN_108fbc04c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  FUN_108fd72b4(param_7,param_5);
  uVar1 = param_7;
  func_0x00010c070ea0(param_7);
  uVar2 = param_7;
  func_0x00010c070400(param_7);
  _objc_release(param_7);
  FUN_108fd70e0(param_1,param_2,param_3,param_4,param_8,uVar1,uVar2);
  FUN_108fd6ca0(param_8,1);
  func_0x00010bf6b020(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4ad00();
  _objc_release(param_9);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}


