/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102b06d8c; end: 102b06e47; -[_TtC19SCCameraTimerModeV230CameraTimerModeV2ContainerView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b06db8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b06dd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b06df8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b06e18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b06dfc) */
/* WARNING: Removing unreachable block (ram,0x000102b06ddc) */
/* WARNING: Removing unreachable block (ram,0x000102b06dbc) */
/* WARNING: Removing unreachable block (ram,0x000102b06e1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b06d8c(long param_1)

{
  FUN_102b070e8(param_1 + _DAT_112eefb80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eefb90));
  return;
}



/* Entry: 102b06e48; end: 102b06e67;  */

void FUN_102b06e48(void)

{
  func_0x000107c61168(&PTR_PTR_112888e08);
  return;
}



/* Entry: 102b06e68; end: 102b070bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b06e68(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112eefb80;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  lVar1 = _DAT_112eefb90;
  puVar3 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112eefb98;
  puVar3 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112eefba8;
  puVar3 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112eefbb0;
  uVar4 = 0;
  FUN_102b0842c();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar4;
  lVar1 = _DAT_112eefbd0;
  puVar3 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c566f0();
  func_0x000107c56390(puVar3);
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCCameraTimerModeV2/SCCameraTimerModeV2ContainerView.swift",0x3a,2,0x47,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b06f7c);
  (*pcVar2)();
}



/* Entry: 102b070c0; end: 102b070e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b070c0(void)

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



/* Entry: 102b070e8; end: 102b0710b;  */

undefined8 FUN_102b070e8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102b0710c; end: 102b0712b;  */

void FUN_102b0710c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102b06864(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102b0712c; end: 102b071d7;  */

void FUN_102b0712c(void)

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



/* Entry: 102b071d8; end: 102b071db;  */

void FUN_102b071d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eefc00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db1f860;
  func_0x000107c61520(&UNK_10db1f860,&UNK_11059bb80);
  puRam0000000112eefc00 = puVar1;
  return;
}



/* Entry: 102b071dc; end: 102b0721b;  */

void FUN_102b071dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eefc00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db1f860;
  func_0x000107c61520(&UNK_10db1f860,&UNK_11059bb80);
  puRam0000000112eefc00 = puVar1;
  return;
}



/* Entry: 102b0721c; end: 102b07393;  */

bool FUN_102b0721c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102b07394; end: 102b0797b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b07394(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long unaff_x20;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = _DAT_112eefc18;
  func_0x000107c61428(unaff_x20 + _DAT_112eefc18,auStack_78,1,0);
  uVar10 = *(ulong *)(unaff_x20 + lVar2);
  if (uVar10 >> 0x3e == 0) {
    uVar13 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar13 = uVar10 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar10) {
      uVar13 = uVar10;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar10);
  if (uVar13 != 0) {
    uVar15 = 0;
    do {
      if ((uVar10 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102b077f4);
          (*pcVar3)();
        }
        uVar4 = *(ulong *)(uVar10 + uVar15 * 8 + 0x20);
        func_0x000107c61174(uVar4);
      }
      else {
        uVar4 = uVar15;
        func_0x00010111c594(uVar15,uVar10);
      }
      if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102b07464);
        (*pcVar3)();
      }
      uVar16 = uVar15 + 1;
      func_0x000107c4ff34();
      func_0x000107c61170(uVar4);
      uVar15 = uVar15 + 1;
    } while (uVar16 != uVar13);
  }
  func_0x000107c6142c(uVar10);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined **)(unaff_x20 + lVar2) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c6142c();
  func_0x00010052bbec();
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x000107c43780();
  func_0x000107c61180();
  func_0x000107c615e8(uVar5);
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 != 0) {
    lVar14 = 0;
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112eefc20);
    puVar11 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar8 = puVar11[-1];
      uVar1 = *puVar11;
      puVar7 = PTR__OBJC_CLASS___UIButton_1126aec48;
      func_0x000107c61168();
      func_0x000107c61434(uVar1);
      func_0x000107c3ee98();
      func_0x000107c61180();
      func_0x000107c5fadc(uVar8,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x000107c59e1c(puVar7);
      func_0x000107c61170(uVar8);
      puVar9 = puVar7;
      func_0x000107c5cac0();
      func_0x000107c61180();
      if (puVar9 != (undefined *)0x0) {
        func_0x000107c54adc();
        func_0x000107c61170(puVar9);
      }
      puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c61174();
      func_0x000107c3fa94(puVar9);
      func_0x000107c61180();
      func_0x000107c52b50(puVar7);
      func_0x000107c61170(puVar9);
      func_0x000107c59ba8(puVar7);
      func_0x000107c61170(puVar7);
      func_0x000107c3d8b8(puVar7);
      func_0x000107c61428(unaff_x20 + lVar2,auStack_90,0x21,0);
      uVar13 = *(ulong *)(unaff_x20 + lVar2);
      func_0x000107c61174();
      uVar10 = uVar13;
      func_0x000107c61550();
      *(ulong *)(unaff_x20 + lVar2) = uVar13;
      if ((((int)uVar10 == 0) || ((long)uVar13 < 0)) || (uVar10 = uVar13, (uVar13 >> 0x3e & 1) != 0)
         ) {
        if (uVar13 >> 0x3e == 0) {
          uVar15 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar15 = uVar13 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar13) {
            uVar15 = uVar13;
          }
          func_0x000107c60480(uVar15);
        }
        uVar10 = 0;
        func_0x000101136bfc(0,uVar15 + 1,1,uVar13);
        *(ulong *)(unaff_x20 + lVar2) = uVar10;
      }
      uVar4 = uVar10 & 0xffffffffffffff8;
      uVar13 = *(ulong *)(uVar4 + 0x10);
      uVar15 = uVar10;
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar13) {
        uVar15 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
        func_0x000101136bfc(uVar15,uVar13 + 1,1,uVar10);
        uVar4 = uVar15 & 0xffffffffffffff8;
      }
      lVar14 = lVar14 + 1;
      puVar11 = puVar11 + 2;
      *(ulong *)(uVar4 + 0x10) = uVar13 + 1;
      *(undefined **)(uVar4 + uVar13 * 8 + 0x20) = puVar7;
      *(ulong *)(unaff_x20 + lVar2) = uVar15;
      func_0x000107c614a8(auStack_90);
      func_0x000107c3d5b4(uVar5);
      func_0x000107c61170(puVar7);
    } while (lVar12 != lVar14);
  }
  *(undefined8 *)(unaff_x20 + _DAT_112eefc08) = param_2;
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar9 = puVar7;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c5af88(puVar7);
  func_0x000107c61180();
  uVar10 = *(ulong *)(unaff_x20 + lVar2);
  if (uVar10 >> 0x3e == 0) {
    uVar13 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar13 = uVar10 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar10) {
      uVar13 = uVar10;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar10);
  if (uVar13 != 0) {
    uVar15 = 0;
    do {
      if ((uVar10 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102b077f8);
          (*pcVar3)();
        }
        uVar4 = *(ulong *)(uVar10 + uVar15 * 8 + 0x20);
        func_0x000107c61174(uVar4);
      }
      else {
        uVar4 = uVar15;
        func_0x00010111c594(uVar15,uVar10);
      }
      if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102b077a8);
        (*pcVar3)();
      }
      uVar16 = uVar15 + 1;
      func_0x000107c59e34();
      func_0x000107c61170(uVar4);
      uVar15 = uVar15 + 1;
    } while (uVar16 != uVar13);
  }
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar9);
  func_0x000107c6142c(uVar10);
  func_0x000107c56a14();
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 102b0797c; end: 102b0798f; -[_TtC19SCCameraTimerModeV232CameraTimerModeV2CountdownPicker init] */

void FUN_102b0797c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c013df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,0,0,0,param_1,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 102b07990; end: 102b07a7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102b07990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112eefc08) = 0;
  lVar1 = _DAT_112eefc10;
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined **)(unaff_x20 + _DAT_112eefc18) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar1 = _DAT_112eefc20;
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffffa0,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_102b07a7c();
  func_0x000107c61170(puVar3);
  return puVar3;
}



/* Entry: 102b07a7c; end: 102b07e1b;  */

/* WARNING: Possible PIC construction at 0x000102b07ad4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b07af8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b07b1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b07b60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b07b74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b07bb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b07bdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b07cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b07d14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b07d6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b07dc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b07d70) */
/* WARNING: Removing unreachable block (ram,0x000102b07d18) */
/* WARNING: Removing unreachable block (ram,0x000102b07cc0) */
/* WARNING: Removing unreachable block (ram,0x000102b07be0) */
/* WARNING: Removing unreachable block (ram,0x000102b07bbc) */
/* WARNING: Removing unreachable block (ram,0x000102b07b78) */
/* WARNING: Removing unreachable block (ram,0x000102b07b64) */
/* WARNING: Removing unreachable block (ram,0x000102b07b20) */
/* WARNING: Removing unreachable block (ram,0x000102b07afc) */
/* WARNING: Removing unreachable block (ram,0x000102b07ad8) */
/* WARNING: Removing unreachable block (ram,0x000102b07dc8) */

void FUN_102b07a7c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 102b07e1c; end: 102b07e3b; -[_TtC19SCCameraTimerModeV232CameraTimerModeV2CountdownPicker initWithFrame:] */

void FUN_102b07e1c(void)

{
  FUN_102b07990();
  return;
}



/* Entry: 102b07e3c; end: 102b07e63; -[_TtC19SCCameraTimerModeV232CameraTimerModeV2CountdownPicker initWithCoder:] */

void FUN_102b07e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_102b08484();
  return;
}



/* Entry: 102b07e64; end: 102b07f9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b07e64(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_layoutSubviews_112600e60);
  lVar2 = _DAT_112eefc18;
  lVar1 = _DAT_112eefc08;
  lVar6 = *(long *)(unaff_x20 + _DAT_112eefc08);
  if (-1 < lVar6) {
    func_0x000107c61428(unaff_x20 + _DAT_112eefc18,auStack_58,0,0);
    uVar5 = *(ulong *)(unaff_x20 + lVar2);
    if (uVar5 >> 0x3e == 0) {
      uVar4 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar4 = uVar5 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar5) {
        uVar4 = uVar5;
      }
      func_0x000107c60480();
    }
    if (lVar6 < (long)uVar4) {
      uVar5 = *(ulong *)(unaff_x20 + lVar1);
      func_0x000107c61428(unaff_x20 + lVar2,auStack_70,0x20,0);
      uVar4 = *(ulong *)(unaff_x20 + lVar2);
      if ((uVar4 & 0xc000000000000001) == 0) {
        if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102b07f98);
          (*pcVar3)();
        }
        if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102b07f9c);
          (*pcVar3)();
        }
        uVar5 = *(ulong *)(uVar4 + uVar5 * 8 + 0x20);
        func_0x000107c61174(uVar5);
      }
      else {
        func_0x00010111c594(uVar5);
      }
      func_0x000107c614a8(auStack_70);
      func_0x000107c3ec60(uVar5);
      func_0x000107c4073c(uVar5);
      func_0x000107c54b80(*(undefined8 *)(unaff_x20 + _DAT_112eefc10));
      func_0x000107c61170(uVar5);
    }
  }
  return;
}



/* Entry: 102b07f9c; end: 102b08197;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b07f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = _DAT_112eefc18;
  lVar1 = _DAT_112eefc08;
  lVar9 = *(long *)(unaff_x20 + _DAT_112eefc08);
  if (-1 < lVar9) {
    func_0x000107c61428(unaff_x20 + _DAT_112eefc18,auStack_78,0,0);
    uVar8 = *(ulong *)(unaff_x20 + lVar2);
    if (uVar8 >> 0x3e == 0) {
      uVar4 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar4 = uVar8 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar8) {
        uVar4 = uVar8;
      }
      func_0x000107c60480();
    }
    if (lVar9 < (long)uVar4) {
      uVar8 = *(ulong *)(unaff_x20 + lVar1);
      func_0x000107c61428(unaff_x20 + lVar2,&puStack_a8,0x20,0);
      uVar4 = *(ulong *)(unaff_x20 + lVar2);
      if ((uVar4 & 0xc000000000000001) == 0) {
        if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102b08194);
          (*pcVar3)();
        }
        if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102b08198);
          (*pcVar3)();
        }
        uVar8 = *(ulong *)(uVar4 + uVar8 * 8 + 0x20);
        func_0x000107c61174(uVar8);
      }
      else {
        func_0x00010111c594(uVar8);
      }
      func_0x000107c614a8(&puStack_a8);
      func_0x000107c3ec60(uVar8);
      func_0x000107c4073c(uVar8);
      if ((param_5 & 1) == 0) {
        func_0x000107c54b80(*(undefined8 *)(unaff_x20 + _DAT_112eefc10));
        func_0x000107c61170(uVar8);
      }
      else {
        puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
        func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
        puVar6 = &UNK_11059bbd8;
        func_0x000107c613fc(&UNK_11059bbd8,0x38,7);
        *(long *)(puVar6 + 0x10) = unaff_x20;
        *(undefined8 *)(puVar6 + 0x18) = param_1;
        *(undefined8 *)(puVar6 + 0x20) = param_2;
        *(undefined8 *)(puVar6 + 0x28) = param_3;
        *(undefined8 *)(puVar6 + 0x30) = param_4;
        pcStack_88 = FUN_102b0844c;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1000f6b44;
        puStack_90 = &UNK_11059bbf0;
        ppuVar7 = &puStack_a8;
        puStack_80 = puVar6;
        func_0x000107c60bc4(ppuVar7);
        puVar6 = puStack_80;
        func_0x000107c61174();
        func_0x000107c61574(puVar6);
        func_0x000107c3dccc(0x3fc999999999999a,puVar5);
        func_0x000107c61170(uVar8);
        func_0x000107c60bd0(ppuVar7);
      }
    }
  }
  return;
}



/* Entry: 102b08198; end: 102b081bf; -[_TtC19SCCameraTimerModeV232CameraTimerModeV2CountdownPicker layoutSubviews] */

void FUN_102b08198(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102b07e64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b081c0; end: 102b0835f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b081c0(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_78 [24];
  
  func_0x000107c5c6a4();
  if (param_1 != *(long *)(unaff_x20 + _DAT_112eefc08)) {
    *(long *)(unaff_x20 + _DAT_112eefc08) = param_1;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    puVar4 = puVar3;
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c5af88(puVar3);
    func_0x000107c61180();
    lVar1 = _DAT_112eefc18;
    func_0x000107c61428(unaff_x20 + _DAT_112eefc18,auStack_78,0,0);
    uVar6 = *(ulong *)(unaff_x20 + lVar1);
    if (uVar6 >> 0x3e == 0) {
      uVar7 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar7 = uVar6 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar6) {
        uVar7 = uVar6;
      }
      func_0x000107c60480();
    }
    func_0x000107c61434(uVar6);
    if (uVar7 != 0) {
      uVar8 = 0;
      do {
        if ((uVar6 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102b08348);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(uVar6 + uVar8 * 8 + 0x20);
          func_0x000107c61174(uVar5);
        }
        else {
          uVar5 = uVar8;
          func_0x00010111c594(uVar8,uVar6);
        }
        if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102b082f8);
          (*pcVar2)();
        }
        uVar9 = uVar8 + 1;
        func_0x000107c59e34();
        func_0x000107c61170(uVar5);
        uVar8 = uVar8 + 1;
      } while (uVar9 != uVar7);
    }
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c6142c(uVar6);
    FUN_102b07f9c(1);
    func_0x000107c51d9c();
  }
  return;
}



/* Entry: 102b08360; end: 102b083af; -[_TtC19SCCameraTimerModeV232CameraTimerModeV2CountdownPicker segmentTapped:] */

/* WARNING: Possible PIC construction at 0x000102b08398: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b0839c) */

void FUN_102b08360(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102b081c0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102b083b0; end: 102b083e3;  */

void FUN_102b083b0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b083e4; end: 102b0842b; -[_TtC19SCCameraTimerModeV232CameraTimerModeV2CountdownPicker .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b08400: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b08404) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b083e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eefc10));
  return;
}



/* Entry: 102b0842c; end: 102b0844b;  */

void FUN_102b0842c(void)

{
  func_0x000107c61168(&PTR_PTR_112888f18);
  return;
}



/* Entry: 102b0844c; end: 102b08483;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b0844c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
             *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112eefc10),PTR_s_setFrame__112645658
            );
  return;
}



/* Entry: 102b08484; end: 102b08537;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b08484(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112eefc08) = 0;
  lVar1 = _DAT_112eefc10;
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined **)(unaff_x20 + _DAT_112eefc18) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar1 = _DAT_112eefc20;
  puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCCameraTimerModeV2/SCCameraTimerModeV2CountdownPicker.swift",0x3c,2,0x2c,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b08538);
  (*pcVar2)();
}



/* Entry: 102b08538; end: 102b085e7; -[SCCameraTimerModeV2CountdownView cancelHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b08538(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + _DAT_112eefc50);
  func_0x000107c61428(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_11059bd58;
    ppuVar3 = &puStack_78;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    func_0x000107c60bc4(ppuVar3);
    lVar2 = lStack_50;
    func_0x000107c6157c(lVar4);
    func_0x000107c61574(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 102b085e8; end: 102b086a3; -[SCCameraTimerModeV2CountdownView setCancelHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b085e8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uVar5 = 0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_11059bd40;
    func_0x000107c613fc(&UNK_11059bd40,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    uVar5 = 0x102b0a19c;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112eefc50);
  func_0x000107c61428(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = uVar5;
  puVar1[1] = puVar4;
  func_0x000107c61174(param_1);
  func_0x00010058d43c(uVar2,uVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102b086a4; end: 102b086d3;  */

void FUN_102b086a4(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_102b086d4(param_1);
  return;
}



/* Entry: 102b086d4; end: 102b089cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102b086d4(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  lVar2 = _DAT_112eefc58;
  puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _DAT_112eefc60;
  puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _DAT_112eefc68;
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _DAT_112eefc70;
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _DAT_112eefc78;
  func_0x000107c61614(unaff_x20 + _DAT_112eefc78,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eefc50);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  func_0x000107c61154(0,0,0,0,&stack0xffffffffffffffb0,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000102b087f4();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_1);
  return puVar4;
}



/* Entry: 102b089cc; end: 102b089f3; -[SCCameraTimerModeV2CountdownView initWithContainerView:] */

void FUN_102b089cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_102b086d4();
  return;
}



/* Entry: 102b089f4; end: 102b08a1b; -[SCCameraTimerModeV2CountdownView initWithCoder:] */

void FUN_102b089f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_102b09880();
  return;
}



/* Entry: 102b08a1c; end: 102b08aab;  */

/* WARNING: Possible PIC construction at 0x000102b08a54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b08a80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b09104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b09154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b09108) */
/* WARNING: Removing unreachable block (ram,0x000102b0917c) */
/* WARNING: Removing unreachable block (ram,0x000102b0913c) */
/* WARNING: Removing unreachable block (ram,0x000102b08a84) */
/* WARNING: Removing unreachable block (ram,0x000102b090cc) */
/* WARNING: Removing unreachable block (ram,0x000102b08a58) */
/* WARNING: Removing unreachable block (ram,0x000102b09158) */
/* WARNING: Removing unreachable block (ram,0x000102b0918c) */
/* WARNING: Removing unreachable block (ram,0x000102b0915c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b08a1c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112eefc58);
  func_0x000107c4aba4(uVar1);
  func_0x000107c61180();
  func_0x000107c4fe68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102b08aac; end: 102b08d2b;  */

/* WARNING: Possible PIC construction at 0x000102b08b50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b08b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b08ba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b08bf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b08c58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b08c78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b08ca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b08cec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b08ca4) */
/* WARNING: Removing unreachable block (ram,0x000102b08c7c) */
/* WARNING: Removing unreachable block (ram,0x000102b08c5c) */
/* WARNING: Removing unreachable block (ram,0x000102b08bf4) */
/* WARNING: Removing unreachable block (ram,0x000102b08b8c) */
/* WARNING: Removing unreachable block (ram,0x000102b08d28) */
/* WARNING: Removing unreachable block (ram,0x000102b08b90) */
/* WARNING: Removing unreachable block (ram,0x000102b08cf0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b08aac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = _DAT_112eefc78;
  lVar2 = unaff_x20 + _DAT_112eefc78;
  func_0x000107c61618();
  if (lVar2 == 0) {
    func_0x000107c550d8(*(undefined8 *)(unaff_x20 + _DAT_112eefc68));
    lVar2 = unaff_x20 + lVar1;
    func_0x000107c61618();
    if (lVar2 == 0) {
      lVar2 = 0x726f66736e617274;
      func_0x000107c5fadc(0x726f66736e617274,0xef656c6163732e6d);
      func_0x000107c61168(PTR__OBJC_CLASS___CASpringAnimation_1126b5720);
      func_0x000107c3dd18();
      func_0x000107c61180();
    }
    else {
      func_0x000107c3f250();
      func_0x000107c61180();
    }
  }
  else {
    func_0x000107c3f258();
    uVar3 = param_1;
    func_0x000107c609bc();
    func_0x000107c609c0(param_1,param_2,param_3,param_4);
    func_0x000107c532b4(uVar3,param_1,*(undefined8 *)(unaff_x20 + _DAT_112eefc68));
    func_0x000107c532b4(uVar3,param_1,*(undefined8 *)(unaff_x20 + _DAT_112eefc70));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102b08d2c; end: 102b08da7; -[SCCameraTimerModeV2CountdownView startAnimationWithOption:completion:] */

/* WARNING: Possible PIC construction at 0x000102b08d90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b08d94) */

void FUN_102b08d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c60bc4(param_4);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102b09c98(param_3,param_1,param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102b08da8; end: 102b090cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b08da8(undefined8 param_1,long param_2,long param_3,long param_4,code *param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = param_3 + 1;
    if (SCARRY8(param_3,1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x102b090c8);
      (*pcVar5)();
    }
    if ((long)uVar1 < (long)*(ulong *)(param_4 + 0x10)) {
      if (*(ulong *)(param_4 + 0x10) <= uVar1) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102b090cc);
        (*pcVar5)();
      }
      plVar3 = (long *)&DAT_112eefc58;
      if ((uVar1 & 1) != 0) {
        plVar3 = (long *)&DAT_112eefc60;
      }
      uVar13 = *(undefined8 *)(param_2 + *plVar3);
      lVar2 = param_4 + uVar1 * 0x10;
      uVar12 = *(undefined8 *)(lVar2 + 0x20);
      uVar14 = *(undefined8 *)(lVar2 + 0x28);
      func_0x000107c61174();
      func_0x000107c61434(uVar14);
      FUN_102b09a4c(uVar13,uVar12,uVar14);
      func_0x000107c6142c(uVar14);
      puVar6 = &UNK_11059bc28;
      func_0x000107c613fc(&UNK_11059bc28,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,param_2);
      puVar7 = &UNK_11059bed0;
      func_0x000107c613fc(&UNK_11059bed0,0x40,7);
      *(undefined **)(puVar7 + 0x10) = puVar6;
      *(ulong *)(puVar7 + 0x18) = uVar1;
      *(long *)(puVar7 + 0x20) = param_4;
      *(undefined8 *)(puVar7 + 0x28) = param_1;
      *(code **)(puVar7 + 0x30) = param_5;
      *(undefined8 *)(puVar7 + 0x38) = param_6;
      puVar8 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
      puVar9 = &UNK_11059bef8;
      func_0x000107c613fc(&UNK_11059bef8,0x18,7);
      *(undefined8 *)(puVar9 + 0x10) = uVar13;
      puVar4 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x102b0a190;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_1000f6b44;
      puStack_a0 = &UNK_11059bf10;
      ppuVar10 = &puStack_b8;
      puStack_90 = puVar9;
      func_0x000107c60bc4(ppuVar10);
      puVar9 = puStack_90;
      func_0x000107c61174(uVar13);
      func_0x000107c6157c(puVar6);
      func_0x000107c61434(param_4);
      func_0x000107c6157c(param_6);
      func_0x000107c61574(puVar9);
      puVar9 = &UNK_11059bf48;
      func_0x000107c613fc(&UNK_11059bf48,0x20,7);
      *(undefined8 *)(puVar9 + 0x10) = 0x102b0a1a4;
      *(undefined **)(puVar9 + 0x18) = puVar7;
      uStack_98 = 0x102b0a148;
      puStack_b8 = puVar4;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_100ab47f8;
      puStack_a0 = &UNK_11059bf60;
      ppuVar11 = &puStack_b8;
      puStack_90 = puVar9;
      func_0x000107c60bc4(ppuVar11);
      puVar9 = puStack_90;
      func_0x000107c6157c(puVar7);
      func_0x000107c61574(puVar9);
      func_0x000107c3dcc0(param_1,0,puVar8);
      func_0x000107c61170(param_2);
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c61170(uVar13);
      func_0x000107c61574(puVar6);
      func_0x000107c61574(puVar7);
    }
    else {
      uVar14 = *(undefined8 *)(param_2 + _DAT_112eefc58);
      uVar12 = uVar14;
      func_0x000107c4aba4(uVar14);
      func_0x000107c61180();
      func_0x000107c4fe68();
      func_0x000107c61170(uVar12);
      uVar13 = *(undefined8 *)(param_2 + _DAT_112eefc60);
      uVar12 = uVar13;
      func_0x000107c4aba4(uVar13);
      func_0x000107c61180();
      func_0x000107c4fe68();
      func_0x000107c61170(uVar12);
      func_0x000107c550d8(uVar14);
      func_0x000107c550d8(uVar13);
      FUN_102b090cc();
      (*param_5)();
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 102b090cc; end: 102b0918f;  */

/* WARNING: Possible PIC construction at 0x000102b09104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b09154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b09108) */
/* WARNING: Removing unreachable block (ram,0x000102b0917c) */
/* WARNING: Removing unreachable block (ram,0x000102b0913c) */
/* WARNING: Removing unreachable block (ram,0x000102b09158) */
/* WARNING: Removing unreachable block (ram,0x000102b0918c) */
/* WARNING: Removing unreachable block (ram,0x000102b0915c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b090cc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112eefc70);
  func_0x000107c4aba4(uVar1);
  func_0x000107c61180();
  func_0x000107c4fe68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102b09190; end: 102b091b7; -[SCCameraTimerModeV2CountdownView stopAnimation] */

void FUN_102b09190(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102b08a1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b091b8; end: 102b09293;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b091b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_layoutSubviews_112600e60);
  lVar1 = unaff_x20 + _DAT_112eefc78;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c3f258();
    uVar2 = param_1;
    func_0x000107c609bc();
    func_0x000107c609c0(param_1,param_2,param_3,param_4);
    func_0x000107c532b4(uVar2,param_1,*(undefined8 *)(unaff_x20 + _DAT_112eefc68));
    func_0x000107c532b4(uVar2,param_1,*(undefined8 *)(unaff_x20 + _DAT_112eefc70));
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102b09294; end: 102b092bb; -[SCCameraTimerModeV2CountdownView layoutSubviews] */

void FUN_102b09294(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102b091b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b092bc; end: 102b0947f;  */

void FUN_102b092bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 unaff_x20;
  undefined1 auStack_80 [48];
  
  func_0x000107c5a050(param_1,param_2,0);
  func_0x000107c3d89c();
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar2 = puVar1;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar2 + 0x18) = 5;
  *(undefined8 *)(puVar2 + 0x10) = 2;
  uVar5 = param_1;
  func_0x000107c3f75c();
  func_0x000107c61180();
  uVar3 = unaff_x20;
  func_0x000107c3f75c();
  func_0x000107c61180();
  uVar4 = uVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  *(undefined8 *)(puVar2 + 0x20) = uVar4;
  uVar5 = param_1;
  func_0x000107c3f764();
  func_0x000107c61180();
  func_0x000107c3f764();
  func_0x000107c61180();
  uVar3 = uVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(unaff_x20);
  *(undefined8 *)(puVar2 + 0x28) = uVar3;
  uVar5 = 0;
  func_0x000100847984(0);
  puVar6 = puVar2;
  func_0x000107c5fc48(puVar2,uVar5);
  func_0x000107c61574(puVar2);
  func_0x000107c3d048(puVar1);
  func_0x000107c61170(puVar6);
  func_0x000107c59c74(param_1);
  func_0x000107c526c0(0,param_1);
  func_0x000107c550d8(param_1);
  func_0x000107c6088c(auStack_80,0x3fe999999999999a,0x3fe999999999999a);
  func_0x000107c5a03c(param_1);
  return;
}



/* Entry: 102b09480; end: 102b0950b; -[SCCameraTimerModeV2CountdownView handleCaptureButtonTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b09480(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112eefc50);
  func_0x000107c61428(puVar1,auStack_48,0,0);
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
    uVar3 = puVar1[1];
    func_0x000107c61174(param_1);
    func_0x000100b64c10(pcVar2,uVar3);
    (*pcVar2)();
    func_0x000107c61170(param_1);
    func_0x00010058d43c(pcVar2,uVar3);
  }
  return;
}



/* Entry: 102b0950c; end: 102b09757;  */

void FUN_102b0950c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar5 = &puStack_80;
  ppuVar6 = &puStack_80;
  ppuVar7 = &puStack_80;
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar3 = &UNK_11059bd90;
  func_0x000107c613fc(&UNK_11059bd90,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = (code *)0x102b0a0a8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_11059bda8;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c61174();
  func_0x000107c61574(puVar3);
  func_0x000107c3d724(0,0x3fc5555555555556,puVar2);
  func_0x000107c60bd0(ppuVar4);
  puVar3 = &UNK_11059bde0;
  func_0x000107c613fc(&UNK_11059bde0,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  pcStack_60 = FUN_102b0a0b4;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_11059bdf8;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c61174();
  func_0x000107c61574(puVar3);
  func_0x000107c3d724(0,0x3fe0000000000000,puVar2);
  func_0x000107c60bd0(ppuVar5);
  puVar3 = &UNK_11059be30;
  func_0x000107c613fc(&UNK_11059be30,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  pcStack_60 = (code *)0x102b0a0d0;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_11059be48;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c61174();
  func_0x000107c61574(puVar3);
  func_0x000107c3d724(0x3fe0000000000000,0x3fe0000000000000,puVar2);
  func_0x000107c60bd0(ppuVar6);
  puVar3 = &UNK_11059be80;
  func_0x000107c613fc(&UNK_11059be80,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  pcStack_60 = FUN_102b0a0f0;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_11059be98;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar3);
  func_0x000107c3d724(0x3feaaaaaaaaaaaab,0x3fc5555555555556,puVar2);
  func_0x000107c60bd0(ppuVar7);
  return;
}



/* Entry: 102b09758; end: 102b097a3;  */

void FUN_102b09758(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_50 [48];
  
  func_0x000107c6088c(auStack_50,param_1,param_1);
  func_0x000107c5a03c(param_2,param_3,auStack_50);
  return;
}



/* Entry: 102b097a4; end: 102b09803; -[SCCameraTimerModeV2CountdownView initWithFrame:] */

void FUN_102b097a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCameraTimerModeV2.CameraTimerModeV2CountdownView",0x32,"init(frame:)",0xc,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b097d0);
  (*pcVar1)();
}



/* Entry: 102b09804; end: 102b0987f; -[SCCameraTimerModeV2CountdownView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b09804(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eefc58));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eefc60));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eefc68));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eefc70));
  func_0x000100e456b4(param_1 + _DAT_112eefc78);
  if (*(long *)(param_1 + _DAT_112eefc50) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112eefc50))[1]);
    return;
  }
  return;
}



/* Entry: 102b09880; end: 102b0996b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b09880(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar2 = _DAT_112eefc58;
  puVar4 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112eefc60;
  puVar4 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112eefc68;
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112eefc70;
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  func_0x000107c61614(unaff_x20 + _DAT_112eefc78,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eefc50);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCCameraTimerModeV2/SCCameraTimerModeV2CountdownView.swift",0x3a,2,0x51,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102b0996c);
  (*pcVar3)();
}



/* Entry: 102b0996c; end: 102b09a4b;  */

long FUN_102b0996c(char param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  if (param_1 == '\x01') {
    uVar3 = 0xc0;
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x18) = 0x14;
    *(undefined8 *)(lVar1 + 0x10) = 10;
    lVar2 = lVar1;
    func_0x000102b0fea8();
    *(long *)(lVar1 + 0x20) = lVar2;
    *(undefined8 *)(lVar1 + 0x28) = uVar3;
    func_0x000102b0ff74();
    *(long *)(lVar1 + 0x30) = lVar2;
    *(undefined8 *)(lVar1 + 0x38) = uVar3;
    func_0x000102b10040();
    *(long *)(lVar1 + 0x40) = lVar2;
    *(undefined8 *)(lVar1 + 0x48) = uVar3;
    func_0x000102b1010c();
    *(long *)(lVar1 + 0x50) = lVar2;
    *(undefined8 *)(lVar1 + 0x58) = uVar3;
    func_0x000102b101d8();
    *(long *)(lVar1 + 0x60) = lVar2;
    *(undefined8 *)(lVar1 + 0x68) = uVar3;
    func_0x000102b102a4();
    *(long *)(lVar1 + 0x70) = lVar2;
    *(undefined8 *)(lVar1 + 0x78) = uVar3;
    func_0x000102b10370();
    *(long *)(lVar1 + 0x80) = lVar2;
    *(undefined8 *)(lVar1 + 0x88) = uVar3;
    func_0x000102b0fc44();
    *(long *)(lVar1 + 0x90) = lVar2;
    *(undefined8 *)(lVar1 + 0x98) = uVar3;
    func_0x000102b0fd10();
    *(long *)(lVar1 + 0xa0) = lVar2;
    *(undefined8 *)(lVar1 + 0xa8) = uVar3;
    func_0x000102b0fddc();
    *(long *)(lVar1 + 0xb0) = lVar2;
    *(undefined8 *)(lVar1 + 0xb8) = uVar3;
  }
  else {
    uVar3 = 0x50;
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x18) = 6;
    *(undefined8 *)(lVar1 + 0x10) = 3;
    lVar2 = lVar1;
    func_0x000102b0fc44();
    *(long *)(lVar1 + 0x20) = lVar2;
    *(undefined8 *)(lVar1 + 0x28) = uVar3;
    func_0x000102b0fd10();
    *(long *)(lVar1 + 0x30) = lVar2;
    *(undefined8 *)(lVar1 + 0x38) = uVar3;
    func_0x000102b0fddc();
    *(long *)(lVar1 + 0x40) = lVar2;
    *(undefined8 *)(lVar1 + 0x48) = uVar3;
  }
  return lVar1;
}



/* Entry: 102b09a4c; end: 102b09c27;  */

/* WARNING: Possible PIC construction at 0x000102b09aa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b09b08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b09b58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b09ba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b09bb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b09c04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b09bb8) */
/* WARNING: Removing unreachable block (ram,0x000102b09ba4) */
/* WARNING: Removing unreachable block (ram,0x000102b09b5c) */
/* WARNING: Removing unreachable block (ram,0x000102b09b0c) */
/* WARNING: Removing unreachable block (ram,0x000102b09aa4) */
/* WARNING: Removing unreachable block (ram,0x000102b09c08) */

void FUN_102b09a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c48af4(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102b09c28; end: 102b09c4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b09c28(void)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long unaff_x20;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar15 = *(long *)(unaff_x20 + 0x20);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x28);
  pcVar6 = *(code **)(unaff_x20 + 0x30);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61428(lVar7 + 0x10,auStack_88,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618();
  if (lVar7 != 0) {
    uVar1 = lVar4 + 1;
    if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102b090c8);
      (*pcVar6)();
    }
    if ((long)uVar1 < (long)*(ulong *)(lVar15 + 0x10)) {
      if (*(ulong *)(lVar15 + 0x10) <= uVar1) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102b090cc);
        (*pcVar6)();
      }
      plVar2 = (long *)&DAT_112eefc58;
      if ((uVar1 & 1) != 0) {
        plVar2 = (long *)&DAT_112eefc60;
      }
      uVar16 = *(undefined8 *)(lVar7 + *plVar2);
      lVar4 = lVar15 + uVar1 * 0x10;
      uVar17 = *(undefined8 *)(lVar4 + 0x20);
      uVar3 = *(undefined8 *)(lVar4 + 0x28);
      func_0x000107c61174();
      func_0x000107c61434(uVar3);
      FUN_102b09a4c(uVar16,uVar17,uVar3);
      func_0x000107c6142c(uVar3);
      puVar8 = &UNK_11059bc28;
      func_0x000107c613fc(&UNK_11059bc28,0x18,7);
      func_0x000107c61614(puVar8 + 0x10,lVar7);
      puVar9 = &UNK_11059bed0;
      func_0x000107c613fc(&UNK_11059bed0,0x40,7);
      *(undefined **)(puVar9 + 0x10) = puVar8;
      *(ulong *)(puVar9 + 0x18) = uVar1;
      *(long *)(puVar9 + 0x20) = lVar15;
      *(undefined8 *)(puVar9 + 0x28) = uVar18;
      *(code **)(puVar9 + 0x30) = pcVar6;
      *(undefined8 *)(puVar9 + 0x38) = uVar14;
      puVar10 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
      puVar11 = &UNK_11059bef8;
      func_0x000107c613fc(&UNK_11059bef8,0x18,7);
      *(undefined8 *)(puVar11 + 0x10) = uVar16;
      puVar5 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x102b0a190;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_1000f6b44;
      puStack_a0 = &UNK_11059bf10;
      ppuVar12 = &puStack_b8;
      puStack_90 = puVar11;
      func_0x000107c60bc4(ppuVar12);
      puVar11 = puStack_90;
      func_0x000107c61174(uVar16);
      func_0x000107c6157c(puVar8);
      func_0x000107c61434(lVar15);
      func_0x000107c6157c(uVar14);
      func_0x000107c61574(puVar11);
      puVar11 = &UNK_11059bf48;
      func_0x000107c613fc(&UNK_11059bf48,0x20,7);
      *(undefined8 *)(puVar11 + 0x10) = 0x102b0a1a4;
      *(undefined **)(puVar11 + 0x18) = puVar9;
      uStack_98 = 0x102b0a148;
      puStack_b8 = puVar5;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_100ab47f8;
      puStack_a0 = &UNK_11059bf60;
      ppuVar13 = &puStack_b8;
      puStack_90 = puVar11;
      func_0x000107c60bc4(ppuVar13);
      puVar11 = puStack_90;
      func_0x000107c6157c(puVar9);
      func_0x000107c61574(puVar11);
      func_0x000107c3dcc0(uVar18,0,puVar10);
      func_0x000107c61170(lVar7);
      func_0x000107c60bd0(ppuVar13);
      func_0x000107c60bd0(ppuVar12);
      func_0x000107c61170(uVar16);
      func_0x000107c61574(puVar8);
      func_0x000107c61574(puVar9);
    }
    else {
      uVar18 = *(undefined8 *)(lVar7 + _DAT_112eefc58);
      uVar14 = uVar18;
      func_0x000107c4aba4(uVar18);
      func_0x000107c61180();
      func_0x000107c4fe68();
      func_0x000107c61170(uVar14);
      uVar17 = *(undefined8 *)(lVar7 + _DAT_112eefc60);
      uVar14 = uVar17;
      func_0x000107c4aba4(uVar17);
      func_0x000107c61180();
      func_0x000107c4fe68();
      func_0x000107c61170(uVar14);
      func_0x000107c550d8(uVar18);
      func_0x000107c550d8(uVar17);
      FUN_102b090cc();
      (*pcVar6)();
      func_0x000107c61170(lVar7);
    }
  }
  return;
}



/* Entry: 102b09c50; end: 102b09c77;  */

void FUN_102b09c50(uint param_1)

{
  long unaff_x20;
  
  if ((param_1 & 1) != 0) {
    (**(code **)(unaff_x20 + 0x10))(*(undefined8 *)(unaff_x20 + 0x18));
  }
  return;
}



/* Entry: 102b09c78; end: 102b09c97;  */

void FUN_102b09c78(void)

{
  func_0x000107c61168(&PTR_PTR_112888fe8);
  return;
}



/* Entry: 102b09c98; end: 102b0a09b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b09c98(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  ppuVar10 = &puStack_a0;
  ppuVar11 = &puStack_a0;
  puVar4 = &UNK_11059bc50;
  func_0x000107c613fc(&UNK_11059bc50,0x18,7);
  *(long *)(puVar4 + 0x10) = param_3;
  cVar2 = *(char *)(param_1 + _DAT_112eeff50);
  uVar14 = (ulong)(cVar2 == '\x01');
  uVar12 = *(undefined8 *)(param_2 + _DAT_112eefc58);
  func_0x000107c60bc4(param_3);
  uVar5 = uVar12;
  func_0x000107c4aba4(uVar12);
  func_0x000107c61180();
  func_0x000107c4fe68();
  func_0x000107c61170(uVar5);
  uVar13 = *(undefined8 *)(param_2 + _DAT_112eefc60);
  uVar5 = uVar13;
  func_0x000107c4aba4(uVar13);
  func_0x000107c61180();
  func_0x000107c4fe68();
  func_0x000107c61170(uVar5);
  func_0x000107c550d8(uVar12);
  func_0x000107c550d8(uVar13);
  FUN_102b090cc();
  func_0x000107c526c0(0,uVar12);
  func_0x000107c550d8(uVar12);
  func_0x000107c6088c(&puStack_a0,0x3fe999999999999a,0x3fe999999999999a);
  func_0x000107c5a03c(uVar12);
  func_0x000107c526c0(0,uVar13);
  func_0x000107c550d8(uVar13);
  func_0x000107c6088c(&puStack_a0,0x3fe999999999999a,0x3fe999999999999a);
  func_0x000107c5a03c(uVar13);
  FUN_102b08aac();
  FUN_102b0996c();
  if (*(long *)(uVar14 + 0x10) == 0) {
    uVar5 = uVar12;
    func_0x000107c4aba4(uVar12);
    func_0x000107c61180();
    func_0x000107c4fe68();
    func_0x000107c61170(uVar5);
    uVar5 = uVar13;
    func_0x000107c4aba4(uVar13);
    func_0x000107c61180();
    func_0x000107c4fe68();
    func_0x000107c61170(uVar5);
    func_0x000107c550d8(uVar12);
    func_0x000107c550d8(uVar13);
    FUN_102b090cc();
    (**(code **)(param_3 + 0x10))(param_3);
    func_0x000107c61574(puVar4);
    func_0x000107c6142c(uVar14);
  }
  else {
    uVar5 = 0x3ff0000000000000;
    if (cVar2 != '\x01') {
      uVar5 = 0x3ff3333333333333;
    }
    uVar13 = *(undefined8 *)(uVar14 + 0x20);
    uVar1 = *(undefined8 *)(uVar14 + 0x28);
    func_0x000107c61434(uVar1);
    FUN_102b09a4c(uVar12,uVar13,uVar1);
    func_0x000107c6142c(uVar1);
    puVar6 = &UNK_11059bc28;
    func_0x000107c613fc(&UNK_11059bc28,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,param_2);
    puVar7 = &UNK_11059bc78;
    func_0x000107c613fc(&UNK_11059bc78,0x40,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(undefined8 *)(puVar7 + 0x18) = 0;
    *(ulong *)(puVar7 + 0x20) = uVar14;
    *(undefined8 *)(puVar7 + 0x28) = uVar5;
    *(code **)(puVar7 + 0x30) = FUN_102b0a09c;
    *(undefined **)(puVar7 + 0x38) = puVar4;
    puVar8 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar9 = &UNK_11059bca0;
    func_0x000107c613fc(&UNK_11059bca0,0x18,7);
    *(undefined8 *)(puVar9 + 0x10) = uVar12;
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x102b0a170;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_11059bcb8;
    puStack_78 = puVar9;
    func_0x000107c60bc4(&puStack_a0);
    puVar9 = puStack_78;
    func_0x000107c6157c(puVar6);
    func_0x000107c61434(uVar14);
    func_0x000107c6157c(puVar4);
    func_0x000107c61174(uVar12);
    func_0x000107c61574(puVar9);
    puVar9 = &UNK_11059bcf0;
    func_0x000107c613fc(&UNK_11059bcf0,0x20,7);
    *(undefined8 *)(puVar9 + 0x10) = 0x102b0a1a0;
    *(undefined **)(puVar9 + 0x18) = puVar7;
    uStack_80 = 0x102b0a144;
    puStack_a0 = puVar3;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100ab47f8;
    puStack_88 = &UNK_11059bd08;
    puStack_78 = puVar9;
    func_0x000107c60bc4(&puStack_a0);
    puVar9 = puStack_78;
    func_0x000107c6157c(puVar7);
    func_0x000107c61574(puVar9);
    func_0x000107c3dcc0(uVar5,0,puVar8);
    func_0x000107c6142c(uVar14);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar6);
    func_0x000107c61574(puVar7);
  }
  return;
}



/* Entry: 102b0a09c; end: 102b0a0b3;  */

void FUN_102b0a09c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102b0a0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 102b0a0b4; end: 102b0a0ef;  */

void FUN_102b0a0b4(void)

{
  long unaff_x20;
  
  FUN_102b09758(0x3ff0000000000000,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102b0a0f0; end: 102b0a0fb;  */

void FUN_102b0a0f0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(unaff_x20 + 0x10),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 102b0a0fc; end: 102b0a12f;  */

void FUN_102b0a0fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102b0a130; end: 102b0a1a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b0a130(void)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long unaff_x20;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar15 = *(long *)(unaff_x20 + 0x20);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x28);
  pcVar6 = *(code **)(unaff_x20 + 0x30);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61428(lVar7 + 0x10,auStack_88,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618();
  if (lVar7 != 0) {
    uVar1 = lVar4 + 1;
    if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102b090c8);
      (*pcVar6)();
    }
    if ((long)uVar1 < (long)*(ulong *)(lVar15 + 0x10)) {
      if (*(ulong *)(lVar15 + 0x10) <= uVar1) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102b090cc);
        (*pcVar6)();
      }
      plVar2 = (long *)&DAT_112eefc58;
      if ((uVar1 & 1) != 0) {
        plVar2 = (long *)&DAT_112eefc60;
      }
      uVar16 = *(undefined8 *)(lVar7 + *plVar2);
      lVar4 = lVar15 + uVar1 * 0x10;
      uVar17 = *(undefined8 *)(lVar4 + 0x20);
      uVar3 = *(undefined8 *)(lVar4 + 0x28);
      func_0x000107c61174();
      func_0x000107c61434(uVar3);
      FUN_102b09a4c(uVar16,uVar17,uVar3);
      func_0x000107c6142c(uVar3);
      puVar8 = &UNK_11059bc28;
      func_0x000107c613fc(&UNK_11059bc28,0x18,7);
      func_0x000107c61614(puVar8 + 0x10,lVar7);
      puVar9 = &UNK_11059bed0;
      func_0x000107c613fc(&UNK_11059bed0,0x40,7);
      *(undefined **)(puVar9 + 0x10) = puVar8;
      *(ulong *)(puVar9 + 0x18) = uVar1;
      *(long *)(puVar9 + 0x20) = lVar15;
      *(undefined8 *)(puVar9 + 0x28) = uVar18;
      *(code **)(puVar9 + 0x30) = pcVar6;
      *(undefined8 *)(puVar9 + 0x38) = uVar14;
      puVar10 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
      puVar11 = &UNK_11059bef8;
      func_0x000107c613fc(&UNK_11059bef8,0x18,7);
      *(undefined8 *)(puVar11 + 0x10) = uVar16;
      puVar5 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x102b0a190;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_1000f6b44;
      puStack_a0 = &UNK_11059bf10;
      ppuVar12 = &puStack_b8;
      puStack_90 = puVar11;
      func_0x000107c60bc4(ppuVar12);
      puVar11 = puStack_90;
      func_0x000107c61174(uVar16);
      func_0x000107c6157c(puVar8);
      func_0x000107c61434(lVar15);
      func_0x000107c6157c(uVar14);
      func_0x000107c61574(puVar11);
      puVar11 = &UNK_11059bf48;
      func_0x000107c613fc(&UNK_11059bf48,0x20,7);
      *(undefined8 *)(puVar11 + 0x10) = 0x102b0a1a4;
      *(undefined **)(puVar11 + 0x18) = puVar9;
      uStack_98 = 0x102b0a148;
      puStack_b8 = puVar5;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_100ab47f8;
      puStack_a0 = &UNK_11059bf60;
      ppuVar13 = &puStack_b8;
      puStack_90 = puVar11;
      func_0x000107c60bc4(ppuVar13);
      puVar11 = puStack_90;
      func_0x000107c6157c(puVar9);
      func_0x000107c61574(puVar11);
      func_0x000107c3dcc0(uVar18,0,puVar10);
      func_0x000107c61170(lVar7);
      func_0x000107c60bd0(ppuVar13);
      func_0x000107c60bd0(ppuVar12);
      func_0x000107c61170(uVar16);
      func_0x000107c61574(puVar8);
      func_0x000107c61574(puVar9);
    }
    else {
      uVar18 = *(undefined8 *)(lVar7 + _DAT_112eefc58);
      uVar14 = uVar18;
      func_0x000107c4aba4(uVar18);
      func_0x000107c61180();
      func_0x000107c4fe68();
      func_0x000107c61170(uVar14);
      uVar17 = *(undefined8 *)(lVar7 + _DAT_112eefc60);
      uVar14 = uVar17;
      func_0x000107c4aba4(uVar17);
      func_0x000107c61180();
      func_0x000107c4fe68();
      func_0x000107c61170(uVar14);
      func_0x000107c550d8(uVar18);
      func_0x000107c550d8(uVar17);
      FUN_102b090cc();
      (*pcVar6)();
      func_0x000107c61170(lVar7);
    }
  }
  return;
}



/* Entry: 102b0a1a8; end: 102b0a247;  */

void FUN_102b0a1a8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  puRam0000000112eefda0 = puVar1;
  return;
}



/* Entry: 102b0a248; end: 102b0a25b;  */

bool FUN_102b0a248(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102b0a25c; end: 102b0a307;  */

void FUN_102b0a25c(void)

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



/* Entry: 102b0a308; end: 102b0a4a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b0a308(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x20;
  undefined8 uVar9;
  ulong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_b8 [24];
  
  func_0x000107c3ec60();
  dVar14 = param_1;
  func_0x000107c609cc();
  if ((dVar14 <= 0.0) ||
     (dVar14 = param_1, func_0x000107c609b0(param_1,param_2,param_3,param_4), dVar14 <= 0.0)) {
    return;
  }
  dVar14 = 1.0;
  if ((0.0 < *(double *)(unaff_x20 + _DAT_112eefcb8)) &&
     ((dVar11 = *(double *)(unaff_x20 + _DAT_112eefcc0) / *(double *)(unaff_x20 + _DAT_112eefcb8),
      dVar11 < 1.0 && (dVar14 = dVar11, dVar11 < 0.0)))) {
    dVar14 = 0.0;
  }
  dVar11 = param_1;
  func_0x000107c609cc(param_1,param_2,param_3,param_4);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112eefce8);
  dVar13 = param_1;
  func_0x000107c609b0(param_1,param_2,param_3,param_4);
  func_0x000107c54b80(dVar14 * (dVar11 + -12.0),0,0x4028000000000000,dVar13,uVar7);
  dVar14 = param_1;
  func_0x000107c609b0(param_1,param_2,param_3,param_4);
  dVar15 = dVar14 * 0.4;
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112eefcf0);
  func_0x000107c438d4(uVar7);
  func_0x000107c609bc();
  dVar14 = dVar14 + -1.0;
  func_0x000107c609b0(param_1,param_2,param_3,param_4);
  dVar13 = (param_1 - dVar15) * 0.5;
  uVar7 = 0x4000000000000000;
  func_0x000107c54b80(dVar14,dVar13,0x4000000000000000,dVar15,uVar9);
  func_0x000102b0b694();
  func_0x000107c3ec60(unaff_x20);
  dVar11 = dVar14;
  func_0x000107c609cc();
  lVar2 = _DAT_112eefd38;
  if ((0.0 < dVar11) && (0 < *(long *)(unaff_x20 + _DAT_112eefd38))) {
    dVar11 = 1.0;
    if ((0.0 < *(double *)(unaff_x20 + _DAT_112eefcb8)) &&
       ((dVar12 = *(double *)(unaff_x20 + _DAT_112eefcc0) / *(double *)(unaff_x20 + _DAT_112eefcb8),
        dVar12 < 1.0 && (dVar11 = dVar12, dVar12 < 0.0)))) {
      dVar11 = 0.0;
    }
    dVar12 = dVar14;
    func_0x000107c609cc(dVar14,dVar13,uVar7,dVar15);
    func_0x000107c609cc(dVar14,dVar13,uVar7,dVar15);
    lVar3 = _DAT_112eefd40;
    lVar1 = _DAT_112eefce0;
    uVar10 = *(ulong *)(unaff_x20 + lVar2);
    if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102b0afbc);
      (*pcVar4)();
    }
    if (uVar10 != 0) {
      uVar8 = 0;
      dVar14 = dVar14 * *(double *)(unaff_x20 + _DAT_112eefd20);
      do {
        func_0x000107c61428(unaff_x20 + lVar1,auStack_b8,0x20,0);
        uVar6 = *(ulong *)(unaff_x20 + lVar1);
        if ((uVar6 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102b0afb8);
            (*pcVar4)();
          }
          uVar5 = *(ulong *)(uVar6 + uVar8 * 8 + 0x20);
          func_0x000107c61174(uVar5);
        }
        else {
          uVar5 = uVar8;
          FUN_102b0c198(uVar8,uVar6,&PTR__OBJC_CLASS___CALayer_1126b1750,0x112eefda8);
        }
        func_0x000107c614a8(auStack_b8);
        dVar13 = (double)uVar8 * 6.0 + *(double *)(unaff_x20 + lVar3) + 2.0;
        if (dVar13 <= dVar11 * (dVar12 + -12.0)) {
          if (dVar13 + 2.0 <= dVar14) {
            uVar7 = uRam0000000112eefd90;
            if (lRam0000000112eefd88 != -1) {
              func_0x000107c61568(0x112eefd88,0x102b0a214);
              uVar7 = uRam0000000112eefd90;
            }
            goto LAB_102b0adb4;
          }
          if (dVar14 <= dVar13 + -2.0) {
            uVar7 = uRam0000000112eefd80;
            if (lRam0000000112eefd78 != -1) {
              func_0x000107c61568(0x112eefd78,0x102b0a1e0);
              uVar7 = uRam0000000112eefd80;
            }
            goto LAB_102b0adb4;
          }
          if (lRam0000000112eefd78 != -1) {
            func_0x000107c61568(0x112eefd78,0x102b0a1e0);
          }
          uVar7 = uRam0000000112eefd80;
          if (lRam0000000112eefd88 != -1) {
            func_0x000107c61568(0x112eefd88,0x102b0a214);
          }
          FUN_102b0c944((dVar14 - (dVar13 + -2.0)) * 0.25,uVar7,uRam0000000112eefd90);
        }
        else {
          uVar7 = uRam0000000112eefda0;
          if (lRam0000000112eefd98 != -1) {
            func_0x000107c61568(0x112eefd98,FUN_102b0a1a8);
            uVar7 = uRam0000000112eefda0;
          }
LAB_102b0adb4:
          func_0x000107c61174(uVar7);
        }
        uVar8 = uVar8 + 1;
        uVar9 = uVar7;
        func_0x000107c3ab24();
        func_0x000107c61180();
        func_0x000107c52b50(uVar5);
        func_0x000107c61170(uVar9);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar7);
      } while (uVar10 != uVar8);
    }
  }
  return;
}



/* Entry: 102b0a4a8; end: 102b0a70b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b0a4a8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  ulong uVar10;
  ulong uVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_b8 [24];
  
  func_0x000107c3ec60();
  dVar13 = param_1;
  func_0x000107c609cc();
  if ((0.0 < dVar13) &&
     (dVar13 = param_1, func_0x000107c609b0(param_1,param_2,param_3,param_4), 0.0 < dVar13)) {
    func_0x000107c54b80(param_1,param_2,param_3,param_4,*(undefined8 *)(unaff_x20 + _DAT_112eefcd8))
    ;
    FUN_102b0b51c();
    lVar4 = _DAT_112eefd40;
    lVar3 = _DAT_112eefce0;
    uVar11 = *(ulong *)(unaff_x20 + _DAT_112eefd38);
    if (0 < (long)uVar11) {
      lVar9 = *(long *)(unaff_x20 + _DAT_112eefcd0);
      func_0x000107c61434(lVar9);
      uVar10 = 0;
      do {
        func_0x000107c61428(unaff_x20 + lVar3,auStack_b8,0x20,0);
        uVar7 = *(ulong *)(unaff_x20 + lVar3);
        if ((uVar7 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x102b0a704);
            (*pcVar5)();
          }
          uVar6 = *(ulong *)(uVar7 + uVar10 * 8 + 0x20);
          func_0x000107c61174(uVar6);
        }
        else {
          uVar6 = uVar10;
          FUN_102b0c198(uVar10,uVar7,&PTR__OBJC_CLASS___CALayer_1126b1750,0x112eefda8);
        }
        func_0x000107c614a8(auStack_b8);
        dVar13 = *(double *)(unaff_x20 + lVar4);
        if ((lVar9 != 0) && (lVar8 = *(long *)(lVar9 + 0x10), lVar8 != 0)) {
          if (SUB168(SEXT816((long)uVar10) * SEXT816(lVar8),8) != (long)(uVar10 * lVar8) >> 0x3f) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x102b0a708);
            (*pcVar5)();
          }
          lVar2 = 0;
          if (uVar11 != 0) {
            lVar2 = (long)(uVar10 * lVar8) / (long)uVar11;
          }
          lVar1 = lVar8 + -1;
          if (lVar2 <= lVar8 + -1) {
            lVar1 = lVar2;
          }
          if (lVar1 < 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x102b0a70c);
            (*pcVar5)();
          }
        }
        uVar7 = uVar10 + 1;
        func_0x000107c3ec60(uVar6);
        func_0x000107c52e44(uVar6);
        dVar12 = param_1;
        func_0x000107c609b0(param_1,param_2,param_3,param_4);
        func_0x000107c575ec((double)uVar10 * 6.0 + dVar13 + 2.0,dVar12 * 0.5,uVar6);
        func_0x000107c61170(uVar6);
        uVar10 = uVar7;
      } while (uVar11 != uVar7);
      func_0x000107c6142c(lVar9);
      FUN_102b0a308();
    }
  }
  return;
}



/* Entry: 102b0a70c; end: 102b0a953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102b0a70c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  puVar5 = &stack0xffffffffffffff90;
  func_0x000107c614f0();
  lVar1 = unaff_x20 + _DAT_112eefca8;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(unaff_x20 + _DAT_112eefcb0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eefcb8) = 0x404e000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112eefcc0) = 0x404e000000000000;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112eefcc8);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eefcd0) = 0;
  lVar1 = _DAT_112eefcd8;
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  *(undefined **)(unaff_x20 + _DAT_112eefce0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar1 = _DAT_112eefce8;
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _DAT_112eefcf0;
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112eefcf8) = 0;
  lVar1 = _DAT_112eefd00;
  puVar4 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _DAT_112eefd08;
  puVar4 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _DAT_112eefd10;
  puVar4 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112eefd18) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eefd20) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112eefd28) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_112eefd30) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eefd38) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eefd40) = 0x4000000000000000;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff90,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_102b0a954();
  puVar4 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  func_0x000107c610f8();
  func_0x000107c48c2c();
  uVar6 = *(undefined8 *)(puVar5 + _DAT_112eefcf8);
  *(undefined **)(puVar5 + _DAT_112eefcf8) = puVar4;
  func_0x000107c61170(uVar6);
  if (puVar4 != (undefined *)0x0) {
    func_0x000107c3d6fc(puVar5);
    func_0x000107c61170(puVar5);
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102b0a954);
  (*pcVar3)();
}



/* Entry: 102b0a954; end: 102b0ac2b;  */

/* WARNING: Possible PIC construction at 0x000102b0a9e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b0ab58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b0a9e4) */
/* WARNING: Removing unreachable block (ram,0x000102b0abfc) */
/* WARNING: Removing unreachable block (ram,0x000102b0aa00) */
/* WARNING: Removing unreachable block (ram,0x000102b0ac14) */
/* WARNING: Removing unreachable block (ram,0x000102b0aa78) */
/* WARNING: Removing unreachable block (ram,0x000102b0ab5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b0a954(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112eefcd8);
  uVar1 = uVar3;
  func_0x000107c4aba4(uVar3);
  func_0x000107c61180();
  func_0x000107c539d4(0x4028000000000000);
  func_0x000107c61170(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(uVar3);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 102b0ac2c; end: 102b0ac4b; -[_TtC19SCCameraTimerModeV227CameraTimerModeV2SliderView initWithFrame:] */

void FUN_102b0ac2c(void)

{
  FUN_102b0a70c();
  return;
}



/* Entry: 102b0ac4c; end: 102b0ac73; -[_TtC19SCCameraTimerModeV227CameraTimerModeV2SliderView initWithCoder:] */

void FUN_102b0ac4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_102b0d02c();
  return;
}



/* Entry: 102b0ac74; end: 102b0afbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b0ac74(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_b8 [24];
  
  func_0x000107c3ec60();
  dVar13 = param_1;
  func_0x000107c609cc();
  lVar2 = _DAT_112eefd38;
  if ((0.0 < dVar13) && (0 < *(long *)(unaff_x20 + _DAT_112eefd38))) {
    dVar13 = 1.0;
    if ((0.0 < *(double *)(unaff_x20 + _DAT_112eefcb8)) &&
       ((dVar11 = *(double *)(unaff_x20 + _DAT_112eefcc0) / *(double *)(unaff_x20 + _DAT_112eefcb8),
        dVar11 < 1.0 && (dVar13 = dVar11, dVar11 < 0.0)))) {
      dVar13 = 0.0;
    }
    dVar11 = param_1;
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    lVar3 = _DAT_112eefd40;
    lVar1 = _DAT_112eefce0;
    uVar10 = *(ulong *)(unaff_x20 + lVar2);
    if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102b0afbc);
      (*pcVar4)();
    }
    if (uVar10 != 0) {
      uVar9 = 0;
      param_1 = param_1 * *(double *)(unaff_x20 + _DAT_112eefd20);
      do {
        func_0x000107c61428(unaff_x20 + lVar1,auStack_b8,0x20,0);
        uVar8 = *(ulong *)(unaff_x20 + lVar1);
        if ((uVar8 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102b0afb8);
            (*pcVar4)();
          }
          uVar6 = *(ulong *)(uVar8 + uVar9 * 8 + 0x20);
          func_0x000107c61174(uVar6);
        }
        else {
          uVar6 = uVar9;
          FUN_102b0c198(uVar9,uVar8,&PTR__OBJC_CLASS___CALayer_1126b1750,0x112eefda8);
        }
        func_0x000107c614a8(auStack_b8);
        dVar12 = (double)uVar9 * 6.0 + *(double *)(unaff_x20 + lVar3) + 2.0;
        if (dVar12 <= dVar13 * (dVar11 + -12.0)) {
          if (dVar12 + 2.0 <= param_1) {
            uVar7 = uRam0000000112eefd90;
            if (lRam0000000112eefd88 != -1) {
              func_0x000107c61568(0x112eefd88,0x102b0a214);
              uVar7 = uRam0000000112eefd90;
            }
            goto LAB_102b0adb4;
          }
          if (param_1 <= dVar12 + -2.0) {
            uVar7 = uRam0000000112eefd80;
            if (lRam0000000112eefd78 != -1) {
              func_0x000107c61568(0x112eefd78,0x102b0a1e0);
              uVar7 = uRam0000000112eefd80;
            }
            goto LAB_102b0adb4;
          }
          if (lRam0000000112eefd78 != -1) {
            func_0x000107c61568(0x112eefd78,0x102b0a1e0);
          }
          uVar7 = uRam0000000112eefd80;
          if (lRam0000000112eefd88 != -1) {
            func_0x000107c61568(0x112eefd88,0x102b0a214);
          }
          FUN_102b0c944((param_1 - (dVar12 + -2.0)) * 0.25,uVar7,uRam0000000112eefd90);
        }
        else {
          uVar7 = uRam0000000112eefda0;
          if (lRam0000000112eefd98 != -1) {
            func_0x000107c61568(0x112eefd98,FUN_102b0a1a8);
            uVar7 = uRam0000000112eefda0;
          }
LAB_102b0adb4:
          func_0x000107c61174(uVar7);
        }
        uVar9 = uVar9 + 1;
        uVar5 = uVar7;
        func_0x000107c3ab24();
        func_0x000107c61180();
        func_0x000107c52b50(uVar6);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar7);
      } while (uVar10 != uVar9);
    }
  }
  return;
}



/* Entry: 102b0afbc; end: 102b0b0af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b0afbc(double param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long unaff_x20;
  double dVar2;
  double dVar3;
  double dVar4;
  
  uVar1 = 0;
  func_0x000107c614f0();
  dVar4 = param_1;
  func_0x000107c61154(param_1,param_2,&stack0xffffffffffffffb0,
                      PTR_s_pointInside_withEvent__11261e4e8,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x000107c438d4(*(undefined8 *)(unaff_x20 + _DAT_112eefce8));
    func_0x000107c609bc();
    dVar3 = dVar4 + 40.0;
    func_0x000107c3ec60();
    func_0x000107c609cc();
    dVar3 = dVar3 - dVar4;
    dVar4 = dVar3;
    if (dVar3 < 0.0) {
      dVar4 = 0.0;
    }
    if (0.0 < dVar4) {
      func_0x000107c3ec60();
      func_0x000107c609cc();
      dVar2 = dVar3;
      func_0x000107c3ec60();
      func_0x000107c609b0();
      func_0x000107c609a4(dVar3,0,dVar4,dVar2,param_1,param_2);
    }
  }
  return;
}



/* Entry: 102b0b0b0; end: 102b0b127; -[_TtC19SCCameraTimerModeV227CameraTimerModeV2SliderView pointInside:withEvent:] */

uint FUN_102b0b0b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  FUN_102b0afbc(param_1,param_2,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
  return (uint)param_5 & 1;
}



/* Entry: 102b0b128; end: 102b0b4bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b0b128(double param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  double dVar13;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  func_0x000107c3ec60();
  func_0x000107c609cc();
  lVar2 = _DAT_112eefd38;
  lVar1 = _DAT_112eefce0;
  param_1 = param_1 + -4.0;
  if (0.0 < param_1) {
    dVar13 = (double)(long)(param_1 / 6.0);
    if (0x7fe < (ulong)dVar13 >> 0x34) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102b0b4b4);
      (*pcVar3)();
    }
    if (dVar13 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102b0b4b8);
      (*pcVar3)();
    }
    if (9.223372036854776e+18 <= dVar13) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102b0b4bc);
      (*pcVar3)();
    }
    lVar12 = (long)dVar13;
    if (*(long *)(unaff_x20 + _DAT_112eefd38) != lVar12) {
      func_0x000107c61428(unaff_x20 + _DAT_112eefce0,auStack_88,0,0);
      while( true ) {
        uVar7 = *(ulong *)(unaff_x20 + lVar1);
        if (uVar7 >> 0x3e == 0) {
          uVar4 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar4 = uVar7 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar7) {
            uVar4 = uVar7;
          }
          func_0x000107c60480();
        }
        if ((long)uVar4 <= lVar12) break;
        func_0x000107c61428(unaff_x20 + lVar1,auStack_a0,0x21,0);
        uVar7 = *(ulong *)(unaff_x20 + lVar1);
        if (uVar7 >> 0x3e == 0) {
          uVar4 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar4 = uVar7 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar7) {
            uVar4 = uVar7;
          }
          func_0x000107c60480();
        }
        if (uVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102b0b2b0);
          (*pcVar3)();
        }
        uVar4 = uVar7;
        func_0x000107c61550();
        *(ulong *)(unaff_x20 + lVar1) = uVar7;
        if ((uVar7 >> 0x3e != 0) || ((uVar4 & 1) == 0)) {
          FUN_102b0c8d0();
        }
        uVar4 = uVar7 & 0xffffffffffffff8;
        if (*(long *)(uVar4 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102b0b4b0);
          (*pcVar3)();
        }
        lVar9 = *(long *)(uVar4 + 0x10) + -1;
        uVar10 = *(undefined8 *)(uVar4 + lVar9 * 8 + 0x20);
        *(long *)(uVar4 + 0x10) = lVar9;
        *(ulong *)(unaff_x20 + lVar1) = uVar7;
        func_0x000107c614a8(auStack_a0);
        func_0x000107c4ff30(uVar10);
        func_0x000107c61170(uVar10);
      }
      uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112eefcd8);
      while( true ) {
        uVar7 = *(ulong *)(unaff_x20 + lVar1);
        if (uVar7 >> 0x3e == 0) {
          uVar4 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar4 = uVar7 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar7) {
            uVar4 = uVar7;
          }
          func_0x000107c60480();
        }
        if (lVar12 <= (long)uVar4) break;
        func_0x000102b0d1f0();
        uVar5 = uVar10;
        func_0x000107c4aba4(uVar10);
        func_0x000107c61180();
        func_0x000107c3d894();
        func_0x000107c61170(uVar5);
        func_0x000107c61428(unaff_x20 + lVar1,auStack_a0,0x21,0);
        uVar11 = *(ulong *)(unaff_x20 + lVar1);
        func_0x000107c61174();
        uVar7 = uVar11;
        func_0x000107c61550();
        *(ulong *)(unaff_x20 + lVar1) = uVar11;
        if ((((int)uVar7 == 0) || ((long)uVar11 < 0)) || (uVar7 = uVar11, (uVar11 >> 0x3e & 1) != 0)
           ) {
          if (uVar11 >> 0x3e == 0) {
            uVar6 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar6 = uVar11 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar11) {
              uVar6 = uVar11;
            }
            func_0x000107c60480(uVar6);
          }
          uVar7 = 0;
          FUN_102b0c654(0,uVar6 + 1,1,uVar11,0x112eefda8,&PTR__OBJC_CLASS___CALayer_1126b1750,
                        0x112eefdb0,&UNK_10db1f9d0);
          *(ulong *)(unaff_x20 + lVar1) = uVar7;
        }
        uVar8 = uVar7 & 0xffffffffffffff8;
        uVar11 = *(ulong *)(uVar8 + 0x10);
        uVar6 = uVar7;
        if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar11) {
          uVar6 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
          FUN_102b0c654(uVar6,uVar11 + 1,1,uVar7,0x112eefda8,&PTR__OBJC_CLASS___CALayer_1126b1750,
                        0x112eefdb0,&UNK_10db1f9d0);
          uVar8 = uVar6 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar8 + 0x10) = uVar11 + 1;
        *(ulong *)(uVar8 + uVar11 * 8 + 0x20) = uVar4;
        *(ulong *)(unaff_x20 + lVar1) = uVar6;
        func_0x000107c614a8(auStack_a0);
        func_0x000107c61170(uVar4);
      }
      *(long *)(unaff_x20 + lVar2) = lVar12;
      dVar13 = (double)lVar12 * 6.0 + -2.0;
      if (lVar12 < 1) {
        dVar13 = 0.0;
      }
      *(long *)(unaff_x20 + _DAT_112eefd40) = (long)((param_1 - dVar13) * 0.5 + 2.0);
    }
  }
  return;
}



/* Entry: 102b0b4bc; end: 102b0b51b; -[_TtC19SCCameraTimerModeV227CameraTimerModeV2SliderView layoutSubviews] */

void FUN_102b0b4bc(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_layoutSubviews_112600e60;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_102b0b128();
  FUN_102b0a4a8();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102b0b51c; end: 102b0b89b;  */

/* WARNING: Possible PIC construction at 0x000102b0b598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b0b604: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b0b648: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b0b670: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b0b64c) */
/* WARNING: Removing unreachable block (ram,0x000102b0b608) */
/* WARNING: Removing unreachable block (ram,0x000102b0b59c) */
/* WARNING: Removing unreachable block (ram,0x000102b0b674) */

void FUN_102b0b51c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c3ec60();
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x000107c61168(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  func_0x000107c3e8b0(param_1,param_2,param_3,param_4,0x4028000000000000);
  func_0x000107c61180();
  func_0x000107c3ab30();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 102b0b89c; end: 102b0bce3;  */

/* WARNING: Possible PIC construction at 0x000102b0b950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b0baf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b0b9bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b0bcc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b0b9c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b0b89c(double param_1,undefined8 param_2,double param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  code *pcVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  undefined1 auStack_b8 [24];
  undefined1 auStack_68 [8];
  
  func_0x000107c4b8b8();
  dVar11 = param_1;
  func_0x000107c5bcc0();
  lVar9 = _DAT_112eefd28;
  if (2 < param_5 - 3U) {
    if (param_5 != 2) {
      if (param_5 != 1) {
        return;
      }
      dVar11 = param_1;
      FUN_102b0bce4(param_1,param_2);
      *(char *)(unaff_x20 + _DAT_112eefd28) = (char)param_5;
      uVar1 = (uint)param_5 & 0xff;
      if (uVar1 == 1) {
        *(undefined1 *)(unaff_x20 + _DAT_112eefd30) = 1;
        func_0x000107c3ec60();
        func_0x000107c609cc();
        dVar17 = 0.0;
        if (0.0 < dVar11) {
          func_0x000107c3ec60();
          func_0x000107c609cc();
          dVar14 = 1.0;
          if (0.0 < *(double *)(unaff_x20 + _DAT_112eefcb8)) {
            dVar14 = *(double *)(unaff_x20 + _DAT_112eefcc0) /
                     *(double *)(unaff_x20 + _DAT_112eefcb8);
          }
          dVar17 = param_1 / dVar11;
          if (dVar14 <= param_1 / dVar11) {
            dVar17 = dVar14;
          }
          if (dVar17 < 0.0) {
            dVar17 = 0.0;
          }
        }
        *(double *)(unaff_x20 + _DAT_112eefd20) = dVar17;
        FUN_102b0ac74();
        lVar4 = unaff_x20 + _DAT_112eefca8;
        func_0x000107c61618();
        if (lVar4 == 0) {
          return;
        }
        lVar9 = lVar4 + _DAT_112eefb80;
        func_0x000107c61618();
        if (lVar9 != 0) {
          func_0x000107c4e454(*(undefined8 *)(lVar9 + _DAT_112eefe18));
          lVar4 = lVar9;
        }
      }
      else {
        if (uVar1 == 2) {
          return;
        }
        lVar4 = unaff_x20 + _DAT_112eefca8;
        func_0x000107c61618();
        if (lVar4 == 0) goto LAB_102b0bb3c;
        func_0x000102b06f7c();
      }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar4);
      return;
    }
    if (*(char *)(unaff_x20 + _DAT_112eefd28) == '\x01') {
      func_0x000107c3ec60();
      func_0x000107c609cc();
      dVar17 = 0.0;
      if (0.0 < dVar11) {
        func_0x000107c3ec60();
        func_0x000107c609cc();
        dVar11 = param_1 / dVar11;
        param_3 = 1.0;
        if (0.0 < *(double *)(unaff_x20 + _DAT_112eefcb8)) {
          param_3 = *(double *)(unaff_x20 + _DAT_112eefcc0) /
                    *(double *)(unaff_x20 + _DAT_112eefcb8);
        }
        dVar17 = dVar11;
        if (param_3 <= dVar11) {
          dVar17 = param_3;
        }
        if (dVar17 < 0.0) {
          dVar17 = 0.0;
        }
      }
      *(double *)(unaff_x20 + _DAT_112eefd20) = dVar17;
      func_0x000107c3ec60(unaff_x20);
      dVar14 = dVar11;
      func_0x000107c609cc();
      lVar9 = _DAT_112eefd38;
      if ((0.0 < dVar14) && (0 < *(long *)(unaff_x20 + _DAT_112eefd38))) {
        dVar14 = 1.0;
        if ((0.0 < *(double *)(unaff_x20 + _DAT_112eefcb8)) &&
           ((dVar15 = *(double *)(unaff_x20 + _DAT_112eefcc0) /
                      *(double *)(unaff_x20 + _DAT_112eefcb8), dVar15 < 1.0 &&
            (dVar14 = dVar15, dVar15 < 0.0)))) {
          dVar14 = 0.0;
        }
        dVar15 = dVar11;
        func_0x000107c609cc(dVar11,dVar17,param_3,param_4);
        func_0x000107c609cc(dVar11,dVar17,param_3,param_4);
        lVar3 = _DAT_112eefd40;
        lVar4 = _DAT_112eefce0;
        uVar10 = *(ulong *)(unaff_x20 + lVar9);
        if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x102b0afbc);
          (*pcVar7)();
        }
        if (uVar10 != 0) {
          uVar6 = 0;
          dVar11 = dVar11 * *(double *)(unaff_x20 + _DAT_112eefd20);
          do {
            func_0x000107c61428(unaff_x20 + lVar4,auStack_b8,0x20,0);
            uVar5 = *(ulong *)(unaff_x20 + lVar4);
            if ((uVar5 & 0xc000000000000001) == 0) {
              if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x102b0afb8);
                (*pcVar7)();
              }
              uVar2 = *(ulong *)(uVar5 + uVar6 * 8 + 0x20);
              func_0x000107c61174(uVar2);
            }
            else {
              uVar2 = uVar6;
              FUN_102b0c198(uVar6,uVar5,&PTR__OBJC_CLASS___CALayer_1126b1750,0x112eefda8);
            }
            func_0x000107c614a8(auStack_b8);
            dVar17 = (double)uVar6 * 6.0 + *(double *)(unaff_x20 + lVar3) + 2.0;
            if (dVar17 <= dVar14 * (dVar15 + -12.0)) {
              if (dVar17 + 2.0 <= dVar11) {
                uVar8 = uRam0000000112eefd90;
                if (lRam0000000112eefd88 != -1) {
                  func_0x000107c61568(0x112eefd88,0x102b0a214);
                  uVar8 = uRam0000000112eefd90;
                }
                goto LAB_102b0adb4;
              }
              if (dVar11 <= dVar17 + -2.0) {
                uVar8 = uRam0000000112eefd80;
                if (lRam0000000112eefd78 != -1) {
                  func_0x000107c61568(0x112eefd78,0x102b0a1e0);
                  uVar8 = uRam0000000112eefd80;
                }
                goto LAB_102b0adb4;
              }
              if (lRam0000000112eefd78 != -1) {
                func_0x000107c61568(0x112eefd78,0x102b0a1e0);
              }
              uVar8 = uRam0000000112eefd80;
              if (lRam0000000112eefd88 != -1) {
                func_0x000107c61568(0x112eefd88,0x102b0a214);
              }
              FUN_102b0c944((dVar11 - (dVar17 + -2.0)) * 0.25,uVar8,uRam0000000112eefd90);
            }
            else {
              uVar8 = uRam0000000112eefda0;
              if (lRam0000000112eefd98 != -1) {
                func_0x000107c61568(0x112eefd98,FUN_102b0a1a8);
                uVar8 = uRam0000000112eefda0;
              }
LAB_102b0adb4:
              func_0x000107c61174(uVar8);
            }
            uVar6 = uVar6 + 1;
            uVar16 = uVar8;
            func_0x000107c3ab24();
            func_0x000107c61180();
            func_0x000107c52b50(uVar2);
            func_0x000107c61170(uVar16);
            func_0x000107c61170(uVar2);
            func_0x000107c61170(uVar8);
          } while (uVar10 != uVar6);
        }
      }
      return;
    }
    if (*(char *)(unaff_x20 + _DAT_112eefd28) == '\x02') {
      return;
    }
LAB_102b0bb3c:
    dVar11 = param_1;
    func_0x000107c3ec60(param_1,param_2,unaff_x20);
    func_0x000107c609cc();
    lVar9 = _DAT_112eefcc0;
    if (0.0 < dVar11 + -12.0) {
      dVar17 = *(double *)(unaff_x20 + _DAT_112eefcb8);
      dVar14 = *(double *)(unaff_x20 + _DAT_112eefcb0);
      dVar15 = dVar14 / dVar17;
      if (dVar17 <= 0.0) {
        dVar15 = 0.0;
      }
      dVar12 = (param_1 + -6.0) / (dVar11 + -12.0);
      dVar11 = 1.0;
      if (1.0 < dVar15) {
        dVar11 = dVar15;
      }
      dVar13 = dVar12;
      if (dVar12 < dVar15) {
        dVar13 = dVar15;
      }
      if (1.0 <= dVar12) {
        dVar13 = dVar11;
      }
      dVar11 = dVar17 * dVar13;
      if (dVar17 <= dVar17 * dVar13) {
        dVar11 = dVar17;
      }
      if (dVar11 < dVar14) {
        dVar11 = dVar14;
      }
      *(double *)(unaff_x20 + _DAT_112eefcc0) = dVar11;
      FUN_102b0a308();
      pcVar7 = *(code **)(unaff_x20 + _DAT_112eefcc8);
      if (pcVar7 != (code *)0x0) {
        uVar8 = ((undefined8 *)(unaff_x20 + _DAT_112eefcc8))[1];
        uVar16 = *(undefined8 *)(unaff_x20 + lVar9);
        func_0x000107c6157c(uVar8);
        (*pcVar7)(uVar16);
        if (pcVar7 == (code *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_release_11034f4c0)(uVar8);
        return;
      }
    }
    return;
  }
  if (*(char *)(unaff_x20 + _DAT_112eefd28) == '\x01') {
    func_0x000107c3ec60();
    func_0x000107c609cc();
    dVar17 = 0.0;
    if (0.0 < dVar11) {
      func_0x000107c3ec60();
      func_0x000107c609cc();
      dVar14 = 1.0;
      if (0.0 < *(double *)(unaff_x20 + _DAT_112eefcb8)) {
        dVar14 = *(double *)(unaff_x20 + _DAT_112eefcc0) / *(double *)(unaff_x20 + _DAT_112eefcb8);
      }
      dVar17 = param_1 / dVar11;
      if (dVar14 <= param_1 / dVar11) {
        dVar17 = dVar14;
      }
      if (dVar17 < 0.0) {
        dVar17 = 0.0;
      }
    }
    *(double *)(unaff_x20 + _DAT_112eefd20) = dVar17;
    FUN_102b0ac74();
    *(undefined1 *)(unaff_x20 + _DAT_112eefd30) = 0;
    lVar3 = unaff_x20 + _DAT_112eefca8;
    func_0x000107c61618();
    if (lVar3 == 0) goto LAB_102b0bafc;
    lVar4 = lVar3 + _DAT_112eefb80;
    func_0x000107c61618();
    if (lVar4 != 0) {
      lVar9 = *(long *)(lVar4 + _DAT_112eefe18);
      if (lVar9 != 0) {
        dVar17 = dVar17 * *(double *)(lVar4 + _DAT_112eefe10 + 8) -
                 *(double *)(lVar4 + _DAT_112eefe10 + 0x18);
        dVar11 = 0.0;
        if (0.0 < dVar17) {
          dVar11 = dVar17;
        }
        func_0x000107c60a44(auStack_68,dVar11,600);
        func_0x000107c51bdc(lVar9);
      }
      func_0x000107c4e868(lVar9);
      goto code_r0x000107c615e8;
    }
  }
  else {
    if (*(char *)(unaff_x20 + _DAT_112eefd28) == '\x02') {
      return;
    }
    FUN_102b0bd78(param_1,param_2);
    lVar3 = unaff_x20 + _DAT_112eefca8;
    func_0x000107c61618();
    if (lVar3 == 0) goto LAB_102b0bafc;
    lVar4 = lVar3 + _DAT_112eefb80;
    func_0x000107c61618();
    if (lVar4 != 0) {
      func_0x000102b0e368(lVar3);
      goto code_r0x000107c615e8;
    }
  }
  func_0x000107c615e8(lVar3);
LAB_102b0bafc:
  *(undefined1 *)(unaff_x20 + lVar9) = 2;
  return;
}



/* Entry: 102b0bce4; end: 102b0bd77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_102b0bce4(double param_1)

{
  bool bVar1;
  bool bVar2;
  long unaff_x20;
  double dVar3;
  
  if (*(long *)(unaff_x20 + _DAT_112eefcd0) != 0) {
    dVar3 = param_1;
    func_0x000107c438d4(*(undefined8 *)(unaff_x20 + _DAT_112eefce8));
    func_0x000107c609bc();
    if (40.0 < ABS(param_1 - dVar3)) {
      if (dVar3 + -40.0 < 80.0) {
        return 2;
      }
      bVar1 = true;
      bVar2 = false;
      if (param_1 < dVar3 + -40.0) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(param_1)) {
          bVar1 = param_1 < 0.0;
          bVar2 = false;
        }
      }
      if (bVar1 == bVar2) {
        return 1;
      }
      return 2;
    }
  }
  return 0;
}



/* Entry: 102b0bd78; end: 102b0be7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b0bd78(double param_1)

{
  long lVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  
  dVar4 = param_1;
  func_0x000107c3ec60();
  func_0x000107c609cc();
  lVar1 = _DAT_112eefcc0;
  if (0.0 < dVar4 + -12.0) {
    dVar7 = *(double *)(unaff_x20 + _DAT_112eefcb8);
    dVar8 = *(double *)(unaff_x20 + _DAT_112eefcb0);
    dVar9 = dVar8 / dVar7;
    if (dVar7 <= 0.0) {
      dVar9 = 0.0;
    }
    dVar5 = (param_1 + -6.0) / (dVar4 + -12.0);
    dVar4 = 1.0;
    if (1.0 < dVar9) {
      dVar4 = dVar9;
    }
    dVar6 = dVar5;
    if (dVar5 < dVar9) {
      dVar6 = dVar9;
    }
    if (1.0 <= dVar5) {
      dVar6 = dVar4;
    }
    dVar4 = dVar7 * dVar6;
    if (dVar7 <= dVar7 * dVar6) {
      dVar4 = dVar7;
    }
    if (dVar4 < dVar8) {
      dVar4 = dVar8;
    }
    *(double *)(unaff_x20 + _DAT_112eefcc0) = dVar4;
    FUN_102b0a308();
    pcVar2 = *(code **)(unaff_x20 + _DAT_112eefcc8);
    if (pcVar2 != (code *)0x0) {
      uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112eefcc8))[1];
      uVar10 = *(undefined8 *)(unaff_x20 + lVar1);
      func_0x000107c6157c(uVar3);
      (*pcVar2)(uVar10);
      if (pcVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_release_11034f4c0)(uVar3);
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 102b0be80; end: 102b0becf; -[_TtC19SCCameraTimerModeV227CameraTimerModeV2SliderView handlePan:] */

/* WARNING: Possible PIC construction at 0x000102b0beb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b0bebc) */

void FUN_102b0be80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102b0b89c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102b0bed0; end: 102b0bf03;  */

void FUN_102b0bed0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b0bf04; end: 102b0bfcf; -[_TtC19SCCameraTimerModeV227CameraTimerModeV2SliderView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b0bf54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b0bf74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b0bf94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b0bfb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b0bf98) */
/* WARNING: Removing unreachable block (ram,0x000102b0bf78) */
/* WARNING: Removing unreachable block (ram,0x000102b0bf58) */
/* WARNING: Removing unreachable block (ram,0x000102b0bfb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b0bf04(long param_1)

{
  func_0x000102b0d3c0(param_1 + _DAT_112eefca8);
  func_0x000100f11134(*(undefined8 *)(param_1 + _DAT_112eefcc8),
                      ((undefined8 *)(param_1 + _DAT_112eefcc8))[1]);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112eefcd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eefcd8));
  return;
}



/* Entry: 102b0bfd0; end: 102b0bfef;  */

void FUN_102b0bfd0(void)

{
  func_0x000107c61168(&PTR_PTR_1128890d0);
  return;
}



/* Entry: 102b0bff0; end: 102b0c157;  */

int FUN_102b0bff0(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102b0c06c;
        goto LAB_102b0c050;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102b0c050:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_102b0c06c:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102b0c158; end: 102b0c197;  */

void FUN_102b0c158(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eefd70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db1f9a4;
  func_0x000107c61520(&UNK_10db1f9a4,&UNK_11059c008);
  puRam0000000112eefd70 = puVar1;
  return;
}



/* Entry: 102b0c198; end: 102b0c353;  */

ulong FUN_102b0c198(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b0c27c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b0c280);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000102b0d3e4(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b0c354);
  (*pcVar2)();
}



/* Entry: 102b0c354; end: 102b0c4ef;  */

ulong FUN_102b0c354(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b0c424);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b0c428);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000102b11754(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x000102b11754(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000024,0x800000010f0eede0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b0c4f0);
  (*pcVar2)();
}



/* Entry: 102b0c4f0; end: 102b0c567;  */

void FUN_102b0c4f0(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x000102b0d3e4(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 102b0c568; end: 102b0c5c3;  */

void FUN_102b0c568(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    func_0x000102b11754();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112eefdd8;
  plVar5 = (long *)&UNK_10db1fa08;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 102b0c5c4; end: 102b0c653;  */

undefined *
FUN_102b0c5c4(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_102b0c4f0(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 102b0c654; end: 102b0c7b3;  */

ulong FUN_102b0c654(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b0c7b4);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_102b0c5c4(uVar2,uVar4,param_5,param_6,param_7,param_8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b0c7b0);
      (*pcVar1)();
    }
    FUN_102b0c7b4(0,uVar2,uVar3 + 0x20,param_4,param_5,param_6);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 102b0c7b4; end: 102b0c8cf;  */

long FUN_102b0c7b4(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102b0c8cc);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102b0c8d0);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x000102b0d3e4(0,param_5,param_6);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      func_0x000102b0d3e4(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102b0c8c8);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 102b0c8d0; end: 102b0c943;  */

void FUN_102b0c8d0(ulong param_1)

{
  ulong uVar1;
  
  if (param_1 >> 0x3e == 0) {
    uVar1 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar1 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar1 = param_1;
    }
    func_0x000107c60480(uVar1);
  }
  FUN_102b0c654(0,uVar1,0,param_1,0x112eefda8,&PTR__OBJC_CLASS___CALayer_1126b1750,0x112eefdb0,
                &UNK_10db1f9d0);
  return;
}



/* Entry: 102b0c944; end: 102b0ca5f;  */

undefined * FUN_102b0c944(double param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar12 = param_1;
  if (param_1 < 0.0) {
    dVar12 = 0.0;
  }
  dStack_58 = 0.0;
  dStack_50 = 0.0;
  dStack_68 = 0.0;
  dStack_60 = 0.0;
  if (1.0 <= param_1) {
    dVar12 = 1.0;
  }
  func_0x000107c44248(param_2,param_3,&dStack_50,&dStack_58,&dStack_60,&dStack_68);
  func_0x000107c44248(param_3);
  dVar13 = dStack_50 + dVar12 * (0.0 - dStack_50);
  dVar14 = dStack_58 + dVar12 * (0.0 - dStack_58);
  dVar15 = dStack_60 + dVar12 * (0.0 - dStack_60);
  dVar12 = dStack_68 + dVar12 * (0.0 - dStack_68);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c610f8();
  func_0x000107c482a8(dVar13,dVar14,dVar15,dVar12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar5;
  }
  func_0x000107c60e78();
  puVar9 = *(undefined **)(puVar5 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar9 != (undefined *)0x0) {
    func_0x0001000285a8(0x112eefdd0,&UNK_10db1f9f8);
    puVar6 = puVar9;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar11 = (undefined8 *)(puVar5 + 0x30);
    do {
      uVar2 = puVar11[-2];
      uVar3 = puVar11[-1];
      uVar10 = *puVar11;
      func_0x000107c61434(uVar3);
      func_0x000107c615f0(uVar10);
      uVar7 = uVar2;
      uVar8 = uVar3;
      func_0x000100029284();
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102b0cb58);
        (*pcVar4)();
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar8 + 0x40) = *(ulong *)(puVar6 + uVar8 + 0x40) | 1L << (uVar7 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar6 + 0x38) + uVar7 * 8) = uVar10;
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102b0cb5c);
        (*pcVar4)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      puVar9 = puVar9 + -1;
      puVar11 = puVar11 + 3;
    } while (puVar9 != (undefined *)0x0);
    func_0x000107c61574(puVar6);
  }
  return puVar6;
}



/* Entry: 102b0ca60; end: 102b0cb5b;  */

undefined * FUN_102b0ca60(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112eefdd0,&UNK_10db1f9f8);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c615f0(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102b0cb58);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102b0cb5c);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 102b0cb5c; end: 102b0d02b;  */

void FUN_102b0cb5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 auStack_e8 [136];
  
  func_0x000107c3ab24(param_2);
  func_0x000107c61180();
  func_0x000107c549b4(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c59a18(param_1);
  lVar2 = 0x112eefdb8;
  func_0x0001000285a8(0x112eefdb8,&UNK_10db1f9e0);
  lVar3 = lVar2;
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 4;
  *(undefined8 *)(lVar3 + 0x10) = 2;
  *(undefined8 *)(lVar3 + 0x20) = 0x68746170;
  *(undefined8 *)(lVar3 + 0x28) = 0xe400000000000000;
  puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar3 + 0x30) = puVar4;
  *(undefined8 *)(lVar3 + 0x38) = 0x6f6c6f436c6c6966;
  *(undefined8 *)(lVar3 + 0x40) = 0xe900000000000072;
  puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar3 + 0x48) = puVar4;
  lVar5 = lVar3;
  FUN_102b0ca60(lVar3);
  func_0x000107c61588(lVar3);
  uVar6 = 0x112eefdc0;
  func_0x0001000285a8(0x112eefdc0,&UNK_10db1f9e8);
  func_0x000107c61408((undefined8 *)(lVar3 + 0x20),2,uVar6);
  uVar6 = 0x112eefdc8;
  func_0x0001000285a8(0x112eefdc8,&UNK_10db1f9f0);
  puVar1 = PTR___sSSSHsWP_11034da90;
  puVar4 = PTR___sSSN_11034da80;
  lVar3 = lVar5;
  func_0x000107c5f9dc(lVar5,PTR___sSSN_11034da80,uVar6,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar5);
  func_0x000107c5219c(param_1);
  func_0x000107c61170(lVar3);
  puVar7 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x000107c610f8(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  func_0x000107c453e4();
  func_0x000107c61534(lVar2,auStack_e8);
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(undefined8 *)(lVar2 + 0x20) = 0x68746170;
  *(undefined8 *)(lVar2 + 0x28) = 0xe400000000000000;
  puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x000107c610f8();
  func_0x000107c61174(puVar7);
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x30) = puVar8;
  lVar3 = lVar2;
  FUN_102b0ca60(lVar2);
  func_0x000107c61588(lVar2);
  FUN_102b0d378((undefined8 *)(lVar2 + 0x20));
  lVar2 = lVar3;
  func_0x000107c5f9dc(lVar3,puVar4,uVar6,puVar1);
  func_0x000107c6142c(lVar3);
  func_0x000107c5219c(puVar7);
  func_0x000107c61170(lVar2);
  func_0x000107c562f4(param_1);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 102b0d02c; end: 102b0d377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b0d02c(void)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112eefca8;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(unaff_x20 + _DAT_112eefcb0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eefcb8) = 0x404e000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112eefcc0) = 0x404e000000000000;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112eefcc8);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eefcd0) = 0;
  lVar1 = _DAT_112eefcd8;
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  *(undefined **)(unaff_x20 + _DAT_112eefce0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar1 = _DAT_112eefce8;
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _DAT_112eefcf0;
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112eefcf8) = 0;
  lVar1 = _DAT_112eefd00;
  puVar4 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _DAT_112eefd08;
  puVar4 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _DAT_112eefd10;
  puVar4 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112eefd18) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eefd20) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112eefd28) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_112eefd30) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eefd38) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eefd40) = 0x4000000000000000;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCCameraTimerModeV2/SCCameraTimerModeV2SliderView.swift",0x37,2,0x8f,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102b0d1f0);
  (*pcVar3)();
}



/* Entry: 102b0d378; end: 102b0d423;  */

undefined8 FUN_102b0d378(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112eefdc0;
  func_0x0001000285a8(0x112eefdc0,&UNK_10db1f9e8);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102b0d424; end: 102b0d46b; -[SCCameraTimerModeV2ViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b0d424(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eefde0;
  func_0x000107c61428(param_1 + _DAT_112eefde0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b0d46c; end: 102b0d4c3; -[SCCameraTimerModeV2ViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b0d46c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eefde0;
  func_0x000107c61428(param_1 + _DAT_112eefde0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b0d4c4; end: 102b0d5f3; -[SCCameraTimerModeV2ViewController initWithConfig:audioPlayer:] */

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_102b0d4c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar6;
  undefined8 *puVar7;
  long alStack_70 [4];
  long lStack_50;
  undefined **ppuStack_48;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  lVar2 = 0;
  FUN_102b0eb20();
  lVar3 = lVar2;
  func_0x000107c613fc();
  ppuStack_48 = &PTR_DAT_11059c160;
  alStack_70[1] = lVar3;
  lStack_50 = lVar2;
  func_0x000107c610f8(uVar1);
  func_0x0001000c6518(alStack_70 + 1,lVar2);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar7 = (undefined8 *)((long)alStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar7);
  uVar6 = *puVar7;
  func_0x000107c61174(param_3);
  uVar4 = param_4;
  func_0x000107c61174(param_4);
  uVar5 = param_3;
  func_0x000102b0e60c(param_3,param_4,uVar6,uVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  func_0x0001000834e4(alStack_70 + 1);
  uVar1 = param_1;
  func_0x000107c614f0(param_1);
  func_0x000107c61464(param_1,uVar1,0xa8,7);
  return uVar5;
}



/* Entry: 102b0d5f4; end: 102b0d61b; -[SCCameraTimerModeV2ViewController initWithCoder:] */

void FUN_102b0d5f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_102b0e864();
  return;
}



/* Entry: 102b0d61c; end: 102b0d687;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b0d61c(void)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c614f0();
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112eefdf0);
  func_0x000107c6157c(uVar1);
  func_0x000100c82230();
  func_0x000107c61574(uVar1);
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}


