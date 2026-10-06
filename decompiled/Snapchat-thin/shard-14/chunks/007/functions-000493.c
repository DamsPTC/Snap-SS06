/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b6125e4; end: 10b6126eb; -[SCBoostState isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b6125e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b6126c4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6126d0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + (long)_DAT_11278f4c0) == *(char *)(param_3 + (long)_DAT_11278f4c0) &&
        (*(char *)(param_1 + (long)_DAT_11278f4c4) == *(char *)(param_3 + (long)_DAT_11278f4c4)))))
    {
      lVar3 = *(long *)(param_1 + (long)_DAT_11278f4b4);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_11278f4b4)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_11278f4b8);
        if ((lVar3 == *(long *)(param_3 + (long)_DAT_11278f4b8)) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + (long)_DAT_11278f4bc);
          if (lVar3 != *(long *)(param_3 + (long)_DAT_11278f4bc)) {
            func_0x00010c071ae0();
            goto LAB_10b6126d0;
          }
          goto LAB_10b6126c4;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b6126d0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b6126ec; end: 10b6126fb; -[SCBoostState stateId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b6126ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f4b4);
}



/* Entry: 10b6126fc; end: 10b61270b; -[SCBoostState compositeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b6126fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f4b8);
}



/* Entry: 10b61270c; end: 10b61271b; -[SCBoostState metadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61270c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f4bc);
}



/* Entry: 10b61271c; end: 10b61272b; -[SCBoostState isBoosted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b61271c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278f4c0);
}



/* Entry: 10b61272c; end: 10b61273b; -[SCBoostState isRecommended] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b61272c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278f4c4);
}



/* Entry: 10b61273c; end: 10b61278b; -[SCBoostState .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b61273c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278f4bc,0);
  _objc_storeStrong(param_1 + _DAT_11278f4b8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278f4b4,0);
  return;
}



/* Entry: 10b61278c; end: 10b61281b; -[SCBoostCompositeStoryId initWithCorpus:id:version:] */

undefined1 *
FUN_10b61278c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112706910;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
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



/* Entry: 10b61281c; end: 10b61283f; -[SCBoostCompositeStoryId copyWithZone:] */

undefined8 FUN_10b61281c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b612840; end: 10b6128bf; -[SCBoostCompositeStoryId hash] */

long * FUN_10b612840(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  plVar2 = &lStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lStack_40 = -lVar4;
  if (-1 < lVar4) {
    lStack_40 = lVar4;
  }
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x18);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  uStack_38 = uVar1;
  func_0x000107c3191c(&lStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar2 != (long *)param_3) {
    puVar5 = (undefined1 *)0x0;
    if ((plVar2 == (long *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b612954;
    puVar5 = (undefined1 *)plVar2;
    _objc_opt_class(plVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)plVar2 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)((long)plVar2 + 0x18) != *(long *)(param_3 + 0x18))))) {
      puVar5 = (undefined1 *)0x0;
      goto LAB_10b612954;
    }
    puVar5 = *(undefined1 **)((long)plVar2 + 0x10);
    if (puVar5 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b612954;
    }
  }
  puVar5 = (undefined1 *)0x1;
LAB_10b612954:
  _objc_release(param_3);
  return (long *)puVar5;
}



/* Entry: 10b6128c0; end: 10b61296f; -[SCBoostCompositeStoryId isEqual:] */

long FUN_10b6128c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b612954;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_10b612954;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10b612954;
    }
  }
  lVar3 = 1;
LAB_10b612954:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b612970; end: 10b612977; -[SCBoostCompositeStoryId corpus] */

undefined8 FUN_10b612970(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b612978; end: 10b61297f; -[SCBoostCompositeStoryId id] */

undefined8 FUN_10b612978(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b612980; end: 10b612987; -[SCBoostCompositeStoryId version] */

undefined8 FUN_10b612980(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b612988; end: 10b612993; -[SCBoostCompositeStoryId .cxx_destruct] */

void FUN_10b612988(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b612994; end: 10b612a7f; -[SCBoostMetadataModel initWithCoder:] */

undefined1 *
FUN_10b612994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_112706918;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b612a80; end: 10b612b4f; -[SCBoostMetadataModel initWithStoryId:snapId:boostTimestampMs:boostProgressMs:recommendTimestampMs:] */

undefined1 *
FUN_10b612a80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_112706918;
  uStack_60 = param_4;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 10b612b50; end: 10b612b73; -[SCBoostMetadataModel copyWithZone:] */

undefined8 FUN_10b612b50(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b612b74; end: 10b612c0f; -[SCBoostMetadataModel encodeWithCoder:] */

void FUN_10b612b74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e515b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110dbb0f8);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x18),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f68a38);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x20),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f68a58);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x28),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f68a78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b612c10; end: 10b612ce7; -[SCBoostMetadataModel hash] */

undefined8 * FUN_10b612c10(long param_1,undefined8 param_2,undefined1 *param_3)

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
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_40 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_48 = uVar3;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10b612e04:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b612e10;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((ulong)puVar5 & 1) != 0) {
      dVar10 = ABS(*(double *)((long)puVar4 + 0x18) - *(double *)(param_3 + 0x18));
      dVar9 = ABS(*(double *)((long)puVar4 + 0x18) + *(double *)(param_3 + 0x18)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (bVar1) {
        dVar10 = ABS(*(double *)((long)puVar4 + 0x20) - *(double *)(param_3 + 0x20));
        dVar9 = ABS(*(double *)((long)puVar4 + 0x20) + *(double *)(param_3 + 0x20)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
          bVar1 = dVar10 < dVar9;
        }
        if (bVar1) {
          dVar10 = ABS(*(double *)((long)puVar4 + 0x28) - *(double *)(param_3 + 0x28));
          dVar9 = ABS(*(double *)((long)puVar4 + 0x28) + *(double *)(param_3 + 0x28)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
            bVar1 = dVar10 < dVar9;
          }
          if ((bVar1) &&
             ((lVar6 = *(long *)((long)puVar4 + 8), lVar6 == *(long *)(param_3 + 8) ||
              (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
            puVar8 = *(undefined1 **)((long)puVar4 + 0x10);
            if (puVar8 != *(undefined1 **)(param_3 + 0x10)) {
              func_0x00010c071ae0();
              goto LAB_10b612e10;
            }
            goto LAB_10b612e04;
          }
        }
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_10b612e10:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 10b612ce8; end: 10b612e2b; -[SCBoostMetadataModel isEqual:] */

long FUN_10b612ce8(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b612e04:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b612e10;
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
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
        dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (bVar1) {
          dVar6 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
          dVar5 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
            bVar1 = dVar6 < dVar5;
          }
          if ((bVar1) &&
             ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
            lVar4 = *(long *)(param_1 + 0x10);
            if (lVar4 != *(long *)(param_3 + 0x10)) {
              func_0x00010c071ae0();
              goto LAB_10b612e10;
            }
            goto LAB_10b612e04;
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_10b612e10:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b612e2c; end: 10b612e33; -[SCBoostMetadataModel storyId] */

undefined8 FUN_10b612e2c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b612e34; end: 10b612e3b; -[SCBoostMetadataModel snapId] */

undefined8 FUN_10b612e34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b612e3c; end: 10b612e43; -[SCBoostMetadataModel boostTimestampMs] */

undefined8 FUN_10b612e3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b612e44; end: 10b612e4b; -[SCBoostMetadataModel boostProgressMs] */

undefined8 FUN_10b612e44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b612e4c; end: 10b612e53; -[SCBoostMetadataModel recommendTimestampMs] */

undefined8 FUN_10b612e4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b612e54; end: 10b612e83; -[SCBoostMetadataModel .cxx_destruct] */

void FUN_10b612e54(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b612e84; end: 10b612eaf; -[SCStoriesServices initWithStoriesDataCoordinator:storiesMediaCoordinator:storiesThumbnailCoordinator:messagingStoryPlaybackOrderDecider:snapViewerDataCoordinator:friendStoriesSyncer:customStoriesDataMutator:customStoriesDataFetcher:customStoriesDataSyncer:customStoriesOnboardingManager:storiesRankingCoordinator:] */

void FUN_10b612e84(void)

{
  func_0x00010c04d080();
  return;
}



/* Entry: 10b612eb0; end: 10b612eb7; -[SCStoriesServices messagingStoryPlaybackOrderDecider] */

undefined8 FUN_10b612eb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b612eb8; end: 10b612ebf; -[SCStoriesServices friendStoriesSyncer] */

undefined8 FUN_10b612eb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b612ec0; end: 10b612ec7; -[SCStoriesServices customStoriesDataMutator] */

undefined8 FUN_10b612ec0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b612ec8; end: 10b612ecf; -[SCStoriesServices customStoriesOnboardingManager] */

undefined8 FUN_10b612ec8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b612ed0; end: 10b612ed7; -[SCStoriesServices storiesRankingCoordinator] */

undefined8 FUN_10b612ed0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b612ed8; end: 10b612edf; -[SCStoriesServices storiesCachedPropertiesCoordinator] */

undefined8 FUN_10b612ed8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b612ee0; end: 10b612f87; -[SCStoriesServices .cxx_destruct] */

void FUN_10b612ee0(long param_1)

{
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b612f88; end: 10b612fc3; -[SCStoriesSnapReadReceiptService .cxx_destruct] */

void FUN_10b612f88(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b612fc4; end: 10b61313f; -[SCStoriesSnapReadReceiptCoordinatingListenerAnnouncer description] */

void FUN_10b612fc4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plStack_60;
  long *plStack_58;
  
  FUN_10b613140(&plStack_60,param_1 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar5 = *plStack_60;
  if (plStack_60[1] != lVar5) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar5 = lVar5 + lVar6;
      _objc_loadWeakRetained();
      if (lVar5 != 0) {
        func_0x00010bf06ba0(puVar4);
        if (uVar7 != (plStack_60[1] - *plStack_60 >> 3) - 1U) {
          func_0x00010bf070e0(puVar4);
        }
      }
      _objc_release(lVar5);
      uVar7 = uVar7 + 1;
      lVar5 = *plStack_60;
      lVar6 = lVar6 + 8;
    } while (uVar7 < (ulong)(plStack_60[1] - lVar5 >> 3));
  }
  func_0x00010bf070e0(puVar4);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b613140; end: 10b61319f;  */

void FUN_10b613140(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 10b6131a0; end: 10b6133cf; -[SCStoriesSnapReadReceiptCoordinatingListenerAnnouncer removeListener:] */

void FUN_10b6131a0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  if (plVar6 == (long *)0x0) goto LAB_10b613354;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_10b613208;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    func_0x000107c307e4(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_10b613354;
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_68;
    } while (cVar2 != '\0');
  }
  else {
LAB_10b613208:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110d26738;
    plVar9 = plVar6 + 3;
    *plVar9 = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    lVar1 = ((long *)*puVar8)[1];
    plStack_80 = plVar9;
    plStack_78 = plVar6;
    for (lVar7 = *(long *)*puVar8; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      lVar4 = lVar7;
      _objc_loadWeakRetained();
      if (lVar4 != 0) {
        lVar5 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar4);
        if (lVar5 != param_3) {
          func_0x000107c307e0(plVar9,lVar7);
        }
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_90 = plVar9;
    plStack_88 = plVar6;
    func_0x000107c307e4(puVar8,&plStack_90);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_10b613354;
    plVar6 = plStack_78 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_10b613354:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6133d0; end: 10b6134c3; -[SCStoriesSnapReadReceiptCoordinatingListenerAnnouncer didUpdateWithStoriesSnapReadReceiptUpdateRequest:fromPullToRefreshSync:] */

void FUN_10b6133d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  FUN_10b613140(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf7ea20();
      _objc_release(lVar5);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b6134c4; end: 10b6134eb; -[SCStoriesSnapReadReceiptCoordinatingListenerAnnouncer .cxx_destruct] */

void FUN_10b6134c4(long param_1)

{
  FUN_10b613500(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 10b6134ec; end: 10b6134ff;  */

undefined * FUN_10b6134ec(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar6 = *(long **)(puVar4 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return puVar4;
}



/* Entry: 10b613500; end: 10b613557;  */

long FUN_10b613500(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10b613558; end: 10b613567;  */

void FUN_10b613558(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d26738;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b613568; end: 10b613587;  */

void FUN_10b613568(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d26738;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b613588; end: 10b6135ef;  */

void FUN_10b613588(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -8;
        _objc_destroyWeak(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b6135f0; end: 10b6135f3;  */

void FUN_10b6135f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b6135f4; end: 10b61363b; +[SCStoriesSnapReadReceiptUpdateRequest allStories] */

void FUN_10b6135f4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cf208;
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



/* Entry: 10b61363c; end: 10b6136ab; +[SCStoriesSnapReadReceiptUpdateRequest discoverStoryWithStoryDedupFp:editionId:] */

void FUN_10b61363c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126cf208;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b6136ac; end: 10b613717; +[SCStoriesSnapReadReceiptUpdateRequest snapsWithSnapIds:] */

void FUN_10b6136ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cf208;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b613718; end: 10b6137df; +[SCStoriesSnapReadReceiptUpdateRequest storyWithStoryId:publicationId:storyOwnerId:] */

void FUN_10b613718(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126cf208;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
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



/* Entry: 10b6137e0; end: 10b613803; -[SCStoriesSnapReadReceiptUpdateRequest copyWithZone:] */

undefined8 FUN_10b6137e0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b613804; end: 10b6138a3; -[SCStoriesSnapReadReceiptUpdateRequest hash] */

void FUN_10b613804(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_112706930;
  puStack_90 = (undefined1 *)puVar4;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6138a4; end: 10b6138e7; -[SCStoriesSnapReadReceiptUpdateRequest internalInit] */

void FUN_10b6138a4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112706930;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b6138e8; end: 10b6139f7; -[SCStoriesSnapReadReceiptUpdateRequest isEqual:] */

long FUN_10b6138e8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b6139d0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b6139dc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if (lVar3 != *(long *)(param_3 + 0x38)) {
                func_0x00010c071ae0();
                goto LAB_10b6139dc;
              }
              goto LAB_10b6139d0;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b6139dc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b6139f8; end: 10b613af3; -[SCStoriesSnapReadReceiptUpdateRequest matchAllStories:story:discoverStory:snaps:] */

void FUN_10b6139f8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))(param_3);
      }
    }
    else if ((lVar1 == 1) && (param_4 != 0)) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                 *(undefined8 *)(param_1 + 0x20));
    }
  }
  else if (lVar1 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))
                (param_5,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    }
  }
  else if ((lVar1 == 3) && (param_6 != 0)) {
    (**(code **)(param_6 + 0x10))(param_6,*(undefined8 *)(param_1 + 0x38));
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b613af4; end: 10b613b47; -[SCStoriesSnapReadReceiptUpdateRequest .cxx_destruct] */

void FUN_10b613af4(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b613b48; end: 10b613bc7; -[SCStoriesSnapReadReceiptFetchFlag initWithFlagId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b613b48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112706938;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278f53c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f53c) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b613bc8; end: 10b613beb; -[SCStoriesSnapReadReceiptFetchFlag copyWithZone:] */

undefined8 FUN_10b613bc8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b613bec; end: 10b613bfb; -[SCStoriesSnapReadReceiptFetchFlag hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b613bec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278f53c),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b613bfc; end: 10b613c93; -[SCStoriesSnapReadReceiptFetchFlag isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b613bfc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b613c78;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b613c78;
    }
    lVar3 = *(long *)(param_1 + (long)_DAT_11278f53c);
    if (lVar3 != *(long *)(param_3 + (long)_DAT_11278f53c)) {
      func_0x00010c071ae0();
      goto LAB_10b613c78;
    }
  }
  lVar3 = 1;
LAB_10b613c78:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b613c94; end: 10b613ca3; -[SCStoriesSnapReadReceiptFetchFlag flagId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b613c94(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f53c);
}



/* Entry: 10b613ca4; end: 10b613cb7; -[SCStoriesSnapReadReceiptFetchFlag .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b613ca4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278f53c,0);
  return;
}



/* Entry: 10b613cb8; end: 10b613e63; -[SCStoriesSnapReadReceiptPremiumRecord initWithStoryId:publisherId:viewerUserId:viewTimeMs:subItemId:subItemProgressMs:approximateProgress:contentType:syncState:version:segmentId:shareCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10b613cb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
             undefined4 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_78 = PTR_PTR_112706940;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278f54c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f54c) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278f550);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f550) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278f554);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f554) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f558) = param_1;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278f55c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f55c) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + (long)_DAT_11278f560) = param_8;
    *(undefined4 *)((long)puVar1 + (long)_DAT_11278f564) = param_9;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f568) = param_10;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f56c) = param_11;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f570) = param_12;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f574) = param_13;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f578) = param_14;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10b613e64; end: 10b613e87; -[SCStoriesSnapReadReceiptPremiumRecord copyWithZone:] */

undefined8 FUN_10b613e64(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b613e88; end: 10b613faf; -[SCStoriesSnapReadReceiptPremiumRecord hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b613e88(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278f54c);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11278f550);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278f554);
  uStack_80 = uVar3;
  func_0x00010bfde980();
  uVar6 = ~*(ulong *)(param_1 + _DAT_11278f558) + *(ulong *)(param_1 + _DAT_11278f558) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_70 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + _DAT_11278f55c);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  lStack_60 = (long)*(int *)(param_1 + _DAT_11278f560);
  lStack_58 = (long)*(int *)(param_1 + _DAT_11278f564);
  lVar7 = *(long *)(param_1 + _DAT_11278f568);
  lStack_50 = -lVar7;
  if (-1 < lVar7) {
    lStack_50 = lVar7;
  }
  lVar7 = *(long *)(param_1 + _DAT_11278f56c);
  lStack_48 = -lVar7;
  if (-1 < lVar7) {
    lStack_48 = lVar7;
  }
  lVar7 = *(long *)(param_1 + _DAT_11278f570);
  lStack_40 = -lVar7;
  if (-1 < lVar7) {
    lStack_40 = lVar7;
  }
  lVar7 = *(long *)(param_1 + _DAT_11278f574);
  lStack_38 = -lVar7;
  if (-1 < lVar7) {
    lStack_38 = lVar7;
  }
  lVar7 = *(long *)(param_1 + _DAT_11278f578);
  lStack_30 = -lVar7;
  if (-1 < lVar7) {
    lStack_30 = lVar7;
  }
  puVar4 = &uStack_88;
  uStack_68 = uVar3;
  func_0x000107c3191c(puVar4,0xc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10b614164:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b614170;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((((ulong)puVar5 & 1) != 0) &&
         ((((*(int *)((long)puVar4 + (long)_DAT_11278f560) ==
             *(int *)((long)param_3 + (long)_DAT_11278f560) &&
            (*(int *)((long)puVar4 + (long)_DAT_11278f564) ==
             *(int *)((long)param_3 + (long)_DAT_11278f564))) &&
           (*(long *)((long)puVar4 + (long)_DAT_11278f568) ==
            *(long *)((long)param_3 + (long)_DAT_11278f568))) &&
          ((*(long *)((long)puVar4 + (long)_DAT_11278f56c) ==
            *(long *)((long)param_3 + (long)_DAT_11278f56c) &&
           (*(long *)((long)puVar4 + (long)_DAT_11278f570) ==
            *(long *)((long)param_3 + (long)_DAT_11278f570))))))) &&
        (*(long *)((long)puVar4 + (long)_DAT_11278f574) ==
         *(long *)((long)param_3 + (long)_DAT_11278f574))) &&
       (*(long *)((long)puVar4 + (long)_DAT_11278f578) ==
        *(long *)((long)param_3 + (long)_DAT_11278f578))) {
      dVar9 = *(double *)((long)puVar4 + (long)_DAT_11278f558);
      dVar10 = *(double *)((long)param_3 + (long)_DAT_11278f558);
      dVar11 = ABS(dVar9 - dVar10);
      dVar9 = ABS(dVar9 + dVar10) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar9))) {
        bVar1 = dVar11 < dVar9;
      }
      if ((((bVar1) &&
           ((lVar7 = *(long *)((long)puVar4 + (long)_DAT_11278f54c),
            lVar7 == *(long *)((long)param_3 + (long)_DAT_11278f54c) ||
            (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
          ((lVar7 = *(long *)((long)puVar4 + (long)_DAT_11278f550),
           lVar7 == *(long *)((long)param_3 + (long)_DAT_11278f550) ||
           (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
         ((lVar7 = *(long *)((long)puVar4 + (long)_DAT_11278f554),
          lVar7 == *(long *)((long)param_3 + (long)_DAT_11278f554) ||
          (func_0x00010c071ae0(), (int)lVar7 != 0)))) {
        puVar8 = *(undefined8 **)((long)puVar4 + (long)_DAT_11278f55c);
        if (puVar8 != *(undefined8 **)((long)param_3 + (long)_DAT_11278f55c)) {
          func_0x00010c071ae0();
          goto LAB_10b614170;
        }
        goto LAB_10b614164;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10b614170:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10b613fb0; end: 10b61418b; -[SCStoriesSnapReadReceiptPremiumRecord isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b613fb0(ulong param_1,undefined8 param_2,ulong param_3)

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
LAB_10b614164:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b614170;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((((uVar3 & 1) != 0) &&
         ((((*(int *)(param_1 + (long)_DAT_11278f560) == *(int *)(param_3 + (long)_DAT_11278f560) &&
            (*(int *)(param_1 + (long)_DAT_11278f564) == *(int *)(param_3 + (long)_DAT_11278f564)))
           && (*(long *)(param_1 + (long)_DAT_11278f568) ==
               *(long *)(param_3 + (long)_DAT_11278f568))) &&
          ((*(long *)(param_1 + (long)_DAT_11278f56c) == *(long *)(param_3 + (long)_DAT_11278f56c)
           && (*(long *)(param_1 + (long)_DAT_11278f570) ==
               *(long *)(param_3 + (long)_DAT_11278f570))))))) &&
        (*(long *)(param_1 + (long)_DAT_11278f574) == *(long *)(param_3 + (long)_DAT_11278f574))) &&
       (*(long *)(param_1 + (long)_DAT_11278f578) == *(long *)(param_3 + (long)_DAT_11278f578))) {
      dVar5 = *(double *)(param_1 + (long)_DAT_11278f558);
      dVar6 = *(double *)(param_3 + (long)_DAT_11278f558);
      dVar7 = ABS(dVar5 - dVar6);
      dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
        bVar1 = dVar7 < dVar5;
      }
      if ((((bVar1) &&
           ((lVar4 = *(long *)(param_1 + (long)_DAT_11278f54c),
            lVar4 == *(long *)(param_3 + (long)_DAT_11278f54c) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + (long)_DAT_11278f550),
           lVar4 == *(long *)(param_3 + (long)_DAT_11278f550) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((lVar4 = *(long *)(param_1 + (long)_DAT_11278f554),
          lVar4 == *(long *)(param_3 + (long)_DAT_11278f554) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + (long)_DAT_11278f55c);
        if (lVar4 != *(long *)(param_3 + (long)_DAT_11278f55c)) {
          func_0x00010c071ae0();
          goto LAB_10b614170;
        }
        goto LAB_10b614164;
      }
    }
    lVar4 = 0;
  }
LAB_10b614170:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b61418c; end: 10b61419b; -[SCStoriesSnapReadReceiptPremiumRecord storyId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61418c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f54c);
}



/* Entry: 10b61419c; end: 10b6141ab; -[SCStoriesSnapReadReceiptPremiumRecord publisherId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61419c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f550);
}



/* Entry: 10b6141ac; end: 10b6141bb; -[SCStoriesSnapReadReceiptPremiumRecord viewerUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b6141ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f554);
}



/* Entry: 10b6141bc; end: 10b6141cb; -[SCStoriesSnapReadReceiptPremiumRecord viewTimeMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b6141bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f558);
}



/* Entry: 10b6141cc; end: 10b6141db; -[SCStoriesSnapReadReceiptPremiumRecord subItemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b6141cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f55c);
}



/* Entry: 10b6141dc; end: 10b6141eb; -[SCStoriesSnapReadReceiptPremiumRecord subItemProgressMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10b6141dc(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11278f560);
}



/* Entry: 10b6141ec; end: 10b6141fb; -[SCStoriesSnapReadReceiptPremiumRecord approximateProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10b6141ec(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11278f564);
}



/* Entry: 10b6141fc; end: 10b61420b; -[SCStoriesSnapReadReceiptPremiumRecord contentType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b6141fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f568);
}



/* Entry: 10b61420c; end: 10b61421b; -[SCStoriesSnapReadReceiptPremiumRecord syncState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61420c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f56c);
}



/* Entry: 10b61421c; end: 10b61422b; -[SCStoriesSnapReadReceiptPremiumRecord version] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61421c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f570);
}



/* Entry: 10b61422c; end: 10b61423b; -[SCStoriesSnapReadReceiptPremiumRecord segmentId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61422c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f574);
}



/* Entry: 10b61423c; end: 10b61424b; -[SCStoriesSnapReadReceiptPremiumRecord shareCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61423c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f578);
}



/* Entry: 10b61424c; end: 10b6142ab; -[SCStoriesSnapReadReceiptPremiumRecord .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b61424c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278f55c,0);
  _objc_storeStrong(param_1 + _DAT_11278f554,0);
  _objc_storeStrong(param_1 + _DAT_11278f550,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278f54c,0);
  return;
}



/* Entry: 10b6142ac; end: 10b6143f3; -[SCStoriesSnapReadReceiptWatchState initWithStoryId:version:contentType:timestampMs:subItemId:subItemProgressMs:approximateProgress:publisherId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b6142ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
             undefined4 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_10);
  puStack_78 = PTR_PTR_112706948;
  uStack_80 = param_2;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278f57c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f57c) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f580) = param_5;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f584) = param_6;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f588) = param_1;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278f58c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f58c) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + (long)_DAT_11278f590) = param_8;
    *(undefined4 *)((long)puVar1 + (long)_DAT_11278f594) = param_9;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278f598);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f598) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6143f4; end: 10b614417; -[SCStoriesSnapReadReceiptWatchState copyWithZone:] */

undefined8 FUN_10b6143f4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b614418; end: 10b6144ff; -[SCStoriesSnapReadReceiptWatchState hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b614418(long param_1,undefined8 param_2,undefined8 *param_3)

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
  double dVar11;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278f57c);
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + _DAT_11278f580);
  lStack_60 = -lVar6;
  if (-1 < lVar6) {
    lStack_60 = lVar6;
  }
  uVar7 = ~*(ulong *)(param_1 + _DAT_11278f588) + *(ulong *)(param_1 + _DAT_11278f588) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  lVar6 = *(long *)(param_1 + _DAT_11278f584);
  lStack_58 = -lVar6;
  if (-1 < lVar6) {
    lStack_58 = lVar6;
  }
  uStack_50 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + _DAT_11278f58c);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  lStack_40 = (long)*(int *)(param_1 + _DAT_11278f590);
  lStack_38 = (long)*(int *)(param_1 + _DAT_11278f594);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278f598);
  uStack_48 = uVar3;
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
LAB_10b61464c:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b614658;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((((*(long *)((long)puVar4 + (long)_DAT_11278f580) ==
           *(long *)((long)param_3 + (long)_DAT_11278f580) &&
          (*(long *)((long)puVar4 + (long)_DAT_11278f584) ==
           *(long *)((long)param_3 + (long)_DAT_11278f584))) &&
         (*(int *)((long)puVar4 + (long)_DAT_11278f590) ==
          *(int *)((long)param_3 + (long)_DAT_11278f590))) &&
        (*(int *)((long)puVar4 + (long)_DAT_11278f594) ==
         *(int *)((long)param_3 + (long)_DAT_11278f594))))) {
      dVar9 = *(double *)((long)puVar4 + (long)_DAT_11278f588);
      dVar10 = *(double *)((long)param_3 + (long)_DAT_11278f588);
      dVar11 = ABS(dVar9 - dVar10);
      dVar9 = ABS(dVar9 + dVar10) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar9))) {
        bVar1 = dVar11 < dVar9;
      }
      if (((bVar1) &&
          ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_11278f57c),
           lVar6 == *(long *)((long)param_3 + (long)_DAT_11278f57c) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
         ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_11278f58c),
          lVar6 == *(long *)((long)param_3 + (long)_DAT_11278f58c) ||
          (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = *(undefined8 **)((long)puVar4 + (long)_DAT_11278f598);
        if (puVar8 != *(undefined8 **)((long)param_3 + (long)_DAT_11278f598)) {
          func_0x00010c071ae0();
          goto LAB_10b614658;
        }
        goto LAB_10b61464c;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10b614658:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10b614500; end: 10b614673; -[SCStoriesSnapReadReceiptWatchState isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b614500(ulong param_1,undefined8 param_2,ulong param_3)

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
LAB_10b61464c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b614658;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((((*(long *)(param_1 + (long)_DAT_11278f580) == *(long *)(param_3 + (long)_DAT_11278f580) &&
          (*(long *)(param_1 + (long)_DAT_11278f584) == *(long *)(param_3 + (long)_DAT_11278f584)))
         && (*(int *)(param_1 + (long)_DAT_11278f590) == *(int *)(param_3 + (long)_DAT_11278f590)))
        && (*(int *)(param_1 + (long)_DAT_11278f594) == *(int *)(param_3 + (long)_DAT_11278f594)))))
    {
      dVar5 = *(double *)(param_1 + (long)_DAT_11278f588);
      dVar6 = *(double *)(param_3 + (long)_DAT_11278f588);
      dVar7 = ABS(dVar5 - dVar6);
      dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
        bVar1 = dVar7 < dVar5;
      }
      if (((bVar1) &&
          ((lVar4 = *(long *)(param_1 + (long)_DAT_11278f57c),
           lVar4 == *(long *)(param_3 + (long)_DAT_11278f57c) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((lVar4 = *(long *)(param_1 + (long)_DAT_11278f58c),
          lVar4 == *(long *)(param_3 + (long)_DAT_11278f58c) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + (long)_DAT_11278f598);
        if (lVar4 != *(long *)(param_3 + (long)_DAT_11278f598)) {
          func_0x00010c071ae0();
          goto LAB_10b614658;
        }
        goto LAB_10b61464c;
      }
    }
    lVar4 = 0;
  }
LAB_10b614658:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b614674; end: 10b614683; -[SCStoriesSnapReadReceiptWatchState storyId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b614674(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f57c);
}



/* Entry: 10b614684; end: 10b614693; -[SCStoriesSnapReadReceiptWatchState version] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b614684(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f580);
}



/* Entry: 10b614694; end: 10b6146a3; -[SCStoriesSnapReadReceiptWatchState contentType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b614694(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f584);
}



/* Entry: 10b6146a4; end: 10b6146b3; -[SCStoriesSnapReadReceiptWatchState timestampMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b6146a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f588);
}



/* Entry: 10b6146b4; end: 10b6146c3; -[SCStoriesSnapReadReceiptWatchState subItemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b6146b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f58c);
}



/* Entry: 10b6146c4; end: 10b6146d3; -[SCStoriesSnapReadReceiptWatchState subItemProgressMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10b6146c4(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11278f590);
}



/* Entry: 10b6146d4; end: 10b6146e3; -[SCStoriesSnapReadReceiptWatchState approximateProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10b6146d4(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11278f594);
}



/* Entry: 10b6146e4; end: 10b6146f3; -[SCStoriesSnapReadReceiptWatchState publisherId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b6146e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f598);
}



/* Entry: 10b6146f4; end: 10b614743; -[SCStoriesSnapReadReceiptWatchState .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b6146f4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278f598,0);
  _objc_storeStrong(param_1 + _DAT_11278f58c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278f57c,0);
  return;
}



/* Entry: 10b614744; end: 10b6148eb; -[SCStoriesSnapReadReceiptRecord initWithSnapId:snapOwnerId:viewerUserId:expirationTimeMs:viewTimeMs:readReceiptState:friendLinkState:storyType:syncState:shareCount:viewedProgress:fullyViewed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10b614744(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined1 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_88 = PTR_PTR_112706950;
  puVar1 = &uStack_90;
  uStack_90 = param_4;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278f59c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f59c) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278f5a0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f5a0) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278f5a4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f5a4) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f5a8) = param_1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f5ac) = param_2;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278f5b0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f5b0) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f5b4) = param_10;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f5b8) = param_11;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f5bc) = param_12;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f5c0) = param_13;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278f5c4) = param_3;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11278f5c8) = param_14;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  return puVar1;
}



/* Entry: 10b6148ec; end: 10b61490f; -[SCStoriesSnapReadReceiptRecord copyWithZone:] */

undefined8 FUN_10b6148ec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b614910; end: 10b614a73; -[SCStoriesSnapReadReceiptRecord hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b614910(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  ulong uStack_48;
  ulong uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278f59c);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11278f5a0);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278f5a4);
  uStack_90 = uVar3;
  func_0x00010bfde980();
  uVar6 = ~*(ulong *)(param_1 + _DAT_11278f5a8) + *(ulong *)(param_1 + _DAT_11278f5a8) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_80 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_80 = uStack_80 ^ uStack_80 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + _DAT_11278f5ac) + *(ulong *)(param_1 + _DAT_11278f5ac) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_78 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_78 = uStack_78 ^ uStack_78 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + _DAT_11278f5b0);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + _DAT_11278f5b4);
  lStack_68 = -lVar7;
  if (-1 < lVar7) {
    lStack_68 = lVar7;
  }
  lVar7 = *(long *)(param_1 + _DAT_11278f5b8);
  lStack_60 = -lVar7;
  if (-1 < lVar7) {
    lStack_60 = lVar7;
  }
  lVar7 = *(long *)(param_1 + _DAT_11278f5bc);
  lStack_58 = -lVar7;
  if (-1 < lVar7) {
    lStack_58 = lVar7;
  }
  uVar6 = ~*(ulong *)(param_1 + _DAT_11278f5c4) + *(ulong *)(param_1 + _DAT_11278f5c4) * 0x40000;
  lVar7 = *(long *)(param_1 + _DAT_11278f5c0);
  lStack_50 = -lVar7;
  if (-1 < lVar7) {
    lStack_50 = lVar7;
  }
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_48 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uStack_40 = (ulong)*(byte *)(param_1 + _DAT_11278f5c8);
  puVar4 = &uStack_98;
  uStack_70 = uVar3;
  func_0x000107c3191c(puVar4,0xc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10b614c70:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b614c7c;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((((*(long *)((long)puVar4 + (long)_DAT_11278f5b4) ==
           *(long *)((long)param_3 + (long)_DAT_11278f5b4) &&
          (*(long *)((long)puVar4 + (long)_DAT_11278f5b8) ==
           *(long *)((long)param_3 + (long)_DAT_11278f5b8))) &&
         (*(long *)((long)puVar4 + (long)_DAT_11278f5bc) ==
          *(long *)((long)param_3 + (long)_DAT_11278f5bc))) &&
        ((*(long *)((long)puVar4 + (long)_DAT_11278f5c0) ==
          *(long *)((long)param_3 + (long)_DAT_11278f5c0) &&
         (*(char *)((long)puVar4 + (long)_DAT_11278f5c8) ==
          *(char *)((long)param_3 + (long)_DAT_11278f5c8))))))) {
      dVar9 = *(double *)((long)puVar4 + (long)_DAT_11278f5a8);
      dVar10 = *(double *)((long)param_3 + (long)_DAT_11278f5a8);
      dVar11 = ABS(dVar9 - dVar10);
      dVar9 = ABS(dVar9 + dVar10) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar9))) {
        bVar1 = dVar11 < dVar9;
      }
      if (bVar1) {
        dVar9 = *(double *)((long)puVar4 + (long)_DAT_11278f5ac);
        dVar10 = *(double *)((long)param_3 + (long)_DAT_11278f5ac);
        dVar11 = ABS(dVar9 - dVar10);
        dVar9 = ABS(dVar9 + dVar10) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar9))) {
          bVar1 = dVar11 < dVar9;
        }
        if (bVar1) {
          dVar9 = *(double *)((long)puVar4 + (long)_DAT_11278f5c4);
          dVar10 = *(double *)((long)param_3 + (long)_DAT_11278f5c4);
          dVar11 = ABS(dVar9 - dVar10);
          dVar9 = ABS(dVar9 + dVar10) * 2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar9))) {
            bVar1 = dVar11 < dVar9;
          }
          if ((((bVar1) &&
               ((lVar7 = *(long *)((long)puVar4 + (long)_DAT_11278f59c),
                lVar7 == *(long *)((long)param_3 + (long)_DAT_11278f59c) ||
                (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
              ((lVar7 = *(long *)((long)puVar4 + (long)_DAT_11278f5a0),
               lVar7 == *(long *)((long)param_3 + (long)_DAT_11278f5a0) ||
               (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
             ((lVar7 = *(long *)((long)puVar4 + (long)_DAT_11278f5a4),
              lVar7 == *(long *)((long)param_3 + (long)_DAT_11278f5a4) ||
              (func_0x00010c071ae0(), (int)lVar7 != 0)))) {
            puVar8 = *(undefined8 **)((long)puVar4 + (long)_DAT_11278f5b0);
            if (puVar8 != *(undefined8 **)((long)param_3 + (long)_DAT_11278f5b0)) {
              func_0x00010c071ae0();
              goto LAB_10b614c7c;
            }
            goto LAB_10b614c70;
          }
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10b614c7c:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10b614a74; end: 10b614c97; -[SCStoriesSnapReadReceiptRecord isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b614a74(ulong param_1,undefined8 param_2,ulong param_3)

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
LAB_10b614c70:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b614c7c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((((*(long *)(param_1 + (long)_DAT_11278f5b4) == *(long *)(param_3 + (long)_DAT_11278f5b4) &&
          (*(long *)(param_1 + (long)_DAT_11278f5b8) == *(long *)(param_3 + (long)_DAT_11278f5b8)))
         && (*(long *)(param_1 + (long)_DAT_11278f5bc) == *(long *)(param_3 + (long)_DAT_11278f5bc))
         ) && ((*(long *)(param_1 + (long)_DAT_11278f5c0) ==
                *(long *)(param_3 + (long)_DAT_11278f5c0) &&
               (*(char *)(param_1 + (long)_DAT_11278f5c8) ==
                *(char *)(param_3 + (long)_DAT_11278f5c8))))))) {
      dVar5 = *(double *)(param_1 + (long)_DAT_11278f5a8);
      dVar6 = *(double *)(param_3 + (long)_DAT_11278f5a8);
      dVar7 = ABS(dVar5 - dVar6);
      dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
        bVar1 = dVar7 < dVar5;
      }
      if (bVar1) {
        dVar5 = *(double *)(param_1 + (long)_DAT_11278f5ac);
        dVar6 = *(double *)(param_3 + (long)_DAT_11278f5ac);
        dVar7 = ABS(dVar5 - dVar6);
        dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
          bVar1 = dVar7 < dVar5;
        }
        if (bVar1) {
          dVar5 = *(double *)(param_1 + (long)_DAT_11278f5c4);
          dVar6 = *(double *)(param_3 + (long)_DAT_11278f5c4);
          dVar7 = ABS(dVar5 - dVar6);
          dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
            bVar1 = dVar7 < dVar5;
          }
          if ((((bVar1) &&
               ((lVar4 = *(long *)(param_1 + (long)_DAT_11278f59c),
                lVar4 == *(long *)(param_3 + (long)_DAT_11278f59c) ||
                (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
              ((lVar4 = *(long *)(param_1 + (long)_DAT_11278f5a0),
               lVar4 == *(long *)(param_3 + (long)_DAT_11278f5a0) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
             ((lVar4 = *(long *)(param_1 + (long)_DAT_11278f5a4),
              lVar4 == *(long *)(param_3 + (long)_DAT_11278f5a4) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
            lVar4 = *(long *)(param_1 + (long)_DAT_11278f5b0);
            if (lVar4 != *(long *)(param_3 + (long)_DAT_11278f5b0)) {
              func_0x00010c071ae0();
              goto LAB_10b614c7c;
            }
            goto LAB_10b614c70;
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_10b614c7c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b614c98; end: 10b614ca7; -[SCStoriesSnapReadReceiptRecord snapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b614c98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f59c);
}



/* Entry: 10b614ca8; end: 10b614cb7; -[SCStoriesSnapReadReceiptRecord snapOwnerId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b614ca8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f5a0);
}



/* Entry: 10b614cb8; end: 10b614cc7; -[SCStoriesSnapReadReceiptRecord viewerUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b614cb8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278f5a4);
}


