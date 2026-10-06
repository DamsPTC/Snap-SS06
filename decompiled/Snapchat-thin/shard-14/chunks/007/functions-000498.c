/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b61d92c; end: 10b61d93b; -[SCStoriesPendingCustomStoryMetadata pendingMembershipExpireTs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61d92c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fcd4);
}



/* Entry: 10b61d93c; end: 10b61d98b; -[SCStoriesPendingCustomStoryMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b61d93c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278fcd0,0);
  _objc_storeStrong(param_1 + _DAT_11278fccc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278fcc4,0);
  return;
}



/* Entry: 10b61d98c; end: 10b61da5b; -[SCStoriesPublicStoryLatestPostTimestamp initWithProfileId:recentPostTimeStamp:storySnap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b61d98c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_112706ab8;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fcd8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fcd8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fcdc) = param_1;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fce0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fce0) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b61da5c; end: 10b61da7f; -[SCStoriesPublicStoryLatestPostTimestamp copyWithZone:] */

undefined8 FUN_10b61da5c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b61da80; end: 10b61db27; -[SCStoriesPublicStoryLatestPostTimestamp hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b61da80(long param_1,undefined8 param_2,undefined1 *param_3)

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
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278fcd8);
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + _DAT_11278fcdc) + *(ulong *)(param_1 + _DAT_11278fcdc) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + _DAT_11278fce0);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar3;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10b61dbf4:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b61dc00;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((ulong)puVar5 & 1) != 0) {
      dVar10 = ABS(*(double *)((long)puVar4 + (long)_DAT_11278fcdc) -
                   *(double *)(param_3 + _DAT_11278fcdc));
      dVar9 = ABS(*(double *)((long)puVar4 + (long)_DAT_11278fcdc) +
                  *(double *)(param_3 + _DAT_11278fcdc)) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if ((bVar1) &&
         ((lVar6 = *(long *)((long)puVar4 + (long)_DAT_11278fcd8),
          lVar6 == *(long *)(param_3 + _DAT_11278fcd8) || (func_0x00010c071ae0(), (int)lVar6 != 0)))
         ) {
        puVar8 = *(undefined1 **)((long)puVar4 + (long)_DAT_11278fce0);
        if (puVar8 != *(undefined1 **)(param_3 + _DAT_11278fce0)) {
          func_0x00010c071ae0();
          goto LAB_10b61dc00;
        }
        goto LAB_10b61dbf4;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_10b61dc00:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 10b61db28; end: 10b61dc1b; -[SCStoriesPublicStoryLatestPostTimestamp isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b61db28(ulong param_1,undefined8 param_2,ulong param_3)

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
LAB_10b61dbf4:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b61dc00;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar5 = *(double *)(param_1 + (long)_DAT_11278fcdc);
      dVar6 = *(double *)(param_3 + (long)_DAT_11278fcdc);
      dVar7 = ABS(dVar5 - dVar6);
      dVar5 = ABS(dVar5 + dVar6) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar5))) {
        bVar1 = dVar7 < dVar5;
      }
      if ((bVar1) &&
         ((lVar4 = *(long *)(param_1 + (long)_DAT_11278fcd8),
          lVar4 == *(long *)(param_3 + (long)_DAT_11278fcd8) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + (long)_DAT_11278fce0);
        if (lVar4 != *(long *)(param_3 + (long)_DAT_11278fce0)) {
          func_0x00010c071ae0();
          goto LAB_10b61dc00;
        }
        goto LAB_10b61dbf4;
      }
    }
    lVar4 = 0;
  }
LAB_10b61dc00:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b61dc1c; end: 10b61dc2b; -[SCStoriesPublicStoryLatestPostTimestamp profileId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61dc1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fcd8);
}



/* Entry: 10b61dc2c; end: 10b61dc3b; -[SCStoriesPublicStoryLatestPostTimestamp recentPostTimeStamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61dc2c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fcdc);
}



/* Entry: 10b61dc3c; end: 10b61dc4b; -[SCStoriesPublicStoryLatestPostTimestamp storySnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61dc3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fce0);
}



/* Entry: 10b61dc4c; end: 10b61dc8b; -[SCStoriesPublicStoryLatestPostTimestamp .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b61dc4c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278fce0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278fcd8,0);
  return;
}



/* Entry: 10b61dc8c; end: 10b61dd7f; -[SCStoriesPublicUserStoryPlaybackSequence initWithUserId:storySnaps:sequenceInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b61dc8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

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
  puStack_48 = PTR_PTR_112706ac0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fce4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fce4) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fce8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fce8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fcec);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fcec) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b61dd80; end: 10b61dda3; -[SCStoriesPublicUserStoryPlaybackSequence copyWithZone:] */

undefined8 FUN_10b61dd80(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b61dda4; end: 10b61de37; -[SCStoriesPublicUserStoryPlaybackSequence hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b61dda4(long param_1,undefined8 param_2,undefined1 *param_3)

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
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278fce4);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278fce8);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278fcec);
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
LAB_10b61dee8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b61def4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_11278fce4);
      if ((lVar5 == *(long *)(param_3 + _DAT_11278fce4)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
         ) {
        lVar5 = *(long *)((long)puVar3 + (long)_DAT_11278fce8);
        if ((lVar5 == *(long *)(param_3 + _DAT_11278fce8)) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + (long)_DAT_11278fcec);
          if (puVar6 != *(undefined1 **)(param_3 + _DAT_11278fcec)) {
            func_0x00010c071ae0();
            goto LAB_10b61def4;
          }
          goto LAB_10b61dee8;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b61def4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b61de38; end: 10b61df0f; -[SCStoriesPublicUserStoryPlaybackSequence isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b61de38(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b61dee8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b61def4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + (long)_DAT_11278fce4);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_11278fce4)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_11278fce8);
        if ((lVar3 == *(long *)(param_3 + (long)_DAT_11278fce8)) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + (long)_DAT_11278fcec);
          if (lVar3 != *(long *)(param_3 + (long)_DAT_11278fcec)) {
            func_0x00010c071ae0();
            goto LAB_10b61def4;
          }
          goto LAB_10b61dee8;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b61def4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b61df10; end: 10b61df1f; -[SCStoriesPublicUserStoryPlaybackSequence userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61df10(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fce4);
}



/* Entry: 10b61df20; end: 10b61df2f; -[SCStoriesPublicUserStoryPlaybackSequence storySnaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61df20(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fce8);
}



/* Entry: 10b61df30; end: 10b61df3f; -[SCStoriesPublicUserStoryPlaybackSequence sequenceInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61df30(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fcec);
}



/* Entry: 10b61df40; end: 10b61df8f; -[SCStoriesPublicUserStoryPlaybackSequence .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b61df40(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278fcec,0);
  _objc_storeStrong(param_1 + _DAT_11278fce8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278fce4,0);
  return;
}



/* Entry: 10b61df90; end: 10b61e027; -[SCStoriesRankedStoryIds initWithType:rankedStoryIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b61df90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112706ac8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fcf0) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fcf4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fcf4) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b61e028; end: 10b61e04b; -[SCStoriesRankedStoryIds copyWithZone:] */

undefined8 FUN_10b61e028(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b61e04c; end: 10b61e0c3; -[SCStoriesRankedStoryIds hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10b61e04c(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + _DAT_11278fcf0);
  lStack_28 = -lVar4;
  if (-1 < lVar4) {
    lStack_28 = lVar4;
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278fcf4);
  func_0x00010bfde980();
  plVar2 = &lStack_28;
  uStack_20 = uVar1;
  func_0x000107c3191c(plVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar2 != param_3) {
    plVar5 = (long *)0x0;
    if ((plVar2 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10b61e158;
    plVar5 = plVar2;
    _objc_opt_class(plVar2);
    plVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar5);
    if ((((ulong)plVar3 & 1) == 0) ||
       (*(long *)((long)plVar2 + (long)_DAT_11278fcf0) !=
        *(long *)((long)param_3 + (long)_DAT_11278fcf0))) {
      plVar5 = (long *)0x0;
      goto LAB_10b61e158;
    }
    plVar5 = *(long **)((long)plVar2 + (long)_DAT_11278fcf4);
    if (plVar5 != *(long **)((long)param_3 + (long)_DAT_11278fcf4)) {
      func_0x00010c071ae0();
      goto LAB_10b61e158;
    }
  }
  plVar5 = (long *)0x1;
LAB_10b61e158:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 10b61e0c4; end: 10b61e173; -[SCStoriesRankedStoryIds isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b61e0c4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b61e158;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (*(long *)(param_1 + (long)_DAT_11278fcf0) != *(long *)(param_3 + (long)_DAT_11278fcf0))) {
      lVar3 = 0;
      goto LAB_10b61e158;
    }
    lVar3 = *(long *)(param_1 + (long)_DAT_11278fcf4);
    if (lVar3 != *(long *)(param_3 + (long)_DAT_11278fcf4)) {
      func_0x00010c071ae0();
      goto LAB_10b61e158;
    }
  }
  lVar3 = 1;
LAB_10b61e158:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b61e174; end: 10b61e183; -[SCStoriesRankedStoryIds type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61e174(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fcf0);
}



/* Entry: 10b61e184; end: 10b61e193; -[SCStoriesRankedStoryIds rankedStoryIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61e184(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fcf4);
}



/* Entry: 10b61e194; end: 10b61e1a7; -[SCStoriesRankedStoryIds .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b61e194(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278fcf4,0);
  return;
}



/* Entry: 10b61e1a8; end: 10b61e307; -[SCStoriesSnapViewers initWithSnapId:friendViewerList:friendViewCount:friendScreenshotCount:otherViewerList:otherViewCount:otherScreenshotCount:boostCount:shareCount:rewatchCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10b61e1a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_112706ad0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fcf8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fcf8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fcfc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fcfc) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fd00) = param_5;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fd04) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278fd08);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fd08) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fd0c) = param_8;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fd10) = param_9;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fd14) = param_10;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fd18) = param_11;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278fd1c) = param_12;
  }
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10b61e308; end: 10b61e32b; -[SCStoriesSnapViewers copyWithZone:] */

undefined8 FUN_10b61e308(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b61e32c; end: 10b61e42f; -[SCStoriesSnapViewers hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b61e32c(long param_1,undefined8 param_2,undefined8 *param_3)

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
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278fcf8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278fcfc);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + _DAT_11278fd00);
  lStack_68 = -lVar5;
  if (-1 < lVar5) {
    lStack_68 = lVar5;
  }
  lVar5 = *(long *)(param_1 + _DAT_11278fd04);
  lStack_60 = -lVar5;
  if (-1 < lVar5) {
    lStack_60 = lVar5;
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278fd08);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + _DAT_11278fd0c);
  lStack_50 = -lVar5;
  if (-1 < lVar5) {
    lStack_50 = lVar5;
  }
  lVar5 = *(long *)(param_1 + _DAT_11278fd10);
  lStack_48 = -lVar5;
  if (-1 < lVar5) {
    lStack_48 = lVar5;
  }
  lVar5 = *(long *)(param_1 + _DAT_11278fd14);
  lStack_40 = -lVar5;
  if (-1 < lVar5) {
    lStack_40 = lVar5;
  }
  lVar5 = *(long *)(param_1 + _DAT_11278fd18);
  lStack_38 = -lVar5;
  if (-1 < lVar5) {
    lStack_38 = lVar5;
  }
  lVar5 = *(long *)(param_1 + _DAT_11278fd1c);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  puVar3 = &uStack_78;
  uStack_58 = uVar1;
  func_0x000107c3191c(puVar3,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b61e588:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b61e594;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((((ulong)puVar4 & 1) != 0) &&
         ((((*(long *)((long)puVar3 + (long)_DAT_11278fd00) ==
             *(long *)((long)param_3 + (long)_DAT_11278fd00) &&
            (*(long *)((long)puVar3 + (long)_DAT_11278fd04) ==
             *(long *)((long)param_3 + (long)_DAT_11278fd04))) &&
           (*(long *)((long)puVar3 + (long)_DAT_11278fd0c) ==
            *(long *)((long)param_3 + (long)_DAT_11278fd0c))) &&
          ((*(long *)((long)puVar3 + (long)_DAT_11278fd10) ==
            *(long *)((long)param_3 + (long)_DAT_11278fd10) &&
           (*(long *)((long)puVar3 + (long)_DAT_11278fd14) ==
            *(long *)((long)param_3 + (long)_DAT_11278fd14))))))) &&
        (*(long *)((long)puVar3 + (long)_DAT_11278fd18) ==
         *(long *)((long)param_3 + (long)_DAT_11278fd18))) &&
       (*(long *)((long)puVar3 + (long)_DAT_11278fd1c) ==
        *(long *)((long)param_3 + (long)_DAT_11278fd1c))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_11278fcf8);
      if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11278fcf8)) ||
         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + (long)_DAT_11278fcfc);
        if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_11278fcfc)) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined8 **)((long)puVar3 + (long)_DAT_11278fd08);
          if (puVar6 != *(undefined8 **)((long)param_3 + (long)_DAT_11278fd08)) {
            func_0x00010c071ae0();
            goto LAB_10b61e594;
          }
          goto LAB_10b61e588;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b61e594:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b61e430; end: 10b61e5af; -[SCStoriesSnapViewers isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b61e430(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b61e588:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b61e594;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + (long)_DAT_11278fd00) == *(long *)(param_3 + (long)_DAT_11278fd00)
            && (*(long *)(param_1 + (long)_DAT_11278fd04) ==
                *(long *)(param_3 + (long)_DAT_11278fd04))) &&
           (*(long *)(param_1 + (long)_DAT_11278fd0c) == *(long *)(param_3 + (long)_DAT_11278fd0c)))
          && ((*(long *)(param_1 + (long)_DAT_11278fd10) ==
               *(long *)(param_3 + (long)_DAT_11278fd10) &&
              (*(long *)(param_1 + (long)_DAT_11278fd14) ==
               *(long *)(param_3 + (long)_DAT_11278fd14))))))) &&
        (*(long *)(param_1 + (long)_DAT_11278fd18) == *(long *)(param_3 + (long)_DAT_11278fd18))) &&
       (*(long *)(param_1 + (long)_DAT_11278fd1c) == *(long *)(param_3 + (long)_DAT_11278fd1c))) {
      lVar3 = *(long *)(param_1 + (long)_DAT_11278fcf8);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_11278fcf8)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_11278fcfc);
        if ((lVar3 == *(long *)(param_3 + (long)_DAT_11278fcfc)) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + (long)_DAT_11278fd08);
          if (lVar3 != *(long *)(param_3 + (long)_DAT_11278fd08)) {
            func_0x00010c071ae0();
            goto LAB_10b61e594;
          }
          goto LAB_10b61e588;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b61e594:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b61e5b0; end: 10b61e5bf; -[SCStoriesSnapViewers snapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61e5b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fcf8);
}



/* Entry: 10b61e5c0; end: 10b61e5cf; -[SCStoriesSnapViewers friendViewerList] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61e5c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fcfc);
}



/* Entry: 10b61e5d0; end: 10b61e5df; -[SCStoriesSnapViewers friendViewCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61e5d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fd00);
}



/* Entry: 10b61e5e0; end: 10b61e5ef; -[SCStoriesSnapViewers friendScreenshotCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61e5e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fd04);
}



/* Entry: 10b61e5f0; end: 10b61e5ff; -[SCStoriesSnapViewers otherViewerList] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61e5f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fd08);
}



/* Entry: 10b61e600; end: 10b61e60f; -[SCStoriesSnapViewers otherViewCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61e600(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fd0c);
}



/* Entry: 10b61e610; end: 10b61e61f; -[SCStoriesSnapViewers otherScreenshotCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61e610(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fd10);
}



/* Entry: 10b61e620; end: 10b61e62f; -[SCStoriesSnapViewers boostCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61e620(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fd14);
}



/* Entry: 10b61e630; end: 10b61e63f; -[SCStoriesSnapViewers shareCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61e630(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fd18);
}



/* Entry: 10b61e640; end: 10b61e64f; -[SCStoriesSnapViewers rewatchCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b61e640(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fd1c);
}



/* Entry: 10b61e650; end: 10b61e69f; -[SCStoriesSnapViewers .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b61e650(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278fd08,0);
  _objc_storeStrong(param_1 + _DAT_11278fcfc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278fcf8,0);
  return;
}



/* Entry: 10b61e6a0; end: 10b61e6c3; -[SCStoriesSummaryInfo copyWithZone:] */

undefined8 FUN_10b61e6a0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b61e6c4; end: 10b61e89f; -[SCStoriesSummaryInfo hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b61e6c4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + _DAT_11278fd20);
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + _DAT_11278fd24);
  lStack_c0 = -lVar7;
  if (-1 < lVar7) {
    lStack_c0 = lVar7;
  }
  uVar4 = *(undefined8 *)(param_1 + _DAT_11278fd28);
  uStack_c8 = uVar3;
  func_0x00010bfde980();
  uVar8 = ~*(ulong *)(param_1 + _DAT_11278fd2c) + *(ulong *)(param_1 + _DAT_11278fd2c) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_b0 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_b0 = uStack_b0 ^ uStack_b0 >> 0x16;
  lVar7 = *(long *)(param_1 + _DAT_11278fd30);
  lStack_a8 = -lVar7;
  if (-1 < lVar7) {
    lStack_a8 = lVar7;
  }
  uStack_a0 = (ulong)*(byte *)(param_1 + _DAT_11278fd34);
  uVar8 = ~*(ulong *)(param_1 + _DAT_11278fd38) + *(ulong *)(param_1 + _DAT_11278fd38) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + _DAT_11278fd3c) + *(ulong *)(param_1 + _DAT_11278fd3c) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_98 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_98 = uStack_98 ^ uStack_98 >> 0x16;
  uVar8 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_90 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_90 = uStack_90 ^ uStack_90 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + _DAT_11278fd40) + *(ulong *)(param_1 + _DAT_11278fd40) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_88 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_88 = uStack_88 ^ uStack_88 >> 0x16;
  lVar7 = *(long *)(param_1 + _DAT_11278fd44);
  lStack_80 = -lVar7;
  if (-1 < lVar7) {
    lStack_80 = lVar7;
  }
  lVar7 = *(long *)(param_1 + _DAT_11278fd48);
  lStack_78 = -lVar7;
  if (-1 < lVar7) {
    lStack_78 = lVar7;
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_11278fd4c);
  uStack_b8 = uVar4;
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + _DAT_11278fd50);
  lStack_68 = -lVar7;
  if (-1 < lVar7) {
    lStack_68 = lVar7;
  }
  lVar7 = *(long *)(param_1 + _DAT_11278fd54);
  lStack_60 = -lVar7;
  if (-1 < lVar7) {
    lStack_60 = lVar7;
  }
  uStack_58 = *(undefined8 *)(param_1 + _DAT_11278fd58);
  uVar8 = (ulong)*(uint *)(param_1 + _DAT_11278fd5c) * 0x200000 - 1;
  uVar8 = (uVar8 ^ uVar8 >> 0x18) * 0x109;
  uVar8 = (uVar8 ^ uVar8 >> 0xe) * 0x15;
  lStack_50 = (uVar8 ^ uVar8 >> 0x1c) * 0x80000001;
  uStack_48 = (ulong)*(byte *)(param_1 + _DAT_11278fd60);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11278fd64);
  uStack_70 = uVar3;
  func_0x00010bfde980();
  puVar5 = &uStack_c8;
  uStack_40 = uVar4;
  func_0x000107c3191c(puVar5,0x12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == param_3) {
LAB_10b61eb80:
    puVar9 = (undefined8 *)0x1;
  }
  else {
    puVar9 = (undefined8 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b61eb8c;
    puVar9 = puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((((ulong)puVar6 & 1) != 0) &&
         ((((*(long *)((long)puVar5 + (long)_DAT_11278fd24) ==
             *(long *)((long)param_3 + (long)_DAT_11278fd24) &&
            (*(long *)((long)puVar5 + (long)_DAT_11278fd30) ==
             *(long *)((long)param_3 + (long)_DAT_11278fd30))) &&
           (*(char *)((long)puVar5 + (long)_DAT_11278fd34) ==
            *(char *)((long)param_3 + (long)_DAT_11278fd34))) &&
          ((*(long *)((long)puVar5 + (long)_DAT_11278fd44) ==
            *(long *)((long)param_3 + (long)_DAT_11278fd44) &&
           (*(long *)((long)puVar5 + (long)_DAT_11278fd48) ==
            *(long *)((long)param_3 + (long)_DAT_11278fd48))))))) &&
        (*(long *)((long)puVar5 + (long)_DAT_11278fd50) ==
         *(long *)((long)param_3 + (long)_DAT_11278fd50))) &&
       (((*(long *)((long)puVar5 + (long)_DAT_11278fd54) ==
          *(long *)((long)param_3 + (long)_DAT_11278fd54) &&
         (*(long *)((long)puVar5 + (long)_DAT_11278fd58) ==
          *(long *)((long)param_3 + (long)_DAT_11278fd58))) &&
        (*(char *)((long)puVar5 + (long)_DAT_11278fd60) ==
         *(char *)((long)param_3 + (long)_DAT_11278fd60))))) {
      dVar11 = *(double *)((long)puVar5 + (long)_DAT_11278fd2c);
      dVar13 = *(double *)((long)param_3 + (long)_DAT_11278fd2c);
      dVar15 = ABS(dVar11 - dVar13);
      dVar11 = ABS(dVar11 + dVar13) * 2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar15) && (bVar2 = false, !NAN(dVar15) && !NAN(dVar11))) {
        bVar2 = dVar15 < dVar11;
      }
      if (bVar2) {
        dVar13 = *(double *)((long)puVar5 + (long)_DAT_11278fd38);
        dVar15 = *(double *)((long)param_3 + (long)_DAT_11278fd38);
        dVar11 = ABS(dVar13 - dVar15);
        if ((dVar11 < 2.2250738585072014e-308) ||
           (dVar11 < ABS(dVar13 + dVar15) * 2.220446049250313e-16)) {
          dVar13 = *(double *)((long)puVar5 + (long)_DAT_11278fd3c);
          dVar15 = *(double *)((long)param_3 + (long)_DAT_11278fd3c);
          dVar11 = ABS(dVar13 - dVar15);
          if ((dVar11 < 2.2250738585072014e-308) ||
             (dVar11 < ABS(dVar13 + dVar15) * 2.220446049250313e-16)) {
            dVar13 = *(double *)((long)puVar5 + (long)_DAT_11278fd40);
            dVar15 = *(double *)((long)param_3 + (long)_DAT_11278fd40);
            dVar11 = ABS(dVar13 - dVar15);
            if ((dVar11 < 2.2250738585072014e-308) ||
               (dVar11 < ABS(dVar13 + dVar15) * 2.220446049250313e-16)) {
              fVar12 = *(float *)((long)puVar5 + (long)_DAT_11278fd5c);
              fVar14 = *(float *)((long)param_3 + (long)_DAT_11278fd5c);
              fVar10 = ABS(fVar12 - fVar14);
              if (((fVar10 < 1.1754944e-38) || (fVar10 < ABS(fVar12 + fVar14) * 1.1920929e-07)) &&
                 ((((lVar7 = *(long *)((long)puVar5 + (long)_DAT_11278fd20),
                    lVar7 == *(long *)((long)param_3 + (long)_DAT_11278fd20) ||
                    (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                   ((lVar7 = *(long *)((long)puVar5 + (long)_DAT_11278fd28),
                    lVar7 == *(long *)((long)param_3 + (long)_DAT_11278fd28) ||
                    (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                  ((lVar7 = *(long *)((long)puVar5 + (long)_DAT_11278fd4c),
                   lVar7 == *(long *)((long)param_3 + (long)_DAT_11278fd4c) ||
                   (func_0x00010c071ae0(), (int)lVar7 != 0)))))) {
                puVar9 = *(undefined8 **)((long)puVar5 + (long)_DAT_11278fd64);
                if (puVar9 != *(undefined8 **)((long)param_3 + (long)_DAT_11278fd64)) {
                  func_0x00010c071ae0();
                  goto LAB_10b61eb8c;
                }
                goto LAB_10b61eb80;
              }
            }
          }
        }
      }
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_10b61eb8c:
  _objc_release(param_3);
  return puVar9;
}



/* Entry: 10b61e8a0; end: 10b61eba7; -[SCStoriesSummaryInfo isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b61e8a0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b61eb80:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b61eb8c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((((uVar3 & 1) != 0) &&
         ((((*(long *)(param_1 + (long)_DAT_11278fd24) == *(long *)(param_3 + (long)_DAT_11278fd24)
            && (*(long *)(param_1 + (long)_DAT_11278fd30) ==
                *(long *)(param_3 + (long)_DAT_11278fd30))) &&
           (*(char *)(param_1 + (long)_DAT_11278fd34) == *(char *)(param_3 + (long)_DAT_11278fd34)))
          && ((*(long *)(param_1 + (long)_DAT_11278fd44) ==
               *(long *)(param_3 + (long)_DAT_11278fd44) &&
              (*(long *)(param_1 + (long)_DAT_11278fd48) ==
               *(long *)(param_3 + (long)_DAT_11278fd48))))))) &&
        (*(long *)(param_1 + (long)_DAT_11278fd50) == *(long *)(param_3 + (long)_DAT_11278fd50))) &&
       (((*(long *)(param_1 + (long)_DAT_11278fd54) == *(long *)(param_3 + (long)_DAT_11278fd54) &&
         (*(long *)(param_1 + (long)_DAT_11278fd58) == *(long *)(param_3 + (long)_DAT_11278fd58)))
        && (*(char *)(param_1 + (long)_DAT_11278fd60) == *(char *)(param_3 + (long)_DAT_11278fd60)))
       )) {
      dVar6 = *(double *)(param_1 + (long)_DAT_11278fd2c);
      dVar8 = *(double *)(param_3 + (long)_DAT_11278fd2c);
      dVar10 = ABS(dVar6 - dVar8);
      dVar6 = ABS(dVar6 + dVar8) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar6))) {
        bVar1 = dVar10 < dVar6;
      }
      if (bVar1) {
        dVar8 = *(double *)(param_1 + (long)_DAT_11278fd38);
        dVar10 = *(double *)(param_3 + (long)_DAT_11278fd38);
        dVar6 = ABS(dVar8 - dVar10);
        if ((dVar6 < 2.2250738585072014e-308) ||
           (dVar6 < ABS(dVar8 + dVar10) * 2.220446049250313e-16)) {
          dVar8 = *(double *)(param_1 + (long)_DAT_11278fd3c);
          dVar10 = *(double *)(param_3 + (long)_DAT_11278fd3c);
          dVar6 = ABS(dVar8 - dVar10);
          if ((dVar6 < 2.2250738585072014e-308) ||
             (dVar6 < ABS(dVar8 + dVar10) * 2.220446049250313e-16)) {
            dVar8 = *(double *)(param_1 + (long)_DAT_11278fd40);
            dVar10 = *(double *)(param_3 + (long)_DAT_11278fd40);
            dVar6 = ABS(dVar8 - dVar10);
            if ((dVar6 < 2.2250738585072014e-308) ||
               (dVar6 < ABS(dVar8 + dVar10) * 2.220446049250313e-16)) {
              fVar7 = *(float *)(param_1 + (long)_DAT_11278fd5c);
              fVar9 = *(float *)(param_3 + (long)_DAT_11278fd5c);
              fVar5 = ABS(fVar7 - fVar9);
              if (((fVar5 < 1.1754944e-38) || (fVar5 < ABS(fVar7 + fVar9) * 1.1920929e-07)) &&
                 ((((lVar4 = *(long *)(param_1 + (long)_DAT_11278fd20),
                    lVar4 == *(long *)(param_3 + (long)_DAT_11278fd20) ||
                    (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
                   ((lVar4 = *(long *)(param_1 + (long)_DAT_11278fd28),
                    lVar4 == *(long *)(param_3 + (long)_DAT_11278fd28) ||
                    (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
                  ((lVar4 = *(long *)(param_1 + (long)_DAT_11278fd4c),
                   lVar4 == *(long *)(param_3 + (long)_DAT_11278fd4c) ||
                   (func_0x00010c071ae0(), (int)lVar4 != 0)))))) {
                lVar4 = *(long *)(param_1 + (long)_DAT_11278fd64);
                if (lVar4 != *(long *)(param_3 + (long)_DAT_11278fd64)) {
                  func_0x00010c071ae0();
                  goto LAB_10b61eb8c;
                }
                goto LAB_10b61eb80;
              }
            }
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_10b61eb8c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b61eba8; end: 10b61ed1b; -[SCStoriesCommunityFeatureMetadata initWithStoryDescription:shortDisplayName:boltMediaServingInfo:boltMediaServingInfoProfile:orgId:bitmojiFashion:orgType:] */

undefined1 *
FUN_10b61eba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

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
  puStack_58 = PTR_PTR_112706ae0;
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
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b61ed1c; end: 10b61ed3f; -[SCStoriesCommunityFeatureMetadata copyWithZone:] */

undefined8 FUN_10b61ed1c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b61ed40; end: 10b61edef; -[SCStoriesCommunityFeatureMetadata hash] */

undefined8 * FUN_10b61ed40(long param_1,undefined8 param_2,undefined1 *param_3)

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
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x38);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b61eee0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b61eeec;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x38) == *(long *)(param_3 + 0x38)))
    {
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
                puVar6 = *(undefined1 **)((long)puVar3 + 0x30);
                if (puVar6 != *(undefined1 **)(param_3 + 0x30)) {
                  func_0x00010c071ae0();
                  goto LAB_10b61eeec;
                }
                goto LAB_10b61eee0;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b61eeec:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b61edf0; end: 10b61ef07; -[SCStoriesCommunityFeatureMetadata isEqual:] */

long FUN_10b61edf0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b61eee0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b61eeec;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) {
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
                  goto LAB_10b61eeec;
                }
                goto LAB_10b61eee0;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b61eeec:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b61ef08; end: 10b61ef0f; -[SCStoriesCommunityFeatureMetadata storyDescription] */

undefined8 FUN_10b61ef08(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b61ef10; end: 10b61ef17; -[SCStoriesCommunityFeatureMetadata shortDisplayName] */

undefined8 FUN_10b61ef10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b61ef18; end: 10b61ef1f; -[SCStoriesCommunityFeatureMetadata boltMediaServingInfo] */

undefined8 FUN_10b61ef18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b61ef20; end: 10b61ef27; -[SCStoriesCommunityFeatureMetadata boltMediaServingInfoProfile] */

undefined8 FUN_10b61ef20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b61ef28; end: 10b61ef2f; -[SCStoriesCommunityFeatureMetadata orgId] */

undefined8 FUN_10b61ef28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b61ef30; end: 10b61ef37; -[SCStoriesCommunityFeatureMetadata bitmojiFashion] */

undefined8 FUN_10b61ef30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b61ef38; end: 10b61ef3f; -[SCStoriesCommunityFeatureMetadata orgType] */

undefined8 FUN_10b61ef38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b61ef40; end: 10b61ef9f; -[SCStoriesCommunityFeatureMetadata .cxx_destruct] */

void FUN_10b61ef40(long param_1)

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



/* Entry: 10b61efa0; end: 10b61f0ab; -[SCStoriesBoltMediaServingInfo initWithMediaKey:mediaIv:rawImageContentObject:transcodedThumbnailContentObject:] */

undefined1 *
FUN_10b61efa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112706ae8;
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b61f0ac; end: 10b61f0cf; -[SCStoriesBoltMediaServingInfo copyWithZone:] */

undefined8 FUN_10b61f0ac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b61f0d0; end: 10b61f15b; -[SCStoriesBoltMediaServingInfo hash] */

undefined8 * FUN_10b61f0d0(long param_1,undefined8 param_2,undefined8 *param_3)

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
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b61f20c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b61f218;
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
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_10b61f218;
            }
            goto LAB_10b61f20c;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b61f218:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b61f15c; end: 10b61f233; -[SCStoriesBoltMediaServingInfo isEqual:] */

long FUN_10b61f15c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b61f20c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b61f218;
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
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_10b61f218;
            }
            goto LAB_10b61f20c;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b61f218:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b61f234; end: 10b61f23b; -[SCStoriesBoltMediaServingInfo mediaKey] */

undefined8 FUN_10b61f234(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b61f23c; end: 10b61f243; -[SCStoriesBoltMediaServingInfo mediaIv] */

undefined8 FUN_10b61f23c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b61f244; end: 10b61f24b; -[SCStoriesBoltMediaServingInfo rawImageContentObject] */

undefined8 FUN_10b61f244(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b61f24c; end: 10b61f253; -[SCStoriesBoltMediaServingInfo transcodedThumbnailContentObject] */

undefined8 FUN_10b61f24c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b61f254; end: 10b61f29b; -[SCStoriesBoltMediaServingInfo .cxx_destruct] */

void FUN_10b61f254(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b61f29c; end: 10b61f313; -[SCStoriesBitmojiFashion initWithDropId:] */

undefined1 * FUN_10b61f29c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112706af0;
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



/* Entry: 10b61f314; end: 10b61f337; -[SCStoriesBitmojiFashion copyWithZone:] */

undefined8 FUN_10b61f314(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b61f338; end: 10b61f33f; -[SCStoriesBitmojiFashion hash] */

void FUN_10b61f338(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10b61f340; end: 10b61f3cf; -[SCStoriesBitmojiFashion isEqual:] */

long FUN_10b61f340(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b61f3b4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10b61f3b4;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b61f3b4;
    }
  }
  lVar3 = 1;
LAB_10b61f3b4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b61f3d0; end: 10b61f3d7; -[SCStoriesBitmojiFashion dropId] */

undefined8 FUN_10b61f3d0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b61f3d8; end: 10b61f3e3; -[SCStoriesBitmojiFashion .cxx_destruct] */

void FUN_10b61f3d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b61f3e4; end: 10b61f46b; -[SCStoriesStoryPostedTime initWithStoryId:postedTime:] */

undefined1 *
FUN_10b61f3e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112706af8;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b61f46c; end: 10b61f48f; -[SCStoriesStoryPostedTime copyWithZone:] */

undefined8 FUN_10b61f46c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b61f490; end: 10b61f51b; -[SCStoriesStoryPostedTime hash] */

undefined8 * FUN_10b61f490(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar3 = &uStack_38;
  uStack_38 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b61f5b8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b61f5c4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      dVar8 = ABS((double)puVar3[2] - (double)param_3[2]);
      dVar7 = ABS((double)puVar3[2] + (double)param_3[2]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        puVar6 = (undefined8 *)puVar3[1];
        if (puVar6 != (undefined8 *)param_3[1]) {
          func_0x00010c071ae0();
          goto LAB_10b61f5c4;
        }
        goto LAB_10b61f5b8;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b61f5c4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b61f51c; end: 10b61f5df; -[SCStoriesStoryPostedTime isEqual:] */

long FUN_10b61f51c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b61f5b8:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b61f5c4;
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
        lVar4 = *(long *)(param_1 + 8);
        if (lVar4 != *(long *)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_10b61f5c4;
        }
        goto LAB_10b61f5b8;
      }
    }
    lVar4 = 0;
  }
LAB_10b61f5c4:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b61f5e0; end: 10b61f5e7; -[SCStoriesStoryPostedTime storyId] */

undefined8 FUN_10b61f5e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b61f5e8; end: 10b61f5ef; -[SCStoriesStoryPostedTime postedTime] */

undefined8 FUN_10b61f5e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b61f5f0; end: 10b61f5fb; -[SCStoriesStoryPostedTime .cxx_destruct] */

void FUN_10b61f5f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b61f5fc; end: 10b61f61f; -[SCStoriesSnapPlaybackInfo copyWithZone:] */

undefined8 FUN_10b61f5fc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b61f620; end: 10b61f84f; -[SCStoriesSnapPlaybackInfo hash] */

undefined8 * FUN_10b61f620(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_170;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_170 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_168 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_160 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_158 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_150 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_148 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_140 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_138 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_130 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uStack_128 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uStack_120 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  uStack_118 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  uStack_110 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  uStack_108 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  uStack_100 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  uStack_f8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  uStack_f0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  uStack_e8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  uStack_e0 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0xb0);
  uStack_c0 = *(undefined8 *)(param_1 + 0xb8);
  lStack_d0 = -lVar5;
  if (-1 < lVar5) {
    lStack_d0 = lVar5;
  }
  uStack_c8 = (ulong)*(byte *)(param_1 + 8);
  uStack_d8 = uVar2;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 200);
  uStack_b8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  uStack_b0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  uStack_a8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  uStack_a0 = uVar2;
  func_0x00010bfde980();
  uStack_90 = (ulong)*(byte *)(param_1 + 9);
  uVar2 = *(undefined8 *)(param_1 + 0xe8);
  uStack_98 = uVar1;
  func_0x00010bfde980();
  uStack_80 = (ulong)*(byte *)(param_1 + 10);
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xf8);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x108);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x110);
  uStack_50 = *(undefined8 *)(param_1 + 0x118);
  lStack_58 = -lVar5;
  if (-1 < lVar5) {
    lStack_58 = lVar5;
  }
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x128);
  uStack_30 = *(undefined8 *)(param_1 + 0x130);
  lStack_40 = -lVar5;
  if (-1 < lVar5) {
    lStack_40 = lVar5;
  }
  uStack_38 = (ulong)*(byte *)(param_1 + 0xb);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  func_0x000107c3191c(&uStack_170,0x29);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b61fc40:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b61fc4c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((((ulong)puVar4 & 1) != 0) &&
         ((((*(long *)((long)puVar3 + 0xb0) == *(long *)(param_3 + 0xb0) &&
            (*(char *)((long)puVar3 + 8) == param_3[8])) &&
           (*(char *)((long)puVar3 + 9) == param_3[9])) &&
          ((*(char *)((long)puVar3 + 10) == param_3[10] &&
           (*(long *)((long)puVar3 + 0x110) == *(long *)(param_3 + 0x110))))))) &&
        (*(long *)((long)puVar3 + 0x128) == *(long *)(param_3 + 0x128))) &&
       (*(char *)((long)puVar3 + 0xb) == param_3[0xb])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x30);
              if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x38);
                if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x40);
                  if ((lVar5 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = *(long *)((long)puVar3 + 0x48);
                    if ((lVar5 == *(long *)(param_3 + 0x48)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = *(long *)((long)puVar3 + 0x50);
                      if ((lVar5 == *(long *)(param_3 + 0x50)) ||
                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        lVar5 = *(long *)((long)puVar3 + 0x58);
                        if ((lVar5 == *(long *)(param_3 + 0x58)) ||
                           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                          lVar5 = *(long *)((long)puVar3 + 0x60);
                          if ((lVar5 == *(long *)(param_3 + 0x60)) ||
                             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                            lVar5 = *(long *)((long)puVar3 + 0x68);
                            if ((lVar5 == *(long *)(param_3 + 0x68)) ||
                               (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                              lVar5 = *(long *)((long)puVar3 + 0x70);
                              if ((lVar5 == *(long *)(param_3 + 0x70)) ||
                                 (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                lVar5 = *(long *)((long)puVar3 + 0x78);
                                if ((lVar5 == *(long *)(param_3 + 0x78)) ||
                                   (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                  lVar5 = *(long *)((long)puVar3 + 0x80);
                                  if ((lVar5 == *(long *)(param_3 + 0x80)) ||
                                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                    lVar5 = *(long *)((long)puVar3 + 0x88);
                                    if ((lVar5 == *(long *)(param_3 + 0x88)) ||
                                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                      lVar5 = *(long *)((long)puVar3 + 0x90);
                                      if ((lVar5 == *(long *)(param_3 + 0x90)) ||
                                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                        lVar5 = *(long *)((long)puVar3 + 0x98);
                                        if ((lVar5 == *(long *)(param_3 + 0x98)) ||
                                           (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                          lVar5 = *(long *)((long)puVar3 + 0xa0);
                                          if ((lVar5 == *(long *)(param_3 + 0xa0)) ||
                                             (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                            lVar5 = *(long *)((long)puVar3 + 0xa8);
                                            if ((lVar5 == *(long *)(param_3 + 0xa8)) ||
                                               (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                              lVar5 = *(long *)((long)puVar3 + 0xb8);
                                              if ((lVar5 == *(long *)(param_3 + 0xb8)) ||
                                                 (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                lVar5 = *(long *)((long)puVar3 + 0xc0);
                                                if ((lVar5 == *(long *)(param_3 + 0xc0)) ||
                                                   (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                  lVar5 = *(long *)((long)puVar3 + 200);
                                                  if ((lVar5 == *(long *)(param_3 + 200)) ||
                                                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                    lVar5 = *(long *)((long)puVar3 + 0xd0);
                                                    if ((lVar5 == *(long *)(param_3 + 0xd0)) ||
                                                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                      lVar5 = *(long *)((long)puVar3 + 0xd8);
                                                      if ((lVar5 == *(long *)(param_3 + 0xd8)) ||
                                                         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                        lVar5 = *(long *)((long)puVar3 + 0xe0);
                                                        if ((lVar5 == *(long *)(param_3 + 0xe0)) ||
                                                           (func_0x00010c071ae0(), (int)lVar5 != 0))
                                                        {
                                                          lVar5 = *(long *)((long)puVar3 + 0xe8);
                                                          if ((lVar5 == *(long *)(param_3 + 0xe8))
                                                             || (func_0x00010c071ae0(),
                                                                (int)lVar5 != 0)) {
                                                            lVar5 = *(long *)((long)puVar3 + 0xf0);
                                                            if ((lVar5 == *(long *)(param_3 + 0xf0))
                                                               || (func_0x00010c071ae0(),
                                                                  (int)lVar5 != 0)) {
                                                              lVar5 = *(long *)((long)puVar3 + 0xf8)
                                                              ;
                                                              if ((lVar5 == *(long *)(param_3 + 0xf8
                                                                                     )) ||
                                                                 (func_0x00010c071ae0(),
                                                                 (int)lVar5 != 0)) {
                                                                lVar5 = *(long *)((long)puVar3 +
                                                                                 0x100);
                                                                if ((lVar5 == *(long *)(param_3 +
                                                                                       0x100)) ||
                                                                   (func_0x00010c071ae0(),
                                                                   (int)lVar5 != 0)) {
                                                                  lVar5 = *(long *)((long)puVar3 +
                                                                                   0x108);
                                                                  if ((lVar5 == *(long *)(param_3 +
                                                                                         0x108)) ||
                                                                     (func_0x00010c071ae0(),
                                                                     (int)lVar5 != 0)) {
                                                                    lVar5 = *(long *)((long)puVar3 +
                                                                                     0x118);
                                                                    if ((lVar5 == *(long *)(param_3 
                                                  + 0x118)) ||
                                                  (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                    lVar5 = *(long *)((long)puVar3 + 0x120);
                                                    if ((lVar5 == *(long *)(param_3 + 0x120)) ||
                                                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                                                      puVar6 = *(undefined1 **)
                                                                ((long)puVar3 + 0x130);
                                                      if (puVar6 != *(undefined1 **)
                                                                     (param_3 + 0x130)) {
                                                        func_0x00010c071ae0();
                                                        goto LAB_10b61fc4c;
                                                      }
                                                      goto LAB_10b61fc40;
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
LAB_10b61fc4c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b61f850; end: 10b61fc67; -[SCStoriesSnapPlaybackInfo isEqual:] */

long FUN_10b61f850(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b61fc40:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b61fc4c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 0xb0) == *(long *)(param_3 + 0xb0) &&
            (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
           (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
          ((*(char *)(param_1 + 10) == *(char *)(param_3 + 10) &&
           (*(long *)(param_1 + 0x110) == *(long *)(param_3 + 0x110))))))) &&
        (*(long *)(param_1 + 0x128) == *(long *)(param_3 + 0x128))) &&
       (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))) {
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
                    lVar3 = *(long *)(param_1 + 0x48);
                    if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x50);
                      if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x58);
                        if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x60);
                          if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + 0x68);
                            if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                              lVar3 = *(long *)(param_1 + 0x70);
                              if ((lVar3 == *(long *)(param_3 + 0x70)) ||
                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                lVar3 = *(long *)(param_1 + 0x78);
                                if ((lVar3 == *(long *)(param_3 + 0x78)) ||
                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                  lVar3 = *(long *)(param_1 + 0x80);
                                  if ((lVar3 == *(long *)(param_3 + 0x80)) ||
                                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                    lVar3 = *(long *)(param_1 + 0x88);
                                    if ((lVar3 == *(long *)(param_3 + 0x88)) ||
                                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                      lVar3 = *(long *)(param_1 + 0x90);
                                      if ((lVar3 == *(long *)(param_3 + 0x90)) ||
                                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                        lVar3 = *(long *)(param_1 + 0x98);
                                        if ((lVar3 == *(long *)(param_3 + 0x98)) ||
                                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                          lVar3 = *(long *)(param_1 + 0xa0);
                                          if ((lVar3 == *(long *)(param_3 + 0xa0)) ||
                                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                            lVar3 = *(long *)(param_1 + 0xa8);
                                            if ((lVar3 == *(long *)(param_3 + 0xa8)) ||
                                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                              lVar3 = *(long *)(param_1 + 0xb8);
                                              if ((lVar3 == *(long *)(param_3 + 0xb8)) ||
                                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                lVar3 = *(long *)(param_1 + 0xc0);
                                                if ((lVar3 == *(long *)(param_3 + 0xc0)) ||
                                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                  lVar3 = *(long *)(param_1 + 200);
                                                  if ((lVar3 == *(long *)(param_3 + 200)) ||
                                                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                    lVar3 = *(long *)(param_1 + 0xd0);
                                                    if ((lVar3 == *(long *)(param_3 + 0xd0)) ||
                                                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                      lVar3 = *(long *)(param_1 + 0xd8);
                                                      if ((lVar3 == *(long *)(param_3 + 0xd8)) ||
                                                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                        lVar3 = *(long *)(param_1 + 0xe0);
                                                        if ((lVar3 == *(long *)(param_3 + 0xe0)) ||
                                                           (func_0x00010c071ae0(), (int)lVar3 != 0))
                                                        {
                                                          lVar3 = *(long *)(param_1 + 0xe8);
                                                          if ((lVar3 == *(long *)(param_3 + 0xe8))
                                                             || (func_0x00010c071ae0(),
                                                                (int)lVar3 != 0)) {
                                                            lVar3 = *(long *)(param_1 + 0xf0);
                                                            if ((lVar3 == *(long *)(param_3 + 0xf0))
                                                               || (func_0x00010c071ae0(),
                                                                  (int)lVar3 != 0)) {
                                                              lVar3 = *(long *)(param_1 + 0xf8);
                                                              if ((lVar3 == *(long *)(param_3 + 0xf8
                                                                                     )) ||
                                                                 (func_0x00010c071ae0(),
                                                                 (int)lVar3 != 0)) {
                                                                lVar3 = *(long *)(param_1 + 0x100);
                                                                if ((lVar3 == *(long *)(param_3 +
                                                                                       0x100)) ||
                                                                   (func_0x00010c071ae0(),
                                                                   (int)lVar3 != 0)) {
                                                                  lVar3 = *(long *)(param_1 + 0x108)
                                                                  ;
                                                                  if ((lVar3 == *(long *)(param_3 +
                                                                                         0x108)) ||
                                                                     (func_0x00010c071ae0(),
                                                                     (int)lVar3 != 0)) {
                                                                    lVar3 = *(long *)(param_1 +
                                                                                     0x118);
                                                                    if ((lVar3 == *(long *)(param_3 
                                                  + 0x118)) ||
                                                  (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                    lVar3 = *(long *)(param_1 + 0x120);
                                                    if ((lVar3 == *(long *)(param_3 + 0x120)) ||
                                                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                                      lVar3 = *(long *)(param_1 + 0x130);
                                                      if (lVar3 != *(long *)(param_3 + 0x130)) {
                                                        func_0x00010c071ae0();
                                                        goto LAB_10b61fc4c;
                                                      }
                                                      goto LAB_10b61fc40;
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
LAB_10b61fc4c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b61fc68; end: 10b61fc6f; -[SCStoriesSnapPlaybackInfo clientId] */

undefined8 FUN_10b61fc68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b61fc70; end: 10b61fc77; -[SCStoriesSnapPlaybackInfo attributes] */

undefined8 FUN_10b61fc70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b61fc78; end: 10b61fc7f; -[SCStoriesSnapPlaybackInfo creatorUserId] */

undefined8 FUN_10b61fc78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b61fc80; end: 10b61fc87; -[SCStoriesSnapPlaybackInfo creatorUsername] */

undefined8 FUN_10b61fc80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b61fc88; end: 10b61fc8f; -[SCStoriesSnapPlaybackInfo media] */

undefined8 FUN_10b61fc88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b61fc90; end: 10b61fc97; -[SCStoriesSnapPlaybackInfo thumbnail] */

undefined8 FUN_10b61fc90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b61fc98; end: 10b61fc9f; -[SCStoriesSnapPlaybackInfo captureInfo] */

undefined8 FUN_10b61fc98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b61fca0; end: 10b61fca7; -[SCStoriesSnapPlaybackInfo renderInfo] */

undefined8 FUN_10b61fca0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b61fca8; end: 10b61fcaf; -[SCStoriesSnapPlaybackInfo adInfo] */

undefined8 FUN_10b61fca8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b61fcb0; end: 10b61fcb7; -[SCStoriesSnapPlaybackInfo sponsor] */

undefined8 FUN_10b61fcb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b61fcb8; end: 10b61fcbf; -[SCStoriesSnapPlaybackInfo lensInfo] */

undefined8 FUN_10b61fcb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10b61fcc0; end: 10b61fcc7; -[SCStoriesSnapPlaybackInfo unlockablesInfo] */

undefined8 FUN_10b61fcc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10b61fcc8; end: 10b61fccf; -[SCStoriesSnapPlaybackInfo audioStitchInfo] */

undefined8 FUN_10b61fcc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10b61fcd0; end: 10b61fcd7; -[SCStoriesSnapPlaybackInfo creatorDisplayName] */

undefined8 FUN_10b61fcd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10b61fcd8; end: 10b61fcdf; -[SCStoriesSnapPlaybackInfo loggingInfo] */

undefined8 FUN_10b61fcd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10b61fce0; end: 10b61fce7; -[SCStoriesSnapPlaybackInfo source] */

undefined8 FUN_10b61fce0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10b61fce8; end: 10b61fcef; -[SCStoriesSnapPlaybackInfo sequence] */

undefined8 FUN_10b61fce8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 10b61fcf0; end: 10b61fcf7; -[SCStoriesSnapPlaybackInfo rotationLocked] */

undefined1 FUN_10b61fcf0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b61fcf8; end: 10b61fcff; -[SCStoriesSnapPlaybackInfo multiSnapInfo] */

undefined8 FUN_10b61fcf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 10b61fd00; end: 10b61fd07; -[SCStoriesSnapPlaybackInfo eventSignature] */

undefined8 FUN_10b61fd00(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}


