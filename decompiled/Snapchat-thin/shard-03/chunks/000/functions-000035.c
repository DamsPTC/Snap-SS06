/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1023d027c; end: 1023d0433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1023d027c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e93658;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112e93658);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
    func_0x000107c61168(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
    func_0x000107c42448();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
    func_0x000107c610f8();
    func_0x000107c46734();
    func_0x000107c5a378();
    func_0x000107c61170(puVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1023d0434; end: 1023d05b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1023d0434(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112e93658) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e93660) = 0;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffffa0,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  puVar2 = puVar1;
  FUN_1023d027c();
  func_0x000107c3d89c(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  puVar3 = puVar1;
  func_0x000107c61170(puVar1);
  func_0x0001023d032c();
  func_0x000107c3d894(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c562fc(puVar2);
  func_0x000107c61170(puVar2);
  uVar4 = 0x70616e735f646461;
  func_0x000107c5fadc(0x70616e735f646461,0xef6e6f747475625f);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  return puVar1;
}



/* Entry: 1023d05b4; end: 1023d05d3; -[_TtC35PreviewFeatureVideoPlaybackControls13AddSnapButton initWithFrame:] */

void FUN_1023d05b4(void)

{
  FUN_1023d0434();
  return;
}



/* Entry: 1023d05d4; end: 1023d0843;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d05d4(double param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_layoutSubviews_112600e60);
  func_0x000107c3ec60();
  func_0x000107c609cc();
  dVar7 = param_1;
  func_0x000107c3ec60();
  func_0x000107c609b0();
  if (param_1 <= dVar7) {
    dVar7 = param_1;
  }
  lVar1 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c539d4(dVar7 * 0.5);
  func_0x000107c61170(lVar1);
  FUN_1023d027c();
  func_0x000107c3ec60();
  func_0x000107c54b80(lVar1);
  func_0x000107c61170(lVar1);
  dVar5 = 0.375;
  dVar7 = dVar7 * 0.375;
  func_0x000107c3ec60();
  func_0x000107c609cc();
  dVar5 = dVar5 * 0.5;
  dVar8 = dVar5 - dVar7 * 0.5;
  lVar1 = unaff_x20;
  func_0x000107c3ec60();
  func_0x000107c609b0();
  dVar9 = dVar5 * 0.5 - dVar7 * 0.5;
  func_0x0001023d032c();
  func_0x000107c3ec60();
  func_0x000107c54b80(lVar1);
  func_0x000107c61170(lVar1);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e93660);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  func_0x000107c61174(uVar4);
  func_0x000107c453e4(puVar2);
  dVar5 = dVar8;
  func_0x000107c609bc(dVar8,dVar9,dVar7,dVar7);
  dVar6 = dVar8;
  func_0x000107c609c8(dVar8,dVar9,dVar7,dVar7);
  func_0x000107c4d154(dVar5,dVar6,puVar2);
  dVar5 = dVar8;
  func_0x000107c609bc(dVar8,dVar9,dVar7,dVar7);
  dVar6 = dVar8;
  func_0x000107c609b8(dVar8,dVar9,dVar7,dVar7);
  func_0x000107c3d738(dVar5,dVar6,puVar2);
  dVar5 = dVar8;
  func_0x000107c609c4(dVar8,dVar9,dVar7,dVar7);
  dVar6 = dVar8;
  func_0x000107c609c0(dVar8,dVar9,dVar7,dVar7);
  func_0x000107c4d154(dVar5,dVar6,puVar2);
  dVar5 = dVar8;
  func_0x000107c609b4(dVar8,dVar9,dVar7,dVar7);
  func_0x000107c609c0(dVar8,dVar9,dVar7,dVar7);
  func_0x000107c3d738(dVar5,dVar8,puVar2);
  puVar3 = puVar2;
  func_0x000107c3ab30(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c57274(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 1023d0844; end: 1023d086b; -[_TtC35PreviewFeatureVideoPlaybackControls13AddSnapButton layoutSubviews] */

void FUN_1023d0844(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1023d05d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1023d086c; end: 1023d089f;  */

void FUN_1023d086c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1023d08a0; end: 1023d08d7; -[_TtC35PreviewFeatureVideoPlaybackControls13AddSnapButton .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001023d08bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023d08c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d08a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e93658));
  return;
}



/* Entry: 1023d08d8; end: 1023d08f7;  */

void FUN_1023d08d8(void)

{
  func_0x000107c61168(&PTR_PTR_11283a9b0);
  return;
}



/* Entry: 1023d08f8; end: 1023d0aa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1023d08f8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e936a0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e936a0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x0001023d0958();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 1023d0aa4; end: 1023d0ab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1023d0aa4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e936a8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e936a8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_1023d1664();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 1023d0ab8; end: 1023d0b13;  */

long FUN_1023d0ab8(long *param_1,code *param_2)

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
    (*param_2)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar1;
}



/* Entry: 1023d0b14; end: 1023d0c9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1023d0b14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  puVar3 = &DAT_112e93690;
  *(undefined8 *)(unaff_x20 + _DAT_112e93690) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e93698) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e936a0) = 0;
  puVar4 = &DAT_112e936a8;
  *(undefined8 *)(unaff_x20 + _DAT_112e936a8) = 0;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffffa0,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  puVar2 = puVar1;
  func_0x000107c4aba4();
  func_0x000107c61180();
  FUN_1023d0ab8(&DAT_112e93690,0x1023d13b4);
  func_0x000107c3d894(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  FUN_1023d08f8();
  func_0x000107c3d89c(puVar1);
  func_0x000107c61170(puVar3);
  FUN_1023d0ab8(&DAT_112e936a8,FUN_1023d1664);
  func_0x000107c3d89c(puVar1);
  func_0x000107c61170(puVar4);
  uVar5 = 0x69616e626d756874;
  func_0x000107c5fadc(0x69616e626d756874,0xe90000000000006c);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  return puVar1;
}



/* Entry: 1023d0c9c; end: 1023d0cbb; -[_TtC35PreviewFeatureVideoPlaybackControls15ThumbnailButton initWithFrame:] */

void FUN_1023d0c9c(void)

{
  FUN_1023d0b14();
  return;
}



/* Entry: 1023d0cbc; end: 1023d0eab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d0cbc(double param_1,double param_2,double param_3,double param_4)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  double dVar6;
  double dVar7;
  
  puVar1 = &stack0xffffffffffffff90;
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_layoutSubviews_112600e60);
  FUN_1023d08f8();
  func_0x000107c3ec60();
  func_0x000107c609d0();
  func_0x000107c54b80(puVar1);
  func_0x000107c61170(puVar1);
  puVar2 = &DAT_112e936a8;
  FUN_1023d0ab8(&DAT_112e936a8,FUN_1023d1664);
  func_0x000107c498ec();
  func_0x000107c61170(puVar2);
  func_0x000107c3ec60();
  dVar7 = param_3 * 0.5 - param_1 * 0.5;
  func_0x000107c3ec60();
  dVar6 = (param_4 - param_2) + -4.0;
  func_0x000107c54b80(dVar7,dVar6,param_1,param_2,*(undefined8 *)(unaff_x20 + _DAT_112e936a8));
  puVar2 = &DAT_112e93690;
  FUN_1023d0ab8(&DAT_112e93690,0x1023d13b4);
  func_0x000107c3ec60();
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x000107c61168(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  func_0x000107c3e8a8(dVar7,dVar6,param_1,param_2);
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c3ab30();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c57274(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e93690);
  func_0x000107c61174(uVar5);
  func_0x000107c3ec60();
  func_0x000107c54b80(uVar5);
  func_0x000107c61170(uVar5);
  puVar2 = &DAT_112e93698;
  FUN_1023d0ab8(&DAT_112e93698,FUN_1023d1498);
  func_0x000107c3ec60(*(undefined8 *)(unaff_x20 + _DAT_112e936a0));
  func_0x000107c54b80(puVar2);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1023d0eac; end: 1023d0ed3; -[_TtC35PreviewFeatureVideoPlaybackControls15ThumbnailButton layoutSubviews] */

void FUN_1023d0eac(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1023d0cbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1023d0ed4; end: 1023d0f07;  */

void FUN_1023d0ed4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1023d0f08; end: 1023d0f5f; -[_TtC35PreviewFeatureVideoPlaybackControls15ThumbnailButton .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001023d0f24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023d0f44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023d0f28) */
/* WARNING: Removing unreachable block (ram,0x0001023d0f48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d0f08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e93690));
  return;
}



/* Entry: 1023d0f60; end: 1023d0f7f;  */

void FUN_1023d0f60(void)

{
  func_0x000107c61168(&PTR_PTR_11283aa70);
  return;
}



/* Entry: 1023d0f80; end: 1023d1047;  */

undefined * FUN_1023d0f80(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    uVar3 = 0;
    func_0x0001002ecff4(0,lVar4,0);
    puVar5 = (undefined8 *)(param_1 + 0x20);
    do {
      func_0x000107c5f06c(*puVar5);
      uVar1 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        func_0x0001002ecff4(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puVar2 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar2 + uVar1 * 8 + 0x20) = uVar3;
      lVar4 = lVar4 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar4 != 0);
  }
  return puVar2;
}



/* Entry: 1023d1048; end: 1023d10af;  */

/* WARNING: Possible PIC construction at 0x0001023d1078: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023d107c) */
/* WARNING: Removing unreachable block (ram,0x0001023d1080) */

void FUN_1023d1048(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar3 = (ulong *)0x112d76cc8;
    plVar5 = (long *)&UNK_10d936770;
  }
  else {
    puVar3 = (ulong *)0x112d74dc8;
    plVar5 = (long *)&UNK_10d9355f0;
    unaff_x30 = 0x1023d107c;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 1023d10b0; end: 1023d1127;  */

void FUN_1023d10b0(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x0001023d1704(0,param_1,param_2);
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



/* Entry: 1023d1128; end: 1023d114b;  */

void FUN_1023d1128(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112e93720;
  plVar5 = (long *)&UNK_10da9f348;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x0001023d1704(0,0x112e93320,&PTR_PTR_1126b0d88);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1023d114c; end: 1023d1183;  */

void FUN_1023d114c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1023d1184();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1023d1184; end: 1023d1497;  */

undefined * FUN_1023d1184(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1023d129c);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    puVar2 = (undefined *)0x112e93450;
    func_0x0001000285a8(0x112e93450,&UNK_10da9f1b8);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x88) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar2 + 0x20,param_4 + 0x20,uVar5,&UNK_1104fe230);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar5 * 0x88 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar2;
}



/* Entry: 1023d1498; end: 1023d1663;  */

undefined * FUN_1023d1498(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR__OBJC_CLASS___CAGradientLayer_1126b2788;
  func_0x000107c610f8(PTR__OBJC_CLASS___CAGradientLayer_1126b2788);
  func_0x000107c453e4();
  func_0x000107c5a0f8();
  lVar2 = 0x112d38dc0;
  func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 4;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar4 = puVar3;
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c3ab24();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  uVar6 = 0;
  func_0x000100ef8bfc();
  *(undefined8 *)(lVar2 + 0x38) = uVar6;
  *(undefined **)(lVar2 + 0x20) = puVar5;
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c3fdd0(0x3fe4cccccccccccd);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = puVar4;
  func_0x000107c3ab24();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  *(undefined8 *)(lVar2 + 0x58) = uVar6;
  *(undefined **)(lVar2 + 0x40) = puVar3;
  lVar7 = lVar2;
  func_0x000107c5fc48(lVar2,PTR___sypN_11034f1a8 + 8);
  func_0x000107c61574(lVar2);
  func_0x000107c535a0(puVar1);
  func_0x000107c61170(lVar7);
  uVar6 = 0x112e93710;
  func_0x0001000285a8(0x112e93710,&UNK_10da9f330);
  func_0x000107c61538();
  FUN_1023d0f80();
  uVar8 = 0;
  func_0x0001023d1704(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar9 = uVar6;
  func_0x000107c5fc48(uVar6,uVar8);
  func_0x000107c6142c(uVar6);
  func_0x000107c56084(puVar1);
  func_0x000107c61170(uVar9);
  return puVar1;
}



/* Entry: 1023d1664; end: 1023d1743;  */

undefined * FUN_1023d1664(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c5a050();
  func_0x000107c61174(puVar1);
  func_0x000107c5a378();
  func_0x000107c5a100(puVar1,param_2,0x18);
  func_0x000107c59c74(puVar1,param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 1023d1744; end: 1023d192b;  */

long FUN_1023d1744(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar4);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    (*param_2)();
    func_0x000107c614e8();
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c61180();
    func_0x000107c5a050();
    func_0x000107c5a378(lVar1);
    func_0x000107c61170(lVar1);
    func_0x000107c3d8b8(lVar1);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar4);
    *(long *)(unaff_x20 + lVar4) = lVar1;
    func_0x000107c61174(lVar1);
    func_0x000107c61170(uVar3);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar1;
}



/* Entry: 1023d192c; end: 1023d1e7b;  */

/* WARNING: Possible PIC construction at 0x0001023d19bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023d19f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023d1a48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023d1a88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023d1ac0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023d1b0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023d1b60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023d1b10) */
/* WARNING: Removing unreachable block (ram,0x0001023d1ac4) */
/* WARNING: Removing unreachable block (ram,0x0001023d1a8c) */
/* WARNING: Removing unreachable block (ram,0x0001023d1a4c) */
/* WARNING: Removing unreachable block (ram,0x0001023d19f4) */
/* WARNING: Removing unreachable block (ram,0x0001023d19c0) */
/* WARNING: Removing unreachable block (ram,0x0001023d1b64) */

void FUN_1023d192c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar1 + 0x18) = 0xd;
  *(undefined8 *)(puVar1 + 0x10) = 6;
  puVar1 = &DAT_112e93738;
  FUN_1023d1744(&DAT_112e93738,FUN_1023d0f60,&PTR_s_didTapThumbnailButton__112524cf0);
  func_0x000107c5cbe4();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1023d1e7c; end: 1023d1ea7; -[_TtC35PreviewFeatureVideoPlaybackControls21ThumbnailControlsView initWithCoder:] */

undefined8 FUN_1023d1e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x0001023d1d98();
  return 0;
}



/* Entry: 1023d1ea8; end: 1023d1f07; -[_TtC35PreviewFeatureVideoPlaybackControls21ThumbnailControlsView initWithFrame:] */

void FUN_1023d1ea8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewFeatureVideoPlaybackControls.ThumbnailControlsView",0x39,
                      "init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023d1ed4);
  (*pcVar1)();
}



/* Entry: 1023d1f08; end: 1023d1f6f; -[_TtC35PreviewFeatureVideoPlaybackControls21ThumbnailControlsView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001023d1f34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023d1f38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d1f08(long param_1)

{
  func_0x0001023d258c(param_1 + _DAT_112e93728);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e93730));
  return;
}



/* Entry: 1023d1f70; end: 1023d1f8f;  */

void FUN_1023d1f70(void)

{
  func_0x000107c61168(&PTR_PTR_11283ab40);
  return;
}



/* Entry: 1023d1f90; end: 1023d20eb;  */

void FUN_1023d1f90(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar1 = &DAT_112e93738;
    FUN_1023d1744(&DAT_112e93738,FUN_1023d0f60,&PTR_s_didTapThumbnailButton__112524cf0);
    func_0x000107c61170(param_2);
    FUN_1023d08f8();
    func_0x000107c55258();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1023d20ec; end: 1023d21a3;  */

void FUN_1023d20ec(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined1 auStack_38 [24];
  
  if (*param_1 == 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      return;
    }
    puVar1 = &DAT_112e93740;
    FUN_1023d1744(&DAT_112e93740,FUN_1023d08d8,&PTR_s_didTapAddSnapButton__112524ce8);
    func_0x000107c4ff34();
    func_0x000107c61170(param_2);
  }
  else {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    puVar1 = (undefined *)(param_2 + 0x10);
    func_0x000107c61618();
    if (puVar1 == (undefined *)0x0) {
      return;
    }
    FUN_1023d21a4();
  }
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1023d21a4; end: 1023d2433;  */

/* WARNING: Possible PIC construction at 0x0001023d21f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023d222c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023d22b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023d22fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023d2330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023d237c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023d23d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023d2380) */
/* WARNING: Removing unreachable block (ram,0x0001023d2334) */
/* WARNING: Removing unreachable block (ram,0x0001023d2300) */
/* WARNING: Removing unreachable block (ram,0x0001023d22bc) */
/* WARNING: Removing unreachable block (ram,0x0001023d2230) */
/* WARNING: Removing unreachable block (ram,0x0001023d21f8) */
/* WARNING: Removing unreachable block (ram,0x0001023d23dc) */

void FUN_1023d21a4(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_112e93740;
  FUN_1023d1744(&DAT_112e93740,FUN_1023d08d8,&PTR_s_didTapAddSnapButton__112524ce8);
  func_0x000107c3d89c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1023d2434; end: 1023d24c7; -[_TtC35PreviewFeatureVideoPlaybackControls21ThumbnailControlsView didTapAddSnapButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d2434(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_112e93728;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x0001023cc968(0);
    func_0x000107c61174(param_1);
    FUN_1023cf3e4();
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1023d24c8; end: 1023d2513; -[_TtC35PreviewFeatureVideoPlaybackControls21ThumbnailControlsView didTapThumbnailButton:] */

/* WARNING: Possible PIC construction at 0x0001023d24fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023d2500) */

void FUN_1023d24c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1023d2514();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1023d2514; end: 1023d25af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d2514(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  puVar2 = PTR_PTR_1126affa8;
  func_0x000107c61168();
  func_0x000107c5aa04();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1023d258c);
    (*pcVar1)();
  }
  func_0x000107c4e57c();
  func_0x000107c61170(puVar2);
  lVar3 = unaff_x20 + _DAT_112e93728;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x0001023cfe48();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
    return;
  }
  return;
}



/* Entry: 1023d25b0; end: 1023d25c7;  */

void FUN_1023d25b0(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = &DAT_112e93738;
    FUN_1023d1744(&DAT_112e93738,FUN_1023d0f60,&PTR_s_didTapThumbnailButton__112524cf0);
    func_0x000107c61170(lVar1);
    FUN_1023d08f8();
    func_0x000107c55258();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1023d25c8; end: 1023d26c7;  */

void FUN_1023d25c8(undefined8 *param_1,double *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  
  dVar7 = (double)(long)*param_2;
  if (0x7fefffffffffffff < (ulong)ABS(dVar7)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1023d26c0);
    (*pcVar3)();
  }
  if (-9.223372036854778e+18 < dVar7) {
    if (dVar7 < 9.223372036854776e+18) {
      lVar4 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x18) = 4;
      *(undefined8 *)(lVar4 + 0x10) = 2;
      puVar2 = PTR___sSis7CVarArgsWP_11034df08;
      puVar1 = PTR___sSiN_11034deb0;
      *(undefined **)(lVar4 + 0x38) = PTR___sSiN_11034deb0;
      *(undefined **)(lVar4 + 0x40) = puVar2;
      *(long *)(lVar4 + 0x20) = (long)dVar7 / 0x3c;
      *(undefined **)(lVar4 + 0x60) = puVar1;
      *(undefined **)(lVar4 + 0x68) = puVar2;
      *(long *)(lVar4 + 0x48) = (long)dVar7 % 0x3c;
      uVar5 = 0x643230253a6425;
      uVar6 = 0xe700000000000000;
      func_0x000107c5fb00(0x643230253a6425,0xe700000000000000,lVar4);
      *param_1 = uVar5;
      param_1[1] = uVar6;
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1023d26c8);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1023d26c4);
  (*pcVar3)();
}



/* Entry: 1023d26c8; end: 1023d271b;  */

void FUN_1023d26c8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1023d271c; end: 1023d2727; -[SCPreviewFeatureVideoPlaybackControlsPreviewPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d271c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e93828;
  func_0x000107c61428(param_1 + _DAT_112e93828,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1023d2728; end: 1023d2733; -[SCPreviewFeatureVideoPlaybackControlsPreviewPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d2728(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e93828;
  func_0x000107c61428(param_1 + _DAT_112e93828,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1023d2734; end: 1023d273f; -[SCPreviewFeatureVideoPlaybackControlsPreviewPluginEntryPoint previewFeatureVideoPlaybackControls] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d2734(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e93830;
  func_0x000107c61428(param_1 + _DAT_112e93830,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1023d2740; end: 1023d2783;  */

void FUN_1023d2740(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1023d2784; end: 1023d278f; -[SCPreviewFeatureVideoPlaybackControlsPreviewPluginEntryPoint setPreviewFeatureVideoPlaybackControls:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d2784(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e93830;
  func_0x000107c61428(param_1 + _DAT_112e93830,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1023d2790; end: 1023d27e3;  */

void FUN_1023d2790(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1023d27e4; end: 1023d2943;  */

/* WARNING: Possible PIC construction at 0x0001023d28b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023d28c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023d28d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023d28e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023d28d8) */
/* WARNING: Removing unreachable block (ram,0x0001023d28c8) */
/* WARNING: Removing unreachable block (ram,0x0001023d28b4) */
/* WARNING: Removing unreachable block (ram,0x0001023d28e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d27e4(void)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  func_0x000107c4f0f4();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    FUN_1023c3580(0);
    func_0x000107c613fc();
    func_0x000107c6157c(*(undefined8 *)(unaff_x20 + _DAT_112ff3e38));
    func_0x000107c4e9e4(lVar1);
    func_0x000107c61180();
    uVar2 = 0x112d73a18;
    func_0x0001000285a8(0x112d73a18,&UNK_10d9341e0);
    pcVar3 = FUN_1023c3558;
    func_0x0001000cb480(FUN_1023c3558,0,uVar2);
    func_0x0001003a5b88();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(pcVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1023d2944; end: 1023d296b; -[SCPreviewFeatureVideoPlaybackControlsPreviewPluginEntryPoint begin] */

void FUN_1023d2944(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1023d27e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1023d296c; end: 1023d29af; -[SCPreviewFeatureVideoPlaybackControlsPreviewPluginEntryPoint end] */

void FUN_1023d296c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1023d29b0; end: 1023d2b47;  */

void FUN_1023d29b0(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef0f69510)) {
      uVar2 = 0xd000000000000023;
      func_0x000107c605b8(0xd000000000000023,0x800000010f096af0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "PreviewFeatureVideoPlaybackControls/SCPreviewFeatureVideoPlaybackControlsPreviewPluginEntryPoint.swift"
                            ,0x66,2,0x29,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1023d2b48);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57794();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1023d2b48; end: 1023d2bf3; -[SCPreviewFeatureVideoPlaybackControlsPreviewPluginEntryPoint setValue:forIvarName:] */

void FUN_1023d2b48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1023d29b0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1023d2bf4; end: 1023d2c67; -[SCPreviewFeatureVideoPlaybackControlsPreviewPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d2bf4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e93828,0);
  func_0x000107c61614(param_1 + _DAT_112e93830,0);
  *(undefined8 *)(param_1 + _DAT_112e93838) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1023d2c68; end: 1023d2c9b;  */

void FUN_1023d2c68(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1023d2c9c; end: 1023d2ce3; -[SCPreviewFeatureVideoPlaybackControlsPreviewPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d2c9c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e93828);
  func_0x000107c61610(param_1 + _DAT_112e93830);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e93838));
  return;
}



/* Entry: 1023d2ce4; end: 1023d2d03;  */

void FUN_1023d2ce4(void)

{
  func_0x000107c61168(&PTR_PTR_11283ac20);
  return;
}



/* Entry: 1023d2d04; end: 1023d2d13; -[SCStoriesPostingReplyParameters addToMyStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1023d2d04(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112e93868);
}



/* Entry: 1023d2d14; end: 1023d2d23; -[SCStoriesPostingReplyParameters addToCustomStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1023d2d14(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112e93870);
}



/* Entry: 1023d2d24; end: 1023d2d33; -[SCStoriesPostingReplyParameters addToOurStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1023d2d24(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112e93878);
}



/* Entry: 1023d2d34; end: 1023d2d43; -[SCStoriesPostingReplyParameters isMultiRecipient] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1023d2d34(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112e93880);
}



/* Entry: 1023d2d44; end: 1023d2d4f; -[SCStoriesPostingReplyParameters groupIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d2d44(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112e93888);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1023d2d50; end: 1023d2d5b; -[SCStoriesPostingReplyParameters userIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d2d50(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112e93890);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1023d2d5c; end: 1023d2dab;  */

void FUN_1023d2d5c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1023d2dac; end: 1023d2dbb; -[SCStoriesPostingReplyParameters isMischief] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1023d2dac(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112e93898);
}



/* Entry: 1023d2dbc; end: 1023d2dc7; -[SCStoriesPostingReplyParameters replyDisplayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d2dbc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112e938a0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112e938a0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1023d2dc8; end: 1023d2dd3; -[SCStoriesPostingReplyParameters replyUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d2dc8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112e938a8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112e938a8);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1023d2dd4; end: 1023d2ddf; -[SCStoriesPostingReplyParameters replyUsername] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d2dd4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112e938b0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112e938b0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1023d2de0; end: 1023d2deb; -[SCStoriesPostingReplyParameters businessProfileId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d2de0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112e938b8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112e938b8);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1023d2dec; end: 1023d2e43;  */

void FUN_1023d2dec(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1023d2e44; end: 1023d2f8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d2e44(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112e93868) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112e93870) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112e93878) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_112e93880) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e93888) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112e93890) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_112e93898) = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e938a0);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e938a8);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e938b0);
  *puVar1 = param_12;
  puVar1[1] = param_13;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e938b8);
  *puVar1 = param_14;
  puVar1[1] = param_15;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1023d2f90; end: 1023d3083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d2f90(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _DAT_112e93868) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112e93870) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112e93878) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_112e93880) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e93888) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112e93890) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_112e93898) = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e938a0);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e938a8);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e938b0);
  *puVar1 = param_12;
  puVar1[1] = param_13;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e938b8);
  *puVar1 = param_14;
  puVar1[1] = param_15;
  func_0x0001023d3064();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1023d3084; end: 1023d320b; -[SCStoriesPostingReplyParameters initWithAddToMyStory:addToCustomStory:addToOurStory:isMultiRecipient:groupIds:userIds:isMischief:replyDisplayName:replyUserId:replyUsername:businessProfileId:] */

void FUN_1023d3084(undefined8 param_1,undefined *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,long param_7,long param_8,undefined1 param_9
                  ,undefined4 param_10,long param_11,long param_12,long param_13,long param_14)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if (param_7 == 0) {
    uStack_80 = 0;
  }
  else {
    param_2 = PTR___sSSN_11034da80;
    func_0x000107c5fc54();
    uStack_80 = param_7;
  }
  if (param_8 == 0) {
    uStack_88 = 0;
  }
  else {
    param_2 = PTR___sSSN_11034da80;
    func_0x000107c5fc54();
    uStack_88 = param_8;
  }
  if (param_11 == 0) {
    param_11 = 0;
    puVar8 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec(param_11);
    puVar8 = param_2;
  }
  lVar3 = param_12;
  func_0x000107c61174();
  lVar4 = param_13;
  func_0x000107c61174();
  lVar5 = param_14;
  func_0x000107c61174();
  if (lVar3 == 0) {
    param_12 = 0;
    puVar2 = (undefined *)0x0;
    puVar6 = param_2;
  }
  else {
    func_0x000107c5faec();
    puVar6 = param_2;
    func_0x000107c61170(lVar3);
    puVar2 = param_2;
  }
  if (lVar4 == 0) {
    param_13 = 0;
    puVar1 = (undefined *)0x0;
    puVar7 = puVar6;
  }
  else {
    func_0x000107c5faec();
    puVar7 = puVar6;
    func_0x000107c61170(lVar4);
    puVar1 = puVar6;
  }
  if (lVar5 == 0) {
    param_14 = 0;
    puVar7 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec();
    func_0x000107c61170(lVar5);
  }
  FUN_1023d2f90(param_3,param_4,param_5,param_6,uStack_80,uStack_88,param_9,param_11,puVar8,param_12
                ,puVar2,param_13,puVar1,param_14,puVar7);
  return;
}



/* Entry: 1023d320c; end: 1023d3267; -[SCStoriesPostingReplyParameters init] */

void FUN_1023d320c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCStoriesPostingServicesImpl.StoriesPostingReplyParameters",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023d3238);
  (*pcVar1)();
}



/* Entry: 1023d3268; end: 1023d32ef; -[SCStoriesPostingReplyParameters .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001023d3284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023d32a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023d32d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023d32ac) */
/* WARNING: Removing unreachable block (ram,0x0001023d3288) */
/* WARNING: Removing unreachable block (ram,0x0001023d32d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d3268(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e93888));
  return;
}



/* Entry: 1023d32f0; end: 1023d330f;  */

bool FUN_1023d32f0(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1023d3310; end: 1023d346f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d3310(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112e938f0;
  uVar3 = 0x112e938c0;
  func_0x0001000285a8(0x112e938c0,&UNK_10da9f410);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e938f8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e93900) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e93908) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e93910) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112e93918) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112e93920) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112e93928) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112e93930) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112e93938) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112e93940) = param_11;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1023d3470; end: 1023d348f;  */

void FUN_1023d3470(void)

{
  func_0x000107c61168(&PTR_PTR_11283adf8);
  return;
}



/* Entry: 1023d3490; end: 1023d34eb; -[_TtC28SCStoriesPostingServicesImpl25StoriesPostingServiceImpl init] */

void FUN_1023d3490(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCStoriesPostingServicesImpl.StoriesPostingServiceImpl",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023d34bc);
  (*pcVar1)();
}



/* Entry: 1023d34ec; end: 1023d35b7; -[_TtC28SCStoriesPostingServicesImpl25StoriesPostingServiceImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001023d352c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023d354c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023d356c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001023d358c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023d3570) */
/* WARNING: Removing unreachable block (ram,0x0001023d3550) */
/* WARNING: Removing unreachable block (ram,0x0001023d3530) */
/* WARNING: Removing unreachable block (ram,0x0001023d3590) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d34ec(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e938f8 + 8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e93900));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e93908));
  return;
}



/* Entry: 1023d35b8; end: 1023d35f7; -[_TtC28SCStoriesPostingServicesImpl25StoriesPostingServiceImpl quickSendConfigurationSCObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d35b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1023d35f8; end: 1023d483f;  */

/* WARNING: Removing unreachable block (ram,0x0001023d4810) */
/* WARNING: Removing unreachable block (ram,0x0001023d4834) */
/* WARNING: Removing unreachable block (ram,0x0001023d4828) */
/* WARNING: Removing unreachable block (ram,0x0001023d4804) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d35f8(long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  long lVar12;
  ulong *puVar13;
  ulong *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong *puVar21;
  undefined8 uVar22;
  undefined **ppuVar23;
  ulong uVar24;
  ulong uVar25;
  ulong *puVar26;
  undefined8 *puVar27;
  long unaff_x20;
  long lVar28;
  undefined **ppuVar29;
  ulong uVar30;
  long lVar31;
  code *pcVar32;
  ulong *puVar33;
  ulong *puVar34;
  ulong uVar35;
  ulong *puVar36;
  undefined8 uVar37;
  undefined *puStack_f0;
  undefined *puStack_c8;
  ulong uStack_98;
  ulong *puStack_68;
  
  puVar36 = *(ulong **)(unaff_x20 + _DAT_112e93900);
  if (puVar36 == (ulong *)0x0) {
    return;
  }
  func_0x000107c615f0(puVar36);
  func_0x0001000d224c(&puStack_68);
  if (puStack_68 == (ulong *)0x0) goto LAB_1023d3cc8;
  func_0x000107c615e8();
  func_0x0001000d224c(&puStack_68);
  puVar9 = puStack_68;
  if (puStack_68 == (ulong *)0x0) goto LAB_1023d3cc8;
  func_0x0001000d224c(&puStack_68);
  puVar2 = puStack_68;
  if (puStack_68 == (ulong *)0x0) {
    func_0x000107c615e8(puVar36);
    puVar36 = puVar9;
    goto LAB_1023d3cc8;
  }
  func_0x0001000d224c(&puStack_68);
  puVar3 = puStack_68;
  if (puStack_68 == (ulong *)0x0) {
    func_0x000107c615e8(puVar36);
  }
  else {
    func_0x0001000d224c(&puStack_68);
    puVar4 = puStack_68;
    if (puStack_68 == (ulong *)0x0) {
      func_0x000107c615e8(puVar36);
      func_0x000107c615e8(puVar9);
      func_0x000107c615e8(puVar2);
      puVar36 = puVar3;
      goto LAB_1023d3cc8;
    }
    func_0x000103b0a55c(0);
    func_0x000107c610f8();
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar6 = (ulong *)0x0;
    func_0x000103b0a4e4(0,PTR___swiftEmptyArrayStorage_11034f1c8,
                        PTR___swiftEmptyArrayStorage_11034f1c8,
                        PTR___swiftEmptyArrayStorage_11034f1c8,
                        PTR___swiftEmptyArrayStorage_11034f1c8,
                        PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar33 = puVar36;
    func_0x000107c501d0();
    func_0x000107c61180();
    puVar7 = puVar33;
    FUN_1023d59f0();
    func_0x000107c61170(puVar33);
    if (((*(byte *)((long)puVar7 + _DAT_112e93898) & 1) == 0) &&
       (puVar33 = puVar36, func_0x000107c43b24(), (int)puVar33 == 0)) {
      if (*(char *)((long)puVar7 + _DAT_112e93870) == '\x01') {
        lVar28 = ((undefined8 *)((long)puVar7 + _DAT_112e938b0))[1];
        if (lVar28 == 0) {
          func_0x000107c61170(puVar7);
          func_0x000107c615e8(puVar36);
        }
        else {
          uVar37 = *(undefined8 *)((long)puVar7 + _DAT_112e938b0);
          func_0x000107c61434(lVar28);
          func_0x000107c5fadc(uVar37,lVar28);
          func_0x000107c6142c(lVar28);
          puVar33 = puVar3;
          func_0x000107c41140();
          func_0x000107c61180();
          func_0x000107c61170(uVar37);
          if (puVar33 != (ulong *)0x0) {
            puVar21 = puVar33;
            func_0x000107c4f638();
            func_0x000107c61180();
            if (puVar21 == (ulong *)0x0) goto LAB_1023d3d40;
            puVar8 = puVar33;
            func_0x000107c42120();
            func_0x000107c61180();
            if (puVar8 == (ulong *)0x0) {
              func_0x000107c61170(puVar33);
              func_0x000107c615e8(puVar36);
              func_0x000107c61170(puVar7);
              func_0x000107c615e8(puVar9);
              func_0x000107c615e8(puVar3);
              func_0x000107c615e8(puVar4);
              func_0x000107c61170(puVar6);
              func_0x000107c615e8(puVar2);
              func_0x000107c61170(puVar21);
              return;
            }
            puVar10 = puVar33;
            func_0x000107c5d0f0();
            func_0x000108438cec();
            func_0x000107c61180();
            if (puVar10 == (ulong *)0x0) {
              func_0x000107c61170(puVar21);
              func_0x000107c61170(puVar8);
                    /* WARNING: Does not return */
              pcVar32 = (code *)SoftwareBreakpoint(1,0x1023d4828);
              (*pcVar32)();
            }
            puVar15 = PTR_PTR_1126b5170;
            func_0x000107c610f8();
            func_0x000107c46fec();
            func_0x000107c61170(puVar21);
            func_0x000107c61170(puVar8);
            func_0x000107c61170();
            if (puVar15 != (undefined *)0x0) {
              FUN_1023d52d8();
              func_0x000107c613fc();
              puVar10[3] = 3;
              puVar10[2] = 1;
              puVar10[4] = (ulong)puVar15;
              pcVar32 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar6) + 0xd0);
              func_0x000107c61174(puVar15);
              (*pcVar32)(puVar10);
              func_0x000107c61170(puVar33);
              func_0x000107c61170(puVar15);
              goto LAB_1023d3c7c;
            }
            func_0x000107c61170(puVar33);
          }
LAB_1023d4288:
          func_0x000107c615e8(puVar36);
LAB_1023d4294:
          func_0x000107c61170(puVar7);
        }
        func_0x000107c615e8(puVar9);
        func_0x000107c615e8(puVar3);
LAB_1023d42ac:
        func_0x000107c615e8(puVar4);
        func_0x000107c61170(puVar6);
        puVar36 = puVar2;
        goto LAB_1023d3cc8;
      }
      lVar28 = ((undefined8 *)((long)puVar7 + _DAT_112e938b8))[1];
      if (lVar28 == 0) {
        if (*(char *)((long)puVar7 + _DAT_112e93868) == '\x01') {
          (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar6) + 0x88))(1);
        }
        else if (*(char *)((long)puVar7 + _DAT_112e93878) == '\x01') {
          func_0x000108f580b4();
          func_0x000107c61180();
          if (puVar33 == (ulong *)0x0) {
            func_0x000107c615e8(puVar36);
            goto LAB_1023d4294;
          }
          ppuVar29 = &PTR____CFConstantStringClassReference_110f52d58;
          ppuVar23 = &PTR____CFConstantStringClassReference_110e43098;
          func_0x000107c61174(&PTR____CFConstantStringClassReference_110e43098);
          puVar15 = PTR_PTR_1126b5170;
          func_0x000107c610f8();
          func_0x000107c46fec();
          func_0x000107c61170(ppuVar23);
          func_0x000107c61170(puVar33);
          func_0x000107c61170();
          if (puVar15 == (undefined *)0x0) goto LAB_1023d4288;
          FUN_1023d52d8();
          func_0x000107c613fc();
          ppuVar29[3] = (undefined *)0x3;
          ppuVar29[2] = (undefined *)0x1;
          ppuVar29[4] = puVar15;
          pcVar32 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar6) + 0x100);
          func_0x000107c61174(puVar15);
          (*pcVar32)(ppuVar29);
          func_0x000107c61170(puVar15);
        }
        else if (*(char *)((long)puVar7 + _DAT_112e93880) == '\x01') {
          lVar28 = *(long *)((long)puVar7 + _DAT_112e93888);
          if (lVar28 != 0) {
            lVar18 = lVar28;
            func_0x000107c61434(lVar28);
            func_0x000107c5fc48();
            func_0x000107c6142c(lVar28);
            puVar33 = puVar9;
            func_0x000107c440b0();
            func_0x000107c61180();
            func_0x000107c61170(lVar18);
            uVar37 = 0x112d6dfd0;
            func_0x0001000285a8(0x112d6dfd0,&UNK_10db63bd0);
            puVar21 = puVar33;
            func_0x000107c5fc54(puVar33,uVar37);
            func_0x000107c61170(puVar33);
            if ((ulong)puVar21 >> 0x3e == 0) {
              puVar33 = *(ulong **)(((ulong)puVar21 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar33 = (ulong *)((ulong)puVar21 & 0xffffffffffffff8);
              if ((ulong *)0x7fffffffffffffff < puVar21) {
                puVar33 = puVar21;
              }
              func_0x000107c60480();
            }
            puStack_f0 = PTR___swiftEmptyArrayStorage_11034f1c8;
            if (puVar33 != (ulong *)0x0) {
              uStack_98 = (ulong)puVar21 & 0xffffffffffffff8;
              lVar28 = *(long *)(unaff_x20 + _DAT_112e938f8);
              lVar18 = ((long *)(unaff_x20 + _DAT_112e938f8))[1];
              puVar8 = (ulong *)0x0;
              do {
                while( true ) {
                  if (((ulong)puVar21 & 0xc000000000000001) == 0) {
                    if (*(ulong **)(uStack_98 + 0x10) <= puVar8) {
                    /* WARNING: Does not return */
                      pcVar32 = (code *)SoftwareBreakpoint(1,0x1023d441c);
                      (*pcVar32)();
                    }
                    puVar10 = (ulong *)puVar21[(long)puVar8 + 4];
                    func_0x000107c615f0();
                  }
                  else {
                    puVar10 = puVar8;
                    func_0x000101bcb3d0(puVar8,puVar21);
                  }
                  if (SCARRY8((long)puVar8,1)) {
                    /* WARNING: Does not return */
                    pcVar32 = (code *)SoftwareBreakpoint(1,0x1023d4418);
                    (*pcVar32)();
                  }
                  puVar26 = (ulong *)((long)puVar8 + 1);
                  func_0x000107c615f0();
                  func_0x0001000d224c(&puStack_68);
                  puVar5 = puStack_68;
                  if (puStack_68 != (ulong *)0x0) break;
LAB_1023d3fa4:
                  func_0x000107c615ec(puVar10,2);
LAB_1023d3fac:
                  puVar8 = (ulong *)((long)puVar8 + 1);
                  if (puVar26 == puVar33) goto LAB_1023d4448;
                }
                puVar11 = puStack_68;
                func_0x000107c41050();
                func_0x000107c61180();
                if (puVar11 == (ulong *)0x0) {
                  func_0x000107c61170(puVar5);
                  goto LAB_1023d3fa4;
                }
                func_0x000107c615f0(puVar10);
                lVar12 = lVar28;
                func_0x000107c5fadc(lVar28,lVar18);
                puVar13 = puVar10;
                lVar31 = lVar12;
                func_0x000108ef3728(puVar10,lVar12,puVar11);
                func_0x000107c61180();
                func_0x000107c615e8(puVar10);
                func_0x000107c61170(lVar12);
                if (puVar13 == (ulong *)0x0) {
                  func_0x000107c61170(puVar5);
                  func_0x000107c61170(puVar11);
                  goto LAB_1023d3fa4;
                }
                puVar14 = puVar10;
                func_0x000107c444fc();
                func_0x000107c61180();
                if (puVar14 == (ulong *)0x0) {
                  puVar34 = (ulong *)0x0;
                  lVar31 = 0;
                }
                else {
                  puVar34 = puVar14;
                  func_0x000107c5faec();
                  func_0x000107c61170(puVar14);
                }
                if (lVar31 == 0) {
                  puVar34 = (ulong *)0x0;
                }
                else {
                  func_0x000107c5fadc(puVar34,lVar31);
                  func_0x000107c6142c(lVar31);
                }
                puVar15 = PTR_PTR_1126b5170;
                func_0x000107c610f8();
                func_0x000107c46fec();
                func_0x000107c61170(puVar5);
                func_0x000107c61170(puVar11);
                func_0x000107c61170(puVar34);
                func_0x000107c61170(puVar13);
                func_0x000107c61170(&PTR____CFConstantStringClassReference_110f52c98);
                func_0x000107c615ec(puVar10,2);
                if (puVar15 == (undefined *)0x0) goto LAB_1023d3fac;
                puVar16 = puStack_f0;
                func_0x000107c61550();
                if ((((int)puVar16 == 0) || ((long)puStack_f0 < 0)) ||
                   (((ulong)puStack_f0 >> 0x3e & 1) != 0)) {
                  if ((ulong)puStack_f0 >> 0x3e == 0) {
                    puVar16 = *(undefined **)(((ulong)puStack_f0 & 0xffffffffffffff8) + 0x10);
                  }
                  else {
                    puVar16 = (undefined *)((ulong)puStack_f0 & 0xffffffffffffff8);
                    if ((undefined *)0x7fffffffffffffff < puStack_f0) {
                      puVar16 = puStack_f0;
                    }
                    func_0x000107c60480(puVar16);
                  }
                  puVar17 = (undefined *)0x0;
                  func_0x0001023d53f4(0,puVar16 + 1,1,puStack_f0);
                  puStack_f0 = puVar17;
                }
                uVar24 = (ulong)puStack_f0 & 0xffffffffffffff8;
                uVar30 = *(ulong *)(uVar24 + 0x10);
                if (*(ulong *)(uVar24 + 0x18) >> 1 <= uVar30) {
                  puVar16 = (undefined *)(ulong)(1 < *(ulong *)(uVar24 + 0x18));
                  func_0x0001023d53f4(puVar16,uVar30 + 1,1,puStack_f0);
                  uVar24 = (ulong)puVar16 & 0xffffffffffffff8;
                  puStack_f0 = puVar16;
                }
                *(ulong *)(uVar24 + 0x10) = uVar30 + 1;
                *(undefined **)(uVar24 + uVar30 * 8 + 0x20) = puVar15;
                puVar8 = puVar26;
              } while (puVar26 != puVar33);
            }
LAB_1023d4448:
            func_0x000107c6142c(puVar21);
            (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar6) + 0xa0))(puStack_f0);
          }
          lVar28 = *(long *)((long)puVar7 + _DAT_112e93890);
          if (lVar28 != 0) {
            uVar30 = *(ulong *)(lVar28 + 0x10);
            func_0x000107c61434();
            if (uVar30 != 0) {
              uVar24 = 0;
              puStack_c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_1023d44cc:
              puVar27 = (undefined8 *)(lVar28 + 0x28 + uVar24 * 0x10);
              uVar35 = uVar24;
              do {
                if (*(ulong *)(lVar28 + 0x10) <= uVar35) {
                    /* WARNING: Does not return */
                  pcVar32 = (code *)SoftwareBreakpoint(1,0x1023d47cc);
                  (*pcVar32)();
                }
                uVar37 = puVar27[-1];
                uVar20 = *puVar27;
                func_0x000107c61434(uVar20);
                uVar19 = uVar37;
                uVar22 = uVar20;
                func_0x000107c5fadc(uVar37,uVar20);
                puVar33 = puVar2;
                func_0x000107c4e118();
                func_0x000107c61180();
                func_0x000107c61170(uVar19);
                if (puVar33 == (ulong *)0x0) {
                  uVar22 = uVar20;
                  func_0x000107c5fadc(uVar37,uVar20);
                  puVar33 = puVar2;
                  func_0x000107c45304();
                  func_0x000107c61180();
                  func_0x000107c61170(uVar37);
                  if (puVar33 != (ulong *)0x0) goto LAB_1023d4580;
LAB_1023d4698:
                  func_0x000107c6142c(uVar20);
                }
                else {
LAB_1023d4580:
                  puVar21 = puVar33;
                  func_0x000107c5d984();
                  func_0x000107c61180();
                  if (puVar21 == (ulong *)0x0) {
                    func_0x000107c6142c(uVar20);
                    func_0x000107c61170(puVar33);
                  }
                  else {
                    puVar8 = puVar21;
                    func_0x000107c5faec();
                    uVar37 = uVar22;
                    func_0x000107c61170(puVar21);
                    puVar21 = puVar33;
                    func_0x000107c42120();
                    func_0x000107c61180();
                    if (puVar21 == (ulong *)0x0) {
                      func_0x000107c6142c(uVar20);
                      func_0x000107c61170(puVar33);
                      uVar20 = uVar22;
                      goto LAB_1023d4698;
                    }
                    puVar10 = puVar21;
                    func_0x000107c5faec();
                    func_0x000107c61170(puVar21);
                    puVar15 = PTR_PTR_1126b5170;
                    func_0x000107c610f8();
                    func_0x000107c5fadc(puVar8,uVar22);
                    func_0x000107c6142c(uVar22);
                    func_0x000107c5fadc(puVar10,uVar37);
                    func_0x000107c6142c(uVar37);
                    func_0x000107c46fec();
                    func_0x000107c61170(puVar33);
                    func_0x000107c61170(puVar8);
                    func_0x000107c61170(puVar10);
                    func_0x000107c61170(&PTR____CFConstantStringClassReference_110f52c78);
                    func_0x000107c6142c(uVar20);
                    if (puVar15 != (undefined *)0x0) goto LAB_1023d46a4;
                  }
                }
                uVar35 = uVar35 + 1;
                puVar27 = puVar27 + 2;
                if (uVar30 == uVar35) goto LAB_1023d4790;
              } while( true );
            }
            puStack_c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_1023d4790:
            func_0x000107c6142c();
            (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar6) + 0xb8))(puStack_c8);
          }
        }
        else {
          puStack_68 = (ulong *)puVar15;
          puVar33 = puVar7;
          FUN_1023d4e80();
          if (puVar33 != (ulong *)0x0) {
            func_0x000107c61174();
            if ((ulong)puVar15 >> 0x3e == 0) {
              puVar16 = *(undefined **)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar16 = (undefined *)((ulong)puVar15 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar15) {
                puVar16 = puVar15;
              }
              func_0x000107c60480(puVar16);
            }
            puVar8 = (ulong *)0x0;
            func_0x0001023d53f4(0,puVar16 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
            uVar24 = (ulong)puVar8 & 0xffffffffffffff8;
            uVar30 = *(ulong *)(uVar24 + 0x10);
            puVar21 = puVar8;
            if (*(ulong *)(uVar24 + 0x18) >> 1 <= uVar30) {
              puVar21 = (ulong *)(ulong)(1 < *(ulong *)(uVar24 + 0x18));
              func_0x0001023d53f4(puVar21,uVar30 + 1,1,puVar8);
              uVar24 = (ulong)puVar21 & 0xffffffffffffff8;
            }
            *(ulong *)(uVar24 + 0x10) = uVar30 + 1;
            *(ulong **)(uVar24 + uVar30 * 8 + 0x20) = puVar33;
            func_0x000107c61170(puVar33);
            puStack_68 = puVar21;
          }
          if (param_1 == 0) {
LAB_1023d43a4:
            lVar28 = 0;
          }
          else {
            func_0x000107c439d0();
            func_0x000107c61180();
            if (param_1 == 0) goto LAB_1023d43a4;
            lVar28 = param_1;
            func_0x000107c5fc54();
            func_0x000107c61170(param_1);
          }
          lVar18 = lVar28;
          FUN_1023d4a50(lVar28);
          func_0x000107c6142c(lVar28);
          FUN_1023d5054(lVar18);
          puVar33 = puStack_68;
          pcVar32 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar6) + 0xb8);
          func_0x000107c61434(puStack_68);
          (*pcVar32)();
          func_0x000107c6142c(puVar33);
        }
      }
      else {
        uVar37 = *(undefined8 *)((long)puVar7 + _DAT_112e938b8);
        func_0x000107c61434(lVar28);
        puVar33 = puVar4;
        FUN_1023d61e4(puVar4,uVar37,lVar28);
        func_0x000107c6142c(lVar28);
        if (puVar33 == (ulong *)0x0) {
          func_0x000107c615e8(puVar36);
          func_0x000107c61170(puVar7);
          func_0x000107c615e8(puVar9);
          func_0x000107c615e8(puVar3);
          goto LAB_1023d42ac;
        }
        puVar21 = puVar33;
        func_0x000107c3f408();
        if (((ulong)puVar21 & 1) == 0) {
LAB_1023d3d40:
          func_0x000107c61170(puVar33);
          func_0x000107c615e8(puVar36);
          goto LAB_1023d4294;
        }
        puVar21 = puVar33;
        func_0x000107c4f348();
        func_0x000107c61180();
        puVar8 = puVar21;
        func_0x000107c4f38c();
        func_0x000107c61180();
        func_0x000107c61170(puVar21);
        uVar20 = uVar37;
        if (puVar8 == (ulong *)0x0) {
          puVar8 = (ulong *)0x0;
          func_0x000107c5faec(0);
          uVar20 = uVar37;
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar37);
        }
        puVar21 = puVar33;
        FUN_1023d4dc0(puVar33);
        ppuVar23 = &PTR____CFConstantStringClassReference_110f52d38;
        puVar15 = PTR_PTR_1126b5170;
        func_0x000107c610f8();
        func_0x000107c5fadc(puVar21,uVar20);
        func_0x000107c6142c(uVar20);
        func_0x000107c46fec();
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar21);
        func_0x000107c61170();
        if (puVar15 != (undefined *)0x0) {
          FUN_1023d52d8();
          func_0x000107c613fc();
          ppuVar23[3] = (undefined *)0x3;
          ppuVar23[2] = (undefined *)0x1;
          ppuVar23[4] = puVar15;
          pcVar32 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar6) + 0xe8);
          func_0x000107c61174(puVar15);
          (*pcVar32)(ppuVar23);
          func_0x000107c61170(puVar15);
        }
        func_0x000107c61170(puVar33);
      }
    }
    else {
      lVar28 = ((undefined8 *)((long)puVar7 + _DAT_112e938b0))[1];
      if (lVar28 != 0) {
        uVar37 = *(undefined8 *)((long)puVar7 + _DAT_112e938b0);
        func_0x000107c61434(lVar28);
        func_0x000107c5fadc(uVar37,lVar28);
        func_0x000107c6142c(lVar28);
        puVar33 = puVar9;
        func_0x000107c440ac();
        func_0x000107c61180();
        func_0x000107c61170(uVar37);
        if (puVar33 != (ulong *)0x0) {
          puVar21 = puVar33;
          func_0x000107c615f0();
          FUN_1023d4840();
          puVar8 = puVar33;
          func_0x000107c615e8();
          if (puVar21 == (ulong *)0x0) {
            func_0x000107c615e8(puVar33);
          }
          else {
            FUN_1023d52d8();
            func_0x000107c613fc();
            puVar8[3] = 3;
            puVar8[2] = 1;
            puVar8[4] = (ulong)puVar21;
            pcVar32 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar6) + 0xa0);
            func_0x000107c61174(puVar21);
            (*pcVar32)(puVar8);
            func_0x000107c615e8(puVar33);
            func_0x000107c61170(puVar21);
          }
        }
      }
      if (param_1 == 0) {
LAB_1023d3c38:
        lVar28 = 0;
      }
      else {
        func_0x000107c439d0();
        func_0x000107c61180();
        if (param_1 == 0) goto LAB_1023d3c38;
        lVar28 = param_1;
        func_0x000107c5fc54();
        func_0x000107c61170(param_1);
      }
      lVar18 = lVar28;
      FUN_1023d4a50(lVar28);
      func_0x000107c6142c(lVar28);
      (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar6) + 0xb8))(lVar18);
    }
LAB_1023d3c7c:
    puStack_68 = puVar6;
    func_0x0001002a64a8(&puStack_68);
    func_0x000107c61170(puVar6);
    func_0x000107c615e8(puVar36);
    func_0x000107c61170(puVar7);
    func_0x000107c615e8(puVar9);
    func_0x000107c615e8(puVar3);
    puVar9 = puVar4;
  }
  func_0x000107c615e8(puVar9);
  puVar36 = puVar2;
LAB_1023d3cc8:
  func_0x000107c615e8(puVar36);
  return;
LAB_1023d46a4:
  puVar16 = puStack_c8;
  func_0x000107c61550();
  if ((((int)puVar16 == 0) || ((long)puStack_c8 < 0)) || (((ulong)puStack_c8 >> 0x3e & 1) != 0)) {
    if ((ulong)puStack_c8 >> 0x3e == 0) {
      puVar16 = *(undefined **)(((ulong)puStack_c8 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar16 = (undefined *)((ulong)puStack_c8 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puStack_c8) {
        puVar16 = puStack_c8;
      }
      func_0x000107c60480(puVar16);
    }
    puVar17 = (undefined *)0x0;
    func_0x0001023d53f4(0,puVar16 + 1,1,puStack_c8);
    puStack_c8 = puVar17;
  }
  uVar25 = (ulong)puStack_c8 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar25 + 0x10);
  if (*(ulong *)(uVar25 + 0x18) >> 1 <= uVar1) {
    puVar16 = (undefined *)(ulong)(1 < *(ulong *)(uVar25 + 0x18));
    func_0x0001023d53f4(puVar16,uVar1 + 1,1,puStack_c8);
    uVar25 = (ulong)puVar16 & 0xffffffffffffff8;
    puStack_c8 = puVar16;
  }
  uVar24 = uVar35 + 1;
  *(ulong *)(uVar25 + 0x10) = uVar1 + 1;
  *(undefined **)(uVar25 + uVar1 * 8 + 0x20) = puVar15;
  if (uVar30 - 1 == uVar35) goto LAB_1023d4790;
  goto LAB_1023d44cc;
}



/* Entry: 1023d4840; end: 1023d4a4f;  */

/* WARNING: Removing unreachable block (ram,0x0001023d4a4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1023d4840(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lStack_58;
  
  if (param_1 != 0) {
    func_0x000107c615f0();
    func_0x0001000d224c(&lStack_58);
    if (lStack_58 == 0) {
      func_0x000107c615e8(param_1);
    }
    else {
      lVar1 = lStack_58;
      func_0x000107c41050();
      func_0x000107c61180();
      if (lVar1 == 0) {
        func_0x000107c615e8(param_1);
      }
      else {
        lVar2 = *(long *)(unaff_x20 + _DAT_112e938f8);
        lVar3 = ((long *)(unaff_x20 + _DAT_112e938f8))[1];
        func_0x000107c615f0(param_1);
        func_0x000107c5fadc(lVar2,lVar3);
        lVar3 = param_1;
        lVar5 = lVar2;
        func_0x000108ef3728(param_1,lVar2,lVar1);
        func_0x000107c61180();
        func_0x000107c615e8(param_1);
        func_0x000107c61170(lVar2);
        if (lVar3 != 0) {
          lVar2 = lVar3;
          func_0x000107c5faec(lVar3);
          lVar7 = lVar5;
          func_0x000107c61170(lVar3);
          lVar3 = param_1;
          func_0x000107c444fc();
          func_0x000107c61180();
          if (lVar3 == 0) {
            lVar6 = 0;
            lVar7 = 0;
          }
          else {
            lVar6 = lVar3;
            func_0x000107c5faec();
            func_0x000107c61170(lVar3);
          }
          if (lVar7 == 0) {
            lVar6 = 0;
          }
          else {
            func_0x000107c5fadc(lVar6,lVar7);
            func_0x000107c6142c(lVar7);
          }
          puVar4 = PTR_PTR_1126b5170;
          func_0x000107c610f8(PTR_PTR_1126b5170);
          func_0x000107c5fadc(lVar2,lVar5);
          func_0x000107c6142c(lVar5);
          func_0x000107c46fec(puVar4);
          func_0x000107c615e8(param_1);
          func_0x000107c61170(lStack_58);
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar6);
          func_0x000107c61170(lVar2);
          func_0x000107c61170(&PTR____CFConstantStringClassReference_110f52c98);
          return puVar4;
        }
        func_0x000107c615e8(param_1);
        func_0x000107c61170(lStack_58);
        lStack_58 = lVar1;
      }
      func_0x000107c61170(lStack_58);
    }
  }
  return (undefined *)0x0;
}



/* Entry: 1023d4a50; end: 1023d4dbf;  */

/* WARNING: Removing unreachable block (ram,0x0001023d4dbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1023d4a50(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uStack_68;
  
  if ((param_1 == 0) || (uVar16 = *(ulong *)(param_1 + 0x10), uVar16 == 0)) {
    return;
  }
  uVar15 = 0;
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_1023d4ab8:
  uVar1 = uVar15;
  if (uVar15 <= uVar16) {
    uVar1 = uVar16;
  }
  puVar17 = (undefined8 *)(param_1 + 0x28 + uVar15 * 0x10);
  uVar15 = uVar15 + 1;
  do {
    if (uVar15 - uVar1 == 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1023d4dbc);
      (*pcVar3)();
    }
    uVar4 = puVar17[-1];
    uVar2 = *puVar17;
    func_0x000107c61434(uVar2);
    func_0x0001000d224c(&uStack_68);
    uVar14 = uStack_68;
    if (uStack_68 == 0) {
LAB_1023d4ae4:
      func_0x000107c6142c(uVar2);
    }
    else {
      uVar13 = uVar2;
      func_0x000107c5fadc(uVar4,uVar2);
      uVar5 = uVar14;
      func_0x000107c4e118();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      if (uVar5 == 0) {
        func_0x000107c615e8(uVar14);
        goto LAB_1023d4ae4;
      }
      uVar6 = uVar5;
      func_0x000107c5d984();
      func_0x000107c61180();
      if (uVar6 == 0) {
        func_0x000107c615e8(uVar14);
        func_0x000107c61170(uVar5);
        goto LAB_1023d4ae4;
      }
      uVar7 = uVar6;
      func_0x000107c5faec();
      uVar4 = uVar13;
      func_0x000107c61170(uVar6);
      uVar6 = uVar5;
      func_0x000107c42120();
      func_0x000107c61180();
      if (uVar6 == 0) {
        func_0x000107c615e8(uVar14);
        func_0x000107c61170(uVar5);
        func_0x000107c6142c(uVar13);
        func_0x000107c6142c(uVar2);
      }
      else {
        uVar8 = uVar6;
        func_0x000107c5faec();
        func_0x000107c61170(uVar6);
        uVar6 = uVar5;
        func_0x000100bf119c();
        if ((uVar6 & 1) == 0) {
          func_0x000107c615e8(uVar14);
          func_0x000107c61170(uVar5);
          func_0x000107c6142c(uVar13);
          func_0x000107c6142c(uVar4);
          func_0x000107c6142c(uVar2);
        }
        else {
          puVar9 = PTR_PTR_1126b5170;
          func_0x000107c610f8();
          func_0x000107c5fadc(uVar7,uVar13);
          func_0x000107c6142c(uVar13);
          func_0x000107c5fadc(uVar8,uVar4);
          func_0x000107c6142c(uVar4);
          func_0x000107c46fec();
          func_0x000107c615e8(uVar14);
          func_0x000107c61170(uVar5);
          func_0x000107c6142c(uVar2);
          func_0x000107c61170(uVar7);
          func_0x000107c61170(uVar8);
          func_0x000107c61170(&PTR____CFConstantStringClassReference_110f52c78);
          if (puVar9 != (undefined *)0x0) break;
        }
      }
    }
    uVar15 = uVar15 + 1;
    puVar17 = puVar17 + 2;
    if (uVar15 - uVar16 == 1) {
      return;
    }
  } while( true );
  puVar12 = puVar11;
  func_0x000107c61550();
  if (((((ulong)puVar12 & 1) == 0) || ((long)puVar11 < 0)) || (((ulong)puVar11 >> 0x3e & 1) != 0)) {
    if ((ulong)puVar11 >> 0x3e == 0) {
      puVar12 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar12 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar11) {
        puVar12 = puVar11;
      }
      func_0x000107c60480(puVar12);
    }
    puVar10 = (undefined *)0x0;
    func_0x0001023d53f4(0,puVar12 + 1,1,puVar11);
    puVar11 = puVar10;
  }
  uVar14 = (ulong)puVar11 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar14 + 0x10);
  puVar12 = puVar11;
  if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar1) {
    puVar12 = (undefined *)(ulong)(1 < *(ulong *)(uVar14 + 0x18));
    func_0x0001023d53f4(puVar12,uVar1 + 1,1,puVar11);
    uVar14 = (ulong)puVar12 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar14 + 0x10) = uVar1 + 1;
  *(undefined **)(uVar14 + uVar1 * 8 + 0x20) = puVar9;
  puVar11 = puVar12;
  if (uVar15 == uVar16) {
    return;
  }
  goto LAB_1023d4ab8;
}



/* Entry: 1023d4dc0; end: 1023d4e7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1023d4dc0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  lVar2 = param_1;
  func_0x000107c4f348();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c970();
  func_0x000107c61170();
  if ((lVar3 == 1) && (*(long *)(unaff_x20 + _DAT_112e93940) != 0)) {
    func_0x000108f591dc();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023d4e24);
      (*pcVar1)();
    }
  }
  else {
    func_0x000107c4f348(param_1);
    func_0x000107c61180();
    lVar2 = param_1;
    func_0x000107c5cab0();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
  }
  lVar3 = lVar2;
  func_0x000107c5faec(lVar2);
  func_0x000107c61170(lVar2);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = lVar3;
  return auVar4;
}



/* Entry: 1023d4e80; end: 1023d5053;  */

/* WARNING: Removing unreachable block (ram,0x0001023d5050) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1023d4e80(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lStack_58;
  
  lVar7 = ((undefined8 *)(param_1 + _DAT_112e938b0))[1];
  if (lVar7 != 0) {
    uVar8 = *(undefined8 *)(param_1 + _DAT_112e938b0);
    func_0x0001000d224c(&lStack_58);
    if (lStack_58 != 0) {
      func_0x000107c5fadc(uVar8,lVar7);
      lVar1 = lStack_58;
      func_0x000107c4e11c();
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      if (lVar1 == 0) {
        func_0x000107c615e8(lStack_58);
      }
      else {
        lVar2 = lVar1;
        func_0x000107c5d984();
        func_0x000107c61180();
        if (lVar2 == 0) {
          func_0x000107c615e8(lStack_58);
          func_0x000107c61170(lVar1);
        }
        else {
          lVar3 = lVar2;
          func_0x000107c5faec();
          lVar6 = lVar7;
          func_0x000107c61170(lVar2);
          lVar2 = lVar1;
          func_0x000107c42120();
          func_0x000107c61180();
          if (lVar2 != 0) {
            lVar4 = lVar2;
            func_0x000107c5faec();
            func_0x000107c61170(lVar2);
            puVar5 = PTR_PTR_1126b5170;
            func_0x000107c610f8(PTR_PTR_1126b5170);
            func_0x000107c5fadc(lVar3,lVar7);
            func_0x000107c6142c(lVar7);
            func_0x000107c5fadc(lVar4,lVar6);
            func_0x000107c6142c(lVar6);
            func_0x000107c46fec(puVar5);
            func_0x000107c615e8(lStack_58);
            func_0x000107c61170(lVar1);
            func_0x000107c61170(lVar3);
            func_0x000107c61170(lVar4);
            func_0x000107c61170(&PTR____CFConstantStringClassReference_110f52c78);
            return puVar5;
          }
          func_0x000107c615e8(lStack_58);
          func_0x000107c61170(lVar1);
          func_0x000107c6142c(lVar7);
        }
      }
    }
  }
  return (undefined *)0x0;
}



/* Entry: 1023d5054; end: 1023d513f;  */

void FUN_1023d5054(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    FUN_1023d5344(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_1023d56b4(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023d513c);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1023d5140);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1023d5138);
  (*pcVar1)();
}



/* Entry: 1023d5140; end: 1023d5187; -[_TtC28SCStoriesPostingServicesImpl25StoriesPostingServiceImpl configureQuickSendWithLensPreviewAction:] */

void FUN_1023d5140(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_1023d35f8(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1023d5188; end: 1023d518b; -[_TtC28SCStoriesPostingServicesImpl25StoriesPostingServiceImpl configureQuickPostStory] */

void FUN_1023d5188(void)

{
  return;
}



/* Entry: 1023d518c; end: 1023d5267;  */

void FUN_1023d518c(undefined8 param_1,long param_2,undefined8 *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = *param_3;
  *param_3 = param_1;
  lVar4 = param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar3);
  func_0x000107c3ee5c();
  func_0x000107c61180();
  if (param_2 == 0) {
    lVar2 = 0;
    lVar4 = 0;
  }
  else {
    lVar2 = param_2;
    func_0x000107c5faec();
    func_0x000107c61170(param_2);
  }
  lVar1 = param_4[1];
  *param_4 = lVar2;
  param_4[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar1);
  return;
}



/* Entry: 1023d5268; end: 1023d52d7;  */

/* WARNING: Possible PIC construction at 0x0001023d52bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001023d52c0) */

void FUN_1023d5268(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  
  puVar2 = PTR___sSSN_11034da80;
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c5fc54(param_2,PTR___sSSN_11034da80);
  func_0x000107c5fc54(param_3,puVar2);
  (*pcVar1)(param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1023d52d8; end: 1023d5343;  */

void FUN_1023d52d8(void)

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
    FUN_1023d63c4(0,0x112e93978,&PTR_PTR_1126b5170);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112e93970;
  plVar5 = (long *)&UNK_10da9f480;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1023d5344; end: 1023d551b;  */

void FUN_1023d5344(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  func_0x0001023d53f4();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 1023d551c; end: 1023d559b;  */

undefined * FUN_1023d551c(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_1023d52d8();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 1023d559c; end: 1023d56b3;  */

long FUN_1023d559c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1023d56b0);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1023d56b4);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1023d63c4(0,0x112e93978,&PTR_PTR_1126b5170);
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
      FUN_1023d63c4(0,0x112e93978,&PTR_PTR_1126b5170);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1023d56ac);
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



/* Entry: 1023d56b4; end: 1023d5833;  */

ulong FUN_1023d56b4(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1023d5834);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1023d5828);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_1023d63c4(0,0x112e93978,&PTR_PTR_1126b5170);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1023d582c);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1023d5830);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          FUN_1023d5834(uVar7,param_3,&PTR_PTR_1126b5170,0x112e93978);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 1023d5834; end: 1023d59ef;  */

ulong FUN_1023d5834(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1023d5918);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1023d591c);
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
  FUN_1023d63c4(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1023d59f0);
  (*pcVar2)();
}



/* Entry: 1023d59f0; end: 1023d61e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1023d59f0(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  code *pcVar22;
  code *pcVar23;
  code *pcVar24;
  code *pcVar25;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  code *pcStack_170;
  undefined *puStack_168;
  code *pcStack_158;
  undefined *puStack_150;
  code *pcStack_140;
  undefined *puStack_138;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 uStack_ad;
  undefined2 uStack_ac;
  undefined2 uStack_aa;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_aa = 0;
  uStack_ac = 0;
  uStack_ad = 0;
  lStack_b8 = 0;
  if (param_1 == 0) {
    puStack_118 = (undefined *)0x0;
    puStack_110 = (undefined *)0x0;
    pcVar22 = (code *)0x0;
    pcVar25 = (code *)0x0;
    puStack_108 = (undefined *)0x0;
    puStack_100 = (undefined *)0x0;
    pcVar24 = (code *)0x0;
    pcVar23 = (code *)0x0;
LAB_1023d5f24:
    uStack_128 = 0;
    puStack_120 = (undefined *)0x0;
    pcStack_140 = (code *)0x0;
    puStack_138 = (undefined *)0x0;
    pcStack_158 = (code *)0x0;
    puStack_150 = (undefined *)0x0;
    pcStack_170 = (code *)0x0;
    puStack_168 = (undefined *)0x0;
  }
  else {
    puStack_100 = &UNK_1104fea50;
    func_0x000107c613fc(&UNK_1104fea50,0x18,7);
    *(long **)(puStack_100 + 0x10) = &lStack_b8;
    puVar14 = &UNK_1104fea78;
    func_0x000107c613fc(&UNK_1104fea78,0x20,7);
    pcVar23 = FUN_1023d6530;
    *(code **)(puVar14 + 0x10) = FUN_1023d6530;
    *(undefined **)(puVar14 + 0x18) = puStack_100;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_d8 = (code *)0x1023d655c;
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0x42000000;
    pcStack_e8 = (code *)&UNK_1019dec28;
    puStack_e0 = &UNK_1104fea90;
    ppuVar15 = &puStack_f8;
    puStack_d0 = puVar14;
    func_0x000107c60bc4(ppuVar15);
    func_0x000107c61574(puStack_d0);
    puStack_108 = &UNK_1104feac8;
    func_0x000107c613fc(&UNK_1104feac8,0x20,7);
    *(long **)(puStack_108 + 0x10) = &lStack_b8;
    *(undefined2 **)(puStack_108 + 0x18) = &uStack_ac;
    puVar14 = &UNK_1104feaf0;
    func_0x000107c613fc(&UNK_1104feaf0,0x20,7);
    pcVar24 = FUN_1023d657c;
    *(code **)(puVar14 + 0x10) = FUN_1023d657c;
    *(undefined **)(puVar14 + 0x18) = puStack_108;
    pcStack_d8 = (code *)0x1023d6638;
    puStack_f8 = puVar2;
    uStack_f0 = 0x42000000;
    pcStack_e8 = (code *)&UNK_1019e04c0;
    puStack_e0 = &UNK_1104feb08;
    ppuVar16 = &puStack_f8;
    puStack_d0 = puVar14;
    func_0x000107c60bc4(ppuVar16);
    func_0x000107c61574(puStack_d0);
    puStack_110 = &UNK_1104feb40;
    func_0x000107c613fc(&UNK_1104feb40,0x18,7);
    *(long **)(puStack_110 + 0x10) = &lStack_b8;
    puVar14 = &UNK_1104feb68;
    func_0x000107c613fc(&UNK_1104feb68,0x20,7);
    pcVar25 = FUN_1023d65c4;
    *(code **)(puVar14 + 0x10) = FUN_1023d65c4;
    *(undefined **)(puVar14 + 0x18) = puStack_110;
    pcStack_d8 = (code *)0x1023d663c;
    puStack_f8 = puVar2;
    uStack_f0 = 0x42000000;
    pcStack_e8 = (code *)&UNK_1019e04c4;
    puStack_e0 = &UNK_1104feb80;
    ppuVar17 = &puStack_f8;
    puStack_d0 = puVar14;
    func_0x000107c60bc4(ppuVar17);
    func_0x000107c61574(puStack_d0);
    puStack_118 = &UNK_1104febb8;
    func_0x000107c613fc(&UNK_1104febb8,0x20,7);
    *(long **)(puStack_118 + 0x10) = &lStack_b8;
    *(undefined8 **)(puStack_118 + 0x18) = &uStack_a8;
    puVar14 = &UNK_1104febe0;
    param_2 = 0x20;
    func_0x000107c613fc(&UNK_1104febe0,0x20,7);
    pcVar22 = FUN_1023d65f0;
    *(code **)(puVar14 + 0x10) = FUN_1023d65f0;
    *(undefined **)(puVar14 + 0x18) = puStack_118;
    pcStack_d8 = (code *)0x1023d6640;
    puStack_f8 = puVar2;
    uStack_f0 = 0x42000000;
    pcStack_e8 = (code *)&UNK_1019e04c8;
    puStack_e0 = &UNK_1104febf8;
    ppuVar18 = &puStack_f8;
    puStack_d0 = puVar14;
    func_0x000107c60bc4(ppuVar18);
    func_0x000107c61574(puStack_d0);
    func_0x000107c4c590(param_1);
    func_0x000107c60bd0(ppuVar18);
    func_0x000107c60bd0(ppuVar17);
    func_0x000107c60bd0(ppuVar16);
    func_0x000107c60bd0(ppuVar15);
    if (lStack_b8 == 0) goto LAB_1023d5f24;
    lVar19 = lStack_b8;
    func_0x000107c501d8();
    func_0x000107c61180();
    if (lVar19 == 0) goto LAB_1023d5f24;
    puStack_120 = &UNK_1104fe870;
    func_0x000107c613fc(&UNK_1104fe870,0x18,7);
    *(undefined8 **)(puStack_120 + 0x10) = &uStack_88;
    puVar14 = &UNK_1104fe898;
    func_0x000107c613fc(&UNK_1104fe898,0x20,7);
    uStack_128 = 0x1023d6404;
    *(undefined8 *)(puVar14 + 0x10) = 0x1023d6404;
    *(undefined **)(puVar14 + 0x18) = puStack_120;
    pcStack_d8 = (code *)0x1023d6434;
    puStack_f8 = puVar2;
    uStack_f0 = 0x42000000;
    pcStack_e8 = (code *)&UNK_100de6bdc;
    puStack_e0 = &UNK_1104fe8b0;
    ppuVar15 = &puStack_f8;
    puStack_d0 = puVar14;
    func_0x000107c60bc4(ppuVar15);
    func_0x000107c61574(puStack_d0);
    puStack_138 = &UNK_1104fe8e8;
    func_0x000107c613fc(&UNK_1104fe8e8,0x20,7);
    *(undefined8 **)(puStack_138 + 0x10) = &uStack_88;
    *(long *)(puStack_138 + 0x18) = (long)&uStack_ac + 1;
    puVar14 = &UNK_1104fe910;
    func_0x000107c613fc(&UNK_1104fe910,0x20,7);
    pcStack_140 = FUN_1023d6470;
    *(code **)(puVar14 + 0x10) = FUN_1023d6470;
    *(undefined **)(puVar14 + 0x18) = puStack_138;
    pcStack_d8 = (code *)0x1023d6630;
    puStack_f8 = puVar2;
    uStack_f0 = 0x42000000;
    pcStack_e8 = (code *)&UNK_100de6bdc;
    puStack_e0 = &UNK_1104fe928;
    ppuVar16 = &puStack_f8;
    puStack_d0 = puVar14;
    func_0x000107c60bc4(ppuVar16);
    func_0x000107c61574(puStack_d0);
    puStack_150 = &UNK_1104fe960;
    func_0x000107c613fc(&UNK_1104fe960,0x28,7);
    *(undefined8 **)(puStack_150 + 0x10) = &uStack_88;
    *(long *)(puStack_150 + 0x18) = (long)&uStack_aa + 1;
    *(undefined2 **)(puStack_150 + 0x20) = &uStack_aa;
    puVar14 = &UNK_1104fe988;
    func_0x000107c613fc(&UNK_1104fe988,0x20,7);
    pcStack_158 = FUN_1023d64ac;
    *(code **)(puVar14 + 0x10) = FUN_1023d64ac;
    *(undefined **)(puVar14 + 0x18) = puStack_150;
    pcStack_d8 = FUN_1023d6504;
    puStack_f8 = puVar2;
    uStack_f0 = 0x42000000;
    pcStack_e8 = (code *)&UNK_1019debd0;
    puStack_e0 = &UNK_1104fe9a0;
    ppuVar17 = &puStack_f8;
    puStack_d0 = puVar14;
    func_0x000107c60bc4(ppuVar17);
    func_0x000107c61574(puStack_d0);
    puStack_168 = &UNK_1104fe9d8;
    func_0x000107c613fc(&UNK_1104fe9d8,0x28,7);
    *(undefined8 **)(puStack_168 + 0x10) = &uStack_98;
    *(undefined8 **)(puStack_168 + 0x18) = &uStack_90;
    *(undefined1 **)(puStack_168 + 0x20) = &uStack_ad;
    puVar14 = &UNK_1104fea00;
    param_2 = 0x20;
    func_0x000107c613fc(&UNK_1104fea00,0x20,7);
    pcStack_170 = FUN_1023d6524;
    *(code **)(puVar14 + 0x10) = FUN_1023d6524;
    *(undefined **)(puVar14 + 0x18) = puStack_168;
    pcStack_d8 = (code *)0x1023d6634;
    puStack_f8 = puVar2;
    uStack_f0 = 0x42000000;
    pcStack_e8 = FUN_1023d5268;
    puStack_e0 = &UNK_1104fea18;
    ppuVar18 = &puStack_f8;
    puStack_d0 = puVar14;
    func_0x000107c60bc4(ppuVar18);
    func_0x000107c61574(puStack_d0);
    func_0x000107c4c79c(lVar19);
    func_0x000107c60bd0(ppuVar18);
    func_0x000107c60bd0(ppuVar17);
    func_0x000107c60bd0(ppuVar16);
    func_0x000107c60bd0(ppuVar15);
    func_0x000107c61170(lVar19);
    pcVar23 = FUN_1023d6530;
    pcVar22 = FUN_1023d65f0;
  }
  if (lStack_b8 == 0) {
    lStack_198 = -0x2000000000000000;
    lStack_190 = 0;
  }
  else {
    lVar19 = lStack_b8;
    func_0x000107c4e004();
    func_0x000107c61180();
    lStack_188 = param_2;
    if (lVar19 == 0) {
LAB_1023d5f98:
      lStack_190 = 0;
      param_2 = -0x2000000000000000;
    }
    else {
      lVar20 = lVar19;
      func_0x000107c50210();
      func_0x000107c61180();
      func_0x000107c61170(lVar19);
      lStack_188 = param_2;
      if (lVar20 == 0) goto LAB_1023d5f98;
      lStack_190 = lVar20;
      func_0x000107c5faec();
      lStack_188 = param_2;
      func_0x000107c61170(lVar20);
    }
    lStack_198 = param_2;
    if (lStack_b8 != 0) {
      lVar19 = lStack_b8;
      func_0x000107c4e004();
      func_0x000107c61180();
      if (lVar19 != 0) {
        lVar20 = lVar19;
        func_0x000107c501dc();
        func_0x000107c61180();
        func_0x000107c61170(lVar19);
        if (lVar20 != 0) {
          lStack_180 = lVar20;
          func_0x000107c5faec();
          func_0x000107c61170(lVar20);
          goto LAB_1023d6008;
        }
      }
    }
  }
  lStack_188 = -0x2000000000000000;
  lStack_180 = 0;
LAB_1023d6008:
  uVar13 = uStack_80;
  uVar12 = uStack_88;
  uVar11 = uStack_90;
  uVar10 = uStack_98;
  uVar9 = uStack_a0;
  uVar8 = uStack_a8;
  uVar3 = uStack_ad;
  uVar6 = (undefined1)uStack_aa;
  uVar4 = (undefined1)uStack_ac;
  uVar7 = uStack_aa._1_1_;
  uVar5 = uStack_ac._1_1_;
  lVar20 = 0;
  func_0x0001023d3064();
  lVar19 = lVar20;
  func_0x000107c610f8();
  *(undefined1 *)(lVar19 + _DAT_112e93868) = uVar6;
  *(undefined1 *)(lVar19 + _DAT_112e93870) = uVar4;
  *(undefined1 *)(lVar19 + _DAT_112e93878) = uVar7;
  *(undefined1 *)(lVar19 + _DAT_112e93880) = uVar3;
  *(undefined8 *)(lVar19 + _DAT_112e93888) = uVar11;
  *(undefined8 *)(lVar19 + _DAT_112e93890) = uVar10;
  *(undefined1 *)(lVar19 + _DAT_112e93898) = uVar5;
  plVar21 = (long *)(lVar19 + _DAT_112e938a0);
  *plVar21 = lStack_180;
  plVar21[1] = lStack_188;
  plVar21 = (long *)(lVar19 + _DAT_112e938a8);
  *plVar21 = lStack_190;
  plVar21[1] = lStack_198;
  puVar1 = (undefined8 *)(lVar19 + _DAT_112e938b0);
  *puVar1 = uVar12;
  puVar1[1] = uVar13;
  puVar1 = (undefined8 *)(lVar19 + _DAT_112e938b8);
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  puVar14 = PTR_s_init_1125d9248;
  lStack_c8 = lVar19;
  lStack_c0 = lVar20;
  func_0x000107c61434(uVar11);
  func_0x000107c61434(uVar10);
  func_0x000107c61434(uVar13);
  func_0x000107c61434(uVar9);
  plVar21 = &lStack_c8;
  func_0x000107c61154(plVar21,puVar14);
  func_0x000107c61170(lStack_b8);
  func_0x000107c6142c(uStack_a0);
  func_0x000107c6142c(uStack_98);
  func_0x000107c6142c(uStack_90);
  func_0x000107c6142c(uStack_80);
  func_0x000100ceff80(pcVar23,puStack_100);
  func_0x000100ceff80(pcVar24,puStack_108);
  func_0x000100ceff80(pcVar25,puStack_110);
  func_0x000100ceff80(pcVar22,puStack_118);
  func_0x000100ceff80(uStack_128,puStack_120);
  func_0x000100ceff80(pcStack_140,puStack_138);
  func_0x000100ceff80(pcStack_158,puStack_150);
  func_0x000100ceff80(pcStack_170,puStack_168);
  return plVar21;
}



/* Entry: 1023d61e4; end: 1023d63c3;  */

ulong FUN_1023d61e4(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  func_0x000107c4c244();
  func_0x000107c61180();
  if (param_1 != 0) {
    uVar3 = 0;
    FUN_1023d63c4(0,0x112d4c900,&PTR_PTR_1126d4dd8);
    uVar4 = param_1;
    func_0x000107c5fc54();
    func_0x000107c61170(param_1);
    if (uVar4 >> 0x3e == 0) {
      uVar9 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar9 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar9 = uVar4;
      }
      func_0x000107c60480();
    }
    if (uVar9 != 0) {
      uVar10 = 0;
      do {
        if ((uVar4 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1023d637c);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(uVar4 + uVar10 * 8 + 0x20);
          func_0x000107c61174();
          uVar8 = uVar3;
        }
        else {
          uVar5 = uVar10;
          uVar8 = uVar4;
          FUN_1023d5834(uVar10,uVar4,&PTR_PTR_1126d4dd8,0x112d4c900);
        }
        uVar1 = uVar10 + 1;
        if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1023d6378);
          (*pcVar2)();
        }
        uVar3 = uVar5;
        func_0x000107c4f348();
        func_0x000107c61180();
        uVar6 = uVar3;
        func_0x000107c4f38c();
        func_0x000107c61180();
        func_0x000107c61170(uVar3);
        uVar7 = uVar6;
        func_0x000107c5faec();
        func_0x000107c61170(uVar6);
        if (uVar7 == param_2 && uVar8 == param_3) {
          func_0x000107c6142c(uVar4);
          func_0x000107c6142c(uVar8);
          return uVar5;
        }
        uVar3 = uVar8;
        func_0x000107c605b8(uVar7,uVar8,param_2,param_3,0);
        func_0x000107c6142c(uVar8);
        if ((uVar7 & 1) != 0) {
          func_0x000107c6142c(uVar4);
          return uVar5;
        }
        func_0x000107c61170(uVar5);
        uVar10 = uVar10 + 1;
      } while (uVar1 != uVar9);
    }
    func_0x000107c6142c(uVar4);
  }
  return 0;
}



/* Entry: 1023d63c4; end: 1023d6453;  */

void FUN_1023d63c4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1023d6454; end: 1023d646f;  */

void FUN_1023d6454(long param_1,long param_2)

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


