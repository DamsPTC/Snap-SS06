/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102841558; end: 10284158b; -[_TtC27LocationStatusMessagePlugin27LocationStatusMessagePlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102841558(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec4198);
  *(undefined8 *)(param_1 + _DAT_112ec4198) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10284158c; end: 102841a1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10284158c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long unaff_x20;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_68;
  
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112ec41a0);
  func_0x000107c4ce08(puVar2,param_2,param_1);
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c4051c();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    puVar4 = puVar3;
    func_0x000107c5bd28();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102841a20);
      (*pcVar1)();
    }
    puVar3 = puVar4;
    func_0x000107c4b924();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    if (puVar3 != (undefined *)0x0) {
      puVar4 = puVar2;
      func_0x000107c4cde0(puVar2);
      func_0x000107c61180();
      lVar5 = param_2;
      func_0x0001070b210c(param_2,puVar4);
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      if (lVar5 == 0) {
        func_0x000107c615e8(puVar2);
        func_0x000107c61170(puVar3);
        return 0;
      }
      puVar4 = puVar2;
      func_0x000107c4cde0();
      func_0x000107c61180();
      puVar14 = puVar4;
      func_0x0001070b1d3c();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      if (param_2 == 0) {
        func_0x000107c615e8(puVar2);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(lVar5);
        return 0;
      }
      lStack_a8 = lVar5;
      func_0x00010901d7c4();
      func_0x000107c61180();
      puVar4 = puVar14;
      lVar6 = lStack_a8;
      if (lStack_a8 == 0) {
        func_0x000107c5faec();
        puVar4 = puVar14;
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar14);
      }
      func_0x000107c5faec();
      lVar7 = lVar6;
      puVar14 = puVar4;
      func_0x00010901e6c8();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      puVar9 = puVar14;
      if (lVar7 != 0) {
        lStack_a8 = lVar7;
        func_0x000107c5faec();
        puVar9 = puVar14;
        func_0x000107c6142c(puVar4);
        func_0x000107c61170(lVar7);
        puVar4 = puVar14;
      }
      lVar6 = param_2;
      func_0x00010901d7c4();
      func_0x000107c61180();
      puVar14 = puVar9;
      lVar7 = lVar6;
      if (lVar6 == 0) {
        func_0x000107c5faec();
        puVar14 = puVar9;
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar9);
      }
      func_0x000107c5faec();
      lVar8 = lVar7;
      puVar9 = puVar14;
      func_0x00010901e6c8();
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      puVar10 = puVar9;
      if (lVar8 != 0) {
        lVar6 = lVar8;
        func_0x000107c5faec();
        puVar10 = puVar9;
        func_0x000107c6142c(puVar14);
        func_0x000107c61170(lVar8);
        puVar14 = puVar9;
      }
      puVar9 = puVar3;
      func_0x000107c5bd44();
      if ((int)puVar9 == 2) {
        func_0x000102841da0();
      }
      else {
        if ((int)puVar9 != 1) {
          func_0x000107c6142c(puVar4);
          func_0x000107c6142c(puVar14);
          func_0x000107c615e8(puVar2);
          func_0x000107c61170(puVar3);
          func_0x000107c61170(lVar5);
          func_0x000107c61170(param_2);
          return 0;
        }
        FUN_102841cd4();
      }
      lVar7 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar7 + 0x18) = 4;
      *(undefined8 *)(lVar7 + 0x10) = 2;
      puVar11 = PTR___sSSN_11034da80;
      *(undefined **)(lVar7 + 0x38) = PTR___sSSN_11034da80;
      lVar8 = lVar7;
      func_0x00010075bbf0();
      *(long *)(lVar7 + 0x20) = lStack_a8;
      *(undefined **)(lVar7 + 0x28) = puVar4;
      *(undefined **)(lVar7 + 0x60) = puVar11;
      *(long *)(lVar7 + 0x68) = lVar8;
      *(long *)(lVar7 + 0x40) = lVar8;
      *(long *)(lVar7 + 0x48) = lVar6;
      *(undefined **)(lVar7 + 0x50) = puVar14;
      puVar4 = puVar10;
      func_0x000107c5fb00(puVar9,puVar10,lVar7);
      func_0x000107c6142c(puVar10);
      puStack_80 = puVar9;
      puStack_78 = puVar4;
      func_0x000100e8b654();
      func_0x000107c601ec(puVar11,puVar10);
      func_0x000107c6142c(puVar4);
      puVar4 = PTR_PTR_1126ab2a8;
      func_0x000107c610f8();
      func_0x000107c5fadc(puVar11,puVar10);
      func_0x000107c6142c(puVar10);
      func_0x000107c49470();
      func_0x000107c61170(puVar11);
      uVar15 = 0x112ec41d0;
      uVar12 = 0;
      FUN_102841b80(0,0x112ec41d0,&PTR_PTR_1126ab2b0);
      func_0x000107c614e8();
      func_0x000107c3ff48();
      func_0x000107c61180();
      uVar13 = uVar12;
      func_0x000107c5faec();
      func_0x000107c61170(uVar12);
      uVar12 = 0;
      FUN_102841b80(0,0x112ec41d8,&PTR_PTR_1126ab2a8);
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      puStack_80 = puVar4;
      uStack_68 = uVar12;
      func_0x000107c610f8(PTR_PTR_1126c67d8);
      func_0x000107c61174(puVar4);
      FUN_1027efbc4(uVar13,uVar15,&puStack_80,&uStack_a0);
      func_0x000107c615e8(puVar2);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(param_2);
      return uVar13;
    }
  }
  func_0x000107c615e8(puVar2);
  return 0;
}



/* Entry: 102841a20; end: 102841a97; -[_TtC27LocationStatusMessagePlugin27LocationStatusMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_102841a20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10284158c(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102841a98; end: 102841aaf; -[_TtC27LocationStatusMessagePlugin27LocationStatusMessagePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x000102841aac) */

void FUN_102841a98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102841ab0; end: 102841ab7; -[_TtC27LocationStatusMessagePlugin27LocationStatusMessagePlugin pluginType] */

undefined8 FUN_102841ab0(void)

{
  return 1;
}



/* Entry: 102841ab8; end: 102841b17; -[_TtC27LocationStatusMessagePlugin27LocationStatusMessagePlugin init] */

void FUN_102841ab8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LocationStatusMessagePlugin.LocationStatusMessagePlugin",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102841ae4);
  (*pcVar1)();
}



/* Entry: 102841b18; end: 102841b5f; -[_TtC27LocationStatusMessagePlugin27LocationStatusMessagePlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102841b18(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4190));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4198));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ec41a0));
  return;
}



/* Entry: 102841b60; end: 102841b7f;  */

void FUN_102841b60(void)

{
  func_0x000107c61168(&PTR_PTR_112865b60);
  return;
}



/* Entry: 102841b80; end: 102841c0b;  */

void FUN_102841b80(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102841c0c; end: 102841cbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102841c0c(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar4 = *(undefined8 *)(lStack_38 + _DAT_11301aef0);
  func_0x000107c615f0(uVar4);
  func_0x000107c61170(lStack_38);
  lVar1 = 0;
  FUN_102841b60();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112ec4190) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ec4198) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ec41a0) = uVar4;
  plVar3 = &lStack_48;
  lStack_48 = lVar2;
  lStack_40 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 102841cbc; end: 102841cd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102841cbc(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar4 = *(undefined8 *)(lStack_38 + _DAT_11301aef0);
  func_0x000107c615f0(uVar4);
  func_0x000107c61170(lStack_38);
  lVar1 = 0;
  FUN_102841b60();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112ec4190) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ec4198) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ec41a0) = uVar4;
  plVar3 = &lStack_48;
  lStack_48 = lVar2;
  lStack_40 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 102841cd4; end: 102841e6b;  */

undefined1  [16] FUN_102841cd4(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe7;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f0c2c60);
  uVar3 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0c2c80);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102841da0);
  (*pcVar1)();
}



/* Entry: 102841e6c; end: 102841e7b; -[_TtC28MapLocationCardMessagePlugin28MapLocationCardMessagePlugin messageViewEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102841e6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec41e0));
  return;
}



/* Entry: 102841e7c; end: 102841eaf; -[_TtC28MapLocationCardMessagePlugin28MapLocationCardMessagePlugin setMessageViewEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102841e7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec41e0);
  *(undefined8 *)(param_1 + _DAT_112ec41e0) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102841eb0; end: 102841ebf; -[_TtC28MapLocationCardMessagePlugin28MapLocationCardMessagePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102841eb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec41e8));
  return;
}



/* Entry: 102841ec0; end: 102841eff; -[_TtC28MapLocationCardMessagePlugin28MapLocationCardMessagePlugin setActiveConversationIdObservable:] */

void FUN_102841ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102841f00(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102841f00; end: 10284203f;  */

/* WARNING: Possible PIC construction at 0x000102841f34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102841fe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102842000: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102841fe8) */
/* WARNING: Removing unreachable block (ram,0x000102841f38) */
/* WARNING: Removing unreachable block (ram,0x000102842024) */
/* WARNING: Removing unreachable block (ram,0x000102841f40) */
/* WARNING: Removing unreachable block (ram,0x000102842004) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102841f00(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ec41e8);
  *(undefined8 *)(unaff_x20 + _DAT_112ec41e8) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102842040; end: 1028421cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102842040(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [24];
  
  puVar5 = auStack_80;
  lVar2 = param_1;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    lVar2 = param_2 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar2 + _DAT_112ec42a8);
      func_0x000107c6157c(uVar3);
      func_0x000107c61170(lVar2);
      func_0x000100075034(FUN_1028421d0,0,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar3);
    }
    func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
    lVar2 = param_2 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      uVar3 = 0;
      func_0x0001000c6560();
      func_0x000107c613fc();
      func_0x0001000c6580();
      uVar4 = *(undefined8 *)(lVar2 + _DAT_112ec4288);
      *(undefined8 *)(lVar2 + _DAT_112ec4288) = uVar3;
      func_0x000107c61170(lVar2);
      func_0x000107c61574(uVar4);
    }
  }
  else {
    func_0x000107c61170();
  }
  func_0x000107c61428(param_2 + 0x10,auStack_80,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c4dfe8();
    func_0x000107c61180();
    if (param_1 == 0) {
      lVar2 = 0;
      puVar5 = (undefined1 *)0x0;
    }
    else {
      lVar2 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
    }
    plVar1 = (long *)(param_2 + _DAT_112ec4280);
    lVar6 = plVar1[1];
    *plVar1 = lVar2;
    plVar1[1] = (long)puVar5;
    func_0x000107c61170(param_2);
    func_0x000107c6142c(lVar6);
  }
  return;
}



/* Entry: 1028421d0; end: 10284220b;  */

void FUN_1028421d0(undefined8 *param_1)

{
  undefined *puVar1;
  
  func_0x000107c6142c(*param_1);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001003d8468();
  *param_1 = puVar1;
  return;
}



/* Entry: 10284220c; end: 10284221b; -[_TtC28MapLocationCardMessagePlugin28MapLocationCardMessagePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284220c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec41f0));
  return;
}



/* Entry: 10284221c; end: 10284224f; -[_TtC28MapLocationCardMessagePlugin28MapLocationCardMessagePlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284221c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec41f0);
  *(undefined8 *)(param_1 + _DAT_112ec41f0) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102842250; end: 102842263; -[_TtC28MapLocationCardMessagePlugin28MapLocationCardMessagePlugin setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102842250(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec41f8,param_3);
  return;
}



/* Entry: 102842264; end: 1028424bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102842264(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  int iVar9;
  undefined8 uVar10;
  long alStack_90 [3];
  undefined8 uStack_78;
  undefined *apuStack_70 [3];
  undefined8 uStack_58;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec4270);
  func_0x000107c4ce08(lVar2,param_2,param_1);
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4051c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c5a934();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028424b8);
      (*pcVar1)();
    }
    lVar3 = lVar4;
    func_0x000107c4b8a0();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar3 != 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar2;
      func_0x000107c4051c();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = lVar3;
        func_0x000107c5a934();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1028424bc);
          (*pcVar1)();
        }
        lVar3 = lVar4;
        func_0x000107c4b8a0();
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        if (lVar3 != 0) {
          lVar4 = lVar3;
          func_0x000107c5d0f0();
          func_0x000107c61170(lVar3);
          iVar9 = (int)lVar4;
          if (0 < iVar9) {
            if (iVar9 == 3) {
              uVar10 = 2;
            }
            else if (iVar9 == 2) {
              uVar10 = 0;
            }
            else {
              if (iVar9 != 1) goto LAB_102842398;
              uVar10 = 1;
            }
            puVar5 = PTR_PTR_1126ab2b8;
            func_0x000107c610f8();
            func_0x000107c453e4();
            func_0x000107c5a0f8();
            lVar3 = lVar2;
            FUN_1028424bc(lVar2,param_2,uVar10);
            uVar10 = 0x112ec42e0;
            uVar6 = 0;
            func_0x0001028465ac(0,0x112ec42e0,&PTR_PTR_1126ab2c0);
            func_0x000107c614e8();
            func_0x000107c3ff48();
            func_0x000107c61180();
            uVar7 = uVar6;
            func_0x000107c5faec();
            func_0x000107c61170(uVar6);
            uVar6 = 0;
            func_0x0001028465ac(0,0x112ec42e8,&PTR_PTR_1126ab2b8);
            uVar8 = 0;
            apuStack_70[0] = puVar5;
            uStack_58 = uVar6;
            func_0x0001028465ac(0,0x112ec42f0,&PTR_PTR_1126ab2c8);
            alStack_90[0] = lVar3;
            uStack_78 = uVar8;
            func_0x000107c610f8(PTR_PTR_1126c67d8);
            FUN_1027efbc4(uVar7,uVar10,apuStack_70,alStack_90);
            func_0x000107c615e8(lVar2);
            return uVar7;
          }
        }
      }
    }
  }
LAB_102842398:
  func_0x000107c615e8(lVar2);
  return 0;
}



/* Entry: 1028424bc; end: 102842f47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1028424bc(ulong param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined *puVar16;
  undefined *puVar17;
  code *pcVar18;
  ulong uVar19;
  ulong uVar20;
  long unaff_x20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  long *plVar24;
  ulong uVar25;
  code *pcVar26;
  undefined8 uVar27;
  int iVar28;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  puVar1 = PTR_PTR_1126ab2c8;
  func_0x000107c610f8(PTR_PTR_1126ab2c8);
  func_0x000107c453e4();
  uVar4 = param_1;
  func_0x000107c4cde0();
  func_0x000107c61180();
  uVar2 = param_2;
  uVar10 = uVar4;
  func_0x0001070b210c();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  if (uVar2 == 0) {
    return puVar1;
  }
  uVar4 = uVar2;
  func_0x000107c5d984();
  func_0x000107c61180();
  if (uVar4 == 0) {
LAB_102842f0c:
    func_0x000107c61170(uVar2);
  }
  else {
    uVar3 = uVar4;
    func_0x000107c5faec();
    func_0x000107c61170(uVar4);
    uVar4 = *(ulong *)(unaff_x20 + _DAT_112ec4208);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar4 == 0) {
      func_0x000107c61170(uVar2);
    }
    else {
      uVar5 = param_1;
      uVar19 = param_2;
      FUN_1028461a4();
      if (uVar19 != 0) {
        uVar25 = uVar5;
        func_0x000107c5fadc();
        func_0x0001070b210c(param_2,uVar25);
        func_0x000107c61180();
        func_0x000107c61170(uVar25);
        if (param_2 == 0) {
          func_0x000107c61170(uVar2);
          func_0x000107c615e8(uVar4);
          func_0x000107c6142c(uVar10);
          func_0x000107c6142c(uVar19);
          return puVar1;
        }
        iVar28 = (int)param_3;
        uVar25 = uVar3;
        uVar21 = uVar10;
        if (iVar28 != 0) {
          uVar25 = uVar5;
          uVar21 = uVar19;
        }
        func_0x000107c61434(uVar21);
        FUN_102842fe0(uVar25,uVar21);
        func_0x000107c6142c(uVar21);
        if (uVar25 != 0) {
          func_0x000107c562b0(puVar1);
          func_0x000107c615e8(uVar25);
        }
        puVar6 = &UNK_1105567d8;
        func_0x000107c613fc(&UNK_1105567d8,0x18,7);
        func_0x000107c61614(puVar6 + 0x10,unaff_x20);
        puVar7 = &UNK_110556800;
        uVar20 = 0x3c;
        func_0x000107c613fc(&UNK_110556800,0x3c,7);
        *(undefined **)(puVar7 + 0x10) = puVar6;
        *(ulong *)(puVar7 + 0x18) = uVar3;
        *(ulong *)(puVar7 + 0x20) = uVar10;
        *(ulong *)(puVar7 + 0x28) = uVar5;
        *(ulong *)(puVar7 + 0x30) = uVar19;
        *(int *)(puVar7 + 0x38) = iVar28;
        pcStack_80 = FUN_1028462e4;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        pcStack_90 = (code *)&UNK_1000f6b44;
        puStack_88 = &UNK_110556818;
        ppuVar8 = &puStack_a0;
        puStack_78 = puVar7;
        func_0x000107c60bc4(ppuVar8);
        puVar6 = puStack_78;
        func_0x000107c61434(uVar10);
        func_0x000107c61434(uVar19);
        func_0x000107c61574(puVar6);
        func_0x000107c54fc4(puVar1);
        func_0x000107c60bd0(ppuVar8);
        uVar25 = uVar2;
        func_0x000107c42120();
        func_0x000107c61180();
        uVar21 = uVar20;
        uVar22 = uVar2;
        if (uVar25 == 0) {
LAB_10284276c:
          func_0x000107c5db08();
          func_0x000107c61180();
          if (uVar22 == 0) goto LAB_102842738;
LAB_102842780:
          uVar25 = uVar22;
          func_0x000107c5faec();
          func_0x000107c61170(uVar22);
        }
        else {
          uVar9 = uVar25;
          func_0x000107c5faec();
          uVar21 = uVar20;
          func_0x000107c61170(uVar25);
          func_0x000107c6142c(uVar20);
          uVar25 = uVar9 & 0xffffffffffff;
          if ((uVar20 & 0x2000000000000000) != 0) {
            uVar25 = uVar20 >> 0x38 & 0xf;
          }
          if (uVar25 == 0) goto LAB_10284276c;
          func_0x000107c42120();
          func_0x000107c61180();
          if (uVar22 != 0) goto LAB_102842780;
LAB_102842738:
          uVar25 = 0;
          uVar21 = 0xe000000000000000;
        }
        uVar22 = uVar21;
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar21);
        uVar21 = uVar25;
        func_0x00010901e6c8();
        func_0x000107c61180();
        func_0x000107c61170(uVar25);
        if (uVar21 == 0) {
          uVar25 = 0;
          uVar22 = 0xe000000000000000;
        }
        else {
          uVar25 = uVar21;
          func_0x000107c5faec();
          func_0x000107c61170(uVar21);
        }
        puVar6 = &UNK_1105567d8;
        func_0x000107c613fc(&UNK_1105567d8,0x18,7);
        func_0x000107c61614(puVar6 + 0x10,unaff_x20);
        puVar7 = &UNK_110556850;
        uVar21 = 0x48;
        func_0x000107c613fc(&UNK_110556850,0x48,7);
        *(undefined **)(puVar7 + 0x10) = puVar6;
        *(ulong *)(puVar7 + 0x18) = uVar3;
        *(ulong *)(puVar7 + 0x20) = uVar10;
        *(ulong *)(puVar7 + 0x28) = uVar5;
        *(ulong *)(puVar7 + 0x30) = uVar19;
        *(ulong *)(puVar7 + 0x38) = uVar25;
        *(ulong *)(puVar7 + 0x40) = uVar22;
        pcStack_80 = (code *)0x102846314;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        pcStack_90 = FUN_1028436dc;
        puStack_88 = &UNK_110556868;
        ppuVar8 = &puStack_a0;
        puStack_78 = puVar7;
        func_0x000107c60bc4(ppuVar8);
        func_0x000107c61574(puStack_78);
        func_0x000107c54fbc(puVar1);
        func_0x000107c60bd0(ppuVar8);
        puVar6 = PTR_PTR_1126ae820;
        func_0x000107c610f8();
        func_0x000107c453e4();
        puVar7 = puVar6;
        func_0x000107c5cb24();
        func_0x000107c61180();
        func_0x000107c54224(puVar1);
        func_0x000107c61170(puVar7);
        uVar10 = param_1;
        func_0x000107c40258(param_1);
        func_0x000107c61180();
        if (iVar28 == 0) {
          func_0x000107c61170();
          plVar13 = *(long **)(unaff_x20 + _DAT_112ec4238);
          func_0x000107c5c734();
          func_0x000107c61180();
          uVar10 = uVar21;
          if (plVar13 != (long *)0x0) {
            plVar24 = *(long **)(unaff_x20 + _DAT_112ec4230);
            plVar14 = plVar24;
            func_0x000107c5c734();
            func_0x000107c61180();
            if (plVar14 == (long *)0x0) {
              func_0x000107c615e8(plVar13);
              uVar10 = uVar21;
            }
            else {
              func_0x000107c5c734();
              func_0x000107c61180();
              if (plVar24 != (long *)0x0) {
                plVar15 = plVar24;
                func_0x000107c407bc();
                uVar10 = uVar2;
                FUN_102843f2c(uVar2,param_2,0,0,(int)plVar15 == 3);
                func_0x000107c4d664(puVar6);
                func_0x000107c615e8(plVar24);
                func_0x000107c61170(uVar10);
              }
              func_0x0001000285a8(0x112eafb88,&UNK_10dac3fb0);
              plVar24 = plVar14;
              func_0x000107c4e640();
              func_0x000107c61180();
              plVar15 = plVar24;
              func_0x0001000b637c();
              func_0x000107c61170(plVar24);
              puVar7 = &UNK_1105567d8;
              func_0x000107c613fc(&UNK_1105567d8,0x18,7);
              func_0x000107c61614(puVar7 + 0x10,unaff_x20);
              puVar16 = &UNK_1105568c8;
              func_0x000107c613fc(&UNK_1105568c8,0x38,7);
              *(undefined **)(puVar16 + 0x10) = puVar7;
              *(ulong *)(puVar16 + 0x18) = uVar2;
              *(ulong *)(puVar16 + 0x20) = param_2;
              *(undefined4 *)(puVar16 + 0x28) = 0;
              *(undefined **)(puVar16 + 0x30) = puVar6;
              pcVar26 = *(code **)(*plVar15 + 0x60);
              uVar10 = uVar2;
              func_0x000107c61174();
              uVar3 = param_2;
              func_0x000107c61174();
              puVar17 = puVar6;
              func_0x000107c61174();
              uVar27 = 0x102846330;
              puVar7 = puVar16;
              (*pcVar26)(0x102846330);
              func_0x000107c61574(plVar15);
              func_0x000107c61574(puVar16);
              func_0x000107c614f0(uVar27);
              lVar23 = _DAT_112ec4288;
              uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112ec4288);
              pcVar26 = *(code **)(puVar7 + 0x10);
              func_0x000107c6157c(uVar12);
              (*pcVar26)();
              func_0x000107c615e8(uVar27);
              func_0x000107c61574(uVar12);
              func_0x0001000285a8(0x112e573b0,&UNK_10dacc510);
              plVar24 = plVar13;
              func_0x000107c4ec88();
              func_0x000107c61180();
              plVar15 = plVar24;
              func_0x0001000b637c();
              func_0x000107c61170(plVar24);
              puVar7 = &UNK_1105567d8;
              func_0x000107c613fc(&UNK_1105567d8,0x18,7);
              func_0x000107c61614(puVar7 + 0x10,unaff_x20);
              puVar16 = &UNK_1105568f0;
              func_0x000107c613fc(&UNK_1105568f0,0x38,7);
              *(undefined **)(puVar16 + 0x10) = puVar7;
              *(ulong *)(puVar16 + 0x18) = uVar10;
              *(ulong *)(puVar16 + 0x20) = uVar3;
              *(undefined4 *)(puVar16 + 0x28) = 0;
              *(undefined **)(puVar16 + 0x30) = puVar17;
              pcVar26 = *(code **)(*plVar15 + 0x60);
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61174();
              uVar27 = 0x10284633c;
              puVar7 = puVar16;
              (*pcVar26)(0x10284633c);
              func_0x000107c61574(plVar15);
              func_0x000107c61574(puVar16);
              func_0x000107c614f0(uVar27);
              uVar12 = *(undefined8 *)(unaff_x20 + lVar23);
              pcVar26 = *(code **)(puVar7 + 0x10);
              func_0x000107c6157c(uVar12);
              (*pcVar26)();
              func_0x000107c615e8(uVar27);
              func_0x000107c61574(uVar12);
              puVar7 = &UNK_1105567d8;
              func_0x000107c613fc(&UNK_1105567d8,0x18,7);
              func_0x000107c61614(puVar7 + 0x10,unaff_x20);
              puVar16 = &UNK_110556918;
              func_0x000107c613fc(&UNK_110556918,0x38,7);
              *(undefined **)(puVar16 + 0x10) = puVar7;
              *(ulong *)(puVar16 + 0x18) = uVar10;
              *(ulong *)(puVar16 + 0x20) = uVar3;
              *(undefined4 *)(puVar16 + 0x28) = 0;
              *(undefined **)(puVar16 + 0x30) = puVar17;
              func_0x000107c61174();
              func_0x000107c61174(uVar3);
              func_0x000107c61174(puVar17);
              uVar3 = 0x102846348;
              puVar7 = puVar16;
              func_0x0001000b6504();
              func_0x000107c61574(puVar16);
              uVar10 = uVar3;
              func_0x000107c614f0();
              uVar27 = *(undefined8 *)(unaff_x20 + lVar23);
              pcVar26 = *(code **)(puVar7 + 0x10);
              func_0x000107c6157c(uVar27);
              (*pcVar26)();
              func_0x000107c615e8(plVar13);
              func_0x000107c615e8(plVar14);
              func_0x000107c615e8(uVar3);
              func_0x000107c61574(uVar27);
            }
          }
        }
        else {
          uVar3 = uVar10;
          func_0x000107c5faec();
          func_0x000107c61170(uVar10);
          uVar10 = param_2;
          FUN_102843718(uVar2,param_2,uVar3,uVar21,param_3,puVar6);
          func_0x000107c6142c(uVar21);
        }
        uVar3 = uVar4;
        func_0x000107c448d0();
        if ((uVar3 & 1) == 0) {
          func_0x000107c4fd74(0,uVar4);
        }
        func_0x000107c40258();
        func_0x000107c61180();
        uVar3 = param_1;
        func_0x000107c5faec();
        func_0x000107c61170(param_1);
        lVar23 = *(long *)(unaff_x20 + _DAT_112ec41e0);
        if (lVar23 == 0) {
          pcVar26 = (code *)PTR_PTR_1126ae6b8;
          func_0x000107c61168(PTR_PTR_1126ae6b8);
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c45a48();
          func_0x000107c4a8a4(pcVar26);
          func_0x000107c61180();
          func_0x000107c61170(puVar7);
        }
        else {
          func_0x0001000285a8(0x112ec2498,&UNK_10dae3650);
          func_0x000107c61174(lVar23);
          lVar11 = lVar23;
          func_0x0001000b637c();
          puVar7 = &UNK_1105568a0;
          func_0x000107c613fc(&UNK_1105568a0,0x20,7);
          *(ulong *)(puVar7 + 0x10) = uVar3;
          *(ulong *)(puVar7 + 0x18) = uVar10;
          func_0x000107c61434(uVar10);
          uVar27 = 0x102846328;
          func_0x0001000c0ebc(0x102846328,puVar7);
          func_0x000107c61574(lVar11);
          func_0x000107c61574(puVar7);
          uVar12 = 0;
          func_0x0001028465ac(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          pcVar26 = FUN_102844e24;
          func_0x0001000bfde0(FUN_102844e24,0,uVar12);
          func_0x000107c61574(uVar27);
          func_0x00010109e534();
          func_0x0001000c2068();
          func_0x000107c61574(pcVar26);
          func_0x0001004575f0();
          func_0x000107c61170(lVar23);
          func_0x000107c61574(uVar27);
        }
        func_0x000107c6142c(uVar10);
        pcVar18 = pcVar26;
        func_0x000107c5cb24(pcVar26);
        func_0x000107c61180();
        func_0x000107c56660(puVar1);
        func_0x000107c61170(pcVar18);
        func_0x000107c61170(puVar6);
        func_0x000107c615e8(uVar4);
        func_0x000107c61170(param_2);
        func_0x000107c61170(pcVar26);
        goto LAB_102842f0c;
      }
      func_0x000107c61170(uVar2);
      func_0x000107c615e8(uVar4);
    }
    func_0x000107c6142c(uVar10);
  }
  return puVar1;
}



/* Entry: 102842f48; end: 102842fbf; -[_TtC28MapLocationCardMessagePlugin28MapLocationCardMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_102842f48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102842264(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102842fc0; end: 102842fd7; -[_TtC28MapLocationCardMessagePlugin28MapLocationCardMessagePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x000102842fd4) */

void FUN_102842fc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102842fd8; end: 102842fdf; -[_TtC28MapLocationCardMessagePlugin28MapLocationCardMessagePlugin pluginType] */

undefined8 FUN_102842fd8(void)

{
  return 0;
}



/* Entry: 102842fe0; end: 1028431d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102842fe0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  lVar1 = *(long *)(unaff_x20 + _DAT_112ec4210);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      puVar3 = &UNK_1105567d8;
      func_0x000107c613fc(&UNK_1105567d8,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      puVar4 = &UNK_110556bc0;
      func_0x000107c613fc(&UNK_110556bc0,0x28,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(undefined8 *)(puVar4 + 0x18) = param_1;
      *(undefined8 *)(puVar4 + 0x20) = param_2;
      uStack_50 = 0x102846578;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_100f11710;
      puStack_58 = &UNK_110556bd8;
      puStack_48 = puVar4;
      func_0x000107c60bc4(&puStack_70);
      puVar3 = puStack_48;
      func_0x000107c61434(param_2);
      func_0x000107c61574(puVar3);
      func_0x0001028465ac(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
      func_0x000107c614e8();
      func_0x000107c4c214(lVar2);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1028431d4; end: 10284345b;  */

/* WARNING: Possible PIC construction at 0x000102843298: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102843400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102843410: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102843404) */
/* WARNING: Removing unreachable block (ram,0x00010284329c) */
/* WARNING: Removing unreachable block (ram,0x0001028432a0) */
/* WARNING: Removing unreachable block (ram,0x000102843414) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028431d4(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x20;
  
  lVar3 = unaff_x20 + _DAT_112ec41f8;
  func_0x000107c61618();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_112ec4238);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) goto code_r0x000107c615e8;
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112ec4200);
  uVar2 = ((ulong *)(unaff_x20 + _DAT_112ec4200))[1];
  if (param_1 == uVar1 && param_2 == uVar2) {
LAB_10284330c:
    param_1 = 0;
    func_0x00010451c820();
    func_0x00010451989c();
  }
  else {
    uVar5 = param_1;
    func_0x000107c605b8(param_1,param_2,uVar1,uVar2,0);
    if (param_5 != 0) {
      if ((uVar5 & 1) == 0) {
        lVar6 = lVar4;
        func_0x000107c4ec80();
        func_0x000107c61180();
        if (lVar6 != 0) {
          func_0x000107c443c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_release_11034d2d0)(lVar6);
          return;
        }
      }
      goto LAB_10284330c;
    }
    if ((uVar5 & 1) != 0) goto LAB_10284330c;
    func_0x00010451c820(0);
    func_0x0001045198cc(param_1,param_2,0,0,3);
  }
  func_0x0001045162e4(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  uVar7 = 6;
  func_0x000104515e00(6,2,0x1c,0xe);
  puVar8 = &UNK_1105567d8;
  func_0x000107c613fc(&UNK_1105567d8,0x18,7);
  func_0x000107c61614(puVar8 + 0x10);
  puVar9 = &UNK_110556b70;
  func_0x000107c613fc(&UNK_110556b70,0x30,7);
  *(undefined **)(puVar9 + 0x10) = puVar8;
  *(ulong *)(puVar9 + 0x18) = param_1;
  *(undefined8 *)(puVar9 + 0x20) = uVar7;
  *(long *)(puVar9 + 0x28) = lVar3;
  func_0x000107c61174(uVar7);
  func_0x000107c615f0(lVar3);
  uVar7 = 0x50;
  func_0x0001001ca524(0x50,0,0x3c,4,0,0,&UNK_10dae4418,puVar9);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(uVar7);
  lVar3 = lVar4;
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
  return;
}



/* Entry: 10284345c; end: 1028436db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284345c(int param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                  ,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    return;
  }
  if (param_1 < 2) {
    if (param_1 == 0) {
      lVar6 = *(long *)(param_2 + _DAT_112ec4230);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar6 != 0) {
        pcStack_68 = FUN_102845c80;
        puStack_60 = (undefined *)0x0;
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0x42000000;
        puStack_78 = &UNK_100288f10;
        puStack_70 = &UNK_110556b38;
        ppuVar5 = &puStack_88;
        func_0x000107c60bc4(ppuVar5);
        func_0x000107c503a8(lVar6);
        func_0x000107c61170(param_2);
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c615e8(lVar6);
        return;
      }
      goto LAB_10284369c;
    }
    if (param_1 != 1) {
LAB_1028436b8:
      func_0x000102846490(0);
      puStack_88 = (undefined *)CONCAT44(puStack_88._4_4_,param_1);
      func_0x000107c60614();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1028436dc);
      (*pcVar2)();
    }
    puVar1 = (undefined8 *)(param_2 + _DAT_112ec4298);
    uVar3 = puVar1[1];
    *puVar1 = param_3;
    puVar1[1] = param_4;
    func_0x000107c6142c(uVar3);
    func_0x000107c61434(param_4);
  }
  else if (param_1 != 2) {
    if (param_1 == 3) {
      puVar1 = (undefined8 *)(param_2 + _DAT_112ec4298);
      uVar3 = puVar1[1];
      *puVar1 = param_3;
      puVar1[1] = param_4;
      func_0x000107c6142c(uVar3);
      lVar6 = *(long *)(param_2 + _DAT_112ec4230);
      func_0x000107c61434(param_4);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar6 != 0) {
        func_0x000107c5fadc(param_7,param_8);
        puVar4 = &UNK_1105567d8;
        func_0x000107c613fc(&UNK_1105567d8,0x18,7);
        func_0x000107c61614(puVar4 + 0x10,param_2);
        pcStack_68 = (code *)0x1028464a4;
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0x42000000;
        puStack_78 = &UNK_100288f10;
        puStack_70 = &UNK_110556b10;
        ppuVar5 = &puStack_88;
        puStack_60 = puVar4;
        func_0x000107c60bc4(ppuVar5);
        func_0x000107c61574(puStack_60);
        func_0x000107c5033c(lVar6);
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c61170(param_2);
        func_0x000107c615e8(lVar6);
        param_2 = param_7;
      }
    }
    else if (param_1 != 4) goto LAB_1028436b8;
    goto LAB_10284369c;
  }
  FUN_102845534(param_3,param_4);
LAB_10284369c:
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1028436dc; end: 102843717;  */

void FUN_1028436dc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 102843718; end: 102843e9f;  */

/* WARNING: Possible PIC construction at 0x0001028439b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028439c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102843a3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102843a80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102843b30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102843b74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102843c5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102843ca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102843d80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102843e50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102843e60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102843e74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102843e54) */
/* WARNING: Removing unreachable block (ram,0x000102843d84) */
/* WARNING: Removing unreachable block (ram,0x000102843ca4) */
/* WARNING: Removing unreachable block (ram,0x000102843c60) */
/* WARNING: Removing unreachable block (ram,0x000102843b78) */
/* WARNING: Removing unreachable block (ram,0x000102843b34) */
/* WARNING: Removing unreachable block (ram,0x000102843a84) */
/* WARNING: Removing unreachable block (ram,0x000102843a40) */
/* WARNING: Removing unreachable block (ram,0x000102843a88) */
/* WARNING: Removing unreachable block (ram,0x000102843aa8) */
/* WARNING: Removing unreachable block (ram,0x000102843e70) */
/* WARNING: Removing unreachable block (ram,0x000102843ad0) */
/* WARNING: Removing unreachable block (ram,0x000102843b3c) */
/* WARNING: Removing unreachable block (ram,0x000102843af4) */
/* WARNING: Removing unreachable block (ram,0x000102843a50) */
/* WARNING: Removing unreachable block (ram,0x0001028439c8) */
/* WARNING: Removing unreachable block (ram,0x0001028439b8) */
/* WARNING: Removing unreachable block (ram,0x000102843e64) */
/* WARNING: Removing unreachable block (ram,0x000102843e78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102843718(undefined *param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  char cStack_61;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ec4260);
  puVar6 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  puVar2 = param_1;
  func_0x000107c5d984();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  puVar3 = puVar2;
  func_0x000107c5faec();
  puVar4 = param_2;
  puVar7 = puVar6;
  func_0x000107c5d984();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
    func_0x000107c615e8(lVar1);
    func_0x000107c6142c(puVar6);
  }
  else {
    func_0x000107c5faec();
    uVar5 = 0x6576696c;
    if (param_5 != 2) {
      uVar5 = 0x72616c75676572;
    }
    uVar8 = 0xe400000000000000;
    if (param_5 != 2) {
      uVar8 = 0xe700000000000000;
    }
    puStack_a0 = puVar3;
    puStack_98 = puVar6;
    func_0x000107c61434(puVar6);
    func_0x000107c5fb78(0x5f,0xe100000000000000);
    func_0x000107c5fb78(puVar4,puVar7);
    func_0x000107c5fb78(0x5f,0xe100000000000000);
    func_0x000107c5fb78(uVar5,uVar8);
    func_0x000107c6142c(uVar8);
    puVar4 = puStack_98;
    puVar3 = puStack_a0;
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ec42a8);
    puStack_90 = puStack_a0;
    puStack_88 = puStack_98;
    func_0x000107c6157c(uVar8);
    uVar5 = 0x112dc3dc8;
    func_0x0001000285a8(0x112dc3dc8,&UNK_10d9813a0);
    func_0x000100075034(&cStack_61,FUN_102846360,&puStack_a0,uVar5);
    func_0x000107c61574(uVar8);
    func_0x000107c6142c(puVar7);
    func_0x000107c6142c(puVar6);
    if (cStack_61 == '\x02') {
      puVar6 = &UNK_1105567d8;
      func_0x000107c613fc(&UNK_1105567d8,0x18,7);
      func_0x000107c61614(puVar6 + 0x10);
      puVar2 = &UNK_1105569e0;
      func_0x000107c613fc(&UNK_1105569e0,0x58,7);
      *(undefined **)(puVar2 + 0x10) = puVar6;
      *(undefined **)(puVar2 + 0x18) = puVar3;
      *(undefined **)(puVar2 + 0x20) = puVar4;
      *(undefined **)(puVar2 + 0x28) = param_1;
      *(undefined **)(puVar2 + 0x30) = param_2;
      *(int *)(puVar2 + 0x38) = param_5;
      *(undefined8 *)(puVar2 + 0x40) = param_6;
      *(undefined8 *)(puVar2 + 0x48) = param_3;
      *(undefined8 *)(puVar2 + 0x50) = param_4;
      uStack_80 = 0x102846378;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_98 = (undefined *)0x42000000;
      puStack_90 = &UNK_1013b7310;
      puStack_88 = &UNK_1105569f8;
      puStack_78 = puVar2;
      func_0x000107c60bc4(&puStack_a0);
      puVar6 = puStack_78;
      func_0x000107c61174(param_1);
      func_0x000107c61174(param_2);
      func_0x000107c61174(param_6);
      func_0x000107c61434(param_4);
      func_0x000107c61574(puVar6);
      func_0x000107c44104(lVar1);
      goto code_r0x000107c615e8;
    }
    func_0x000107c6142c(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 102843ea0; end: 102843f2b;  */

void FUN_102843ea0(undefined1 *param_1,long *param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined1 uVar2;
  
  lVar1 = *param_2;
  if (*(long *)(lVar1 + 0x10) == 0) {
    uVar2 = 2;
  }
  else {
    func_0x000107c61434(lVar1);
    func_0x000100029284();
    if ((param_4 & 1) == 0) {
      func_0x000107c6142c(lVar1);
      uVar2 = 2;
    }
    else {
      uVar2 = *(undefined1 *)(*(long *)(lVar1 + 0x38) + param_3);
      func_0x000107c6142c(lVar1);
    }
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 102843f2c; end: 1028448a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102843f2c(undefined *param_1,undefined *param_2,undefined8 param_3,uint param_4)

{
  ulong uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long unaff_x20;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  undefined *puVar16;
  
  puVar3 = PTR_PTR_1126ab2d0;
  puVar9 = param_2;
  func_0x000107c610f8(PTR_PTR_1126ab2d0);
  func_0x000107c453e4();
  puVar16 = param_1;
  func_0x000107c5d984();
  func_0x000107c61180();
  if (puVar16 == (undefined *)0x0) {
    return puVar3;
  }
  puVar4 = puVar16;
  func_0x000107c5faec();
  puVar13 = param_2;
  puVar10 = puVar9;
  func_0x000107c5d984();
  func_0x000107c61180();
  if (puVar13 == (undefined *)0x0) {
    func_0x000107c6142c(puVar9);
    goto LAB_102844380;
  }
  puVar5 = puVar13;
  func_0x000107c5faec();
  puVar14 = *(undefined **)(unaff_x20 + _DAT_112ec4200);
  puVar11 = (undefined *)((long *)(unaff_x20 + _DAT_112ec4200))[1];
  if (puVar14 == puVar4 && puVar11 == puVar9) {
    uVar2 = 1;
  }
  else {
    func_0x000107c605b8(puVar14,puVar11,puVar4,puVar9,0);
    uVar2 = (uint)puVar14;
  }
  func_0x000107c55818(puVar3);
  iVar15 = (int)param_3;
  if (iVar15 == 0) {
    func_0x000107c61170(puVar13);
    puVar14 = param_1;
    func_0x000107c3e9e8();
    func_0x000107c61180();
    puVar13 = puVar16;
    if (puVar14 != (undefined *)0x0) {
      puVar16 = puVar14;
      func_0x000107c3e978();
      func_0x000107c61180();
      func_0x000107c61170(puVar14);
      if (puVar16 != (undefined *)0x0) goto LAB_1028440bc;
    }
    puVar16 = (undefined *)0x0;
  }
  else {
    func_0x000107c61170(puVar16);
    puVar14 = param_2;
    func_0x000107c3e9e8();
    func_0x000107c61180();
    if (puVar14 != (undefined *)0x0) {
      puVar16 = puVar14;
      func_0x000107c3e978();
      func_0x000107c61180();
      func_0x000107c61170(puVar14);
      if (puVar16 != (undefined *)0x0) goto LAB_1028440bc;
    }
    puVar16 = (undefined *)0x0;
  }
LAB_1028440bc:
  func_0x000107c52cc4(puVar3);
  func_0x000107c61170(puVar16);
  func_0x000107c5a344(puVar3);
  func_0x000107c61170(puVar13);
  lVar12 = *(long *)(unaff_x20 + _DAT_112ec4208);
  func_0x000107c61434(puVar9);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar12 == 0) {
    func_0x000107c6142c(puVar9);
  }
  else {
    lVar6 = lVar12;
    if (iVar15 == 0) {
      puVar16 = puVar4;
      puVar11 = puVar9;
      func_0x000107c5fadc(puVar4);
      func_0x000107c4e680();
    }
    else {
      puVar16 = puVar5;
      puVar11 = puVar10;
      func_0x000107c5fadc(puVar5);
      func_0x000107c4e680();
    }
    func_0x000107c61180();
    func_0x000107c61170(puVar16);
    func_0x000107c615e8(lVar12);
    func_0x000107c6142c(puVar9);
    if (lVar6 != 0) {
      func_0x000107c61170(lVar6);
    }
  }
  func_0x000107c5923c(puVar3);
  if ((uVar2 & 1) == 0) {
    param_2 = param_1;
  }
  func_0x000107c61174();
  puVar16 = param_2;
  func_0x000107c42120();
  func_0x000107c61180();
  puVar13 = puVar11;
  puVar14 = param_2;
  if (puVar16 == (undefined *)0x0) {
LAB_10284421c:
    func_0x000107c5db08();
    func_0x000107c61180();
    if (puVar14 == (undefined *)0x0) goto LAB_102844210;
LAB_102844230:
    puVar16 = puVar14;
    func_0x000107c5faec();
    func_0x000107c61170(puVar14);
  }
  else {
    puVar7 = puVar16;
    func_0x000107c5faec();
    puVar13 = puVar11;
    func_0x000107c61170(puVar16);
    func_0x000107c6142c(puVar11);
    uVar1 = (ulong)puVar7 & 0xffffffffffff;
    if (((ulong)puVar11 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)puVar11 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) goto LAB_10284421c;
    func_0x000107c42120();
    func_0x000107c61180();
    if (puVar14 != (undefined *)0x0) goto LAB_102844230;
LAB_102844210:
    puVar16 = (undefined *)0x0;
    puVar13 = (undefined *)0xe000000000000000;
  }
  puVar14 = puVar13;
  func_0x000107c5fadc(puVar16,puVar13);
  func_0x000107c6142c(puVar13);
  puVar13 = puVar16;
  func_0x00010901e6c8();
  func_0x000107c61180();
  func_0x000107c61170(puVar16);
  if (puVar13 == (undefined *)0x0) {
    puVar16 = (undefined *)0x0;
    puVar14 = (undefined *)0xe000000000000000;
  }
  else {
    puVar16 = puVar13;
    func_0x000107c5faec(puVar13);
    func_0x000107c61170(puVar13);
  }
  func_0x000107c5fadc(puVar16,puVar14);
  func_0x000107c6142c(puVar14);
  func_0x000107c54bec(puVar3);
  func_0x000107c61170(puVar16);
  FUN_102844cb4(puVar4,puVar9,puVar5,puVar10,param_3);
  func_0x000107c6142c(puVar9);
  func_0x000107c6142c(puVar10);
  func_0x000107c52ec0(puVar3);
  if ((iVar15 != 0) && ((param_4 & 1) != 0)) {
    func_0x0001028465ac(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar8 = 1;
    func_0x000107c6010c(1);
    func_0x000107c557e8(puVar3);
    func_0x000107c61170(uVar8);
  }
  puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c55664(puVar3);
  func_0x000107c61170(param_2);
LAB_102844380:
  func_0x000107c61170(puVar16);
  return puVar3;
}



/* Entry: 1028448a4; end: 102844a53;  */

void FUN_1028448a4(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  uVar6 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar2 = &UNK_110556940;
    func_0x000107c613fc(&UNK_110556940,0x38,7);
    *(long *)(puVar2 + 0x10) = param_2;
    *(undefined8 *)(puVar2 + 0x18) = param_3;
    *(undefined8 *)(puVar2 + 0x20) = param_4;
    *(undefined4 *)(puVar2 + 0x28) = param_5;
    *(undefined8 *)(puVar2 + 0x30) = param_6;
    puVar3 = &UNK_110556968;
    func_0x000107c613fc(&UNK_110556968,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = 0x10284634c;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_98 = (code *)0x10284669c;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_10103b938;
    puStack_a0 = &UNK_110556980;
    ppuVar4 = &puStack_b8;
    puStack_90 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_90;
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_6);
    func_0x000107c61574(puVar3);
    pcStack_98 = FUN_102844b00;
    puStack_90 = (undefined *)0x0;
    puStack_b8 = puVar1;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_10103b93c;
    puStack_a0 = &UNK_1105569a8;
    ppuVar5 = &puStack_b8;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_90);
    func_0x000107c4c600(uVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar2);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102844a54; end: 102844aff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102844a54(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_2 + _DAT_112ec4230);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c407bc();
    FUN_102843f2c(param_3,param_4,param_5,0,(int)lVar2 == 3);
    func_0x000107c4d664(param_6);
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 102844b00; end: 102844b03;  */

void FUN_102844b00(void)

{
  return;
}



/* Entry: 102844b04; end: 102844cb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102844b04(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + _DAT_112ec4230);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c407bc();
      FUN_102843f2c(param_3,param_4,param_5,0,(int)lVar2 == 3);
      func_0x000107c4d664(param_6);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(param_3);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102844cb4; end: 102844ddb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_102844cb4(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112ec4200);
  uVar2 = ((ulong *)(unaff_x20 + _DAT_112ec4200))[1];
  uVar3 = param_1;
  if ((param_1 != uVar1 || param_2 != uVar2) &&
     (func_0x000107c605b8(param_1,param_2,uVar1,uVar2,0), (uVar3 & 1) == 0)) {
    if ((param_3 != uVar1 || param_4 != uVar2) &&
       (func_0x000107c605b8(param_3,param_4,uVar1,uVar2,0), (param_3 & 1) == 0)) {
      return 4;
    }
    FUN_102844f20(param_1,param_2);
    iVar7 = (int)param_5;
    if (((param_1 & 1) == 0) || (uVar3 = param_1, iVar7 == 2)) {
      if (iVar7 == 1) {
        return param_5;
      }
      if (iVar7 == 2) {
        lVar4 = *(long *)(unaff_x20 + _DAT_112ec4230);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar4 != 0) {
          lVar5 = lVar4;
          func_0x000107c407bc();
          func_0x000107c615e8(lVar4);
          if ((int)lVar5 == 3) {
            return 4;
          }
        }
        return 3;
      }
      return 2;
    }
  }
  func_0x000102844e84();
  uVar6 = 0;
  if ((uVar3 & 1) == 0) {
    uVar6 = 4;
  }
  return (ulong)uVar6;
}



/* Entry: 102844ddc; end: 102844e23;  */

undefined8 FUN_102844ddc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  func_0x000107c5fadc(param_2,param_3);
  func_0x0001070b30c4(uVar1,param_2);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 102844e24; end: 102844f1f;  */

void FUN_102844e24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *param_2;
  func_0x000107c453dc(uVar1);
  func_0x000107c61180();
  func_0x0001070b31f8();
  func_0x000107c61170(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  *param_1 = puVar2;
  return;
}



/* Entry: 102844f20; end: 1028450a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102844f20(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ec4238);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112ec4228);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = *(long *)(unaff_x20 + _DAT_112ec4220);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c615e8(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = *(long *)(unaff_x20 + _DAT_112ec4230);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar4 != 0) {
          puVar5 = PTR_PTR_1126c7238;
          func_0x000107c61168(PTR_PTR_1126c7238);
          func_0x000107c5fadc(param_1,param_2);
          uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ec4200);
          func_0x000107c5fadc(uVar6,((undefined8 *)(unaff_x20 + _DAT_112ec4200))[1]);
          func_0x000107c4b920(puVar5);
          func_0x000107c61170(param_1);
          func_0x000107c61170(uVar6);
          func_0x000107c615e8(lVar4);
          func_0x000107c615e8(lVar3);
          func_0x000107c615e8(lVar2);
          func_0x000107c615e8(lVar1);
          return;
        }
        func_0x000107c615e8(lVar1);
        func_0x000107c615e8(lVar2);
        lVar1 = lVar3;
      }
    }
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 1028450a4; end: 102845123;  */

undefined8 FUN_1028450a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    param_2 = 0;
  }
  else {
    FUN_102845124(param_2,param_3);
    func_0x000107c61170(param_1);
  }
  return param_2;
}



/* Entry: 102845124; end: 1028452d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_102845124(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  
  lVar5 = *(long *)(unaff_x20 + _DAT_112ec4258);
  lVar1 = lVar5;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar5);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8(PTR_PTR_1126ae820);
  func_0x000107c453e4();
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c61170(puVar3);
  func_0x00010438d810(0);
  func_0x000107c610f8();
  func_0x000107c61434(param_5);
  func_0x00010438d238(param_3 + -20.0,0x4066800000000000,param_4,param_5,0,0,0,0,0,0,0);
  puVar3 = PTR_PTR_1126b40c0;
  func_0x000107c610f8(PTR_PTR_1126b40c0);
  func_0x000107c453e4();
  func_0x000107c61174();
  puVar4 = puVar3;
  func_0x00010438caf8();
  func_0x000107c61170(puVar3);
  lVar1 = lVar5;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c42c1c(lVar5);
  }
  else {
    func_0x000107c61170();
  }
  func_0x000107c4d664(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(puVar4);
  return puVar3;
}



/* Entry: 1028452d4; end: 102845533;  */

/* WARNING: Possible PIC construction at 0x000102845410: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102845444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028454d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102845448) */
/* WARNING: Removing unreachable block (ram,0x0001028454d8) */
/* WARNING: Removing unreachable block (ram,0x000102845454) */
/* WARNING: Removing unreachable block (ram,0x000102845414) */
/* WARNING: Removing unreachable block (ram,0x0001028454d4) */
/* WARNING: Removing unreachable block (ram,0x0001028454f0) */
/* WARNING: Removing unreachable block (ram,0x000102845514) */

void FUN_1028452d4(long param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  
  puVar9 = (ulong *)(param_1 + 0x40);
  uVar6 = *puVar9;
  uVar8 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar1 = 0xffffffffffffffff;
  if (-uVar8 < 0x40) {
    uVar1 = ~(-1L << (-uVar8 & 0x3f));
  }
  puVar5 = param_2;
  func_0x000107c61434();
  lVar11 = 0;
  lVar7 = 0;
  uVar10 = uVar1 & uVar6;
  do {
    if (uVar10 != 0) {
      uVar2 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      lVar7 = *(long *)(*(long *)(param_1 + 0x38) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 8 +
                       lVar11 * 0x200);
      func_0x000107c61174();
      lVar11 = lVar7;
      func_0x000107c5d984();
      func_0x000107c61180();
      if (lVar11 == 0) {
        lVar13 = 0;
        puVar12 = (undefined8 *)0x0;
        puVar4 = puVar5;
      }
      else {
        lVar13 = lVar11;
        func_0x000107c5faec();
        puVar4 = puVar5;
        func_0x000107c61170(lVar11);
        puVar12 = puVar5;
      }
      func_0x000107c4cde0();
      func_0x000107c61180();
      lVar11 = param_3;
      func_0x000107c5faec();
      func_0x000107c61170(param_3);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x000101d102f4(param_1,puVar9,~uVar8,0,uVar1 & uVar6);
      }
      else if ((lVar13 == lVar11) && (puVar12 == puVar4)) {
        func_0x000107c61170(lVar7);
        puVar4 = puVar12;
      }
      else {
        func_0x000107c605b8(uVar10 - 1,lVar13,puVar12,lVar11,puVar4,0);
        puVar4 = puVar12;
      }
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar4);
      return;
    }
    lVar11 = lVar7 + 1;
    if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102845534);
      (*pcVar3)();
    }
    if ((long)(0x3f - uVar8 >> 6) <= lVar11) {
      func_0x000101d102f4(param_1,puVar9,~uVar8,0,0);
      puVar4 = (undefined8 *)param_2[1];
      *param_2 = 0;
      param_2[1] = 0;
      goto code_r0x000107c6142c;
    }
    uVar10 = puVar9[lVar11];
    lVar7 = lVar7 + 1;
  } while( true );
}



/* Entry: 102845534; end: 1028456ab;  */

/* WARNING: Possible PIC construction at 0x000102845660: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010284567c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010284568c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102845664) */
/* WARNING: Removing unreachable block (ram,0x000102845680) */
/* WARNING: Removing unreachable block (ram,0x00010284566c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102845534(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar2 = unaff_x20 + _DAT_112ec41f8;
  func_0x000107c61618();
  lVar1 = _DAT_112ec42b0;
  if (lVar2 == 0) {
    return;
  }
  if (*(long *)(unaff_x20 + _DAT_112ec42b0) == 0) {
    lVar3 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    *(undefined8 *)(lVar3 + 0x20) = param_1;
    *(undefined8 *)(lVar3 + 0x28) = param_2;
    func_0x00010034a38c(0);
    func_0x000107c610f8();
    func_0x000107c61434(param_2);
    func_0x000107c61174();
    func_0x000107c615f0();
    func_0x000103a28f00();
    lStack_60 = lVar2;
    func_0x00010008a7c8(&uStack_58,&lStack_60);
    func_0x000100083b20(&lStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + lVar1) = lStack_60;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 1028456ac; end: 10284571b;  */

void FUN_1028456ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x110) = param_4;
  *(undefined8 *)(unaff_x22 + 0x118) = param_5;
  *(undefined8 *)(unaff_x22 + 0x100) = param_2;
  *(undefined8 *)(unaff_x22 + 0x108) = param_3;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x120) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x128) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x130) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10284571c,uVar1,uVar2);
  return;
}



/* Entry: 10284571c; end: 102845927;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284571c(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  long lVar5;
  
  lVar3 = *(long *)(unaff_x22 + 0x100);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0xd0,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x138) = lVar3;
  if (lVar3 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x120));
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
    lVar5 = *(long *)(unaff_x22 + 0x108);
    func_0x000104515b14(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174(uVar4);
    func_0x000107c615f0(uVar1);
    func_0x0001045158a8(lVar5,uVar4,0,uVar1);
    *(long *)(unaff_x22 + 0x140) = lVar5;
    lVar2 = _DAT_113083108;
    func_0x000107c61428(lVar5 + _DAT_113083108,unaff_x22 + 0xe8,1,0);
    func_0x000107c61604(lVar5 + lVar2,lVar3);
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112ec4290);
    *(long *)(lVar3 + _DAT_112ec4290) = lVar5;
    func_0x000107c61174(lVar5);
    func_0x000107c61170(uVar4);
    lVar2 = *(long *)(lVar3 + _DAT_112ec4218);
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x148) = lVar2;
    if (lVar2 != 0) {
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xb0;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_102845928;
      lVar3 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar3,1);
      uVar4 = 0x112ec4188;
      func_0x0001000285a8(0x112ec4188,&UNK_10dae4360);
      *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x88) = uVar4;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(code **)(unaff_x22 + 0x60) = FUN_10283dde8;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_110556b88;
      *(long *)(unaff_x22 + 0x70) = lVar3;
      func_0x000107c61174(lVar5);
      func_0x000107c4ab9c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
    uVar4 = *(undefined8 *)(unaff_x22 + 0x120);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar5);
    func_0x000107c61574(uVar4);
    *(undefined8 *)(unaff_x22 + 0x98) = 0;
    *(undefined8 *)(unaff_x22 + 0x90) = 0;
    *(undefined8 *)(unaff_x22 + 0xa8) = 0;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0;
    func_0x00010006e7f4(unaff_x22 + 0x90);
  }
                    /* WARNING: Could not recover jumptable at 0x000102845924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102845928; end: 10284597b;  */

void FUN_102845928(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x150) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    pcVar1 = FUN_10284597c;
  }
  else {
    pcVar1 = FUN_1028459f0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x128),*(undefined8 *)(lVar2 + 0x130));
  return;
}



/* Entry: 10284597c; end: 1028459ef;  */

void FUN_10284597c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x120);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x138));
  func_0x000107c61170(uVar1);
  func_0x000107c61574(uVar3);
  func_0x000100102924(unaff_x22 + 0xb0,unaff_x22 + 0x90);
  func_0x00010006e7f4(unaff_x22 + 0x90);
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001028459ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1028459f0; end: 102845a7b;  */

void FUN_1028459f0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x140);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x120));
  func_0x000107c61654();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c614ac(uVar3);
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(unaff_x22 + 0xa8) = 0;
  *(undefined8 *)(unaff_x22 + 0xa0) = 0;
  *(undefined8 *)(unaff_x22 + 0x98) = 0;
  *(undefined8 *)(unaff_x22 + 0x90) = 0;
  func_0x00010006e7f4();
                    /* WARNING: Could not recover jumptable at 0x000102845a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102845a7c; end: 102845b17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102845a7c(ulong param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if ((param_1 & 1) != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_50,0,0);
    lVar2 = param_2 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      FUN_102845b18(1);
      func_0x000107c61170(lVar2);
    }
  }
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_2 + _DAT_112ec4298);
    uVar3 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c61170();
    func_0x000107c6142c(uVar3);
  }
  return;
}



/* Entry: 102845b18; end: 102845c7f;  */

/* WARNING: Possible PIC construction at 0x000102845bac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102845bec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102845c24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102845bb0) */
/* WARNING: Removing unreachable block (ram,0x000102845c28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102845b18(void)

{
  long unaff_x20;
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112ec4280))[1];
  if (lVar2 == 0) {
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ec4280);
  lVar3 = *(long *)(unaff_x20 + _DAT_112ec4260);
  func_0x000107c61434(lVar2);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112ec4268);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c5fadc(uVar1,lVar2);
    }
  }
  else {
    lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112ec4298))[1];
    if (lVar2 == 0) {
      func_0x000107c51de8(lVar3);
      func_0x000107c615e8(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(0);
      return;
    }
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ec4298);
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar1,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
  return;
}



/* Entry: 102845c80; end: 102845c83;  */

void FUN_102845c80(void)

{
  return;
}



/* Entry: 102845c84; end: 102845ce3; -[_TtC28MapLocationCardMessagePlugin28MapLocationCardMessagePlugin init] */

void FUN_102845c84(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapLocationCardMessagePlugin.MapLocationCardMessagePlugin",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102845cb0);
  (*pcVar1)();
}



/* Entry: 102845ce4; end: 102845eb7; -[_TtC28MapLocationCardMessagePlugin28MapLocationCardMessagePlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102845e24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102845e28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102845ce4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec41e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec41e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec41f0));
  func_0x000100e3b598(param_1 + _DAT_112ec41f8);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ec4200 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4208));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4210));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4218));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4220));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4228));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4230));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4238));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4240));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec4248));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4250));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4258));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4260));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec4268));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ec4270));
  return;
}



/* Entry: 102845eb8; end: 102845ed7;  */

void FUN_102845eb8(void)

{
  func_0x000107c61168(&PTR_PTR_112865c30);
  return;
}



/* Entry: 102845ed8; end: 102845eff; -[_TtC28MapLocationCardMessagePlugin28MapLocationCardMessagePlugin fullMapPageLaunchDidEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102845ed8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112ec4290);
  if (lVar1 == 0 || param_3 != lVar1) {
    return;
  }
  *(undefined8 *)(param_1 + _DAT_112ec4290) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 102845f00; end: 102845f57; -[_TtC28MapLocationCardMessagePlugin28MapLocationCardMessagePlugin shareLocationFlowScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102845f00(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ec42b0);
  *(undefined8 *)(param_1 + _DAT_112ec42b0) = 0;
  func_0x000107c61174();
  func_0x000107c615e8(uVar2);
  puVar1 = (undefined8 *)(param_1 + _DAT_112ec4298);
  uVar2 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 102845f58; end: 102845fef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102845f58(int param_1,uint param_2)

{
  long lVar1;
  long unaff_x20;
  undefined8 *puVar2;
  undefined1 uStack_31;
  
  if (((param_2 & 1) == 0) || (param_1 != 0)) {
    puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ec4298);
    lVar1 = puVar2[1];
    if (lVar1 == 0) {
      return;
    }
  }
  else {
    uStack_31 = 1;
    func_0x0001002a64a8(&uStack_31);
    puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ec4298);
    if (puVar2[1] == 0) {
      return;
    }
    FUN_102845b18(0);
    lVar1 = puVar2[1];
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  func_0x000107c6142c(lVar1);
  return;
}



/* Entry: 102845ff0; end: 102846033; -[_TtC28MapLocationCardMessagePlugin28MapLocationCardMessagePlugin onShareLocationActionCompletedWith:success:] */

void FUN_102845ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  FUN_102845f58(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102846034; end: 10284607f; -[_TtC28MapLocationCardMessagePlugin28MapLocationCardMessagePlugin permissionsManagerWantsToPresentPermissionsPrompt:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102846034(long param_1)

{
  param_1 = param_1 + _DAT_112ec41f8;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c3e2c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 102846080; end: 10284614b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102846080(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113083100;
  lVar4 = _DAT_112ec4290;
  lVar3 = *(long *)(unaff_x20 + _DAT_112ec4290);
  if (lVar3 != 0) {
    func_0x000107c61428(lVar3 + _DAT_113083100,auStack_48,0,0);
    lVar3 = lVar3 + lVar1;
    func_0x000107c61618();
    if (lVar3 != 0) {
      func_0x000107c42048();
      func_0x000107c615e8(lVar3);
    }
  }
  uVar2 = *(undefined8 *)(unaff_x20 + lVar4);
  *(undefined8 *)(unaff_x20 + lVar4) = 0;
  func_0x000107c61170(uVar2);
  lVar4 = *(long *)(unaff_x20 + _DAT_112ec4258);
  lVar3 = lVar4;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar4);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ec42b0);
  *(undefined8 *)(unaff_x20 + _DAT_112ec42b0) = 0;
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 10284614c; end: 102846173; -[_TtC28MapLocationCardMessagePlugin28MapLocationCardMessagePlugin dismissPresentedView] */

void FUN_10284614c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102846080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102846174; end: 1028461a3;  */

bool FUN_102846174(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1028461a4; end: 1028462e3;  */

undefined1  [16] FUN_1028461a4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar6 = &puStack_80;
  uStack_50 = 0;
  uStack_48 = 0;
  puVar4 = &UNK_110556c10;
  func_0x000107c613fc(&UNK_110556c10,0x20,7);
  *(undefined8 **)(puVar4 + 0x10) = &uStack_50;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  puVar5 = &UNK_110556c38;
  func_0x000107c613fc(&UNK_110556c38,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0x102846584;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  pcStack_60 = FUN_10284658c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_10283fc04;
  puStack_68 = &UNK_110556c50;
  puStack_58 = puVar5;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c615f0(param_1);
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar2);
  func_0x000107c4c6d0(param_2);
  func_0x000107c60bd0(ppuVar6);
  auVar1._8_8_ = uStack_48;
  auVar1._0_8_ = uStack_50;
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",100,0x22b,0x1f,1);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) == 0) {
    return auVar1;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1028462e4);
  (*pcVar3)();
}



/* Entry: 1028462e4; end: 10284635f;  */

void FUN_1028462e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined4 *)(unaff_x20 + 0x38);
  func_0x000107c61428(lVar5 + 0x10,auStack_58,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    FUN_1028431d4(uVar2,uVar1,uVar3,uVar6,uVar4);
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 102846360; end: 1028463b3;  */

void FUN_102846360(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102843ea0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1028463b4; end: 102846427;  */

void FUN_1028463b4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x20);
  uVar4 = *param_1;
  func_0x000107c61558(uVar4);
  uVar5 = *param_1;
  func_0x000101752900(uVar3,uVar1,uVar2,uVar4);
  *param_1 = uVar5;
  return;
}



/* Entry: 102846428; end: 10284643f;  */

void FUN_102846428(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010284643c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined4 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 102846440; end: 10284647b;  */

void FUN_102846440(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10284647c; end: 1028464ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284647c(char *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined4 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  if (*param_1 == '\x01') {
    func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + _DAT_112ec4230);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = lVar3;
        func_0x000107c407bc();
        FUN_102843f2c(uVar5,uVar6,uVar1,0,(int)lVar4 == 3);
        func_0x000107c4d664(uVar7);
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(uVar5);
      }
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 1028464ac; end: 102846523;  */

void FUN_1028464ac(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x160;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102846524;
  plVar5[0x22] = lVar3;
  plVar5[0x23] = lVar2;
  plVar5[0x20] = lVar4;
  plVar5[0x21] = lVar1;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar5[0x24] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar5[0x25] = lVar3;
  plVar5[0x26] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10284571c,lVar3,lVar4);
  return;
}



/* Entry: 102846524; end: 10284655f;  */

void FUN_102846524(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010284655c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102846560; end: 10284658b;  */

long FUN_102846560(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 10284658c; end: 1028465eb;  */

void FUN_10284658c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1028465ec; end: 102846607;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028465ec(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [24];
  
  puVar6 = auStack_80;
  lVar2 = param_1;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
    lVar2 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      uVar4 = *(undefined8 *)(lVar2 + _DAT_112ec42a8);
      func_0x000107c6157c(uVar4);
      func_0x000107c61170(lVar2);
      func_0x000100075034(FUN_1028421d0,0,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar4);
    }
    func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
    lVar2 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      uVar4 = 0;
      func_0x0001000c6560();
      func_0x000107c613fc();
      func_0x0001000c6580();
      uVar5 = *(undefined8 *)(lVar2 + _DAT_112ec4288);
      *(undefined8 *)(lVar2 + _DAT_112ec4288) = uVar4;
      func_0x000107c61170(lVar2);
      func_0x000107c61574(uVar5);
    }
  }
  else {
    func_0x000107c61170();
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_80,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c4dfe8();
    func_0x000107c61180();
    if (param_1 == 0) {
      lVar3 = 0;
      puVar6 = (undefined1 *)0x0;
    }
    else {
      lVar3 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
    }
    plVar1 = (long *)(lVar2 + _DAT_112ec4280);
    lVar7 = plVar1[1];
    *plVar1 = lVar3;
    plVar1[1] = (long)puVar6;
    func_0x000107c61170(lVar2);
    func_0x000107c6142c(lVar7);
  }
  return;
}



/* Entry: 102846608; end: 10284664b;  */

void FUN_102846608(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 10284664c; end: 10284664f; -[_TtC28MapLocationCardMessagePlugin28MapLocationCardMessagePlugin permissionsManagerModalPresentationContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284664c(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec41f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102846650; end: 1028466b7; -[_TtC28MapLocationCardMessagePlugin28MapLocationCardMessagePlugin uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102846650(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec41f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028466b8; end: 102846db7;  */

void FUN_1028466b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110556d20;
  func_0x000107c613fc(&UNK_110556d20,0x88,7);
  *(undefined8 *)(puVar1 + 0x10) = param_13;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_1;
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102846db8,puVar1);
  return;
}



/* Entry: 102846db8; end: 102846dfb;  */

void FUN_102846db8(void)

{
  long unaff_x20;
  
  func_0x00010284681c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 102846dfc; end: 102846e0b;  */

undefined1  [16] FUN_102846dfc(void)

{
  return ZEXT816(0x110556d48);
}



/* Entry: 102846e0c; end: 1028471d3;  */

void FUN_102846e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110556e10;
  func_0x000107c613fc(&UNK_110556e10,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_9;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_3;
  *(undefined8 *)(puVar1 + 0x48) = param_4;
  *(undefined8 *)(puVar1 + 0x50) = param_8;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_10);
  func_0x0001000823a8(0x102846f20,puVar1);
  return;
}



/* Entry: 1028471d4; end: 1028471e3;  */

undefined1  [16] FUN_1028471d4(void)

{
  return ZEXT816(0x110556e38);
}



/* Entry: 1028471e4; end: 1028471f3; -[_TtC24MapReactionMessagePlugin24MapReactionMessagePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028471e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4330));
  return;
}



/* Entry: 1028471f4; end: 102847227; -[_TtC24MapReactionMessagePlugin24MapReactionMessagePlugin setActiveConversationIdObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028471f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec4330);
  *(undefined8 *)(param_1 + _DAT_112ec4330) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102847228; end: 102847237; -[_TtC24MapReactionMessagePlugin24MapReactionMessagePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102847228(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4338));
  return;
}



/* Entry: 102847238; end: 10284726b; -[_TtC24MapReactionMessagePlugin24MapReactionMessagePlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102847238(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec4338);
  *(undefined8 *)(param_1 + _DAT_112ec4338) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10284726c; end: 10284727b; -[_TtC24MapReactionMessagePlugin24MapReactionMessagePlugin messageViewEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284726c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec4340));
  return;
}



/* Entry: 10284727c; end: 1028472af; -[_TtC24MapReactionMessagePlugin24MapReactionMessagePlugin setMessageViewEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10284727c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec4340);
  *(undefined8 *)(param_1 + _DAT_112ec4340) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1028472b0; end: 1028472cf; -[_TtC24MapReactionMessagePlugin24MapReactionMessagePlugin uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028472b0(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec4348);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028472d0; end: 1028472e3; -[_TtC24MapReactionMessagePlugin24MapReactionMessagePlugin setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028472d0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec4348,param_3);
  return;
}



/* Entry: 1028472e4; end: 1028480cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1028472e4(undefined8 param_1,undefined **param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *puVar15;
  code *pcVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  long extraout_x8;
  undefined *puVar25;
  long unaff_x20;
  undefined **ppuVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lStack_130;
  undefined *puStack_128;
  long lStack_120;
  undefined *apuStack_c8 [3];
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar2 = 0;
  ppuVar26 = param_2;
  func_0x000107c5ede0();
  lVar28 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar28 + 0x40));
  lVar29 = (long)&lStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = *(long *)(unaff_x20 + _DAT_112ec4328);
  func_0x000107c4ce08();
  func_0x000107c61180();
  lVar27 = lVar3;
  func_0x000107c4051c();
  func_0x000107c61180();
  if (lVar27 == 0) {
LAB_102847540:
    func_0x000107c615e8(lVar3);
    return 0;
  }
  lVar4 = lVar27;
  func_0x000107c4c3c4();
  func_0x000107c61180();
  func_0x000107c61170(lVar27);
  if (lVar4 == 0) goto LAB_102847540;
  lVar27 = lVar4;
  func_0x000107c424f8();
  func_0x000107c61180();
  if (lVar27 == 0) {
    func_0x000107c61170(lVar4);
    goto LAB_102847540;
  }
  lVar5 = lVar27;
  func_0x000107c5faec();
  lVar6 = lVar5;
  func_0x000107c5fb5c();
  if (lVar6 < 1) {
    lVar6 = lVar4;
    func_0x000107c4f96c();
    func_0x000107c61180();
    if (lVar6 == 0) {
      func_0x000107c61170(lVar27);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1028480cc);
      (*pcVar1)();
    }
    lVar7 = lVar6;
    func_0x000107c40808();
    func_0x000107c61170(lVar6);
    if (0 < lVar7) goto LAB_10284740c;
  }
  else {
LAB_10284740c:
    lVar6 = lVar4;
    func_0x000107c44bac();
    if ((int)lVar6 != 0) {
      lVar6 = lVar3;
      func_0x000107c4c930();
      func_0x000107c61180();
      if (lVar6 == 0) {
        func_0x000107c61170(lVar4);
        func_0x000107c615e8(lVar3);
        func_0x000107c6142c(ppuVar26);
        goto LAB_102847584;
      }
      lVar7 = lVar3;
      FUN_10284b25c(lVar3,param_2);
      lVar8 = lVar3;
      func_0x00010284b398();
      lVar9 = lVar3;
      ppuVar20 = param_2;
      func_0x000107c40258(lVar3);
      func_0x000107c61180();
      lVar10 = lVar3;
      func_0x000107c3dc7c(lVar3);
      func_0x000107c61180();
      lVar11 = lVar3;
      func_0x000107c40674(lVar3);
      func_0x000107c61180();
      lVar12 = lVar6;
      func_0x000107c5caf0();
      func_0x000107c61180();
      func_0x000107c61170(lVar9);
      func_0x000107c61170(lVar10);
      func_0x000107c61170(lVar11);
      lVar9 = lVar4;
      func_0x000107c4f96c();
      func_0x000107c61180();
      if (lVar9 == 0) {
        puVar25 = (undefined *)0x0;
      }
      else {
        puStack_a8 = (undefined *)0x0;
        uVar13 = 0;
        func_0x00010284b814(0,0x112ea4798,&PTR_PTR_1126dd8e0);
        ppuVar20 = &puStack_a8;
        func_0x000107c5fc50(lVar9,ppuVar20,uVar13);
        func_0x000107c61170(lVar9);
        puVar25 = puStack_a8;
      }
      lVar9 = lVar4;
      func_0x000107c5b634();
      if ((int)lVar9 != 2) {
        lVar9 = lVar6;
        func_0x000107c4c99c();
        func_0x000107c61180();
        if (lVar9 == 0) {
          func_0x000107c615e8(lVar3);
          func_0x000107c61170(lVar4);
          func_0x000107c61170(lVar6);
          func_0x000107c61170(lVar12);
          func_0x000107c6142c(ppuVar26);
          func_0x000107c61170(lVar27);
          func_0x000107c6142c(puVar25);
          func_0x000107c6142c(param_2);
          lVar27 = lVar7;
          goto LAB_102847584;
        }
        lVar10 = lVar9;
        func_0x000107c5faec();
        func_0x000107c61170(lVar9);
        lVar9 = lVar3;
        func_0x000107c40674();
        func_0x000107c61180();
        lVar11 = lVar3;
        func_0x000107c40258();
        func_0x000107c61180();
        func_0x000107c5fadc(lVar10,ppuVar20);
        lVar14 = lVar9;
        lVar24 = lVar11;
        func_0x000108543a00(lVar9,lVar11,lVar10,0,0);
        func_0x000107c61180();
        func_0x000107c61170(lVar9);
        func_0x000107c61170(lVar11);
        func_0x000107c61170(lVar10);
        func_0x000107c5edb4(lVar29,lVar14);
        func_0x000107c61170();
        func_0x000107c5ed70();
        puStack_128 = (undefined *)lVar14;
        (**(code **)(lVar28 + 8))(lVar29);
        func_0x000107c6142c(ppuVar20);
        if (lVar7 == 0) {
          lStack_120 = 0;
          lVar28 = 0;
          lVar29 = lVar2;
        }
        else {
          lVar28 = lVar7;
          func_0x000107c5d984();
          func_0x000107c61180();
          if (lVar28 == 0) {
            lStack_120 = 0;
            lVar28 = 0;
            lVar29 = lVar2;
          }
          else {
            lVar9 = lVar28;
            func_0x000107c5faec();
            lVar29 = lVar2;
            lStack_120 = lVar9;
            func_0x000107c61170(lVar28);
            lVar28 = lVar2;
          }
        }
        lVar2 = lVar3;
        func_0x000107c40258();
        func_0x000107c61180();
        lVar9 = lVar2;
        func_0x000107c5faec();
        func_0x000107c61170(lVar2);
        lVar2 = *(long *)(unaff_x20 + _DAT_112ec4340);
        if (lVar2 == 0) {
          pcVar1 = (code *)0x0;
        }
        else {
          func_0x0001000285a8(0x112ec2498,&UNK_10dae3650);
          func_0x000107c61174(lVar2);
          lVar10 = lVar2;
          func_0x0001000b637c();
          func_0x000107c61170(lVar2);
          puVar15 = &UNK_110557068;
          func_0x000107c613fc(&UNK_110557068,0x20,7);
          *(long *)(puVar15 + 0x10) = lVar9;
          *(long *)(puVar15 + 0x18) = lVar29;
          func_0x000107c61434(lVar29);
          pcVar1 = FUN_10284b534;
          func_0x0001000c0ebc(FUN_10284b534,puVar15);
          func_0x000107c61574(lVar10);
          func_0x000107c61574(puVar15);
          uVar13 = 0;
          func_0x00010284b814(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          pcVar16 = FUN_102849140;
          func_0x0001000bfde0(FUN_102849140,0,uVar13);
          func_0x000107c61574();
          func_0x0001004575f0();
          func_0x000107c61574(pcVar16);
          pcVar16 = pcVar1;
          func_0x000107c421ac();
          func_0x000107c61180();
          func_0x000107c61170(pcVar1);
          pcVar1 = pcVar16;
          func_0x000107c5cb24();
          func_0x000107c61180();
          func_0x000107c61170(pcVar16);
        }
        func_0x000107c6142c(lVar29);
        puVar15 = PTR_PTR_1126ab2e0;
        func_0x000107c610f8();
        puVar17 = puStack_128;
        func_0x000107c5fadc(puStack_128,lVar24);
        func_0x000107c46758();
        func_0x000107c61170(lVar27);
        func_0x000107c61170(puVar17);
        if (param_2 == (undefined **)0x0) {
          lVar27 = 0;
        }
        else {
          lVar27 = lVar8;
          func_0x000107c5fadc(lVar8);
        }
        func_0x000107c58f38(puVar15);
        func_0x000107c61170(lVar27);
        func_0x000107c53384(puVar15);
        if (puVar25 != (undefined *)0x0) {
          puVar17 = puVar25;
          FUN_1028491b8(puVar25);
          func_0x000107c57b60(puVar15);
          func_0x000107c61170(puVar17);
        }
        puVar18 = PTR_PTR_1126ab2e8;
        func_0x000107c610f8();
        func_0x000107c453e4();
        uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112ec4320);
        func_0x000107c5c734(uVar13);
        func_0x000107c61180();
        func_0x000107c54244(puVar18);
        func_0x000107c615e8(uVar13);
        func_0x000107c56660(puVar18);
        puVar17 = &UNK_110556fa0;
        func_0x000107c613fc(&UNK_110556fa0,0x18,7);
        func_0x000107c61614(puVar17 + 0x10,unaff_x20);
        puVar19 = &UNK_110556fc8;
        func_0x000107c613fc(&UNK_110556fc8,0x40,7);
        lVar27 = lStack_120;
        *(long *)(puVar19 + 0x10) = lStack_120;
        *(long *)(puVar19 + 0x18) = lVar28;
        *(undefined **)(puVar19 + 0x20) = puVar25;
        *(undefined **)(puVar19 + 0x28) = puVar17;
        *(long *)(puVar19 + 0x30) = lVar5;
        *(undefined ***)(puVar19 + 0x38) = ppuVar26;
        pcStack_88 = FUN_10284b4d8;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        pcStack_98 = (code *)&UNK_1000f6b44;
        puStack_90 = &UNK_110556fe0;
        ppuVar20 = &puStack_a8;
        puStack_128 = puVar15;
        puStack_80 = puVar19;
        func_0x000107c60bc4(ppuVar20);
        puVar15 = puStack_80;
        func_0x000107c61434(lVar28);
        func_0x000107c61434(ppuVar26);
        func_0x000107c61434(puVar25);
        func_0x000107c61574(puVar15);
        func_0x000107c56ea0(puVar18);
        func_0x000107c60bd0(ppuVar20);
        puVar15 = &UNK_110556fa0;
        func_0x000107c613fc(&UNK_110556fa0,0x18,7);
        func_0x000107c61614(puVar15 + 0x10,unaff_x20);
        puVar17 = &UNK_110557018;
        func_0x000107c613fc(&UNK_110557018,0x50,7);
        *(long *)(puVar17 + 0x10) = lVar27;
        *(long *)(puVar17 + 0x18) = lVar28;
        *(undefined **)(puVar17 + 0x20) = puVar25;
        *(undefined **)(puVar17 + 0x28) = puVar15;
        *(long *)(puVar17 + 0x30) = lVar8;
        *(undefined ***)(puVar17 + 0x38) = param_2;
        *(long *)(puVar17 + 0x40) = lVar5;
        *(undefined ***)(puVar17 + 0x48) = ppuVar26;
        pcStack_88 = FUN_10284b504;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        pcStack_98 = FUN_102848c08;
        puStack_90 = &UNK_110557030;
        ppuVar20 = &puStack_a8;
        lStack_130 = lVar28;
        puStack_80 = puVar17;
        func_0x000107c60bc4(ppuVar20);
        puVar15 = puStack_80;
        func_0x000107c61434(param_2);
        func_0x000107c61434(lVar28);
        func_0x000107c61434(ppuVar26);
        func_0x000107c61434(puVar25);
        func_0x000107c61574(puVar15);
        func_0x000107c56eb8(puVar18);
        func_0x000107c60bd0(ppuVar20);
        uVar13 = 0x112ec4398;
        uVar22 = 0;
        func_0x00010284b814(0,0x112ec4398,&PTR_PTR_1126ab2f0);
        func_0x000107c614e8();
        func_0x000107c3ff48();
        func_0x000107c61180();
        uVar21 = uVar22;
        func_0x000107c5faec();
        func_0x000107c61170(uVar22);
        uVar22 = 0;
        func_0x00010284b814(0,0x112ec43a0,&PTR_PTR_1126ab2e0);
        puVar15 = puStack_128;
        puStack_a8 = puStack_128;
        uVar23 = 0;
        puStack_90 = (undefined *)uVar22;
        func_0x00010284b814(0,0x112ec43a8,&PTR_PTR_1126ab2e8);
        apuStack_c8[0] = puVar18;
        uStack_b0 = uVar23;
        func_0x000107c610f8(PTR_PTR_1126c67d8);
        func_0x000107c61174(puVar15);
        func_0x000107c61174(puVar18);
        FUN_1027efbc4(uVar21,uVar13,&puStack_a8,apuStack_c8);
        func_0x000107c61170(puVar18);
        func_0x000107c61170(puVar15);
        func_0x000107c6142c(lStack_130);
        func_0x000107c6142c(ppuVar26);
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(lVar12);
        func_0x000107c6142c(param_2);
        func_0x000107c6142c(puVar25);
        func_0x000107c61170(pcVar1);
        func_0x000107c6142c(lVar24);
        func_0x000107c61170(lVar6);
        func_0x000107c61170(lVar4);
        goto LAB_1028480b4;
      }
      func_0x000107c6142c(ppuVar26);
      func_0x000107c61170(lVar27);
      if (puVar25 == (undefined *)0x0) {
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(lVar6);
        func_0x000107c61170(lVar12);
        func_0x000107c61170(lVar4);
LAB_102847850:
        func_0x000107c61170(lVar7);
        func_0x000107c6142c(param_2);
        return 0;
      }
      if (lVar7 == 0) {
        func_0x000107c6142c(puVar25);
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(lVar6);
        func_0x000107c61170(lVar12);
        lVar7 = lVar4;
        goto LAB_102847850;
      }
      func_0x000107c61174();
      lVar27 = lVar4;
      func_0x000107c4b848();
      func_0x000107c61180();
      if (lVar27 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1028480d0);
        (*pcVar1)();
      }
      puVar15 = puVar25;
      FUN_1028491b8(puVar25);
      lVar2 = lVar7;
      func_0x000107c42120();
      func_0x000107c61180();
      ppuVar26 = ppuVar20;
      if (lVar2 == 0) {
LAB_102847df0:
        lVar2 = lVar7;
        func_0x000107c5db08();
        func_0x000107c61180();
        if (lVar2 == 0) {
          lVar29 = 0;
          ppuVar26 = (undefined **)0xe000000000000000;
        }
        else {
          lVar29 = lVar2;
          func_0x000107c5faec();
          func_0x000107c61170(lVar2);
        }
      }
      else {
        lVar29 = lVar2;
        func_0x000107c5faec();
        func_0x000107c61170(lVar2);
        ppuVar26 = ppuVar20;
        func_0x000107c5fadc(lVar29,ppuVar20);
        lVar2 = lVar29;
        func_0x00010901e6c8();
        func_0x000107c61180();
        func_0x000107c61170(lVar29);
        if (lVar2 == 0) {
          func_0x000107c6142c(ppuVar20);
          goto LAB_102847df0;
        }
        lVar29 = lVar2;
        func_0x000107c5faec(lVar2);
        func_0x000107c61170(lVar2);
        func_0x000107c6142c(ppuVar20);
      }
      puVar17 = PTR_PTR_1126ab2f8;
      func_0x000107c610f8();
      func_0x000107c5fadc(lVar29,ppuVar26);
      func_0x000107c6142c(ppuVar26);
      func_0x000107c4826c();
      func_0x000107c61170(puVar15);
      func_0x000107c61170(lVar29);
      func_0x000107c61170(lVar27);
      if (param_2 == (undefined **)0x0) {
        lVar27 = 0;
      }
      else {
        lVar27 = lVar8;
        func_0x000107c5fadc(lVar8,param_2);
      }
      func_0x000107c58f38(puVar17);
      func_0x000107c61170(lVar27);
      puVar18 = PTR_PTR_1126ab300;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar15 = &UNK_110556fa0;
      func_0x000107c613fc(&UNK_110556fa0,0x18,7);
      func_0x000107c61614(puVar15 + 0x10);
      puVar19 = &UNK_110557090;
      func_0x000107c613fc(&UNK_110557090,0x38,7);
      *(long *)(puVar19 + 0x10) = lVar7;
      *(undefined **)(puVar19 + 0x18) = puVar25;
      *(undefined **)(puVar19 + 0x20) = puVar15;
      *(long *)(puVar19 + 0x28) = lVar8;
      *(undefined ***)(puVar19 + 0x30) = param_2;
      pcStack_88 = (code *)0x10284b53c;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      pcStack_98 = (code *)&UNK_1000f6b44;
      puStack_90 = &UNK_1105570a8;
      ppuVar26 = &puStack_a8;
      puStack_80 = puVar19;
      func_0x000107c60bc4(ppuVar26);
      puVar15 = puStack_80;
      func_0x000107c61174(lVar7);
      func_0x000107c61434(puVar25);
      func_0x000107c61434(param_2);
      func_0x000107c61574(puVar15);
      func_0x000107c56ea0(puVar18);
      func_0x000107c60bd0(ppuVar26);
      uVar13 = 0x112ec43b0;
      uVar22 = 0;
      func_0x00010284b814(0,0x112ec43b0,&PTR_PTR_1126ab308);
      func_0x000107c614e8();
      func_0x000107c3ff48();
      func_0x000107c61180();
      uVar21 = uVar22;
      func_0x000107c5faec();
      func_0x000107c61170(uVar22);
      uVar22 = 0;
      func_0x00010284b814(0,0x112ec43b8,&PTR_PTR_1126ab2f8);
      uVar23 = 0;
      puStack_a8 = puVar17;
      puStack_90 = (undefined *)uVar22;
      func_0x00010284b814(0,0x112ec43c0,&PTR_PTR_1126ab300);
      apuStack_c8[0] = puVar18;
      uStack_b0 = uVar23;
      func_0x000107c610f8(PTR_PTR_1126c67d8);
      func_0x000107c61174(puVar17);
      func_0x000107c61174(puVar18);
      FUN_1027efbc4(uVar21,uVar13,&puStack_a8,apuStack_c8);
      func_0x000107c61170(puVar18);
      func_0x000107c61170(puVar17);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar7);
      func_0x000107c6142c(puVar25);
      func_0x000107c615e8(lVar3);
      func_0x000107c6142c(param_2);
      func_0x000107c61170(lVar12);
      func_0x000107c61170(lVar6);
      lVar7 = lVar4;
LAB_1028480b4:
      func_0x000107c61170(lVar7);
      return uVar21;
    }
  }
  func_0x000107c61170(lVar4);
  func_0x000107c6142c(ppuVar26);
  func_0x000107c615e8(lVar3);
LAB_102847584:
  func_0x000107c61170(lVar27);
  return 0;
}



/* Entry: 1028480d0; end: 102848147; -[_TtC24MapReactionMessagePlugin24MapReactionMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_1028480d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1028472e4(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102848148; end: 10284815f; -[_TtC24MapReactionMessagePlugin24MapReactionMessagePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x00010284815c) */

void FUN_102848148(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102848160; end: 102848167; -[_TtC24MapReactionMessagePlugin24MapReactionMessagePlugin pluginType] */

undefined8 FUN_102848160(void)

{
  return 0;
}



/* Entry: 102848168; end: 10284816f; -[_TtC24MapReactionMessagePlugin24MapReactionMessagePlugin shouldDisplayContextualHeaderForMessage:] */

undefined8 FUN_102848168(void)

{
  return 1;
}



/* Entry: 102848170; end: 1028481e3; -[_TtC24MapReactionMessagePlugin24MapReactionMessagePlugin contextualHeaderForMessage:conversationParticipants:] */

void FUN_102848170(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10284b85c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1028481e4; end: 102848c07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028481e4(long param_1,ulong param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 auStack_78 [24];
  
  uVar13 = param_2;
  func_0x000107c5d984();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar4 = param_1;
    func_0x000107c5faec();
    uVar6 = uVar13;
    func_0x000107c61170(param_1);
    if (param_2 >> 0x3e == 0) {
      uVar16 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar16 = param_2 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_2) {
        uVar16 = param_2;
      }
      func_0x000107c60480();
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar10;
    if (uVar16 != 0) {
      uVar17 = 0;
      do {
        if ((param_2 & 0xc000000000000001) == 0) {
          if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1028483e4);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(param_2 + uVar17 * 8 + 0x20);
          func_0x000107c61174();
          uVar14 = uVar6;
        }
        else {
          uVar5 = uVar17;
          uVar14 = param_2;
          FUN_10284b0a0(uVar17,param_2,&PTR_PTR_1126dd8e0,0x112ea4798);
        }
        uVar1 = uVar17 + 1;
        if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1028483e0);
          (*pcVar2)();
        }
        uVar6 = uVar5;
        func_0x000107c4f954();
        iVar3 = (int)uVar6;
        if (iVar3 == 0) {
LAB_102848300:
          func_0x000107c61170(uVar5);
          uVar18 = 0;
          uVar15 = 0;
          uVar5 = 0xe000000000000000;
          uVar6 = uVar14;
        }
        else if (iVar3 == 1) {
          uVar18 = uVar5;
          func_0x000107c49830();
          func_0x000107c61170(uVar5);
          if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1028483e8);
            (*pcVar2)();
          }
          uVar5 = 0;
          uVar15 = 1;
          uVar6 = uVar14;
        }
        else {
          if (iVar3 != 2) goto LAB_102848300;
          uVar7 = uVar5;
          func_0x000107c424f8();
          func_0x000107c61180();
          if (uVar7 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102848574);
            (*pcVar2)();
          }
          uVar18 = uVar7;
          func_0x000107c5faec();
          uVar6 = uVar14;
          func_0x000107c61170(uVar5);
          func_0x000107c61170(uVar7);
          uVar15 = 0;
          uVar5 = uVar14;
        }
        puVar8 = puVar10;
        func_0x000107c61558();
        puVar9 = puVar10;
        if (((ulong)puVar8 & 1) == 0) {
          uVar6 = *(long *)(puVar10 + 0x10) + 1;
          puVar9 = (undefined *)0x0;
          FUN_10253faf8(0,uVar6,1,puVar10);
        }
        uVar7 = *(ulong *)(puVar9 + 0x10);
        uVar14 = uVar7 + 1;
        puVar10 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar7) {
          puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
          uVar6 = uVar14;
          FUN_10253faf8(puVar10,uVar14,1,puVar9);
        }
        *(ulong *)(puVar10 + 0x10) = uVar14;
        *(ulong *)(puVar10 + uVar7 * 0x18 + 0x20) = uVar18;
        *(ulong *)(puVar10 + uVar7 * 0x18 + 0x28) = uVar5;
        puVar10[uVar7 * 0x18 + 0x30] = uVar15;
        uVar17 = uVar17 + 1;
      } while (uVar1 != uVar16);
    }
    func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 == 0) {
      func_0x000107c6142c(uVar13);
      func_0x000107c6142c(puVar10);
    }
    else {
      lVar11 = param_3 + _DAT_112ec4348;
      func_0x000107c61618();
      if (lVar11 == 0) {
        func_0x000107c6142c(puVar10);
      }
      else {
        puVar8 = &UNK_110556fa0;
        func_0x000107c613fc(&UNK_110556fa0,0x18,7);
        func_0x000107c61614(puVar8 + 0x10,param_3);
        puVar9 = &UNK_1105570e0;
        func_0x000107c613fc(&UNK_1105570e0,0x48,7);
        *(undefined **)(puVar9 + 0x10) = puVar8;
        *(undefined **)(puVar9 + 0x18) = puVar10;
        *(undefined8 *)(puVar9 + 0x20) = param_4;
        *(undefined8 *)(puVar9 + 0x28) = param_5;
        *(long *)(puVar9 + 0x30) = lVar4;
        *(ulong *)(puVar9 + 0x38) = uVar13;
        *(long *)(puVar9 + 0x40) = lVar11;
        func_0x000107c61434();
        func_0x000107c61434(uVar13);
        func_0x000107c615f0(lVar11);
        func_0x000107c61434(puVar10);
        uVar12 = 0x23;
        func_0x0001001ca524(0x23,0,0x3c,2,0,0,&UNK_10dae4568,puVar9,PTR___sytN_11034f1b0 + 8);
        func_0x000107c615e8(lVar11);
        func_0x000107c61574(puVar9);
        func_0x000107c61574(uVar12);
        func_0x000107c6142c(puVar10);
      }
      func_0x000107c6142c(uVar13);
      func_0x000107c61170(param_3);
    }
  }
  return;
}


