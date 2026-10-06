/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1027c8350; end: 1027c8513;  */

ulong FUN_1027c8350(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1027c8434);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1027c8438);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126dab98;
    func_0x000107c61168(PTR_PTR_1126dab98);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126dab98;
    func_0x000107c61168(PTR_PTR_1126dab98);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1027c8514(0,0x112ec02e8,&PTR_PTR_1126dab98);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1027c8514);
  (*pcVar2)();
}



/* Entry: 1027c8514; end: 1027c8553;  */

void FUN_1027c8514(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1027c8554; end: 1027c855b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c8554(undefined *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  puVar2 = *(undefined8 **)(unaff_x20 + 0x10);
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_112ec01e8);
  uVar3 = *puVar1;
  func_0x000107c5fadc(uVar3,puVar1[1]);
  func_0x000107c4f974();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != (undefined *)0x0) {
    uVar3 = 0;
    FUN_1027c8514(0,0x112ec02e8,&PTR_PTR_1126dab98);
    puVar4 = param_1;
    func_0x000107c5fc54(param_1,uVar3);
    func_0x000107c61170(param_1);
  }
  uVar3 = *puVar2;
  *puVar2 = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 1027c855c; end: 1027c857b;  */

void FUN_1027c855c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1027c857c; end: 1027c8687;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c857c(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_38;
  
  lVar1 = _DAT_112ec01e0;
  uStack_38 = 0;
  func_0x0001000285a8(0x112ec0118,&UNK_10daddb20);
  func_0x000107c613fc();
  puVar3 = &uStack_38;
  func_0x00010006c248();
  *(undefined8 **)(unaff_x20 + lVar1) = puVar3;
  func_0x000107c61614(unaff_x20 + _DAT_112ec0230,0);
  lVar1 = _DAT_112ec0268;
  uVar4 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112ec0270) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ec0278) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ec0280) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ec0288) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "ChatReactionMenuImplementation/ChatReactionMenuViewController.swift",0x43,2,
                      0x71,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1027c8688);
  (*pcVar2)();
}



/* Entry: 1027c8688; end: 1027c86ab;  */

undefined8 FUN_1027c8688(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1027c86ac; end: 1027c86ef;  */

void FUN_1027c86ac(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61170(*param_1);
  *param_1 = uVar1;
  func_0x000107c61174(uVar1);
  return;
}



/* Entry: 1027c86f0; end: 1027c8747;  */

void FUN_1027c86f0(long param_1,long param_2)

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



/* Entry: 1027c8748; end: 1027c879f; -[_TtC30ChatReactionMenuImplementation30ChatReactionTrayViewController initWithCoder:] */

void FUN_1027c8748(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "ChatReactionMenuImplementation/ChatReactionTrayViewController.swift",0x43,2,
                      0x17,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027c87a0);
  (*pcVar1)();
}



/* Entry: 1027c87a0; end: 1027c8b17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c87a0(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_viewDidLoad_112684cd8);
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec0310);
  func_0x000107c509b4();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126aaa20;
    func_0x000107c610f8();
    func_0x000107c49520();
    func_0x000107c61180();
    func_0x000107c5a050();
    lVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1027c8b08);
      (*pcVar1)();
    }
    func_0x000107c3d89c();
    func_0x000107c61170(lVar4);
    lVar4 = 0x112d360b8;
    FUN_1027c8c2c(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                  &UNK_10d9011a0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 9;
    *(undefined8 *)(lVar4 + 0x10) = 4;
    puVar5 = puVar3;
    func_0x000107c4acb0();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1027c8b0c);
      (*pcVar1)();
    }
    lVar7 = lVar6;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    puVar8 = puVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar7);
    *(undefined **)(lVar4 + 0x20) = puVar8;
    puVar5 = puVar3;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1027c8b10);
      (*pcVar1)();
    }
    lVar7 = lVar6;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    puVar8 = puVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar7);
    *(undefined **)(lVar4 + 0x28) = puVar8;
    puVar5 = puVar3;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    lVar6 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1027c8b14);
      (*pcVar1)();
    }
    lVar7 = lVar6;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    puVar8 = puVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar7);
    *(undefined **)(lVar4 + 0x30) = puVar8;
    puVar5 = puVar3;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1027c8b18);
      (*pcVar1)();
    }
    puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar6 = unaff_x20;
    func_0x000107c3ec1c(unaff_x20);
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    puVar9 = puVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar6);
    *(undefined **)(lVar4 + 0x38) = puVar9;
    uVar10 = 0;
    FUN_1027c8ca4(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar6 = lVar4;
    func_0x000107c5fc48(lVar4,uVar10);
    func_0x000107c61574(lVar4);
    func_0x000107c3d048(puVar8);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 1027c8b18; end: 1027c8b3f; -[_TtC30ChatReactionMenuImplementation30ChatReactionTrayViewController viewDidLoad] */

void FUN_1027c8b18(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1027c87a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1027c8b40; end: 1027c8b9f; -[_TtC30ChatReactionMenuImplementation30ChatReactionTrayViewController initWithNibName:bundle:] */

void FUN_1027c8b40(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatReactionMenuImplementation.ChatReactionTrayViewController",0x3d,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027c8b6c);
  (*pcVar1)();
}



/* Entry: 1027c8ba0; end: 1027c8be7; -[_TtC30ChatReactionMenuImplementation30ChatReactionTrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c8ba0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec0300));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec0308));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ec0310));
  return;
}



/* Entry: 1027c8be8; end: 1027c8c07;  */

void FUN_1027c8be8(void)

{
  func_0x000107c61168(&PTR_PTR_112863408);
  return;
}



/* Entry: 1027c8c08; end: 1027c8c2b;  */

void FUN_1027c8c08(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112ec0340;
  plVar5 = (long *)&UNK_10daddc30;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1027c8ca4(0,0x112ec02f0,&PTR_PTR_1126ab030);
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



/* Entry: 1027c8c2c; end: 1027c8ca3;  */

void FUN_1027c8c2c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1027c8ca4(0,param_1,param_2);
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



/* Entry: 1027c8ca4; end: 1027c8ce3;  */

void FUN_1027c8ca4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1027c8ce4; end: 1027c8d4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c8ce4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1027c90d8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ec0350) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1027c8d50; end: 1027c8dbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c8d50(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ec0350) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027c8dbc; end: 1027c8e1b; -[_TtC32ChatScopedFactoryServiceProvider20SCChatScopedServices init] */

void FUN_1027c8dbc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatScopedFactoryServiceProvider.SCChatScopedServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027c8de8);
  (*pcVar1)();
}



/* Entry: 1027c8e1c; end: 1027c8e2b; -[_TtC32ChatScopedFactoryServiceProvider20SCChatScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c8e1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ec0350));
  return;
}



/* Entry: 1027c8e2c; end: 1027c8e97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c8e2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11054f008;
  func_0x000107c613fc(&UNK_11054f008,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1027c9170,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1027c8e98; end: 1027c8f33;  */

void FUN_1027c8e98(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11054ef18;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11054ef18;
  return;
}



/* Entry: 1027c8f34; end: 1027c8f6b;  */

void FUN_1027c8f34(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1027c8f6c; end: 1027c8f73;  */

undefined8 FUN_1027c8f6c(void)

{
  return 0x1b;
}



/* Entry: 1027c8f74; end: 1027c90a7;  */

void FUN_1027c8f74(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11054f030;
  func_0x000107c613fc(&UNK_11054f030,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1027c9148;
  func_0x00010058fa64(FUN_1027c9148,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1027c90a8; end: 1027c90d7;  */

undefined ** FUN_1027c90a8(void)

{
  return &PTR_DAT_1130668e0;
}



/* Entry: 1027c90d8; end: 1027c90f7;  */

void FUN_1027c90d8(void)

{
  func_0x000107c61168(&PTR_PTR_1128634d8);
  return;
}



/* Entry: 1027c90f8; end: 1027c9147;  */

undefined1  [16] FUN_1027c90f8(void)

{
  return ZEXT816(0x11054ef68);
}



/* Entry: 1027c9148; end: 1027c916f;  */

void FUN_1027c9148(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1027c9170; end: 1027c9183;  */

void FUN_1027c9170(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1027c9184; end: 1027ccc0b;  */

void FUN_1027c9184(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70,undefined8 param_71)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  char *pcVar25;
  char *pcVar26;
  char *pcVar27;
  char *pcVar28;
  char *pcVar29;
  char *pcVar30;
  char *pcVar31;
  char *pcVar32;
  char *pcVar33;
  char *pcVar34;
  code *pcVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  char *pcVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  char *pcVar44;
  char *pcVar45;
  char *pcVar46;
  char *pcVar47;
  char *pcVar48;
  char *pcVar49;
  char *pcVar50;
  char *pcVar51;
  char *pcVar52;
  char *pcVar53;
  char *pcVar54;
  char *pcVar55;
  char *pcVar56;
  char *pcVar57;
  char *pcVar58;
  char *pcVar59;
  char *pcVar60;
  char *pcVar61;
  char *pcVar62;
  char *pcVar63;
  char *pcVar64;
  char *pcVar65;
  char *pcVar66;
  char *pcVar67;
  char *pcVar68;
  char *pcVar69;
  char *pcVar70;
  char *pcVar71;
  char *pcVar72;
  char *pcVar73;
  char *pcVar74;
  code *pcVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  char *pcVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  char *pcVar86;
  undefined8 uVar87;
  code *pcVar88;
  code *pcVar89;
  code *pcVar90;
  code *pcVar91;
  code *pcVar92;
  undefined8 uVar93;
  code *pcVar94;
  code *pcVar95;
  undefined8 uVar96;
  undefined *puVar97;
  code *pcVar98;
  char *pcVar99;
  code *pcVar100;
  code *pcVar101;
  undefined8 uVar102;
  undefined8 uVar103;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000310;
  undefined8 in_stack_00000318;
  undefined8 in_stack_00000320;
  undefined8 in_stack_00000328;
  undefined8 in_stack_00000330;
  undefined8 in_stack_00000338;
  undefined8 in_stack_00000340;
  undefined8 in_stack_00000348;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000360;
  undefined8 in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  undefined8 in_stack_00000388;
  undefined8 in_stack_00000390;
  undefined8 in_stack_00000398;
  undefined8 in_stack_000003a0;
  undefined8 in_stack_000003a8;
  undefined8 in_stack_000003b0;
  undefined8 in_stack_000003b8;
  undefined8 in_stack_000003c0;
  undefined8 in_stack_000003c8;
  undefined8 in_stack_000003d0;
  undefined8 in_stack_000003d8;
  undefined8 in_stack_000003e0;
  undefined8 in_stack_000003e8;
  undefined8 in_stack_000003f0;
  undefined8 in_stack_000003f8;
  undefined8 in_stack_00000400;
  undefined8 in_stack_00000408;
  undefined8 in_stack_00000410;
  undefined8 in_stack_00000418;
  undefined8 in_stack_00000420;
  undefined8 in_stack_00000428;
  undefined8 in_stack_00000430;
  undefined8 in_stack_00000438;
  undefined8 in_stack_00000440;
  undefined8 in_stack_00000448;
  undefined8 in_stack_00000450;
  undefined8 in_stack_00000458;
  undefined8 in_stack_00000460;
  undefined8 in_stack_00000468;
  undefined8 in_stack_00000470;
  undefined8 in_stack_00000478;
  undefined8 in_stack_00000480;
  undefined8 in_stack_00000488;
  undefined8 in_stack_00000490;
  undefined8 in_stack_00000498;
  undefined8 in_stack_000004a0;
  undefined8 in_stack_000004a8;
  undefined8 in_stack_000004b0;
  undefined8 in_stack_000004b8;
  undefined8 in_stack_000004c0;
  undefined8 in_stack_000004c8;
  undefined8 in_stack_000004d0;
  undefined8 in_stack_000004d8;
  undefined8 in_stack_000004e0;
  undefined8 in_stack_000004e8;
  undefined8 in_stack_000004f0;
  undefined8 in_stack_000004f8;
  undefined8 in_stack_00000500;
  undefined8 in_stack_00000508;
  undefined8 in_stack_00000510;
  undefined8 in_stack_00000518;
  undefined8 in_stack_00000520;
  undefined8 in_stack_00000528;
  undefined8 in_stack_00000530;
  undefined8 in_stack_00000538;
  undefined8 in_stack_00000540;
  undefined8 in_stack_00000548;
  undefined8 in_stack_00000550;
  undefined8 in_stack_00000558;
  undefined8 in_stack_00000560;
  undefined8 in_stack_00000568;
  undefined8 in_stack_00000570;
  undefined8 in_stack_00000578;
  undefined8 in_stack_00000580;
  undefined8 in_stack_00000588;
  undefined8 in_stack_00000590;
  undefined8 in_stack_00000598;
  undefined8 in_stack_000005a0;
  undefined8 in_stack_000005a8;
  undefined8 in_stack_000005b0;
  undefined8 in_stack_000005b8;
  undefined8 in_stack_000005c0;
  undefined8 in_stack_000005c8;
  undefined8 in_stack_000005d0;
  undefined8 in_stack_000005d8;
  undefined8 in_stack_000005e0;
  undefined8 in_stack_000005e8;
  undefined8 in_stack_000005f0;
  undefined8 in_stack_000005f8;
  undefined8 in_stack_00000600;
  undefined8 in_stack_00000608;
  undefined8 in_stack_00000610;
  undefined8 in_stack_00000618;
  undefined8 in_stack_00000620;
  undefined8 in_stack_00000628;
  undefined8 in_stack_00000630;
  undefined8 in_stack_00000638;
  undefined8 in_stack_00000640;
  undefined8 in_stack_00000648;
  undefined8 in_stack_00000650;
  undefined8 in_stack_00000658;
  undefined8 in_stack_00000660;
  undefined8 in_stack_00000668;
  undefined8 in_stack_00000670;
  undefined8 in_stack_00000678;
  undefined8 in_stack_00000680;
  undefined8 in_stack_00000688;
  undefined8 in_stack_00000690;
  undefined8 in_stack_00000698;
  undefined8 in_stack_000006a0;
  undefined8 in_stack_000006a8;
  undefined8 in_stack_000006b0;
  undefined8 in_stack_000006b8;
  undefined8 in_stack_000006c0;
  undefined8 in_stack_000006c8;
  undefined8 in_stack_000006d0;
  undefined8 in_stack_000006d8;
  undefined8 in_stack_000006e0;
  undefined8 in_stack_000006e8;
  undefined8 in_stack_000006f0;
  undefined8 in_stack_000006f8;
  undefined8 in_stack_00000700;
  undefined8 in_stack_00000708;
  undefined8 in_stack_00000710;
  undefined8 in_stack_00000718;
  undefined8 in_stack_00000720;
  undefined8 in_stack_00000728;
  undefined8 in_stack_00000730;
  undefined8 in_stack_00000738;
  undefined8 in_stack_00000740;
  undefined8 in_stack_00000748;
  undefined8 in_stack_00000750;
  undefined8 in_stack_00000758;
  undefined8 in_stack_00000760;
  undefined8 in_stack_00000768;
  undefined8 in_stack_00000770;
  undefined8 in_stack_00000778;
  undefined8 in_stack_00000780;
  undefined8 in_stack_00000788;
  undefined8 in_stack_00000790;
  undefined8 in_stack_00000798;
  undefined8 in_stack_000007a0;
  undefined8 in_stack_000007a8;
  undefined8 in_stack_000007b0;
  undefined8 in_stack_000007b8;
  undefined8 in_stack_000007c0;
  undefined8 in_stack_000007c8;
  undefined8 in_stack_000007d0;
  undefined8 in_stack_000007d8;
  undefined8 in_stack_000007e0;
  undefined8 in_stack_000007e8;
  undefined8 in_stack_000007f0;
  undefined8 in_stack_000007f8;
  undefined8 in_stack_00000800;
  undefined8 in_stack_00000808;
  undefined8 in_stack_00000810;
  undefined8 auStack_70 [2];
  
  uVar103 = *param_2;
  func_0x0001000285a8(0x112ec03c8,&UNK_10dadde60);
  puVar1 = auStack_70;
  auStack_70[0] = uVar103;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112ec03d0,&UNK_10daddf00);
  puVar97 = &UNK_11054f0e0;
  func_0x000107c613fc(&UNK_11054f0e0,0x48,7);
  *(undefined8 **)(puVar97 + 0x10) = puVar1;
  *(undefined8 *)(puVar97 + 0x18) = param_3;
  *(undefined8 *)(puVar97 + 0x20) = param_4;
  *(undefined8 *)(puVar97 + 0x28) = param_5;
  *(undefined8 *)(puVar97 + 0x30) = param_6;
  *(undefined8 *)(puVar97 + 0x38) = param_7;
  *(undefined8 *)(puVar97 + 0x40) = param_8;
  func_0x000107c6157c();
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  pcVar2 = FUN_1027cd744;
  func_0x0001000823a8(FUN_1027cd744,puVar97);
  func_0x000100082720("AddToGroupCardServiceProviderWrapperServiceProvider",0x33,2);
  func_0x0001000285a8(0x112ec03d8,&UNK_10dadde70);
  func_0x000107c6157c(pcVar2);
  uVar103 = 0x1027cd750;
  func_0x0001000823a8(0x1027cd750,pcVar2);
  func_0x000100082720("AddToGroupCardServicesServiceProvider",0x25,2);
  func_0x0001000285a8(0x112ec03e0,&UNK_10dade0b0);
  puVar97 = &UNK_11054f108;
  func_0x000107c613fc(&UNK_11054f108,0x68,7);
  *(undefined8 **)(puVar97 + 0x10) = puVar1;
  *(undefined8 *)(puVar97 + 0x18) = param_3;
  *(undefined8 *)(puVar97 + 0x20) = param_9;
  *(undefined8 *)(puVar97 + 0x28) = param_10;
  *(undefined8 *)(puVar97 + 0x30) = param_11;
  *(undefined8 *)(puVar97 + 0x38) = param_12;
  *(undefined8 *)(puVar97 + 0x40) = param_4;
  *(undefined8 *)(puVar97 + 0x48) = param_13;
  *(undefined8 *)(puVar97 + 0x50) = param_8;
  *(undefined8 *)(puVar97 + 0x58) = param_5;
  *(undefined8 *)(puVar97 + 0x60) = param_14;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  uVar3 = 0x1027cd758;
  func_0x0001000823a8(0x1027cd758,puVar97);
  func_0x000100082720("ConvoLiveActivityServiceProviderWrapperServiceProvider",0x36,2);
  func_0x0001000285a8(0x112ec03e8,&UNK_10dadde80);
  func_0x000107c6157c(uVar3);
  uVar4 = 0x1027cd764;
  func_0x0001000823a8(0x1027cd764,uVar3);
  pcVar5 = "ConvoLiveActivityServicesServiceProvider";
  func_0x000100082720("ConvoLiveActivityServicesServiceProvider",0x28,2);
  func_0x0001027e2ac4();
  pcVar6 = "AdAttachmentHandlerScopeExposerSubjectServiceProvider";
  func_0x000100082720("AdAttachmentHandlerScopeExposerSubjectServiceProvider",0x35,2);
  FUN_1027e2b10();
  pcVar7 = "ChatActionMenuScopeExposerSubjectServiceProvider";
  func_0x000100082720("ChatActionMenuScopeExposerSubjectServiceProvider",0x30,2);
  FUN_1027e2b5c();
  pcVar8 = "ChatAttachmentHandlerScopeExposerSubjectServiceProvider";
  func_0x000100082720("ChatAttachmentHandlerScopeExposerSubjectServiceProvider",0x37,2);
  FUN_1027e2ba8();
  pcVar9 = "KeepSnapsInChatUpsellScopeExposerSubjectServiceProvider";
  func_0x000100082720("KeepSnapsInChatUpsellScopeExposerSubjectServiceProvider",0x37,2);
  func_0x0001027e2c28();
  pcVar10 = "MessageForwardScopeExposerSubjectServiceProvider";
  func_0x000100082720("MessageForwardScopeExposerSubjectServiceProvider",0x30,2);
  FUN_1027e2c74();
  pcVar11 = "PlusManagementScopeExposerSubjectServiceProvider";
  func_0x000100082720("PlusManagementScopeExposerSubjectServiceProvider",0x30,2);
  FUN_1027e2cc0();
  pcVar12 = "PlusSubscribeScopeExposerSubjectServiceProvider";
  func_0x000100082720("PlusSubscribeScopeExposerSubjectServiceProvider",0x2f,2);
  FUN_1027e2d0c();
  pcVar13 = "SCBitmojiCreateFlowScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCBitmojiCreateFlowScopeExposerSubjectServiceProvider",0x35,2);
  FUN_1027e2d58();
  pcVar14 = "SCBitmojiFriendProfileSharingScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCBitmojiFriendProfileSharingScopeExposerSubjectServiceProvider",0x3f,2);
  FUN_1027e2da4();
  pcVar15 = "SCBlockedExceptionAlertScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCBlockedExceptionAlertScopeExposerSubjectServiceProvider",0x39,2);
  FUN_1027e2df0();
  pcVar16 = "SCCancelMenuActionSheetScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCCancelMenuActionSheetScopeExposerSubjectServiceProvider",0x39,2);
  FUN_1027e2e3c();
  pcVar17 = "SCChatCameraScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCChatCameraScopeExposerSubjectServiceProvider",0x2e,2);
  FUN_1027e2e88();
  pcVar18 = "SCChatEraseMessageScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCChatEraseMessageScopeExposerSubjectServiceProvider",0x34,2);
  FUN_1027e2ed4();
  pcVar19 = "SCChatInputPluginScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCChatInputPluginScopeExposerSubjectServiceProvider",0x33,2);
  FUN_1027e2f20();
  pcVar20 = "SCChatLockedConversationAlertScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCChatLockedConversationAlertScopeExposerSubjectServiceProvider",0x3f,2);
  FUN_1027e2f6c();
  pcVar21 = "SCChatReplyComposeScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCChatReplyComposeScopeExposerSubjectServiceProvider",0x34,2);
  FUN_1027e2fb8();
  pcVar22 = "SCContentProductPlaybackScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCContentProductPlaybackScopeExposerSubjectServiceProvider",0x3a,2);
  FUN_1027e3004();
  pcVar23 = "SCFriendProfileScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCFriendProfileScopeExposerSubjectServiceProvider",0x31,2);
  FUN_1027e3050();
  pcVar24 = "SCLegacyGroupProfileScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCLegacyGroupProfileScopeExposerSubjectServiceProvider",0x36,2);
  FUN_1027e309c();
  pcVar25 = "SCLensesModularCameraScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCLensesModularCameraScopeExposerSubjectServiceProvider",0x37,2);
  FUN_1027e30e8();
  pcVar26 = "SCMerlinOnboardingScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMerlinOnboardingScopeExposerSubjectServiceProvider",0x34,2);
  FUN_1027e3134();
  pcVar27 = "SCMessagingPlaybackScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCMessagingPlaybackScopeExposerSubjectServiceProvider",0x35,2);
  FUN_1027e3180();
  pcVar28 = "SCReactionsDetailScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCReactionsDetailScopeExposerSubjectServiceProvider",0x33,2);
  FUN_1027e31cc();
  pcVar29 = "SCSaturnUpsellTrayScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCSaturnUpsellTrayScopeExposerSubjectServiceProvider",0x34,2);
  FUN_1027e3218();
  pcVar30 = "SCSnapReplayScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCSnapReplayScopeExposerSubjectServiceProvider",0x2e,2);
  FUN_1027e3264();
  pcVar31 = "SCStoriesRepostMentionScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCStoriesRepostMentionScopeExposerSubjectServiceProvider",0x38,2);
  FUN_1027e32b0();
  pcVar32 = "SCTalkUIScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCTalkUIScopeExposerSubjectServiceProvider",0x2a,2);
  FUN_1027e32fc();
  pcVar33 = "SCUberAvatarScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCUberAvatarScopeExposerSubjectServiceProvider",0x2e,2);
  FUN_1027e3348();
  pcVar34 = "SCUnreadMessageAlertScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCUnreadMessageAlertScopeExposerSubjectServiceProvider",0x36,2);
  FUN_1027e3394();
  func_0x000100082720("SCWDescriptiveRevealScopeExposerSubjectServiceProvider",0x36,2);
  func_0x0001000285a8(0x112ec03f0,&UNK_10dade820);
  puVar97 = &UNK_11054f130;
  func_0x000107c613fc(&UNK_11054f130,0x48,7);
  *(undefined8 **)(puVar97 + 0x10) = puVar1;
  *(undefined8 *)(puVar97 + 0x18) = param_3;
  *(undefined8 *)(puVar97 + 0x20) = param_8;
  *(undefined8 *)(puVar97 + 0x28) = param_14;
  *(undefined8 *)(puVar97 + 0x30) = param_6;
  *(undefined8 *)(puVar97 + 0x38) = param_15;
  *(undefined8 *)(puVar97 + 0x40) = param_13;
  func_0x000107c6157c();
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  pcVar35 = FUN_1027cd7c0;
  func_0x0001000823a8(FUN_1027cd7c0,puVar97);
  func_0x000100082720("SCGroupChatNonFriendWarningServiceProviderWrapperServiceProvider",0x40,2);
  func_0x0001000285a8(0x112ec03f8,&UNK_10dadde90);
  func_0x000107c6157c(pcVar35);
  uVar36 = 0x1027cd7e4;
  func_0x0001000823a8(0x1027cd7e4,pcVar35);
  func_0x000100082720("SCGroupChatNonFriendWarningServicesServiceProvider",0x32,2);
  uVar37 = param_4;
  FUN_102c268dc(param_4,param_14,param_16,param_13,param_17);
  func_0x000100082720("SCWChatMessageReportingServiceProvider",0x26,2);
  uVar38 = param_18;
  FUN_10288a0c8(param_18,param_19,param_20,param_21,param_22,param_23,param_3,param_24,param_25,
                param_26,param_4,param_27,param_8,param_5,param_28,param_14,param_29,param_30);
  func_0x000100082720("ChatActionMenuScopedFactoryServiceProvider",0x2a,2);
  uVar39 = param_26;
  FUN_1028a1fd0(param_26,param_4);
  func_0x000100082720("KeepSnapsInChatUpsellScopedFactoryServiceProvider",0x31,2);
  uVar40 = param_3;
  FUN_102887200(param_3,param_31,param_13,param_14);
  pcVar41 = "SCBlockedExceptionAlertScopedFactoryServiceProvider";
  func_0x000100082720("SCBlockedExceptionAlertScopedFactoryServiceProvider",0x33,2);
  FUN_1028a4fd4();
  func_0x000100082720("SCChatLockedConversationAlertScopedFactoryServiceProvider",0x39,2);
  uVar42 = param_13;
  FUN_1028766e4(param_13,param_29,param_32);
  func_0x000100082720("SCGroupChatNonFriendWarningAlertScopedFactoryServiceProvider",0x3c,2);
  FUN_10282449c();
  func_0x000100082720("SCSpotlightChatHeaderButtonScopedFactoryServiceProvider",0x37,2);
  uVar43 = param_34;
  FUN_1028c8f48(param_34,param_3,param_24,param_11,param_35,param_36,param_37,param_8,param_38,
                param_9,param_39,param_40);
  pcVar44 = "SCTalkUIScopedFactoryServiceProvider";
  func_0x000100082720("SCTalkUIScopedFactoryServiceProvider",0x24,2);
  FUN_1028a7338();
  func_0x000100082720("SCUnreadMessageAlertScopedFactoryServiceProvider",0x30,2);
  pcVar45 = pcVar5;
  FUN_1027e2b04();
  func_0x000100082720("AdAttachmentHandlerScopeExposerObservableServiceProvider",0x38,2);
  pcVar46 = pcVar6;
  FUN_1027e2b50();
  func_0x000100082720("ChatActionMenuScopeExposerObservableServiceProvider",0x33,2);
  pcVar47 = pcVar7;
  FUN_1027e2b9c();
  func_0x000100082720("ChatAttachmentHandlerScopeExposerObservableServiceProvider",0x3a,2);
  pcVar48 = pcVar8;
  FUN_1027e2be8();
  func_0x000100082720("KeepSnapsInChatUpsellScopeExposerObservableServiceProvider",0x3a,2);
  pcVar49 = pcVar9;
  FUN_1027e2c68();
  func_0x000100082720("MessageForwardScopeExposerObservableServiceProvider",0x33,2);
  pcVar50 = pcVar10;
  FUN_1027e2cb4();
  func_0x000100082720("PlusManagementScopeExposerObservableServiceProvider",0x33,2);
  pcVar51 = pcVar11;
  FUN_1027e2d00();
  func_0x000100082720("PlusSubscribeScopeExposerObservableServiceProvider",0x32,2);
  pcVar52 = pcVar12;
  FUN_1027e2d4c();
  func_0x000100082720("SCBitmojiCreateFlowScopeExposerObservableServiceProvider",0x38,2);
  pcVar53 = pcVar13;
  FUN_1027e2d98();
  func_0x000100082720("SCBitmojiFriendProfileSharingScopeExposerObservableServiceProvider",0x42,2);
  pcVar54 = pcVar14;
  FUN_1027e2de4();
  func_0x000100082720("SCBlockedExceptionAlertScopeExposerObservableServiceProvider",0x3c,2);
  pcVar55 = pcVar15;
  FUN_1027e2e30();
  func_0x000100082720("SCCancelMenuActionSheetScopeExposerObservableServiceProvider",0x3c,2);
  pcVar56 = pcVar16;
  FUN_1027e2e7c();
  func_0x000100082720("SCChatCameraScopeExposerObservableServiceProvider",0x31,2);
  pcVar57 = pcVar17;
  FUN_1027e2ec8();
  func_0x000100082720("SCChatEraseMessageScopeExposerObservableServiceProvider",0x37,2);
  pcVar58 = pcVar18;
  FUN_1027e2f14();
  func_0x000100082720("SCChatInputPluginScopeExposerObservableServiceProvider",0x36,2);
  pcVar59 = pcVar19;
  FUN_1027e2f60();
  func_0x000100082720("SCChatLockedConversationAlertScopeExposerObservableServiceProvider",0x42,2);
  pcVar60 = pcVar20;
  FUN_1027e2fac();
  func_0x000100082720("SCChatReplyComposeScopeExposerObservableServiceProvider",0x37,2);
  pcVar61 = pcVar21;
  FUN_1027e2ff8();
  func_0x000100082720("SCContentProductPlaybackScopeExposerObservableServiceProvider",0x3d,2);
  pcVar62 = pcVar22;
  FUN_1027e3044();
  func_0x000100082720("SCFriendProfileScopeExposerObservableServiceProvider",0x34,2);
  pcVar63 = pcVar23;
  FUN_1027e3090();
  func_0x000100082720("SCLegacyGroupProfileScopeExposerObservableServiceProvider",0x39,2);
  pcVar64 = pcVar24;
  FUN_1027e30dc();
  func_0x000100082720("SCLensesModularCameraScopeExposerObservableServiceProvider",0x3a,2);
  pcVar65 = pcVar25;
  FUN_1027e3128();
  func_0x000100082720("SCMerlinOnboardingScopeExposerObservableServiceProvider",0x37,2);
  pcVar66 = pcVar26;
  FUN_1027e3174();
  func_0x000100082720("SCMessagingPlaybackScopeExposerObservableServiceProvider",0x38,2);
  pcVar67 = pcVar27;
  FUN_1027e31c0();
  func_0x000100082720("SCReactionsDetailScopeExposerObservableServiceProvider",0x36,2);
  pcVar68 = pcVar28;
  FUN_1027e320c();
  func_0x000100082720("SCSaturnUpsellTrayScopeExposerObservableServiceProvider",0x37,2);
  pcVar69 = pcVar29;
  FUN_1027e3258();
  func_0x000100082720("SCSnapReplayScopeExposerObservableServiceProvider",0x31,2);
  pcVar70 = pcVar30;
  FUN_1027e32a4();
  func_0x000100082720("SCStoriesRepostMentionScopeExposerObservableServiceProvider",0x3b,2);
  pcVar71 = pcVar31;
  FUN_1027e32f0();
  func_0x000100082720("SCTalkUIScopeExposerObservableServiceProvider",0x2d,2);
  pcVar72 = pcVar32;
  FUN_1027e333c();
  func_0x000100082720("SCUberAvatarScopeExposerObservableServiceProvider",0x31,2);
  pcVar73 = pcVar33;
  FUN_1027e3388();
  func_0x000100082720("SCUnreadMessageAlertScopeExposerObservableServiceProvider",0x39,2);
  pcVar74 = pcVar34;
  FUN_1027e3420();
  func_0x000100082720("SCWDescriptiveRevealScopeExposerObservableServiceProvider",0x39,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar75 = FUN_1027c8f34;
  func_0x0001000823a8(FUN_1027c8f34,0);
  func_0x000100082720("SCChatScopedServicesCleanupRelayServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112ec0400,&UNK_10daddea0);
  puVar97 = &UNK_11054f158;
  func_0x000107c613fc(&UNK_11054f158,0x58,7);
  *(undefined8 **)(puVar97 + 0x10) = puVar1;
  *(undefined8 *)(puVar97 + 0x18) = param_3;
  *(undefined8 *)(puVar97 + 0x20) = param_4;
  *(undefined8 *)(puVar97 + 0x28) = param_41;
  *(undefined8 *)(puVar97 + 0x30) = param_18;
  *(undefined8 *)(puVar97 + 0x38) = param_42;
  *(undefined8 *)(puVar97 + 0x40) = param_30;
  *(undefined8 *)(puVar97 + 0x48) = param_43;
  *(undefined8 *)(puVar97 + 0x50) = param_44;
  func_0x000107c6157c();
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_42);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_43);
  func_0x000107c6157c(param_44);
  uVar76 = 0x1027cd7ec;
  func_0x0001000823a8(0x1027cd7ec,puVar97);
  func_0x000100082720("StickerFavoritePromptEntryPointWrapperServiceProvider",0x35,2);
  uVar77 = uVar38;
  func_0x0001043915d4();
  func_0x000100082720("ChatActionMenuScopeServicesServiceProvider",0x2a,2);
  uVar78 = uVar39;
  func_0x00010439591c();
  func_0x000100082720("KeepSnapsInChatUpsellScopeServicesServiceProvider",0x31,2);
  uVar79 = uVar40;
  func_0x000104396f1c();
  func_0x000100082720("SCBlockedExceptionAlertScopeServicesServiceProvider",0x33,2);
  pcVar80 = pcVar41;
  FUN_102d7e02c();
  func_0x000100082720("SCChatLockedConversationAlertScopeBuilderServicesServiceProvider",0x40,2);
  uVar81 = uVar42;
  func_0x000102d82118();
  func_0x000100082720("SCGroupChatNonFriendWarningAlertScopeServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112ec0408,&UNK_10daded90);
  puVar97 = &UNK_11054f180;
  func_0x000107c613fc(&UNK_11054f180,0x28,7);
  *(undefined8 **)(puVar97 + 0x10) = puVar1;
  *(undefined8 *)(puVar97 + 0x18) = param_45;
  *(char **)(puVar97 + 0x20) = pcVar70;
  func_0x000107c6157c();
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(pcVar70);
  uVar82 = 0x1027cd7f8;
  func_0x0001000823a8(0x1027cd7f8,puVar97);
  func_0x000100082720("SCRepostOperaPluginServiceProviderWrapperServiceProvider",0x38,2);
  func_0x0001000285a8(0x112ec0410,&UNK_10daddeb0);
  func_0x000107c6157c(uVar82);
  uVar83 = 0x1027cd804;
  func_0x0001000823a8(0x1027cd804,uVar82);
  func_0x000100082720("SCRepostOperaServicesServiceProvider",0x24,2);
  uVar84 = param_33;
  func_0x000102d7ae28();
  func_0x000100082720("SCSpotlightChatHeaderButtonScopeServicesServiceProvider",0x37,2);
  uVar85 = uVar43;
  func_0x00010446c63c();
  func_0x000100082720("SCTalkUIScopeServicesServiceProvider",0x24,2);
  pcVar86 = pcVar44;
  func_0x000104397f8c();
  func_0x000100082720("SCUnreadMessageAlertScopeServicesServiceProvider",0x30,2);
  uVar87 = param_3;
  FUN_102873cd0(param_3,param_46,param_24,uVar37,pcVar74);
  func_0x000100082720("SCWChatMessageStateManagerServiceProvider",0x29,2);
  func_0x0001000285a8(0x112ec0418,&UNK_10daddeb8);
  puVar97 = &UNK_11054f1a8;
  func_0x000107c613fc(&UNK_11054f1a8,0x1d8,7);
  *(undefined8 *)(puVar97 + 0x10) = param_56;
  *(undefined8 *)(puVar97 + 0x18) = param_14;
  *(char **)(puVar97 + 0x20) = pcVar51;
  *(undefined8 *)(puVar97 + 0x28) = param_23;
  *(char **)(puVar97 + 0x30) = pcVar50;
  *(undefined8 *)(puVar97 + 0x38) = param_28;
  *(undefined8 *)(puVar97 + 0x40) = param_48;
  *(undefined8 *)(puVar97 + 0x48) = param_11;
  *(undefined8 *)(puVar97 + 0x50) = param_12;
  *(undefined8 *)(puVar97 + 0x58) = param_15;
  *(undefined8 *)(puVar97 + 0x60) = param_3;
  *(undefined8 *)(puVar97 + 0x68) = param_71;
  *(undefined8 *)(puVar97 + 0x70) = param_52;
  *(undefined8 *)(puVar97 + 0x78) = param_21;
  *(char **)(puVar97 + 0x80) = pcVar49;
  *(undefined8 *)(puVar97 + 0x88) = param_68;
  *(undefined8 *)(puVar97 + 0x90) = param_8;
  *(undefined8 *)(puVar97 + 0x98) = param_30;
  *(undefined8 *)(puVar97 + 0xa0) = param_6;
  *(undefined8 *)(puVar97 + 0xa8) = param_66;
  *(undefined8 *)(puVar97 + 0xb0) = param_31;
  *(undefined8 *)(puVar97 + 0xb8) = param_59;
  *(char **)(puVar97 + 0xc0) = pcVar62;
  *(undefined8 *)(puVar97 + 200) = param_4;
  *(undefined8 *)(puVar97 + 0xd0) = param_5;
  *(undefined8 *)(puVar97 + 0xd8) = param_26;
  *(char **)(puVar97 + 0xe0) = pcVar70;
  *(undefined8 *)(puVar97 + 0xe8) = param_45;
  *(undefined8 *)(puVar97 + 0xf0) = param_65;
  *(undefined8 *)(puVar97 + 0xf8) = param_62;
  *(undefined8 *)(puVar97 + 0x100) = param_49;
  *(char **)(puVar97 + 0x108) = pcVar64;
  *(undefined8 *)(puVar97 + 0x110) = param_63;
  *(undefined8 *)(puVar97 + 0x118) = param_61;
  *(undefined8 *)(puVar97 + 0x120) = param_51;
  *(undefined8 *)(puVar97 + 0x128) = in_stack_00000200;
  *(undefined8 *)(puVar97 + 0x130) = param_70;
  *(undefined8 *)(puVar97 + 0x138) = in_stack_000001f8;
  *(undefined8 *)(puVar97 + 0x140) = param_24;
  *(char **)(puVar97 + 0x148) = pcVar45;
  *(undefined8 *)(puVar97 + 0x150) = param_47;
  *(undefined8 *)(puVar97 + 0x158) = param_55;
  *(undefined8 *)(puVar97 + 0x160) = param_57;
  *(undefined8 *)(puVar97 + 0x168) = param_50;
  *(char **)(puVar97 + 0x170) = pcVar63;
  *(char **)(puVar97 + 0x178) = pcVar56;
  *(undefined8 *)(puVar97 + 0x180) = param_53;
  *(undefined8 *)(puVar97 + 0x188) = param_46;
  *(undefined8 *)(puVar97 + 400) = param_27;
  *(undefined8 *)(puVar97 + 0x198) = param_54;
  *(undefined8 *)(puVar97 + 0x1a0) = param_67;
  *(undefined8 *)(puVar97 + 0x1a8) = param_44;
  *(undefined8 *)(puVar97 + 0x1b0) = param_60;
  *(undefined8 *)(puVar97 + 0x1b8) = param_64;
  *(undefined8 *)(puVar97 + 0x1c0) = param_69;
  *(undefined8 *)(puVar97 + 0x1c8) = param_58;
  *(undefined8 *)(puVar97 + 0x1d0) = in_stack_000001f0;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_44);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(pcVar70);
  func_0x000107c6157c(param_56);
  func_0x000107c6157c(pcVar51);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(pcVar50);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_48);
  func_0x000107c6157c(param_71);
  func_0x000107c6157c(param_52);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(pcVar49);
  func_0x000107c6157c(param_68);
  func_0x000107c6157c(param_66);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_59);
  func_0x000107c6157c(pcVar62);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_65);
  func_0x000107c6157c(param_62);
  func_0x000107c6157c(param_49);
  func_0x000107c6157c(pcVar64);
  func_0x000107c6157c(param_63);
  func_0x000107c6157c(param_61);
  func_0x000107c6157c(param_51);
  func_0x000107c6157c(in_stack_00000200);
  func_0x000107c6157c(param_70);
  func_0x000107c6157c(in_stack_000001f8);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(pcVar45);
  func_0x000107c6157c(param_47);
  func_0x000107c6157c(param_55);
  func_0x000107c6157c(param_57);
  func_0x000107c6157c(param_50);
  func_0x000107c6157c(pcVar63);
  func_0x000107c6157c(pcVar56);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(param_46);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_54);
  func_0x000107c6157c(param_67);
  func_0x000107c6157c(param_60);
  func_0x000107c6157c(param_64);
  func_0x000107c6157c(param_69);
  func_0x000107c6157c(param_58);
  func_0x000107c6157c(in_stack_000001f0);
  pcVar88 = FUN_1027cd80c;
  func_0x0001000823a8(FUN_1027cd80c,puVar97);
  func_0x000100082720("SCMessageAccessoryPluginRegistryServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112ec0420,&UNK_10daddec0);
  puVar97 = &UNK_11054f1d0;
  func_0x000107c613fc(&UNK_11054f1d0,0x698,7);
  *(undefined8 *)(puVar97 + 0x10) = param_21;
  *(undefined8 *)(puVar97 + 0x18) = param_25;
  *(undefined8 *)(puVar97 + 0x20) = in_stack_00000208;
  *(undefined8 *)(puVar97 + 0x28) = in_stack_00000230;
  *(undefined8 *)(puVar97 + 0x30) = in_stack_00000608;
  *(undefined8 *)(puVar97 + 0x38) = in_stack_000002c0;
  *(undefined8 *)(puVar97 + 0x40) = param_11;
  *(undefined8 *)(puVar97 + 0x48) = in_stack_000003e8;
  *(undefined8 *)(puVar97 + 0x50) = param_3;
  *(undefined8 *)(puVar97 + 0x58) = in_stack_00000300;
  *(undefined8 *)(puVar97 + 0x60) = param_26;
  *(undefined8 *)(puVar97 + 0x68) = param_24;
  *(undefined8 *)(puVar97 + 0x70) = in_stack_00000368;
  *(undefined8 *)(puVar97 + 0x78) = in_stack_00000390;
  *(undefined8 *)(puVar97 + 0x80) = in_stack_000006d0;
  *(char **)(puVar97 + 0x88) = pcVar45;
  *(undefined8 *)(puVar97 + 0x90) = param_47;
  *(undefined8 *)(puVar97 + 0x98) = in_stack_000002f0;
  *(undefined8 *)(puVar97 + 0xa0) = in_stack_00000320;
  *(undefined8 *)(puVar97 + 0xa8) = in_stack_00000270;
  *(undefined8 *)(puVar97 + 0xb0) = param_8;
  *(undefined8 *)(puVar97 + 0xb8) = param_54;
  *(undefined8 *)(puVar97 + 0xc0) = param_27;
  *(undefined8 *)(puVar97 + 200) = in_stack_000003d0;
  *(undefined8 *)(puVar97 + 0xd0) = in_stack_00000240;
  *(undefined8 *)(puVar97 + 0xd8) = uVar87;
  *(undefined8 *)(puVar97 + 0xe0) = in_stack_000001f8;
  *(undefined8 *)(puVar97 + 0xe8) = param_12;
  *(undefined8 *)(puVar97 + 0xf0) = param_67;
  *(undefined8 *)(puVar97 + 0xf8) = param_70;
  *(undefined8 *)(puVar97 + 0x100) = in_stack_00000250;
  *(char **)(puVar97 + 0x108) = pcVar47;
  *(undefined8 *)(puVar97 + 0x110) = in_stack_00000648;
  *(undefined8 *)(puVar97 + 0x118) = in_stack_000005d8;
  *(undefined8 *)(puVar97 + 0x120) = param_4;
  *(undefined8 *)(puVar97 + 0x128) = param_56;
  *(undefined8 *)(puVar97 + 0x130) = in_stack_000005f0;
  *(undefined8 *)(puVar97 + 0x138) = in_stack_00000228;
  *(undefined8 *)(puVar97 + 0x140) = param_13;
  *(undefined8 *)(puVar97 + 0x148) = param_66;
  *(undefined8 *)(puVar97 + 0x150) = in_stack_00000610;
  *(undefined8 *)(puVar97 + 0x158) = in_stack_000002c8;
  *(undefined8 *)(puVar97 + 0x160) = in_stack_00000668;
  *(char **)(puVar97 + 0x168) = pcVar63;
  *(char **)(puVar97 + 0x170) = pcVar62;
  *(undefined8 *)(puVar97 + 0x178) = in_stack_00000218;
  *(undefined8 *)(puVar97 + 0x180) = param_58;
  *(undefined8 *)(puVar97 + 0x188) = in_stack_00000568;
  *(undefined8 *)(puVar97 + 400) = in_stack_00000618;
  *(undefined8 *)(puVar97 + 0x198) = in_stack_00000388;
  *(undefined8 *)(puVar97 + 0x1a0) = in_stack_000005d0;
  *(undefined8 *)(puVar97 + 0x1a8) = in_stack_00000430;
  *(undefined8 *)(puVar97 + 0x1b0) = in_stack_000005e0;
  *(undefined8 *)(puVar97 + 0x1b8) = in_stack_000004e8;
  *(undefined8 *)(puVar97 + 0x1c0) = in_stack_00000248;
  *(undefined8 *)(puVar97 + 0x1c8) = in_stack_00000490;
  *(undefined8 *)(puVar97 + 0x1d0) = in_stack_00000460;
  *(undefined8 *)(puVar97 + 0x1d8) = in_stack_00000278;
  *(undefined8 *)(puVar97 + 0x1e0) = in_stack_00000448;
  *(undefined8 *)(puVar97 + 0x1e8) = in_stack_00000628;
  *(undefined8 *)(puVar97 + 0x1f0) = in_stack_00000288;
  *(undefined8 *)(puVar97 + 0x1f8) = in_stack_000005b8;
  *(undefined8 *)(puVar97 + 0x200) = in_stack_00000560;
  *(undefined8 *)(puVar97 + 0x208) = in_stack_00000528;
  *(undefined8 *)(puVar97 + 0x210) = in_stack_000005a8;
  *(undefined8 *)(puVar97 + 0x218) = in_stack_000003c8;
  *(undefined8 *)(puVar97 + 0x220) = in_stack_00000590;
  *(undefined8 *)(puVar97 + 0x228) = in_stack_00000520;
  *(undefined8 *)(puVar97 + 0x230) = param_29;
  *(undefined8 *)(puVar97 + 0x238) = in_stack_000003c0;
  *(undefined8 *)(puVar97 + 0x240) = param_69;
  *(undefined8 *)(puVar97 + 0x248) = in_stack_000003a8;
  *(undefined8 *)(puVar97 + 0x250) = param_64;
  *(undefined8 *)(puVar97 + 600) = in_stack_00000358;
  *(undefined8 *)(puVar97 + 0x260) = param_14;
  *(undefined8 *)(puVar97 + 0x268) = in_stack_000003d8;
  *(undefined8 *)(puVar97 + 0x270) = in_stack_00000348;
  *(undefined8 *)(puVar97 + 0x278) = in_stack_00000570;
  *(undefined8 *)(puVar97 + 0x280) = in_stack_00000598;
  *(undefined8 *)(puVar97 + 0x288) = in_stack_000004c0;
  *(undefined8 *)(puVar97 + 0x290) = in_stack_000004d0;
  *(undefined8 *)(puVar97 + 0x298) = in_stack_00000580;
  *(undefined8 *)(puVar97 + 0x2a0) = in_stack_000004a8;
  *(undefined8 *)(puVar97 + 0x2a8) = in_stack_00000588;
  *(undefined8 *)(puVar97 + 0x2b0) = in_stack_000003b0;
  *(undefined8 *)(puVar97 + 0x2b8) = in_stack_00000398;
  *(undefined8 *)(puVar97 + 0x2c0) = in_stack_00000538;
  *(undefined8 *)(puVar97 + 0x2c8) = in_stack_00000508;
  *(undefined8 *)(puVar97 + 0x2d0) = in_stack_000005c0;
  *(undefined8 *)(puVar97 + 0x2d8) = in_stack_000004b0;
  *(undefined8 *)(puVar97 + 0x2e0) = in_stack_000003a0;
  *(undefined8 *)(puVar97 + 0x2e8) = in_stack_000003b8;
  *(undefined8 *)(puVar97 + 0x2f0) = in_stack_00000510;
  *(undefined8 *)(puVar97 + 0x2f8) = in_stack_000005c8;
  *(undefined8 *)(puVar97 + 0x300) = in_stack_00000400;
  *(undefined8 *)(puVar97 + 0x308) = in_stack_000004f8;
  *(undefined8 *)(puVar97 + 0x310) = in_stack_000004f0;
  *(undefined8 *)(puVar97 + 0x318) = in_stack_000004c8;
  *(undefined8 *)(puVar97 + 800) = in_stack_00000578;
  *(undefined8 *)(puVar97 + 0x328) = param_31;
  *(undefined8 *)(puVar97 + 0x330) = in_stack_00000410;
  *(undefined8 *)(puVar97 + 0x338) = in_stack_00000680;
  *(char **)(puVar97 + 0x340) = pcVar70;
  *(undefined8 *)(puVar97 + 0x348) = param_45;
  *(undefined8 *)(puVar97 + 0x350) = in_stack_00000268;
  *(undefined8 *)(puVar97 + 0x358) = in_stack_000006c0;
  *(undefined8 *)(puVar97 + 0x360) = param_65;
  *(undefined8 *)(puVar97 + 0x368) = in_stack_00000418;
  *(undefined8 *)(puVar97 + 0x370) = in_stack_00000548;
  *(undefined8 *)(puVar97 + 0x378) = in_stack_000005b0;
  *(undefined8 *)(puVar97 + 0x380) = in_stack_00000308;
  *(undefined8 *)(puVar97 + 0x388) = in_stack_00000200;
  *(undefined8 *)(puVar97 + 0x390) = in_stack_000002b8;
  *(undefined8 *)(puVar97 + 0x398) = in_stack_00000330;
  *(undefined8 *)(puVar97 + 0x3a0) = in_stack_00000338;
  *(undefined8 *)(puVar97 + 0x3a8) = in_stack_000003f0;
  *(undefined8 *)(puVar97 + 0x3b0) = in_stack_00000340;
  *(undefined8 *)(puVar97 + 0x3b8) = param_32;
  *(undefined8 *)(puVar97 + 0x3c0) = in_stack_00000468;
  *(undefined8 *)(puVar97 + 0x3c8) = in_stack_00000438;
  *(undefined8 *)(puVar97 + 0x3d0) = in_stack_00000478;
  *(undefined8 *)(puVar97 + 0x3d8) = in_stack_00000630;
  *(undefined8 *)(puVar97 + 0x3e0) = in_stack_00000498;
  *(undefined8 *)(puVar97 + 1000) = in_stack_00000458;
  *(undefined8 *)(puVar97 + 0x3f0) = in_stack_00000260;
  *(undefined8 *)(puVar97 + 0x3f8) = param_5;
  *(undefined8 *)(puVar97 + 0x400) = param_6;
  *(undefined8 *)(puVar97 + 0x408) = in_stack_00000328;
  *(undefined8 *)(puVar97 + 0x410) = in_stack_000002d0;
  *(undefined8 *)(puVar97 + 0x418) = in_stack_00000450;
  *(undefined8 *)(puVar97 + 0x420) = param_44;
  *(undefined8 *)(puVar97 + 0x428) = param_30;
  *(undefined8 *)(puVar97 + 0x430) = in_stack_000002f8;
  *(undefined8 *)(puVar97 + 0x438) = in_stack_00000280;
  *(undefined8 *)(puVar97 + 0x440) = in_stack_00000480;
  *(undefined8 *)(puVar97 + 0x448) = in_stack_00000638;
  *(undefined8 *)(puVar97 + 0x450) = in_stack_00000488;
  *(undefined8 *)(puVar97 + 0x458) = in_stack_00000470;
  *(undefined8 *)(puVar97 + 0x460) = in_stack_00000440;
  *(undefined8 *)(puVar97 + 0x468) = in_stack_000002b0;
  *(undefined8 *)(puVar97 + 0x470) = in_stack_000002e8;
  *(undefined8 *)(puVar97 + 0x478) = in_stack_00000378;
  *(undefined8 *)(puVar97 + 0x480) = in_stack_00000500;
  *(undefined8 *)(puVar97 + 0x488) = in_stack_00000558;
  *(undefined8 *)(puVar97 + 0x490) = in_stack_00000678;
  *(undefined8 *)(puVar97 + 0x498) = in_stack_00000660;
  *(undefined8 *)(puVar97 + 0x4a0) = in_stack_00000318;
  *(undefined8 *)(puVar97 + 0x4a8) = param_68;
  *(undefined8 *)(puVar97 + 0x4b0) = in_stack_000004b8;
  *(undefined8 *)(puVar97 + 0x4b8) = in_stack_00000380;
  *(undefined8 *)(puVar97 + 0x4c0) = in_stack_00000360;
  *(undefined8 *)(puVar97 + 0x4c8) = in_stack_00000688;
  *(undefined8 *)(puVar97 + 0x4d0) = in_stack_00000698;
  *(undefined8 *)(puVar97 + 0x4d8) = in_stack_000002a8;
  *(undefined8 *)(puVar97 + 0x4e0) = in_stack_00000210;
  *(undefined8 *)(puVar97 + 0x4e8) = in_stack_000006b0;
  *(undefined8 *)(puVar97 + 0x4f0) = in_stack_00000620;
  *(undefined8 *)(puVar97 + 0x4f8) = in_stack_000003e0;
  *(undefined8 *)(puVar97 + 0x500) = in_stack_00000600;
  *(undefined8 *)(puVar97 + 0x508) = in_stack_000006a0;
  *(undefined8 *)(puVar97 + 0x510) = in_stack_000004a0;
  *(undefined8 *)(puVar97 + 0x518) = param_34;
  *(undefined8 *)(puVar97 + 0x520) = param_39;
  *(undefined8 *)(puVar97 + 0x528) = in_stack_00000220;
  *(undefined8 *)(puVar97 + 0x530) = in_stack_00000658;
  *(undefined8 *)(puVar97 + 0x538) = in_stack_00000518;
  *(undefined8 *)(puVar97 + 0x540) = in_stack_000005e8;
  *(undefined8 *)(puVar97 + 0x548) = param_28;
  *(undefined8 *)(puVar97 + 0x550) = in_stack_000005f8;
  *(undefined8 *)(puVar97 + 0x558) = in_stack_000002d8;
  *(undefined8 *)(puVar97 + 0x560) = in_stack_000006d8;
  *(undefined8 *)(puVar97 + 0x568) = in_stack_00000540;
  *(undefined8 *)(puVar97 + 0x570) = in_stack_00000530;
  *(undefined8 *)(puVar97 + 0x578) = in_stack_000004d8;
  *(undefined8 *)(puVar97 + 0x580) = in_stack_000005a0;
  *(undefined8 *)(puVar97 + 0x588) = in_stack_00000408;
  *(undefined8 *)(puVar97 + 0x590) = in_stack_00000350;
  *(undefined8 *)(puVar97 + 0x598) = param_17;
  *(undefined8 *)(puVar97 + 0x5a0) = in_stack_00000670;
  *(char **)(puVar97 + 0x5a8) = pcVar61;
  *(undefined8 *)(puVar97 + 0x5b0) = in_stack_000003f8;
  *(undefined8 *)(puVar97 + 0x5b8) = in_stack_000004e0;
  *(undefined8 *)(puVar97 + 0x5c0) = in_stack_000002a0;
  *(undefined8 *)(puVar97 + 0x5c8) = in_stack_00000640;
  *(undefined8 *)(puVar97 + 0x5d0) = in_stack_00000650;
  *(undefined8 *)(puVar97 + 0x5d8) = in_stack_000002e0;
  *(undefined8 *)(puVar97 + 0x5e0) = param_71;
  *(undefined8 *)(puVar97 + 0x5e8) = param_52;
  *(char **)(puVar97 + 0x5f0) = pcVar56;
  *(undefined8 *)(puVar97 + 0x5f8) = param_53;
  *(undefined8 *)(puVar97 + 0x600) = in_stack_000006a8;
  *(undefined8 *)(puVar97 + 0x608) = in_stack_000006b8;
  *(undefined8 *)(puVar97 + 0x610) = in_stack_00000690;
  *(undefined8 *)(puVar97 + 0x618) = param_7;
  *(undefined8 *)(puVar97 + 0x620) = in_stack_000006c8;
  *(undefined8 *)(puVar97 + 0x628) = in_stack_00000370;
  *(undefined8 *)(puVar97 + 0x630) = param_55;
  *(undefined8 *)(puVar97 + 0x638) = in_stack_00000420;
  *(undefined8 *)(puVar97 + 0x640) = in_stack_00000428;
  *(char **)(puVar97 + 0x648) = pcVar64;
  *(undefined8 *)(puVar97 + 0x650) = param_63;
  *(undefined8 *)(puVar97 + 0x658) = in_stack_00000310;
  *(undefined8 *)(puVar97 + 0x660) = in_stack_00000550;
  *(undefined8 *)(puVar97 + 0x668) = in_stack_00000238;
  *(undefined8 *)(puVar97 + 0x670) = in_stack_00000258;
  *(undefined8 *)(puVar97 + 0x678) = param_51;
  *(undefined8 *)(puVar97 + 0x680) = param_22;
  *(undefined8 *)(puVar97 + 0x688) = in_stack_00000290;
  *(undefined8 *)(puVar97 + 0x690) = in_stack_00000298;
  func_0x000107c6157c();
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_44);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(pcVar70);
  func_0x000107c6157c(param_56);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_71);
  func_0x000107c6157c(param_52);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_68);
  func_0x000107c6157c(param_66);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(pcVar62);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_65);
  func_0x000107c6157c(pcVar64);
  func_0x000107c6157c(param_63);
  func_0x000107c6157c(param_51);
  func_0x000107c6157c(in_stack_00000200);
  func_0x000107c6157c(param_70);
  func_0x000107c6157c(in_stack_000001f8);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(pcVar45);
  func_0x000107c6157c(param_47);
  func_0x000107c6157c(param_55);
  func_0x000107c6157c(pcVar63);
  func_0x000107c6157c(pcVar56);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_54);
  func_0x000107c6157c(param_67);
  func_0x000107c6157c(param_64);
  func_0x000107c6157c(param_69);
  func_0x000107c6157c(param_58);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(in_stack_00000208);
  func_0x000107c6157c(in_stack_00000230);
  func_0x000107c6157c(in_stack_00000608);
  func_0x000107c6157c(in_stack_000002c0);
  func_0x000107c6157c(in_stack_000003e8);
  func_0x000107c6157c(in_stack_00000300);
  func_0x000107c6157c(in_stack_00000368);
  func_0x000107c6157c(in_stack_00000390);
  func_0x000107c6157c(in_stack_000006d0);
  func_0x000107c6157c(in_stack_000002f0);
  func_0x000107c6157c(in_stack_00000320);
  func_0x000107c6157c(in_stack_00000270);
  func_0x000107c6157c(in_stack_000003d0);
  func_0x000107c6157c(in_stack_00000240);
  func_0x000107c6157c(uVar87);
  func_0x000107c6157c(in_stack_00000250);
  func_0x000107c6157c(pcVar47);
  func_0x000107c6157c(in_stack_00000648);
  func_0x000107c6157c(in_stack_000005d8);
  func_0x000107c6157c(in_stack_000005f0);
  func_0x000107c6157c(in_stack_00000228);
  func_0x000107c6157c(in_stack_00000610);
  func_0x000107c6157c(in_stack_000002c8);
  func_0x000107c6157c(in_stack_00000668);
  func_0x000107c6157c(in_stack_00000218);
  func_0x000107c6157c(in_stack_00000568);
  func_0x000107c6157c(in_stack_00000618);
  func_0x000107c6157c(in_stack_00000388);
  func_0x000107c6157c(in_stack_000005d0);
  func_0x000107c6157c(in_stack_00000430);
  func_0x000107c6157c(in_stack_000005e0);
  func_0x000107c6157c(in_stack_000004e8);
  func_0x000107c6157c(in_stack_00000248);
  func_0x000107c6157c(in_stack_00000490);
  func_0x000107c6157c(in_stack_00000460);
  func_0x000107c6157c(in_stack_00000278);
  func_0x000107c6157c(in_stack_00000448);
  func_0x000107c6157c(in_stack_00000628);
  func_0x000107c6157c(in_stack_00000288);
  func_0x000107c6157c(in_stack_000005b8);
  func_0x000107c6157c(in_stack_00000560);
  func_0x000107c6157c(in_stack_00000528);
  func_0x000107c6157c(in_stack_000005a8);
  func_0x000107c6157c(in_stack_000003c8);
  func_0x000107c6157c(in_stack_00000590);
  func_0x000107c6157c(in_stack_00000520);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(in_stack_000003c0);
  func_0x000107c6157c(in_stack_000003a8);
  func_0x000107c6157c(in_stack_00000358);
  func_0x000107c6157c(in_stack_000003d8);
  func_0x000107c6157c(in_stack_00000348);
  func_0x000107c6157c(in_stack_00000570);
  func_0x000107c6157c(in_stack_00000598);
  func_0x000107c6157c(in_stack_000004c0);
  func_0x000107c6157c(in_stack_000004d0);
  func_0x000107c6157c(in_stack_00000580);
  func_0x000107c6157c(in_stack_000004a8);
  func_0x000107c6157c(in_stack_00000588);
  func_0x000107c6157c(in_stack_000003b0);
  func_0x000107c6157c(in_stack_00000398);
  func_0x000107c6157c(in_stack_00000538);
  func_0x000107c6157c(in_stack_00000508);
  func_0x000107c6157c(in_stack_000005c0);
  func_0x000107c6157c(in_stack_000004b0);
  func_0x000107c6157c(in_stack_000003a0);
  func_0x000107c6157c(in_stack_000003b8);
  func_0x000107c6157c(in_stack_00000510);
  func_0x000107c6157c(in_stack_000005c8);
  func_0x000107c6157c(in_stack_00000400);
  func_0x000107c6157c(in_stack_000004f8);
  func_0x000107c6157c(in_stack_000004f0);
  func_0x000107c6157c(in_stack_000004c8);
  func_0x000107c6157c(in_stack_00000578);
  func_0x000107c6157c(in_stack_00000410);
  func_0x000107c6157c(in_stack_00000680);
  func_0x000107c6157c(in_stack_00000268);
  func_0x000107c6157c(in_stack_000006c0);
  func_0x000107c6157c(in_stack_00000418);
  func_0x000107c6157c(in_stack_00000548);
  func_0x000107c6157c(in_stack_000005b0);
  func_0x000107c6157c(in_stack_00000308);
  func_0x000107c6157c(in_stack_000002b8);
  func_0x000107c6157c(in_stack_00000330);
  func_0x000107c6157c(in_stack_00000338);
  func_0x000107c6157c(in_stack_000003f0);
  func_0x000107c6157c(in_stack_00000340);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(in_stack_00000468);
  func_0x000107c6157c(in_stack_00000438);
  func_0x000107c6157c(in_stack_00000478);
  func_0x000107c6157c(in_stack_00000630);
  func_0x000107c6157c(in_stack_00000498);
  func_0x000107c6157c(in_stack_00000458);
  func_0x000107c6157c(in_stack_00000260);
  func_0x000107c6157c(in_stack_00000328);
  func_0x000107c6157c(in_stack_000002d0);
  func_0x000107c6157c(in_stack_00000450);
  func_0x000107c6157c(in_stack_000002f8);
  func_0x000107c6157c(in_stack_00000280);
  func_0x000107c6157c(in_stack_00000480);
  func_0x000107c6157c(in_stack_00000638);
  func_0x000107c6157c(in_stack_00000488);
  func_0x000107c6157c(in_stack_00000470);
  func_0x000107c6157c(in_stack_00000440);
  func_0x000107c6157c(in_stack_000002b0);
  func_0x000107c6157c(in_stack_000002e8);
  func_0x000107c6157c(in_stack_00000378);
  func_0x000107c6157c(in_stack_00000500);
  func_0x000107c6157c(in_stack_00000558);
  func_0x000107c6157c(in_stack_00000678);
  func_0x000107c6157c(in_stack_00000660);
  func_0x000107c6157c(in_stack_00000318);
  func_0x000107c6157c(in_stack_000004b8);
  func_0x000107c6157c(in_stack_00000380);
  func_0x000107c6157c(in_stack_00000360);
  func_0x000107c6157c(in_stack_00000688);
  func_0x000107c6157c(in_stack_00000698);
  func_0x000107c6157c(in_stack_000002a8);
  func_0x000107c6157c(in_stack_00000210);
  func_0x000107c6157c(in_stack_000006b0);
  func_0x000107c6157c(in_stack_00000620);
  func_0x000107c6157c(in_stack_000003e0);
  func_0x000107c6157c(in_stack_00000600);
  func_0x000107c6157c(in_stack_000006a0);
  func_0x000107c6157c(in_stack_000004a0);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(in_stack_00000220);
  func_0x000107c6157c(in_stack_00000658);
  func_0x000107c6157c(in_stack_00000518);
  func_0x000107c6157c(in_stack_000005e8);
  func_0x000107c6157c(in_stack_000005f8);
  func_0x000107c6157c(in_stack_000002d8);
  func_0x000107c6157c(in_stack_000006d8);
  func_0x000107c6157c(in_stack_00000540);
  func_0x000107c6157c(in_stack_00000530);
  func_0x000107c6157c(in_stack_000004d8);
  func_0x000107c6157c(in_stack_000005a0);
  func_0x000107c6157c(in_stack_00000408);
  func_0x000107c6157c(in_stack_00000350);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(in_stack_00000670);
  func_0x000107c6157c(pcVar61);
  func_0x000107c6157c(in_stack_000003f8);
  func_0x000107c6157c(in_stack_000004e0);
  func_0x000107c6157c(in_stack_000002a0);
  func_0x000107c6157c(in_stack_00000640);
  func_0x000107c6157c(in_stack_00000650);
  func_0x000107c6157c(in_stack_000002e0);
  func_0x000107c6157c(in_stack_000006a8);
  func_0x000107c6157c(in_stack_000006b8);
  func_0x000107c6157c(in_stack_00000690);
  func_0x000107c6157c(in_stack_000006c8);
  func_0x000107c6157c(in_stack_00000370);
  func_0x000107c6157c(in_stack_00000420);
  func_0x000107c6157c(in_stack_00000428);
  func_0x000107c6157c(in_stack_00000310);
  func_0x000107c6157c(in_stack_00000550);
  func_0x000107c6157c(in_stack_00000238);
  func_0x000107c6157c(in_stack_00000258);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(in_stack_00000290);
  func_0x000107c6157c(in_stack_00000298);
  pcVar89 = FUN_1027cd8a8;
  func_0x0001000823a8(FUN_1027cd8a8,puVar97);
  func_0x000100082720("SCMessageTypeRenderingPluginRegistryServiceProvider",0x33,2);
  pcVar90 = pcVar88;
  FUN_1028c2924();
  func_0x000100082720("SCMessageAccessoryPluginSaberServicesServiceProvider",0x34,2);
  pcVar91 = pcVar89;
  FUN_102d81918();
  func_0x000100082720("SCMessageTypeRenderingPluginSaberServicesServiceProvider",0x38,2);
  func_0x0001000285a8(0x112ec0428,&UNK_10dadea10);
  puVar97 = &UNK_11054f1f8;
  func_0x000107c613fc(&UNK_11054f1f8,0x38,7);
  *(undefined8 **)(puVar97 + 0x10) = puVar1;
  *(undefined8 *)(puVar97 + 0x18) = in_stack_000006e0;
  *(undefined8 *)(puVar97 + 0x20) = param_4;
  *(undefined8 *)(puVar97 + 0x28) = param_27;
  *(code **)(puVar97 + 0x30) = pcVar90;
  func_0x000107c6157c();
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(in_stack_000006e0);
  func_0x000107c6157c(pcVar90);
  pcVar92 = FUN_1027cdd4c;
  func_0x0001000823a8(FUN_1027cdd4c,puVar97);
  func_0x000100082720("SCMessageAccessoryPluginEntryPointWrapperServiceProvider",0x38,2);
  func_0x0001000285a8(0x112ec0430,&UNK_10dadded0);
  func_0x000107c6157c(pcVar92);
  uVar93 = 0x1027cdd5c;
  func_0x0001000823a8(0x1027cdd5c,pcVar92);
  func_0x000100082720("SCMessageAccessoryServicesServiceProvider",0x29,2);
  func_0x0001000285a8(0x112ec0438,&UNK_10dadebc0);
  puVar97 = &UNK_11054f220;
  func_0x000107c613fc(&UNK_11054f220,0x58,7);
  *(undefined8 **)(puVar97 + 0x10) = puVar1;
  *(undefined8 *)(puVar97 + 0x18) = param_4;
  *(undefined8 *)(puVar97 + 0x20) = param_3;
  *(undefined8 *)(puVar97 + 0x28) = param_24;
  *(undefined8 *)(puVar97 + 0x30) = param_8;
  *(undefined8 *)(puVar97 + 0x38) = param_11;
  *(undefined8 *)(puVar97 + 0x40) = in_stack_000006e8;
  *(undefined8 *)(puVar97 + 0x48) = in_stack_000002a8;
  *(code **)(puVar97 + 0x50) = pcVar91;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(in_stack_000002a8);
  func_0x000107c6157c(in_stack_000006e8);
  func_0x000107c6157c(pcVar91);
  pcVar94 = FUN_1027cddc8;
  func_0x0001000823a8(FUN_1027cddc8,puVar97);
  func_0x000100082720("SCMessageRenderingPluginEntryPointWrapperServiceProvider",0x38,2);
  func_0x0001000285a8(0x112ec0440,&UNK_10daddee0);
  func_0x000107c6157c(pcVar94);
  pcVar95 = FUN_1027cde0c;
  func_0x0001000823a8(FUN_1027cde0c,pcVar94);
  func_0x000100082720("SCMessageRenderingPluginServicesServiceProvider",0x2f,2);
  FUN_10289f67c(in_stack_000006e0,param_26,param_13,pcVar95);
  func_0x000100082720("SCChatReplyComposeScopedFactoryServiceProvider",0x2e,2);
  uVar96 = in_stack_000006e0;
  func_0x0001043950ec();
  func_0x000100082720("SCChatReplyComposeScopeServicesServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112ec0448,&UNK_10dade280);
  puVar97 = &UNK_11054f248;
  func_0x000107c613fc(&UNK_11054f248,0x430,7);
  *(undefined8 **)(puVar97 + 0x10) = puVar1;
  *(undefined8 *)(puVar97 + 0x18) = param_9;
  *(undefined8 *)(puVar97 + 0x20) = in_stack_000006f0;
  *(undefined8 *)(puVar97 + 0x28) = in_stack_000002d8;
  *(undefined8 *)(puVar97 + 0x30) = in_stack_000002f8;
  *(undefined8 *)(puVar97 + 0x38) = param_4;
  *(undefined8 *)(puVar97 + 0x40) = in_stack_00000250;
  *(undefined8 *)(puVar97 + 0x48) = param_27;
  *(code **)(puVar97 + 0x50) = pcVar95;
  *(undefined8 *)(puVar97 + 0x58) = in_stack_000006f8;
  *(undefined8 *)(puVar97 + 0x60) = param_5;
  *(undefined8 *)(puVar97 + 0x68) = param_31;
  *(undefined8 *)(puVar97 + 0x70) = param_29;
  *(undefined8 *)(puVar97 + 0x78) = param_13;
  *(undefined8 *)(puVar97 + 0x80) = param_14;
  *(undefined8 *)(puVar97 + 0x88) = in_stack_000005d8;
  *(undefined8 *)(puVar97 + 0x90) = param_44;
  *(undefined8 *)(puVar97 + 0x98) = in_stack_00000700;
  *(undefined8 *)(puVar97 + 0xa0) = in_stack_00000708;
  *(undefined8 *)(puVar97 + 0xa8) = param_64;
  *(undefined8 *)(puVar97 + 0xb0) = param_69;
  *(undefined8 *)(puVar97 + 0xb8) = in_stack_00000710;
  *(undefined8 *)(puVar97 + 0xc0) = in_stack_00000218;
  *(undefined8 *)(puVar97 + 200) = in_stack_00000590;
  *(undefined8 *)(puVar97 + 0xd0) = in_stack_00000718;
  *(undefined8 *)(puVar97 + 0xd8) = in_stack_000003f8;
  *(undefined8 *)(puVar97 + 0xe0) = param_24;
  *(undefined8 *)(puVar97 + 0xe8) = param_66;
  *(undefined8 *)(puVar97 + 0xf0) = in_stack_00000720;
  *(undefined8 *)(puVar97 + 0xf8) = in_stack_000006e8;
  *(undefined8 *)(puVar97 + 0x100) = in_stack_00000728;
  *(undefined8 *)(puVar97 + 0x108) = in_stack_00000730;
  *(undefined8 *)(puVar97 + 0x110) = in_stack_00000738;
  *(undefined8 *)(puVar97 + 0x118) = in_stack_00000740;
  *(undefined8 *)(puVar97 + 0x120) = in_stack_000003e8;
  *(undefined8 *)(puVar97 + 0x128) = param_26;
  *(undefined8 *)(puVar97 + 0x130) = param_59;
  *(undefined8 *)(puVar97 + 0x138) = param_30;
  *(undefined8 *)(puVar97 + 0x140) = in_stack_00000748;
  *(undefined8 *)(puVar97 + 0x148) = param_11;
  *(undefined8 *)(puVar97 + 0x150) = in_stack_00000750;
  *(undefined8 *)(puVar97 + 0x158) = in_stack_000003f0;
  *(undefined8 *)(puVar97 + 0x160) = in_stack_00000318;
  *(undefined8 *)(puVar97 + 0x168) = in_stack_000004a8;
  *(undefined8 *)(puVar97 + 0x170) = param_39;
  *(undefined8 *)(puVar97 + 0x178) = param_68;
  *(undefined8 *)(puVar97 + 0x180) = in_stack_000004b8;
  *(undefined8 *)(puVar97 + 0x188) = param_25;
  *(undefined8 *)(puVar97 + 400) = param_54;
  *(undefined8 *)(puVar97 + 0x198) = in_stack_000004d8;
  *(undefined8 *)(puVar97 + 0x1a0) = in_stack_00000348;
  *(undefined8 *)(puVar97 + 0x1a8) = in_stack_00000758;
  *(undefined8 *)(puVar97 + 0x1b0) = in_stack_00000760;
  *(undefined8 *)(puVar97 + 0x1b8) = in_stack_00000768;
  *(undefined8 *)(puVar97 + 0x1c0) = uVar96;
  *(undefined8 *)(puVar97 + 0x1c8) = in_stack_00000770;
  *(undefined8 *)(puVar97 + 0x1d0) = in_stack_000002d0;
  *(undefined8 *)(puVar97 + 0x1d8) = in_stack_00000430;
  *(undefined8 *)(puVar97 + 0x1e0) = in_stack_00000778;
  *(undefined8 *)(puVar97 + 0x1e8) = in_stack_00000278;
  *(undefined8 *)(puVar97 + 0x1f0) = uVar79;
  *(undefined8 *)(puVar97 + 0x1f8) = uVar81;
  *(undefined8 *)(puVar97 + 0x200) = uVar36;
  *(undefined8 *)(puVar97 + 0x208) = uVar85;
  *(undefined8 *)(puVar97 + 0x210) = uVar84;
  *(undefined8 *)(puVar97 + 0x218) = param_53;
  *(undefined8 *)(puVar97 + 0x220) = param_8;
  *(undefined8 *)(puVar97 + 0x228) = param_65;
  *(undefined8 *)(puVar97 + 0x230) = in_stack_00000780;
  *(undefined8 *)(puVar97 + 0x238) = in_stack_00000788;
  *(undefined8 *)(puVar97 + 0x240) = in_stack_00000230;
  *(undefined8 *)(puVar97 + 0x248) = in_stack_00000400;
  *(undefined8 *)(puVar97 + 0x250) = in_stack_00000790;
  *(undefined8 *)(puVar97 + 600) = in_stack_00000798;
  *(char **)(puVar97 + 0x260) = pcVar86;
  *(undefined8 *)(puVar97 + 0x268) = in_stack_000007a0;
  *(undefined8 *)(puVar97 + 0x270) = in_stack_000007a8;
  *(undefined8 *)(puVar97 + 0x278) = in_stack_000007b0;
  *(undefined8 *)(puVar97 + 0x280) = in_stack_000007b8;
  *(undefined8 *)(puVar97 + 0x288) = in_stack_000007c0;
  *(char **)(puVar97 + 0x290) = pcVar80;
  *(undefined8 *)(puVar97 + 0x298) = in_stack_000007c8;
  *(undefined8 *)(puVar97 + 0x2a0) = in_stack_000007d0;
  *(undefined8 *)(puVar97 + 0x2a8) = param_28;
  *(undefined8 *)(puVar97 + 0x2b0) = param_23;
  *(undefined8 *)(puVar97 + 0x2b8) = in_stack_000004c0;
  *(undefined8 *)(puVar97 + 0x2c0) = in_stack_000007d8;
  *(undefined8 *)(puVar97 + 0x2c8) = uVar93;
  *(undefined8 *)(puVar97 + 0x2d0) = in_stack_000007e0;
  *(undefined8 *)(puVar97 + 0x2d8) = uVar77;
  *(undefined8 *)(puVar97 + 0x2e0) = in_stack_000006a8;
  *(undefined8 *)(puVar97 + 0x2e8) = in_stack_000007e8;
  *(undefined8 *)(puVar97 + 0x2f0) = uVar103;
  *(undefined8 *)(puVar97 + 0x2f8) = uVar4;
  *(undefined8 *)(puVar97 + 0x300) = in_stack_000004e8;
  *(undefined8 *)(puVar97 + 0x308) = in_stack_000003a8;
  *(undefined8 *)(puVar97 + 0x310) = in_stack_00000570;
  *(undefined8 *)(puVar97 + 0x318) = uVar78;
  *(undefined8 *)(puVar97 + 800) = in_stack_00000210;
  *(undefined8 *)(puVar97 + 0x328) = in_stack_000002a8;
  *(undefined8 *)(puVar97 + 0x330) = param_15;
  *(undefined8 *)(puVar97 + 0x338) = param_6;
  *(undefined8 *)(puVar97 + 0x340) = in_stack_000007f0;
  *(undefined8 *)(puVar97 + 0x348) = in_stack_000007f8;
  *(undefined8 *)(puVar97 + 0x350) = in_stack_00000800;
  *(undefined8 *)(puVar97 + 0x358) = in_stack_00000808;
  *(undefined8 *)(puVar97 + 0x360) = in_stack_000006b0;
  *(undefined8 *)(puVar97 + 0x368) = param_22;
  *(undefined8 *)(puVar97 + 0x370) = in_stack_00000810;
  *(char **)(puVar97 + 0x378) = pcVar72;
  *(char **)(puVar97 + 0x380) = pcVar55;
  *(char **)(puVar97 + 0x388) = pcVar60;
  *(char **)(puVar97 + 0x390) = pcVar67;
  *(char **)(puVar97 + 0x398) = pcVar68;
  *(char **)(puVar97 + 0x3a0) = pcVar62;
  *(char **)(puVar97 + 0x3a8) = pcVar63;
  *(char **)(puVar97 + 0x3b0) = pcVar58;
  *(char **)(puVar97 + 0x3b8) = pcVar54;
  *(char **)(puVar97 + 0x3c0) = pcVar71;
  *(char **)(puVar97 + 0x3c8) = pcVar47;
  *(char **)(puVar97 + 0x3d0) = pcVar56;
  *(char **)(puVar97 + 0x3d8) = pcVar57;
  *(char **)(puVar97 + 0x3e0) = pcVar52;
  *(char **)(puVar97 + 1000) = pcVar69;
  *(char **)(puVar97 + 0x3f0) = pcVar73;
  *(char **)(puVar97 + 0x3f8) = pcVar66;
  *(char **)(puVar97 + 0x400) = pcVar59;
  *(char **)(puVar97 + 0x408) = pcVar65;
  *(char **)(puVar97 + 0x410) = pcVar51;
  *(char **)(puVar97 + 0x418) = pcVar46;
  *(char **)(puVar97 + 0x420) = pcVar48;
  *(char **)(puVar97 + 0x428) = pcVar53;
  func_0x000107c6157c();
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_44);
  func_0x000107c6157c(pcVar51);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_68);
  func_0x000107c6157c(param_66);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_59);
  func_0x000107c6157c(pcVar62);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_65);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(pcVar63);
  func_0x000107c6157c(pcVar56);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_54);
  func_0x000107c6157c(param_64);
  func_0x000107c6157c(param_69);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(in_stack_00000230);
  func_0x000107c6157c(in_stack_000003e8);
  func_0x000107c6157c(in_stack_00000250);
  func_0x000107c6157c(pcVar47);
  func_0x000107c6157c(in_stack_000005d8);
  func_0x000107c6157c(in_stack_00000218);
  func_0x000107c6157c(in_stack_00000430);
  func_0x000107c6157c(in_stack_000004e8);
  func_0x000107c6157c(in_stack_00000278);
  func_0x000107c6157c(in_stack_00000590);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(in_stack_000003a8);
  func_0x000107c6157c(in_stack_00000348);
  func_0x000107c6157c(in_stack_00000570);
  func_0x000107c6157c(in_stack_000004c0);
  func_0x000107c6157c(in_stack_000004a8);
  func_0x000107c6157c(in_stack_00000400);
  func_0x000107c6157c(in_stack_000003f0);
  func_0x000107c6157c(in_stack_000002d0);
  func_0x000107c6157c(in_stack_000002f8);
  func_0x000107c6157c(in_stack_00000318);
  func_0x000107c6157c(in_stack_000004b8);
  func_0x000107c6157c(in_stack_000002a8);
  func_0x000107c6157c(in_stack_00000210);
  func_0x000107c6157c(in_stack_000006b0);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(in_stack_000002d8);
  func_0x000107c6157c(in_stack_000004d8);
  func_0x000107c6157c(in_stack_000003f8);
  func_0x000107c6157c(in_stack_000006a8);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(in_stack_000006e8);
  func_0x000107c6157c(in_stack_000006f0);
  func_0x000107c6157c(pcVar95);
  func_0x000107c6157c(in_stack_000006f8);
  func_0x000107c6157c(in_stack_00000700);
  func_0x000107c6157c(in_stack_00000708);
  func_0x000107c6157c(in_stack_00000710);
  func_0x000107c6157c(in_stack_00000718);
  func_0x000107c6157c(in_stack_00000720);
  func_0x000107c6157c(in_stack_00000728);
  func_0x000107c6157c(in_stack_00000730);
  func_0x000107c6157c(in_stack_00000738);
  func_0x000107c6157c(in_stack_00000740);
  func_0x000107c6157c(in_stack_00000748);
  func_0x000107c6157c(in_stack_00000750);
  func_0x000107c6157c(in_stack_00000758);
  func_0x000107c6157c(in_stack_00000760);
  func_0x000107c6157c(in_stack_00000768);
  func_0x000107c6157c(uVar96);
  func_0x000107c6157c(in_stack_00000770);
  func_0x000107c6157c(in_stack_00000778);
  func_0x000107c6157c(uVar79);
  func_0x000107c6157c(uVar81);
  func_0x000107c6157c(uVar36);
  func_0x000107c6157c(uVar85);
  func_0x000107c6157c(uVar84);
  func_0x000107c6157c(in_stack_00000780);
  func_0x000107c6157c(in_stack_00000788);
  func_0x000107c6157c(in_stack_00000790);
  func_0x000107c6157c(in_stack_00000798);
  func_0x000107c6157c(pcVar86);
  func_0x000107c6157c(in_stack_000007a0);
  func_0x000107c6157c(in_stack_000007a8);
  func_0x000107c6157c(in_stack_000007b0);
  func_0x000107c6157c(in_stack_000007b8);
  func_0x000107c6157c(in_stack_000007c0);
  func_0x000107c6157c(pcVar80);
  func_0x000107c6157c(in_stack_000007c8);
  func_0x000107c6157c(in_stack_000007d0);
  func_0x000107c6157c(in_stack_000007d8);
  func_0x000107c6157c(uVar93);
  func_0x000107c6157c(in_stack_000007e0);
  func_0x000107c6157c(uVar77);
  func_0x000107c6157c(in_stack_000007e8);
  func_0x000107c6157c(uVar103);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar78);
  func_0x000107c6157c(in_stack_000007f0);
  func_0x000107c6157c(in_stack_000007f8);
  func_0x000107c6157c(in_stack_00000800);
  func_0x000107c6157c(in_stack_00000808);
  func_0x000107c6157c(in_stack_00000810);
  func_0x000107c6157c(pcVar72);
  func_0x000107c6157c(pcVar55);
  func_0x000107c6157c(pcVar60);
  func_0x000107c6157c(pcVar67);
  func_0x000107c6157c(pcVar68);
  func_0x000107c6157c(pcVar58);
  func_0x000107c6157c(pcVar54);
  func_0x000107c6157c(pcVar71);
  func_0x000107c6157c(pcVar57);
  func_0x000107c6157c(pcVar52);
  func_0x000107c6157c(pcVar69);
  func_0x000107c6157c(pcVar73);
  func_0x000107c6157c(pcVar66);
  func_0x000107c6157c(pcVar59);
  func_0x000107c6157c(pcVar65);
  func_0x000107c6157c(pcVar46);
  func_0x000107c6157c(pcVar48);
  func_0x000107c6157c(pcVar53);
  pcVar98 = FUN_1027cde14;
  func_0x0001000823a8(FUN_1027cde14,puVar97);
  func_0x000100082720("SCChatScopeEntryPointWrapperServiceProvider",0x2b,2);
  pcVar99 = pcVar5;
  FUN_1027e1bb4(pcVar5,uVar103,pcVar6,uVar77,pcVar7,uVar4,pcVar8,uVar78,pcVar9,pcVar10,pcVar11,
                pcVar12,pcVar13,pcVar14,uVar79,pcVar15,pcVar16,pcVar17,pcVar18,pcVar19,pcVar20,
                uVar96,pcVar21,pcVar22,uVar36,pcVar23,pcVar24,pcVar25,uVar93,pcVar95,pcVar26,pcVar27
                ,pcVar28,pcVar29,pcVar30,pcVar31,uVar85,pcVar32,pcVar33,pcVar86,pcVar34);
  func_0x000100082720("ChatScopeGraphBridgeServicesServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112ec0450,&UNK_10daddef0);
  puVar97 = &UNK_11054f270;
  func_0x000107c613fc(&UNK_11054f270,0x68,7);
  *(code **)(puVar97 + 0x10) = pcVar2;
  *(undefined8 **)(puVar97 + 0x18) = puVar1;
  *(char **)(puVar97 + 0x20) = pcVar99;
  *(undefined8 *)(puVar97 + 0x28) = uVar3;
  *(code **)(puVar97 + 0x30) = pcVar98;
  *(code **)(puVar97 + 0x38) = pcVar75;
  *(code **)(puVar97 + 0x40) = pcVar35;
  *(code **)(puVar97 + 0x48) = pcVar92;
  *(code **)(puVar97 + 0x50) = pcVar94;
  *(undefined8 *)(puVar97 + 0x58) = uVar82;
  *(undefined8 *)(puVar97 + 0x60) = uVar76;
  func_0x000107c6157c();
  func_0x000107c6157c(pcVar2);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(pcVar35);
  func_0x000107c6157c(uVar82);
  func_0x000107c6157c(pcVar92);
  func_0x000107c6157c(pcVar94);
  func_0x000107c6157c(pcVar99);
  func_0x000107c6157c(pcVar98);
  func_0x000107c6157c(pcVar75);
  func_0x000107c6157c(uVar76);
  pcVar100 = FUN_1027ce0c4;
  func_0x0001000823a8(FUN_1027ce0c4,puVar97);
  func_0x000100082720("SCChatScopeInitializationPluginRegistryServiceProvider",0x36,2);
  func_0x0001000285a8(0x112ec0358,&UNK_10daddc50);
  func_0x000107c6157c(pcVar100);
  pcVar101 = FUN_1027ce110;
  func_0x0001000823a8(FUN_1027ce110,pcVar100);
  func_0x000100082720("SCChatScopeInitializationServiceProvider",0x28,2);
  func_0x0001000285a8(0x112ec0348,&UNK_10daddc40);
  func_0x000107c6157c(pcVar101);
  uVar102 = 0x1027ce118;
  func_0x0001000823a8(0x1027ce118,pcVar101);
  func_0x000100082720("SCChatScopedServicesServiceProvider",0x23,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar97 = &UNK_11054f298;
  func_0x000107c613fc(&UNK_11054f298,0x20,7);
  *(undefined8 *)(puVar97 + 0x10) = uVar102;
  *(code **)(puVar97 + 0x18) = pcVar75;
  func_0x000107c6157c(pcVar75);
  uVar102 = 0x1027ce120;
  func_0x0001000823a8(0x1027ce120,puVar97);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(uVar103);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(pcVar11);
  func_0x000107c61574(pcVar12);
  func_0x000107c61574(pcVar13);
  func_0x000107c61574(pcVar14);
  func_0x000107c61574(pcVar15);
  func_0x000107c61574(pcVar16);
  func_0x000107c61574(pcVar17);
  func_0x000107c61574(pcVar18);
  func_0x000107c61574(pcVar19);
  func_0x000107c61574(pcVar20);
  func_0x000107c61574(pcVar21);
  func_0x000107c61574(pcVar22);
  func_0x000107c61574(pcVar23);
  func_0x000107c61574(pcVar24);
  func_0x000107c61574(pcVar25);
  func_0x000107c61574(pcVar26);
  func_0x000107c61574(pcVar27);
  func_0x000107c61574(pcVar28);
  func_0x000107c61574(pcVar29);
  func_0x000107c61574(pcVar30);
  func_0x000107c61574(pcVar31);
  func_0x000107c61574(pcVar32);
  func_0x000107c61574(pcVar33);
  func_0x000107c61574(pcVar34);
  func_0x000107c61574(pcVar35);
  func_0x000107c61574(uVar36);
  func_0x000107c61574(uVar37);
  func_0x000107c61574(uVar38);
  func_0x000107c61574(uVar39);
  func_0x000107c61574(uVar40);
  func_0x000107c61574(pcVar41);
  func_0x000107c61574(uVar42);
  func_0x000107c61574(param_33);
  func_0x000107c61574(uVar43);
  func_0x000107c61574(pcVar44);
  func_0x000107c61574(pcVar45);
  func_0x000107c61574(pcVar46);
  func_0x000107c61574(pcVar47);
  func_0x000107c61574(pcVar48);
  func_0x000107c61574(pcVar49);
  func_0x000107c61574(pcVar50);
  func_0x000107c61574(pcVar51);
  func_0x000107c61574(pcVar52);
  func_0x000107c61574(pcVar53);
  func_0x000107c61574(pcVar54);
  func_0x000107c61574(pcVar55);
  func_0x000107c61574(pcVar56);
  func_0x000107c61574(pcVar57);
  func_0x000107c61574(pcVar58);
  func_0x000107c61574(pcVar59);
  func_0x000107c61574(pcVar60);
  func_0x000107c61574(pcVar61);
  func_0x000107c61574(pcVar62);
  func_0x000107c61574(pcVar63);
  func_0x000107c61574(pcVar64);
  func_0x000107c61574(pcVar65);
  func_0x000107c61574(pcVar66);
  func_0x000107c61574(pcVar67);
  func_0x000107c61574(pcVar68);
  func_0x000107c61574(pcVar69);
  func_0x000107c61574(pcVar70);
  func_0x000107c61574(pcVar71);
  func_0x000107c61574(pcVar72);
  func_0x000107c61574(pcVar73);
  func_0x000107c61574(pcVar74);
  func_0x000107c61574(pcVar75);
  func_0x000107c61574(uVar76);
  func_0x000107c61574(uVar77);
  func_0x000107c61574(uVar78);
  func_0x000107c61574(uVar79);
  func_0x000107c61574(pcVar80);
  func_0x000107c61574(uVar81);
  func_0x000107c61574(uVar82);
  func_0x000107c61574(uVar83);
  func_0x000107c61574(uVar84);
  func_0x000107c61574(uVar85);
  func_0x000107c61574(pcVar86);
  func_0x000107c61574(uVar87);
  func_0x000107c61574(pcVar88);
  func_0x000107c61574(pcVar89);
  func_0x000107c61574(pcVar90);
  func_0x000107c61574(pcVar91);
  func_0x000107c61574(pcVar92);
  func_0x000107c61574(uVar93);
  func_0x000107c61574(pcVar94);
  func_0x000107c61574(pcVar95);
  func_0x000107c61574(in_stack_000006e0);
  func_0x000107c61574(uVar96);
  func_0x000107c61574(pcVar98);
  func_0x000107c61574(pcVar99);
  func_0x000107c61574(pcVar100);
  func_0x000107c61574(pcVar101);
  func_0x000100082720("SCChatScopeEntryPointProvider",0x1d,2);
  *param_1 = uVar102;
  return;
}



/* Entry: 1027ccc0c; end: 1027cd743;  */

void FUN_1027ccc0c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1027c9184(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230));
  return;
}



/* Entry: 1027cd744; end: 1027cd76b;  */

void FUN_1027cd744(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  FUN_1027ce674();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  FUN_1028ac998(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  uVar8 = uStack_68;
  func_0x000107c61174();
  uVar9 = uVar8;
  func_0x0001028ac3f0();
  *(undefined8 *)(lVar1 + 0x10) = uVar9;
  uVar10 = uVar9;
  func_0x000107c6157c();
  func_0x0001028ac474();
  func_0x000107c61574(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined8 *)(lVar1 + 0x48) = uVar10;
  *param_1 = lVar1;
  return;
}



/* Entry: 1027cd76c; end: 1027cd7bf;  */

void FUN_1027cd76c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1027cd7c0; end: 1027cd80b;  */

void FUN_1027cd7c0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  FUN_1027d9aac();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  FUN_10287bb98(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  uVar8 = uStack_68;
  func_0x000107c61174();
  uVar9 = uVar8;
  func_0x00010287b3a0();
  *(undefined8 *)(lVar1 + 0x10) = uVar9;
  uVar10 = uVar9;
  func_0x000107c6157c();
  FUN_10287b51c();
  func_0x000107c61574(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined8 *)(lVar1 + 0x48) = uVar10;
  *param_1 = lVar1;
  return;
}



/* Entry: 1027cd80c; end: 1027cd8a7;  */

void FUN_1027cd80c(void)

{
  long unaff_x20;
  
  FUN_1027dc5f8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0));
  return;
}



/* Entry: 1027cd8a8; end: 1027cdd4b;  */

void FUN_1027cd8a8(void)

{
  long unaff_x20;
  
  FUN_1027dcf58(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230),*(undefined8 *)(unaff_x20 + 0x238));
  return;
}



/* Entry: 1027cdd4c; end: 1027cdd63;  */

void FUN_1027cdd4c(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  FUN_1027da448();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  *(undefined8 *)(lVar2 + 0x28) = uStack_78;
  *(undefined8 *)(lVar2 + 0x30) = uStack_80;
  *(undefined8 *)(lVar2 + 0x38) = uStack_88;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar5 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar6 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar7 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  puVar3 = PTR_PTR_1126ab040;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0x706f635374616863;
  func_0x000107c5fadc(0x706f635374616863,0xe900000000000065);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  uVar11 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar11);
  uVar9 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar11);
  uVar9 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef2b6f0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar11);
  uVar9 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef2b8b0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar11);
  uVar9 = 0x7265537265626173;
  func_0x000107c5fadc(0x7265537265626173,0xed00007365636976);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  uVar9 = *(undefined8 *)(lVar2 + 0x10);
  lVar10 = *(long *)(lVar2 + 0x18);
  func_0x000107c61174(uVar9);
  func_0x000107c61174();
  uVar11 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f0bf750);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c3e740(uVar9);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar10 != 0) {
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    *(long *)(lVar2 + 0x40) = lVar10;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027d9f14);
  (*pcVar1)();
}



/* Entry: 1027cdd64; end: 1027cddc7;  */

void FUN_1027cdd64(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1027cddc8; end: 1027cddd3;  */

void FUN_1027cddc8(void)

{
  long unaff_x20;
  
  FUN_1027da4cc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1027cddd4; end: 1027cde0b;  */

void FUN_1027cddd4(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
             *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
             *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1027cde0c; end: 1027cde13;  */

void FUN_1027cde0c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1027cde14; end: 1027ce04f;  */

void FUN_1027cde14(void)

{
  long unaff_x20;
  
  FUN_1027ceefc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230),*(undefined8 *)(unaff_x20 + 0x238));
  return;
}



/* Entry: 1027ce050; end: 1027ce0c3;  */

void FUN_1027ce050(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1027ce0c4; end: 1027ce0cf;  */

void FUN_1027ce0c4(void)

{
  long unaff_x20;
  
  FUN_1027dbe2c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 1027ce0d0; end: 1027ce10f;  */

void FUN_1027ce0d0(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
             *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
             *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
             *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 1027ce110; end: 1027ce127;  */

void FUN_1027ce110(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x0001000285a8(0x112ec03b0,&UNK_10dadde10);
  uVar1 = 0;
  func_0x000100385ee0();
  func_0x000100083b20(&uStack_38);
  func_0x0001000a8548(uVar1,uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1027ce128; end: 1027ce4ef;  */

void FUN_1027ce128(long *param_1,long param_2)

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
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  FUN_1027ce674();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  FUN_1028ac998(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  uVar7 = uStack_68;
  func_0x000107c61174();
  uVar8 = uVar7;
  func_0x0001028ac3f0();
  *(undefined8 *)(param_2 + 0x10) = uVar8;
  uVar9 = uVar8;
  func_0x000107c6157c();
  func_0x0001028ac474();
  func_0x000107c61574(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(param_2 + 0x48) = uVar9;
  *param_1 = param_2;
  return;
}



/* Entry: 1027ce4f0; end: 1027ce563;  */

void FUN_1027ce4f0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 1027ce564; end: 1027ce5b7;  */

void FUN_1027ce564(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1027ce5b8; end: 1027ce5bf;  */

undefined8 FUN_1027ce5b8(void)

{
  return 0x1b;
}



/* Entry: 1027ce5c0; end: 1027ce643;  */

void FUN_1027ce5c0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1027ce6c4,param_2,FUN_1027ce6c8,param_2,0x1027ce6f0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1027ce644; end: 1027ce673;  */

undefined ** FUN_1027ce644(void)

{
  return &PTR_DAT_1130668e0;
}



/* Entry: 1027ce674; end: 1027ce693;  */

void FUN_1027ce674(void)

{
  func_0x000107c61168(&PTR_PTR_112ec04c0);
  return;
}



/* Entry: 1027ce694; end: 1027ce6c7;  */

undefined1  [16] FUN_1027ce694(void)

{
  return ZEXT816(0x11054f2f0);
}



/* Entry: 1027ce6c8; end: 1027ce71b;  */

void FUN_1027ce6c8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1027ce71c; end: 1027cecaf;  */

void FUN_1027ce71c(long *param_1,long param_2)

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
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
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
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  FUN_1027cee54();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  func_0x000102882ed0();
  func_0x000107c613fc();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar6 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar7 = uStack_a8;
  func_0x000107c61174(uStack_a8);
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = auStack_70[0];
  func_0x000107c61174();
  uVar12 = uVar11;
  func_0x00010288216c();
  *(undefined8 *)(param_2 + 0x10) = uVar12;
  uVar13 = uVar12;
  func_0x000107c6157c();
  FUN_102882228();
  func_0x000107c61574(uVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  *(undefined8 *)(param_2 + 0x68) = uVar13;
  *param_1 = param_2;
  return;
}



/* Entry: 1027cecb0; end: 1027ced43;  */

void FUN_1027cecb0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
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
  return;
}



/* Entry: 1027ced44; end: 1027ced97;  */

void FUN_1027ced44(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1027ced98; end: 1027ced9f;  */

undefined8 FUN_1027ced98(void)

{
  return 0x1b;
}



/* Entry: 1027ceda0; end: 1027cee23;  */

void FUN_1027ceda0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1027ceea4,param_2,FUN_1027ceea8,param_2,0x1027ceed0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1027cee24; end: 1027cee53;  */

undefined ** FUN_1027cee24(void)

{
  return &PTR_DAT_1130668e0;
}



/* Entry: 1027cee54; end: 1027cee73;  */

void FUN_1027cee54(void)

{
  func_0x000107c61168(&PTR_PTR_112ec05c0);
  return;
}



/* Entry: 1027cee74; end: 1027ceea7;  */

undefined1  [16] FUN_1027cee74(void)

{
  return ZEXT816(0x11054f390);
}



/* Entry: 1027ceea8; end: 1027ceefb;  */

void FUN_1027ceea8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1027ceefc; end: 1027d8f8b;  */

void FUN_1027ceefc(long *param_1,long param_2)

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
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined *puVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  undefined8 uVar88;
  undefined8 uVar89;
  undefined8 uVar90;
  undefined8 uVar91;
  undefined8 uVar92;
  undefined8 uVar93;
  undefined8 uVar94;
  undefined8 uVar95;
  undefined8 uVar96;
  undefined8 uVar97;
  undefined8 uVar98;
  undefined8 uVar99;
  undefined8 uVar100;
  undefined8 uVar101;
  undefined8 uVar102;
  undefined8 uVar103;
  undefined8 uVar104;
  undefined8 uVar105;
  undefined8 uVar106;
  undefined8 uVar107;
  undefined8 uVar108;
  undefined8 uVar109;
  undefined8 uVar110;
  undefined8 uVar111;
  undefined8 uVar112;
  undefined8 uVar113;
  undefined8 uVar114;
  undefined8 uVar115;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
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
  undefined8 uStack_208;
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
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
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
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x000100083b20(&uStack_e0);
  func_0x000100083b20(&uStack_e8);
  func_0x000100083b20(&uStack_f0);
  func_0x000100083b20(&uStack_f8);
  func_0x000100083b20(&uStack_100);
  func_0x000100083b20(&uStack_108);
  func_0x000100083b20(&uStack_110);
  func_0x000100083b20(&uStack_118);
  func_0x000100083b20(&uStack_120);
  func_0x000100083b20(&uStack_128);
  func_0x000100083b20(&uStack_130);
  func_0x000100083b20(&uStack_138);
  func_0x000100083b20(&uStack_140);
  func_0x000100083b20(&uStack_148);
  func_0x000100083b20(&uStack_150);
  func_0x000100083b20(&uStack_158);
  func_0x000100083b20(&uStack_160);
  func_0x000100083b20(&uStack_168);
  func_0x000100083b20(&uStack_170);
  func_0x000100083b20(&uStack_178);
  func_0x000100083b20(&uStack_180);
  func_0x000100083b20(&uStack_188);
  func_0x000100083b20(&uStack_190);
  func_0x000100083b20(&uStack_198);
  func_0x000100083b20(&uStack_1a0);
  func_0x000100083b20(&uStack_1a8);
  func_0x000100083b20(&uStack_1b0);
  func_0x000100083b20(&uStack_1b8);
  func_0x000100083b20(&uStack_1c0);
  func_0x000100083b20(&uStack_1c8);
  func_0x000100083b20(&uStack_1d0);
  func_0x000100083b20(&uStack_1d8);
  func_0x000100083b20(&uStack_1e0);
  func_0x000100083b20(&uStack_1e8);
  func_0x000100083b20(&uStack_1f0);
  func_0x000100083b20(&uStack_1f8);
  func_0x000100083b20(&uStack_200);
  func_0x000100083b20(&uStack_208);
  func_0x000100083b20(&uStack_210);
  func_0x000100083b20(&uStack_218);
  func_0x000100083b20(&uStack_220);
  func_0x000100083b20(&uStack_228);
  func_0x000100083b20(&uStack_230);
  func_0x000100083b20(&uStack_238);
  func_0x000100083b20(&uStack_240);
  func_0x000100083b20(&uStack_248);
  func_0x000100083b20(&uStack_250);
  func_0x000100083b20(&uStack_258);
  func_0x000100083b20(&uStack_260);
  func_0x000100083b20(&uStack_268);
  func_0x000100083b20(&uStack_270);
  func_0x000100083b20(&uStack_278);
  func_0x000100083b20(&uStack_280);
  func_0x000100083b20(&uStack_288);
  func_0x000100083b20(&uStack_290);
  func_0x000100083b20(&uStack_298);
  func_0x000100083b20(&uStack_2a0);
  func_0x000100083b20(&uStack_2a8);
  func_0x000100083b20(&uStack_2b0);
  func_0x000100083b20(&uStack_2b8);
  func_0x000100083b20(&uStack_2c0);
  func_0x000100083b20(&uStack_2c8);
  func_0x000100083b20(&uStack_2d0);
  func_0x000100083b20(&uStack_2d8);
  func_0x000100083b20(&uStack_2e0);
  func_0x000100083b20(&uStack_2e8);
  func_0x000100083b20(&uStack_2f0);
  func_0x000100083b20(&uStack_2f8);
  func_0x000100083b20(&uStack_300);
  func_0x000100083b20(&uStack_308);
  func_0x000100083b20(&uStack_310);
  func_0x000100083b20(&uStack_318);
  func_0x000100083b20(&uStack_320);
  func_0x000100083b20(&uStack_328);
  func_0x000100083b20(&uStack_330);
  func_0x000100083b20(&uStack_338);
  func_0x000100083b20(&uStack_340);
  func_0x000100083b20(&uStack_348);
  func_0x000100083b20(&uStack_350);
  func_0x000100083b20(&uStack_358);
  func_0x000100083b20(&uStack_360);
  func_0x000100083b20(&uStack_368);
  func_0x000100083b20(&uStack_370);
  func_0x000100083b20(&uStack_378);
  func_0x000100083b20(&uStack_380);
  func_0x000100083b20(&uStack_388);
  func_0x000100083b20(&uStack_390);
  func_0x000100083b20(&uStack_398);
  func_0x000100083b20(&uStack_3a0);
  func_0x000100083b20(&uStack_3a8);
  func_0x000100083b20(&uStack_3b0);
  func_0x000100083b20(&uStack_3b8);
  func_0x000100083b20(&uStack_3c0);
  func_0x000100083b20(&uStack_3c8);
  func_0x000100083b20(&uStack_3d0);
  func_0x000100083b20(&uStack_3d8);
  func_0x000100083b20(&uStack_3e0);
  func_0x000100083b20(&uStack_3e8);
  func_0x000100083b20(&uStack_3f0);
  func_0x000100083b20(&uStack_3f8);
  func_0x000100083b20(&uStack_400);
  func_0x000100083b20(&uStack_408);
  func_0x000100083b20(&uStack_410);
  func_0x000100083b20(&uStack_418);
  func_0x000100083b20(&uStack_420);
  func_0x000100083b20(&uStack_428);
  func_0x000100083b20(&uStack_430);
  func_0x000100083b20(&uStack_438);
  func_0x000100083b20(&uStack_440);
  func_0x000100083b20(&uStack_448);
  func_0x000100083b20(&uStack_450);
  func_0x000100083b20(&uStack_458);
  func_0x000100083b20(&uStack_460);
  func_0x000100083b20(&uStack_468);
  func_0x000100083b20(&uStack_470);
  func_0x000100083b20(&uStack_478);
  func_0x000100083b20(&uStack_480);
  func_0x000100083b20(&uStack_488);
  FUN_1027d94ec();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0xd0) = uStack_78;
  *(undefined8 *)(param_2 + 0xd8) = uStack_80;
  *(undefined8 *)(param_2 + 0xe0) = uStack_88;
  *(undefined8 *)(param_2 + 0xe8) = uStack_90;
  *(undefined8 *)(param_2 + 0xf0) = uStack_98;
  *(undefined8 *)(param_2 + 0xf8) = uStack_a0;
  *(undefined8 *)(param_2 + 0x100) = uStack_a8;
  *(undefined8 *)(param_2 + 0x108) = uStack_b0;
  *(undefined8 *)(param_2 + 0x110) = uStack_b8;
  *(undefined8 *)(param_2 + 0x118) = uStack_c0;
  *(undefined8 *)(param_2 + 0x120) = uStack_c8;
  *(undefined8 *)(param_2 + 0x128) = uStack_d0;
  *(undefined8 *)(param_2 + 0x130) = uStack_d8;
  *(undefined8 *)(param_2 + 0x138) = uStack_e0;
  *(undefined8 *)(param_2 + 0x140) = uStack_e8;
  *(undefined8 *)(param_2 + 0x148) = uStack_f0;
  *(undefined8 *)(param_2 + 0x150) = uStack_f8;
  *(undefined8 *)(param_2 + 0x158) = uStack_100;
  *(undefined8 *)(param_2 + 0x160) = uStack_108;
  *(undefined8 *)(param_2 + 0x168) = uStack_110;
  *(undefined8 *)(param_2 + 0x170) = uStack_118;
  *(undefined8 *)(param_2 + 0x178) = uStack_120;
  *(undefined8 *)(param_2 + 0x180) = uStack_128;
  *(undefined8 *)(param_2 + 0x188) = uStack_130;
  *(undefined8 *)(param_2 + 400) = uStack_138;
  *(undefined8 *)(param_2 + 0x198) = uStack_140;
  *(undefined8 *)(param_2 + 0x1a0) = uStack_148;
  *(undefined8 *)(param_2 + 0x1a8) = uStack_150;
  *(undefined8 *)(param_2 + 0x1b0) = uStack_158;
  *(undefined8 *)(param_2 + 0x1b8) = uStack_160;
  *(undefined8 *)(param_2 + 0x1c0) = uStack_168;
  *(undefined8 *)(param_2 + 0x1c8) = uStack_170;
  *(undefined8 *)(param_2 + 0x1d0) = uStack_178;
  *(undefined8 *)(param_2 + 0x1d8) = uStack_180;
  *(undefined8 *)(param_2 + 0x1e0) = uStack_188;
  *(undefined8 *)(param_2 + 0x1e8) = uStack_190;
  *(undefined8 *)(param_2 + 0x1f0) = uStack_198;
  *(undefined8 *)(param_2 + 0x1f8) = uStack_1a0;
  *(undefined8 *)(param_2 + 0x200) = uStack_1a8;
  *(undefined8 *)(param_2 + 0x208) = uStack_1b0;
  *(undefined8 *)(param_2 + 0x210) = uStack_1b8;
  *(undefined8 *)(param_2 + 0x218) = uStack_1c0;
  *(undefined8 *)(param_2 + 0x220) = uStack_1c8;
  *(undefined8 *)(param_2 + 0x228) = uStack_1d0;
  *(undefined8 *)(param_2 + 0x230) = uStack_1d8;
  *(undefined8 *)(param_2 + 0x238) = uStack_1e0;
  *(undefined8 *)(param_2 + 0x240) = uStack_1e8;
  *(undefined8 *)(param_2 + 0x248) = uStack_1f0;
  *(undefined8 *)(param_2 + 0x250) = uStack_1f8;
  *(undefined8 *)(param_2 + 600) = uStack_200;
  *(undefined8 *)(param_2 + 0x260) = uStack_208;
  *(undefined8 *)(param_2 + 0x268) = uStack_210;
  *(undefined8 *)(param_2 + 0x270) = uStack_218;
  *(undefined8 *)(param_2 + 0x278) = uStack_220;
  *(undefined8 *)(param_2 + 0x280) = uStack_228;
  *(undefined8 *)(param_2 + 0x288) = uStack_230;
  *(undefined8 *)(param_2 + 0x290) = uStack_238;
  *(undefined8 *)(param_2 + 0x298) = uStack_240;
  *(undefined8 *)(param_2 + 0x2a0) = uStack_248;
  *(undefined8 *)(param_2 + 0x2a8) = uStack_250;
  *(undefined8 *)(param_2 + 0x2b0) = uStack_258;
  *(undefined8 *)(param_2 + 0x2b8) = uStack_260;
  *(undefined8 *)(param_2 + 0x2c0) = uStack_268;
  *(undefined8 *)(param_2 + 0x2c8) = uStack_270;
  *(undefined8 *)(param_2 + 0x2d0) = uStack_278;
  *(undefined8 *)(param_2 + 0x2d8) = uStack_280;
  *(undefined8 *)(param_2 + 0x2e0) = uStack_288;
  *(undefined8 *)(param_2 + 0x2e8) = uStack_290;
  *(undefined8 *)(param_2 + 0x2f0) = uStack_298;
  *(undefined8 *)(param_2 + 0x2f8) = uStack_2a0;
  *(undefined8 *)(param_2 + 0x300) = uStack_2a8;
  *(undefined8 *)(param_2 + 0x308) = uStack_2b0;
  *(undefined8 *)(param_2 + 0x310) = uStack_2b8;
  *(undefined8 *)(param_2 + 0x318) = uStack_2c0;
  *(undefined8 *)(param_2 + 800) = uStack_2c8;
  *(undefined8 *)(param_2 + 0x328) = uStack_2d0;
  *(undefined8 *)(param_2 + 0x330) = uStack_2d8;
  *(undefined8 *)(param_2 + 0x338) = uStack_2e0;
  *(undefined8 *)(param_2 + 0x340) = uStack_2e8;
  *(undefined8 *)(param_2 + 0x348) = uStack_2f0;
  *(undefined8 *)(param_2 + 0x350) = uStack_2f8;
  *(undefined8 *)(param_2 + 0x358) = uStack_300;
  *(undefined8 *)(param_2 + 0x360) = uStack_308;
  *(undefined8 *)(param_2 + 0x368) = uStack_310;
  *(undefined8 *)(param_2 + 0x370) = uStack_318;
  *(undefined8 *)(param_2 + 0x378) = uStack_320;
  *(undefined8 *)(param_2 + 0x380) = uStack_328;
  *(undefined8 *)(param_2 + 0x388) = uStack_330;
  *(undefined8 *)(param_2 + 0x390) = uStack_338;
  *(undefined8 *)(param_2 + 0x398) = uStack_340;
  *(undefined8 *)(param_2 + 0x3a0) = uStack_348;
  *(undefined8 *)(param_2 + 0x3a8) = uStack_350;
  *(undefined8 *)(param_2 + 0x3b0) = uStack_358;
  *(undefined8 *)(param_2 + 0x3b8) = uStack_360;
  *(undefined8 *)(param_2 + 0x3c0) = uStack_368;
  *(undefined8 *)(param_2 + 0x3c8) = uStack_370;
  *(undefined8 *)(param_2 + 0x3d0) = uStack_378;
  *(undefined8 *)(param_2 + 0x3d8) = uStack_380;
  *(undefined8 *)(param_2 + 0x3e0) = uStack_388;
  *(undefined8 *)(param_2 + 1000) = uStack_390;
  *(undefined8 *)(param_2 + 0x3f0) = uStack_398;
  *(undefined8 *)(param_2 + 0x3f8) = uStack_3a0;
  *(undefined8 *)(param_2 + 0x400) = uStack_3a8;
  *(undefined8 *)(param_2 + 0x408) = uStack_3b0;
  *(undefined8 *)(param_2 + 0x410) = uStack_3b8;
  *(undefined8 *)(param_2 + 0x418) = uStack_3c0;
  *(undefined8 *)(param_2 + 0x420) = uStack_3c8;
  *(undefined8 *)(param_2 + 0x428) = uStack_3d0;
  func_0x0001000285a8(0x112e51dd0,&UNK_10da52040);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c61174();
  uVar11 = uStack_c8;
  func_0x000107c61174();
  uVar12 = uStack_d0;
  func_0x000107c61174();
  uVar13 = uStack_d8;
  func_0x000107c61174();
  uVar14 = uStack_e0;
  func_0x000107c61174();
  uVar15 = uStack_e8;
  func_0x000107c61174();
  uVar16 = uStack_f0;
  func_0x000107c61174();
  uVar17 = uStack_f8;
  func_0x000107c61174();
  uVar18 = uStack_100;
  func_0x000107c61174();
  uVar19 = uStack_108;
  func_0x000107c61174();
  uVar20 = uStack_110;
  func_0x000107c61174();
  uVar21 = uStack_118;
  func_0x000107c61174();
  uVar22 = uStack_120;
  func_0x000107c61174();
  uVar23 = uStack_128;
  func_0x000107c61174();
  uVar24 = uStack_130;
  func_0x000107c61174();
  uVar25 = uStack_138;
  func_0x000107c61174();
  uVar26 = uStack_140;
  func_0x000107c61174();
  uVar27 = uStack_148;
  func_0x000107c61174();
  uVar28 = uStack_150;
  func_0x000107c61174();
  uVar29 = uStack_158;
  func_0x000107c61174();
  uVar30 = uStack_160;
  func_0x000107c61174();
  uVar31 = uStack_168;
  func_0x000107c61174();
  uVar32 = uStack_170;
  func_0x000107c61174();
  uVar33 = uStack_178;
  func_0x000107c61174();
  uVar34 = uStack_180;
  func_0x000107c61174();
  uVar35 = uStack_188;
  func_0x000107c61174();
  uVar36 = uStack_190;
  func_0x000107c61174();
  uVar37 = uStack_198;
  func_0x000107c61174();
  uVar38 = uStack_1a0;
  func_0x000107c61174();
  uVar39 = uStack_1a8;
  func_0x000107c61174();
  uVar40 = uStack_1b0;
  func_0x000107c61174();
  uVar41 = uStack_1b8;
  func_0x000107c61174();
  uVar42 = uStack_1c0;
  func_0x000107c61174();
  uVar43 = uStack_1c8;
  func_0x000107c61174();
  uVar44 = uStack_1d0;
  func_0x000107c61174();
  uVar45 = uStack_1d8;
  func_0x000107c61174();
  func_0x000107c615f0(uStack_1e0);
  uVar50 = uStack_1e8;
  func_0x000107c61174();
  uVar51 = uStack_1f0;
  func_0x000107c61174();
  uVar52 = uStack_1f8;
  func_0x000107c61174();
  uVar53 = uStack_200;
  func_0x000107c61174();
  uVar54 = uStack_208;
  func_0x000107c61174();
  uVar55 = uStack_210;
  func_0x000107c61174();
  uVar56 = uStack_218;
  func_0x000107c61174();
  uVar57 = uStack_220;
  func_0x000107c61174();
  uVar58 = uStack_228;
  func_0x000107c61174();
  uVar59 = uStack_230;
  func_0x000107c61174();
  uVar60 = uStack_238;
  func_0x000107c61174();
  uVar61 = uStack_240;
  func_0x000107c61174();
  uVar62 = uStack_248;
  func_0x000107c61174();
  uVar63 = uStack_250;
  func_0x000107c61174();
  uVar64 = uStack_258;
  func_0x000107c61174();
  uVar65 = uStack_260;
  func_0x000107c61174();
  uVar66 = uStack_268;
  func_0x000107c61174();
  uVar67 = uStack_270;
  func_0x000107c61174();
  uVar68 = uStack_278;
  func_0x000107c61174();
  uVar69 = uStack_280;
  func_0x000107c61174();
  uVar70 = uStack_288;
  func_0x000107c61174();
  uVar71 = uStack_290;
  func_0x000107c61174();
  uVar72 = uStack_298;
  func_0x000107c61174();
  uVar73 = uStack_2a0;
  func_0x000107c61174();
  uVar74 = uStack_2a8;
  func_0x000107c61174();
  uVar75 = uStack_2b0;
  func_0x000107c61174();
  uVar76 = uStack_2b8;
  func_0x000107c61174();
  uVar77 = uStack_2c0;
  func_0x000107c61174();
  uVar78 = uStack_2c8;
  func_0x000107c61174();
  uVar79 = uStack_2d0;
  func_0x000107c61174();
  uVar80 = uStack_2d8;
  func_0x000107c61174();
  uVar81 = uStack_2e0;
  func_0x000107c61174();
  uVar82 = uStack_2e8;
  func_0x000107c61174();
  uVar83 = uStack_2f0;
  func_0x000107c61174();
  uVar84 = uStack_2f8;
  func_0x000107c61174();
  uVar85 = uStack_300;
  func_0x000107c61174();
  uVar86 = uStack_308;
  func_0x000107c61174();
  uVar87 = uStack_310;
  func_0x000107c61174();
  uVar88 = uStack_318;
  func_0x000107c61174();
  uVar89 = uStack_320;
  func_0x000107c61174();
  uVar90 = uStack_328;
  func_0x000107c61174();
  uVar91 = uStack_330;
  func_0x000107c61174();
  uVar92 = uStack_338;
  func_0x000107c61174();
  uVar93 = uStack_340;
  func_0x000107c61174();
  uVar94 = uStack_348;
  func_0x000107c61174();
  uVar95 = uStack_350;
  func_0x000107c61174();
  uVar96 = uStack_358;
  func_0x000107c61174();
  uVar97 = uStack_360;
  func_0x000107c61174();
  uVar98 = uStack_368;
  func_0x000107c61174();
  uVar99 = uStack_370;
  func_0x000107c61174();
  uVar100 = uStack_378;
  func_0x000107c61174();
  uVar101 = uStack_380;
  func_0x000107c61174();
  uVar102 = uStack_388;
  func_0x000107c61174();
  uVar103 = uStack_390;
  func_0x000107c61174();
  uVar104 = uStack_398;
  func_0x000107c61174();
  uVar105 = uStack_3a0;
  func_0x000107c61174();
  uVar106 = uStack_3a8;
  func_0x000107c61174();
  uVar107 = uStack_3b0;
  func_0x000107c61174();
  uVar108 = uStack_3b8;
  func_0x000107c61174();
  uVar109 = uStack_3c0;
  func_0x000107c61174();
  uVar110 = uStack_3c8;
  func_0x000107c61174();
  uVar111 = uStack_3d0;
  func_0x000107c61174();
  uVar48 = uStack_3d8;
  func_0x000107c6157c();
  func_0x0001003b3b80();
  puVar46 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar48);
  *(undefined **)(param_2 + 0x18) = puVar46;
  func_0x0001000285a8(0x112e51d40,&UNK_10dade290);
  func_0x000107c610f8();
  uVar48 = uStack_3e0;
  func_0x000107c6157c(uStack_3e0);
  func_0x00010017da58();
  puVar46 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar48);
  *(undefined **)(param_2 + 0x20) = puVar46;
  func_0x0001000285a8(0x112ec0678,&UNK_10dade298);
  func_0x000107c610f8();
  uVar48 = uStack_3e8;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar46 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar48);
  *(undefined **)(param_2 + 0x28) = puVar46;
  func_0x0001000285a8(0x112ec0680,&UNK_10dade2a0);
  func_0x000107c610f8();
  uVar48 = uStack_3f0;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar46 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar48);
  *(undefined **)(param_2 + 0x30) = puVar46;
  func_0x0001000285a8(0x112ec0688,&UNK_10dade2a8);
  func_0x000107c610f8();
  uVar48 = uStack_3f8;
  func_0x000107c6157c(uStack_3f8);
  func_0x00010017da58();
  puVar46 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar48);
  *(undefined **)(param_2 + 0x38) = puVar46;
  func_0x0001000285a8(0x112e4ccf0,&UNK_10daaf8a0);
  func_0x000107c610f8();
  uVar48 = uStack_400;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar46 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar48);
  *(undefined **)(param_2 + 0x40) = puVar46;
  func_0x0001000285a8(0x112e51db8,&UNK_10da52030);
  func_0x000107c610f8();
  uVar48 = uStack_408;
  func_0x000107c6157c(uStack_408);
  func_0x00010017da58();
  puVar46 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar48);
  *(undefined **)(param_2 + 0x48) = puVar46;
  func_0x0001000285a8(0x112ec0690,&UNK_10dade2b0);
  func_0x000107c610f8();
  uVar48 = uStack_410;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar46 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar48);
  *(undefined **)(param_2 + 0x50) = puVar46;
  func_0x0001000285a8(0x112ec0698,&UNK_10dade2b8);
  func_0x000107c610f8();
  uVar48 = uStack_418;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar46 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar48);
  *(undefined **)(param_2 + 0x58) = puVar46;
  func_0x0001000285a8(0x112ec06a0,&UNK_10dade2c0);
  func_0x000107c610f8();
  uVar48 = uStack_420;
  func_0x000107c6157c();
  func_0x0001003b3b80();
  puVar46 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar48);
  *(undefined **)(param_2 + 0x60) = puVar46;
  func_0x0001000285a8(0x112ec06a8,&UNK_10dae4c30);
  func_0x000107c610f8();
  uVar48 = uStack_428;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar46 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar48);
  *(undefined **)(param_2 + 0x68) = puVar46;
  func_0x0001000285a8(0x112e4ccd8,&UNK_10da46ce0);
  func_0x000107c610f8();
  uVar48 = uStack_430;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar46 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar48);
  *(undefined **)(param_2 + 0x70) = puVar46;
  func_0x0001000285a8(0x112ec06b0,&UNK_10dade2c8);
  func_0x000107c610f8();
  uVar48 = uStack_438;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar46 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar48);
  *(undefined **)(param_2 + 0x78) = puVar46;
  func_0x0001000285a8(0x112dafb90,&UNK_10d958cf0);
  func_0x000107c610f8();
  uVar48 = uStack_440;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar46 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar48);
  *(undefined **)(param_2 + 0x80) = puVar46;
  func_0x0001000285a8(0x112e51dc8,&UNK_10da52038);
  func_0x000107c610f8();
  uVar48 = uStack_448;
  func_0x000107c6157c(uStack_448);
  func_0x00010017da58();
  puVar46 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar48);
  *(undefined **)(param_2 + 0x88) = puVar46;
  func_0x0001000285a8(0x112ec06b8,&UNK_10dade2d0);
  func_0x000107c610f8();
  uVar48 = uStack_450;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar46 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar48);
  *(undefined **)(param_2 + 0x90) = puVar46;
  func_0x0001000285a8(0x112e51da8,&UNK_10da52020);
  func_0x000107c610f8();
  uVar48 = uStack_458;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar46 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar48);
  *(undefined **)(param_2 + 0x98) = puVar46;
  func_0x0001000285a8(0x112ec06c0,&UNK_10dade2e0);
  func_0x000107c610f8();
  uVar48 = uStack_460;
  func_0x000107c6157c(uStack_460);
  func_0x00010017da58();
  puVar46 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar48);
  *(undefined **)(param_2 + 0xa0) = puVar46;
  func_0x0001000285a8(0x112e84db0,&UNK_10da956d8);
  func_0x000107c610f8();
  uVar48 = uStack_468;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar46 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar48);
  *(undefined **)(param_2 + 0xa8) = puVar46;
  func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
  func_0x000107c610f8();
  uVar48 = uStack_470;
  func_0x000107c6157c(uStack_470);
  func_0x00010017da58();
  puVar46 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar48);
  *(undefined **)(param_2 + 0xb0) = puVar46;
  func_0x0001000285a8(0x112ec06c8,&UNK_10dade2e8);
  func_0x000107c610f8();
  uVar48 = uStack_478;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar46 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar48);
  *(undefined **)(param_2 + 0xb8) = puVar46;
  func_0x0001000285a8(0x112ec06d0,&UNK_10dade2f0);
  func_0x000107c610f8();
  uVar48 = uStack_480;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar46 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar48);
  *(undefined **)(param_2 + 0xc0) = puVar46;
  func_0x0001000285a8(0x112ec06d8,&UNK_10dade2f8);
  func_0x000107c610f8();
  uVar48 = uStack_488;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar46 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar48);
  *(undefined **)(param_2 + 200) = puVar46;
  puVar46 = PTR_PTR_1126ab038;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar46;
  func_0x000107c61174();
  uVar47 = auStack_70[0];
  func_0x000107c61174();
  uVar48 = 0x706f635374616863;
  func_0x000107c5fadc(0x706f635374616863,0xe900000000000065);
  func_0x000107c5a49c(puVar46);
  func_0x000107c61170(puVar46);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar48);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar49 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar49);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar114 = 0xd000000000000013;
  uVar48 = uVar114;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0bf160);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar49);
  uVar112 = 0xd000000000000014;
  uVar48 = uVar112;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef2d430);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = uVar112;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef2b6f0);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef32790);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar49);
  uVar48 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef2b8b0);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef2aa20);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar115 = 0xd000000000000016;
  uVar48 = uVar115;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f00a780);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar48);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar49 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef134e0);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar49);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar113 = 0xd000000000000010;
  uVar48 = uVar113;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar48);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar112);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar49 = 0x72655370756f7267;
  func_0x000107c5fadc(0x72655370756f7267,0xed00007365636976);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar49);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = uVar114;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = uVar113;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = uVar113;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar48);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar48);
  func_0x000107c5fadc(0xd000000000000016,0x800000010f0bf180);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar115);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc32e0);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar112 = 0xd000000000000011;
  uVar48 = uVar112;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef21bd0);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar48);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar49 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar49);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar49 = 0x726553646e756f73;
  func_0x000107c5fadc(0x726553646e756f73,0xed00007365636976);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar49);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = uVar113;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f00ac80);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar48);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar49 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef27e80);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar49);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar49 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f00a520);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar49);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef2a530);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar115 = 0xd000000000000012;
  uVar48 = uVar115;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef120a0);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f03ef90);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef2b9e0);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar49);
  uVar48 = uVar114;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef27f00);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar48);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar49 = 0x65536b6165727473;
  func_0x000107c5fadc(0x65536b6165727473,0xee00736563697672);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar49);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef35740);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef29550);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar48);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar49 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar49);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar48);
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar113);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2a4b0);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar48);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar49 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef2dce0);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar49);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0bf1a0);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar113 = 0xd000000000000014;
  uVar48 = uVar113;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar48);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar49 = 0x7672655370616e73;
  func_0x000107c5fadc(0x7672655370616e73,0xec00000073656369);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar49);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = uVar115;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef2e280);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef2a780);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar49);
  uVar48 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef3c720);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar43);
  func_0x000107c61170(uVar48);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar49 = 0x767265536b6c6174;
  func_0x000107c5fadc(0x767265536b6c6174,0xec00000073656369);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar49);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar49 = 0x767265536d617073;
  func_0x000107c5fadc(0x767265536d617073,0xec00000073656369);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar49);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c615f0(uStack_1e0);
  func_0x000107c61174();
  uVar48 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0bf1c0);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c615e8(uStack_1e0);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010efc32c0);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar50);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar49);
  uVar48 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef2b450);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar51);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f05c0d0);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar48);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar49 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar53);
  func_0x000107c61170(uVar49);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar112);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar49 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f05c510);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar55);
  func_0x000107c61170(uVar49);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f05c3c0);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar56);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f0bf1e0);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0bf200);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar49);
  uVar48 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef2b9a0);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar59);
  func_0x000107c61170(uVar48);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar49 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef27e20);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar60);
  func_0x000107c61170(uVar49);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = uVar113;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0bf220);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar61);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0bf240);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar62);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f0bf260);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010f0bf290);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f0bf2c0);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar48);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000013,0x800000010f0bf2f0);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar114);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f0bf310);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar67);
  func_0x000107c61170(uVar48);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar49 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef27e00);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar68);
  func_0x000107c61170(uVar49);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar69);
  func_0x000107c61170(uVar48);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar49 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef26270);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar70);
  func_0x000107c61170(uVar49);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef28020);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar71);
  func_0x000107c61170(uVar48);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar48);
  uVar49 = 0x53747865746e6f63;
  func_0x000107c5fadc(0x53747865746e6f63,0xef73656369767265);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar72);
  func_0x000107c61170(uVar49);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar49 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f0bf340);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar73);
  func_0x000107c61170(uVar49);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc33b0);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar74);
  func_0x000107c61170(uVar48);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar49 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0bf360);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar75);
  func_0x000107c61170(uVar49);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar49 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f00a690);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar76);
  func_0x000107c61170(uVar49);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar49 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f0bf380);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar77);
  func_0x000107c61170(uVar49);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = uVar113;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0bf3a0);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar78);
  func_0x000107c61170(uVar48);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000012,0x800000010f0bf3c0);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar79);
  func_0x000107c61170(uVar115);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f05c2a0);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar80);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f05c590);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar81);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f0bf3e0);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar82);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd00000000000002f;
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f0bf410);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f0ad660);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar84);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar85);
  func_0x000107c61170(uVar48);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar49 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar86);
  func_0x000107c61170(uVar49);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar49);
  uVar48 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef20360);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef19380);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar88);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f0bf440);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar89);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0bf460);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar90);
  func_0x000107c61170(uVar48);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar49 = 0x5370757472617473;
  func_0x000107c5fadc(0x5370757472617473,0xef73656369767265);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar91);
  func_0x000107c61170(uVar49);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar49);
  uVar48 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0bf480);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar92);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f0bf4a0);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar93);
  func_0x000107c61170(uVar48);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar49 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef2a4d0);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar94);
  func_0x000107c61170(uVar49);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar115 = 0xd000000000000016;
  uVar48 = uVar115;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f0bf4d0);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar95);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f0bf4f0);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar96);
  func_0x000107c61170(uVar48);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1a530);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar113);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f00ad10);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar98);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar99);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar49);
  uVar48 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f0bf510);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar100);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f0bf540);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar101);
  func_0x000107c61170(uVar48);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar49 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef13320);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar102);
  func_0x000107c61170(uVar49);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar49 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar103);
  func_0x000107c61170(uVar49);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = uVar115;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar104);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar49);
  uVar48 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef31290);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar105);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0bf560);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar106);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef312c0);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f0bf580);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar108);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010efc34f0);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar109);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = uVar115;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2b260);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar110);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = uVar115;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f0bf5b0);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar111);
  func_0x000107c61170(uVar48);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  uVar49 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar112 = uVar115;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f05c850);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar112);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  uVar112 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174(uVar112);
  uVar48 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f05c630);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar112);
  func_0x000107c61170(uVar48);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  uVar49 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar112 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f0bf5d0);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar112);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  uVar112 = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0bf5f0);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar112);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  uVar112 = *(undefined8 *)(param_2 + 0x38);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef343b0);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar112);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  uVar112 = *(undefined8 *)(param_2 + 0x40);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef28160);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar112);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  uVar112 = *(undefined8 *)(param_2 + 0x48);
  func_0x000107c61174(uVar49);
  func_0x000107c61174(uVar112);
  uVar48 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f05c810);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar112);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  uVar112 = *(undefined8 *)(param_2 + 0x50);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0bf610);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar112);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  uVar112 = *(undefined8 *)(param_2 + 0x58);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f0bf630);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar112);
  func_0x000107c61170(uVar48);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  uVar49 = *(undefined8 *)(param_2 + 0x60);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar112 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f0bf660);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar112);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  uVar112 = *(undefined8 *)(param_2 + 0x68);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f0759f0);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar112);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  uVar112 = *(undefined8 *)(param_2 + 0x70);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = uVar115;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef28140);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar112);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  uVar112 = *(undefined8 *)(param_2 + 0x78);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2b030);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar112);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  uVar112 = *(undefined8 *)(param_2 + 0x80);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef2ada0);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar112);
  func_0x000107c61170(uVar48);
  uVar48 = *(undefined8 *)(param_2 + 0x10);
  uVar49 = *(undefined8 *)(param_2 + 0x88);
  func_0x000107c61174();
  func_0x000107c61174(uVar49);
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2b640);
  func_0x000107c5a49c(uVar48);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar115);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  uVar112 = *(undefined8 *)(param_2 + 0x90);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0bf680);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar112);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  uVar112 = *(undefined8 *)(param_2 + 0x98);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f05c7f0);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar112);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  uVar112 = *(undefined8 *)(param_2 + 0xa0);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f0bf6a0);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar112);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  uVar112 = *(undefined8 *)(param_2 + 0xa8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f089460);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar112);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  uVar112 = *(undefined8 *)(param_2 + 0xb0);
  func_0x000107c61174(uVar49);
  func_0x000107c61174(uVar112);
  uVar48 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef20410);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar112);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  uVar112 = *(undefined8 *)(param_2 + 0xb8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f0bf6d0);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar112);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  uVar112 = *(undefined8 *)(param_2 + 0xc0);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f0bf6f0);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar112);
  func_0x000107c61170(uVar48);
  uVar49 = *(undefined8 *)(param_2 + 0x10);
  uVar112 = *(undefined8 *)(param_2 + 200);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar48 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f0bf720);
  func_0x000107c5a49c(uVar49);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar112);
  func_0x000107c61170(uVar48);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar43);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar45);
  func_0x000107c615e8(uStack_1e0);
  func_0x000107c61170(uVar50);
  func_0x000107c61170(uVar51);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar53);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar55);
  func_0x000107c61170(uVar56);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar59);
  func_0x000107c61170(uVar60);
  func_0x000107c61170(uVar61);
  func_0x000107c61170(uVar62);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar67);
  func_0x000107c61170(uVar68);
  func_0x000107c61170(uVar69);
  func_0x000107c61170(uVar70);
  func_0x000107c61170(uVar71);
  func_0x000107c61170(uVar72);
  func_0x000107c61170(uVar73);
  func_0x000107c61170(uVar74);
  func_0x000107c61170(uVar75);
  func_0x000107c61170(uVar76);
  func_0x000107c61170(uVar77);
  func_0x000107c61170(uVar78);
  func_0x000107c61170(uVar79);
  func_0x000107c61170(uVar80);
  func_0x000107c61170(uVar81);
  func_0x000107c61170(uVar82);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar84);
  func_0x000107c61170(uVar85);
  func_0x000107c61170(uVar86);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar88);
  func_0x000107c61170(uVar89);
  func_0x000107c61170(uVar90);
  func_0x000107c61170(uVar91);
  func_0x000107c61170(uVar92);
  func_0x000107c61170(uVar93);
  func_0x000107c61170(uVar94);
  func_0x000107c61170(uVar95);
  func_0x000107c61170(uVar96);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar98);
  func_0x000107c61170(uVar99);
  func_0x000107c61170(uVar100);
  func_0x000107c61170(uVar101);
  func_0x000107c61170(uVar102);
  func_0x000107c61170(uVar103);
  func_0x000107c61170(uVar104);
  func_0x000107c61170(uVar105);
  func_0x000107c61170(uVar106);
  func_0x000107c61170(uVar107);
  func_0x000107c61170(uVar108);
  func_0x000107c61170(uVar109);
  func_0x000107c61170(uVar110);
  func_0x000107c61170(uVar111);
  func_0x000107c61574(uStack_3d8);
  func_0x000107c61574(uStack_3e0);
  func_0x000107c61574(uStack_3e8);
  func_0x000107c61574(uStack_3f0);
  func_0x000107c61574(uStack_3f8);
  func_0x000107c61574(uStack_400);
  func_0x000107c61574(uStack_408);
  func_0x000107c61574(uStack_410);
  func_0x000107c61574(uStack_418);
  func_0x000107c61574(uStack_420);
  func_0x000107c61574(uStack_428);
  func_0x000107c61574(uStack_430);
  func_0x000107c61574(uStack_438);
  func_0x000107c61574(uStack_440);
  func_0x000107c61574(uStack_448);
  func_0x000107c61574(uStack_450);
  func_0x000107c61574(uStack_458);
  func_0x000107c61574(uStack_460);
  func_0x000107c61574(uStack_468);
  func_0x000107c61574(uStack_470);
  func_0x000107c61574(uStack_478);
  func_0x000107c61574(uStack_480);
  func_0x000107c61574(uStack_488);
  *param_1 = param_2;
  return;
}



/* Entry: 1027d8f8c; end: 1027d93df;  */

void FUN_1027d8f8c(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x318));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 800));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x328));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x330));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x338));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x340));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x348));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x350));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x358));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x360));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x368));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x370));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x378));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x380));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x388));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x390));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x398));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x3a0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x3a8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x3b0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x3b8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x3c0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x3c8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x3d0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x3d8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x3e0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 1000));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x3f0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x3f8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x400));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x408));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x410));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x418));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x420));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x428));
  return;
}



/* Entry: 1027d93e0; end: 1027d93e7;  */

undefined8 FUN_1027d93e0(void)

{
  return 0x1b;
}



/* Entry: 1027d93e8; end: 1027d946b;  */

void FUN_1027d93e8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1027d952c,param_2,FUN_1027d9530,param_2,FUN_1027d9558,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1027d946c; end: 1027d94bb;  */

undefined8 FUN_1027d946c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1027d94bc; end: 1027d94eb;  */

undefined ** FUN_1027d94bc(void)

{
  return &PTR_DAT_1130668e0;
}



/* Entry: 1027d94ec; end: 1027d950b;  */

void FUN_1027d94ec(void)

{
  func_0x000107c61168(&PTR_PTR_112ec0748);
  return;
}



/* Entry: 1027d950c; end: 1027d952f;  */

undefined1  [16] FUN_1027d950c(void)

{
  return ZEXT816(0x11054f430);
}



/* Entry: 1027d9530; end: 1027d9557;  */

void FUN_1027d9530(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1027d9558; end: 1027d955f;  */

undefined8 FUN_1027d9558(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1027d9560; end: 1027d9927;  */

void FUN_1027d9560(long *param_1,long param_2)

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
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  FUN_1027d9aac();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  FUN_10287bb98(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  uVar7 = uStack_68;
  func_0x000107c61174();
  uVar8 = uVar7;
  func_0x00010287b3a0();
  *(undefined8 *)(param_2 + 0x10) = uVar8;
  uVar9 = uVar8;
  func_0x000107c6157c();
  FUN_10287b51c();
  func_0x000107c61574(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(param_2 + 0x48) = uVar9;
  *param_1 = param_2;
  return;
}



/* Entry: 1027d9928; end: 1027d999b;  */

void FUN_1027d9928(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 1027d999c; end: 1027d99ef;  */

void FUN_1027d999c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1027d99f0; end: 1027d99f7;  */

undefined8 FUN_1027d99f0(void)

{
  return 0x1b;
}



/* Entry: 1027d99f8; end: 1027d9a7b;  */

void FUN_1027d99f8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1027d9afc,param_2,FUN_1027d9b00,param_2,0x1027d9b28,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1027d9a7c; end: 1027d9aab;  */

undefined ** FUN_1027d9a7c(void)

{
  return &PTR_DAT_1130668e0;
}



/* Entry: 1027d9aac; end: 1027d9acb;  */

void FUN_1027d9aac(void)

{
  func_0x000107c61168(&PTR_PTR_112ec0c28);
  return;
}



/* Entry: 1027d9acc; end: 1027d9aff;  */

undefined1  [16] FUN_1027d9acc(void)

{
  return ZEXT816(0x11054f4b0);
}



/* Entry: 1027d9b00; end: 1027d9b53;  */

void FUN_1027d9b00(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1027d9b54; end: 1027da27b;  */

void FUN_1027d9b54(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  FUN_1027da448();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126ab040;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0x706f635374616863;
  func_0x000107c5fadc(0x706f635374616863,0xe900000000000065);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar10);
  uVar8 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar10);
  uVar8 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef2b6f0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar10);
  uVar8 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef2b8b0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar10);
  uVar8 = 0x7265537265626173;
  func_0x000107c5fadc(0x7265537265626173,0xed00007365636976);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  lVar9 = *(long *)(param_2 + 0x18);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar10 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f0bf750);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c3e740(uVar8);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar9 != 0) {
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    *(long *)(param_2 + 0x40) = lVar9;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027d9f14);
  (*pcVar1)();
}



/* Entry: 1027da27c; end: 1027da2e7;  */

void FUN_1027da27c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 1027da2e8; end: 1027da33b;  */

void FUN_1027da2e8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1027da33c; end: 1027da343;  */

undefined8 FUN_1027da33c(void)

{
  return 0x1b;
}



/* Entry: 1027da344; end: 1027da3c7;  */

void FUN_1027da344(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1027da498,param_2,FUN_1027da49c,param_2,FUN_1027da4c4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1027da3c8; end: 1027da417;  */

undefined8 FUN_1027da3c8(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1027da418; end: 1027da447;  */

void FUN_1027da418(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_11054f510;
  return;
}



/* Entry: 1027da448; end: 1027da467;  */

void FUN_1027da448(void)

{
  func_0x000107c61168(&PTR_PTR_112ec0d28);
  return;
}



/* Entry: 1027da468; end: 1027da49b;  */

undefined1  [16] FUN_1027da468(void)

{
  return ZEXT816(0x11054f550);
}



/* Entry: 1027da49c; end: 1027da4c3;  */

void FUN_1027da49c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1027da4c4; end: 1027da4cb;  */

undefined8 FUN_1027da4c4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1027da4cc; end: 1027db02b;  */

void FUN_1027da4cc(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  FUN_1027db218();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  *(undefined8 *)(param_2 + 0x58) = uStack_a8;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174();
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar8 = uStack_98;
  func_0x000107c61174();
  uVar9 = uStack_a0;
  func_0x000107c61174();
  uVar10 = uStack_a8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126ab048;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar11 = uStack_68;
  func_0x000107c61174();
  uVar12 = 0x706f635374616863;
  func_0x000107c5fadc(0x706f635374616863,0xe900000000000065);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar14);
  uVar12 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef2b6f0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(uVar14);
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar14);
  uVar12 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar14);
  uVar12 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar14);
  uVar12 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar14);
  uVar12 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef2b9e0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar9);
  func_0x000107c61174();
  uVar12 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef13320);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar10);
  func_0x000107c61174(uVar14);
  uVar12 = 0x7265537265626173;
  func_0x000107c5fadc(0x7265537265626173,0xed00007365636976);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar12);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  lVar13 = *(long *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f0bf770);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c3e740(uVar14);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar13 != 0) {
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    *(long *)(param_2 + 0x60) = lVar13;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027daac8);
  (*pcVar1)();
}



/* Entry: 1027db02c; end: 1027db0b7;  */

void FUN_1027db02c(void)

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
  return;
}



/* Entry: 1027db0b8; end: 1027db10b;  */

void FUN_1027db0b8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x60);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1027db10c; end: 1027db113;  */

undefined8 FUN_1027db10c(void)

{
  return 0x1b;
}


