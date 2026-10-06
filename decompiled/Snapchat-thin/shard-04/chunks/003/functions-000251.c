/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1033d0048; end: 1033d02bf;  */

undefined * FUN_1033d0048(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a050();
  func_0x000107c5a050(param_1);
  func_0x000107c3d89c(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar3 + 0x18) = 0xb;
  *(undefined8 *)(puVar3 + 0x10) = 5;
  uVar7 = param_1;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar4 = puVar1;
  func_0x000107c5cbe4(puVar1);
  func_0x000107c61180();
  uVar5 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar4);
  *(undefined8 *)(puVar3 + 0x20) = uVar5;
  uVar7 = param_1;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar4 = puVar1;
  func_0x000107c3ec1c(puVar1);
  func_0x000107c61180();
  uVar5 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar4);
  *(undefined8 *)(puVar3 + 0x28) = uVar5;
  uVar7 = param_1;
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar4 = puVar1;
  func_0x000107c4acb0(puVar1);
  func_0x000107c61180();
  uVar5 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar4);
  *(undefined8 *)(puVar3 + 0x30) = uVar5;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar4 = puVar1;
  func_0x000107c5ce8c(puVar1);
  func_0x000107c61180();
  uVar7 = param_1;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar4);
  *(undefined8 *)(puVar3 + 0x38) = uVar7;
  puVar4 = puVar1;
  func_0x000107c44d9c();
  func_0x000107c61180();
  puVar6 = puVar4;
  func_0x000107c40290(0x404d000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  *(undefined **)(puVar3 + 0x40) = puVar6;
  uVar7 = 0;
  FUN_1033d037c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar4 = puVar3;
  func_0x000107c5fc48(puVar3,uVar7);
  func_0x000107c61574(puVar3);
  func_0x000107c3d048(puVar2);
  func_0x000107c61170(puVar4);
  return puVar1;
}



/* Entry: 1033d02c0; end: 1033d0373;  */

undefined8 FUN_1033d02c0(double param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001033d0028(0);
  func_0x000107c610f8();
  uVar1 = 7;
  FUN_1033cf940(0x3fc70a3d70a3d70a,7);
  func_0x000107c61180();
  func_0x000107c5a050();
  if (0.0 < param_1) {
    uVar2 = uVar1;
    func_0x000107c4aba4(uVar1);
    func_0x000107c61180();
    func_0x000107c539d4(param_1);
    func_0x000107c61170(uVar2);
    uVar2 = uVar1;
    func_0x000107c4aba4(uVar1);
    func_0x000107c61180();
    func_0x000107c562fc();
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(uVar1);
  return uVar1;
}



/* Entry: 1033d0374; end: 1033d037b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d0374(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    pcVar1 = *(code **)(lVar3 + _DAT_112f62d98);
    uVar2 = ((undefined8 *)(lVar3 + _DAT_112f62d98))[1];
    func_0x000107c6157c(uVar2);
    func_0x000107c61170(lVar3);
    (*pcVar1)();
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 1033d037c; end: 1033d03bb;  */

void FUN_1033d037c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1033d03bc; end: 1033d03df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d03bc(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112f62dd0);
    puVar2 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
    func_0x000107c61168(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
    func_0x000107c61174(uVar3);
    func_0x000107c42448(puVar2);
    func_0x000107c61180();
    func_0x000107c54418(uVar3);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 1033d03e0; end: 1033d044b; -[_TtC17LensLeaderboardUI25SnapshotExcludedStackView initWithFrame:] */

void FUN_1033d03e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_5;
  func_0x000107c614f0();
  uStack_50 = param_5;
  uStack_48 = uVar1;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&uStack_50,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 1033d044c; end: 1033d048f; -[_TtC17LensLeaderboardUI25SnapshotExcludedStackView initWithCoder:] */

void FUN_1033d044c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_initWithCoder__1125dd730,param_3);
  return;
}



/* Entry: 1033d0490; end: 1033d04c3;  */

void FUN_1033d0490(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033d04c4; end: 1033d04d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1033d04c4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f62e38;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f62e38);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_1033d04d8();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 1033d04d8; end: 1033d062f;  */

undefined * FUN_1033d04d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c453e4();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3ea80();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3fdd0(0x3fbeb851eb851eb8);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c52b50(puVar1,param_2,puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c5a050(puVar1,param_2,0);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  func_0x000107c610f8(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x000107c48c2c();
  func_0x000107c3d6fc(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 1033d0630; end: 1033d0723;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1033d0630(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = _DAT_112f62e48;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112f62e48);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar2 = puVar3;
    func_0x00010052bbec();
    func_0x000107c61180();
    puVar4 = puVar2;
    func_0x000107c43780();
    func_0x000107c61180();
    func_0x000107c615e8(puVar2);
    func_0x000107c54adc(puVar3);
    func_0x000107c61170(puVar4);
    if (lRam0000000112f62c50 != -1) {
      func_0x000107c61568(0x112f62c50,0x1033ccdec);
    }
    func_0x000107c59c78(puVar3);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar5);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1033d0724; end: 1033d0737;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1033d0724(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f62e50;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f62e50);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_1033d242c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 1033d0738; end: 1033d0797;  */

long FUN_1033d0738(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar3);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    (*param_2)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar1 = 0;
  }
  func_0x000107c61174(lVar1);
  return lVar2;
}



/* Entry: 1033d0798; end: 1033d0803;  */

void FUN_1033d0798(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  puVar1 = (ulong *)(param_2 + 0x10);
  func_0x000107c61618();
  if (puVar1 != (ulong *)0x0) {
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar1) + 0x108))();
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 1033d0804; end: 1033d085f; -[_TtC17LensLeaderboardUI30LeaderboardPanelViewController loadView] */

/* WARNING: Possible PIC construction at 0x0001033d084c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033d0850) */

void FUN_1033d0804(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c61174(param_1);
  func_0x000107c453e4(puVar1);
  func_0x000107c5a568(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1033d0860; end: 1033d0e1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d0860(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long unaff_x20;
  
  FUN_1033d0e1c();
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_viewDidLoad_112684cd8);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d0df8);
    (*pcVar1)();
  }
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c52b50(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170();
  FUN_1033d1bdc();
  func_0x000107c61604(unaff_x20 + _DAT_112f62e30,puVar3);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d0dfc);
    (*pcVar1)();
  }
  lVar4 = lVar2;
  FUN_1033d04c4();
  func_0x000107c3d89c(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar4);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d0e00);
    (*pcVar1)();
  }
  func_0x000107c3d89c();
  func_0x000107c61170(lVar2);
  puVar5 = puVar3;
  func_0x000107c5e308();
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c40290(0x4076800000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c5784c(0x443b8000,puVar6);
  lVar2 = 0x112d360b8;
  FUN_1033d23b4(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 0x13;
  *(undefined8 *)(lVar2 + 0x10) = 9;
  lVar4 = _DAT_112f62e38;
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f62e38);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar8 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d0e04);
    (*pcVar1)();
  }
  lVar9 = lVar8;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  uVar10 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar9);
  *(undefined8 *)(lVar2 + 0x20) = uVar10;
  uVar7 = *(undefined8 *)(unaff_x20 + lVar4);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar8 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d0e08);
    (*pcVar1)();
  }
  lVar9 = lVar8;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  uVar10 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar9);
  *(undefined8 *)(lVar2 + 0x28) = uVar10;
  uVar7 = *(undefined8 *)(unaff_x20 + lVar4);
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar8 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d0e0c);
    (*pcVar1)();
  }
  lVar9 = lVar8;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  uVar10 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar9);
  *(undefined8 *)(lVar2 + 0x30) = uVar10;
  uVar7 = *(undefined8 *)(unaff_x20 + lVar4);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d0e10);
    (*pcVar1)();
  }
  lVar8 = lVar4;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  uVar10 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar8);
  *(undefined8 *)(lVar2 + 0x38) = uVar10;
  puVar5 = puVar3;
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar8 = lVar4;
    func_0x000107c3f75c();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    puVar11 = puVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar8);
    *(undefined **)(lVar2 + 0x40) = puVar11;
    puVar5 = puVar3;
    func_0x000107c3f764();
    func_0x000107c61180();
    lVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d0e18);
      (*pcVar1)();
    }
    lVar8 = lVar4;
    func_0x000107c3f764();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    puVar11 = puVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar8);
    *(undefined **)(lVar2 + 0x48) = puVar11;
    puVar5 = puVar3;
    func_0x000107c5e308();
    func_0x000107c61180();
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      puVar11 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar4 = unaff_x20;
      func_0x000107c5e308(unaff_x20);
      func_0x000107c61180();
      func_0x000107c61170(unaff_x20);
      puVar12 = puVar5;
      func_0x000107c402a8(0xc048000000000000);
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(lVar4);
      *(undefined **)(lVar2 + 0x50) = puVar12;
      puVar5 = puVar3;
      func_0x000107c5e308();
      func_0x000107c61180();
      puVar12 = puVar5;
      func_0x000107c402a0(0x4074000000000000);
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      *(undefined **)(lVar2 + 0x58) = puVar12;
      *(undefined **)(lVar2 + 0x60) = puVar6;
      uVar7 = 0;
      FUN_1033d2c3c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      func_0x000107c61174(puVar6);
      lVar4 = lVar2;
      func_0x000107c5fc48(lVar2,uVar7);
      func_0x000107c61574(lVar2);
      func_0x000107c3d048(puVar11);
      func_0x000107c61170(lVar4);
      FUN_1033d0e64();
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar6);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d0e1c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d0e14);
  (*pcVar1)();
}



/* Entry: 1033d0e1c; end: 1033d0e3b;  */

void FUN_1033d0e1c(void)

{
  func_0x000107c61168(&PTR_PTR_1128d6ef0);
  return;
}



/* Entry: 1033d0e3c; end: 1033d0e63; -[_TtC17LensLeaderboardUI30LeaderboardPanelViewController viewDidLoad] */

void FUN_1033d0e3c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1033d0860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1033d0e64; end: 1033d117b;  */

/* WARNING: Possible PIC construction at 0x0001033d0e98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033d0ec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033d0f28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033d0fd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033d101c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033d1048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033d10d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033d10ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033d1100: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033d1140: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033d1104) */
/* WARNING: Removing unreachable block (ram,0x0001033d10f0) */
/* WARNING: Removing unreachable block (ram,0x0001033d10dc) */
/* WARNING: Removing unreachable block (ram,0x0001033d104c) */
/* WARNING: Removing unreachable block (ram,0x0001033d1160) */
/* WARNING: Removing unreachable block (ram,0x0001033d1090) */
/* WARNING: Removing unreachable block (ram,0x0001033d1020) */
/* WARNING: Removing unreachable block (ram,0x0001033d0fd8) */
/* WARNING: Removing unreachable block (ram,0x0001033d1004) */
/* WARNING: Removing unreachable block (ram,0x0001033d0ff4) */
/* WARNING: Removing unreachable block (ram,0x0001033d1008) */
/* WARNING: Removing unreachable block (ram,0x0001033d0f2c) */
/* WARNING: Removing unreachable block (ram,0x0001033d0ecc) */
/* WARNING: Removing unreachable block (ram,0x0001033d0f48) */
/* WARNING: Removing unreachable block (ram,0x0001033d0f50) */
/* WARNING: Removing unreachable block (ram,0x0001033d0ed4) */
/* WARNING: Removing unreachable block (ram,0x0001033d0f64) */
/* WARNING: Removing unreachable block (ram,0x0001033d0fc0) */
/* WARNING: Removing unreachable block (ram,0x0001033d0f9c) */
/* WARNING: Removing unreachable block (ram,0x0001033d0fc4) */
/* WARNING: Removing unreachable block (ram,0x0001033d0ee4) */
/* WARNING: Removing unreachable block (ram,0x0001033d1178) */
/* WARNING: Removing unreachable block (ram,0x0001033d0eec) */
/* WARNING: Removing unreachable block (ram,0x0001033d0f34) */
/* WARNING: Removing unreachable block (ram,0x0001033d0efc) */
/* WARNING: Removing unreachable block (ram,0x0001033d0f38) */
/* WARNING: Removing unreachable block (ram,0x0001033d0f08) */
/* WARNING: Removing unreachable block (ram,0x0001033d0e9c) */
/* WARNING: Removing unreachable block (ram,0x0001033d1144) */

void FUN_1033d0e64(undefined8 param_1)

{
  func_0x0001033d05a8();
  func_0x000107c3e158();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1033d117c; end: 1033d1187;  */

undefined1  [16] FUN_1033d117c(void)

{
  return ZEXT816(0);
}



/* Entry: 1033d1188; end: 1033d11a3;  */

void FUN_1033d1188(void)

{
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1033d11a4; end: 1033d11af;  */

void FUN_1033d11a4(void)

{
  return;
}



/* Entry: 1033d11b0; end: 1033d16fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d11b0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  ulong uVar12;
  long unaff_x20;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  double dVar17;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  
  func_0x000107c614f0();
  uVar2 = unaff_x20 + _DAT_112f62e30;
  func_0x000107c61618();
  if (uVar2 != 0) {
    func_0x000107c3ec60();
    func_0x000107c609cc();
    if (0.0 < param_1) {
      func_0x000107c3ec60(uVar2);
      func_0x000107c609b0();
      if (0.0 < param_1) {
        uVar3 = uVar2;
        FUN_1033d16fc();
        uVar12 = uVar3 >> 0x3e;
        if (uVar12 == 0) {
          uVar14 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar14 = uVar3 & 0xffffffffffffff8;
          if ((uVar3 & 0x8000000000000000) != 0) {
            uVar14 = uVar3;
          }
          func_0x000107c60480();
        }
        puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (uVar14 != 0) {
          puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x0001011f72c0(0,uVar14 & ((long)uVar14 >> 0x3f ^ 0xffffffffffffffffU),0);
          if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d16f4);
            (*pcVar1)();
          }
          uVar15 = 0;
          do {
            puVar13 = puStack_b0;
            if ((uVar3 & 0xc000000000000001) == 0) {
              uVar4 = *(ulong *)(uVar3 + uVar15 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar4 = uVar15;
              func_0x000100f040d0(uVar15,uVar3);
            }
            uVar16 = uVar4;
            func_0x000107c49eac();
            func_0x000107c61170(uVar4);
            uVar4 = *(ulong *)(puVar13 + 0x10);
            puStack_b0 = puVar13;
            if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar4) {
              func_0x0001011f72c0(1 < *(ulong *)(puVar13 + 0x18),uVar4 + 1,1);
            }
            uVar15 = uVar15 + 1;
            *(ulong *)(puStack_b0 + 0x10) = uVar4 + 1;
            puStack_b0[uVar4 + 0x20] = (char)uVar16;
            puVar13 = puStack_b0;
          } while (uVar14 != uVar15);
        }
        if (uVar12 == 0) {
          uVar14 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar14 = uVar3 & 0xffffffffffffff8;
          if ((uVar3 & 0x8000000000000000) != 0) {
            uVar14 = uVar3;
          }
          func_0x000107c60480();
        }
        if (uVar14 != 0) {
          uVar15 = 0;
          do {
            if ((uVar3 & 0xc000000000000001) == 0) {
              if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d16cc);
                (*pcVar1)();
              }
              uVar4 = *(ulong *)(uVar3 + uVar15 * 8 + 0x20);
              func_0x000107c61174(uVar4);
            }
            else {
              uVar4 = uVar15;
              func_0x000100f040d0(uVar15,uVar3);
            }
            if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d13a8);
              (*pcVar1)();
            }
            uVar16 = uVar15 + 1;
            func_0x000107c550d8();
            func_0x000107c61170(uVar4);
            uVar15 = uVar15 + 1;
          } while (uVar16 != uVar14);
        }
        lVar5 = unaff_x20;
        func_0x000107c5de64();
        func_0x000107c61180();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d16f8);
          (*pcVar1)();
        }
        func_0x000107c4abfc();
        func_0x000107c61170(lVar5);
        uVar6 = 0;
        FUN_1033d2c3c(0,0x112daaf08,&PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
        func_0x000107c614e8();
        func_0x000107c4eca8();
        func_0x000107c61180();
        puVar7 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
        func_0x000107c4c194();
        func_0x000107c61180();
        func_0x000107c51820();
        func_0x000107c61170(puVar7);
        dVar17 = 2.0;
        if (param_1 <= 2.0) {
          dVar17 = param_1;
        }
        func_0x000107c58bfc(dVar17,uVar6);
        func_0x000107c56f90(uVar6);
        func_0x000107c3ec60(uVar2);
        puVar8 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
        func_0x000107c610f8();
        func_0x000107c45a60(dVar17,param_2,param_3,param_4);
        puVar7 = &UNK_11064dbd0;
        func_0x000107c613fc(&UNK_11064dbd0,0x18,7);
        *(ulong *)(puVar7 + 0x10) = uVar2;
        puVar9 = &UNK_11064dbf8;
        func_0x000107c613fc(&UNK_11064dbf8,0x20,7);
        *(code **)(puVar9 + 0x10) = FUN_1033d2c7c;
        *(undefined **)(puVar9 + 0x18) = puVar7;
        pcStack_90 = FUN_1033d2c84;
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0x42000000;
        puStack_a0 = &UNK_100f9148c;
        puStack_98 = &UNK_11064dc10;
        ppuVar10 = &puStack_b0;
        puStack_88 = puVar9;
        func_0x000107c60bc4(ppuVar10);
        puVar11 = puStack_88;
        func_0x000107c61174();
        func_0x000107c6157c(puVar9);
        func_0x000107c61574(puVar11);
        func_0x000107c45138();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar10);
        puVar11 = puVar9;
        func_0x000107c61544(puVar9,"",0x67,0xa9,0x24,1);
        func_0x000107c61574(puVar9);
        if (((ulong)puVar11 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d16f0);
          (*pcVar1)();
        }
        if (uVar12 == 0) {
          uVar12 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar12 = uVar3 & 0xffffffffffffff8;
          if ((uVar3 & 0x8000000000000000) != 0) {
            uVar12 = uVar3;
          }
          func_0x000107c60480();
        }
        if (uVar12 != 0) {
          uVar14 = 0;
          do {
            if ((uVar3 & 0xc000000000000001) == 0) {
              if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d16d0);
                (*pcVar1)();
              }
              uVar15 = *(ulong *)(uVar3 + uVar14 * 8 + 0x20);
              func_0x000107c61174(uVar15);
            }
            else {
              uVar15 = uVar14;
              func_0x000100f040d0(uVar14,uVar3);
            }
            if (uVar14 == *(ulong *)(puVar13 + 0x10)) {
              func_0x000107c6142c(puVar13);
              func_0x000107c6142c(uVar3);
              func_0x000107c61170(uVar15);
              goto LAB_1033d1654;
            }
            if (*(ulong *)(puVar13 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d16d4);
              (*pcVar1)();
            }
            uVar14 = uVar14 + 1;
            func_0x000107c550d8(uVar15);
            func_0x000107c61170(uVar15);
          } while (uVar12 != uVar14);
        }
        func_0x000107c6142c(puVar13);
        func_0x000107c6142c(uVar3);
LAB_1033d1654:
        func_0x000107c5de64();
        func_0x000107c61180();
        if (unaff_x20 != 0) {
          func_0x000107c4abfc();
          func_0x000107c61574(puVar7);
          func_0x000107c61170(uVar2);
          func_0x000107c61170(uVar6);
          func_0x000107c61170(puVar8);
          func_0x000107c61170(unaff_x20);
          return;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d16fc);
        (*pcVar1)();
      }
    }
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 1033d16fc; end: 1033d1b3f;  */

undefined * FUN_1033d16fc(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined *puVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined8 *puVar24;
  ulong uVar25;
  
  func_0x000107c5c3b0();
  func_0x000107c61180();
  uVar5 = 0;
  FUN_1033d2c3c(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  uVar6 = param_1;
  func_0x000107c5fc54();
  func_0x000107c61170(param_1);
  if (uVar6 >> 0x3e == 0) {
    uVar19 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar19 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar19 = uVar6;
    }
    func_0x000107c60480();
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar14;
  if (uVar19 != 0) {
    uVar23 = 0;
    do {
      if ((uVar6 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1033d1ad8);
          (*pcVar2)();
        }
        uVar7 = *(ulong *)(uVar6 + 0x20 + uVar23 * 8);
        func_0x000107c61174();
      }
      else {
        uVar7 = uVar23;
        func_0x000100f040d0(uVar23,uVar6);
      }
      bVar3 = SCARRY8(uVar23,1);
      uVar23 = uVar23 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1033d1ad4);
        (*pcVar2)();
      }
      uVar8 = uVar7;
      FUN_1033d2394();
      uVar20 = uVar7;
      func_0x000107c61480(uVar7,uVar8);
      if (uVar20 == 0) {
        puVar10 = PTR__OBJC_CLASS___UIControl_1126c3e60;
        func_0x000107c61168(PTR__OBJC_CLASS___UIControl_1126c3e60);
        uVar8 = uVar7;
        func_0x000107c6148c(uVar7,puVar10);
        if (uVar8 != 0) goto LAB_1033d1824;
        uVar8 = uVar7;
        FUN_1033d16fc();
        if (uVar8 >> 0x3e == 0) {
          uVar20 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar20 = uVar8 & 0xffffffffffffff8;
          if ((uVar8 & 0x8000000000000000) != 0) {
            uVar20 = uVar8;
          }
          func_0x000107c60480();
        }
        uVar15 = (ulong)puVar14 >> 0x3e;
        if (uVar15 == 0) {
          puVar10 = *(undefined **)((undefined *)((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar10 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
          if (((ulong)puVar14 & 0x8000000000000000) != 0) {
            puVar10 = puVar14;
          }
          func_0x000107c60480();
        }
        if (SCARRY8((long)puVar10,uVar20)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1033d1adc);
          (*pcVar2)();
        }
        puVar10 = puVar10 + uVar20;
        puVar9 = puVar14;
        func_0x000107c61550();
        uVar4 = 0;
        if (uVar15 == 0) {
          uVar4 = (uint)puVar9;
        }
        puVar9 = (undefined *)(ulong)uVar4;
        if ((uVar4 != 1) ||
           (uVar18 = (ulong)puVar14 & 0xffffffffffffff8,
           (long)(*(ulong *)(uVar18 + 0x18) >> 1) < (long)puVar10)) {
          if (uVar15 == 0) {
            puVar16 = *(undefined **)((undefined *)((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar16 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
            if (((ulong)puVar14 & 0x8000000000000000) != 0) {
              puVar16 = puVar14;
            }
            func_0x000107c60480();
          }
          if ((long)puVar16 <= (long)puVar10) {
            puVar16 = puVar10;
          }
          func_0x0001023b5804(puVar9,puVar16,1,puVar14);
          uVar18 = (ulong)puVar9 & 0xffffffffffffff8;
          puVar14 = puVar9;
        }
        lVar1 = *(long *)(uVar18 + 0x10);
        uVar21 = (*(ulong *)(uVar18 + 0x18) >> 1) - lVar1;
        uVar15 = uVar8 & 0xffffffffffffff8;
        if (uVar8 >> 0x3e == 0) {
          uVar25 = *(ulong *)(uVar15 + 0x10);
          if (uVar25 == 0) goto LAB_1033d17a0;
          if (uVar21 < uVar25) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1033d1b38);
            (*pcVar2)();
          }
          func_0x000107c6140c(uVar18 + lVar1 * 8 + 0x20,uVar15 + 0x20,uVar25,uVar5);
LAB_1033d1a04:
          func_0x000107c6142c(uVar8);
          if ((long)uVar25 < (long)uVar20) goto LAB_1033d1adc;
          if (0 < (long)uVar25) {
            if (SCARRY8(*(long *)(uVar18 + 0x10),uVar25)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1033d1ae4);
              (*pcVar2)();
            }
            *(ulong *)(uVar18 + 0x10) = *(long *)(uVar18 + 0x10) + uVar25;
          }
        }
        else {
          uVar25 = uVar15;
          if ((uVar8 & 0x8000000000000000) != 0) {
            uVar25 = uVar8;
          }
          uVar15 = uVar25;
          func_0x000107c60480();
          if (uVar15 != 0) {
            func_0x000107c60480();
            if ((long)uVar21 < (long)uVar25) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1033d1b3c);
              (*pcVar2)();
            }
            if ((long)uVar15 < 1) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1033d1b40);
              (*pcVar2)();
            }
            lVar1 = uVar18 + lVar1 * 8;
            puVar22 = (undefined8 *)(lVar1 + 0x20);
            if ((uVar8 & 0xc000000000000001) == 0) {
              uVar12 = *(undefined8 *)(uVar8 + 0x20);
              *puVar22 = uVar12;
              lVar17 = uVar15 - 1;
              if (lVar17 != 0) {
                uVar13 = uVar12;
                puVar22 = (undefined8 *)(lVar1 + 0x28);
                puVar24 = (undefined8 *)(uVar8 + 0x28);
                do {
                  uVar12 = *puVar24;
                  *puVar22 = uVar12;
                  func_0x000107c61174(uVar13);
                  lVar17 = lVar17 + -1;
                  uVar13 = uVar12;
                  puVar22 = puVar22 + 1;
                  puVar24 = puVar24 + 1;
                } while (lVar17 != 0);
              }
              func_0x000107c61174(uVar12);
            }
            else {
              uVar21 = 0;
              do {
                uVar11 = uVar21;
                func_0x000100f040d0(uVar21,uVar8);
                puVar22[uVar21] = uVar11;
                uVar21 = uVar21 + 1;
              } while (uVar15 != uVar21);
            }
            goto LAB_1033d1a04;
          }
LAB_1033d17a0:
          func_0x000107c6142c(uVar8);
          if (0 < (long)uVar20) {
LAB_1033d1adc:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1033d1ae0);
            (*pcVar2)();
          }
        }
      }
      else {
LAB_1033d1824:
        uVar8 = uVar7;
        func_0x000107c61174();
        puVar10 = puVar14;
        func_0x000107c61550();
        if ((((int)puVar10 == 0) || ((long)puVar14 < 0)) ||
           (puVar10 = puVar14, ((ulong)puVar14 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar14 >> 0x3e == 0) {
            puVar9 = *(undefined **)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar9 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar14) {
              puVar9 = puVar14;
            }
            func_0x000107c60480(puVar9);
          }
          puVar10 = (undefined *)0x0;
          func_0x0001023b5804(0,puVar9 + 1,1,puVar14);
        }
        uVar15 = (ulong)puVar10 & 0xffffffffffffff8;
        uVar20 = *(ulong *)(uVar15 + 0x10);
        puVar14 = puVar10;
        if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar20) {
          puVar14 = (undefined *)(ulong)(1 < *(ulong *)(uVar15 + 0x18));
          func_0x0001023b5804(puVar14,uVar20 + 1,1,puVar10);
          uVar15 = (ulong)puVar14 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar15 + 0x10) = uVar20 + 1;
        *(ulong *)(uVar15 + uVar20 * 8 + 0x20) = uVar8;
      }
      func_0x000107c61170(uVar7);
    } while (uVar23 != uVar19);
  }
  func_0x000107c6142c(uVar6);
  return puVar14;
}



/* Entry: 1033d1b40; end: 1033d1b9b;  */

/* WARNING: Possible PIC construction at 0x0001033d1b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033d1b8c) */

void FUN_1033d1b40(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c4aba4(param_2);
  func_0x000107c61180();
  func_0x000107c3ab28(param_1);
  func_0x000107c61180();
  func_0x000107c500d4(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1033d1b9c; end: 1033d1bdb; -[_TtC17LensLeaderboardUI30LeaderboardPanelViewController handleBackgroundTap] */

void FUN_1033d1b9c(ulong *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 0x108);
  func_0x000107c61174();
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1033d1bdc; end: 1033d20ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1033d1bdc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x20;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c453e4();
  func_0x000107c5a050();
  if (lRam0000000112f62c28 != -1) {
    func_0x000107c61568(0x112f62c28,0x1033cce88);
  }
  func_0x000107c52b50(puVar1);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c539d4(0x4030000000000000);
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126b08d8;
  func_0x000107c61168(PTR_PTR_1126b08d8);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar1);
  func_0x000107c5af88(puVar3);
  func_0x000107c61180();
  func_0x000100b74f58(0x4024000000000000,0x3fbeb851eb851eb8,0,0x3ff0000000000000,puVar2,puVar1,
                      puVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a050();
  func_0x000107c52b50(puVar2);
  puVar3 = puVar2;
  func_0x000107c4aba4(puVar2);
  func_0x000107c61180();
  func_0x000107c539d4(0x4030000000000000);
  func_0x000107c61170(puVar3);
  puVar3 = puVar2;
  func_0x000107c4aba4(puVar2);
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(puVar3);
  func_0x0001033d05a8();
  func_0x000107c3d89c(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c3d89c(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar4 = 0x112d360b8;
  FUN_1033d23b4(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 0x11;
  *(undefined8 *)(lVar4 + 0x10) = 8;
  puVar5 = puVar2;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar6 = puVar1;
  func_0x000107c5cbe4(puVar1);
  func_0x000107c61180();
  puVar7 = puVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  *(undefined **)(lVar4 + 0x20) = puVar7;
  puVar5 = puVar2;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar6 = puVar1;
  func_0x000107c3ec1c(puVar1);
  func_0x000107c61180();
  puVar7 = puVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  *(undefined **)(lVar4 + 0x28) = puVar7;
  puVar5 = puVar2;
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar6 = puVar1;
  func_0x000107c4acb0(puVar1);
  func_0x000107c61180();
  puVar7 = puVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  *(undefined **)(lVar4 + 0x30) = puVar7;
  puVar5 = puVar2;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar6 = puVar1;
  func_0x000107c5ce8c(puVar1);
  func_0x000107c61180();
  puVar7 = puVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  *(undefined **)(lVar4 + 0x38) = puVar7;
  lVar10 = _DAT_112f62e40;
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f62e40);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar5 = puVar2;
  func_0x000107c5cbe4(puVar2);
  func_0x000107c61180();
  uVar9 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar5);
  *(undefined8 *)(lVar4 + 0x40) = uVar9;
  uVar8 = *(undefined8 *)(unaff_x20 + lVar10);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar5 = puVar2;
  func_0x000107c3ec1c(puVar2);
  func_0x000107c61180();
  uVar9 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar5);
  *(undefined8 *)(lVar4 + 0x48) = uVar9;
  uVar8 = *(undefined8 *)(unaff_x20 + lVar10);
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar5 = puVar2;
  func_0x000107c4acb0(puVar2);
  func_0x000107c61180();
  uVar9 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar5);
  *(undefined8 *)(lVar4 + 0x50) = uVar9;
  uVar8 = *(undefined8 *)(unaff_x20 + lVar10);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar5 = puVar2;
  func_0x000107c5ce8c(puVar2);
  func_0x000107c61180();
  uVar9 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar5);
  *(undefined8 *)(lVar4 + 0x58) = uVar9;
  uVar9 = 0;
  FUN_1033d2c3c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar10 = lVar4;
  func_0x000107c5fc48(lVar4,uVar9);
  func_0x000107c61574(lVar4);
  func_0x000107c3d048(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(lVar10);
  return puVar1;
}



/* Entry: 1033d20f0; end: 1033d21c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1033d20f0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffffc0;
  *(undefined8 *)(unaff_x20 + _DAT_112f62e38) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f62e40) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f62e48) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f62e50) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112f62e30,0);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c6142c();
  }
  FUN_1033d0e1c();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_initWithNibName_bundle__1125e9850,param_1,
                      param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1033d21c4; end: 1033d22d3; -[_TtC17LensLeaderboardUI30LeaderboardPanelViewController initWithNibName:bundle:] */

void FUN_1033d21c4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_4);
  FUN_1033d20f0(param_3,param_2,param_4);
  return;
}



/* Entry: 1033d22d4; end: 1033d22fb; -[_TtC17LensLeaderboardUI30LeaderboardPanelViewController initWithCoder:] */

void FUN_1033d22d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x0001033d2224();
  return;
}



/* Entry: 1033d22fc; end: 1033d232b;  */

void FUN_1033d22fc(void)

{
  FUN_1033d0e1c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033d232c; end: 1033d2393; -[_TtC17LensLeaderboardUI30LeaderboardPanelViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d232c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f62e38));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f62e40));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f62e48));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f62e50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112f62e30);
  return;
}



/* Entry: 1033d2394; end: 1033d23b3;  */

void FUN_1033d2394(void)

{
  func_0x000107c61168(&PTR_PTR_1128d6e40);
  return;
}



/* Entry: 1033d23b4; end: 1033d242b;  */

void FUN_1033d23b4(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1033d2c3c(0,param_1,param_2);
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



/* Entry: 1033d242c; end: 1033d2c33;  */

undefined * FUN_1033d242c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126b0c40;
  func_0x000107c61168(PTR_PTR_1126b0c40);
  if (lRam0000000112f62c58 != -1) {
    func_0x000107c61568(0x112f62c58,FUN_1033ccdb8);
  }
  func_0x000107c45098(0x4034000000000000,0x4034000000000000);
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c46db4();
  func_0x000107c61170(puVar2);
  func_0x000107c61174();
  func_0x000107c53840();
  func_0x000107c5a050(puVar3);
  puVar4 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar5 = 0x6f6272656461654c;
  func_0x000107c5fadc(0x6f6272656461654c,0xeb00000000647261);
  func_0x000107c59c6c(puVar4);
  func_0x000107c61170(uVar5);
  func_0x00010052bbec();
  func_0x000107c61180();
  uVar9 = uVar5;
  func_0x000107c43780();
  func_0x000107c61180();
  func_0x000107c615e8(uVar5);
  func_0x000107c54adc(puVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c59c78(puVar4);
  func_0x000107c61174();
  uVar9 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f148c30);
  func_0x000107c520f4(puVar4);
  func_0x000107c61170(uVar9);
  lVar6 = 0x112d360b0;
  FUN_1033d23b4(0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d36e80,&UNK_10d904c70);
  lVar7 = lVar6;
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x18) = 5;
  *(undefined8 *)(lVar7 + 0x10) = 2;
  *(undefined **)(lVar7 + 0x20) = puVar3;
  *(undefined **)(lVar7 + 0x28) = puVar4;
  puVar8 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  uVar9 = 0;
  FUN_1033d2c3c(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c61174();
  lVar10 = lVar7;
  func_0x000107c5fc48(lVar7,uVar9);
  func_0x000107c61574(lVar7);
  func_0x000107c45784();
  func_0x000107c61170(lVar10);
  func_0x000107c52b2c(puVar8);
  func_0x000107c59594(0x4018000000000000,puVar8);
  func_0x000107c52610(puVar8);
  func_0x000107c613fc(lVar6,((ulong)*(uint *)(lVar6 + 0x30) + 7 & 0x1fffffff8) + 0x10,
                      *(ushort *)(lVar6 + 0x34) | 7);
  *(undefined8 *)(lVar6 + 0x18) = 5;
  *(undefined8 *)(lVar6 + 0x10) = 2;
  *(undefined **)(lVar6 + 0x20) = puVar8;
  func_0x000107c61174();
  puVar2 = puVar8;
  FUN_1033d0630();
  *(undefined **)(lVar6 + 0x28) = puVar2;
  puVar11 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  lVar7 = lVar6;
  func_0x000107c5fc48(lVar6,uVar9);
  func_0x000107c61574(lVar6);
  func_0x000107c45784();
  func_0x000107c61170(lVar7);
  func_0x000107c52b2c(puVar11);
  func_0x000107c59594(0x4000000000000000,puVar11);
  func_0x000107c52610(puVar11);
  func_0x000107c61174();
  func_0x000107c5a050();
  puVar12 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x000107c61168();
  func_0x000107c3ee98();
  func_0x000107c61180();
  uVar9 = 0x6b72616d78;
  func_0x000107c5fadc(0x6b72616d78,0xe500000000000000);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c5c604();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c55260(puVar12);
  func_0x000107c61170(puVar2);
  func_0x000107c59e10(puVar12);
  func_0x000107c61174();
  func_0x000107c5a050();
  func_0x000107c61174();
  uVar9 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f148c50);
  func_0x000107c520fc(puVar12);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(uVar9);
  FUN_1033d2c3c(0,0x112f62e28,&PTR__OBJC_CLASS___UIAction_1126d0d40);
  puVar2 = &UNK_11064dba8;
  func_0x000107c613fc(&UNK_11064dba8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  uVar9 = 0;
  func_0x000107c6012c(0,0xe000000000000000,0,0,0,0,0,0,FUN_1033d2c34,puVar2);
  func_0x000107c3d59c(puVar12);
  func_0x000107c61170(uVar9);
  func_0x000107c3d89c(puVar1);
  func_0x000107c3d89c(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar6 = 0x112d360b8;
  FUN_1033d23b4(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x18) = 0xf;
  *(undefined8 *)(lVar6 + 0x10) = 7;
  puVar13 = puVar3;
  func_0x000107c5e308();
  func_0x000107c61180();
  puVar14 = puVar13;
  func_0x000107c40290(0x4034000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar13);
  *(undefined **)(lVar6 + 0x20) = puVar14;
  puVar13 = puVar3;
  func_0x000107c44d9c();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar14 = puVar13;
  func_0x000107c40290(0x4034000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar13);
  *(undefined **)(lVar6 + 0x28) = puVar14;
  puVar13 = puVar11;
  func_0x000107c3f75c();
  func_0x000107c61180();
  puVar14 = puVar1;
  func_0x000107c3f75c(puVar1);
  func_0x000107c61180();
  puVar15 = puVar13;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar14);
  *(undefined **)(lVar6 + 0x30) = puVar15;
  puVar13 = puVar11;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar14 = puVar1;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar15 = puVar13;
  func_0x000107c40284(0x402c000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar14);
  *(undefined **)(lVar6 + 0x38) = puVar15;
  puVar13 = puVar11;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar14 = puVar1;
  func_0x000107c3ec1c(puVar1);
  func_0x000107c61180();
  puVar15 = puVar13;
  func_0x000107c40284(0xc02c000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar14);
  *(undefined **)(lVar6 + 0x40) = puVar15;
  puVar13 = puVar12;
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar14 = puVar1;
  func_0x000107c4acb0(puVar1);
  func_0x000107c61180();
  puVar15 = puVar13;
  func_0x000107c40284(0x4030000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar14);
  *(undefined **)(lVar6 + 0x48) = puVar15;
  puVar13 = puVar12;
  func_0x000107c3f764();
  func_0x000107c61180();
  func_0x000107c61170(puVar12);
  puVar14 = puVar11;
  func_0x000107c3f764(puVar11);
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  puVar15 = puVar13;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar14);
  *(undefined **)(lVar6 + 0x50) = puVar15;
  uVar9 = 0;
  FUN_1033d2c3c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar7 = lVar6;
  func_0x000107c5fc48(lVar6,uVar9);
  func_0x000107c61574(lVar6);
  func_0x000107c3d048(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(lVar7);
  return puVar1;
}



/* Entry: 1033d2c34; end: 1033d2c3b;  */

void FUN_1033d2c34(void)

{
  ulong *puVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  puVar1 = (ulong *)(unaff_x20 + 0x10);
  func_0x000107c61618();
  if (puVar1 != (ulong *)0x0) {
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar1) + 0x108))();
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 1033d2c3c; end: 1033d2c7b;  */

void FUN_1033d2c3c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1033d2c7c; end: 1033d2c83;  */

/* WARNING: Possible PIC construction at 0x0001033d1b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033d1b8c) */

void FUN_1033d2c7c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4aba4(uVar1);
  func_0x000107c61180();
  func_0x000107c3ab28(param_1);
  func_0x000107c61180();
  func_0x000107c500d4(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1033d2c84; end: 1033d2ca3;  */

void FUN_1033d2c84(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1033d2ca4; end: 1033d2cbf;  */

void FUN_1033d2ca4(long param_1,long param_2)

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



/* Entry: 1033d2cc0; end: 1033d2f27;  */

void FUN_1033d2cc0(void)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long extraout_x8;
  long unaff_x20;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar3 = 0;
  func_0x000107c5f83c();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)&puStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  func_0x000107c6142c(uVar4);
  uVar5 = *(ulong *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  func_0x000107c61170();
  if (*(char *)(unaff_x20 + 0xa8) != '\x01') {
    uVar12 = *(ulong *)(unaff_x20 + 0xa0);
    *(undefined8 *)(unaff_x20 + 0xa0) = 0;
    *(undefined1 *)(unaff_x20 + 0xa8) = 1;
    func_0x000107c5f830(lVar10);
    func_0x000107c5f82c();
    (**(code **)(lVar11 + 8))(lVar10,lVar3);
    if (uVar5 < uVar12) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1033d2f28);
      (*pcVar2)();
    }
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if (lVar3 != 0) {
      lVar10 = *(long *)(unaff_x20 + 0x28);
      func_0x000107c614f0(lVar3);
      (**(code **)(lVar10 + 0x10))((uVar5 - uVar12) / 1000,lVar3,lVar10);
    }
  }
  lVar3 = unaff_x20 + 0x68;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c61604(unaff_x20 + 0x68,0);
    func_0x000107c5e37c(lVar3);
    puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar7 = &UNK_11064dc48;
    func_0x000107c613fc(&UNK_11064dc48,0x18,7);
    *(long *)(puVar7 + 0x10) = lVar3;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_60 = FUN_1033d4e74;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_11064dc60;
    ppuVar8 = &puStack_80;
    puStack_58 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar7 = puStack_58;
    func_0x000107c61174();
    func_0x000107c61574(puVar7);
    puVar7 = &UNK_11064dc98;
    func_0x000107c613fc(&UNK_11064dc98,0x18,7);
    *(long *)(puVar7 + 0x10) = lVar3;
    pcStack_60 = FUN_1033d4ee0;
    puStack_80 = puVar1;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_100288f10;
    puStack_68 = &UNK_11064dcb0;
    ppuVar9 = &puStack_80;
    puStack_58 = puVar7;
    func_0x000107c60bc4(ppuVar9);
    puVar7 = puStack_58;
    func_0x000107c61174(lVar3);
    func_0x000107c61574(puVar7);
    func_0x000107c3dcd0(0x3fc999999999999a,puVar6);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c60bd0(ppuVar8);
    puStack_80 = (undefined *)((ulong)puStack_80 & 0xffffffffffffff00);
    func_0x0001007d6d78(&puStack_80);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 1033d2f28; end: 1033d34e3;  */

void FUN_1033d2f28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined2 uStack_188;
  undefined6 uStack_186;
  undefined2 uStack_180;
  undefined8 uStack_17e;
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
  undefined2 uStack_108;
  undefined6 uStack_106;
  undefined2 uStack_100;
  undefined8 uStack_fe;
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
  undefined8 uStack_90;
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined2 uStack_80;
  undefined8 uStack_7e;
  
  puVar2 = unaff_x20 + 0xd;
  uVar9 = *unaff_x20;
  func_0x000107c61618();
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2;
    func_0x000107c4e360();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    if (puVar3 != (undefined8 *)0x0) {
      func_0x000107c61170(puVar3);
      func_0x0001007d6c6c(1,0xd000000000000032,0x800000010f148cc0,uVar9,&PTR_DAT_11064dd28);
      return;
    }
  }
  uVar4 = unaff_x20[0xf];
  unaff_x20[0xe] = param_1;
  unaff_x20[0xf] = param_2;
  func_0x000107c6142c(uVar4);
  uVar4 = unaff_x20[0x10];
  unaff_x20[0x10] = param_4;
  func_0x000107c61434(param_2);
  func_0x000107c61174(param_4);
  func_0x000107c61170(uVar4);
  uVar4 = unaff_x20[2];
  lVar11 = unaff_x20[3];
  func_0x000107c614f0(uVar4);
  (**(code **)(lVar11 + 8))(&uStack_1f0,param_1,param_2,uVar4,lVar11);
  uStack_128 = uStack_1a8;
  uStack_130 = uStack_1b0;
  uStack_118 = uStack_198;
  uStack_120 = uStack_1a0;
  uStack_108 = uStack_188;
  uStack_110 = uStack_190;
  uStack_fe = uStack_17e;
  uStack_106 = uStack_186;
  uStack_100 = uStack_180;
  uStack_168 = uStack_1e8;
  uStack_170 = uStack_1f0;
  uStack_158 = uStack_1d8;
  uStack_160 = uStack_1e0;
  uStack_148 = uStack_1c8;
  uStack_150 = uStack_1d0;
  uStack_138 = uStack_1b8;
  uStack_140 = uStack_1c0;
  iVar1 = (int)&uStack_170;
  func_0x0001033d4ee8();
  if (iVar1 == 1) {
    uStack_f0 = 0;
    uStack_e8 = 0xe000000000000000;
    func_0x000107c602fc(0x16);
    func_0x000107c6142c(uStack_e8);
    uStack_f0 = 0xd000000000000014;
    uStack_e8 = 0x800000010f148c70;
    func_0x000107c5fb78(param_1,param_2);
    uVar5 = 2;
    uVar4 = uStack_f0;
    uVar12 = uStack_e8;
  }
  else {
    uStack_a8 = uStack_128;
    uStack_b0 = uStack_130;
    uStack_98 = uStack_118;
    uStack_a0 = uStack_120;
    uStack_88 = uStack_108;
    uStack_90 = uStack_110;
    uStack_7e = uStack_fe;
    uStack_86 = uStack_106;
    uStack_80 = uStack_100;
    uStack_e8 = uStack_168;
    uStack_f0 = uStack_170;
    uStack_d8 = uStack_158;
    uStack_e0 = uStack_160;
    uStack_c8 = uStack_148;
    uStack_d0 = uStack_150;
    uStack_b8 = uStack_138;
    uStack_c0 = uStack_140;
    (**(code **)(lVar11 + 0x18))(param_1,param_2,uVar4,lVar11);
    lVar11 = unaff_x20[4];
    if (lVar11 != 0) {
      lVar13 = unaff_x20[5];
      lVar6 = lVar11;
      func_0x000107c614f0(lVar11);
      puVar7 = &UNK_11064dce8;
      func_0x000107c613fc(&UNK_11064dce8,0x18,7);
      func_0x000107c61644(puVar7 + 0x10);
      puVar8 = &UNK_11064dd10;
      func_0x000107c613fc(&UNK_11064dd10,0xb8,7);
      *(undefined8 *)(puVar8 + 0x70) = uStack_a8;
      *(undefined8 *)(puVar8 + 0x68) = uStack_b0;
      *(undefined8 *)(puVar8 + 0x80) = uStack_98;
      *(undefined8 *)(puVar8 + 0x78) = uStack_a0;
      *(ulong *)(puVar8 + 0x90) = CONCAT62(uStack_86,uStack_88);
      *(undefined8 *)(puVar8 + 0x88) = uStack_90;
      *(undefined8 *)(puVar8 + 0x9a) = uStack_7e;
      *(ulong *)(puVar8 + 0x92) = CONCAT26(uStack_80,uStack_86);
      *(undefined8 *)(puVar8 + 0x30) = uStack_e8;
      *(undefined8 *)(puVar8 + 0x28) = uStack_f0;
      *(undefined8 *)(puVar8 + 0x40) = uStack_d8;
      *(undefined8 *)(puVar8 + 0x38) = uStack_e0;
      *(undefined8 *)(puVar8 + 0x50) = uStack_c8;
      *(undefined8 *)(puVar8 + 0x48) = uStack_d0;
      *(undefined **)(puVar8 + 0x10) = puVar7;
      *(undefined8 *)(puVar8 + 0x18) = param_1;
      *(undefined8 *)(puVar8 + 0x20) = param_2;
      *(undefined8 *)(puVar8 + 0x60) = uStack_b8;
      *(undefined8 *)(puVar8 + 0x58) = uStack_c0;
      *(undefined8 *)(puVar8 + 0xa8) = param_3;
      *(undefined8 *)(puVar8 + 0xb0) = uVar9;
      pcVar10 = *(code **)(lVar13 + 0x18);
      func_0x000107c61434(param_2);
      func_0x000107c615f0(lVar11);
      func_0x000107c6157c(puVar7);
      func_0x000107c61174(param_3);
      (*pcVar10)(0x1033d4f00,puVar8,lVar6,lVar13);
      func_0x000107c615e8(lVar11);
      func_0x000107c61574(puVar7);
      func_0x000107c61574(puVar8);
      return;
    }
    puVar2 = &uStack_f0;
    FUN_1033d34e4(puVar2,param_1,param_2);
    FUN_1033d5204(&uStack_1f0,0x112f62ea8,&UNK_10dbbf250);
    FUN_1033d3678(puVar2,param_3,1);
    func_0x000107c61170(puVar2);
    uStack_200 = CONCAT71(uStack_200._1_7_,1);
    func_0x0001007d6d78(&uStack_200);
    uStack_200 = 0;
    uStack_1f8 = 0xe000000000000000;
    func_0x000107c602fc(0x23);
    func_0x000107c6142c(uStack_1f8);
    uStack_200 = 0xd000000000000021;
    uStack_1f8 = 0x800000010f148c90;
    func_0x000107c5fb78(param_1,param_2);
    uVar5 = 1;
    uVar4 = uStack_200;
    uVar12 = uStack_1f8;
  }
  func_0x0001007d6c6c(uVar5,uVar4,uVar12,uVar9,&PTR_DAT_11064dd28);
  func_0x000107c6142c(uVar12);
  return;
}



/* Entry: 1033d34e4; end: 1033d3677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d34e4(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [16];
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  undefined7 uStack_47;
  
  uStack_50 = (undefined1)unaff_x26;
  uStack_4f = (undefined7)((ulong)unaff_x26 >> 8);
  uStack_48 = (undefined1)unaff_x25;
  uStack_47 = (undefined7)((ulong)unaff_x25 >> 8);
  if ((*param_1 & 1) != 0) {
    uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
    lVar5 = *(long *)(unaff_x20 + 0x18);
    func_0x000107c614f0(uVar9);
    (**(code **)(lVar5 + 0x10))(param_2,param_3,uVar9,lVar5);
    uVar8 = param_2;
    FUN_1033d51bc();
    func_0x000104884898();
    func_0x000107c61574(param_2);
    puVar7 = &UNK_11064dce8;
    func_0x000107c613fc(&UNK_11064dce8,0x18,7);
    func_0x000107c61644(puVar7 + 0x10);
    uVar2 = 0;
    FUN_1033d7d6c(0);
    uVar9 = 0x1033d5310;
    func_0x0001000d5158(0x1033d5310,puVar7,uVar2);
    func_0x000107c61574(uVar8);
    func_0x000107c61574(puVar7);
    FUN_1033d4970(auStack_d0,param_1);
    func_0x000107c613fc(uVar2,0x121,7);
    puVar3 = auStack_d0;
    FUN_1033d7778();
    func_0x000107c61428(puVar3 + 0x90,auStack_e8,1,0);
    *(undefined ***)(puVar3 + 0x98) = &PTR_DAT_11064dd70;
    func_0x000107c61604(puVar3 + 0x90);
    uVar8 = *(undefined8 *)(unaff_x20 + 0x58);
    FUN_1033d72e0(0);
    func_0x000107c610f8();
    func_0x000107c6157c(uVar8);
    FUN_1033d584c(puVar3,uVar9,uVar8);
    return;
  }
  lVar4 = 0;
  func_0x000107c5f83c();
  lVar11 = *(long *)(lVar4 + -8);
  lVar5 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)&lStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f830(lVar10);
  func_0x000107c5f82c();
  (**(code **)(lVar11 + 8))(lVar10,lVar4);
  *(long *)(unaff_x20 + 0xa0) = lVar5;
  *(undefined1 *)(unaff_x20 + 0xa8) = 0;
  func_0x0001033d4054(&uStack_b0,param_1);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x58);
  puVar7 = &UNK_11064dce8;
  puVar6 = puVar7;
  func_0x000107c613fc(&UNK_11064dce8,0x18,7);
  func_0x000107c61644(puVar6 + 0x10,unaff_x20);
  func_0x000107c613fc(&UNK_11064dce8,0x18,7);
  func_0x000107c61644(puVar7 + 0x10,unaff_x20);
  lVar4 = 0;
  FUN_1033d5668();
  lVar5 = lVar4;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar5 + _DAT_112f62fb0);
  puVar1[1] = uStack_a8;
  *puVar1 = uStack_b0;
  puVar1[3] = uStack_98;
  puVar1[2] = uStack_a0;
  *(ulong *)((long)puVar1 + 0x61) = CONCAT17(uStack_48,uStack_4f);
  *(ulong *)((long)puVar1 + 0x59) = CONCAT17(uStack_50,uStack_57);
  puVar1[9] = uStack_68;
  puVar1[8] = uStack_70;
  puVar1[0xb] = CONCAT71(uStack_57,uStack_58);
  puVar1[10] = uStack_60;
  puVar1[5] = uStack_88;
  puVar1[4] = uStack_90;
  puVar1[7] = uStack_78;
  puVar1[6] = uStack_80;
  *(undefined8 *)(lVar5 + _DAT_112f62fb8) = uVar9;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112f62fc0);
  *puVar1 = FUN_1033d52a4;
  puVar1[1] = puVar6;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112f62fc8);
  *puVar1 = 0x1033d52c4;
  puVar1[1] = puVar7;
  puVar7 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_c0 = lVar5;
  lStack_b8 = lVar4;
  func_0x000107c6157c(uVar9);
  func_0x000107c61154(&lStack_c0,puVar7,0,0);
  return;
}



/* Entry: 1033d3678; end: 1033d3ebf;  */

void FUN_1033d3678(long param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar8 = &puStack_90;
  func_0x000107c3d614(param_2,param_2,param_1);
  lVar2 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d3a54);
    (*pcVar1)();
  }
  func_0x000107c5a050();
  uVar10 = 0;
  if ((param_3 & 1) == 0) {
    uVar10 = 0x3ff0000000000000;
  }
  func_0x000107c526c0(uVar10,lVar2);
  lVar3 = param_2;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d3a58);
    (*pcVar1)();
  }
  func_0x000107c3d89c();
  func_0x000107c61170();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 9;
  *(undefined8 *)(lVar3 + 0x10) = 4;
  lVar4 = lVar2;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar9 = param_2;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d3a5c);
    (*pcVar1)();
  }
  lVar5 = lVar9;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  lVar9 = lVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar5);
  *(long *)(lVar3 + 0x20) = lVar9;
  lVar4 = lVar2;
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar9 = param_2;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d3a60);
    (*pcVar1)();
  }
  lVar5 = lVar9;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  lVar9 = lVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar5);
  *(long *)(lVar3 + 0x28) = lVar9;
  lVar4 = lVar2;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar9 = param_2;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d3a64);
    (*pcVar1)();
  }
  lVar5 = lVar9;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  lVar9 = lVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar5);
  *(long *)(lVar3 + 0x30) = lVar9;
  lVar4 = lVar2;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar9 = *(long *)(unaff_x20 + 0x80);
  lVar5 = lVar9;
  if (lVar9 == 0) {
    func_0x000107c5de64();
    func_0x000107c61180();
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d3a68);
      (*pcVar1)();
    }
    lVar9 = param_2;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    lVar5 = 0;
  }
  puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  func_0x000107c61174(lVar5);
  lVar5 = lVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar9);
  *(long *)(lVar3 + 0x38) = lVar5;
  uVar10 = 0;
  func_0x000100847984(0);
  lVar4 = lVar3;
  func_0x000107c5fc48(lVar3,uVar10);
  func_0x000107c61574(lVar3);
  func_0x000107c3d048(puVar6);
  func_0x000107c61170(lVar4);
  func_0x000107c41c30(param_1);
  if ((param_3 & 1) == 0) {
    func_0x000107c61170(lVar2);
  }
  else {
    puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar6 = &UNK_11064dda0;
    func_0x000107c613fc(&UNK_11064dda0,0x18,7);
    *(long *)(puVar6 + 0x10) = lVar2;
    pcStack_70 = FUN_1033d52e4;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_11064ddb8;
    puStack_68 = puVar6;
    func_0x000107c60bc4(&puStack_90);
    puVar6 = puStack_68;
    func_0x000107c61174(lVar2);
    func_0x000107c61574(puVar6);
    func_0x000107c3dccc(0x3fc999999999999a,puVar7);
    func_0x000107c61170(lVar2);
    func_0x000107c60bd0(ppuVar8);
  }
  func_0x000107c61604(unaff_x20 + 0x68,param_1);
  return;
}



/* Entry: 1033d3ec0; end: 1033d41c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d3ec0(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  lVar2 = 0;
  func_0x000107c5f83c();
  lVar8 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)&lStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f830(lVar7);
  func_0x000107c5f82c();
  (**(code **)(lVar8 + 8))(lVar7,lVar2);
  *(long *)(unaff_x20 + 0xa0) = lVar3;
  *(undefined1 *)(unaff_x20 + 0xa8) = 0;
  func_0x0001033d4054(&uStack_b0,param_1);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x58);
  puVar5 = &UNK_11064dce8;
  puVar4 = puVar5;
  func_0x000107c613fc(&UNK_11064dce8,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  func_0x000107c613fc(&UNK_11064dce8,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  lVar2 = 0;
  FUN_1033d5668();
  lVar3 = lVar2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar3 + _DAT_112f62fb0);
  puVar1[1] = uStack_a8;
  *puVar1 = uStack_b0;
  puVar1[3] = uStack_98;
  puVar1[2] = uStack_a0;
  *(undefined8 *)((long)puVar1 + 0x61) = uStack_4f;
  *(ulong *)((long)puVar1 + 0x59) = CONCAT17(uStack_50,uStack_57);
  puVar1[9] = uStack_68;
  puVar1[8] = uStack_70;
  puVar1[0xb] = CONCAT71(uStack_57,uStack_58);
  puVar1[10] = uStack_60;
  puVar1[5] = uStack_88;
  puVar1[4] = uStack_90;
  puVar1[7] = uStack_78;
  puVar1[6] = uStack_80;
  *(undefined8 *)(lVar3 + _DAT_112f62fb8) = uVar6;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112f62fc0);
  *puVar1 = FUN_1033d52a4;
  puVar1[1] = puVar4;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112f62fc8);
  *puVar1 = 0x1033d52c4;
  puVar1[1] = puVar5;
  puVar5 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_c0 = lVar3;
  lStack_b8 = lVar2;
  func_0x000107c6157c(uVar6);
  func_0x000107c61154(&lStack_c0,puVar5,0,0);
  return;
}



/* Entry: 1033d41c4; end: 1033d4587;  */

void FUN_1033d41c4(void)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined1 auStack_290 [8];
  undefined1 auStack_288 [24];
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_1fe;
  undefined1 auStack_1f0 [128];
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
  undefined8 uStack_fe;
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
  undefined8 uStack_90;
  undefined8 uStack_7e;
  
  uVar3 = 0;
  func_0x000107c5f83c();
  lVar10 = *(long *)(uVar3 - 8);
  uVar4 = uVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  if (*(char *)(unaff_x20 + 0xa8) != '\x01') {
    uVar12 = *(ulong *)(unaff_x20 + 0xa0);
    *(undefined8 *)(unaff_x20 + 0xa0) = 0;
    *(undefined1 *)(unaff_x20 + 0xa8) = 1;
    func_0x000107c5f830(auStack_290 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5f82c();
    (**(code **)(lVar10 + 8))(auStack_290 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar3);
    if (uVar4 < uVar12) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d4584);
      (*pcVar1)();
    }
    lVar10 = *(long *)(unaff_x20 + 0x20);
    if (lVar10 != 0) {
      lVar9 = *(long *)(unaff_x20 + 0x28);
      func_0x000107c614f0(lVar10);
      (**(code **)(lVar9 + 8))((uVar4 - uVar12) / 1000,lVar10,lVar9);
    }
    lVar10 = *(long *)(unaff_x20 + 0x78);
    if (lVar10 != 0) {
      uVar11 = *(undefined8 *)(unaff_x20 + 0x70);
      lVar9 = unaff_x20 + 0x68;
      func_0x000107c61618();
      if (lVar9 != 0) {
        func_0x000107c61434(lVar10);
        lVar5 = lVar9;
        func_0x000107c4e360();
        func_0x000107c61180();
        func_0x000107c61170(lVar9);
        if (lVar5 != 0) {
          uVar13 = *(undefined8 *)(unaff_x20 + 0x10);
          lVar9 = *(long *)(unaff_x20 + 0x18);
          func_0x000107c614f0(uVar13);
          (**(code **)(lVar9 + 8))(&uStack_270,uVar11,lVar10,uVar13,lVar9);
          uStack_128 = uStack_228;
          uStack_130 = uStack_230;
          uStack_118 = uStack_218;
          uStack_120 = uStack_220;
          uStack_110 = uStack_210;
          uStack_fe = uStack_1fe;
          uStack_168 = uStack_268;
          uStack_170 = uStack_270;
          uStack_158 = uStack_258;
          uStack_160 = uStack_260;
          uStack_148 = uStack_248;
          uStack_150 = uStack_250;
          uStack_138 = uStack_238;
          uStack_140 = uStack_240;
          iVar2 = (int)&uStack_170;
          func_0x0001033d4ee8();
          if (iVar2 != 1) {
            uStack_a8 = uStack_128;
            uStack_b0 = uStack_130;
            uStack_98 = uStack_118;
            uStack_a0 = uStack_120;
            uStack_90 = uStack_110;
            uStack_7e = uStack_fe;
            uStack_e8 = uStack_168;
            uStack_f0 = uStack_170;
            uStack_d8 = uStack_158;
            uStack_e0 = uStack_160;
            uStack_c8 = uStack_148;
            uStack_d0 = uStack_150;
            uStack_b8 = uStack_138;
            uStack_c0 = uStack_140;
            (**(code **)(lVar9 + 0x18))(uVar11,lVar10,uVar13,lVar9);
            (**(code **)(lVar9 + 0x10))(uVar11,lVar10,uVar13,lVar9);
            uVar13 = uVar11;
            FUN_1033d51bc();
            func_0x000104884898();
            func_0x000107c61574(uVar11);
            puVar6 = &UNK_11064dce8;
            func_0x000107c613fc(&UNK_11064dce8,0x18,7);
            func_0x000107c61644(puVar6 + 0x10);
            uVar7 = 0;
            FUN_1033d7d6c(0);
            uVar11 = 0x1033d530c;
            func_0x0001000d5158(0x1033d530c,puVar6,uVar7);
            func_0x000107c61574(uVar13);
            func_0x000107c61574(puVar6);
            FUN_1033d4970(auStack_1f0,&uStack_f0);
            func_0x000107c613fc(uVar7,0x121,7);
            puVar8 = auStack_1f0;
            FUN_1033d7778();
            func_0x000107c61428(puVar8 + 0x90,auStack_288,1,0);
            *(undefined ***)(puVar8 + 0x98) = &PTR_DAT_11064dd70;
            func_0x000107c61604(puVar8 + 0x90);
            uVar13 = *(undefined8 *)(unaff_x20 + 0x58);
            FUN_1033d72e0(0);
            func_0x000107c610f8();
            func_0x000107c6157c(uVar13);
            FUN_1033d584c(puVar8,uVar11,uVar13);
            FUN_1033d5204(&uStack_270,0x112f62ea8,&UNK_10dbbf250);
            func_0x000107c6142c(lVar10);
            lVar10 = unaff_x20 + 0x68;
            func_0x000107c61618();
            FUN_1033d3678(puVar8,lVar5,0);
            if (lVar10 != 0) {
              func_0x000107c5e37c(lVar10);
              lVar9 = lVar10;
              func_0x000107c5de64();
              func_0x000107c61180();
              if (lVar9 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d4588);
                (*pcVar1)();
              }
              func_0x000107c4ff34();
              func_0x000107c61170(lVar9);
            }
            func_0x000107c4ff2c(lVar10);
            func_0x000107c61170(lVar5);
            func_0x000107c61170(puVar8);
            func_0x000107c61170(lVar10);
            return;
          }
          func_0x000107c61170(lVar5);
        }
        func_0x000107c6142c(lVar10);
      }
    }
  }
  return;
}



/* Entry: 1033d4588; end: 1033d45df;  */

void FUN_1033d4588(long param_1,code *param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    (*param_2)();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 1033d45e0; end: 1033d487f;  */

void FUN_1033d45e0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  code *pcVar13;
  ulong uStack_150;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  undefined1 auStack_100 [24];
  long lStack_e8;
  undefined1 auStack_d8 [24];
  ulong uStack_c0;
  ulong uStack_b8;
  
  cVar3 = *(char *)(param_2 + 0xd);
  if (cVar3 == '\x01') {
    func_0x0001033d5244(unaff_x20 + 0x30,auStack_100,0x112f62eb0,&UNK_10dbbf260);
    if (lStack_e8 != 0) {
      FUN_1033d528c(auStack_100,auStack_d8);
      uStack_150 = uStack_b8;
      uStack_138 = uStack_c0;
      uVar10 = *param_2;
      uVar8 = param_2[1];
      uVar2 = param_2[2];
      uVar5 = param_2[3];
      uStack_110 = param_2[4];
      uStack_118 = param_2[5];
      uVar9 = param_2[6];
      uVar12 = param_2[7];
      func_0x0001000a8868(auStack_d8,uStack_c0);
      pcVar13 = *(code **)(uStack_150 + 0x10);
      func_0x000107c61434(uVar8);
      (*pcVar13)();
      if (uStack_150 == 0) {
        func_0x000107c61434(uVar5);
        uStack_150 = uVar5;
        uStack_138 = uVar2;
      }
      else {
        uVar6 = uStack_138 & 0xffffffffffff;
        if ((uStack_150 & 0x2000000000000000) != 0) {
          uVar6 = uStack_150 >> 0x38 & 0xf;
        }
        if (uVar6 == 0) {
          func_0x000107c61434(uVar5);
          func_0x000107c6142c(uStack_150);
          uStack_150 = uVar5;
          uStack_138 = uVar2;
        }
      }
      uVar6 = uStack_b8;
      uVar5 = uStack_c0;
      func_0x0001000a8868(auStack_d8,uStack_c0);
      (**(code **)(uVar6 + 0x18))();
      uVar2 = uVar5 & 0xffffffffffff;
      if ((uVar6 & 0x2000000000000000) != 0) {
        uVar2 = uVar6 >> 0x38 & 0xf;
      }
      uVar1 = uStack_118;
      uVar4 = uStack_110;
      if (uVar2 != 0) {
        uVar1 = uVar6;
        uVar4 = uVar5;
      }
      if (uVar6 != 0) {
        uStack_118 = uVar1;
        uStack_110 = uVar4;
      }
      func_0x000107c61434();
      func_0x000107c6142c(uVar6);
      func_0x0001000a8868(auStack_d8,uStack_c0);
      (**(code **)(uStack_b8 + 0x20))();
      uVar2 = uStack_c0 & 0xffffffffffff;
      if ((uStack_b8 & 0x2000000000000000) != 0) {
        uVar2 = uStack_b8 >> 0x38 & 0xf;
      }
      uVar5 = uVar12;
      uVar6 = uVar9;
      if (uVar2 != 0) {
        uVar5 = uStack_b8;
        uVar6 = uStack_c0;
      }
      if (uStack_b8 != 0) {
        uVar12 = uVar5;
        uVar9 = uVar6;
      }
      func_0x000107c61434(uVar12);
      func_0x000107c6142c(uStack_b8);
      uStack_120 = param_2[8];
      uStack_128 = param_2[9];
      uVar7 = param_2[10];
      uStack_130 = param_2[0xb];
      uVar11 = param_2[0xc];
      func_0x000107c61434(uVar11);
      func_0x000107c61434(uVar7);
      func_0x0001000834e4(auStack_d8);
      goto LAB_1033d4830;
    }
    func_0x0001033d5204(auStack_100,0x112f62eb0,&UNK_10dbbf260);
  }
  uStack_120 = param_2[8];
  uStack_128 = param_2[9];
  uVar7 = param_2[10];
  uStack_130 = param_2[0xb];
  uVar11 = param_2[0xc];
  uVar10 = *param_2;
  uVar8 = param_2[1];
  uStack_138 = param_2[2];
  uStack_150 = param_2[3];
  uStack_110 = param_2[4];
  uStack_118 = param_2[5];
  uVar9 = param_2[6];
  uVar12 = param_2[7];
  func_0x00010213ddd0(param_2,auStack_d8);
LAB_1033d4830:
  *param_1 = uVar10;
  param_1[1] = uVar8;
  param_1[2] = uStack_138;
  param_1[3] = uStack_150;
  param_1[4] = uStack_110;
  param_1[5] = uStack_118;
  param_1[6] = uVar9;
  param_1[7] = uVar12;
  param_1[8] = uStack_120;
  param_1[9] = uStack_128;
  param_1[10] = uVar7;
  param_1[0xb] = uStack_130;
  param_1[0xc] = uVar11;
  *(char *)(param_1 + 0xd) = cVar3;
  return;
}



/* Entry: 1033d4880; end: 1033d496f;  */

void FUN_1033d4880(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [128];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
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
  undefined2 uStack_48;
  undefined6 uStack_46;
  undefined2 uStack_40;
  undefined8 uStack_3e;
  
  uStack_68 = param_2[9];
  uStack_70 = param_2[8];
  uStack_58 = param_2[0xb];
  uStack_60 = param_2[10];
  uStack_50 = param_2[0xc];
  uStack_48 = (undefined2)param_2[0xd];
  uStack_3e = *(undefined8 *)((long)param_2 + 0x72);
  uStack_46 = (undefined6)*(undefined8 *)((long)param_2 + 0x6a);
  uStack_40 = (undefined2)((ulong)*(undefined8 *)((long)param_2 + 0x6a) >> 0x30);
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  uStack_88 = param_2[5];
  uStack_90 = param_2[4];
  uStack_78 = param_2[7];
  uStack_80 = param_2[6];
  func_0x000107c61428(param_3 + 0x10,auStack_148,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    FUN_1033d4970(auStack_130,&uStack_b0);
    FUN_1033d7d6c(0);
    func_0x000107c613fc();
    puVar1 = auStack_130;
    FUN_1033d7778();
    func_0x000107c61428(puVar1 + 0x90,auStack_160,1,0);
    *(undefined ***)(puVar1 + 0x98) = &PTR_DAT_11064dd70;
    func_0x000107c61604(puVar1 + 0x90,param_3);
    func_0x000107c61574(param_3);
  }
  *param_1 = puVar1;
  return;
}



/* Entry: 1033d4970; end: 1033d4e37;  */

void FUN_1033d4970(undefined8 *param_1,undefined1 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x20;
  undefined *puVar11;
  long lVar12;
  undefined8 *puVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  undefined1 auStack_278 [24];
  long lStack_260;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  undefined1 uStack_1f0;
  undefined8 uStack_1ef;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined1 uStack_180;
  undefined8 uStack_17f;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  char cStack_f8;
  undefined1 uStack_f7;
  undefined6 uStack_f6;
  undefined2 uStack_f0;
  undefined8 uStack_ee;
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
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  lVar12 = *(long *)(param_2 + 8);
  lVar10 = *(long *)(lVar12 + 0x10);
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar10 != 0) {
    puStack_168 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c6157c();
    func_0x00010213ce94(0,lVar10,0);
    puVar13 = (undefined8 *)(lVar12 + 0x20);
    do {
      puVar11 = puStack_168;
      lVar10 = lVar10 + -1;
      uStack_128 = puVar13[7];
      uStack_130 = puVar13[6];
      uStack_118 = puVar13[9];
      uStack_120 = puVar13[8];
      uStack_110 = puVar13[10];
      uStack_ff = (undefined7)*(undefined8 *)((long)puVar13 + 0x61);
      cStack_f8 = (char)((ulong)*(undefined8 *)((long)puVar13 + 0x61) >> 0x38);
      cVar3 = cStack_f8;
      uStack_100 = (undefined1)((ulong)*(undefined8 *)((long)puVar13 + 0x59) >> 0x38);
      uStack_158 = puVar13[1];
      uStack_160 = *puVar13;
      uStack_148 = puVar13[3];
      uStack_150 = puVar13[2];
      uStack_138 = puVar13[5];
      uStack_140 = puVar13[4];
      uStack_108 = (undefined1)puVar13[0xb];
      uStack_107 = (undefined7)((ulong)puVar13[0xb] >> 8);
      if (cStack_f8 == '\x01') {
        func_0x0001033d5244(unaff_x20 + 0x30,auStack_278,0x112f62eb0,&UNK_10dbbf260);
        if (lStack_260 == 0) {
          func_0x00010213ddd0(&uStack_160,&uStack_e0);
          func_0x0001033d5204(auStack_278,0x112f62eb0,&UNK_10dbbf260);
          goto LAB_1033d4c24;
        }
        FUN_1033d528c(auStack_278,&uStack_1e0);
        uVar7 = uStack_158;
        uVar6 = uStack_160;
        uStack_2a0 = uStack_1c0;
        uStack_2b8 = uStack_1c8;
        func_0x0001000a8868(&uStack_1e0,uStack_1c8);
        pcVar14 = *(code **)(uStack_2a0 + 0x10);
        func_0x00010213ddd0(&uStack_160,&uStack_e0);
        func_0x000107c61434(uVar7);
        (*pcVar14)();
        uVar4 = uStack_148;
        if (uStack_2a0 == 0) {
LAB_1033d4ad8:
          uStack_2b8 = uStack_150;
          func_0x000107c61434(uStack_148);
          func_0x000107c6142c(uStack_2a0);
          uStack_2a0 = uVar4;
        }
        else {
          uVar5 = uStack_2b8 & 0xffffffffffff;
          if ((uStack_2a0 & 0x2000000000000000) != 0) {
            uVar5 = uStack_2a0 >> 0x38 & 0xf;
          }
          if (uVar5 == 0) goto LAB_1033d4ad8;
        }
        uVar4 = uStack_1c0;
        uStack_2a8 = uStack_1c8;
        func_0x0001000a8868(&uStack_1e0,uStack_1c8);
        (**(code **)(uVar4 + 0x18))();
        uVar5 = uStack_138;
        if (uVar4 == 0) {
LAB_1033d4b40:
          uStack_2a8 = uStack_140;
          func_0x000107c61434(uStack_138);
          func_0x000107c6142c(uVar4);
          uVar4 = uVar5;
        }
        else {
          uVar2 = uStack_2a8 & 0xffffffffffff;
          if ((uVar4 & 0x2000000000000000) != 0) {
            uVar2 = uVar4 >> 0x38 & 0xf;
          }
          if (uVar2 == 0) goto LAB_1033d4b40;
        }
        uVar5 = uStack_1c0;
        uStack_2b0 = uStack_1c8;
        func_0x0001000a8868(&uStack_1e0,uStack_1c8);
        (**(code **)(uVar5 + 0x20))();
        uVar2 = uStack_128;
        if (uVar5 == 0) {
LAB_1033d4ba4:
          uStack_2b0 = uStack_130;
          func_0x000107c61434(uStack_128);
          func_0x000107c6142c(uVar5);
          uVar5 = uVar2;
        }
        else {
          uVar1 = uStack_2b0 & 0xffffffffffff;
          if ((uVar5 & 0x2000000000000000) != 0) {
            uVar1 = uVar5 >> 0x38 & 0xf;
          }
          if (uVar1 == 0) goto LAB_1033d4ba4;
        }
        uVar15 = uStack_110;
        uVar9 = uStack_118;
        uVar8 = uStack_120;
        uVar17 = CONCAT71(uStack_107,uStack_108);
        uVar16 = CONCAT71(uStack_ff,uStack_100);
        func_0x000107c61434(uVar16);
        func_0x000107c61434(uVar15);
        func_0x0001000834e4(&uStack_1e0);
        func_0x0001021383b8(&uStack_160);
      }
      else {
        func_0x00010213ddd0(&uStack_160,&uStack_e0);
LAB_1033d4c24:
        uVar17 = CONCAT71(uStack_107,uStack_108);
        uVar16 = CONCAT71(uStack_ff,uStack_100);
        uVar6 = uStack_160;
        uVar7 = uStack_158;
        uStack_2b8 = uStack_150;
        uStack_2a0 = uStack_148;
        uStack_2a8 = uStack_140;
        uStack_2b0 = uStack_130;
        uVar8 = uStack_120;
        uVar9 = uStack_118;
        uVar5 = uStack_128;
        uVar15 = uStack_110;
        uVar4 = uStack_138;
      }
      uVar2 = *(ulong *)(puVar11 + 0x10);
      puStack_168 = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar2) {
        func_0x00010213ce94(1 < *(ulong *)(puVar11 + 0x18),uVar2 + 1,1);
      }
      puVar11 = puStack_168;
      *(ulong *)(puStack_168 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puStack_168 + uVar2 * 0x70 + 0x20) = uVar6;
      *(undefined8 *)(puStack_168 + uVar2 * 0x70 + 0x28) = uVar7;
      *(ulong *)(puStack_168 + uVar2 * 0x70 + 0x30) = uStack_2b8;
      *(ulong *)(puStack_168 + uVar2 * 0x70 + 0x38) = uStack_2a0;
      *(ulong *)(puStack_168 + uVar2 * 0x70 + 0x40) = uStack_2a8;
      *(ulong *)(puStack_168 + uVar2 * 0x70 + 0x48) = uVar4;
      *(ulong *)(puStack_168 + uVar2 * 0x70 + 0x50) = uStack_2b0;
      *(ulong *)(puStack_168 + uVar2 * 0x70 + 0x58) = uVar5;
      *(undefined8 *)(puStack_168 + uVar2 * 0x70 + 0x60) = uVar8;
      *(undefined8 *)(puStack_168 + uVar2 * 0x70 + 0x68) = uVar9;
      *(undefined8 *)(puStack_168 + uVar2 * 0x70 + 0x70) = uVar15;
      *(undefined8 *)(puStack_168 + uVar2 * 0x70 + 0x78) = uVar17;
      *(undefined8 *)(puStack_168 + uVar2 * 0x70 + 0x80) = uVar16;
      puStack_168[uVar2 * 0x70 + 0x88] = cVar3;
      if (lVar10 == 0) goto LAB_1033d4ce8;
      puVar13 = puVar13 + 0xe;
    } while( true );
  }
LAB_1033d4d04:
  uStack_198 = *(undefined8 *)(param_2 + 0x58);
  uStack_1a0 = *(undefined8 *)(param_2 + 0x50);
  uStack_190 = *(undefined8 *)(param_2 + 0x60);
  uStack_188 = (undefined1)*(undefined8 *)(param_2 + 0x68);
  uStack_17f = *(undefined8 *)(param_2 + 0x71);
  uStack_187 = (undefined7)*(undefined8 *)(param_2 + 0x69);
  uStack_180 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0x69) >> 0x38);
  lStack_1d8 = *(long *)(param_2 + 0x18);
  uStack_1e0 = *(undefined8 *)(param_2 + 0x10);
  uStack_1c8 = *(ulong *)(param_2 + 0x28);
  uStack_1d0 = *(undefined8 *)(param_2 + 0x20);
  uStack_1b8 = *(undefined8 *)(param_2 + 0x38);
  uStack_1c0 = *(ulong *)(param_2 + 0x30);
  uStack_1a8 = *(undefined8 *)(param_2 + 0x48);
  uStack_1b0 = *(undefined8 *)(param_2 + 0x40);
  if (lStack_1d8 == 0) {
    uStack_208 = *(undefined8 *)(param_2 + 0x58);
    uStack_210 = *(undefined8 *)(param_2 + 0x50);
    uStack_200 = *(undefined8 *)(param_2 + 0x60);
    uStack_1f8 = (undefined1)*(undefined8 *)(param_2 + 0x68);
    uStack_1ef = *(undefined8 *)(param_2 + 0x71);
    uStack_1f7 = (undefined7)*(undefined8 *)(param_2 + 0x69);
    uStack_1f0 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0x69) >> 0x38);
    uStack_248 = *(undefined8 *)(param_2 + 0x18);
    uStack_250 = *(undefined8 *)(param_2 + 0x10);
    uStack_238 = *(undefined8 *)(param_2 + 0x28);
    uStack_240 = *(undefined8 *)(param_2 + 0x20);
    uStack_228 = *(undefined8 *)(param_2 + 0x38);
    uStack_230 = *(undefined8 *)(param_2 + 0x30);
    uStack_218 = *(undefined8 *)(param_2 + 0x48);
    uStack_220 = *(undefined8 *)(param_2 + 0x40);
  }
  else {
    uStack_98 = *(undefined8 *)(param_2 + 0x58);
    uStack_a0 = *(undefined8 *)(param_2 + 0x50);
    uStack_90 = *(undefined8 *)(param_2 + 0x60);
    uStack_88 = (undefined1)*(undefined8 *)(param_2 + 0x68);
    uStack_7f = *(undefined8 *)(param_2 + 0x71);
    uStack_87 = (undefined7)*(undefined8 *)(param_2 + 0x69);
    uStack_80 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0x69) >> 0x38);
    uStack_d8 = *(undefined8 *)(param_2 + 0x18);
    uStack_e0 = *(undefined8 *)(param_2 + 0x10);
    uStack_c8 = *(undefined8 *)(param_2 + 0x28);
    uStack_d0 = *(undefined8 *)(param_2 + 0x20);
    uStack_b8 = *(undefined8 *)(param_2 + 0x38);
    uStack_c0 = *(undefined8 *)(param_2 + 0x30);
    uStack_a8 = *(undefined8 *)(param_2 + 0x48);
    uStack_b0 = *(undefined8 *)(param_2 + 0x40);
    func_0x000107c6157c(unaff_x20);
    func_0x0001033d5244(&uStack_1e0,&uStack_160,0x112e5b300,&UNK_10da60e30);
    FUN_1033d45e0(&uStack_250,&uStack_e0);
    func_0x0001033d5204(&uStack_1e0,0x112e5b300,&UNK_10da60e30);
    func_0x000107c61574(unaff_x20);
  }
  func_0x0001039dde90(&uStack_160,*param_2,param_2[1],puVar11,&uStack_250);
  param_1[9] = uStack_118;
  param_1[8] = uStack_120;
  param_1[0xb] = CONCAT71(uStack_107,uStack_108);
  param_1[10] = uStack_110;
  param_1[0xd] = CONCAT62(uStack_f6,CONCAT11(uStack_f7,cStack_f8));
  param_1[0xc] = CONCAT71(uStack_ff,uStack_100);
  *(undefined8 *)((long)param_1 + 0x72) = uStack_ee;
  *(ulong *)((long)param_1 + 0x6a) = CONCAT26(uStack_f0,uStack_f6);
  param_1[1] = uStack_158;
  *param_1 = uStack_160;
  param_1[3] = uStack_148;
  param_1[2] = uStack_150;
  param_1[5] = uStack_138;
  param_1[4] = uStack_140;
  param_1[7] = uStack_128;
  param_1[6] = uStack_130;
  return;
LAB_1033d4ce8:
  func_0x000107c61574(unaff_x20);
  goto LAB_1033d4d04;
}



/* Entry: 1033d4e38; end: 1033d4e73;  */

void FUN_1033d4e38(long param_1)

{
  code *pcVar1;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c526c0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d4e74);
  (*pcVar1)();
}



/* Entry: 1033d4e74; end: 1033d4e97;  */

void FUN_1033d4e74(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c526c0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d4e74);
  (*pcVar1)();
}



/* Entry: 1033d4e98; end: 1033d4edf;  */

void FUN_1033d4e98(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = param_2;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c4ff34();
    func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c12c8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_removeFromParentViewController_112628c58);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d4ee0);
  (*pcVar1)();
}



/* Entry: 1033d4ee0; end: 1033d4f13;  */

void FUN_1033d4ee0(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar3;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c4ff34();
    func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c12c8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar3,PTR_s_removeFromParentViewController_112628c58);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d4ee0);
  (*pcVar1)();
}



/* Entry: 1033d4f14; end: 1033d4f7f;  */

void FUN_1033d4f14(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_1033d5204(unaff_x20 + 0x30,0x112f62eb0,&UNK_10dbbf260);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61610(unaff_x20 + 0x68);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  FUN_1033d4f80(unaff_x20 + 0x90);
  return;
}



/* Entry: 1033d4f80; end: 1033d4fa3;  */

undefined8 FUN_1033d4f80(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1033d4fa4; end: 1033d4fc3;  */

void FUN_1033d4fa4(void)

{
  FUN_1033d4f14();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033d4fc4; end: 1033d4fe7;  */

void FUN_1033d4fc4(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x0001033d4fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 1033d4fe8; end: 1033d503f;  */

void FUN_1033d4fe8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20 + 0x68;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4e360();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 1033d5040; end: 1033d504b;  */

void FUN_1033d5040(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 1033d504c; end: 1033d5147;  */

void FUN_1033d504c(void)

{
  ulong *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  ulong *puVar6;
  undefined1 auStack_48 [24];
  
  if (*(char *)(unaff_x20 + 0x60) == '\x01') {
    puVar1 = (ulong *)(unaff_x20 + 0x68);
    func_0x000107c61618();
    if (puVar1 != (ulong *)0x0) {
      uVar2 = 0;
      FUN_1033d0e1c(0);
      puVar6 = puVar1;
      func_0x000107c61480(puVar1,uVar2);
      if ((puVar6 == (ulong *)0x0) ||
         ((**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar6) + 0x110))(),
         ((ulong)puVar6 & 1) == 0)) {
        puVar6 = (ulong *)0x0;
      }
      else {
        FUN_1033d11b0();
      }
      func_0x000107c61170(puVar1);
      goto LAB_1033d50dc;
    }
  }
  puVar6 = (ulong *)0x0;
LAB_1033d50dc:
  FUN_1033d2cc0();
  func_0x000107c61428(unaff_x20 + 0x90,auStack_48,0,0);
  lVar3 = unaff_x20 + 0x90;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar5 = *(long *)(unaff_x20 + 0x98);
    lVar4 = lVar3;
    func_0x000107c614f0();
    (**(code **)(lVar5 + 8))(puVar6,lVar4,lVar5);
    func_0x000107c615e8(lVar3);
  }
  func_0x000107c61170(puVar6);
  return;
}



/* Entry: 1033d5148; end: 1033d514b;  */

void FUN_1033d5148(void)

{
  ulong *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  ulong *puVar6;
  undefined1 auStack_48 [24];
  
  if (*(char *)(unaff_x20 + 0x60) == '\x01') {
    puVar1 = (ulong *)(unaff_x20 + 0x68);
    func_0x000107c61618();
    if (puVar1 != (ulong *)0x0) {
      uVar2 = 0;
      FUN_1033d0e1c(0);
      puVar6 = puVar1;
      func_0x000107c61480(puVar1,uVar2);
      if ((puVar6 == (ulong *)0x0) ||
         ((**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar6) + 0x110))(),
         ((ulong)puVar6 & 1) == 0)) {
        puVar6 = (ulong *)0x0;
      }
      else {
        FUN_1033d11b0();
      }
      func_0x000107c61170(puVar1);
      goto LAB_1033d50dc;
    }
  }
  puVar6 = (ulong *)0x0;
LAB_1033d50dc:
  FUN_1033d2cc0();
  func_0x000107c61428(unaff_x20 + 0x90,auStack_48,0,0);
  lVar3 = unaff_x20 + 0x90;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar5 = *(long *)(unaff_x20 + 0x98);
    lVar4 = lVar3;
    func_0x000107c614f0();
    (**(code **)(lVar5 + 8))(puVar6,lVar4,lVar5);
    func_0x000107c615e8(lVar3);
  }
  func_0x000107c61170(puVar6);
  return;
}



/* Entry: 1033d514c; end: 1033d51bb;  */

undefined8 FUN_1033d514c(undefined8 param_1,undefined8 param_2)

{
  FUN_1039df0bc(param_2,param_1);
  return param_2;
}



/* Entry: 1033d51bc; end: 1033d51fb;  */

void FUN_1033d51bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f62fa8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc35380;
  func_0x000107c61520(&UNK_10dc35380,&UNK_1106ba3d0);
  puRam0000000112f62fa8 = puVar1;
  return;
}



/* Entry: 1033d51fc; end: 1033d5203;  */

void FUN_1033d51fc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [128];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
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
  undefined2 uStack_48;
  undefined6 uStack_46;
  undefined2 uStack_40;
  undefined8 uStack_3e;
  
  uStack_68 = param_2[9];
  uStack_70 = param_2[8];
  uStack_58 = param_2[0xb];
  uStack_60 = param_2[10];
  uStack_50 = param_2[0xc];
  uStack_48 = (undefined2)param_2[0xd];
  uStack_3e = *(undefined8 *)((long)param_2 + 0x72);
  uStack_46 = (undefined6)*(undefined8 *)((long)param_2 + 0x6a);
  uStack_40 = (undefined2)((ulong)*(undefined8 *)((long)param_2 + 0x6a) >> 0x30);
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  uStack_88 = param_2[5];
  uStack_90 = param_2[4];
  uStack_78 = param_2[7];
  uStack_80 = param_2[6];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_148,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    FUN_1033d4970(auStack_130,&uStack_b0);
    FUN_1033d7d6c(0);
    func_0x000107c613fc();
    puVar2 = auStack_130;
    FUN_1033d7778();
    func_0x000107c61428(puVar2 + 0x90,auStack_160,1,0);
    *(undefined ***)(puVar2 + 0x98) = &PTR_DAT_11064dd70;
    func_0x000107c61604(puVar2 + 0x90,lVar1);
    func_0x000107c61574(lVar1);
  }
  *param_1 = puVar2;
  return;
}



/* Entry: 1033d5204; end: 1033d528b;  */

undefined8 FUN_1033d5204(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1033d528c; end: 1033d52a3;  */

undefined8 * FUN_1033d528c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 1033d52a4; end: 1033d52e3;  */

void FUN_1033d52a4(void)

{
  FUN_1033d4588();
  return;
}



/* Entry: 1033d52e4; end: 1033d5313;  */

void FUN_1033d52e4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(unaff_x20 + 0x10),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1033d5314; end: 1033d536b; -[_TtC17LensLeaderboardUI31LeaderboardUpsellViewController initWithCoder:] */

void FUN_1033d5314(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "LensLeaderboardUI/LeaderboardUpsellViewController.swift",0x37,2,0x1c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d536c);
  (*pcVar1)();
}



/* Entry: 1033d536c; end: 1033d5387;  */

undefined1  [16] FUN_1033d536c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f148d00;
  auVar1._0_8_ = 0xd000000000000020;
  return auVar1;
}



/* Entry: 1033d5388; end: 1033d547f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1033d5388(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_b0;
  long lStack_a8;
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
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f62fb0);
  uStack_58 = puVar1[9];
  uStack_60 = puVar1[8];
  uStack_50 = puVar1[10];
  uStack_48 = (undefined1)puVar1[0xb];
  uStack_3f = *(undefined8 *)((long)puVar1 + 0x61);
  uStack_47 = (undefined7)*(undefined8 *)((long)puVar1 + 0x59);
  uStack_40 = (undefined1)((ulong)*(undefined8 *)((long)puVar1 + 0x59) >> 0x38);
  uStack_98 = puVar1[1];
  uStack_a0 = *puVar1;
  uStack_88 = puVar1[3];
  uStack_90 = puVar1[2];
  uStack_78 = puVar1[5];
  uStack_80 = puVar1[4];
  uStack_68 = puVar1[7];
  uStack_70 = puVar1[6];
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f62fb8);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f62fc0);
  lVar3 = 0;
  FUN_1033cf920();
  uVar7 = puVar1[1];
  uVar9 = puVar1[1];
  uVar8 = *puVar1;
  lVar4 = lVar3;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar4 + _DAT_112f62d98);
  puVar1[1] = uVar9;
  *puVar1 = uVar8;
  *(undefined8 *)(lVar4 + _DAT_112f62da0) = uVar6;
  puVar2 = PTR_s_initWithFrame__1125e2948;
  lStack_b0 = lVar4;
  lStack_a8 = lVar3;
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar6);
  plVar5 = &lStack_b0;
  func_0x000107c61154(0,0,0,0,plVar5,puVar2);
  func_0x000107c61180();
  FUN_1033ce7f0(&uStack_a0);
  func_0x000107c61170(plVar5);
  return plVar5;
}



/* Entry: 1033d5480; end: 1033d54ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d5480(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + _DAT_112f62fc8))();
  return;
}



/* Entry: 1033d54ac; end: 1033d54d7; -[_TtC17LensLeaderboardUI31LeaderboardUpsellViewController initWithNibName:bundle:] */

void FUN_1033d54ac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensLeaderboardUI.LeaderboardUpsellViewController",0x31,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d54d8);
  (*pcVar1)();
}



/* Entry: 1033d54d8; end: 1033d5583;  */

/* WARNING: Possible PIC construction at 0x0001033d5548: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033d554c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d54d8(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = unaff_x20 + _DAT_112f62fb0;
  uVar2 = *(undefined8 *)(lVar1 + 8);
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  uVar4 = *(undefined8 *)(lVar1 + 0x28);
  uVar5 = *(undefined8 *)(lVar1 + 0x38);
  uVar6 = *(undefined8 *)(lVar1 + 0x60);
  func_0x000107c6142c(*(undefined8 *)(lVar1 + 0x50));
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar5);
  func_0x000107c6142c(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + _DAT_112f62fb8));
  return;
}



/* Entry: 1033d5584; end: 1033d55b7;  */

void FUN_1033d5584(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033d55b8; end: 1033d5667; -[_TtC17LensLeaderboardUI31LeaderboardUpsellViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001033d562c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033d5630) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d55b8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_1 + _DAT_112f62fb0;
  uVar2 = *(undefined8 *)(lVar1 + 8);
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  uVar4 = *(undefined8 *)(lVar1 + 0x28);
  uVar5 = *(undefined8 *)(lVar1 + 0x38);
  uVar6 = *(undefined8 *)(lVar1 + 0x60);
  func_0x000107c6142c(*(undefined8 *)(lVar1 + 0x50));
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar5);
  func_0x000107c6142c(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f62fb8));
  return;
}



/* Entry: 1033d5668; end: 1033d5687;  */

void FUN_1033d5668(void)

{
  func_0x000107c61168(&PTR_PTR_1128d7088);
  return;
}



/* Entry: 1033d5688; end: 1033d584b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1033d5688(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f63018;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f63018);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    func_0x0001033d56ec();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 1033d584c; end: 1033d59ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1033d584c(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  code *pcVar6;
  undefined8 uVar7;
  
  puVar3 = &stack0xffffffffffffff90;
  func_0x000107c614f0();
  lVar1 = _DAT_112f63008;
  uVar2 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined1 *)(unaff_x20 + _DAT_112f63010) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f63018) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f62ff8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f63000) = param_3;
  puVar4 = PTR_s_initWithNibName_bundle__1125e9850;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&stack0xffffffffffffff90,puVar4,0,0);
  puVar4 = &UNK_11064de20;
  func_0x000107c613fc(&UNK_11064de20,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,puVar3);
  pcVar6 = *(code **)(*param_2 + 0x60);
  func_0x000107c61174();
  uVar2 = 0x1033d7734;
  puVar5 = puVar4;
  (*pcVar6)(0x1033d7734);
  func_0x000107c61574(puVar4);
  func_0x000107c614f0(uVar2);
  uVar7 = *(undefined8 *)(puVar3 + _DAT_112f63008);
  pcVar6 = *(code **)(puVar5 + 0x10);
  func_0x000107c6157c(uVar7);
  (*pcVar6)();
  func_0x000107c61170(puVar3);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  func_0x000107c615e8(uVar2);
  func_0x000107c61574(uVar7);
  return puVar3;
}



/* Entry: 1033d59f0; end: 1033d5a7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d59f0(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + _DAT_112f62ff8);
    *(undefined8 *)(param_2 + _DAT_112f62ff8) = uVar2;
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(uVar3);
    lVar1 = param_2;
    func_0x000107c4a714();
    if ((int)lVar1 != 0) {
      FUN_1033d0e64();
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1033d5a7c; end: 1033d5b1f; -[_TtC17LensLeaderboardUI25LeaderboardViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d5a7c(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = _DAT_112f63008;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  *(undefined1 *)(param_1 + _DAT_112f63010) = 0;
  *(undefined8 *)(param_1 + _DAT_112f63018) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "LensLeaderboardUI/LeaderboardViewController.swift",0x31,2,0x33,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1033d5b20);
  (*pcVar2)();
}



/* Entry: 1033d5b20; end: 1033d5cb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d5b20(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  
  lVar2 = 0;
  func_0x000107c5eff8();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar1 = _DAT_112f63010;
  lVar4 = _DAT_112f62ff8;
  if ((((*(byte *)(unaff_x20 + _DAT_112f63010) & 1) == 0) &&
      (*(char *)(*(long *)(unaff_x20 + _DAT_112f62ff8) + 0xa0) == '\x01')) &&
     (*(long *)(*(long *)(*(long *)(unaff_x20 + _DAT_112f62ff8) + 0xb0) + 0x10) != 0)) {
    lVar5 = lVar2;
    FUN_1033d5688();
    func_0x000107c3ec60();
    func_0x000107c61170(lVar5);
    func_0x000107c609b0(param_1,param_2,param_3,param_4);
    if (0.0 < param_1) {
      lVar5 = *(long *)(*(long *)(unaff_x20 + lVar4) + 0xb0);
      lVar4 = *(long *)(lVar5 + 0x10);
      if (lVar4 != 0) {
        lVar7 = 0;
        pbVar6 = (byte *)(lVar5 + 0x88);
        do {
          if ((*pbVar6 & 1) != 0) {
            *(undefined1 *)(unaff_x20 + lVar1) = 1;
            uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f63018);
            func_0x000107c61174(uVar3);
            func_0x000107c5efe0(&stack0xffffffffffffff90 +
                                -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar7,0);
            func_0x000107c5efd4();
            (**(code **)(lVar8 + 8))
                      (&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
            func_0x000107c51a58(uVar3);
            func_0x000107c61170(uVar3);
            func_0x000107c61170(lVar7);
            return;
          }
          lVar7 = lVar7 + 1;
          pbVar6 = pbVar6 + 0x70;
        } while (lVar4 != lVar7);
      }
    }
  }
  return;
}



/* Entry: 1033d5cb4; end: 1033d5d0f; -[_TtC17LensLeaderboardUI25LeaderboardViewController viewDidLayoutSubviews] */

void FUN_1033d5cb4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidLayoutSubviews_112684cc8;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_1033d5b20();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1033d5d10; end: 1033d5da3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d5d10(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  code *pcVar5;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112f62ff8);
  func_0x000107c61428(lVar3 + 0x90,auStack_58,0,0);
  lVar1 = lVar3 + 0x90;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar4 = *(long *)(lVar3 + 0x98);
    lVar2 = lVar1;
    func_0x000107c614f0();
    pcVar5 = *(code **)(lVar4 + 0x18);
    func_0x000107c6157c(lVar3);
    (*pcVar5)(lVar2,lVar4);
    func_0x000107c615e8(lVar1);
    func_0x000107c61574(lVar3);
  }
  return;
}



/* Entry: 1033d5da4; end: 1033d5ddf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1033d5da4(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(*(long *)(unaff_x20 + _DAT_112f62ff8) + 0xa1);
}



/* Entry: 1033d5de0; end: 1033d641f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1033d5de0(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x20;
  undefined *puVar11;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined8 uStack_ef;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  FUN_1033d650c();
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar3 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f148ec0);
  func_0x000107c59c6c(puVar2);
  func_0x000107c61170(uVar3);
  func_0x00010052bbec();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c43780();
  func_0x000107c61180();
  func_0x000107c615e8(uVar3);
  func_0x000107c54adc(puVar2);
  func_0x000107c61170(uVar4);
  if (lRam0000000112f62c50 != -1) {
    func_0x000107c61568(0x112f62c50,0x1033ccdec);
  }
  func_0x000107c59c78(puVar2);
  func_0x000107c59c74(puVar2);
  puVar7 = puVar2;
  func_0x000107c56ba8();
  func_0x0001008479c8();
  lVar9 = ((ulong)*(uint *)(puVar7 + 0x30) + 7 & 0x1fffffff8) + 0x10;
  puVar6 = puVar7;
  func_0x000107c613fc();
  *(undefined8 *)(puVar6 + 0x18) = 5;
  *(undefined8 *)(puVar6 + 0x10) = 2;
  *(undefined **)(puVar6 + 0x20) = puVar2;
  func_0x000107c61174();
  puVar11 = puVar2;
  func_0x0001070bd6d4();
  func_0x000107c61180();
  if (puVar11 == (undefined *)0x0) {
    lVar9 = -0x1c00000000000000;
    puVar8 = (undefined *)0x79616c50;
  }
  else {
    puVar8 = puVar11;
    func_0x000107c5faec();
    func_0x000107c61170(puVar11);
  }
  uVar3 = 0;
  FUN_1033d2394();
  puVar11 = &UNK_11064de20;
  func_0x000107c613fc(&UNK_11064de20,0x18,7);
  func_0x000107c61614(puVar11 + 0x10);
  func_0x000107c6157c(puVar11);
  FUN_1033d73d0(puVar8,lVar9,0,0,FUN_1033d772c,puVar11);
  func_0x000107c6142c(lVar9);
  func_0x000107c61578(puVar11,2);
  *(undefined **)(puVar6 + 0x28) = puVar8;
  func_0x000107c614e8();
  func_0x000107c610f8();
  uVar4 = 0;
  func_0x0001033d76cc(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  puVar11 = puVar6;
  func_0x000107c5fc48(puVar6,uVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c45784();
  func_0x000107c61170(puVar11);
  func_0x000107c61174();
  func_0x000107c52b2c();
  func_0x000107c59594(0x4034000000000000,uVar3);
  func_0x000107c55b40(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c55b3c(0x4030000000000000,0x4038000000000000,0x4030000000000000,0x4038000000000000);
  func_0x000107c613fc(puVar7,((ulong)*(uint *)(puVar7 + 0x30) + 7 & 0x1fffffff8) + 8,
                      *(ushort *)(puVar7 + 0x34) | 7);
  *(undefined8 *)(puVar7 + 0x18) = 3;
  *(undefined8 *)(puVar7 + 0x10) = 1;
  lVar9 = *(long *)(unaff_x20 + _DAT_112f62ff8);
  *(undefined8 *)(puVar7 + 0x20) = param_1;
  uStack_118 = *(undefined8 *)(lVar9 + 0xf0);
  uStack_120 = *(undefined8 *)(lVar9 + 0xe8);
  uStack_108 = *(undefined8 *)(lVar9 + 0x100);
  uStack_110 = *(undefined8 *)(lVar9 + 0xf8);
  lStack_148 = *(long *)(lVar9 + 0xc0);
  uStack_150 = *(undefined8 *)(lVar9 + 0xb8);
  uStack_138 = *(undefined8 *)(lVar9 + 0xd0);
  uStack_140 = *(undefined8 *)(lVar9 + 200);
  uStack_128 = *(undefined8 *)(lVar9 + 0xe0);
  uStack_130 = *(undefined8 *)(lVar9 + 0xd8);
  uStack_100 = *(undefined8 *)(lVar9 + 0x108);
  uStack_f8 = (undefined1)*(undefined8 *)(lVar9 + 0x110);
  uStack_ef = *(undefined8 *)(lVar9 + 0x119);
  uStack_f7 = (undefined7)*(undefined8 *)(lVar9 + 0x111);
  uStack_f0 = (undefined1)((ulong)*(undefined8 *)(lVar9 + 0x111) >> 0x38);
  uStack_87 = (undefined7)((ulong)*(undefined8 *)(lVar9 + 0x110) >> 8);
  uStack_e0 = uStack_150;
  lStack_d8 = lStack_148;
  uStack_d0 = uStack_140;
  uStack_c8 = uStack_138;
  uStack_c0 = uStack_130;
  uStack_b8 = uStack_128;
  uStack_b0 = uStack_120;
  uStack_a8 = uStack_118;
  uStack_a0 = uStack_110;
  uStack_98 = uStack_108;
  uStack_90 = uStack_100;
  uStack_88 = uStack_f8;
  uStack_80 = uStack_f0;
  uStack_7f = uStack_ef;
  if (lStack_148 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    uVar5 = 0;
    FUN_1033dc430();
    func_0x000107c614e8();
    func_0x000107c610f8();
    func_0x000107c61174(param_1);
    func_0x00010213df40(&uStack_150,&uStack_1c0);
    func_0x000107c453e4();
    lStack_1b8 = lStack_d8;
    uStack_1c0 = uStack_e0;
    uStack_1a8 = uStack_c8;
    uStack_1b0 = uStack_d0;
    uStack_198 = uStack_b8;
    uStack_1a0 = uStack_c0;
    uStack_188 = uStack_a8;
    uStack_190 = uStack_b0;
    func_0x0001033db040(&uStack_1c0,0x65726f6353206f4e,0xec00000074655920,
                        *(undefined8 *)(unaff_x20 + _DAT_112f63000));
    func_0x0001033d7684(&uStack_150);
    puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8();
    func_0x000107c453e4();
    if (lRam0000000112f62c40 != -1) {
      func_0x000107c61568(0x112f62c40,0x1033cce20);
    }
    func_0x000107c52b50(puVar6);
    func_0x000107c5a050(puVar6);
    puVar11 = puVar6;
    func_0x000107c44d9c(puVar6);
    func_0x000107c61180();
    puVar8 = puVar11;
    func_0x000107c40290(0x3ff0000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar11);
    func_0x000107c521e8(puVar8);
    func_0x000107c61170(puVar8);
    puVar11 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
    uVar1 = *(ulong *)(puVar11 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
      func_0x0001023b5804(puVar8,uVar1 + 1,1,puVar7);
      puVar11 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
    }
    *(ulong *)(puVar11 + 0x10) = uVar1 + 1;
    *(undefined **)(puVar11 + uVar1 * 8 + 0x20) = puVar6;
    func_0x000107c61174();
    puVar6 = puVar8;
    if ((ulong)puVar8 >> 0x3e != 0) {
      if ((undefined *)0x7fffffffffffffff < puVar8) {
        puVar11 = puVar8;
      }
      func_0x000107c60480(puVar11);
      puVar6 = (undefined *)0x0;
      func_0x0001023b5804(0,puVar11 + 1,1,puVar8);
      puVar11 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
    }
    uVar1 = *(ulong *)(puVar11 + 0x10);
    puVar7 = puVar6;
    if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar1) {
      puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
      func_0x0001023b5804(puVar7,uVar1 + 1,1,puVar6);
      puVar11 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
    }
    *(ulong *)(puVar11 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar11 + uVar1 * 8 + 0x20) = uVar5;
    func_0x000107c61170();
  }
  puVar6 = puVar7;
  if ((ulong)puVar7 >> 0x3e != 0) {
    puVar11 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar7) {
      puVar11 = puVar7;
    }
    func_0x000107c60480(puVar11);
    puVar6 = (undefined *)0x0;
    func_0x0001023b5804(0,puVar11 + 1,1,puVar7);
  }
  uVar10 = (ulong)puVar6 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar10 + 0x10);
  puVar7 = puVar6;
  if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar1) {
    puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
    func_0x0001023b5804(puVar7,uVar1 + 1,1,puVar6);
    uVar10 = (ulong)puVar7 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar10 + 0x10) = uVar1 + 1;
  *(undefined8 *)(uVar10 + uVar1 * 8 + 0x20) = uVar3;
  puVar6 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIStackView_1126aefe8);
  puVar11 = puVar7;
  func_0x000107c5fc48(puVar7,uVar4);
  func_0x000107c45784(puVar6);
  func_0x000107c61170(puVar11);
  func_0x000107c52b2c(puVar6);
  func_0x000107c59594(0,puVar6);
  func_0x000107c6142c(puVar7);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  return puVar6;
}



/* Entry: 1033d6420; end: 1033d650b;  */

long FUN_1033d6420(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  puVar2 = &UNK_11064de20;
  func_0x000107c613fc(&UNK_11064de20,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  func_0x000107c6157c(puVar2);
  lVar3 = lVar1;
  FUN_1033d68cc(lVar1,0xd000000000000011,0x800000010f148e70,0xd000000000000024,0x800000010f148e90,
                FUN_1033d73c8,puVar2);
  func_0x000107c61574(puVar2);
  func_0x000107c61408(lVar1 + 0x20,2,PTR___sSSN_11034da80);
  func_0x000107c61574(puVar2);
  return lVar3;
}



/* Entry: 1033d650c; end: 1033d6763;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1033d650c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  
  lVar1 = _DAT_112f62ff8;
  puVar8 = *(undefined **)(*(long *)(unaff_x20 + _DAT_112f62ff8) + 0xa8);
  puVar2 = puVar8;
  func_0x000107c61434();
  func_0x0001033d6e60();
  func_0x000107c6142c(puVar8);
  puVar8 = puVar2;
  if (*(long *)(*(long *)(*(long *)(unaff_x20 + lVar1) + 0xb0) + 0x10) != 0) {
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5a050();
    puVar8 = puVar3;
    func_0x000107c44d9c();
    func_0x000107c61180();
    puVar4 = puVar8;
    func_0x000107c40290(0x4018000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    func_0x000107c521e8(puVar4);
    func_0x000107c61170();
    func_0x0001008479c8();
    func_0x000107c613fc();
    *(undefined8 *)(puVar4 + 0x18) = 9;
    *(undefined8 *)(puVar4 + 0x10) = 4;
    *(undefined **)(puVar4 + 0x20) = puVar2;
    puVar8 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8();
    func_0x000107c61174(puVar2);
    func_0x000107c453e4();
    if (lRam0000000112f62c40 != -1) {
      func_0x000107c61568(0x112f62c40,0x1033cce20);
    }
    func_0x000107c52b50(puVar8);
    func_0x000107c5a050(puVar8);
    puVar5 = puVar8;
    func_0x000107c44d9c(puVar8);
    func_0x000107c61180();
    puVar6 = puVar5;
    func_0x000107c40290(0x3ff0000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c521e8(puVar6);
    func_0x000107c61170(puVar6);
    *(undefined **)(puVar4 + 0x28) = puVar8;
    *(undefined **)(puVar4 + 0x30) = puVar3;
    func_0x000107c61174();
    puVar8 = puVar3;
    FUN_1033d5688();
    *(undefined **)(puVar4 + 0x38) = puVar8;
    puVar8 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIStackView_1126aefe8);
    uVar7 = 0;
    func_0x0001033d76cc(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    puVar5 = puVar4;
    func_0x000107c5fc48(puVar4,uVar7);
    func_0x000107c61574(puVar4);
    func_0x000107c45784(puVar8);
    func_0x000107c61170(puVar5);
    func_0x000107c52b2c(puVar8);
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f63018);
    func_0x000107c61174(uVar7);
    func_0x000107c4fd7c();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
  }
  return puVar8;
}



/* Entry: 1033d6764; end: 1033d68cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d6764(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_112f62ff8);
    func_0x000107c6157c(lVar2);
    func_0x000107c61170(param_1);
    func_0x000107c61428(lVar2 + 0x90,auStack_60,0,0);
    lVar1 = lVar2 + 0x90;
    func_0x000107c61618();
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar2 + 0x98);
      func_0x000107c614f0();
      (**(code **)(lVar3 + 0x10))();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 1033d68cc; end: 1033d702b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1033d68cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long unaff_x20;
  long lVar12;
  undefined8 *puVar13;
  undefined1 auStack_230 [112];
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined8 uStack_15f;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined8 uStack_ef;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  lVar12 = *(long *)(param_1 + 0x10);
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar12 != 0) {
    puStack_e0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001033463bc(0,lVar12,0);
    puVar13 = (undefined8 *)(param_1 + 0x28);
    do {
      puVar10 = puStack_e0;
      uVar4 = puVar13[-1];
      uVar7 = *puVar13;
      puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
      func_0x000107c610f8();
      func_0x000107c61434(uVar7);
      func_0x000107c453e4();
      func_0x000107c5fadc(uVar4,uVar7);
      func_0x000107c59c6c(puVar2);
      func_0x000107c61170(uVar4);
      func_0x00010052bbec();
      func_0x000107c61180();
      uVar3 = uVar4;
      func_0x000107c43780();
      func_0x000107c61180();
      func_0x000107c615e8(uVar4);
      func_0x000107c54adc(puVar2);
      func_0x000107c61170(uVar3);
      if (lRam0000000112f62c50 != -1) {
        func_0x000107c61568(0x112f62c50,0x1033ccdec);
      }
      func_0x000107c59c78(puVar2);
      func_0x000107c59c74(puVar2);
      func_0x000107c56ba8(puVar2);
      func_0x000107c6142c(uVar7);
      uVar1 = *(ulong *)(puVar10 + 0x10);
      puStack_e0 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
        func_0x0001033463bc(1 < *(ulong *)(puVar10 + 0x18),uVar1 + 1,1);
      }
      puVar13 = puVar13 + 2;
      *(ulong *)(puStack_e0 + 0x10) = uVar1 + 1;
      *(undefined **)(puStack_e0 + uVar1 * 8 + 0x20) = puVar2;
      lVar12 = lVar12 + -1;
      puVar10 = puStack_e0;
    } while (lVar12 != 0);
  }
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  uVar4 = 0;
  func_0x0001033d76cc(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  puVar8 = puVar10;
  func_0x000107c5fc48(puVar10,uVar4);
  func_0x000107c6142c(puVar10);
  func_0x000107c45784();
  func_0x000107c61170(puVar8);
  func_0x000107c52b2c(puVar2);
  func_0x000107c59594(0x4028000000000000,puVar2);
  lVar5 = 0;
  FUN_1033d2394();
  lVar12 = lVar5;
  func_0x0001008479c8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar12 + 0x18) = 5;
  *(undefined8 *)(lVar12 + 0x10) = 2;
  *(undefined **)(lVar12 + 0x20) = puVar2;
  func_0x000107c61174(puVar2);
  FUN_1033d73d0(param_2,param_3,param_4,param_5,param_6,param_7);
  *(undefined8 *)(lVar12 + 0x28) = param_2;
  func_0x000107c614e8();
  func_0x000107c610f8();
  lVar6 = lVar12;
  func_0x000107c5fc48(lVar12,uVar4);
  func_0x000107c61574(lVar12);
  func_0x000107c45784();
  func_0x000107c61170(lVar6);
  func_0x000107c61174();
  func_0x000107c52b2c();
  func_0x000107c59594(0x4034000000000000,lVar5);
  func_0x000107c55b40(lVar5);
  func_0x000107c61170(lVar5);
  func_0x000107c61174();
  func_0x000107c55b3c(0x4034000000000000,0x4038000000000000,0x4030000000000000,0x4038000000000000);
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar12 = *(long *)(unaff_x20 + _DAT_112f62ff8);
  lStack_148 = *(long *)(lVar12 + 0xc0);
  uStack_150 = *(undefined8 *)(lVar12 + 0xb8);
  uStack_118 = *(undefined8 *)(lVar12 + 0xf0);
  uStack_120 = *(undefined8 *)(lVar12 + 0xe8);
  uStack_108 = *(undefined8 *)(lVar12 + 0x100);
  uStack_110 = *(undefined8 *)(lVar12 + 0xf8);
  uStack_138 = *(undefined8 *)(lVar12 + 0xd0);
  uStack_140 = *(undefined8 *)(lVar12 + 200);
  uStack_128 = *(undefined8 *)(lVar12 + 0xe0);
  uStack_130 = *(undefined8 *)(lVar12 + 0xd8);
  uStack_100 = *(undefined8 *)(lVar12 + 0x108);
  uStack_f8 = (undefined1)*(undefined8 *)(lVar12 + 0x110);
  uStack_ef = *(undefined8 *)(lVar12 + 0x119);
  uStack_f7 = (undefined7)*(undefined8 *)(lVar12 + 0x111);
  uStack_f0 = (undefined1)((ulong)*(undefined8 *)(lVar12 + 0x111) >> 0x38);
  if (lStack_148 != 0) {
    uStack_98 = *(undefined8 *)(lVar12 + 0x100);
    uStack_a0 = *(undefined8 *)(lVar12 + 0xf8);
    uStack_90 = *(undefined8 *)(lVar12 + 0x108);
    uStack_88 = (undefined1)*(undefined8 *)(lVar12 + 0x110);
    uStack_7f = *(undefined8 *)(lVar12 + 0x119);
    uStack_87 = (undefined7)*(undefined8 *)(lVar12 + 0x111);
    uStack_80 = (undefined1)((ulong)*(undefined8 *)(lVar12 + 0x111) >> 0x38);
    uStack_d8 = *(undefined8 *)(lVar12 + 0xc0);
    puStack_e0 = *(undefined **)(lVar12 + 0xb8);
    uStack_c8 = *(undefined8 *)(lVar12 + 0xd0);
    uStack_d0 = *(undefined8 *)(lVar12 + 200);
    uStack_b8 = *(undefined8 *)(lVar12 + 0xe0);
    uStack_c0 = *(undefined8 *)(lVar12 + 0xd8);
    uStack_a8 = *(undefined8 *)(lVar12 + 0xf0);
    uStack_b0 = *(undefined8 *)(lVar12 + 0xe8);
    uVar7 = 0;
    FUN_1033dc430();
    func_0x000107c614e8();
    func_0x000107c610f8();
    uStack_178 = uStack_108;
    uStack_180 = uStack_110;
    uStack_168 = uStack_f8;
    uStack_170 = uStack_100;
    uStack_15f = uStack_ef;
    uStack_167 = uStack_f7;
    uStack_160 = uStack_f0;
    lStack_1b8 = lStack_148;
    uStack_1c0 = uStack_150;
    uStack_1a8 = uStack_138;
    uStack_1b0 = uStack_140;
    uStack_198 = uStack_128;
    uStack_1a0 = uStack_130;
    uStack_188 = uStack_118;
    uStack_190 = uStack_120;
    func_0x00010213ddd0(&uStack_1c0,auStack_230);
    func_0x000107c453e4();
    FUN_1033da7d8(&puStack_e0,*(undefined8 *)(unaff_x20 + _DAT_112f63000));
    func_0x0001033d7684(&uStack_150);
    if ((ulong)puVar10 >> 0x3e == 0) {
      puVar8 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar8 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar10) {
        puVar8 = puVar10;
      }
      func_0x000107c60480(puVar8);
    }
    puVar9 = (undefined *)0x0;
    func_0x0001023b5804(0,puVar8 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar11 = (ulong)puVar9 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar11 + 0x10);
    puVar10 = puVar9;
    if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar1) {
      puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
      func_0x0001023b5804(puVar10,uVar1 + 1,1,puVar9);
      uVar11 = (ulong)puVar10 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar11 + 0x10) = uVar1 + 1;
    *(undefined8 *)(uVar11 + uVar1 * 8 + 0x20) = uVar7;
  }
  puVar8 = puVar10;
  func_0x000107c61550();
  if ((((int)puVar8 == 0) || ((long)puVar10 < 0)) ||
     (puVar8 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)) {
    if ((ulong)puVar10 >> 0x3e == 0) {
      puVar9 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar9 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar10) {
        puVar9 = puVar10;
      }
      func_0x000107c60480(puVar9);
    }
    puVar8 = (undefined *)0x0;
    func_0x0001023b5804(0,puVar9 + 1,1,puVar10);
  }
  uVar11 = (ulong)puVar8 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar11 + 0x10);
  puVar10 = puVar8;
  if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar1) {
    puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
    func_0x0001023b5804(puVar10,uVar1 + 1,1,puVar8);
    uVar11 = (ulong)puVar10 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar11 + 0x10) = uVar1 + 1;
  *(long *)(uVar11 + uVar1 * 8 + 0x20) = lVar5;
  puVar8 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIStackView_1126aefe8);
  puVar9 = puVar10;
  func_0x000107c5fc48(puVar10,uVar4);
  func_0x000107c45784(puVar8);
  func_0x000107c61170(puVar9);
  func_0x000107c52b2c(puVar8);
  func_0x000107c59594(0,puVar8);
  func_0x000107c6142c(puVar10);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(lVar5);
  return puVar8;
}



/* Entry: 1033d702c; end: 1033d70d7; -[_TtC17LensLeaderboardUI25LeaderboardViewController initWithNibName:bundle:] */

void FUN_1033d702c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensLeaderboardUI.LeaderboardViewController",0x2b,"init(nibName:bundle:)",
                      0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d7058);
  (*pcVar1)();
}



/* Entry: 1033d70d8; end: 1033d712f; -[_TtC17LensLeaderboardUI25LeaderboardViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d70d8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f62ff8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f63000));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f63008));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f63018));
  return;
}



/* Entry: 1033d7130; end: 1033d7147; -[_TtC17LensLeaderboardUI25LeaderboardViewController tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1033d7130(long param_1)

{
  return *(undefined8 *)(*(long *)(*(long *)(param_1 + _DAT_112f62ff8) + 0xb0) + 0x10);
}



/* Entry: 1033d7148; end: 1033d72df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1033d7148(undefined *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x20;
  ulong uVar8;
  undefined1 auStack_130 [112];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  uVar2 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f148de0);
  uVar3 = uVar2;
  func_0x000107c5efd4();
  func_0x000107c417dc();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  uVar3 = 0;
  FUN_1033da7b8(0);
  puVar4 = param_1;
  func_0x000107c61480(param_1,uVar3);
  if (puVar4 != (undefined *)0x0) {
    puVar5 = puVar4;
    func_0x000107c5efe4();
    uVar8 = *(ulong *)(*(long *)(unaff_x20 + _DAT_112f62ff8) + 0xb0);
    if ((long)puVar5 < *(long *)(uVar8 + 0x10)) {
      uVar6 = uVar8;
      func_0x000107c61434();
      func_0x000107c5efe4();
      if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d72dc);
        (*pcVar1)();
      }
      if (uVar6 < *(ulong *)(uVar8 + 0x10)) {
        lVar7 = uVar8 + uVar6 * 0x70;
        uStack_b8 = *(undefined8 *)(lVar7 + 0x28);
        uStack_c0 = *(undefined8 *)(lVar7 + 0x20);
        uStack_a8 = *(undefined8 *)(lVar7 + 0x38);
        uStack_b0 = *(undefined8 *)(lVar7 + 0x30);
        uStack_98 = *(undefined8 *)(lVar7 + 0x48);
        uStack_a0 = *(undefined8 *)(lVar7 + 0x40);
        uStack_88 = *(undefined8 *)(lVar7 + 0x58);
        uStack_90 = *(undefined8 *)(lVar7 + 0x50);
        uStack_78 = *(undefined8 *)(lVar7 + 0x68);
        uStack_80 = *(undefined8 *)(lVar7 + 0x60);
        uStack_70 = *(undefined8 *)(lVar7 + 0x70);
        uStack_5f = *(undefined8 *)(lVar7 + 0x81);
        uStack_60 = (undefined1)((ulong)*(undefined8 *)(lVar7 + 0x79) >> 0x38);
        uStack_68 = (undefined1)*(undefined8 *)(lVar7 + 0x78);
        uStack_67 = (undefined7)((ulong)*(undefined8 *)(lVar7 + 0x78) >> 8);
        func_0x00010213ddd0(&uStack_c0,auStack_130);
        func_0x000107c6142c(uVar8);
        FUN_1033da7d8(&uStack_c0,*(undefined8 *)(unaff_x20 + _DAT_112f63000));
        func_0x0001021383b8(&uStack_c0);
        return puVar4;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1033d72e0);
      (*pcVar1)();
    }
  }
  func_0x000107c61170(param_1);
  puVar4 = PTR__OBJC_CLASS___UITableViewCell_1126afcb8;
  func_0x000107c610f8(PTR__OBJC_CLASS___UITableViewCell_1126afcb8);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return puVar4;
}



/* Entry: 1033d72e0; end: 1033d72ff;  */

void FUN_1033d72e0(void)

{
  func_0x000107c61168(&PTR_PTR_1128d7248);
  return;
}



/* Entry: 1033d7300; end: 1033d73c7; -[_TtC17LensLeaderboardUI25LeaderboardViewController tableView:cellForRowAtIndexPath:] */

void FUN_1033d7300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar3,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_1033d7148(param_3,puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1033d73c8; end: 1033d73cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033d73c8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112f62ff8);
    func_0x000107c6157c(lVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c61428(lVar2 + 0x90,auStack_60,0,0);
    lVar1 = lVar2 + 0x90;
    func_0x000107c61618();
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar2 + 0x98);
      func_0x000107c614f0();
      (**(code **)(lVar3 + 8))();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 1033d73d0; end: 1033d7683;  */

undefined *
FUN_1033d73d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x000107c61168();
  func_0x000107c3ee98();
  func_0x000107c61180();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c59e1c(puVar1);
  func_0x000107c61170(param_1);
  if (param_4 == 0) {
    func_0x000107c61174(puVar1);
    param_3 = 0;
  }
  else {
    func_0x000107c61174(puVar1);
    func_0x000107c5fadc(param_3,param_4);
  }
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(param_3);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3ea80();
  func_0x000107c61180();
  func_0x000107c59e34(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c5cac0();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x00010052bbec();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c43780();
    func_0x000107c61180();
    func_0x000107c615e8(puVar3);
    func_0x000107c54adc(puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar4);
  }
  if (lRam0000000112f62c38 != -1) {
    func_0x000107c61568(0x112f62c38,0x1033cce54);
  }
  func_0x000107c52b50(puVar1);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c539d4(0x4038000000000000);
  func_0x000107c61170(puVar2);
  func_0x000107c5a050(puVar1);
  puVar2 = puVar1;
  func_0x000107c44d9c(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  puVar3 = puVar2;
  func_0x000107c40290(0x4048000000000000,puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c521e8(puVar3);
  func_0x000107c61170(puVar3);
  func_0x0001033d76cc(0,0x112f62e28,&PTR__OBJC_CLASS___UIAction_1126d0d40);
  puVar2 = &UNK_11064de48;
  func_0x000107c613fc(&UNK_11064de48,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  *(undefined8 *)(puVar2 + 0x18) = param_6;
  func_0x000107c6157c(param_6);
  uVar5 = 0;
  func_0x000107c6012c(0,0xe000000000000000,0,0,0,0,0,0,0x1033d770c,puVar2);
  func_0x000107c3d59c(puVar1);
  func_0x000107c61170(uVar5);
  return puVar1;
}



/* Entry: 1033d7684; end: 1033d772b;  */

undefined8 FUN_1033d7684(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112e5b300;
  func_0x0001000285a8(0x112e5b300,&UNK_10da60e30);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}


