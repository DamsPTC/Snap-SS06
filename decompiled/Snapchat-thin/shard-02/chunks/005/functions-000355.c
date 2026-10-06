/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101e5f6a0; end: 101e5f6b7; -[_TtC30SingleSnapPlayerImplementationP33_109CAD838331A389D324AB4C99E12FC830SingleSnapPlayerSeekTapGesture initWithTarget:action:] */

void FUN_101e5f6a0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  FUN_101e5f6d8(&uStack_50,param_4,FUN_101e5f6b8);
  return;
}



/* Entry: 101e5f6b8; end: 101e5f6d7;  */

void FUN_101e5f6b8(void)

{
  func_0x000107c61168(&PTR_PTR_112806340);
  return;
}



/* Entry: 101e5f6d8; end: 101e5f7f3;  */

undefined1 * FUN_101e5f6d8(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined1 *puVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    FUN_101e60954(auStack_80,lStack_68);
    lVar3 = *(long *)(lStack_68 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
    puVar1 = auStack_80 + (-0x10 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(lVar3 + 0x10))(puVar1);
    puVar2 = puVar1;
    func_0x000107c605b0(puVar1,lStack_68);
    (**(code **)(lVar3 + 8))(puVar1,lStack_68);
    func_0x000100183ab8(auStack_80);
  }
  (*param_3)();
  puVar1 = &stack0xffffffffffffff70;
  func_0x000107c61154(puVar1,PTR_s_initWithTarget_action__1125f1c48,puVar2,param_2);
  func_0x000107c615e8(puVar2);
  func_0x00010006e7f4(param_1);
  return puVar1;
}



/* Entry: 101e5f7f4; end: 101e5f7ff; -[_TtC30SingleSnapPlayerImplementationP33_109CAD838331A389D324AB4C99E12FC830SingleSnapPlayerSeekPanGesture initWithTarget:action:] */

void FUN_101e5f7f4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  FUN_101e5f6d8(&uStack_50,param_4,0x101e5f8b8);
  return;
}



/* Entry: 101e5f800; end: 101e5f873;  */

void FUN_101e5f800(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  FUN_101e5f6d8(&uStack_50,param_4,param_5);
  return;
}



/* Entry: 101e5f874; end: 101e5f87f;  */

void FUN_101e5f874(void)

{
  (*(code *)0x101e5f8b8)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101e5f880; end: 101e5f8d7;  */

void FUN_101e5f880(code *param_1)

{
  (*param_1)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101e5f8d8; end: 101e5fa27;  */

/* WARNING: Possible PIC construction at 0x000101e5f938: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e5f8d8(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = 0;
  FUN_101e5f6b8();
  func_0x000107c610f8();
  func_0x000107c48c2c();
  func_0x000107c53fcc();
  lVar2 = unaff_x20 + _DAT_112e33218;
  func_0x000107c61618();
  if (lVar2 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112e33208);
    *(undefined8 *)(unaff_x20 + _DAT_112e33208) = uVar1;
  }
  else {
    func_0x000107c3d6fc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101e5fa28; end: 101e5fb4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e5fa28(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  long lStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  
  lVar3 = unaff_x20 + _DAT_112e33240;
  dVar9 = param_1;
  func_0x000107c61618();
  if (lVar3 == 0) {
    lVar6 = *(long *)PTR__kCMTimeZero_110348670;
    uVar4 = (ulong)*(uint *)(PTR__kCMTimeZero_110348670 + 8);
    uVar8 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
    param_4 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  }
  else {
    plVar1 = (long *)(*(long *)(lVar3 + 0xb8) + _DAT_112e33588);
    lVar5 = *plVar1;
    if (lVar5 == 0) {
      lVar6 = *(long *)PTR__kCMTimeZero_110348670;
      uVar4 = (ulong)*(uint *)(PTR__kCMTimeZero_110348670 + 8);
      uVar8 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
      param_4 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      func_0x000107c615e8();
    }
    else {
      lVar7 = plVar1[1];
      lVar6 = lVar5;
      func_0x000107c614f0();
      uVar4 = *(ulong *)(lVar7 + 8);
      lStack_68 = lVar5;
      (**(code **)(uVar4 + 0x10))();
      func_0x000107c615e8(lVar3);
      uVar8 = (undefined4)(uVar4 >> 0x20);
    }
  }
  uStack_60 = (undefined4)uVar4;
  lStack_68 = lVar6;
  uStack_5c = uVar8;
  uStack_58 = param_4;
  func_0x000107c60a3c(&lStack_68);
  bVar2 = true;
  if ((dVar9 != 0.0) && (bVar2 = false, !NAN(param_1))) {
    bVar2 = param_1 == 0.0;
  }
  dVar10 = 0.0;
  if (!bVar2) {
    dVar10 = param_1 / dVar9;
  }
  if ((ulong)ABS(dVar10) < 0x7ff0000000000000) {
    *(double *)(unaff_x20 + _DAT_112e33228) = dVar10;
  }
  return;
}



/* Entry: 101e5fb50; end: 101e5fc1b;  */

/* WARNING: Possible PIC construction at 0x000101e5fbec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e5fbf0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e5fb50(double param_1,undefined8 param_2,double param_3)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112e33208);
  if (lVar2 != 0) {
    lVar1 = unaff_x20 + _DAT_112e33218;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c61174(lVar2);
      func_0x000107c4b8b8();
      func_0x000107c3ec60(lVar1);
      lVar1 = unaff_x20 + _DAT_112e33238;
      func_0x000107c61618();
      if (lVar1 != 0) {
        FUN_101e68044(0.2 < param_1 / param_3);
        func_0x000107c615e8(lVar1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar2);
      return;
    }
  }
  return;
}



/* Entry: 101e5fc1c; end: 101e5fc43; -[_TtC30SingleSnapPlayerImplementation37SingleSnapPlayerSeekGestureController handleTap] */

void FUN_101e5fc1c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101e5fb50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101e5fc44; end: 101e5feb3;  */

/* WARNING: Possible PIC construction at 0x000101e5fd54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e5fe88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e5fd58) */
/* WARNING: Removing unreachable block (ram,0x000101e5fe8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e5fc44(double param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long extraout_x8;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long lStack_68;
  
  lVar2 = 0;
  func_0x000103b31818();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar10 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar9 = *(long *)(unaff_x20 + _DAT_112e33210);
  if (lVar9 == 0) {
    return;
  }
  lVar3 = unaff_x20 + _DAT_112e33218;
  func_0x000107c61618();
  if (lVar3 == 0) {
    return;
  }
  func_0x000107c61174();
  lVar7 = lVar3;
  func_0x000107c4b8b8();
  dVar13 = param_1 + -60.0;
  func_0x000107c3ec60(lVar3);
  func_0x000107c609cc();
  dVar12 = param_1 + -60.0;
  if (dVar13 <= param_1 + -60.0) {
    dVar12 = dVar13;
  }
  dVar13 = dVar12;
  if (dVar12 < 0.0) {
    dVar13 = 0.0;
  }
  lVar3 = lVar9;
  func_0x000107c5bcc0();
  if (lVar3 < 3) {
    if (lVar3 == 0) goto code_r0x000107c61170;
    if (lVar3 == 1) {
      lVar3 = unaff_x20 + _DAT_112e33238;
      func_0x000107c61618();
      if (lVar3 != 0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0xb8) + _DAT_112e33588);
        lVar8 = *plVar1;
        if (lVar8 == 0) {
          lVar5 = *(long *)PTR__kCMTimeZero_110348670;
          uVar6 = (ulong)*(uint *)(PTR__kCMTimeZero_110348670 + 8);
          uStack_6c = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
          lVar7 = *(long *)(PTR__kCMTimeZero_110348670 + 0x10);
        }
        else {
          lVar11 = plVar1[1];
          lVar5 = lVar8;
          func_0x000107c614f0();
          uVar6 = *(ulong *)(lVar11 + 0x20);
          lStack_78 = lVar8;
          (**(code **)(uVar6 + 0x10))();
          uStack_6c = (undefined4)(uVar6 >> 0x20);
        }
        uStack_70 = (undefined4)uVar6;
        lStack_78 = lVar5;
        lStack_68 = lVar7;
        func_0x000107c60a3c(&lStack_78);
        func_0x000107c61428(lVar3 + 200,&lStack_78,1,0);
        *(double *)(lVar3 + 0xf0) = dVar12;
        FUN_101e60954(lVar3 + 0x10,*(undefined8 *)(lVar3 + 0x28));
        func_0x000107c6159c(puVar10,lVar2,9);
        uVar4 = 0;
        FUN_101e4c630(0);
        (*(code *)(undefined *)0x101e4c60c)(puVar10,uVar4,&PTR_DAT_11048e450);
        func_0x000101e60918(puVar10);
        func_0x000107c615e8(lVar3);
      }
      FUN_101e5feb4(dVar13,0);
      goto code_r0x000107c61170;
    }
    if (lVar3 != 2) goto code_r0x000107c61170;
    uVar4 = 0;
  }
  else {
    if (2 < lVar3 - 3U) goto code_r0x000107c61170;
    uVar4 = 1;
  }
  FUN_101e5feb4(dVar13,uVar4);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar9);
  return;
}



/* Entry: 101e5feb4; end: 101e601db;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e5feb4(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long extraout_x8;
  double *pdVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  double dVar14;
  double adStack_90 [2];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  
  lVar3 = 0;
  dVar14 = param_1;
  func_0x000103b31818();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar5 = _DAT_112e33240;
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pdVar8 = (double *)((long)adStack_90 + lVar2);
  lVar4 = unaff_x20 + _DAT_112e33240;
  func_0x000107c61618();
  if (lVar4 == 0) {
    lVar10 = *(long *)PTR__kCMTimeZero_110348670;
    uVar6 = (ulong)*(uint *)(PTR__kCMTimeZero_110348670 + 8);
    uVar13 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
    uVar12 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    uVar7 = param_4;
  }
  else {
    plVar1 = (long *)(*(long *)(lVar4 + 0xb8) + _DAT_112e33588);
    lVar9 = *plVar1;
    if (lVar9 == 0) {
      lVar10 = *(long *)PTR__kCMTimeZero_110348670;
      uVar6 = (ulong)*(uint *)(PTR__kCMTimeZero_110348670 + 8);
      uVar13 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
      uVar12 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      func_0x000107c615e8();
      uVar7 = param_4;
    }
    else {
      lVar11 = plVar1[1];
      lVar10 = lVar9;
      func_0x000107c614f0();
      uVar6 = *(ulong *)(lVar11 + 0x20);
      adStack_90[1] = (double)lVar9;
      (**(code **)(uVar6 + 0x10))();
      uVar7 = param_4;
      func_0x000107c615e8(lVar4);
      uVar13 = (undefined4)(uVar6 >> 0x20);
      uVar12 = param_4;
    }
  }
  uStack_80 = (undefined4)uVar6;
  adStack_90[1] = (double)lVar10;
  uStack_7c = uVar13;
  uStack_78 = uVar12;
  func_0x000107c60a3c(adStack_90 + 1);
  if (NAN(dVar14)) {
    return;
  }
  lVar4 = unaff_x20 + _DAT_112e33218;
  func_0x000107c61618();
  if (lVar4 == 0) {
    return;
  }
  func_0x000107c3ec60();
  func_0x000107c609cc();
  param_1 = param_1 / (dVar14 + -120.0);
  dVar14 = (double)NEON_fminnm(param_1,0x3fefae147ae147ae);
  lVar5 = unaff_x20 + lVar5;
  func_0x000107c61618();
  if (lVar5 == 0) {
    lVar10 = *(long *)PTR__kCMTimeZero_110348670;
    uVar6 = (ulong)*(uint *)(PTR__kCMTimeZero_110348670 + 8);
    uVar13 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
    uVar7 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  }
  else {
    plVar1 = (long *)(*(long *)(lVar5 + 0xb8) + _DAT_112e33588);
    lVar9 = *plVar1;
    if (lVar9 == 0) {
      lVar10 = *(long *)PTR__kCMTimeZero_110348670;
      uVar6 = (ulong)*(uint *)(PTR__kCMTimeZero_110348670 + 8);
      uVar13 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
      uVar7 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      func_0x000107c615e8();
    }
    else {
      lVar11 = plVar1[1];
      lVar10 = lVar9;
      func_0x000107c614f0();
      uVar6 = *(ulong *)(lVar11 + 8);
      adStack_90[1] = (double)lVar9;
      (**(code **)(uVar6 + 0x10))();
      func_0x000107c615e8(lVar5);
      uVar13 = (undefined4)(uVar6 >> 0x20);
    }
  }
  uStack_80 = (undefined4)uVar6;
  adStack_90[1] = (double)lVar10;
  uStack_7c = uVar13;
  uStack_78 = uVar7;
  func_0x000107c60a3c(adStack_90 + 1);
  dVar14 = dVar14 * param_1;
  if ((param_2 & 1) == 0) {
    lVar5 = unaff_x20 + _DAT_112e33238;
    func_0x000107c61618();
    if (lVar5 == 0) goto LAB_101e601b0;
    FUN_101e60954(lVar5 + 0x10,*(undefined8 *)(lVar5 + 0x28));
    *pdVar8 = dVar14;
    uVar7 = 2;
  }
  else {
    FUN_101e5fa28(dVar14);
    lVar5 = unaff_x20 + _DAT_112e33238;
    func_0x000107c61618();
    if (lVar5 == 0) {
LAB_101e601b0:
      func_0x000107c61170(lVar4);
      return;
    }
    func_0x000107c61428(lVar5 + 200,adStack_90 + 1,0,0);
    FUN_101e66d74(dVar14,*(undefined8 *)(lVar5 + 0xf0),3);
    FUN_101e60954(lVar5 + 0x10,*(undefined8 *)(lVar5 + 0x28));
    *pdVar8 = *(double *)(lVar5 + 0xf0);
    *(double *)((long)adStack_90 + lVar2 + 8U) = dVar14;
    uVar7 = 3;
  }
  func_0x000107c6159c(pdVar8,lVar3,uVar7);
  uVar7 = 0;
  FUN_101e4c630(0);
  (*(code *)(undefined *)0x101e4c60c)(pdVar8,uVar7,&PTR_DAT_11048e450);
  func_0x000107c615e8(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000101e60918(pdVar8);
  return;
}



/* Entry: 101e601dc; end: 101e60203; -[_TtC30SingleSnapPlayerImplementation37SingleSnapPlayerSeekGestureController handlePan] */

void FUN_101e601dc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101e5fc44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101e60204; end: 101e60263; -[_TtC30SingleSnapPlayerImplementation37SingleSnapPlayerSeekGestureController init] */

void FUN_101e60204(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SingleSnapPlayerImplementation.SingleSnapPlayerSeekGestureController",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e60230);
  (*pcVar1)();
}



/* Entry: 101e60264; end: 101e602cb; -[_TtC30SingleSnapPlayerImplementation37SingleSnapPlayerSeekGestureController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101e602b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e602b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101e60264(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e33208));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e33210));
  func_0x000107c61610(param_1 + _DAT_112e33218);
  param_1 = param_1 + _DAT_112e33238;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101e602cc; end: 101e602eb;  */

void FUN_101e602cc(void)

{
  func_0x000107c61168(&PTR_PTR_1128064a0);
  return;
}



/* Entry: 101e602ec; end: 101e602f3; -[_TtC30SingleSnapPlayerImplementation37SingleSnapPlayerSeekGestureController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_101e602ec(void)

{
  return 0;
}



/* Entry: 101e602f4; end: 101e60433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_101e602f4(undefined8 param_1,double param_2,undefined8 param_3,double param_4,ulong param_5
                  )

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112e33210);
  if (lVar4 != 0) {
    lVar1 = unaff_x20 + _DAT_112e33218;
    func_0x000107c61618();
    if (lVar1 != 0) {
      FUN_101e608d8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      func_0x000107c61174(lVar4);
      uVar2 = param_5;
      func_0x000107c60118(param_5,lVar4);
      if ((uVar2 & 1) != 0) {
        uVar2 = param_5;
        func_0x000107c5de64(param_5);
        func_0x000107c61180();
        func_0x000107c4b8b8(param_5);
        func_0x000107c61170(uVar2);
        func_0x000107c3ec60(lVar1);
        if (param_2 < param_4 - *(double *)(unaff_x20 + _DAT_112e33230)) {
          func_0x000107c61170(lVar4);
          func_0x000107c61170(lVar1);
          return false;
        }
        lVar3 = lVar4;
        func_0x000107c5c490(lVar4);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar4);
        return (lVar3 - 1U & 0xfffffffffffffffd) == 0;
      }
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar1);
    }
  }
  return true;
}



/* Entry: 101e60434; end: 101e6048f; -[_TtC30SingleSnapPlayerImplementation37SingleSnapPlayerSeekGestureController gestureRecognizerShouldBegin:] */

uint FUN_101e60434(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101e602f4(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101e60490; end: 101e605eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101e60490(ulong param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long unaff_x20;
  long lVar5;
  
  lVar5 = *(long *)(unaff_x20 + _DAT_112e33208);
  if (lVar5 != 0) {
    FUN_101e608d8(0,0x112daba28,&PTR__OBJC_CLASS___UIGestureRecognizer_1126cb6a0);
    uVar2 = param_1;
    func_0x000107c61174();
    func_0x000107c61174(lVar5);
    uVar3 = uVar2;
    func_0x000107c60118(uVar2,lVar5);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(lVar5);
    if ((uVar3 & 1) != 0) {
      puVar4 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
      func_0x000107c61168(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
      lVar5 = param_2;
      func_0x000107c6148c(param_2,puVar4);
      if (lVar5 != 0) {
        puVar4 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
        func_0x000107c61168(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
        func_0x000107c6148c(param_2,puVar4);
        if (param_2 != 0) {
          return 1;
        }
      }
    }
  }
  lVar5 = *(long *)(unaff_x20 + _DAT_112e33210);
  if (lVar5 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_101e608d8(0,0x112daba28,&PTR__OBJC_CLASS___UIGestureRecognizer_1126cb6a0);
    func_0x000107c61174(param_1);
    func_0x000107c61174(lVar5);
    uVar2 = param_1;
    func_0x000107c60118(param_1,lVar5);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar5);
    uVar1 = (uint)uVar2 & 1;
  }
  return uVar1;
}



/* Entry: 101e605ec; end: 101e60663; -[_TtC30SingleSnapPlayerImplementation37SingleSnapPlayerSeekGestureController gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

uint FUN_101e605ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101e60490(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101e60664; end: 101e606d7; -[_TtC30SingleSnapPlayerImplementation37SingleSnapPlayerSeekGestureController gestureRecognizer:shouldRequireFailureOfGestureRecognizer:] */

uint FUN_101e60664(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x000101e607bc(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101e606d8; end: 101e608d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e606d8(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112e33208) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e33210) = 0;
  lVar2 = _DAT_112e33218;
  func_0x000107c61614(unaff_x20 + _DAT_112e33218,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e33228) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e33230) = 0;
  lVar1 = unaff_x20 + _DAT_112e33238;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  lVar1 = unaff_x20 + _DAT_112e33240;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  *(undefined1 *)(unaff_x20 + _DAT_112e33220) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101e608d8; end: 101e60953;  */

void FUN_101e608d8(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 101e60954; end: 101e60aa7;  */

long * FUN_101e60954(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 101e60aa8; end: 101e60aeb;  */

void FUN_101e60aa8(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e60aec; end: 101e60b57;  */

void FUN_101e60aec(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61610(unaff_x20 + 0x18);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e60b58; end: 101e6126f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e60b58(undefined8 param_1)

{
  ulong *puVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  func_0x000107c5a050();
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar3 = _DAT_112e333d8;
  func_0x000107c61428(unaff_x20 + _DAT_112e333d8,auStack_90,1,0);
  uVar14 = *(undefined8 *)(unaff_x20 + lVar3);
  func_0x000100847984(0);
  uVar5 = uVar14;
  func_0x000107c61434(uVar14);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar14);
  func_0x000107c413a0(puVar4);
  func_0x000107c61170(uVar5);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar3);
  *(undefined **)(unaff_x20 + lVar3) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c6142c(uVar5);
  lVar6 = unaff_x20;
  func_0x000107c5e308();
  func_0x000107c61180();
  uVar5 = param_1;
  func_0x000107c5e308(param_1);
  func_0x000107c61180();
  lVar7 = lVar6;
  func_0x000107c402ac(0x3feccccccccccccd);
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61428(unaff_x20 + lVar3,auStack_a8,0x21,0);
  func_0x000107c61174();
  FUN_101e61a00();
  uVar11 = *(ulong *)(unaff_x20 + lVar3);
  uVar12 = uVar11 & 0xffffffffffffff8;
  uVar13 = *(ulong *)(uVar12 + 0x10);
  if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar13) {
    uVar11 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
    func_0x0001011d8f3c(uVar11,uVar13 + 1,1);
    uVar12 = uVar11 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar12 + 0x10) = uVar13 + 1;
  *(long *)(uVar12 + uVar13 * 8 + 0x20) = lVar7;
  *(ulong *)(unaff_x20 + lVar3) = uVar11;
  puVar8 = auStack_a8;
  func_0x000107c614a8();
  puVar1 = (ulong *)(unaff_x20 + _DAT_112e333f0);
  uVar13 = *puVar1;
  bVar2 = (byte)puVar1[2];
  lVar6 = unaff_x20;
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      func_0x0001008478a8();
      func_0x000107c61534();
      *(undefined8 *)(puVar8 + 0x18) = 5;
      *(undefined8 *)(puVar8 + 0x10) = 2;
      lVar9 = unaff_x20;
      func_0x000107c3f75c();
      func_0x000107c61180();
      uVar5 = param_1;
      func_0x000107c3f75c(param_1);
      func_0x000107c61180();
      lVar10 = lVar9;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar9);
      func_0x000107c61170(uVar5);
      *(long *)(puVar8 + 0x20) = lVar10;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      func_0x000107c515ac(param_1);
      func_0x000107c61180();
      uVar5 = param_1;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      lVar9 = lVar6;
      func_0x000107c40284(uVar13 ^ 0x8000000000000000);
    }
    else {
      func_0x0001008478a8();
      func_0x000107c61534();
      *(undefined8 *)(puVar8 + 0x18) = 5;
      *(undefined8 *)(puVar8 + 0x10) = 2;
      lVar9 = unaff_x20;
      func_0x000107c3f75c();
      func_0x000107c61180();
      uVar5 = param_1;
      func_0x000107c3f75c(param_1);
      func_0x000107c61180();
      lVar10 = lVar9;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar9);
      func_0x000107c61170(uVar5);
      *(long *)(puVar8 + 0x20) = lVar10;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      func_0x000107c515ac(param_1);
      func_0x000107c61180();
      uVar5 = param_1;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      lVar9 = lVar6;
      func_0x000107c40284(uVar13);
    }
  }
  else {
    uVar11 = puVar1[1];
    if (bVar2 == 2) {
      func_0x0001008478a8();
      func_0x000107c61534();
      *(undefined8 *)(puVar8 + 0x18) = 5;
      *(undefined8 *)(puVar8 + 0x10) = 2;
      lVar9 = unaff_x20;
      func_0x000107c3f75c();
      func_0x000107c61180();
      uVar5 = param_1;
      func_0x000107c4ace0(param_1);
      func_0x000107c61180();
      lVar10 = lVar9;
      func_0x000107c40284(uVar13);
      func_0x000107c61180();
      func_0x000107c61170(lVar9);
      func_0x000107c61170(uVar5);
      *(long *)(puVar8 + 0x20) = lVar10;
      func_0x000107c3f764();
      func_0x000107c61180();
      func_0x000107c5cbe4(param_1);
      func_0x000107c61180();
      lVar9 = lVar6;
      func_0x000107c40284(uVar11);
LAB_101e61000:
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      func_0x000107c61170(param_1);
      *(long *)(puVar8 + 0x28) = lVar9;
      goto LAB_101e611c8;
    }
    if (uVar13 == 0 && uVar11 == 0) {
      func_0x0001008478a8();
      func_0x000107c61534();
      *(undefined8 *)(puVar8 + 0x18) = 5;
      *(undefined8 *)(puVar8 + 0x10) = 2;
      lVar9 = unaff_x20;
      func_0x000107c3f75c();
      func_0x000107c61180();
      uVar5 = param_1;
      func_0x000107c3f75c(param_1);
      func_0x000107c61180();
      lVar10 = lVar9;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar9);
      func_0x000107c61170(uVar5);
      *(long *)(puVar8 + 0x20) = lVar10;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      func_0x000107c515ac(param_1);
      func_0x000107c61180();
      uVar5 = param_1;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      lVar9 = lVar6;
      func_0x000107c40284(0xc038000000000000);
    }
    else {
      if (uVar13 == 1 && uVar11 == 0) {
        func_0x0001008478a8();
        func_0x000107c61534();
        *(undefined8 *)(puVar8 + 0x18) = 5;
        *(undefined8 *)(puVar8 + 0x10) = 2;
        lVar9 = unaff_x20;
        func_0x000107c3f75c();
        func_0x000107c61180();
        uVar5 = param_1;
        func_0x000107c3f75c(param_1);
        func_0x000107c61180();
        lVar10 = lVar9;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(lVar9);
        func_0x000107c61170(uVar5);
        *(long *)(puVar8 + 0x20) = lVar10;
        func_0x000107c3f764();
        func_0x000107c61180();
        func_0x000107c3f764(param_1);
        func_0x000107c61180();
        lVar9 = lVar6;
        func_0x000107c40280();
        goto LAB_101e61000;
      }
      func_0x0001008478a8();
      func_0x000107c61534();
      *(undefined8 *)(puVar8 + 0x18) = 5;
      *(undefined8 *)(puVar8 + 0x10) = 2;
      lVar9 = unaff_x20;
      func_0x000107c3f75c();
      func_0x000107c61180();
      uVar5 = param_1;
      func_0x000107c3f75c(param_1);
      func_0x000107c61180();
      lVar10 = lVar9;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar9);
      func_0x000107c61170(uVar5);
      *(long *)(puVar8 + 0x20) = lVar10;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      func_0x000107c515ac(param_1);
      func_0x000107c61180();
      uVar5 = param_1;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      lVar9 = lVar6;
      func_0x000107c40284(0x4038000000000000);
    }
  }
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  func_0x000107c61170(uVar5);
  *(long *)(puVar8 + 0x28) = lVar9;
LAB_101e611c8:
  func_0x000107c61428(unaff_x20 + lVar3,auStack_a8,0x21,0);
  func_0x0001011d6d7c(puVar8);
  func_0x000107c614a8(auStack_a8);
  uVar14 = *(undefined8 *)(unaff_x20 + lVar3);
  uVar5 = uVar14;
  func_0x000107c61434(uVar14);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar14);
  func_0x000107c3d048(puVar4);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 101e61270; end: 101e613e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101e61270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  
  puVar6 = &stack0xffffffffffffff90;
  func_0x000107c614f0();
  lVar2 = _DAT_112e333d0;
  puVar3 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  *(undefined **)(unaff_x20 + _DAT_112e333d8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c61614(unaff_x20 + _DAT_112e333e0,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e333e8);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar4 = puVar3;
  func_0x000107c5e2ac();
  func_0x000107c61180();
  func_0x000107c3ea80();
  func_0x000107c61180();
  puVar5 = puVar3;
  func_0x000107c3fdd0(0x3fe3333333333333);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  *puVar1 = 0x17;
  puVar1[1] = puVar4;
  puVar1[2] = puVar5;
  puVar1[4] = 0x4024000000000000;
  puVar1[3] = 0x4018000000000000;
  puVar1[6] = 0x4024000000000000;
  puVar1[5] = 0x4018000000000000;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e333f0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 3;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff90,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_101e613e8();
  func_0x000107c61170(puVar6);
  return puVar6;
}



/* Entry: 101e613e8; end: 101e616ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e613e8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112e333d0);
  func_0x000107c3d89c();
  func_0x000107c5a050(uVar7);
  uVar1 = 0x746275735f707373;
  func_0x000107c5fadc(0x746275735f707373,0xec000000656c7469);
  func_0x000107c520f4(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c59c74(uVar7);
  func_0x000107c56ba8(uVar7);
  func_0x000107c5a378(uVar7);
  func_0x000107c5a100(uVar7);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(uVar7);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar3 + 0x18) = 9;
  *(undefined8 *)(puVar3 + 0x10) = 4;
  uVar1 = uVar7;
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar5 = uVar1;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar4);
  *(undefined8 *)(puVar3 + 0x20) = uVar5;
  uVar1 = uVar7;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar5 = uVar1;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar4);
  *(undefined8 *)(puVar3 + 0x28) = uVar5;
  uVar1 = uVar7;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar5 = uVar1;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar4);
  *(undefined8 *)(puVar3 + 0x30) = uVar5;
  uVar1 = uVar7;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar5 = uVar1;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar4);
  *(undefined8 *)(puVar3 + 0x38) = uVar5;
  uVar1 = 0;
  func_0x000100847984(0);
  puVar6 = puVar3;
  func_0x000107c5fc48(puVar3,uVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c3d048(puVar2);
  func_0x000107c61170(puVar6);
  func_0x000107c55528();
  func_0x000107c55528(uVar7);
  lVar4 = unaff_x20 + _DAT_112e333e8;
  func_0x000107c5a100(uVar7);
  func_0x000107c59c78(uVar7);
  func_0x000107c52b50(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010c1b9b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar4 + 0x18),*(undefined8 *)(lVar4 + 0x20),
             *(undefined8 *)(lVar4 + 0x28),*(undefined8 *)(lVar4 + 0x30),uVar7,
             PTR_s_setLayoutMargins__11264c108);
  return;
}



/* Entry: 101e616f0; end: 101e6170f; -[_TtC30SingleSnapPlayerImplementation28SingleSnapPlayerSubtitleView initWithFrame:] */

void FUN_101e616f0(void)

{
  FUN_101e61270();
  return;
}



/* Entry: 101e61710; end: 101e61877;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101e61710(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long unaff_x20;
  
  puVar6 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  lVar2 = _DAT_112e333d0;
  puVar3 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  *(undefined **)(unaff_x20 + _DAT_112e333d8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c61614(unaff_x20 + _DAT_112e333e0,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e333e8);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar4 = puVar3;
  func_0x000107c5e2ac();
  func_0x000107c61180();
  func_0x000107c3ea80();
  func_0x000107c61180();
  puVar5 = puVar3;
  func_0x000107c3fdd0(0x3fe3333333333333);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  *puVar1 = 0x17;
  puVar1[1] = puVar4;
  puVar1[2] = puVar5;
  puVar1[4] = 0x4024000000000000;
  puVar1[3] = 0x4018000000000000;
  puVar1[6] = 0x4024000000000000;
  puVar1[5] = 0x4018000000000000;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e333f0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 3;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_initWithCoder__1125dd730,param_1);
  if (puVar6 != (undefined1 *)0x0) {
    puVar7 = puVar6;
    func_0x000107c61174(puVar6);
    FUN_101e613e8();
    func_0x000107c61170(puVar7);
  }
  func_0x000107c61170(param_1);
  return puVar6;
}



/* Entry: 101e61878; end: 101e6189f; -[_TtC30SingleSnapPlayerImplementation28SingleSnapPlayerSubtitleView initWithCoder:] */

void FUN_101e61878(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_101e61710();
  return;
}



/* Entry: 101e618a0; end: 101e61947; -[_TtC30SingleSnapPlayerImplementation28SingleSnapPlayerSubtitleView didMoveToSuperview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e618a0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_didMoveToSuperview_1125bb968;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1);
  lVar3 = param_1;
  func_0x000107c5c42c(param_1);
  func_0x000107c61180();
  lVar2 = _DAT_112e333e0;
  func_0x000107c61604(param_1 + _DAT_112e333e0,lVar3);
  func_0x000107c61170(lVar3);
  lVar2 = param_1 + lVar2;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_101e60b58();
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101e61948; end: 101e6197b;  */

void FUN_101e61948(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101e6197c; end: 101e619df; -[_TtC30SingleSnapPlayerImplementation28SingleSnapPlayerSubtitleView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101e61998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e619cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e6199c) */
/* WARNING: Removing unreachable block (ram,0x000101e619d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e6197c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e333d0));
  return;
}



/* Entry: 101e619e0; end: 101e619ff;  */

void FUN_101e619e0(void)

{
  func_0x000107c61168(&PTR_PTR_112806598);
  return;
}



/* Entry: 101e61a00; end: 101e61a6f;  */

void FUN_101e61a00(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  func_0x000107c61550();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
    uVar2 = 0;
    func_0x0001011d8f3c(0,uVar1 + 1,1,uVar3);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 101e61a70; end: 101e61b83;  */

void FUN_101e61a70(long param_1,char param_2)

{
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x1a8,auStack_48,1,0);
  *(long *)(unaff_x20 + 0x1a8) = param_1;
  *(char *)(unaff_x20 + 0x1b0) = param_2;
  if (param_2 == '\x01') {
    if (param_1 == 0) {
      func_0x000107c61428(unaff_x20 + 200,auStack_60,1,0);
      *(undefined8 *)(unaff_x20 + 0x148) = 0xffffffffffffffff;
      return;
    }
    param_1 = 1;
  }
  func_0x000107c61428(unaff_x20 + 200,auStack_60,1,0);
  *(long *)(unaff_x20 + 0x148) = param_1;
  return;
}



/* Entry: 101e61b84; end: 101e62037;  */

ulong FUN_101e61b84(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  ulong *puVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  
  uVar14 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(uVar14 + 0x18) = 4;
  *(undefined8 *)(uVar14 + 0x10) = 2;
  *(undefined8 *)(uVar14 + 0x20) = 0x746e657665;
  puVar2 = PTR___sSSN_11034da80;
  *(undefined8 *)(uVar14 + 0x28) = 0xe500000000000000;
  *(undefined8 *)(uVar14 + 0x30) = 0xd000000000000010;
  *(undefined8 *)(uVar14 + 0x38) = 0x800000010f0155e0;
  *(undefined **)(uVar14 + 0x48) = puVar2;
  *(undefined8 *)(uVar14 + 0x50) = 0x6574617473;
  *(undefined **)(uVar14 + 0x78) = puVar2;
  *(undefined8 *)(uVar14 + 0x58) = 0xe500000000000000;
  *(undefined8 *)(uVar14 + 0x60) = param_3;
  *(undefined8 *)(uVar14 + 0x68) = param_4;
  func_0x000107c61434(param_4);
  uVar4 = uVar14;
  func_0x000100214a84();
  func_0x000107c61588(uVar14);
  uVar5 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(uVar14 + 0x20),2,uVar5);
  if (param_2 != 0) {
    puStack_138 = puVar2;
    uStack_150 = param_1;
    uStack_148 = param_2;
    func_0x000100102924(&uStack_150,&uStack_120);
    func_0x000107c61434(param_2);
    uVar14 = uVar4;
    func_0x000107c61558(uVar4);
    uStack_150 = uVar4;
    func_0x0001001029e8(&uStack_120,0x64695f70616e73,0xe700000000000000,uVar14);
    uVar4 = uStack_150;
  }
  if (param_5 == 0) {
    return uVar4;
  }
  uVar11 = 1L << ((ulong)*(byte *)(param_5 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(param_5 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(param_5 + 0x40);
  uVar11 = uVar11 + 0x3f >> 6;
  func_0x000107c61434(param_5);
  lVar16 = 0;
LAB_101e61d48:
  do {
    if (uVar14 == 0) {
      uVar14 = uVar11;
      if ((long)uVar11 <= lVar16 + 1) {
        uVar14 = lVar16 + 1;
      }
      lVar12 = uVar14 - 1;
      lVar15 = lVar16;
      do {
        lVar16 = lVar15 + 1;
        if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101e62020);
          (*pcVar3)();
        }
        if ((long)uVar11 <= lVar16) {
          uVar14 = 0;
          puStack_138 = (undefined *)0x0;
          uStack_140 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_148 = 0;
          uStack_150 = 0;
          goto LAB_101e61dc0;
        }
        uVar14 = ((ulong *)(param_5 + 0x40))[lVar16];
        lVar15 = lVar15 + 1;
      } while (uVar14 == 0);
    }
    uVar7 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
    uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    uVar14 = uVar14 - 1 & uVar14;
    uVar10 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | lVar16 << 6;
    puVar1 = (ulong *)(*(long *)(param_5 + 0x30) + uVar10 * 0x10);
    uStack_150 = *puVar1;
    uVar7 = puVar1[1];
    uStack_148 = uVar7;
    func_0x0001000bb420(*(long *)(param_5 + 0x38) + uVar10 * 0x20,&uStack_140);
    func_0x000107c61434(uVar7);
    lVar12 = lVar16;
LAB_101e61dc0:
    uVar10 = uStack_148;
    uVar7 = uStack_150;
    uStack_118 = uStack_148;
    uStack_120 = uStack_150;
    puStack_108 = puStack_138;
    uStack_110 = uStack_140;
    uStack_f8 = uStack_128;
    uStack_100 = uStack_130;
    if (uStack_148 == 0) {
      func_0x000107c61574(param_5);
      return uVar4;
    }
    func_0x000100102924(&uStack_110,&uStack_150);
    func_0x0001000bb420(&uStack_150,&uStack_170);
    uStack_1a8 = uStack_168;
    uStack_1b0 = uStack_170;
    lStack_198 = lStack_158;
    uStack_1a0 = uStack_160;
    lVar16 = lVar12;
    if (lStack_158 == 0) {
      func_0x000101e67a98(&uStack_1b0,0x112d387f8,&UNK_10d902650);
      func_0x000107c61434(uVar4);
      uVar8 = uVar10;
      func_0x000100029284();
      func_0x000107c6142c(uVar4);
      if ((uVar8 & 1) == 0) {
        func_0x000101e67d40(&uStack_150);
        func_0x000107c6142c(uVar10);
        uStack_188 = 0;
        uStack_190 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
      }
      else {
        uVar8 = uVar4;
        func_0x000107c61558();
        uStack_1b0 = uVar4;
        if ((int)uVar8 == 0) {
          func_0x0001010fc388();
        }
        uVar4 = uStack_1b0;
        func_0x000107c6142c(*(undefined8 *)(*(long *)(uStack_1b0 + 0x30) + uVar7 * 0x10 + 8));
        func_0x000100102924(*(long *)(uVar4 + 0x38) + uVar7 * 0x20,&uStack_190);
        func_0x0001010f6278(uVar7,uVar4);
        func_0x000107c6142c(uVar10);
        func_0x000101e67d40(&uStack_150);
      }
      func_0x000101e67a98(&uStack_190,0x112d387f8,&UNK_10d902650);
      goto LAB_101e61d48;
    }
    func_0x000100102924(&uStack_1b0,&uStack_190);
    uVar8 = uVar4;
    func_0x000107c61558();
    uVar6 = uVar7;
    uVar9 = uVar10;
    uStack_1b0 = uVar4;
    func_0x000100029284();
    uVar13 = (ulong)~(uint)uVar9 & 1;
    lVar15 = *(long *)(uVar4 + 0x10) + uVar13;
    if (SCARRY8(*(long *)(uVar4 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101e62024);
      (*pcVar3)();
    }
    if (*(long *)(uVar4 + 0x18) < lVar15) {
      func_0x000100102b0c(lVar15,uVar8);
      uVar6 = uVar7;
      uVar4 = uVar10;
      func_0x000100029284();
      if (((uint)uVar9 & 1) != ((uint)uVar4 & 1)) {
        func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101e62038);
        (*pcVar3)();
      }
LAB_101e61f1c:
      if ((uVar9 & 1) != 0) goto LAB_101e61d1c;
LAB_101e61f24:
      uVar4 = uStack_1b0;
      lVar15 = uStack_1b0 + (uVar6 >> 6) * 8;
      *(ulong *)(lVar15 + 0x40) = *(ulong *)(lVar15 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(uStack_1b0 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar7;
      puVar1[1] = uVar10;
      func_0x000100102924(&uStack_190,*(long *)(uStack_1b0 + 0x38) + uVar6 * 0x20);
      func_0x000101e67d40(&uStack_150);
      if (SCARRY8(*(long *)(uVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101e62028);
        (*pcVar3)();
      }
      *(long *)(uVar4 + 0x10) = *(long *)(uVar4 + 0x10) + 1;
    }
    else {
      if ((uVar8 & 1) != 0) goto LAB_101e61f1c;
      func_0x0001010fc388();
      if ((uVar9 & 1) == 0) goto LAB_101e61f24;
LAB_101e61d1c:
      uVar4 = uStack_1b0;
      lVar15 = *(long *)(uStack_1b0 + 0x38) + uVar6 * 0x20;
      func_0x000101e67d40(lVar15);
      func_0x000100102924(&uStack_190,lVar15);
      func_0x000107c6142c(uVar10);
      func_0x000101e67d40(&uStack_150);
    }
  } while( true );
}



/* Entry: 101e62038; end: 101e620ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e62038(char param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  code *pcVar6;
  
  cVar2 = *(char *)(unaff_x20 + 0x1a0);
  if (cVar2 != param_1) {
    plVar1 = (long *)(*(long *)(unaff_x20 + 0xb8) + _DAT_112e33588);
    lVar4 = *plVar1;
    if (lVar4 != 0) {
      lVar5 = plVar1[1];
      lVar3 = lVar4;
      func_0x000107c614f0(lVar4);
      lVar5 = *(long *)(lVar5 + 0x28);
      pcVar6 = *(code **)(lVar5 + 0x10);
      func_0x000107c615f0(lVar4);
      (*pcVar6)(cVar2,lVar3,lVar5);
      func_0x000101e677b0(lVar4);
      func_0x000107c615e8(lVar4);
    }
  }
  return;
}



/* Entry: 101e620f0; end: 101e621e3;  */

undefined1  [16] FUN_101e620f0(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0x50;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x50,0x6857);
  }
  *param_1 = lVar1;
  *(long *)(lVar1 + 0x48) = unaff_x20;
  func_0x000107c61428(unaff_x20 + 0x1a8,lVar1,0x21,0);
  auVar2._8_8_ = unaff_x20 + 0x1a8;
  auVar2._0_8_ = 0x101e62154;
  return auVar2;
}



/* Entry: 101e621e4; end: 101e622f7;  */

/* WARNING: Possible PIC construction at 0x000101e6226c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e6229c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e622ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e622a0) */
/* WARNING: Removing unreachable block (ram,0x000101e62270) */
/* WARNING: Removing unreachable block (ram,0x000101e622b0) */
/* WARNING: Removing unreachable block (ram,0x000101e622dc) */
/* WARNING: Removing unreachable block (ram,0x000101e622b4) */
/* WARNING: Removing unreachable block (ram,0x000101e622bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e621e4(long param_1,long param_2)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  plVar1 = (long *)(*(long *)(unaff_x20 + 0xb8) + _DAT_112e33588);
  lVar2 = *plVar1;
  if (lVar2 == 0 || param_1 == 0) {
    FUN_101e622f8();
    lVar2 = *plVar1;
    *plVar1 = param_1;
    plVar1[1] = param_2;
    func_0x000107c615f4(param_1,2);
  }
  else {
    lVar3 = plVar1[1];
    func_0x000107c614f0(lVar2);
    pcVar4 = *(code **)(lVar3 + 0xa0);
    func_0x000107c615f0(lVar2);
    func_0x000107c615f0(param_1);
    (*pcVar4)();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 101e622f8; end: 101e62383;  */

void FUN_101e622f8(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  lVar3 = *(long *)(unaff_x20 + 400);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    lVar4 = *(long *)(unaff_x20 + 0x198);
    lVar1 = lVar3;
    func_0x000107c614f0(lVar3);
    pcVar5 = *(code **)(lVar4 + 8);
    func_0x000107c615f0(lVar3);
    (*pcVar5)(lVar1,lVar4);
    func_0x000107c615e8(lVar3);
    uVar2 = *(undefined8 *)(unaff_x20 + 400);
  }
  *(undefined8 *)(unaff_x20 + 400) = 0;
  *(undefined8 *)(unaff_x20 + 0x198) = 0;
  func_0x000107c615e8(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c6157c(uVar2);
  func_0x000100c82230();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 101e62384; end: 101e62593;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e62384(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  long *plVar7;
  long lVar8;
  code *pcVar9;
  
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0xb8) + _DAT_112e33588);
  plVar7 = (long *)*puVar1;
  if (plVar7 != (long *)0x0) {
    lVar8 = puVar1[1];
    func_0x000107c614f0();
    (**(code **)(*(long *)(lVar8 + 0x20) + 0x28))();
    plVar2 = plVar7;
    FUN_101e67cb0();
    func_0x000104884898();
    func_0x000107c61574(plVar7);
    puVar3 = &UNK_11048f198;
    func_0x000107c613fc(&UNK_11048f198,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    pcVar4 = FUN_101e67cf0;
    puVar5 = puVar3;
    (**(code **)(*plVar2 + 0x60))(FUN_101e67cf0);
    func_0x000107c61574(plVar2);
    func_0x000107c61574(puVar3);
    func_0x000107c614f0(pcVar4);
    param_1 = *(long **)(unaff_x20 + 0x38);
    pcVar9 = *(code **)(puVar5 + 0x18);
    func_0x000107c6157c(param_1);
    (*pcVar9)();
    func_0x000107c615e8(pcVar4);
    func_0x000107c61574();
    plVar7 = (long *)*puVar1;
    if (plVar7 != (long *)0x0) {
      func_0x000107c614f0(plVar7);
      func_0x000107c615f0(plVar7);
      func_0x000101e677b0();
      func_0x000107c615e8();
      param_1 = plVar7;
    }
  }
  FUN_101e67cf8();
  plVar7 = param_1;
  func_0x000104884898();
  func_0x0001000c2068();
  func_0x000107c61574(plVar7);
  puVar3 = &UNK_11048f198;
  func_0x000107c613fc(&UNK_11048f198,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  pcVar4 = FUN_101e67d38;
  puVar5 = puVar3;
  (**(code **)(*param_1 + 0x60))(FUN_101e67d38);
  func_0x000107c61574(param_1);
  func_0x000107c61574(puVar3);
  func_0x000107c614f0(pcVar4);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  pcVar9 = *(code **)(puVar5 + 0x18);
  func_0x000107c6157c(uVar6);
  (*pcVar9)();
  func_0x000107c615e8(pcVar4);
  func_0x000107c61574(uVar6);
  return;
}



/* Entry: 101e62594; end: 101e6287b;  */

/* WARNING: Possible PIC construction at 0x000101e6264c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e62690: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e62820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e62704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e62758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e62798: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e627d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e6279c) */
/* WARNING: Removing unreachable block (ram,0x000101e6275c) */
/* WARNING: Removing unreachable block (ram,0x000101e62708) */
/* WARNING: Removing unreachable block (ram,0x000101e62824) */
/* WARNING: Removing unreachable block (ram,0x000101e62694) */
/* WARNING: Removing unreachable block (ram,0x000101e62650) */
/* WARNING: Removing unreachable block (ram,0x000101e627d8) */
/* WARNING: Removing unreachable block (ram,0x000101e62808) */

void FUN_101e62594(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined *puVar2;
  
  func_0x0001000285a8(0x112d51030,&UNK_10d917a40);
  func_0x000107c41b80();
  func_0x000107c61180();
  plVar1 = param_1;
  func_0x0001000b637c();
  func_0x000107c61170(param_1);
  if ((param_2 & 1) == 0) {
    FUN_101e679b8();
    func_0x000104884898();
  }
  else {
    puVar2 = &UNK_11048f198;
    func_0x000107c613fc(&UNK_11048f198,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    (**(code **)(*plVar1 + 0x60))(0x101e67a1c,puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(plVar1);
  return;
}



/* Entry: 101e6287c; end: 101e629ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e6287c(undefined8 param_1,long param_2)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    return;
  }
  plVar1 = (long *)(*(long *)(param_2 + 0xb8) + _DAT_112e33588);
  lVar4 = *plVar1;
  if (lVar4 == 0) {
    bVar2 = 0;
  }
  else {
    lVar5 = plVar1[1];
    lVar3 = lVar4;
    func_0x000107c614f0();
    pcVar6 = *(code **)(lVar5 + 0x40);
    func_0x000107c615f0(lVar4);
    (*pcVar6)(lVar3,lVar5);
    bVar2 = (byte)lVar3;
    func_0x000107c615e8(lVar4);
  }
  func_0x000107c61428(param_2 + 200,auStack_70,1,0);
  *(byte *)(param_2 + 0x129) = bVar2 & 1;
  lVar4 = param_2 + 0x180;
  func_0x000107c61648();
  if (lVar4 != 0) {
    if (*(char *)(*(long *)(lVar4 + 0x30) + _DAT_112e33168) == '\x01') {
      lVar3 = *(long *)(lVar4 + 0x30) + _DAT_112e33150;
      func_0x000107c61648();
      func_0x000107c61574(lVar4);
      if ((lVar3 != 0) && (func_0x000107c61574(lVar3), lVar3 == lVar4)) {
        lVar4 = param_2 + 0x180;
        func_0x000107c61648();
        if (lVar4 != 0) {
          FUN_101e5d9b8();
          func_0x000107c61574(lVar4);
        }
        goto LAB_101e629d0;
      }
    }
    else {
      func_0x000107c61574(lVar4);
    }
  }
  FUN_101e629f0(0xd000000000000012,0x800000010f0155c0);
LAB_101e629d0:
  func_0x000107c61574(param_2);
  return;
}



/* Entry: 101e629f0; end: 101e62b9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e629f0(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  
  plVar1 = (long *)(*(long *)(unaff_x20 + 0xb8) + _DAT_112e33588);
  lVar6 = *plVar1;
  if (lVar6 != 0) {
    lVar7 = plVar1[1];
    func_0x000107c614f0(lVar6);
    (**(code **)(*(long *)(lVar7 + 0x18) + 0x28))();
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x150);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x158);
  lVar7 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar7 + 0x18) = 4;
  *(undefined8 *)(lVar7 + 0x10) = 2;
  *(undefined8 *)(lVar7 + 0x20) = 0x746c75736572;
  puVar4 = PTR___sSiN_11034deb0;
  *(undefined8 *)(lVar7 + 0x28) = 0xe600000000000000;
  *(ulong *)(lVar7 + 0x30) = (ulong)(lVar6 != 0);
  *(undefined **)(lVar7 + 0x48) = puVar4;
  *(undefined8 *)(lVar7 + 0x50) = 0x6e6f73616572;
  *(undefined **)(lVar7 + 0x78) = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar7 + 0x58) = 0xe600000000000000;
  *(undefined8 *)(lVar7 + 0x60) = param_1;
  *(undefined8 *)(lVar7 + 0x68) = param_2;
  func_0x000107c61434(uVar3);
  func_0x000107c61434(param_2);
  lVar6 = lVar7;
  func_0x000100214a84(lVar7);
  func_0x000107c61588(lVar7);
  uVar5 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar7 + 0x20),2,uVar5);
  FUN_101e61b84(uVar2,uVar3,0x6c705f6573756170,0xee006b6361627961,lVar6);
  func_0x000107c6142c();
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(lVar6);
  lVar6 = unaff_x20 + 0x180;
  func_0x000107c61648();
  if (lVar6 != 0) {
    FUN_101e5df94();
    func_0x000107c61574(lVar6);
  }
  return;
}



/* Entry: 101e62ba0; end: 101e62ea7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e62ba0(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    return;
  }
  func_0x000107c61428(param_2 + 200,auStack_70,0,0);
  if (*(char *)(param_2 + 0x129) == '\x01') {
    lVar4 = param_2 + 0x180;
    func_0x000107c61648();
    if (lVar4 != 0) {
      if (*(char *)(*(long *)(lVar4 + 0x30) + _DAT_112e33168) == '\x01') {
        lVar2 = *(long *)(lVar4 + 0x30) + _DAT_112e33150;
        func_0x000107c61648();
        func_0x000107c61574(lVar4);
        if ((lVar2 != 0) && (func_0x000107c61574(lVar2), lVar2 == lVar4)) goto LAB_101e62cbc;
      }
      else {
        func_0x000107c61574(lVar4);
      }
    }
    plVar1 = (long *)(*(long *)(param_2 + 0xb8) + _DAT_112e33588);
    lVar4 = *plVar1;
    if (lVar4 != 0) {
      lVar3 = plVar1[1];
      lVar2 = lVar4;
      func_0x000107c614f0(lVar4);
      lVar3 = *(long *)(lVar3 + 0x18);
      pcVar5 = *(code **)(lVar3 + 0x20);
      func_0x000107c615f0(lVar4);
      (*pcVar5)(lVar2,lVar3);
      func_0x000107c615e8(lVar4);
    }
  }
LAB_101e62cbc:
  func_0x000107c61574(param_2);
  return;
}



/* Entry: 101e62ea8; end: 101e62f3f;  */

void FUN_101e62ea8(void)

{
  long unaff_x20;
  
  FUN_101e62f40();
  func_0x000101e67d40(unaff_x20 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000101e67d40(unaff_x20 + 0x48);
  FUN_101ad90b8(unaff_x20 + 0x70);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  FUN_101e67c84(unaff_x20 + 200);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000101e67fb4(unaff_x20 + 0x170);
  func_0x000107c61640(unaff_x20 + 0x180);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 400));
  return;
}



/* Entry: 101e62f40; end: 101e6309b;  */

void FUN_101e62f40(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_138 [24];
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
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined6 uStack_8a;
  undefined2 uStack_84;
  undefined2 uStack_82;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined8 uStack_58;
  
  FUN_101e67ad8();
  lVar2 = *(long *)(unaff_x20 + 0x188);
  if (lVar2 != 0) {
    func_0x000107c6157c(lVar2);
    func_0x000100c82230();
    if (*(long *)(lVar2 + 0x20) == 0) {
      uVar1 = 0;
    }
    else {
      func_0x000107c4ff34();
      uVar1 = *(undefined8 *)(lVar2 + 0x20);
    }
    *(undefined8 *)(lVar2 + 0x20) = 0;
    func_0x000107c61574(lVar2);
    func_0x000107c61170(uVar1);
  }
  func_0x000107c6071c();
  uStack_60 = 0;
  uStack_5f = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  uStack_67 = 0;
  uStack_7c = 0;
  uStack_7a = 0;
  uStack_78 = 0;
  uStack_84 = 0;
  uStack_82 = 0;
  uStack_80 = 0;
  uStack_74 = 0;
  func_0x000107c61428(unaff_x20 + 200,auStack_138,1,0);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x130);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0x128);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x140);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0x138);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x148);
  uStack_108 = *(undefined8 *)(unaff_x20 + 0xe0);
  uStack_110 = *(undefined8 *)(unaff_x20 + 0xd8);
  uStack_f8 = *(undefined8 *)(unaff_x20 + 0xf0);
  uStack_100 = *(undefined8 *)(unaff_x20 + 0xe8);
  uStack_e8 = *(undefined8 *)(unaff_x20 + 0x100);
  uStack_f0 = *(undefined8 *)(unaff_x20 + 0xf8);
  uStack_d8 = *(undefined8 *)(unaff_x20 + 0x110);
  uStack_e0 = *(undefined8 *)(unaff_x20 + 0x108);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0x120);
  uStack_d0 = *(undefined8 *)(unaff_x20 + 0x118);
  uStack_118 = *(undefined8 *)(unaff_x20 + 0xd0);
  uStack_120 = *(undefined8 *)(unaff_x20 + 200);
  *(undefined8 *)(unaff_x20 + 200) = param_1;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  *(undefined1 *)(unaff_x20 + 0xd8) = 1;
  *(undefined1 *)(unaff_x20 + 0xdc) = 0;
  *(undefined4 *)(unaff_x20 + 0xe0) = 0x3f800000;
  *(undefined1 *)(unaff_x20 + 0xe8) = 0;
  *(undefined8 *)(unaff_x20 + 0x100) = uStack_58;
  *(ulong *)(unaff_x20 + 0xf8) = CONCAT71(uStack_5f,uStack_60);
  *(ulong *)(unaff_x20 + 0xf1) = CONCAT17(uStack_60,uStack_67);
  *(ulong *)(unaff_x20 + 0xe9) = CONCAT17(uStack_68,uStack_6f);
  *(undefined8 *)(unaff_x20 + 0x108) = 0xe000000000000000;
  *(undefined2 *)(unaff_x20 + 0x110) = 0;
  *(ulong *)(unaff_x20 + 0x124) = CONCAT44(uStack_74,uStack_78);
  *(ulong *)(unaff_x20 + 0x11c) = CONCAT26(uStack_7a,CONCAT24(uStack_7c,uStack_80));
  *(ulong *)(unaff_x20 + 0x11a) = CONCAT26(uStack_7c,CONCAT42(uStack_80,uStack_82));
  *(ulong *)(unaff_x20 + 0x112) = CONCAT26(uStack_84,uStack_8a);
  *(undefined8 *)(unaff_x20 + 0x130) = 0;
  *(undefined1 *)(unaff_x20 + 0x138) = 0;
  *(undefined8 *)(unaff_x20 + 0x148) = 0xffffffffffffffff;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  FUN_101e67c84(&uStack_120);
  return;
}



/* Entry: 101e6309c; end: 101e630db;  */

void FUN_101e6309c(void)

{
  FUN_101e62ea8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e630dc; end: 101e631db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e630dc(double param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 200,auStack_48,1,0);
  if ((*(byte *)(unaff_x20 + 0x110) & 1) == 0) {
    func_0x000107c6071c();
    *(double *)(unaff_x20 + 0xd0) = param_1 - *(double *)(unaff_x20 + 200);
    *(undefined1 *)(unaff_x20 + 0xd8) = 0;
    func_0x0001000a8868(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
    uVar1 = 0;
    FUN_101e4c630(0);
    FUN_101e4c5d0(0,0,0,10,uVar1,&PTR_DAT_11048e450);
    lVar3 = *(long *)(*(long *)(unaff_x20 + 0xb8) + _DAT_112e33588);
    if ((lVar3 != 0) && (*(char *)(unaff_x20 + 0x12a) == '\x01')) {
      lVar2 = unaff_x20 + 0x180;
      func_0x000107c61648();
      if (lVar2 != 0) {
        func_0x000107c615f0(lVar3);
        FUN_101e5db50();
        func_0x000107c61574(lVar2);
        func_0x000107c615e8(lVar3);
      }
    }
  }
  return;
}



/* Entry: 101e631dc; end: 101e63357;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e631dc(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  code *pcVar6;
  long lStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  plVar1 = (long *)(*(long *)(unaff_x20 + 0xb8) + _DAT_112e33588);
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    lVar5 = plVar1[1];
    uVar3 = 0;
    func_0x000107c61428(unaff_x20 + 200,auStack_68,0,0);
    if ((*(byte *)(unaff_x20 + 299) & 1) == 0) {
      func_0x0001000a8868(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
      lVar2 = lVar4;
      func_0x000107c614f0();
      lVar5 = *(long *)(lVar5 + 0x20);
      pcVar6 = *(code **)(lVar5 + 0x10);
      lStack_70 = lVar4;
      func_0x000107c615f0(lVar4);
      (*pcVar6)();
      uStack_80 = (undefined4)lVar5;
      uStack_7c = (undefined4)((ulong)lVar5 >> 0x20);
      lStack_88 = lVar2;
      uStack_78 = uVar3;
      func_0x000107c60a3c(&lStack_88);
      uVar3 = 0;
      FUN_101e4c630(0);
      FUN_101e4c5d0(param_1,0,0,4,uVar3,&PTR_DAT_11048e450);
      lVar5 = unaff_x20 + 0x170;
      func_0x000107c61618();
      if (lVar5 != 0) {
        FUN_101e518fc(1,0x7320726579616c70,0xed0000736c6c6174);
        *(undefined1 *)(lVar5 + _DAT_112e32d10) = 0;
        func_0x000107c615e8(lVar5);
      }
      lVar5 = unaff_x20 + 0x180;
      func_0x000107c61648();
      if (lVar5 != 0) {
        FUN_101e5df94();
        func_0x000107c61574(lVar5);
      }
      func_0x000107c615e8(lVar4);
    }
  }
  return;
}



/* Entry: 101e63358; end: 101e634ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e63358(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_58 [24];
  
  plVar1 = (long *)(*(long *)(unaff_x20 + 0xb8) + _DAT_112e33588);
  if (*plVar1 != 0) {
    func_0x0001000a8868(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
    uVar2 = 0;
    FUN_101e4c630(0);
    FUN_101e4c5d0(2,0,0,10,uVar2,&PTR_DAT_11048e450);
    lVar4 = unaff_x20 + 0x170;
    func_0x000107c61618();
    if (lVar4 != 0) {
      func_0x000101e58120();
      func_0x000107c615e8(lVar4);
    }
    func_0x000107c61428(unaff_x20 + 200,auStack_58,1,0);
    if ((*(byte *)(unaff_x20 + 0x110) & 1) == 0) {
      func_0x0001000a8868(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
      FUN_101e4c5d0(3,0,0,10,uVar2,&PTR_DAT_11048e450);
      *(undefined1 *)(unaff_x20 + 0x110) = 1;
    }
    lVar4 = *plVar1;
    if ((lVar4 != 0) && (*(char *)(unaff_x20 + 0x12a) == '\x01')) {
      lVar3 = unaff_x20 + 0x180;
      func_0x000107c61648();
      if (lVar3 != 0) {
        func_0x000107c615f0(lVar4);
        FUN_101e5db50();
        func_0x000107c61574(lVar3);
        func_0x000107c615e8(lVar4);
      }
    }
  }
  return;
}



/* Entry: 101e634ac; end: 101e636e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e634ac(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 in_x7;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 200,auStack_78,1,0);
  if (!SCARRY8(*(long *)(unaff_x20 + 0x140),1)) {
    *(long *)(unaff_x20 + 0x140) = *(long *)(unaff_x20 + 0x140) + 1;
    func_0x0001000a8868(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
    uVar3 = 0;
    FUN_101e4c630(0);
    FUN_101e4c5d0(1,0,0,10,uVar3,&PTR_DAT_11048e450);
    if ((*(long *)(unaff_x20 + 0x148) == -1) ||
       (*(long *)(unaff_x20 + 0x140) < *(long *)(unaff_x20 + 0x148))) {
      *(undefined1 *)(unaff_x20 + 299) = 1;
      if ((*(long *)(unaff_x20 + 0xa0) == 0) || ((*(byte *)(unaff_x20 + 0xa8) & 1) == 0)) {
        FUN_101e629f0(0xd000000000000016,0x800000010f015640);
      }
      plVar1 = (long *)(*(long *)(unaff_x20 + 0xb8) + _DAT_112e33588);
      lVar7 = *plVar1;
      if (lVar7 != 0) {
        lVar6 = plVar1[1];
        lVar4 = lVar7;
        func_0x000107c614f0(lVar7);
        uVar3 = *(undefined8 *)PTR__kCMTimeZero_110348670;
        uVar2 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
        uVar8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
        puVar5 = &UNK_11048f198;
        lVar10 = lVar7;
        func_0x000107c613fc(&UNK_11048f198,0x18,7);
        func_0x000107c61644(puVar5 + 0x10);
        lVar6 = *(long *)(lVar6 + 0x18);
        pcVar9 = *(code **)(lVar6 + 0x38);
        func_0x000107c615f0(lVar7);
        func_0x000107c6157c(puVar5);
        (*pcVar9)(uVar3,uVar2,uVar8,FUN_101e67e14,puVar5,lVar4,lVar6,in_x7,lVar10);
        func_0x000107c615e8(lVar7);
        func_0x000107c61578(puVar5,2);
      }
    }
    else {
      if (*(char *)(unaff_x20 + 0x9a) == '\x01') {
        FUN_101e629f0(0xd000000000000016,0x800000010f015640);
      }
      else {
        FUN_101e63d40();
      }
      lVar7 = unaff_x20 + 0x170;
      func_0x000107c61618();
      if (lVar7 != 0) {
        *(undefined1 *)(lVar7 + _DAT_112e32c68) = 0;
        FUN_101e518fc(0,0xd000000000000012,0x800000010f015620);
        func_0x000107c615e8(lVar7);
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x101e636e4);
  (*pcVar9)();
}



/* Entry: 101e636e4; end: 101e638e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e636e4(char param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c61428(param_2 + 200,auStack_70,1,0);
    if ((*(byte *)(param_2 + 0x138) & 1) == 0) {
      if (param_1 != '\0') {
        if (param_1 == '\x01') {
          uVar1 = *(undefined8 *)(param_2 + 0x150);
          uVar2 = *(undefined8 *)(param_2 + 0x158);
          lVar3 = 0x112d4b5e8;
          func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
          func_0x000107c61534();
          *(undefined8 *)(lVar3 + 0x18) = 2;
          *(undefined8 *)(lVar3 + 0x10) = 1;
          *(undefined8 *)(lVar3 + 0x20) = 0x6567617373656d;
          *(undefined **)(lVar3 + 0x48) = PTR___sSSN_11034da80;
          *(undefined8 *)(lVar3 + 0x28) = 0xe700000000000000;
          *(undefined8 *)(lVar3 + 0x30) = 0x6961665f6b656573;
          *(undefined8 *)(lVar3 + 0x38) = 0xec0000006572756c;
          func_0x000107c61434(uVar2);
          lVar4 = lVar3;
          func_0x000100214a84(lVar3);
          func_0x000107c61588(lVar3);
          func_0x000101e67a98((undefined8 *)(lVar3 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
          FUN_101e61b84(uVar1,uVar2,0x726f727265,0xe500000000000000,lVar4);
          func_0x000107c6142c();
          func_0x000107c6142c(uVar2);
          func_0x000107c6142c(lVar4);
          puVar5 = (undefined8 *)(param_2 + 0x170);
          func_0x000107c61618();
          if (puVar5 != (undefined8 *)0x0) {
            puVar6 = puVar5;
            FUN_101e67d60();
            puVar7 = &UNK_1106e89a8;
            func_0x000107c613f8(&UNK_1106e89a8,puVar6,0,0);
            *puVar6 = 0x8000000000000000;
            FUN_101e515e8();
            func_0x000107c614ac(puVar7);
            *(undefined1 *)((long)puVar5 + _DAT_112e32d10) = 0;
            func_0x000107c615e8(puVar5);
          }
        }
        else if ((*(long *)(param_2 + 0xa0) == 0) || ((*(byte *)(param_2 + 0xa8) & 1) == 0)) {
          FUN_101e638e8(0xd000000000000016,0x800000010f015640);
        }
      }
      *(undefined1 *)(param_2 + 299) = 0;
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 101e638e8; end: 101e63d3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e638e8(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long unaff_x20;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lStack_130;
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  long alStack_f8 [3];
  undefined *puStack_e0;
  long alStack_d8 [15];
  
  lVar4 = 0;
  func_0x000103b2dc40();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  plVar9 = (long *)((long)&lStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar10 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar10 + 0x18) = 2;
  *(undefined8 *)(lVar10 + 0x10) = 1;
  *(undefined8 *)(lVar10 + 0x20) = 0x6e6f73616572;
  puVar2 = PTR___sSSN_11034da80;
  *(undefined **)(lVar10 + 0x48) = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar10 + 0x28) = 0xe600000000000000;
  *(undefined8 *)(lVar10 + 0x30) = param_1;
  *(undefined8 *)(lVar10 + 0x38) = param_2;
  func_0x000107c61434(param_2);
  lVar5 = lVar10;
  func_0x000100214a84();
  func_0x000107c61588(lVar10);
  func_0x000101e67a98((undefined8 *)(lVar10 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  puVar3 = PTR___sSiN_11034deb0;
  plVar1 = (long *)(*(long *)(unaff_x20 + 0xb8) + _DAT_112e33588);
  if (*plVar1 == 0) {
    alStack_f8[0] = 1;
    puStack_e0 = PTR___sSiN_11034deb0;
    func_0x000100102924(alStack_f8,alStack_d8);
    lVar10 = lVar5;
    func_0x000107c61558(lVar5);
    alStack_f8[0] = lVar5;
    func_0x0001001029e8(alStack_d8,0x79616c705f6c696e,0xea00000000007265,lVar10);
    lVar5 = alStack_f8[0];
    func_0x000107c61428(unaff_x20 + 200,auStack_110,0,0);
    lVar10 = *(long *)(unaff_x20 + 0x118);
    if (lVar10 == 0) {
      puVar6 = PTR_PTR_1126b3e90;
      func_0x000107c610f8(PTR_PTR_1126b3e90);
      func_0x000107c453e4();
      func_0x000107c56ff8();
      lVar10 = *(long *)(*(long *)(unaff_x20 + 0xb0) + _DAT_1130807f0);
      if (lVar10 != 0) {
        func_0x000107c615f0(lVar10);
        uVar7 = 0xd000000000000043;
        func_0x000107c5fadc(0xd000000000000043,0x800000010f015680);
        uVar8 = 0;
        func_0x0001044db3fc(0);
        func_0x0001044dac34();
        func_0x000107c5027c(lVar10);
        func_0x000107c615e8(lVar10);
        func_0x000107c61170(uVar7);
        func_0x000107c61170(uVar8);
      }
      alStack_f8[0] = -0x2fffffffffffffee;
      alStack_f8[1] = 0x800000010f015660;
      puStack_e0 = puVar2;
      func_0x000100102924(alStack_f8,alStack_d8);
      lVar10 = lVar5;
      func_0x000107c61558(lVar5);
      alStack_f8[0] = lVar5;
      func_0x0001001029e8(alStack_d8,0x726f727265,0xe500000000000000,lVar10);
      func_0x000107c61170(puVar6);
      lVar5 = alStack_f8[0];
    }
    else {
      *plVar9 = lVar10;
      func_0x000107c6159c(plVar9,lVar4,1);
      func_0x000107c615f4(lVar10,2);
      FUN_101e64928(plVar9);
      func_0x000107c615e8(lVar10);
      FUN_101e67e1c(plVar9,&SUB_103b2dc40);
    }
  }
  func_0x000107c61428(unaff_x20 + 200,auStack_128,1,0);
  *(undefined1 *)(unaff_x20 + 0x12a) = 1;
  lVar10 = *plVar1;
  if (lVar10 == 0) {
    alStack_f8[0] = 0;
    puStack_e0 = puVar3;
    func_0x000100102924(alStack_f8,alStack_d8);
    lVar10 = lVar5;
    func_0x000107c61558(lVar5);
    alStack_f8[0] = lVar5;
    func_0x0001001029e8(alStack_d8,0x746c75736572,0xe600000000000000,lVar10);
    lVar5 = alStack_f8[0];
  }
  else {
    lVar11 = plVar1[1];
    lVar4 = lVar10;
    func_0x000107c614f0(lVar10);
    lVar12 = *(long *)(lVar11 + 0x18);
    pcVar13 = *(code **)(lVar12 + 0x20);
    alStack_d8[0] = lVar10;
    func_0x000107c615f0(lVar10);
    (*pcVar13)(lVar4,lVar12);
    alStack_f8[0] = 1;
    puStack_e0 = puVar3;
    func_0x000100102924(alStack_f8,alStack_d8);
    lVar4 = lVar5;
    func_0x000107c61558(lVar5);
    alStack_f8[0] = lVar5;
    func_0x0001001029e8(alStack_d8,0x746c75736572,0xe600000000000000,lVar4);
    lVar5 = alStack_f8[0];
    lVar4 = unaff_x20 + 0x180;
    func_0x000107c61648();
    if (lVar4 != 0) {
      FUN_101e5db50(lVar10,lVar11,lVar4);
      func_0x000107c61574(lVar4);
    }
    func_0x000107c615e8(lVar10);
  }
  uVar7 = *(undefined8 *)(unaff_x20 + 0x150);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x158);
  func_0x000107c61434(uVar8);
  FUN_101e61b84(uVar7,uVar8,0x705f656d75736572,0xef6b63616279616c,lVar5);
  func_0x000107c6142c(lVar5);
  func_0x000107c6142c(uVar7);
  func_0x000107c6142c(uVar8);
  return;
}



/* Entry: 101e63d40; end: 101e63f2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e63d40(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 200,auStack_58,1,0);
  *(undefined1 *)(unaff_x20 + 0x138) = 1;
  plVar1 = (long *)(*(long *)(unaff_x20 + 0xb8) + _DAT_112e33588);
  lVar6 = *plVar1;
  if (lVar6 != 0) {
    lVar8 = plVar1[1];
    func_0x000107c614f0(lVar6);
    (**(code **)(*(long *)(lVar8 + 0x18) + 0x40))();
  }
  *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  *(undefined1 *)(unaff_x20 + 0xd8) = 1;
  *(undefined1 *)(unaff_x20 + 0x110) = 0;
  *(undefined1 *)(unaff_x20 + 0x12a) = 0;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  lVar8 = unaff_x20 + 0x180;
  func_0x000107c61648();
  lVar4 = _DAT_112e33150;
  if (lVar8 == 0) goto LAB_101e63e48;
  lVar7 = *(long *)(lVar8 + 0x30);
  lVar5 = lVar7 + _DAT_112e33150;
  func_0x000107c61648();
  if (lVar5 == 0) {
LAB_101e63e1c:
    FUN_101e5e450();
    func_0x000107c61634(lVar7 + lVar4,0);
    if (*(long *)(lVar7 + _DAT_112e33110) != 0) {
      FUN_101e4dc3c();
    }
  }
  else {
    func_0x000107c61574();
    lVar5 = lVar7 + lVar4;
    func_0x000107c61648();
    if ((lVar5 != 0) && (func_0x000107c61574(), lVar5 == lVar8)) goto LAB_101e63e1c;
  }
  func_0x000107c61574(lVar8);
LAB_101e63e48:
  uVar2 = *(undefined8 *)(unaff_x20 + 0x150);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x158);
  lVar8 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar8 + 0x18) = 2;
  *(undefined8 *)(lVar8 + 0x10) = 1;
  *(undefined8 *)(lVar8 + 0x20) = 0x746c75736572;
  *(undefined **)(lVar8 + 0x48) = PTR___sSiN_11034deb0;
  *(undefined8 *)(lVar8 + 0x28) = 0xe600000000000000;
  *(ulong *)(lVar8 + 0x30) = (ulong)(lVar6 != 0);
  func_0x000107c61434(uVar3);
  lVar6 = lVar8;
  func_0x000100214a84(lVar8);
  func_0x000107c61588(lVar8);
  func_0x000101e67a98((undefined8 *)(lVar8 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  FUN_101e61b84(uVar2,uVar3,0x616c705f706f7473,0xed00006b63616279,lVar6);
  func_0x000107c6142c();
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(lVar6);
  return;
}



/* Entry: 101e63f30; end: 101e64343;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e63f30(ulong *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined2 uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined2 uStack_110;
  undefined1 auStack_b8 [24];
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  byte bStack_70;
  byte bStack_6f;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  bVar7 = (byte)param_1[2];
  func_0x000107c61428(param_2 + 0x10,auStack_b8,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (bVar7 < 2) {
      if (bVar7 == 0) {
        FUN_101e64344(uVar2,uVar3);
      }
      else {
        func_0x0001000a8868(param_2 + 0x10,*(undefined8 *)(param_2 + 0x28));
        uVar14 = 0;
        FUN_101e4c630(0);
        FUN_101e4c5d0(uVar2,0,0,3,uVar14,&PTR_DAT_11048e450);
      }
    }
    else {
      if (bVar7 == 2) {
        puVar10 = (ulong *)(param_2 + 0x170);
        func_0x000107c61618();
        if (puVar10 != (ulong *)0x0) {
          puVar11 = puVar10;
          FUN_101e67d60();
          puVar13 = &UNK_1106e89a8;
          puVar12 = puVar13;
          puVar16 = puVar11;
          func_0x000107c613f8(&UNK_1106e89a8,puVar11,0,0);
          *puVar16 = uVar2;
          func_0x000107c613f8(&UNK_1106e89a8,puVar11,0,0);
          *puVar11 = (ulong)puVar12;
          FUN_101e67da0(uVar2,uVar3,2);
          func_0x000107c614b0(puVar12);
          FUN_101e515e8(puVar13);
          func_0x000107c614ac(puVar12);
          func_0x000107c614ac(puVar13);
          *(undefined1 *)((long)puVar10 + _DAT_112e32d10) = 0;
          func_0x000107c615e8(puVar10);
        }
        uVar14 = *(undefined8 *)(param_2 + 0x150);
        uVar4 = *(undefined8 *)(param_2 + 0x158);
        lVar15 = 0x112d4b5e8;
        func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
        func_0x000107c61534();
        *(undefined8 *)(lVar15 + 0x18) = 2;
        *(undefined8 *)(lVar15 + 0x10) = 1;
        *(undefined8 *)(lVar15 + 0x20) = 0x6567617373656d;
        *(undefined8 *)(lVar15 + 0x28) = 0xe700000000000000;
        lVar17 = lVar15;
        uStack_a0 = uVar2;
        FUN_101e67d60();
        func_0x000107c61434(uVar4);
        puVar13 = &UNK_1106e89a8;
        func_0x000107c60640();
        *(undefined **)(lVar15 + 0x48) = PTR___sSSN_11034da80;
        *(undefined **)(lVar15 + 0x30) = puVar13;
        *(long *)(lVar15 + 0x38) = lVar17;
        lVar17 = lVar15;
        func_0x000100214a84(lVar15);
        func_0x000107c61588(lVar15);
        func_0x000101e67a98((undefined8 *)(lVar15 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
        FUN_101e61b84(uVar14,uVar4,0x726f727265,0xe500000000000000,lVar17);
        func_0x000107c6142c();
        func_0x000107c61574(param_2);
        func_0x000107c6142c(uVar4);
        func_0x000107c6142c(lVar17);
        return;
      }
      uVar9 = uVar3 + (uVar2 >= 2);
      if ((long)-uVar9 < 0 == SCARRY8(~uVar9,(ulong)(uVar2 < 2))) {
        if (uVar2 == 0 && uVar3 == 0) {
          FUN_101e630dc();
        }
        else {
          FUN_101e631dc();
        }
      }
      else if (uVar2 == 2 && uVar3 == 0) {
        FUN_101e63358();
      }
      else if (uVar2 == 3 && uVar3 == 0) {
        lVar15 = param_2 + 0x170;
        func_0x000107c61618();
        if (lVar15 != 0) {
          puVar1 = (undefined8 *)(lVar15 + _DAT_112e32cd0);
          lVar17 = puVar1[1];
          if (lVar17 != 0) {
            uVar14 = puVar1[4];
            uVar5 = puVar1[5];
            uVar4 = puVar1[2];
            uVar6 = puVar1[3];
            uVar18 = *puVar1;
            uVar8 = *(undefined2 *)(puVar1 + 6);
            bStack_70 = (byte)uVar8 & 1;
            bStack_6f = (byte)((ushort)uVar8 >> 8) & 1;
            uStack_140 = uVar18;
            lStack_138 = lVar17;
            uStack_130 = uVar4;
            uStack_128 = uVar6;
            uStack_120 = uVar14;
            uStack_118 = uVar5;
            uStack_110 = uVar8;
            uStack_a0 = uVar18;
            lStack_98 = lVar17;
            uStack_90 = uVar4;
            uStack_88 = uVar6;
            uStack_80 = uVar14;
            uStack_78 = uVar5;
            FUN_101e3a290(&uStack_140,auStack_178);
            func_0x000103b24fe4();
            FUN_101ad91a0(uVar18,lVar17,uVar4,uVar6,uVar14,uVar5,uVar8);
            lVar17 = lVar15 + _DAT_112e32cf8;
            func_0x000107c61428(lVar17,auStack_190,0,0);
            if (*(long *)(lVar17 + 0x18) != 0) {
              FUN_101e67dd0(lVar17,auStack_178);
              func_0x0001000a8868(auStack_178,uStack_160);
              (**(code **)(lStack_158 + 0x30))(uStack_160,lStack_158);
              func_0x000107c61574(param_2);
              func_0x000107c615e8(lVar15);
              func_0x000101e67d40(auStack_178);
              return;
            }
          }
          func_0x000107c61574(param_2);
          func_0x000107c615e8(lVar15);
          return;
        }
      }
      else {
        FUN_101e634ac();
      }
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 101e64344; end: 101e64653;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e64344(double param_1,long param_2)

{
  long *plVar1;
  double dVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  long lStack_160;
  double dStack_158;
  ulong uStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  double dStack_118;
  undefined8 uStack_110;
  long lStack_108;
  ulong uStack_100;
  long lStack_f8;
  double dStack_f0;
  ulong uStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  double dStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  long lStack_a0;
  ulong uStack_98;
  undefined1 auStack_90 [32];
  
  func_0x000107c61428(unaff_x20 + 200,auStack_90,1,0);
  *(undefined1 *)(unaff_x20 + 0x128) = 1;
  if ((0.0 < param_1) && ((*(byte *)(unaff_x20 + 0x111) & 1) == 0)) {
    *(undefined1 *)(unaff_x20 + 0x111) = 1;
    lVar6 = unaff_x20 + 0x170;
    func_0x000107c61618();
    if (lVar6 != 0) {
      func_0x000101e58434();
      func_0x000107c615e8(lVar6);
    }
  }
  func_0x0001000a8868(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_101e4c630(0);
  uVar4 = 0;
  dVar2 = param_1;
  FUN_101e4c5d0();
  if ((*(long *)(unaff_x20 + 0xf8) == 0) ||
     (func_0x000101e609e0(*(undefined8 *)(unaff_x20 + 0x130),param_1), ((uint)uVar4 & 0xff) == 1))
  goto LAB_101e64610;
  dVar12 = *(double *)(unaff_x20 + 0x130);
  plVar1 = (long *)(*(long *)(unaff_x20 + 0xb8) + _DAT_112e33588);
  lVar6 = *plVar1;
  dVar13 = dVar12;
  if (lVar6 == 0) {
    lVar8 = *(long *)PTR__kCMTimeZero_110348670;
    uVar3 = (ulong)*(uint *)(PTR__kCMTimeZero_110348670 + 8);
    uVar5 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
    uVar4 = *(ulong *)(PTR__kCMTimeZero_110348670 + 0x10);
  }
  else {
    lVar7 = plVar1[1];
    lVar8 = lVar6;
    func_0x000107c614f0();
    uVar3 = *(ulong *)(lVar7 + 0x20);
    lStack_f8 = lVar6;
    (**(code **)(uVar3 + 0x10))();
    uVar5 = (undefined4)(uVar3 >> 0x20);
  }
  dStack_f0 = (double)CONCAT44(uVar5,(int)uVar3);
  lStack_f8 = lVar8;
  uStack_e8 = uVar4;
  func_0x000107c60a3c(&lStack_f8);
  lVar6 = *plVar1;
  if (lVar6 == 0) {
    dVar16 = 0.0;
    dVar15 = 0.0;
    lVar6 = *(long *)(unaff_x20 + 0xf8);
    if (lVar6 == 0) goto LAB_101e6450c;
LAB_101e644f4:
    dVar11 = *(double *)(*(long *)(lVar6 + 0x10) + 0x10);
    dVar15 = dVar16;
  }
  else {
    lVar8 = plVar1[1];
    dVar15 = dVar13;
    func_0x000107c614f0(lVar6);
    uVar3 = *(ulong *)(lVar8 + 0x20);
    lStack_f8 = lVar6;
    (**(code **)(uVar3 + 0x18))();
    dVar15 = dVar15 * 1000.0;
    lVar6 = *(long *)(unaff_x20 + 0xf8);
    dVar16 = dVar15;
    if (lVar6 != 0) goto LAB_101e644f4;
LAB_101e6450c:
    dVar11 = 0.0;
  }
  uVar14 = *(undefined8 *)(unaff_x20 + 0x100);
  lVar6 = *(long *)(unaff_x20 + 0x108);
  lVar8 = *plVar1;
  if (lVar8 == 0) {
    lVar7 = lVar6;
    func_0x000107c61434();
LAB_101e64568:
    func_0x00010011df08();
    func_0x000107c61180();
    lVar8 = lVar7;
    func_0x000107c5faec();
    func_0x000107c61170(lVar7);
    lVar7 = lVar8;
  }
  else {
    lVar9 = plVar1[1];
    lVar7 = lVar8;
    func_0x000107c614f0();
    uVar3 = *(ulong *)(lVar9 + 0x20);
    pcVar10 = *(code **)(uVar3 + 0x20);
    lStack_f8 = lVar8;
    func_0x000107c61434(lVar6);
    (*pcVar10)();
    if (uVar3 == 0) goto LAB_101e64568;
  }
  dStack_158 = dVar13 * 1000.0;
  dStack_148 = dVar12 * 1000.0;
  dStack_140 = param_1 * 1000.0;
  uStack_a8 = dVar2 == dVar11;
  uStack_e8 = uStack_e8 & 0xffffffffffffff00;
  uStack_c8 = 0;
  uStack_110 = CONCAT71(uStack_a7,uStack_a8);
  uStack_150 = uStack_e8;
  uStack_130 = 0;
  lStack_160 = param_2;
  dStack_138 = dVar15;
  uStack_128 = uVar14;
  lStack_120 = lVar6;
  dStack_118 = dVar2;
  lStack_108 = lVar7;
  uStack_100 = uVar3;
  lStack_f8 = param_2;
  dStack_f0 = dStack_158;
  dStack_e0 = dStack_148;
  dStack_d8 = dStack_140;
  dStack_d0 = dVar15;
  uStack_c0 = uVar14;
  lStack_b8 = lVar6;
  dStack_b0 = dVar2;
  lStack_a0 = lVar7;
  uStack_98 = uVar3;
  func_0x0001002a64a8(&lStack_160);
  func_0x000101e67e58(&lStack_f8);
LAB_101e64610:
  if ((*(byte *)(unaff_x20 + 0xe8) & 1) == 0) {
    uVar14 = *(undefined8 *)(unaff_x20 + 0x130);
    *(double *)(unaff_x20 + 0x130) = param_1;
    FUN_101e647a8(uVar14,1);
  }
  return;
}



/* Entry: 101e64654; end: 101e647a7;  */

void FUN_101e64654(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 auStack_60 [6];
  
  lVar4 = 0;
  func_0x000103b31818();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar4 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)((long)&uStack_70 + lVar4);
  uVar2 = *(undefined1 *)(param_1 + 0x10);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *(undefined1 *)(param_1 + 0x50);
  *puVar6 = *(undefined8 *)(param_1 + 8);
  auStack_68[lVar4] = uVar2;
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)((long)auStack_60 + lVar4 + 8) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)((long)auStack_60 + lVar4) = uVar7;
  *(undefined8 *)((long)auStack_60 + lVar4 + 0x10) = uVar8;
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)((long)auStack_60 + lVar4 + 0x20) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)((long)auStack_60 + lVar4 + 0x18) = uVar7;
  *(undefined8 *)((long)auStack_60 + lVar4 + 0x28) = uVar5;
  *(undefined8 *)(&stack0xffffffffffffffd0 + lVar4) = uVar1;
  (&stack0xffffffffffffffd8)[lVar4] = uVar3;
  func_0x000107c6159c(puVar6);
  func_0x000107c61428(param_2 + 0x10,auStack_60 + 3,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    func_0x000107c61434(uVar5);
    FUN_101e67e1c(puVar6,&SUB_103b31818);
  }
  else {
    FUN_101e67dd0(param_2 + 0x10,&uStack_70);
    func_0x000107c61434(uVar5);
    func_0x000107c61574(param_2);
    func_0x0001000a8868(&uStack_70,auStack_60[1]);
    uVar5 = 0;
    FUN_101e4c630(0);
    (*(code *)(undefined *)0x101e4c60c)(puVar6,uVar5,&PTR_DAT_11048e450);
    FUN_101e67e1c(puVar6,&SUB_103b31818);
    func_0x000101e67d40(&uStack_70);
  }
  return;
}



/* Entry: 101e647a8; end: 101e64927;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e647a8(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  double *pdVar1;
  long lVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  double dVar5;
  ulong uVar6;
  undefined4 uVar7;
  code *pcVar8;
  double dVar9;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if ((param_1 != param_2) && (lVar2 = *(long *)(unaff_x20 + 0x168), lVar2 != 0)) {
    pdVar1 = (double *)(*(long *)(unaff_x20 + 0xb8) + _DAT_112e33588);
    dVar3 = *pdVar1;
    dVar9 = param_1;
    if (dVar3 == 0.0) {
      dVar4 = *(double *)PTR__kCMTimeZero_110348670;
      uVar6 = (ulong)*(uint *)(PTR__kCMTimeZero_110348670 + 8);
      uVar7 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
      param_5 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      func_0x000107c6157c(lVar2);
    }
    else {
      dVar5 = pdVar1[1];
      dVar4 = dVar3;
      func_0x000107c614f0();
      uVar6 = *(ulong *)((long)dVar5 + 0x20);
      pcVar8 = *(code **)(uVar6 + 0x10);
      dStack_f0 = dVar3;
      func_0x000107c6157c(lVar2);
      (*pcVar8)();
      uVar7 = (undefined4)(uVar6 >> 0x20);
    }
    dStack_e8 = (double)CONCAT44(uVar7,(int)uVar6);
    dStack_f0 = dVar4;
    dStack_e0 = (double)param_5;
    func_0x000107c60a3c(&dStack_f0);
    FUN_101e5b11c(auStack_a0,param_1,param_2);
    if (lStack_90 == 0) {
      func_0x000107c61574(lVar2);
    }
    else {
      uStack_c8 = uStack_80;
      uStack_d0 = uStack_88;
      uStack_100 = *(undefined8 *)(lVar2 + 0x20);
      uStack_f8 = *(undefined8 *)(lVar2 + 0x28);
      uStack_c0 = uStack_98;
      lStack_b8 = lStack_90;
      uStack_118 = uStack_80;
      uStack_120 = uStack_88;
      lStack_108 = lStack_90;
      uStack_110 = uStack_98;
      dStack_140 = dVar9;
      dStack_138 = param_1;
      dStack_130 = param_2;
      uStack_128 = param_3;
      dStack_f0 = dVar9;
      dStack_e8 = param_1;
      dStack_e0 = param_2;
      uStack_d8 = param_3;
      uStack_b0 = uStack_100;
      uStack_a8 = uStack_f8;
      func_0x000107c61434();
      func_0x0001002a64a8(&dStack_140);
      func_0x000107c61574(lVar2);
      FUN_101e5d150(&dStack_f0);
    }
  }
  return;
}



/* Entry: 101e64928; end: 101e64f3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e64928(undefined8 param_1,undefined8 param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  code *pcVar16;
  undefined4 uVar17;
  long lStack_e0;
  undefined1 auStack_d8 [104];
  
  lVar3 = 0;
  func_0x000103b2dc40();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar8 = (undefined8 *)(auStack_d8 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar12 = (undefined8 *)((long)puVar8 - extraout_x12);
  puVar1 = (ulong *)(*(long *)(unaff_x20 + 0xb8) + _DAT_112e33588);
  uVar10 = *puVar1;
  if (uVar10 != 0) {
    uVar14 = puVar1[1];
    uVar4 = uVar10;
    func_0x000107c614f0();
    pcVar16 = *(code **)(uVar14 + 0x60);
    func_0x000107c615f0(uVar10);
    (*pcVar16)(uVar4,uVar14);
    if (uVar4 == 0) {
      func_0x000107c615e8(uVar10);
    }
    else {
      uVar14 = uVar4;
      func_0x000107c4d444();
      func_0x000107c61180();
      func_0x000107c615e8(uVar4);
      func_0x000101e3cf64(param_2,puVar12);
      puVar5 = puVar12;
      func_0x000107c614c4(puVar12,lVar3);
      if ((int)puVar5 == 0) {
        func_0x000107c615e8(uVar10);
        func_0x000107c61170(uVar14);
        FUN_101e67e1c(puVar12,&SUB_103b2dc40);
      }
      else if ((int)puVar5 == 1) {
        uVar13 = *puVar12;
        uVar11 = uVar13;
        func_0x000107c4d444(uVar13);
        func_0x000107c61180();
        func_0x000107c615e8(uVar13);
        func_0x000107c61174(uVar11);
        uVar4 = uVar14;
        func_0x000107c5178c();
        func_0x000107c615e8(uVar10);
        func_0x000107c61170(uVar11);
        func_0x000107c61170(uVar11);
        func_0x000107c61170(uVar14);
        if ((uVar4 & 1) != 0) {
          return;
        }
      }
      else {
        func_0x000107c615e8(uVar10);
        func_0x000107c61170(uVar14);
        lVar6 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar6 + -8) + 8))(puVar12,lVar6);
      }
    }
  }
  FUN_101e67ad8();
  func_0x000101e3cf64(param_2,puVar8);
  puVar12 = puVar8;
  func_0x000107c614c4(puVar8,lVar3);
  if ((int)puVar12 == 0) {
    FUN_101e67e1c(puVar8,&SUB_103b2dc40);
LAB_101e64dd8:
    uVar11 = *(undefined8 *)(unaff_x20 + 0x150);
    uVar13 = *(undefined8 *)(unaff_x20 + 0x158);
    lVar3 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    *(undefined8 *)(lVar3 + 0x20) = 0x6567617373656d;
    *(undefined **)(lVar3 + 0x48) = PTR___sSSN_11034da80;
    *(undefined8 *)(lVar3 + 0x28) = 0xe700000000000000;
    *(undefined8 *)(lVar3 + 0x30) = 0x79616c705f6c696e;
    *(undefined8 *)(lVar3 + 0x38) = 0xea00000000007265;
    func_0x000107c61434(uVar13);
    lVar6 = lVar3;
    func_0x000100214a84(lVar3);
    func_0x000107c61588(lVar3);
    func_0x000101e67a98((undefined8 *)(lVar3 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    FUN_101e61b84(uVar11,uVar13,0x726f727265,0xe500000000000000,lVar6);
    func_0x000107c6142c();
    func_0x000107c6142c(uVar13);
    func_0x000107c6142c(lVar6);
    puVar8 = (undefined8 *)(unaff_x20 + 0x170);
    func_0x000107c61618();
    if (puVar8 != (undefined8 *)0x0) {
      puVar12 = puVar8;
      FUN_101e67d60();
      puVar9 = &UNK_1106e89a8;
      func_0x000107c613f8(&UNK_1106e89a8,puVar12,0,0);
      *puVar12 = 0x8000000000000008;
      FUN_101e515e8();
      func_0x000107c614ac(puVar9);
      *(undefined1 *)((long)puVar8 + _DAT_112e32d10) = 0;
      func_0x000107c615e8(puVar8);
    }
    func_0x000109128f44();
    return;
  }
  if ((int)puVar12 != 1) {
    lVar3 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar3 + -8) + 8))(puVar8,lVar3);
    goto LAB_101e64dd8;
  }
  uVar11 = *puVar8;
  lVar3 = *(long *)(unaff_x20 + 0x60);
  lVar6 = *(long *)(unaff_x20 + 0x68);
  func_0x0001000a8868(unaff_x20 + 0x48,lVar3);
  lVar7 = *(long *)(unaff_x20 + 0xa0);
  (**(code **)(lVar6 + 8))(lVar7,lVar3,lVar6);
  if (lVar7 == 0) {
    func_0x000107c615e8(uVar11);
    goto LAB_101e64dd8;
  }
  func_0x000107c615f0();
  func_0x000107c6071c();
  func_0x000107c61428(unaff_x20 + 200,auStack_d8,1,0);
  *(undefined8 *)(unaff_x20 + 200) = param_1;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  *(undefined1 *)(unaff_x20 + 0x111) = 0;
  lVar6 = lVar7;
  func_0x000107c614f0(lVar7);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x150);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x158);
  pcVar16 = *(code **)(lVar3 + 0x50);
  func_0x000107c61434(uVar2);
  (*pcVar16)(uVar13,uVar2,lVar6,lVar3);
  func_0x000107c615e8(lVar7);
  lVar15 = *(long *)(lVar3 + 0x38);
  lStack_e0 = lVar7;
  (**(code **)(lVar15 + 0x10))(*(undefined1 *)(unaff_x20 + 0xdc),lVar6,lVar15);
  lVar6 = lStack_e0;
  uVar17 = *(undefined4 *)(unaff_x20 + 0xe0);
  lVar7 = lStack_e0;
  func_0x000107c614f0(lStack_e0);
  lStack_e0 = lVar6;
  (**(code **)(lVar15 + 0x28))(uVar17);
  lVar6 = lStack_e0;
  lVar15 = lStack_e0;
  func_0x000107c614f0(lStack_e0);
  pcVar16 = *(code **)(lVar3 + 0x68);
  func_0x000107c615f4(lVar6,2);
  func_0x000107c615f4(uVar11,2);
  (*pcVar16)();
  uVar13 = *(undefined8 *)(unaff_x20 + 0x118);
  *(undefined8 *)(unaff_x20 + 0x118) = uVar11;
  func_0x000107c615e8(uVar13);
  func_0x000107c615f0(lVar6);
  FUN_101e621e4();
  lStack_e0 = lVar6;
  (**(code **)(*(long *)(lVar3 + 0x28) + 0x10))(*(undefined1 *)(unaff_x20 + 0x1a0),lVar15);
  func_0x000107c615e8(lVar6);
  func_0x000107c615f0(lVar6);
  func_0x000101e677b0();
  func_0x000107c615ec(lVar6,2);
  if ((*(byte *)(unaff_x20 + 0xae) & 1) != 0) {
    uVar10 = unaff_x20 + 0x180;
    func_0x000107c61648();
    if (uVar10 != 0) {
      uVar4 = uVar10;
      (**(code **)(*(long *)(uVar10 + 0x30) + _DAT_112e33118))();
      if (((uVar4 & 1) != 0) && (*(long *)(uVar10 + 0x28) == 1)) {
        FUN_101e5d868();
        FUN_101e5af5c(lVar6,uVar4,lVar7,lVar3);
        func_0x000107c61574(uVar4);
      }
      func_0x000107c61574(uVar10);
      uVar10 = *puVar1;
      goto joined_r0x000101e64d88;
    }
  }
  lVar3 = *(long *)(lVar3 + 0x10);
  pcVar16 = *(code **)(lVar3 + 0x18);
  lStack_e0 = lVar6;
  func_0x000107c615f0(lVar6);
  (*pcVar16)(0,lVar15,lVar3);
  func_0x000107c615e8(lVar6);
  uVar10 = *puVar1;
joined_r0x000101e64d88:
  if (uVar10 != 0) {
    uVar14 = puVar1[1];
    uVar4 = uVar10;
    func_0x000107c614f0(uVar10);
    pcVar16 = *(code **)(uVar14 + 0x90);
    func_0x000107c615f0(uVar10);
    (*pcVar16)(uVar4,uVar14);
    func_0x000107c615e8(uVar10);
  }
  func_0x000107c615e8(uVar11);
  func_0x000107c615e8(lVar6);
  return;
}



/* Entry: 101e64f3c; end: 101e64f47;  */

void FUN_101e64f3c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(*unaff_x20 + 0xb8));
  return;
}



/* Entry: 101e64f48; end: 101e64f87;  */

void FUN_101e64f48(void)

{
  FUN_101e64928();
  return;
}



/* Entry: 101e64f88; end: 101e65003;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e64f88(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  code *pcVar5;
  
  plVar1 = (long *)(*(long *)(*unaff_x20 + 0xb8) + _DAT_112e33588);
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    lVar3 = plVar1[1];
    lVar2 = lVar4;
    func_0x000107c614f0(lVar4);
    pcVar5 = *(code **)(lVar3 + 0x90);
    func_0x000107c615f0(lVar4);
    (*pcVar5)(lVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar4);
    return;
  }
  return;
}



/* Entry: 101e65004; end: 101e65063;  */

void FUN_101e65004(void)

{
  FUN_101e67ad8();
  return;
}



/* Entry: 101e65064; end: 101e6506b;  */

void FUN_101e65064(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(*unaff_x20);
  return;
}



/* Entry: 101e6506c; end: 101e650c3;  */

bool FUN_101e6506c(void)

{
  bool bVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *unaff_x20;
  func_0x000107c61428(lVar2 + 200,auStack_38,0,0);
  if (*(long *)(lVar2 + 0x148) == -1) {
    bVar1 = true;
  }
  else {
    bVar1 = *(long *)(lVar2 + 0x140) < *(long *)(lVar2 + 0x148);
  }
  return bVar1;
}



/* Entry: 101e650c4; end: 101e653d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e650c4(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  plVar1 = (long *)(*(long *)(unaff_x20 + 0xb8) + _DAT_112e33588);
  lVar7 = *plVar1;
  if (lVar7 != 0) {
    lVar8 = plVar1[1];
    func_0x000107c614f0(lVar7);
    lVar7 = *(long *)(lVar8 + 0x20);
    (**(code **)(lVar7 + 0x20))();
    if (lVar7 != 0) {
      FUN_101e5d18c(0);
      func_0x000107c613fc();
      func_0x000107c61434();
      FUN_101e5ce2c();
      func_0x000107c6142c(lVar7);
      plVar1 = *(long **)(unaff_x20 + 0x168);
      *(undefined8 *)(unaff_x20 + 0x168) = param_1;
      func_0x000107c61574();
      lVar7 = *(long *)(unaff_x20 + 0x168);
      if (lVar7 != 0) {
        FUN_101e5d110();
        func_0x000107c6157c(lVar7);
        plVar2 = plVar1;
        func_0x000104884898(plVar1);
        func_0x0001000c2068();
        func_0x000107c61574(lVar7);
        func_0x000107c61574(plVar2);
        puVar3 = &UNK_11048f198;
        func_0x000107c613fc(&UNK_11048f198,0x18,7);
        func_0x000107c61644(puVar3 + 0x10);
        uVar4 = 0x101e67f6c;
        puVar5 = puVar3;
        (**(code **)(*plVar1 + 0x60))(0x101e67f6c);
        func_0x000107c61574(plVar1);
        func_0x000107c61574(puVar3);
        func_0x000107c614f0(uVar4);
        uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
        pcVar9 = *(code **)(puVar5 + 0x18);
        func_0x000107c6157c(uVar6);
        (*pcVar9)();
        func_0x000107c615e8(uVar4);
        func_0x000107c61574(uVar6);
      }
    }
  }
  return;
}



/* Entry: 101e653d4; end: 101e6553f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e653d4(undefined8 param_1,ulong param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [24];
  
  lVar1 = 0;
  func_0x000101e60acc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = param_5;
  func_0x000107c61428(unaff_x20 + 200,auStack_88,1,0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x108);
  *(long *)(unaff_x20 + 0xf8) = lVar1;
  *(undefined8 *)(unaff_x20 + 0x100) = param_7;
  *(undefined8 *)(unaff_x20 + 0x108) = param_8;
  func_0x000107c61434(param_5);
  func_0x000107c61434(param_8);
  func_0x000107c6142c(uVar2);
  func_0x000107c61574(uVar3);
  FUN_101e602cc(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  lVar1 = param_6;
  FUN_101e606d8();
  func_0x000107c61170(param_6);
  *(undefined ***)(lVar1 + _DAT_112e33238 + 8) = &PTR_DAT_11048f038;
  func_0x000107c61604();
  *(undefined ***)(lVar1 + _DAT_112e33240 + 8) = &PTR_DAT_11048f060;
  func_0x000107c61604();
  if ((param_2 & 1) != 0) {
    FUN_101e5f8d8();
  }
  if ((param_3 & 1) != 0) {
    func_0x000101e5f95c(param_1);
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0xc0);
  *(long *)(unaff_x20 + 0xc0) = lVar1;
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101e65540; end: 101e6567b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e65540(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  long unaff_x20;
  undefined4 uVar9;
  long lVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  long lStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  long lStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  uVar9 = (undefined4)param_3;
  uVar11 = (undefined4)((ulong)param_3 >> 0x20);
  if (*(char *)(unaff_x20 + 0xaf) == '\x01') {
    func_0x000107c61428(unaff_x20 + 200,auStack_78,0,0);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x130);
    lStack_90 = param_2;
    uStack_88 = uVar9;
    uStack_84 = uVar11;
    uStack_80 = param_4;
    func_0x000107c60a3c(&lStack_90);
    puVar3 = &UNK_11048f198;
    func_0x000107c613fc(&UNK_11048f198,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    puVar4 = &UNK_11048f1c0;
    func_0x000107c613fc(&UNK_11048f1c0,0x38,7);
    *(undefined8 *)(puVar4 + 0x10) = param_5;
    *(undefined8 *)(puVar4 + 0x18) = param_6;
    *(undefined **)(puVar4 + 0x20) = puVar3;
    *(undefined8 *)(puVar4 + 0x28) = param_1;
    *(undefined8 *)(puVar4 + 0x30) = uVar12;
    func_0x000101237340(param_5,param_6);
    func_0x000107c6157c(puVar3);
    FUN_101e6567c(param_2,param_3,param_4,FUN_101e67f48,puVar4);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar4);
    return;
  }
  puVar3 = &UNK_11048f1e8;
  func_0x000107c613fc(&UNK_11048f1e8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  plVar1 = (long *)(*(long *)(unaff_x20 + 0xb8) + _DAT_112e33588);
  lVar10 = *plVar1;
  if (lVar10 == 0) {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x150);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x158);
    lVar10 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    uVar12 = 2;
    *(undefined8 *)(lVar10 + 0x18) = 4;
    *(undefined8 *)(lVar10 + 0x10) = 2;
    *(undefined8 *)(lVar10 + 0x20) = 0x656d6974;
    *(undefined8 *)(lVar10 + 0x28) = 0xe400000000000000;
    func_0x000107c61434(uVar2);
    lStack_100 = param_2;
    uStack_f8 = uVar9;
    uStack_f4 = uVar11;
    uStack_f0 = param_4;
    func_0x000107c60a3c(&lStack_100);
    puVar4 = PTR___sSdN_11034dd90;
    *(undefined8 *)(lVar10 + 0x30) = uVar12;
    *(undefined **)(lVar10 + 0x48) = puVar4;
    *(undefined8 *)(lVar10 + 0x50) = 0x746c75736572;
    *(undefined8 *)(lVar10 + 0x58) = 0xe600000000000000;
    uVar12 = *(undefined8 *)(puVar3 + 0x10);
    *(undefined **)(lVar10 + 0x78) = PTR___sSiN_11034deb0;
    *(undefined8 *)(lVar10 + 0x60) = uVar12;
    lVar5 = lVar10;
    func_0x000100214a84(lVar10);
    func_0x000107c61588(lVar10);
    uVar12 = 0x112d4b5f0;
    func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
    func_0x000107c61408((undefined8 *)(lVar10 + 0x20),2,uVar12);
    FUN_101e61b84(uVar6,uVar2,0x6b656573,0xe400000000000000,lVar5);
    func_0x000107c61574(puVar3);
    func_0x000107c6142c(uVar6);
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(lVar5);
  }
  else {
    lVar7 = plVar1[1];
    lVar5 = lVar10;
    func_0x000107c614f0();
    puVar4 = &UNK_11048f210;
    lStack_100 = lVar10;
    func_0x000107c613fc(&UNK_11048f210,0x48,7);
    *(undefined8 *)(puVar4 + 0x10) = param_5;
    *(undefined8 *)(puVar4 + 0x18) = param_6;
    *(undefined **)(puVar4 + 0x20) = puVar3;
    *(long *)(puVar4 + 0x28) = unaff_x20;
    *(long *)(puVar4 + 0x30) = param_2;
    *(undefined4 *)(puVar4 + 0x38) = uVar9;
    *(undefined4 *)(puVar4 + 0x3c) = uVar11;
    *(undefined8 *)(puVar4 + 0x40) = param_4;
    lVar7 = *(long *)(lVar7 + 0x18);
    pcVar8 = *(code **)(lVar7 + 0x38);
    func_0x000107c615f0(lVar10);
    func_0x000101237340(param_5,param_6);
    func_0x000107c6157c(puVar3);
    func_0x000107c6157c(unaff_x20);
    (*pcVar8)(param_2,param_3,param_4,0x101e67f58,puVar4,lVar5,lVar7);
    func_0x000107c61574(puVar3);
    func_0x000107c615e8(lVar10);
    func_0x000107c61574(puVar4);
  }
  return;
}



/* Entry: 101e6567c; end: 101e658d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e6567c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  undefined4 uVar11;
  long lStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  
  puVar3 = &UNK_11048f1e8;
  func_0x000107c613fc(&UNK_11048f1e8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  plVar1 = (long *)(*(long *)(unaff_x20 + 0xb8) + _DAT_112e33588);
  lVar10 = *plVar1;
  uVar11 = (undefined4)((ulong)param_2 >> 0x20);
  if (lVar10 == 0) {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x150);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x158);
    lVar10 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    uVar9 = 2;
    *(undefined8 *)(lVar10 + 0x18) = 4;
    *(undefined8 *)(lVar10 + 0x10) = 2;
    *(undefined8 *)(lVar10 + 0x20) = 0x656d6974;
    *(undefined8 *)(lVar10 + 0x28) = 0xe400000000000000;
    func_0x000107c61434(uVar2);
    lStack_100 = param_1;
    uStack_f8 = (int)param_2;
    uStack_f4 = uVar11;
    uStack_f0 = param_3;
    func_0x000107c60a3c(&lStack_100);
    puVar4 = PTR___sSdN_11034dd90;
    *(undefined8 *)(lVar10 + 0x30) = uVar9;
    *(undefined **)(lVar10 + 0x48) = puVar4;
    *(undefined8 *)(lVar10 + 0x50) = 0x746c75736572;
    *(undefined8 *)(lVar10 + 0x58) = 0xe600000000000000;
    uVar9 = *(undefined8 *)(puVar3 + 0x10);
    *(undefined **)(lVar10 + 0x78) = PTR___sSiN_11034deb0;
    *(undefined8 *)(lVar10 + 0x60) = uVar9;
    lVar5 = lVar10;
    func_0x000100214a84(lVar10);
    func_0x000107c61588(lVar10);
    uVar9 = 0x112d4b5f0;
    func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
    func_0x000107c61408((undefined8 *)(lVar10 + 0x20),2,uVar9);
    FUN_101e61b84(uVar6,uVar2,0x6b656573,0xe400000000000000,lVar5);
    func_0x000107c61574(puVar3);
    func_0x000107c6142c(uVar6);
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(lVar5);
  }
  else {
    lVar7 = plVar1[1];
    lVar5 = lVar10;
    func_0x000107c614f0();
    puVar4 = &UNK_11048f210;
    lStack_100 = lVar10;
    func_0x000107c613fc(&UNK_11048f210,0x48,7);
    *(undefined8 *)(puVar4 + 0x10) = param_4;
    *(undefined8 *)(puVar4 + 0x18) = param_5;
    *(undefined **)(puVar4 + 0x20) = puVar3;
    *(long *)(puVar4 + 0x28) = unaff_x20;
    *(long *)(puVar4 + 0x30) = param_1;
    *(int *)(puVar4 + 0x38) = (int)param_2;
    *(undefined4 *)(puVar4 + 0x3c) = uVar11;
    *(undefined8 *)(puVar4 + 0x40) = param_3;
    lVar7 = *(long *)(lVar7 + 0x18);
    pcVar8 = *(code **)(lVar7 + 0x38);
    func_0x000107c615f0(lVar10);
    func_0x000101237340(param_4,param_5);
    func_0x000107c6157c(puVar3);
    func_0x000107c6157c();
    (*pcVar8)(param_1,param_2,param_3,0x101e67f58,puVar4,lVar5,lVar7);
    func_0x000107c61574(puVar3);
    func_0x000107c615e8(lVar10);
    func_0x000107c61574(puVar4);
  }
  return;
}



/* Entry: 101e658d8; end: 101e65a5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e658d8(undefined8 param_1,undefined8 param_2,uint param_3,code *param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  long lStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar10 = param_1;
  func_0x000107c61428(param_6 + 0x10,auStack_78,0,0);
  param_6 = param_6 + 0x10;
  func_0x000107c61648();
  if (param_6 != 0) {
    if ((param_3 & 1) != 0) {
      uVar2 = 1;
      func_0x000107c61428(param_6 + 200,auStack_90,1,0);
      *(undefined8 *)(param_6 + 0x130) = param_1;
      lVar5 = *(long *)(param_6 + 0x168);
      if (lVar5 != 0) {
        plVar1 = (long *)(*(long *)(param_6 + 0xb8) + _DAT_112e33588);
        lVar3 = *plVar1;
        if (lVar3 == 0) {
          lVar4 = *(long *)PTR__kCMTimeZero_110348670;
          uVar7 = (ulong)*(uint *)(PTR__kCMTimeZero_110348670 + 8);
          uVar8 = *(undefined4 *)(PTR__kCMTimeZero_110348670 + 0xc);
          uVar2 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
          func_0x000107c6157c(lVar5);
        }
        else {
          lVar6 = plVar1[1];
          lVar4 = lVar3;
          func_0x000107c614f0();
          uVar7 = *(ulong *)(lVar6 + 0x20);
          pcVar9 = *(code **)(uVar7 + 0x10);
          lStack_a8 = lVar3;
          func_0x000107c6157c(lVar5);
          (*pcVar9)();
          uVar8 = (undefined4)(uVar7 >> 0x20);
        }
        uStack_a0 = (undefined4)uVar7;
        lStack_a8 = lVar4;
        uStack_9c = uVar8;
        uStack_98 = uVar2;
        func_0x000107c60a3c(&lStack_a8);
        FUN_101e5b1b8(param_2,param_1,uVar10,0xf);
        func_0x000107c61574(param_6);
        param_6 = lVar5;
      }
      func_0x000107c61574(param_6);
      if (param_4 == (code *)0x0) {
        return;
      }
      param_3 = 1;
      goto LAB_101e65a34;
    }
    func_0x000107c61574();
  }
  if (param_4 == (code *)0x0) {
    return;
  }
LAB_101e65a34:
  (*param_4)(param_3 & 1);
  return;
}



/* Entry: 101e65a60; end: 101e65c03;  */

void FUN_101e65a60(char param_1,code *param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined1 auStack_78 [24];
  
  if (param_2 != (code *)0x0) {
    (*param_2)(param_1 == '\x02');
  }
  func_0x000107c61428(param_4 + 0x10,auStack_78,1,0);
  *(undefined8 *)(param_4 + 0x10) = 1;
  uVar1 = *(undefined8 *)(param_5 + 0x150);
  uVar2 = *(undefined8 *)(param_5 + 0x158);
  lVar4 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  uVar6 = 2;
  *(undefined8 *)(lVar4 + 0x18) = 4;
  *(undefined8 *)(lVar4 + 0x10) = 2;
  *(undefined8 *)(lVar4 + 0x20) = 0x656d6974;
  *(undefined8 *)(lVar4 + 0x28) = 0xe400000000000000;
  func_0x000107c61434(uVar2);
  uStack_108 = (undefined4)param_7;
  uStack_104 = (undefined4)((ulong)param_7 >> 0x20);
  uStack_110 = param_6;
  uStack_100 = param_8;
  func_0x000107c60a3c(&uStack_110);
  puVar3 = PTR___sSdN_11034dd90;
  *(undefined8 *)(lVar4 + 0x30) = uVar6;
  *(undefined **)(lVar4 + 0x48) = puVar3;
  *(undefined8 *)(lVar4 + 0x50) = 0x746c75736572;
  *(undefined8 *)(lVar4 + 0x58) = 0xe600000000000000;
  func_0x000107c61428(param_4 + 0x10,&uStack_110,0,0);
  uVar6 = *(undefined8 *)(param_4 + 0x10);
  *(undefined **)(lVar4 + 0x78) = PTR___sSiN_11034deb0;
  *(undefined8 *)(lVar4 + 0x60) = uVar6;
  lVar5 = lVar4;
  func_0x000100214a84(lVar4);
  func_0x000107c61588(lVar4);
  uVar6 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar4 + 0x20),2,uVar6);
  FUN_101e61b84(uVar1,uVar2,0x6b656573,0xe400000000000000,lVar5);
  func_0x000107c6142c();
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(lVar5);
  return;
}



/* Entry: 101e65c04; end: 101e65e97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e65c04(long *param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined1 auStack_68 [24];
  
  plVar1 = (long *)(*(long *)(unaff_x20 + 0xb8) + _DAT_112e33588);
  lVar4 = *plVar1;
  lVar9 = 0;
  lVar5 = 0;
  if (lVar4 == 0) {
    lVar6 = 0;
    lVar3 = 0;
    param_4 = 0;
    param_5 = 0;
    lVar4 = 0;
  }
  else {
    lVar5 = plVar1[1];
    lVar6 = lVar4;
    func_0x000107c614f0();
    pcVar8 = *(code **)(lVar5 + 0x60);
    func_0x000107c615f0(lVar4);
    (*pcVar8)(lVar6,lVar5);
    func_0x000107c615e8(lVar4);
    if (lVar6 == 0) {
      lVar3 = 0;
      param_4 = 0;
      param_5 = 0;
      lVar9 = 0;
      lVar5 = 0;
      lVar4 = 0;
    }
    else {
      func_0x000107c61428(unaff_x20 + 200,auStack_68,0,0);
      lVar7 = *(long *)(unaff_x20 + 0xd0);
      cVar2 = *(char *)(unaff_x20 + 0xd8);
      if (*plVar1 == 0) {
        lVar5 = *(long *)(PTR__CGRectZero_110347608 + 8);
        lVar9 = *(long *)PTR__CGRectZero_110347608;
        param_5 = *(long *)(PTR__CGRectZero_110347608 + 0x18);
        param_4 = *(long *)(PTR__CGRectZero_110347608 + 0x10);
      }
      else {
        lVar4 = plVar1[1];
        func_0x000107c614f0(*plVar1);
        lVar5 = param_3;
        (**(code **)(*(long *)(lVar4 + 0x30) + 0x10))();
      }
      lVar3 = *(long *)(unaff_x20 + 200);
      lVar4 = 0;
      if (cVar2 != '\x01') {
        lVar4 = lVar7;
      }
    }
  }
  *param_1 = lVar6;
  param_1[1] = lVar4;
  param_1[2] = lVar3;
  param_1[4] = lVar5;
  param_1[3] = lVar9;
  param_1[6] = param_5;
  param_1[5] = param_4;
  return;
}



/* Entry: 101e65e98; end: 101e66007;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e65e98(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 200,auStack_78,1,0);
  if ((float)param_1 != *(float *)(unaff_x20 + 0xe0)) {
    *(float *)(unaff_x20 + 0xe0) = (float)param_1;
    plVar1 = (long *)(*(long *)(unaff_x20 + 0xb8) + _DAT_112e33588);
    lVar3 = *plVar1;
    lVar4 = plVar1[1];
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      lVar2 = lVar3;
      func_0x000107c614f0(lVar3);
      lVar5 = *(long *)(lVar4 + 0x38);
      pcVar6 = *(code **)(lVar5 + 0x28);
      func_0x000107c615f4(lVar3,2);
      (*pcVar6)(param_1,lVar2,lVar5);
      func_0x000107c615e8(lVar3);
    }
    FUN_101e621e4(lVar3,lVar4);
    lVar3 = unaff_x20 + 0x180;
    func_0x000107c61648();
    if (lVar3 != 0) {
      lVar4 = *(long *)(lVar3 + 0x30);
      if (*(char *)(lVar4 + _DAT_112e33168) == '\x01') {
        lVar2 = lVar4 + _DAT_112e33150;
        func_0x000107c61648();
        if ((lVar2 != 0) && (func_0x000107c61574(), lVar2 == lVar3)) {
          lVar4 = lVar4 + _DAT_112e33158;
          func_0x000107c61618();
          if (lVar4 != 0) {
            FUN_101e5e26c();
            func_0x000107c61574(lVar3);
            func_0x000107c615e8(lVar4);
            return;
          }
        }
      }
      func_0x000107c61574();
    }
  }
  return;
}



/* Entry: 101e66008; end: 101e66083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101e66008(void)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  code *pcVar6;
  
  plVar1 = (long *)(*(long *)(unaff_x20 + 0xb8) + _DAT_112e33588);
  lVar5 = *plVar1;
  if (lVar5 == 0) {
    uVar2 = 0;
  }
  else {
    lVar4 = plVar1[1];
    lVar3 = lVar5;
    func_0x000107c614f0(lVar5);
    pcVar6 = *(code **)(lVar4 + 0x40);
    func_0x000107c615f0(lVar5);
    (*pcVar6)(lVar3,lVar4);
    func_0x000107c615e8(lVar5);
    uVar2 = (uint)lVar3 & 1;
  }
  return uVar2;
}



/* Entry: 101e66084; end: 101e660b7;  */

undefined1  [16] FUN_101e66084(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  undefined1 auStack_28 [24];
  
  func_0x000107c61428(unaff_x20 + 0x1a8,auStack_28,0,0);
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *(unkuint9 *)(unaff_x20 + 0x1a8);
  return auVar1;
}



/* Entry: 101e660b8; end: 101e660bb;  */

void FUN_101e660b8(long param_1,char param_2)

{
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x1a8,auStack_48,1,0);
  *(long *)(unaff_x20 + 0x1a8) = param_1;
  *(char *)(unaff_x20 + 0x1b0) = param_2;
  if (param_2 == '\x01') {
    if (param_1 == 0) {
      func_0x000107c61428(unaff_x20 + 200,auStack_60,1,0);
      *(undefined8 *)(unaff_x20 + 0x148) = 0xffffffffffffffff;
      return;
    }
    param_1 = 1;
  }
  func_0x000107c61428(unaff_x20 + 200,auStack_60,1,0);
  *(long *)(unaff_x20 + 0x148) = param_1;
  return;
}



/* Entry: 101e660bc; end: 101e66117;  */

code * FUN_101e660bc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0x7b3);
  }
  *param_1 = lVar1;
  lVar2 = lVar1;
  FUN_101e620f0();
  *(long *)(lVar1 + 0x20) = lVar2;
  return FUN_101e66118;
}



/* Entry: 101e66118; end: 101e66143;  */

void FUN_101e66118(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 101e66144; end: 101e66163;  */

void FUN_101e66144(void)

{
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 200,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + 0x138) = 0;
  FUN_101e638e8(0x6c616e7265747865,0xe800000000000000);
  return;
}



/* Entry: 101e66164; end: 101e661c3;  */

void FUN_101e66164(undefined8 param_1,undefined8 param_2,undefined1 param_3,code *param_4)

{
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 200,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + 0x138) = param_3;
  (*param_4)(0x6c616e7265747865,0xe800000000000000);
  return;
}



/* Entry: 101e661c4; end: 101e661c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e661c4(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 200,auStack_58,1,0);
  *(undefined1 *)(unaff_x20 + 0x138) = 1;
  plVar1 = (long *)(*(long *)(unaff_x20 + 0xb8) + _DAT_112e33588);
  lVar6 = *plVar1;
  if (lVar6 != 0) {
    lVar8 = plVar1[1];
    func_0x000107c614f0(lVar6);
    (**(code **)(*(long *)(lVar8 + 0x18) + 0x40))();
  }
  *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  *(undefined1 *)(unaff_x20 + 0xd8) = 1;
  *(undefined1 *)(unaff_x20 + 0x110) = 0;
  *(undefined1 *)(unaff_x20 + 0x12a) = 0;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  lVar8 = unaff_x20 + 0x180;
  func_0x000107c61648();
  lVar4 = _DAT_112e33150;
  if (lVar8 == 0) goto LAB_101e63e48;
  lVar7 = *(long *)(lVar8 + 0x30);
  lVar5 = lVar7 + _DAT_112e33150;
  func_0x000107c61648();
  if (lVar5 == 0) {
LAB_101e63e1c:
    FUN_101e5e450();
    func_0x000107c61634(lVar7 + lVar4,0);
    if (*(long *)(lVar7 + _DAT_112e33110) != 0) {
      FUN_101e4dc3c();
    }
  }
  else {
    func_0x000107c61574();
    lVar5 = lVar7 + lVar4;
    func_0x000107c61648();
    if ((lVar5 != 0) && (func_0x000107c61574(), lVar5 == lVar8)) goto LAB_101e63e1c;
  }
  func_0x000107c61574(lVar8);
LAB_101e63e48:
  uVar2 = *(undefined8 *)(unaff_x20 + 0x150);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x158);
  lVar8 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar8 + 0x18) = 2;
  *(undefined8 *)(lVar8 + 0x10) = 1;
  *(undefined8 *)(lVar8 + 0x20) = 0x746c75736572;
  *(undefined **)(lVar8 + 0x48) = PTR___sSiN_11034deb0;
  *(undefined8 *)(lVar8 + 0x28) = 0xe600000000000000;
  *(ulong *)(lVar8 + 0x30) = (ulong)(lVar6 != 0);
  func_0x000107c61434(uVar3);
  lVar6 = lVar8;
  func_0x000100214a84(lVar8);
  func_0x000107c61588(lVar8);
  func_0x000101e67a98((undefined8 *)(lVar8 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  FUN_101e61b84(uVar2,uVar3,0x616c705f706f7473,0xed00006b63616279,lVar6);
  func_0x000107c6142c();
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(lVar6);
  return;
}



/* Entry: 101e661c8; end: 101e6629f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e661c8(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  plVar1 = (long *)(*(long *)(unaff_x20 + 0xb8) + _DAT_112e33588);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    lVar3 = plVar1[1];
    func_0x000107c614f0(lVar2);
    (**(code **)(*(long *)(lVar3 + 0x38) + 0x38))(param_1);
  }
  return;
}



/* Entry: 101e662a0; end: 101e662af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e662a0(undefined8 param_1,ulong param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [24];
  
  lVar1 = 0;
  func_0x000101e60acc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = param_5;
  func_0x000107c61428(unaff_x20 + 200,auStack_88,1,0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x108);
  *(long *)(unaff_x20 + 0xf8) = lVar1;
  *(undefined8 *)(unaff_x20 + 0x100) = param_7;
  *(undefined8 *)(unaff_x20 + 0x108) = param_8;
  func_0x000107c61434(param_5);
  func_0x000107c61434(param_8);
  func_0x000107c6142c(uVar2);
  func_0x000107c61574(uVar3);
  FUN_101e602cc(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  lVar1 = param_6;
  FUN_101e606d8();
  func_0x000107c61170(param_6);
  *(undefined ***)(lVar1 + _DAT_112e33238 + 8) = &PTR_DAT_11048f038;
  func_0x000107c61604();
  *(undefined ***)(lVar1 + _DAT_112e33240 + 8) = &PTR_DAT_11048f060;
  func_0x000107c61604();
  if ((param_2 & 1) != 0) {
    FUN_101e5f8d8();
  }
  if ((param_3 & 1) != 0) {
    func_0x000101e5f95c(param_1);
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0xc0);
  *(long *)(unaff_x20 + 0xc0) = lVar1;
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101e662b0; end: 101e6632f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e662b0(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  plVar1 = (long *)(*(long *)(unaff_x20 + 0xb8) + _DAT_112e33588);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    lVar3 = plVar1[1];
    func_0x000107c614f0(lVar2);
    (**(code **)(*(long *)(lVar3 + 0x20) + 0x10))();
  }
  return;
}



/* Entry: 101e66330; end: 101e6637b;  */

bool FUN_101e66330(void)

{
  bool bVar1;
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  func_0x000107c61428(unaff_x20 + 200,auStack_28,0,0);
  if (*(long *)(unaff_x20 + 0x148) == -1) {
    bVar1 = true;
  }
  else {
    bVar1 = *(long *)(unaff_x20 + 0x140) < *(long *)(unaff_x20 + 0x148);
  }
  return bVar1;
}



/* Entry: 101e6637c; end: 101e663c3;  */

void FUN_101e6637c(undefined8 *param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_101e65c04(&uStack_58);
  param_1[1] = uStack_50;
  *param_1 = uStack_58;
  param_1[3] = uStack_40;
  param_1[2] = uStack_48;
  param_1[5] = uStack_30;
  param_1[4] = uStack_38;
  param_1[6] = uStack_28;
  return;
}



/* Entry: 101e663c4; end: 101e663f3;  */

undefined1 FUN_101e663c4(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  func_0x000107c61428(unaff_x20 + 200,auStack_28,0,0);
  return *(undefined1 *)(unaff_x20 + 0xdc);
}



/* Entry: 101e663f4; end: 101e663f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e663f4(byte param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  code *pcVar6;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 200,auStack_68,1,0);
  *(byte *)(unaff_x20 + 0xdc) = param_1;
  plVar1 = (long *)(*(long *)(unaff_x20 + 0xb8) + _DAT_112e33588);
  lVar3 = *plVar1;
  lVar4 = plVar1[1];
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = lVar3;
    func_0x000107c614f0(lVar3);
    lVar5 = *(long *)(lVar4 + 0x38);
    pcVar6 = *(code **)(lVar5 + 0x10);
    func_0x000107c615f4(lVar3,2);
    (*pcVar6)(param_1 & 1,lVar2,lVar5);
    func_0x000107c615e8(lVar3);
  }
  FUN_101e621e4(lVar3,lVar4);
  lVar3 = unaff_x20 + 0x180;
  func_0x000107c61648();
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + 0x30);
    if (*(char *)(lVar4 + _DAT_112e33168) == '\x01') {
      lVar2 = lVar4 + _DAT_112e33150;
      func_0x000107c61648();
      if ((lVar2 != 0) && (func_0x000107c61574(), lVar2 == lVar3)) {
        lVar4 = lVar4 + _DAT_112e33158;
        func_0x000107c61618();
        if (lVar4 != 0) {
          FUN_101e5e26c();
          func_0x000107c61574(lVar3);
          func_0x000107c615e8(lVar4);
          return;
        }
      }
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 101e663f8; end: 101e6646f;  */

undefined1  [16] FUN_101e663f8(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0x3280);
  }
  *param_1 = lVar1;
  *(long *)(lVar1 + 0x18) = unaff_x20;
  func_0x000107c61428(unaff_x20 + 200,lVar1,0,0);
  *(undefined1 *)(lVar1 + 0x20) = *(undefined1 *)(unaff_x20 + 0xdc);
  auVar2._8_8_ = (undefined1 *)(lVar1 + 0x20);
  auVar2._0_8_ = FUN_101e66470;
  return auVar2;
}



/* Entry: 101e66470; end: 101e6649b;  */

void FUN_101e66470(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  func_0x000101e65d3c(*(undefined1 *)(lVar1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 101e6649c; end: 101e664cb;  */

undefined4 FUN_101e6649c(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  func_0x000107c61428(unaff_x20 + 200,auStack_28,0,0);
  return *(undefined4 *)(unaff_x20 + 0xe0);
}



/* Entry: 101e664cc; end: 101e664cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e664cc(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  code *pcVar6;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 200,auStack_78,1,0);
  if ((float)param_1 != *(float *)(unaff_x20 + 0xe0)) {
    *(float *)(unaff_x20 + 0xe0) = (float)param_1;
    plVar1 = (long *)(*(long *)(unaff_x20 + 0xb8) + _DAT_112e33588);
    lVar3 = *plVar1;
    lVar4 = plVar1[1];
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      lVar2 = lVar3;
      func_0x000107c614f0(lVar3);
      lVar5 = *(long *)(lVar4 + 0x38);
      pcVar6 = *(code **)(lVar5 + 0x28);
      func_0x000107c615f4(lVar3,2);
      (*pcVar6)(param_1,lVar2,lVar5);
      func_0x000107c615e8(lVar3);
    }
    FUN_101e621e4(lVar3,lVar4);
    lVar3 = unaff_x20 + 0x180;
    func_0x000107c61648();
    if (lVar3 != 0) {
      lVar4 = *(long *)(lVar3 + 0x30);
      if (*(char *)(lVar4 + _DAT_112e33168) == '\x01') {
        lVar2 = lVar4 + _DAT_112e33150;
        func_0x000107c61648();
        if ((lVar2 != 0) && (func_0x000107c61574(), lVar2 == lVar3)) {
          lVar4 = lVar4 + _DAT_112e33158;
          func_0x000107c61618();
          if (lVar4 != 0) {
            FUN_101e5e26c();
            func_0x000107c61574(lVar3);
            func_0x000107c615e8(lVar4);
            return;
          }
        }
      }
      func_0x000107c61574();
    }
  }
  return;
}



/* Entry: 101e664d0; end: 101e66547;  */

code * FUN_101e664d0(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0xc328);
  }
  *param_1 = lVar1;
  *(long *)(lVar1 + 0x18) = unaff_x20;
  func_0x000107c61428(unaff_x20 + 200,lVar1,0,0);
  *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(unaff_x20 + 0xe0);
  return FUN_101e66548;
}



/* Entry: 101e66548; end: 101e66573;  */

void FUN_101e66548(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_101e65e98(*(undefined4 *)(lVar1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}


