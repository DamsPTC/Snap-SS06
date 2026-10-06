/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b614cc8; end: 10b614cd7; -[SCStoriesSnapReadReceiptRecord expirationTimeMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b614cc8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f5a8);
}



/* Entry: 10b614cd8; end: 10b614ce7; -[SCStoriesSnapReadReceiptRecord viewTimeMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b614cd8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f5ac);
}



/* Entry: 10b614ce8; end: 10b614cf7; -[SCStoriesSnapReadReceiptRecord readReceiptState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b614ce8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f5b0);
}



/* Entry: 10b614cf8; end: 10b614d07; -[SCStoriesSnapReadReceiptRecord friendLinkState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b614cf8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f5b4);
}



/* Entry: 10b614d08; end: 10b614d17; -[SCStoriesSnapReadReceiptRecord storyType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b614d08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f5b8);
}



/* Entry: 10b614d18; end: 10b614d27; -[SCStoriesSnapReadReceiptRecord syncState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b614d18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f5bc);
}



/* Entry: 10b614d28; end: 10b614d37; -[SCStoriesSnapReadReceiptRecord shareCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b614d28(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f5c0);
}



/* Entry: 10b614d38; end: 10b614d47; -[SCStoriesSnapReadReceiptRecord viewedProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b614d38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f5c4);
}



/* Entry: 10b614d48; end: 10b614d57; -[SCStoriesSnapReadReceiptRecord fullyViewed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b614d48(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278f5c8);
}



/* Entry: 10b614d58; end: 10b614db7; -[SCStoriesSnapReadReceiptRecord .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b614d58(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278f5b0,0);
  _objc_storeStrong(param_1 + _DAT_11278f5a4,0);
  _objc_storeStrong(param_1 + _DAT_11278f5a0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278f59c,0);
  return;
}



/* Entry: 10b614db8; end: 10b614eaf; -[SCStoriesSnapReadReceiptViewState initWithSnapServerId:expirationTimestamp:viewed:screenshotted:saved:screenrecorded:rewatched:viewedProgress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b614db8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined1 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_5);
  puStack_68 = PTR_PTR_112706958;
  uStack_70 = param_3;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278f5cc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f5cc) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f5d0) = param_1;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11278f5d4) = param_6;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11278f5d8) = param_7;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11278f5dc) = param_8;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11278f5e0) = param_9;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11278f5e4) = param_10;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f5e8) = param_2;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b614eb0; end: 10b614ed3; -[SCStoriesSnapReadReceiptViewState copyWithZone:] */

undefined8 FUN_10b614eb0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b614ed4; end: 10b614fbb; -[SCStoriesSnapReadReceiptViewState hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b614ed4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278f5cc);
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + _DAT_11278f5d0) + *(ulong *)(param_1 + _DAT_11278f5d0) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_60 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uStack_58 = (ulong)*(byte *)(param_1 + _DAT_11278f5d4);
  uStack_50 = (ulong)*(byte *)(param_1 + _DAT_11278f5d8);
  uStack_48 = (ulong)*(byte *)(param_1 + _DAT_11278f5dc);
  uStack_40 = (ulong)*(byte *)(param_1 + _DAT_11278f5e0);
  uStack_38 = (ulong)*(byte *)(param_1 + _DAT_11278f5e4);
  uVar5 = ~*(ulong *)(param_1 + _DAT_11278f5e8) + *(ulong *)(param_1 + _DAT_11278f5e8) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar3 = &uStack_68;
  uStack_68 = uVar2;
  func_0x000107c3191c(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b61511c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b615128;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((((*(char *)((long)puVar3 + (long)_DAT_11278f5d4) ==
           *(char *)((long)param_3 + (long)_DAT_11278f5d4) &&
          (*(char *)((long)puVar3 + (long)_DAT_11278f5d8) ==
           *(char *)((long)param_3 + (long)_DAT_11278f5d8))) &&
         (*(char *)((long)puVar3 + (long)_DAT_11278f5dc) ==
          *(char *)((long)param_3 + (long)_DAT_11278f5dc))) &&
        ((*(char *)((long)puVar3 + (long)_DAT_11278f5e0) ==
          *(char *)((long)param_3 + (long)_DAT_11278f5e0) &&
         (*(char *)((long)puVar3 + (long)_DAT_11278f5e4) ==
          *(char *)((long)param_3 + (long)_DAT_11278f5e4))))))) {
      dVar7 = *(double *)((long)puVar3 + (long)_DAT_11278f5d0);
      dVar8 = *(double *)((long)param_3 + (long)_DAT_11278f5d0);
      dVar9 = ABS(dVar7 - dVar8);
      dVar7 = ABS(dVar7 + dVar8) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar9) && (bVar1 = false, !NAN(dVar9) && !NAN(dVar7))) {
        bVar1 = dVar9 < dVar7;
      }
      if (bVar1) {
        dVar7 = *(double *)((long)puVar3 + (long)_DAT_11278f5e8);
        dVar8 = *(double *)((long)param_3 + (long)_DAT_11278f5e8);
        dVar9 = ABS(dVar7 - dVar8);
        dVar7 = ABS(dVar7 + dVar8) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar9) && (bVar1 = false, !NAN(dVar9) && !NAN(dVar7))) {
          bVar1 = dVar9 < dVar7;
        }
        if (bVar1) {
          puVar6 = *(undefined8 **)((long)puVar3 + (long)_DAT_11278f5cc);
          if (puVar6 != *(undefined8 **)((long)param_3 + (long)_DAT_11278f5cc)) {
            func_0x00010c071ae0();
            goto LAB_10b615128;
          }
          goto LAB_10b61511c;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b615128:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b614fbc; end: 10b615143; -[SCStoriesSnapReadReceiptViewState isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b614fbc(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b61511c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b615128;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((((*(char *)(param_1 + (long)_DAT_11278f5d4) == *(char *)(param_3 + (long)_DAT_11278f5d4) &&
          (*(char *)(param_1 + (long)_DAT_11278f5d8) == *(char *)(param_3 + (long)_DAT_11278f5d8)))
         && (*(char *)(param_1 + (long)_DAT_11278f5dc) == *(char *)(param_3 + (long)_DAT_11278f5dc))
         ) && ((*(char *)(param_1 + (long)_DAT_11278f5e0) ==
                *(char *)(param_3 + (long)_DAT_11278f5e0) &&
               (*(char *)(param_1 + (long)_DAT_11278f5e4) ==
                *(char *)(param_3 + (long)_DAT_11278f5e4))))))) {
      dVar5 = *(double *)(param_1 + (long)_DAT_11278f5d0);
      dVar6 = *(double *)(param_3 + (long)_DAT_11278f5d0);
      dVar7 = ABS(dVar5 - dVar6);
      dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
        bVar1 = dVar7 < dVar5;
      }
      if (bVar1) {
        dVar5 = *(double *)(param_1 + (long)_DAT_11278f5e8);
        dVar6 = *(double *)(param_3 + (long)_DAT_11278f5e8);
        dVar7 = ABS(dVar5 - dVar6);
        dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
          bVar1 = dVar7 < dVar5;
        }
        if (bVar1) {
          lVar4 = *(long *)(param_1 + (long)_DAT_11278f5cc);
          if (lVar4 != *(long *)(param_3 + (long)_DAT_11278f5cc)) {
            func_0x00010c071ae0();
            goto LAB_10b615128;
          }
          goto LAB_10b61511c;
        }
      }
    }
    lVar4 = 0;
  }
LAB_10b615128:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b615144; end: 10b615153; -[SCStoriesSnapReadReceiptViewState snapServerId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b615144(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f5cc);
}



/* Entry: 10b615154; end: 10b615163; -[SCStoriesSnapReadReceiptViewState expirationTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b615154(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f5d0);
}



/* Entry: 10b615164; end: 10b615173; -[SCStoriesSnapReadReceiptViewState viewed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b615164(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278f5d4);
}



/* Entry: 10b615174; end: 10b615183; -[SCStoriesSnapReadReceiptViewState screenshotted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b615174(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278f5d8);
}



/* Entry: 10b615184; end: 10b615193; -[SCStoriesSnapReadReceiptViewState saved] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b615184(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278f5dc);
}



/* Entry: 10b615194; end: 10b6151a3; -[SCStoriesSnapReadReceiptViewState screenrecorded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b615194(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278f5e0);
}



/* Entry: 10b6151a4; end: 10b6151b3; -[SCStoriesSnapReadReceiptViewState rewatched] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b6151a4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278f5e4);
}



/* Entry: 10b6151b4; end: 10b6151c3; -[SCStoriesSnapReadReceiptViewState viewedProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b6151b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f5e8);
}



/* Entry: 10b6151c4; end: 10b6151d7; -[SCStoriesSnapReadReceiptViewState .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b6151c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278f5cc,0);
  return;
}



/* Entry: 10b6151d8; end: 10b615237; -[SCStoriesSnapReadReceiptState initWithScreenshotted:saved:screenrecorded:] */

void FUN_10b6151d8(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112706960;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
  }
  return;
}



/* Entry: 10b615238; end: 10b61525b; -[SCStoriesSnapReadReceiptState copyWithZone:] */

undefined8 FUN_10b615238(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b61525c; end: 10b6152bf; -[SCStoriesSnapReadReceiptState hash] */

ulong * FUN_10b61525c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_28 = (ulong)*(byte *)(param_1 + 9);
  uStack_20 = (ulong)*(byte *)(param_1 + 10);
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (ulong *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) ||
         ((*(char *)((long)puVar1 + 8) != param_3[8] || (*(char *)((long)puVar1 + 9) != param_3[9]))
         )) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(char *)((long)puVar1 + 10) == param_3[10]);
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar3;
}



/* Entry: 10b6152c0; end: 10b615367; -[SCStoriesSnapReadReceiptState isEqual:] */

bool FUN_10b6152c0(ulong param_1,undefined8 param_2,ulong param_3)

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
         ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
          (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 10) == *(char *)(param_3 + 10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b615368; end: 10b61536f; -[SCStoriesSnapReadReceiptState screenshotted] */

undefined1 FUN_10b615368(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b615370; end: 10b615377; -[SCStoriesSnapReadReceiptState saved] */

undefined1 FUN_10b615370(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b615378; end: 10b61537f; -[SCStoriesSnapReadReceiptState screenrecorded] */

undefined1 FUN_10b615378(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b615380; end: 10b6154c7; -[SCCustomStoryCreationMetadata initWithDisplayName:autoSaveEnabled:posterIdsPermitted:viewerIdsPermitted:typeInfo:storyId:] */

undefined1 *
FUN_10b615380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112706968;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
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
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6154c8; end: 10b6154eb; -[SCCustomStoryCreationMetadata copyWithZone:] */

undefined8 FUN_10b6154c8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6154ec; end: 10b615587; -[SCCustomStoryCreationMetadata hash] */

undefined8 * FUN_10b6154ec(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_50 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b615660:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b61566c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) {
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
                goto LAB_10b61566c;
              }
              goto LAB_10b615660;
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b61566c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b615588; end: 10b615687; -[SCCustomStoryCreationMetadata isEqual:] */

long FUN_10b615588(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b615660:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b61566c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_10b61566c;
              }
              goto LAB_10b615660;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b61566c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b615688; end: 10b61568f; -[SCCustomStoryCreationMetadata displayName] */

undefined8 FUN_10b615688(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b615690; end: 10b615697; -[SCCustomStoryCreationMetadata autoSaveEnabled] */

undefined1 FUN_10b615690(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b615698; end: 10b61569f; -[SCCustomStoryCreationMetadata posterIdsPermitted] */

undefined8 FUN_10b615698(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6156a0; end: 10b6156a7; -[SCCustomStoryCreationMetadata viewerIdsPermitted] */

undefined8 FUN_10b6156a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b6156a8; end: 10b6156af; -[SCCustomStoryCreationMetadata typeInfo] */

undefined8 FUN_10b6156a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b6156b0; end: 10b6156b7; -[SCCustomStoryCreationMetadata storyId] */

undefined8 FUN_10b6156b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b6156b8; end: 10b61570b; -[SCCustomStoryCreationMetadata .cxx_destruct] */

void FUN_10b6156b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b61570c; end: 10b615767; +[SCCustomStoryCreationTypeInfo customStoryWithSubtype:] */

void FUN_10b61570c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c24b0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b615768; end: 10b6157b3; +[SCCustomStoryCreationTypeInfo friendOfGroup] */

void FUN_10b615768(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c24b0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b6157b4; end: 10b615807; +[SCCustomStoryCreationTypeInfo privateStoryWithSubtype:] */

void FUN_10b6157b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c24b0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b615808; end: 10b615853; +[SCCustomStoryCreationTypeInfo sharedStory] */

void FUN_10b615808(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c24b0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b615854; end: 10b615877; -[SCCustomStoryCreationTypeInfo copyWithZone:] */

undefined8 FUN_10b615854(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b615878; end: 10b6158db; -[SCCustomStoryCreationTypeInfo hash] */

void FUN_10b615878(long param_1)

{
  undefined8 *puVar1;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = *(undefined8 *)(param_1 + 8);
  uStack_28 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_20 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_112706970;
  puStack_60 = (undefined1 *)puVar1;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6158dc; end: 10b61591f; -[SCCustomStoryCreationTypeInfo internalInit] */

void FUN_10b6158dc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112706970;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b615920; end: 10b6159c7; -[SCCustomStoryCreationTypeInfo isEqual:] */

bool FUN_10b615920(ulong param_1,undefined8 param_2,ulong param_3)

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
         ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
          (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b6159c8; end: 10b615ab3; -[SCCustomStoryCreationTypeInfo matchPrivateStory:customStory:sharedStory:friendOfGroup:] */

void FUN_10b6159c8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      if (param_3 == 0) goto LAB_10b615a84;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      pcVar3 = *(code **)(param_3 + 0x10);
      lVar2 = param_3;
    }
    else {
      if ((lVar2 != 1) || (param_4 == 0)) goto LAB_10b615a84;
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      pcVar3 = *(code **)(param_4 + 0x10);
      lVar2 = param_4;
    }
    (*pcVar3)(lVar2,uVar1);
  }
  else {
    if (lVar2 == 2) {
      if (param_5 == 0) goto LAB_10b615a84;
      pcVar3 = *(code **)(param_5 + 0x10);
      lVar2 = param_5;
    }
    else {
      if ((lVar2 != 3) || (param_6 == 0)) goto LAB_10b615a84;
      pcVar3 = *(code **)(param_6 + 0x10);
      lVar2 = param_6;
    }
    (*pcVar3)(lVar2);
  }
LAB_10b615a84:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b615ab4; end: 10b615bdb; -[SCCustomStoryUpdateMetadata initWithPublicationId:type:updateOption:updatedDisplayName:updatedAutoSave:updatedViewerIds:updatedPosterIds:] */

undefined1 *
FUN_10b615ab4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_112706978;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b615bdc; end: 10b615bff; -[SCCustomStoryUpdateMetadata copyWithZone:] */

undefined8 FUN_10b615bdc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b615c00; end: 10b615c9b; -[SCCustomStoryUpdateMetadata hash] */

undefined8 * FUN_10b615c00(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_58 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b615d7c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b615d88;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18) &&
         (*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(char *)((long)puVar3 + 8) == param_3[8])))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x28);
        if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x30);
          if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x38);
            if (puVar6 != *(undefined1 **)(param_3 + 0x38)) {
              func_0x00010c071ae0();
              goto LAB_10b615d88;
            }
            goto LAB_10b615d7c;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b615d88:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b615c9c; end: 10b615da3; -[SCCustomStoryUpdateMetadata isEqual:] */

long FUN_10b615c9c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b615d7c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b615d88;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
         (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x28);
        if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x30);
          if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x38);
            if (lVar3 != *(long *)(param_3 + 0x38)) {
              func_0x00010c071ae0();
              goto LAB_10b615d88;
            }
            goto LAB_10b615d7c;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b615d88:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b615da4; end: 10b615dab; -[SCCustomStoryUpdateMetadata publicationId] */

undefined8 FUN_10b615da4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b615dac; end: 10b615db3; -[SCCustomStoryUpdateMetadata type] */

undefined8 FUN_10b615dac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b615db4; end: 10b615dbb; -[SCCustomStoryUpdateMetadata updateOption] */

undefined8 FUN_10b615db4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b615dbc; end: 10b615dc3; -[SCCustomStoryUpdateMetadata updatedDisplayName] */

undefined8 FUN_10b615dbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b615dc4; end: 10b615dcb; -[SCCustomStoryUpdateMetadata updatedAutoSave] */

undefined1 FUN_10b615dc4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b615dcc; end: 10b615dd3; -[SCCustomStoryUpdateMetadata updatedViewerIds] */

undefined8 FUN_10b615dcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b615dd4; end: 10b615ddb; -[SCCustomStoryUpdateMetadata updatedPosterIds] */

undefined8 FUN_10b615dd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b615ddc; end: 10b615e23; -[SCCustomStoryUpdateMetadata .cxx_destruct] */

void FUN_10b615ddc(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b615e24; end: 10b615ed7; -[SCStoriesSnapDeleteSnapProAttributes initWithArchiveOnly:businessProfileId:additionalHttpHeaders:] */

undefined1 *
FUN_10b615e24(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112706980;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
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
  return (undefined1 *)puVar1;
}



/* Entry: 10b615ed8; end: 10b615efb; -[SCStoriesSnapDeleteSnapProAttributes copyWithZone:] */

undefined8 FUN_10b615ed8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b615efc; end: 10b615f77; -[SCStoriesSnapDeleteSnapProAttributes hash] */

ulong * FUN_10b615efc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (ulong *)param_3) {
LAB_10b616008:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b616014;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b616014;
        }
        goto LAB_10b616008;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b616014:
  _objc_release(param_3);
  return (ulong *)puVar6;
}



/* Entry: 10b615f78; end: 10b61602f; -[SCStoriesSnapDeleteSnapProAttributes isEqual:] */

long FUN_10b615f78(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b616008:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b616014;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b616014;
        }
        goto LAB_10b616008;
      }
    }
    lVar3 = 0;
  }
LAB_10b616014:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b616030; end: 10b616037; -[SCStoriesSnapDeleteSnapProAttributes archiveOnly] */

undefined1 FUN_10b616030(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b616038; end: 10b61603f; -[SCStoriesSnapDeleteSnapProAttributes businessProfileId] */

undefined8 FUN_10b616038(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b616040; end: 10b616047; -[SCStoriesSnapDeleteSnapProAttributes additionalHttpHeaders] */

undefined8 FUN_10b616040(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b616048; end: 10b616077; -[SCStoriesSnapDeleteSnapProAttributes .cxx_destruct] */

void FUN_10b616048(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b616078; end: 10b6160d3; +[SCMyStoriesDataRequest handlePostSchdulingWithScheduled:] */

void FUN_10b616078(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cf360;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 10;
  puVar2[0xb1] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b6160d4; end: 10b616147; +[SCMyStoriesDataRequest handlePostToSpotlightStartedWithClientId:postingToHostProfile:] */

void FUN_10b6160d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cf360;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 9;
  uVar3 = *(undefined8 *)(puVar2 + 0xa8);
  *(undefined8 *)(puVar2 + 0xa8) = param_3;
  _objc_release(uVar3);
  puVar2[0xb0] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b616148; end: 10b61621b; +[SCMyStoriesDataRequest handleSnapDeleteStateUpdatedWithStoryId:snapComponentId:snapProAttributes:deleteState:] */

void FUN_10b616148(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126cf360;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  *(undefined8 *)(puVar2 + 0x48) = param_6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b61621c; end: 10b616347; +[SCMyStoriesDataRequest handleSnapPostedStateUpdatedWithClientId:snapId:businessId:storyType:storyTypeVariant:] */

void FUN_10b61621c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126cf360;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 8;
  uVar3 = *(undefined8 *)(puVar2 + 0x80);
  *(undefined8 *)(puVar2 + 0x80) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x88);
  *(undefined8 *)(puVar2 + 0x88) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x90);
  *(undefined8 *)(puVar2 + 0x90) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x98);
  *(undefined8 *)(puVar2 + 0x98) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xa0);
  *(undefined8 *)(puVar2 + 0xa0) = param_7;
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b616348; end: 10b6163df; +[SCMyStoriesDataRequest handleSnapPostingAttemptWithStoryId:displayName:] */

void FUN_10b616348(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126cf360;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 7;
  uVar3 = *(undefined8 *)(puVar2 + 0x70);
  *(undefined8 *)(puVar2 + 0x70) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x78);
  *(undefined8 *)(puVar2 + 0x78) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b6163e0; end: 10b61645b; +[SCMyStoriesDataRequest handleSnapPostingProgressUpdatedWithClientId:postingProgress:] */

void FUN_10b6163e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126cf360;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
  uVar3 = *(undefined8 *)(puVar2 + 0x60);
  *(undefined8 *)(puVar2 + 0x60) = param_4;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x68) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b61645c; end: 10b6164cf; +[SCMyStoriesDataRequest handleSnapPostingStateUpdatedWithClientIds:postingState:] */

void FUN_10b61645c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cf360;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_3;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x58) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b6164d0; end: 10b616577; +[SCMyStoriesDataRequest handleSnapSaveStateUpdatedWithStoryId:snapComponentId:saveState:] */

void FUN_10b6164d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126cf360;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
  *(undefined8 *)(puVar2 + 0x28) = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b616578; end: 10b6165df; +[SCMyStoriesDataRequest handleSnapViewedStateUpdatedWithStoryId:] */

void FUN_10b616578(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cf360;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 2;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b6165e0; end: 10b616603; -[SCMyStoriesDataRequest copyWithZone:] */

undefined8 FUN_10b6165e0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b616604; end: 10b616777; -[SCMyStoriesDataRequest hash] */

undefined8 * FUN_10b616604(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  double dVar8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_e0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_e0 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_d8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_d0 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x28);
  uStack_b8 = *(undefined8 *)(param_1 + 0x30);
  lStack_c0 = -lVar5;
  if (-1 < lVar5) {
    lStack_c0 = lVar5;
  }
  uStack_c8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_b0 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x48);
  uStack_98 = *(undefined8 *)(param_1 + 0x50);
  lStack_a0 = -lVar5;
  if (-1 < lVar5) {
    lStack_a0 = lVar5;
  }
  uStack_a8 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x58);
  uStack_88 = *(undefined8 *)(param_1 + 0x60);
  lStack_90 = -lVar5;
  if (-1 < lVar5) {
    lStack_90 = lVar5;
  }
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uVar6 = ~*(ulong *)(param_1 + 0x68) + *(ulong *)(param_1 + 0x68) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_80 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_80 = uStack_80 ^ uStack_80 >> 0x16;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 0xb0);
  uStack_30 = (ulong)*(byte *)(param_1 + 0xb1);
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_e0,0x17);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b6169e0:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b6169ec;
    puVar7 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if (((((ulong)puVar4 & 1) != 0) &&
        ((((*(long *)((long)puVar3 + 8) == *(long *)(param_3 + 8) &&
           (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))) &&
          (*(long *)((long)puVar3 + 0x48) == *(long *)(param_3 + 0x48))) &&
         ((*(long *)((long)puVar3 + 0x58) == *(long *)(param_3 + 0x58) &&
          (*(char *)((long)puVar3 + 0xb0) == param_3[0xb0])))))) &&
       (*(char *)((long)puVar3 + 0xb1) == param_3[0xb1])) {
      dVar8 = ABS(*(double *)((long)puVar3 + 0x68) - *(double *)(param_3 + 0x68));
      if ((((((dVar8 < 2.2250738585072014e-308) ||
             (dVar8 < ABS(*(double *)((long)puVar3 + 0x68) + *(double *)(param_3 + 0x68)) *
                      2.220446049250313e-16)) &&
            ((lVar5 = *(long *)((long)puVar3 + 0x10), lVar5 == *(long *)(param_3 + 0x10) ||
             (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
           (((lVar5 = *(long *)((long)puVar3 + 0x18), lVar5 == *(long *)(param_3 + 0x18) ||
             (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
            ((lVar5 = *(long *)((long)puVar3 + 0x20), lVar5 == *(long *)(param_3 + 0x20) ||
             (func_0x00010c071ae0(), (int)lVar5 != 0)))))) &&
          ((((lVar5 = *(long *)((long)puVar3 + 0x30), lVar5 == *(long *)(param_3 + 0x30) ||
             (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
            ((lVar5 = *(long *)((long)puVar3 + 0x38), lVar5 == *(long *)(param_3 + 0x38) ||
             (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
           ((((lVar5 = *(long *)((long)puVar3 + 0x40), lVar5 == *(long *)(param_3 + 0x40) ||
              (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
             ((lVar5 = *(long *)((long)puVar3 + 0x50), lVar5 == *(long *)(param_3 + 0x50) ||
              (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
            (((((lVar5 = *(long *)((long)puVar3 + 0x60), lVar5 == *(long *)(param_3 + 0x60) ||
                (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
               ((lVar5 = *(long *)((long)puVar3 + 0x70), lVar5 == *(long *)(param_3 + 0x70) ||
                (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
              ((lVar5 = *(long *)((long)puVar3 + 0x78), lVar5 == *(long *)(param_3 + 0x78) ||
               (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
             (((lVar5 = *(long *)((long)puVar3 + 0x80), lVar5 == *(long *)(param_3 + 0x80) ||
               (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
              ((((lVar5 = *(long *)((long)puVar3 + 0x88), lVar5 == *(long *)(param_3 + 0x88) ||
                 (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
                ((lVar5 = *(long *)((long)puVar3 + 0x90), lVar5 == *(long *)(param_3 + 0x90) ||
                 (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
               ((lVar5 = *(long *)((long)puVar3 + 0x98), lVar5 == *(long *)(param_3 + 0x98) ||
                (func_0x00010c071ae0(), (int)lVar5 != 0)))))))))))))) &&
         ((lVar5 = *(long *)((long)puVar3 + 0xa0), lVar5 == *(long *)(param_3 + 0xa0) ||
          (func_0x00010c071ae0(), (int)lVar5 != 0)))) {
        puVar7 = *(undefined1 **)((long)puVar3 + 0xa8);
        if (puVar7 != *(undefined1 **)(param_3 + 0xa8)) {
          func_0x00010c071ae0();
          goto LAB_10b6169ec;
        }
        goto LAB_10b6169e0;
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_10b6169ec:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 10b616778; end: 10b616a07; -[SCMyStoriesDataRequest isEqual:] */

long FUN_10b616778(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b6169e0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6169ec;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
           (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
          (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))) &&
         ((*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58) &&
          (*(char *)(param_1 + 0xb0) == *(char *)(param_3 + 0xb0))))))) &&
       (*(char *)(param_1 + 0xb1) == *(char *)(param_3 + 0xb1))) {
      dVar4 = ABS(*(double *)(param_1 + 0x68) - *(double *)(param_3 + 0x68));
      if ((((((dVar4 < 2.2250738585072014e-308) ||
             (dVar4 < ABS(*(double *)(param_1 + 0x68) + *(double *)(param_3 + 0x68)) *
                      2.220446049250313e-16)) &&
            ((lVar3 = *(long *)(param_1 + 0x10), lVar3 == *(long *)(param_3 + 0x10) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
           (((lVar3 = *(long *)(param_1 + 0x18), lVar3 == *(long *)(param_3 + 0x18) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
            ((lVar3 = *(long *)(param_1 + 0x20), lVar3 == *(long *)(param_3 + 0x20) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
          ((((lVar3 = *(long *)(param_1 + 0x30), lVar3 == *(long *)(param_3 + 0x30) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
            ((lVar3 = *(long *)(param_1 + 0x38), lVar3 == *(long *)(param_3 + 0x38) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
           ((((lVar3 = *(long *)(param_1 + 0x40), lVar3 == *(long *)(param_3 + 0x40) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
             ((lVar3 = *(long *)(param_1 + 0x50), lVar3 == *(long *)(param_3 + 0x50) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
            (((((lVar3 = *(long *)(param_1 + 0x60), lVar3 == *(long *)(param_3 + 0x60) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
               ((lVar3 = *(long *)(param_1 + 0x70), lVar3 == *(long *)(param_3 + 0x70) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
              ((lVar3 = *(long *)(param_1 + 0x78), lVar3 == *(long *)(param_3 + 0x78) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
             (((lVar3 = *(long *)(param_1 + 0x80), lVar3 == *(long *)(param_3 + 0x80) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
              ((((lVar3 = *(long *)(param_1 + 0x88), lVar3 == *(long *)(param_3 + 0x88) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                ((lVar3 = *(long *)(param_1 + 0x90), lVar3 == *(long *)(param_3 + 0x90) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
               ((lVar3 = *(long *)(param_1 + 0x98), lVar3 == *(long *)(param_3 + 0x98) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)))))))))))))) &&
         ((lVar3 = *(long *)(param_1 + 0xa0), lVar3 == *(long *)(param_3 + 0xa0) ||
          (func_0x00010c071ae0(), (int)lVar3 != 0)))) {
        lVar3 = *(long *)(param_1 + 0xa8);
        if (lVar3 != *(long *)(param_3 + 0xa8)) {
          func_0x00010c071ae0();
          goto LAB_10b6169ec;
        }
        goto LAB_10b6169e0;
      }
    }
    lVar3 = 0;
  }
LAB_10b6169ec:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b616a08; end: 10b616c2f; -[SCMyStoriesDataRequest matchHandleStoriesUpdated:handleSnapViewedStateUpdated:handleSnapSaveStateUpdated:handleSnapDeleteStateUpdated:handleSnapPostingStateUpdated:handleSnapPostingProgressUpdated:handleSnapPostingAttempt:handleSnapPostedStateUpdated:handlePostToSpotlightStarted:handlePostSchduling:] */

void FUN_10b616a08(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10,long param_11,
                  long param_12)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
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
  switch(*(undefined8 *)(param_1 + 8)) {
  case 1:
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))();
    }
    break;
  case 2:
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x10));
    }
    break;
  case 3:
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))
                (param_5,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                 *(undefined8 *)(param_1 + 0x28));
    }
    break;
  case 4:
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))
                (param_6,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                 *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
    }
    break;
  case 5:
    if (param_7 == 0) break;
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    pcVar4 = *(code **)(param_7 + 0x10);
    lVar1 = param_7;
    goto code_r0x00010b616ba4;
  case 6:
    if (param_8 != 0) {
      (**(code **)(param_8 + 0x10))
                (*(undefined8 *)(param_1 + 0x68),param_8,*(undefined8 *)(param_1 + 0x60));
    }
    break;
  case 7:
    if (param_9 == 0) break;
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    pcVar4 = *(code **)(param_9 + 0x10);
    lVar1 = param_9;
code_r0x00010b616ba4:
    (*pcVar4)(lVar1,uVar2,uVar3);
    break;
  case 8:
    if (param_10 != 0) {
      (**(code **)(param_10 + 0x10))
                (param_10,*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),
                 *(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98),
                 *(undefined8 *)(param_1 + 0xa0));
    }
    break;
  case 9:
    if (param_11 != 0) {
      (**(code **)(param_11 + 0x10))
                (param_11,*(undefined8 *)(param_1 + 0xa8),*(undefined1 *)(param_1 + 0xb0));
    }
    break;
  case 10:
    if (param_12 != 0) {
      (**(code **)(param_12 + 0x10))(param_12,*(undefined1 *)(param_1 + 0xb1));
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b616c30; end: 10b616c53; -[SCStoriesViewerListUpdateRequest copyWithZone:] */

undefined8 FUN_10b616c30(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b616c54; end: 10b616cc3; -[SCStoriesViewerListUpdateRequest isEqual:] */

uint FUN_10b616c54(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    if ((param_1 != 0) && (param_3 != 0)) {
      _objc_opt_class(param_1);
      lVar1 = param_3;
      _objc_opt_isKindOfClass(param_3,param_1);
      uVar2 = (uint)lVar1;
    }
  }
  _objc_release(param_3);
  return uVar2 & 1;
}



/* Entry: 10b616cc4; end: 10b616d17; +[SCStoriesSummaryInfoUpdates rankedIdentifiersWithType:] */

void FUN_10b616cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d6758;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b616d18; end: 10b616d63; +[SCStoriesSummaryInfoUpdates summariesInfo] */

void FUN_10b616d18(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d6758;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b616d64; end: 10b616d87; -[SCStoriesSummaryInfoUpdates copyWithZone:] */

undefined8 FUN_10b616d64(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b616d88; end: 10b616de7; -[SCStoriesSummaryInfoUpdates hash] */

void FUN_10b616d88(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  lStack_20 = -lVar1;
  if (-1 < lVar1) {
    lStack_20 = lVar1;
  }
  puVar2 = &uStack_28;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_112706990;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b616de8; end: 10b616e2b; -[SCStoriesSummaryInfoUpdates internalInit] */

void FUN_10b616de8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112706990;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b616e2c; end: 10b616ec3; -[SCStoriesSummaryInfoUpdates isEqual:] */

bool FUN_10b616e2c(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 10b616ec4; end: 10b616f47; -[SCStoriesSummaryInfoUpdates matchRankedIdentifiers:summariesInfo:] */

void FUN_10b616ec4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b616f48; end: 10b616f6b; -[SCStoriesSummaryDiffUpdate copyWithZone:] */

undefined8 FUN_10b616f48(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b616f6c; end: 10b616fdb; -[SCStoriesSummaryDiffUpdate isEqual:] */

uint FUN_10b616f6c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    if ((param_1 != 0) && (param_3 != 0)) {
      _objc_opt_class(param_1);
      lVar1 = param_3;
      _objc_opt_isKindOfClass(param_3,param_1);
      uVar2 = (uint)lVar1;
    }
  }
  _objc_release(param_3);
  return uVar2 & 1;
}



/* Entry: 10b616fdc; end: 10b61708f; -[SCStoriesSnapViewerSnapState initWithStoryType:snapIdsArray:sectionTypesArray:] */

undefined1 *
FUN_10b616fdc(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112706998;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
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
  return (undefined1 *)puVar1;
}



/* Entry: 10b617090; end: 10b6170b3; -[SCStoriesSnapViewerSnapState copyWithZone:] */

undefined8 FUN_10b617090(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6170b4; end: 10b61712f; -[SCStoriesSnapViewerSnapState hash] */

long * FUN_10b6170b4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  plVar3 = &lStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_40 = (long)*(int *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&lStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == (long *)param_3) {
LAB_10b6171c0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b6171cc;
    puVar6 = (undefined1 *)plVar3;
    _objc_opt_class(plVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(int *)((long)plVar3 + 8) == *(int *)(param_3 + 8))) {
      lVar5 = *(long *)((long)plVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)plVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b6171cc;
        }
        goto LAB_10b6171c0;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b6171cc:
  _objc_release(param_3);
  return (long *)puVar6;
}



/* Entry: 10b617130; end: 10b6171e7; -[SCStoriesSnapViewerSnapState isEqual:] */

long FUN_10b617130(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b6171c0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6171cc;
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
          goto LAB_10b6171cc;
        }
        goto LAB_10b6171c0;
      }
    }
    lVar3 = 0;
  }
LAB_10b6171cc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b6171e8; end: 10b6171ef; -[SCStoriesSnapViewerSnapState storyType] */

undefined4 FUN_10b6171e8(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b6171f0; end: 10b6171f7; -[SCStoriesSnapViewerSnapState snapIdsArray] */

undefined8 FUN_10b6171f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


