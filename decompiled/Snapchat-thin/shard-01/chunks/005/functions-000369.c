/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1011b43b0; end: 1011b451b;  */

undefined * FUN_1011b43b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 unaff_x20;
  
  func_0x000107c614f0();
  uVar4 = 0x112d3bec8;
  func_0x0001000285a8(0x112d3bec8,&UNK_10d905040);
  func_0x0001000b637c(param_1,uVar4);
  func_0x0001000285a8(0x112d63e98,&UNK_10d9296d8);
  func_0x0001000b637c(param_2);
  uVar4 = param_2;
  func_0x0001006c733c();
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  uVar1 = 1;
  func_0x00010061b458(1);
  func_0x000107c61574(uVar4);
  puVar2 = &UNK_11038ea40;
  func_0x000107c613fc(&UNK_11038ea40,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_11038ea68;
  func_0x000107c613fc(&UNK_11038ea68,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = unaff_x20;
  puVar2 = &UNK_11038ea90;
  func_0x000107c613fc(&UNK_11038ea90,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_1011b4790;
  *(undefined **)(puVar2 + 0x18) = puVar3;
  uVar4 = 0;
  FUN_1011a4d50(0);
  pcVar5 = FUN_1011b4a50;
  func_0x0001000d5158(FUN_1011b4a50,puVar2,uVar4);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(puVar2);
  func_0x0001004575f0();
  func_0x000107c61574(pcVar5);
  return puVar2;
}



/* Entry: 1011b451c; end: 1011b478f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1011b451c(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  ppuVar7 = &puStack_b0;
  puVar1 = PTR_PTR_1126a5e70;
  func_0x000107c610f8(PTR_PTR_1126a5e70);
  func_0x000107c453e4();
  puVar8 = auStack_68;
  func_0x000107c61428(param_3 + 0x10,puVar8,0,0);
  lVar2 = param_3 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    puVar9 = *(undefined1 **)(param_2 + _DAT_112f14b98);
    lVar3 = param_1;
    FUN_1011b4798(param_1);
    puVar8 = puVar9;
    func_0x000107c61170(lVar2);
    if (puVar9 != (undefined1 *)0x0) goto LAB_1011b45bc;
  }
  lVar3 = lVar2;
  FUN_1011b4dcc();
  puVar9 = puVar8;
LAB_1011b45bc:
  puVar8 = puVar9;
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar9);
  func_0x000107c59e18(puVar1);
  func_0x000107c61170(lVar3);
  puVar4 = PTR_PTR_1126c2cb0;
  func_0x000107c61168();
  func_0x000107c44f9c();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar8);
  }
  func_0x000107c592b0(puVar1);
  func_0x000107c61170(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c59a2c(puVar1);
  func_0x000107c61170(puVar4);
  uVar5 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010ef2b310);
  func_0x000107c520f0(puVar1);
  func_0x000107c61170(uVar5);
  puVar4 = &UNK_11038ea40;
  func_0x000107c613fc(&UNK_11038ea40,0x18,7);
  func_0x000107c61428(param_3 + 0x10,auStack_80,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618(param_3);
  func_0x000107c61614(puVar4 + 0x10,param_3);
  func_0x000107c61170(param_3);
  puVar6 = &UNK_11038eab8;
  func_0x000107c613fc(&UNK_11038eab8,0x28,7);
  *(undefined **)(puVar6 + 0x10) = puVar4;
  *(long *)(puVar6 + 0x18) = param_1;
  *(long *)(puVar6 + 0x20) = param_2;
  pcStack_90 = FUN_1011b4da4;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1000f6b44;
  puStack_98 = &UNK_11038ead0;
  puStack_88 = puVar6;
  func_0x000107c60bc4(&puStack_b0);
  puVar4 = puStack_88;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar4);
  func_0x000107c56ea0(puVar1);
  func_0x000107c60bd0(ppuVar7);
  return puVar1;
}



/* Entry: 1011b4790; end: 1011b4797;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1011b4790(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long unaff_x20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  ppuVar8 = &puStack_b0;
  puVar1 = PTR_PTR_1126a5e70;
  func_0x000107c610f8(PTR_PTR_1126a5e70,param_2,lVar6,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c453e4();
  puVar9 = auStack_68;
  func_0x000107c61428(lVar6 + 0x10,puVar9,0,0);
  lVar2 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    puVar10 = *(undefined1 **)(param_2 + _DAT_112f14b98);
    lVar3 = param_1;
    FUN_1011b4798(param_1);
    puVar9 = puVar10;
    func_0x000107c61170(lVar2);
    if (puVar10 != (undefined1 *)0x0) goto LAB_1011b45bc;
  }
  lVar3 = lVar2;
  FUN_1011b4dcc();
  puVar10 = puVar9;
LAB_1011b45bc:
  puVar9 = puVar10;
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar10);
  func_0x000107c59e18(puVar1);
  func_0x000107c61170(lVar3);
  puVar4 = PTR_PTR_1126c2cb0;
  func_0x000107c61168();
  func_0x000107c44f9c();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar9);
  }
  func_0x000107c592b0(puVar1);
  func_0x000107c61170(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c59a2c(puVar1);
  func_0x000107c61170(puVar4);
  uVar5 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010ef2b310);
  func_0x000107c520f0(puVar1);
  func_0x000107c61170(uVar5);
  puVar4 = &UNK_11038ea40;
  func_0x000107c613fc(&UNK_11038ea40,0x18,7);
  func_0x000107c61428(lVar6 + 0x10,auStack_80,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618(lVar6);
  func_0x000107c61614(puVar4 + 0x10,lVar6);
  func_0x000107c61170(lVar6);
  puVar7 = &UNK_11038eab8;
  func_0x000107c613fc(&UNK_11038eab8,0x28,7);
  *(undefined **)(puVar7 + 0x10) = puVar4;
  *(long *)(puVar7 + 0x18) = param_1;
  *(long *)(puVar7 + 0x20) = param_2;
  pcStack_90 = FUN_1011b4da4;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1000f6b44;
  puStack_98 = &UNK_11038ead0;
  puStack_88 = puVar7;
  func_0x000107c60bc4(&puStack_b0);
  puVar4 = puStack_88;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar4);
  func_0x000107c56ea0(puVar1);
  func_0x000107c60bd0(ppuVar8);
  return puVar1;
}



/* Entry: 1011b4798; end: 1011b48e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b4798(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112d64808);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c438a0();
    func_0x000107c61180();
    func_0x000107c615e8(uVar1);
    if (uVar2 != 0) {
      uVar1 = uVar2;
      func_0x000107c61150(uVar2,PTR_s_respondsToSelector__11262c7e0,
                          PTR_s_actionMenuButtonTextForMessage_f_112599418);
      if ((uVar1 & 1) != 0) {
        uVar1 = uVar2;
        func_0x000107c3cfd8();
        func_0x000107c61180();
        if (uVar1 != 0) {
          func_0x000107c5faec();
          func_0x000107c61170(uVar1);
          func_0x000107c615e8(uVar2);
          return;
        }
      }
      func_0x000107c615e8(uVar2);
    }
  }
  return;
}



/* Entry: 1011b48e4; end: 1011b4a4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b48e4(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [24];
  
  lVar1 = _DAT_112d64800;
  func_0x000107c61428(unaff_x20 + _DAT_112d64800,auStack_68,0,0);
  lVar1 = unaff_x20 + lVar1;
  func_0x000107c61618();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5d184();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112d64810);
  lVar1 = lVar3;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    if (lVar2 != 0) {
      uVar5 = *(undefined8 *)(param_2 + _DAT_112f14b98);
      uVar4 = *(undefined8 *)(param_2 + _DAT_112f14b88);
      func_0x0001028647fc(0);
      func_0x000107c610f8();
      func_0x000107c615f4(lVar2,2);
      func_0x000107c61174(uVar5);
      func_0x000107c61174(uVar4);
      func_0x000107c61174();
      func_0x000107c61174(param_1);
      func_0x0001028644c8();
      func_0x000107c42c1c(lVar3);
      func_0x000107c615ec(lVar2,2);
      func_0x000107c61170(param_1);
    }
  }
  else {
    func_0x000107c61170();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1011b4a50; end: 1011b4a7f;  */

void FUN_1011b4a50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_2;
  (**(code **)(unaff_x20 + 0x10))(uVar1,param_2[1]);
  *param_1 = uVar1;
  return;
}



/* Entry: 1011b4a80; end: 1011b4af7; -[_TtC27ForwardChatActionMenuPlugin31ForwardChatActionMenuPluginImpl messageActionMenuItemViewModelFor:actionMenuContext:] */

void FUN_1011b4a80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1011b43b0(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1011b4af8; end: 1011b4b57; -[_TtC27ForwardChatActionMenuPlugin31ForwardChatActionMenuPluginImpl init] */

void FUN_1011b4af8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ForwardChatActionMenuPlugin.ForwardChatActionMenuPluginImpl",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011b4b24);
  (*pcVar1)();
}



/* Entry: 1011b4b58; end: 1011b4baf; -[_TtC27ForwardChatActionMenuPlugin31ForwardChatActionMenuPluginImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011b4b84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011b4b88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b4b58(long param_1)

{
  FUN_100e47454(param_1 + _DAT_112d64800);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d64808));
  return;
}



/* Entry: 1011b4bb0; end: 1011b4c5f;  */

/* WARNING: Possible PIC construction at 0x0001011b4c2c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b4bb0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d64810);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    lVar1 = lVar2;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c4ffe8(lVar2);
      func_0x000107c61180();
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + _DAT_112ec4d90);
      func_0x000107c615f0(uVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c41864(uVar3,param_2,0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
    return;
  }
  return;
}



/* Entry: 1011b4c60; end: 1011b4c87; -[_TtC27ForwardChatActionMenuPlugin31ForwardChatActionMenuPluginImpl dismissPresentedView] */

void FUN_1011b4c60(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011b4bb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011b4c88; end: 1011b4d83; -[_TtC27ForwardChatActionMenuPlugin31ForwardChatActionMenuPluginImpl dismissForwardScope:] */

/* WARNING: Possible PIC construction at 0x0001011b4cbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011b4cc0) */

void FUN_1011b4c88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001011b4cd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1011b4d84; end: 1011b4da3;  */

void FUN_1011b4d84(void)

{
  func_0x000107c61168(&PTR_PTR_1127b5d68);
  return;
}



/* Entry: 1011b4da4; end: 1011b4dcb;  */

void FUN_1011b4da4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_1011b48e4(uVar1,uVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1011b4dcc; end: 1011b4e97;  */

undefined1  [16] FUN_1011b4dcc(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffed;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef2b330);
  uVar3 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010ef2b350);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011b4e98);
  (*pcVar1)();
}



/* Entry: 1011b4e98; end: 1011b4ea3; -[SCForwardChatActionMenuPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b4e98(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64848;
  func_0x000107c61428(param_1 + _DAT_112d64848,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011b4ea4; end: 1011b4eaf; -[SCForwardChatActionMenuPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b4ea4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64848;
  func_0x000107c61428(param_1 + _DAT_112d64848,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011b4eb0; end: 1011b4ebb; -[SCForwardChatActionMenuPluginEntryPoint messageRenderingPluginServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b4eb0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64850;
  func_0x000107c61428(param_1 + _DAT_112d64850,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011b4ebc; end: 1011b4ec7; -[SCForwardChatActionMenuPluginEntryPoint setMessageRenderingPluginServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b4ebc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64850;
  func_0x000107c61428(param_1 + _DAT_112d64850,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011b4ec8; end: 1011b4ed3; -[SCForwardChatActionMenuPluginEntryPoint messagingExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b4ec8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64858;
  func_0x000107c61428(param_1 + _DAT_112d64858,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011b4ed4; end: 1011b4f17;  */

void FUN_1011b4ed4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1011b4f18; end: 1011b4f23; -[SCForwardChatActionMenuPluginEntryPoint setMessagingExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b4f18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64858;
  func_0x000107c61428(param_1 + _DAT_112d64858,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011b4f24; end: 1011b4f77;  */

void FUN_1011b4f24(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011b4f78; end: 1011b4fbf; -[SCForwardChatActionMenuPluginEntryPoint messageForwardScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b4f78(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64860;
  func_0x000107c61428(param_1 + _DAT_112d64860,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1011b4fc0; end: 1011b5023; -[SCForwardChatActionMenuPluginEntryPoint setMessageForwardScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b4fc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64860;
  func_0x000107c61428(param_1 + _DAT_112d64860,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1011b5024; end: 1011b5217;  */

/* WARNING: Possible PIC construction at 0x0001011b5174: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011b5184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011b5194: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011b51e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011b51d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011b51ec) */
/* WARNING: Removing unreachable block (ram,0x0001011b5198) */
/* WARNING: Removing unreachable block (ram,0x0001011b5188) */
/* WARNING: Removing unreachable block (ram,0x0001011b5178) */
/* WARNING: Removing unreachable block (ram,0x0001011b51dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b5024(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c4cdbc();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4cdd0();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c4cdfc();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        FUN_1011b3fe8(0);
        func_0x000107c613fc();
        func_0x000107c4cdcc();
        func_0x000107c61180();
        func_0x000107c61174();
        func_0x000107c4cdb8();
        func_0x000107c61180();
        lVar4 = 0;
        FUN_1011b4d84();
        lVar5 = lVar4;
        func_0x000107c610f8();
        func_0x000107c61614(lVar5 + _DAT_112d64800,0);
        *(long *)(lVar5 + _DAT_112d64808) = lVar3;
        *(long *)(lVar5 + _DAT_112d64810) = lVar2;
        *(long *)(lVar5 + _DAT_112d64818) = unaff_x20;
        lStack_70 = lVar5;
        lStack_68 = lVar4;
        func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
        func_0x000107c4fba8(*(undefined8 *)(lVar1 + _DAT_112f14b58));
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1011b5218; end: 1011b523f; -[SCForwardChatActionMenuPluginEntryPoint begin] */

void FUN_1011b5218(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011b5024();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011b5240; end: 1011b5283; -[SCForwardChatActionMenuPluginEntryPoint end] */

void FUN_1011b5240(undefined8 param_1)

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



/* Entry: 1011b5284; end: 1011b54f3;  */

void FUN_1011b5284(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe2) || (param_3 != -0x7ffffffef10d55e0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001e,0x800000010ef2aa20,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd00000000000001b;
        if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef10d6a90)) ||
           (func_0x000107c605b8(0xd00000000000001b,0x800000010ef29570,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5666c();
        }
        else {
          if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10d4c80)) {
            uVar2 = 0;
            func_0x000107c605b8(0xd00000000000001a,0x800000010ef2b380,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "ForwardChatActionMenuPlugin/SCForwardChatActionMenuPluginEntryPoint.swift"
                                  ,0x49,2,0x30,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1011b54f4);
              (*pcVar1)();
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c56638();
        }
        goto LAB_1011b5310;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c56648();
  }
LAB_1011b5310:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1011b54f4; end: 1011b559f; -[SCForwardChatActionMenuPluginEntryPoint setValue:forIvarName:] */

void FUN_1011b54f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1011b5284(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1011b55a0; end: 1011b5633; -[SCForwardChatActionMenuPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b55a0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d64848,0);
  func_0x000107c61614(param_1 + _DAT_112d64850,0);
  func_0x000107c61614(param_1 + _DAT_112d64858,0);
  *(undefined8 *)(param_1 + _DAT_112d64860) = 0;
  *(undefined8 *)(param_1 + _DAT_112d64868) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011b5634; end: 1011b5667;  */

void FUN_1011b5634(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011b5668; end: 1011b56cf; -[SCForwardChatActionMenuPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b5668(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d64848);
  func_0x000107c61610(param_1 + _DAT_112d64850);
  func_0x000107c61610(param_1 + _DAT_112d64858);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d64860));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d64868));
  return;
}



/* Entry: 1011b56d0; end: 1011b56ef;  */

void FUN_1011b56d0(void)

{
  func_0x000107c61168(&PTR_PTR_1127b5e40);
  return;
}



/* Entry: 1011b56f0; end: 1011b56fb; -[_TtC25RemixChatActionMenuPlugin25RemixChatActionMenuPlugin presentationController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b56f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64898;
  func_0x000107c61428(param_1 + _DAT_112d64898,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011b56fc; end: 1011b5707; -[_TtC25RemixChatActionMenuPlugin25RemixChatActionMenuPlugin setPresentationController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b56fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64898;
  func_0x000107c61428(param_1 + _DAT_112d64898,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011b5708; end: 1011b5713; -[_TtC25RemixChatActionMenuPlugin25RemixChatActionMenuPlugin presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b5708(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d648a0;
  func_0x000107c61428(param_1 + _DAT_112d648a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011b5714; end: 1011b5757;  */

void FUN_1011b5714(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1011b5758; end: 1011b5763; -[_TtC25RemixChatActionMenuPlugin25RemixChatActionMenuPlugin setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b5758(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d648a0;
  func_0x000107c61428(param_1 + _DAT_112d648a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011b5764; end: 1011b57b7;  */

void FUN_1011b5764(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011b57b8; end: 1011b58df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b57b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112d64898,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d648a0,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d648a8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d648b0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d648b8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d648c0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112d648c8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112d648d0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112d648d8) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112d648e0) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112d648e8) = param_10;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011b58e0; end: 1011b58e7; -[_TtC25RemixChatActionMenuPlugin25RemixChatActionMenuPlugin itemType] */

undefined8 FUN_1011b58e0(void)

{
  return 0x13;
}



/* Entry: 1011b58e8; end: 1011b58ef; -[_TtC25RemixChatActionMenuPlugin25RemixChatActionMenuPlugin lockedConversationPolicy] */

undefined8 FUN_1011b58e8(void)

{
  return 0;
}



/* Entry: 1011b58f0; end: 1011b5a7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1011b58f0(ulong param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(param_2 + _DAT_112f14b88);
  func_0x000108ef57c8(uVar2);
  uVar3 = param_1;
  func_0x0001070c0b20(param_1,(uint)uVar2 ^ 1,*(undefined8 *)(unaff_x20 + _DAT_112d648e8));
  if ((int)uVar3 != 0) {
    uVar3 = param_1;
    func_0x000107c4a4a4();
    if ((int)uVar3 == 0) goto LAB_1011b5a1c;
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d648a8);
    uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112d648a8))[1];
    uVar4 = uVar2;
    func_0x000107c5fadc(uVar2,uVar1);
    uVar3 = param_1;
    func_0x000107c4a128();
    func_0x000107c61170(uVar4);
    if ((uVar3 & 1) != 0) goto LAB_1011b5a1c;
    func_0x000107c5fadc(uVar2,uVar1);
    func_0x000107c4a390();
    func_0x000107c61170(uVar2);
    if ((param_1 & 1) != 0) goto LAB_1011b5a1c;
  }
  lVar5 = *(long *)(unaff_x20 + _DAT_112d648e0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar6 = lVar5;
    func_0x000107c4fe0c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar5);
    if (lVar6 != 0) {
      func_0x000107c615e8(lVar6);
    }
  }
LAB_1011b5a1c:
  puVar7 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c451b0(puVar7);
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  return puVar7;
}



/* Entry: 1011b5a80; end: 1011b5af7; -[_TtC25RemixChatActionMenuPlugin25RemixChatActionMenuPlugin isActionApplicableTo:actionMenuContext:] */

void FUN_1011b5a80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1011b58f0(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1011b5af8; end: 1011b5d13;  */

undefined * FUN_1011b5af8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 unaff_x20;
  
  func_0x0001000285a8(0x112d3bec8,&UNK_10d905040);
  uVar6 = param_1;
  func_0x0001000b637c(param_1);
  func_0x0001000285a8(0x112d63e98,&UNK_10d9296d8);
  uVar5 = param_2;
  func_0x0001000b637c(param_2);
  uVar1 = uVar5;
  func_0x0001006c733c();
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar5);
  puVar2 = &UNK_11038ebb0;
  func_0x000107c613fc(&UNK_11038ebb0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_11038ebd8;
  func_0x000107c613fc(&UNK_11038ebd8,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_1011b6f50;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  uVar6 = 0x112d648f0;
  func_0x0001000285a8(0x112d648f0,&UNK_10d929c40);
  pcVar4 = FUN_1011b6f58;
  func_0x00010068b194(FUN_1011b6f58,puVar3,uVar6);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(puVar3);
  func_0x0001000b637c(param_1);
  func_0x0001000b637c(param_2);
  uVar6 = param_2;
  func_0x00010061da28();
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  uVar5 = 1;
  func_0x00010061b458(1);
  func_0x000107c61574(uVar6);
  puVar2 = &UNK_11038ec00;
  func_0x000107c613fc(&UNK_11038ec00,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
  puVar3 = &UNK_11038ec28;
  func_0x000107c613fc(&UNK_11038ec28,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_1011b6f80;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  uVar6 = 0;
  FUN_1011a4d50(0);
  func_0x000107c61174();
  pcVar7 = FUN_1011b6f88;
  func_0x0001000d5158(FUN_1011b6f88,puVar3,uVar6);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(puVar3);
  func_0x0001004575f0();
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar7);
  return puVar3;
}



/* Entry: 1011b5d14; end: 1011b5dbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b5d14(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    func_0x0001000285a8(0x112d64920,&UNK_10d929c70);
    uStack_50 = 0;
    func_0x000100854cb0(&uStack_50);
  }
  else {
    FUN_1011b5dc0(param_1,*(undefined8 *)(param_2 + _DAT_112f14b88));
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 1011b5dc0; end: 1011b5fcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b5dc0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d648e0);
  uVar6 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4fe0c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
      func_0x0001070b2918(param_2);
      func_0x000107c61180();
      lVar1 = lVar2;
      func_0x000107c4fdd4(lVar2);
      func_0x000107c61180();
      func_0x000107c61170(param_2);
      lVar3 = lVar1;
      func_0x0001000b637c(lVar1);
      func_0x000107c61170(lVar1);
      uVar6 = 0x112d648f0;
      func_0x0001000285a8(0x112d648f0,&UNK_10d929c40);
      func_0x0001000bfde0(FUN_1011b6620,0,uVar6);
      func_0x000107c615e8(lVar2);
      func_0x000107c61574(lVar3);
      return;
    }
  }
  func_0x000107c4c930();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c4c99c();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5faec();
      func_0x000107c61170(lVar1);
      puVar4 = &UNK_11038ebb0;
      func_0x000107c613fc(&UNK_11038ebb0,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      puVar5 = &UNK_11038ed90;
      func_0x000107c613fc(&UNK_11038ed90,0x30,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(long *)(puVar5 + 0x18) = lVar2;
      *(undefined8 *)(puVar5 + 0x20) = uVar6;
      *(long *)(puVar5 + 0x28) = param_1;
      uVar6 = 0x112d64928;
      func_0x0001000285a8(0x112d64928,&UNK_10d929c78);
      func_0x000107c613fc();
      func_0x0001000b64ac(FUN_1011b7078,puVar5,uVar6);
      return;
    }
    func_0x000107c61170(param_1);
  }
  func_0x0001000285a8(0x112d64920,&UNK_10d929c70);
  uStack_48 = 0;
  func_0x000100854cb0(&uStack_48);
  return;
}



/* Entry: 1011b5fcc; end: 1011b61ab;  */

undefined * FUN_1011b5fcc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  puVar1 = (undefined *)0x0;
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126a5e70;
    uVar5 = param_2;
    func_0x000107c610f8(PTR_PTR_1126a5e70);
    func_0x000107c61174();
    func_0x000107c453e4(puVar1);
    puVar2 = puVar1;
    func_0x00010902294c();
    func_0x000107c61180();
    func_0x000107c59e18(puVar1);
    func_0x000107c61170(puVar2);
    puVar2 = PTR_PTR_1126c2cb0;
    func_0x000107c61168();
    func_0x000107c44f9c();
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar5);
    }
    func_0x000107c592b0(puVar1);
    func_0x000107c61170(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
    func_0x000107c59a2c(puVar1);
    func_0x000107c61170(puVar2);
    puVar2 = &UNK_11038ebb0;
    func_0x000107c613fc(&UNK_11038ebb0,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_4);
    puVar3 = &UNK_11038ec50;
    func_0x000107c613fc(&UNK_11038ec50,0x30,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    *(long *)(puVar3 + 0x20) = param_3;
    *(undefined8 *)(puVar3 + 0x28) = param_2;
    pcStack_60 = FUN_1011b7000;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_11038ec68;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    puVar2 = puStack_58;
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_1);
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar2);
    func_0x000107c56ea0(puVar1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(param_3);
  }
  return puVar1;
}



/* Entry: 1011b61ac; end: 1011b622f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b61ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1011b6230(param_2,param_3,*(undefined8 *)(param_4 + _DAT_112f14b88));
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1011b6230; end: 1011b65a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b6230(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  long unaff_x20;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  lVar2 = _DAT_112d648a0;
  func_0x000107c61428(unaff_x20 + _DAT_112d648a0,auStack_90,0,0);
  lVar2 = unaff_x20 + lVar2;
  func_0x000107c61618();
  lVar3 = _DAT_112d64898;
  if (lVar2 != 0) {
    puVar10 = auStack_a8;
    func_0x000107c61428(unaff_x20 + _DAT_112d64898,puVar10,0,0);
    lVar3 = unaff_x20 + lVar3;
    func_0x000107c61618();
    if (lVar3 == 0) {
      func_0x000107c61170(lVar2);
    }
    else {
      lVar4 = param_2;
      func_0x000107c501f4();
      func_0x000107c61180();
      lStack_b0 = lVar4;
      if (lVar4 == 0) {
        puStack_e8 = &UNK_11038eca0;
        func_0x000107c613fc(&UNK_11038eca0,0x18,7);
        *(long **)(puStack_e8 + 0x10) = &lStack_b0;
        puVar5 = &UNK_11038ecc8;
        func_0x000107c613fc(&UNK_11038ecc8,0x20,7);
        uStack_f0 = 0x1011b7028;
        *(undefined8 *)(puVar5 + 0x10) = 0x1011b7028;
        *(undefined **)(puVar5 + 0x18) = puStack_e8;
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_c0 = FUN_1011b7030;
        puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_d8 = 0x42000000;
        pcStack_d0 = FUN_1011b6bc0;
        puStack_c8 = &UNK_11038ece0;
        ppuVar6 = &puStack_e0;
        puStack_b8 = puVar5;
        func_0x000107c60bc4(ppuVar6);
        func_0x000107c61574(puStack_b8);
        puStack_f8 = &UNK_11038ed18;
        func_0x000107c613fc(&UNK_11038ed18,0x18,7);
        *(long **)(puStack_f8 + 0x10) = &lStack_b0;
        puVar5 = &UNK_11038ed40;
        puVar10 = (undefined1 *)0x20;
        func_0x000107c613fc(&UNK_11038ed40,0x20,7);
        pcStack_100 = FUN_1011b7050;
        *(code **)(puVar5 + 0x10) = FUN_1011b7050;
        *(undefined **)(puVar5 + 0x18) = puStack_f8;
        pcStack_c0 = FUN_1011b7058;
        puStack_e0 = puVar1;
        uStack_d8 = 0x42000000;
        pcStack_d0 = FUN_1011ac670;
        puStack_c8 = &UNK_11038ed58;
        ppuVar7 = &puStack_e0;
        puStack_b8 = puVar5;
        func_0x000107c60bc4(ppuVar7);
        func_0x000107c61574(puStack_b8);
        func_0x000107c4c6d0(param_3);
        func_0x000107c60bd0(ppuVar7);
        func_0x000107c60bd0(ppuVar6);
      }
      else {
        uStack_f0 = 0;
        puStack_e8 = (undefined *)0x0;
        pcStack_100 = (code *)0x0;
        puStack_f8 = (undefined *)0x0;
      }
      uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112d648b8);
      lVar4 = param_2;
      func_0x000107c42ca8(param_2);
      func_0x000107c61180();
      lVar8 = lStack_b0;
      func_0x000107c61174(lStack_b0);
      lVar9 = param_1;
      func_0x000107c4cde0();
      func_0x000107c61180();
      puVar11 = puVar10;
      if (lVar9 == 0) {
        func_0x000107c5faec();
        puVar11 = puVar10;
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar10);
      }
      func_0x000107c40258();
      func_0x000107c61180();
      if (param_1 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar11);
      }
      func_0x000107c5b690(param_2);
      func_0x000107c61180();
      func_0x000107c4fde4();
      func_0x000107c4ab80();
      func_0x000107c3ed74(uVar12);
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar8);
      func_0x000107c61170(lVar9);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c5bb70(lVar3);
      func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112d648b0));
      func_0x000107c61170(uVar12);
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lStack_b0);
      func_0x000100ca6574(uStack_f0,puStack_e8);
      func_0x000100ca6574(pcStack_100,puStack_f8);
    }
  }
  return;
}



/* Entry: 1011b65a8; end: 1011b661f; -[_TtC25RemixChatActionMenuPlugin25RemixChatActionMenuPlugin messageActionMenuItemViewModelFor:actionMenuContext:] */

void FUN_1011b65a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1011b5af8(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1011b6620; end: 1011b670f;  */

void FUN_1011b6620(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  uVar4 = *param_2;
  puVar2 = &UNK_11038edb8;
  func_0x000107c613fc(&UNK_11038edb8,0x18,7);
  puVar5 = (undefined8 *)(puVar2 + 0x10);
  *puVar5 = 0;
  uStack_50 = 0x1011b7084;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1011b675c;
  puStack_58 = &UNK_11038edd0;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c4c6bc(uVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61428(puVar5,&puStack_70,0,0);
  *param_1 = *puVar5;
  func_0x000107c61174();
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 1011b6710; end: 1011b675b;  */

void FUN_1011b6710(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,1,0);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = param_1;
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 1011b675c; end: 1011b67a7;  */

void FUN_1011b675c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1011b67a8; end: 1011b6933;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b67a8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar4 = *(long *)(lVar1 + _DAT_112d648c0);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    lVar1 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar1 != 0) {
      func_0x000107c5fadc(param_3,param_4);
      puVar2 = &UNK_11038ee08;
      func_0x000107c613fc(&UNK_11038ee08,0x28,7);
      *(undefined8 *)(puVar2 + 0x10) = param_1;
      *(long *)(puVar2 + 0x18) = param_2;
      *(undefined8 *)(puVar2 + 0x20) = param_5;
      uStack_78 = 0x1011b708c;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      puStack_88 = &UNK_100ab47f8;
      puStack_80 = &UNK_11038ee20;
      ppuVar3 = &puStack_98;
      puStack_70 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      puVar2 = puStack_70;
      func_0x000107c6157c(param_1);
      func_0x000107c6157c(param_2);
      func_0x000107c61174(param_5);
      func_0x000107c61574(puVar2);
      func_0x000107c403ec(lVar1);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(param_3);
    }
  }
  func_0x0001000b6d30(0);
  func_0x000104885df0(0,0);
  return;
}



/* Entry: 1011b6934; end: 1011b6adf;  */

void FUN_1011b6934(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uStack_50;
  undefined8 auStack_48 [3];
  
  if ((param_1 & 1) == 0) {
    auStack_48[0] = 0;
    func_0x000100087f6c(auStack_48);
  }
  else {
    func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 == 0) {
      param_4 = 0;
    }
    else {
      func_0x0001011b69e4();
      func_0x000107c61170(param_3);
    }
    uStack_50 = param_4;
    func_0x000100087f6c(&uStack_50);
    func_0x000107c61170(param_4);
  }
  func_0x000100c7f554();
  return;
}



/* Entry: 1011b6ae0; end: 1011b6bbf;  */

/* WARNING: Possible PIC construction at 0x0001011b6b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011b6b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011b6ba0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011b6b94) */
/* WARNING: Removing unreachable block (ram,0x0001011b6b44) */
/* WARNING: Removing unreachable block (ram,0x0001011b6ba4) */

void FUN_1011b6ae0(long param_1,undefined8 param_2,long param_3)

{
  func_0x000107c5fadc();
  if (param_3 == 0) {
    func_0x000107c61168(PTR_PTR_1126b23b8);
    func_0x000107c5daf0();
    func_0x000107c61180();
  }
  else {
    func_0x000107c5db08(param_3);
    func_0x000107c61180();
    func_0x00010901d7c4(param_3);
    func_0x000107c61180();
    func_0x000107c5faec();
    param_1 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011b6bc0; end: 1011b6c6f;  */

/* WARNING: Possible PIC construction at 0x0001011b6c44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011b6c48) */

void FUN_1011b6bc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar3 = param_2;
  func_0x000107c5faec(param_2);
  uVar2 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  (*pcVar1)(param_2,uVar3,param_3,param_4,param_5);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1011b6c70; end: 1011b6ce3;  */

/* WARNING: Possible PIC construction at 0x0001011b6cc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011b6ccc) */

void FUN_1011b6c70(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b23b8;
  func_0x000107c61168(PTR_PTR_1126b23b8);
  func_0x000107c444fc(param_1);
  func_0x000107c61180();
  func_0x000107c44554(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011b6ce4; end: 1011b6d43; -[_TtC25RemixChatActionMenuPlugin25RemixChatActionMenuPlugin init] */

void FUN_1011b6ce4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("RemixChatActionMenuPlugin.RemixChatActionMenuPlugin",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011b6d10);
  (*pcVar1)();
}



/* Entry: 1011b6d44; end: 1011b6e0f; -[_TtC25RemixChatActionMenuPlugin25RemixChatActionMenuPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011b6de4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011b6de8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b6d44(long param_1)

{
  FUN_1011b6fdc(param_1 + _DAT_112d64898);
  func_0x000107c61610(param_1 + _DAT_112d648a0);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d648a8 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d648b0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d648b8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d648c0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d648c8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d648d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d648d8));
  return;
}



/* Entry: 1011b6e10; end: 1011b6e93; -[_TtC25RemixChatActionMenuPlugin25RemixChatActionMenuPlugin dismissPresentedView] */

/* WARNING: Possible PIC construction at 0x0001011b6e4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011b6e68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011b6e50) */
/* WARNING: Removing unreachable block (ram,0x0001011b6e6c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b6e10(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1011b6e94; end: 1011b6f27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b6e94(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d648b0);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  lVar1 = _DAT_112d64898;
  func_0x000107c61428(unaff_x20 + _DAT_112d64898,auStack_38,0,0);
  lVar1 = unaff_x20 + lVar1;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c42860();
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 1011b6f28; end: 1011b6f4f; -[_TtC25RemixChatActionMenuPlugin25RemixChatActionMenuPlugin remixScopeDidComplete] */

void FUN_1011b6f28(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011b6e94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011b6f50; end: 1011b6f57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b6f50(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    func_0x0001000285a8(0x112d64920,&UNK_10d929c70);
    uStack_50 = 0;
    func_0x000100854cb0(&uStack_50);
  }
  else {
    FUN_1011b5dc0(param_1,*(undefined8 *)(param_2 + _DAT_112f14b88));
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1011b6f58; end: 1011b6f7f;  */

void FUN_1011b6f58(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1]);
  return;
}



/* Entry: 1011b6f80; end: 1011b6f87;  */

undefined * FUN_1011b6f80(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar4 = &puStack_80;
  puVar1 = (undefined *)0x0;
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126a5e70;
    uVar5 = param_2;
    func_0x000107c610f8(PTR_PTR_1126a5e70);
    func_0x000107c61174();
    func_0x000107c453e4(puVar1);
    puVar2 = puVar1;
    func_0x00010902294c();
    func_0x000107c61180();
    func_0x000107c59e18(puVar1);
    func_0x000107c61170(puVar2);
    puVar2 = PTR_PTR_1126c2cb0;
    func_0x000107c61168();
    func_0x000107c44f9c();
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar5);
    }
    func_0x000107c592b0(puVar1);
    func_0x000107c61170(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
    func_0x000107c59a2c(puVar1);
    func_0x000107c61170(puVar2);
    puVar2 = &UNK_11038ebb0;
    func_0x000107c613fc(&UNK_11038ebb0,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,uVar6);
    puVar3 = &UNK_11038ec50;
    func_0x000107c613fc(&UNK_11038ec50,0x30,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    *(long *)(puVar3 + 0x20) = param_3;
    *(undefined8 *)(puVar3 + 0x28) = param_2;
    pcStack_60 = FUN_1011b7000;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_11038ec68;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    puVar2 = puStack_58;
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_1);
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar2);
    func_0x000107c56ea0(puVar1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(param_3);
  }
  return puVar1;
}



/* Entry: 1011b6f88; end: 1011b6fbb;  */

void FUN_1011b6f88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_2;
  (**(code **)(unaff_x20 + 0x10))(uVar1,param_2[1],param_2[2]);
  *param_1 = uVar1;
  return;
}



/* Entry: 1011b6fbc; end: 1011b6fdb;  */

void FUN_1011b6fbc(void)

{
  func_0x000107c61168(&PTR_PTR_1127b5f18);
  return;
}



/* Entry: 1011b6fdc; end: 1011b6fff;  */

undefined8 FUN_1011b6fdc(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1011b7000; end: 1011b702f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b7000(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_48,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    FUN_1011b6230(uVar2,uVar1,*(undefined8 *)(lVar3 + _DAT_112f14b88));
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 1011b7030; end: 1011b704f;  */

void FUN_1011b7030(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1011b7050; end: 1011b7057;  */

/* WARNING: Possible PIC construction at 0x0001011b6cc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011b6ccc) */

void FUN_1011b7050(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126b23b8;
  func_0x000107c61168(PTR_PTR_1126b23b8,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c444fc(param_1);
  func_0x000107c61180();
  func_0x000107c44554(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011b7058; end: 1011b7077;  */

void FUN_1011b7058(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1011b7078; end: 1011b70b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b7078(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar1 + 0x10,auStack_68,0,0);
  lVar4 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar8 = *(long *)(lVar4 + _DAT_112d648c0);
    func_0x000107c61174();
    func_0x000107c61170(lVar4);
    lVar4 = lVar8;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    if (lVar4 != 0) {
      func_0x000107c5fadc(uVar5,uVar2);
      puVar6 = &UNK_11038ee08;
      func_0x000107c613fc(&UNK_11038ee08,0x28,7);
      *(undefined8 *)(puVar6 + 0x10) = param_1;
      *(long *)(puVar6 + 0x18) = lVar1;
      *(undefined8 *)(puVar6 + 0x20) = uVar3;
      uStack_78 = 0x1011b708c;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      puStack_88 = &UNK_100ab47f8;
      puStack_80 = &UNK_11038ee20;
      ppuVar7 = &puStack_98;
      puStack_70 = puVar6;
      func_0x000107c60bc4(ppuVar7);
      puVar6 = puStack_70;
      func_0x000107c6157c(param_1);
      func_0x000107c6157c(lVar1);
      func_0x000107c61174(uVar3);
      func_0x000107c61574(puVar6);
      func_0x000107c403ec(lVar4);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(uVar5);
    }
  }
  func_0x0001000b6d30(0);
  func_0x000104885df0(0,0);
  return;
}



/* Entry: 1011b70b8; end: 1011b7363;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1011b70b8(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             long param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 unaff_x20;
  long lStack_70;
  long lStack_68;
  
  uVar14 = 0x10;
  func_0x000107c613fc();
  uVar4 = *(undefined8 *)(param_2 + _DAT_113083f78);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c5faec();
  func_0x000107c61170(uVar4);
  uVar4 = param_3;
  func_0x000107c3f854();
  func_0x000107c61180();
  uVar6 = param_4;
  func_0x000107c4c984();
  func_0x000107c61180();
  uVar7 = param_7;
  func_0x000107c5b42c();
  func_0x000107c61180();
  uVar8 = param_8;
  func_0x000107c4f1c8();
  func_0x000107c61180();
  uVar9 = param_9;
  func_0x000107c4cdcc();
  func_0x000107c61180();
  lVar10 = param_10;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar10 != 0) {
    lVar11 = 0;
    FUN_1011b6fbc();
    lVar12 = lVar11;
    func_0x000107c610f8();
    func_0x000107c61614(lVar12 + _DAT_112d64898,0);
    func_0x000107c61614(lVar12 + _DAT_112d648a0,0);
    puVar1 = (undefined8 *)(lVar12 + _DAT_112d648a8);
    *puVar1 = uVar5;
    puVar1[1] = uVar14;
    *(undefined8 *)(lVar12 + _DAT_112d648b0) = param_5;
    *(undefined8 *)(lVar12 + _DAT_112d648b8) = param_6;
    *(undefined8 *)(lVar12 + _DAT_112d648c0) = uVar4;
    *(undefined8 *)(lVar12 + _DAT_112d648c8) = uVar6;
    *(undefined8 *)(lVar12 + _DAT_112d648d0) = uVar7;
    *(undefined8 *)(lVar12 + _DAT_112d648d8) = uVar8;
    *(undefined8 *)(lVar12 + _DAT_112d648e0) = uVar9;
    *(long *)(lVar12 + _DAT_112d648e8) = lVar10;
    puVar2 = PTR_s_init_1125d9248;
    lStack_70 = lVar12;
    lStack_68 = lVar11;
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_6);
    plVar13 = &lStack_70;
    func_0x000107c61154(plVar13,puVar2);
    func_0x000107c4fba8(*(undefined8 *)(param_1 + _DAT_112f14b58));
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(plVar13);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1011b7364);
  (*pcVar3)();
}



/* Entry: 1011b7364; end: 1011b737f;  */

void FUN_1011b7364(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011b7380; end: 1011b739f;  */

void FUN_1011b7380(void)

{
  func_0x000107c61168(&PTR_PTR_112d64970);
  return;
}



/* Entry: 1011b73a0; end: 1011b73ab; -[SCRemixChatActionMenuPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b73a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d649c8;
  func_0x000107c61428(param_1 + _DAT_112d649c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011b73ac; end: 1011b73b7; -[SCRemixChatActionMenuPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b73ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d649c8;
  func_0x000107c61428(param_1 + _DAT_112d649c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011b73b8; end: 1011b73c3; -[SCRemixChatActionMenuPluginEntryPoint userSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b73b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d649d0;
  func_0x000107c61428(param_1 + _DAT_112d649d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011b73c4; end: 1011b73cf; -[SCRemixChatActionMenuPluginEntryPoint setUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b73c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d649d0;
  func_0x000107c61428(param_1 + _DAT_112d649d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011b73d0; end: 1011b73db; -[SCRemixChatActionMenuPluginEntryPoint chatContentDeliveryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b73d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d649d8;
  func_0x000107c61428(param_1 + _DAT_112d649d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011b73dc; end: 1011b73e7; -[SCRemixChatActionMenuPluginEntryPoint setChatContentDeliveryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b73dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d649d8;
  func_0x000107c61428(param_1 + _DAT_112d649d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011b73e8; end: 1011b73f3; -[SCRemixChatActionMenuPluginEntryPoint chatMediaFetchingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b73e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d649e0;
  func_0x000107c61428(param_1 + _DAT_112d649e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011b73f4; end: 1011b73ff; -[SCRemixChatActionMenuPluginEntryPoint setChatMediaFetchingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b73f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d649e0;
  func_0x000107c61428(param_1 + _DAT_112d649e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011b7400; end: 1011b740b; -[SCRemixChatActionMenuPluginEntryPoint remixScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b7400(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d649e8;
  func_0x000107c61428(param_1 + _DAT_112d649e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011b740c; end: 1011b7417; -[SCRemixChatActionMenuPluginEntryPoint setRemixScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b740c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d649e8;
  func_0x000107c61428(param_1 + _DAT_112d649e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011b7418; end: 1011b7423; -[SCRemixChatActionMenuPluginEntryPoint snapVideoFilterServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b7418(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d649f0;
  func_0x000107c61428(param_1 + _DAT_112d649f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011b7424; end: 1011b742f; -[SCRemixChatActionMenuPluginEntryPoint setSnapVideoFilterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b7424(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d649f0;
  func_0x000107c61428(param_1 + _DAT_112d649f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011b7430; end: 1011b743b; -[SCRemixChatActionMenuPluginEntryPoint previewVideoProviderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b7430(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d649f8;
  func_0x000107c61428(param_1 + _DAT_112d649f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011b743c; end: 1011b7447; -[SCRemixChatActionMenuPluginEntryPoint setPreviewVideoProviderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b743c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d649f8;
  func_0x000107c61428(param_1 + _DAT_112d649f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011b7448; end: 1011b7453; -[SCRemixChatActionMenuPluginEntryPoint messageRenderingPluginServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b7448(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64a00;
  func_0x000107c61428(param_1 + _DAT_112d64a00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011b7454; end: 1011b745f; -[SCRemixChatActionMenuPluginEntryPoint setMessageRenderingPluginServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b7454(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64a00;
  func_0x000107c61428(param_1 + _DAT_112d64a00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011b7460; end: 1011b746b; -[SCRemixChatActionMenuPluginEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b7460(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64a08;
  func_0x000107c61428(param_1 + _DAT_112d64a08,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011b746c; end: 1011b74af;  */

void FUN_1011b746c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1011b74b0; end: 1011b74bb; -[SCRemixChatActionMenuPluginEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b74b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64a08;
  func_0x000107c61428(param_1 + _DAT_112d64a08,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011b74bc; end: 1011b750f;  */

void FUN_1011b74bc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011b7510; end: 1011b7557; -[SCRemixChatActionMenuPluginEntryPoint remixScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b7510(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64a10;
  func_0x000107c61428(param_1 + _DAT_112d64a10,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}


