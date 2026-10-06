/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10381fe04; end: 10381fe7b; -[_TtC16ARBarIntegration43ARBarMiniCameraTrayContainerProviderAdapter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10381fe04(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f9ff88));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f9ff90));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f9ff98));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f9ffa0));
  func_0x000100e3da34(*(undefined8 *)(param_1 + _DAT_112f9ffa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f9ffb0));
  return;
}



/* Entry: 10381fe7c; end: 10381fe9b;  */

void FUN_10381fe7c(void)

{
  func_0x000107c61168(&PTR_PTR_1128f2d48);
  return;
}



/* Entry: 10381fe9c; end: 10382000f;  */

void FUN_10381fe9c(void)

{
  FUN_10381ee98();
  return;
}



/* Entry: 103820010; end: 103820047;  */

void FUN_103820010(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  long unaff_x20;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar8 = *(ulong *)(unaff_x20 + 0x18);
  func_0x000107c5a050(uVar1,uVar1,0);
  uVar3 = uVar8;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10381fb18);
    (*pcVar2)();
  }
  uVar11 = uVar3;
  func_0x000107c5c3b0();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  uVar4 = 0;
  FUN_10382053c(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  uVar3 = uVar11;
  func_0x000107c5fc54(uVar11,uVar4);
  func_0x000107c61170(uVar11);
  if (uVar3 >> 0x3e == 0) {
    uVar11 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar11 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar11 = uVar3;
    }
    func_0x000107c60480();
  }
  if (uVar11 != 0) {
    uVar12 = 0;
    do {
      if ((uVar3 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10381f83c);
          (*pcVar2)();
        }
        uVar5 = *(ulong *)(uVar3 + uVar12 * 8 + 0x20);
        func_0x000107c61174(uVar5);
      }
      else {
        uVar5 = uVar12;
        FUN_10382031c(uVar12,uVar3,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
      }
      if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10381f838);
        (*pcVar2)();
      }
      uVar13 = uVar12 + 1;
      func_0x000107c550d8();
      func_0x000107c61170(uVar5);
      uVar12 = uVar12 + 1;
    } while (uVar13 != uVar11);
  }
  func_0x000107c6142c(uVar3);
  uVar3 = uVar8;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10381fb1c);
    (*pcVar2)();
  }
  func_0x000107c3d89c();
  func_0x000107c61170(uVar3);
  lVar6 = 0x112d360b8;
  FUN_103820048(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x18) = 9;
  *(undefined8 *)(lVar6 + 0x10) = 4;
  uVar4 = uVar1;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar3 = uVar8;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10381fb20);
    (*pcVar2)();
  }
  uVar11 = uVar3;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  uVar7 = uVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  *(undefined8 *)(lVar6 + 0x20) = uVar7;
  uVar4 = uVar1;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar3 = uVar8;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10381fb24);
    (*pcVar2)();
  }
  uVar11 = uVar3;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  uVar7 = uVar4;
  func_0x000107c40284(0xc034000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  *(undefined8 *)(lVar6 + 0x28) = uVar7;
  uVar4 = uVar1;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar3 = uVar8;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (uVar3 != 0) {
    uVar11 = uVar3;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    uVar7 = uVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar11);
    *(undefined8 *)(lVar6 + 0x30) = uVar7;
    uVar4 = uVar1;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c5de64();
    func_0x000107c61180();
    if (uVar8 != 0) {
      puVar9 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      uVar3 = uVar8;
      func_0x000107c3ec1c(uVar8);
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      uVar7 = uVar4;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar3);
      *(undefined8 *)(lVar6 + 0x38) = uVar7;
      uVar4 = 0;
      FUN_10382053c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar10 = lVar6;
      func_0x000107c5fc48(lVar6,uVar4);
      func_0x000107c61574(lVar6);
      func_0x000107c3d048(puVar9);
      func_0x000107c61170(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_attachUI__1125a0c08,param_1);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10381fb2c);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10381fb28);
  (*pcVar2)();
}



/* Entry: 103820048; end: 1038200bf;  */

void FUN_103820048(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10382053c(0,param_1,param_2);
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



/* Entry: 1038200c0; end: 1038200f7;  */

/* WARNING: Possible PIC construction at 0x000103820138: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010382013c) */
/* WARNING: Removing unreachable block (ram,0x000103820140) */

void FUN_1038200c0(void)

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
  puVar3 = (ulong *)0x112f9ffe0;
  plVar5 = (long *)&UNK_10dc15078;
  if (iVar2 != 0) {
    unaff_x30 = 0x10382013c;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    puVar3 = (ulong *)0x112f9fac0;
    plVar5 = (long *)&UNK_10dc14d00;
    unaff_x19 = (long *)&UNK_10dc15078;
    unaff_x20 = (ulong *)0x112f9ffe0;
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



/* Entry: 1038200f8; end: 10382016b;  */

/* WARNING: Possible PIC construction at 0x000103820138: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010382013c) */
/* WARNING: Removing unreachable block (ram,0x000103820140) */

void FUN_1038200f8(ulong *param_1,long *param_2,ulong *param_3,long *param_4)

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
    unaff_x30 = 0x10382013c;
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



/* Entry: 10382016c; end: 10382031b;  */

ulong FUN_10382016c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103820248);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10382024c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar4 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
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
    uVar4 = param_1;
    func_0x000107c61494();
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0x4672614252414353,0xee00657275746165);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10382031c);
  (*pcVar2)();
}



/* Entry: 10382031c; end: 1038204d7;  */

ulong FUN_10382031c(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103820400);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103820404);
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
  FUN_10382053c(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1038204d8);
  (*pcVar2)();
}



/* Entry: 1038204d8; end: 1038204ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038204d8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  long alStack_90 [3];
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_68,0,0,*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    FUN_10381edc4();
    func_0x000107c3d0a0(uVar4);
    func_0x0001000d224c(alStack_90);
    lVar3 = alStack_90[0];
    func_0x000107c5cfa0();
    func_0x000107c61180();
    func_0x000107c615e8(alStack_90[0]);
    if (lVar3 != 0) {
      func_0x000107c3e2c0(lVar3);
      func_0x000107c615e8(lVar3);
    }
    FUN_1038205ac(param_1);
    func_0x0001000d224c(alStack_90);
    func_0x0001000a8868(alStack_90,uStack_78);
    uVar4 = *(undefined8 *)(lVar2 + _DAT_112f9fff0);
    pcVar5 = *(code **)(lStack_70 + 8);
    func_0x000107c61174(uVar4);
    (*pcVar5)();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar1);
    func_0x0001000834e4(alStack_90);
  }
  return;
}



/* Entry: 103820500; end: 10382053b;  */

void FUN_103820500(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf65db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_deactivateWithChallenger__1125b7110,uVar2);
  return;
}



/* Entry: 10382053c; end: 10382057b;  */

void FUN_10382053c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10382057c; end: 1038205ab;  */

void FUN_10382057c(long param_1,long param_2)

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



/* Entry: 1038205ac; end: 10382073f;  */

void FUN_1038205ac(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  lVar2 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c3d614();
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar4 = &UNK_11069aaa0;
    func_0x000107c613fc(&UNK_11069aaa0,0x28,7);
    *(long *)(puVar4 + 0x10) = lVar2;
    *(undefined8 *)(puVar4 + 0x18) = unaff_x20;
    *(long *)(puVar4 + 0x20) = param_1;
    puVar5 = &UNK_11069aac8;
    func_0x000107c613fc(&UNK_11069aac8,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_10382146c;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    pcStack_60 = FUN_103821478;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_10006eb60;
    puStack_68 = &UNK_11069aae0;
    puStack_58 = puVar5;
    func_0x000107c60bc4(&puStack_80);
    puVar7 = puStack_58;
    func_0x000107c61174(lVar2);
    func_0x000107c61174();
    func_0x000107c61174(param_1);
    func_0x000107c6157c(puVar5);
    func_0x000107c61574(puVar7);
    func_0x000107c4e5fc(puVar3);
    func_0x000107c60bd0(ppuVar6);
    puVar7 = puVar5;
    func_0x000107c61544(puVar5,"",0x7f,0x37,0x28,1);
    func_0x000107c61574(puVar5);
    if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103820740);
      (*pcVar1)();
    }
    func_0x000107c41c30(param_1);
    func_0x000107c61574(puVar4);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 103820740; end: 103820797; -[_TtC16ARBarIntegration39ARBarTrayContentContainerViewController initWithCoder:] */

void FUN_103820740(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "ARBarIntegration/ARBarTrayContentContainerViewController.swift",0x3e,2,0x1d,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103820798);
  (*pcVar1)();
}



/* Entry: 103820798; end: 103820a2b;  */

/* WARNING: Possible PIC construction at 0x0001038207f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103820864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103820884: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038208d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038208f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103820960: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103820980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038209c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103820984) */
/* WARNING: Removing unreachable block (ram,0x000103820964) */
/* WARNING: Removing unreachable block (ram,0x0001038208fc) */
/* WARNING: Removing unreachable block (ram,0x000103820a28) */
/* WARNING: Removing unreachable block (ram,0x000103820930) */
/* WARNING: Removing unreachable block (ram,0x0001038208d8) */
/* WARNING: Removing unreachable block (ram,0x000103820888) */
/* WARNING: Removing unreachable block (ram,0x000103820a24) */
/* WARNING: Removing unreachable block (ram,0x0001038208bc) */
/* WARNING: Removing unreachable block (ram,0x000103820868) */
/* WARNING: Removing unreachable block (ram,0x0001038207f4) */
/* WARNING: Removing unreachable block (ram,0x000103820a20) */
/* WARNING: Removing unreachable block (ram,0x00010382084c) */
/* WARNING: Removing unreachable block (ram,0x0001038209c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103820798(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  
  func_0x000107c5a050(*(undefined8 *)(unaff_x20 + _DAT_112f9fff0),param_2,0);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c3d89c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103820a20);
  (*pcVar1)();
}



/* Entry: 103820a2c; end: 103820a87; -[_TtC16ARBarIntegration39ARBarTrayContentContainerViewController viewDidLoad] */

void FUN_103820a2c(undefined8 param_1)

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
  FUN_103820798();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103820a88; end: 103820e27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103820a88(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(param_3 + _DAT_112f9fff0);
  func_0x000107c44d98(uVar7);
  func_0x000107c438d4(param_2);
  func_0x000107c54b80(0,param_1,param_2);
  lVar2 = param_3;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103820e10);
    (*pcVar1)();
  }
  func_0x000107c5b078();
  func_0x000107c61170(lVar2);
  lVar2 = param_3;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103820e14);
    (*pcVar1)();
  }
  func_0x000107c5b078();
  func_0x000107c61170(lVar2);
  func_0x000107c44d98(uVar7);
  func_0x000107c438d4(param_2);
  func_0x000107c54b80(param_2);
  func_0x000107c3e748(param_4);
  lVar2 = param_3;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103820e18);
    (*pcVar1)();
  }
  func_0x000107c3d89c();
  func_0x000107c61170(lVar2);
  lVar2 = param_2;
  func_0x000107c5a050();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 9;
  *(undefined8 *)(lVar2 + 0x10) = 4;
  lVar3 = param_2;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c3ec1c(uVar7);
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c40284(0x4010000000000000);
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar7);
  *(long *)(lVar2 + 0x20) = lVar4;
  lVar3 = param_2;
  func_0x000107c4ace0();
  func_0x000107c61180();
  lVar4 = param_3;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c4ace0();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    lVar4 = lVar3;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar5);
    *(long *)(lVar2 + 0x28) = lVar4;
    lVar3 = param_2;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    lVar4 = param_3;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103820e20);
      (*pcVar1)();
    }
    lVar5 = lVar4;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    lVar4 = lVar3;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar5);
    *(long *)(lVar2 + 0x30) = lVar4;
    func_0x000107c50890();
    func_0x000107c61180();
    lVar3 = param_3;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 != 0) {
      puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar4 = lVar3;
      func_0x000107c50890(lVar3);
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      lVar3 = param_2;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(param_2);
      func_0x000107c61170(lVar4);
      *(long *)(lVar2 + 0x38) = lVar3;
      uVar7 = 0;
      FUN_1038214b4(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar3 = lVar2;
      func_0x000107c5fc48(lVar2,uVar7);
      func_0x000107c61574(lVar2);
      func_0x000107c3d048(puVar6);
      func_0x000107c61170(lVar3);
      func_0x000107c5de64();
      func_0x000107c61180();
      if (param_3 != 0) {
        func_0x000107c4abfc();
        func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bf941b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_4,PTR_s_endAppearanceTransition_1125c2a10);
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103820e28);
      (*pcVar1)();
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103820e24);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103820e1c);
  (*pcVar1)();
}



/* Entry: 103820e28; end: 103820fe3; -[_TtC16ARBarIntegration39ARBarTrayContentContainerViewController attachUI:] */

/* WARNING: Possible PIC construction at 0x000103820e60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103820e64) */

void FUN_103820e28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1038205ac(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103820fe4; end: 1038211c3; -[_TtC16ARBarIntegration39ARBarTrayContentContainerViewController tray:canUseGestureToExpandOrCollapse:] */

uint FUN_103820fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x000103820e78(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1038211c4; end: 10382137f; -[_TtC16ARBarIntegration39ARBarTrayContentContainerViewController scrollViewForTray:] */

void FUN_1038211c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x00010382105c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103821380; end: 1038213db; -[_TtC16ARBarIntegration39ARBarTrayContentContainerViewController trayCanExpandWhenScrollAtBottom:] */

uint FUN_103821380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x000103821220(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1038213dc; end: 10382143b; -[_TtC16ARBarIntegration39ARBarTrayContentContainerViewController initWithNibName:bundle:] */

void FUN_1038213dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarIntegration.ARBarTrayContentContainerViewController",0x38,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103821408);
  (*pcVar1)();
}



/* Entry: 10382143c; end: 10382144b; -[_TtC16ARBarIntegration39ARBarTrayContentContainerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10382143c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f9fff0));
  return;
}



/* Entry: 10382144c; end: 10382146b;  */

void FUN_10382144c(void)

{
  func_0x000107c61168(&PTR_PTR_1128f2e30);
  return;
}



/* Entry: 10382146c; end: 103821477;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10382146c(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar8 = *(long *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar10 = *(undefined8 *)(lVar8 + _DAT_112f9fff0);
  func_0x000107c44d98(uVar10);
  func_0x000107c438d4(lVar6);
  func_0x000107c54b80(0,param_1,lVar6);
  lVar2 = lVar8;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103820e10);
    (*pcVar1)();
  }
  func_0x000107c5b078();
  func_0x000107c61170(lVar2);
  lVar2 = lVar8;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103820e14);
    (*pcVar1)();
  }
  func_0x000107c5b078();
  func_0x000107c61170(lVar2);
  func_0x000107c44d98(uVar10);
  func_0x000107c438d4(lVar6);
  func_0x000107c54b80(lVar6);
  func_0x000107c3e748(uVar9);
  lVar2 = lVar8;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103820e18);
    (*pcVar1)();
  }
  func_0x000107c3d89c();
  func_0x000107c61170(lVar2);
  lVar2 = lVar6;
  func_0x000107c5a050();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 9;
  *(undefined8 *)(lVar2 + 0x10) = 4;
  lVar3 = lVar6;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c3ec1c(uVar10);
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c40284(0x4010000000000000);
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar10);
  *(long *)(lVar2 + 0x20) = lVar4;
  lVar3 = lVar6;
  func_0x000107c4ace0();
  func_0x000107c61180();
  lVar4 = lVar8;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c4ace0();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    lVar4 = lVar3;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar5);
    *(long *)(lVar2 + 0x28) = lVar4;
    lVar3 = lVar6;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    lVar4 = lVar8;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103820e20);
      (*pcVar1)();
    }
    lVar5 = lVar4;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    lVar4 = lVar3;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar5);
    *(long *)(lVar2 + 0x30) = lVar4;
    func_0x000107c50890();
    func_0x000107c61180();
    lVar3 = lVar8;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 != 0) {
      puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar4 = lVar3;
      func_0x000107c50890(lVar3);
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      lVar3 = lVar6;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar4);
      *(long *)(lVar2 + 0x38) = lVar3;
      uVar10 = 0;
      FUN_1038214b4(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar6 = lVar2;
      func_0x000107c5fc48(lVar2,uVar10);
      func_0x000107c61574(lVar2);
      func_0x000107c3d048(puVar7);
      func_0x000107c61170(lVar6);
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar8 != 0) {
        func_0x000107c4abfc();
        func_0x000107c61170(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bf941b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(uVar9,PTR_s_endAppearanceTransition_1125c2a10);
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103820e28);
      (*pcVar1)();
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103820e24);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103820e1c);
  (*pcVar1)();
}



/* Entry: 103821478; end: 103821497;  */

void FUN_103821478(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103821498; end: 1038214b3;  */

void FUN_103821498(long param_1,long param_2)

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



/* Entry: 1038214b4; end: 1038214f3;  */

void FUN_1038214b4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1038214f4; end: 103821bd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038214f4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8,undefined8 param_9
                  ,long param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined *puVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  
  func_0x000107c613fc();
  uVar15 = *(undefined8 *)(param_10 + _DAT_1130813f0);
  uVar1 = 0;
  func_0x000100b72c48();
  func_0x000107c610f8();
  func_0x000107c6157c(uVar15);
  func_0x000107c453e4();
  func_0x0001000285a8(0x112d5a5f8,&UNK_10d921380);
  uVar3 = param_11;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  uVar2 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  func_0x0001000285a8(0x112d5d810,&UNK_10d923f50);
  uVar3 = param_4;
  func_0x000107c4aeb0();
  func_0x000107c61180();
  uVar12 = uVar3;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  uVar13 = uVar12;
  func_0x0001000bda74();
  func_0x000107c61170(uVar12);
  func_0x0001000285a8(0x112f421e0,&UNK_10db8f110);
  uVar3 = param_5;
  func_0x000107c3e060();
  func_0x000107c61180();
  uVar12 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  func_0x0001000285a8(0x112ee9da8,&UNK_10dc15660);
  uVar3 = *(undefined8 *)(param_3 + _DAT_1130385d8);
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x0001000b637c();
  func_0x000107c61170(uVar3);
  func_0x0001000285a8(0x112fa0028,&UNK_10dc150b0);
  uVar3 = param_9;
  func_0x000107c4af88(param_9);
  func_0x000107c61180();
  uVar6 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  uVar3 = 0x112fa0030;
  func_0x0001000285a8(0x112fa0030,&UNK_10dc15670);
  pcVar5 = FUN_103821bd4;
  func_0x0001000cb480(FUN_103821bd4,0,uVar3);
  func_0x000107c61574(uVar6);
  func_0x0001000285a8(0x112fa0038,&UNK_10dc150c0);
  uVar6 = *(undefined8 *)(param_7 + _DAT_113081210);
  func_0x000107c3f238(uVar6);
  func_0x000107c61180();
  uVar3 = uVar6;
  func_0x0001000bda74();
  func_0x000107c61170(uVar6);
  pcVar7 = FUN_103821be0;
  func_0x0001000cb480(FUN_103821be0,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar3);
  puVar8 = &UNK_11069ab18;
  func_0x000107c613fc(&UNK_11069ab18,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar2;
  *(undefined8 *)(puVar8 + 0x18) = uVar1;
  func_0x0001000285a8(0x112fa0040,&UNK_10dc15680);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(uVar1);
  pcVar9 = FUN_103821c94;
  func_0x0001000bdd8c(FUN_103821c94,puVar8);
  lVar10 = 0;
  func_0x000100b72df0();
  func_0x000107c613fc();
  func_0x0001000c6560(0);
  func_0x000107c613fc();
  uVar3 = uVar15;
  func_0x000107c6157c();
  func_0x0001000c6580();
  *(undefined8 *)(lVar10 + 0x58) = uVar3;
  *(undefined8 *)(lVar10 + 0x10) = 0;
  *(undefined8 *)(lVar10 + 0x18) = uVar13;
  *(code **)(lVar10 + 0x20) = pcVar7;
  *(undefined8 *)(lVar10 + 0x28) = uVar12;
  *(code **)(lVar10 + 0x30) = pcVar5;
  *(code **)(lVar10 + 0x38) = pcVar9;
  *(undefined8 *)(lVar10 + 0x40) = uVar15;
  *(undefined8 *)(lVar10 + 0x48) = uVar4;
  *(undefined2 *)(lVar10 + 0x50) = 1;
  *(long *)(unaff_x20 + 0x10) = lVar10;
  func_0x000107c42c20(param_12);
  func_0x0001000d224c(&puStack_98);
  pcVar5 = pcStack_78;
  puVar8 = puStack_80;
  func_0x0001000a8868(&puStack_98,puStack_80);
  (**(code **)(pcVar5 + 0x68))(puVar8,pcVar5);
  func_0x0001000834e4(&puStack_98);
  if (((ulong)puVar8 & 1) == 0) {
    lVar11 = *(long *)(param_8 + _DAT_113093a90);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar11 == 0) {
      func_0x000107c61170(param_10);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_7);
      func_0x000107c61170(param_8);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_9);
      func_0x000107c61170(param_11);
      func_0x000107c61170(param_12);
      func_0x000107c61574(uVar15);
      func_0x000107c61170(uVar1);
      func_0x000107c61574(uVar2);
      return unaff_x20;
    }
    func_0x000100079360(0);
    func_0x0001007dd39c(0);
    uVar12 = 0;
    func_0x0001007dd3bc(0);
    func_0x000100b72e98();
    uVar3 = uVar12;
    func_0x0001007dd440();
    func_0x000107c61170(uVar12);
    uVar12 = uVar3;
    func_0x0001007dd4e0(uVar3);
    func_0x000107c61170(uVar3);
    uVar13 = 0;
    func_0x0001000aad1c(0);
    func_0x0001000aad3c();
    uVar3 = 0;
    func_0x0001000295c4(0);
    func_0x000107c5ffdc();
    puVar8 = &UNK_11069ab40;
    func_0x000107c613fc(&UNK_11069ab40,0x18,7);
    func_0x000107c61644(puVar8 + 0x10,lVar10);
    pcStack_78 = FUN_103821cf0;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000f6b44;
    puStack_80 = &UNK_11069ab58;
    ppuVar14 = &puStack_98;
    puStack_70 = puVar8;
    func_0x000107c60bc4(ppuVar14);
    func_0x000107c61574(puStack_70);
    func_0x000107c5e08c(lVar11);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
    func_0x000107c60bd0(ppuVar14);
    func_0x000107c61574(uVar15);
    func_0x000107c61170(uVar1);
    func_0x000107c61574(uVar2);
    func_0x000107c615e8(lVar11);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar13);
  }
  else {
    func_0x000107c6157c(lVar10);
    FUN_10384a904();
    func_0x000107c61574(uVar15);
    func_0x000107c61170(uVar1);
    func_0x000107c61574(uVar2);
    func_0x000107c61574(lVar10);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_11);
    uVar3 = param_12;
  }
  func_0x000107c61170(uVar3);
  return unaff_x20;
}



/* Entry: 103821bd4; end: 103821bdf;  */

void FUN_103821bd4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 103821be0; end: 103821c0b;  */

void FUN_103821be0(undefined1 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    func_0x000107c5ae94();
  }
  *param_1 = (char)lVar1;
  return;
}



/* Entry: 103821c0c; end: 103821c93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103821c0c(long *param_1)

{
  long lVar1;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    lVar1 = lStack_38;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_38);
    lStack_38 = lVar1;
    func_0x000100471e0c(lVar1,0);
    func_0x000107c615e8(lVar1);
  }
  *param_1 = lStack_38;
  return;
}



/* Entry: 103821c94; end: 103821c9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103821c94(long *param_1)

{
  long lVar1;
  long unaff_x20;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38,*(undefined8 *)(unaff_x20 + 0x10));
  if (lStack_38 != 0) {
    lVar1 = lStack_38;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_38);
    lStack_38 = lVar1;
    func_0x000100471e0c(lVar1,0);
    func_0x000107c615e8(lVar1);
  }
  *param_1 = lStack_38;
  return;
}



/* Entry: 103821c9c; end: 103821cef;  */

void FUN_103821c9c(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_10384a904();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 103821cf0; end: 103821d13;  */

void FUN_103821cf0(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_10384a904();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 103821d14; end: 103821d63;  */

void FUN_103821d14(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103821d64; end: 103821d6f;  */

void FUN_103821d64(void)

{
  return;
}



/* Entry: 103821d70; end: 103821e6f;  */

undefined8 FUN_103821d70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_2;
  func_0x0001007b7d34(param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 103821e70; end: 103821e97;  */

void FUN_103821e70(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  func_0x000107c3ebcc();
  *param_1 = uVar1;
  return;
}



/* Entry: 103821e98; end: 103821f67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103821e98(undefined1 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + _DAT_113081210);
    func_0x000107c615f0(lVar2);
    func_0x000107c61170(param_2);
    lVar1 = lVar2;
    func_0x000107c4cf78();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x000107c5ac3c();
      uVar3 = (undefined1)lVar1;
      func_0x000107c615e8(lVar2);
      goto LAB_103821f50;
    }
  }
  uVar3 = 0;
LAB_103821f50:
  *param_1 = uVar3;
  return;
}



/* Entry: 103821f68; end: 103821f8b;  */

void FUN_103821f68(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103821f8c; end: 103821fa7;  */

void FUN_103821f8c(void)

{
  return;
}



/* Entry: 103821fa8; end: 103821ff3;  */

void FUN_103821fa8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9d690,&UNK_10d93e100);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10382207c,param_1);
  return;
}



/* Entry: 103821ff4; end: 10382207b;  */

void FUN_103821ff4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010451338c();
  func_0x000107c61170(uStack_38);
  uVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  uVar2 = 0;
  FUN_103871060(0);
  func_0x000107c610f8();
  func_0x000103870e3c(uVar1,uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10382207c; end: 103822093;  */

void FUN_10382207c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010451338c();
  func_0x000107c61170(uStack_38);
  uVar1 = unaff_x20;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(unaff_x20);
  uVar2 = 0;
  FUN_103871060(0);
  func_0x000107c610f8();
  func_0x000103870e3c(uVar1,uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103822094; end: 103822107;  */

long FUN_103822094(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  if (param_1 == 0x2e) {
    lVar1 = *(long *)(unaff_x20 + 0x10);
    if (lVar1 == 0) {
      return 0;
    }
    func_0x000107c61174();
    lVar2 = lVar1;
    func_0x000103822b28();
LAB_1038220ec:
    func_0x000107c61170(lVar1);
  }
  else {
    if (param_1 == 0x6d) {
      lVar1 = *(long *)(unaff_x20 + 0x18);
      if (lVar1 == 0) {
        return 0;
      }
      if ((*(byte *)(unaff_x20 + 0x20) & 1) == 0) {
        func_0x000107c61174();
        lVar2 = lVar1;
        FUN_1038228b4();
        goto LAB_1038220ec;
      }
    }
    lVar2 = 0;
  }
  return lVar2;
}



/* Entry: 103822108; end: 1038225e3;  */

undefined * FUN_103822108(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined *puVar17;
  ulong uVar18;
  ulong uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  func_0x000107c3d128();
  func_0x000107c61180();
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != 0) {
    uVar5 = 0;
    FUN_103823300(0,0x112d530b0,&PTR_PTR_1126d8840);
    uVar6 = param_1;
    func_0x000107c5fc54(param_1,uVar5);
    func_0x000107c61170(param_1);
    if (uVar6 >> 0x3e == 0) {
      uVar16 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
      puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar16 = uVar6 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar6) {
        uVar16 = uVar6;
      }
      func_0x000107c60480();
      puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar11;
    if (uVar16 != 0) {
      uStack_b0 = uVar6 & 0xffffffffffffff8;
      uVar18 = 0;
      do {
        while( true ) {
          if ((uVar6 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uStack_b0 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x103822434);
              (*pcVar4)();
            }
            uVar7 = *(ulong *)(uVar6 + uVar18 * 8 + 0x20);
            func_0x000107c61174(uVar7);
          }
          else {
            uVar7 = uVar18;
            func_0x000100ff3f74(uVar18,uVar6);
          }
          puVar17 = PTR___NSConcreteStackBlock_11034bd00;
          uVar1 = uVar18 + 1;
          if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103822430);
            (*pcVar4)();
          }
          puStack_80 = (undefined *)0x0;
          lStack_78 = 0;
          pcStack_88 = FUN_1038225e4;
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          puStack_98 = &UNK_100fe4708;
          puStack_90 = &UNK_11069aca8;
          ppuVar8 = &puStack_a8;
          func_0x000107c60bc4(ppuVar8);
          func_0x000107c61574(puStack_80);
          puVar15 = &UNK_11069ace0;
          func_0x000107c613fc(&UNK_11069ace0,0x18,7);
          *(long **)(puVar15 + 0x10) = &lStack_78;
          puVar9 = &UNK_11069ad08;
          func_0x000107c613fc(&UNK_11069ad08,0x20,7);
          *(undefined8 *)(puVar9 + 0x10) = 0x103823340;
          *(undefined **)(puVar9 + 0x18) = puVar15;
          pcStack_88 = (code *)0x10382336c;
          puStack_a8 = puVar17;
          uStack_a0 = 0x42000000;
          puStack_98 = &UNK_100fe4704;
          puStack_90 = &UNK_11069ad20;
          ppuVar10 = &puStack_a8;
          puStack_80 = puVar9;
          func_0x000107c60bc4(ppuVar10);
          puVar17 = puStack_80;
          func_0x000107c6157c(puVar9);
          func_0x000107c61574(puVar17);
          func_0x000107c4c5c4(uVar7);
          func_0x000107c61170(uVar7);
          func_0x000107c60bd0(ppuVar10);
          func_0x000107c60bd0(ppuVar8);
          uVar7 = 0;
          func_0x000107c61544(0,"",0x67,0x61,0x2a,1);
          func_0x000107c61574(puVar15);
          if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103822438);
            (*pcVar4)();
          }
          puVar17 = puVar9;
          func_0x000107c61544(puVar9,"",0x67,0x62,0x1b,1);
          func_0x000107c61574(puVar9);
          lVar3 = lStack_78;
          if (((ulong)puVar17 & 1) != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10382243c);
            (*pcVar4)();
          }
          if (lStack_78 != 0) break;
          uVar18 = uVar18 + 1;
          if (uVar1 == uVar16) goto LAB_103822460;
        }
        puVar17 = puVar11;
        func_0x000107c61550();
        if ((((int)puVar17 == 0) || ((long)puVar11 < 0)) ||
           (puVar17 = puVar11, ((ulong)puVar11 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar11 >> 0x3e == 0) {
            puVar15 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar15 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar11) {
              puVar15 = puVar11;
            }
            func_0x000107c60480(puVar15);
          }
          puVar17 = (undefined *)0x0;
          func_0x000100fe2a60(0,puVar15 + 1,1,puVar11);
        }
        uVar7 = (ulong)puVar17 & 0xffffffffffffff8;
        uVar18 = *(ulong *)(uVar7 + 0x10);
        puVar11 = puVar17;
        if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar18) {
          puVar11 = (undefined *)(ulong)(1 < *(ulong *)(uVar7 + 0x18));
          func_0x000100fe2a60(puVar11,uVar18 + 1,1,puVar17);
          uVar7 = (ulong)puVar11 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar7 + 0x10) = uVar18 + 1;
        *(long *)(uVar7 + uVar18 * 8 + 0x20) = lVar3;
        uVar18 = uVar1;
      } while (uVar1 != uVar16);
    }
LAB_103822460:
    func_0x000107c6142c(uVar6);
  }
  puVar17 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
  if ((ulong)puVar11 >> 0x3e == 0) {
    puVar15 = *(undefined **)(puVar17 + 0x10);
  }
  else {
    puVar15 = puVar17;
    if ((undefined *)0x7fffffffffffffff < puVar11) {
      puVar15 = puVar11;
    }
    func_0x000107c60480();
  }
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar15 != (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar11 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar17 + 0x10) <= puVar14) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103822568);
            (*pcVar4)();
          }
          puVar12 = *(undefined **)(puVar11 + (long)puVar14 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar12 = puVar14;
          func_0x000100ff3f88(puVar14,puVar11);
        }
        puVar2 = puVar14 + 1;
        if (SCARRY8((long)puVar14,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103822564);
          (*pcVar4)();
        }
        puVar13 = puVar12;
        func_0x000107c49d84();
        if (((ulong)puVar13 & 1) != 0) break;
        func_0x000107c61170(puVar12);
        puVar14 = puVar14 + 1;
        if (puVar2 == puVar15) goto LAB_103822584;
      }
      puVar14 = puVar9;
      func_0x000107c61558();
      puStack_a8 = puVar9;
      if (((ulong)puVar14 & 1) == 0) {
        func_0x0001019d4adc(0,*(long *)(puVar9 + 0x10) + 1,1);
      }
      uVar6 = *(ulong *)(puStack_a8 + 0x10);
      if (*(ulong *)(puStack_a8 + 0x18) >> 1 <= uVar6) {
        func_0x0001019d4adc(1 < *(ulong *)(puStack_a8 + 0x18),uVar6 + 1,1);
      }
      *(ulong *)(puStack_a8 + 0x10) = uVar6 + 1;
      *(undefined **)(puStack_a8 + uVar6 * 8 + 0x20) = puVar12;
      puVar9 = puStack_a8;
      puVar14 = puVar2;
    } while (puVar2 != puVar15);
  }
LAB_103822584:
  func_0x000107c6142c(puVar11);
  uVar5 = 0;
  FUN_103823300(0,0x112d4d630,&PTR_PTR_1126ae6a8);
  puVar11 = puVar9;
  func_0x000107c5fc48(puVar9,uVar5);
  func_0x000107c61574(puVar9);
  return puVar11;
}



/* Entry: 1038225e4; end: 1038225e7;  */

void FUN_1038225e4(void)

{
  return;
}



/* Entry: 1038225e8; end: 10382262b;  */

void FUN_1038225e8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_103822108();
  uVar1 = 0;
  FUN_103823300(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  param_1[3] = uVar1;
  *param_1 = param_2;
  return;
}



/* Entry: 10382262c; end: 103822867;  */

void FUN_10382262c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c4b56c();
  func_0x000107c61180();
  uVar1 = 0;
  FUN_103823300(0,0x112d4d630,&PTR_PTR_1126ae6a8);
  uVar2 = param_2;
  func_0x000107c5fc54(param_2,uVar1);
  func_0x000107c61170(param_2);
  uVar1 = 0x112d530a8;
  func_0x0001000285a8(0x112d530a8,&UNK_10d919940);
  param_1[3] = uVar1;
  *param_1 = uVar2;
  return;
}



/* Entry: 103822868; end: 1038228b3;  */

void FUN_103822868(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1038228b4; end: 103822e13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038228b4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined1 uVar10;
  long extraout_x8;
  undefined1 *puVar11;
  undefined **ppuVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  
  lVar8 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = &stack0xffffffffffffffa0 + -extraout_x8;
  ppuVar12 = &PTR____CFConstantStringClassReference_110f31138;
  lVar8 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  uVar7 = 0x30;
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x18) = 2;
  *(undefined8 *)(lVar8 + 0x10) = 1;
  ppuVar5 = ppuVar12;
  func_0x000107c5faec();
  *(undefined ***)(lVar8 + 0x20) = ppuVar5;
  *(undefined8 *)(lVar8 + 0x28) = uVar7;
  func_0x000107c61174();
  ppuVar5 = ppuVar12;
  FUN_10384e960();
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar15 = *(long *)(lVar1 + -8);
  (**(code **)(lVar15 + 0x38))(puVar11,1,1,lVar1);
  lVar2 = lVar8;
  func_0x000107c5fc48(lVar8,PTR___sSSN_11034da80);
  func_0x000107c61574(lVar8);
  func_0x000107c5fadc(ppuVar5,uVar7);
  func_0x000107c6142c(uVar7);
  lVar8 = 1;
  puVar3 = puVar11;
  (**(code **)(lVar15 + 0x30))(puVar11,1,lVar1);
  puVar13 = (undefined1 *)0x0;
  if ((int)puVar3 != 1) {
    func_0x000107c5ed90();
    (**(code **)(lVar15 + 8))(puVar11);
    lVar8 = lVar1;
    puVar13 = puVar3;
  }
  puVar4 = PTR_PTR_1126cce38;
  func_0x000107c610f8();
  ppuVar9 = ppuVar12;
  lVar1 = lVar2;
  func_0x000107c45d54();
  uVar10 = (undefined1)lVar1;
  func_0x000107c61170(ppuVar12);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(ppuVar5);
  func_0x000107c61170(puVar13);
  lVar2 = param_1;
  func_0x000103822730();
  lVar15 = *(long *)(param_1 + _DAT_11306db38);
  lVar1 = lVar8;
  if (lVar15 != 0) {
    lVar14 = lVar8;
    func_0x000107c4ee68();
    func_0x000107c61180();
    lVar1 = lVar14;
    if (lVar15 != 0) {
      lVar6 = lVar15;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      func_0x000107c61170(lVar15);
      lVar15 = lVar6;
      func_0x000107c5faec();
      lVar1 = lVar14;
      func_0x000107c61170(lVar6);
      goto LAB_103822ac8;
    }
  }
  lVar15 = 0;
  lVar14 = 0;
LAB_103822ac8:
  ppuVar5 = &PTR____CFConstantStringClassReference_110f31158;
  func_0x000107c5faec();
  lVar6 = 0;
  func_0x0001038882d0();
  func_0x000107c613fc();
  *(undefined **)(lVar6 + 0x10) = puVar4;
  *(long *)(lVar6 + 0x18) = lVar2;
  *(long *)(lVar6 + 0x20) = lVar8;
  *(undefined ***)(lVar6 + 0x28) = ppuVar9;
  *(undefined1 *)(lVar6 + 0x30) = uVar10;
  *(long *)(lVar6 + 0x38) = lVar15;
  *(long *)(lVar6 + 0x40) = lVar14;
  *(undefined ***)(lVar6 + 0x48) = ppuVar5;
  *(long *)(lVar6 + 0x50) = lVar1;
  return;
}



/* Entry: 103822e14; end: 103822e2f;  */

void FUN_103822e14(long param_1,long param_2)

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



/* Entry: 103822e30; end: 103823037;  */

void FUN_103822e30(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long lVar7;
  long extraout_x8;
  undefined **ppuVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined **ppuVar12;
  long lVar13;
  
  lVar7 = 0x112d36580;
  puVar6 = &UNK_10d9016d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &stack0xffffffffffffffb0 + -extraout_x8;
  ppuVar8 = &PTR____CFConstantStringClassReference_110f31178;
  ppuVar1 = ppuVar8;
  func_0x000107c5faec();
  puVar10 = puVar6;
  func_0x000107c61174();
  ppuVar2 = ppuVar8;
  func_0x00010b0aee34();
  func_0x000107c61180();
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar12 = (undefined **)0x0;
    puVar10 = (undefined *)0xe000000000000000;
  }
  else {
    ppuVar12 = ppuVar2;
    func_0x000107c5faec();
    func_0x000107c61170(ppuVar2);
  }
  lVar7 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x18) = 2;
  *(undefined8 *)(lVar7 + 0x10) = 1;
  *(undefined ***)(lVar7 + 0x20) = ppuVar1;
  *(undefined **)(lVar7 + 0x28) = puVar6;
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar3 + -8);
  (**(code **)(lVar13 + 0x38))(puVar9,1,1,lVar3);
  lVar4 = lVar7;
  func_0x000107c5fc48(lVar7,PTR___sSSN_11034da80);
  func_0x000107c61574(lVar7);
  func_0x000107c5fadc(ppuVar12,puVar10);
  func_0x000107c6142c(puVar10);
  puVar5 = puVar9;
  (**(code **)(lVar13 + 0x30))(puVar9,1,lVar3);
  puVar11 = (undefined1 *)0x0;
  if ((int)puVar5 != 1) {
    func_0x000107c5ed90();
    (**(code **)(lVar13 + 8))(puVar9,lVar3);
    puVar11 = puVar5;
  }
  puVar6 = PTR_PTR_1126cce38;
  func_0x000107c610f8();
  func_0x000107c45d54();
  func_0x000107c61170(ppuVar8);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(ppuVar12);
  func_0x000107c61170(puVar11);
  lVar7 = 0;
  func_0x0001038882d0();
  func_0x000107c613fc();
  *(undefined **)(lVar7 + 0x10) = puVar6;
  *(undefined8 *)(lVar7 + 0x18) = 0;
  *(undefined8 *)(lVar7 + 0x20) = 0;
  *(undefined8 *)(lVar7 + 0x28) = 0;
  *(undefined1 *)(lVar7 + 0x30) = 0;
  *(undefined8 *)(lVar7 + 0x40) = 0;
  *(undefined8 *)(lVar7 + 0x38) = 0;
  *(undefined8 *)(lVar7 + 0x50) = 0;
  *(undefined8 *)(lVar7 + 0x48) = 0;
  return;
}



/* Entry: 103823038; end: 1038232ff;  */

void FUN_103823038(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long extraout_x8;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long lVar13;
  long lVar14;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  lVar9 = 0x112d36580;
  puVar6 = &UNK_10d9016d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&puStack_90 - extraout_x8;
  ppuVar10 = &PTR____CFConstantStringClassReference_110f31178;
  ppuVar1 = ppuVar10;
  func_0x000107c5faec();
  puVar11 = puVar6;
  func_0x000107c61174();
  ppuVar2 = ppuVar10;
  func_0x00010b0aee34();
  func_0x000107c61180();
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar12 = (undefined **)0x0;
    puVar11 = (undefined *)0xe000000000000000;
  }
  else {
    ppuVar12 = ppuVar2;
    func_0x000107c5faec();
    func_0x000107c61170(ppuVar2);
  }
  lVar3 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  *(undefined ***)(lVar3 + 0x20) = ppuVar1;
  *(undefined **)(lVar3 + 0x28) = puVar6;
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar4 + -8);
  (**(code **)(lVar14 + 0x38))(lVar9,1,1,lVar4);
  lVar5 = lVar3;
  func_0x000107c5fc48(lVar3,PTR___sSSN_11034da80);
  func_0x000107c61574(lVar3);
  func_0x000107c5fadc(ppuVar12,puVar11);
  func_0x000107c6142c(puVar11);
  lVar3 = lVar9;
  (**(code **)(lVar14 + 0x30))(lVar9,1,lVar4);
  lVar13 = 0;
  if ((int)lVar3 != 1) {
    func_0x000107c5ed90();
    (**(code **)(lVar14 + 8))(lVar9,lVar4);
    lVar13 = lVar3;
  }
  puVar6 = PTR_PTR_1126cce38;
  func_0x000107c610f8();
  func_0x000107c45d54();
  func_0x000107c61170(ppuVar10);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(ppuVar12);
  func_0x000107c61170(lVar13);
  func_0x000107c4cd74();
  func_0x000107c61180();
  pcStack_70 = FUN_1038225e8;
  uStack_68 = 0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1022cdb64;
  puStack_78 = &UNK_11069ac80;
  ppuVar1 = &puStack_90;
  func_0x000107c60bc4(ppuVar1);
  func_0x000107c61574(uStack_68);
  uVar7 = param_1;
  func_0x000107c4c280();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar1);
  func_0x000107c61170(param_1);
  func_0x000103877854(0);
  func_0x000107c610f8();
  uVar8 = 0;
  func_0x000103877814(0,0);
  lVar9 = 0;
  func_0x0001038882d0();
  func_0x000107c613fc();
  *(undefined **)(lVar9 + 0x10) = puVar6;
  *(undefined8 *)(lVar9 + 0x18) = 0xc;
  *(undefined8 *)(lVar9 + 0x20) = uVar7;
  *(undefined8 *)(lVar9 + 0x28) = uVar8;
  *(undefined1 *)(lVar9 + 0x30) = 1;
  *(undefined8 *)(lVar9 + 0x40) = 0;
  *(undefined8 *)(lVar9 + 0x38) = 0;
  *(undefined8 *)(lVar9 + 0x50) = 0;
  *(undefined8 *)(lVar9 + 0x48) = 0;
  return;
}



/* Entry: 103823300; end: 10382338b;  */

void FUN_103823300(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10382338c; end: 1038233a7;  */

void FUN_10382338c(long param_1,long param_2)

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



/* Entry: 1038233a8; end: 1038234e7;  */

void FUN_1038233a8(undefined8 *param_1,undefined **param_2,ulong param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  ppuVar2 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar3 = ppuVar2;
    func_0x000107c49c0c();
    func_0x000107c615e8(ppuVar2);
    if ((int)ppuVar3 != 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110f31198;
      func_0x000107c5faec();
      uVar6 = param_3;
      func_0x000107c5c734();
      func_0x000107c61180();
      uVar5 = uVar6;
      uVar7 = param_3;
      if (param_2 != (undefined **)0x0) {
        ppuVar3 = param_2;
        func_0x000107c411fc();
        func_0x000107c61180();
        func_0x000107c615e8(param_2);
        ppuVar4 = ppuVar3;
        func_0x000107c5faec();
        uVar5 = uVar6;
        func_0x000107c61170(ppuVar3);
        uVar1 = (ulong)ppuVar4 & 0xffffffffffff;
        if ((uVar6 & 0x2000000000000000) != 0) {
          uVar1 = uVar6 >> 0x38 & 0xf;
        }
        if (uVar1 != 0) {
          uVar7 = uVar6;
          ppuVar2 = ppuVar4;
          uVar6 = param_3;
        }
        func_0x000107c6142c(uVar6);
      }
      ppuVar3 = &PTR____CFConstantStringClassReference_110f31158;
      func_0x000107c5faec();
      ppuVar4 = &PTR____CFConstantStringClassReference_110f311b8;
      uVar6 = uVar5;
      func_0x000107c5faec();
      goto LAB_1038234c8;
    }
  }
  ppuVar4 = (undefined **)0x0;
  uVar5 = 0;
  ppuVar3 = (undefined **)0x0;
  uVar7 = 0;
  ppuVar2 = (undefined **)0x0;
  uVar6 = 0;
LAB_1038234c8:
  *param_1 = ppuVar3;
  param_1[1] = uVar5;
  param_1[2] = ppuVar2;
  param_1[3] = uVar7;
  param_1[4] = ppuVar4;
  param_1[5] = uVar6;
  return;
}



/* Entry: 1038234e8; end: 1038236fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038234e8(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(param_2 + _DAT_113034fe0);
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  uVar2 = *(undefined8 *)(param_3 + _DAT_113038630);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  uVar2 = param_10;
  func_0x000107c4b5c4();
  func_0x000107c61180();
  uVar1 = *(undefined8 *)(param_11 + _DAT_112fa41e8);
  *(undefined8 *)(unaff_x20 + 0x58) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x60) = uVar1;
  func_0x000107c61174(uVar1);
  uVar2 = param_12;
  func_0x000107c4ae78();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_12);
  *(undefined8 *)(unaff_x20 + 0x68) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  *(undefined8 *)(unaff_x20 + 0x78) = param_15;
  *(undefined8 *)(unaff_x20 + 0x80) = param_16;
  *(undefined8 *)(unaff_x20 + 0x88) = param_14;
  return unaff_x20;
}



/* Entry: 1038236fc; end: 1038237df;  */

void FUN_1038236fc(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    pcVar2 = *(char **)(param_2 + 0x28);
    func_0x000107c61174();
    func_0x000107c61574(param_2);
    pcVar1 = pcVar2;
    func_0x000107c4b2ec();
    func_0x000107c61180();
    func_0x000107c61170(pcVar2);
    pcVar2 = pcVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(pcVar1);
    if (pcVar2 != (char *)0x0) {
      pcVar1 = pcVar2;
      func_0x000107c4c18c();
      func_0x000107c61180();
      func_0x000107c615e8(pcVar2);
      goto LAB_1038237c8;
    }
  }
  pcVar1 = "begin()";
  func_0x0001000c10c0();
  func_0x000107c61180();
LAB_1038237c8:
  *param_1 = pcVar1;
  return;
}



/* Entry: 1038237e0; end: 1038237e7;  */

void FUN_1038237e0(undefined8 *param_1)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    pcVar3 = *(char **)(lVar1 + 0x28);
    func_0x000107c61174();
    func_0x000107c61574(lVar1);
    pcVar2 = pcVar3;
    func_0x000107c4b2ec();
    func_0x000107c61180();
    func_0x000107c61170(pcVar3);
    pcVar3 = pcVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(pcVar2);
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
      func_0x000107c4c18c();
      func_0x000107c61180();
      func_0x000107c615e8(pcVar3);
      goto LAB_1038237c8;
    }
  }
  pcVar2 = "begin()";
  func_0x0001000c10c0();
  func_0x000107c61180();
LAB_1038237c8:
  *param_1 = pcVar2;
  return;
}



/* Entry: 1038237e8; end: 10382384f;  */

void FUN_1038237e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001007b6e3c(0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x00010388ced4(param_2,param_3);
  *param_1 = param_2;
  return;
}



/* Entry: 103823850; end: 103823857;  */

void FUN_103823850(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001007b6e3c(0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x00010388ced4(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 103823858; end: 103823993;  */

void FUN_103823858(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112fa0398,&UNK_10dc15fd0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  pcVar1 = FUN_103824064;
  func_0x0001000bdd8c(FUN_103824064,param_2);
  func_0x000103894904(0);
  func_0x000107c610f8();
  func_0x0001038948c8();
  *param_1 = pcVar1;
  return;
}



/* Entry: 103823994; end: 103823a87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103823994(undefined8 *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined1 auStack_78 [40];
  
  auStack_78[0] = 1;
  func_0x000100087c34(auStack_78);
  uVar1 = 0x112fa0390;
  func_0x0001000285a8(0x112fa0390,&UNK_10dc152d0);
  pcVar2 = FUN_103823a88;
  func_0x0001000cb480(FUN_103823a88,0,uVar1);
  func_0x0001000d224c(auStack_78);
  FUN_103893e40(0);
  func_0x000107c610f8();
  func_0x000107c6157c(in_x3);
  func_0x000107c6157c(in_x4);
  func_0x000107c6157c(in_x5);
  func_0x000103890d38(pcVar2,auStack_78,in_x3,in_x4,in_x5,1);
  *param_1 = pcVar2;
  return;
}



/* Entry: 103823a88; end: 103823a9b;  */

void FUN_103823a88(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = &PTR_DAT_1106a1938;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 103823a9c; end: 103823ad3;  */

void FUN_103823a9c(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  *param_1 = puVar1;
  return;
}



/* Entry: 103823ad4; end: 103823bd3;  */

void FUN_103823ad4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c41090();
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103823bd4; end: 103823cb7;  */

void FUN_103823bd4(undefined8 *param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,uint param_8,
                  undefined8 param_9)

{
  undefined8 uStack_68;
  
  func_0x0001000d224c(&uStack_68);
  FUN_10381e0c4();
  FUN_1038a4550(0);
  func_0x000107c610f8();
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_9);
  func_0x0001038a159c(uStack_68,&PTR_DAT_1106a18f8,param_3 & 0x10101,param_4,param_5,param_6,param_2
                      ,(param_8 ^ 0xffffffff) & 1,param_9);
  *param_1 = uStack_68;
  param_1[1] = &PTR_DAT_1106a2208;
  return;
}



/* Entry: 103823cb8; end: 103823e8f;  */

void FUN_103823cb8(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long alStack_78 [3];
  long lStack_60;
  undefined **ppuStack_58;
  
  if ((param_2 & 1) == 0) {
    lVar3 = 0;
    func_0x00010381a148();
    lVar4 = lVar3;
    func_0x000107c613fc();
    func_0x000107c61614(lVar4 + 0x10,0);
    func_0x000107c61604(lVar4 + 0x10,param_8);
    ppuStack_58 = &PTR_DAT_11069a298;
    lVar2 = 0;
    alStack_78[0] = lVar4;
    lStack_60 = lVar3;
    func_0x0001038908e0();
    func_0x000107c613fc();
    func_0x000107c6157c(param_5);
    func_0x000107c6157c(param_6);
    plVar5 = alStack_78;
    func_0x00010388f4e8(plVar5,param_5,param_6);
    ppuVar6 = &PTR_DAT_1106a1a88;
    ppuVar7 = &PTR_DAT_1106a1a60;
  }
  else {
    func_0x0001000d224c(alStack_78);
    func_0x0001007b73f4(alStack_78,lStack_60);
    (**(code **)((long)ppuStack_58 + 0x120))(lStack_60,ppuStack_58);
    func_0x0001000834e4(alStack_78);
    func_0x0001000285a8(0x112fa03a8,&UNK_10dc15a70);
    func_0x000107c613fc();
    func_0x000107c6157c(param_4);
    plVar5 = (long *)0x1038240c4;
    func_0x0001000bdd8c(0x1038240c4,param_4);
    plVar1 = plVar5;
    FUN_10381e0c4();
    lVar2 = 0;
    FUN_10388caa4();
    func_0x000107c613fc();
    func_0x000107c6157c(param_5);
    func_0x000107c6157c(param_6);
    func_0x00010388bee8(plVar5,param_5,param_6,plVar1,(int)ppuStack_58 == 0);
    ppuVar6 = &PTR_DAT_1106a1800;
    ppuVar7 = &PTR_DAT_1106a17d8;
  }
  param_1[3] = lVar2;
  param_1[4] = (long)ppuVar7;
  param_1[5] = (long)ppuVar6;
  *param_1 = (long)plVar5;
  return;
}



/* Entry: 103823e90; end: 103823f67;  */

void FUN_103823e90(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c3ec38();
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
      lVar1 = lVar2;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar1 != 0) {
        puVar3 = PTR_PTR_1126b40c0;
        func_0x000107c61168(PTR_PTR_1126b40c0);
        param_2 = lVar1;
        func_0x000107c6148c(lVar1,puVar3);
        if (param_2 != 0) goto LAB_103823f50;
        func_0x000107c615e8(lVar1);
      }
    }
    param_2 = 0;
  }
LAB_103823f50:
  *param_1 = param_2;
  return;
}



/* Entry: 103823f68; end: 103824023;  */

void FUN_103823f68(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Entry: 103824024; end: 103824043;  */

void FUN_103824024(void)

{
  func_0x0001007b6828();
  return;
}



/* Entry: 103824044; end: 103824063;  */

undefined8 FUN_103824044(void)

{
  return 0;
}



/* Entry: 103824064; end: 1038240af;  */

void FUN_103824064(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(&uStack_40);
  uVar1 = uStack_40;
  func_0x000107c614f0();
  uVar2 = *(undefined8 *)(lStack_38 + 8);
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  *param_1 = uStack_40;
  return;
}



/* Entry: 1038240b0; end: 103824113;  */

void FUN_1038240b0(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long unaff_x20;
  long alStack_78 [3];
  long lStack_60;
  undefined **ppuStack_58;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  if ((*(byte *)(unaff_x20 + 0x10) & 1) == 0) {
    lVar7 = 0;
    func_0x00010381a148(0,*(undefined8 *)(unaff_x20 + 0x18));
    lVar8 = lVar7;
    func_0x000107c613fc();
    func_0x000107c61614(lVar8 + 0x10,0);
    func_0x000107c61604(lVar8 + 0x10,uVar4);
    ppuStack_58 = &PTR_DAT_11069a298;
    lVar6 = 0;
    alStack_78[0] = lVar8;
    lStack_60 = lVar7;
    func_0x0001038908e0();
    func_0x000107c613fc();
    func_0x000107c6157c(uVar1);
    func_0x000107c6157c(uVar3);
    plVar9 = alStack_78;
    func_0x00010388f4e8(plVar9,uVar1,uVar3);
    ppuVar10 = &PTR_DAT_1106a1a88;
    ppuVar11 = &PTR_DAT_1106a1a60;
  }
  else {
    func_0x0001000d224c(alStack_78);
    func_0x0001007b73f4(alStack_78,lStack_60);
    (**(code **)((long)ppuStack_58 + 0x120))(lStack_60,ppuStack_58);
    func_0x0001000834e4(alStack_78);
    func_0x0001000285a8(0x112fa03a8,&UNK_10dc15a70);
    func_0x000107c613fc();
    func_0x000107c6157c(uVar2);
    plVar9 = (long *)0x1038240c4;
    func_0x0001000bdd8c(0x1038240c4,uVar2);
    plVar5 = plVar9;
    FUN_10381e0c4();
    lVar6 = 0;
    FUN_10388caa4();
    func_0x000107c613fc();
    func_0x000107c6157c(uVar1);
    func_0x000107c6157c(uVar3);
    func_0x00010388bee8(plVar9,uVar1,uVar3,plVar5,(int)ppuStack_58 == 0);
    ppuVar10 = &PTR_DAT_1106a1800;
    ppuVar11 = &PTR_DAT_1106a17d8;
  }
  param_1[3] = lVar6;
  param_1[4] = (long)ppuVar11;
  param_1[5] = (long)ppuVar10;
  *param_1 = (long)plVar9;
  return;
}



/* Entry: 103824114; end: 10382414f;  */

void FUN_103824114(byte *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  func_0x000107c45174();
  *param_1 = uVar1 < 7 & (byte)(0x6c >> (ulong)((uint)uVar1 & 0x1f));
  return;
}



/* Entry: 103824150; end: 103824167;  */

void FUN_103824150(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c41090();
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103824168; end: 103825757;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103824168(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,long param_9
                  ,long param_10,long param_11,long param_12)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  code *pcVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  code *pcVar26;
  code *pcVar27;
  code *pcVar28;
  code *pcVar29;
  undefined *puVar30;
  long lVar31;
  undefined *puVar32;
  undefined *puVar33;
  code *pcVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  long lVar39;
  undefined8 uVar40;
  long *plVar41;
  undefined8 uVar42;
  undefined *puVar43;
  long lVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  long lVar47;
  long unaff_x20;
  undefined8 uVar48;
  long lVar49;
  undefined8 uVar50;
  undefined8 *puVar51;
  long lVar52;
  undefined *puVar53;
  undefined8 uVar54;
  long lVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined *puStack_530;
  undefined *puStack_410;
  undefined1 auStack_300 [40];
  undefined *apuStack_2d8 [3];
  undefined *puStack_2c0;
  undefined **ppuStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long *aplStack_2a0 [3];
  long lStack_288;
  undefined **ppuStack_280;
  undefined8 uStack_278;
  undefined1 uStack_270;
  undefined8 uStack_260;
  undefined **ppuStack_258;
  undefined8 uStack_250;
  char cStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long lStack_220;
  undefined1 uStack_218;
  code *pcStack_210;
  code *pcStack_208;
  undefined1 uStack_200;
  undefined1 auStack_1f8 [88];
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined1 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  code *pcStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  long lStack_120;
  long lStack_108;
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar42 = 0x38;
  func_0x000107c613fc();
  uVar3 = param_5;
  func_0x000107c4ae78();
  func_0x000107c61180();
  uVar45 = *(undefined8 *)(param_9 + _DAT_11307cf60);
  lVar49 = *(long *)(param_11 + _DAT_113036328);
  lVar52 = *(long *)(param_12 + _DAT_112fe94d8);
  ppuVar4 = &PTR____CFConstantStringClassReference_110f30a78;
  func_0x000107c5faec();
  puVar5 = &UNK_11069af08;
  func_0x000107c613fc(&UNK_11069af08,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = param_4;
  func_0x0001000285a8(0x112d382e8,&UNK_10d902020);
  func_0x000107c61534();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  pcVar6 = FUN_1038257c8;
  func_0x0001000bdd8c(FUN_1038257c8,puVar5);
  puVar5 = &UNK_11069af30;
  func_0x000107c613fc(&UNK_11069af30,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,uVar45);
  puVar43 = &UNK_11069af58;
  func_0x000107c613fc(&UNK_11069af58,0x18,7);
  *(undefined8 *)(puVar43 + 0x10) = param_4;
  func_0x0001000285a8(0x112fa03c8,&UNK_10dc15780);
  func_0x000107c61534();
  func_0x000107c61174();
  pcVar7 = FUN_103825848;
  func_0x0001000bdd8c(FUN_103825848,puVar43);
  uVar48 = *(undefined8 *)(lVar49 + _DAT_113082a78);
  uVar46 = *(undefined8 *)(param_10 + _DAT_113036498);
  lVar8 = 0;
  func_0x0001038196c8();
  lVar55 = lVar8;
  func_0x000107c613fc();
  ppuStack_100 = &PTR_DAT_11069a240;
  *(undefined8 *)(lVar55 + 0x18) = uVar46;
  *(undefined8 *)(lVar55 + 0x20) = 1;
  *(undefined8 *)(lVar55 + 0x10) = uVar48;
  uStack_1a0 = 1;
  uStack_198 = 0;
  uStack_190 = 5;
  uStack_178 = 0;
  uStack_168 = 1;
  uStack_160 = 0x1038257d0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_130 = 0;
  uStack_138 = 1;
  uStack_128 = 0;
  plVar41 = (long *)(param_3 + _DAT_112fa2d40);
  ppuStack_188 = ppuVar4;
  uStack_180 = uVar42;
  pcStack_170 = pcVar6;
  puStack_158 = puVar5;
  pcStack_150 = pcVar7;
  lStack_120 = lVar55;
  lStack_108 = lVar8;
  func_0x0001000a8868(plVar41,plVar41[3]);
  uVar50 = *(undefined8 *)(param_1 + _DAT_112fa56f8);
  func_0x0001000285a8(0x112d5d810,&UNK_10d923f50);
  func_0x000107c6157c(uVar48);
  func_0x000107c6157c(uVar46);
  func_0x000107c61174();
  uVar42 = uVar3;
  func_0x000107c4ac68();
  func_0x000107c61180();
  uVar9 = uVar42;
  func_0x0001000bda74();
  func_0x000107c61170(uVar42);
  uVar17 = uVar3;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  lVar47 = *plVar41;
  uVar42 = *(undefined8 *)(lVar47 + 0x10);
  lVar8 = *(long *)(lVar47 + 0x18);
  lVar55 = *(long *)(lVar47 + 0x20);
  puVar5 = *(undefined **)(lVar47 + 0x28);
  uVar46 = *(undefined8 *)(lVar47 + 0x30);
  uVar11 = *(undefined8 *)(lVar47 + 0x38);
  uVar48 = *(undefined8 *)(lVar47 + 0x40);
  uVar12 = *(undefined8 *)(lVar47 + 0x48);
  uVar13 = *(undefined8 *)(lVar47 + 0x50);
  uVar14 = *(undefined8 *)(lVar47 + 0x58);
  uVar15 = *(undefined8 *)(lVar47 + 0x60);
  lVar16 = *(long *)(lVar47 + 0x68);
  puVar43 = *(undefined **)(lVar47 + 0x70);
  FUN_103825850(&uStack_1a0,&uStack_278);
  lVar44 = *(long *)(lVar47 + 0x78);
  lVar10 = 0;
  func_0x00010384c030();
  lVar47 = lVar10;
  func_0x000107c613fc();
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
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(uVar9);
  func_0x000107c61174();
  func_0x0001000d224c(&uStack_98);
  uVar35 = 0;
  lVar39 = 0;
  uVar36 = 0;
  uVar37 = 0;
  uVar38 = 0;
  uVar40 = 0;
  if ((char)uStack_98 == '\x01') {
    puVar53 = puVar5;
    func_0x000107c4b100(puVar5);
    func_0x000107c61180();
    FUN_1038233a8(&uStack_f8);
    func_0x000107c61170(puVar53);
    uVar35 = uStack_f8;
    lVar39 = lStack_f0;
    uVar36 = uStack_e8;
    uVar37 = uStack_e0;
    uVar38 = uStack_d8;
    uVar40 = uStack_d0;
  }
  uStack_c8 = uVar35;
  lStack_c0 = lVar39;
  uStack_b8 = uVar36;
  uStack_b0 = uVar37;
  uStack_a8 = uVar38;
  uStack_a0 = uVar40;
  if (cStack_240 != '\x01') {
    puStack_410 = (undefined *)0x0;
    uVar20 = 0;
    puVar53 = (undefined *)0x0;
    *(undefined8 *)(lVar47 + 0x28) = 0;
    uVar1 = uStack_250;
    uVar22 = uStack_238;
    uVar54 = uStack_230;
    uVar2 = uStack_200;
    goto joined_r0x000103824724;
  }
  puVar53 = puVar5;
  func_0x000107c4b100();
  func_0x000107c61180();
  puVar18 = puVar53;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar53);
  if (puVar18 == (undefined *)0x0) {
LAB_10382473c:
    puStack_410 = (undefined *)0x0;
  }
  else {
    puVar19 = puVar18;
    func_0x000107c4daf8();
    func_0x000107c615e8(puVar18);
    puVar53 = puVar18;
    if ((int)puVar19 == 0) goto LAB_10382473c;
    puStack_410 = puVar43;
    FUN_10384c71c();
    puVar53 = puStack_410;
    if (puStack_410 != (undefined *)0x0) {
      func_0x000107c615f0(puStack_410);
      func_0x000107c5bc1c();
    }
  }
  *(undefined **)(lVar47 + 0x28) = puStack_410;
  if (puStack_410 == (undefined *)0x0) {
    FUN_103822e30();
    puStack_410 = (undefined *)0x0;
  }
  else {
    puVar53 = puStack_410;
    func_0x000107c615f0(puStack_410);
    FUN_103823038();
  }
  func_0x000107c6157c(puVar53);
  func_0x0001000285a8(0x112da9c48,&UNK_10dc15350);
  uVar20 = *(undefined8 *)(lVar55 + _DAT_113080ad0);
  func_0x0001000bda74(uVar20);
  func_0x000107c6157c();
  uVar1 = uStack_250;
  uVar22 = uStack_238;
  uVar54 = uStack_230;
  uVar2 = uStack_200;
joined_r0x000103824724:
  if (lStack_228 == 0) {
    uVar23 = 0;
  }
  else {
    func_0x0001000d224c(&uStack_98);
    uVar23 = uStack_98;
  }
  FUN_1038796f4(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar54);
  func_0x00010382597c(uVar35,lVar39,uVar36,uVar37,uVar38,uVar40);
  func_0x000107c6157c(uVar1);
  uVar21 = uVar9;
  func_0x000103878a74(uVar9,uVar22,uVar54,uVar1,puVar53,&uStack_c8,uVar20,uVar23,uVar2);
  func_0x000107c615e8(puStack_410);
  func_0x000107c61574(uVar20);
  func_0x000107c61574(puVar53);
  uVar20 = uVar42;
  func_0x000107c41284();
  func_0x000107c61180();
  uVar22 = uVar20;
  func_0x000107c4f750();
  func_0x000107c61180();
  func_0x000107c615e8(uVar20);
  uVar20 = uVar46;
  func_0x000107c4b2f8();
  func_0x000107c61180();
  if (lStack_220 == 0) {
    puVar53 = &UNK_11069af80;
    func_0x000107c613fc(&UNK_11069af80,0x18,7);
    *(undefined8 *)(puVar53 + 0x10) = uVar20;
    uVar20 = 0x112fa03d0;
    func_0x0001000285a8(0x112fa03d0,&UNK_10dc15ff0);
    func_0x000107c613fc();
    pcVar6 = FUN_1038259b8;
    func_0x0001000bdd8c(FUN_1038259b8,puVar53,uVar20);
  }
  else {
    func_0x000107c6157c(lStack_220);
    uVar54 = 0x112fa0410;
    func_0x0001000285a8(0x112fa0410,&UNK_10dc15370);
    pcVar6 = FUN_10384bf80;
    func_0x0001000cb480(FUN_10384bf80,0,uVar54);
    func_0x000107c61574(lStack_220);
    func_0x000107c61170(uVar20);
  }
  puVar53 = &UNK_11069afa8;
  func_0x000107c613fc(&UNK_11069afa8,0x18,7);
  func_0x000107c61614(puVar53 + 0x10,param_6);
  puVar18 = &UNK_11069afd0;
  func_0x000107c613fc(&UNK_11069afd0,0x28,7);
  *(undefined **)(puVar18 + 0x10) = puVar53;
  *(code **)(puVar18 + 0x18) = pcVar6;
  *(undefined8 *)(puVar18 + 0x20) = uVar17;
  func_0x0001000285a8(0x112fa03d8,&UNK_10dc15310);
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar20 = 0x1038259c0;
  func_0x0001000bdd8c(0x1038259c0,puVar18);
  if (lVar39 == 0) {
    puVar51 = (undefined8 *)0x0;
  }
  else {
    uStack_98 = uVar35;
    lStack_90 = lVar39;
    uStack_88 = uVar36;
    uStack_80 = uVar37;
    uStack_78 = uVar38;
    uStack_70 = uVar40;
    FUN_103883920(0);
    func_0x000107c610f8();
    uVar54 = uVar17;
    func_0x000107c61174(uVar17);
    func_0x000107c61434(lVar39);
    func_0x000107c61434(uVar37);
    func_0x000107c61434(uVar40);
    puVar51 = &uStack_98;
    FUN_1038831fc(puVar51,uVar54);
  }
  puVar53 = &UNK_11069afa8;
  func_0x000107c613fc(&UNK_11069afa8,0x18,7);
  func_0x000107c61614(puVar53 + 0x10,param_6);
  uVar54 = 0x112fa03e0;
  func_0x0001000285a8(0x112fa03e0,&UNK_10dc15a80);
  func_0x000107c613fc();
  uVar23 = 0x1038259cc;
  func_0x0001000bdd8c(0x1038259cc,puVar53,uVar54);
  uVar54 = *(undefined8 *)(lVar52 + _DAT_112fe95f8);
  uVar56 = *(undefined8 *)(param_7 + _DAT_112f9f6e0);
  lVar24 = 0;
  FUN_10381fe7c();
  lVar25 = lVar24;
  func_0x000107c610f8();
  *(undefined8 *)(lVar25 + _DAT_112f9ffa0) = 0;
  *(undefined8 *)(lVar25 + _DAT_112f9ffa8) = 1;
  *(undefined8 *)(lVar25 + _DAT_112f9ffb0) = 0;
  *(undefined8 *)(lVar25 + _DAT_112f9ff88) = uVar54;
  *(undefined8 *)(lVar25 + _DAT_112f9ff90) = uVar23;
  *(undefined8 *)(lVar25 + _DAT_112f9ff98) = uVar56;
  puVar53 = PTR_s_init_1125d9248;
  lStack_2b0 = lVar25;
  lStack_2a8 = lVar24;
  func_0x000107c6157c(uVar54);
  func_0x000107c6157c(uVar23);
  func_0x000107c6157c(uVar56);
  plVar41 = &lStack_2b0;
  func_0x000107c61154(plVar41,puVar53);
  ppuStack_280 = &PTR_DAT_11069a800;
  lStack_288 = lVar24;
  func_0x000107c61574(uVar23);
  uVar54 = *(undefined8 *)(lVar8 + _DAT_113071300);
  aplStack_2a0[0] = plVar41;
  func_0x000103825adc(aplStack_2a0,apuStack_2d8);
  puVar53 = &UNK_11069aff8;
  func_0x000107c613fc(&UNK_11069aff8,0x62,7);
  *(undefined8 *)(puVar53 + 0x10) = uVar54;
  *(undefined8 *)(puVar53 + 0x18) = uVar20;
  func_0x000100d5f594(apuStack_2d8,puVar53 + 0x20);
  *(undefined8 *)(puVar53 + 0x48) = uVar22;
  *(undefined8 **)(puVar53 + 0x50) = puVar51;
  *(undefined8 *)(puVar53 + 0x58) = uStack_278;
  puVar53[0x60] = uStack_270;
  puVar53[0x61] = uStack_218;
  func_0x0001000285a8(0x112fa03e8,&UNK_10dc15320);
  func_0x000107c613fc();
  func_0x000107c61174(uVar54);
  func_0x000107c6157c(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  puVar18 = (undefined *)0x1038259d4;
  func_0x0001000bdd8c(0x1038259d4,puVar53);
  pcVar7 = pcStack_208;
  pcVar6 = pcStack_210;
  if (pcStack_210 == (code *)0x1) {
    func_0x0001000285a8(0x112f6cf68,&UNK_10dbcadf0);
    uVar54 = uVar13;
    func_0x000107c3ee24(uVar13);
    func_0x000107c61180();
    uVar23 = uVar54;
    func_0x0001000bda74();
    func_0x000107c61170(uVar54);
    uVar54 = 0x112d3b7d8;
    func_0x0001000285a8(0x112d3b7d8,&UNK_10d920690);
    pcVar6 = FUN_10384c61c;
    func_0x0001000cb480(FUN_10384c61c,0,uVar54);
    pcVar7 = FUN_10384c65c;
    func_0x0001000cb480(FUN_10384c65c,0,uVar54);
    func_0x000107c61574(uVar23);
  }
  func_0x0001000285a8(0x112e5b730,&UNK_10dc15a90);
  FUN_1038259d8(pcStack_210,pcStack_208);
  uVar54 = uVar48;
  func_0x000107c4c974(uVar48);
  func_0x000107c61180();
  uVar23 = uVar54;
  func_0x0001000bda74();
  func_0x000107c61170(uVar54);
  uVar54 = 0x112e5b738;
  func_0x0001000285a8(0x112e5b738,&UNK_10da61720);
  pcVar26 = FUN_10384b8d8;
  func_0x0001000cb480(FUN_10384b8d8,0,uVar54);
  func_0x000107c61574(uVar23);
  pcVar27 = FUN_10384b914;
  func_0x0001000cb480(FUN_10384b914,0,&UNK_11077ec38);
  puVar53 = &UNK_11069b020;
  func_0x000107c613fc(&UNK_11069b020,0x18,7);
  func_0x000107c61614(puVar53 + 0x10,uVar11);
  func_0x0001000285a8(0x112d53a70,&UNK_10d91a680);
  func_0x000107c613fc();
  pcVar28 = FUN_103825a0c;
  func_0x0001000bdd8c(FUN_103825a0c,puVar53);
  puVar53 = puVar5;
  func_0x000107c4b100();
  func_0x000107c61180();
  puVar19 = puVar53;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar53);
  if (puVar19 == (undefined *)0x0) {
    puStack_530 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar53 = puVar19;
    func_0x000107c5b458();
    func_0x000107c61180();
    puStack_530 = puVar53;
    func_0x000107c5fc54();
    func_0x000107c61170(puVar53);
  }
  func_0x0001000285a8(0x112d4f8d0,&UNK_10dc15330);
  uVar54 = uVar14;
  func_0x000107c5c360(uVar14);
  func_0x000107c61180();
  uVar23 = uVar54;
  func_0x0001000bda74();
  func_0x000107c61170(uVar54);
  uVar54 = 0x112d5ba30;
  func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
  pcVar29 = FUN_10384ba24;
  func_0x0001000cb480(FUN_10384ba24,0,uVar54);
  func_0x000107c61574(uVar23);
  puVar53 = &UNK_11069b048;
  func_0x000107c613fc(&UNK_11069b048,0x20,7);
  *(undefined8 *)(puVar53 + 0x10) = uVar15;
  *(undefined8 *)(puVar53 + 0x18) = uVar12;
  func_0x0001000285a8(0x112fa03f0,&UNK_10dc15340);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar54 = 0x103825a14;
  func_0x0001000bdd8c(0x103825a14,puVar53);
  puVar30 = (undefined *)0x0;
  FUN_1038806d8();
  puVar53 = puVar30;
  func_0x000107c613fc();
  func_0x000103825a1c(auStack_1f8,apuStack_2d8);
  if (puStack_2c0 == (undefined *)0x0) {
    FUN_103819ed4();
  }
  else {
    func_0x000100d5f594(apuStack_2d8,auStack_300);
    lVar25 = 0x112fa0408;
    func_0x0001000285a8(0x112fa0408,&UNK_10dc15360);
    func_0x000107c61534();
    *(undefined8 *)(lVar25 + 0x18) = 2;
    *(undefined8 *)(lVar25 + 0x10) = 1;
    *(undefined8 *)(lVar25 + 0x20) = uStack_260;
    *(undefined ***)(lVar25 + 0x28) = ppuStack_258;
    func_0x000103825adc(auStack_300,lVar25 + 0x30);
    func_0x000107c61434(ppuStack_258);
    FUN_103819ed4();
    func_0x000107c61588(lVar25);
    FUN_103825bb4((undefined8 *)(lVar25 + 0x20),0x112f9f310,&UNK_10dc15ac0);
    func_0x0001000834e4(auStack_300);
  }
  lVar25 = lVar16;
  func_0x000107c4b3b8();
  func_0x000107c61180();
  lVar24 = lVar25;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar25);
  func_0x0001000285a8(0x112eb17c0,&UNK_10dac6140);
  if (lVar24 == 0) {
    puVar33 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x000107c610f8();
    func_0x000107c453e4();
    ppuVar4 = apuStack_2d8;
    apuStack_2d8[0] = puVar33;
    func_0x000100854cb0();
    func_0x000107c61170(puVar33);
  }
  else {
    lVar25 = lVar24;
    func_0x000107c5006c(lVar24);
    func_0x000107c61180();
    lVar31 = lVar25;
    func_0x0001000b637c();
    func_0x000107c61170(lVar25);
    func_0x0001000d224c(apuStack_2d8);
    puVar33 = apuStack_2d8[0];
    func_0x000100471e0c(apuStack_2d8[0],1);
    func_0x000107c61574(lVar31);
    func_0x000107c615e8(apuStack_2d8[0]);
    puVar32 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x000107c610f8();
    func_0x000107c453e4();
    ppuVar4 = apuStack_2d8;
    apuStack_2d8[0] = puVar32;
    func_0x0001006c71a4();
    func_0x000107c61170(puVar32);
    func_0x000107c615e8(lVar24);
    func_0x000107c61574(puVar33);
  }
  func_0x000107c61434(ppuStack_258);
  func_0x000107c6157c(ppuVar4);
  func_0x000107c6157c(pcVar26);
  func_0x000107c6157c(pcVar29);
  func_0x000107c6157c(pcVar27);
  func_0x000107c6157c(pcVar28);
  func_0x000107c6157c(uVar54);
  pcVar34 = FUN_10384bbe4;
  func_0x0001000cb480(FUN_10384bbe4,0,&UNK_11077ebd0);
  ppuStack_2b8 = &PTR_DAT_1106a0c40;
  apuStack_2d8[0] = puVar53;
  puStack_2c0 = puVar30;
  func_0x000107c6157c(puVar53);
  uVar23 = 0x10384bc2c;
  func_0x0001000cb480(0x10384bc2c,0,PTR___sSbN_11034dd40);
  uVar57 = *(undefined8 *)(lVar44 + _DAT_112fa6450);
  uVar56 = 0;
  FUN_10388ac54();
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x00010382597c(uVar35,lVar39,uVar36,uVar37,uVar38,uVar40);
  func_0x000107c6157c(pcVar7);
  func_0x000107c6157c(uVar1);
  func_0x000107c61174();
  func_0x000107c6157c(uVar57);
  func_0x000107c6157c(puVar18);
  func_0x000107c6157c(pcVar6);
  puVar30 = puVar18;
  func_0x000103888844(puVar18,pcVar26,uVar22,puStack_530,uVar17,pcVar6,pcVar7,ppuVar4,pcVar29,
                      pcVar27,pcVar28,uVar54,uStack_260,ppuStack_258,pcVar34,apuStack_2d8,uVar23,
                      uVar1,&uStack_c8,uVar57,uVar2);
  ppuStack_2b8 = &PTR_DAT_1106a1598;
  puStack_2c0 = (undefined *)uVar56;
  func_0x000107c61574(puVar53);
  func_0x000107c61574(uVar54);
  func_0x000107c61574(pcVar28);
  func_0x000107c61574(pcVar27);
  func_0x000107c61574(pcVar29);
  func_0x000107c61574(pcVar26);
  func_0x000107c615e8(puVar19);
  func_0x000107c61574(ppuVar4);
  func_0x000103825a6c(uVar35,lVar39,uVar36,uVar37,uVar38,uVar40);
  apuStack_2d8[0] = puVar30;
  func_0x0001000285a8(0x112fa0400,&UNK_10dc15ab0);
  uVar35 = uVar22;
  func_0x000107c3f6e8();
  func_0x000107c61180();
  uVar36 = uVar35;
  func_0x0001000bda74();
  func_0x000107c61170(uVar35);
  func_0x0001000285a8(0x112da9c48,&UNK_10dc15350);
  uVar37 = *(undefined8 *)(lVar55 + _DAT_113080ad0);
  func_0x000107c61174(uVar37);
  uVar35 = uVar37;
  func_0x0001000bda74();
  func_0x000107c61170(uVar37);
  func_0x000103825adc(apuStack_2d8,auStack_300);
  uVar38 = 0;
  FUN_103872568();
  uVar37 = uVar38;
  func_0x000107c610f8();
  FUN_1038714fc(uVar36,uVar35,auStack_300,uVar37);
  *(undefined8 *)(lVar47 + 0x10) = uVar50;
  *(undefined8 *)(lVar47 + 0x18) = uVar36;
  func_0x0001000285a8(0x112f421e0,&UNK_10db8f110);
  func_0x000107c61174(uVar50);
  func_0x000107c61174(uVar36);
  uVar35 = param_6;
  func_0x000107c3e060();
  func_0x000107c61180();
  uVar37 = uVar35;
  func_0x0001000bda74();
  func_0x000107c61170();
  FUN_1038714a4();
  lVar39 = 0;
  func_0x00010384cca8();
  func_0x000107c613fc();
  uVar40 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(puVar51);
  func_0x000107c61574(uVar20);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar15);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar6);
  func_0x000107c61170(uVar50);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(lVar55);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(lVar52);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(lVar44);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(puVar43);
  func_0x000107c615e8(puStack_410);
  *(undefined8 *)(lVar39 + 0x10) = uVar37;
  *(undefined8 *)(lVar39 + 0x18) = uVar35;
  *(undefined **)(lVar39 + 0x20) = puVar18;
  *(undefined8 *)(lVar39 + 0x28) = uVar40;
  func_0x0001000834e4(apuStack_2d8);
  func_0x0001000834e4(aplStack_2a0);
  func_0x000103825aa8(&uStack_278);
  *(long *)(lVar47 + 0x20) = lVar39;
  func_0x000107c61574(uVar9);
  *(long *)(unaff_x20 + 0x28) = lVar10;
  *(undefined ***)(unaff_x20 + 0x30) = &PTR_DAT_11069df40;
  func_0x000107c61170(uVar50);
  func_0x000107c61574(uVar9);
  func_0x000107c61170(uVar17);
  plVar41 = (long *)(unaff_x20 + 0x10);
  *plVar41 = lVar47;
  func_0x0001000a8868(plVar41,lVar10);
  lVar55 = *plVar41;
  FUN_103871654();
  uVar42 = *(undefined8 *)(lVar55 + 0x10);
  uVar46 = *(undefined8 *)(lVar55 + 0x18);
  ppuStack_258 = &PTR_DAT_11069f880;
  uStack_278 = uVar46;
  uStack_260 = uVar38;
  FUN_10388af40(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar46);
  puVar51 = &uStack_278;
  func_0x00010388ae60(puVar51);
  func_0x000107c4fba8(uVar42);
  func_0x000107c61170(puVar51);
  FUN_10384c9b0();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(lVar49);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar52);
  func_0x000103825aa8(&uStack_1a0);
  return unaff_x20;
}



/* Entry: 103825758; end: 1038257c7;  */

void FUN_103825758(undefined1 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  
  func_0x000107c4b100();
  func_0x000107c61180();
  lVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c49c0c();
    uVar3 = (undefined1)lVar2;
    func_0x000107c615e8(lVar1);
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 1038257c8; end: 1038257d7;  */

void FUN_1038257c8(undefined1 *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4b100();
  func_0x000107c61180();
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c49c0c();
    uVar3 = (undefined1)lVar2;
    func_0x000107c615e8(lVar1);
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 1038257d8; end: 103825847;  */

void FUN_1038257d8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c4b100();
  func_0x000107c61180();
  lVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4db00();
    func_0x000107c615e8(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 103825848; end: 10382584f;  */

void FUN_103825848(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4b100();
  func_0x000107c61180();
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4db00();
    func_0x000107c615e8(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 103825850; end: 10382588b;  */

undefined8 FUN_103825850(undefined8 param_1,undefined8 param_2)

{
  FUN_10384c0f8(param_2,param_1);
  return param_2;
}



/* Entry: 10382588c; end: 10382592f;  */

undefined8 FUN_10382588c(void)

{
  long unaff_x20;
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  
  func_0x0001000a8868(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100c82230();
  func_0x000104875e28(auStack_58);
  if (lStack_40 == 0) {
    FUN_103825bb4(auStack_58,0x112fa0418,&UNK_10dc15790);
  }
  else {
    func_0x0001000a8868(auStack_58,lStack_40);
    (**(code **)(lStack_38 + 0x30))(lStack_40,lStack_38);
    func_0x0001000834e4(auStack_58);
  }
  return 0;
}



/* Entry: 103825930; end: 103825953;  */

void FUN_103825930(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103825954; end: 103825957;  */

void FUN_103825954(void)

{
  return;
}



/* Entry: 103825958; end: 1038259b7;  */

undefined8 FUN_103825958(void)

{
  FUN_10382588c();
  return 0;
}



/* Entry: 1038259b8; end: 1038259d7;  */

void FUN_1038259b8(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = 0;
  func_0x00010381cda4();
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = uVar1;
  *(undefined8 *)(lVar3 + 0x18) = 1;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_11069a468;
  *param_1 = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar1);
  return;
}



/* Entry: 1038259d8; end: 103825a0b;  */

/* WARNING: Possible PIC construction at 0x0001038259f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038259fc) */

void FUN_1038259d8(long param_1,undefined8 param_2)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 103825a0c; end: 103825a1b;  */

void FUN_103825a0c(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  pcVar1 = (char *)(unaff_x20 + 0x10);
  func_0x000107c61618();
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    func_0x000107c4b2ec();
    func_0x000107c61180();
    func_0x000107c61170(pcVar1);
    pcVar1 = pcVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(pcVar2);
    if (pcVar1 != (char *)0x0) {
      pcVar2 = pcVar1;
      func_0x000107c4c18c();
      func_0x000107c61180();
      func_0x000107c615e8(pcVar1);
      goto LAB_10384ba0c;
    }
  }
  pcVar2 = 
  "createLEBrowserTabFactory(leBrowserPresenter:lensMediaDownloaderServices:lensConfigurationServices:lensCarouselManagerFuture:placeholderLensConfig:plusServices:lensFavoritesServices:lensRemovalServices:lensPerformerServices:lensExplorerStudySettings:queryContext:defaultTabCategoryIdentifier:defaultTabSupplementaryFeature:injectableCategory:injectableNamespace:dailyGameBadgingServices:excludeExclusiveLenses:)"
  ;
  func_0x0001000c10c0();
  func_0x000107c61180();
LAB_10384ba0c:
  *param_1 = pcVar2;
  return;
}



/* Entry: 103825a1c; end: 103825b1f;  */

undefined8 FUN_103825a1c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112fa03f8;
  func_0x0001000285a8(0x112fa03f8,&UNK_10dc15aa0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103825b20; end: 103825b97;  */

void FUN_103825b20(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103825b98; end: 103825bb3;  */

void FUN_103825b98(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 auStack_88 [40];
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x60);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x61);
  uVar6 = 0x112f9f1c8;
  func_0x0001000285a8(0x112f9f1c8,&UNK_10dc14750);
  func_0x0001000bda74(uVar5,uVar6);
  FUN_10384c884(unaff_x20 + 0x20,auStack_88);
  uVar6 = 0;
  FUN_1038746d0();
  func_0x000107c610f8();
  func_0x000107c615f0(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c61174(uVar7);
  func_0x000103872c28(uVar5,uVar1,auStack_88,uVar7,uVar2,uVar8,uVar3,uVar4);
  param_1[3] = uVar6;
  param_1[4] = &PTR_DAT_11069fa20;
  *param_1 = uVar5;
  return;
}



/* Entry: 103825bb4; end: 103825bf3;  */

undefined8 FUN_103825bb4(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103825bf4; end: 103825c13;  */

void FUN_103825bf4(void)

{
  func_0x000107c61168(&PTR_PTR_112fa0460);
  return;
}



/* Entry: 103825c14; end: 1038262e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103825c14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8,long param_9,
                  long param_10)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long extraout_x8;
  undefined8 uVar11;
  long extraout_x12;
  long lVar12;
  long unaff_x20;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined *apuStack_130 [4];
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  code *pcStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  
  pcStack_d0 = (code *)param_4;
  uStack_c0 = param_2;
  uStack_b8 = param_7;
  lStack_b0 = param_6;
  uStack_a8 = param_8;
  func_0x000107c613fc();
  lVar12 = *(long *)(param_9 + _DAT_113081948);
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  lVar13 = *(long *)(param_10 + _DAT_112fa41b8);
  func_0x0001000285a8(0x112fa04c0,&UNK_10dc153d0);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = param_3;
  lStack_c8 = lVar13;
  func_0x000107c4b4a8();
  func_0x000107c61180();
  uVar11 = uVar10;
  func_0x0001000bda74();
  uStack_a0 = uVar11;
  func_0x000107c61170(uVar10);
  lVar13 = param_5;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  lVar1 = lVar13;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar13);
  lStack_d8 = unaff_x20;
  if (lVar1 == 0) {
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(lStack_b0);
    func_0x000107c61170(lStack_c8);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uStack_c0);
    func_0x000107c61170(param_3);
    func_0x000107c61170(pcStack_d0);
    func_0x000107c61170(param_5);
    func_0x000107c61170(uStack_b8);
    func_0x000107c61170(uStack_a8);
    func_0x000107c61574(uStack_a0);
  }
  else {
    lStack_100 = param_9;
    lStack_f8 = param_10;
    lVar2 = lVar1;
    lStack_108 = lVar12;
    uStack_f0 = param_1;
    uStack_e8 = param_3;
    lStack_e0 = param_5;
    func_0x000107c4c020();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    puVar3 = &UNK_11069b090;
    func_0x000107c613fc(&UNK_11069b090,0x18,7);
    pcVar4 = pcStack_d0;
    *(code **)(puVar3 + 0x10) = pcStack_d0;
    func_0x0001000285a8(0x112fa04c8,&UNK_10dc15b10);
    func_0x000107c613fc();
    func_0x000107c61174();
    pcVar5 = FUN_10382636c;
    apuStack_130[3] = pcVar4;
    func_0x0001000bdd8c(FUN_10382636c,puVar3);
    puVar3 = PTR_PTR_1126aeea8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar14 = *(undefined8 *)(lStack_b0 + _DAT_113083868);
    func_0x0001000285a8(0x112d5a608,&UNK_10d921390);
    func_0x000107c61174();
    func_0x000107c615f0(lVar2);
    uVar10 = uStack_a8;
    func_0x000107c4af30();
    func_0x000107c61180();
    uVar11 = uVar10;
    func_0x0001000bda74();
    func_0x000107c61170(uVar10);
    lVar13 = lStack_c8;
    uVar16 = *(undefined8 *)(lStack_c8 + _DAT_112fa40c8);
    puVar6 = (undefined *)0x0;
    func_0x0001007dbb4c();
    apuStack_130[1] = puVar6;
    func_0x000107c613fc();
    *(undefined8 *)(puVar6 + 0x10) = 0;
    *(undefined8 *)(puVar6 + 0x18) = 0;
    puVar6[0x20] = 1;
    *(undefined8 *)(puVar6 + 0x28) = 0;
    puVar7 = PTR_PTR_1126ae810;
    func_0x000107c610f8();
    uVar10 = uStack_a0;
    func_0x000107c6157c(uStack_a0);
    func_0x000107c6157c(pcVar5);
    func_0x000107c6157c(uVar16);
    func_0x000107c453e4();
    *(undefined8 *)(puVar6 + 0x40) = uVar14;
    *(undefined **)(puVar6 + 0x48) = puVar3;
    *(undefined **)(puVar6 + 0x30) = puVar7;
    *(long *)(puVar6 + 0x38) = lVar2;
    *(undefined8 *)(puVar6 + 0x50) = uVar11;
    *(undefined8 *)(puVar6 + 0x58) = uVar10;
    *(code **)(puVar6 + 0x60) = pcVar5;
    *(undefined8 *)(puVar6 + 0x68) = uVar16;
    func_0x000107c61174(uVar14);
    func_0x000107c615f0(lVar2);
    func_0x000107c6157c(uVar10);
    pcStack_d0 = pcVar5;
    func_0x000107c6157c(pcVar5);
    apuStack_130[2] = (undefined *)uVar16;
    func_0x000107c6157c(uVar16);
    func_0x000107c61174(puVar3);
    func_0x000107c6157c(uVar11);
    func_0x0001000d224c(&puStack_98);
    lStack_110 = lVar2;
    if (puStack_98 == (undefined *)0x0) {
      func_0x000107c61170(puVar3);
    }
    else {
      puVar7 = puStack_98;
      func_0x000107c4b3fc(puStack_98);
      func_0x000107c61180();
      func_0x000107c615e8(puStack_98);
      puVar8 = puVar7;
      func_0x000107c4da88(puVar7);
      func_0x000107c61180();
      func_0x000107c61170(puVar7);
      puVar7 = &UNK_11069b0b8;
      func_0x000107c613fc(&UNK_11069b0b8,0x18,7);
      func_0x000107c61644(puVar7 + 0x10,puVar6);
      ppuStack_78 = (undefined **)0x1038263e0;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      pcStack_88 = FUN_1038263e8;
      puStack_80 = &UNK_11069b0d0;
      ppuVar9 = &puStack_98;
      puStack_70 = puVar7;
      func_0x000107c60bc4(ppuVar9);
      func_0x000107c61574(puStack_70);
      puVar7 = puVar8;
      func_0x000107c5c320(puVar8);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61170(puVar8);
      uVar10 = *(undefined8 *)(puVar6 + 0x30);
      func_0x000107c61174(uVar10);
      func_0x000107c3e924(puVar7);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(uVar10);
      func_0x000107c61170(puVar3);
    }
    func_0x000107c61170(uVar14);
    func_0x000107c615e8(lVar2);
    func_0x000107c61574(uVar11);
    func_0x000107c61574(uStack_a0);
    func_0x000107c61574(pcStack_d0);
    func_0x000107c61574(apuStack_130[2]);
    func_0x0001000285a8(0x112fa04d0,&UNK_10dc16a90);
    uVar10 = uStack_c0;
    uVar11 = uStack_c0;
    func_0x000107c3e088();
    func_0x000107c61180();
    uVar14 = uVar11;
    func_0x0001000b637c();
    lStack_c8 = uVar14;
    func_0x000107c61170(uVar11);
    func_0x0001000285a8(0x112ee5898,&UNK_10db10a50);
    lVar1 = lStack_108;
    uVar14 = *(undefined8 *)(lStack_108 + _DAT_113081858);
    func_0x000107c61174();
    uVar11 = uVar14;
    func_0x0001000bda74();
    apuStack_130[2] = (undefined *)uVar11;
    func_0x000107c61170(uVar14);
    puVar3 = apuStack_130[1];
    uVar14 = *(undefined8 *)(lVar13 + _DAT_112fa40c0);
    puStack_80 = apuStack_130[1];
    ppuStack_78 = &PTR_DAT_11069db28;
    lVar12 = 0;
    puStack_98 = puVar6;
    func_0x0001007dbb94();
    func_0x000107c613fc();
    func_0x0001000c6518(&puStack_98,puVar3);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
    puVar15 = (undefined8 *)((long)apuStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(extraout_x12 + 0x10))(puVar15);
    uVar11 = *puVar15;
    *(undefined **)(lVar12 + 0x38) = puVar3;
    *(undefined ***)(lVar12 + 0x40) = &PTR_DAT_11069db28;
    *(undefined8 *)(lVar12 + 0x20) = uVar11;
    func_0x0001000c6560(0);
    func_0x000107c613fc();
    func_0x000107c6157c(uVar14);
    puVar3 = puVar6;
    func_0x000107c6157c();
    func_0x0001000c6580();
    func_0x000107c61574(puVar6);
    func_0x000107c61170(apuStack_130[3]);
    func_0x000107c615e8(lStack_110);
    func_0x000107c61574(pcStack_d0);
    func_0x000107c61170(lStack_100);
    func_0x000107c61170(lStack_f8);
    func_0x000107c61170(lStack_b0);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar13);
    func_0x000107c61170(uStack_f0);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uStack_e8);
    func_0x000107c61170(lStack_e0);
    func_0x000107c61170(uStack_b8);
    func_0x000107c61170(uStack_a8);
    *(long *)(lVar12 + 0x10) = lStack_c8;
    *(undefined8 *)(lVar12 + 0x18) = uStack_a0;
    *(undefined **)(lVar12 + 0x50) = apuStack_130[2];
    *(undefined **)(lVar12 + 0x58) = puVar3;
    *(undefined8 *)(lVar12 + 0x48) = uVar14;
    func_0x0001000834e4(&puStack_98);
    *(long *)(lStack_d8 + 0x10) = lVar12;
  }
  return lStack_d8;
}



/* Entry: 1038262e8; end: 10382636b;  */

void FUN_1038262e8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c4af44();
  func_0x000107c61180();
  lVar1 = param_3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (lVar1 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c4af08(lVar1);
    func_0x000107c615e8(lVar1);
  }
  *param_1 = param_2;
  *(bool *)(param_1 + 1) = lVar1 == 0;
  return;
}



/* Entry: 10382636c; end: 103826373;  */

void FUN_10382636c(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4af44();
  func_0x000107c61180();
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c4af08(lVar1);
    func_0x000107c615e8(lVar1);
  }
  *param_1 = param_2;
  *(bool *)(param_1 + 1) = lVar1 == 0;
  return;
}


