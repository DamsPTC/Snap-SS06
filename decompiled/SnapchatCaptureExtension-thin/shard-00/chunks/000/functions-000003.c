/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10001ded4; end: 10001dfbf;  */

void FUN_10001ded4(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    FUN_10001d830();
    _objc_release_x20();
    uVar1 = 0;
    if ((param_2 & 1) == 0) {
      uVar1 = 0x3ff0000000000000;
    }
    func_0x00010003cbe0(uVar1,param_1);
    _objc_release_x21();
  }
  return;
}



/* Entry: 10001dfc0; end: 10001e0e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001dfc0(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  double dVar4;
  
  FUN_10001e0e4();
  func_0x00010001d8b4();
  func_0x00010003cf40();
  _objc_release_x21();
  lVar1 = *(long *)(unaff_x20 + _DAT_1000600f0);
  if ((param_1 & 1) == 0) {
    dVar4 = *(double *)(unaff_x20 + _DAT_100060100) + 0.3;
    _objc_retain();
    FUN_10001d384();
    FUN_10001d230(dVar4);
    FUN_10001cd74(dVar4);
  }
  else {
    lVar2 = lVar1;
    _objc_retain();
    lVar3 = lVar2;
    func_0x00010003c640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003c9a0();
    _objc_release_x19();
    FUN_10001c90c();
    func_0x00010003c640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release_x19();
    func_0x00010003c9a0(lVar3);
    _objc_release_x21();
    func_0x00010001ca44();
    func_0x00010003c640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release_x19();
    func_0x00010003c9a0(lVar3);
    _objc_release_x21();
    func_0x00010003cf40(*(undefined8 *)(lVar2 + _DAT_100060090),param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(lVar1);
  return;
}



/* Entry: 10001e0e4; end: 10001e2f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001e0e4(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x00010001d8b4();
  func_0x00010003cf40();
  _objc_release_x19();
  lVar1 = _DAT_1000600f0;
  lVar2 = *(long *)(unaff_x20 + _DAT_1000600f0);
  func_0x00010003d700();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    func_0x00010003b8e0();
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0;
    _objc_opt_self(PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0);
    lVar2 = 0x10005fba0;
    FUN_100011744(0x10005fba0,&UNK_100040c80);
    _swift_allocObject();
    *(undefined8 *)(lVar2 + 0x18) = 9;
    *(undefined8 *)(lVar2 + 0x10) = 4;
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x00010003d720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003d720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003bd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release_x22();
    _objc_release_x23();
    *(undefined8 *)(lVar2 + 0x20) = uVar4;
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x00010003cae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003cae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003bd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release_x22();
    _objc_release_x23();
    *(undefined8 *)(lVar2 + 0x28) = uVar4;
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x00010003c660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003c660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003bd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release_x22();
    _objc_release_x23();
    *(undefined8 *)(lVar2 + 0x30) = uVar4;
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x00010003bb40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003bb40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003bd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release_x22();
    _objc_release_x20();
    *(undefined8 *)(lVar2 + 0x38) = uVar4;
    uVar4 = 0;
    FUN_100011794(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,uVar4);
    _swift_release(lVar2);
    func_0x00010003b700(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)();
  return;
}



/* Entry: 10001e2f8; end: 10001eabb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001e2f8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lVar12;
  
  func_0x00010003d440();
  FUN_10001d830();
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_100060108);
  func_0x00010003b840();
  _objc_release_x20();
  lVar6 = _DAT_1000600e8;
  func_0x00010003b8e0();
  lVar10 = _DAT_10005ffd8;
  lVar12 = *(long *)(unaff_x20 + _DAT_1000600f8);
  func_0x00010003b8e0();
  lVar1 = _DAT_10005ffe0;
  func_0x00010003b8e0(*(undefined8 *)(unaff_x20 + lVar6));
  lVar2 = _DAT_10005ffe8;
  func_0x00010003b8e0(*(undefined8 *)(unaff_x20 + lVar6));
  lVar3 = _DAT_10005fff0;
  func_0x00010003b8e0(*(undefined8 *)(unaff_x20 + lVar6));
  lVar4 = _DAT_10005fff8;
  func_0x00010003b8e0(*(undefined8 *)(unaff_x20 + lVar6));
  lVar5 = _DAT_100060000;
  func_0x00010003b8e0(*(undefined8 *)(unaff_x20 + lVar6));
  puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0;
  _objc_opt_self();
  lVar8 = 0x10005fba0;
  FUN_100011744(0x10005fba0,&UNK_100040c80);
  _swift_allocObject();
  *(undefined8 *)(lVar8 + 0x18) = 0x29;
  *(undefined8 *)(lVar8 + 0x10) = 0x14;
  uVar9 = *(undefined8 *)(unaff_x20 + lVar6);
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  _objc_release_x24();
  *(undefined8 *)(lVar8 + 0x20) = uVar9;
  uVar9 = *(undefined8 *)(unaff_x20 + lVar6);
  func_0x00010003cae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  _objc_release_x24();
  *(undefined8 *)(lVar8 + 0x28) = uVar9;
  uVar9 = *(undefined8 *)(unaff_x20 + lVar6);
  func_0x00010003c660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003c660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  _objc_release_x24();
  *(undefined8 *)(lVar8 + 0x30) = uVar9;
  uVar9 = *(undefined8 *)(unaff_x20 + lVar6);
  func_0x00010003bb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  _objc_release_x24();
  *(undefined8 *)(lVar8 + 0x38) = uVar9;
  uVar9 = *(undefined8 *)(lVar12 + lVar10);
  func_0x00010003bb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd40(0xc049000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  _objc_release_x24();
  *(undefined8 *)(lVar8 + 0x40) = uVar9;
  uVar9 = *(undefined8 *)(lVar12 + lVar10);
  func_0x00010003bc00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bc00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  _objc_release_x24();
  *(undefined8 *)(lVar8 + 0x48) = uVar9;
  uVar9 = uVar11;
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d720(*(undefined8 *)(lVar12 + lVar10));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  _objc_release_x24();
  *(undefined8 *)(lVar8 + 0x50) = uVar9;
  uVar9 = uVar11;
  func_0x00010003cae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cae0(*(undefined8 *)(lVar12 + lVar10));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  _objc_release_x24();
  *(undefined8 *)(lVar8 + 0x58) = uVar9;
  uVar9 = uVar11;
  func_0x00010003c660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003c660(*(undefined8 *)(lVar12 + lVar10));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  _objc_release_x24();
  *(undefined8 *)(lVar8 + 0x60) = uVar9;
  uVar9 = uVar11;
  func_0x00010003bb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  _objc_release_x24();
  *(undefined8 *)(lVar8 + 0x68) = uVar9;
  uVar9 = *(undefined8 *)(lVar12 + lVar1);
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd40(0x4014000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  _objc_release_x24();
  *(undefined8 *)(lVar8 + 0x70) = uVar9;
  uVar9 = *(undefined8 *)(lVar12 + lVar1);
  func_0x00010003cae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd40(0xc022000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  _objc_release_x24();
  *(undefined8 *)(lVar8 + 0x78) = uVar9;
  uVar9 = *(undefined8 *)(lVar12 + lVar3);
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd40(0x4014000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  _objc_release_x24();
  *(undefined8 *)(lVar8 + 0x80) = uVar9;
  uVar9 = *(undefined8 *)(lVar12 + lVar3);
  func_0x00010003c660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003c660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd40(0x4022000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  _objc_release_x24();
  *(undefined8 *)(lVar8 + 0x88) = uVar9;
  uVar9 = *(undefined8 *)(lVar12 + lVar2);
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd40(0x4014000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  _objc_release_x22();
  *(undefined8 *)(lVar8 + 0x90) = uVar9;
  uVar9 = *(undefined8 *)(lVar12 + lVar2);
  func_0x00010003c660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd40(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  _objc_release_x23();
  *(undefined8 *)(lVar8 + 0x98) = uVar9;
  uVar9 = *(undefined8 *)(lVar12 + lVar4);
  func_0x00010003cae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003c660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd40(0xc034000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  _objc_release_x23();
  *(undefined8 *)(lVar8 + 0xa0) = uVar9;
  uVar9 = *(undefined8 *)(lVar12 + lVar4);
  func_0x00010003bc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bc20(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  _objc_release_x23();
  *(undefined8 *)(lVar8 + 0xa8) = uVar9;
  uVar9 = *(undefined8 *)(lVar12 + lVar5);
  func_0x00010003c660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd40(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  _objc_release_x23();
  *(undefined8 *)(lVar8 + 0xb0) = uVar9;
  uVar9 = *(undefined8 *)(lVar12 + lVar5);
  func_0x00010003bc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  _objc_release_x19();
  *(undefined8 *)(lVar8 + 0xb8) = uVar9;
  uVar9 = 0;
  FUN_100011794();
  lVar10 = lVar8;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar8,uVar9);
  _swift_release(lVar8);
  func_0x00010003b700(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(lVar10);
  return;
}



/* Entry: 10001eabc; end: 10001ebb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001eabc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar2 = unaff_x20 + _DAT_1000600e0;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 != 0) {
    lVar5 = *(long *)(lVar2 + _DAT_1000603c8);
    FUN_10001a650();
    lVar1 = _DAT_10005ff48;
    uVar3 = *(undefined8 *)(lVar5 + _DAT_10005ff48);
    _swift_retain(uVar3);
    __s11SwiftSCLock4LockC4lockyyF();
    _swift_release();
    uVar4 = *(undefined8 *)(lVar5 + lVar1);
    _objc_retain_x25();
    _swift_retain(uVar4);
    __s11SwiftSCLock4LockC6unlockyyF();
    _swift_release(uVar4);
    FUN_1000154f8(param_1);
    _swift_unknownObjectRelease(lVar2);
    _objc_release_x24();
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_1000508c0)(uVar3);
    return;
  }
  return;
}



/* Entry: 10001ebb8; end: 10001ec0b; -[_TtC28SnapchatCaptureExtension_lib23LockedCameraOverlayView handleTap:] */

void FUN_10001ebb8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain_x2();
  uVar1 = param_1;
  _objc_retain_x19();
  FUN_10001eabc(param_1,uVar1);
  _objc_release_x21();
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(uVar1);
  return;
}



/* Entry: 10001ec0c; end: 10001ec9b; -[_TtC28SnapchatCaptureExtension_lib23LockedCameraOverlayView handlePinch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001ec0c(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_1000600e0;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    lVar1 = param_1;
    _objc_retain_x21();
    lVar2 = lVar1;
    _objc_retain_x19();
    func_0x00010001af9c(lVar1);
    _swift_unknownObjectRelease(param_1);
    _objc_release_x21();
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_1000508c0)(lVar2);
    return;
  }
  return;
}



/* Entry: 10001ec9c; end: 10001ed17; -[_TtC28SnapchatCaptureExtension_lib23LockedCameraOverlayView handleDoubleTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001ec9c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_1000600e0;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    lVar1 = param_1;
    _objc_retain_x19();
    FUN_10001aac8();
    _swift_unknownObjectRelease(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_1000508c0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10001ed18; end: 10001ed47;  */

void FUN_10001ed18(void)

{
  FUN_10001edb0();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10005b018);
  return;
}



/* Entry: 10001ed48; end: 10001edaf; -[_TtC28SnapchatCaptureExtension_lib23LockedCameraOverlayView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001ed48(long param_1)

{
  FUN_10001ee4c(param_1 + _DAT_1000600e0);
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_1000600e8));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_1000600f0));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_1000600f8));
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(*(undefined8 *)(param_1 + _DAT_100060108));
  return;
}



/* Entry: 10001edb0; end: 10001ee17;  */

void FUN_10001edb0(void)

{
  _objc_opt_self(&PTR_PTR_10005d448);
  return;
}



/* Entry: 10001ee18; end: 10001ee4b;  */

void FUN_10001ee18(void)

{
  byte bVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  bVar1 = *(byte *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 != 0) {
    FUN_10001d830();
    _objc_release_x20();
    uVar3 = 0;
    if ((bVar1 & 1) == 0) {
      uVar3 = 0x3ff0000000000000;
    }
    func_0x00010003cbe0(uVar3,lVar2);
    _objc_release_x21();
  }
  return;
}



/* Entry: 10001ee4c; end: 10001ee6f;  */

undefined8 FUN_10001ee4c(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 10001ee70; end: 10001ee7b;  */

void FUN_10001ee70(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 10001ee7c; end: 10001f1cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10001ee7c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined8 uVar8;
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
  undefined8 uStack_98;
  
  lVar1 = _DAT_100060138;
  puVar3 = PTR__OBJC_CLASS___CAShapeLayer_100050630;
  _objc_allocWithZone();
  func_0x00010003c1e0();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_100060140;
  puVar3 = PTR__OBJC_CLASS___CAShapeLayer_100050630;
  _objc_allocWithZone();
  func_0x00010003c1e0();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  FUN_10001f6b8();
  puVar4 = &stack0xffffffffffffff70;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar4,PTR_s_initWithFrame__10005b5a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_100050418;
  _objc_opt_self(PTR__OBJC_CLASS___UIBezierPath_100050418);
  func_0x00010003bac0(0,0,param_1,param_1);
  _objc_retainAutoreleasedReturnValue();
  _CGAffineTransformMakeTranslation(&uStack_c0,param_1 * 0.5,param_1 * 0.5);
  _CGAffineTransformRotate(&uStack_f0,0xbff921fb54442d18,&uStack_c0);
  uStack_b8 = uStack_e8;
  uStack_c0 = uStack_f0;
  uStack_a8 = uStack_d8;
  uStack_b0 = uStack_e0;
  uStack_98 = uStack_c8;
  uStack_a0 = uStack_d0;
  _CGAffineTransformTranslate(&uStack_f0,-(param_1 * 0.5),-(param_1 * 0.5),&uStack_c0);
  uStack_b8 = uStack_e8;
  uStack_c0 = uStack_f0;
  uStack_a8 = uStack_d8;
  uStack_b0 = uStack_e0;
  uStack_98 = uStack_c8;
  uStack_a0 = uStack_d0;
  puVar5 = puVar3;
  func_0x00010003ba20(puVar3);
  lVar1 = _DAT_100060138;
  _objc_retain_x8(*(undefined8 *)(puVar4 + _DAT_100060138));
  func_0x00010003b6a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d100(puVar5);
  _objc_release_x22();
  _objc_release_x23();
  func_0x00010003cfe0(param_5,*(undefined8 *)(puVar4 + lVar1));
  uVar6 = *(undefined8 *)(puVar4 + lVar1);
  func_0x00010003ce20(uVar6);
  _objc_retain_x8(*(undefined8 *)(puVar4 + lVar1));
  func_0x00010003b680(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d2e0(uVar6);
  _objc_release_x22();
  _objc_release_x23();
  func_0x00010003cfc0(*(undefined8 *)(puVar4 + lVar1));
  uVar6 = *(undefined8 *)(puVar4 + lVar1);
  func_0x00010003d300(0,uVar6);
  lVar2 = _DAT_100060140;
  _objc_retain_x8(*(undefined8 *)(puVar4 + _DAT_100060140));
  func_0x00010003b6a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d100(uVar6);
  _objc_release_x23();
  _objc_release_x24();
  uVar8 = *(undefined8 *)(puVar4 + lVar1);
  _objc_retain_x8(*(undefined8 *)(puVar4 + lVar2));
  func_0x00010003bb60(uVar8);
  func_0x00010003cf00(uVar6);
  _objc_release_x24();
  func_0x00010003cfe0(param_5,*(undefined8 *)(puVar4 + lVar2));
  func_0x00010003cfc0(*(undefined8 *)(puVar4 + lVar2));
  uVar6 = *(undefined8 *)(puVar4 + lVar2);
  func_0x00010003ce20(uVar6);
  _objc_retain_x8(*(undefined8 *)(puVar4 + lVar2));
  func_0x00010003b680(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d2e0(uVar6);
  _objc_release_x22();
  _objc_release_x23();
  func_0x00010003d320(0,*(undefined8 *)(puVar4 + lVar2));
  func_0x00010003d300(0x3ff0000000000000,*(undefined8 *)(puVar4 + lVar2));
  func_0x00010003d0e0(0,*(undefined8 *)(puVar4 + lVar2));
  func_0x00010003b8c0(*(undefined8 *)(puVar4 + lVar1));
  puVar7 = puVar4;
  func_0x00010003c640(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x20();
  func_0x00010003b8c0(puVar7);
  _objc_release_x20();
  _objc_release_x19();
  _objc_release_x21();
  _objc_release_x22();
  return puVar4;
}



/* Entry: 10001f1d0; end: 10001f267; -[_TtC28SnapchatCaptureExtension_lib28LockedCameraTimerSpinnerView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001f1d0(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  
  lVar1 = _DAT_100060138;
  puVar3 = PTR__OBJC_CLASS___CAShapeLayer_100050630;
  _objc_allocWithZone();
  func_0x00010003c1e0();
  *(undefined **)(param_1 + lVar1) = puVar3;
  lVar1 = _DAT_100060140;
  puVar3 = PTR__OBJC_CLASS___CAShapeLayer_100050630;
  _objc_allocWithZone();
  func_0x00010003c1e0();
  *(undefined **)(param_1 + lVar1) = puVar3;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010004c2a0,
             "SnapchatCaptureExtension_lib/LockedCameraTimerSpinnerView.swift",0x3f,2,0x40,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10001f268);
  (*pcVar2)();
}



/* Entry: 10001f268; end: 10001f2ff; -[_TtC28SnapchatCaptureExtension_lib28LockedCameraTimerSpinnerView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001f268(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  
  lVar1 = _DAT_100060138;
  puVar3 = PTR__OBJC_CLASS___CAShapeLayer_100050630;
  _objc_allocWithZone();
  func_0x00010003c1e0();
  *(undefined **)(param_1 + lVar1) = puVar3;
  lVar1 = _DAT_100060140;
  puVar3 = PTR__OBJC_CLASS___CAShapeLayer_100050630;
  _objc_allocWithZone();
  func_0x00010003c1e0();
  *(undefined **)(param_1 + lVar1) = puVar3;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010004bd50,
             "SnapchatCaptureExtension_lib/LockedCameraTimerSpinnerView.swift",0x3f,2,0x45,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10001f300);
  (*pcVar2)();
}



/* Entry: 10001f300; end: 10001f64f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001f300(double param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  double dVar8;
  
  func_0x00010003c640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003c9a0();
  _objc_release_x20();
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_100060138);
  func_0x00010003c9a0(uVar7);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_100060140);
  func_0x00010003c9a0(uVar6);
  param_1 = 1.0 / param_1;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e45656b6f727473,0xe900000000000064);
  puVar2 = PTR__OBJC_CLASS___CABasicAnimation_100050610;
  _objc_opt_self(PTR__OBJC_CLASS___CABasicAnimation_100050610);
  func_0x00010003b9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x21();
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(0);
  func_0x00010003cf20(puVar2);
  _objc_release_x21();
  __sSi10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(1);
  func_0x00010003d3e0(puVar2);
  _objc_release_x21();
  _objc_retain_x22();
  func_0x00010003cde0(param_1);
  _CACurrentMediaTime();
  func_0x00010003bdc0(uVar7);
  func_0x00010003cc80(puVar2);
  dVar8 = 1.05685337195934e-314;
  func_0x00010003d1c0(0x7f7fffff,puVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010004c360);
  func_0x00010003b760(uVar7);
  _objc_release_x22();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7974696361706f,0xe700000000000000);
  puVar3 = PTR__OBJC_CLASS___CAKeyframeAnimation_100050618;
  _objc_opt_self(PTR__OBJC_CLASS___CAKeyframeAnimation_100050618);
  func_0x00010003b9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x20();
  lVar4 = 0x10005fcd8;
  FUN_100011744(0x10005fcd8,&UNK_100041370);
  _swift_allocObject();
  *(undefined8 *)(lVar4 + 0x18) = 6;
  *(undefined8 *)(lVar4 + 0x10) = 3;
  puVar1 = PTR___sSiN_100050aa8;
  *(undefined8 *)(lVar4 + 0x20) = 1;
  *(undefined **)(lVar4 + 0x38) = puVar1;
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(undefined **)(lVar4 + 0x78) = puVar1;
  *(undefined **)(lVar4 + 0x58) = puVar1;
  *(undefined8 *)(lVar4 + 0x60) = 0;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_release(lVar4);
  func_0x00010003d480(puVar3);
  _objc_release_x23();
  lVar4 = 0x10005fba0;
  FUN_100011744(0x10005fba0,&UNK_100040c80);
  _swift_allocObject();
  *(undefined8 *)(lVar4 + 0x18) = 7;
  *(undefined8 *)(lVar4 + 0x10) = 3;
  uVar7 = 0;
  func_0x00010001f6d8(0);
  uVar5 = 0;
  __sSo8NSNumberC10FoundationE14integerLiteralABSi_tcfC();
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  __sSo8NSNumberC10FoundationE12floatLiteralABSd_tcfC(0.7 / param_1);
  *(undefined8 *)(lVar4 + 0x28) = uVar5;
  uVar5 = 1;
  __sSo8NSNumberC10FoundationE14integerLiteralABSi_tcfC();
  *(undefined8 *)(lVar4 + 0x30) = uVar5;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar4,uVar7);
  _swift_release(lVar4);
  func_0x00010003cfa0(puVar3);
  _objc_release_x20();
  _objc_retain_x22();
  func_0x00010003cde0(param_1);
  func_0x00010003d1c0(0x7f7fffff,puVar3);
  func_0x00010003ba80(puVar2);
  _objc_release_x21();
  func_0x00010003cc80(param_1 + dVar8,puVar3);
  _objc_release_x20();
  uVar7 = 0x697469736e617274;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x697469736e617274,0xef656461665f6e6f);
  func_0x00010003b760(uVar6);
  _objc_release_x21();
  _objc_release_x20();
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(uVar7);
  return;
}



/* Entry: 10001f650; end: 10001f67f;  */

void FUN_10001f650(void)

{
  FUN_10001f6b8();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10005b018);
  return;
}



/* Entry: 10001f680; end: 10001f6b7; -[_TtC28SnapchatCaptureExtension_lib28LockedCameraTimerSpinnerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001f680(long param_1)

{
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_100060138));
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(*(undefined8 *)(param_1 + _DAT_100060140));
  return;
}



/* Entry: 10001f6b8; end: 10001f757;  */

void FUN_10001f6b8(void)

{
  _objc_opt_self(&PTR_PTR_10005d5b8);
  return;
}



/* Entry: 10001f758; end: 10001f7af;  */

void FUN_10001f758(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_100050430;
  _objc_opt_self();
  func_0x00010003bb00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bc80(0x3fd999999999999a);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x19();
  puRam0000000100060228 = puVar1;
  return;
}



/* Entry: 10001f7b0; end: 10001fa4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10001f7b0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = _DAT_100060188;
  lVar2 = *(long *)(unaff_x20 + _DAT_100060188);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x00010001f80c();
    *(long *)(unaff_x20 + lVar1) = param_1;
    _objc_retain();
    _objc_release_x21();
    lVar2 = 0;
    lVar3 = param_1;
  }
  _objc_retain_x8(lVar2);
  return lVar3;
}



/* Entry: 10001fa50; end: 10001fd0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10001fa50(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffffa0;
  lVar4 = unaff_x20 + _DAT_100060170;
  *(undefined8 *)(lVar4 + 8) = 0;
  _swift_unknownObjectWeakInit(lVar4,0);
  *(undefined1 *)(unaff_x20 + _DAT_100060178) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_100060188) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_100060190) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_100060180) = param_1;
  FUN_1000205c0();
  _objc_msgSendSuper2(0,0,0,0,&stack0xffffffffffffffa0,PTR_s_initWithFrame__10005b5a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  func_0x00010003d440();
  puVar2 = puVar1;
  func_0x00010003c640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_10001f7b0();
  func_0x00010003b8c0(puVar2);
  _objc_release_x19();
  _objc_release_x21();
  func_0x00010001f990();
  func_0x00010003cf40();
  _objc_release_x19();
  lVar4 = _DAT_100060190;
  func_0x00010003b8e0(puVar1);
  _objc_retain_x8(*(undefined8 *)(puVar1 + lVar4));
  func_0x00010003cd00(0x4045800000000000,0x4045800000000000);
  _objc_release_x19();
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0;
  _objc_opt_self(PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0);
  lVar4 = 0x10005fba0;
  FUN_100011744(0x10005fba0,&UNK_100040c80);
  _swift_allocObject();
  *(undefined8 *)(lVar4 + 0x18) = 5;
  *(undefined8 *)(lVar4 + 0x10) = 2;
  puVar2 = puVar1;
  func_0x00010003d8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd80(0x4055800000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  *(undefined1 **)(lVar4 + 0x20) = puVar2;
  func_0x00010003c120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd80(0x4055800000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  *(undefined1 **)(lVar4 + 0x28) = puVar1;
  uVar5 = 0;
  FUN_100011794(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar4,uVar5);
  _swift_release(lVar4);
  func_0x00010003b700(puVar3);
  _objc_release_x22();
  puVar3 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_100050468;
  _objc_allocWithZone(PTR__OBJC_CLASS___UILongPressGestureRecognizer_100050468);
  func_0x00010003c420();
  _objc_release_x20();
  puVar6 = puVar3;
  func_0x00010003d020(0,puVar3);
  _objc_retain_x20();
  func_0x00010003cd80(puVar3);
  func_0x00010003b7e0(puVar6);
  puVar3 = PTR__OBJC_CLASS___UIPanGestureRecognizer_100050478;
  _objc_allocWithZone(PTR__OBJC_CLASS___UIPanGestureRecognizer_100050478);
  func_0x00010003c420();
  _objc_release_x20();
  func_0x00010003cd80(puVar3);
  func_0x00010003b7e0(puVar6);
  _objc_release_x20();
  _objc_release_x19();
  _objc_release_x21();
  return puVar6;
}



/* Entry: 10001fd0c; end: 10001fda7; -[_TtC28SnapchatCaptureExtension_lib21LockedCameraTimerView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001fd0c(long param_1)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = param_1 + _DAT_100060170;
  *(undefined8 *)(lVar1 + 8) = 0;
  _swift_unknownObjectWeakInit(lVar1,0);
  *(undefined1 *)(param_1 + _DAT_100060178) = 0;
  *(undefined8 *)(param_1 + _DAT_100060188) = 0;
  *(undefined8 *)(param_1 + _DAT_100060190) = 0;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010004c2a0,
             "SnapchatCaptureExtension_lib/LockedCameraTimerView.swift",0x38,2,0x66,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10001fda8);
  (*pcVar2)();
}



/* Entry: 10001fda8; end: 10001fea7; -[_TtC28SnapchatCaptureExtension_lib21LockedCameraTimerView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001fda8(long param_1)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = param_1 + _DAT_100060170;
  *(undefined8 *)(lVar1 + 8) = 0;
  _swift_unknownObjectWeakInit(lVar1,0);
  *(undefined1 *)(param_1 + _DAT_100060178) = 0;
  *(undefined8 *)(param_1 + _DAT_100060188) = 0;
  *(undefined8 *)(param_1 + _DAT_100060190) = 0;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010004bd50,
             "SnapchatCaptureExtension_lib/LockedCameraTimerView.swift",0x38,2,0x6b,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10001fe44);
  (*pcVar2)();
}



/* Entry: 10001fea8; end: 1000200a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001fea8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  ppuVar7 = &puStack_90;
  FUN_10001f7b0();
  func_0x00010003c9e0();
  _objc_release_x19();
  func_0x00010003c640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cd60(0x4045800000000000);
  _objc_release_x19();
  _objc_allocWithZone(PTR__OBJC_CLASS___UISpringTimingParameters_100050498);
  func_0x00010003c2a0(0x3fd999999999999a,0x4020000000000000,0x4020000000000000);
  puVar2 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1000504c0;
  _objc_allocWithZone(PTR__OBJC_CLASS___UIViewPropertyAnimator_1000504c0);
  func_0x00010003c300(0x3fd083126e978d50);
  puVar3 = PTR__OBJC_CLASS___UIView_1000504b8;
  _objc_opt_self(PTR__OBJC_CLASS___UIView_1000504b8);
  puVar6 = &UNK_100051d70;
  puVar4 = puVar6;
  _swift_allocObject(&UNK_100051d70,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_100050768;
  pcStack_70 = FUN_10002060c;
  puStack_90 = PTR___NSConcreteStackBlock_100050768;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_1000272d0;
  puStack_78 = &UNK_100051d88;
  puStack_68 = puVar4;
  __Block_copy(&puStack_90);
  _swift_release(puStack_68);
  func_0x00010003b940(0x3fd083126e978d50,puVar3);
  __Block_release(ppuVar5);
  _swift_allocObject(&UNK_100051d70,0x18,7);
  _swift_unknownObjectWeakInit(puVar6 + 0x10);
  pcStack_70 = (code *)0x100020630;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_1000272d0;
  puStack_78 = &UNK_100051db0;
  puStack_68 = puVar6;
  __Block_copy(&puStack_90);
  _swift_release(puStack_68);
  func_0x00010003b780(puVar2);
  __Block_release(ppuVar7);
  func_0x00010003d600(puVar2);
  func_0x00010001f990();
  FUN_10001f300(1.0 / *(double *)(unaff_x20 + _DAT_100060180));
  _objc_release_x19();
  _objc_release_x21();
  _objc_release_x22();
  return;
}



/* Entry: 1000200a4; end: 1000201df;  */

void FUN_1000200a4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_100050430;
    _objc_opt_self(PTR__OBJC_CLASS___UIColor_100050430);
    puVar2 = puVar1;
    _objc_retain_x19();
    func_0x00010003d940(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003cc60(puVar2);
    _objc_release_x19();
    _objc_release_x20();
    func_0x00010001f990();
    func_0x00010003cf40();
    _objc_release_x19();
    _objc_release_x20();
  }
  return;
}



/* Entry: 1000201e0; end: 10002034f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000201e0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _DAT_100060178) = 0;
  func_0x00010003d420();
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_100050430);
  func_0x00010003bc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cc60();
  _objc_release_x19();
  func_0x00010003c640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cd60(0);
  _objc_release_x19();
  lVar1 = unaff_x20;
  func_0x00010003c640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_10001f7b0();
  func_0x00010003b8c0(lVar1,param_2,lVar2);
  _objc_release_x19();
  _objc_release_x21();
  func_0x00010003c9a0(*(undefined8 *)(unaff_x20 + _DAT_100060188));
  func_0x00010003c640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003c9a0();
  _objc_release_x19();
  func_0x00010001f990();
  func_0x00010003d420();
  _objc_release_x19();
  lVar1 = _DAT_100060190;
  func_0x00010003c640(*(undefined8 *)(unaff_x20 + _DAT_100060190));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003c9a0();
  _objc_release_x19();
  func_0x00010003cf40(*(undefined8 *)(unaff_x20 + lVar1),param_2,1);
  return;
}



/* Entry: 100020350; end: 1000203e3; -[_TtC28SnapchatCaptureExtension_lib21LockedCameraTimerView handleLongPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100020350(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_100060170;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    lVar1 = param_1;
    _objc_retain_x19();
    _objc_retain_x21();
    func_0x00010003d680();
    if (lVar1 - 3U < 3) {
      FUN_100025bf8();
    }
    else if (lVar1 == 1) {
      FUN_100025ac4();
    }
    _objc_release_x19();
    _objc_release_x21();
                    /* WARNING: Could not recover jumptable at 0x00010003b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_100050d70)(param_1);
    return;
  }
  return;
}



/* Entry: 1000203e4; end: 1000204f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000203e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar2 = unaff_x20 + _DAT_100060170;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = lVar2;
  FUN_100023e44();
  lVar4 = lVar2;
  func_0x00010003d880();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    func_0x00010003c000();
    func_0x00010003bda0(lVar4);
    _objc_release_x20();
    FUN_10001b0d0(param_1,param_2,param_3,param_4,param_5,lVar3);
    _swift_unknownObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_1000508c0)(lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000204f4);
  (*pcVar1)();
}



/* Entry: 1000204f4; end: 100020547; -[_TtC28SnapchatCaptureExtension_lib21LockedCameraTimerView handlePan:] */

void FUN_1000204f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain_x2();
  uVar1 = param_1;
  _objc_retain_x19();
  FUN_1000203e4(param_1,uVar1);
  _objc_release_x21();
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(uVar1);
  return;
}



/* Entry: 100020548; end: 100020577;  */

void FUN_100020548(void)

{
  FUN_1000205c0();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10005b018);
  return;
}



/* Entry: 100020578; end: 1000205bf; -[_TtC28SnapchatCaptureExtension_lib21LockedCameraTimerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100020578(long param_1)

{
  FUN_100020638(param_1 + _DAT_100060170);
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_100060188));
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(*(undefined8 *)(param_1 + _DAT_100060190));
  return;
}



/* Entry: 1000205c0; end: 1000205df;  */

void FUN_1000205c0(void)

{
  _objc_opt_self(&PTR_PTR_10005d698);
  return;
}



/* Entry: 1000205e0; end: 1000205e7; -[_TtC28SnapchatCaptureExtension_lib21LockedCameraTimerView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_1000205e0(void)

{
  return 1;
}



/* Entry: 1000205e8; end: 10002060b;  */

void FUN_1000205e8(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 10002060c; end: 100020637;  */

void FUN_10002060c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_100050430;
    _objc_opt_self(PTR__OBJC_CLASS___UIColor_100050430);
    puVar3 = puVar2;
    _objc_retain_x19();
    func_0x00010003d940(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003cc60(puVar3);
    _objc_release_x19();
    _objc_release_x20();
    func_0x00010001f990();
    func_0x00010003cf40();
    _objc_release_x19();
    _objc_release_x20();
  }
  return;
}



/* Entry: 100020638; end: 10002065b;  */

undefined8 FUN_100020638(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 10002065c; end: 100020663;  */

void FUN_10002065c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010003b590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_100050d50)(uVar1);
  return;
}



/* Entry: 100020664; end: 1000206c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100020664(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = _DAT_100060248;
  lVar3 = *(long *)(unaff_x20 + _DAT_100060248);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = unaff_x20;
    FUN_1000206c4();
    *(long *)(unaff_x20 + lVar1) = lVar2;
    _objc_retain();
    _objc_release_x21();
    lVar3 = 0;
  }
  _objc_retain_x8(lVar3);
  return lVar2;
}



/* Entry: 1000206c4; end: 10002085f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1000206c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_opt_self(PTR__OBJC_CLASS___UIImage_100050440);
  func_0x00010003d5a0(0x4038000000000000,0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIImageView_100050448;
  _objc_allocWithZone();
  func_0x00010003c360();
  _objc_release_x19();
  _objc_retain_x20();
  func_0x00010003d440();
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_100050430);
  func_0x00010003d8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d3c0(puVar1);
  _objc_release_x20();
  func_0x00010003cd40(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0;
  _objc_opt_self(PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0);
  lVar3 = 0x10005fba0;
  FUN_100011744(0x10005fba0,&UNK_100040c80);
  _swift_allocObject();
  *(undefined8 *)(lVar3 + 0x18) = 5;
  *(undefined8 *)(lVar3 + 0x10) = 2;
  puVar4 = puVar1;
  func_0x00010003d8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd80(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  *(undefined **)(lVar3 + 0x20) = puVar4;
  puVar4 = puVar1;
  func_0x00010003c120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x19();
  func_0x00010003bd80(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  *(undefined **)(lVar3 + 0x28) = puVar4;
  uVar5 = 0;
  FUN_100011794(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar5);
  _swift_release(lVar3);
  func_0x00010003b700(puVar2);
  _objc_release_x22();
  return puVar1;
}



/* Entry: 100020860; end: 100020a57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100020860(undefined8 param_1,ulong param_2,char param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffff90;
  *(undefined8 *)(unaff_x20 + _DAT_100060248) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_100060240) = param_1;
  FUN_100020b60();
  _objc_msgSendSuper2(0,0,0,0,&stack0xffffffffffffff90,PTR_s_initWithFrame__10005b5a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  func_0x00010003d440();
  FUN_100020664();
  func_0x00010003b8e0(puVar2);
  _objc_release_x22();
  if ((param_3 != '\0') && (param_2 = param_2 ^ 0x8000000000000000, param_3 != '\x01')) {
    param_2 = 0;
  }
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0;
  _objc_opt_self(PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0);
  lVar4 = 0x10005fba0;
  FUN_100011744(0x10005fba0,&UNK_100040c80);
  _swift_allocObject();
  *(undefined8 *)(lVar4 + 0x18) = 5;
  *(undefined8 *)(lVar4 + 0x10) = 2;
  lVar1 = _DAT_100060248;
  uVar5 = *(undefined8 *)(puVar2 + _DAT_100060248);
  func_0x00010003bc00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bc00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  _objc_release_x23();
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  uVar5 = *(undefined8 *)(puVar2 + lVar1);
  func_0x00010003bc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bc20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x20();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  _objc_release_x23();
  *(undefined8 *)(lVar4 + 0x28) = uVar5;
  uVar5 = 0;
  FUN_100011794(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar4,uVar5);
  _swift_release(lVar4);
  func_0x00010003b700(puVar3);
  _objc_release_x20();
  _objc_release_x22();
  return puVar2;
}



/* Entry: 100020a58; end: 100020abb; -[_TtC28SnapchatCaptureExtension_lib24LockedCameraTabBarButton initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100020a58(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_100060248) = 0;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010004c2a0,
             "SnapchatCaptureExtension_lib/LockedCameraTabBarButton.swift",0x3b,2,0x3a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100020abc);
  (*pcVar1)();
}



/* Entry: 100020abc; end: 100020b4f; -[_TtC28SnapchatCaptureExtension_lib24LockedCameraTabBarButton initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100020abc(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_100060248) = 0;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010004bd50,
             "SnapchatCaptureExtension_lib/LockedCameraTabBarButton.swift",0x3b,2,0x3f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100020b20);
  (*pcVar1)();
}



/* Entry: 100020b50; end: 100020b5f; -[_TtC28SnapchatCaptureExtension_lib24LockedCameraTabBarButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100020b50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(*(undefined8 *)(param_1 + _DAT_100060248));
  return;
}



/* Entry: 100020b60; end: 100020b7f;  */

void FUN_100020b60(void)

{
  _objc_opt_self(&PTR_PTR_10005d808);
  return;
}



/* Entry: 100020b80; end: 100020c03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100020b80(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar1 = _DAT_100060278;
  puVar3 = *(undefined **)(unaff_x20 + _DAT_100060278);
  puVar2 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIView_1000504b8;
    _objc_allocWithZone();
    func_0x00010003c340(0,0,0,0);
    puVar2 = puVar3;
    func_0x00010003d440();
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    _objc_retain_x19();
    _objc_release_x22();
    puVar3 = (undefined *)0x0;
  }
  _objc_retain_x8(puVar3);
  return puVar2;
}



/* Entry: 100020c04; end: 100020c7b; -[_TtC28SnapchatCaptureExtension_lib22LockedCameraTabBarView init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100020c04(long param_1)

{
  long lVar1;
  long *plVar2;
  long lStack_30;
  long lStack_28;
  
  plVar2 = &lStack_30;
  *(undefined8 *)(param_1 + _DAT_100060278) = 0;
  lVar1 = param_1;
  FUN_100021944();
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(0,0,0,0,&lStack_30,PTR_s_initWithFrame__10005b5a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d440();
  FUN_100020d44();
  _objc_release_x20();
  return (undefined1 *)plVar2;
}



/* Entry: 100020c7c; end: 100020cdf; -[_TtC28SnapchatCaptureExtension_lib22LockedCameraTabBarView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100020c7c(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_100060278) = 0;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010004c2a0,
             "SnapchatCaptureExtension_lib/LockedCameraTabBarView.swift",0x39,2,0x44,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100020ce0);
  (*pcVar1)();
}



/* Entry: 100020ce0; end: 100020d43; -[_TtC28SnapchatCaptureExtension_lib22LockedCameraTabBarView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100020ce0(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_100060278) = 0;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010004bd50,
             "SnapchatCaptureExtension_lib/LockedCameraTabBarView.swift",0x39,2,0x49,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100020d44);
  (*pcVar1)();
}



/* Entry: 100020d44; end: 1000215c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100020d44(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x20;
  
  uVar1 = 0;
  FUN_1000215c8(0,0x4020000000000000,0);
  uVar2 = 1;
  FUN_1000215c8(1,0,2);
  uVar3 = 2;
  FUN_1000215c8(2,0,2);
  uVar4 = 3;
  FUN_1000215c8(3,0,2);
  uVar5 = 4;
  FUN_1000215c8(4,0x4020000000000000,1);
  FUN_100020b80();
  func_0x00010003b8e0();
  _objc_release_x25();
  lVar9 = _DAT_100060278;
  func_0x00010003b8e0(*(undefined8 *)(unaff_x20 + _DAT_100060278));
  func_0x00010003b8e0(*(undefined8 *)(unaff_x20 + lVar9));
  func_0x00010003b8e0(*(undefined8 *)(unaff_x20 + lVar9));
  func_0x00010003b8e0(*(undefined8 *)(unaff_x20 + lVar9));
  func_0x00010003b8e0(*(undefined8 *)(unaff_x20 + lVar9));
  puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0;
  _objc_opt_self();
  lVar7 = 0x10005fba0;
  FUN_100011744(0x10005fba0,&UNK_100040c80);
  _swift_allocObject();
  *(undefined8 *)(lVar7 + 0x18) = 0x2f;
  *(undefined8 *)(lVar7 + 0x10) = 0x17;
  uVar8 = *(undefined8 *)(unaff_x20 + lVar9);
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd40(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x27();
  _objc_release_x28();
  *(undefined8 *)(lVar7 + 0x20) = uVar8;
  uVar8 = *(undefined8 *)(unaff_x20 + lVar9);
  func_0x00010003c660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003c660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x27();
  *(undefined8 *)(lVar7 + 0x28) = uVar8;
  uVar8 = *(undefined8 *)(unaff_x20 + lVar9);
  func_0x00010003cae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x27();
  *(undefined8 *)(lVar7 + 0x30) = uVar8;
  uVar8 = uVar1;
  func_0x00010003c660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003c660(*(undefined8 *)(unaff_x20 + lVar9));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x27();
  *(undefined8 *)(lVar7 + 0x38) = uVar8;
  uVar8 = uVar1;
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d720(*(undefined8 *)(unaff_x20 + lVar9));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x27();
  *(undefined8 *)(lVar7 + 0x40) = uVar8;
  uVar8 = uVar1;
  func_0x00010003bb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bb40(*(undefined8 *)(unaff_x20 + lVar9));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x27();
  *(undefined8 *)(lVar7 + 0x48) = uVar8;
  uVar8 = uVar2;
  func_0x00010003c660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cae0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x27();
  *(undefined8 *)(lVar7 + 0x50) = uVar8;
  uVar8 = uVar2;
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d720(*(undefined8 *)(unaff_x20 + lVar9));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x27();
  *(undefined8 *)(lVar7 + 0x58) = uVar8;
  uVar8 = uVar2;
  func_0x00010003bb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bb40(*(undefined8 *)(unaff_x20 + lVar9));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x27();
  *(undefined8 *)(lVar7 + 0x60) = uVar8;
  uVar8 = uVar2;
  func_0x00010003d8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d8c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd40(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x27();
  *(undefined8 *)(lVar7 + 0x68) = uVar8;
  uVar8 = uVar3;
  func_0x00010003c660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cae0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x27();
  *(undefined8 *)(lVar7 + 0x70) = uVar8;
  uVar8 = uVar3;
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x27();
  *(undefined8 *)(lVar7 + 0x78) = uVar8;
  uVar8 = uVar3;
  func_0x00010003bb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x27();
  *(undefined8 *)(lVar7 + 0x80) = uVar8;
  uVar8 = uVar3;
  func_0x00010003d8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd40(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x27();
  *(undefined8 *)(lVar7 + 0x88) = uVar8;
  uVar8 = uVar4;
  func_0x00010003c660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cae0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x27();
  *(undefined8 *)(lVar7 + 0x90) = uVar8;
  uVar8 = uVar4;
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x27();
  *(undefined8 *)(lVar7 + 0x98) = uVar8;
  uVar8 = uVar4;
  func_0x00010003bb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x27();
  *(undefined8 *)(lVar7 + 0xa0) = uVar8;
  func_0x00010003d8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd40(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x27();
  *(undefined8 *)(lVar7 + 0xa8) = uVar4;
  uVar8 = uVar5;
  func_0x00010003c660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x27();
  *(undefined8 *)(lVar7 + 0xb0) = uVar8;
  uVar8 = uVar5;
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d720(*(undefined8 *)(unaff_x20 + lVar9));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x27();
  *(undefined8 *)(lVar7 + 0xb8) = uVar8;
  uVar8 = uVar5;
  func_0x00010003bb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x27();
  *(undefined8 *)(lVar7 + 0xc0) = uVar8;
  uVar8 = uVar5;
  func_0x00010003cae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x25();
  _objc_release_x20();
  *(undefined8 *)(lVar7 + 200) = uVar8;
  func_0x00010003d8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x20();
  _objc_release_x25();
  *(undefined8 *)(lVar7 + 0xd0) = uVar5;
  uVar8 = 0;
  FUN_100011794();
  lVar9 = lVar7;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar7,uVar8);
  _swift_release(lVar7);
  func_0x00010003b700(puVar6);
  _objc_release_x19();
  _objc_release_x8(uVar2);
  _objc_release_x23();
  _objc_release_x24();
  _objc_release_x22();
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(lVar9);
  return;
}



/* Entry: 1000215c8; end: 10002181f;  */

undefined8 FUN_1000215c8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  
  uVar4 = *(undefined8 *)(&UNK_100041428 + (param_1 & 0xff) * 8);
  uVar1 = 0;
  FUN_100020b60(0);
  _objc_allocWithZone();
  FUN_100020860(uVar4,param_2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d440();
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0;
  _objc_opt_self();
  lVar6 = 0x10005fba0;
  FUN_100011744(0x10005fba0,&UNK_100040c80);
  _swift_allocObject();
  *(undefined8 *)(lVar6 + 0x18) = 5;
  *(undefined8 *)(lVar6 + 0x10) = 2;
  uVar1 = uVar4;
  func_0x00010003d8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd80(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  *(undefined8 *)(lVar6 + 0x20) = uVar1;
  uVar1 = uVar4;
  func_0x00010003c120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd80(0x4046000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  *(undefined8 *)(lVar6 + 0x28) = uVar1;
  uVar1 = 0;
  FUN_100011794(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar6,uVar1);
  _swift_release(lVar6);
  func_0x00010003b700();
  _objc_release_x23();
  FUN_100021944();
  if (puVar2 == (undefined *)0x0) {
    _objc_retain_x21();
    puVar3 = (undefined1 *)0x0;
  }
  else {
    FUN_100021964(&stack0xffffffffffffff80,puVar2);
    lVar6 = *(long *)(puVar2 + -8);
    (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar6 + 0x40));
    puVar5 = &stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar6 + 0x10))(puVar5);
    _objc_retain_x21();
    puVar3 = puVar5;
    __ss27_bridgeAnythingToObjectiveCyyXlxlF(puVar5,puVar2);
    (**(code **)(lVar6 + 8))(puVar5,puVar2);
    func_0x000100021988(&stack0xffffffffffffff80);
  }
  _objc_allocWithZone(PTR__OBJC_CLASS___UITapGestureRecognizer_1000504a8);
  func_0x00010003c420();
  _swift_unknownObjectRelease(puVar3);
  func_0x00010003b7e0(uVar4);
  _objc_release_x19();
  _objc_release_x20();
  return uVar4;
}



/* Entry: 100021820; end: 10002182b; -[_TtC28SnapchatCaptureExtension_lib22LockedCameraTabBarView didTapMapButton] */

void FUN_100021820(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  FUN_10002e6c4();
  puVar1 = PTR__swift_isaMask_100050d38;
  pcVar3 = *(code **)((*(ulong *)PTR__swift_isaMask_100050d38 & *(ulong *)*param_1) + 0xf8);
  _objc_retain_x8();
  puVar2 = (undefined8 *)0x3;
  (*pcVar3)(3,8);
  _objc_release_x21();
  FUN_100032230();
  pcVar3 = *(code **)((*(ulong *)puVar1 & *(ulong *)*puVar2) + 200);
  _objc_retain_x8();
  (*pcVar3)(0x10,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(puVar2);
  return;
}



/* Entry: 10002182c; end: 100021837; -[_TtC28SnapchatCaptureExtension_lib22LockedCameraTabBarView didTapFriendsFeedButton] */

void FUN_10002182c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  FUN_10002e6c4();
  puVar1 = PTR__swift_isaMask_100050d38;
  pcVar3 = *(code **)((*(ulong *)PTR__swift_isaMask_100050d38 & *(ulong *)*param_1) + 0xf8);
  _objc_retain_x8();
  puVar2 = (undefined8 *)0x3;
  (*pcVar3)(3,9);
  _objc_release_x21();
  FUN_100032230();
  pcVar3 = *(code **)((*(ulong *)puVar1 & *(ulong *)*puVar2) + 200);
  _objc_retain_x8();
  (*pcVar3)(0xf,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(puVar2);
  return;
}



/* Entry: 100021838; end: 100021843; -[_TtC28SnapchatCaptureExtension_lib22LockedCameraTabBarView didTapCameraButton] */

void FUN_100021838(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  FUN_10002e6c4();
  puVar1 = PTR__swift_isaMask_100050d38;
  pcVar3 = *(code **)((*(ulong *)PTR__swift_isaMask_100050d38 & *(ulong *)*param_1) + 0xf8);
  _objc_retain_x8();
  puVar2 = (undefined8 *)0x3;
  (*pcVar3)(3,10);
  _objc_release_x21();
  FUN_100032230();
  pcVar3 = *(code **)((*(ulong *)puVar1 & *(ulong *)*puVar2) + 200);
  _objc_retain_x8();
  (*pcVar3)(0xe,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(puVar2);
  return;
}



/* Entry: 100021844; end: 10002184f; -[_TtC28SnapchatCaptureExtension_lib22LockedCameraTabBarView didTapDiscoverButton] */

void FUN_100021844(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  FUN_10002e6c4();
  puVar1 = PTR__swift_isaMask_100050d38;
  pcVar3 = *(code **)((*(ulong *)PTR__swift_isaMask_100050d38 & *(ulong *)*param_1) + 0xf8);
  _objc_retain_x8();
  puVar2 = (undefined8 *)0x3;
  (*pcVar3)(3,0xb);
  _objc_release_x21();
  FUN_100032230();
  pcVar3 = *(code **)((*(ulong *)puVar1 & *(ulong *)*puVar2) + 200);
  _objc_retain_x8();
  (*pcVar3)(0x11,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(puVar2);
  return;
}



/* Entry: 100021850; end: 10002185b; -[_TtC28SnapchatCaptureExtension_lib22LockedCameraTabBarView didTapSpotlightButton] */

void FUN_100021850(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  FUN_10002e6c4();
  puVar1 = PTR__swift_isaMask_100050d38;
  pcVar3 = *(code **)((*(ulong *)PTR__swift_isaMask_100050d38 & *(ulong *)*param_1) + 0xf8);
  _objc_retain_x8();
  puVar2 = (undefined8 *)0x3;
  (*pcVar3)(3,0xc);
  _objc_release_x21();
  FUN_100032230();
  pcVar3 = *(code **)((*(ulong *)puVar1 & *(ulong *)*puVar2) + 200);
  _objc_retain_x8();
  (*pcVar3)(0x12,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(puVar2);
  return;
}



/* Entry: 10002185c; end: 100021903;  */

void FUN_10002185c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  FUN_10002e6c4();
  puVar1 = PTR__swift_isaMask_100050d38;
  pcVar3 = *(code **)((*(ulong *)PTR__swift_isaMask_100050d38 & *(ulong *)*param_1) + 0xf8);
  _objc_retain_x8();
  puVar2 = (undefined8 *)0x3;
  (*pcVar3)(3,param_3);
  _objc_release_x21();
  FUN_100032230();
  pcVar3 = *(code **)((*(ulong *)puVar1 & *(ulong *)*puVar2) + 200);
  _objc_retain_x8();
  (*pcVar3)(param_4,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(puVar2);
  return;
}



/* Entry: 100021904; end: 100021933;  */

void FUN_100021904(void)

{
  FUN_100021944();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10005b018);
  return;
}



/* Entry: 100021934; end: 100021943; -[_TtC28SnapchatCaptureExtension_lib22LockedCameraTabBarView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100021934(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(*(undefined8 *)(param_1 + _DAT_100060278));
  return;
}



/* Entry: 100021944; end: 100021963;  */

void FUN_100021944(void)

{
  _objc_opt_self(&PTR_PTR_10005d8e8);
  return;
}



/* Entry: 100021964; end: 1000219a7;  */

long * FUN_100021964(long *param_1,long param_2)

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



/* Entry: 1000219a8; end: 100021a3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1000219a8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar1 = _DAT_1000602e0;
  puVar4 = *(undefined **)(unaff_x20 + _DAT_1000602e0);
  puVar3 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIImageView_100050448;
    _objc_allocWithZone();
    func_0x00010003c1e0();
    puVar2 = PTR__OBJC_CLASS___UIColor_100050430;
    _objc_opt_self(PTR__OBJC_CLASS___UIColor_100050430);
    func_0x00010003d8a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010003d3c0(puVar4,param_2,puVar2);
    _objc_release_x21();
    *(undefined **)(unaff_x20 + lVar1) = puVar4;
    _objc_retain_x19();
    _objc_release_x21();
    puVar4 = (undefined *)0x0;
  }
  _objc_retain_x8(puVar4);
  return puVar3;
}



/* Entry: 100021a40; end: 100021cab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100021a40(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar2 = &puStack_80;
  ppuVar6 = &puStack_80;
  ppuVar7 = &puStack_80;
  *(byte *)(unaff_x20 + _DAT_1000602f0) = param_2;
  FUN_1000221a4();
  func_0x00010003b920();
  if ((param_2 & 1) == 0) {
    puVar3 = &UNK_100051ff0;
    _swift_allocObject(&UNK_100051ff0,0x18,7);
    *(long *)(puVar3 + 0x10) = unaff_x20;
    puVar4 = PTR__OBJC_CLASS___UIView_1000504b8;
    _objc_opt_self(PTR__OBJC_CLASS___UIView_1000504b8);
    puVar5 = &UNK_100052018;
    _swift_allocObject(&UNK_100052018,0x28,7);
    *(long *)(puVar5 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar5 + 0x18) = 0x3fee666666666666;
    *(undefined8 *)(puVar5 + 0x20) = param_1;
    puVar1 = PTR___NSConcreteStackBlock_100050768;
    uStack_60 = 0x100022f6c;
    puStack_80 = PTR___NSConcreteStackBlock_100050768;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_1000272d0;
    puStack_68 = &UNK_100052030;
    puStack_58 = puVar5;
    __Block_copy(&puStack_80);
    puVar5 = puStack_58;
    _objc_retain_x20();
    _objc_retain();
    _swift_release(puVar5);
    uStack_60 = 0x100022f74;
    puStack_80 = puVar1;
    puStack_68 = &UNK_100052058;
  }
  else {
    puVar3 = &UNK_100052090;
    _swift_allocObject(&UNK_100052090,0x18,7);
    *(long *)(puVar3 + 0x10) = unaff_x20;
    puVar4 = PTR__OBJC_CLASS___UIView_1000504b8;
    _objc_opt_self(PTR__OBJC_CLASS___UIView_1000504b8);
    puVar5 = &UNK_1000520b8;
    _swift_allocObject(&UNK_1000520b8,0x28,7);
    *(long *)(puVar5 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar5 + 0x18) = 0x3ff3bbadc0980b24;
    *(undefined8 *)(puVar5 + 0x20) = param_1;
    puVar1 = PTR___NSConcreteStackBlock_100050768;
    uStack_60 = 0x100022f70;
    puStack_80 = PTR___NSConcreteStackBlock_100050768;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_1000272d0;
    puStack_68 = &UNK_1000520d0;
    puStack_58 = puVar5;
    __Block_copy(&puStack_80);
    puVar5 = puStack_58;
    _objc_retain_x20();
    _objc_retain();
    _swift_release(puVar5);
    uStack_60 = 0x100022f78;
    puStack_80 = puVar1;
    puStack_68 = &UNK_1000520f8;
    ppuVar6 = ppuVar2;
  }
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_10002a4a4;
  puStack_58 = puVar3;
  __Block_copy(&puStack_80);
  puVar5 = puStack_58;
  _swift_retain(puVar3);
  _swift_release(puVar5);
  func_0x00010003b9a0(0x3fc3333333333333,0,0x3ff0000000000000,0x3fb999999999999a,puVar4);
  __Block_release(ppuVar7);
  __Block_release(ppuVar6);
  _swift_release(puVar3);
  return;
}



/* Entry: 100021cac; end: 100021e3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100021cac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffffa0;
  *(undefined8 *)(unaff_x20 + _DAT_1000602b0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1000602b8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1000602c0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1000602c8) = 0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1000602d0,0);
  *(undefined1 *)(unaff_x20 + _DAT_1000602d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1000602e0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1000602e8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_1000602f0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_1000602f8) = 1;
  FUN_100022c40();
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&stack0xffffffffffffffa0,
                      PTR_s_initWithFrame__10005b5a0);
  _objc_retainAutoreleasedReturnValue();
  FUN_1000219a8();
  func_0x00010003cd40();
  _objc_release_x19();
  func_0x00010003b8e0(puVar3);
  puVar4 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_100050468;
  _objc_allocWithZone();
  func_0x00010003c420();
  _objc_release_x20();
  lVar2 = _DAT_1000602c8;
  uVar5 = *(undefined8 *)(puVar3 + _DAT_1000602c8);
  *(undefined **)(puVar3 + _DAT_1000602c8) = puVar4;
  _objc_release_x8(uVar5);
  if (*(long *)(puVar3 + lVar2) != 0) {
    func_0x00010003d020(0);
    if (*(long *)(puVar3 + lVar2) != 0) {
      func_0x00010003cd80();
      if (*(long *)(puVar3 + lVar2) != 0) {
        func_0x00010003b7e0(puVar3);
      }
    }
  }
  return puVar3;
}



/* Entry: 100021e40; end: 100021e5f; -[_TtC28SnapchatCaptureExtension_lib25LockedCameraGrowingButton initWithFrame:] */

void FUN_100021e40(void)

{
  FUN_100021cac();
  return;
}



/* Entry: 100021e60; end: 100021e8f; -[_TtC28SnapchatCaptureExtension_lib25LockedCameraGrowingButton initWithCoder:] */

undefined8 FUN_100021e60(undefined8 param_1)

{
  FUN_100022d7c();
  _objc_retain_x19();
  return param_1;
}



/* Entry: 100021e90; end: 100021edb; -[_TtC28SnapchatCaptureExtension_lib25LockedCameraGrowingButton pointInside:withEvent:] */

undefined8 FUN_100021e90(undefined8 param_1)

{
  _objc_retain();
  func_0x00010003bb60();
  _CGRectContainsPoint();
  _objc_release_x19();
  return param_1;
}



/* Entry: 100021edc; end: 100021f1b; -[_TtC28SnapchatCaptureExtension_lib25LockedCameraGrowingButton sizeThatFits:] */

undefined1  [16] FUN_100021edc(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  _objc_retain();
  FUN_100022e5c();
  _objc_release_x20();
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 100021f1c; end: 10002216f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100021f1c(void)

{
  double *pdVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  FUN_100022c40();
  _objc_msgSendSuper2(&stack0xffffffffffffff90,PTR_s_layoutSubviews_10005b010);
  FUN_1000219a8();
  func_0x00010003cd40();
  _objc_release_x19();
  lVar2 = _DAT_1000602e0;
  func_0x00010003d440(*(undefined8 *)(unaff_x20 + _DAT_1000602e0));
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0;
  _objc_opt_self(PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0);
  lVar4 = 0x10005fba0;
  FUN_100011744(0x10005fba0,&UNK_100040c80);
  _swift_allocObject();
  *(undefined8 *)(lVar4 + 0x18) = 9;
  *(undefined8 *)(lVar4 + 0x10) = 4;
  uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  pdVar1 = (double *)(unaff_x20 + _DAT_1000602e8);
  func_0x00010003bd40(pdVar1[1]);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  _objc_release_x24();
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x00010003cae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd40(-*pdVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  _objc_release_x24();
  *(undefined8 *)(lVar4 + 0x28) = uVar5;
  uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x00010003c660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003c660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd40(*pdVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  _objc_release_x24();
  *(undefined8 *)(lVar4 + 0x30) = uVar5;
  uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x00010003bb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd40(-pdVar1[1]);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  _objc_release_x20();
  *(undefined8 *)(lVar4 + 0x38) = uVar5;
  uVar5 = 0;
  FUN_100022d3c(0,0x100060340,&PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar4,uVar5);
  _swift_release(lVar4);
  func_0x00010003b700(puVar3);
  _objc_release_x20();
  return;
}



/* Entry: 100022170; end: 1000221a3; -[_TtC28SnapchatCaptureExtension_lib25LockedCameraGrowingButton layoutSubviews] */

void FUN_100022170(undefined8 param_1)

{
  _objc_retain();
  FUN_100021f1c();
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(param_1);
  return;
}



/* Entry: 1000221a4; end: 100022407;  */

void FUN_1000221a4(void)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong unaff_x20;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *aplStack_110 [20];
  long alStack_70 [2];
  
  func_0x00010003c640();
  _objc_retainAutoreleasedReturnValue();
  FUN_1000219a8();
  func_0x00010003c640();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = unaff_x20;
  _objc_release_x19();
  lVar12 = 0;
  alStack_70[1] = unaff_x20;
  aplStack_110[0] = (long *)PTR___swiftEmptyArrayStorage_100050c50;
  plVar9 = (long *)PTR___swiftEmptyArrayStorage_100050c50;
  while (lVar12 != 2) {
    plVar6 = alStack_70 + lVar12;
    lVar12 = lVar12 + 1;
    if (*plVar6 != 0) {
      _objc_retain_x8();
      __sSa034_makeUniqueAndReserveCapacityIfNotB0yyFyXl_Ts5();
      uVar4 = *(ulong *)(((ulong)aplStack_110[0] & 0xffffffffffffff8) + 0x10);
      uVar1 = *(ulong *)(((ulong)aplStack_110[0] & 0xffffffffffffff8) + 0x18);
      if (uVar1 >> 1 <= uVar4) {
        __sSa16_createNewBuffer14bufferIsUnique15minimumCapacity13growForAppendySb_SiSbtFyXl_Ts5
                  (1 < uVar1,uVar4 + 1,1);
      }
      __sSa37_appendElementAssumeUniqueAndCapacity_03newB0ySi_xntFyXl_Ts5(uVar4,uVar3);
      uVar3 = uVar4;
      plVar9 = aplStack_110[0];
    }
  }
  uVar5 = 0x100060330;
  FUN_100011744(0x100060330,&UNK_100041480);
  plVar6 = alStack_70;
  _swift_arrayDestroy(plVar6,2,uVar5);
  if ((ulong)plVar9 >> 0x3e == 0) {
    plVar10 = *(long **)(((ulong)plVar9 & 0xffffffffffffff8) + 0x10);
  }
  else {
    plVar10 = (long *)((ulong)plVar9 & 0xffffffffffffff8);
    if ((long *)0x7fffffffffffffff < plVar9) {
      plVar10 = plVar9;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    plVar6 = plVar10;
  }
  if (plVar10 != (long *)0x0) {
    if ((long)plVar10 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100022408);
      (*pcVar2)();
    }
    plVar11 = (long *)0x0;
    do {
      if (((ulong)plVar9 & 0xc000000000000001) == 0) {
        _objc_retain_x8(plVar9[(long)((long)plVar11 + 4)]);
        plVar7 = plVar6;
      }
      else {
        plVar7 = plVar11;
        __ss12_ArrayBufferV19_getElementSlowPathyyXlSiFyXl_Ts5(plVar11,plVar9);
      }
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x726f66736e617274,0xe90000000000006d);
      plVar8 = plVar7;
      func_0x00010003b9c0();
      _objc_retainAutoreleasedReturnValue();
      plVar6 = plVar8;
      _objc_release_x25();
      if (plVar8 != (long *)0x0) {
        _objc_release_x24();
        plVar8 = plVar7;
        func_0x00010003c960();
        _objc_retainAutoreleasedReturnValue();
        plVar6 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          func_0x00010003d780(aplStack_110);
          func_0x00010003d420(plVar7);
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0x726f66736e617274,0xe90000000000006d);
          func_0x00010003c9c0();
          _objc_release_x24();
          _objc_release_x25();
          plVar6 = plVar7;
        }
      }
      _objc_release_x23();
      plVar11 = (long *)((long)plVar11 + 1);
    } while (plVar10 != plVar11);
  }
  _swift_bridgeObjectRelease(plVar9);
  return;
}



/* Entry: 100022408; end: 10002285b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100022408(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long unaff_x20;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  
  func_0x00010003d880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003c680(param_5);
  dVar13 = param_1;
  uVar16 = param_2;
  _objc_release_x21();
  uVar6 = param_5;
  func_0x00010003d880();
  _objc_retainAutoreleasedReturnValue();
  if (uVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10002285c);
    (*pcVar1)();
  }
  func_0x00010003bb60();
  _objc_release_x21();
  dVar17 = dVar13;
  _CGRectGetWidth(dVar13,uVar16,param_3,param_4);
  dVar17 = -dVar17;
  dVar14 = dVar13;
  _CGRectGetHeight(dVar13,uVar16,param_3,param_4);
  dVar15 = dVar13;
  _CGRectGetWidth(dVar13,uVar16,param_3,param_4);
  _CGRectGetHeight(dVar13,uVar16,param_3,param_4);
  _CGRectContainsPoint(dVar17,-dVar14,dVar15 * 3.0,dVar13 * 3.0,param_1,param_2);
  func_0x00010003d680();
  if ((long)param_5 < 4) {
    if (param_5 == 1) {
      *(undefined1 *)(unaff_x20 + _DAT_1000602f0) = 1;
      FUN_1000221a4();
      func_0x00010003b920();
      puVar8 = &UNK_100051eb0;
      _swift_allocObject(&UNK_100051eb0,0x18,7);
      *(long *)(puVar8 + 0x10) = unaff_x20;
      puVar9 = PTR__OBJC_CLASS___UIView_1000504b8;
      _objc_opt_self(PTR__OBJC_CLASS___UIView_1000504b8);
      puVar10 = &UNK_100051ed8;
      _swift_allocObject(&UNK_100051ed8,0x28,7);
      *(long *)(puVar10 + 0x10) = unaff_x20;
      *(undefined8 *)(puVar10 + 0x18) = 0x3ff3bbadc0980b24;
      *(double *)(puVar10 + 0x20) = dVar17;
      puVar3 = PTR___NSConcreteStackBlock_100050768;
      pcStack_90 = (code *)0x100022f60;
      puStack_b0 = PTR___NSConcreteStackBlock_100050768;
      uStack_a8 = 0x42000000;
      pcStack_a0 = FUN_1000272d0;
      puStack_98 = &UNK_100051ef0;
      ppuVar11 = &puStack_b0;
      puStack_88 = puVar10;
      __Block_copy(ppuVar11);
      puVar10 = puStack_88;
      _objc_retain_x20();
      _objc_retain();
      _swift_release(puVar10);
      pcStack_90 = FUN_100022ce0;
      puStack_b0 = puVar3;
      puStack_98 = &UNK_100051f18;
      goto LAB_100022784;
    }
    if (param_5 == 2) {
      if ((uint)uVar6 == (uint)*(byte *)(unaff_x20 + _DAT_1000602f0)) {
        return;
      }
      puVar2 = &stack0xffffffffffffff80;
      puVar4 = &stack0xffffffffffffff80;
      puVar5 = &stack0xffffffffffffff80;
      *(char *)(unaff_x20 + _DAT_1000602f0) = (char)uVar6;
      FUN_1000221a4();
      func_0x00010003b920(unaff_x20);
      if ((uVar6 & 1) == 0) {
        puVar8 = &UNK_100051ff0;
        _swift_allocObject(&UNK_100051ff0,0x18,7);
        *(long *)(puVar8 + 0x10) = unaff_x20;
        puVar3 = PTR__OBJC_CLASS___UIView_1000504b8;
        _objc_opt_self(PTR__OBJC_CLASS___UIView_1000504b8);
        puVar10 = &UNK_100052018;
        _swift_allocObject(&UNK_100052018,0x28,7);
        *(long *)(puVar10 + 0x10) = unaff_x20;
        *(undefined8 *)(puVar10 + 0x18) = 0x3fee666666666666;
        *(double *)(puVar10 + 0x20) = dVar17;
        __Block_copy(&stack0xffffffffffffff80);
        _objc_retain_x20();
        _objc_retain();
        _swift_release(puVar10);
      }
      else {
        puVar8 = &UNK_100052090;
        _swift_allocObject(&UNK_100052090,0x18,7);
        *(long *)(puVar8 + 0x10) = unaff_x20;
        puVar3 = PTR__OBJC_CLASS___UIView_1000504b8;
        _objc_opt_self(PTR__OBJC_CLASS___UIView_1000504b8);
        puVar10 = &UNK_1000520b8;
        _swift_allocObject(&UNK_1000520b8,0x28,7);
        *(long *)(puVar10 + 0x10) = unaff_x20;
        *(undefined8 *)(puVar10 + 0x18) = 0x3ff3bbadc0980b24;
        *(double *)(puVar10 + 0x20) = dVar17;
        __Block_copy(&stack0xffffffffffffff80);
        _objc_retain_x20();
        _objc_retain();
        _swift_release(puVar10);
        puVar4 = puVar2;
      }
      __Block_copy(&stack0xffffffffffffff80);
      _swift_retain(puVar8);
      _swift_release(puVar8);
      func_0x00010003b9a0(0x3fc3333333333333,0,0x3ff0000000000000,0x3fb999999999999a,puVar3);
      __Block_release(puVar5);
      __Block_release(puVar4);
      _swift_release(puVar8);
      return;
    }
    if (param_5 != 3) {
      return;
    }
    if (*(char *)(unaff_x20 + _DAT_1000602f0) == '\x01') {
      lVar7 = unaff_x20 + _DAT_1000602d0;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar7 != 0) {
        if (*(long *)(unaff_x20 + _DAT_1000602c0) != 0) {
          _swift_unknownObjectRetain();
          func_0x00010003c880();
          _objc_autorelease(lVar7);
        }
        _swift_unknownObjectRelease();
      }
    }
  }
  else if (1 < param_5 - 4) {
    return;
  }
  if (((uVar6 & 1) == 0) && (*(char *)(unaff_x20 + _DAT_1000602f0) != '\x01')) {
    return;
  }
  *(undefined1 *)(unaff_x20 + _DAT_1000602f0) = 0;
  FUN_1000221a4();
  func_0x00010003b920();
  puVar8 = &UNK_100051e10;
  _swift_allocObject(&UNK_100051e10,0x18,7);
  *(long *)(puVar8 + 0x10) = unaff_x20;
  puVar9 = PTR__OBJC_CLASS___UIView_1000504b8;
  _objc_opt_self(PTR__OBJC_CLASS___UIView_1000504b8);
  puVar10 = &UNK_100051e38;
  _swift_allocObject(&UNK_100051e38,0x28,7);
  *(long *)(puVar10 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar10 + 0x18) = 0x3fee666666666666;
  *(double *)(puVar10 + 0x20) = dVar17;
  puVar3 = PTR___NSConcreteStackBlock_100050768;
  pcStack_90 = FUN_100022cb8;
  puStack_b0 = PTR___NSConcreteStackBlock_100050768;
  uStack_a8 = 0x42000000;
  pcStack_a0 = FUN_1000272d0;
  puStack_98 = &UNK_100051e50;
  ppuVar11 = &puStack_b0;
  puStack_88 = puVar10;
  __Block_copy(ppuVar11);
  puVar10 = puStack_88;
  _objc_retain_x20();
  _objc_retain();
  _swift_release(puVar10);
  pcStack_90 = (code *)0x100022c84;
  puStack_b0 = puVar3;
  puStack_98 = &UNK_100051e78;
LAB_100022784:
  uStack_a8 = 0x42000000;
  pcStack_a0 = FUN_10002a4a4;
  ppuVar12 = &puStack_b0;
  puStack_88 = puVar8;
  __Block_copy(ppuVar12);
  puVar10 = puStack_88;
  _swift_retain(puVar8);
  _swift_release(puVar10);
  func_0x00010003b9a0(0x3fc3333333333333,0,0x3ff0000000000000,0x3fb999999999999a,puVar9);
  __Block_release(ppuVar12);
  __Block_release(ppuVar11);
  _swift_release(puVar8);
  return;
}



/* Entry: 10002285c; end: 1000228af; -[_TtC28SnapchatCaptureExtension_lib25LockedCameraGrowingButton press:] */

void FUN_10002285c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain_x2();
  uVar1 = param_1;
  _objc_retain_x19();
  FUN_100022408(param_1,uVar1);
  _objc_release_x21();
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(uVar1);
  return;
}



/* Entry: 1000228b0; end: 1000229bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000228b0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_3;
  if (*(char *)(param_3 + _DAT_1000602f8) == '\x01') {
    FUN_1000219a8();
  }
  else {
    _objc_retain_x20();
  }
  func_0x00010003d780(&uStack_70);
  func_0x00010003d780(&uStack_70,uVar1);
  _atan2(uStack_68,uStack_70);
  _CGAffineTransformMakeRotation(&uStack_70);
  _CGAffineTransformScale(&uStack_a0,param_1,param_1,&uStack_70);
  uStack_68 = uStack_98;
  uStack_70 = uStack_a0;
  uStack_58 = uStack_88;
  uStack_60 = uStack_90;
  uStack_48 = uStack_78;
  uStack_50 = uStack_80;
  func_0x00010003d420(uVar1);
  uVar2 = 0;
  FUN_100022d3c(0,0x100060328,&PTR__OBJC_CLASS___NSObject_100050868);
  uVar3 = uVar1;
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar1,param_3,uVar2);
  if ((uVar3 & 1) != 0) {
    func_0x00010003cbe0(param_2,uVar1);
  }
  _objc_release_x19();
  return;
}



/* Entry: 1000229bc; end: 100022abb;  */

void FUN_1000229bc(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  if ((param_2 & 1) != 0) {
    ppuVar3 = &puStack_80;
    uVar4 = param_1;
    func_0x00010003b920(param_3);
    puVar2 = PTR__OBJC_CLASS___UIView_1000504b8;
    _objc_opt_self(PTR__OBJC_CLASS___UIView_1000504b8);
    _swift_allocObject(param_4,0x28,7);
    *(undefined8 *)(param_4 + 0x10) = param_3;
    *(undefined8 *)(param_4 + 0x18) = param_1;
    *(undefined8 *)(param_4 + 0x20) = uVar4;
    puStack_80 = PTR___NSConcreteStackBlock_100050768;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_1000272d0;
    uStack_68 = param_6;
    uStack_60 = param_5;
    lStack_58 = param_4;
    __Block_copy(&puStack_80);
    lVar1 = lStack_58;
    _objc_retain_x23();
    _swift_release(lVar1);
    func_0x00010003b9a0(0x3fc3333333333333,0,0x3ff0000000000000,0x3fb999999999999a,puVar2);
    __Block_release(ppuVar3);
  }
  return;
}



/* Entry: 100022abc; end: 100022b47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100022abc(long param_1,long param_2)

{
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + _DAT_1000602d8) & 1) != 0) {
    func_0x00010003d880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003d880();
    _objc_retainAutoreleasedReturnValue();
    if (param_2 == 0) {
      if (param_1 == 0) {
        return true;
      }
      _objc_release();
    }
    else {
      if (param_1 != 0) {
        _objc_release_x20();
        _objc_release_x19();
        return param_2 == param_1;
      }
      _objc_release_x19();
    }
  }
  return false;
}



/* Entry: 100022b48; end: 100022ba7; -[_TtC28SnapchatCaptureExtension_lib25LockedCameraGrowingButton gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

uint FUN_100022b48(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain_x2();
  uVar1 = param_1;
  _objc_retain_x19();
  _objc_retain_x20();
  FUN_100022abc(param_1,uVar1);
  _objc_release_x21();
  _objc_release_x19();
  _objc_release_x20();
  return (uint)param_1 & 1;
}



/* Entry: 100022ba8; end: 100022bd7;  */

void FUN_100022ba8(void)

{
  FUN_100022c40();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10005b018);
  return;
}



/* Entry: 100022bd8; end: 100022c3f; -[_TtC28SnapchatCaptureExtension_lib25LockedCameraGrowingButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100022bd8(long param_1)

{
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_1000602b0));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_1000602b8));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_1000602c8));
  FUN_100022ed4(param_1 + _DAT_1000602d0);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(*(undefined8 *)(param_1 + _DAT_1000602e0));
  return;
}



/* Entry: 100022c40; end: 100022cb7;  */

void FUN_100022c40(void)

{
  _objc_opt_self(&PTR_PTR_10005d9f0);
  return;
}



/* Entry: 100022cb8; end: 100022cdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100022cb8(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar3 = *(ulong *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = uVar3;
  if (*(char *)(uVar3 + _DAT_1000602f8) == '\x01') {
    FUN_1000219a8();
  }
  else {
    _objc_retain_x20();
  }
  func_0x00010003d780(&uStack_70);
  func_0x00010003d780(&uStack_70,uVar1);
  _atan2(uStack_68,uStack_70);
  _CGAffineTransformMakeRotation(&uStack_70);
  _CGAffineTransformScale(&uStack_a0,uVar4,uVar4,&uStack_70);
  uStack_68 = uStack_98;
  uStack_70 = uStack_a0;
  uStack_58 = uStack_88;
  uStack_60 = uStack_90;
  uStack_48 = uStack_78;
  uStack_50 = uStack_80;
  func_0x00010003d420(uVar1);
  uVar4 = 0;
  FUN_100022d3c(0,0x100060328,&PTR__OBJC_CLASS___NSObject_100050868);
  uVar2 = uVar1;
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar1,uVar3,uVar4);
  if ((uVar2 & 1) != 0) {
    func_0x00010003cbe0(uVar5,uVar1);
  }
  _objc_release_x19();
  return;
}



/* Entry: 100022ce0; end: 100022d3b;  */

void FUN_100022ce0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1000229bc(0x3ff1f06f69446738,param_1,*(undefined8 *)(unaff_x20 + 0x10),&UNK_100051f50,
                0x100022f64,&UNK_100051f68);
  return;
}



/* Entry: 100022d3c; end: 100022d7b;  */

void FUN_100022d3c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 100022d7c; end: 100022e5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100022d7c(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_1000602b0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1000602b8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1000602c0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1000602c8) = 0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1000602d0,0);
  *(undefined1 *)(unaff_x20 + _DAT_1000602d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1000602e0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1000602e8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_1000602f0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_1000602f8) = 1;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010004bd50,
             "SnapchatCaptureExtension_lib/LockedCameraGrowingButton.swift",0x3c,2,0x4b,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100022e5c);
  (*pcVar2)();
}



/* Entry: 100022e5c; end: 100022ed3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100022e5c(double param_1,undefined8 param_2)

{
  double *pdVar1;
  long unaff_x20;
  double dVar2;
  undefined1 auVar3 [16];
  
  if (*(long *)(unaff_x20 + _DAT_1000602b0) == 0) {
    param_1 = 0.0;
    dVar2 = 0.0;
  }
  else {
    _objc_retain_x8();
    func_0x00010003d5c0();
    pdVar1 = (double *)(unaff_x20 + _DAT_1000602e8);
    dVar2 = *pdVar1;
    param_1 = param_1 + dVar2;
    func_0x00010003d5c0(param_2);
    _objc_release_x19();
    dVar2 = dVar2 + pdVar1[1];
  }
  auVar3._8_8_ = dVar2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 100022ed4; end: 100022ef7;  */

undefined8 FUN_100022ed4(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 100022ef8; end: 100022f7b;  */

void FUN_100022ef8(void)

{
  long unaff_x20;
  
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 100022f7c; end: 10002308f;  */

ulong FUN_100022f7c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((param_1 & 0xc000000000000001) == 0) {
    uVar3 = param_1 + 0x38;
    __ss10_HashTableV11startBucketAB0D0Vvg
              (uVar3,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    uVar5 = 0;
    param_2 = (ulong)*(uint *)(param_1 + 0x24);
    if (uVar3 != 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)) goto LAB_10002304c;
  }
  else {
    uVar1 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar1 = param_1;
    }
    uVar3 = uVar1;
    __ss10__CocoaSetV10startIndexAB0D0Vvg();
    uVar4 = param_2;
    __ss10__CocoaSetV8endIndexAB0D0Vvg(uVar1);
    uVar2 = uVar3;
    __ss10__CocoaSetV5IndexV2eeoiySbAD_ADtFZ(uVar3,param_2,uVar1,uVar4);
    uVar5 = 1;
    func_0x00010002384c(uVar1,uVar4,1);
    if ((uVar2 & 1) == 0) {
LAB_10002304c:
      uVar1 = uVar3;
      FUN_100023860(uVar3,param_2,uVar5,param_1);
      func_0x00010002384c(uVar3,param_2,uVar5);
      return uVar1;
    }
  }
  func_0x00010002384c(uVar3,param_2,uVar5);
  return 0;
}



/* Entry: 100023090; end: 100023107; -[_TtC28SnapchatCaptureExtension_lib32LockedCameraScaleAnimationButton initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100023090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  *(undefined1 *)(param_5 + _DAT_100060350) = 0;
  lVar1 = param_5;
  func_0x000100023754();
  lStack_50 = param_5;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&lStack_50,PTR_s_initWithFrame__10005b5a0);
  return;
}



/* Entry: 100023108; end: 10002316b; -[_TtC28SnapchatCaptureExtension_lib32LockedCameraScaleAnimationButton initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100023108(long param_1)

{
  code *pcVar1;
  
  *(undefined1 *)(param_1 + _DAT_100060350) = 0;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010004bd50,
             "SnapchatCaptureExtension_lib/LockedCameraScaleAnimationButton.swift",0x43,2,0x14,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10002316c);
  (*pcVar1)();
}



/* Entry: 10002316c; end: 10002318b; -[_TtC28SnapchatCaptureExtension_lib32LockedCameraScaleAnimationButton touchesBegan:withEvent:] */

void FUN_10002316c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x000100023774(0);
  uVar2 = uVar1;
  func_0x0001000237b8();
  __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ(param_3,uVar1,uVar2);
  _objc_retain_x20();
  _objc_retain_x25();
  FUN_1000234e0(param_3,param_4,&PTR_s_touchesBegan_withEvent__10005b0b8,1,0x100023a78,
                &UNK_1000521e8);
  _objc_release_x26();
  _objc_release_x25();
                    /* WARNING: Could not recover jumptable at 0x00010003b464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_100050c80)(param_3);
  return;
}



/* Entry: 10002318c; end: 1000231ab; -[_TtC28SnapchatCaptureExtension_lib32LockedCameraScaleAnimationButton touchesEnded:withEvent:] */

void FUN_10002318c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x000100023774(0);
  uVar2 = uVar1;
  func_0x0001000237b8();
  __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ(param_3,uVar1,uVar2);
  _objc_retain_x20();
  _objc_retain_x25();
  FUN_1000234e0(param_3,param_4,&PTR_s_touchesEnded_withEvent__10005b0b0,0,0x100023a74,
                &UNK_1000521c0);
  _objc_release_x26();
  _objc_release_x25();
                    /* WARNING: Could not recover jumptable at 0x00010003b464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_100050c80)(param_3);
  return;
}



/* Entry: 1000231ac; end: 100023257;  */

void FUN_1000231ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x000100023774(0);
  uVar2 = uVar1;
  func_0x0001000237b8();
  __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ(param_3,uVar1,uVar2);
  _objc_retain_x20();
  _objc_retain_x25();
  FUN_1000234e0(param_3,param_4,param_5,param_6,param_7,param_8);
  _objc_release_x26();
  _objc_release_x25();
                    /* WARNING: Could not recover jumptable at 0x00010003b464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_100050c80)(param_3);
  return;
}



/* Entry: 100023258; end: 10002345f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100023258(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_80;
  uVar2 = 0;
  func_0x000100023774(0);
  uVar3 = uVar2;
  func_0x0001000237b8();
  lVar4 = param_1;
  __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF(param_1,uVar2,uVar3);
  func_0x000100023754();
  _objc_msgSendSuper2(&stack0xffffffffffffffb0,PTR_s_touchesMoved_withEvent__10005b0a8,lVar4,param_2
                     );
  _objc_release_x22();
  lVar4 = unaff_x20;
  func_0x00010003c520();
  if ((int)lVar4 == 0) {
    return;
  }
  FUN_100022f7c();
  if (param_1 != 0) {
    func_0x00010003c680();
    lVar4 = unaff_x20;
    func_0x00010003bb60();
    iVar1 = (int)lVar4;
    _CGRectContainsPoint();
    _objc_release_x19();
    if (iVar1 != 0) {
      if ((*(byte *)(unaff_x20 + _DAT_100060350) & 1) != 0) {
        return;
      }
      *(undefined1 *)(unaff_x20 + _DAT_100060350) = 1;
      puVar5 = PTR__OBJC_CLASS___UIView_1000504b8;
      _objc_opt_self(PTR__OBJC_CLASS___UIView_1000504b8);
      puVar6 = &UNK_100052130;
      _swift_allocObject(&UNK_100052130,0x18,7);
      _swift_unknownObjectWeakInit(puVar6 + 0x10);
      uStack_60 = 0x100023844;
      puStack_68 = &UNK_100052198;
      puStack_58 = puVar6;
      goto LAB_100023410;
    }
  }
  if (*(char *)(unaff_x20 + _DAT_100060350) != '\x01') {
    return;
  }
  *(undefined1 *)(unaff_x20 + _DAT_100060350) = 0;
  puVar5 = PTR__OBJC_CLASS___UIView_1000504b8;
  _objc_opt_self(PTR__OBJC_CLASS___UIView_1000504b8);
  puVar6 = &UNK_100052130;
  _swift_allocObject(&UNK_100052130,0x18,7);
  _swift_unknownObjectWeakInit(puVar6 + 0x10);
  uStack_60 = 0x100023a70;
  puStack_68 = &UNK_100052170;
  puStack_58 = puVar6;
LAB_100023410:
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_1000272d0;
  puStack_80 = PTR___NSConcreteStackBlock_100050768;
  __Block_copy(&puStack_80);
  _swift_release(puStack_58);
  func_0x00010003b940(0x3fc3333333333333,puVar5);
  __Block_release(ppuVar7);
  return;
}



/* Entry: 100023460; end: 1000234df; -[_TtC28SnapchatCaptureExtension_lib32LockedCameraScaleAnimationButton touchesMoved:withEvent:] */

void FUN_100023460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x000100023774(0);
  uVar2 = uVar1;
  func_0x0001000237b8();
  __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ(param_3,uVar1,uVar2);
  _objc_retain_x19();
  _objc_retain_x21();
  FUN_100023258(param_3,param_4);
  _objc_release_x23();
  _objc_release_x20();
                    /* WARNING: Could not recover jumptable at 0x00010003b464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_100050c80)(param_3);
  return;
}



/* Entry: 1000234e0; end: 10002361b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000234e0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  uVar1 = 0;
  func_0x000100023774(0);
  uVar2 = uVar1;
  func_0x0001000237b8();
  __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF(param_1,uVar1,uVar2);
  func_0x000100023754();
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,*param_3,param_1,param_2);
  _objc_release_x25();
  lVar3 = unaff_x20;
  func_0x00010003c520();
  if ((int)lVar3 != 0) {
    *(undefined1 *)(unaff_x20 + _DAT_100060350) = param_4;
    puVar4 = PTR__OBJC_CLASS___UIView_1000504b8;
    _objc_opt_self(PTR__OBJC_CLASS___UIView_1000504b8);
    puVar5 = &UNK_100052130;
    _swift_allocObject(&UNK_100052130,0x18,7);
    _swift_unknownObjectWeakInit(puVar5 + 0x10);
    puStack_90 = PTR___NSConcreteStackBlock_100050768;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_1000272d0;
    uStack_78 = param_6;
    uStack_70 = param_5;
    puStack_68 = puVar5;
    __Block_copy(&puStack_90);
    _swift_release(puStack_68);
    func_0x00010003b940(0x3fc3333333333333,puVar4);
    __Block_release(ppuVar6);
  }
  return;
}



/* Entry: 10002361c; end: 10002363b; -[_TtC28SnapchatCaptureExtension_lib32LockedCameraScaleAnimationButton touchesCancelled:withEvent:] */

void FUN_10002361c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x000100023774(0);
  uVar2 = uVar1;
  func_0x0001000237b8();
  __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ(param_3,uVar1,uVar2);
  _objc_retain_x20();
  _objc_retain_x25();
  FUN_1000234e0(param_3,param_4,&PTR_s_touchesCancelled_withEvent__10005b0a0,0,FUN_100023820,
                &UNK_100052148);
  _objc_release_x26();
  _objc_release_x25();
                    /* WARNING: Could not recover jumptable at 0x00010003b464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_100050c80)(param_3);
  return;
}



/* Entry: 10002363c; end: 100023723;  */

void FUN_10002363c(long param_1)

{
  undefined1 auStack_70 [56];
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    _CGAffineTransformMakeScale(auStack_70,0x3ff0cccccccccccd,0x3ff0cccccccccccd);
    func_0x00010003d420(param_1);
    _objc_release_x19();
  }
  return;
}


