/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b7af2f8; end: 10b7af2ff; -[SCLensCustomizationBody customizationId] */

undefined8 FUN_10b7af2f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7af300; end: 10b7af307; -[SCLensCustomizationBody customization] */

undefined8 FUN_10b7af300(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7af308; end: 10b7af30f; -[SCLensCustomizationBody previewText] */

undefined8 FUN_10b7af308(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7af310; end: 10b7af34b; -[SCLensCustomizationBody .cxx_destruct] */

void FUN_10b7af310(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7af34c; end: 10b7af483; -[SCLensVenue initWithSelectedVenueId:name:locality:venueIdsListed:tappableArea:] */

undefined1 *
FUN_10b7af34c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_11270ae18;
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



/* Entry: 10b7af484; end: 10b7af4a7; -[SCLensVenue copyWithZone:] */

undefined8 FUN_10b7af484(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7af4a8; end: 10b7af53f; -[SCLensVenue hash] */

undefined8 * FUN_10b7af4a8(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_10b7af608:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b7af614;
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
                goto LAB_10b7af614;
              }
              goto LAB_10b7af608;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b7af614:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b7af540; end: 10b7af62f; -[SCLensVenue isEqual:] */

long FUN_10b7af540(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b7af608:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b7af614;
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
                goto LAB_10b7af614;
              }
              goto LAB_10b7af608;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b7af614:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b7af630; end: 10b7af637; -[SCLensVenue selectedVenueId] */

undefined8 FUN_10b7af630(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7af638; end: 10b7af63f; -[SCLensVenue name] */

undefined8 FUN_10b7af638(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7af640; end: 10b7af647; -[SCLensVenue locality] */

undefined8 FUN_10b7af640(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7af648; end: 10b7af64f; -[SCLensVenue venueIdsListed] */

undefined8 FUN_10b7af648(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b7af650; end: 10b7af657; -[SCLensVenue tappableArea] */

undefined8 FUN_10b7af650(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b7af658; end: 10b7af6ab; -[SCLensVenue .cxx_destruct] */

void FUN_10b7af658(long param_1)

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



/* Entry: 10b7af6ac; end: 10b7af71b; -[SCLensVenueTappableArea initWithNormalizedCenterX:normalizedCenterY:normalizedWidth:normalizedHeight:rotationDegrees:] */

void FUN_10b7af6ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_11270ae20;
  uStack_50 = param_6;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
  }
  return;
}



/* Entry: 10b7af71c; end: 10b7af73f; -[SCLensVenueTappableArea copyWithZone:] */

undefined8 FUN_10b7af71c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7af740; end: 10b7af837; -[SCLensVenueTappableArea hash] */

ulong * FUN_10b7af740(long param_1,undefined8 param_2,undefined1 *param_3)

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
  ulong uStack_20;
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
  uVar5 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_20 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  func_0x000107c3191c(&uStack_40,5);
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
      if (((ulong)puVar4 & 1) != 0) {
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
                dVar7 = ABS(*(double *)((long)puVar3 + 0x28) + *(double *)(param_3 + 0x28)) *
                        2.220446049250313e-16;
                if (dVar7 <= 2.2250738585072014e-308) {
                  dVar7 = 2.2250738585072014e-308;
                }
                puVar6 = (undefined1 *)
                         (ulong)(ABS(*(double *)((long)puVar3 + 0x28) - *(double *)(param_3 + 0x28))
                                < dVar7);
                goto LAB_10b7af998;
              }
            }
          }
        }
      }
      puVar6 = (undefined1 *)0x0;
    }
  }
LAB_10b7af998:
  _objc_release(param_3);
  return (ulong *)puVar6;
}



/* Entry: 10b7af838; end: 10b7af9b3; -[SCLensVenueTappableArea isEqual:] */

bool FUN_10b7af838(ulong param_1,undefined8 param_2,ulong param_3)

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
                dVar4 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                        2.220446049250313e-16;
                if (dVar4 <= 2.2250738585072014e-308) {
                  dVar4 = 2.2250738585072014e-308;
                }
                bVar1 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28)) < dVar4;
                goto LAB_10b7af998;
              }
            }
          }
        }
      }
      bVar1 = false;
    }
  }
LAB_10b7af998:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b7af9b4; end: 10b7af9bb; -[SCLensVenueTappableArea normalizedCenterX] */

undefined8 FUN_10b7af9b4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7af9bc; end: 10b7af9c3; -[SCLensVenueTappableArea normalizedCenterY] */

undefined8 FUN_10b7af9bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7af9c4; end: 10b7af9cb; -[SCLensVenueTappableArea normalizedWidth] */

undefined8 FUN_10b7af9c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7af9cc; end: 10b7af9d3; -[SCLensVenueTappableArea normalizedHeight] */

undefined8 FUN_10b7af9cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b7af9d4; end: 10b7af9db; -[SCLensVenueTappableArea rotationDegrees] */

undefined8 FUN_10b7af9d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b7af9dc; end: 10b7afa77; -[SCLensMiscData initWithCoder:] */

undefined1 * FUN_10b7af9dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270ae28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7afa78; end: 10b7afad7; -[SCLensMiscData encodeWithCoder:] */

void FUN_10b7afa78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f67758);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f827b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7afad8; end: 10b7afb3f; -[SCLensMiscData hash] */

long * FUN_10b7afad8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lStack_28 = -lVar1;
  if (-1 < lVar1) {
    lStack_28 = lVar1;
  }
  func_0x00010bfde980();
  plVar3 = &lStack_28;
  uStack_20 = uVar2;
  func_0x000107c3191c(plVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 != param_3) {
    plVar5 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10b7afbc4;
    plVar5 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar5);
    if ((((ulong)plVar4 & 1) == 0) || (plVar3[1] != param_3[1])) {
      plVar5 = (long *)0x0;
      goto LAB_10b7afbc4;
    }
    plVar5 = (long *)plVar3[2];
    if (plVar5 != (long *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10b7afbc4;
    }
  }
  plVar5 = (long *)0x1;
LAB_10b7afbc4:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 10b7afb40; end: 10b7afbdf; -[SCLensMiscData isEqual:] */

long FUN_10b7afb40(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b7afbc4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10b7afbc4;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b7afbc4;
    }
  }
  lVar3 = 1;
LAB_10b7afbc4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b7afbe0; end: 10b7afbe7; -[SCLensMiscData viewCount] */

undefined8 FUN_10b7afbe0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7afbe8; end: 10b7afbef; -[SCLensMiscData badgeData] */

undefined8 FUN_10b7afbe8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7afbf0; end: 10b7afbfb; -[SCLensMiscData .cxx_destruct] */

void FUN_10b7afbf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b7afbfc; end: 10b7afc17; +[SCLensMiscDataBuilder lensMiscData] */

void FUN_10b7afbfc(void)

{
  _objc_alloc_init(PTR_PTR_1126de5e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7afc18; end: 10b7afccf; +[SCLensMiscDataBuilder lensMiscDataFromExistingLensMiscData:] */

void FUN_10b7afc18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126de5e0;
  _objc_retain(param_3);
  func_0x00010c0953c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c29c5c0(param_3);
  puVar3 = puVar1;
  func_0x00010c2bc880(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf15220(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = puVar3;
  func_0x00010c2a9160(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b7afcd0; end: 10b7afcff; -[SCLensMiscDataBuilder build] */

void FUN_10b7afcd0(void)

{
  _objc_alloc(PTR_PTR_1126de6f0);
  func_0x00010c061ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7afd00; end: 10b7afd07; -[SCLensMiscDataBuilder withViewCount:] */

void FUN_10b7afd00(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b7afd08; end: 10b7afd3f; -[SCLensMiscDataBuilder withBadgeData:] */

long FUN_10b7afd08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b7afd40; end: 10b7afd4b; -[SCLensMiscDataBuilder .cxx_destruct] */

void FUN_10b7afd40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b7afd4c; end: 10b7afdd3; -[SCLensBadgeData initWithCoder:] */

undefined1 * FUN_10b7afd4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270ae30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7afdd4; end: 10b7afe4b; -[SCLensBadgeData initWithFriendPlayCount:] */

undefined1 * FUN_10b7afdd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270ae30;
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



/* Entry: 10b7afe4c; end: 10b7afe6f; -[SCLensBadgeData copyWithZone:] */

undefined8 FUN_10b7afe4c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7afe70; end: 10b7afe87; -[SCLensBadgeData encodeWithCoder:] */

void FUN_10b7afe70(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14cb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_sc_encodeObject_forKey__112630ce0,*(undefined8 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_110f4b058);
  return;
}



/* Entry: 10b7afe88; end: 10b7afe8f; -[SCLensBadgeData hash] */

void FUN_10b7afe88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b7afe90; end: 10b7aff1f; -[SCLensBadgeData isEqual:] */

long FUN_10b7afe90(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b7aff04;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b7aff04;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b7aff04;
    }
  }
  lVar3 = 1;
LAB_10b7aff04:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b7aff20; end: 10b7aff27; -[SCLensBadgeData friendPlayCount] */

undefined8 FUN_10b7aff20(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7aff28; end: 10b7aff33; -[SCLensBadgeData .cxx_destruct] */

void FUN_10b7aff28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7aff34; end: 10b7aff4f; +[SCLensBadgeDataBuilder lensBadgeData] */

void FUN_10b7aff34(void)

{
  _objc_alloc_init(PTR_PTR_1126e1368);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7aff50; end: 10b7affdf; +[SCLensBadgeDataBuilder lensBadgeDataFromExistingLensBadgeData:] */

void FUN_10b7aff50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126e1368;
  _objc_retain(param_3);
  func_0x00010c090240(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfb8680(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = puVar1;
  func_0x00010c2ae6e0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b7affe0; end: 10b7b000f; -[SCLensBadgeDataBuilder build] */

void FUN_10b7affe0(void)

{
  _objc_alloc(PTR_PTR_1126de5e8);
  func_0x00010c015880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7b0010; end: 10b7b0047; -[SCLensBadgeDataBuilder withFriendPlayCount:] */

long FUN_10b7b0010(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b7b0048; end: 10b7b0053; -[SCLensBadgeDataBuilder .cxx_destruct] */

void FUN_10b7b0048(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7b0054; end: 10b7b0103; -[SCLensPlusTierConfig initWithCoder:] */

undefined1 * FUN_10b7b0054(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270ae38;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7b0104; end: 10b7b0193; -[SCLensPlusTierConfig initWithUnlockTouchOnLensArea:customCta:freemiumInfo:] */

undefined1 *
FUN_10b7b0104(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_11270ae38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7b0194; end: 10b7b01b7; -[SCLensPlusTierConfig copyWithZone:] */

undefined8 FUN_10b7b0194(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7b01b8; end: 10b7b022b; -[SCLensPlusTierConfig encodeWithCoder:] */

void FUN_10b7b01b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92da0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f827d8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110f827f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f82818);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7b022c; end: 10b7b0293; -[SCLensPlusTierConfig hash] */

ulong * FUN_10b7b022c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar2 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_28 = (ulong)*(byte *)(param_1 + 9);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_20 = uVar1;
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (ulong *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b7b0328;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(char *)((long)puVar2 + 8) != param_3[8] || (*(char *)((long)puVar2 + 9) != param_3[9]))))
    {
      puVar4 = (undefined1 *)0x0;
      goto LAB_10b7b0328;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar4 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b7b0328;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_10b7b0328:
  _objc_release(param_3);
  return (ulong *)puVar4;
}



/* Entry: 10b7b0294; end: 10b7b0343; -[SCLensPlusTierConfig isEqual:] */

long FUN_10b7b0294(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b7b0328;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
        (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) {
      lVar3 = 0;
      goto LAB_10b7b0328;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b7b0328;
    }
  }
  lVar3 = 1;
LAB_10b7b0328:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b7b0344; end: 10b7b034b; -[SCLensPlusTierConfig unlockTouchOnLensArea] */

undefined1 FUN_10b7b0344(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b7b034c; end: 10b7b0353; -[SCLensPlusTierConfig customCta] */

undefined1 FUN_10b7b034c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b7b0354; end: 10b7b035b; -[SCLensPlusTierConfig freemiumInfo] */

undefined8 FUN_10b7b0354(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7b035c; end: 10b7b0367; -[SCLensPlusTierConfig .cxx_destruct] */

void FUN_10b7b035c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b7b0368; end: 10b7b0383; +[SCLensPlusTierConfigBuilder lensPlusTierConfig] */

void FUN_10b7b0368(void)

{
  _objc_alloc_init(PTR_PTR_1126e1370);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7b0384; end: 10b7b046b; +[SCLensPlusTierConfigBuilder lensPlusTierConfigFromExistingLensPlusTierConfig:] */

void FUN_10b7b0384(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126e1370;
  _objc_retain(param_3);
  func_0x00010c095e40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c280e00(param_3);
  puVar3 = puVar1;
  func_0x00010c2bbe20(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf61400(param_3);
  puVar4 = puVar3;
  func_0x00010c2ab960(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfb7600(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar5 = puVar4;
  func_0x00010c2ae6a0(puVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10b7b046c; end: 10b7b04a3; -[SCLensPlusTierConfigBuilder build] */

void FUN_10b7b046c(void)

{
  _objc_alloc(PTR_PTR_1126bb868);
  func_0x00010c0590c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7b04a4; end: 10b7b04ab; -[SCLensPlusTierConfigBuilder withUnlockTouchOnLensArea:] */

void FUN_10b7b04a4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b7b04ac; end: 10b7b04b3; -[SCLensPlusTierConfigBuilder withCustomCta:] */

void FUN_10b7b04ac(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10b7b04b4; end: 10b7b04eb; -[SCLensPlusTierConfigBuilder withFreemiumInfo:] */

long FUN_10b7b04b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b7b04ec; end: 10b7b04f7; -[SCLensPlusTierConfigBuilder .cxx_destruct] */

void FUN_10b7b04ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b7b04f8; end: 10b7b05a7; -[SCLensPlusFreemiumInfo initWithCoder:] */

undefined1 * FUN_10b7b04f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270ae40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ee0();
    *(int *)((long)puVar1 + 8) = (int)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ee0();
    *(int *)((long)puVar1 + 0xc) = (int)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7b05a8; end: 10b7b0633; -[SCLensPlusFreemiumInfo initWithGroupId:limit:secondsThreshold:] */

undefined1 *
FUN_10b7b05a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_11270ae40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_4;
    *(undefined4 *)((long)puVar1 + 0xc) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7b0634; end: 10b7b0657; -[SCLensPlusFreemiumInfo copyWithZone:] */

undefined8 FUN_10b7b0634(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b7b0658; end: 10b7b06cb; -[SCLensPlusFreemiumInfo encodeWithCoder:] */

void FUN_10b7b0658(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e51698);
  func_0x00010bf92f80(param_3,param_2,*(undefined4 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f82838);
  func_0x00010bf92f80(param_3,param_2,*(undefined4 *)(param_1 + 0xc),
                      &PTR____CFConstantStringClassReference_110f82858);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7b06cc; end: 10b7b073f; -[SCLensPlusFreemiumInfo hash] */

undefined8 * FUN_10b7b06cc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lStack_38 = (long)(int)*(undefined8 *)(param_1 + 8);
  lStack_30 = (long)(int)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b7b07d4;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(int *)((long)puVar2 + 8) != *(int *)(param_3 + 8) ||
        (*(int *)((long)puVar2 + 0xc) != *(int *)(param_3 + 0xc))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_10b7b07d4;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar4 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b7b07d4;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_10b7b07d4:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10b7b0740; end: 10b7b07ef; -[SCLensPlusFreemiumInfo isEqual:] */

long FUN_10b7b0740(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b7b07d4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(int *)(param_1 + 8) != *(int *)(param_3 + 8) ||
        (*(int *)(param_1 + 0xc) != *(int *)(param_3 + 0xc))))) {
      lVar3 = 0;
      goto LAB_10b7b07d4;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b7b07d4;
    }
  }
  lVar3 = 1;
LAB_10b7b07d4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b7b07f0; end: 10b7b07f7; -[SCLensPlusFreemiumInfo groupId] */

undefined8 FUN_10b7b07f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7b07f8; end: 10b7b07ff; -[SCLensPlusFreemiumInfo limit] */

undefined4 FUN_10b7b07f8(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b7b0800; end: 10b7b0807; -[SCLensPlusFreemiumInfo secondsThreshold] */

undefined4 FUN_10b7b0800(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b7b0808; end: 10b7b0813; -[SCLensPlusFreemiumInfo .cxx_destruct] */

void FUN_10b7b0808(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b7b0814; end: 10b7b082f; +[SCLensPlusFreemiumInfoBuilder lensPlusFreemiumInfo] */

void FUN_10b7b0814(void)

{
  _objc_alloc_init(PTR_PTR_1126e1378);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7b0830; end: 10b7b091b; +[SCLensPlusFreemiumInfoBuilder lensPlusFreemiumInfoFromExistingLensPlusFreemiumInfo:] */

void FUN_10b7b0830(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126e1378;
  _objc_retain(param_3);
  func_0x00010c095d00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfceb20(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2aef60(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c099040(param_3);
  puVar5 = puVar3;
  func_0x00010c2b2e40(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c155400(param_3);
  _objc_release(param_3);
  puVar6 = puVar5;
  func_0x00010c2b7e00(puVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10b7b091c; end: 10b7b094f; -[SCLensPlusFreemiumInfoBuilder build] */

void FUN_10b7b091c(void)

{
  _objc_alloc(PTR_PTR_1126bb858);
  func_0x00010c018e40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b7b0950; end: 10b7b0987; -[SCLensPlusFreemiumInfoBuilder withGroupId:] */

long FUN_10b7b0950(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b7b0988; end: 10b7b098f; -[SCLensPlusFreemiumInfoBuilder withLimit:] */

void FUN_10b7b0988(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b7b0990; end: 10b7b0997; -[SCLensPlusFreemiumInfoBuilder withSecondsThreshold:] */

void FUN_10b7b0990(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x14) = param_3;
  return;
}



/* Entry: 10b7b0998; end: 10b7b09a3; -[SCLensPlusFreemiumInfoBuilder .cxx_destruct] */

void FUN_10b7b0998(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7b09a4; end: 10b7b0a37; -[SCAlertViewActionButton initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b7b09a4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270ae48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11279363c);
    *(undefined **)((long)puVar1 + (long)_DAT_11279363c) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112793640);
    *(undefined **)((long)puVar1 + (long)_DAT_112793640) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b7b0a38; end: 10b7b0b67; -[SCAlertViewActionButton setHighlighted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7b0a38(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_11270ae48;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_setHighlighted__112647c38);
  lVar1 = param_1;
  _objc_opt_class(param_1);
  func_0x00010c086660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11279363c);
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  _objc_opt_class(param_1);
  func_0x00010c086660();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112793640);
  func_0x00010c0e00e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_retainAutorelease(uVar4);
  func_0x00010bdc0fe0();
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 10b7b0b68; end: 10b7b0c9f; -[SCAlertViewActionButton setSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7b0b68(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_11270ae48;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_setSelected__11265c598);
  lVar1 = param_1;
  _objc_opt_class(param_1);
  func_0x00010c086660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11279363c);
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  _objc_opt_class(param_1);
  func_0x00010c086660();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112793640);
  func_0x00010c0e00e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_retainAutorelease(uVar4);
  func_0x00010bdc0fe0();
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 10b7b0ca0; end: 10b7b0d7b; -[SCAlertViewActionButton traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7b0ca0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_11270ae48;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_traitCollectionDidChange__11267bf88);
  lVar1 = param_1;
  _objc_opt_class(param_1);
  func_0x00010c07d660();
  func_0x00010c086660(lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112793640);
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 10b7b0d7c; end: 10b7b0e1f; -[SCAlertViewActionButton setBackgroundColor:forState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7b0d7c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    puStack_38 = PTR_PTR_11270ae48;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_setBackgroundColor__112639330,param_3);
  }
  lVar1 = param_1;
  _objc_opt_class(param_1);
  func_0x00010c086660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + _DAT_11279363c));
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7b0e20; end: 10b7b0ed3; -[SCAlertViewActionButton setBorderColor:forState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7b0e20(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    _objc_retainAutorelease(param_3);
    func_0x00010bdc0fe0();
    lVar1 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(lVar1);
  }
  lVar1 = param_1;
  _objc_opt_class(param_1);
  func_0x00010c086660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + _DAT_112793640),param_2,param_3,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7b0ed4; end: 10b7b0f1f; +[SCAlertViewActionButton keyForControlState:] */

void FUN_10b7b0ed4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b7b0f20; end: 10b7b0f5f; -[SCAlertViewActionButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7b0f20(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112793640,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11279363c,0);
  return;
}



/* Entry: 10b7b0f60; end: 10b7b10b7; -[SCAlertViewActionButtonController initWithTitle:style:actionHandler:] */

undefined8 *
FUN_10b7b0f60(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_11270ae50;
  puVar1 = &uStack_50;
  uStack_50 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    puVar1[3] = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar4 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126d6e88;
    func_0x00010bf25ca0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    func_0x00010beef240(puVar1);
    uVar2 = puVar1[7];
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(param_2 * 0.5);
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(puVar1[7]);
    _objc_release(puVar3);
    func_0x00010c1af000(puVar1[7]);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 10b7b10b8; end: 10b7b120f; -[SCAlertViewActionButtonController initWithTitle:style:promptActionHandler:] */

undefined8 *
FUN_10b7b10b8(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_11270ae50;
  puVar1 = &uStack_50;
  uStack_50 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    puVar1[3] = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar4 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126d6e88;
    func_0x00010bf25ca0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    func_0x00010beef240(puVar1);
    uVar2 = puVar1[7];
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(param_2 * 0.5);
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(puVar1[7]);
    _objc_release(puVar3);
    func_0x00010c1af000(puVar1[7]);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 10b7b1210; end: 10b7b1283; +[SCAlertViewActionButtonController actionWithTitle:style:actionHandler:] */

void FUN_10b7b1210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  _objc_alloc();
  func_0x00010c053420();
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b7b1284; end: 10b7b12f7; +[SCAlertViewActionButtonController actionWithTitle:style:promptActionHandler:] */

void FUN_10b7b1284(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  _objc_alloc();
  func_0x00010c053460();
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b7b12f8; end: 10b7b130b; -[SCAlertViewActionButtonController actionViewSize] */

void FUN_10b7b12f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23d6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126d6e88,PTR_s_sizeWithTitle_style__11266cfd0,*(undefined8 *)(param_1 + 0x10),
             *(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10b7b130c; end: 10b7b1333; -[SCAlertViewActionButtonController actionView] */

void FUN_10b7b130c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b7b1334; end: 10b7b133b; -[SCAlertViewActionButtonController alertViewActionType] */

undefined8 FUN_10b7b1334(void)

{
  return 0;
}



/* Entry: 10b7b133c; end: 10b7b1343; -[SCAlertViewActionButtonController adjustsSizeToMatchStandard] */

undefined8 FUN_10b7b133c(void)

{
  return 1;
}



/* Entry: 10b7b1344; end: 10b7b1347; -[SCAlertViewActionButtonController becomeFirstResponder] */

void FUN_10b7b1344(void)

{
  return;
}


