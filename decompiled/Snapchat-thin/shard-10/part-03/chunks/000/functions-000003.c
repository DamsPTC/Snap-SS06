/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107d0aaa8; end: 107d0aaaf; -[SCSnapPostViewAnimationData feedId] */

undefined8 FUN_107d0aaa8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d0aab0; end: 107d0aab7; -[SCSnapPostViewAnimationData conversationId] */

undefined8 FUN_107d0aab0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d0aab8; end: 107d0aaf3; -[SCSnapPostViewAnimationData .cxx_destruct] */

void FUN_107d0aab8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107d0aaf4; end: 107d0ab6b; -[SCSnapReplayAnimationData initWithConversationId:] */

undefined1 * FUN_107d0aaf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fa958;
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



/* Entry: 107d0ab6c; end: 107d0ab8f; -[SCSnapReplayAnimationData copyWithZone:] */

undefined8 FUN_107d0ab6c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d0ab90; end: 107d0ab97; -[SCSnapReplayAnimationData hash] */

void FUN_107d0ab90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 107d0ab98; end: 107d0ac27; -[SCSnapReplayAnimationData isEqual:] */

long FUN_107d0ab98(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d0ac0c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_107d0ac0c;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_107d0ac0c;
    }
  }
  lVar3 = 1;
LAB_107d0ac0c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d0ac28; end: 107d0ac2f; -[SCSnapReplayAnimationData conversationId] */

undefined8 FUN_107d0ac28(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d0ac30; end: 107d0ac3b; -[SCSnapReplayAnimationData .cxx_destruct] */

void FUN_107d0ac30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d0ac3c; end: 107d0acab; -[SCAlphaAnimationData initWithDuration:delay:startAlpha:endAlpha:options:] */

void FUN_107d0ac3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126fa960;
  uStack_50 = param_5;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  return;
}



/* Entry: 107d0acac; end: 107d0accf; -[SCAlphaAnimationData copyWithZone:] */

undefined8 FUN_107d0acac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d0acd0; end: 107d0adab; -[SCAlphaAnimationData hash] */

ulong * FUN_107d0acd0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  double dVar7;
  double dVar8;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar3 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_40 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_38 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uStack_20 = *(undefined8 *)(param_1 + 0x28);
  func_0x000100505190(&uStack_40,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (ulong *)param_3) {
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar6 = (undefined1 *)puVar3;
      _objc_opt_class(puVar3);
      puVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar6);
      if ((((ulong)puVar4 & 1) != 0) &&
         (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))) {
        dVar8 = ABS(*(double *)((long)puVar3 + 8) - *(double *)(param_3 + 8));
        dVar7 = ABS(*(double *)((long)puVar3 + 8) + *(double *)(param_3 + 8)) *
                2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
          bVar2 = dVar8 < dVar7;
        }
        if (bVar2) {
          dVar8 = ABS(*(double *)((long)puVar3 + 0x10) - *(double *)(param_3 + 0x10));
          dVar7 = ABS(*(double *)((long)puVar3 + 0x10) + *(double *)(param_3 + 0x10)) *
                  2.220446049250313e-16;
          bVar2 = true;
          if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
            bVar2 = dVar8 < dVar7;
          }
          if (bVar2) {
            dVar8 = ABS(*(double *)((long)puVar3 + 0x18) - *(double *)(param_3 + 0x18));
            dVar7 = ABS(*(double *)((long)puVar3 + 0x18) + *(double *)(param_3 + 0x18)) *
                    2.220446049250313e-16;
            bVar2 = true;
            if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
              bVar2 = dVar8 < dVar7;
            }
            if (bVar2) {
              dVar7 = ABS(*(double *)((long)puVar3 + 0x20) + *(double *)(param_3 + 0x20)) *
                      2.220446049250313e-16;
              if (dVar7 <= 2.2250738585072014e-308) {
                dVar7 = 2.2250738585072014e-308;
              }
              puVar6 = (undefined1 *)
                       (ulong)(ABS(*(double *)((long)puVar3 + 0x20) - *(double *)(param_3 + 0x20)) <
                              dVar7);
              goto LAB_107d0aee8;
            }
          }
        }
      }
      puVar6 = (undefined1 *)0x0;
    }
  }
LAB_107d0aee8:
  _objc_release(param_3);
  return (ulong *)puVar6;
}



/* Entry: 107d0adac; end: 107d0af03; -[SCAlphaAnimationData isEqual:] */

bool FUN_107d0adac(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) {
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
              goto LAB_107d0aee8;
            }
          }
        }
      }
      bVar1 = false;
    }
  }
LAB_107d0aee8:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107d0af04; end: 107d0af0b; -[SCAlphaAnimationData duration] */

undefined8 FUN_107d0af04(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d0af0c; end: 107d0af13; -[SCAlphaAnimationData delay] */

undefined8 FUN_107d0af0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d0af14; end: 107d0af1b; -[SCAlphaAnimationData startAlpha] */

undefined8 FUN_107d0af14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d0af1c; end: 107d0af23; -[SCAlphaAnimationData endAlpha] */

undefined8 FUN_107d0af1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d0af24; end: 107d0af2b; -[SCAlphaAnimationData options] */

undefined8 FUN_107d0af24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d0af2c; end: 107d0afb7; -[SCSubstituteTextAnimationData initWithSubstituteText:duration:resetDelay:] */

undefined1 *
FUN_107d0af2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fa968;
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



/* Entry: 107d0afb8; end: 107d0afdb; -[SCSubstituteTextAnimationData copyWithZone:] */

undefined8 FUN_107d0afb8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d0afdc; end: 107d0b087; -[SCSubstituteTextAnimationData hash] */

undefined8 * FUN_107d0afdc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_38 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_40 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107d0b158:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107d0b164;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      dVar8 = ABS(*(double *)((long)puVar3 + 0x10) - *(double *)(param_3 + 0x10));
      dVar7 = ABS(*(double *)((long)puVar3 + 0x10) + *(double *)(param_3 + 0x10)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        dVar8 = ABS(*(double *)((long)puVar3 + 0x18) - *(double *)(param_3 + 0x18));
        dVar7 = ABS(*(double *)((long)puVar3 + 0x18) + *(double *)(param_3 + 0x18)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
          bVar1 = dVar8 < dVar7;
        }
        if (bVar1) {
          puVar6 = *(undefined1 **)((long)puVar3 + 8);
          if (puVar6 != *(undefined1 **)(param_3 + 8)) {
            func_0x00010c071ae0();
            goto LAB_107d0b164;
          }
          goto LAB_107d0b158;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107d0b164:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107d0b088; end: 107d0b17f; -[SCSubstituteTextAnimationData isEqual:] */

long FUN_107d0b088(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d0b158:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d0b164;
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
        dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
        dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (bVar1) {
          lVar4 = *(long *)(param_1 + 8);
          if (lVar4 != *(long *)(param_3 + 8)) {
            func_0x00010c071ae0();
            goto LAB_107d0b164;
          }
          goto LAB_107d0b158;
        }
      }
    }
    lVar4 = 0;
  }
LAB_107d0b164:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 107d0b180; end: 107d0b187; -[SCSubstituteTextAnimationData substituteText] */

undefined8 FUN_107d0b180(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d0b188; end: 107d0b18f; -[SCSubstituteTextAnimationData duration] */

undefined8 FUN_107d0b188(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d0b190; end: 107d0b197; -[SCSubstituteTextAnimationData resetDelay] */

undefined8 FUN_107d0b190(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d0b198; end: 107d0b1a3; -[SCSubstituteTextAnimationData .cxx_destruct] */

void FUN_107d0b198(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d0b1a4; end: 107d0b24b; -[SCTranslationAnimationData initWithDuration:delay:damping:velocity:xStartMultiplier:xStartOffset:yStartMultiplier:yStartOffset:xEndMultiplier:xEndOffset:yEndMultiplier:yEndOffset:options:] */

void FUN_107d0b1a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_1126fa970;
  uStack_70 = param_9;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    *(undefined8 *)((long)puVar1 + 0x48) = in_stack_00000000;
    *(undefined8 *)((long)puVar1 + 0x50) = in_stack_00000008;
    *(undefined8 *)((long)puVar1 + 0x58) = in_stack_00000010;
    *(undefined8 *)((long)puVar1 + 0x60) = in_stack_00000018;
    *(undefined8 *)((long)puVar1 + 0x68) = param_11;
  }
  return;
}



/* Entry: 107d0b24c; end: 107d0b26f; -[SCTranslationAnimationData copyWithZone:] */

undefined8 FUN_107d0b24c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d0b270; end: 107d0b44b; -[SCTranslationAnimationData hash] */

ulong * FUN_107d0b270(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  double dVar7;
  double dVar8;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar3 = &uStack_80;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_80 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_80 = uStack_80 ^ uStack_80 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_78 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_78 = uStack_78 ^ uStack_78 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_70 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_68 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_60 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_58 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_50 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_48 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_40 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_38 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar5 = ~*(ulong *)(param_1 + 0x58) + *(ulong *)(param_1 + 0x58) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x60) + *(ulong *)(param_1 + 0x60) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uStack_20 = *(undefined8 *)(param_1 + 0x68);
  func_0x000100505190(&uStack_80,0xd);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (ulong *)param_3) {
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar6 = (undefined1 *)puVar3;
      _objc_opt_class(puVar3);
      puVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar6);
      if ((((ulong)puVar4 & 1) != 0) &&
         (*(long *)((long)puVar3 + 0x68) == *(long *)(param_3 + 0x68))) {
        dVar8 = ABS(*(double *)((long)puVar3 + 8) - *(double *)(param_3 + 8));
        dVar7 = ABS(*(double *)((long)puVar3 + 8) + *(double *)(param_3 + 8)) *
                2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
          bVar2 = dVar8 < dVar7;
        }
        if (bVar2) {
          dVar8 = ABS(*(double *)((long)puVar3 + 0x10) - *(double *)(param_3 + 0x10));
          dVar7 = ABS(*(double *)((long)puVar3 + 0x10) + *(double *)(param_3 + 0x10)) *
                  2.220446049250313e-16;
          bVar2 = true;
          if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
            bVar2 = dVar8 < dVar7;
          }
          if (bVar2) {
            dVar8 = ABS(*(double *)((long)puVar3 + 0x18) - *(double *)(param_3 + 0x18));
            dVar7 = ABS(*(double *)((long)puVar3 + 0x18) + *(double *)(param_3 + 0x18)) *
                    2.220446049250313e-16;
            bVar2 = true;
            if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
              bVar2 = dVar8 < dVar7;
            }
            if (bVar2) {
              dVar8 = ABS(*(double *)((long)puVar3 + 0x20) - *(double *)(param_3 + 0x20));
              dVar7 = ABS(*(double *)((long)puVar3 + 0x20) + *(double *)(param_3 + 0x20)) *
                      2.220446049250313e-16;
              bVar2 = true;
              if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7)))
              {
                bVar2 = dVar8 < dVar7;
              }
              if (bVar2) {
                dVar7 = ABS(*(double *)((long)puVar3 + 0x28) - *(double *)(param_3 + 0x28));
                if ((dVar7 < 2.2250738585072014e-308) ||
                   (dVar7 < ABS(*(double *)((long)puVar3 + 0x28) + *(double *)(param_3 + 0x28)) *
                            2.220446049250313e-16)) {
                  dVar7 = ABS(*(double *)((long)puVar3 + 0x30) - *(double *)(param_3 + 0x30));
                  if ((dVar7 < 2.2250738585072014e-308) ||
                     (dVar7 < ABS(*(double *)((long)puVar3 + 0x30) + *(double *)(param_3 + 0x30)) *
                              2.220446049250313e-16)) {
                    dVar7 = ABS(*(double *)((long)puVar3 + 0x38) - *(double *)(param_3 + 0x38));
                    if ((dVar7 < 2.2250738585072014e-308) ||
                       (dVar7 < ABS(*(double *)((long)puVar3 + 0x38) + *(double *)(param_3 + 0x38))
                                * 2.220446049250313e-16)) {
                      dVar7 = ABS(*(double *)((long)puVar3 + 0x40) - *(double *)(param_3 + 0x40));
                      if ((dVar7 < 2.2250738585072014e-308) ||
                         (dVar7 < ABS(*(double *)((long)puVar3 + 0x40) + *(double *)(param_3 + 0x40)
                                     ) * 2.220446049250313e-16)) {
                        dVar7 = ABS(*(double *)((long)puVar3 + 0x48) - *(double *)(param_3 + 0x48));
                        if ((dVar7 < 2.2250738585072014e-308) ||
                           (dVar7 < ABS(*(double *)((long)puVar3 + 0x48) +
                                        *(double *)(param_3 + 0x48)) * 2.220446049250313e-16)) {
                          dVar7 = ABS(*(double *)((long)puVar3 + 0x50) - *(double *)(param_3 + 0x50)
                                     );
                          if ((dVar7 < 2.2250738585072014e-308) ||
                             (dVar7 < ABS(*(double *)((long)puVar3 + 0x50) +
                                          *(double *)(param_3 + 0x50)) * 2.220446049250313e-16)) {
                            dVar7 = ABS(*(double *)((long)puVar3 + 0x58) -
                                        *(double *)(param_3 + 0x58));
                            if ((dVar7 < 2.2250738585072014e-308) ||
                               (dVar7 < ABS(*(double *)((long)puVar3 + 0x58) +
                                            *(double *)(param_3 + 0x58)) * 2.220446049250313e-16)) {
                              dVar7 = ABS(*(double *)((long)puVar3 + 0x60) +
                                          *(double *)(param_3 + 0x60)) * 2.220446049250313e-16;
                              if (dVar7 <= 2.2250738585072014e-308) {
                                dVar7 = 2.2250738585072014e-308;
                              }
                              puVar6 = (undefined1 *)
                                       (ulong)(ABS(*(double *)((long)puVar3 + 0x60) -
                                                   *(double *)(param_3 + 0x60)) < dVar7);
                              goto LAB_107d0b708;
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
  }
LAB_107d0b708:
  _objc_release(param_3);
  return (ulong *)puVar6;
}



/* Entry: 107d0b44c; end: 107d0b75b; -[SCTranslationAnimationData isEqual:] */

bool FUN_107d0b44c(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68))) {
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
                dVar4 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
                if ((dVar4 < 2.2250738585072014e-308) ||
                   (dVar4 < ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                            2.220446049250313e-16)) {
                  dVar4 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
                  if ((dVar4 < 2.2250738585072014e-308) ||
                     (dVar4 < ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) *
                              2.220446049250313e-16)) {
                    dVar4 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
                    if ((dVar4 < 2.2250738585072014e-308) ||
                       (dVar4 < ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) *
                                2.220446049250313e-16)) {
                      dVar4 = ABS(*(double *)(param_1 + 0x40) - *(double *)(param_3 + 0x40));
                      if ((dVar4 < 2.2250738585072014e-308) ||
                         (dVar4 < ABS(*(double *)(param_1 + 0x40) + *(double *)(param_3 + 0x40)) *
                                  2.220446049250313e-16)) {
                        dVar4 = ABS(*(double *)(param_1 + 0x48) - *(double *)(param_3 + 0x48));
                        if ((dVar4 < 2.2250738585072014e-308) ||
                           (dVar4 < ABS(*(double *)(param_1 + 0x48) + *(double *)(param_3 + 0x48)) *
                                    2.220446049250313e-16)) {
                          dVar4 = ABS(*(double *)(param_1 + 0x50) - *(double *)(param_3 + 0x50));
                          if ((dVar4 < 2.2250738585072014e-308) ||
                             (dVar4 < ABS(*(double *)(param_1 + 0x50) + *(double *)(param_3 + 0x50))
                                      * 2.220446049250313e-16)) {
                            dVar4 = ABS(*(double *)(param_1 + 0x58) - *(double *)(param_3 + 0x58));
                            if ((dVar4 < 2.2250738585072014e-308) ||
                               (dVar4 < ABS(*(double *)(param_1 + 0x58) +
                                            *(double *)(param_3 + 0x58)) * 2.220446049250313e-16)) {
                              dVar4 = ABS(*(double *)(param_1 + 0x60) + *(double *)(param_3 + 0x60))
                                      * 2.220446049250313e-16;
                              if (dVar4 <= 2.2250738585072014e-308) {
                                dVar4 = 2.2250738585072014e-308;
                              }
                              bVar1 = ABS(*(double *)(param_1 + 0x60) - *(double *)(param_3 + 0x60))
                                      < dVar4;
                              goto LAB_107d0b708;
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
      bVar1 = false;
    }
  }
LAB_107d0b708:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107d0b75c; end: 107d0b763; -[SCTranslationAnimationData duration] */

undefined8 FUN_107d0b75c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d0b764; end: 107d0b76b; -[SCTranslationAnimationData delay] */

undefined8 FUN_107d0b764(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d0b76c; end: 107d0b773; -[SCTranslationAnimationData damping] */

undefined8 FUN_107d0b76c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d0b774; end: 107d0b77b; -[SCTranslationAnimationData velocity] */

undefined8 FUN_107d0b774(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d0b77c; end: 107d0b783; -[SCTranslationAnimationData xStartMultiplier] */

undefined8 FUN_107d0b77c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d0b784; end: 107d0b78b; -[SCTranslationAnimationData xStartOffset] */

undefined8 FUN_107d0b784(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107d0b78c; end: 107d0b793; -[SCTranslationAnimationData yStartMultiplier] */

undefined8 FUN_107d0b78c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107d0b794; end: 107d0b79b; -[SCTranslationAnimationData yStartOffset] */

undefined8 FUN_107d0b794(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107d0b79c; end: 107d0b7a3; -[SCTranslationAnimationData xEndMultiplier] */

undefined8 FUN_107d0b79c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107d0b7a4; end: 107d0b7ab; -[SCTranslationAnimationData xEndOffset] */

undefined8 FUN_107d0b7a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107d0b7ac; end: 107d0b7b3; -[SCTranslationAnimationData yEndMultiplier] */

undefined8 FUN_107d0b7ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107d0b7b4; end: 107d0b7bb; -[SCTranslationAnimationData yEndOffset] */

undefined8 FUN_107d0b7b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107d0b7bc; end: 107d0b7c3; -[SCTranslationAnimationData options] */

undefined8 FUN_107d0b7bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107d0b7c4; end: 107d0b82f; +[SCFriendsFeedClearMenuActionData groupWithGroupId:] */

void FUN_107d0b7c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c2d38;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d0b830; end: 107d0b8f3; +[SCFriendsFeedClearMenuActionData snapchatterWithIdentifier:conversationId:recipientSnapchatter:] */

void FUN_107d0b830(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c2d38;
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
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d0b8f4; end: 107d0b917; -[SCFriendsFeedClearMenuActionData copyWithZone:] */

undefined8 FUN_107d0b8f4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d0b918; end: 107d0b9a7; -[SCFriendsFeedClearMenuActionData hash] */

void FUN_107d0b918(long param_1)

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
  puStack_78 = PTR_PTR_1126fa978;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d0b9a8; end: 107d0b9eb; -[SCFriendsFeedClearMenuActionData internalInit] */

void FUN_107d0b9a8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fa978;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d0b9ec; end: 107d0bad3; -[SCFriendsFeedClearMenuActionData isEqual:] */

long FUN_107d0b9ec(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d0baac:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d0bab8;
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
              goto LAB_107d0bab8;
            }
            goto LAB_107d0baac;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107d0bab8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d0bad4; end: 107d0bb5f; -[SCFriendsFeedClearMenuActionData matchSnapchatter:group:] */

void FUN_107d0bad4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x28));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d0bb60; end: 107d0bba7; -[SCFriendsFeedClearMenuActionData .cxx_destruct] */

void FUN_107d0bb60(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107d0bba8; end: 107d0bc67; -[SCFriendsFeedStreakRestoreActionData initWithRecipientSnapchatter:conversationId:streakCount:streakExpirationTimestampMS:] */

undefined1 *
FUN_107d0bba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126fa980;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d0bc68; end: 107d0bc8b; -[SCFriendsFeedStreakRestoreActionData copyWithZone:] */

undefined8 FUN_107d0bc68(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d0bc8c; end: 107d0bd0b; -[SCFriendsFeedStreakRestoreActionData hash] */

undefined8 * FUN_107d0bc8c(long param_1,undefined8 param_2,undefined8 *param_3)

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
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  puVar3 = &uStack_48;
  uStack_40 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_107d0bdac:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107d0bdb8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && ((puVar3[3] == param_3[3] && (puVar3[4] == param_3[4])))) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_107d0bdb8;
        }
        goto LAB_107d0bdac;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107d0bdb8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107d0bd0c; end: 107d0bdd3; -[SCFriendsFeedStreakRestoreActionData isEqual:] */

long FUN_107d0bd0c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d0bdac:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d0bdb8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
        (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_107d0bdb8;
        }
        goto LAB_107d0bdac;
      }
    }
    lVar3 = 0;
  }
LAB_107d0bdb8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d0bdd4; end: 107d0bddb; -[SCFriendsFeedStreakRestoreActionData recipientSnapchatter] */

undefined8 FUN_107d0bdd4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d0bddc; end: 107d0bde3; -[SCFriendsFeedStreakRestoreActionData conversationId] */

undefined8 FUN_107d0bddc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d0bde4; end: 107d0bdeb; -[SCFriendsFeedStreakRestoreActionData streakCount] */

undefined8 FUN_107d0bde4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d0bdec; end: 107d0bdf3; -[SCFriendsFeedStreakRestoreActionData streakExpirationTimestampMS] */

undefined8 FUN_107d0bdec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d0bdf4; end: 107d0be23; -[SCFriendsFeedStreakRestoreActionData .cxx_destruct] */

void FUN_107d0bdf4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d0be24; end: 107d0becf; -[SCPeekAPeekAnimationData initWithFeedId:animationData:] */

undefined1 *
FUN_107d0be24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fa988;
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



/* Entry: 107d0bed0; end: 107d0bef3; -[SCPeekAPeekAnimationData copyWithZone:] */

undefined8 FUN_107d0bed0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d0bef4; end: 107d0bf67; -[SCPeekAPeekAnimationData hash] */

undefined8 * FUN_107d0bef4(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_107d0bfe8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107d0bff4;
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
          goto LAB_107d0bff4;
        }
        goto LAB_107d0bfe8;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_107d0bff4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 107d0bf68; end: 107d0c00f; -[SCPeekAPeekAnimationData isEqual:] */

long FUN_107d0bf68(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d0bfe8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d0bff4;
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
          goto LAB_107d0bff4;
        }
        goto LAB_107d0bfe8;
      }
    }
    lVar3 = 0;
  }
LAB_107d0bff4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d0c010; end: 107d0c017; -[SCPeekAPeekAnimationData feedId] */

undefined8 FUN_107d0c010(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d0c018; end: 107d0c01f; -[SCPeekAPeekAnimationData animationData] */

undefined8 FUN_107d0c018(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d0c020; end: 107d0c04f; -[SCPeekAPeekAnimationData .cxx_destruct] */

void FUN_107d0c020(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d0c050; end: 107d0c187; -[SCFriendsFeedGroupJoinPermissionActionData initWithGroupDisplayName:groupInviterId:loggedInUserId:conversationParticipantIds:conversationId:] */

undefined1 *
FUN_107d0c050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126fa990;
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



/* Entry: 107d0c188; end: 107d0c1ab; -[SCFriendsFeedGroupJoinPermissionActionData copyWithZone:] */

undefined8 FUN_107d0c188(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d0c1ac; end: 107d0c243; -[SCFriendsFeedGroupJoinPermissionActionData hash] */

undefined8 * FUN_107d0c1ac(long param_1,undefined8 param_2,undefined1 *param_3)

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
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_107d0c30c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107d0c318;
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
                goto LAB_107d0c318;
              }
              goto LAB_107d0c30c;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_107d0c318:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 107d0c244; end: 107d0c333; -[SCFriendsFeedGroupJoinPermissionActionData isEqual:] */

long FUN_107d0c244(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d0c30c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d0c318;
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
                goto LAB_107d0c318;
              }
              goto LAB_107d0c30c;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_107d0c318:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d0c334; end: 107d0c33b; -[SCFriendsFeedGroupJoinPermissionActionData groupDisplayName] */

undefined8 FUN_107d0c334(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d0c33c; end: 107d0c343; -[SCFriendsFeedGroupJoinPermissionActionData groupInviterId] */

undefined8 FUN_107d0c33c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d0c344; end: 107d0c34b; -[SCFriendsFeedGroupJoinPermissionActionData loggedInUserId] */

undefined8 FUN_107d0c344(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d0c34c; end: 107d0c353; -[SCFriendsFeedGroupJoinPermissionActionData conversationParticipantIds] */

undefined8 FUN_107d0c34c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d0c354; end: 107d0c35b; -[SCFriendsFeedGroupJoinPermissionActionData conversationId] */

undefined8 FUN_107d0c354(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d0c35c; end: 107d0c3af; -[SCFriendsFeedGroupJoinPermissionActionData .cxx_destruct] */

void FUN_107d0c35c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d0c3b0; end: 107d0c3f7; -[SCFeedIconPeekAPeekAnimationData initWithShouldHide:] */

void FUN_107d0c3b0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fa998;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 107d0c3f8; end: 107d0c41b; -[SCFeedIconPeekAPeekAnimationData copyWithZone:] */

undefined8 FUN_107d0c3f8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d0c41c; end: 107d0c423; -[SCFeedIconPeekAPeekAnimationData hash] */

undefined1 FUN_107d0c41c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107d0c424; end: 107d0c4ab; -[SCFeedIconPeekAPeekAnimationData isEqual:] */

bool FUN_107d0c424(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 107d0c4ac; end: 107d0c4b3; -[SCFeedIconPeekAPeekAnimationData shouldHide] */

undefined1 FUN_107d0c4ac(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107d0c4b4; end: 107d0c577; -[SCSnapReplayScope initWithDelegate:snapReplayRequest:uiContainer:] */

undefined1 *
FUN_107d0c4b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fa9a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d0c578; end: 107d0c58f; -[SCSnapReplayScope delegate] */

void FUN_107d0c578(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d0c590; end: 107d0c59b; -[SCSnapReplayScope setDelegate:] */

void FUN_107d0c590(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 107d0c59c; end: 107d0c5a3; -[SCSnapReplayScope snapReplayRequest] */

undefined8 FUN_107d0c59c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d0c5a4; end: 107d0c5d3; -[SCSnapReplayScope setSnapReplayRequest:] */

void FUN_107d0c5a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d0c5d4; end: 107d0c5db; -[SCSnapReplayScope uiContainer] */

undefined8 FUN_107d0c5d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d0c5dc; end: 107d0c60b; -[SCSnapReplayScope setUiContainer:] */

void FUN_107d0c5dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d0c60c; end: 107d0c643; -[SCSnapReplayScope .cxx_destruct] */

void FUN_107d0c60c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107d0c644; end: 107d0c6af; +[SCSnapReplayRequestInfo replayAllSnapsWithConversationId:isReplayAgain:] */

void FUN_107d0c644(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c28e8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
  puVar2[0x18] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d0c6b0; end: 107d0c757; +[SCSnapReplayRequestInfo replaySnapWithConversationId:messageId:isGroupConversation:] */

void FUN_107d0c6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c28e8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
  puVar2[0x30] = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107d0c758; end: 107d0c77b; -[SCSnapReplayRequestInfo copyWithZone:] */

undefined8 FUN_107d0c758(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107d0c77c; end: 107d0c807; -[SCSnapReplayRequestInfo hash] */

void FUN_107d0c77c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 0x30);
  puVar3 = &uStack_58;
  uStack_38 = uVar2;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_1126fa9a8;
  puStack_90 = puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d0c808; end: 107d0c84b; -[SCSnapReplayRequestInfo internalInit] */

void FUN_107d0c808(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fa9a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d0c84c; end: 107d0c93b; -[SCSnapReplayRequestInfo isEqual:] */

long FUN_107d0c84c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107d0c914:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107d0c920;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
         (*(char *)(param_1 + 0x18) == *(char *)(param_3 + 0x18))) &&
        (*(char *)(param_1 + 0x30) == *(char *)(param_3 + 0x30))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if (lVar3 != *(long *)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_107d0c920;
          }
          goto LAB_107d0c914;
        }
      }
    }
    lVar3 = 0;
  }
LAB_107d0c920:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107d0c93c; end: 107d0c9cb; -[SCSnapReplayRequestInfo matchReplayAllSnaps:replaySnap:] */

void FUN_107d0c93c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                 *(undefined1 *)(param_1 + 0x30));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x18));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d0c9cc; end: 107d0ca07; -[SCSnapReplayRequestInfo .cxx_destruct] */

void FUN_107d0c9cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107d0ca08; end: 107d0cb03; -[SCLensFriendsFeedContextServices initWithDataFetcher:dataStore:logger:impressionTracker:] */

undefined1 *
FUN_107d0ca08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fa9b0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d0cb04; end: 107d0cb0b; -[SCLensFriendsFeedContextServices lensFriendsFeedContextDataFetcher] */

undefined8 FUN_107d0cb04(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


