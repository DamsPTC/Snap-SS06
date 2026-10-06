/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102d5af3c; end: 102d5afa3; -[_TtC38SCGenerativeAIOnboardingImplementation26GenAILoadingViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102d5af68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d5af6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5af3c(long param_1)

{
  FUN_102d5b454(param_1 + _DAT_112f118b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f118b8));
  return;
}



/* Entry: 102d5afa4; end: 102d5afc3;  */

void FUN_102d5afa4(void)

{
  func_0x000107c61168(&PTR_PTR_1128a2a28);
  return;
}



/* Entry: 102d5afc4; end: 102d5b04b;  */

/* WARNING: Possible PIC construction at 0x000102d5b21c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d5b220) */
/* WARNING: Removing unreachable block (ram,0x000102d5b224) */

void FUN_102d5afc4(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *unaff_x19;
  ulong *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  puVar3 = (ulong *)0x112f11940;
  plVar5 = (long *)&UNK_10db45550;
  if (iVar2 != 0) {
    unaff_x30 = 0x102d5b220;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    puVar3 = (ulong *)0x112f11030;
    plVar5 = (long *)&UNK_10db44b50;
    unaff_x19 = (long *)&UNK_10db45550;
    unaff_x20 = (ulong *)0x112f11940;
    unaff_x29 = puVar1;
  }
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 102d5b04c; end: 102d5b0c3;  */

void FUN_102d5b04c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x000102d5b478(0,param_1,param_2);
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



/* Entry: 102d5b0c4; end: 102d5b14b;  */

void FUN_102d5b0c4(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112f11920;
  plVar5 = (long *)&UNK_10db45528;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x000102d5b478(0,0x112d783b0,&PTR_PTR_1126b97a0);
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



/* Entry: 102d5b14c; end: 102d5b1b7;  */

void FUN_102d5b14c(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 102d5b1b8; end: 102d5b1db;  */

/* WARNING: Possible PIC construction at 0x000102d5b21c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d5b220) */
/* WARNING: Removing unreachable block (ram,0x000102d5b224) */

void FUN_102d5b1b8(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *unaff_x19;
  ulong *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  puVar3 = (ulong *)0x112f11910;
  plVar5 = (long *)&UNK_10db45510;
  if (iVar2 != 0) {
    unaff_x30 = 0x102d5b220;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    puVar3 = (ulong *)0x112f11420;
    plVar5 = (long *)&UNK_10db44e40;
    unaff_x19 = (long *)&UNK_10db45510;
    unaff_x20 = (ulong *)0x112f11910;
    unaff_x29 = puVar1;
  }
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 102d5b1dc; end: 102d5b24f;  */

/* WARNING: Possible PIC construction at 0x000102d5b21c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d5b220) */
/* WARNING: Removing unreachable block (ram,0x000102d5b224) */

void FUN_102d5b1dc(ulong *param_1,long *param_2,ulong *param_3,long *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  long *plVar5;
  long *unaff_x19;
  ulong *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  puVar3 = param_3;
  plVar5 = param_4;
  if (iVar2 != 0) {
    unaff_x30 = 0x102d5b220;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    puVar3 = param_1;
    plVar5 = param_2;
    unaff_x19 = param_4;
    unaff_x20 = param_3;
    unaff_x29 = puVar1;
  }
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    uVar4 = (long)plVar5 + (long)(int)*plVar5;
    func_0x000107c61518(uVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = uVar4;
  }
  return;
}



/* Entry: 102d5b250; end: 102d5b27f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5b250(double param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar4;
  double dVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  code *pcVar9;
  code *pcVar10;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar7 - extraout_x12;
  lVar4 = *param_2;
  func_0x000107c6156c(uVar2);
  func_0x000107c61428(lVar3 + 0x10,auStack_88,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c5eea0(lVar6);
    func_0x000107c61428(uVar2,auStack_a0,0,0);
    pcVar9 = *(code **)(lVar8 + 0x10);
    (*pcVar9)(puVar7,uVar2,lVar1);
    func_0x000107c5ee68(puVar7);
    pcVar10 = *(code **)(lVar8 + 8);
    (*pcVar10)(puVar7,lVar1);
    (*pcVar10)(lVar6,lVar1);
    if (param_1 <= 0.05) {
      func_0x000107c61428(uVar2,auStack_b8,0,0);
      (*pcVar9)(puVar7,uVar2,lVar1);
      func_0x000107c5ee6c(lVar6,0x3fa999999999999a);
      (*pcVar10)(puVar7,lVar1);
      func_0x000107c61428(uVar2,auStack_d0,1,0);
      (**(code **)(lVar8 + 0x28))(uVar2,lVar6,lVar1);
      dVar5 = 0.05 - param_1;
    }
    else {
      func_0x000107c5eea0(lVar6);
      func_0x000107c61428(uVar2,auStack_b8,1,0);
      (**(code **)(lVar8 + 0x28))(uVar2,lVar6,lVar1);
      dVar5 = 0.0;
    }
    lVar1 = lVar4;
    func_0x000107c3ff10(lVar4);
    lVar6 = lVar4;
    func_0x000107c5cd20(lVar4);
    FUN_102d5aabc(lVar1,lVar6,dVar5,0.05 < param_1);
    if (*(char *)(lVar3 + _DAT_112f118c0) == '\x01') {
      lVar1 = lVar4;
      func_0x000107c3ff10();
      func_0x000107c5cd20();
      if (lVar4 <= lVar1) {
        func_0x000102d59e4c();
        func_0x000107c54514();
        func_0x000107c61170(lVar4);
      }
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 102d5b280; end: 102d5b37f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5b280(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = unaff_x20 + _DAT_112f118b0;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  lVar1 = _DAT_112f118b8;
  *(undefined8 *)(unaff_x20 + _DAT_112f118b8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f118c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f118d0) = 0;
  lVar2 = _DAT_112f118d8;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112f118e0) = 0;
  uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar3);
  *(undefined1 *)(unaff_x20 + _DAT_112f118c0) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  return;
}



/* Entry: 102d5b380; end: 102d5b453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5b380(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112f118b0;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f118b8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f118c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f118d0) = 0;
  lVar1 = _DAT_112f118d8;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112f118e0) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCGenerativeAIOnboardingImplementation/GenAILoadingViewController.swift",0x47
                      ,2,0x44,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102d5b454);
  (*pcVar2)();
}



/* Entry: 102d5b454; end: 102d5b4b7;  */

undefined8 FUN_102d5b454(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102d5b4b8; end: 102d5b4fb; -[_TtC38SCGenerativeAIOnboardingImplementation26GenAIOnboardingUIContainer attachUI:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5b4b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61604(param_1 + _DAT_112f11948,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112f11950),PTR_s_attachUI__1125a0c08,param_3);
  return;
}



/* Entry: 102d5b4fc; end: 102d5b5b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5b4fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 *puVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  func_0x000107c61604(unaff_x20 + _DAT_112f11948,0);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f11950);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000b0c7c;
    puStack_48 = &UNK_1105c9d68;
    lStack_40 = param_1;
    uStack_38 = param_2;
    func_0x000107c60bc4(&puStack_60);
    uVar1 = uStack_38;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar1);
    puVar4 = (undefined1 *)ppuVar2;
  }
  func_0x000107c41864(uVar3);
  func_0x000107c60bd0(puVar4);
  return;
}



/* Entry: 102d5b5b4; end: 102d5b63f; -[_TtC38SCGenerativeAIOnboardingImplementation26GenAIOnboardingUIContainer detachUI:] */

void FUN_102d5b5b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar2 = (code *)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_1105c9d50;
    func_0x000107c613fc(&UNK_1105c9d50,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    pcVar2 = FUN_102d5b6f8;
  }
  func_0x000107c61174(param_1);
  FUN_102d5b4fc(pcVar2,puVar1);
  func_0x00010058d43c(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d5b640; end: 102d5b69f; -[_TtC38SCGenerativeAIOnboardingImplementation26GenAIOnboardingUIContainer init] */

void FUN_102d5b640(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCGenerativeAIOnboardingImplementation.GenAIOnboardingUIContainer",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d5b66c);
  (*pcVar1)();
}



/* Entry: 102d5b6a0; end: 102d5b6d7; -[_TtC38SCGenerativeAIOnboardingImplementation26GenAIOnboardingUIContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5b6a0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f11948);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f11950));
  return;
}



/* Entry: 102d5b6d8; end: 102d5b6f7;  */

void FUN_102d5b6d8(void)

{
  func_0x000107c61168(&PTR_PTR_1128a2b18);
  return;
}



/* Entry: 102d5b6f8; end: 102d5b71f;  */

void FUN_102d5b6f8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102d5b700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 102d5b720; end: 102d5ba4f;  */

undefined1  [16] FUN_102d5b720(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffdf;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f10b500);
  uVar3 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f10b470);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d5b7ec);
  (*pcVar1)();
}



/* Entry: 102d5ba50; end: 102d5ba5b; -[SCGenerativeAIOnboardingEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5ba50(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f11980;
  func_0x000107c61428(param_1 + _DAT_112f11980,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d5ba5c; end: 102d5ba67; -[SCGenerativeAIOnboardingEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5ba5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f11980;
  func_0x000107c61428(param_1 + _DAT_112f11980,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d5ba68; end: 102d5ba73; -[SCGenerativeAIOnboardingEntryPoint genAICommonServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5ba68(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f11988;
  func_0x000107c61428(param_1 + _DAT_112f11988,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d5ba74; end: 102d5ba7f; -[SCGenerativeAIOnboardingEntryPoint setGenAICommonServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5ba74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f11988;
  func_0x000107c61428(param_1 + _DAT_112f11988,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d5ba80; end: 102d5ba8b; -[SCGenerativeAIOnboardingEntryPoint genAIIdentityServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5ba80(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f11990;
  func_0x000107c61428(param_1 + _DAT_112f11990,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d5ba8c; end: 102d5ba97; -[SCGenerativeAIOnboardingEntryPoint setGenAIIdentityServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5ba8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f11990;
  func_0x000107c61428(param_1 + _DAT_112f11990,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d5ba98; end: 102d5baa3; -[SCGenerativeAIOnboardingEntryPoint userBlizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5ba98(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f11998;
  func_0x000107c61428(param_1 + _DAT_112f11998,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d5baa4; end: 102d5baaf; -[SCGenerativeAIOnboardingEntryPoint setUserBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5baa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f11998;
  func_0x000107c61428(param_1 + _DAT_112f11998,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d5bab0; end: 102d5babb; -[SCGenerativeAIOnboardingEntryPoint memoriesPickerV2ScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5bab0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f119a0;
  func_0x000107c61428(param_1 + _DAT_112f119a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d5babc; end: 102d5bac7; -[SCGenerativeAIOnboardingEntryPoint setMemoriesPickerV2ScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5babc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f119a0;
  func_0x000107c61428(param_1 + _DAT_112f119a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d5bac8; end: 102d5bad3; -[SCGenerativeAIOnboardingEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5bac8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f119a8;
  func_0x000107c61428(param_1 + _DAT_112f119a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d5bad4; end: 102d5badf; -[SCGenerativeAIOnboardingEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5bad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f119a8;
  func_0x000107c61428(param_1 + _DAT_112f119a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d5bae0; end: 102d5baeb; -[SCGenerativeAIOnboardingEntryPoint taskManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5bae0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f119b0;
  func_0x000107c61428(param_1 + _DAT_112f119b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d5baec; end: 102d5baf7; -[SCGenerativeAIOnboardingEntryPoint setTaskManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5baec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f119b0;
  func_0x000107c61428(param_1 + _DAT_112f119b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d5baf8; end: 102d5bb03; -[SCGenerativeAIOnboardingEntryPoint contentDeliveryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5baf8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f119b8;
  func_0x000107c61428(param_1 + _DAT_112f119b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d5bb04; end: 102d5bb0f; -[SCGenerativeAIOnboardingEntryPoint setContentDeliveryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5bb04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f119b8;
  func_0x000107c61428(param_1 + _DAT_112f119b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d5bb10; end: 102d5bb1b; -[SCGenerativeAIOnboardingEntryPoint notificationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5bb10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f119c0;
  func_0x000107c61428(param_1 + _DAT_112f119c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d5bb1c; end: 102d5bb27; -[SCGenerativeAIOnboardingEntryPoint setNotificationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5bb1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f119c0;
  func_0x000107c61428(param_1 + _DAT_112f119c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d5bb28; end: 102d5bb33; -[SCGenerativeAIOnboardingEntryPoint navigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5bb28(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f119c8;
  func_0x000107c61428(param_1 + _DAT_112f119c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d5bb34; end: 102d5bb3f; -[SCGenerativeAIOnboardingEntryPoint setNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5bb34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f119c8;
  func_0x000107c61428(param_1 + _DAT_112f119c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d5bb40; end: 102d5bb4b; -[SCGenerativeAIOnboardingEntryPoint memoriesNavigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5bb40(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f119d0;
  func_0x000107c61428(param_1 + _DAT_112f119d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d5bb4c; end: 102d5bb8f;  */

void FUN_102d5bb4c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102d5bb90; end: 102d5bb9b; -[SCGenerativeAIOnboardingEntryPoint setMemoriesNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5bb90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f119d0;
  func_0x000107c61428(param_1 + _DAT_112f119d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d5bb9c; end: 102d5bbef;  */

void FUN_102d5bb9c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d5bbf0; end: 102d5bc37; -[SCGenerativeAIOnboardingEntryPoint selfieOnboardingCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5bbf0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f119d8;
  func_0x000107c61428(param_1 + _DAT_112f119d8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102d5bc38; end: 102d5bc43; -[SCGenerativeAIOnboardingEntryPoint setSelfieOnboardingCameraScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5bc38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f119d8;
  func_0x000107c61428(param_1 + _DAT_112f119d8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102d5bc44; end: 102d5bc8b; -[SCGenerativeAIOnboardingEntryPoint selfieOnboardingUnifiedPrivacyPolicyScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5bc44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f119e0;
  func_0x000107c61428(param_1 + _DAT_112f119e0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102d5bc8c; end: 102d5bc97; -[SCGenerativeAIOnboardingEntryPoint setSelfieOnboardingUnifiedPrivacyPolicyScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5bc8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f119e0;
  func_0x000107c61428(param_1 + _DAT_112f119e0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102d5bc98; end: 102d5bcdf; -[SCGenerativeAIOnboardingEntryPoint pluginRegistrationScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5bc98(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f119e8;
  func_0x000107c61428(param_1 + _DAT_112f119e8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102d5bce0; end: 102d5bceb; -[SCGenerativeAIOnboardingEntryPoint setPluginRegistrationScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5bce0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f119e8;
  func_0x000107c61428(param_1 + _DAT_112f119e8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102d5bcec; end: 102d5bd33; -[SCGenerativeAIOnboardingEntryPoint memoriesPickerExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5bcec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f119f0;
  func_0x000107c61428(param_1 + _DAT_112f119f0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102d5bd34; end: 102d5bd3f; -[SCGenerativeAIOnboardingEntryPoint setMemoriesPickerExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5bd34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f119f0;
  func_0x000107c61428(param_1 + _DAT_112f119f0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102d5bd40; end: 102d5bd9f;  */

void FUN_102d5bd40(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 102d5bda0; end: 102d5d57b;  */

/* WARNING: Possible PIC construction at 0x000102d5c0dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5c47c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5c4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5c968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5c978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5d348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5d380: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5d394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5d3a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5d3b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5d3c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5d3dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5d3f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5d410: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5d49c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5d4dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5d4ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5d4fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5d50c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5d51c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5d52c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5d53c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5ce24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5ce34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5ce44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5ce54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5ce64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5ce74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5cdd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5cde4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5cdf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5ce04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5ce14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5cd84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5cd94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5cda4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5cdb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5cd34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5cd44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5cd54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5cd64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5ccf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5cd04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5cd14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5cd24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5ccc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5ccd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5cce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5cc94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5cca4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5cc64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5cc74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5cc44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5cc54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d5cc34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d5cc58) */
/* WARNING: Removing unreachable block (ram,0x000102d5cc48) */
/* WARNING: Removing unreachable block (ram,0x000102d5cc78) */
/* WARNING: Removing unreachable block (ram,0x000102d5cc68) */
/* WARNING: Removing unreachable block (ram,0x000102d5cca8) */
/* WARNING: Removing unreachable block (ram,0x000102d5cc98) */
/* WARNING: Removing unreachable block (ram,0x000102d5cce8) */
/* WARNING: Removing unreachable block (ram,0x000102d5ccd8) */
/* WARNING: Removing unreachable block (ram,0x000102d5ccc8) */
/* WARNING: Removing unreachable block (ram,0x000102d5cd28) */
/* WARNING: Removing unreachable block (ram,0x000102d5cd18) */
/* WARNING: Removing unreachable block (ram,0x000102d5cd08) */
/* WARNING: Removing unreachable block (ram,0x000102d5ccf8) */
/* WARNING: Removing unreachable block (ram,0x000102d5cd68) */
/* WARNING: Removing unreachable block (ram,0x000102d5cd58) */
/* WARNING: Removing unreachable block (ram,0x000102d5cd48) */
/* WARNING: Removing unreachable block (ram,0x000102d5cd38) */
/* WARNING: Removing unreachable block (ram,0x000102d5cdb8) */
/* WARNING: Removing unreachable block (ram,0x000102d5cda8) */
/* WARNING: Removing unreachable block (ram,0x000102d5cd98) */
/* WARNING: Removing unreachable block (ram,0x000102d5cd88) */
/* WARNING: Removing unreachable block (ram,0x000102d5ce18) */
/* WARNING: Removing unreachable block (ram,0x000102d5ce08) */
/* WARNING: Removing unreachable block (ram,0x000102d5cdf8) */
/* WARNING: Removing unreachable block (ram,0x000102d5cde8) */
/* WARNING: Removing unreachable block (ram,0x000102d5cdd8) */
/* WARNING: Removing unreachable block (ram,0x000102d5ce78) */
/* WARNING: Removing unreachable block (ram,0x000102d5ce68) */
/* WARNING: Removing unreachable block (ram,0x000102d5ce58) */
/* WARNING: Removing unreachable block (ram,0x000102d5ce48) */
/* WARNING: Removing unreachable block (ram,0x000102d5ce38) */
/* WARNING: Removing unreachable block (ram,0x000102d5ce28) */
/* WARNING: Removing unreachable block (ram,0x000102d5d540) */
/* WARNING: Removing unreachable block (ram,0x000102d5d530) */
/* WARNING: Removing unreachable block (ram,0x000102d5d520) */
/* WARNING: Removing unreachable block (ram,0x000102d5d510) */
/* WARNING: Removing unreachable block (ram,0x000102d5d500) */
/* WARNING: Removing unreachable block (ram,0x000102d5d4f0) */
/* WARNING: Removing unreachable block (ram,0x000102d5d4e0) */
/* WARNING: Removing unreachable block (ram,0x000102d5d4a0) */
/* WARNING: Removing unreachable block (ram,0x000102d5d414) */
/* WARNING: Removing unreachable block (ram,0x000102d5d3fc) */
/* WARNING: Removing unreachable block (ram,0x000102d5d3e0) */
/* WARNING: Removing unreachable block (ram,0x000102d5d3cc) */
/* WARNING: Removing unreachable block (ram,0x000102d5d3bc) */
/* WARNING: Removing unreachable block (ram,0x000102d5d3a8) */
/* WARNING: Removing unreachable block (ram,0x000102d5d398) */
/* WARNING: Removing unreachable block (ram,0x000102d5d384) */
/* WARNING: Removing unreachable block (ram,0x000102d5d34c) */
/* WARNING: Removing unreachable block (ram,0x000102d5c97c) */
/* WARNING: Removing unreachable block (ram,0x000102d5ce9c) */
/* WARNING: Removing unreachable block (ram,0x000102d5cbf8) */
/* WARNING: Removing unreachable block (ram,0x000102d5cea0) */
/* WARNING: Removing unreachable block (ram,0x000102d5c96c) */
/* WARNING: Removing unreachable block (ram,0x000102d5c4b0) */
/* WARNING: Removing unreachable block (ram,0x000102d5c480) */
/* WARNING: Removing unreachable block (ram,0x000102d5c0e0) */
/* WARNING: Removing unreachable block (ram,0x000102d5d578) */
/* WARNING: Removing unreachable block (ram,0x000102d5c26c) */
/* WARNING: Removing unreachable block (ram,0x000102d5cc38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5bda0(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *unaff_x20;
  undefined8 uVar10;
  
  puVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    return;
  }
  puVar3 = unaff_x20;
  func_0x000107c51d18();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    puVar4 = unaff_x20;
    func_0x000107c43d2c();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
      func_0x000107c61170(puVar2);
      puVar2 = puVar3;
    }
    else {
      puVar4 = unaff_x20;
      func_0x000107c43d54();
      func_0x000107c61180();
      if (puVar4 == (undefined *)0x0) {
        func_0x000107c61170(puVar2);
        puVar2 = puVar3;
      }
      else {
        puVar5 = unaff_x20;
        func_0x000107c51d34();
        func_0x000107c61180();
        if (puVar5 != (undefined *)0x0) {
          puVar5 = unaff_x20;
          func_0x000107c4ea14();
          func_0x000107c61180();
          if (puVar5 != (undefined *)0x0) {
            puVar6 = unaff_x20;
            func_0x000107c5d900();
            func_0x000107c61180();
            if (puVar6 == (undefined *)0x0) {
              func_0x000107c61170(puVar2);
              puVar2 = puVar3;
            }
            else {
              puVar7 = unaff_x20;
              func_0x000107c4cc10();
              func_0x000107c61180();
              if (puVar7 == (undefined *)0x0) {
                func_0x000107c61170(puVar2);
                puVar2 = puVar3;
              }
              else {
                puVar7 = unaff_x20;
                func_0x000107c4cc2c();
                func_0x000107c61180();
                if (puVar7 != (undefined *)0x0) {
                  puVar7 = unaff_x20;
                  func_0x000107c3fa0c();
                  func_0x000107c61180();
                  if (puVar7 != (undefined *)0x0) {
                    puVar8 = unaff_x20;
                    func_0x000107c5c78c();
                    func_0x000107c61180();
                    if (puVar8 == (undefined *)0x0) {
                      func_0x000107c61170(puVar2);
                      puVar2 = puVar3;
                    }
                    else {
                      puVar8 = unaff_x20;
                      func_0x000107c40434();
                      func_0x000107c61180();
                      if (puVar8 == (undefined *)0x0) {
                        func_0x000107c61170(puVar2);
                        puVar2 = puVar3;
                      }
                      else {
                        func_0x000107c4d840();
                        func_0x000107c61180();
                        if (unaff_x20 != (undefined *)0x0) {
                          func_0x000107c61174();
                          func_0x000107c61174();
                          func_0x000107c61174();
                          func_0x000107c61174();
                          func_0x000107c61174();
                          func_0x000107c61174();
                          func_0x000107c61174();
                          func_0x000107c61174();
                          func_0x000107c61174();
                          func_0x000107c61174();
                          func_0x000107c61174();
                          func_0x000107c61174();
                          func_0x000107c61174();
                          func_0x000107c4d52c();
                          func_0x000107c61180();
                          func_0x000107c4cc00();
                          func_0x000107c61180();
                          lVar9 = 0;
                          FUN_102d49354();
                          func_0x000107c613fc();
                          *(undefined **)(lVar9 + 0x98) = puVar2;
                          *(undefined **)(lVar9 + 0xa0) = puVar4;
                          *(undefined **)(lVar9 + 0xa8) = puVar6;
                          *(undefined **)(lVar9 + 0x10) = puVar2;
                          *(undefined8 *)(lVar9 + 0x18) = 0;
                          func_0x000107c61174();
                          func_0x000107c61174();
                          func_0x000107c61174();
                          func_0x000107c61174();
                          puVar3 = puVar7;
                          func_0x000107c3fa04();
                          func_0x000107c61180();
                          if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                            pcVar1 = (code *)SoftwareBreakpoint(1,0x102d5d578);
                            (*pcVar1)();
                          }
                          *(undefined8 *)(lVar9 + 0x88) = 0xf;
                          *(undefined8 *)(lVar9 + 0x80) = 0x500;
                          *(undefined **)(lVar9 + 0xb0) = puVar3;
                          *(undefined **)(lVar9 + 0xb8) = puVar5;
                          *(undefined **)(lVar9 + 0x70) = puVar7;
                          *(undefined **)(lVar9 + 0x78) = unaff_x20;
                          *(undefined8 *)(lVar9 + 0x90) = 0;
                          uVar10 = *(undefined8 *)(puVar2 + _DAT_11302f178);
                          puVar2 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
                          func_0x000107c610f8(PTR__OBJC_CLASS___UIDevice_1126aeb10);
                          func_0x000107c61174(unaff_x20);
                          func_0x000107c61174();
                          func_0x000107c61174(puVar7);
                          func_0x000107c61174(unaff_x20);
                          func_0x000107c61174(puVar7);
                          func_0x000107c61174();
                          func_0x000107c615f0(uVar10);
                          func_0x000107c453e4(puVar2);
                          func_0x000107c5d9bc();
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 102d5d57c; end: 102d5d5a3; -[SCGenerativeAIOnboardingEntryPoint begin] */

void FUN_102d5d57c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102d5bda0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d5d5a4; end: 102d5d657; -[SCGenerativeAIOnboardingEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5d5a4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar1 = param_1;
  func_0x000107c614f0();
  puVar5 = *(undefined1 **)(param_1 + _DAT_112f119f8);
  if (puVar5 == (undefined1 *)0x0) {
    func_0x000107c61174(param_1);
  }
  else {
    lVar2 = param_1;
    func_0x000107c61174(param_1);
    puVar3 = puVar5;
    func_0x000107c6157c();
    FUN_102d48d0c();
    func_0x000107c61574(puVar5);
    if (puVar3 != (undefined1 *)0x0) goto LAB_102d5d638;
  }
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_end_1125c29d0);
  func_0x000107c61180();
  lVar2 = param_1;
  puVar3 = (undefined1 *)plVar4;
LAB_102d5d638:
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 102d5d658; end: 102d5dd2f;  */

void FUN_102d5d658(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_102d5e11c(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
    goto LAB_102d5d6e8;
  }
  if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef0ef4ad0)) {
    uVar2 = 0xd000000000000013;
    func_0x000107c605b8(0xd000000000000013,0x800000010f10b530,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0xd000000000000015;
      if (((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffef10c5bd0)) ||
         (func_0x000107c605b8(0xd000000000000015,0x800000010ef3a430,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        FUN_102d5e11c(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c54de4();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef10ef610)) ||
           (func_0x000107c605b8(0xd000000000000014,0x800000010ef109f0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          FUN_102d5e11c(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5a2fc();
        }
        else {
          uVar2 = 0xd00000000000001d;
          if (((param_2 == -0x2fffffffffffffe3) && (param_3 == -0x7ffffffef10e5620)) ||
             (func_0x000107c605b8(0xd00000000000001d,0x800000010ef1a9e0,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            FUN_102d5e11c(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c565a0();
          }
          else {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10ed550)) ||
               (func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              FUN_102d5e11c(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c53414();
            }
            else {
              uVar2 = 0;
              if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10edd20)) ||
                 (func_0x000107c605b8(0xd000000000000016,0x800000010ef122e0,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                FUN_102d5e11c(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c59c2c();
              }
              else {
                uVar2 = 0xd000000000000017;
                if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10e6230)) ||
                   (func_0x000107c605b8(0xd000000000000017,0x800000010ef19dd0,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  FUN_102d5e11c(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c53808();
                }
                else {
                  if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10eec60)) {
                    uVar2 = 0;
                    func_0x000107c605b8(0xd000000000000014,0x800000010ef113a0,param_2,param_3,0);
                    if ((uVar2 & 1) == 0) {
                      uVar2 = 0;
                      if (((param_2 == -0x2fffffffffffffee) && (param_3 == -0x7ffffffef10edf60)) ||
                         (func_0x000107c605b8(0xd000000000000012,0x800000010ef120a0,param_2,param_3,
                                              0), (uVar2 & 1) != 0)) {
                        FUN_102d5e11c(param_1,*(undefined8 *)(param_1 + 0x18));
                        func_0x000107c605b0();
                        func_0x000107c569f0();
                      }
                      else {
                        if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10c5e10)) {
                          uVar2 = 0;
                          func_0x000107c605b8(0xd00000000000001a,0x800000010ef3a1f0,param_2,param_3,
                                              0);
                          if ((uVar2 & 1) == 0) {
                            uVar2 = 0;
                            if (((param_2 == -0x2fffffffffffffde) &&
                                (param_3 == -0x7ffffffef0ef4ab0)) ||
                               (func_0x000107c605b8(0xd000000000000022,0x800000010f10b550,param_2,
                                                    param_3,0), (uVar2 & 1) != 0)) {
                              FUN_102d5e11c(param_1,*(undefined8 *)(param_1 + 0x18));
                              func_0x000107c605b0();
                              func_0x000107c58e58();
                            }
                            else {
                              uVar2 = 0;
                              if (((param_2 == -0x2fffffffffffffd0) &&
                                  (param_3 == -0x7ffffffef0ef4a80)) ||
                                 (func_0x000107c605b8(0xd000000000000030,0x800000010f10b580,param_2,
                                                      param_3,0), (uVar2 & 1) != 0)) {
                                FUN_102d5e11c(param_1,*(undefined8 *)(param_1 + 0x18));
                                func_0x000107c605b0();
                                func_0x000107c58e60();
                              }
                              else {
                                uVar2 = 0;
                                if (((param_2 == -0x2fffffffffffffe2) &&
                                    (param_3 == -0x7ffffffef0fe8170)) ||
                                   (func_0x000107c605b8(0xd00000000000001e,0x800000010f017e90,
                                                        param_2,param_3,0), (uVar2 & 1) != 0)) {
                                  FUN_102d5e11c(param_1,*(undefined8 *)(param_1 + 0x18));
                                  func_0x000107c605b0();
                                  func_0x000107c57540();
                                }
                                else {
                                  if ((param_2 != -0x2fffffffffffffeb) ||
                                     (param_3 != -0x7ffffffef0ef4a40)) {
                                    uVar2 = 0xd000000000000015;
                                    func_0x000107c605b8(0xd000000000000015,0x800000010f10b5c0,
                                                        param_2,param_3,0);
                                    if ((uVar2 & 1) == 0) {
                                      func_0x000107c602fc(0x15);
                                      func_0x000107c6142c(0xe000000000000000);
                                      func_0x000107c5fb78(param_2,param_3);
                                      func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                                          0x800000010ef0fc20,
                                                                                                                    
                                                  "SCGenerativeAIOnboardingImplementation/SCGenerativeAIOnboardingEntryPoint.swift"
                                                  ,0x4f,2,0x67,0);
                    /* WARNING: Does not return */
                                      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d5dd30);
                                      (*pcVar1)();
                                    }
                                  }
                                  FUN_102d5e11c(param_1,*(undefined8 *)(param_1 + 0x18));
                                  func_0x000107c605b0();
                                  func_0x000107c5658c();
                                }
                              }
                            }
                            goto LAB_102d5d6e8;
                          }
                        }
                        FUN_102d5e11c(param_1,*(undefined8 *)(param_1 + 0x18));
                        func_0x000107c605b0();
                        func_0x000107c56584();
                      }
                      goto LAB_102d5d6e8;
                    }
                  }
                  FUN_102d5e11c(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c56b34();
                }
              }
            }
          }
        }
      }
      goto LAB_102d5d6e8;
    }
  }
  FUN_102d5e11c(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c54dcc();
LAB_102d5d6e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102d5dd30; end: 102d5dddb; -[SCGenerativeAIOnboardingEntryPoint setValue:forIvarName:] */

void FUN_102d5dd30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102d5d658(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_102d5e160(auStack_50);
  return;
}



/* Entry: 102d5dddc; end: 102d5df33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5dddc(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f11980,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f11988,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f11990,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f11998,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f119a0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f119a8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f119b0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f119b8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f119c0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f119c8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f119d0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f119d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f119e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f119e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f119f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f119f8) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d5df34; end: 102d5df53; -[SCGenerativeAIOnboardingEntryPoint init] */

void FUN_102d5df34(void)

{
  FUN_102d5dddc();
  return;
}



/* Entry: 102d5df54; end: 102d5df87;  */

void FUN_102d5df54(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d5df88; end: 102d5e09f; -[SCGenerativeAIOnboardingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5df88(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f11980);
  func_0x000107c61610(param_1 + _DAT_112f11988);
  func_0x000107c61610(param_1 + _DAT_112f11990);
  func_0x000107c61610(param_1 + _DAT_112f11998);
  func_0x000107c61610(param_1 + _DAT_112f119a0);
  func_0x000107c61610(param_1 + _DAT_112f119a8);
  func_0x000107c61610(param_1 + _DAT_112f119b0);
  func_0x000107c61610(param_1 + _DAT_112f119b8);
  func_0x000107c61610(param_1 + _DAT_112f119c0);
  func_0x000107c61610(param_1 + _DAT_112f119c8);
  func_0x000107c61610(param_1 + _DAT_112f119d0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f119d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f119e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f119e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f119f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f119f8));
  return;
}



/* Entry: 102d5e0a0; end: 102d5e0d7;  */

void FUN_102d5e0a0(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  *param_1 = puVar1;
  return;
}



/* Entry: 102d5e0d8; end: 102d5e11b;  */

long FUN_102d5e0d8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102d5e11c; end: 102d5e13f;  */

long * FUN_102d5e11c(long *param_1,long param_2)

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



/* Entry: 102d5e140; end: 102d5e15f;  */

void FUN_102d5e140(void)

{
  func_0x000107c61168(&PTR_PTR_1128a2be0);
  return;
}



/* Entry: 102d5e160; end: 102d5e17f;  */

void FUN_102d5e160(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000102d5e174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 102d5e180; end: 102d5e1f7; -[_TtC34SCLensStorySettingsServiceProvider23FeatureSettingsProvider isEnabled] */

undefined8 FUN_102d5e180(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6157c();
  uVar1 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f10b630);
  func_0x000107c3ebd4(uVar2);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 102d5e1f8; end: 102d5e23b;  */

void FUN_102d5e1f8(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d5e23c; end: 102d5e3fb;  */

long FUN_102d5e23c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  lVar2 = param_2;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    *(long *)(unaff_x20 + 0x10) = lVar2;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d5e2b0);
  (*pcVar1)();
}



/* Entry: 102d5e3fc; end: 102d5e43f;  */

long FUN_102d5e3fc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000102d5e21c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  func_0x000107c615f0(param_1);
  return lVar1;
}



/* Entry: 102d5e440; end: 102d5e447;  */

long FUN_102d5e440(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = 0;
  func_0x000102d5e21c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  func_0x000107c615f0(uVar2);
  return lVar1;
}



/* Entry: 102d5e448; end: 102d5e47f;  */

void FUN_102d5e448(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102d5e480; end: 102d5e4a3;  */

void FUN_102d5e480(long param_1,long param_2)

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



/* Entry: 102d5e4a4; end: 102d5e53f;  */

void FUN_102d5e4a4(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d5e540; end: 102d5e563;  */

void FUN_102d5e540(undefined8 *param_1,undefined8 param_2)

{
  func_0x000102d5e30c();
  *param_1 = param_2;
  return;
}



/* Entry: 102d5e564; end: 102d5e663;  */

long FUN_102d5e564(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = 0x112f11cc0;
    func_0x0001000285a8(0x112f11cc0,&UNK_10db45700);
    func_0x000107c613fc();
    func_0x0001000c2754();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
    *(long *)(unaff_x20 + 0x10) = lVar2;
    func_0x000107c6157c();
    func_0x000107c61574(uVar3);
    lVar1 = 0;
  }
  func_0x000107c6157c(lVar1);
  return lVar2;
}



/* Entry: 102d5e664; end: 102d5e66f;  */

undefined * FUN_102d5e664(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined *puStack_48;
  
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    puVar1 = PTR_PTR_1126ae560;
    func_0x000107c610f8(PTR_PTR_1126ae560);
    func_0x000107c453e4();
    puVar3 = PTR_PTR_1126ac360;
    func_0x000107c610f8();
    func_0x000107c61174(puVar1);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c47318();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(param_1);
    FUN_102d5e564();
    puStack_48 = puVar3;
    func_0x0001002a64a8(&puStack_48);
    func_0x000107c61574(param_1);
    puVar2 = puVar1;
    func_0x000107c43bf4(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
  }
  else {
    puVar2 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    func_0x0001002ed07c(0);
    puVar3 = (undefined *)0x0;
    func_0x000107c6010c(0);
    func_0x000107c451b0(puVar2);
    func_0x000107c61180();
  }
  func_0x000107c61170(puVar3);
  return puVar2;
}



/* Entry: 102d5e670; end: 102d5e687; -[_TtC35LensStoryLensProcessingServicesImpl30LensStoryLensProcessingManager prefetchLensWithId:] */

void FUN_102d5e670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(param_1);
  FUN_102d5e664(param_3,param_2);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102d5e688; end: 102d5e7c3;  */

undefined * FUN_102d5e688(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined *puStack_48;
  
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    puVar1 = PTR_PTR_1126ae560;
    func_0x000107c610f8(PTR_PTR_1126ae560);
    func_0x000107c453e4();
    puVar3 = PTR_PTR_1126ac360;
    func_0x000107c610f8();
    func_0x000107c61174(puVar1);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c47318();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(param_1);
    (*param_3)();
    puStack_48 = puVar3;
    func_0x0001002a64a8(&puStack_48);
    func_0x000107c61574(param_1);
    puVar2 = puVar1;
    func_0x000107c43bf4(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
  }
  else {
    puVar2 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    func_0x0001002ed07c(0);
    puVar3 = (undefined *)0x0;
    func_0x000107c6010c(0);
    func_0x000107c451b0(puVar2);
    func_0x000107c61180();
  }
  func_0x000107c61170(puVar3);
  return puVar2;
}



/* Entry: 102d5e7c4; end: 102d5e7cf; -[_TtC35LensStoryLensProcessingServicesImpl30LensStoryLensProcessingManager activateLensWithId:] */

void FUN_102d5e7c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(param_1);
  (*(code *)0x102d5e67c)(param_3,param_2);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102d5e7d0; end: 102d5e833;  */

void FUN_102d5e7d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c6157c(param_1);
  (*param_4)(param_3,param_2);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102d5e834; end: 102d5e85f;  */

void FUN_102d5e834(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d5e860; end: 102d5e8a7;  */

void FUN_102d5e860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 102d5e8a8; end: 102d5e907;  */

void FUN_102d5e8a8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  uVar1 = 0;
  if (param_2 != 0) {
    func_0x000107c61574();
    uVar1 = 0;
    FUN_102d5f814();
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 102d5e908; end: 102d5e90f;  */

void FUN_102d5e908(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  uVar2 = 0;
  if (lVar1 != 0) {
    func_0x000107c61574();
    uVar2 = 0;
    FUN_102d5f814();
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 102d5e910; end: 102d5e94b;  */

void FUN_102d5e910(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  func_0x000100b96e78();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_1105ca068;
  *param_1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar2);
  return;
}



/* Entry: 102d5e94c; end: 102d5e9e3;  */

void FUN_102d5e94c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_2;
    func_0x0001000bf56c();
    lVar2 = lVar1;
    FUN_102d5e9f0();
    func_0x000107c61574(param_2);
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 102d5e9e4; end: 102d5e9ef;  */

void FUN_102d5e9e4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x0001000bf56c();
    lVar3 = lVar2;
    FUN_102d5e9f0();
    func_0x000107c61574(lVar1);
    func_0x000107c61170(lVar2);
  }
  *param_1 = lVar3;
  return;
}



/* Entry: 102d5e9f0; end: 102d5eb03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5e9f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_60;
  long lStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113016c08);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113016c18);
  lVar3 = 0;
  FUN_102d5f1d4();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112f11df8) = 0;
  *(undefined8 *)(lVar4 + _DAT_112f11dc8) = uVar1;
  *(undefined8 *)(lVar4 + _DAT_112f11dd0) = uVar5;
  *(undefined8 *)(lVar4 + _DAT_112f11dd8) = uVar6;
  *(undefined8 *)(lVar4 + _DAT_112f11de0) = uVar7;
  *(undefined8 *)(lVar4 + _DAT_112f11de8) = param_1;
  *(undefined8 *)(lVar4 + _DAT_112f11df0) = param_2;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = lVar4;
  lStack_58 = lVar3;
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_60,puVar2);
  return;
}



/* Entry: 102d5eb04; end: 102d5eb27;  */

/* WARNING: Possible PIC construction at 0x000102d5eb10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d5eb14) */

void FUN_102d5eb04(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102d5eb28; end: 102d5eb9f;  */

void FUN_102d5eb28(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d5eba0; end: 102d5eba3;  */

void FUN_102d5eba0(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102d5eba4; end: 102d5ed23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5eba4(double param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long alStack_78 [3];
  undefined8 uStack_60;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c51820();
  func_0x000107c61170(puVar1);
  func_0x000107c438d4(param_5);
  func_0x000107c438d4(param_5);
  FUN_102d5ef18(param_1 * param_3,param_1 * param_4,param_7,param_6);
  if (param_7 != 0) {
    FUN_102d5eda0();
    func_0x0001000d224c(alStack_78);
    plVar2 = alStack_78;
    func_0x0001000a8868(plVar2,uStack_60);
    *(undefined1 *)(*plVar2 + 0x20) = 1;
    func_0x0001000834e4(alStack_78);
    lVar3 = param_7;
    func_0x000107c5ba38();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f11df8);
    *(long *)(unaff_x20 + _DAT_112f11df8) = lVar3;
    func_0x000107c615e8(uVar4);
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f11de8);
    func_0x000107c5c734(uVar4);
    func_0x000107c61180();
    func_0x0001043b6dfc(param_5,0,param_7,param_6);
    func_0x000107c615e8(uVar4);
    func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112f11dd0));
    func_0x000107c615e8(param_7);
    func_0x000107c61170(param_5);
  }
  return;
}



/* Entry: 102d5ed24; end: 102d5ed9f; -[_TtC35LensStoryLensProcessingServicesImpl38LensStoryLensProcessingUIContainerImpl attachLensRenderTarget:lifecycleEventsObservable:processingType:] */

/* WARNING: Possible PIC construction at 0x000102d5ed7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d5ed80) */

void FUN_102d5ed24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102d5eba4(param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102d5eda0; end: 102d5ee57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5eda0(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long alStack_58 [3];
  undefined8 uStack_40;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112f11dd0);
  lVar1 = lVar4;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x0001000d224c(alStack_58);
    plVar2 = alStack_58;
    func_0x0001000a8868(plVar2,uStack_40);
    *(undefined1 *)(*plVar2 + 0x20) = 0;
    func_0x0001000834e4(alStack_58);
    func_0x000107c4ffe8(lVar4);
    func_0x000107c61180();
    func_0x000107c615e8();
    lVar1 = _DAT_112f11df8;
    uVar3 = 0;
    if (*(long *)(unaff_x20 + _DAT_112f11df8) != 0) {
      func_0x000107c4991c();
      uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    }
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
    func_0x000107c615e8(uVar3);
  }
  return;
}



/* Entry: 102d5ee58; end: 102d5ee7f; -[_TtC35LensStoryLensProcessingServicesImpl38LensStoryLensProcessingUIContainerImpl removeLensRenderTarget] */

void FUN_102d5ee58(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102d5eda0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d5ee80; end: 102d5ef17; -[_TtC35LensStoryLensProcessingServicesImpl38LensStoryLensProcessingUIContainerImpl viewfinderDidCreateTouchController:] */

/* WARNING: Possible PIC construction at 0x000102d5ef00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d5ef04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5ee80(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174();
  func_0x000107c61174();
  lVar1 = param_3;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_112f11de8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c4fce0();
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102d5ef18; end: 102d5f0ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d5ef18(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long unaff_x20;
  long lVar9;
  
  lVar2 = 0;
  func_0x000107c5f83c();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  if (param_3 == 1) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f11dd8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      uVar8 = 0x6f745320736e654c;
      func_0x000107c5fadc(0x6f745320736e654c,0xec00000073656972);
      func_0x000107c412b8(lVar2);
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(uVar8);
    }
  }
  else if (param_3 == 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112f11de0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c614f0();
      lVar5 = lVar4;
      func_0x000107c5f830(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000107c5f82c();
      (**(code **)(lVar9 + 8))
                (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
      puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c466c0(0x4040aaaaaaaaaaab);
      puVar7 = puVar6;
      func_0x0001043b7548();
      uVar8 = *puVar7;
      uVar1 = puVar7[1];
      func_0x000107c61434(uVar1);
      func_0x000103e2ed5c(param_1,param_2,1,lVar5,puVar6,0,uVar8,uVar1,param_4,lVar4);
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(puVar6);
      func_0x000107c6142c(uVar1);
    }
  }
  return;
}



/* Entry: 102d5f0f0; end: 102d5f14b; -[_TtC35LensStoryLensProcessingServicesImpl38LensStoryLensProcessingUIContainerImpl init] */

void FUN_102d5f0f0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensStoryLensProcessingServicesImpl.LensStoryLensProcessingUIContainerImpl",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d5f11c);
  (*pcVar1)();
}


