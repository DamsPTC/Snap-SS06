/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b89331c; end: 10b893413; -[SQLWebviewGaEvent isEqual:] */

long FUN_10b89331c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b8933ec:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b8933f8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10b8933f8;
            }
            goto LAB_10b8933ec;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b8933f8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b893414; end: 10b893467;  */

undefined8 FUN_10b893414(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  return uVar1;
}



/* Entry: 10b893468; end: 10b8934af; -[SQLWebviewGaEvent .cxx_destruct] */

void FUN_10b893468(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b8934b0; end: 10b8935a3;  */

undefined1 *
FUN_10b8934b0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_70;
  undefined *puStack_68;
  
  plVar1 = &lStack_70;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar4 = (undefined1 *)0x0;
  if (param_2 != 0) {
    puStack_68 = PTR_PTR_11270b9e0;
    lStack_70 = param_2;
    _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x18) = param_4;
      uVar2 = param_5;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x28) = param_1;
      *(undefined1 *)((long)plVar1 + 8) = param_6;
      *(undefined8 *)((long)plVar1 + 0x30) = param_7;
      *(undefined8 *)((long)plVar1 + 0x38) = param_8;
      *(undefined8 *)((long)plVar1 + 0x40) = param_9;
    }
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b8935a4; end: 10b8935c7; -[SQLWebviewPerformanceEvent copyWithZone:] */

undefined8 FUN_10b8935a4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b8935c8; end: 10b89368f; -[SQLWebviewPerformanceEvent hash] */

undefined8 * FUN_10b8935c8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x18);
  uStack_58 = *(undefined8 *)(param_1 + 0x20);
  lStack_60 = -lVar6;
  if (-1 < lVar6) {
    lStack_60 = lVar6;
  }
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_50 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  lVar6 = *(long *)(param_1 + 0x40);
  lStack_30 = -lVar6;
  if (-1 < lVar6) {
    lStack_30 = lVar6;
  }
  puVar3 = &uStack_68;
  func_0x000107c3191c(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b893794:
    puVar7 = (undefined8 *)0x1;
  }
  else {
    puVar7 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b8937a0;
    puVar7 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((((puVar3[3] == param_3[3] && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) &&
         (puVar3[6] == param_3[6])) && ((puVar3[7] == param_3[7] && (puVar3[8] == param_3[8])))))) {
      dVar9 = ABS((double)puVar3[5] - (double)param_3[5]);
      dVar8 = ABS((double)puVar3[5] + (double)param_3[5]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar9) && (bVar1 = false, !NAN(dVar9) && !NAN(dVar8))) {
        bVar1 = dVar9 < dVar8;
      }
      if ((bVar1) &&
         ((lVar6 = puVar3[2], lVar6 == param_3[2] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar7 = (undefined8 *)puVar3[4];
        if (puVar7 != (undefined8 *)param_3[4]) {
          func_0x00010c071ae0();
          goto LAB_10b8937a0;
        }
        goto LAB_10b893794;
      }
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_10b8937a0:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 10b893690; end: 10b8937bb; -[SQLWebviewPerformanceEvent isEqual:] */

long FUN_10b893690(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b893794:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b8937a0;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
          (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
         (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
        ((*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38) &&
         (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
      dVar5 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((bVar1) &&
         ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x20);
        if (lVar4 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10b8937a0;
        }
        goto LAB_10b893794;
      }
    }
    lVar4 = 0;
  }
LAB_10b8937a0:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b8937bc; end: 10b8937eb; -[SQLWebviewPerformanceEvent .cxx_destruct] */

void FUN_10b8937bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b8937ec; end: 10b893abb;  */

long * FUN_10b8937ec(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                    long param_7,long param_8,long param_9,long param_10,long param_11,long param_12
                    ,long param_13,long param_14,long param_15)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_2);
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
  if (param_1 == 0) {
    plVar1 = (long *)0x0;
  }
  else {
    puStack_68 = PTR_PTR_11270b9e8;
    plVar1 = &lStack_70;
    lStack_70 = param_1;
    _objc_msgSendSuper2(plVar1,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      lVar2 = param_2;
      func_0x00010bf51e00();
      lVar3 = plVar1[1];
      plVar1[1] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_3;
      func_0x00010bf51e00();
      lVar3 = plVar1[2];
      plVar1[2] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_4;
      func_0x00010bf51e00();
      lVar3 = plVar1[3];
      plVar1[3] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_5;
      func_0x00010bf51e00();
      lVar3 = plVar1[4];
      plVar1[4] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_6;
      func_0x00010bf51e00();
      lVar3 = plVar1[5];
      plVar1[5] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_7;
      func_0x00010bf51e00();
      lVar3 = plVar1[6];
      plVar1[6] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_8;
      func_0x00010bf51e00();
      lVar3 = plVar1[7];
      plVar1[7] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_9;
      func_0x00010bf51e00();
      lVar3 = plVar1[8];
      plVar1[8] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_10;
      func_0x00010bf51e00();
      lVar3 = plVar1[9];
      plVar1[9] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_11;
      func_0x00010bf51e00();
      lVar3 = plVar1[10];
      plVar1[10] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_12;
      func_0x00010bf51e00();
      lVar3 = plVar1[0xb];
      plVar1[0xb] = lVar2;
      _objc_release(lVar3);
      plVar1[0xc] = param_13;
      plVar1[0xd] = param_14;
      plVar1[0xe] = param_15;
    }
  }
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
  _objc_release(param_2);
  return plVar1;
}



/* Entry: 10b893abc; end: 10b893adf; -[SQLAdTouchPoint copyWithZone:] */

undefined8 FUN_10b893abc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b893ae0; end: 10b893bd3; -[SQLAdTouchPoint hash] */

undefined8 * FUN_10b893ae0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_98 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_88 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x60));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x68));
  uStack_30 = *(undefined8 *)(param_1 + 0x70);
  puVar3 = &uStack_98;
  uStack_48 = uVar1;
  func_0x000107c3191c(puVar3,0xe);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b893d5c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b893d68;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((puVar3[0xc] == param_3[0xc] && (puVar3[0xd] == param_3[0xd])) &&
        (puVar3[0xe] == param_3[0xe])))) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[5];
              if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[6];
                if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = puVar3[7];
                  if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = puVar3[8];
                    if ((lVar5 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = puVar3[9];
                      if ((lVar5 == param_3[9]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        lVar5 = puVar3[10];
                        if ((lVar5 == param_3[10]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                          puVar6 = (undefined8 *)puVar3[0xb];
                          if (puVar6 != (undefined8 *)param_3[0xb]) {
                            func_0x00010c071ae0();
                            goto LAB_10b893d68;
                          }
                          goto LAB_10b893d5c;
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
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b893d68:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b893bd4; end: 10b893d83; -[SQLAdTouchPoint isEqual:] */

long FUN_10b893bd4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b893d5c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b893d68;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60) &&
         (*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68))) &&
        (*(long *)(param_1 + 0x70) == *(long *)(param_3 + 0x70))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x38);
                  if ((lVar3 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x40);
                    if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x48);
                      if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x50);
                        if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x58);
                          if (lVar3 != *(long *)(param_3 + 0x58)) {
                            func_0x00010c071ae0();
                            goto LAB_10b893d68;
                          }
                          goto LAB_10b893d5c;
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
LAB_10b893d68:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b893d84; end: 10b893e13;  */

undefined8 FUN_10b893d84(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
  }
  return uVar1;
}



/* Entry: 10b893e14; end: 10b893eaf; -[SQLAdTouchPoint .cxx_destruct] */

void FUN_10b893e14(long param_1)

{
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



/* Entry: 10b893eb0; end: 10b89406b;  */

undefined1 *
FUN_10b893eb0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_80;
  undefined *puStack_78;
  
  plVar1 = &lStack_80;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar4 = (undefined1 *)0x0;
  if (param_2 != 0) {
    puStack_78 = PTR_PTR_11270b9f0;
    lStack_80 = param_2;
    _objc_msgSendSuper2(&lStack_80,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x10) = param_4;
      uVar2 = param_5;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_6;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_7;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_8;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x30);
      *(undefined8 *)((long)plVar1 + 0x30) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x38) = param_1;
      uVar2 = param_9;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x40);
      *(undefined8 *)((long)plVar1 + 0x40) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_10;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x48);
      *(undefined8 *)((long)plVar1 + 0x48) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b89406c; end: 10b89408f; -[SQLWebviewOperationEvent copyWithZone:] */

undefined8 FUN_10b89406c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b894090; end: 10b894167; -[SQLWebviewOperationEvent hash] */

undefined8 * FUN_10b894090(long param_1,undefined8 param_2,undefined1 *param_3)

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
  
  puVar4 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_68 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar7 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_40 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = uVar3;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10b8942a4:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b8942b0;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) && (*(long *)((long)puVar4 + 0x10) == *(long *)(param_3 + 0x10)))
    {
      dVar10 = ABS(*(double *)((long)puVar4 + 0x38) - *(double *)(param_3 + 0x38));
      dVar9 = ABS(*(double *)((long)puVar4 + 0x38) + *(double *)(param_3 + 0x38)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (((((bVar1) &&
            ((lVar6 = *(long *)((long)puVar4 + 8), lVar6 == *(long *)(param_3 + 8) ||
             (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
           ((lVar6 = *(long *)((long)puVar4 + 0x18), lVar6 == *(long *)(param_3 + 0x18) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
          ((((lVar6 = *(long *)((long)puVar4 + 0x20), lVar6 == *(long *)(param_3 + 0x20) ||
             (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
            ((lVar6 = *(long *)((long)puVar4 + 0x28), lVar6 == *(long *)(param_3 + 0x28) ||
             (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
           ((lVar6 = *(long *)((long)puVar4 + 0x30), lVar6 == *(long *)(param_3 + 0x30) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)))))) &&
         ((lVar6 = *(long *)((long)puVar4 + 0x40), lVar6 == *(long *)(param_3 + 0x40) ||
          (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = *(undefined1 **)((long)puVar4 + 0x48);
        if (puVar8 != *(undefined1 **)(param_3 + 0x48)) {
          func_0x00010c071ae0();
          goto LAB_10b8942b0;
        }
        goto LAB_10b8942a4;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_10b8942b0:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 10b894168; end: 10b8942cb; -[SQLWebviewOperationEvent isEqual:] */

long FUN_10b894168(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b8942a4:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b8942b0;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      dVar6 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
      dVar5 = ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (((((bVar1) &&
            ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
            ((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))))) &&
         ((lVar4 = *(long *)(param_1 + 0x40), lVar4 == *(long *)(param_3 + 0x40) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x48);
        if (lVar4 != *(long *)(param_3 + 0x48)) {
          func_0x00010c071ae0();
          goto LAB_10b8942b0;
        }
        goto LAB_10b8942a4;
      }
    }
    lVar4 = 0;
  }
LAB_10b8942b0:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b8942cc; end: 10b894313;  */

undefined8 FUN_10b8942cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
  }
  return uVar1;
}



/* Entry: 10b894314; end: 10b89437f; -[SQLWebviewOperationEvent .cxx_destruct] */

void FUN_10b894314(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b894380; end: 10b89458f;  */

long * FUN_10b894380(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                    long param_7,long param_8,long param_9,long param_10,long param_11,long param_12
                    ,long param_13,long param_14,long param_15,long param_16,long param_17,
                    long param_18)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_14);
  _objc_retain(param_17);
  _objc_retain(param_18);
  plVar1 = (long *)0x0;
  if (param_3 != 0) {
    puStack_78 = PTR_PTR_11270b9f8;
    plVar1 = &lStack_80;
    lStack_80 = param_3;
    _objc_msgSendSuper2(plVar1,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      lVar2 = param_4;
      func_0x00010bf51e00();
      lVar3 = plVar1[1];
      plVar1[1] = lVar2;
      _objc_release(lVar3);
      plVar1[2] = param_5;
      plVar1[3] = param_6;
      lVar2 = param_7;
      func_0x00010bf51e00();
      lVar3 = plVar1[4];
      plVar1[4] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_8;
      func_0x00010bf51e00();
      lVar3 = plVar1[5];
      plVar1[5] = lVar2;
      _objc_release(lVar3);
      plVar1[6] = param_9;
      lVar2 = param_10;
      func_0x00010bf51e00();
      lVar3 = plVar1[7];
      plVar1[7] = lVar2;
      _objc_release(lVar3);
      plVar1[8] = param_11;
      plVar1[9] = param_12;
      plVar1[10] = param_13;
      plVar1[0xb] = param_1;
      lVar2 = param_14;
      func_0x00010bf51e00();
      lVar3 = plVar1[0xc];
      plVar1[0xc] = lVar2;
      _objc_release(lVar3);
      plVar1[0xd] = param_2;
      plVar1[0xe] = param_15;
      plVar1[0xf] = param_16;
      lVar2 = param_17;
      func_0x00010bf51e00();
      lVar3 = plVar1[0x10];
      plVar1[0x10] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_18;
      func_0x00010bf51e00();
      lVar3 = plVar1[0x11];
      plVar1[0x11] = lVar2;
      _objc_release(lVar3);
    }
  }
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_14);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  return plVar1;
}



/* Entry: 10b894590; end: 10b8945b3; -[SQLInstantPageProductEvent copyWithZone:] */

undefined8 FUN_10b894590(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b8945b4; end: 10b8946db; -[SQLInstantPageProductEvent hash] */

undefined8 * FUN_10b8945b4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  double dVar8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_b0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_a8 = *(undefined8 *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x18);
  lStack_a0 = -lVar5;
  if (-1 < lVar5) {
    lStack_a0 = lVar5;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_b0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x30);
  uStack_80 = *(undefined8 *)(param_1 + 0x38);
  lStack_88 = -lVar5;
  if (-1 < lVar5) {
    lStack_88 = lVar5;
  }
  uStack_90 = uVar1;
  func_0x00010bfde980();
  uStack_78 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uVar6 = ~*(ulong *)(param_1 + 0x58) + *(ulong *)(param_1 + 0x58) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_60 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uStack_70 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x48));
  uStack_68 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x50));
  func_0x00010bfde980();
  uVar6 = ~*(ulong *)(param_1 + 0x68) + *(ulong *)(param_1 + 0x68) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_50 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uStack_40 = *(undefined8 *)(param_1 + 0x78);
  uStack_48 = *(undefined8 *)(param_1 + 0x70);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_b0,0x11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b8948c4:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b8948d0;
    puVar7 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((((ulong)puVar4 & 1) != 0) &&
         ((((*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10) &&
            (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18))) &&
           (*(long *)((long)puVar3 + 0x30) == *(long *)(param_3 + 0x30))) &&
          ((*(long *)((long)puVar3 + 0x40) == *(long *)(param_3 + 0x40) &&
           (*(long *)((long)puVar3 + 0x48) == *(long *)(param_3 + 0x48))))))) &&
        (*(long *)((long)puVar3 + 0x50) == *(long *)(param_3 + 0x50))) &&
       ((*(long *)((long)puVar3 + 0x70) == *(long *)(param_3 + 0x70) &&
        (*(long *)((long)puVar3 + 0x78) == *(long *)(param_3 + 0x78))))) {
      dVar8 = ABS(*(double *)((long)puVar3 + 0x58) - *(double *)(param_3 + 0x58));
      if ((dVar8 < 2.2250738585072014e-308) ||
         (dVar8 < ABS(*(double *)((long)puVar3 + 0x58) + *(double *)(param_3 + 0x58)) *
                  2.220446049250313e-16)) {
        dVar8 = ABS(*(double *)((long)puVar3 + 0x68) - *(double *)(param_3 + 0x68));
        if ((((((dVar8 < 2.2250738585072014e-308) ||
               (dVar8 < ABS(*(double *)((long)puVar3 + 0x68) + *(double *)(param_3 + 0x68)) *
                        2.220446049250313e-16)) &&
              ((lVar5 = *(long *)((long)puVar3 + 8), lVar5 == *(long *)(param_3 + 8) ||
               (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
             ((((lVar5 = *(long *)((long)puVar3 + 0x20), lVar5 == *(long *)(param_3 + 0x20) ||
                (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
               ((lVar5 = *(long *)((long)puVar3 + 0x28), lVar5 == *(long *)(param_3 + 0x28) ||
                (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
              ((lVar5 = *(long *)((long)puVar3 + 0x38), lVar5 == *(long *)(param_3 + 0x38) ||
               (func_0x00010c071ae0(), (int)lVar5 != 0)))))) &&
            ((lVar5 = *(long *)((long)puVar3 + 0x60), lVar5 == *(long *)(param_3 + 0x60) ||
             (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
           ((lVar5 = *(long *)((long)puVar3 + 0x80), lVar5 == *(long *)(param_3 + 0x80) ||
            (func_0x00010c071ae0(), (int)lVar5 != 0)))) {
          puVar7 = *(undefined1 **)((long)puVar3 + 0x88);
          if (puVar7 != *(undefined1 **)(param_3 + 0x88)) {
            func_0x00010c071ae0();
            goto LAB_10b8948d0;
          }
          goto LAB_10b8948c4;
        }
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_10b8948d0:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 10b8946dc; end: 10b8948eb; -[SQLInstantPageProductEvent isEqual:] */

long FUN_10b8946dc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b8948c4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b8948d0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
            (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
           (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
          ((*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40) &&
           (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))))))) &&
        (*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50))) &&
       ((*(long *)(param_1 + 0x70) == *(long *)(param_3 + 0x70) &&
        (*(long *)(param_1 + 0x78) == *(long *)(param_3 + 0x78))))) {
      dVar4 = ABS(*(double *)(param_1 + 0x58) - *(double *)(param_3 + 0x58));
      if ((dVar4 < 2.2250738585072014e-308) ||
         (dVar4 < ABS(*(double *)(param_1 + 0x58) + *(double *)(param_3 + 0x58)) *
                  2.220446049250313e-16)) {
        dVar4 = ABS(*(double *)(param_1 + 0x68) - *(double *)(param_3 + 0x68));
        if ((((((dVar4 < 2.2250738585072014e-308) ||
               (dVar4 < ABS(*(double *)(param_1 + 0x68) + *(double *)(param_3 + 0x68)) *
                        2.220446049250313e-16)) &&
              ((lVar3 = *(long *)(param_1 + 8), lVar3 == *(long *)(param_3 + 8) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
             ((((lVar3 = *(long *)(param_1 + 0x20), lVar3 == *(long *)(param_3 + 0x20) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
               ((lVar3 = *(long *)(param_1 + 0x28), lVar3 == *(long *)(param_3 + 0x28) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
              ((lVar3 = *(long *)(param_1 + 0x38), lVar3 == *(long *)(param_3 + 0x38) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
            ((lVar3 = *(long *)(param_1 + 0x60), lVar3 == *(long *)(param_3 + 0x60) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
           ((lVar3 = *(long *)(param_1 + 0x80), lVar3 == *(long *)(param_3 + 0x80) ||
            (func_0x00010c071ae0(), (int)lVar3 != 0)))) {
          lVar3 = *(long *)(param_1 + 0x88);
          if (lVar3 != *(long *)(param_3 + 0x88)) {
            func_0x00010c071ae0();
            goto LAB_10b8948d0;
          }
          goto LAB_10b8948c4;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b8948d0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b8948ec; end: 10b89491b;  */

undefined8 FUN_10b8948ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
  }
  return uVar1;
}



/* Entry: 10b89491c; end: 10b894987; -[SQLInstantPageProductEvent .cxx_destruct] */

void FUN_10b89491c(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b894988; end: 10b894b53;  */

long * FUN_10b894988(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                    undefined1 param_7,long param_8,long param_9,long param_10,long param_11,
                    long param_12,undefined1 param_13,undefined4 param_14,long param_15,
                    long param_16,long param_17)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_6);
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  plVar1 = (long *)0x0;
  if (param_1 != 0) {
    puStack_68 = PTR_PTR_11270ba00;
    plVar1 = &lStack_70;
    lStack_70 = param_1;
    _objc_msgSendSuper2(plVar1,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      lVar2 = param_2;
      func_0x00010bf51e00();
      lVar3 = plVar1[2];
      plVar1[2] = lVar2;
      _objc_release(lVar3);
      plVar1[3] = param_3;
      plVar1[4] = param_4;
      plVar1[5] = param_5;
      lVar2 = param_6;
      func_0x00010bf51e00();
      lVar3 = plVar1[6];
      plVar1[6] = lVar2;
      _objc_release(lVar3);
      *(undefined1 *)(plVar1 + 1) = param_7;
      plVar1[7] = param_8;
      plVar1[8] = param_9;
      plVar1[9] = param_10;
      plVar1[10] = param_11;
      lVar2 = param_12;
      func_0x00010bf51e00();
      lVar3 = plVar1[0xb];
      plVar1[0xb] = lVar2;
      _objc_release(lVar3);
      *(undefined1 *)((long)plVar1 + 9) = param_13;
      lVar2 = param_15;
      func_0x00010bf51e00();
      lVar3 = plVar1[0xc];
      plVar1[0xc] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_16;
      func_0x00010bf51e00();
      lVar3 = plVar1[0xd];
      plVar1[0xd] = lVar2;
      _objc_release(lVar3);
      lVar2 = param_17;
      func_0x00010bf51e00();
      lVar3 = plVar1[0xe];
      plVar1[0xe] = lVar2;
      _objc_release(lVar3);
    }
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_6);
  _objc_release(param_2);
  return plVar1;
}



/* Entry: 10b894b54; end: 10b894b77; -[SQLSponsoredSnapEvent copyWithZone:] */

undefined8 FUN_10b894b54(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b894b78; end: 10b894c53; -[SQLSponsoredSnapEvent hash] */

undefined8 * FUN_10b894b78(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_a0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_98 = *(undefined8 *)(param_1 + 0x18);
  uStack_90 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_88 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_a0 = uVar1;
  func_0x00010bfde980();
  uStack_78 = (ulong)*(byte *)(param_1 + 8);
  uStack_70 = *(undefined8 *)(param_1 + 0x38);
  lVar5 = *(long *)(param_1 + 0x40);
  lStack_68 = -lVar5;
  if (-1 < lVar5) {
    lStack_68 = lVar5;
  }
  uStack_60 = *(undefined8 *)(param_1 + 0x48);
  lVar5 = *(long *)(param_1 + 0x50);
  lStack_58 = -lVar5;
  if (-1 < lVar5) {
    lStack_58 = lVar5;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 9);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_a0,0xf);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b894dc4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b894dd0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((((ulong)puVar4 & 1) != 0) &&
         ((((*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18) &&
            (*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20))) &&
           (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))) &&
          ((*(char *)((long)puVar3 + 8) == param_3[8] &&
           (*(long *)((long)puVar3 + 0x38) == *(long *)(param_3 + 0x38))))))) &&
        (*(long *)((long)puVar3 + 0x40) == *(long *)(param_3 + 0x40))) &&
       (((*(long *)((long)puVar3 + 0x48) == *(long *)(param_3 + 0x48) &&
         (*(long *)((long)puVar3 + 0x50) == *(long *)(param_3 + 0x50))) &&
        (*(char *)((long)puVar3 + 9) == param_3[9])))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x30);
        if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x58);
          if ((lVar5 == *(long *)(param_3 + 0x58)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x60);
            if ((lVar5 == *(long *)(param_3 + 0x60)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x68);
              if ((lVar5 == *(long *)(param_3 + 0x68)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                puVar6 = *(undefined1 **)((long)puVar3 + 0x70);
                if (puVar6 != *(undefined1 **)(param_3 + 0x70)) {
                  func_0x00010c071ae0();
                  goto LAB_10b894dd0;
                }
                goto LAB_10b894dc4;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b894dd0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b894c54; end: 10b894deb; -[SQLSponsoredSnapEvent isEqual:] */

long FUN_10b894c54(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b894dc4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b894dd0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
            (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
           (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
          ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
           (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))))))) &&
        (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))) &&
       (((*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48) &&
         (*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50))) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x30);
        if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x58);
          if ((lVar3 == *(long *)(param_3 + 0x58)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x60);
            if ((lVar3 == *(long *)(param_3 + 0x60)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x68);
              if ((lVar3 == *(long *)(param_3 + 0x68)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x70);
                if (lVar3 != *(long *)(param_3 + 0x70)) {
                  func_0x00010c071ae0();
                  goto LAB_10b894dd0;
                }
                goto LAB_10b894dc4;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b894dd0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b894dec; end: 10b894e9f;  */

undefined8 FUN_10b894dec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  return uVar1;
}



/* Entry: 10b894ea0; end: 10b894eff; -[SQLSponsoredSnapEvent .cxx_destruct] */

void FUN_10b894ea0(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b894f00; end: 10b894fcb;  */

undefined1 *
FUN_10b894f00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_2);
  _objc_retain(param_6);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_11270ba08;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x10) = param_3;
      *(undefined8 *)((long)plVar1 + 0x18) = param_4;
      *(undefined8 *)((long)plVar1 + 0x20) = param_5;
      uVar2 = param_6;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_6);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 10b894fcc; end: 10b894fef; -[SQLSponsoredSnapBannerEvent copyWithZone:] */

undefined8 FUN_10b894fcc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b894ff0; end: 10b89506f; -[SQLSponsoredSnapBannerEvent hash] */

undefined8 * FUN_10b894ff0(long param_1,undefined8 param_2,undefined1 *param_3)

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
  uStack_40 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b895120:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b89512c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10) &&
         (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18))) &&
        (*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20))))) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
        if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_10b89512c;
        }
        goto LAB_10b895120;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b89512c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b895070; end: 10b895147; -[SQLSponsoredSnapBannerEvent isEqual:] */

long FUN_10b895070(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b895120:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b89512c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
         (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
        (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x28);
        if (lVar3 != *(long *)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_10b89512c;
        }
        goto LAB_10b895120;
      }
    }
    lVar3 = 0;
  }
LAB_10b89512c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b895148; end: 10b895177;  */

undefined8 FUN_10b895148(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
  }
  return uVar1;
}



/* Entry: 10b895178; end: 10b8951a7; -[SQLSponsoredSnapBannerEvent .cxx_destruct] */

void FUN_10b895178(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b8951a8; end: 10b8951cb; -[SQLInstantPageOperationalEvent copyWithZone:] */

undefined8 FUN_10b8951a8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b8951cc; end: 10b895287; -[SQLInstantPageOperationalEvent hash] */

undefined8 * FUN_10b8951cc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_70 = *(undefined8 *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x18);
  lStack_68 = -lVar5;
  if (-1 < lVar5) {
    lStack_68 = lVar5;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uStack_48 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x48);
  uStack_30 = *(undefined8 *)(param_1 + 0x50);
  lStack_38 = -lVar5;
  if (-1 < lVar5) {
    lStack_38 = lVar5;
  }
  uStack_40 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_78;
  func_0x000107c3191c(puVar3,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b8953a0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b8953ac;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((((puVar3[2] == param_3[2] && (puVar3[3] == param_3[3])) && (puVar3[6] == param_3[6])) &&
        ((puVar3[7] == param_3[7] && (puVar3[9] == param_3[9])))))) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[4];
        if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[5];
          if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[8];
            if ((lVar5 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = (undefined8 *)puVar3[10];
              if (puVar6 != (undefined8 *)param_3[10]) {
                func_0x00010c071ae0();
                goto LAB_10b8953ac;
              }
              goto LAB_10b8953a0;
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b8953ac:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b895288; end: 10b8953c7; -[SQLInstantPageOperationalEvent isEqual:] */

long FUN_10b895288(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b8953a0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b8953ac;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
          (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
         (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
        ((*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38) &&
         (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x40);
            if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x50);
              if (lVar3 != *(long *)(param_3 + 0x50)) {
                func_0x00010c071ae0();
                goto LAB_10b8953ac;
              }
              goto LAB_10b8953a0;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b8953ac:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b8953c8; end: 10b89541b; -[SQLInstantPageOperationalEvent .cxx_destruct] */

void FUN_10b8953c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b89541c; end: 10b895507;  */

undefined1 *
FUN_10b89541c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_11270ba18;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x10) = param_3;
      uVar2 = param_4;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_5;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 10b895508; end: 10b89552b; -[SQLAdPlayableEvent copyWithZone:] */

undefined8 FUN_10b895508(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b89552c; end: 10b8955af; -[SQLAdPlayableEvent hash] */

undefined8 * FUN_10b89552c(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b895658:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b895664;
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
            goto LAB_10b895664;
          }
          goto LAB_10b895658;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b895664:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b8955b0; end: 10b89567f; -[SQLAdPlayableEvent isEqual:] */

long FUN_10b8955b0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b895658:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b895664;
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
            goto LAB_10b895664;
          }
          goto LAB_10b895658;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b895664:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b895680; end: 10b8956a3;  */

undefined8 FUN_10b895680(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
  }
  return uVar1;
}



/* Entry: 10b8956a4; end: 10b8956df; -[SQLAdPlayableEvent .cxx_destruct] */

void FUN_10b8956a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b8956e0; end: 10b89583f;  */

undefined1 *
FUN_10b8956e0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_70;
  undefined *puStack_68;
  
  plVar1 = &lStack_70;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar4 = (undefined1 *)0x0;
  if (param_2 != 0) {
    puStack_68 = PTR_PTR_11270ba20;
    lStack_70 = param_2;
    _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x10) = param_1;
      *(undefined8 *)((long)plVar1 + 0x18) = param_4;
      *(undefined8 *)((long)plVar1 + 0x20) = param_5;
      uVar2 = param_6;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_7;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x30);
      *(undefined8 *)((long)plVar1 + 0x30) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_8;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x38);
      *(undefined8 *)((long)plVar1 + 0x38) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_9;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x40);
      *(undefined8 *)((long)plVar1 + 0x40) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b895840; end: 10b895863; -[SQLTooltipImpressionEvent copyWithZone:] */

undefined8 FUN_10b895840(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b895864; end: 10b89592b; -[SQLTooltipImpressionEvent hash] */

undefined8 * FUN_10b895864(long param_1,undefined8 param_2,undefined8 *param_3)

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
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_60 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uStack_58 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = uVar3;
  func_0x00010bfde980();
  puVar4 = &uStack_68;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar4,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10b895a48:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b895a54;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) && ((puVar4[3] == param_3[3] && (puVar4[4] == param_3[4])))) {
      dVar10 = ABS((double)puVar4[2] - (double)param_3[2]);
      dVar9 = ABS((double)puVar4[2] + (double)param_3[2]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if ((((bVar1) &&
           ((lVar6 = puVar4[1], lVar6 == param_3[1] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
          && ((lVar6 = puVar4[5], lVar6 == param_3[5] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
         && (((lVar6 = puVar4[6], lVar6 == param_3[6] || (func_0x00010c071ae0(), (int)lVar6 != 0))
             && ((lVar6 = puVar4[7], lVar6 == param_3[7] || (func_0x00010c071ae0(), (int)lVar6 != 0)
                 ))))) {
        puVar8 = (undefined8 *)puVar4[8];
        if (puVar8 != (undefined8 *)param_3[8]) {
          func_0x00010c071ae0();
          goto LAB_10b895a54;
        }
        goto LAB_10b895a48;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10b895a54:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10b89592c; end: 10b895a6f; -[SQLTooltipImpressionEvent isEqual:] */

long FUN_10b89592c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b895a48:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b895a54;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
        (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((((bVar1) &&
           ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         (((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
          ((lVar4 = *(long *)(param_1 + 0x38), lVar4 == *(long *)(param_3 + 0x38) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))))) {
        lVar4 = *(long *)(param_1 + 0x40);
        if (lVar4 != *(long *)(param_3 + 0x40)) {
          func_0x00010c071ae0();
          goto LAB_10b895a54;
        }
        goto LAB_10b895a48;
      }
    }
    lVar4 = 0;
  }
LAB_10b895a54:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b895a70; end: 10b895acb;  */

undefined8 FUN_10b895a70(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x10);
  }
  return 0;
}



/* Entry: 10b895acc; end: 10b895b1f; -[SQLTooltipImpressionEvent .cxx_destruct] */

void FUN_10b895acc(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b895b20; end: 10b895c13;  */

undefined1 *
FUN_10b895b20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_70;
  undefined *puStack_68;
  
  plVar1 = &lStack_70;
  _objc_retain(param_2);
  _objc_retain(param_9);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_68 = PTR_PTR_11270ba28;
    lStack_70 = param_1;
    _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x10) = param_3;
      *(undefined8 *)((long)plVar1 + 0x18) = param_4;
      *(undefined8 *)((long)plVar1 + 0x20) = param_5;
      *(undefined8 *)((long)plVar1 + 0x28) = param_6;
      *(undefined8 *)((long)plVar1 + 0x30) = param_7;
      *(undefined8 *)((long)plVar1 + 0x38) = param_8;
      uVar2 = param_9;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x40);
      *(undefined8 *)((long)plVar1 + 0x40) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x48) = param_10;
    }
  }
  _objc_release(param_9);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 10b895c14; end: 10b895c37; -[SQLAdEndCardEvent copyWithZone:] */

undefined8 FUN_10b895c14(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b895c38; end: 10b895cdb; -[SQLAdEndCardEvent hash] */

undefined8 * FUN_10b895c38(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar2 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_68 = *(undefined8 *)(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 0x38);
  uStack_38 = *(undefined8 *)(param_1 + 0x40);
  lStack_40 = -lVar4;
  if (-1 < lVar4) {
    lStack_40 = lVar4;
  }
  uStack_60 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_58 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uStack_70 = uVar1;
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x48);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  func_0x000107c3191c(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (undefined8 *)param_3) {
LAB_10b895dcc:
    puVar5 = (undefined1 *)0x1;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b895dd8;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((((ulong)puVar3 & 1) != 0) &&
         ((((*(long *)((long)puVar2 + 0x10) == *(long *)(param_3 + 0x10) &&
            (*(long *)((long)puVar2 + 0x18) == *(long *)(param_3 + 0x18))) &&
           (*(long *)((long)puVar2 + 0x20) == *(long *)(param_3 + 0x20))) &&
          ((*(long *)((long)puVar2 + 0x28) == *(long *)(param_3 + 0x28) &&
           (*(long *)((long)puVar2 + 0x30) == *(long *)(param_3 + 0x30))))))) &&
        (*(long *)((long)puVar2 + 0x38) == *(long *)(param_3 + 0x38))) &&
       (*(long *)((long)puVar2 + 0x48) == *(long *)(param_3 + 0x48))) {
      lVar4 = *(long *)((long)puVar2 + 8);
      if ((lVar4 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        puVar5 = *(undefined1 **)((long)puVar2 + 0x40);
        if (puVar5 != *(undefined1 **)(param_3 + 0x40)) {
          func_0x00010c071ae0();
          goto LAB_10b895dd8;
        }
        goto LAB_10b895dcc;
      }
    }
    puVar5 = (undefined1 *)0x0;
  }
LAB_10b895dd8:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 10b895cdc; end: 10b895df3; -[SQLAdEndCardEvent isEqual:] */

long FUN_10b895cdc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b895dcc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b895dd8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
            (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
           (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
          ((*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28) &&
           (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))))))) &&
        (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) &&
       (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x40);
        if (lVar3 != *(long *)(param_3 + 0x40)) {
          func_0x00010c071ae0();
          goto LAB_10b895dd8;
        }
        goto LAB_10b895dcc;
      }
    }
    lVar3 = 0;
  }
LAB_10b895dd8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b895df4; end: 10b895e53;  */

undefined8 FUN_10b895df4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
  }
  return uVar1;
}



/* Entry: 10b895e54; end: 10b895e83; -[SQLAdEndCardEvent .cxx_destruct] */

void FUN_10b895e54(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b895e84; end: 10b895f7f;  */

undefined1 *
FUN_10b895e84(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_60;
  undefined *puStack_58;
  
  plVar1 = &lStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar4 = (undefined1 *)0x0;
  if (param_2 != 0) {
    puStack_58 = PTR_PTR_11270ba30;
    lStack_60 = param_2;
    _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x10) = param_4;
      uVar2 = param_5;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_6;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x28) = param_1;
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b895f80; end: 10b895fa3; -[SQLAdSkOverlayEvent copyWithZone:] */

undefined8 FUN_10b895f80(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b895fa4; end: 10b89604b; -[SQLAdSkOverlayEvent hash] */

undefined8 * FUN_10b895fa4(long param_1,undefined8 param_2,undefined1 *param_3)

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
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10b896128:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b896134;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) && (*(long *)((long)puVar4 + 0x10) == *(long *)(param_3 + 0x10)))
    {
      dVar10 = ABS(*(double *)((long)puVar4 + 0x28) - *(double *)(param_3 + 0x28));
      dVar9 = ABS(*(double *)((long)puVar4 + 0x28) + *(double *)(param_3 + 0x28)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (((bVar1) &&
          ((lVar6 = *(long *)((long)puVar4 + 8), lVar6 == *(long *)(param_3 + 8) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
         ((lVar6 = *(long *)((long)puVar4 + 0x18), lVar6 == *(long *)(param_3 + 0x18) ||
          (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = *(undefined1 **)((long)puVar4 + 0x20);
        if (puVar8 != *(undefined1 **)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10b896134;
        }
        goto LAB_10b896128;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_10b896134:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 10b89604c; end: 10b89614f; -[SQLAdSkOverlayEvent isEqual:] */

long FUN_10b89604c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b896128:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b896134;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      dVar6 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
      dVar5 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (((bVar1) &&
          ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x20);
        if (lVar4 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10b896134;
        }
        goto LAB_10b896128;
      }
    }
    lVar4 = 0;
  }
LAB_10b896134:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b896150; end: 10b896187;  */

undefined8 FUN_10b896150(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
  }
  return uVar1;
}



/* Entry: 10b896188; end: 10b8961c3; -[SQLAdSkOverlayEvent .cxx_destruct] */

void FUN_10b896188(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b8961c4; end: 10b896273;  */

undefined1 * FUN_10b8961c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_11270ba38;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 10b896274; end: 10b896297; -[SQLDpaImpressionEvent copyWithZone:] */

undefined8 FUN_10b896274(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b896298; end: 10b89630b; -[SQLDpaImpressionEvent hash] */

undefined8 * FUN_10b896298(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b89638c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b896398;
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
          goto LAB_10b896398;
        }
        goto LAB_10b89638c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b896398:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b89630c; end: 10b8963b3; -[SQLDpaImpressionEvent isEqual:] */

long FUN_10b89630c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b89638c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b896398;
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
          goto LAB_10b896398;
        }
        goto LAB_10b89638c;
      }
    }
    lVar3 = 0;
  }
LAB_10b896398:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b8963b4; end: 10b8963bf;  */

undefined8 FUN_10b8963b4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
  }
  return uVar1;
}



/* Entry: 10b8963c0; end: 10b8963ef; -[SQLDpaImpressionEvent .cxx_destruct] */

void FUN_10b8963c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b8963f0; end: 10b896517;  */

undefined1 *
FUN_10b8963f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_60;
  undefined *puStack_58;
  
  plVar1 = &lStack_60;
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_58 = PTR_PTR_11270ba40;
    lStack_60 = param_1;
    _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      uVar2 = param_4;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_5;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_6;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x30);
      *(undefined8 *)((long)plVar1 + 0x30) = uVar2;
      _objc_release(uVar3);
      *(undefined1 *)((long)plVar1 + 8) = param_7;
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 10b896518; end: 10b89653b; -[SQLAdModularLensEvent copyWithZone:] */

undefined8 FUN_10b896518(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b89653c; end: 10b8965cf; -[SQLAdModularLensEvent hash] */

undefined8 * FUN_10b89653c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_50 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar3 = &uStack_58;
  uStack_38 = uVar2;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b8966a0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b8966ac;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((puVar3[3] == param_3[3] && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[4];
        if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[5];
          if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[6];
            if (puVar6 != (undefined8 *)param_3[6]) {
              func_0x00010c071ae0();
              goto LAB_10b8966ac;
            }
            goto LAB_10b8966a0;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b8966ac:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b8965d0; end: 10b8966c7; -[SQLAdModularLensEvent isEqual:] */

long FUN_10b8965d0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b8966a0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b8966ac;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if (lVar3 != *(long *)(param_3 + 0x30)) {
              func_0x00010c071ae0();
              goto LAB_10b8966ac;
            }
            goto LAB_10b8966a0;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b8966ac:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b8966c8; end: 10b89670f;  */

undefined8 FUN_10b8966c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  return uVar1;
}



/* Entry: 10b896710; end: 10b896757; -[SQLAdModularLensEvent .cxx_destruct] */

void FUN_10b896710(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b896758; end: 10b896843;  */

undefined1 *
FUN_10b896758(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_11270ba48;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x10) = param_3;
      uVar2 = param_4;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_5;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 10b896844; end: 10b896867; -[SQLAdLeadGenerationEvent copyWithZone:] */

undefined8 FUN_10b896844(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b896868; end: 10b8968f3; -[SQLAdLeadGenerationEvent hash] */

undefined8 * FUN_10b896868(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x10);
  uStack_38 = *(undefined8 *)(param_1 + 0x18);
  lStack_40 = -lVar4;
  if (-1 < lVar4) {
    lStack_40 = lVar4;
  }
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  puVar2 = &uStack_48;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == param_3) {
LAB_10b89699c:
    puVar5 = (undefined8 *)0x1;
  }
  else {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b8969a8;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) != 0) && (puVar2[2] == param_3[2])) {
      lVar4 = puVar2[1];
      if ((lVar4 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        lVar4 = puVar2[3];
        if ((lVar4 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
          puVar5 = (undefined8 *)puVar2[4];
          if (puVar5 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_10b8969a8;
          }
          goto LAB_10b89699c;
        }
      }
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_10b8969a8:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10b8968f4; end: 10b8969c3; -[SQLAdLeadGenerationEvent isEqual:] */

long FUN_10b8968f4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b89699c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b8969a8;
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
            goto LAB_10b8969a8;
          }
          goto LAB_10b89699c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b8969a8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b8969c4; end: 10b8969e7;  */

undefined8 FUN_10b8969c4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
  }
  return uVar1;
}



/* Entry: 10b8969e8; end: 10b896a23; -[SQLAdLeadGenerationEvent .cxx_destruct] */

void FUN_10b8969e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b896a24; end: 10b896b0f;  */

undefined1 *
FUN_10b896a24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_11270ba50;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x10) = param_3;
      uVar2 = param_4;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_5;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 10b896b10; end: 10b896b33; -[SQLAdLiveReviewEvent copyWithZone:] */

undefined8 FUN_10b896b10(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b896b34; end: 10b896bb7; -[SQLAdLiveReviewEvent hash] */

undefined8 * FUN_10b896b34(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b896c60:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b896c6c;
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
            goto LAB_10b896c6c;
          }
          goto LAB_10b896c60;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b896c6c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b896bb8; end: 10b896c87; -[SQLAdLiveReviewEvent isEqual:] */

long FUN_10b896bb8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b896c60:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b896c6c;
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
            goto LAB_10b896c6c;
          }
          goto LAB_10b896c60;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b896c6c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b896c88; end: 10b896cab;  */

undefined8 FUN_10b896c88(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
  }
  return uVar1;
}



/* Entry: 10b896cac; end: 10b896ce7; -[SQLAdLiveReviewEvent .cxx_destruct] */

void FUN_10b896cac(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b896ce8; end: 10b896ceb; -[SCCAdCheckoutBrowserType__Enum init] */

void FUN_10b896ce8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b896cec; end: 10b896cf3; -[SCCAdCheckoutLogEventType__Enum init] */

void FUN_10b896cec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,6);
  return;
}



/* Entry: 10b896cf4; end: 10b896cfb; -[SCCAdInstanPageLogPageType__Enum init] */

void FUN_10b896cf4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,0xe);
  return;
}



/* Entry: 10b896cfc; end: 10b896d03; -[SCCAdInstantPageCartActionType__Enum init] */

void FUN_10b896cfc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b896d04; end: 10b896d07; -[SCCAdInstantPageCartLaunchSource__Enum init] */

void FUN_10b896d04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b896d08; end: 10b896d0f; -[SCCAdInstantPageLogAddressType__Enum init] */

void FUN_10b896d08(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b896d10; end: 10b896d17; -[SCCAdInstantPageLogEventType__Enum init] */

void FUN_10b896d10(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,0x22);
  return;
}



/* Entry: 10b896d18; end: 10b896d1f; -[SCCAdInstantPageLogLaunchSource__Enum init] */

void FUN_10b896d18(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,10);
  return;
}



/* Entry: 10b896d20; end: 10b896d27; -[SCCAdInstantPageRequestType__Enum init] */

void FUN_10b896d20(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b896d28; end: 10b896d2b; -[SCCAdInstantPageUserGender__Enum init] */

void FUN_10b896d28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}


