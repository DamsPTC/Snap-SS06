/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103b79e44; end: 103b79e77;  */

void FUN_103b79e44(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b79e78; end: 103b79f17;  */

undefined8 FUN_103b79e78(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = &uStack_50;
  uStack_40 = 0x3875336d;
  uStack_38 = 0xe400000000000000;
  func_0x000107c5ed6c();
  uStack_50 = param_1;
  uStack_48 = param_2;
  func_0x000100e8b654();
  func_0x000107c60204(&uStack_50,PTR___sSSN_11034da80,PTR___sSSN_11034da80,param_1,param_1);
  func_0x000107c6142c();
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 1;
  }
  else {
    func_0x000107c5ed5c();
    uVar2 = 3;
    if ((param_2 & 1) == 0) {
      uVar2 = 5;
    }
  }
  return uVar2;
}



/* Entry: 103b79f18; end: 103b7a087;  */

undefined1  [16] FUN_103b79f18(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x12;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar6 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar6 - extraout_x12;
  lVar2 = param_1;
  func_0x000107c4d444();
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  func_0x000107c61168(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
  lVar4 = lVar2;
  func_0x000107c6148c(lVar2,puVar3);
  if (lVar4 == 0) {
    func_0x000107c61170(lVar2);
    func_0x000107c4d444(param_1);
    func_0x000107c61180();
    lVar2 = param_1;
    func_0x000107c413cc();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    lVar5 = lVar2;
    func_0x000107c5faec(lVar2);
    func_0x000107c61170(lVar2);
  }
  else {
    lVar2 = lVar4;
    func_0x000107c3abfc();
    func_0x000107c61180();
    func_0x000107c5edb4(puVar6);
    func_0x000107c61170(lVar2);
    lVar5 = lVar7;
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,lVar1);
    func_0x000107c5ed70();
    func_0x000107c61170(lVar4);
    (**(code **)(lVar8 + 8))(lVar7,lVar1);
    puVar3 = puVar6;
  }
  auVar9._8_8_ = puVar3;
  auVar9._0_8_ = lVar5;
  return auVar9;
}



/* Entry: 103b7a088; end: 103b7a0a7;  */

void FUN_103b7a088(void)

{
  func_0x000107c61168(&PTR_PTR_112934648);
  return;
}



/* Entry: 103b7a0a8; end: 103b7a0bb;  */

bool FUN_103b7a0a8(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103b7a0bc; end: 103b7a193;  */

void FUN_103b7a0bc(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b7a194; end: 103b7a1a3; -[_TtC19PlayerStallDetector17PauseStateTracker interactionPauseStopWatch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7a194(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff0538));
  return;
}



/* Entry: 103b7a1a4; end: 103b7a1b3; -[_TtC19PlayerStallDetector17PauseStateTracker exitPauseStopWatch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7a1a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff0540));
  return;
}



/* Entry: 103b7a1b4; end: 103b7a23b; -[_TtC19PlayerStallDetector17PauseStateTracker init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7a1b4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ff0530) = 0;
  puVar2 = PTR_PTR_1126b46f0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + _DAT_112ff0538) = puVar2;
  puVar2 = PTR_PTR_1126b46f0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + _DAT_112ff0540) = puVar2;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b7a23c; end: 103b7a26f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7a23c(void)

{
  uint uVar1;
  long unaff_x20;
  
  uVar1 = *(int *)(unaff_x20 + _DAT_112ff0530) - 1;
  if (uVar1 < 3) {
                    /* WARNING: Could not recover jumptable at 0x00010c24d970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(unaff_x20 + *(long *)(&PTR_DAT_1106da6d0)[uVar1]),
               PTR_s_start_112671080);
    return;
  }
  return;
}



/* Entry: 103b7a270; end: 103b7a2eb; -[_TtC19PlayerStallDetector17PauseStateTracker onStopPlaying] */

void FUN_103b7a270(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103b7a23c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b7a2ec; end: 103b7a31b; -[_TtC19PlayerStallDetector17PauseStateTracker getInteractionPauseTimeMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_103b7a2ec(double param_1,long param_2)

{
  func_0x000107c3cf50(*(undefined8 *)(param_2 + _DAT_112ff0538));
  return param_1 * 1000.0;
}



/* Entry: 103b7a31c; end: 103b7a34b; -[_TtC19PlayerStallDetector17PauseStateTracker getExitAnimationPauseTimeMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_103b7a31c(double param_1,long param_2)

{
  func_0x000107c3cf50(*(undefined8 *)(param_2 + _DAT_112ff0540));
  return param_1 * 1000.0;
}



/* Entry: 103b7a34c; end: 103b7a39f; -[_TtC19PlayerStallDetector17PauseStateTracker reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7a34c(long param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + _DAT_112ff0530) = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ff0538);
  func_0x000107c61174();
  func_0x000107c504e8(uVar1);
  func_0x000107c504e8(*(undefined8 *)(param_1 + _DAT_112ff0540));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b7a3a0; end: 103b7a3d3;  */

void FUN_103b7a3a0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b7a3d4; end: 103b7a40b; -[_TtC19PlayerStallDetector17PauseStateTracker .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b7a3f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b7a3f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7a3d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff0538));
  return;
}



/* Entry: 103b7a40c; end: 103b7a41f;  */

undefined1  [16] FUN_103b7a40c(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = param_1;
  }
  auVar2[8] = 3 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 103b7a420; end: 103b7a45f;  */

void FUN_103b7a420(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff0548 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5a8d0;
  func_0x000107c61520(&UNK_10dc5a8d0,&UNK_1106da6c0);
  puRam0000000112ff0548 = puVar1;
  return;
}



/* Entry: 103b7a460; end: 103b7a46f;  */

undefined1  [16] FUN_103b7a460(void)

{
  return ZEXT816(0x1106da6c0);
}



/* Entry: 103b7a470; end: 103b7a48f;  */

void FUN_103b7a470(void)

{
  func_0x000107c61168(&PTR_PTR_1129346f8);
  return;
}



/* Entry: 103b7a490; end: 103b7a493; -[_TtC19PlayerStallDetector17PauseStateTracker currentPauseType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b7a490(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff0530);
}



/* Entry: 103b7a494; end: 103b7a497; -[_TtC19PlayerStallDetector17PauseStateTracker getPauseType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b7a494(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff0530);
}



/* Entry: 103b7a498; end: 103b7a49b; -[_TtC19PlayerStallDetector17PauseStateTracker pauseRequestedWithType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7a498(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112ff0530) = param_3;
  return;
}



/* Entry: 103b7a49c; end: 103b7a4a3; -[_TtC19PlayerStallDetector17PauseStateTracker setCurrentPauseType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7a49c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112ff0530) = param_3;
  return;
}



/* Entry: 103b7a4a4; end: 103b7a4a7; -[_TtC19PlayerStallDetector17PauseStateTracker onStartPlaying] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7a4a4(long param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + _DAT_112ff0530) = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ff0538);
  func_0x000107c61174();
  func_0x000107c4e454(uVar1);
  func_0x000107c4e454(*(undefined8 *)(param_1 + _DAT_112ff0540));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b7a4a8; end: 103b7a4bf; -[_TtC19PlayerStallDetector17PauseStateTracker stopRequested] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7a4a8(long param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + _DAT_112ff0530) = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ff0538);
  func_0x000107c61174();
  func_0x000107c4e454(uVar1);
  func_0x000107c4e454(*(undefined8 *)(param_1 + _DAT_112ff0540));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b7a4c0; end: 103b7a56b;  */

void FUN_103b7a4c0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b7a56c; end: 103b7a58b; -[_TtC19PlayerStallDetector19PlayerStallDetector delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7a56c(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ff05a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b7a58c; end: 103b7a59f; -[_TtC19PlayerStallDetector19PlayerStallDetector setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7a58c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ff05a8,param_3);
  return;
}



/* Entry: 103b7a5a0; end: 103b7a5f7;  */

undefined8 FUN_103b7a5a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_103b7a9f0(param_1,param_2,param_3);
  func_0x000107c615e8(param_1);
  return uVar1;
}



/* Entry: 103b7a5f8; end: 103b7a627;  */

undefined8 FUN_103b7a5f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_103b7a9f0();
  func_0x000107c615e8(param_1);
  return uVar1;
}



/* Entry: 103b7a628; end: 103b7a79f; -[_TtC19PlayerStallDetector19PlayerStallDetector initWithDelegate:useStateMachine:enableMediaPositionFix:] */

undefined8
FUN_103b7a628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_3;
  FUN_103b7a9f0(param_3,param_4,param_5);
  func_0x000107c615e8(param_3);
  return uVar1;
}



/* Entry: 103b7a7a0; end: 103b7a7df;  */

/* WARNING: Removing unreachable block (ram,0x000103b7a70c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7a7a0(double param_1)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  char cVar4;
  long unaff_x20;
  
  bVar1 = 0;
  if (param_1 <= 0.0) {
    bVar1 = *(byte *)(unaff_x20 + _DAT_112ff0578);
  }
  if ((*(double *)(unaff_x20 + _DAT_112ff0580) != -1.0) || ((bVar1 & 1) != 0)) {
    return;
  }
  *(double *)(unaff_x20 + _DAT_112ff0580) = param_1;
  if (*(char *)(unaff_x20 + _DAT_112ff05a0) == '\x01') {
    if ((*(byte *)(unaff_x20 + _DAT_112ff0590) & 1) == 0) goto LAB_103b7a720;
LAB_103b7a6e0:
    if (*(double *)(unaff_x20 + _DAT_112ff0580) == -1.0) goto LAB_103b7a720;
    cVar4 = '\x02';
    bVar2 = true;
  }
  else {
    if (((char)((long *)(unaff_x20 + _DAT_112ff0588))[1] != '\x01') &&
       (*(long *)(unaff_x20 + _DAT_112ff0588) == 2)) goto LAB_103b7a6e0;
LAB_103b7a720:
    bVar2 = false;
    cVar4 = '\x01';
  }
  if (cVar4 != *(char *)(unaff_x20 + _DAT_112ff0598)) {
    *(char *)(unaff_x20 + _DAT_112ff0598) = cVar4;
    lVar3 = unaff_x20 + _DAT_112ff05a8;
    func_0x000107c61618();
    if (bVar2) {
      if (lVar3 != 0) {
        func_0x000107c4e984(lVar3);
LAB_103b7a780:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
        return;
      }
    }
    else if (lVar3 != 0) {
      func_0x000107c4e988(lVar3);
      goto LAB_103b7a780;
    }
  }
  return;
}



/* Entry: 103b7a7e0; end: 103b7a817; -[_TtC19PlayerStallDetector19PlayerStallDetector updatePlaybackPosition:] */

void FUN_103b7a7e0(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_103b7a7a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103b7a818; end: 103b7a873; -[_TtC19PlayerStallDetector19PlayerStallDetector updatePlayerTimeControlStatusWithOldStatus:newStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7a818(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + _DAT_112ff0588);
  if ((char)plVar1[1] != '\x01') {
    param_3 = *plVar1;
  }
  *plVar1 = param_4;
  *(undefined1 *)(plVar1 + 1) = 0;
  if (param_3 == param_4) {
    return;
  }
  func_0x000107c61174();
  func_0x000103b7a684(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b7a874; end: 103b7a8a3;  */

/* WARNING: Removing unreachable block (ram,0x000103b7a704) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7a874(byte param_1)

{
  bool bVar1;
  long lVar2;
  char cVar3;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + _DAT_112ff0590) != 2) &&
     (((param_1 ^ *(byte *)(unaff_x20 + _DAT_112ff0590)) & 1) == 0)) {
    return;
  }
  *(byte *)(unaff_x20 + _DAT_112ff0590) = param_1 & 1;
  if (*(char *)(unaff_x20 + _DAT_112ff05a0) == '\x01') {
    if ((*(byte *)(unaff_x20 + _DAT_112ff0590) & 1) == 0) goto LAB_103b7a70c;
LAB_103b7a6e0:
    if (*(double *)(unaff_x20 + _DAT_112ff0580) == -1.0) goto LAB_103b7a70c;
    cVar3 = '\x02';
    bVar1 = true;
  }
  else {
    if (((char)((long *)(unaff_x20 + _DAT_112ff0588))[1] != '\x01') &&
       (*(long *)(unaff_x20 + _DAT_112ff0588) == 2)) goto LAB_103b7a6e0;
LAB_103b7a70c:
    *(undefined8 *)(unaff_x20 + _DAT_112ff0580) = 0xbff0000000000000;
    bVar1 = false;
    cVar3 = '\x01';
  }
  if (cVar3 != *(char *)(unaff_x20 + _DAT_112ff0598)) {
    *(char *)(unaff_x20 + _DAT_112ff0598) = cVar3;
    lVar2 = unaff_x20 + _DAT_112ff05a8;
    func_0x000107c61618();
    if (bVar1) {
      if (lVar2 != 0) {
        func_0x000107c4e984(lVar2);
LAB_103b7a780:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
        return;
      }
    }
    else if (lVar2 != 0) {
      func_0x000107c4e988(lVar2);
      goto LAB_103b7a780;
    }
  }
  return;
}



/* Entry: 103b7a8a4; end: 103b7a8d3; -[_TtC19PlayerStallDetector19PlayerStallDetector updatePlaybackStateMachineStateWithIsPlaying:] */

void FUN_103b7a8a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_103b7a874(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b7a8d4; end: 103b7a903; -[_TtC19PlayerStallDetector19PlayerStallDetector isStalling] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103b7a8d4(long param_1)

{
  return *(char *)(param_1 + _DAT_112ff0598) == '\x01';
}



/* Entry: 103b7a904; end: 103b7a95f; -[_TtC19PlayerStallDetector19PlayerStallDetector isPlaying] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103b7a904(long param_1)

{
  return *(char *)(param_1 + _DAT_112ff0598) == '\x02';
}



/* Entry: 103b7a960; end: 103b7a97f; -[_TtC19PlayerStallDetector19PlayerStallDetector reset] */

void FUN_103b7a960(void)

{
  func_0x000103b7a91c();
  return;
}



/* Entry: 103b7a980; end: 103b7a9df; -[_TtC19PlayerStallDetector19PlayerStallDetector init] */

void FUN_103b7a980(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlayerStallDetector.PlayerStallDetector",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b7a9ac);
  (*pcVar1)();
}



/* Entry: 103b7a9e0; end: 103b7a9ef; -[_TtC19PlayerStallDetector19PlayerStallDetector .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103b7a9e0(long param_1)

{
  param_1 = param_1 + _DAT_112ff05a8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103b7a9f0; end: 103b7aae3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7a9f0(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff0588);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lVar2 = _DAT_112ff0590;
  *(undefined1 *)(unaff_x20 + _DAT_112ff0590) = 2;
  lVar3 = _DAT_112ff05a8;
  func_0x000107c61614(unaff_x20 + _DAT_112ff05a8,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_1);
  *(undefined1 *)(unaff_x20 + _DAT_112ff05a0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ff0580) = 0xbff0000000000000;
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(unaff_x20 + lVar2) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_112ff0598) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ff0578) = param_3;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b7aae4; end: 103b7ab03;  */

void FUN_103b7aae4(void)

{
  func_0x000107c61168(&PTR_PTR_1129347c0);
  return;
}



/* Entry: 103b7ab04; end: 103b7ac6b;  */

int FUN_103b7ab04(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103b7ab80;
        goto LAB_103b7ab64;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103b7ab64:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103b7ab80:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103b7ac6c; end: 103b7acab;  */

void FUN_103b7ac6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff05d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5aa54;
  func_0x000107c61520(&UNK_10dc5aa54,&UNK_1106da7c0);
  puRam0000000112ff05d8 = puVar1;
  return;
}



/* Entry: 103b7acac; end: 103b7accf;  */

undefined8 FUN_103b7acac(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103b7acd0; end: 103b7ad07;  */

void FUN_103b7acd0(void)

{
  ulong uVar1;
  
  uVar1 = 4;
  func_0x000107c60f0c();
  uRam000000011358eba8 = uVar1 / 1000000;
  return;
}



/* Entry: 103b7ad08; end: 103b7ad47;  */

void FUN_103b7ad08(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c610f8();
  FUN_103b7ad48(param_1,param_2);
  return;
}



/* Entry: 103b7ad48; end: 103b7aef3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7ad48(undefined8 param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  
  func_0x000107c614f0();
  lVar3 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar2 = _DAT_112ff05e0;
  (**(code **)(lVar6 + 0x68))
            (&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar3
            );
  puVar4 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar5 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f1a34c0);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar5);
  (**(code **)(lVar6 + 8))
            (&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff05e8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff05f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ff05f8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ff0600) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ff0608) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ff0610) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff0618) = 0xffffffffffffffff;
  *(undefined8 *)(unaff_x20 + _DAT_112ff0620) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112ff0628) = param_2;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b7aef4; end: 103b7af23; -[_TtC18SCPlaybackTimeline24SCPlaybackTimelineLogger initWithBlizzardLogger:shouldLogToBlizzard:] */

void FUN_103b7aef4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_103b7ad48();
  return;
}



/* Entry: 103b7af24; end: 103b7af5f; -[_TtC18SCPlaybackTimeline24SCPlaybackTimelineLogger setPlaybackSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7af24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff05e8);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 103b7af60; end: 103b7b0ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7af60(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ff05e0);
  puVar2 = &UNK_1106da8a8;
  func_0x000107c613fc(&UNK_1106da8a8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1106da8d0;
  func_0x000107c613fc(&UNK_1106da8d0,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(ulong *)(puVar3 + 0x18) = param_1;
  *(int *)(puVar3 + 0x20) = (int)param_2;
  *(int *)(puVar3 + 0x24) = (int)((ulong)param_2 >> 0x20);
  *(undefined8 *)(puVar3 + 0x28) = param_3;
  pcStack_60 = FUN_103b7b0ac;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1106da8e8;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c4e524(uVar5);
  func_0x000107c60bd0(ppuVar4);
  lVar1 = _DAT_112ff0610;
  if (*(char *)(unaff_x20 + _DAT_112ff0610) == '\x01') {
    uVar5 = 0x11;
    FUN_103b7b1e8(0x11);
    func_0x000103b7b2b0();
    func_0x000107c61170(uVar5);
    func_0x000107c600c0(param_1,param_2,param_3,*(undefined8 *)PTR__kCMTimeZero_110348670,
                        *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8),
                        *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10));
    if ((param_1 & 1) != 0) {
      *(undefined1 *)(unaff_x20 + lVar1) = 0;
    }
  }
  return;
}



/* Entry: 103b7b0ac; end: 103b7b12b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7b0ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    FUN_103b7b12c(uVar4,uVar1,uVar2);
    *(undefined8 *)(lVar3 + _DAT_112ff05f0) = uVar4;
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 103b7b12c; end: 103b7b1cb;  */

long FUN_103b7b12c(double param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  code *pcVar1;
  double dVar2;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c60a3c(&uStack_28);
  dVar2 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
    dVar2 = 0.0;
  }
  if (0x7fefffffffffffff < (ulong)ABS(dVar2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103b7b1c4);
    (*pcVar1)();
  }
  if (dVar2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103b7b1c8);
    (*pcVar1)();
  }
  if (dVar2 < 9.223372036854776e+18) {
    return (long)dVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b7b1cc);
  (*pcVar1)();
}



/* Entry: 103b7b1cc; end: 103b7b1e7;  */

void FUN_103b7b1cc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103b7b1e8; end: 103b7b397;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103b7b1e8(void)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ff05e0);
  func_0x000107c3e204(uVar3);
  puVar1 = PTR_PTR_1126ad938;
  func_0x000107c610f8(PTR_PTR_1126ad938);
  func_0x000107c453e4();
  func_0x000107c5a0f8();
  func_0x000107c3e204(uVar3);
  uVar2 = 4;
  func_0x000107c60f0c();
  if (lRam000000011358eba0 != -1) {
    func_0x000107c61568(0x11358eba0,FUN_103b7acd0);
  }
  if (uVar2 / 1000000 < uRam000000011358eba8) {
    uRam000000011358eba8 = uVar2 / 1000000;
  }
  func_0x000107c54420(puVar1);
  return puVar1;
}



/* Entry: 103b7b398; end: 103b7b3df; -[_TtC18SCPlaybackTimeline24SCPlaybackTimelineLogger updateMediaPositionWithTime:] */

void FUN_103b7b398(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  func_0x000107c61174();
  FUN_103b7af60(uVar1,uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b7b3e0; end: 103b7b41b; -[_TtC18SCPlaybackTimeline24SCPlaybackTimelineLogger onPrepare] */

/* WARNING: Possible PIC construction at 0x000103b7b408: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b7b40c) */

void FUN_103b7b3e0(void)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  FUN_103b7b1e8(0);
  func_0x000103b7b2b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103b7b41c; end: 103b7b4f7; -[_TtC18SCPlaybackTimeline24SCPlaybackTimelineLogger onPlay] */

/* WARNING: Possible PIC construction at 0x000103b7b474: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b7b478) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7b41c(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + _DAT_112ff0608) = 1;
  if (*(long *)(param_1 + _DAT_112ff0618) == 1) {
    return;
  }
  *(undefined8 *)(param_1 + _DAT_112ff0618) = 1;
  func_0x000107c61174();
  uVar1 = 1;
  FUN_103b7b1e8(1);
  func_0x000103b7b2b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103b7b4f8; end: 103b7b51f; -[_TtC18SCPlaybackTimeline24SCPlaybackTimelineLogger onPause] */

void FUN_103b7b4f8(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000103b7b488();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b7b520; end: 103b7b5fb; -[_TtC18SCPlaybackTimeline24SCPlaybackTimelineLogger onResume] */

/* WARNING: Possible PIC construction at 0x000103b7b578: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b7b57c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7b520(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + _DAT_112ff0608) = 1;
  if (*(long *)(param_1 + _DAT_112ff0618) == 3) {
    return;
  }
  *(undefined8 *)(param_1 + _DAT_112ff0618) = 3;
  func_0x000107c61174();
  uVar1 = 3;
  FUN_103b7b1e8(3);
  func_0x000103b7b2b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103b7b5fc; end: 103b7b623; -[_TtC18SCPlaybackTimeline24SCPlaybackTimelineLogger onStop] */

void FUN_103b7b5fc(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000103b7b58c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b7b624; end: 103b7b68f; -[_TtC18SCPlaybackTimeline24SCPlaybackTimelineLogger onMuteWithMuted:] */

/* WARNING: Possible PIC construction at 0x000103b7b67c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b7b680) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7b624(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = 5;
  if (param_3 == 0) {
    lVar1 = 6;
  }
  if (*(long *)(param_1 + _DAT_112ff0618) == lVar1) {
    return;
  }
  *(long *)(param_1 + _DAT_112ff0618) = lVar1;
  func_0x000107c61174();
  FUN_103b7b1e8(lVar1);
  func_0x000103b7b2b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 103b7b690; end: 103b7b767; -[_TtC18SCPlaybackTimeline24SCPlaybackTimelineLogger onSeekTo:toleranceBefore:toleranceAfter:] */

/* WARNING: Possible PIC construction at 0x000103b7b740: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b7b744) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7b690(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar1 = *param_3;
  uVar4 = param_3[1];
  uVar8 = param_3[2];
  uVar2 = *param_4;
  uVar5 = param_4[1];
  uVar9 = param_4[2];
  uVar3 = *param_5;
  uVar6 = param_5[1];
  uVar10 = param_5[2];
  func_0x000107c61174();
  uVar7 = 7;
  FUN_103b7b1e8(7);
  FUN_103b7b12c(uVar1,uVar4,uVar8);
  func_0x000107c58da0(uVar7);
  FUN_103b7bcec(uVar2,uVar5,uVar9,uVar3,uVar6,uVar10);
  func_0x000107c58da4(uVar7);
  *(undefined8 *)(param_1 + _DAT_112ff0618) = 7;
  func_0x000103b7b2b0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 103b7b768; end: 103b7b7bf; -[_TtC18SCPlaybackTimeline24SCPlaybackTimelineLogger onBufferingStarted] */

/* WARNING: Possible PIC construction at 0x000103b7b7ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b7b7b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7b768(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + _DAT_112ff0600) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_112ff0600) = 1;
  func_0x000107c61174();
  uVar1 = 8;
  FUN_103b7b1e8(8);
  func_0x000103b7b2b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103b7b7c0; end: 103b7b817; -[_TtC18SCPlaybackTimeline24SCPlaybackTimelineLogger onBufferingCompleted] */

/* WARNING: Possible PIC construction at 0x000103b7b800: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b7b804) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7b7c0(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + _DAT_112ff0600) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_112ff0600) = 0;
    func_0x000107c61174();
    uVar1 = 9;
    FUN_103b7b1e8(9);
    func_0x000103b7b2b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 103b7b818; end: 103b7b86b; -[_TtC18SCPlaybackTimeline24SCPlaybackTimelineLogger onPlaybackRateChanged:] */

/* WARNING: Possible PIC construction at 0x000103b7b854: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b7b858) */

void FUN_103b7b818(float param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = 0x12;
  FUN_103b7b1e8(0x12);
  func_0x000107c574dc((double)param_1);
  func_0x000103b7b2b0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103b7b86c; end: 103b7b8bf; -[_TtC18SCPlaybackTimeline24SCPlaybackTimelineLogger onPlayerTimeControlStatusChanged:] */

/* WARNING: Possible PIC construction at 0x000103b7b8a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b7b8ac) */

void FUN_103b7b86c(void)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = 0x13;
  FUN_103b7b1e8(0x13);
  func_0x000107c57518();
  func_0x000103b7b2b0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103b7b8c0; end: 103b7b8fb; -[_TtC18SCPlaybackTimeline24SCPlaybackTimelineLogger onPlaybackStarted] */

/* WARNING: Possible PIC construction at 0x000103b7b8e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b7b8ec) */

void FUN_103b7b8c0(void)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = 10;
  FUN_103b7b1e8(10);
  func_0x000103b7b2b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103b7b8fc; end: 103b7b937; -[_TtC18SCPlaybackTimeline24SCPlaybackTimelineLogger onPlaybackStopped] */

/* WARNING: Possible PIC construction at 0x000103b7b924: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b7b928) */

void FUN_103b7b8fc(void)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = 0xb;
  FUN_103b7b1e8(0xb);
  func_0x000103b7b2b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103b7b938; end: 103b7b98b; -[_TtC18SCPlaybackTimeline24SCPlaybackTimelineLogger onErrorWith:] */

/* WARNING: Possible PIC construction at 0x000103b7b974: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b7b978) */

void FUN_103b7b938(void)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = 0xd;
  FUN_103b7b1e8(0xd);
  func_0x000107c54658();
  func_0x000103b7b2b0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103b7b98c; end: 103b7b9d3; -[_TtC18SCPlaybackTimeline24SCPlaybackTimelineLogger onReset] */

/* WARNING: Possible PIC construction at 0x000103b7b9c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b7b9c4) */

void FUN_103b7b98c(void)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = 0xe;
  FUN_103b7b1e8(0xe);
  func_0x000107c554b8();
  func_0x000103b7b2b0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103b7b9d4; end: 103b7bb67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7b9d4(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + _DAT_112ff05e8);
    if (puVar1[1] == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      puVar2 = PTR_PTR_1126ad930;
      func_0x000107c610f8(PTR_PTR_1126ad930);
      func_0x000107c453e4();
      lVar3 = puVar1[1];
      if (lVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *puVar1;
        func_0x000107c61434(lVar3);
        func_0x000107c5fadc(uVar4,lVar3);
        func_0x000107c6142c(lVar3);
      }
      func_0x000107c574e0(puVar2);
      func_0x000107c61170(uVar4);
      lVar3 = puVar1[1];
      if (lVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *puVar1;
        func_0x000107c61434(lVar3);
        func_0x000107c5fadc(uVar4,lVar3);
        func_0x000107c6142c(lVar3);
      }
      func_0x000107c547f8(puVar2);
      func_0x000107c61170(uVar4);
      func_0x000107c56ba0(puVar2);
      if (*(char *)(param_1 + _DAT_112ff0628) == '\x01') {
        lVar3 = *(long *)(param_1 + _DAT_112ff0620);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar3 != 0) {
          func_0x000107c4bfb0();
          func_0x000107c615e8(lVar3);
        }
      }
      func_0x000107c61170(puVar2);
      uVar4 = puVar1[1];
      *puVar1 = 0;
      puVar1[1] = 0;
      func_0x000107c61170(param_1);
      func_0x000107c6142c(uVar4);
    }
  }
  return;
}



/* Entry: 103b7bb68; end: 103b7bc3b; -[_TtC18SCPlaybackTimeline24SCPlaybackTimelineLogger onEndOfSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7bb68(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112ff05e0);
  puVar1 = &UNK_1106da8a8;
  func_0x000107c613fc(&UNK_1106da8a8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  uStack_40 = 0x103b7bf80;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1106da930;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103b7bc3c; end: 103b7bc6f;  */

void FUN_103b7bc3c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b7bc70; end: 103b7bcbb; -[_TtC18SCPlaybackTimeline24SCPlaybackTimelineLogger .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b7bc8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b7bc90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7bc70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff05e0));
  return;
}



/* Entry: 103b7bcbc; end: 103b7bceb;  */

bool FUN_103b7bcbc(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103b7bcec; end: 103b7bd4b;  */

undefined8
FUN_103b7bcec(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_103b7b12c();
  FUN_103b7b12c(param_4,param_5,param_6);
  uVar2 = 3;
  if (param_4 < 0x3c) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (0x3b < param_4) {
    uVar1 = 2;
  }
  if (0x3b < param_1) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 103b7bd4c; end: 103b7bd53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7bd4c(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    puVar1 = (undefined8 *)(lVar2 + _DAT_112ff05e8);
    if (puVar1[1] == 0) {
      func_0x000107c61170(lVar2);
    }
    else {
      puVar3 = PTR_PTR_1126ad930;
      func_0x000107c610f8(PTR_PTR_1126ad930);
      func_0x000107c453e4();
      lVar4 = puVar1[1];
      if (lVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *puVar1;
        func_0x000107c61434(lVar4);
        func_0x000107c5fadc(uVar5,lVar4);
        func_0x000107c6142c(lVar4);
      }
      func_0x000107c574e0(puVar3);
      func_0x000107c61170(uVar5);
      lVar4 = puVar1[1];
      if (lVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *puVar1;
        func_0x000107c61434(lVar4);
        func_0x000107c5fadc(uVar5,lVar4);
        func_0x000107c6142c(lVar4);
      }
      func_0x000107c547f8(puVar3);
      func_0x000107c61170(uVar5);
      func_0x000107c56ba0(puVar3);
      if (*(char *)(lVar2 + _DAT_112ff0628) == '\x01') {
        lVar4 = *(long *)(lVar2 + _DAT_112ff0620);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar4 != 0) {
          func_0x000107c4bfb0();
          func_0x000107c615e8(lVar4);
        }
      }
      func_0x000107c61170(puVar3);
      uVar5 = puVar1[1];
      *puVar1 = 0;
      puVar1[1] = 0;
      func_0x000107c61170(lVar2);
      func_0x000107c6142c(uVar5);
    }
  }
  return;
}



/* Entry: 103b7bd54; end: 103b7bd73;  */

void FUN_103b7bd54(void)

{
  func_0x000107c61168(&PTR_PTR_1129348b0);
  return;
}



/* Entry: 103b7bd74; end: 103b7bd87;  */

void FUN_103b7bd74(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1106da920;
  if (lRam0000000112ff0658 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112ff0658 = param_1;
  }
  return;
}



/* Entry: 103b7bd88; end: 103b7bf2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7bd88(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + _DAT_112ff05e8 + 8) != 0) {
      func_0x000107c3e208(*(undefined8 *)(lVar2 + _DAT_112ff05e0));
      if (SCARRY8(*(long *)(lVar2 + _DAT_112ff05f8),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103b7bf2c);
        (*pcVar1)();
      }
      *(long *)(lVar2 + _DAT_112ff05f8) = *(long *)(lVar2 + _DAT_112ff05f8) + 1;
      func_0x000107c56468(uVar3);
      lVar5 = ((undefined8 *)(lVar2 + _DAT_112ff05e8))[1];
      if (lVar5 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(lVar2 + _DAT_112ff05e8);
        func_0x000107c61434(lVar5);
        func_0x000107c5fadc(uVar7,lVar5);
        func_0x000107c6142c(lVar5);
      }
      func_0x000107c574e0(uVar3);
      func_0x000107c61170(uVar7);
      func_0x000107c546d0(uVar3);
      if (*(char *)(lVar2 + _DAT_112ff0628) == '\x01') {
        uVar6 = *(ulong *)(lVar2 + _DAT_112ff0620);
        func_0x000107c61174(uVar3);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (uVar6 != 0) {
          uVar4 = uVar6;
          func_0x000107c61150();
          if ((uVar4 & 1) != 0) {
            func_0x000107c4bf9c(uVar6);
            func_0x000107c61170(lVar2);
            func_0x000107c61170(uVar3);
            func_0x000107c615e8(uVar6);
            return;
          }
          func_0x000107c615e8(uVar6);
        }
        func_0x000107c61170(uVar3);
      }
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 103b7bf2c; end: 103b7bf6f;  */

void FUN_103b7bf2c(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 103b7bf70; end: 103b7bf83;  */

void FUN_103b7bf70(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103b7bf84; end: 103b7bfcb; -[_TtC27SCOperaLoadingIndicatorView25OperaLoadingIndicatorView initWithFrame:] */

void FUN_103b7bf84(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCOperaLoadingIndicatorView/OperaLoadingIndicatorView.swift",0x3b,2,7,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b7bfcc);
  (*pcVar1)();
}



/* Entry: 103b7bfcc; end: 103b7c013; -[_TtC27SCOperaLoadingIndicatorView25OperaLoadingIndicatorView initWithCoder:] */

void FUN_103b7bfcc(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCOperaLoadingIndicatorView/OperaLoadingIndicatorView.swift",0x3b,2,0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b7c014);
  (*pcVar1)();
}



/* Entry: 103b7c014; end: 103b7c01b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103b7c014(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  
  puVar2 = auStack_50;
  func_0x000107c610f8();
  puVar1 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
  func_0x000107c610f8();
  func_0x000107c45558();
  *(undefined **)(unaff_x20 + _DAT_112ff0660) = puVar1;
  func_0x000107c438d4();
  func_0x000107c61154(auStack_50,PTR_s_initWithFrame__1125e2948);
  uVar3 = *(undefined8 *)(puVar2 + _DAT_112ff0660);
  func_0x000107c61174();
  func_0x000107c53598(uVar3);
  func_0x000107c3d89c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 103b7c01c; end: 103b7c03b;  */

void FUN_103b7c01c(void)

{
  func_0x000107c61168(&PTR_PTR_1129349b8);
  return;
}



/* Entry: 103b7c03c; end: 103b7c06b; -[_TtC27SCOperaLoadingIndicatorView25OperaLoadingIndicatorView initWithColorStyle:size:] */

void FUN_103b7c03c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_103b7c128();
  return;
}



/* Entry: 103b7c06c; end: 103b7c127;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103b7c06c(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  
  puVar2 = auStack_50;
  func_0x000107c610f8();
  puVar1 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
  func_0x000107c610f8();
  func_0x000107c45558();
  *(undefined **)(unaff_x20 + _DAT_112ff0660) = puVar1;
  func_0x000107c438d4();
  func_0x000107c61154(auStack_50,PTR_s_initWithFrame__1125e2948);
  uVar3 = *(undefined8 *)(puVar2 + _DAT_112ff0660);
  func_0x000107c61174();
  func_0x000107c53598(uVar3);
  func_0x000107c3d89c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 103b7c128; end: 103b7c20b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103b7c128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar2 = &stack0xffffffffffffff90;
  puVar1 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
  func_0x000107c610f8();
  func_0x000107c45558();
  *(undefined **)(unaff_x20 + _DAT_112ff0660) = puVar1;
  func_0x000107c438d4();
  FUN_103b7c01c();
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff90,
                      PTR_s_initWithFrame__1125e2948);
  uVar3 = *(undefined8 *)(puVar2 + _DAT_112ff0660);
  func_0x000107c61174();
  func_0x000107c53598(uVar3);
  func_0x000107c3d89c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_5);
  return puVar2;
}



/* Entry: 103b7c20c; end: 103b7c21b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7c20c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + _DAT_112ff0660),PTR_s_startAnimating_112671118);
  return;
}



/* Entry: 103b7c21c; end: 103b7c23b; -[_TtC27SCOperaLoadingIndicatorView25OperaLoadingIndicatorView startAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7c21c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112ff0660),PTR_s_startAnimating_112671118);
  return;
}



/* Entry: 103b7c23c; end: 103b7c24b; -[_TtC27SCOperaLoadingIndicatorView25OperaLoadingIndicatorView stopAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7c23c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112ff0660),PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 103b7c24c; end: 103b7c25b; -[_TtC27SCOperaLoadingIndicatorView25OperaLoadingIndicatorView hidesWhenStopped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7c24c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe2e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112ff0660),PTR_s_hidesWhenStopped_1125d6560);
  return;
}



/* Entry: 103b7c25c; end: 103b7c27b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7c25c(void)

{
  long unaff_x20;
  
  func_0x000107c44e5c(*(undefined8 *)(unaff_x20 + _DAT_112ff0660));
  return;
}



/* Entry: 103b7c27c; end: 103b7c2a3; -[_TtC27SCOperaLoadingIndicatorView25OperaLoadingIndicatorView setHidesWhenStopped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b7c27c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a8570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112ff0660),PTR_s_setHidesWhenStopped__112647b78);
  return;
}



/* Entry: 103b7c2a4; end: 103b7c2e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b7c2a4(long *param_1)

{
  long lVar1;
  undefined1 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = _DAT_112ff0660;
  *param_1 = unaff_x20;
  param_1[1] = lVar1;
  uVar2 = (undefined1)*(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c44e5c();
  *(undefined1 *)(param_1 + 2) = uVar2;
  auVar3._8_8_ = param_1 + 2;
  auVar3._0_8_ = FUN_103b7c2e4;
  return auVar3;
}



/* Entry: 103b7c2e4; end: 103b7c2f3;  */

void FUN_103b7c2e4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a8570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*param_1 + param_1[1]),PTR_s_setHidesWhenStopped__112647b78,
             (char)param_1[2]);
  return;
}


