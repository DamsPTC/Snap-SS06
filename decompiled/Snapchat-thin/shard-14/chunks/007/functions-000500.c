/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b6218f0; end: 10b6218f7; -[SCStoriesSavedStoryInfo storyTitle] */

undefined8 FUN_10b6218f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6218f8; end: 10b6218ff; -[SCStoriesSavedStoryInfo encodedContentModerationStatus] */

undefined8 FUN_10b6218f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b621900; end: 10b62193b; -[SCStoriesSavedStoryInfo .cxx_destruct] */

void FUN_10b621900(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b62193c; end: 10b6219d3; -[SCStoriesSnapIdentifiers hash] */

undefined8 * FUN_10b62193c(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_10b621a9c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b621aa8;
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
                goto LAB_10b621aa8;
              }
              goto LAB_10b621a9c;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b621aa8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b6219d4; end: 10b621ac3; -[SCStoriesSnapIdentifiers isEqual:] */

long FUN_10b6219d4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b621a9c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b621aa8;
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
                goto LAB_10b621aa8;
              }
              goto LAB_10b621a9c;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b621aa8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b621ac4; end: 10b621acb; -[SCStoriesSnapIdentifiers geoFilterId] */

undefined8 FUN_10b621ac4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b621acc; end: 10b621ad3; -[SCStoriesSnapIdentifiers storyFilterId] */

undefined8 FUN_10b621acc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b621ad4; end: 10b621adb; -[SCStoriesSnapIdentifiers lensId] */

undefined8 FUN_10b621ad4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b621adc; end: 10b621ae3; -[SCStoriesSnapIdentifiers lensRankingId] */

undefined8 FUN_10b621adc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b621ae4; end: 10b621b9f; -[SCStoriesSnapTimeInfo hash] */

ulong * FUN_10b621ae4(long param_1,undefined8 param_2,ulong *param_3)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  double dVar6;
  double dVar7;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_38 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uVar4 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_28 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar4 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_20 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  puVar2 = &uStack_38;
  func_0x000107c3191c(puVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == param_3) {
    puVar5 = (ulong *)0x1;
  }
  else {
    puVar5 = (ulong *)0x0;
    if ((puVar2 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar5 = puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar5);
      if ((((ulong)puVar3 & 1) != 0) && ((char)puVar2[1] == (char)param_3[1])) {
        dVar7 = ABS((double)puVar2[2] - (double)param_3[2]);
        dVar6 = ABS((double)puVar2[2] + (double)param_3[2]) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar6))) {
          bVar1 = dVar7 < dVar6;
        }
        if (bVar1) {
          dVar7 = ABS((double)puVar2[3] - (double)param_3[3]);
          dVar6 = ABS((double)puVar2[3] + (double)param_3[3]) * 2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar6))) {
            bVar1 = dVar7 < dVar6;
          }
          if (bVar1) {
            dVar6 = ABS((double)puVar2[4] + (double)param_3[4]) * 2.220446049250313e-16;
            if (dVar6 <= 2.2250738585072014e-308) {
              dVar6 = 2.2250738585072014e-308;
            }
            puVar5 = (ulong *)(ulong)(ABS((double)puVar2[4] - (double)param_3[4]) < dVar6);
            goto LAB_10b621ca8;
          }
        }
      }
      puVar5 = (ulong *)0x0;
    }
  }
LAB_10b621ca8:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10b621ba0; end: 10b621cc3; -[SCStoriesSnapTimeInfo isEqual:] */

bool FUN_10b621ba0(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
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
            goto LAB_10b621ca8;
          }
        }
      }
      bVar1 = false;
    }
  }
LAB_10b621ca8:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b621cc4; end: 10b621ccb; -[SCStoriesSnapTimeInfo duration] */

undefined8 FUN_10b621cc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b621ccc; end: 10b621cd3; -[SCStoriesSnapTimeInfo isDurationInfinite] */

undefined1 FUN_10b621ccc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b621cd4; end: 10b621cdb; -[SCStoriesSnapTimeInfo expirationDate] */

undefined8 FUN_10b621cd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b621cdc; end: 10b621db7; -[SCStoriesSnapMedia hash] */

undefined8 * FUN_10b621cdc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_88 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x28);
  uStack_68 = *(undefined8 *)(param_1 + 0x30);
  lStack_70 = -lVar5;
  if (-1 < lVar5) {
    lStack_70 = lVar5;
  }
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfde980();
  uStack_58 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x48);
  uStack_40 = *(undefined8 *)(param_1 + 0x50);
  lStack_48 = -lVar5;
  if (-1 < lVar5) {
    lStack_48 = lVar5;
  }
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  puVar3 = &uStack_88;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar3,0xc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b621f08:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b621f14;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((((puVar3[5] == param_3[5] && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) &&
         (puVar3[9] == param_3[9])) && (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))
        ))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[6];
            if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[7];
              if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[8];
                if ((lVar5 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = puVar3[10];
                  if ((lVar5 == param_3[10]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    puVar6 = (undefined8 *)puVar3[0xb];
                    if (puVar6 != (undefined8 *)param_3[0xb]) {
                      func_0x00010c071ae0();
                      goto LAB_10b621f14;
                    }
                    goto LAB_10b621f08;
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
LAB_10b621f14:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b621db8; end: 10b621f2f; -[SCStoriesSnapMedia isEqual:] */

long FUN_10b621db8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b621f08:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b621f14;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28) &&
          (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
         (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x40);
                if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x50);
                  if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x58);
                    if (lVar3 != *(long *)(param_3 + 0x58)) {
                      func_0x00010c071ae0();
                      goto LAB_10b621f14;
                    }
                    goto LAB_10b621f08;
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
LAB_10b621f14:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b621f30; end: 10b621f37; -[SCStoriesSnapMedia id] */

undefined8 FUN_10b621f30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b621f38; end: 10b621f3f; -[SCStoriesSnapMedia key] */

undefined8 FUN_10b621f38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b621f40; end: 10b621f47; -[SCStoriesSnapMedia iv] */

undefined8 FUN_10b621f40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b621f48; end: 10b621f4f; -[SCStoriesSnapMedia type] */

undefined8 FUN_10b621f48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b621f50; end: 10b621f57; -[SCStoriesSnapMedia appUrl] */

undefined8 FUN_10b621f50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b621f58; end: 10b621f5f; -[SCStoriesSnapMedia directToStorageUrl] */

undefined8 FUN_10b621f58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b621f60; end: 10b621f67; -[SCStoriesSnapMedia isZipped] */

undefined1 FUN_10b621f60(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b621f68; end: 10b621f6f; -[SCStoriesSnapMedia boltContentObjects] */

undefined8 FUN_10b621f68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b621f70; end: 10b621f77; -[SCStoriesSnapMedia animatedSnapType] */

undefined8 FUN_10b621f70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b621f78; end: 10b621f7f; -[SCStoriesSnapMedia boltWatermarkedVideoUrl] */

undefined8 FUN_10b621f78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b621f80; end: 10b621f87; -[SCStoriesSnapMedia flatNonWatermarkVideoUrl] */

undefined8 FUN_10b621f80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b621f88; end: 10b621f8f; -[SCStoriesSnapMedia isSubtitleEncrypted] */

undefined1 FUN_10b621f88(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b621f90; end: 10b6220fb; -[SCStoriesBoltContentObjects initWithLegacyZippedCo:mediaCo:overlayCo:thumbnailCo:firstFrame:subtitleCo:] */

undefined1 *
FUN_10b621f90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112706b58;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6220fc; end: 10b62211f; -[SCStoriesBoltContentObjects copyWithZone:] */

undefined8 FUN_10b6220fc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b622120; end: 10b6221c3; -[SCStoriesBoltContentObjects hash] */

undefined8 * FUN_10b622120(long param_1,undefined8 param_2,undefined8 *param_3)

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
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b6222a4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b6222b0;
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
            lVar5 = puVar3[4];
            if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[5];
              if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                puVar6 = (undefined8 *)puVar3[6];
                if (puVar6 != (undefined8 *)param_3[6]) {
                  func_0x00010c071ae0();
                  goto LAB_10b6222b0;
                }
                goto LAB_10b6222a4;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b6222b0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b6221c4; end: 10b6222cb; -[SCStoriesBoltContentObjects isEqual:] */

long FUN_10b6221c4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b6222a4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6222b0;
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
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x30);
                if (lVar3 != *(long *)(param_3 + 0x30)) {
                  func_0x00010c071ae0();
                  goto LAB_10b6222b0;
                }
                goto LAB_10b6222a4;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b6222b0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b6222cc; end: 10b6222d3; -[SCStoriesBoltContentObjects legacyZippedCo] */

undefined8 FUN_10b6222cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6222d4; end: 10b6222db; -[SCStoriesBoltContentObjects mediaCo] */

undefined8 FUN_10b6222d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6222dc; end: 10b6222e3; -[SCStoriesBoltContentObjects overlayCo] */

undefined8 FUN_10b6222dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6222e4; end: 10b6222eb; -[SCStoriesBoltContentObjects thumbnailCo] */

undefined8 FUN_10b6222e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b6222ec; end: 10b6222f3; -[SCStoriesBoltContentObjects firstFrame] */

undefined8 FUN_10b6222ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b6222f4; end: 10b6222fb; -[SCStoriesBoltContentObjects subtitleCo] */

undefined8 FUN_10b6222f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b6222fc; end: 10b62235b; -[SCStoriesBoltContentObjects .cxx_destruct] */

void FUN_10b6222fc(long param_1)

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



/* Entry: 10b62235c; end: 10b622423; -[SCStoriesThumbnailMedia hash] */

undefined8 * FUN_10b62235c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
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
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b62254c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b622558;
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
              lVar5 = *(long *)((long)puVar3 + 0x28);
              if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x30);
                if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x38);
                  if ((lVar5 == *(long *)(param_3 + 0x38)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = *(long *)((long)puVar3 + 0x40);
                    if ((lVar5 == *(long *)(param_3 + 0x40)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      puVar6 = *(undefined1 **)((long)puVar3 + 0x48);
                      if (puVar6 != *(undefined1 **)(param_3 + 0x48)) {
                        func_0x00010c071ae0();
                        goto LAB_10b622558;
                      }
                      goto LAB_10b62254c;
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
LAB_10b622558:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b622424; end: 10b622573; -[SCStoriesThumbnailMedia isEqual:] */

long FUN_10b622424(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b62254c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b622558;
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
                      if (lVar3 != *(long *)(param_3 + 0x48)) {
                        func_0x00010c071ae0();
                        goto LAB_10b622558;
                      }
                      goto LAB_10b62254c;
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
LAB_10b622558:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b622574; end: 10b6225f3; -[SCStoriesSnapCaptureInfo hash] */

undefined8 * FUN_10b622574(long param_1,undefined8 param_2,undefined1 *param_3)

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
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 8));
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_50,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b622694:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b6226a0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(long *)((long)puVar3 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10))))) {
      lVar5 = *(long *)((long)puVar3 + 0x18);
      if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x20);
        if (puVar6 != *(undefined1 **)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10b6226a0;
        }
        goto LAB_10b622694;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b6226a0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b6225f4; end: 10b6226bb; -[SCStoriesSnapCaptureInfo isEqual:] */

long FUN_10b6225f4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b622694:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6226a0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10b6226a0;
        }
        goto LAB_10b622694;
      }
    }
    lVar3 = 0;
  }
LAB_10b6226a0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b6226bc; end: 10b6226c3; -[SCStoriesSnapCaptureInfo camera] */

undefined8 FUN_10b6226bc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6226c4; end: 10b6226cb; -[SCStoriesSnapCaptureInfo orientation] */

undefined8 FUN_10b6226c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6226cc; end: 10b6226d3; -[SCStoriesSnapCaptureInfo encryptedGeoLogString] */

undefined8 FUN_10b6226cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6226d4; end: 10b6226db; -[SCStoriesSnapCaptureInfo postLocation] */

undefined8 FUN_10b6226d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b6226dc; end: 10b622763; -[SCStoriesLocation initWithLongitude:latitude:altitude:horizontalAccuracy:verticalAccuracy:course:speed:timestamp:] */

void FUN_10b6226dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_112706b70;
  uStack_60 = param_9;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
  }
  return;
}



/* Entry: 10b622764; end: 10b622787; -[SCStoriesLocation copyWithZone:] */

undefined8 FUN_10b622764(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b622788; end: 10b6228db; -[SCStoriesLocation hash] */

ulong * FUN_10b622788(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  double dVar7;
  double dVar8;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_58 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_50 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_48 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_40 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_38 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_20 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  puVar3 = &uStack_58;
  func_0x000107c3191c(puVar3,8);
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
              dVar8 = ABS((double)puVar3[4] - (double)param_3[4]);
              dVar7 = ABS((double)puVar3[4] + (double)param_3[4]) * 2.220446049250313e-16;
              bVar2 = true;
              if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7)))
              {
                bVar2 = dVar8 < dVar7;
              }
              if (bVar2) {
                dVar8 = ABS((double)puVar3[5] - (double)param_3[5]);
                dVar7 = ABS((double)puVar3[5] + (double)param_3[5]) * 2.220446049250313e-16;
                bVar2 = true;
                if ((2.2250738585072014e-308 <= dVar8) &&
                   (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
                  bVar2 = dVar8 < dVar7;
                }
                if (bVar2) {
                  dVar7 = ABS((double)puVar3[6] - (double)param_3[6]);
                  if ((dVar7 < 2.2250738585072014e-308) ||
                     (dVar7 < ABS((double)puVar3[6] + (double)param_3[6]) * 2.220446049250313e-16))
                  {
                    dVar7 = ABS((double)puVar3[7] - (double)param_3[7]);
                    if ((dVar7 < 2.2250738585072014e-308) ||
                       (dVar7 < ABS((double)puVar3[7] + (double)param_3[7]) * 2.220446049250313e-16)
                       ) {
                      dVar7 = ABS((double)puVar3[8] + (double)param_3[8]) * 2.220446049250313e-16;
                      if (dVar7 <= 2.2250738585072014e-308) {
                        dVar7 = 2.2250738585072014e-308;
                      }
                      puVar6 = (ulong *)(ulong)(ABS((double)puVar3[8] - (double)param_3[8]) < dVar7)
                      ;
                      goto LAB_10b622aa4;
                    }
                  }
                }
              }
            }
          }
        }
      }
      puVar6 = (ulong *)0x0;
    }
  }
LAB_10b622aa4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b6228dc; end: 10b622af7; -[SCStoriesLocation isEqual:] */

bool FUN_10b6228dc(ulong param_1,undefined8 param_2,ulong param_3)

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
              dVar5 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
              dVar4 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                      2.220446049250313e-16;
              bVar1 = true;
              if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4)))
              {
                bVar1 = dVar5 < dVar4;
              }
              if (bVar1) {
                dVar5 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
                dVar4 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                        2.220446049250313e-16;
                bVar1 = true;
                if ((2.2250738585072014e-308 <= dVar5) &&
                   (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
                  bVar1 = dVar5 < dVar4;
                }
                if (bVar1) {
                  dVar4 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
                  if ((dVar4 < 2.2250738585072014e-308) ||
                     (dVar4 < ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) *
                              2.220446049250313e-16)) {
                    dVar4 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
                    if ((dVar4 < 2.2250738585072014e-308) ||
                       (dVar4 < ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) *
                                2.220446049250313e-16)) {
                      dVar4 = ABS(*(double *)(param_1 + 0x40) + *(double *)(param_3 + 0x40)) *
                              2.220446049250313e-16;
                      if (dVar4 <= 2.2250738585072014e-308) {
                        dVar4 = 2.2250738585072014e-308;
                      }
                      bVar1 = ABS(*(double *)(param_1 + 0x40) - *(double *)(param_3 + 0x40)) < dVar4
                      ;
                      goto LAB_10b622aa4;
                    }
                  }
                }
              }
            }
          }
        }
      }
      bVar1 = false;
    }
  }
LAB_10b622aa4:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b622af8; end: 10b622aff; -[SCStoriesLocation longitude] */

undefined8 FUN_10b622af8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b622b00; end: 10b622b07; -[SCStoriesLocation latitude] */

undefined8 FUN_10b622b00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b622b08; end: 10b622b0f; -[SCStoriesLocation altitude] */

undefined8 FUN_10b622b08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b622b10; end: 10b622b17; -[SCStoriesLocation horizontalAccuracy] */

undefined8 FUN_10b622b10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b622b18; end: 10b622b1f; -[SCStoriesLocation verticalAccuracy] */

undefined8 FUN_10b622b18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b622b20; end: 10b622b27; -[SCStoriesLocation course] */

undefined8 FUN_10b622b20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b622b28; end: 10b622b2f; -[SCStoriesLocation speed] */

undefined8 FUN_10b622b28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b622b30; end: 10b622b37; -[SCStoriesLocation timestamp] */

undefined8 FUN_10b622b30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b622b38; end: 10b622bb7; -[SCStoriesSnapRenderInfo hash] */

undefined8 * FUN_10b622b38(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_10b622c50:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b622c5c;
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
            goto LAB_10b622c5c;
          }
          goto LAB_10b622c50;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b622c5c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b622bb8; end: 10b622c77; -[SCStoriesSnapRenderInfo isEqual:] */

long FUN_10b622bb8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b622c50:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b622c5c;
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
            goto LAB_10b622c5c;
          }
          goto LAB_10b622c50;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b622c5c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b622c78; end: 10b622c7f; -[SCStoriesSnapRenderInfo attachmentUrl] */

undefined8 FUN_10b622c78(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b622c80; end: 10b622c87; -[SCStoriesSnapRenderInfo framing] */

undefined8 FUN_10b622c80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b622c88; end: 10b622c8f; -[SCStoriesSnapRenderInfo captionText] */

undefined8 FUN_10b622c88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b622c90; end: 10b622cdb; -[SCStoriesSnapFraming initWithCreateTimeUTCms:source:] */

void FUN_10b622c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706b80;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 10b622cdc; end: 10b622cff; -[SCStoriesSnapFraming copyWithZone:] */

undefined8 FUN_10b622cdc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b622d00; end: 10b622d5b; -[SCStoriesSnapFraming hash] */

undefined8 * FUN_10b622d00(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 8));
  uStack_28 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  func_0x000107c3191c(&uStack_30,2);
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



/* Entry: 10b622d5c; end: 10b622df3; -[SCStoriesSnapFraming isEqual:] */

bool FUN_10b622d5c(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 10b622df4; end: 10b622dfb; -[SCStoriesSnapFraming createTimeUTCms] */

undefined8 FUN_10b622df4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b622dfc; end: 10b622e03; -[SCStoriesSnapFraming source] */

undefined8 FUN_10b622dfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b622e04; end: 10b622e9b; -[SCStoriesSnapAdInfo hash] */

long * FUN_10b622e04(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  plVar3 = &lStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lStack_50 = -lVar5;
  if (-1 < lVar5) {
    lStack_50 = lVar5;
  }
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
  func_0x000107c3191c(&lStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == (long *)param_3) {
LAB_10b622f5c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b622f68;
    puVar6 = (undefined1 *)plVar3;
    _objc_opt_class(plVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)plVar3 + 8) == *(long *)(param_3 + 8))) {
      lVar5 = *(long *)((long)plVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)plVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)plVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)plVar3 + 0x28);
            if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10b622f68;
            }
            goto LAB_10b622f5c;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b622f68:
  _objc_release(param_3);
  return (long *)puVar6;
}



/* Entry: 10b622e9c; end: 10b622f83; -[SCStoriesSnapAdInfo isEqual:] */

long FUN_10b622e9c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b622f5c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b622f68;
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
              goto LAB_10b622f68;
            }
            goto LAB_10b622f5c;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b622f68:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b622f84; end: 10b622f8b; -[SCStoriesSnapAdInfo brandFriendliness] */

undefined8 FUN_10b622f84(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b622f8c; end: 10b622f93; -[SCStoriesSnapAdInfo adOrganicSignals] */

undefined8 FUN_10b622f8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b622f94; end: 10b622f9b; -[SCStoriesSnapAdInfo skAdNetworkAttributionInfo] */

undefined8 FUN_10b622f94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b622f9c; end: 10b622fa3; -[SCStoriesSnapAdInfo iosAppId] */

undefined8 FUN_10b622f9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b622fa4; end: 10b622fab; -[SCStoriesSnapAdInfo adId] */

undefined8 FUN_10b622fa4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b622fac; end: 10b6231c3; -[SCStoriesSKAdNetworkAttributionInfo initWithAdNetworkIdentifier:campaignIdentifier:timestampInMs:sourceAppStoreIdentifier:clickVersion:clickNonce:clickSignature:viewThroughVersion:viewThroughNonce:viewThroughSignature:sourceIdentifier:aakCompactJWS:] */

undefined8 *
FUN_10b622fac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined4 param_13,undefined4 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_112706b90;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)(puVar1 + 1) = param_4;
    puVar1[3] = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0xc) = param_13;
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b6231c4; end: 10b6231e7; -[SCStoriesSKAdNetworkAttributionInfo copyWithZone:] */

undefined8 FUN_10b6231c4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6231e8; end: 10b6232c3; -[SCStoriesSKAdNetworkAttributionInfo hash] */

undefined8 * FUN_10b6231e8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lStack_80 = (long)*(int *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x18);
  uStack_70 = *(undefined8 *)(param_1 + 0x20);
  lStack_78 = -lVar5;
  if (-1 < lVar5) {
    lStack_78 = lVar5;
  }
  uStack_88 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  lStack_38 = (long)*(int *)(param_1 + 0xc);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_88;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,0xc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b62341c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b623428;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(int *)(puVar3 + 1) == *(int *)(param_3 + 1) && (puVar3[3] == param_3[3])) &&
        (*(int *)((long)puVar3 + 0xc) == *(int *)((long)param_3 + 0xc))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
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
                        goto LAB_10b623428;
                      }
                      goto LAB_10b62341c;
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
LAB_10b623428:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b6232c4; end: 10b623443; -[SCStoriesSKAdNetworkAttributionInfo isEqual:] */

long FUN_10b6232c4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b62341c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b623428;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(int *)(param_1 + 8) == *(int *)(param_3 + 8) &&
         (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
        (*(int *)(param_1 + 0xc) == *(int *)(param_3 + 0xc))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x40);
                if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x48);
                  if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x50);
                    if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x58);
                      if (lVar3 != *(long *)(param_3 + 0x58)) {
                        func_0x00010c071ae0();
                        goto LAB_10b623428;
                      }
                      goto LAB_10b62341c;
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
LAB_10b623428:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b623444; end: 10b62344b; -[SCStoriesSKAdNetworkAttributionInfo adNetworkIdentifier] */

undefined8 FUN_10b623444(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b62344c; end: 10b623453; -[SCStoriesSKAdNetworkAttributionInfo campaignIdentifier] */

undefined4 FUN_10b62344c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b623454; end: 10b62345b; -[SCStoriesSKAdNetworkAttributionInfo timestampInMs] */

undefined8 FUN_10b623454(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b62345c; end: 10b623463; -[SCStoriesSKAdNetworkAttributionInfo sourceAppStoreIdentifier] */

undefined8 FUN_10b62345c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b623464; end: 10b62346b; -[SCStoriesSKAdNetworkAttributionInfo clickVersion] */

undefined8 FUN_10b623464(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b62346c; end: 10b623473; -[SCStoriesSKAdNetworkAttributionInfo clickNonce] */

undefined8 FUN_10b62346c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b623474; end: 10b62347b; -[SCStoriesSKAdNetworkAttributionInfo clickSignature] */

undefined8 FUN_10b623474(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b62347c; end: 10b623483; -[SCStoriesSKAdNetworkAttributionInfo viewThroughVersion] */

undefined8 FUN_10b62347c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b623484; end: 10b62348b; -[SCStoriesSKAdNetworkAttributionInfo viewThroughNonce] */

undefined8 FUN_10b623484(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b62348c; end: 10b623493; -[SCStoriesSKAdNetworkAttributionInfo viewThroughSignature] */

undefined8 FUN_10b62348c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b623494; end: 10b62349b; -[SCStoriesSKAdNetworkAttributionInfo sourceIdentifier] */

undefined4 FUN_10b623494(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b62349c; end: 10b6234a3; -[SCStoriesSKAdNetworkAttributionInfo aakCompactJWS] */

undefined8 FUN_10b62349c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b6234a4; end: 10b623527; -[SCStoriesSKAdNetworkAttributionInfo .cxx_destruct] */

void FUN_10b6234a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b623528; end: 10b6235db; -[SCStoriesSnapSponsor initWithProfileId:displayName:sponsorStatus:] */

undefined1 *
FUN_10b623528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112706b98;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
    *(undefined4 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6235dc; end: 10b6235ff; -[SCStoriesSnapSponsor copyWithZone:] */

undefined8 FUN_10b6235dc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b623600; end: 10b623677; -[SCStoriesSnapSponsor hash] */

undefined8 * FUN_10b623600(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  lStack_30 = (long)*(int *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b623708:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b623714;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(int *)((long)puVar3 + 8) == *(int *)(param_3 + 8))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b623714;
        }
        goto LAB_10b623708;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b623714:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b623678; end: 10b62372f; -[SCStoriesSnapSponsor isEqual:] */

long FUN_10b623678(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b623708:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b623714;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(int *)(param_1 + 8) == *(int *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b623714;
        }
        goto LAB_10b623708;
      }
    }
    lVar3 = 0;
  }
LAB_10b623714:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b623730; end: 10b623737; -[SCStoriesSnapSponsor profileId] */

undefined8 FUN_10b623730(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b623738; end: 10b62373f; -[SCStoriesSnapSponsor displayName] */

undefined8 FUN_10b623738(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


