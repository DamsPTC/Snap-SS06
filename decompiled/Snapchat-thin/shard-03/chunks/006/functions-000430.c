/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102b0d688; end: 102b0d6fb; -[SCCameraTimerModeV2ViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b0d688(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112eefdf0);
  func_0x000107c61174();
  func_0x000107c6157c(uVar2);
  func_0x000100c82230();
  func_0x000107c61574(uVar2);
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b0d6fc; end: 102b0d78b; -[SCCameraTimerModeV2ViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b0d75c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b0d760) */
/* WARNING: Removing unreachable block (ram,0x0001000b44c0) */
/* WARNING: Removing unreachable block (ram,0x0001000b44d0) */
/* WARNING: Removing unreachable block (ram,0x00010006c090) */
/* WARNING: Removing unreachable block (ram,0x00010006c09c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0cc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0a4) */
/* WARNING: Removing unreachable block (ram,0x0001000b44cc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x00010006c0c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b0d6fc(long param_1)

{
  func_0x000102b0e820(param_1 + _DAT_112eefde0);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112eefe10 + 0x20));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eefe28));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eefe18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eefdf0));
  return;
}



/* Entry: 102b0d78c; end: 102b0d833; -[SCCameraTimerModeV2ViewController setAudioData:] */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b0d78c(long param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c5ee30();
  func_0x000107c61170(uVar3);
  puVar1 = (ulong *)(param_1 + _DAT_112eefdf8);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
  func_0x0001000b44c0(uVar3,uVar2);
  *(undefined8 *)(param_1 + _DAT_112eefe00) = 0;
  *(undefined8 *)(param_1 + _DAT_112eefe08) = 0;
  func_0x00010006c00c(param_3,param_2);
  FUN_102b0d834();
  func_0x000107c61170(param_1);
  uVar4 = (uint)(param_2 >> 0x3e);
  if (uVar4 == 1) {
    param_3 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar4 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3);
  return;
}



/* Entry: 102b0d834; end: 102b0d9b3;  */

/* WARNING: Possible PIC construction at 0x000102b0d940: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b0d944) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b0d834(void)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  double dVar9;
  double dVar10;
  
  uVar7 = ((long *)(unaff_x20 + _DAT_112eefdf8))[1];
  if (0xe < uVar7 >> 0x3c) {
    return;
  }
  lVar8 = *(long *)(unaff_x20 + _DAT_112eefdf8);
  func_0x000100de78a0(lVar8,uVar7);
  lVar3 = lVar8;
  FUN_102b0f0f4(lVar8,uVar7,200);
  dVar9 = *(double *)(unaff_x20 + _DAT_112eefe08);
  if (0.0 < dVar9) {
    dVar10 = *(double *)(unaff_x20 + _DAT_112eefe00);
    bVar2 = false;
    if ((0.0 < dVar10) && (bVar2 = false, !NAN(dVar9) && !NAN(dVar10))) {
      bVar2 = dVar9 < dVar10;
    }
    if (bVar2) {
      uVar6 = *(ulong *)(lVar3 + 0x10);
      dVar9 = (double)(long)((dVar9 / dVar10) * (double)uVar6);
      if (0x7fefffffffffffff < (ulong)ABS(dVar9)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102b0d9ac);
        (*pcVar1)();
      }
      if (dVar9 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102b0d9b0);
        (*pcVar1)();
      }
      if (9.223372036854776e+18 <= dVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102b0d9b4);
        (*pcVar1)();
      }
      lVar5 = (long)dVar9;
      if (0 < lVar5 && lVar5 < (long)uVar6) {
        FUN_102b0e540(lVar3,lVar3 + 0x20,lVar5,uVar6 << 1 | 1);
        goto code_r0x000107c6142c;
      }
    }
  }
  lVar5 = *(long *)(*(long *)(unaff_x20 + _DAT_112eefe28) + _DAT_112eefba0);
  uVar4 = *(undefined8 *)(lVar5 + _DAT_112eefcd0);
  *(long *)(lVar5 + _DAT_112eefcd0) = lVar3;
  func_0x000107c6142c(uVar4);
  func_0x000107c61434(lVar3);
  FUN_102b0a4a8();
  func_0x0001000b44c0(lVar8,uVar7);
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar3);
  return;
}



/* Entry: 102b0d9b4; end: 102b0da6b; -[SCCameraTimerModeV2ViewController setAudioData:clipDuration:audioStartOffset:] */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b0d9b4(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,ulong param_5)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar3 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  func_0x000107c5ee30();
  func_0x000107c61170(uVar3);
  puVar1 = (ulong *)(param_3 + _DAT_112eefdf8);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = param_5;
  puVar1[1] = param_4;
  func_0x0001000b44c0(uVar3,uVar2);
  *(undefined8 *)(param_3 + _DAT_112eefe00) = param_1;
  *(undefined8 *)(param_3 + _DAT_112eefe08) = param_2;
  func_0x00010006c00c(param_5,param_4);
  FUN_102b0d834();
  func_0x000107c61170(param_3);
  uVar4 = (uint)(param_4 >> 0x3e);
  if (uVar4 == 1) {
    param_5 = param_4 & 0x3fffffffffffffff;
  }
  else if (uVar4 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_5);
  return;
}



/* Entry: 102b0da6c; end: 102b0da73; -[SCCameraTimerModeV2ViewController tray:canUseGestureToExpandOrCollapse:] */

undefined8 FUN_102b0da6c(void)

{
  return 0;
}



/* Entry: 102b0da74; end: 102b0dbb3;  */

/* WARNING: Possible PIC construction at 0x000102b0d940: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b0d944) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b0da74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x20;
  double dVar9;
  double dVar10;
  
  lVar8 = *(long *)(unaff_x20 + _DAT_112eefe28);
  *(undefined ***)(lVar8 + _DAT_112eefb80 + 8) = &PTR_DAT_11059c050;
  func_0x000107c61604();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102b0dbb0);
    (*pcVar1)();
  }
  func_0x000107c3ec60();
  func_0x000107c61170(lVar4);
  func_0x000107c54b80(param_1,param_2,param_3,param_4,lVar8);
  func_0x000107c52ab8(lVar8);
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102b0dbb4);
    (*pcVar1)();
  }
  func_0x000107c3d89c();
  func_0x000107c61170(lVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112eefdf8);
  uVar7 = ((undefined8 *)(unaff_x20 + _DAT_112eefdf8))[1];
  func_0x000100de78a0(uVar3,uVar7);
  func_0x0001000b44c0(uVar3,uVar7);
  if (0xe < uVar7 >> 0x3c) {
    return;
  }
  func_0x0001000b44c0(0,0xf000000000000000);
  uVar7 = ((long *)(unaff_x20 + _DAT_112eefdf8))[1];
  if (0xe < uVar7 >> 0x3c) {
    return;
  }
  lVar8 = *(long *)(unaff_x20 + _DAT_112eefdf8);
  func_0x000100de78a0(lVar8,uVar7);
  lVar4 = lVar8;
  FUN_102b0f0f4(lVar8,uVar7,200);
  dVar9 = *(double *)(unaff_x20 + _DAT_112eefe08);
  if (0.0 < dVar9) {
    dVar10 = *(double *)(unaff_x20 + _DAT_112eefe00);
    bVar2 = false;
    if ((0.0 < dVar10) && (bVar2 = false, !NAN(dVar9) && !NAN(dVar10))) {
      bVar2 = dVar9 < dVar10;
    }
    if (bVar2) {
      uVar6 = *(ulong *)(lVar4 + 0x10);
      dVar9 = (double)(long)((dVar9 / dVar10) * (double)uVar6);
      if (0x7fefffffffffffff < (ulong)ABS(dVar9)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102b0d9ac);
        (*pcVar1)();
      }
      if (dVar9 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102b0d9b0);
        (*pcVar1)();
      }
      if (9.223372036854776e+18 <= dVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102b0d9b4);
        (*pcVar1)();
      }
      lVar5 = (long)dVar9;
      if (0 < lVar5 && lVar5 < (long)uVar6) {
        FUN_102b0e540(lVar4,lVar4 + 0x20,lVar5,uVar6 << 1 | 1);
        goto code_r0x000107c6142c;
      }
    }
  }
  lVar5 = *(long *)(*(long *)(unaff_x20 + _DAT_112eefe28) + _DAT_112eefba0);
  uVar3 = *(undefined8 *)(lVar5 + _DAT_112eefcd0);
  *(long *)(lVar5 + _DAT_112eefcd0) = lVar4;
  func_0x000107c6142c(uVar3);
  func_0x000107c61434(lVar4);
  FUN_102b0a4a8();
  func_0x0001000b44c0(lVar8,uVar7);
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar4);
  return;
}



/* Entry: 102b0dbb4; end: 102b0dcd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b0dbb4(void)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  long *plVar7;
  
  plVar7 = *(long **)(unaff_x20 + _DAT_112eefe18);
  if (plVar7 != (long *)0x0) {
    func_0x0001000285a8(0x112e5e610,&UNK_10da659e0);
    func_0x000107c61174();
    plVar1 = plVar7;
    func_0x000107c4e618();
    func_0x000107c61180();
    plVar2 = plVar1;
    func_0x0001000b637c();
    func_0x000107c61170(plVar1);
    puVar3 = &UNK_11059c0a0;
    func_0x000107c613fc(&UNK_11059c0a0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    uVar4 = 0x102b0e964;
    puVar6 = puVar3;
    (**(code **)(*plVar2 + 0x60))(0x102b0e964);
    func_0x000107c61574(plVar2);
    func_0x000107c61574(puVar3);
    uVar5 = uVar4;
    func_0x000107c614f0(uVar4);
    (**(code **)(puVar6 + 0x18))(*(undefined8 *)(unaff_x20 + _DAT_112eefdf0),uVar5,puVar6);
    func_0x000107c61170(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar4);
    return;
  }
  return;
}



/* Entry: 102b0dcd4; end: 102b0dd33; -[SCCameraTimerModeV2ViewController viewDidLoad] */

void FUN_102b0dcd4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_102b0da74();
  FUN_102b0dbb4();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102b0dd34; end: 102b0debf; -[SCCameraTimerModeV2ViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b0dd34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidAppear__112684bd0;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  lVar2 = *(long *)(param_1 + _DAT_112eefe18);
  func_0x000107c4e454(lVar2);
  if (lVar2 != 0) {
    func_0x000107c51bdc(lVar2);
  }
  func_0x000107c4e868(lVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102b0dec0; end: 102b0df5b; -[SCCameraTimerModeV2ViewController viewDidDisappear:] */

void FUN_102b0dec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x000102b0dde4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b0df5c; end: 102b0e183;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b0df5c(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined *puStack_98;
  double dStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  double dStack_60;
  undefined8 uStack_58;
  
  lVar5 = *(long *)(*(long *)(unaff_x20 + _DAT_112eefe28) + _DAT_112eefba0);
  dVar7 = *(double *)(lVar5 + _DAT_112eefcb8);
  dVar6 = 1.0;
  if (0.0 < dVar7) {
    dVar6 = *(double *)(lVar5 + _DAT_112eefcc0) / dVar7;
  }
  dVar8 = *(double *)(unaff_x20 + _DAT_112eefe10 + 8);
  dVar9 = *(double *)(unaff_x20 + _DAT_112eefe10 + 0x18);
  dVar7 = dVar6 * dVar8 - dVar9;
  dVar6 = 0.0;
  if (0.0 < dVar7) {
    dVar6 = dVar7;
  }
  func_0x000107c60a44(&puStack_98,dVar6,600);
  puStack_68 = puStack_98;
  dStack_60 = dStack_90;
  uStack_58 = puStack_88;
  ppuVar1 = &puStack_98;
  dVar6 = dStack_90;
  puStack_98 = param_1;
  dStack_90 = (double)param_2;
  puStack_88 = (undefined *)param_3;
  func_0x000107c60a38(ppuVar1,&puStack_68);
  if ((int)ppuVar1 < 1) {
    puStack_98 = param_1;
    dStack_90 = (double)param_2;
    puStack_88 = (undefined *)param_3;
    func_0x000107c60a3c(&puStack_98);
    pcVar2 = "publishPlaybackProgressPercentage(_:)";
    func_0x0001000c10c0("publishPlaybackProgressPercentage(_:)");
    func_0x000107c61180();
    puVar3 = &UNK_11059c0a0;
    func_0x000107c613fc(&UNK_11059c0a0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_11059c118;
    func_0x000107c613fc(&UNK_11059c118,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(double *)(puVar4 + 0x18) = (dVar9 + dVar6) / dVar8;
    uStack_78 = 0x102b0e974;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    dStack_90 = 5.47077039858234e-315;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_11059c130;
    ppuVar1 = &puStack_98;
    puStack_70 = puVar4;
    func_0x000107c60bc4(ppuVar1);
    func_0x000107c61574(puStack_70);
    func_0x000107c4e524(pcVar2);
    func_0x000107c60bd0(ppuVar1);
    func_0x000107c615e8(pcVar2);
  }
  else {
    lVar5 = *(long *)(unaff_x20 + _DAT_112eefe18);
    func_0x000107c4e454(lVar5);
    if (lVar5 != 0) {
      puStack_98 = *(undefined **)PTR__kCMTimeZero_110348670;
      puStack_88 = *(undefined **)(PTR__kCMTimeZero_110348670 + 0x10);
      dStack_90 = *(double *)(PTR__kCMTimeZero_110348670 + 8);
      func_0x000107c51bdc(lVar5);
    }
    func_0x000107c4e868(lVar5);
  }
  return;
}



/* Entry: 102b0e184; end: 102b0e237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b0e184(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + _DAT_112eefe28);
    func_0x000107c61174();
    func_0x000107c61170(param_2);
    lVar2 = *(long *)(lVar1 + _DAT_112eefba0);
    if ((*(byte *)(lVar2 + _DAT_112eefd30) & 1) == 0) {
      *(undefined8 *)(lVar2 + _DAT_112eefd18) = param_1;
      *(undefined8 *)(lVar2 + _DAT_112eefd20) = param_1;
      FUN_102b0ac74();
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102b0e238; end: 102b0e263; -[SCCameraTimerModeV2ViewController initWithNibName:bundle:] */

void FUN_102b0e238(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCameraTimerModeV2.CameraTimerModeV2ViewController",0x33,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b0e264);
  (*pcVar1)();
}



/* Entry: 102b0e264; end: 102b0e53f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b0e264(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  undefined8 uVar7;
  long alStack_78 [2];
  long alStack_68 [2];
  undefined1 auStack_58 [24];
  
  *(undefined1 *)(unaff_x20 + _DAT_112eefde8) = 1;
  lVar3 = _DAT_112eefde0;
  uVar7 = *(undefined8 *)(*(long *)(param_1 + _DAT_112eefba0) + _DAT_112eefcc0);
  cVar1 = *(char *)(param_1 + _DAT_112eefb88);
  func_0x000107c61428(unaff_x20 + _DAT_112eefde0,auStack_58,0,0);
  lVar3 = unaff_x20 + lVar3;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar4 = 0;
    func_0x000102b11754();
    lVar5 = lVar4;
    func_0x000107c610f8();
    bVar2 = cVar1 == '\x01';
    plVar6 = alStack_68;
    if (!bVar2) {
      plVar6 = alStack_78;
    }
    *(bool *)(lVar5 + _DAT_112eeff50) = bVar2;
    *plVar6 = lVar5;
    plVar6[1] = lVar4;
    func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
    func_0x000107c428d4(uVar7,lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(plVar6);
  }
  return;
}



/* Entry: 102b0e540; end: 102b0e79f;  */

undefined * FUN_102b0e540(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  param_4 = param_4 >> 1;
  lVar2 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102b0e60c);
    (*pcVar3)();
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar2 != 0) {
    if (0 < lVar2) {
      puVar4 = (undefined *)0x112e93710;
      func_0x0001000285a8(0x112e93710,&UNK_10da9f330);
      func_0x000107c613fc();
      puVar5 = puVar4;
      func_0x000107c610a4();
      puVar1 = puVar5 + -0x19;
      if (0x1f < (long)puVar5) {
        puVar1 = puVar5 + -0x20;
      }
      *(long *)(puVar4 + 0x10) = lVar2;
      *(long *)(puVar4 + 0x18) = ((long)puVar1 >> 3) << 1;
    }
    if (param_3 == param_4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102b0e608);
      (*pcVar3)();
    }
    func_0x000107c610b4(puVar4 + 0x20,param_2 + param_3 * 8,lVar2 * 8);
  }
  return puVar4;
}



/* Entry: 102b0e7a0; end: 102b0e843;  */

long FUN_102b0e7a0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102b0e844; end: 102b0e863;  */

void FUN_102b0e844(void)

{
  func_0x000107c61168(&PTR_PTR_112889220);
  return;
}



/* Entry: 102b0e864; end: 102b0e93b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b0e864(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c61614(unaff_x20 + _DAT_112eefde0,0);
  *(undefined1 *)(unaff_x20 + _DAT_112eefde8) = 0;
  lVar2 = _DAT_112eefdf0;
  uVar4 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eefdf8);
  *puVar1 = 0;
  puVar1[1] = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112eefe00) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eefe08) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCCameraTimerModeV2/SCCameraTimerModeV2ViewController.swift",0x3b,2,0x4d,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102b0e93c);
  (*pcVar3)();
}



/* Entry: 102b0e93c; end: 102b0e977;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b0e93c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112eefe28);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    lVar1 = *(long *)(lVar2 + _DAT_112eefba0);
    if ((*(byte *)(lVar1 + _DAT_112eefd30) & 1) == 0) {
      *(undefined8 *)(lVar1 + _DAT_112eefd18) = uVar3;
      *(undefined8 *)(lVar1 + _DAT_112eefd20) = uVar3;
      FUN_102b0ac74();
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102b0e978; end: 102b0ea83;  */

/* WARNING: Possible PIC construction at 0x000102b0ea28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b0ea2c) */
/* WARNING: Removing unreachable block (ram,0x000102b0ea6c) */

void FUN_102b0e978(void)

{
  code *pcVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined2 *)PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5ed90();
  uStack_40 = 0;
  pfVar6 = (float *)&uStack_40;
  puVar4 = puVar2;
  puVar5 = puVar3;
  func_0x000107c4ff50();
  func_0x000107c61170(puVar2);
  func_0x000107c61170();
  if (((int)puVar4 == 0) || (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)(uStack_40);
    return;
  }
  func_0x000107c60e78();
  if (puVar3 != (undefined2 *)0x0) {
    if ((long)puVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b0eb10);
      (*pcVar1)();
    }
    if (puVar5 != (undefined2 *)0x0) {
      do {
        fVar7 = *pfVar6;
        fVar8 = fVar7;
        if (fVar7 <= -1.0) {
          fVar8 = -1.0;
        }
        fVar8 = fVar8 * 32767.0;
        if (1.0 <= fVar7) {
          fVar8 = 32767.0;
        }
        if (0x7f7fffff < (uint)ABS(fVar8)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102b0eb04);
          (*pcVar1)();
        }
        if (fVar8 <= -32769.0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102b0eb08);
          (*pcVar1)();
        }
        if (32768.0 <= fVar8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102b0eb0c);
          (*pcVar1)();
        }
        *puVar3 = (short)(int)fVar8;
        puVar5 = (undefined2 *)((long)puVar5 + -1);
        puVar3 = puVar3 + 1;
        pfVar6 = pfVar6 + 1;
      } while (puVar5 != (undefined2 *)0x0);
    }
  }
  return;
}



/* Entry: 102b0ea84; end: 102b0eb1f;  */

void FUN_102b0ea84(undefined2 *param_1,undefined8 param_2,long param_3,float *param_4)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  
  if (param_1 != (undefined2 *)0x0) {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b0eb10);
      (*pcVar1)();
    }
    if (param_3 != 0) {
      do {
        fVar2 = *param_4;
        fVar3 = fVar2;
        if (fVar2 <= -1.0) {
          fVar3 = -1.0;
        }
        fVar3 = fVar3 * 32767.0;
        if (1.0 <= fVar2) {
          fVar3 = 32767.0;
        }
        if (0x7f7fffff < (uint)ABS(fVar3)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102b0eb04);
          (*pcVar1)();
        }
        if (fVar3 <= -32769.0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102b0eb08);
          (*pcVar1)();
        }
        if (32768.0 <= fVar3) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102b0eb0c);
          (*pcVar1)();
        }
        *param_1 = (short)(int)fVar3;
        param_3 = param_3 + -1;
        param_1 = param_1 + 1;
        param_4 = param_4 + 1;
      } while (param_3 != 0);
    }
  }
  return;
}



/* Entry: 102b0eb20; end: 102b0eb3f;  */

void FUN_102b0eb20(void)

{
  func_0x000107c61168(&PTR_PTR_112eefe98);
  return;
}



/* Entry: 102b0eb40; end: 102b0ec53;  */

undefined2 * FUN_102b0eb40(float *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  float *pfVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined2 *puVar10;
  float *pfVar11;
  long lVar12;
  undefined8 extraout_x8;
  undefined2 *puVar13;
  uint uVar14;
  ulong uVar15;
  undefined2 *unaff_x20;
  undefined8 uVar16;
  ulong uVar17;
  code *pcVar18;
  float fVar19;
  float fVar20;
  undefined2 uStack_c8;
  undefined1 uStack_c6;
  undefined1 uStack_c5;
  undefined1 uStack_c4;
  undefined1 uStack_c3;
  undefined1 uStack_c2;
  undefined1 uStack_c1;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  undefined1 uStack_be;
  undefined1 uStack_bd;
  undefined1 uStack_bc;
  undefined1 uStack_bb;
  undefined1 uStack_ba;
  undefined1 uStack_b9;
  long lStack_b8;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar6 = param_1;
  func_0x000107c5ed90();
  pfVar11 = pfVar6;
  func_0x000107c45420();
  func_0x000107c61170(pfVar6);
  uVar16 = 0;
  if (unaff_x20 == (undefined2 *)0x0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(uVar16);
    func_0x000107c61654();
    lVar7 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar7 + -8) + 8))();
  }
  else {
    lVar7 = 0;
    func_0x000107c5ede0();
    pcVar18 = *(code **)(*(long *)(lVar7 + -8) + 8);
    func_0x000107c61174(0);
    (*pcVar18)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = *(undefined2 **)param_1;
  uVar15 = *(ulong *)(param_1 + 2);
  uVar4 = (uint)(uVar15 >> 0x20);
  uVar14 = uVar4 >> 0x1e;
  uStack_c8._0_1_ = SUB81(puVar10,0);
  uStack_c8._1_1_ = (undefined1)((ulong)puVar10 >> 8);
  uStack_c6 = (undefined1)((ulong)puVar10 >> 0x10);
  uStack_c5 = (undefined1)((ulong)puVar10 >> 0x18);
  uStack_c4 = (undefined1)((ulong)puVar10 >> 0x20);
  uStack_c3 = (undefined1)((ulong)puVar10 >> 0x28);
  uStack_c2 = (undefined1)((ulong)puVar10 >> 0x30);
  uStack_c1 = (undefined1)((ulong)puVar10 >> 0x38);
  if (uVar4 >> 0x1e < 2) {
    if (uVar14 == 0) {
      func_0x00010006c090(puVar10,uVar15);
      uStack_c0 = (undefined1)uVar15;
      uStack_bf = (undefined1)(uVar15 >> 8);
      uStack_be = (undefined1)(uVar15 >> 0x10);
      uStack_bd = (undefined1)(uVar15 >> 0x18);
      uStack_bc = (undefined1)(uVar15 >> 0x20);
      uStack_bb = (undefined1)(uVar15 >> 0x28);
      uStack_ba = (undefined1)(uVar15 >> 0x30);
      if (lVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x102b0ef5c);
        (*pcVar18)();
      }
      if (lVar7 != 0) {
        puVar13 = &uStack_c8;
        do {
          fVar19 = *pfVar11;
          fVar20 = fVar19;
          if (fVar19 <= -1.0) {
            fVar20 = -1.0;
          }
          fVar20 = fVar20 * 32767.0;
          if (1.0 <= fVar19) {
            fVar20 = 32767.0;
          }
          if (0x7f7fffff < (uint)ABS(fVar20)) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x102b0ef50);
            (*pcVar18)();
          }
          if (fVar20 <= -32769.0) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x102b0ef54);
            (*pcVar18)();
          }
          if (32768.0 <= fVar20) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x102b0ef58);
            (*pcVar18)();
          }
          *puVar13 = (short)(int)fVar20;
          lVar7 = lVar7 + -1;
          puVar13 = puVar13 + 1;
          pfVar11 = pfVar11 + 1;
        } while (lVar7 != 0);
      }
      lVar12 = CONCAT17(uStack_c1,
                        CONCAT16(uStack_c2,
                                 CONCAT15(uStack_c3,
                                          CONCAT14(uStack_c4,
                                                   CONCAT13(uStack_c5,
                                                            CONCAT12(uStack_c6,
                                                                     CONCAT11(uStack_c8._1_1_,
                                                                              (undefined1)uStack_c8)
                                                                    ))))));
      uVar15 = (ulong)CONCAT16(uStack_ba,
                               CONCAT15(uStack_bb,
                                        CONCAT14(uStack_bc,
                                                 CONCAT13(uStack_bd,
                                                          CONCAT12(uStack_be,
                                                                   CONCAT11(uStack_bf,uStack_c0)))))
                              );
    }
    else {
      uVar17 = uVar15 & 0x3fffffffffffffff;
      func_0x000107c6157c(uVar17);
      func_0x00010006c090(puVar10,uVar15);
      uStack_c0 = (undefined1)uVar17;
      uStack_bf = (undefined1)(uVar17 >> 8);
      uStack_be = (undefined1)(uVar17 >> 0x10);
      uStack_bd = (undefined1)(uVar17 >> 0x18);
      uStack_bc = (undefined1)(uVar17 >> 0x20);
      uStack_bb = (undefined1)(uVar17 >> 0x28);
      uStack_ba = (undefined1)(uVar17 >> 0x30);
      uStack_b9 = (undefined1)(uVar17 >> 0x38);
      param_1[2] = 0.0;
      param_1[3] = -2.0;
      param_1[0] = 0.0;
      param_1[1] = 0.0;
      func_0x00010006c090(0,0xc000000000000000);
      puVar10 = &uStack_c8;
      FUN_102b0ef6c(extraout_x8,puVar10,lVar7,pfVar11);
      lVar12 = CONCAT17(uStack_c1,
                        CONCAT16(uStack_c2,
                                 CONCAT15(uStack_c3,
                                          CONCAT14(uStack_c4,
                                                   CONCAT13(uStack_c5,
                                                            CONCAT12(uStack_c6,
                                                                     CONCAT11(uStack_c8._1_1_,
                                                                              (undefined1)uStack_c8)
                                                                    ))))));
      uVar15 = CONCAT17(uStack_b9,
                        CONCAT16(uStack_ba,
                                 CONCAT15(uStack_bb,
                                          CONCAT14(uStack_bc,
                                                   CONCAT13(uStack_bd,
                                                            CONCAT12(uStack_be,
                                                                     CONCAT11(uStack_bf,uStack_c0)))
                                                  )))) | 0x4000000000000000;
    }
    *(long *)param_1 = lVar12;
    *(ulong *)(param_1 + 2) = uVar15;
  }
  else if (uVar14 == 2) {
    uVar17 = uVar15 & 0x3fffffffffffffff;
    func_0x000107c6157c(puVar10);
    func_0x000107c6157c(uVar17);
    func_0x00010006c090(puVar10,uVar15);
    uStack_c0 = (undefined1)uVar17;
    uStack_bf = (undefined1)(uVar17 >> 8);
    uStack_be = (undefined1)(uVar17 >> 0x10);
    uStack_bd = (undefined1)(uVar17 >> 0x18);
    uStack_bc = (undefined1)(uVar17 >> 0x20);
    uStack_bb = (undefined1)(uVar17 >> 0x28);
    uStack_ba = (undefined1)(uVar17 >> 0x30);
    uStack_b9 = (undefined1)(uVar17 >> 0x38);
    param_1[2] = 0.0;
    param_1[3] = -2.0;
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    lVar8 = 0;
    func_0x00010006c090(0,0xc000000000000000);
    func_0x000107c5ede4();
    lVar5 = CONCAT17(uStack_c1,
                     CONCAT16(uStack_c2,
                              CONCAT15(uStack_c3,
                                       CONCAT14(uStack_c4,
                                                CONCAT13(uStack_c5,
                                                         CONCAT12(uStack_c6,
                                                                  CONCAT11(uStack_c8._1_1_,
                                                                           (undefined1)uStack_c8))))
                                      )));
    uVar15 = CONCAT17(uStack_b9,
                      CONCAT16(uStack_ba,
                               CONCAT15(uStack_bb,
                                        CONCAT14(uStack_bc,
                                                 CONCAT13(uStack_bd,
                                                          CONCAT12(uStack_be,
                                                                   CONCAT11(uStack_bf,uStack_c0)))))
                              ));
    lVar12 = *(long *)(lVar5 + 0x10);
    lVar1 = *(long *)(lVar5 + 0x18);
    func_0x000107c5ec30();
    if (lVar8 == 0) goto LAB_102b0ef68;
    lVar9 = lVar8;
    func_0x000107c5ec3c();
    lVar2 = lVar12 - lVar9;
    if (SBORROW8(lVar12,lVar9)) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x102b0ef60);
      (*pcVar18)();
    }
    lVar3 = lVar1 - lVar12;
    if (SBORROW8(lVar1,lVar12)) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x102b0ef64);
      (*pcVar18)();
    }
    func_0x000107c5ec38();
    if (lVar3 <= lVar9) {
      lVar9 = lVar3;
    }
    puVar10 = (undefined2 *)(lVar8 + lVar2);
    FUN_102b0ea84(extraout_x8,puVar10,(long)puVar10 + lVar9,lVar7,pfVar11);
    *(long *)param_1 = lVar5;
    *(ulong *)(param_1 + 2) = uVar15 | 0x8000000000000000;
  }
  else {
    uStack_c0 = 0;
    uStack_bf = 0;
    uStack_be = 0;
    uStack_bd = 0;
    uStack_bc = 0;
    uStack_bb = 0;
    uStack_c8._0_1_ = 0;
    uStack_c8._1_1_ = 0;
    uStack_c6 = 0;
    uStack_c5 = 0;
    uStack_c4 = 0;
    uStack_c3 = 0;
    uStack_c2 = 0;
    uStack_c1 = 0;
    puVar10 = &uStack_c8;
    FUN_102b0ea84(puVar10,&uStack_c8,lVar7,pfVar11);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return puVar10;
  }
  func_0x000107c60e78();
LAB_102b0ef68:
                    /* WARNING: Does not return */
  pcVar18 = (code *)SoftwareBreakpoint(1,0x102b0ef6c);
  (*pcVar18)();
}



/* Entry: 102b0ec54; end: 102b0ef6b;  */

void FUN_102b0ec54(undefined8 param_1,long *param_2,long param_3,float *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  undefined2 *puVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  undefined2 uStack_78;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *param_2;
  uVar12 = param_2[1];
  uVar5 = (uint)(uVar12 >> 0x20);
  uVar11 = uVar5 >> 0x1e;
  uStack_78._0_1_ = (undefined1)lVar8;
  uStack_78._1_1_ = (undefined1)((ulong)lVar8 >> 8);
  uStack_76 = (undefined1)((ulong)lVar8 >> 0x10);
  uStack_75 = (undefined1)((ulong)lVar8 >> 0x18);
  uStack_74 = (undefined1)((ulong)lVar8 >> 0x20);
  uStack_73 = (undefined1)((ulong)lVar8 >> 0x28);
  uStack_72 = (undefined1)((ulong)lVar8 >> 0x30);
  uStack_71 = (undefined1)((ulong)lVar8 >> 0x38);
  if (uVar5 >> 0x1e < 2) {
    if (uVar11 == 0) {
      func_0x00010006c090(lVar8,uVar12);
      uStack_70 = (undefined1)uVar12;
      uStack_6f = (undefined1)(uVar12 >> 8);
      uStack_6e = (undefined1)(uVar12 >> 0x10);
      uStack_6d = (undefined1)(uVar12 >> 0x18);
      uStack_6c = (undefined1)(uVar12 >> 0x20);
      uStack_6b = (undefined1)(uVar12 >> 0x28);
      uStack_6a = (undefined1)(uVar12 >> 0x30);
      if (param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x102b0ef5c);
        (*pcVar7)();
      }
      if (param_3 != 0) {
        puVar10 = &uStack_78;
        do {
          fVar14 = *param_4;
          fVar15 = fVar14;
          if (fVar14 <= -1.0) {
            fVar15 = -1.0;
          }
          fVar15 = fVar15 * 32767.0;
          if (1.0 <= fVar14) {
            fVar15 = 32767.0;
          }
          if (0x7f7fffff < (uint)ABS(fVar15)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x102b0ef50);
            (*pcVar7)();
          }
          if (fVar15 <= -32769.0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x102b0ef54);
            (*pcVar7)();
          }
          if (32768.0 <= fVar15) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x102b0ef58);
            (*pcVar7)();
          }
          *puVar10 = (short)(int)fVar15;
          param_3 = param_3 + -1;
          puVar10 = puVar10 + 1;
          param_4 = param_4 + 1;
        } while (param_3 != 0);
      }
      lVar8 = CONCAT17(uStack_71,
                       CONCAT16(uStack_72,
                                CONCAT15(uStack_73,
                                         CONCAT14(uStack_74,
                                                  CONCAT13(uStack_75,
                                                           CONCAT12(uStack_76,
                                                                    CONCAT11(uStack_78._1_1_,
                                                                             (undefined1)uStack_78))
                                                          )))));
      uVar12 = (ulong)CONCAT16(uStack_6a,
                               CONCAT15(uStack_6b,
                                        CONCAT14(uStack_6c,
                                                 CONCAT13(uStack_6d,
                                                          CONCAT12(uStack_6e,
                                                                   CONCAT11(uStack_6f,uStack_70)))))
                              );
    }
    else {
      uVar13 = uVar12 & 0x3fffffffffffffff;
      func_0x000107c6157c(uVar13);
      func_0x00010006c090(lVar8,uVar12);
      uStack_70 = (undefined1)uVar13;
      uStack_6f = (undefined1)(uVar13 >> 8);
      uStack_6e = (undefined1)(uVar13 >> 0x10);
      uStack_6d = (undefined1)(uVar13 >> 0x18);
      uStack_6c = (undefined1)(uVar13 >> 0x20);
      uStack_6b = (undefined1)(uVar13 >> 0x28);
      uStack_6a = (undefined1)(uVar13 >> 0x30);
      uStack_69 = (undefined1)(uVar13 >> 0x38);
      param_2[1] = -0x4000000000000000;
      *param_2 = 0;
      func_0x00010006c090(0,0xc000000000000000);
      FUN_102b0ef6c(param_1,&uStack_78,param_3,param_4);
      lVar8 = CONCAT17(uStack_71,
                       CONCAT16(uStack_72,
                                CONCAT15(uStack_73,
                                         CONCAT14(uStack_74,
                                                  CONCAT13(uStack_75,
                                                           CONCAT12(uStack_76,
                                                                    CONCAT11(uStack_78._1_1_,
                                                                             (undefined1)uStack_78))
                                                          )))));
      uVar12 = CONCAT17(uStack_69,
                        CONCAT16(uStack_6a,
                                 CONCAT15(uStack_6b,
                                          CONCAT14(uStack_6c,
                                                   CONCAT13(uStack_6d,
                                                            CONCAT12(uStack_6e,
                                                                     CONCAT11(uStack_6f,uStack_70)))
                                                  )))) | 0x4000000000000000;
    }
    *param_2 = lVar8;
    param_2[1] = uVar12;
  }
  else if (uVar11 == 2) {
    uVar13 = uVar12 & 0x3fffffffffffffff;
    func_0x000107c6157c(lVar8);
    func_0x000107c6157c(uVar13);
    func_0x00010006c090(lVar8,uVar12);
    uStack_70 = (undefined1)uVar13;
    uStack_6f = (undefined1)(uVar13 >> 8);
    uStack_6e = (undefined1)(uVar13 >> 0x10);
    uStack_6d = (undefined1)(uVar13 >> 0x18);
    uStack_6c = (undefined1)(uVar13 >> 0x20);
    uStack_6b = (undefined1)(uVar13 >> 0x28);
    uStack_6a = (undefined1)(uVar13 >> 0x30);
    uStack_69 = (undefined1)(uVar13 >> 0x38);
    param_2[1] = -0x4000000000000000;
    *param_2 = 0;
    lVar8 = 0;
    func_0x00010006c090(0,0xc000000000000000);
    func_0x000107c5ede4();
    lVar6 = CONCAT17(uStack_71,
                     CONCAT16(uStack_72,
                              CONCAT15(uStack_73,
                                       CONCAT14(uStack_74,
                                                CONCAT13(uStack_75,
                                                         CONCAT12(uStack_76,
                                                                  CONCAT11(uStack_78._1_1_,
                                                                           (undefined1)uStack_78))))
                                      )));
    uVar12 = CONCAT17(uStack_69,
                      CONCAT16(uStack_6a,
                               CONCAT15(uStack_6b,
                                        CONCAT14(uStack_6c,
                                                 CONCAT13(uStack_6d,
                                                          CONCAT12(uStack_6e,
                                                                   CONCAT11(uStack_6f,uStack_70)))))
                              ));
    lVar1 = *(long *)(lVar6 + 0x10);
    lVar2 = *(long *)(lVar6 + 0x18);
    func_0x000107c5ec30();
    if (lVar8 == 0) goto LAB_102b0ef68;
    lVar9 = lVar8;
    func_0x000107c5ec3c();
    lVar3 = lVar1 - lVar9;
    if (SBORROW8(lVar1,lVar9)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x102b0ef60);
      (*pcVar7)();
    }
    lVar4 = lVar2 - lVar1;
    if (SBORROW8(lVar2,lVar1)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x102b0ef64);
      (*pcVar7)();
    }
    func_0x000107c5ec38();
    if (lVar4 <= lVar9) {
      lVar9 = lVar4;
    }
    lVar8 = lVar8 + lVar3;
    FUN_102b0ea84(param_1,lVar8,lVar8 + lVar9,param_3,param_4);
    *param_2 = lVar6;
    param_2[1] = uVar12 | 0x8000000000000000;
  }
  else {
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6e = 0;
    uStack_6d = 0;
    uStack_6c = 0;
    uStack_6b = 0;
    uStack_78._0_1_ = 0;
    uStack_78._1_1_ = 0;
    uStack_76 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_72 = 0;
    uStack_71 = 0;
    FUN_102b0ea84(&uStack_78,&uStack_78,param_3,param_4);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
LAB_102b0ef68:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x102b0ef6c);
  (*pcVar7)();
}



/* Entry: 102b0ef6c; end: 102b0f033;  */

void FUN_102b0ef6c(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  func_0x000107c5edf0();
  lVar7 = (long)*param_2;
  iVar1 = param_2[1];
  if (iVar1 < *param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102b0f02c);
    (*pcVar3)();
  }
  lVar6 = *(long *)(param_2 + 2);
  lVar4 = lVar6;
  func_0x000107c6157c();
  func_0x000107c5ec30();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5ec3c();
    lVar2 = lVar7 - lVar5;
    if (!SBORROW8(lVar7,lVar5)) {
      lVar7 = iVar1 - lVar7;
      func_0x000107c5ec38();
      if (lVar7 <= lVar5) {
        lVar5 = lVar7;
      }
      lVar4 = lVar4 + lVar2;
      FUN_102b0ea84(param_1,lVar4,lVar4 + lVar5,param_3,param_4);
      func_0x000107c61574(lVar6);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102b0f030);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102b0f034);
  (*pcVar3)();
}



/* Entry: 102b0f034; end: 102b0f0f3;  */

void FUN_102b0f034(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lStack_40;
  undefined8 uStack_38;
  
  puVar1 = param_1;
  func_0x000107c438f0();
  if ((int)puVar1 != 0) {
    puVar2 = param_1;
    func_0x000107c4385c();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c3f7e4();
    func_0x000107c61170(puVar2);
    if ((int)puVar3 != 0) {
      uVar6 = (ulong)puVar1 & 0xffffffff;
      puVar1 = param_1;
      func_0x000107c436d8();
      if (puVar1 == (undefined8 *)0x0) {
        func_0x000107c497f0();
        if (param_1 != (undefined8 *)0x0) {
          func_0x0001008aa3d0(*param_1,uVar6 << 1);
        }
      }
      else {
        uVar5 = *puVar1;
        lVar4 = uVar6 << 1;
        func_0x000100076320();
        lStack_40 = lVar4;
        uStack_38 = param_2;
        FUN_102b0ec54(&lStack_40,uVar6,uVar5);
      }
    }
  }
  return;
}



/* Entry: 102b0f0f4; end: 102b0f82b;  */

/* WARNING: Removing unreachable block (ram,0x000102b0f31c) */
/* WARNING: Removing unreachable block (ram,0x000102b0f378) */

void FUN_102b0f0f4(double param_1,ulong param_2,ulong param_3,code *param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  ulong uVar9;
  uint uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  ulong uVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  code *pcVar15;
  code *pcVar16;
  code *pcVar17;
  code *pcVar18;
  code *pcVar19;
  ulong uVar20;
  float fVar21;
  undefined1 auStack_d0 [8];
  code *pcStack_c8;
  undefined *puStack_c0;
  ulong uStack_b8;
  code *pcStack_b0;
  code *pcStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  code *pcStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0;
  uVar9 = param_3;
  uStack_90 = param_2;
  func_0x000107c5eec8();
  pcVar17 = *(code **)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(pcVar17 + 0x40));
  puVar13 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  func_0x000107c5ede0();
  pcVar16 = *(code **)(uVar3 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(pcVar16 + 0x40));
  pcVar18 = (code *)(puVar13 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar20 = (long)pcVar18 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar19 = (code *)(uVar20 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar12 = (long)pcVar19 - extraout_x12_01;
  pcVar5 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((long)param_4 < 1) goto LAB_102b0f3a0;
  uVar1 = (uint)(param_3 >> 0x20);
  uVar10 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar10 == 0) {
      if ((param_3 & 0xff000000000000) == 0) goto LAB_102b0f3a0;
    }
    else if ((long)(int)uStack_90 == (long)uStack_90 >> 0x20) goto LAB_102b0f3a0;
  }
  else {
    if (uVar10 != 2) goto LAB_102b0f3a0;
    if (*(long *)(uStack_90 + 0x10) == *(long *)(uStack_90 + 0x18)) goto LAB_102b0f3a0;
  }
  puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  pcStack_a8 = param_4;
  uStack_98 = uVar3;
  func_0x000107c61168(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar14 = puVar4;
  uStack_a0 = uVar12;
  func_0x000107c5c7fc();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x000107c5edb4(uVar20,puVar14);
  func_0x000107c61170(puVar14);
  func_0x000107c5eec4(puVar13);
  func_0x000107c5eeac();
  (**(code **)(pcVar17 + 8))(puVar13,lVar2);
  uVar12 = uStack_98;
  func_0x000107c5ed9c(pcVar19,puVar14,uVar9);
  func_0x000107c6142c(uVar9);
  param_4 = *(code **)(pcVar16 + 8);
  (*param_4)(uVar20,uVar12);
  uVar20 = uStack_a0;
  func_0x000107c5eda0(uStack_a0,0x766177,0xe300000000000000);
  (*param_4)(pcVar19,uVar12);
  func_0x000107c5ee40(uVar20,0,uStack_90,param_3);
  uVar9 = uVar20;
  (**(code **)(pcVar16 + 0x10))(pcVar18,uVar20,uVar12);
  func_0x000107c610f8(PTR__OBJC_CLASS___AVAudioFile_1126abf80);
  pcVar17 = pcVar18;
  FUN_102b0eb40();
  pcVar19 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (pcVar17 == (code *)0x0) goto LAB_102b0f388;
  pcVar5 = pcVar17;
  func_0x000107c4adac();
  if ((long)pcVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar19 = (code *)SoftwareBreakpoint(1,0x102b0f7c8);
    (*pcVar19)();
  }
  if ((ulong)pcVar5 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar19 = (code *)SoftwareBreakpoint(1,0x102b0f7cc);
    (*pcVar19)();
  }
  if (pcVar5 != (code *)0x0) {
    pcVar5 = pcVar17;
    func_0x000107c4f2e8(pcVar17);
    func_0x000107c61180();
    pcVar18 = (code *)PTR__OBJC_CLASS___AVAudioPCMBuffer_1126abf88;
    func_0x000107c610f8();
    func_0x000107c47cec();
    func_0x000107c61170(pcVar5);
    if (pcVar18 != (code *)0x0) {
      pcStack_88 = (code *)0x0;
      pcVar15 = pcVar17;
      func_0x000107c4f9a0();
      pcVar5 = pcStack_88;
      if ((int)pcVar15 == 0) {
        pcVar15 = pcStack_88;
        func_0x000107c61174();
        func_0x000107c5ed30(pcVar5);
        func_0x000107c61170(pcVar15);
        func_0x000107c61654();
        func_0x000107c61170(pcVar17);
        func_0x000107c61170(pcVar18);
        func_0x000107c614ac(pcVar5);
        uVar12 = uStack_98;
        goto LAB_102b0f388;
      }
      func_0x000107c61174();
      pcVar5 = pcVar18;
      FUN_102b0f034();
      uVar12 = uStack_98;
      uVar1 = (uint)(uVar9 >> 0x20);
      uVar10 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar10 == 0) {
          if ((uVar9 & 0xff000000000000) != 0) goto LAB_102b0f530;
        }
        else {
          lVar2 = (long)(int)pcVar5;
          lVar11 = (long)pcVar5 >> 0x20;
LAB_102b0f508:
          if (lVar2 != lVar11) {
LAB_102b0f530:
            pcVar16 = pcVar17;
            func_0x000107c4f2e8(pcVar17);
            func_0x000107c61180();
            func_0x000107c515f0();
            func_0x000107c61170(pcVar16);
            puVar4 = PTR_PTR_1126ba188;
            func_0x000107c61168();
            pcStack_b0 = pcVar5;
            uStack_90 = uVar9;
            func_0x000107c5ee20(pcVar5);
            puVar14 = puVar4;
            func_0x000107c43d94();
            func_0x000107c61180();
            func_0x000107c61170(pcVar5);
            if (puVar14 == (undefined *)0x0) {
              puVar14 = (undefined *)0x0;
              puStack_c0 = (undefined *)0x0;
              uStack_b8 = 0xf000000000000000;
            }
            else {
              puVar6 = puVar14;
              func_0x000107c5ee30();
              func_0x000107c61170(puVar14);
              func_0x00010006c00c(puVar6,uVar9);
              puVar14 = puVar6;
              func_0x000107c5ee20(puVar6,uVar9);
              puStack_c0 = puVar6;
              uStack_b8 = uVar9;
              func_0x00010006c090(puVar6,uVar9);
            }
            func_0x000107c5e158(puVar4);
            func_0x000107c61180();
            func_0x000107c61170(puVar14);
            pcVar16 = (code *)PTR_PTR_1126ba188;
            func_0x000107c610f8();
            func_0x000107c45694();
            func_0x000107c61170(puVar4);
            uVar9 = uStack_90;
            uVar12 = uStack_98;
            if (pcVar16 != (code *)0x0) {
              pcVar15 = pcVar16;
              func_0x000107c515f8();
              func_0x000107c61180();
              if (pcVar15 != (code *)0x0) {
                uVar7 = 0;
                func_0x0001002ed07c(0);
                pcVar5 = pcVar15;
                func_0x000107c5fc54(pcVar15,uVar7);
                func_0x000107c61170(pcVar15);
                if ((ulong)pcVar5 >> 0x3e != 0) goto LAB_102b0f7d0;
                pcVar15 = *(code **)(((ulong)pcVar5 & 0xffffffffffffff8) + 0x10);
                if (pcVar15 == (code *)0x0) goto LAB_102b0f7f4;
                goto LAB_102b0f6a4;
              }
              func_0x000107c61170(pcVar16);
            }
            func_0x000107c61170(pcVar17);
            func_0x000107c61170(pcVar18);
            pcVar15 = pcStack_b0;
            pcVar5 = pcVar18;
            goto LAB_102b0f818;
          }
        }
      }
      else if (uVar10 == 2) {
        lVar2 = *(long *)(pcVar5 + 0x10);
        lVar11 = *(long *)(pcVar5 + 0x18);
        goto LAB_102b0f508;
      }
      func_0x000107c61170(pcVar17);
      func_0x000107c61170(pcVar18);
      func_0x00010006c090(pcVar5,uVar9);
      goto LAB_102b0f388;
    }
  }
  func_0x000107c61170(pcVar17);
  uVar12 = uStack_98;
LAB_102b0f388:
  while( true ) {
    FUN_102b0e978(uVar20);
    (*param_4)(uVar20,uVar12);
    pcVar5 = pcVar19;
LAB_102b0f3a0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) break;
    func_0x000107c60e78();
LAB_102b0f7d0:
    pcVar15 = (code *)((ulong)pcVar5 & 0xffffffffffffff8);
    if ((code *)0x7fffffffffffffff < pcVar5) {
      pcVar15 = pcVar5;
    }
    func_0x000107c60480();
    if (pcVar15 == (code *)0x0) {
LAB_102b0f7f4:
      pcVar15 = pcStack_b0;
      func_0x000107c6142c();
      func_0x000107c61170(pcVar17);
      func_0x000107c61170(pcVar18);
      func_0x000107c61170(pcVar16);
      uVar9 = uStack_90;
      pcVar5 = pcVar18;
    }
    else {
LAB_102b0f6a4:
      pcStack_c8 = pcVar18;
      pcStack_a8 = pcVar16;
      pcStack_88 = pcVar19;
      func_0x000102b10e94(0,(ulong)pcVar15 & ((long)pcVar15 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)pcVar15 < 0) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x102b0f82c);
        (*pcVar19)();
      }
      pcVar18 = (code *)0x0;
      pcVar16 = (code *)((ulong)pcVar5 & 0xc000000000000001);
      do {
        pcVar19 = pcStack_88;
        fVar21 = SUB84(param_1,0);
        if (pcVar16 == (code *)0x0) {
          pcVar8 = *(code **)(pcVar5 + (long)pcVar18 * 8 + 0x20);
          func_0x000107c61174(pcVar8);
        }
        else {
          pcVar8 = pcVar18;
          func_0x0001002ec9a0(pcVar18);
        }
        func_0x000107c436dc();
        func_0x000107c61170(pcVar8);
        pcStack_88 = pcVar19;
        uVar9 = *(ulong *)(pcVar19 + 0x10);
        if (*(ulong *)(pcVar19 + 0x18) >> 1 <= uVar9) {
          func_0x000102b10e94(1 < *(ulong *)(pcVar19 + 0x18),uVar9 + 1,1);
        }
        pcVar19 = pcStack_88;
        uVar12 = uStack_98;
        pcVar18 = pcVar18 + 1;
        param_1 = (double)fVar21;
        *(ulong *)(pcStack_88 + 0x10) = uVar9 + 1;
        *(double *)(pcStack_88 + uVar9 * 8 + 0x20) = param_1;
      } while (pcVar15 != pcVar18);
      func_0x000107c6142c(pcVar5);
      func_0x000107c61170(pcVar17);
      func_0x000107c61170(pcStack_c8);
      func_0x000107c61170(pcStack_a8);
      pcVar15 = pcStack_b0;
      uVar9 = uStack_90;
    }
LAB_102b0f818:
    func_0x00010006c090(pcVar15,uVar9);
    func_0x0001000b44c0(puStack_c0,uStack_b8);
    pcVar18 = pcVar5;
  }
  return;
}



/* Entry: 102b0f82c; end: 102b0f8f7;  */

undefined1  [16] FUN_102b0f82c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffef;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f0eef10);
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f0eeeb0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b0f8f8);
  (*pcVar1)();
}



/* Entry: 102b0f8f8; end: 102b0f91b;  */

undefined1  [16] FUN_102b0f8f8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x776f64746e756f63;
  func_0x000107c5fadc(0x776f64746e756f63,0xef656c7469745f6e);
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f0eeeb0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b0faac);
  (*pcVar1)();
}



/* Entry: 102b0f91c; end: 102b0f9e7;  */

undefined1  [16] FUN_102b0f91c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffea;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f0eeef0);
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f0eeeb0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b0f9e8);
  (*pcVar1)();
}



/* Entry: 102b0f9e8; end: 102b0f9fb;  */

undefined1  [16] FUN_102b0f9e8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x6c65636e6163;
  func_0x000107c5fadc(0x6c65636e6163,0xe600000000000000);
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f0eeeb0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b0faac);
  (*pcVar1)();
}



/* Entry: 102b0f9fc; end: 102b1043b;  */

undefined1  [16] FUN_102b0f9fc(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  func_0x000107c5fadc();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f0eeeb0);
  uVar3 = 0;
  func_0x000107c5fe40(0);
  lVar4 = param_1;
  uVar6 = uVar2;
  func_0x0001000f6108(param_1,uVar2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5faec(lVar4);
    func_0x000107c61170(lVar4);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b0faac);
  (*pcVar1)();
}



/* Entry: 102b1043c; end: 102b1067f;  */

uint FUN_102b1043c(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar9 = param_1;
    }
    func_0x000107c60480();
  }
  if (param_2 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar2 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar9 == uVar2) {
    if (uVar9 != 0) {
      uVar5 = param_1 & 0xffffffffffffff8;
      uVar2 = uVar5;
      if ((param_1 & 0x8000000000000000) != 0) {
        uVar2 = param_1;
      }
      uVar3 = uVar5 + 0x20;
      if (param_1 >> 0x3e != 0) {
        uVar3 = uVar2;
      }
      uVar6 = param_2 & 0xffffffffffffff8;
      uVar2 = uVar6;
      if ((param_2 & 0x8000000000000000) != 0) {
        uVar2 = param_2;
      }
      uVar4 = uVar6 + 0x20;
      if (param_2 >> 0x3e != 0) {
        uVar4 = uVar2;
      }
      if (uVar3 != uVar4) {
        if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102b10680);
          (*pcVar1)();
        }
        func_0x000102b11754(0);
        if (((param_2 | param_1) & 0xc000000000000001) == 0) {
          lVar12 = *(long *)(uVar5 + 0x10);
          lVar13 = *(long *)(uVar6 + 0x10);
          puVar10 = (ulong *)(param_1 + 0x20);
          puVar11 = (undefined8 *)(param_2 + 0x20);
          do {
            uVar9 = uVar9 - 1;
            if (lVar12 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x102b10620);
              (*pcVar1)();
            }
            if (lVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x102b10624);
              (*pcVar1)();
            }
            uVar5 = *puVar10;
            uVar7 = *puVar11;
            func_0x000107c61174();
            func_0x000107c61174(uVar7);
            uVar2 = uVar5;
            func_0x000107c60118(uVar5,uVar7);
            uVar8 = (uint)uVar2;
            func_0x000107c61170(uVar5);
            func_0x000107c61170(uVar7);
            if ((uVar2 & 1) == 0) break;
            lVar13 = lVar13 + -1;
            lVar12 = lVar12 + -1;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          } while (uVar9 != 0);
        }
        else {
          lVar12 = 4;
          do {
            uVar9 = uVar9 - 1;
            uVar2 = lVar12 - 4;
            if ((param_1 & 0xc000000000000001) == 0) {
              if (*(long *)(uVar5 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x102b10628);
                (*pcVar1)();
              }
              uVar3 = *(ulong *)(param_1 + lVar12 * 8);
              func_0x000107c61174();
              if ((param_2 & 0xc000000000000001) == 0) goto LAB_102b10548;
LAB_102b10518:
              FUN_102b0c354(uVar2,param_2);
            }
            else {
              uVar3 = uVar2;
              FUN_102b0c354(uVar2,param_1);
              if ((param_2 & 0xc000000000000001) != 0) goto LAB_102b10518;
LAB_102b10548:
              if (*(long *)(uVar6 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x102b1062c);
                (*pcVar1)();
              }
              uVar2 = *(ulong *)(param_2 + lVar12 * 8);
              func_0x000107c61174(uVar2);
            }
            uVar4 = uVar3;
            func_0x000107c60118(uVar3,uVar2);
            uVar8 = (uint)uVar4;
            func_0x000107c61170(uVar3);
            func_0x000107c61170(uVar2);
          } while (((uVar4 & 1) != 0) && (lVar12 = lVar12 + 1, uVar9 != 0));
        }
        goto LAB_102b10658;
      }
    }
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
LAB_102b10658:
  return uVar8 & 1;
}



/* Entry: 102b10680; end: 102b1068f; -[SCCameraTimerModeConfigV2 minDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102b10680(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112eefef0);
}



/* Entry: 102b10690; end: 102b1069f; -[SCCameraTimerModeConfigV2 maxDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102b10690(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112eefef8);
}



/* Entry: 102b106a0; end: 102b106af; -[SCCameraTimerModeConfigV2 startDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102b106a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112eeff00);
}



/* Entry: 102b106b0; end: 102b106bf; -[SCCameraTimerModeConfigV2 recordingStartDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102b106b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112eeff08);
}



/* Entry: 102b106c0; end: 102b1070f; -[SCCameraTimerModeConfigV2 countdownOptions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b106c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112eeff10);
  func_0x000102b11754(0);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b10710; end: 102b1071f; -[SCCameraTimerModeConfigV2 hasMusicPlayback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102b10710(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112eeff18);
}



/* Entry: 102b10720; end: 102b107d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b10720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eefef0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eefef8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112eeff00) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112eeff08) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112eeff10) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_112eeff18) = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b107d4; end: 102b1089f; -[SCCameraTimerModeConfigV2 initWithMinDuration:maxDuration:startDuration:recordingStartDuration:countdownOptions:hasMusicPlayback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b107d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_60;
  long lStack_58;
  
  lVar1 = param_5;
  func_0x000107c614f0();
  uVar2 = 0;
  func_0x000102b11754(0);
  func_0x000107c5fc54(param_7,uVar2);
  *(undefined8 *)(param_5 + _DAT_112eefef0) = param_1;
  *(undefined8 *)(param_5 + _DAT_112eefef8) = param_2;
  *(undefined8 *)(param_5 + _DAT_112eeff00) = param_3;
  *(undefined8 *)(param_5 + _DAT_112eeff08) = param_4;
  *(undefined8 *)(param_5 + _DAT_112eeff10) = param_7;
  *(undefined1 *)(param_5 + _DAT_112eeff18) = param_8;
  lStack_60 = param_5;
  lStack_58 = lVar1;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b108a0; end: 102b108cf;  */

void FUN_102b108a0(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_102b108d0(param_1);
  return;
}



/* Entry: 102b108d0; end: 102b10a7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b108d0(undefined8 *param_1)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  undefined8 uVar9;
  long lStack_98;
  long lStack_90;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  func_0x000107c614f0();
  uVar9 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_112eefef0) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eefef8) = uVar9;
  uVar9 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_112eeff00) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_112eeff08) = uVar9;
  lVar6 = param_1[4];
  lVar7 = *(long *)(lVar6 + 0x10);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar7 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000102b10eb0(0,lVar7,0);
    puVar5 = puStack_68;
    lVar3 = 0;
    func_0x000102b11754();
    pcVar8 = (char *)(lVar6 + 0x20);
    do {
      cVar2 = *pcVar8;
      lVar6 = lVar3;
      func_0x000107c610f8();
      if (cVar2 == '\x01') {
        *(undefined1 *)(lVar6 + _DAT_112eeff50) = 1;
        plVar4 = &lStack_78;
        lStack_78 = lVar6;
        lStack_70 = lVar3;
      }
      else {
        *(undefined1 *)(lVar6 + _DAT_112eeff50) = 0;
        plVar4 = &lStack_98;
        lStack_98 = lVar6;
        lStack_90 = lVar3;
      }
      func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
      uVar1 = *(ulong *)(puVar5 + 0x10);
      puStack_68 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        func_0x000102b10eb0(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
      *(long **)(puStack_68 + uVar1 * 8 + 0x20) = plVar4;
      lVar7 = lVar7 + -1;
      puVar5 = puStack_68;
      pcVar8 = pcVar8 + 1;
    } while (lVar7 != 0);
  }
  *(undefined **)(unaff_x20 + _DAT_112eeff10) = puVar5;
  FUN_102b11394(param_1);
  *(undefined1 *)(unaff_x20 + _DAT_112eeff18) = *(undefined1 *)(param_1 + 5);
  func_0x000107c61154(&stack0xffffffffffffff78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b10a7c; end: 102b10aaf; -[SCCameraTimerModeConfigV2 hash] */

undefined8 FUN_102b10a7c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102b10ab0();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 102b10ab0; end: 102b10bcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b10ab0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  double dVar3;
  undefined1 auStack_88 [72];
  
  func_0x000107c606ac(auStack_88);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_112eefef0) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_112eefef0);
  }
  func_0x000107c606a0(dVar3);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_112eefef8) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_112eefef8);
  }
  func_0x000107c606a0(dVar3);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_112eeff00) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_112eeff00);
  }
  func_0x000107c606a0(dVar3);
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_112eeff08) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_112eeff08);
  }
  func_0x000107c606a0(dVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112eeff10);
  uVar1 = 0;
  func_0x000102b11754(0);
  func_0x000107c5fc48(uVar2,uVar1);
  uVar1 = uVar2;
  func_0x000107c44c3c();
  func_0x000107c61170(uVar2);
  func_0x000107c60690(uVar1);
  func_0x000107c60694(*(undefined1 *)(unaff_x20 + _DAT_112eeff18));
  func_0x000107c606a4();
  return;
}



/* Entry: 102b10bcc; end: 102b10d1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102b10bcc(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  long lStack_98;
  undefined1 auStack_90 [24];
  long lStack_78;
  
  lVar5 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_90);
  if (lStack_78 == 0) {
    func_0x00010006e7f4(auStack_90);
  }
  else {
    plVar6 = &lStack_98;
    func_0x000107c6147c(plVar6,auStack_90,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar6 & 1) != 0) {
      dVar10 = *(double *)(unaff_x20 + _DAT_112eefef0);
      dVar11 = *(double *)(lStack_98 + _DAT_112eefef0);
      dVar12 = *(double *)(unaff_x20 + _DAT_112eefef8);
      dVar13 = *(double *)(lStack_98 + _DAT_112eefef8);
      dVar14 = *(double *)(unaff_x20 + _DAT_112eeff00);
      dVar15 = *(double *)(lStack_98 + _DAT_112eeff00);
      dVar16 = *(double *)(unaff_x20 + _DAT_112eeff08);
      dVar17 = *(double *)(lStack_98 + _DAT_112eeff08);
      uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112eeff10);
      uVar9 = *(undefined8 *)(lStack_98 + _DAT_112eeff10);
      func_0x000107c61434(uVar9);
      FUN_102b1043c(uVar8,uVar9);
      func_0x000107c6142c(uVar9);
      bVar1 = *(byte *)(unaff_x20 + _DAT_112eeff18);
      bVar2 = *(byte *)(lStack_98 + _DAT_112eeff18);
      func_0x000107c61170(lStack_98);
      bVar3 = false;
      if ((dVar10 == dVar11) && (bVar3 = false, !NAN(dVar12) && !NAN(dVar13))) {
        bVar3 = dVar12 == dVar13;
      }
      bVar4 = false;
      if ((bVar3) && (bVar4 = false, !NAN(dVar14) && !NAN(dVar15))) {
        bVar4 = dVar14 == dVar15;
      }
      bVar3 = false;
      if ((bVar4) && (bVar3 = false, !NAN(dVar16) && !NAN(dVar17))) {
        bVar3 = dVar16 == dVar17;
      }
      if (bVar3) {
        uVar7 = (uint)uVar8 & ((bVar1 ^ bVar2) ^ 1);
        goto LAB_102b10cf4;
      }
    }
  }
  uVar7 = 0;
LAB_102b10cf4:
  return uVar7 & 1;
}



/* Entry: 102b10d1c; end: 102b10d9b; -[SCCameraTimerModeConfigV2 isEqual:] */

uint FUN_102b10d1c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_102b10bcc(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 102b10d9c; end: 102b10d9f; -[SCCameraTimerModeConfigV2 copyWithZone:] */

void FUN_102b10d9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102b10da0; end: 102b10deb; -[SCCameraTimerModeConfigV2 description] */

void FUN_102b10da0(undefined8 param_1)

{
  undefined1 auStack_50 [48];
  
  func_0x000107c61174();
  FUN_102b111e0(auStack_50);
  func_0x000107c61170(param_1);
  FUN_102b11394(auStack_50);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b10dec; end: 102b10e67; -[SCCameraTimerModeConfigV2 init] */

void FUN_102b10dec(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCCameraTimerModeV2/SCCameraTimerModeConfigV2Wrapper.swift",0x3a,2,0x5a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b10e34);
  (*pcVar1)();
}



/* Entry: 102b10e68; end: 102b10e77; -[SCCameraTimerModeConfigV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b10e68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112eeff10));
  return;
}



/* Entry: 102b10e78; end: 102b10ecb;  */

void FUN_102b10e78(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102b10ecc();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102b10ecc; end: 102b110bb;  */

undefined * FUN_102b10ecc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102b10fbc);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112eeff48;
    func_0x0001000285a8(0x112eeff48,&UNK_10db1fa90);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar4,puVar1,uVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102b110bc; end: 102b111df;  */

undefined * FUN_102b110bc(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102b111e0);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_102b0c568();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x000102b11754(0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102b111e0; end: 102b11393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b111e0(undefined8 *param_1,long param_2)

{
  char cVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar9 = *(undefined8 *)(param_2 + _DAT_112eefef0);
  uVar10 = *(undefined8 *)(param_2 + _DAT_112eefef8);
  uVar11 = *(undefined8 *)(param_2 + _DAT_112eeff00);
  uVar12 = *(undefined8 *)(param_2 + _DAT_112eeff08);
  uVar5 = *(ulong *)(param_2 + _DAT_112eeff10);
  if (uVar5 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar6 = uVar5;
    }
    func_0x000107c60480();
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    FUN_102b10e78(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102b11394);
      (*pcVar3)();
    }
    uVar7 = 0;
    do {
      if ((uVar5 & 0xc000000000000001) == 0) {
        if (*(char *)(*(long *)(uVar5 + uVar7 * 8 + 0x20) + _DAT_112eeff50) == '\x01')
        goto LAB_102b112bc;
LAB_102b112dc:
        uVar8 = 0;
      }
      else {
        uVar4 = uVar7;
        FUN_102b0c354(uVar7,uVar5);
        cVar1 = *(char *)(uVar4 + _DAT_112eeff50);
        func_0x000107c615e8();
        if (cVar1 != '\x01') goto LAB_102b112dc;
LAB_102b112bc:
        uVar8 = 1;
      }
      uVar4 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar4) {
        FUN_102b10e78(1 < *(ulong *)(puVar2 + 0x18),uVar4 + 1,1);
      }
      uVar7 = uVar7 + 1;
      *(ulong *)(puVar2 + 0x10) = uVar4 + 1;
      puVar2[uVar4 + 0x20] = uVar8;
    } while (uVar6 != uVar7);
  }
  uVar8 = *(undefined1 *)(param_2 + _DAT_112eeff18);
  *param_1 = uVar9;
  param_1[1] = uVar10;
  param_1[2] = uVar11;
  param_1[3] = uVar12;
  param_1[4] = puVar2;
  *(undefined1 *)(param_1 + 5) = uVar8;
  return;
}



/* Entry: 102b11394; end: 102b113c7;  */

undefined8 FUN_102b11394(undefined8 param_1)

{
  FUN_102b054c4();
  return param_1;
}



/* Entry: 102b113c8; end: 102b113e7;  */

void FUN_102b113c8(void)

{
  func_0x000107c61168(&PTR_PTR_112889328);
  return;
}



/* Entry: 102b113e8; end: 102b11493;  */

void FUN_102b113e8(void)

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



/* Entry: 102b11494; end: 102b114d3;  */

void FUN_102b11494(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 102b114d4; end: 102b114ef; -[SCCameraTimerModeV2CountdownOption description] */

void FUN_102b114d4(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b114f0; end: 102b11537; -[SCCameraTimerModeV2CountdownOption init] */

void FUN_102b114f0(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCCameraTimerModeV2/SCCameraTimerModeV2CountdownOptionWrapper.swift",0x43,2,
                      0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b11538);
  (*pcVar1)();
}



/* Entry: 102b11538; end: 102b1157f; -[SCCameraTimerModeV2CountdownOption hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b11538(long param_1)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c606ac(auStack_68);
  func_0x000107c60690(*(undefined1 *)(param_1 + _DAT_112eeff50));
  func_0x000107c606a4();
  return;
}



/* Entry: 102b11580; end: 102b1161f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102b11580(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    func_0x000107c6147c(plVar4,auStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      cVar1 = *(char *)(unaff_x20 + _DAT_112eeff50);
      cVar2 = *(char *)(lStack_58 + _DAT_112eeff50);
      func_0x000107c61170();
      return cVar1 == cVar2;
    }
  }
  return false;
}



/* Entry: 102b11620; end: 102b1169f; -[SCCameraTimerModeV2CountdownOption isEqual:] */

uint FUN_102b11620(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_102b11580(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 102b116a0; end: 102b116a3; -[SCCameraTimerModeV2CountdownOption copyWithZone:] */

void FUN_102b116a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102b116a4; end: 102b116ab; +[SCCameraTimerModeV2CountdownOption defaultCountdown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b116a4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_112eeff50) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b116ac; end: 102b116b3; +[SCCameraTimerModeV2CountdownOption extendedCountdown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b116ac(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_112eeff50) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b116b4; end: 102b11703;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b116b4(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_112eeff50) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b11704; end: 102b1171f; -[SCCameraTimerModeV2CountdownOption matchDefaultCountdown:extendedCountdown:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b11704(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if (*(char *)(param_1 + _DAT_112eeff50) != '\x01') {
    param_4 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x000102b1171c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))();
  return;
}



/* Entry: 102b11720; end: 102b11773;  */

void FUN_102b11720(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b11774; end: 102b118db;  */

int FUN_102b11774(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102b117f0;
        goto LAB_102b117d4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102b117d4:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_102b117f0:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102b118dc; end: 102b1191b;  */

void FUN_102b118dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eeff80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db1faf8;
  func_0x000107c61520(&UNK_10db1faf8,&UNK_11059c1f8);
  puRam0000000112eeff80 = puVar1;
  return;
}



/* Entry: 102b1191c; end: 102b11993; +[SCCameraViewFinderImprovementsExperiment flipCameraViewfinderBlurEnabledWithCircumstanceEngine:] */

undefined8 FUN_102b1191c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  uVar1 = 0xd00000000000002e;
  func_0x000107c5fadc(0xd00000000000002e,0x800000010f0ef100);
  uVar2 = param_3;
  func_0x000107c3ebd4(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 102b11994; end: 102b11a0b; +[SCCameraViewFinderImprovementsExperiment lensActivationQueueThrottlingEnabledWithCircumstanceEngine:] */

undefined8 FUN_102b11994(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  uVar1 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f0ef130);
  uVar2 = param_3;
  func_0x000107c3ebd4(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 102b11a0c; end: 102b11a83; +[SCCameraViewFinderImprovementsExperiment lensActivationSuspendIdleMonitorEnabledWithCircumstanceEngine:] */

undefined8 FUN_102b11a0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  uVar1 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010f0ef160);
  uVar2 = param_3;
  func_0x000107c3ebd4(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 102b11a84; end: 102b11aa3;  */

void FUN_102b11a84(void)

{
  func_0x000107c61168(&PTR_PTR_1128894d8);
  return;
}



/* Entry: 102b11aa4; end: 102b11adf; -[SCCameraViewFinderImprovementsExperiment init] */

void FUN_102b11aa4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_102b11a84();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b11ae0; end: 102b11b0f;  */

void FUN_102b11ae0(void)

{
  FUN_102b11a84();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b11b10; end: 102b11b73; -[SCFourThreePinchModeWithDeferredExposure initWithMode:exposureValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b11b10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_112eeffb0) = param_3;
  *(undefined8 *)(param_1 + _DAT_112eeffb8) = param_4;
  lVar2 = param_1;
  func_0x0001008b9d70();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c615f0(param_4);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 102b11b74; end: 102b11b8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b11b74(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112eeffb8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf9d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(unaff_x20 + _DAT_112eeffb8),PTR_s_expose_1125c4ec8);
    return;
  }
  return;
}



/* Entry: 102b11b8c; end: 102b11baf; -[SCFourThreePinchModeWithDeferredExposure expose] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b11b8c(long param_1)

{
  if (*(long *)(param_1 + _DAT_112eeffb8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf9d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112eeffb8),PTR_s_expose_1125c4ec8);
    return;
  }
  return;
}



/* Entry: 102b11bb0; end: 102b11bd3; -[SCFourThreePinchModeWithDeferredExposure .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b11bb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eeffb8));
  return;
}



/* Entry: 102b11bd4; end: 102b11cab;  */

void FUN_102b11bd4(void)

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



/* Entry: 102b11cac; end: 102b11cb7;  */

void FUN_102b11cac(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 102b11cb8; end: 102b11cf7;  */

void FUN_102b11cb8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ef0028;
  func_0x0001000285a8(0x112ef0028,&UNK_10db1fc00);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 102b11cf8; end: 102b11d33; -[SCCameraFourThreePinchExperiment init] */

void FUN_102b11cf8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000102b11d70();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b11d34; end: 102b11d3f;  */

void FUN_102b11d34(void)

{
  (*(code *)0x102b11d70)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b11d40; end: 102b11d8f;  */

void FUN_102b11d40(code *param_1)

{
  (*param_1)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b11d90; end: 102b11d93;  */

void FUN_102b11d90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ef0030 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db1fc08;
  func_0x000107c61520(&UNK_10db1fc08,&UNK_11059c398);
  puRam0000000112ef0030 = puVar1;
  return;
}



/* Entry: 102b11d94; end: 102b11dd3;  */

void FUN_102b11d94(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ef0030 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db1fc08;
  func_0x000107c61520(&UNK_10db1fc08,&UNK_11059c398);
  puRam0000000112ef0030 = puVar1;
  return;
}



/* Entry: 102b11dd4; end: 102b11dd7;  */

void FUN_102b11dd4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ef0038 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112ef0040;
  func_0x00010002969c(0x112ef0040,&UNK_10db1fca8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112ef0038 = puVar2;
  return;
}



/* Entry: 102b11dd8; end: 102b11e27;  */

void FUN_102b11dd8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ef0038 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112ef0040;
  func_0x00010002969c(0x112ef0040,&UNK_10db1fca8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112ef0038 = puVar2;
  return;
}



/* Entry: 102b11e28; end: 102b11e37;  */

undefined1  [16] FUN_102b11e28(void)

{
  return ZEXT816(0x11059c398);
}



/* Entry: 102b11e38; end: 102b11eab;  */

void FUN_102b11e38(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_102b123c0(uVar1,param_2[1],0x112ef0498);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 102b11eac; end: 102b11f67; +[SCCameraHDModeExperiment removeDMFromToolbarWithAppStartExperimentReader:] */

undefined8 FUN_102b11eac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112ef00a0,auStack_48,0,0);
  if (cRam0000000112ef00a0 == '\0') {
    uVar1 = 0;
  }
  else if (cRam0000000112ef00a0 == '\x01') {
    uVar1 = 1;
  }
  else {
    func_0x000107c615f0(param_3);
    uVar2 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010f0ef230);
    uVar1 = param_3;
    func_0x000107c3ebd4(param_3);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(param_3);
  }
  return uVar1;
}



/* Entry: 102b11f68; end: 102b1204f;  */

void FUN_102b11f68(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_102b123c0(uVar1,param_2[1],0x112ef0428);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 102b12050; end: 102b1210b; +[SCCameraHDModeExperiment hdModePersistanceEnabledWithCircumstanceEngine:] */

undefined8 FUN_102b12050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112ef0130,auStack_48,0,0);
  if (cRam0000000112ef0130 == '\0') {
    uVar1 = 0;
  }
  else if (cRam0000000112ef0130 == '\x01') {
    uVar1 = 1;
  }
  else {
    func_0x000107c615f0(param_3);
    uVar2 = 0xd00000000000001e;
    func_0x000107c5fadc(0xd00000000000001e,0x800000010f0ef280);
    uVar1 = param_3;
    func_0x000107c3ebd4(param_3);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(param_3);
  }
  return uVar1;
}



/* Entry: 102b1210c; end: 102b1234f;  */

void FUN_102b1210c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar3 = 0x64656c62616e45;
  if (cVar4 != '\x01') {
    uVar3 = 0x2074636570736552;
  }
  uVar1 = 0xe700000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xeb00000000422f41;
  }
  uVar2 = 0x64656c6261736944;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe800000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 102b12350; end: 102b1238b; -[SCCameraHDModeExperiment init] */

void FUN_102b12350(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_102b1242c();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}


