/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e6d934; end: 106e6d93b; -[SCFriendingSuggestionsSeenRequest addedSuggestedSnapchatters] */

undefined8 FUN_106e6d934(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e6d93c; end: 106e6d943; -[SCFriendingSuggestionsSeenRequest seenAddedMeSnapchatters] */

undefined8 FUN_106e6d93c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e6d944; end: 106e6d94b; -[SCFriendingSuggestionsSeenRequest placement] */

undefined8 FUN_106e6d944(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e6d94c; end: 106e6d953; -[SCFriendingSuggestionsSeenRequest impressionId] */

undefined8 FUN_106e6d94c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106e6d954; end: 106e6d95b; -[SCFriendingSuggestionsSeenRequest impressionTimeMs] */

undefined8 FUN_106e6d954(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106e6d95c; end: 106e6d963; -[SCFriendingSuggestionsSeenRequest sources] */

undefined8 FUN_106e6d95c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106e6d964; end: 106e6d96b; -[SCFriendingSuggestionsSeenRequest userIdToIsRecentlyActive] */

undefined8 FUN_106e6d964(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106e6d96c; end: 106e6d973; -[SCFriendingSuggestionsSeenRequest pageSessionId] */

undefined8 FUN_106e6d96c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106e6d974; end: 106e6d9eb; -[SCFriendingSuggestionsSeenRequest .cxx_destruct] */

void FUN_106e6d974(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e6d9ec; end: 106e6da5f; -[SCAddFriendsLoggerServices initWithAddFriendsQuickAddLoggerCreator:] */

undefined1 * FUN_106e6d9ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7690;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e6da60; end: 106e6da67; -[SCAddFriendsLoggerServices quickAddLoggerCreator] */

undefined8 FUN_106e6da60(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e6da68; end: 106e6da73; -[SCAddFriendsLoggerServices .cxx_destruct] */

void FUN_106e6da68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e6da74; end: 106e6dae7; -[SCLensActivityCenterRPCServices initWithRpcHandler:] */

undefined1 * FUN_106e6da74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7698;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e6dae8; end: 106e6daef; -[SCLensActivityCenterRPCServices activityCenterRPCHandler] */

undefined8 FUN_106e6dae8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e6daf0; end: 106e6db1f; -[SCLensActivityCenterRPCServices setActivityCenterRPCHandler:] */

void FUN_106e6daf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e6db20; end: 106e6db2b; -[SCLensActivityCenterRPCServices .cxx_destruct] */

void FUN_106e6db20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e6db2c; end: 106e6dbbb; -[SCLensActivityCenterBadgeStatus initWithShouldBadge:subtitle:shouldHideEntryPoint:] */

undefined1 *
FUN_106e6db2c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f76a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_5;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106e6dbbc; end: 106e6dbdf; -[SCLensActivityCenterBadgeStatus copyWithZone:] */

undefined8 FUN_106e6dbbc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e6dbe0; end: 106e6dc53; -[SCLensActivityCenterBadgeStatus hash] */

ulong * FUN_106e6dbe0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  uStack_38 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (ulong *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106e6dce8;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(char *)((long)puVar2 + 8) != param_3[8] || (*(char *)((long)puVar2 + 9) != param_3[9]))))
    {
      puVar4 = (undefined1 *)0x0;
      goto LAB_106e6dce8;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar4 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_106e6dce8;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_106e6dce8:
  _objc_release(param_3);
  return (ulong *)puVar4;
}



/* Entry: 106e6dc54; end: 106e6dd03; -[SCLensActivityCenterBadgeStatus isEqual:] */

long FUN_106e6dc54(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e6dce8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
        (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) {
      lVar3 = 0;
      goto LAB_106e6dce8;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_106e6dce8;
    }
  }
  lVar3 = 1;
LAB_106e6dce8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e6dd04; end: 106e6dd0b; -[SCLensActivityCenterBadgeStatus shouldBadge] */

undefined1 FUN_106e6dd04(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106e6dd0c; end: 106e6dd13; -[SCLensActivityCenterBadgeStatus subtitle] */

undefined8 FUN_106e6dd0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e6dd14; end: 106e6dd1b; -[SCLensActivityCenterBadgeStatus shouldHideEntryPoint] */

undefined1 FUN_106e6dd14(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106e6dd1c; end: 106e6dd27; -[SCLensActivityCenterBadgeStatus .cxx_destruct] */

void FUN_106e6dd1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106e6dd28; end: 106e6dd9b; -[SCLensViewCountServices initWithWithLensViewCountProvider:] */

undefined1 * FUN_106e6dd28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f76a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e6dd9c; end: 106e6dda3; -[SCLensViewCountServices lensViewCountProvider] */

undefined8 FUN_106e6dd9c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e6dda4; end: 106e6ddaf; -[SCLensViewCountServices .cxx_destruct] */

void FUN_106e6dda4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e6ddb0; end: 106e6ddbb; -[SCMapUserPreferencesServices .cxx_destruct] */

void FUN_106e6ddb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e6ddbc; end: 106e6de6b; -[SCMapReactionItem initWithCoder:] */

undefined1 *
FUN_106e6ddbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_1126f76b8;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    func_0x00010bf66da0(param_4);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106e6de6c; end: 106e6def7; -[SCMapReactionItem initWithReaction:score:lastUsedDate:] */

undefined1 *
FUN_106e6de6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f76b8;
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



/* Entry: 106e6def8; end: 106e6df1b; -[SCMapReactionItem copyWithZone:] */

undefined8 FUN_106e6def8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e6df1c; end: 106e6df8f; -[SCMapReactionItem encodeWithCoder:] */

void FUN_106e6df1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e89358);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x10),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110e89378);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x18),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110e88ff8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e6df90; end: 106e6e03b; -[SCMapReactionItem hash] */

undefined8 * FUN_106e6df90(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_106e6e10c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106e6e118;
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
            goto LAB_106e6e118;
          }
          goto LAB_106e6e10c;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106e6e118:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106e6e03c; end: 106e6e133; -[SCMapReactionItem isEqual:] */

long FUN_106e6e03c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e6e10c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e6e118;
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
            goto LAB_106e6e118;
          }
          goto LAB_106e6e10c;
        }
      }
    }
    lVar4 = 0;
  }
LAB_106e6e118:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 106e6e134; end: 106e6e13b; -[SCMapReactionItem reaction] */

undefined8 FUN_106e6e134(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e6e13c; end: 106e6e143; -[SCMapReactionItem score] */

undefined8 FUN_106e6e13c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e6e144; end: 106e6e14b; -[SCMapReactionItem lastUsedDate] */

undefined8 FUN_106e6e144(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e6e14c; end: 106e6e157; -[SCMapReactionItem .cxx_destruct] */

void FUN_106e6e14c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e6e158; end: 106e6e163; -[SCMapValisServices .cxx_destruct] */

void FUN_106e6e158(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e6e164; end: 106e6e1cf; +[SCMapValisClientUpdate deviceDataUpdateWithDeviceData:] */

void FUN_106e6e164(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c5e30;
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



/* Entry: 106e6e1d0; end: 106e6e23b; +[SCMapValisClientUpdate focusViewDataUpdateWithFocusViewData:] */

void FUN_106e6e1d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c5e30;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e6e23c; end: 106e6e29f; +[SCMapValisClientUpdate locationUpdateWithLocationUpdate:] */

void FUN_106e6e23c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c5e30;
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



/* Entry: 106e6e2a0; end: 106e6e30b; +[SCMapValisClientUpdate regionUpdateWithRegionData:] */

void FUN_106e6e2a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c5e30;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e6e30c; end: 106e6e377; +[SCMapValisClientUpdate viewportUpdateWithViewportData:] */

void FUN_106e6e30c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c5e30;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e6e378; end: 106e6e3e3; +[SCMapValisClientUpdate visitUpdateWithVisitData:] */

void FUN_106e6e378(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c5e30;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e6e3e4; end: 106e6e407; -[SCMapValisClientUpdate copyWithZone:] */

undefined8 FUN_106e6e3e4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e6e408; end: 106e6e4af; -[SCMapValisClientUpdate hash] */

void FUN_106e6e408(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
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
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
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
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_1126f76c8;
  puStack_90 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e6e4b0; end: 106e6e4f3; -[SCMapValisClientUpdate internalInit] */

void FUN_106e6e4b0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f76c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e6e4f4; end: 106e6e60b; -[SCMapValisClientUpdate isEqual:] */

long FUN_106e6e4f4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e6e5e4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e6e5f0;
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
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if (lVar3 != *(long *)(param_3 + 0x38)) {
                  func_0x00010c071ae0();
                  goto LAB_106e6e5f0;
                }
                goto LAB_106e6e5e4;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106e6e5f0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e6e60c; end: 106e6e753; -[SCMapValisClientUpdate matchLocationUpdate:deviceDataUpdate:focusViewDataUpdate:viewportUpdate:regionUpdate:visitUpdate:] */

void FUN_106e6e60c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 3) {
    if (lVar1 == 0) {
      if (param_3 == 0) goto LAB_106e6e710;
      lVar2 = 0x10;
      lVar1 = param_3;
    }
    else if (lVar1 == 1) {
      if (param_4 == 0) goto LAB_106e6e710;
      lVar2 = 0x18;
      lVar1 = param_4;
    }
    else {
      if ((lVar1 != 2) || (param_5 == 0)) goto LAB_106e6e710;
      lVar2 = 0x20;
      lVar1 = param_5;
    }
  }
  else if (lVar1 == 3) {
    if (param_6 == 0) goto LAB_106e6e710;
    lVar2 = 0x28;
    lVar1 = param_6;
  }
  else if (lVar1 == 4) {
    if (param_7 == 0) goto LAB_106e6e710;
    lVar2 = 0x30;
    lVar1 = param_7;
  }
  else {
    if ((lVar1 != 5) || (param_8 == 0)) goto LAB_106e6e710;
    lVar2 = 0x38;
    lVar1 = param_8;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_106e6e710:
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



/* Entry: 106e6e754; end: 106e6e7b3; -[SCMapValisClientUpdate .cxx_destruct] */

void FUN_106e6e754(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106e6e7b4; end: 106e6e883; -[SCMapValisDeviceData initWithIsBackgrounded:batteryLevel:devicePluggedIn:headphoneOutput:wifiSsid:isOtherAudioPlaying:authorizationStatus:hasPreciseAccuracy:] */

undefined1 *
FUN_106e6e7b4(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8,
             undefined4 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126f76d0;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined4 *)((long)puVar1 + 0x10) = param_1;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    *(undefined1 *)((long)puVar1 + 10) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xb) = param_8;
    *(undefined4 *)((long)puVar1 + 0x14) = param_9;
    *(undefined1 *)((long)puVar1 + 0xc) = param_10;
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 106e6e884; end: 106e6e8a7; -[SCMapValisDeviceData copyWithZone:] */

undefined8 FUN_106e6e884(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e6e8a8; end: 106e6e967; -[SCMapValisDeviceData hash] */

ulong * FUN_106e6e8a8(long param_1,undefined8 param_2,ulong *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  float fVar8;
  ulong uStack_68;
  long lStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = (ulong)*(uint *)(param_1 + 0x10) * 0x200000 - 1;
  uVar6 = (uVar6 ^ uVar6 >> 0x18) * 0x109;
  uVar6 = (uVar6 ^ uVar6 >> 0xe) * 0x15;
  uStack_68 = (ulong)*(byte *)(param_1 + 8);
  lStack_60 = (uVar6 ^ uVar6 >> 0x1c) * 0x80000001;
  uStack_58 = (ulong)*(byte *)(param_1 + 9);
  uStack_50 = (ulong)*(byte *)(param_1 + 10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 0xb);
  uVar2 = *(uint *)(param_1 + 0x14);
  uVar1 = -uVar2;
  if (-1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  uStack_38 = (ulong)uVar1;
  uStack_30 = (ulong)*(byte *)(param_1 + 0xc);
  puVar4 = &uStack_68;
  uStack_48 = uVar3;
  func_0x000100505190(puVar4,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_106e6ea6c:
    puVar7 = (ulong *)0x1;
  }
  else {
    puVar7 = (ulong *)0x0;
    if ((puVar4 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_106e6ea70;
    puVar7 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if (((((ulong)puVar5 & 1) != 0) &&
        (((((char)puVar4[1] == (char)param_3[1] &&
           (*(char *)((long)puVar4 + 9) == *(char *)((long)param_3 + 9))) &&
          (*(char *)((long)puVar4 + 10) == *(char *)((long)param_3 + 10))) &&
         ((*(char *)((long)puVar4 + 0xb) == *(char *)((long)param_3 + 0xb) &&
          (*(int *)((long)puVar4 + 0x14) == *(int *)((long)param_3 + 0x14))))))) &&
       (*(char *)((long)puVar4 + 0xc) == *(char *)((long)param_3 + 0xc))) {
      fVar8 = ABS(*(float *)(puVar4 + 2) - *(float *)(param_3 + 2));
      if ((fVar8 < 1.1754944e-38) ||
         (fVar8 < ABS(*(float *)(puVar4 + 2) + *(float *)(param_3 + 2)) * 1.1920929e-07)) {
        puVar7 = (ulong *)puVar4[3];
        if (puVar7 != (ulong *)param_3[3]) {
          func_0x00010c071ae0();
          goto LAB_106e6ea70;
        }
        goto LAB_106e6ea6c;
      }
    }
    puVar7 = (ulong *)0x0;
  }
LAB_106e6ea70:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 106e6e968; end: 106e6ea8b; -[SCMapValisDeviceData isEqual:] */

long FUN_106e6e968(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e6ea6c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e6ea70;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
           (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
          (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
         ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
          (*(int *)(param_1 + 0x14) == *(int *)(param_3 + 0x14))))))) &&
       (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))) {
      fVar4 = ABS(*(float *)(param_1 + 0x10) - *(float *)(param_3 + 0x10));
      if ((fVar4 < 1.1754944e-38) ||
         (fVar4 < ABS(*(float *)(param_1 + 0x10) + *(float *)(param_3 + 0x10)) * 1.1920929e-07)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_106e6ea70;
        }
        goto LAB_106e6ea6c;
      }
    }
    lVar3 = 0;
  }
LAB_106e6ea70:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e6ea8c; end: 106e6ea93; -[SCMapValisDeviceData isBackgrounded] */

undefined1 FUN_106e6ea8c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106e6ea94; end: 106e6ea9b; -[SCMapValisDeviceData batteryLevel] */

undefined4 FUN_106e6ea94(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 106e6ea9c; end: 106e6eaa3; -[SCMapValisDeviceData devicePluggedIn] */

undefined1 FUN_106e6ea9c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106e6eaa4; end: 106e6eaab; -[SCMapValisDeviceData headphoneOutput] */

undefined1 FUN_106e6eaa4(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 106e6eaac; end: 106e6eab3; -[SCMapValisDeviceData wifiSsid] */

undefined8 FUN_106e6eaac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e6eab4; end: 106e6eabb; -[SCMapValisDeviceData isOtherAudioPlaying] */

undefined1 FUN_106e6eab4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 106e6eabc; end: 106e6eac3; -[SCMapValisDeviceData authorizationStatus] */

undefined4 FUN_106e6eabc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 106e6eac4; end: 106e6eacb; -[SCMapValisDeviceData hasPreciseAccuracy] */

undefined1 FUN_106e6eac4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 106e6eacc; end: 106e6ead7; -[SCMapValisDeviceData .cxx_destruct] */

void FUN_106e6eacc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106e6ead8; end: 106e6ebc7; -[SCMapValisLocationUpdate initWithLat:lng:altitude:horizontalAccuracy:verticalAccuracy:motionData:timestamp:gpsReset:isBackgrounded:isBirthday:isNewFootstep:] */

undefined1 *
FUN_106e6ead8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined1 param_11,undefined1 param_12,
             undefined1 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  puVar1 = &uStack_90;
  _objc_retain(param_8);
  puStack_88 = PTR_PTR_1126f76d8;
  uStack_90 = param_6;
  _objc_msgSendSuper2(&uStack_90,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0xc) = param_1;
    *(undefined4 *)((long)puVar1 + 0x10) = param_2;
    *(undefined4 *)((long)puVar1 + 0x14) = param_3;
    *(undefined4 *)((long)puVar1 + 0x18) = param_4;
    *(undefined4 *)((long)puVar1 + 0x1c) = param_5;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_9;
    *(undefined1 *)((long)puVar1 + 8) = param_10;
    *(undefined1 *)((long)puVar1 + 9) = param_11;
    *(undefined1 *)((long)puVar1 + 10) = param_12;
    *(undefined1 *)((long)puVar1 + 0xb) = param_13;
  }
  _objc_release(param_8);
  return (undefined1 *)puVar1;
}



/* Entry: 106e6ebc8; end: 106e6ebeb; -[SCMapValisLocationUpdate copyWithZone:] */

undefined8 FUN_106e6ebc8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e6ebec; end: 106e6ed4b; -[SCMapValisLocationUpdate hash] */

long * FUN_106e6ebec(long param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  ushort uVar8;
  undefined4 uVar9;
  float fVar10;
  ulong uVar11;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  plVar3 = &lStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = (ulong)*(uint *)(param_1 + 0xc) * 0x200000 - 1;
  uVar5 = (uVar5 ^ uVar5 >> 0x18) * 0x109;
  uVar5 = (uVar5 ^ uVar5 >> 0xe) * 0x15;
  lStack_80 = (uVar5 ^ uVar5 >> 0x1c) * 0x80000001;
  uVar5 = (ulong)*(uint *)(param_1 + 0x10) * 0x200000 - 1;
  uVar5 = (uVar5 ^ uVar5 >> 0x18) * 0x109;
  uVar5 = (uVar5 ^ uVar5 >> 0xe) * 0x15;
  lStack_78 = (uVar5 ^ uVar5 >> 0x1c) * 0x80000001;
  uVar5 = (ulong)*(uint *)(param_1 + 0x14) * 0x200000 - 1;
  uVar5 = (uVar5 ^ uVar5 >> 0x18) * 0x109;
  uVar5 = (uVar5 ^ uVar5 >> 0xe) * 0x15;
  lStack_70 = (uVar5 ^ uVar5 >> 0x1c) * 0x80000001;
  uVar5 = (ulong)*(uint *)(param_1 + 0x18) * 0x200000 - 1;
  uVar5 = (uVar5 ^ uVar5 >> 0x18) * 0x109;
  uVar5 = (uVar5 ^ uVar5 >> 0xe) * 0x15;
  lStack_68 = (uVar5 ^ uVar5 >> 0x1c) * 0x80000001;
  uVar5 = (ulong)*(uint *)(param_1 + 0x1c) * 0x200000 - 1;
  uVar5 = (uVar5 ^ uVar5 >> 0x18) * 0x109;
  uVar5 = (uVar5 ^ uVar5 >> 0xe) * 0x15;
  lStack_60 = (uVar5 ^ uVar5 >> 0x1c) * 0x80000001;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x28);
  lStack_50 = -lVar6;
  if (-1 < lVar6) {
    lStack_50 = lVar6;
  }
  uVar9 = *(undefined4 *)(param_1 + 8);
  uVar5 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar9 >> 0x18),
                                          (uint6)(byte)((uint)uVar9 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar9) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar9 >> 8),(short)uVar5);
  uVar11 = CONCAT44((int)(uVar5 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar5 = CONCAT26((short)(uVar11 >> 0x30),CONCAT24((short)(uVar5 >> 0x20),(int)uVar11)) &
          0xff01ff01ffffffff;
  uVar8 = (ushort)(uVar5 >> 0x30);
  uStack_48 = (ulong)uVar1 & 0xff;
  uStack_40 = uVar5 >> 0x10 & 0xff;
  uStack_38 = (ulong)CONCAT24(uVar8,(uint)(ushort)(uVar5 >> 0x20)) & 0xffffffff;
  uStack_30 = (ulong)uVar8;
  uStack_58 = uVar2;
  func_0x000100505190(&lStack_80,0xb);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == (long *)param_3) {
LAB_106e6ef00:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106e6ef04;
    puVar7 = (undefined1 *)plVar3;
    _objc_opt_class(plVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((((*(long *)((long)plVar3 + 0x28) == *(long *)(param_3 + 0x28) &&
          (*(char *)((long)plVar3 + 8) == param_3[8])) &&
         (*(char *)((long)plVar3 + 9) == param_3[9])) &&
        ((*(char *)((long)plVar3 + 10) == param_3[10] &&
         (*(char *)((long)plVar3 + 0xb) == param_3[0xb])))))) {
      fVar10 = ABS(*(float *)((long)plVar3 + 0xc) - *(float *)(param_3 + 0xc));
      if ((fVar10 < 1.1754944e-38) ||
         (fVar10 < ABS(*(float *)((long)plVar3 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07))
      {
        fVar10 = ABS(*(float *)((long)plVar3 + 0x10) - *(float *)(param_3 + 0x10));
        if ((fVar10 < 1.1754944e-38) ||
           (fVar10 < ABS(*(float *)((long)plVar3 + 0x10) + *(float *)(param_3 + 0x10)) *
                     1.1920929e-07)) {
          fVar10 = ABS(*(float *)((long)plVar3 + 0x14) - *(float *)(param_3 + 0x14));
          if ((fVar10 < 1.1754944e-38) ||
             (fVar10 < ABS(*(float *)((long)plVar3 + 0x14) + *(float *)(param_3 + 0x14)) *
                       1.1920929e-07)) {
            fVar10 = ABS(*(float *)((long)plVar3 + 0x18) - *(float *)(param_3 + 0x18));
            if ((fVar10 < 1.1754944e-38) ||
               (fVar10 < ABS(*(float *)((long)plVar3 + 0x18) + *(float *)(param_3 + 0x18)) *
                         1.1920929e-07)) {
              fVar10 = ABS(*(float *)((long)plVar3 + 0x1c) - *(float *)(param_3 + 0x1c));
              if ((fVar10 < 1.1754944e-38) ||
                 (fVar10 < ABS(*(float *)((long)plVar3 + 0x1c) + *(float *)(param_3 + 0x1c)) *
                           1.1920929e-07)) {
                puVar7 = *(undefined1 **)((long)plVar3 + 0x20);
                if (puVar7 != *(undefined1 **)(param_3 + 0x20)) {
                  func_0x00010c071ae0();
                  goto LAB_106e6ef04;
                }
                goto LAB_106e6ef00;
              }
            }
          }
        }
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_106e6ef04:
  _objc_release(param_3);
  return (long *)puVar7;
}



/* Entry: 106e6ed4c; end: 106e6ef1f; -[SCMapValisLocationUpdate isEqual:] */

long FUN_106e6ed4c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e6ef00:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e6ef04;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28) &&
          (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
        ((*(char *)(param_1 + 10) == *(char *)(param_3 + 10) &&
         (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))))))) {
      fVar4 = ABS(*(float *)(param_1 + 0xc) - *(float *)(param_3 + 0xc));
      if ((fVar4 < 1.1754944e-38) ||
         (fVar4 < ABS(*(float *)(param_1 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07)) {
        fVar4 = ABS(*(float *)(param_1 + 0x10) - *(float *)(param_3 + 0x10));
        if ((fVar4 < 1.1754944e-38) ||
           (fVar4 < ABS(*(float *)(param_1 + 0x10) + *(float *)(param_3 + 0x10)) * 1.1920929e-07)) {
          fVar4 = ABS(*(float *)(param_1 + 0x14) - *(float *)(param_3 + 0x14));
          if ((fVar4 < 1.1754944e-38) ||
             (fVar4 < ABS(*(float *)(param_1 + 0x14) + *(float *)(param_3 + 0x14)) * 1.1920929e-07))
          {
            fVar4 = ABS(*(float *)(param_1 + 0x18) - *(float *)(param_3 + 0x18));
            if ((fVar4 < 1.1754944e-38) ||
               (fVar4 < ABS(*(float *)(param_1 + 0x18) + *(float *)(param_3 + 0x18)) * 1.1920929e-07
               )) {
              fVar4 = ABS(*(float *)(param_1 + 0x1c) - *(float *)(param_3 + 0x1c));
              if ((fVar4 < 1.1754944e-38) ||
                 (fVar4 < ABS(*(float *)(param_1 + 0x1c) + *(float *)(param_3 + 0x1c)) *
                          1.1920929e-07)) {
                lVar3 = *(long *)(param_1 + 0x20);
                if (lVar3 != *(long *)(param_3 + 0x20)) {
                  func_0x00010c071ae0();
                  goto LAB_106e6ef04;
                }
                goto LAB_106e6ef00;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106e6ef04:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e6ef20; end: 106e6ef27; -[SCMapValisLocationUpdate lat] */

undefined4 FUN_106e6ef20(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 106e6ef28; end: 106e6ef2f; -[SCMapValisLocationUpdate lng] */

undefined4 FUN_106e6ef28(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 106e6ef30; end: 106e6ef37; -[SCMapValisLocationUpdate altitude] */

undefined4 FUN_106e6ef30(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 106e6ef38; end: 106e6ef3f; -[SCMapValisLocationUpdate horizontalAccuracy] */

undefined4 FUN_106e6ef38(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 106e6ef40; end: 106e6ef47; -[SCMapValisLocationUpdate verticalAccuracy] */

undefined4 FUN_106e6ef40(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* Entry: 106e6ef48; end: 106e6ef4f; -[SCMapValisLocationUpdate motionData] */

undefined8 FUN_106e6ef48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e6ef50; end: 106e6ef57; -[SCMapValisLocationUpdate timestamp] */

undefined8 FUN_106e6ef50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106e6ef58; end: 106e6ef5f; -[SCMapValisLocationUpdate gpsReset] */

undefined1 FUN_106e6ef58(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106e6ef60; end: 106e6ef67; -[SCMapValisLocationUpdate isBackgrounded] */

undefined1 FUN_106e6ef60(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106e6ef68; end: 106e6ef6f; -[SCMapValisLocationUpdate isBirthday] */

undefined1 FUN_106e6ef68(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 106e6ef70; end: 106e6ef77; -[SCMapValisLocationUpdate isNewFootstep] */

undefined1 FUN_106e6ef70(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 106e6ef78; end: 106e6ef83; -[SCMapValisLocationUpdate .cxx_destruct] */

void FUN_106e6ef78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 106e6ef84; end: 106e6efe3; -[SCMapValisMotionData initWithHeading:headingAccuracy:speed:speedAccuracy:] */

void FUN_106e6ef84(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f76e0;
  uStack_40 = param_5;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_1;
    *(undefined4 *)((long)puVar1 + 0xc) = param_2;
    *(undefined4 *)((long)puVar1 + 0x10) = param_3;
    *(undefined4 *)((long)puVar1 + 0x14) = param_4;
  }
  return;
}



/* Entry: 106e6efe4; end: 106e6f007; -[SCMapValisMotionData copyWithZone:] */

undefined8 FUN_106e6efe4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e6f008; end: 106e6f0ef; -[SCMapValisMotionData hash] */

long * FUN_106e6f008(long param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = (ulong)*(uint *)(param_1 + 8) * 0x200000 - 1;
  uVar4 = (uVar4 ^ uVar4 >> 0x18) * 0x109;
  uVar4 = (uVar4 ^ uVar4 >> 0xe) * 0x15;
  lStack_38 = (uVar4 ^ uVar4 >> 0x1c) * 0x80000001;
  uVar4 = (ulong)*(uint *)(param_1 + 0xc) * 0x200000 - 1;
  uVar4 = (uVar4 ^ uVar4 >> 0x18) * 0x109;
  uVar4 = (uVar4 ^ uVar4 >> 0xe) * 0x15;
  lStack_30 = (uVar4 ^ uVar4 >> 0x1c) * 0x80000001;
  uVar4 = (ulong)*(uint *)(param_1 + 0x10) * 0x200000 - 1;
  uVar4 = (uVar4 ^ uVar4 >> 0x18) * 0x109;
  uVar4 = (uVar4 ^ uVar4 >> 0xe) * 0x15;
  lStack_28 = (uVar4 ^ uVar4 >> 0x1c) * 0x80000001;
  uVar4 = (ulong)*(uint *)(param_1 + 0x14) * 0x200000 - 1;
  uVar4 = (uVar4 ^ uVar4 >> 0x18) * 0x109;
  uVar4 = (uVar4 ^ uVar4 >> 0xe) * 0x15;
  lStack_20 = (uVar4 ^ uVar4 >> 0x1c) * 0x80000001;
  plVar2 = &lStack_38;
  func_0x000100505190(plVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar2 == param_3) {
    plVar5 = (long *)0x1;
  }
  else {
    plVar5 = (long *)0x0;
    if ((plVar2 != (long *)0x0) && (param_3 != (long *)0x0)) {
      plVar5 = plVar2;
      _objc_opt_class(plVar2);
      plVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,plVar5);
      if (((ulong)plVar3 & 1) != 0) {
        fVar7 = ABS(*(float *)(plVar2 + 1) - *(float *)(param_3 + 1));
        fVar6 = ABS(*(float *)(plVar2 + 1) + *(float *)(param_3 + 1)) * 1.1920929e-07;
        bVar1 = true;
        if ((1.1754944e-38 <= fVar7) && (bVar1 = false, !NAN(fVar7) && !NAN(fVar6))) {
          bVar1 = fVar7 < fVar6;
        }
        if (bVar1) {
          fVar7 = ABS(*(float *)((long)plVar2 + 0xc) - *(float *)((long)param_3 + 0xc));
          fVar6 = ABS(*(float *)((long)plVar2 + 0xc) + *(float *)((long)param_3 + 0xc)) *
                  1.1920929e-07;
          bVar1 = true;
          if ((1.1754944e-38 <= fVar7) && (bVar1 = false, !NAN(fVar7) && !NAN(fVar6))) {
            bVar1 = fVar7 < fVar6;
          }
          if (bVar1) {
            fVar7 = ABS(*(float *)(plVar2 + 2) - *(float *)(param_3 + 2));
            fVar6 = ABS(*(float *)(plVar2 + 2) + *(float *)(param_3 + 2)) * 1.1920929e-07;
            bVar1 = true;
            if ((1.1754944e-38 <= fVar7) && (bVar1 = false, !NAN(fVar7) && !NAN(fVar6))) {
              bVar1 = fVar7 < fVar6;
            }
            if (bVar1) {
              fVar6 = ABS(*(float *)((long)plVar2 + 0x14) + *(float *)((long)param_3 + 0x14)) *
                      1.1920929e-07;
              if (fVar6 <= 1.1754944e-38) {
                fVar6 = 1.1754944e-38;
              }
              plVar5 = (long *)(ulong)(ABS(*(float *)((long)plVar2 + 0x14) -
                                           *(float *)((long)param_3 + 0x14)) < fVar6);
              goto LAB_106e6f200;
            }
          }
        }
      }
      plVar5 = (long *)0x0;
    }
  }
LAB_106e6f200:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 106e6f0f0; end: 106e6f21b; -[SCMapValisMotionData isEqual:] */

bool FUN_106e6f0f0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
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
        fVar5 = ABS(*(float *)(param_1 + 8) - *(float *)(param_3 + 8));
        fVar4 = ABS(*(float *)(param_1 + 8) + *(float *)(param_3 + 8)) * 1.1920929e-07;
        bVar1 = true;
        if ((1.1754944e-38 <= fVar5) && (bVar1 = false, !NAN(fVar5) && !NAN(fVar4))) {
          bVar1 = fVar5 < fVar4;
        }
        if (bVar1) {
          fVar5 = ABS(*(float *)(param_1 + 0xc) - *(float *)(param_3 + 0xc));
          fVar4 = ABS(*(float *)(param_1 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07;
          bVar1 = true;
          if ((1.1754944e-38 <= fVar5) && (bVar1 = false, !NAN(fVar5) && !NAN(fVar4))) {
            bVar1 = fVar5 < fVar4;
          }
          if (bVar1) {
            fVar5 = ABS(*(float *)(param_1 + 0x10) - *(float *)(param_3 + 0x10));
            fVar4 = ABS(*(float *)(param_1 + 0x10) + *(float *)(param_3 + 0x10)) * 1.1920929e-07;
            bVar1 = true;
            if ((1.1754944e-38 <= fVar5) && (bVar1 = false, !NAN(fVar5) && !NAN(fVar4))) {
              bVar1 = fVar5 < fVar4;
            }
            if (bVar1) {
              fVar4 = ABS(*(float *)(param_1 + 0x14) + *(float *)(param_3 + 0x14)) * 1.1920929e-07;
              if (fVar4 <= 1.1754944e-38) {
                fVar4 = 1.1754944e-38;
              }
              bVar1 = ABS(*(float *)(param_1 + 0x14) - *(float *)(param_3 + 0x14)) < fVar4;
              goto LAB_106e6f200;
            }
          }
        }
      }
      bVar1 = false;
    }
  }
LAB_106e6f200:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106e6f21c; end: 106e6f223; -[SCMapValisMotionData heading] */

undefined4 FUN_106e6f21c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 106e6f224; end: 106e6f22b; -[SCMapValisMotionData headingAccuracy] */

undefined4 FUN_106e6f224(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 106e6f22c; end: 106e6f233; -[SCMapValisMotionData speed] */

undefined4 FUN_106e6f22c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 106e6f234; end: 106e6f23b; -[SCMapValisMotionData speedAccuracy] */

undefined4 FUN_106e6f234(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 106e6f23c; end: 106e6f2cb; -[SCMapValisGetFriendClustersRequest initWithIncludeAllFriends:friendIdsArray:requestExplorerStatuses:] */

undefined1 *
FUN_106e6f23c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f76e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_5;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106e6f2cc; end: 106e6f2ef; -[SCMapValisGetFriendClustersRequest copyWithZone:] */

undefined8 FUN_106e6f2cc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e6f2f0; end: 106e6f363; -[SCMapValisGetFriendClustersRequest hash] */

ulong * FUN_106e6f2f0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  uStack_38 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (ulong *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106e6f3f8;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(char *)((long)puVar2 + 8) != param_3[8] || (*(char *)((long)puVar2 + 9) != param_3[9]))))
    {
      puVar4 = (undefined1 *)0x0;
      goto LAB_106e6f3f8;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar4 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_106e6f3f8;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_106e6f3f8:
  _objc_release(param_3);
  return (ulong *)puVar4;
}



/* Entry: 106e6f364; end: 106e6f413; -[SCMapValisGetFriendClustersRequest isEqual:] */

long FUN_106e6f364(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e6f3f8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
        (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) {
      lVar3 = 0;
      goto LAB_106e6f3f8;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_106e6f3f8;
    }
  }
  lVar3 = 1;
LAB_106e6f3f8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e6f414; end: 106e6f41b; -[SCMapValisGetFriendClustersRequest includeAllFriends] */

undefined1 FUN_106e6f414(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106e6f41c; end: 106e6f423; -[SCMapValisGetFriendClustersRequest friendIdsArray] */

undefined8 FUN_106e6f41c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e6f424; end: 106e6f42b; -[SCMapValisGetFriendClustersRequest requestExplorerStatuses] */

undefined1 FUN_106e6f424(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106e6f42c; end: 106e6f437; -[SCMapValisGetFriendClustersRequest .cxx_destruct] */

void FUN_106e6f42c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106e6f438; end: 106e6f4c7; -[SCMapValisGetFriendClustersResponse initWithFriendClustersArray:success:requestAgainAfterMs:] */

undefined1 *
FUN_106e6f438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f76f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e6f4c8; end: 106e6f4eb; -[SCMapValisGetFriendClustersResponse copyWithZone:] */

undefined8 FUN_106e6f4c8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e6f4ec; end: 106e6f567; -[SCMapValisGetFriendClustersResponse hash] */

undefined8 * FUN_106e6f4ec(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uStack_40;
  ulong uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x18);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  uStack_40 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106e6f5fc;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(char *)((long)puVar2 + 8) != param_3[8] ||
        (*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18))))) {
      puVar5 = (undefined1 *)0x0;
      goto LAB_106e6f5fc;
    }
    puVar5 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar5 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_106e6f5fc;
    }
  }
  puVar5 = (undefined1 *)0x1;
LAB_106e6f5fc:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 106e6f568; end: 106e6f617; -[SCMapValisGetFriendClustersResponse isEqual:] */

long FUN_106e6f568(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e6f5fc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_106e6f5fc;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_106e6f5fc;
    }
  }
  lVar3 = 1;
LAB_106e6f5fc:
  _objc_release(param_3);
  return lVar3;
}


