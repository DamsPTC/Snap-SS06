/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10afe21c0; end: 10afe2277; -[SCPlaceStoryPreviewData isEqual:] */

long FUN_10afe21c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afe2250:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afe225c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10afe225c;
        }
        goto LAB_10afe2250;
      }
    }
    lVar3 = 0;
  }
LAB_10afe225c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afe2278; end: 10afe227f; -[SCPlaceStoryPreviewData placeId] */

undefined8 FUN_10afe2278(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afe2280; end: 10afe2287; -[SCPlaceStoryPreviewData thumbnailUrl] */

undefined8 FUN_10afe2280(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afe2288; end: 10afe228f; -[SCPlaceStoryPreviewData numOfSnaps] */

undefined8 FUN_10afe2288(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afe2290; end: 10afe22bf; -[SCPlaceStoryPreviewData .cxx_destruct] */

void FUN_10afe2290(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afe22c0; end: 10afe23cb; -[SCMapSnapChatCardMetadata initWithDisplayName:latitude:longitude:zoomLevel:thumbnailUrl:thumbnailWithOverlayUrl:mediaType:] */

undefined1 *
FUN_10afe22c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_112703dd8;
  uStack_70 = param_4;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
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
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 10afe23cc; end: 10afe23ef; -[SCMapSnapChatCardMetadata copyWithZone:] */

undefined8 FUN_10afe23cc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afe23f0; end: 10afe24d3; -[SCMapSnapChatCardMetadata hash] */

undefined8 * FUN_10afe23f0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_58 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar8 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_50 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uStack_48 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10afe2618:
    puVar9 = (undefined1 *)0x1;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afe2624;
    puVar9 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((ulong)puVar5 & 1) != 0) && (*(long *)((long)puVar4 + 0x38) == *(long *)(param_3 + 0x38)))
    {
      dVar11 = ABS(*(double *)((long)puVar4 + 0x10) - *(double *)(param_3 + 0x10));
      dVar10 = ABS(*(double *)((long)puVar4 + 0x10) + *(double *)(param_3 + 0x10)) *
               2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar10))) {
        bVar1 = dVar11 < dVar10;
      }
      if (bVar1) {
        dVar11 = ABS(*(double *)((long)puVar4 + 0x18) - *(double *)(param_3 + 0x18));
        dVar10 = ABS(*(double *)((long)puVar4 + 0x18) + *(double *)(param_3 + 0x18)) *
                 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar10))) {
          bVar1 = dVar11 < dVar10;
        }
        if (bVar1) {
          dVar11 = ABS(*(double *)((long)puVar4 + 0x20) - *(double *)(param_3 + 0x20));
          dVar10 = ABS(*(double *)((long)puVar4 + 0x20) + *(double *)(param_3 + 0x20)) *
                   2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar10)))
          {
            bVar1 = dVar11 < dVar10;
          }
          if (((bVar1) &&
              ((lVar6 = *(long *)((long)puVar4 + 8), lVar6 == *(long *)(param_3 + 8) ||
               (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
             ((lVar6 = *(long *)((long)puVar4 + 0x28), lVar6 == *(long *)(param_3 + 0x28) ||
              (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
            puVar9 = *(undefined1 **)((long)puVar4 + 0x30);
            if (puVar9 != *(undefined1 **)(param_3 + 0x30)) {
              func_0x00010c071ae0();
              goto LAB_10afe2624;
            }
            goto LAB_10afe2618;
          }
        }
      }
    }
    puVar9 = (undefined1 *)0x0;
  }
LAB_10afe2624:
  _objc_release(param_3);
  return (undefined8 *)puVar9;
}



/* Entry: 10afe24d4; end: 10afe263f; -[SCMapSnapChatCardMetadata isEqual:] */

long FUN_10afe24d4(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afe2618:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afe2624;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) {
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
          dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
          dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
            bVar1 = dVar6 < dVar5;
          }
          if (((bVar1) &&
              ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
             ((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
            lVar4 = *(long *)(param_1 + 0x30);
            if (lVar4 != *(long *)(param_3 + 0x30)) {
              func_0x00010c071ae0();
              goto LAB_10afe2624;
            }
            goto LAB_10afe2618;
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_10afe2624:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10afe2640; end: 10afe2647; -[SCMapSnapChatCardMetadata displayName] */

undefined8 FUN_10afe2640(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afe2648; end: 10afe264f; -[SCMapSnapChatCardMetadata latitude] */

undefined8 FUN_10afe2648(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afe2650; end: 10afe2657; -[SCMapSnapChatCardMetadata longitude] */

undefined8 FUN_10afe2650(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afe2658; end: 10afe265f; -[SCMapSnapChatCardMetadata zoomLevel] */

undefined8 FUN_10afe2658(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afe2660; end: 10afe2667; -[SCMapSnapChatCardMetadata thumbnailUrl] */

undefined8 FUN_10afe2660(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afe2668; end: 10afe266f; -[SCMapSnapChatCardMetadata thumbnailWithOverlayUrl] */

undefined8 FUN_10afe2668(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afe2670; end: 10afe2677; -[SCMapSnapChatCardMetadata mediaType] */

undefined8 FUN_10afe2670(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10afe2678; end: 10afe26b3; -[SCMapSnapChatCardMetadata .cxx_destruct] */

void FUN_10afe2678(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afe26b4; end: 10afe279b; -[SCFocusedMessageHeaderViewModel initWithSenderName:sentTime:timerPieFillPercentage:timerPieColor:] */

undefined1 *
FUN_10afe26b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112703de0;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10afe279c; end: 10afe27bf; -[SCFocusedMessageHeaderViewModel copyWithZone:] */

undefined8 FUN_10afe279c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afe27c0; end: 10afe2863; -[SCFocusedMessageHeaderViewModel hash] */

undefined8 * FUN_10afe27c0(long param_1,undefined8 param_2,undefined8 *param_3)

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
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_40 = uVar3;
  func_0x00010bfde980();
  puVar4 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar4,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10afe2930:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afe293c;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((ulong)puVar5 & 1) != 0) {
      dVar10 = ABS((double)puVar4[3] - (double)param_3[3]);
      dVar9 = ABS((double)puVar4[3] + (double)param_3[3]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (((bVar1) &&
          ((lVar6 = puVar4[1], lVar6 == param_3[1] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
         ((lVar6 = puVar4[2], lVar6 == param_3[2] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = (undefined8 *)puVar4[4];
        if (puVar8 != (undefined8 *)param_3[4]) {
          func_0x00010c071c60();
          goto LAB_10afe293c;
        }
        goto LAB_10afe2930;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10afe293c:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10afe2864; end: 10afe2957; -[SCFocusedMessageHeaderViewModel isEqual:] */

long FUN_10afe2864(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afe2930:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afe293c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
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
        lVar4 = *(long *)(param_1 + 0x20);
        if (lVar4 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071c60();
          goto LAB_10afe293c;
        }
        goto LAB_10afe2930;
      }
    }
    lVar4 = 0;
  }
LAB_10afe293c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10afe2958; end: 10afe295f; -[SCFocusedMessageHeaderViewModel senderName] */

undefined8 FUN_10afe2958(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afe2960; end: 10afe2967; -[SCFocusedMessageHeaderViewModel sentTime] */

undefined8 FUN_10afe2960(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afe2968; end: 10afe296f; -[SCFocusedMessageHeaderViewModel timerPieFillPercentage] */

undefined8 FUN_10afe2968(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afe2970; end: 10afe2977; -[SCFocusedMessageHeaderViewModel timerPieColor] */

undefined8 FUN_10afe2970(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afe2978; end: 10afe29b3; -[SCFocusedMessageHeaderViewModel .cxx_destruct] */

void FUN_10afe2978(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afe29b4; end: 10afe2a8b; -[SCFocusedMessageViewModel initWithAttributedMessageState:contentBackgroundColor:headerViewModel:] */

undefined1 *
FUN_10afe29b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_112703de8;
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



/* Entry: 10afe2a8c; end: 10afe2aaf; -[SCFocusedMessageViewModel copyWithZone:] */

undefined8 FUN_10afe2a8c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afe2ab0; end: 10afe2b2f; -[SCFocusedMessageViewModel hash] */

undefined8 * FUN_10afe2ab0(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_10afe2bc8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afe2bd4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071c60(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10afe2bd4;
          }
          goto LAB_10afe2bc8;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10afe2bd4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10afe2b30; end: 10afe2bef; -[SCFocusedMessageViewModel isEqual:] */

long FUN_10afe2b30(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afe2bc8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afe2bd4;
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
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10afe2bd4;
          }
          goto LAB_10afe2bc8;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afe2bd4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afe2bf0; end: 10afe2bf7; -[SCFocusedMessageViewModel attributedMessageState] */

undefined8 FUN_10afe2bf0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afe2bf8; end: 10afe2bff; -[SCFocusedMessageViewModel contentBackgroundColor] */

undefined8 FUN_10afe2bf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afe2c00; end: 10afe2c07; -[SCFocusedMessageViewModel headerViewModel] */

undefined8 FUN_10afe2c00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afe2c08; end: 10afe2c43; -[SCFocusedMessageViewModel .cxx_destruct] */

void FUN_10afe2c08(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afe2c44; end: 10afe2c8b; +[SCFocusedMessageContent fullMessage] */

void FUN_10afe2c44(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c6b60;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe2c8c; end: 10afe2ce3; +[SCFocusedMessageContent indexedWithSelectedIndex:] */

void FUN_10afe2c8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c6b60;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afe2ce4; end: 10afe2d7b; +[SCFocusedMessageContent subContentWithContent:textToCopy:] */

void FUN_10afe2ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c6b60;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
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



/* Entry: 10afe2d7c; end: 10afe2d9f; -[SCFocusedMessageContent copyWithZone:] */

undefined8 FUN_10afe2d7c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afe2da0; end: 10afe2e1b; -[SCFocusedMessageContent hash] */

void FUN_10afe2da0(long param_1)

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
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_50,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_112703df0;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe2e1c; end: 10afe2e5f; -[SCFocusedMessageContent internalInit] */

void FUN_10afe2e1c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112703df0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afe2e60; end: 10afe2f27; -[SCFocusedMessageContent isEqual:] */

long FUN_10afe2e60(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afe2f00:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afe2f0c;
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
          goto LAB_10afe2f0c;
        }
        goto LAB_10afe2f00;
      }
    }
    lVar3 = 0;
  }
LAB_10afe2f0c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afe2f28; end: 10afe2fdb; -[SCFocusedMessageContent matchFullMessage:indexed:subContent:] */

void FUN_10afe2f28(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))
                (param_5,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    }
  }
  else if (lVar1 == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x10));
    }
  }
  else if ((lVar1 == 0) && (param_3 != 0)) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10afe2fdc; end: 10afe300b; -[SCFocusedMessageContent .cxx_destruct] */

void FUN_10afe2fdc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10afe300c; end: 10afe30b7; -[SCFocusedMessageSubContent initWithText:rawMarkdown:] */

undefined1 *
FUN_10afe300c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112703df8;
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



/* Entry: 10afe30b8; end: 10afe30db; -[SCFocusedMessageSubContent copyWithZone:] */

undefined8 FUN_10afe30b8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afe30dc; end: 10afe314f; -[SCFocusedMessageSubContent hash] */

undefined8 * FUN_10afe30dc(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10afe31d0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afe31dc;
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
          goto LAB_10afe31dc;
        }
        goto LAB_10afe31d0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10afe31dc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afe3150; end: 10afe31f7; -[SCFocusedMessageSubContent isEqual:] */

long FUN_10afe3150(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afe31d0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afe31dc;
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
          goto LAB_10afe31dc;
        }
        goto LAB_10afe31d0;
      }
    }
    lVar3 = 0;
  }
LAB_10afe31dc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afe31f8; end: 10afe31ff; -[SCFocusedMessageSubContent text] */

undefined8 FUN_10afe31f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afe3200; end: 10afe3207; -[SCFocusedMessageSubContent rawMarkdown] */

undefined8 FUN_10afe3200(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afe3208; end: 10afe3237; -[SCFocusedMessageSubContent .cxx_destruct] */

void FUN_10afe3208(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afe3238; end: 10afe323f; -[SCCChatCustomizationHubEntryFeature__Enum init] */

void FUN_10afe3238(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10afe3240; end: 10afe337f; -[SCCChatCustomizationHubContext initWithGenerativeBackgroundsViewContext:generativeWallpaperActionHandler:chatWallpaperDataSources:currentWallpaperObservable:navigator:customColorHandler:customNotificationSoundProvider:resetWallpaper:upsellFeature:] */

undefined8 *
FUN_10afe3240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_11);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar1 = param_11;
  _objc_retainBlock();
  _objc_release(param_11);
  puStack_68 = PTR_PTR_112703e00;
  uStack_70 = param_1;
  func_0x00010afe3640();
  puVar2 = &uStack_70;
  func_0x00010afe3638(puVar2);
  _objc_release(param_9);
  _objc_release(param_8);
  func_0x00010afe365c();
  _objc_release(param_6);
  _objc_release(param_5);
  func_0x00010afe3654();
  func_0x00010afe364c();
  _objc_release(uVar1);
  _objc_release(param_10);
  return puVar2;
}



/* Entry: 10afe3380; end: 10afe3393; +[SCCChatCustomizationHubContext valdiMarshallableObjectDescriptor] */

void FUN_10afe3380(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca9a80;
  param_1[1] = &PTR_DAT_110ca9bd0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe3394; end: 10afe347b; -[SCCChatCustomizationHubViewModel initWithConversationId:sourcePageType:onDismissTray:launchWallpaperRemix:onReportWallpaper:] */

undefined8 *
FUN_10afe3394(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  _objc_retainBlock();
  func_0x00010afe365c();
  _objc_retainBlock();
  _objc_release(param_7);
  puStack_58 = PTR_PTR_112703e08;
  uStack_60 = param_1;
  func_0x00010afe3640();
  puVar1 = &uStack_60;
  func_0x00010afe3638(puVar1);
  func_0x00010afe3654();
  func_0x00010afe364c();
  func_0x00010afe365c();
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 10afe347c; end: 10afe348f; +[SCCChatCustomizationHubViewModel valdiMarshallableObjectDescriptor] */

void FUN_10afe347c(undefined8 *param_1)

{
  *param_1 = &PTR_s_conversationId_110ca9c38;
  param_1[1] = &PTR_DAT_110ca9ce0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe3490; end: 10afe34c7; -[SCCWallpaper initWithMediaItem:creator:creationTimeMs:isReportable:] */

void FUN_10afe3490(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112703e10;
  uStack_20 = param_1;
  func_0x00010afe3640();
  func_0x00010afe3638(&uStack_20);
  return;
}



/* Entry: 10afe34c8; end: 10afe34db; +[SCCWallpaper valdiMarshallableObjectDescriptor] */

void FUN_10afe34c8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca9cf8;
  param_1[1] = &PTR_DAT_110ca9d70;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe34dc; end: 10afe34fb; -[SCCWallpaperCreator initWithDisplayName:] */

void FUN_10afe34dc(void)

{
  func_0x00010afe361c(PTR_PTR_112703e18);
  return;
}



/* Entry: 10afe34fc; end: 10afe350b; +[SCCWallpaperCreator valdiMarshallableObjectDescriptor] */

void FUN_10afe34fc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_displayName_110ca9d88;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe350c; end: 10afe3583; -[SCCWallpaperPreviewContext initWithChatWallpaperActionHandler:onDismiss:] */

undefined8 * FUN_10afe350c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retainBlock();
  puStack_38 = PTR_PTR_112703e20;
  uStack_40 = param_1;
  func_0x00010afe3640();
  puVar1 = &uStack_40;
  func_0x00010afe3638(puVar1);
  func_0x00010afe3654();
  func_0x00010afe364c();
  return puVar1;
}



/* Entry: 10afe3584; end: 10afe3597; +[SCCWallpaperPreviewContext valdiMarshallableObjectDescriptor] */

void FUN_10afe3584(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca9db8;
  param_1[1] = &PTR_DAT_110ca9e30;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe3598; end: 10afe35b7; -[SCCWallpaperPreviewViewModel initWithMediaItem:] */

void FUN_10afe3598(void)

{
  func_0x00010afe361c(PTR_PTR_112703e28);
  return;
}



/* Entry: 10afe35b8; end: 10afe35cb; +[SCCWallpaperPreviewViewModel valdiMarshallableObjectDescriptor] */

void FUN_10afe35b8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca9e48;
  param_1[1] = &PTR_DAT_110ca9e78;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe35cc; end: 10afe35fb; -[SCChatCustomizationHubMediaItem initWithUri:] */

void FUN_10afe35cc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112703e30;
  uStack_20 = param_1;
  func_0x00010afe3640();
  func_0x00010afe3638(&uStack_20);
  return;
}



/* Entry: 10afe35fc; end: 10afe3677; +[SCChatCustomizationHubMediaItem valdiMarshallableObjectDescriptor] */

void FUN_10afe35fc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_uri_110ca9e88;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe3678; end: 10afe367f; -[SCCChatWallpaperActionState__Enum init] */

void FUN_10afe3678(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10afe3680; end: 10afe3687; -[SCCChatWallpaperCategory__Enum init] */

void FUN_10afe3680(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10afe3688; end: 10afe368f; -[SCCChatWallpaperDataProviderPermissionState__Enum init] */

void FUN_10afe3688(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 10afe3690; end: 10afe36c3; -[SCCChatWallpaperDataSource initWithWallpaperDataProvider:chatWallpaperActionHandler:wallpaperCategory:] */

void FUN_10afe3690(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010afe3864(PTR_PTR_112703e38);
  func_0x00010afe385c(auStack_20);
  return;
}



/* Entry: 10afe36c4; end: 10afe36d7; +[SCCChatWallpaperDataSource valdiMarshallableObjectDescriptor] */

void FUN_10afe36c4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca9ed0;
  param_1[1] = &PTR_DAT_110ca9f30;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe36d8; end: 10afe371b; -[SCCChatWallpaperPreviewContext initWithChatWallpaperActionHandler:] */

void FUN_10afe36d8(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010afe3864(PTR_PTR_112703e40);
  func_0x00010afe385c(auStack_20);
  return;
}



/* Entry: 10afe371c; end: 10afe372f; +[SCCChatWallpaperPreviewContext valdiMarshallableObjectDescriptor] */

void FUN_10afe371c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca9f50;
  param_1[1] = &PTR_DAT_110caa040;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe3730; end: 10afe3767; -[SCCChatWallpaperPreviewViewModel initWithMediaItem:] */

void FUN_10afe3730(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112703e48;
  uStack_20 = param_1;
  func_0x00010afe385c(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10afe3768; end: 10afe377b; +[SCCChatWallpaperPreviewViewModel valdiMarshallableObjectDescriptor] */

void FUN_10afe3768(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110caa068;
  param_1[1] = &PTR_DAT_110caa098;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe377c; end: 10afe379f; -[SCCChatWallpaperStatusContext init] */

void FUN_10afe377c(void)

{
  func_0x00010afe3848(PTR_PTR_112703e50);
  return;
}



/* Entry: 10afe37a0; end: 10afe37b3; +[SCCChatWallpaperStatusContext valdiMarshallableObjectDescriptor] */

void FUN_10afe37a0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110caa0a8;
  param_1[1] = &PTR_s_SCBridgeObservable_110caa120;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe37b4; end: 10afe37e7; -[SCCChatWallpaperStatusViewModel initWithIsSelfInitiated:] */

void FUN_10afe37b4(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010afe3864(PTR_PTR_112703e58);
  func_0x00010afe385c(auStack_20);
  return;
}



/* Entry: 10afe37e8; end: 10afe37ff; +[SCCChatWallpaperStatusViewModel valdiMarshallableObjectDescriptor] */

void FUN_10afe37e8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110caa138;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe3800; end: 10afe3823; -[SCCMediaItem init] */

void FUN_10afe3800(void)

{
  func_0x00010afe3848(PTR_PTR_112703e60);
  return;
}



/* Entry: 10afe3824; end: 10afe3873; +[SCCMediaItem valdiMarshallableObjectDescriptor] */

void FUN_10afe3824(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110caa198;
  param_1[1] = &PTR_DAT_110caa288;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe3874; end: 10afe387b; -[SCCQuotedMessageContentStatus__Enum init] */

void FUN_10afe3874(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,6);
  return;
}



/* Entry: 10afe387c; end: 10afe392f; -[SCCQuotedMessageMediaType__Enum init] */

undefined * FUN_10afe387c(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_48 = PTR_PTR_113356698;
  puStack_40 = PTR_PTR_1133566a0;
  puStack_38 = PTR_PTR_1133566a8;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110e2ac38;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_48,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0105e0(param_1);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010afe3d74(PTR_PTR_112703e68);
  func_0x00010afe3d40();
  return puVar1;
}



/* Entry: 10afe3930; end: 10afe3957; -[SCCChatReplyComposeViewModel initWithMessage:] */

void FUN_10afe3930(void)

{
  func_0x00010afe3d74(PTR_PTR_112703e68);
  func_0x00010afe3d40();
  return;
}



/* Entry: 10afe3958; end: 10afe396b; +[SCCChatReplyComposeViewModel valdiMarshallableObjectDescriptor] */

void FUN_10afe3958(undefined8 *param_1)

{
  *param_1 = &PTR_s_message_110caa298;
  param_1[1] = &PTR_DAT_110caa2e0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe396c; end: 10afe399f; -[SCCQuotedAudioMessageContent init] */

void FUN_10afe396c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112703e70;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10afe39a0; end: 10afe39af; +[SCCQuotedAudioMessageContent valdiMarshallableObjectDescriptor] */

void FUN_10afe39a0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_durationMs_110caa2f0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe39b0; end: 10afe39db; -[SCCQuotedMediaContent initWithConversationId:messageId:mediaType:] */

void FUN_10afe39b0(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010afe3d58(PTR_PTR_112703e78);
  func_0x00010afe3d4c(auStack_20);
  return;
}



/* Entry: 10afe39dc; end: 10afe39ef; +[SCCQuotedMediaContent valdiMarshallableObjectDescriptor] */

void FUN_10afe39dc(undefined8 *param_1)

{
  *param_1 = &PTR_s_conversationId_110caa320;
  param_1[1] = &PTR_DAT_110caa380;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe39f0; end: 10afe3a17; -[SCCQuotedMediaUri initWithMediaUri:mediaType:] */

void FUN_10afe39f0(void)

{
  func_0x00010afe3d74(PTR_PTR_112703e80);
  func_0x00010afe3d40();
  return;
}



/* Entry: 10afe3a18; end: 10afe3a2b; +[SCCQuotedMediaUri valdiMarshallableObjectDescriptor] */

void FUN_10afe3a18(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110caa390;
  param_1[1] = &PTR_DAT_110caa3d8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe3a2c; end: 10afe3a73; -[SCCQuotedMessageContent initWithSenderDisplayName:senderColor:dateString:isSaved:] */

void FUN_10afe3a2c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010afe3d58(PTR_PTR_112703e88);
  func_0x00010afe3d4c(auStack_20);
  return;
}



/* Entry: 10afe3a74; end: 10afe3a87; +[SCCQuotedMessageContent valdiMarshallableObjectDescriptor] */

void FUN_10afe3a74(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110caa3e8;
  param_1[1] = &PTR_DAT_110caa598;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe3a88; end: 10afe3aa7; -[SCCQuotedMessagePluginContent initWithComponentPath:] */

void FUN_10afe3a88(void)

{
  func_0x00010afe3d20(PTR_PTR_112703e90);
  return;
}



/* Entry: 10afe3aa8; end: 10afe3ab7; +[SCCQuotedMessagePluginContent valdiMarshallableObjectDescriptor] */

void FUN_10afe3aa8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110caa5e0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe3ab8; end: 10afe3af3; -[SCCQuotedMessageSnapEnvelopeViewModel initWithMediaType:isSentByCurrentUser:isOpened:hasExpired:] */

void FUN_10afe3ab8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  func_0x00010afe3d58(PTR_PTR_112703e98);
  _objc_msgSendSuper2(auStack_20,param_2,0);
  return;
}



/* Entry: 10afe3af4; end: 10afe3b07; +[SCCQuotedMessageSnapEnvelopeViewModel valdiMarshallableObjectDescriptor] */

void FUN_10afe3af4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110caa640;
  param_1[1] = &PTR_DAT_110caa6e8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe3b08; end: 10afe3b2f; -[SCCQuotedMessageUnavailableViewModel initWithStatus:] */

void FUN_10afe3b08(void)

{
  func_0x00010afe3d74(PTR_PTR_112703ea0);
  func_0x00010afe3d40();
  return;
}



/* Entry: 10afe3b30; end: 10afe3b43; +[SCCQuotedMessageUnavailableViewModel valdiMarshallableObjectDescriptor] */

void FUN_10afe3b30(undefined8 *param_1)

{
  *param_1 = &PTR_s_status_110caa6f8;
  param_1[1] = &PTR_DAT_110caa728;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afe3b44; end: 10afe3b63; -[SCCQuotedMessageViewModel initWithContentStatus:] */

void FUN_10afe3b44(void)

{
  func_0x00010afe3d20(PTR_PTR_112703ea8);
  return;
}



/* Entry: 10afe3b64; end: 10afe3b8b; +[SCCQuotedMessageViewModel valdiMarshallableObjectDescriptor] */

void FUN_10afe3b64(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110caa768;
  param_1[1] = &PTR_DAT_110caa7c8;
  param_1[2] = &PTR_DAT_110caa738;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}


