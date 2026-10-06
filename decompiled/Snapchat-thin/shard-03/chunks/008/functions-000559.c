/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102d8f740; end: 102d8f767;  */

void FUN_102d8f740(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102d8f768; end: 102d8f76f;  */

undefined8 FUN_102d8f768(void)

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



/* Entry: 102d8f770; end: 102d8f9c3;  */

undefined8 FUN_102d8f770(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_102d90194(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 102d8f9c4; end: 102d8fb0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d8f9c4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if (param_1 == 0) {
      func_0x000107c61170();
    }
    else {
      uVar4 = *(undefined8 *)(param_3 + _DAT_112f16250);
      puVar1 = &UNK_1105cf350;
      func_0x000107c613fc(&UNK_1105cf350,0x18,7);
      func_0x000107c61614(puVar1 + 0x10,param_3);
      puVar2 = &UNK_1105cf3a0;
      func_0x000107c613fc(&UNK_1105cf3a0,0x20,7);
      *(undefined **)(puVar2 + 0x10) = puVar1;
      *(long *)(puVar2 + 0x18) = param_1;
      uStack_68 = 0x102d906c8;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_1105cf3b8;
      ppuVar3 = &puStack_88;
      puStack_60 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      puVar1 = puStack_60;
      func_0x000107c61174(param_1);
      func_0x000107c61174();
      func_0x000107c615f0(uVar4);
      func_0x000107c61574(puVar1);
      func_0x000107c4e524(uVar4);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_1);
      func_0x000107c615e8(uVar4);
    }
  }
  return;
}



/* Entry: 102d8fb0c; end: 102d8fb67;  */

void FUN_102d8fb0c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_102d8fb68(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102d8fb68; end: 102d8fd53;  */

/* WARNING: Possible PIC construction at 0x000102d8fc68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d8fd2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d8fc6c) */
/* WARNING: Removing unreachable block (ram,0x000102d8fcf4) */
/* WARNING: Removing unreachable block (ram,0x000102d8fcdc) */
/* WARNING: Removing unreachable block (ram,0x000102d8fcf8) */
/* WARNING: Removing unreachable block (ram,0x000102d8fd30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d8fb68(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112f16230);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 != 0) {
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  lVar3 = unaff_x20 + _DAT_112f16228;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar1 = lVar3;
    func_0x000107c5d1b8();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    if (lVar1 != 0) {
      lVar3 = lVar1;
      func_0x000107c4e2a0(lVar1);
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
      func_0x000103b96ecc(0);
      puVar2 = PTR_PTR_1126ae558;
      func_0x000107c61168(PTR_PTR_1126ae558);
      func_0x000107c61174(lVar3);
      func_0x000107c451b0(puVar2,param_2,param_1);
      func_0x000107c61180();
      func_0x000103b96a80();
      goto code_r0x000107c61170;
    }
  }
  return;
}



/* Entry: 102d8fd54; end: 102d8fde7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d8fd54(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c42934();
  if (param_1 == 3) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112f16240);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5bd84();
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
      if (lVar2 != 0) {
        func_0x000107c5cae8(lVar2);
        func_0x000107c61180();
        func_0x000107c615e8(lVar2);
      }
    }
  }
  return;
}



/* Entry: 102d8fde8; end: 102d8fe47; -[_TtC33CreateStickerSpotlightOperaPlugin33CreateStickerSpotlightOperaPlugin init] */

void FUN_102d8fde8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreateStickerSpotlightOperaPlugin.CreateStickerSpotlightOperaPlugin",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d8fe14);
  (*pcVar1)();
}



/* Entry: 102d8fe48; end: 102d8febf; -[_TtC33CreateStickerSpotlightOperaPlugin33CreateStickerSpotlightOperaPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102d8fe48(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f16230));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f16238));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f16240));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f16248));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f16250));
  param_1 = param_1 + _DAT_112f16228;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102d8fec0; end: 102d8fec3; -[_TtC33CreateStickerSpotlightOperaPlugin33CreateStickerSpotlightOperaPlugin setPlaylistItemController:] */

void FUN_102d8fec0(void)

{
  return;
}



/* Entry: 102d8fec4; end: 102d8fed7; -[_TtC33CreateStickerSpotlightOperaPlugin33CreateStickerSpotlightOperaPlugin setOperaControlling:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d8fec4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112f16228,param_3);
  return;
}



/* Entry: 102d8fed8; end: 102d8ff6f; -[_TtC33CreateStickerSpotlightOperaPlugin33CreateStickerSpotlightOperaPlugin registeredEventsForOperaSession] */

void FUN_102d8fed8(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  puVar2[3] = 6;
  puVar2[2] = 3;
  puVar3 = puVar2;
  func_0x000103bb4bb4();
  puVar4 = (undefined8 *)puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[5] = puVar4;
  func_0x000107c61434();
  func_0x000103bb9f54();
  puVar3 = (undefined8 *)puVar4[1];
  puVar2[6] = *puVar4;
  puVar2[7] = puVar3;
  func_0x000107c61434();
  func_0x000103bba148();
  uVar1 = puVar3[1];
  puVar2[8] = *puVar3;
  puVar2[9] = uVar1;
  func_0x000107c61434();
  puVar4 = puVar2;
  func_0x000107c5fc48(puVar2,PTR___sSSN_11034da80);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 102d8ff70; end: 102d8fff3; -[_TtC33CreateStickerSpotlightOperaPlugin33CreateStickerSpotlightOperaPlugin teardown] */

/* WARNING: Possible PIC construction at 0x000102d8ffac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d8ffc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d8ffb0) */
/* WARNING: Removing unreachable block (ram,0x000102d8ffcc) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d8ff70(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102d8fff4; end: 102d900a7; -[_TtC33CreateStickerSpotlightOperaPlugin33CreateStickerSpotlightOperaPlugin operaViewDidSendEvent:page:params:] */

/* WARNING: Possible PIC construction at 0x000102d9008c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d90090) */

void FUN_102d8fff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  func_0x000107c5faec(param_3);
  if (param_5 != 0) {
    func_0x000107c5f9e8(param_5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
  }
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102d9033c(param_3,param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102d900a8; end: 102d9012b; -[_TtC33CreateStickerSpotlightOperaPlugin33CreateStickerSpotlightOperaPlugin modularStickerCutoutScopeDidDismiss:] */

/* WARNING: Possible PIC construction at 0x000102d900e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d90100: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d900e8) */
/* WARNING: Removing unreachable block (ram,0x000102d90104) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d900a8(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102d9012c; end: 102d90193; -[_TtC33CreateStickerSpotlightOperaPlugin33CreateStickerSpotlightOperaPlugin modularStickerCutoutScope:didSelectAddCommentWithCreatedSticker:] */

/* WARNING: Possible PIC construction at 0x000102d90174: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d90178) */

void FUN_102d9012c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102d9044c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102d90194; end: 102d9033b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d90194(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  
  func_0x000107c614f0();
  lVar1 = 0;
  func_0x000107c5f804();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  func_0x000107c61614(unaff_x20 + _DAT_112f16228,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f16230) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f16238) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f16240) = param_3;
  (**(code **)(lVar5 + 0x68))
            (&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar1
            );
  puVar2 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  uVar3 = 0xd000000000000033;
  func_0x000107c5fadc(0xd000000000000033,0x800000010f10d080);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar3);
  (**(code **)(lVar5 + 8))
            (&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  *(undefined **)(unaff_x20 + _DAT_112f16248) = puVar2;
  pcVar4 = "init(modularStickerCutoutScopeExposer:storiesConfigProvider:stickerInjector:)";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(char **)(unaff_x20 + _DAT_112f16250) = pcVar4;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d9033c; end: 102d9044b;  */

/* WARNING: Possible PIC construction at 0x000102d8f874: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d8f968: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d8f878) */
/* WARNING: Removing unreachable block (ram,0x000102d8f87c) */
/* WARNING: Removing unreachable block (ram,0x000102d8f990) */
/* WARNING: Removing unreachable block (ram,0x000102d8f998) */
/* WARNING: Removing unreachable block (ram,0x000102d8f8b0) */
/* WARNING: Removing unreachable block (ram,0x000102d8f9a4) */
/* WARNING: Removing unreachable block (ram,0x000102d8f8bc) */
/* WARNING: Removing unreachable block (ram,0x000102d8f9b0) */
/* WARNING: Removing unreachable block (ram,0x000102d8f8c4) */
/* WARNING: Removing unreachable block (ram,0x000102d8f9c0) */
/* WARNING: Removing unreachable block (ram,0x000102d8f8d0) */
/* WARNING: Removing unreachable block (ram,0x000102d8f8d8) */
/* WARNING: Removing unreachable block (ram,0x000102d8f96c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d9033c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  
  plVar3 = param_1;
  func_0x000103bb4bb4();
  plVar2 = (long *)*plVar3;
  if ((plVar2 == param_1 && plVar3[1] == param_2) ||
     (func_0x000107c605b8(plVar2,plVar3[1],param_1,param_2,0), ((ulong)plVar2 & 1) != 0)) {
    lVar4 = unaff_x20 + _DAT_112f16228;
    func_0x000107c61618();
    if (lVar4 == 0) {
      return;
    }
    lVar1 = *(long *)(unaff_x20 + _DAT_112f16230);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c5a9b0();
      func_0x000107c61180();
      if (lVar4 != 0) {
        func_0x000107c5a9b8();
        func_0x000107c61180();
      }
    }
    else {
      func_0x000107c61170();
    }
  }
  else {
    func_0x000103bb9f54();
    plVar3 = (long *)*plVar2;
    if ((plVar3 != param_1 || plVar2[1] != param_2) &&
       (func_0x000107c605b8(plVar3,plVar2[1],param_1,param_2,0), ((ulong)plVar3 & 1) == 0)) {
      func_0x000103bba148();
      plVar2 = (long *)*plVar3;
      if (((plVar2 != param_1) || (plVar3[1] != param_2)) &&
         (func_0x000107c605b8(plVar2,plVar3[1],param_1,param_2,0), ((ulong)plVar2 & 1) == 0)) {
        return;
      }
    }
    lVar1 = *(long *)(unaff_x20 + _DAT_112f16230);
    lVar4 = lVar1;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar4 == 0) {
      return;
    }
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar1);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 102d9044c; end: 102d90683;  */

/* WARNING: Possible PIC construction at 0x000102d9064c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d9065c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d90650) */
/* WARNING: Removing unreachable block (ram,0x000102d90660) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d9044c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112f16238);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c410e0();
    func_0x000107c615e8(lVar2);
    if (((int)lVar3 != 0) && (FUN_102d8fd54(), lVar2 = _DAT_112f16228, param_1 != 0)) {
      plVar4 = (long *)(unaff_x20 + _DAT_112f16228);
      func_0x000107c61618();
      if (plVar4 != (long *)0x0) {
        plVar5 = plVar4;
        func_0x000107c42a9c();
        func_0x000107c61180();
        func_0x000107c615e8();
        if (plVar5 != (long *)0x0) {
          func_0x000103bb4bec();
          lVar3 = *plVar4;
          lVar6 = plVar4[1];
          func_0x000107c61434(lVar6);
          func_0x000107c5fadc(lVar3,lVar6);
          func_0x000107c6142c(lVar6);
          lVar2 = unaff_x20 + lVar2;
          func_0x000107c61618();
          if (lVar2 != 0) {
            lVar6 = lVar2;
            func_0x000107c4e2bc();
            func_0x000107c61180();
            func_0x000107c615e8(lVar2);
            if (lVar6 != 0) {
              func_0x000107c40fa0(lVar6);
              func_0x000107c61180();
              func_0x000107c615e8(lVar6);
            }
          }
          puVar7 = (undefined8 *)0x112d4b5e8;
          func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
          func_0x000107c61534();
          puVar7[3] = 2;
          puVar7[2] = 1;
          puVar8 = puVar7;
          func_0x000103bb4d48();
          uVar1 = puVar8[1];
          puVar7[4] = *puVar8;
          puVar7[5] = uVar1;
          uVar9 = 0;
          func_0x000101ac55fc();
          puVar7[9] = uVar9;
          puVar7[6] = param_1;
          func_0x000107c61434(uVar1);
          func_0x000107c61174(param_1);
          puVar8 = puVar7;
          func_0x000100214a84(puVar7);
          func_0x000107c61588(puVar7);
          func_0x000100f15a0c(puVar7 + 4);
          func_0x000107c5f9dc(puVar8,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                              PTR___sSSSHsWP_11034da90);
          func_0x000107c6142c(puVar8);
          func_0x000107c4df80(plVar5);
          func_0x000107c615e8(plVar5);
          param_1 = lVar3;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 102d90684; end: 102d906a3;  */

void FUN_102d90684(void)

{
  func_0x000107c61168(&PTR_PTR_1128a5e38);
  return;
}



/* Entry: 102d906a4; end: 102d906d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d906a4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (param_1 == 0) {
      func_0x000107c61170();
    }
    else {
      uVar5 = *(undefined8 *)(lVar1 + _DAT_112f16250);
      puVar2 = &UNK_1105cf350;
      func_0x000107c613fc(&UNK_1105cf350,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,lVar1);
      puVar3 = &UNK_1105cf3a0;
      func_0x000107c613fc(&UNK_1105cf3a0,0x20,7);
      *(undefined **)(puVar3 + 0x10) = puVar2;
      *(long *)(puVar3 + 0x18) = param_1;
      uStack_68 = 0x102d906c8;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_1105cf3b8;
      ppuVar4 = &puStack_88;
      puStack_60 = puVar3;
      func_0x000107c60bc4(ppuVar4);
      puVar2 = puStack_60;
      func_0x000107c61174(param_1);
      func_0x000107c61174();
      func_0x000107c615f0(uVar5);
      func_0x000107c61574(puVar2);
      func_0x000107c4e524(uVar5);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(param_1);
      func_0x000107c615e8(uVar5);
    }
  }
  return;
}



/* Entry: 102d906d8; end: 102d90777;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102d906d8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_5;
  *(undefined8 *)(unaff_x20 + 0x18) = param_4;
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(param_2 + _DAT_11302e640);
  func_0x000107c61174();
  uVar1 = param_3;
  func_0x000107c5bd94();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
  return unaff_x20;
}



/* Entry: 102d90778; end: 102d9080f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d90778(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = 0;
  FUN_102d90a1c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f16338) = param_1;
  *(undefined8 *)(lVar3 + _DAT_112f16340) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112f16348) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 102d90810; end: 102d9081b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d90810(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar4 = 0;
  FUN_102d90a1c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112f16338) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112f16340) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112f16348) = uVar6;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar6);
  func_0x000107c61154(&lStack_40,puVar3);
  return;
}



/* Entry: 102d9081c; end: 102d90853;  */

void FUN_102d9081c(long param_1)

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



/* Entry: 102d90854; end: 102d9085b;  */

void FUN_102d90854(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 102d9085c; end: 102d90897;  */

void FUN_102d9085c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d90898; end: 102d908b7;  */

void FUN_102d90898(void)

{
  func_0x0001008f7604();
  return;
}



/* Entry: 102d908b8; end: 102d908bf;  */

undefined8 FUN_102d908b8(void)

{
  return 0;
}



/* Entry: 102d908c0; end: 102d90973; -[_TtC33CreateStickerSpotlightOperaPluginP33_52EA6008D64E27985EEC7849D2257D5341CreateStickerSpotlightOperaPluginProvider createPlugin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d908c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f16338);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112f16340);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112f16348);
  FUN_102d90684(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar1 = uVar2;
  FUN_102d90194(uVar2,uVar3,uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102d90974; end: 102d909d3; -[_TtC33CreateStickerSpotlightOperaPluginP33_52EA6008D64E27985EEC7849D2257D5341CreateStickerSpotlightOperaPluginProvider init] */

void FUN_102d90974(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreateStickerSpotlightOperaPlugin.CreateStickerSpotlightOperaPluginProvider",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d909a0);
  (*pcVar1)();
}



/* Entry: 102d909d4; end: 102d90a1b; -[_TtC33CreateStickerSpotlightOperaPluginP33_52EA6008D64E27985EEC7849D2257D5341CreateStickerSpotlightOperaPluginProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102d909f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d909f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d909d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f16338));
  return;
}



/* Entry: 102d90a1c; end: 102d90b03;  */

void FUN_102d90a1c(void)

{
  func_0x000107c61168(&PTR_PTR_1128a5f20);
  return;
}



/* Entry: 102d90b04; end: 102d90bbb;  */

void FUN_102d90b04(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  long lVar5;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar1 = 0;
  func_0x000107c5f8a4();
  lVar5 = *(long *)(lVar1 + -8);
  uVar2 = 1;
  uVar4 = uVar3;
  (**(code **)(lVar5 + 0x30))(uVar3,1,lVar1);
  if ((int)uVar4 == 1) {
    FUN_102d91118(uVar3,0x112dbf6f8,&UNK_10d97ae20);
    uVar4 = 0;
    uVar2 = 0;
  }
  else {
    func_0x000107c5f894();
    (**(code **)(lVar5 + 8))(uVar3,lVar1);
  }
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102d90bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4,uVar2);
  return;
}



/* Entry: 102d90bbc; end: 102d90cdb; +[_TtC16AppStoreInfoUtil16AppStoreInfoUtil getStoreFrontCountryCodeWithCompletionHandler:] */

void FUN_102d90bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_1105cf4e0;
  func_0x000107c613fc(&UNK_1105cf4e0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffd0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_1105cf508;
  func_0x000107c613fc(&UNK_1105cf508,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10db4c418;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_1105cf530;
  func_0x000107c613fc(&UNK_1105cf530,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10db4c428;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffd0 + -extraout_x8,&UNK_10db4c438,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 102d90cdc; end: 102d90da7;  */

void FUN_102d90cdc(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar1 = 0x112dbf6f8;
  func_0x0001000285a8(0x112dbf6f8,&UNK_10d97ae20);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x18) = uVar2;
  plVar3 = (long *)(ulong)*(uint *)(PTR___s8StoreKit10StorefrontV7currentACSgvgZTu_110347b40 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102d90d60;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s8StoreKit10StorefrontV7currentACSgvgZ_110347b38)(plVar3,uVar2);
  return;
}



/* Entry: 102d90da8; end: 102d90e83;  */

void FUN_102d90da8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  long lVar5;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  lVar1 = 0;
  func_0x000107c5f8a4();
  lVar5 = *(long *)(lVar1 + -8);
  uVar2 = 1;
  uVar4 = uVar3;
  (**(code **)(lVar5 + 0x30))(uVar3,1,lVar1);
  if ((int)uVar4 == 1) {
    FUN_102d91118(uVar3,0x112dbf6f8,&UNK_10d97ae20);
    uVar4 = 0;
  }
  else {
    func_0x000107c5f894();
    (**(code **)(lVar5 + 8))(uVar3,lVar1);
    func_0x000107c5fadc(uVar4,uVar2);
    func_0x000107c6142c(uVar2);
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  (**(code **)(*(long *)(unaff_x22 + 0x10) + 0x10))(*(long *)(unaff_x22 + 0x10),uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102d90e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102d90e84; end: 102d90ebf; -[_TtC16AppStoreInfoUtil16AppStoreInfoUtil init] */

void FUN_102d90e84(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d90ec0; end: 102d90f13;  */

void FUN_102d90ec0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d90f14; end: 102d90f77;  */

void FUN_102d90f14(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102d90f78;
  plVar4[2] = lVar1;
  lVar1 = 0x112dbf6f8;
  func_0x0001000285a8(0x112dbf6f8,&UNK_10d97ae20);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[3] = uVar2;
  plVar3 = (long *)(ulong)*(uint *)(PTR___s8StoreKit10StorefrontV7currentACSgvgZTu_110347b40 + 4);
  func_0x000107c615b8();
  plVar4[4] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = 0x102d90d60;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s8StoreKit10StorefrontV7currentACSgvgZ_110347b38)(plVar3,uVar2);
  return;
}



/* Entry: 102d90f78; end: 102d90fb3;  */

void FUN_102d90f78(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102d90fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102d90fb4; end: 102d9102b;  */

void FUN_102d90fb4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102d91198;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 102d9102c; end: 102d91093;  */

void FUN_102d9102c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102d91064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102d91094; end: 102d91117;  */

void FUN_102d91094(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x102d911a0;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 102d91118; end: 102d91157;  */

undefined8 FUN_102d91118(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102d91158; end: 102d91197;  */

void FUN_102d91158(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102d91194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102d91198; end: 102d911a3;  */

void FUN_102d91198(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102d90fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102d911a4; end: 102d916ef;  */

void FUN_102d911a4(long *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
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
  func_0x0001003717dc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x40) = uStack_70;
  func_0x0001000285a8(0x112e4ccd8,&UNK_10da46ce0);
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar10 = uStack_78;
  func_0x000107c6157c(uStack_78);
  func_0x00010017da58();
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(param_2 + 0x18) = puVar3;
  func_0x0001000285a8(0x112e4d1b8,&UNK_10da477e0);
  func_0x000107c610f8();
  uVar10 = uStack_80;
  func_0x000107c6157c(uStack_80);
  func_0x00010017da58();
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(param_2 + 0x20) = puVar4;
  func_0x0001000285a8(0x112e4ccc8,&UNK_10da49f00);
  func_0x000107c610f8();
  uVar10 = uStack_88;
  func_0x000107c6157c(uStack_88);
  func_0x0001003b3b80();
  puVar5 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(param_2 + 0x28) = puVar5;
  func_0x0001000285a8(0x112e50c28,&UNK_10dab6a10);
  func_0x000107c610f8();
  uVar10 = uStack_90;
  func_0x000107c6157c(uStack_90);
  func_0x00010017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(param_2 + 0x30) = puVar6;
  puVar7 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x38) = puVar7;
  puVar8 = PTR_PTR_1126ac498;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar8;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar10 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef27e00);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(puVar8);
  func_0x000107c61174();
  uVar10 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f10d160);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(puVar8);
  func_0x000107c61174(puVar3);
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef28140);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(puVar8);
  func_0x000107c61174(puVar4);
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1a710);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(puVar8);
  func_0x000107c61174(puVar5);
  uVar10 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef28160);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef2dd30);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c3e740(puVar8);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar7 != (undefined *)0x0) {
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar2);
    func_0x000107c61574(uStack_78);
    func_0x000107c61574(uStack_80);
    func_0x000107c61574(uStack_88);
    func_0x000107c61574(uStack_90);
    *(undefined **)(param_2 + 0x48) = puVar7;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d916f0);
  (*pcVar1)();
}



/* Entry: 102d916f0; end: 102d916ff;  */

void FUN_102d916f0(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x0001003717dc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x40) = uStack_70;
  func_0x0001000285a8(0x112e4ccd8,&UNK_10da46ce0);
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar11 = uStack_78;
  func_0x000107c6157c(uStack_78);
  func_0x00010017da58();
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(lVar2 + 0x18) = puVar4;
  func_0x0001000285a8(0x112e4d1b8,&UNK_10da477e0);
  func_0x000107c610f8();
  uVar11 = uStack_80;
  func_0x000107c6157c(uStack_80);
  func_0x00010017da58();
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(lVar2 + 0x20) = puVar5;
  func_0x0001000285a8(0x112e4ccc8,&UNK_10da49f00);
  func_0x000107c610f8();
  uVar11 = uStack_88;
  func_0x000107c6157c(uStack_88);
  func_0x0001003b3b80();
  puVar6 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(lVar2 + 0x28) = puVar6;
  func_0x0001000285a8(0x112e50c28,&UNK_10dab6a10);
  func_0x000107c610f8();
  uVar11 = uStack_90;
  func_0x000107c6157c(uStack_90);
  func_0x00010017da58();
  puVar7 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(lVar2 + 0x30) = puVar7;
  puVar8 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x38) = puVar8;
  puVar9 = PTR_PTR_1126ac498;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar9;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar11 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef27e00);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(puVar9);
  func_0x000107c61174();
  uVar11 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f10d160);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(puVar9);
  func_0x000107c61174(puVar4);
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef28140);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(puVar9);
  func_0x000107c61174(puVar5);
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1a710);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(puVar9);
  func_0x000107c61174(puVar6);
  uVar11 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef28160);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef2dd30);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c3e740(puVar9);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar8 != (undefined *)0x0) {
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar3);
    func_0x000107c61574(uStack_78);
    func_0x000107c61574(uStack_80);
    func_0x000107c61574(uStack_88);
    func_0x000107c61574(uStack_90);
    *(undefined **)(lVar2 + 0x48) = puVar8;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d916f0);
  (*pcVar1)();
}



/* Entry: 102d91700; end: 102d91be3;  */

long FUN_102d91700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x40) = param_2;
  func_0x0001000285a8(0x112e4ccd8,&UNK_10da46ce0);
  func_0x000107c610f8();
  func_0x000107c61174();
  uVar8 = param_3;
  func_0x000107c6157c(param_3);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  func_0x0001000285a8(0x112e4d1b8,&UNK_10da477e0);
  func_0x000107c610f8();
  uVar8 = param_4;
  func_0x000107c6157c(param_4);
  func_0x00010017da58();
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(unaff_x20 + 0x20) = puVar3;
  func_0x0001000285a8(0x112e4ccc8,&UNK_10da49f00);
  func_0x000107c610f8();
  uVar8 = param_5;
  func_0x000107c6157c(param_5);
  func_0x0001003b3b80();
  puVar4 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(unaff_x20 + 0x28) = puVar4;
  func_0x0001000285a8(0x112e50c28,&UNK_10dab6a10);
  func_0x000107c610f8();
  uVar8 = param_6;
  func_0x000107c6157c(param_6);
  func_0x00010017da58();
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(unaff_x20 + 0x30) = puVar5;
  puVar6 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x38) = puVar6;
  puVar7 = PTR_PTR_1126ac498;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar7;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar8 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar7);
  uVar8 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef27e00);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(puVar7);
  func_0x000107c61174();
  uVar8 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f10d160);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(puVar7);
  func_0x000107c61174(puVar2);
  uVar8 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef28140);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(puVar7);
  func_0x000107c61174(puVar3);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1a710);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(puVar7);
  func_0x000107c61174(puVar4);
  uVar8 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef28160);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(puVar7);
  func_0x000107c61174(puVar5);
  uVar8 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef2dd30);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c3e740(puVar7);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar6 != (undefined *)0x0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61574(param_3);
    func_0x000107c61574(param_4);
    func_0x000107c61574(param_5);
    func_0x000107c61574(param_6);
    *(undefined **)(unaff_x20 + 0x48) = puVar6;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d91be4);
  (*pcVar1)();
}



/* Entry: 102d91be4; end: 102d91c57;  */

void FUN_102d91be4(void)

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
  return;
}



/* Entry: 102d91c58; end: 102d91cab;  */

void FUN_102d91c58(undefined8 *param_1)

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



/* Entry: 102d91cac; end: 102d91cb3;  */

void FUN_102d91cac(undefined8 *param_1)

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



/* Entry: 102d91cb4; end: 102d91d03;  */

undefined8 FUN_102d91cb4(void)

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



/* Entry: 102d91d04; end: 102d91d47;  */

undefined1  [16] FUN_102d91d04(void)

{
  return ZEXT816(0x1105cf668);
}



/* Entry: 102d91d48; end: 102d91d6f;  */

void FUN_102d91d48(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102d91d70; end: 102d91d77;  */

undefined8 FUN_102d91d70(void)

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



/* Entry: 102d91d78; end: 102d91e0b;  */

void FUN_102d91d78(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100372ae8();
  func_0x000107c613fc();
  FUN_102d91e6c(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 102d91e0c; end: 102d91e17;  */

void FUN_102d91e0c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100372ae8();
  func_0x000107c613fc();
  FUN_102d91e6c(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 102d91e18; end: 102d91e6b;  */

undefined8 FUN_102d91e18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_102d91e6c(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 102d91e6c; end: 102d92087;  */

void FUN_102d91e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  func_0x0001000285a8(0x112e48e78,&UNK_10da3fdf0);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  uVar2 = param_3;
  func_0x000107c6157c(param_3);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar1 = PTR_PTR_1126ac4a0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar4);
  uVar2 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f03ecc0);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar4);
  uVar3 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f10d190);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar4;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 102d92088; end: 102d920c3;  */

void FUN_102d92088(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d920c4; end: 102d92117;  */

void FUN_102d920c4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102d92118; end: 102d9211f;  */

void FUN_102d92118(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102d92120; end: 102d9216f;  */

undefined8 FUN_102d92120(void)

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



/* Entry: 102d92170; end: 102d921b3;  */

undefined1  [16] FUN_102d92170(void)

{
  return ZEXT816(0x1105cf730);
}



/* Entry: 102d921b4; end: 102d921db;  */

void FUN_102d921b4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102d921dc; end: 102d921e3;  */

undefined8 FUN_102d921dc(void)

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



/* Entry: 102d921e4; end: 102d93417;  */

void FUN_102d921e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  *(undefined8 *)(unaff_x20 + 0x38) = param_3;
  *(undefined8 *)(unaff_x20 + 0x40) = param_4;
  *(undefined8 *)(unaff_x20 + 0x48) = param_5;
  *(undefined8 *)(unaff_x20 + 0x50) = param_6;
  *(undefined8 *)(unaff_x20 + 0x58) = param_7;
  *(undefined8 *)(unaff_x20 + 0x60) = param_8;
  *(undefined8 *)(unaff_x20 + 0x68) = param_9;
  *(undefined8 *)(unaff_x20 + 0x70) = param_10;
  *(undefined8 *)(unaff_x20 + 0x78) = param_11;
  *(undefined8 *)(unaff_x20 + 0x80) = param_12;
  *(undefined8 *)(unaff_x20 + 0x88) = param_13;
  *(undefined8 *)(unaff_x20 + 0x90) = param_14;
  *(undefined8 *)(unaff_x20 + 0x98) = param_15;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_16;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_17;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_18;
  *(undefined8 *)(unaff_x20 + 0xb8) = param_19;
  *(undefined8 *)(unaff_x20 + 0xc0) = param_20;
  *(undefined8 *)(unaff_x20 + 200) = param_21;
  *(undefined8 *)(unaff_x20 + 0xd0) = param_22;
  *(undefined8 *)(unaff_x20 + 0xd8) = param_23;
  *(undefined8 *)(unaff_x20 + 0xe0) = param_24;
  *(undefined8 *)(unaff_x20 + 0xe8) = param_25;
  *(undefined8 *)(unaff_x20 + 0xf0) = param_26;
  *(undefined8 *)(unaff_x20 + 0xf8) = param_27;
  *(undefined8 *)(unaff_x20 + 0x100) = param_28;
  *(undefined8 *)(unaff_x20 + 0x108) = param_29;
  *(undefined8 *)(unaff_x20 + 0x110) = param_30;
  *(undefined8 *)(unaff_x20 + 0x118) = param_31;
  *(undefined8 *)(unaff_x20 + 0x120) = param_32;
  func_0x0001000285a8(0x112e4cce0,&UNK_10da46da0);
  func_0x000107c610f8();
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
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_29);
  func_0x000107c61174(param_30);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = param_33;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *(undefined **)(unaff_x20 + 0x18) = puVar5;
  func_0x0001000285a8(0x112e4cd20,&UNK_10da47070);
  func_0x000107c610f8();
  uVar2 = param_34;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *(undefined **)(unaff_x20 + 0x20) = puVar6;
  puVar4 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x28) = puVar4;
  puVar3 = PTR_PTR_1126ac4a8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef19d20);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010efc32c0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f051600);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef234e0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef2b6f0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef2a530);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f0fcb60);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_13);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f10d1b0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_14);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000010;
  uVar2 = uVar7;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_15);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2c670);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_16);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef134e0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_17);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x536f725070616e73;
  func_0x000107c5fadc(0x536f725070616e73,0xef73656369767265);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_18);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_19);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_20);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef1bf20);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_21);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef2d400);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_22);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef19c30);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_23);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_24);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef2d430);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_25);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar2 = 0x767265536b636564;
  func_0x000107c5fadc(0x767265536b636564,0xec00000073656369);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_26);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f10d1e0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_27);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_28);
  func_0x000107c61174();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1a530);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_28);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_29);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef32790);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_29);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_30);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1bf00);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_30);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2e2d0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_31);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f10d200);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_32);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f10d230);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(puVar3);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef35990);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174(puVar6);
  uVar2 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2b760);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(puVar3);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar4 != (undefined *)0x0) {
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
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_13);
    func_0x000107c61170(param_14);
    func_0x000107c61170(param_15);
    func_0x000107c61170(param_16);
    func_0x000107c61170(param_17);
    func_0x000107c61170(param_18);
    func_0x000107c61170(param_19);
    func_0x000107c61170(param_20);
    func_0x000107c61170(param_21);
    func_0x000107c61170(param_22);
    func_0x000107c61170(param_23);
    func_0x000107c61170(param_24);
    func_0x000107c61170(param_25);
    func_0x000107c61170(param_26);
    func_0x000107c61170(param_27);
    func_0x000107c61170(param_28);
    func_0x000107c61170(param_29);
    func_0x000107c61170(param_30);
    func_0x000107c61170(param_31);
    func_0x000107c61170(param_32);
    func_0x000107c61574(param_33);
    func_0x000107c61574(param_34);
    *(undefined **)(unaff_x20 + 0x128) = puVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d93418);
  (*pcVar1)();
}



/* Entry: 102d93418; end: 102d9356b;  */

void FUN_102d93418(void)

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
  return;
}



/* Entry: 102d9356c; end: 102d935bb;  */

undefined8 FUN_102d9356c(void)

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



/* Entry: 102d935bc; end: 102d935ff;  */

undefined1  [16] FUN_102d935bc(void)

{
  return ZEXT816(0x1105cf7f8);
}



/* Entry: 102d93600; end: 102d93627;  */

void FUN_102d93600(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102d93628; end: 102d9362f;  */

undefined8 FUN_102d93628(void)

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



/* Entry: 102d93630; end: 102d9424b;  */

void FUN_102d93630(long *param_1,long param_2)

{
  undefined *puVar1;
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
  func_0x00010037b2f4();
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
  *(undefined8 *)(param_2 + 0x68) = uStack_c8;
  *(undefined8 *)(param_2 + 0x70) = uStack_d0;
  *(undefined8 *)(param_2 + 0x78) = uStack_d8;
  *(undefined8 *)(param_2 + 0x80) = uStack_e0;
  *(undefined8 *)(param_2 + 0x88) = uStack_e8;
  *(undefined8 *)(param_2 + 0x90) = uStack_f0;
  *(undefined8 *)(param_2 + 0x98) = uStack_f8;
  *(undefined8 *)(param_2 + 0xa0) = uStack_100;
  *(undefined8 *)(param_2 + 0xa8) = uStack_108;
  puVar1 = PTR_PTR_1126ac4b0;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174();
  uVar12 = uStack_c8;
  func_0x000107c61174();
  uVar13 = uStack_d0;
  func_0x000107c61174();
  uVar14 = uStack_d8;
  func_0x000107c61174();
  uVar15 = uStack_e0;
  func_0x000107c61174();
  uVar16 = uStack_e8;
  func_0x000107c61174();
  uVar17 = uStack_f0;
  func_0x000107c61174(uStack_f0);
  uVar18 = uStack_f8;
  func_0x000107c61174(uStack_f8);
  uVar19 = uStack_100;
  func_0x000107c61174();
  uVar20 = uStack_108;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar21 = auStack_70[0];
  func_0x000107c61174();
  uVar22 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar22);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar22 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar22);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar23 = 0xd000000000000012;
  uVar22 = uVar23;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef120a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar22);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar22 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar22);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar22 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f10d250);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar22);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar22 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef234e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar22);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar22 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar22);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar22 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010effcda0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar22);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar22 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f00acf0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar22);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000012,0x800000010f0520a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar23);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar22 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar22);
  uVar23 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar22 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar22);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar22 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00aef0);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar22);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar22 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar22);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar22 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar22);
  func_0x000107c61174(uVar16);
  func_0x000107c61174();
  uVar22 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f00ad10);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar22);
  func_0x000107c61174(uVar17);
  func_0x000107c61174();
  uVar22 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f007170);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar22);
  func_0x000107c61174(uVar18);
  func_0x000107c61174();
  uVar22 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f051690);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar22);
  func_0x000107c61174();
  func_0x000107c61174(uVar23);
  uVar22 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef32790);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar22);
  func_0x000107c61174();
  func_0x000107c61174(uVar23);
  uVar22 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(uVar23);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar22);
  uVar23 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  uVar22 = uVar23;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar21);
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
  *(undefined8 *)(param_2 + 0xb0) = uVar22;
  *param_1 = param_2;
  return;
}



/* Entry: 102d9424c; end: 102d94297;  */

void FUN_102d9424c(void)

{
  long unaff_x20;
  
  FUN_102d93630(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8));
  return;
}



/* Entry: 102d94298; end: 102d94ce7;  */

void FUN_102d94298(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  *(undefined8 *)(unaff_x20 + 0x78) = param_14;
  *(undefined8 *)(unaff_x20 + 0x80) = param_15;
  *(undefined8 *)(unaff_x20 + 0x88) = param_16;
  *(undefined8 *)(unaff_x20 + 0x90) = param_17;
  *(undefined8 *)(unaff_x20 + 0x98) = param_18;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_19;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_20;
  puVar1 = PTR_PTR_1126ac4b0;
  func_0x000107c610f8();
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
  func_0x000107c61174(param_13);
  func_0x000107c61174();
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000012;
  uVar2 = uVar4;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef120a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f10d250);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef234e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010effcda0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f00acf0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000012,0x800000010f0520a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00aef0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_13);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_14);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_15);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f00ad10);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_16);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f007170);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_17);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_18);
  func_0x000107c61174();
  uVar2 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f051690);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_18);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_19);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef32790);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_19);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_20);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
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
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_20);
  *(undefined **)(unaff_x20 + 0xb0) = puVar3;
  return;
}



/* Entry: 102d94ce8; end: 102d94dc3;  */

void FUN_102d94ce8(void)

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
  return;
}



/* Entry: 102d94dc4; end: 102d94e17;  */

void FUN_102d94dc4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xb0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102d94e18; end: 102d94e1f;  */

void FUN_102d94e18(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xb0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102d94e20; end: 102d94e6f;  */

undefined8 FUN_102d94e20(void)

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



/* Entry: 102d94e70; end: 102d94eb3;  */

undefined1  [16] FUN_102d94e70(void)

{
  return ZEXT816(0x1105cf8c0);
}



/* Entry: 102d94eb4; end: 102d94edb;  */

void FUN_102d94eb4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102d94edc; end: 102d94ee3;  */

undefined8 FUN_102d94edc(void)

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



/* Entry: 102d94ee4; end: 102d98f1f;  */

void FUN_102d94ee4(long *param_1,long param_2)

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
  undefined *puVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
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
  func_0x00010037900c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x58) = uStack_78;
  *(undefined8 *)(param_2 + 0x60) = uStack_80;
  *(undefined8 *)(param_2 + 0x68) = uStack_88;
  *(undefined8 *)(param_2 + 0x70) = uStack_90;
  *(undefined8 *)(param_2 + 0x78) = uStack_98;
  *(undefined8 *)(param_2 + 0x80) = uStack_a0;
  *(undefined8 *)(param_2 + 0x88) = uStack_a8;
  *(undefined8 *)(param_2 + 0x90) = uStack_b0;
  *(undefined8 *)(param_2 + 0x98) = uStack_b8;
  *(undefined8 *)(param_2 + 0xa0) = uStack_c0;
  *(undefined8 *)(param_2 + 0xa8) = uStack_c8;
  *(undefined8 *)(param_2 + 0xb0) = uStack_d0;
  *(undefined8 *)(param_2 + 0xb8) = uStack_d8;
  *(undefined8 *)(param_2 + 0xc0) = uStack_e0;
  *(undefined8 *)(param_2 + 200) = uStack_e8;
  *(undefined8 *)(param_2 + 0xd0) = uStack_f0;
  *(undefined8 *)(param_2 + 0xd8) = uStack_f8;
  *(undefined8 *)(param_2 + 0xe0) = uStack_100;
  *(undefined8 *)(param_2 + 0xe8) = uStack_108;
  *(undefined8 *)(param_2 + 0xf0) = uStack_110;
  *(undefined8 *)(param_2 + 0xf8) = uStack_118;
  *(undefined8 *)(param_2 + 0x100) = uStack_120;
  *(undefined8 *)(param_2 + 0x108) = uStack_128;
  *(undefined8 *)(param_2 + 0x110) = uStack_130;
  *(undefined8 *)(param_2 + 0x118) = uStack_138;
  *(undefined8 *)(param_2 + 0x120) = uStack_140;
  *(undefined8 *)(param_2 + 0x128) = uStack_148;
  *(undefined8 *)(param_2 + 0x130) = uStack_150;
  *(undefined8 *)(param_2 + 0x138) = uStack_158;
  *(undefined8 *)(param_2 + 0x140) = uStack_160;
  *(undefined8 *)(param_2 + 0x148) = uStack_168;
  *(undefined8 *)(param_2 + 0x150) = uStack_170;
  *(undefined8 *)(param_2 + 0x158) = uStack_178;
  *(undefined8 *)(param_2 + 0x160) = uStack_180;
  *(undefined8 *)(param_2 + 0x168) = uStack_188;
  *(undefined8 *)(param_2 + 0x170) = uStack_190;
  *(undefined8 *)(param_2 + 0x178) = uStack_198;
  *(undefined8 *)(param_2 + 0x180) = uStack_1a0;
  *(undefined8 *)(param_2 + 0x188) = uStack_1a8;
  *(undefined8 *)(param_2 + 400) = uStack_1b0;
  *(undefined8 *)(param_2 + 0x198) = uStack_1b8;
  *(undefined8 *)(param_2 + 0x1a0) = uStack_1c0;
  *(undefined8 *)(param_2 + 0x1a8) = uStack_1c8;
  *(undefined8 *)(param_2 + 0x1b0) = uStack_1d0;
  *(undefined8 *)(param_2 + 0x1b8) = uStack_1d8;
  *(undefined8 *)(param_2 + 0x1c0) = uStack_1e0;
  *(undefined8 *)(param_2 + 0x1c8) = uStack_1e8;
  *(undefined8 *)(param_2 + 0x1d0) = uStack_1f0;
  *(undefined8 *)(param_2 + 0x1d8) = uStack_1f8;
  *(undefined8 *)(param_2 + 0x1e0) = uStack_200;
  *(undefined8 *)(param_2 + 0x1e8) = uStack_208;
  *(undefined8 *)(param_2 + 0x1f0) = uStack_210;
  *(undefined8 *)(param_2 + 0x1f8) = uStack_218;
  *(undefined8 *)(param_2 + 0x200) = uStack_220;
  *(undefined8 *)(param_2 + 0x208) = uStack_228;
  *(undefined8 *)(param_2 + 0x210) = uStack_230;
  *(undefined8 *)(param_2 + 0x218) = uStack_238;
  *(undefined8 *)(param_2 + 0x220) = uStack_240;
  *(undefined8 *)(param_2 + 0x228) = uStack_248;
  *(undefined8 *)(param_2 + 0x230) = uStack_250;
  *(undefined8 *)(param_2 + 0x238) = uStack_258;
  *(undefined8 *)(param_2 + 0x240) = uStack_260;
  *(undefined8 *)(param_2 + 0x248) = uStack_268;
  *(undefined8 *)(param_2 + 0x250) = uStack_270;
  *(undefined8 *)(param_2 + 600) = uStack_278;
  *(undefined8 *)(param_2 + 0x260) = uStack_280;
  *(undefined8 *)(param_2 + 0x268) = uStack_288;
  *(undefined8 *)(param_2 + 0x270) = uStack_290;
  *(undefined8 *)(param_2 + 0x278) = uStack_298;
  *(undefined8 *)(param_2 + 0x280) = uStack_2a0;
  *(undefined8 *)(param_2 + 0x288) = uStack_2a8;
  *(undefined8 *)(param_2 + 0x290) = uStack_2b0;
  *(undefined8 *)(param_2 + 0x298) = uStack_2b8;
  *(undefined8 *)(param_2 + 0x2a0) = uStack_2c0;
  *(undefined8 *)(param_2 + 0x2a8) = uStack_2c8;
  *(undefined8 *)(param_2 + 0x2b0) = uStack_2d0;
  *(undefined8 *)(param_2 + 0x2b8) = uStack_2d8;
  *(undefined8 *)(param_2 + 0x2c0) = uStack_2e0;
  *(undefined8 *)(param_2 + 0x2c8) = uStack_2e8;
  *(undefined8 *)(param_2 + 0x2d0) = uStack_2f0;
  *(undefined8 *)(param_2 + 0x2d8) = uStack_2f8;
  *(undefined8 *)(param_2 + 0x2e0) = uStack_300;
  *(undefined8 *)(param_2 + 0x2e8) = uStack_308;
  *(undefined8 *)(param_2 + 0x2f0) = uStack_310;
  *(undefined8 *)(param_2 + 0x2f8) = uStack_318;
  *(undefined8 *)(param_2 + 0x300) = uStack_320;
  *(undefined8 *)(param_2 + 0x308) = uStack_328;
  *(undefined8 *)(param_2 + 0x310) = uStack_330;
  *(undefined8 *)(param_2 + 0x318) = uStack_338;
  *(undefined8 *)(param_2 + 800) = uStack_340;
  *(undefined8 *)(param_2 + 0x328) = uStack_348;
  *(undefined8 *)(param_2 + 0x330) = uStack_350;
  *(undefined8 *)(param_2 + 0x338) = uStack_358;
  func_0x0001000285a8(0x112e4cd20,&UNK_10da47070);
  func_0x000107c610f8();
  uVar42 = uStack_78;
  func_0x000107c61174();
  uVar43 = uStack_80;
  func_0x000107c61174();
  uVar44 = uStack_88;
  func_0x000107c61174();
  uVar1 = uStack_90;
  func_0x000107c61174();
  uVar2 = uStack_98;
  func_0x000107c61174();
  uVar3 = uStack_a0;
  func_0x000107c61174();
  uVar4 = uStack_a8;
  func_0x000107c61174();
  uVar5 = uStack_b0;
  func_0x000107c61174();
  uVar6 = uStack_b8;
  func_0x000107c61174();
  uVar7 = uStack_c0;
  func_0x000107c61174();
  uVar8 = uStack_c8;
  func_0x000107c61174();
  uVar9 = uStack_d0;
  func_0x000107c61174();
  uVar10 = uStack_d8;
  func_0x000107c61174();
  uVar11 = uStack_e0;
  func_0x000107c61174();
  uVar12 = uStack_e8;
  func_0x000107c61174();
  uVar13 = uStack_f0;
  func_0x000107c61174();
  uVar14 = uStack_f8;
  func_0x000107c61174();
  uVar15 = uStack_100;
  func_0x000107c61174();
  uVar16 = uStack_108;
  func_0x000107c61174();
  uVar17 = uStack_110;
  func_0x000107c61174();
  uVar18 = uStack_118;
  func_0x000107c61174();
  uVar19 = uStack_120;
  func_0x000107c61174();
  uVar20 = uStack_128;
  func_0x000107c61174();
  uVar21 = uStack_130;
  func_0x000107c61174();
  uVar22 = uStack_138;
  func_0x000107c61174();
  uVar23 = uStack_140;
  func_0x000107c61174();
  uVar24 = uStack_148;
  func_0x000107c61174();
  uVar25 = uStack_150;
  func_0x000107c61174();
  uVar26 = uStack_158;
  func_0x000107c61174();
  uVar27 = uStack_160;
  func_0x000107c61174();
  uVar28 = uStack_168;
  func_0x000107c61174();
  uVar29 = uStack_170;
  func_0x000107c61174();
  uVar30 = uStack_178;
  func_0x000107c61174();
  uVar31 = uStack_180;
  func_0x000107c61174();
  uVar32 = uStack_188;
  func_0x000107c61174();
  uVar33 = uStack_190;
  func_0x000107c61174();
  uVar34 = uStack_198;
  func_0x000107c61174();
  uVar35 = uStack_1a0;
  func_0x000107c61174();
  uVar36 = uStack_1a8;
  func_0x000107c61174();
  uVar37 = uStack_1b0;
  func_0x000107c61174();
  uVar38 = uStack_1b8;
  func_0x000107c61174();
  uVar45 = uStack_1c0;
  func_0x000107c61174();
  uVar46 = uStack_1c8;
  func_0x000107c61174();
  uVar47 = uStack_1d0;
  func_0x000107c61174();
  uVar48 = uStack_1d8;
  func_0x000107c61174();
  uVar49 = uStack_1e0;
  func_0x000107c61174();
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
  uVar41 = uStack_360;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar39 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar41);
  *(undefined **)(param_2 + 0x18) = puVar39;
  func_0x0001000285a8(0x112e4cd28,&UNK_10daaf350);
  func_0x000107c610f8();
  uVar41 = uStack_368;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar39 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar41);
  *(undefined **)(param_2 + 0x20) = puVar39;
  func_0x0001000285a8(0x112e9f058,&UNK_10daafe58);
  func_0x000107c610f8();
  uVar41 = uStack_370;
  func_0x000107c6157c();
  func_0x0001003b3b80();
  puVar39 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar41);
  *(undefined **)(param_2 + 0x28) = puVar39;
  func_0x0001000285a8(0x112e51df8,&UNK_10daafe60);
  func_0x000107c610f8();
  uVar41 = uStack_378;
  func_0x000107c6157c(uStack_378);
  func_0x00010017da58();
  puVar39 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar41);
  *(undefined **)(param_2 + 0x30) = puVar39;
  func_0x0001000285a8(0x112e9edf8,&UNK_10dabb450);
  func_0x000107c610f8();
  uVar41 = uStack_380;
  func_0x000107c6157c(uStack_380);
  func_0x00010017da58();
  puVar39 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar41);
  *(undefined **)(param_2 + 0x38) = puVar39;
  func_0x0001000285a8(0x112e9ee00,&UNK_10daaf8c0);
  func_0x000107c610f8();
  uVar41 = uStack_388;
  func_0x000107c6157c(uStack_388);
  func_0x0001003b3b80();
  puVar39 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar41);
  *(undefined **)(param_2 + 0x40) = puVar39;
  func_0x0001000285a8(0x112e4c880,&UNK_10da46440);
  func_0x000107c610f8();
  uVar41 = uStack_390;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar39 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar41);
  *(undefined **)(param_2 + 0x48) = puVar39;
  func_0x0001000285a8(0x112e84da0,&UNK_10dabb480);
  func_0x000107c610f8();
  uVar41 = uStack_398;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar39 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar41);
  *(undefined **)(param_2 + 0x50) = puVar39;
  puVar39 = PTR_PTR_1126ac4b8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar39;
  func_0x000107c61174();
  uVar40 = auStack_70[0];
  func_0x000107c61174();
  uVar41 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar39);
  func_0x000107c61170(puVar39);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar41);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar97);
  uVar101 = 0xd000000000000014;
  uVar41 = uVar101;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar41);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar97);
  uVar102 = 0xd000000000000012;
  uVar41 = uVar102;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f03f080);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar43);
  func_0x000107c61170(uVar41);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar97);
  uVar98 = 0xd000000000000016;
  uVar41 = uVar98;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar41);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar41);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = uVar101;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar41);
  uVar97 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010effcda0);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar97);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar41);
  uVar97 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f05bfb0);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar97);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f10d280);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar41);
  uVar97 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0a3ff0);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar97);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar97);
  uVar99 = 0xd000000000000010;
  uVar41 = uVar99;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar41);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar97);
  uVar100 = 0xd000000000000017;
  uVar41 = uVar100;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar41);
  uVar97 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef9e300);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar97);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = uVar100;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0a4090);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar41);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f09ddb0);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar41);
  uVar97 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efbb850);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar97);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar41);
  func_0x000107c5fadc(0xd000000000000016,0x800000010f00acf0);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar98);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar97 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f007170);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar97);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar97 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00aef0);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar97);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f05c010);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar41);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar97);
  uVar41 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f00ad10);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar41);
  uVar97 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f0a3fb0);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar97);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar97 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00ad40);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar97);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = uVar99;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000014,0x800000010f05bfd0);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar101);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar41);
  uVar97 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f05c3a0);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar97);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar97);
  uVar41 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef2dd00);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar41);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef19df0);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar41);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = uVar102;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef25e10);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar41);
  uVar97 = 0x53636f4470616e73;
  func_0x000107c5fadc(0x53636f4470616e73,0xef73656369767265);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar97);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar98 = 0xd000000000000015;
  uVar41 = uVar98;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a7f0);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar97 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar97);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = uVar102;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f0520a0);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar41);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = uVar100;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef27e80);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar41);
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar99);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar97);
  uVar41 = uVar100;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef2dce0);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar41);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar101 = 0xd000000000000016;
  uVar41 = uVar101;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef329c0);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef120a0);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar102);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar102 = 0xd000000000000018;
  uVar41 = uVar102;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f09edb0);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar41);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar97);
  uVar41 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0a3fd0);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar41);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar97);
  uVar41 = uVar100;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar97 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f01aa40);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar97);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f01a810);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar41);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = uVar100;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef26b50);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar41);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar97);
  uVar41 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010ef2dc90);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar41);
  uVar97 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85690);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar97);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = uVar102;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc89e0);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar41);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = uVar100;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef2b490);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar50);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar41);
  uVar97 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f10d2a0);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar51);
  func_0x000107c61170(uVar97);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar99 = 0xd000000000000014;
  uVar41 = uVar99;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef3bff0);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2fd80);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar53);
  func_0x000107c61170(uVar98);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1de30);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar101);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar97 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f006f40);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar55);
  func_0x000107c61170(uVar97);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar97);
  uVar41 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef19380);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar56);
  func_0x000107c61170(uVar41);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar97);
  uVar41 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar97 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc4520);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar97);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar97 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar59);
  func_0x000107c61170(uVar97);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = uVar99;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef20500);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar60);
  func_0x000107c61170(uVar41);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar97);
  uVar41 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f0a40b0);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar61);
  func_0x000107c61170(uVar41);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar97);
  uVar98 = 0xd000000000000013;
  uVar41 = uVar98;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar62);
  func_0x000107c61170(uVar41);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = uVar102;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef32650);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar41);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = uVar102;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef35720);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar41);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef2a530);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar41);
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef2dcc0);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar98);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar41);
  uVar97 = 0x536f725070616e73;
  func_0x000107c5fadc(0x536f725070616e73,0xef73656369767265);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar67);
  func_0x000107c61170(uVar97);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar97 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f03f0a0);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar68);
  func_0x000107c61170(uVar97);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0ad750);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar69);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar41);
  uVar97 = 0x72655374736f6f62;
  func_0x000107c5fadc(0x72655374736f6f62,0xec00000065636976);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar70);
  func_0x000107c61170(uVar97);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f0a4040);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar71);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar97 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar72);
  func_0x000107c61170(uVar97);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar97 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef20b70);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar73);
  func_0x000107c61170(uVar97);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar101 = 0xd000000000000015;
  uVar41 = uVar101;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1dff0);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar74);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar41);
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef3a9f0);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar75);
  func_0x000107c61170(uVar100);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar97);
  uVar41 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f05c040);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar76);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar97 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef32a00);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar77);
  func_0x000107c61170(uVar97);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f01a160);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar78);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar97 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f051690);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar79);
  func_0x000107c61170(uVar97);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar97);
  uVar41 = uVar102;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0583b0);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar80);
  func_0x000107c61170(uVar41);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar97);
  uVar41 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef329e0);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar81);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar97 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f009f80);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar82);
  func_0x000107c61170(uVar97);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f051710);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar83);
  func_0x000107c61170(uVar41);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = uVar99;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1a530);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar84);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar41);
  uVar97 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar85);
  func_0x000107c61170(uVar97);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar97);
  uVar41 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef32790);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar86);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar97 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar87);
  func_0x000107c61170(uVar97);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar98 = 0xd000000000000012;
  uVar41 = uVar98;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f05c610);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar88);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar41);
  func_0x000107c5fadc(0xd000000000000012,0x800000010f05c380);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar89);
  func_0x000107c61170(uVar98);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar97);
  uVar41 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f00a420);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar90);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar41);
  uVar97 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc33b0);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar91);
  func_0x000107c61170(uVar97);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0157d0);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar92);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1e0e0);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar93);
  func_0x000107c61170(uVar99);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar97);
  uVar41 = uVar101;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef21bb0);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar94);
  func_0x000107c61170(uVar41);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar97);
  uVar41 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef2d6e0);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar95);
  func_0x000107c61170(uVar41);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f007220);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar96);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  uVar97 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar98 = uVar102;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2b760);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar98);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  uVar98 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f0a4110);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar98);
  func_0x000107c61170(uVar41);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  uVar98 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174(uVar97);
  func_0x000107c61174(uVar98);
  uVar41 = uVar102;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f03f140);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar98);
  func_0x000107c61170(uVar41);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  uVar97 = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61174(uVar41);
  func_0x000107c61174(uVar97);
  func_0x000107c5fadc(0xd000000000000018,0x800000010f05c900);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar102);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  uVar97 = *(undefined8 *)(param_2 + 0x38);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar98 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0ad7f0);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar98);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  uVar97 = *(undefined8 *)(param_2 + 0x40);
  func_0x000107c61174();
  func_0x000107c61174(uVar97);
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef21c40);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar101);
  uVar41 = *(undefined8 *)(param_2 + 0x10);
  uVar97 = *(undefined8 *)(param_2 + 0x48);
  func_0x000107c61174(uVar41);
  func_0x000107c61174(uVar97);
  uVar98 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f051790);
  func_0x000107c5a49c(uVar41);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar98);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  uVar98 = *(undefined8 *)(param_2 + 0x50);
  func_0x000107c61174(uVar97);
  func_0x000107c61174(uVar98);
  uVar41 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f089400);
  func_0x000107c5a49c(uVar97);
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar98);
  func_0x000107c61170(uVar41);
  uVar97 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  uVar41 = uVar97;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar97);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar43);
  func_0x000107c61170(uVar44);
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
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar49);
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
  func_0x000107c61574(uStack_360);
  func_0x000107c61574(uStack_368);
  func_0x000107c61574(uStack_370);
  func_0x000107c61574(uStack_378);
  func_0x000107c61574(uStack_380);
  func_0x000107c61574(uStack_388);
  func_0x000107c61574(uStack_390);
  func_0x000107c61574(uStack_398);
  *(undefined8 *)(param_2 + 0x340) = uVar41;
  *param_1 = param_2;
  return;
}



/* Entry: 102d98f20; end: 102d990a7;  */

void FUN_102d98f20(void)

{
  long unaff_x20;
  
  FUN_102d94ee4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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



/* Entry: 102d990a8; end: 102d9c71b;  */

long FUN_102d990a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
                  undefined8 param_69,undefined8 param_70)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
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
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x58) = param_2;
  *(undefined8 *)(unaff_x20 + 0x60) = param_3;
  *(undefined8 *)(unaff_x20 + 0x68) = param_4;
  *(undefined8 *)(unaff_x20 + 0x70) = param_5;
  *(undefined8 *)(unaff_x20 + 0x78) = param_6;
  *(undefined8 *)(unaff_x20 + 0x80) = param_7;
  *(undefined8 *)(unaff_x20 + 0x88) = param_8;
  *(undefined8 *)(unaff_x20 + 0x90) = param_9;
  *(undefined8 *)(unaff_x20 + 0x98) = param_10;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_11;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_12;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_13;
  *(undefined8 *)(unaff_x20 + 0xb8) = param_14;
  *(undefined8 *)(unaff_x20 + 0xc0) = param_15;
  *(undefined8 *)(unaff_x20 + 200) = param_16;
  *(undefined8 *)(unaff_x20 + 0xd0) = param_17;
  *(undefined8 *)(unaff_x20 + 0xd8) = param_18;
  *(undefined8 *)(unaff_x20 + 0xe0) = param_19;
  *(undefined8 *)(unaff_x20 + 0xe8) = param_20;
  *(undefined8 *)(unaff_x20 + 0xf0) = param_21;
  *(undefined8 *)(unaff_x20 + 0xf8) = param_22;
  *(undefined8 *)(unaff_x20 + 0x100) = param_23;
  *(undefined8 *)(unaff_x20 + 0x108) = param_24;
  *(undefined8 *)(unaff_x20 + 0x110) = param_25;
  *(undefined8 *)(unaff_x20 + 0x118) = param_26;
  *(undefined8 *)(unaff_x20 + 0x120) = param_27;
  *(undefined8 *)(unaff_x20 + 0x128) = param_28;
  *(undefined8 *)(unaff_x20 + 0x130) = param_29;
  *(undefined8 *)(unaff_x20 + 0x138) = param_30;
  *(undefined8 *)(unaff_x20 + 0x140) = param_31;
  *(undefined8 *)(unaff_x20 + 0x148) = param_32;
  *(undefined8 *)(unaff_x20 + 0x150) = param_33;
  *(undefined8 *)(unaff_x20 + 0x158) = param_34;
  *(undefined8 *)(unaff_x20 + 0x160) = param_35;
  *(undefined8 *)(unaff_x20 + 0x168) = param_36;
  *(undefined8 *)(unaff_x20 + 0x170) = param_37;
  *(undefined8 *)(unaff_x20 + 0x178) = param_38;
  *(undefined8 *)(unaff_x20 + 0x180) = param_39;
  *(undefined8 *)(unaff_x20 + 0x188) = param_40;
  *(undefined8 *)(unaff_x20 + 400) = param_41;
  *(undefined8 *)(unaff_x20 + 0x198) = param_42;
  *(undefined8 *)(unaff_x20 + 0x1a0) = param_43;
  *(undefined8 *)(unaff_x20 + 0x1a8) = param_44;
  *(undefined8 *)(unaff_x20 + 0x1b0) = param_45;
  *(undefined8 *)(unaff_x20 + 0x1b8) = param_46;
  *(undefined8 *)(unaff_x20 + 0x1c0) = param_47;
  *(undefined8 *)(unaff_x20 + 0x1c8) = param_48;
  *(undefined8 *)(unaff_x20 + 0x1d0) = param_49;
  *(undefined8 *)(unaff_x20 + 0x1d8) = param_50;
  *(undefined8 *)(unaff_x20 + 0x1e0) = param_51;
  *(undefined8 *)(unaff_x20 + 0x1e8) = param_52;
  *(undefined8 *)(unaff_x20 + 0x1f0) = param_53;
  *(undefined8 *)(unaff_x20 + 0x1f8) = param_54;
  *(undefined8 *)(unaff_x20 + 0x200) = param_55;
  *(undefined8 *)(unaff_x20 + 0x208) = param_56;
  *(undefined8 *)(unaff_x20 + 0x210) = param_57;
  *(undefined8 *)(unaff_x20 + 0x218) = param_58;
  *(undefined8 *)(unaff_x20 + 0x220) = param_59;
  *(undefined8 *)(unaff_x20 + 0x228) = param_60;
  *(undefined8 *)(unaff_x20 + 0x230) = param_61;
  *(undefined8 *)(unaff_x20 + 0x238) = param_62;
  *(undefined8 *)(unaff_x20 + 0x240) = param_63;
  *(undefined8 *)(unaff_x20 + 0x248) = param_64;
  *(undefined8 *)(unaff_x20 + 0x250) = param_65;
  *(undefined8 *)(unaff_x20 + 600) = param_66;
  *(undefined8 *)(unaff_x20 + 0x260) = param_67;
  *(undefined8 *)(unaff_x20 + 0x268) = param_68;
  *(undefined8 *)(unaff_x20 + 0x270) = param_69;
  *(undefined8 *)(unaff_x20 + 0x278) = param_70;
  *(undefined8 *)(unaff_x20 + 0x280) = in_stack_000001f0;
  *(undefined8 *)(unaff_x20 + 0x288) = in_stack_000001f8;
  *(undefined8 *)(unaff_x20 + 0x290) = in_stack_00000200;
  *(undefined8 *)(unaff_x20 + 0x298) = in_stack_00000208;
  *(undefined8 *)(unaff_x20 + 0x2a0) = in_stack_00000210;
  *(undefined8 *)(unaff_x20 + 0x2a8) = in_stack_00000218;
  *(undefined8 *)(unaff_x20 + 0x2b0) = in_stack_00000220;
  *(undefined8 *)(unaff_x20 + 0x2b8) = in_stack_00000228;
  *(undefined8 *)(unaff_x20 + 0x2c0) = in_stack_00000230;
  *(undefined8 *)(unaff_x20 + 0x2c8) = in_stack_00000238;
  *(undefined8 *)(unaff_x20 + 0x2d0) = in_stack_00000240;
  *(undefined8 *)(unaff_x20 + 0x2d8) = in_stack_00000248;
  *(undefined8 *)(unaff_x20 + 0x2e0) = in_stack_00000250;
  *(undefined8 *)(unaff_x20 + 0x2e8) = in_stack_00000258;
  *(undefined8 *)(unaff_x20 + 0x2f0) = in_stack_00000260;
  *(undefined8 *)(unaff_x20 + 0x2f8) = in_stack_00000268;
  *(undefined8 *)(unaff_x20 + 0x300) = in_stack_00000270;
  *(undefined8 *)(unaff_x20 + 0x308) = in_stack_00000278;
  *(undefined8 *)(unaff_x20 + 0x310) = in_stack_00000280;
  *(undefined8 *)(unaff_x20 + 0x318) = in_stack_00000288;
  *(undefined8 *)(unaff_x20 + 800) = in_stack_00000290;
  *(undefined8 *)(unaff_x20 + 0x328) = in_stack_00000298;
  *(undefined8 *)(unaff_x20 + 0x330) = in_stack_000002a0;
  *(undefined8 *)(unaff_x20 + 0x338) = in_stack_000002a8;
  func_0x0001000285a8(0x112e4cd20,&UNK_10da47070);
  func_0x000107c610f8();
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
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = in_stack_000002b0;
  func_0x000107c6157c(in_stack_000002b0);
  func_0x00010017da58();
  puVar3 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x18) = puVar3;
  func_0x0001000285a8(0x112e4cd28,&UNK_10daaf350);
  func_0x000107c610f8();
  uVar1 = in_stack_000002b8;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x20) = puVar4;
  func_0x0001000285a8(0x112e9f058,&UNK_10daafe58);
  func_0x000107c610f8();
  uVar1 = in_stack_000002c0;
  func_0x000107c6157c(in_stack_000002c0);
  func_0x0001003b3b80();
  puVar5 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x28) = puVar5;
  func_0x0001000285a8(0x112e51df8,&UNK_10daafe60);
  func_0x000107c610f8();
  uVar1 = in_stack_000002c8;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar6 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x30) = puVar6;
  func_0x0001000285a8(0x112e9edf8,&UNK_10dabb450);
  func_0x000107c610f8();
  uVar1 = in_stack_000002d0;
  func_0x000107c6157c(in_stack_000002d0);
  func_0x00010017da58();
  puVar10 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x38) = puVar10;
  func_0x0001000285a8(0x112e9ee00,&UNK_10daaf8c0);
  func_0x000107c610f8();
  uVar1 = in_stack_000002d8;
  func_0x000107c6157c(in_stack_000002d8);
  func_0x0001003b3b80();
  puVar7 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x40) = puVar7;
  func_0x0001000285a8(0x112e4c880,&UNK_10da46440);
  func_0x000107c610f8();
  uVar1 = in_stack_000002e0;
  func_0x000107c6157c(in_stack_000002e0);
  func_0x00010017da58();
  puVar8 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x48) = puVar8;
  func_0x0001000285a8(0x112e84da0,&UNK_10dabb480);
  func_0x000107c610f8();
  uVar1 = in_stack_000002e8;
  func_0x000107c6157c(in_stack_000002e8);
  func_0x00010017da58();
  puVar9 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x50) = puVar9;
  puVar2 = PTR_PTR_1126ac4b8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000014;
  uVar1 = uVar14;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f03f080);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000016;
  uVar1 = uVar11;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = uVar14;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010effcda0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f05bfb0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f10d280);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0a3ff0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000010;
  uVar1 = uVar12;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000017;
  uVar1 = uVar13;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef9e300);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_13);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = uVar13;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0a4090);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_14);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f09ddb0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_15);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efbb850);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_16);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000016,0x800000010f00acf0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_17);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f007170);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_18);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00aef0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_19);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f05c010);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_20);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f00ad10);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_21);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f0a3fb0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_22);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00ad40);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_23);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = uVar12;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_24);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000014,0x800000010f05bfd0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_25);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f05c3a0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_26);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef2dd00);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_27);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef19df0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_28);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000012;
  uVar1 = uVar11;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef25e10);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_29);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0x53636f4470616e73;
  func_0x000107c5fadc(0x53636f4470616e73,0xef73656369767265);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_30);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a7f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_31);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_32);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = uVar11;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f0520a0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_33);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = uVar13;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef27e80);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_34);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_35);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = uVar13;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef2dce0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_36);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000016;
  uVar1 = uVar14;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef329c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_37);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef120a0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_38);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000018;
  uVar1 = uVar15;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f09edb0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_39);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0a3fd0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_40);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = uVar13;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_41);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f01aa40);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_42);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f01a810);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_43);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = uVar13;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef26b50);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_44);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010ef2dc90);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_45);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85690);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_46);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = uVar15;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc89e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_47);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef2b490);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_48);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f10d2a0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_49);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000014;
  uVar1 = uVar12;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef3bff0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000015;
  uVar1 = uVar13;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2fd80);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_51);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1de30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_52);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f006f40);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_53);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef19380);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_54);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_55);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc4520);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_56);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_57);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = uVar12;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef20500);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_58);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f0a40b0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_59);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000013;
  uVar1 = uVar11;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_60);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = uVar15;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef32650);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_61);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = uVar15;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef35720);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_62);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef2a530);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_63);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef2dcc0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_64);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0x536f725070616e73;
  func_0x000107c5fadc(0x536f725070616e73,0xef73656369767265);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_65);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f03f0a0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_66);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0ad750);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_67);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0x72655374736f6f62;
  func_0x000107c5fadc(0x72655374736f6f62,0xec00000065636976);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_68);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f0a4040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_69);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_70);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef20b70);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(in_stack_000001f0);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = uVar13;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1dff0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(in_stack_000001f8);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef3a9f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(in_stack_00000200);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f05c040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(in_stack_00000208);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef32a00);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(in_stack_00000210);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f01a160);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(in_stack_00000218);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f051690);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(in_stack_00000220);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = uVar15;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0583b0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(in_stack_00000228);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef329e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(in_stack_00000230);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f009f80);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(in_stack_00000238);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f051710);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(in_stack_00000240);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = uVar12;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1a530);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(in_stack_00000248);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(in_stack_00000250);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef32790);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(in_stack_00000258);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(in_stack_00000260);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000012;
  uVar1 = uVar11;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f05c610);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(in_stack_00000268);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000012,0x800000010f05c380);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(in_stack_00000270);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f00a420);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(in_stack_00000278);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc33b0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(in_stack_00000280);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0157d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(in_stack_00000288);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1e0e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(in_stack_00000290);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = uVar13;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef21bb0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(in_stack_00000298);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef2d6e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(in_stack_000002a0);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f007220);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(in_stack_000002a8);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar1 = uVar15;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2b760);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f0a4110);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174(puVar5);
  uVar1 = uVar15;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f03f140);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174(puVar6);
  func_0x000107c5fadc(0xd000000000000018,0x800000010f05c900);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174(puVar10);
  uVar1 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0ad7f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef21c40);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar8);
  uVar1 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f051790);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  func_0x000107c61174(puVar9);
  uVar1 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f089400);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar1);
  func_0x000107c61174();
  puVar10 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
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
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_26);
  func_0x000107c61170(param_27);
  func_0x000107c61170(param_28);
  func_0x000107c61170(param_29);
  func_0x000107c61170(param_30);
  func_0x000107c61170(param_31);
  func_0x000107c61170(param_32);
  func_0x000107c61170(param_33);
  func_0x000107c61170(param_34);
  func_0x000107c61170(param_35);
  func_0x000107c61170(param_36);
  func_0x000107c61170(param_37);
  func_0x000107c61170(param_38);
  func_0x000107c61170(param_39);
  func_0x000107c61170(param_40);
  func_0x000107c61170(param_41);
  func_0x000107c61170(param_42);
  func_0x000107c61170(param_43);
  func_0x000107c61170(param_44);
  func_0x000107c61170(param_45);
  func_0x000107c61170(param_46);
  func_0x000107c61170(param_47);
  func_0x000107c61170(param_48);
  func_0x000107c61170(param_49);
  func_0x000107c61170(param_50);
  func_0x000107c61170(param_51);
  func_0x000107c61170(param_52);
  func_0x000107c61170(param_53);
  func_0x000107c61170(param_54);
  func_0x000107c61170(param_55);
  func_0x000107c61170(param_56);
  func_0x000107c61170(param_57);
  func_0x000107c61170(param_58);
  func_0x000107c61170(param_59);
  func_0x000107c61170(param_60);
  func_0x000107c61170(param_61);
  func_0x000107c61170(param_62);
  func_0x000107c61170(param_63);
  func_0x000107c61170(param_64);
  func_0x000107c61170(param_65);
  func_0x000107c61170(param_66);
  func_0x000107c61170(param_67);
  func_0x000107c61170(param_68);
  func_0x000107c61170(param_69);
  func_0x000107c61170(param_70);
  func_0x000107c61170(in_stack_000001f0);
  func_0x000107c61170(in_stack_000001f8);
  func_0x000107c61170(in_stack_00000200);
  func_0x000107c61170(in_stack_00000208);
  func_0x000107c61170(in_stack_00000210);
  func_0x000107c61170(in_stack_00000218);
  func_0x000107c61170(in_stack_00000220);
  func_0x000107c61170(in_stack_00000228);
  func_0x000107c61170(in_stack_00000230);
  func_0x000107c61170(in_stack_00000238);
  func_0x000107c61170(in_stack_00000240);
  func_0x000107c61170(in_stack_00000248);
  func_0x000107c61170(in_stack_00000250);
  func_0x000107c61170(in_stack_00000258);
  func_0x000107c61170(in_stack_00000260);
  func_0x000107c61170(in_stack_00000268);
  func_0x000107c61170(in_stack_00000270);
  func_0x000107c61170(in_stack_00000278);
  func_0x000107c61170(in_stack_00000280);
  func_0x000107c61170(in_stack_00000288);
  func_0x000107c61170(in_stack_00000290);
  func_0x000107c61170(in_stack_00000298);
  func_0x000107c61170(in_stack_000002a0);
  func_0x000107c61170(in_stack_000002a8);
  func_0x000107c61574(in_stack_000002b0);
  func_0x000107c61574(in_stack_000002b8);
  func_0x000107c61574(in_stack_000002c0);
  func_0x000107c61574(in_stack_000002c8);
  func_0x000107c61574(in_stack_000002d0);
  func_0x000107c61574(in_stack_000002d8);
  func_0x000107c61574(in_stack_000002e0);
  func_0x000107c61574(in_stack_000002e8);
  *(undefined **)(unaff_x20 + 0x340) = puVar10;
  return unaff_x20;
}



/* Entry: 102d9c71c; end: 102d9ca87;  */

void FUN_102d9c71c(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x238));
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
  return;
}



/* Entry: 102d9ca88; end: 102d9cadb;  */

void FUN_102d9ca88(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x340);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102d9cadc; end: 102d9cae3;  */

void FUN_102d9cadc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x340);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102d9cae4; end: 102d9cb33;  */

undefined8 FUN_102d9cae4(void)

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



/* Entry: 102d9cb34; end: 102d9cb77;  */

undefined1  [16] FUN_102d9cb34(void)

{
  return ZEXT816(0x1105cf988);
}



/* Entry: 102d9cb78; end: 102d9cb9f;  */

void FUN_102d9cb78(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102d9cba0; end: 102d9cba7;  */

undefined8 FUN_102d9cba0(void)

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



/* Entry: 102d9cba8; end: 102d9cf6b;  */

long FUN_102d9cba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  *(undefined8 *)(unaff_x20 + 0x50) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_10;
  *(undefined8 *)(unaff_x20 + 0x68) = param_11;
  *(undefined8 *)(unaff_x20 + 0x70) = param_12;
  *(undefined8 *)(unaff_x20 + 0x78) = param_13;
  *(undefined8 *)(unaff_x20 + 0x80) = param_14;
  *(undefined8 *)(unaff_x20 + 0x88) = param_15;
  *(undefined8 *)(unaff_x20 + 0x90) = param_16;
  func_0x0001000285a8(0x112f16d18,&UNK_10db4d288);
  func_0x000107c610f8();
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
  uVar1 = param_17;
  func_0x000107c6157c(param_17);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  func_0x000100936e7c();
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
  uVar1 = param_1;
  func_0x000100936f1c();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar3 = uVar1;
  func_0x000107c6157c();
  func_0x000100937060();
  func_0x000107c61574(uVar1);
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
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_16);
  func_0x000107c61574(param_17);
  *(undefined8 *)(unaff_x20 + 0x98) = uVar3;
  return unaff_x20;
}



/* Entry: 102d9cf6c; end: 102d9d02f;  */

void FUN_102d9cf6c(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  return;
}



/* Entry: 102d9d030; end: 102d9d073;  */

undefined1  [16] FUN_102d9d030(void)

{
  return ZEXT816(0x1105cfa50);
}



/* Entry: 102d9d074; end: 102d9d0c7;  */

void FUN_102d9d074(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102d9d0c8; end: 102d9ff73;  */

void FUN_102d9d0c8(long *param_1,long param_2)

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
  undefined *puVar28;
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
  undefined8 uVar46;
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
  func_0x000100379920();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x68) = uStack_78;
  *(undefined8 *)(param_2 + 0x70) = uStack_80;
  *(undefined8 *)(param_2 + 0x78) = uStack_88;
  *(undefined8 *)(param_2 + 0x80) = uStack_90;
  *(undefined8 *)(param_2 + 0x88) = uStack_98;
  *(undefined8 *)(param_2 + 0x90) = uStack_a0;
  *(undefined8 *)(param_2 + 0x98) = uStack_a8;
  *(undefined8 *)(param_2 + 0xa0) = uStack_b0;
  *(undefined8 *)(param_2 + 0xa8) = uStack_b8;
  *(undefined8 *)(param_2 + 0xb0) = uStack_c0;
  *(undefined8 *)(param_2 + 0xb8) = uStack_c8;
  *(undefined8 *)(param_2 + 0xc0) = uStack_d0;
  *(undefined8 *)(param_2 + 200) = uStack_d8;
  *(undefined8 *)(param_2 + 0xd0) = uStack_e0;
  *(undefined8 *)(param_2 + 0xd8) = uStack_e8;
  *(undefined8 *)(param_2 + 0xe0) = uStack_f0;
  *(undefined8 *)(param_2 + 0xe8) = uStack_f8;
  *(undefined8 *)(param_2 + 0xf0) = uStack_100;
  *(undefined8 *)(param_2 + 0xf8) = uStack_108;
  *(undefined8 *)(param_2 + 0x100) = uStack_110;
  *(undefined8 *)(param_2 + 0x108) = uStack_118;
  *(undefined8 *)(param_2 + 0x110) = uStack_120;
  *(undefined8 *)(param_2 + 0x118) = uStack_128;
  *(undefined8 *)(param_2 + 0x120) = uStack_130;
  *(undefined8 *)(param_2 + 0x128) = uStack_138;
  *(undefined8 *)(param_2 + 0x130) = uStack_140;
  *(undefined8 *)(param_2 + 0x138) = uStack_148;
  *(undefined8 *)(param_2 + 0x140) = uStack_150;
  *(undefined8 *)(param_2 + 0x148) = uStack_158;
  *(undefined8 *)(param_2 + 0x150) = uStack_160;
  *(undefined8 *)(param_2 + 0x158) = uStack_168;
  *(undefined8 *)(param_2 + 0x160) = uStack_170;
  *(undefined8 *)(param_2 + 0x168) = uStack_178;
  *(undefined8 *)(param_2 + 0x170) = uStack_180;
  *(undefined8 *)(param_2 + 0x178) = uStack_188;
  *(undefined8 *)(param_2 + 0x180) = uStack_190;
  *(undefined8 *)(param_2 + 0x188) = uStack_198;
  *(undefined8 *)(param_2 + 400) = uStack_1a0;
  *(undefined8 *)(param_2 + 0x198) = uStack_1a8;
  *(undefined8 *)(param_2 + 0x1a0) = uStack_1b0;
  *(undefined8 *)(param_2 + 0x1a8) = uStack_1b8;
  *(undefined8 *)(param_2 + 0x1b0) = uStack_1c0;
  *(undefined8 *)(param_2 + 0x1b8) = uStack_1c8;
  *(undefined8 *)(param_2 + 0x1c0) = uStack_1d0;
  *(undefined8 *)(param_2 + 0x1c8) = uStack_1d8;
  *(undefined8 *)(param_2 + 0x1d0) = uStack_1e0;
  *(undefined8 *)(param_2 + 0x1d8) = uStack_1e8;
  *(undefined8 *)(param_2 + 0x1e0) = uStack_1f0;
  *(undefined8 *)(param_2 + 0x1e8) = uStack_1f8;
  *(undefined8 *)(param_2 + 0x1f0) = uStack_200;
  *(undefined8 *)(param_2 + 0x1f8) = uStack_208;
  *(undefined8 *)(param_2 + 0x200) = uStack_210;
  *(undefined8 *)(param_2 + 0x208) = uStack_218;
  *(undefined8 *)(param_2 + 0x210) = uStack_220;
  *(undefined8 *)(param_2 + 0x218) = uStack_228;
  *(undefined8 *)(param_2 + 0x220) = uStack_230;
  *(undefined8 *)(param_2 + 0x228) = uStack_238;
  *(undefined8 *)(param_2 + 0x230) = uStack_240;
  *(undefined8 *)(param_2 + 0x238) = uStack_248;
  *(undefined8 *)(param_2 + 0x240) = uStack_250;
  *(undefined8 *)(param_2 + 0x248) = uStack_258;
  *(undefined8 *)(param_2 + 0x250) = uStack_260;
  func_0x0001000285a8(0x112f16e80,&UNK_10db4d498);
  func_0x000107c610f8();
  uVar30 = uStack_78;
  func_0x000107c61174();
  uVar1 = uStack_80;
  func_0x000107c61174();
  uVar2 = uStack_88;
  func_0x000107c61174();
  uVar3 = uStack_90;
  func_0x000107c61174();
  uVar4 = uStack_98;
  func_0x000107c61174();
  uVar5 = uStack_a0;
  func_0x000107c61174();
  uVar6 = uStack_a8;
  func_0x000107c61174();
  uVar7 = uStack_b0;
  func_0x000107c61174();
  uVar8 = uStack_b8;
  func_0x000107c61174();
  uVar9 = uStack_c0;
  func_0x000107c61174();
  uVar10 = uStack_c8;
  func_0x000107c61174();
  uVar11 = uStack_d0;
  func_0x000107c61174();
  uVar12 = uStack_d8;
  func_0x000107c61174();
  uVar13 = uStack_e0;
  func_0x000107c61174();
  uVar14 = uStack_e8;
  func_0x000107c61174();
  uVar15 = uStack_f0;
  func_0x000107c61174();
  uVar16 = uStack_f8;
  func_0x000107c61174();
  uVar17 = uStack_100;
  func_0x000107c61174();
  uVar18 = uStack_108;
  func_0x000107c61174();
  uVar19 = uStack_110;
  func_0x000107c61174();
  uVar20 = uStack_118;
  func_0x000107c61174();
  uVar21 = uStack_120;
  func_0x000107c61174();
  uVar22 = uStack_128;
  func_0x000107c61174();
  uVar23 = uStack_130;
  func_0x000107c61174();
  uVar24 = uStack_138;
  func_0x000107c61174();
  uVar25 = uStack_140;
  func_0x000107c61174();
  uVar26 = uStack_148;
  func_0x000107c61174();
  uVar27 = uStack_150;
  func_0x000107c61174();
  uVar31 = uStack_158;
  func_0x000107c61174();
  uVar32 = uStack_160;
  func_0x000107c61174();
  uVar33 = uStack_168;
  func_0x000107c61174();
  uVar34 = uStack_170;
  func_0x000107c61174();
  uVar35 = uStack_178;
  func_0x000107c61174();
  uVar36 = uStack_180;
  func_0x000107c61174();
  uVar37 = uStack_188;
  func_0x000107c61174();
  uVar38 = uStack_190;
  func_0x000107c61174();
  uVar39 = uStack_198;
  func_0x000107c61174();
  uVar40 = uStack_1a0;
  func_0x000107c61174();
  uVar41 = uStack_1a8;
  func_0x000107c61174();
  uVar42 = uStack_1b0;
  func_0x000107c61174();
  uVar43 = uStack_1b8;
  func_0x000107c61174();
  uVar44 = uStack_1c0;
  func_0x000107c61174();
  uVar45 = uStack_1c8;
  func_0x000107c61174();
  uVar46 = uStack_1d0;
  func_0x000107c61174();
  uVar47 = uStack_1d8;
  func_0x000107c61174();
  uVar48 = uStack_1e0;
  func_0x000107c61174();
  uVar49 = uStack_1e8;
  func_0x000107c61174();
  uVar50 = uStack_1f0;
  func_0x000107c61174();
  uVar51 = uStack_1f8;
  func_0x000107c61174();
  uVar52 = uStack_200;
  func_0x000107c61174();
  uVar53 = uStack_208;
  func_0x000107c61174();
  uVar54 = uStack_210;
  func_0x000107c61174();
  uVar55 = uStack_218;
  func_0x000107c61174();
  uVar56 = uStack_220;
  func_0x000107c61174();
  uVar57 = uStack_228;
  func_0x000107c61174();
  uVar58 = uStack_230;
  func_0x000107c61174();
  uVar59 = uStack_238;
  func_0x000107c61174();
  uVar60 = uStack_240;
  func_0x000107c61174();
  uVar61 = uStack_248;
  func_0x000107c61174();
  uVar62 = uStack_250;
  func_0x000107c61174();
  uVar63 = uStack_258;
  func_0x000107c61174();
  uVar64 = uStack_260;
  func_0x000107c61174();
  uVar66 = uStack_268;
  func_0x000107c6157c(uStack_268);
  func_0x00010017da58();
  puVar28 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar66);
  *(undefined **)(param_2 + 0x18) = puVar28;
  func_0x0001000285a8(0x112f16e88,&UNK_10db4d4a0);
  func_0x000107c610f8();
  uVar66 = uStack_270;
  func_0x000107c6157c(uStack_270);
  func_0x00010017da58();
  puVar28 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar66);
  *(undefined **)(param_2 + 0x20) = puVar28;
  func_0x0001000285a8(0x112ec3b38,&UNK_10dae3de0);
  func_0x000107c610f8();
  uVar66 = uStack_278;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar28 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar66);
  *(undefined **)(param_2 + 0x28) = puVar28;
  func_0x0001000285a8(0x112e4cd28,&UNK_10daaf350);
  func_0x000107c610f8();
  uVar66 = uStack_280;
  func_0x000107c6157c(uStack_280);
  func_0x00010017da58();
  puVar28 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar66);
  *(undefined **)(param_2 + 0x30) = puVar28;
  func_0x0001000285a8(0x112e49ff0,&UNK_10da41b70);
  func_0x000107c610f8();
  uVar66 = uStack_288;
  func_0x000107c6157c(uStack_288);
  func_0x00010017da58();
  puVar28 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar66);
  *(undefined **)(param_2 + 0x38) = puVar28;
  func_0x0001000285a8(0x112e49ff8,&UNK_10db4d4b0);
  func_0x000107c610f8();
  uVar66 = uStack_290;
  func_0x000107c6157c(uStack_290);
  func_0x00010017da58();
  puVar28 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar66);
  *(undefined **)(param_2 + 0x40) = puVar28;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  uVar66 = uStack_298;
  func_0x000107c6157c(uStack_298);
  func_0x00010017da58();
  puVar28 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar66);
  *(undefined **)(param_2 + 0x48) = puVar28;
  func_0x0001000285a8(0x112e4cd20,&UNK_10da47070);
  func_0x000107c610f8();
  uVar66 = uStack_2a0;
  func_0x000107c6157c(uStack_2a0);
  func_0x00010017da58();
  puVar28 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar66);
  *(undefined **)(param_2 + 0x50) = puVar28;
  func_0x0001000285a8(0x112e4c880,&UNK_10da46440);
  func_0x000107c610f8();
  uVar66 = uStack_2a8;
  func_0x000107c6157c(uStack_2a8);
  func_0x00010017da58();
  puVar28 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar66);
  *(undefined **)(param_2 + 0x58) = puVar28;
  func_0x0001000285a8(0x112ecfc38,&UNK_10daf63b0);
  func_0x000107c610f8();
  uVar66 = uStack_2b0;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar28 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar66);
  *(undefined **)(param_2 + 0x60) = puVar28;
  puVar28 = PTR_PTR_1126ac4c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar28;
  func_0x000107c61174();
  uVar29 = auStack_70[0];
  func_0x000107c61174();
  uVar68 = 0xd000000000000013;
  uVar66 = uVar68;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar28);
  func_0x000107c61170(puVar28);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar66);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar65);
  uVar66 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar66);
  uVar66 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar66);
  uVar65 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(uVar66);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar65);
  uVar66 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar66);
  uVar65 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f00acf0);
  func_0x000107c5a49c(uVar66);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar65);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar66 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef325d0);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar66);
  uVar66 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar66);
  uVar65 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef19c30);
  func_0x000107c5a49c(uVar66);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar65);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar65);
  uVar66 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef19c70);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar66);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar65);
  uVar66 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef2d400);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar66);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar65);
  uVar66 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f007170);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar66);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar65);
  uVar66 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f00ad10);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar66);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar65);
  uVar67 = 0xd000000000000010;
  uVar66 = uVar67;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar66);
  uVar66 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar65 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef3bff0);
  func_0x000107c5a49c(uVar66);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar65);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar65);
  uVar66 = uVar68;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar66);
  uVar66 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar66);
  uVar65 = 0x536f725070616e73;
  func_0x000107c5fadc(0x536f725070616e73,0xef73656369767265);
  func_0x000107c5a49c(uVar66);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar65);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar65);
  uVar66 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21b90);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar66);
  uVar66 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar66);
  uVar65 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef32630);
  func_0x000107c5a49c(uVar66);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar65);
  uVar66 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar65 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1bf00);
  func_0x000107c5a49c(uVar66);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar65);
  uVar66 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar66);
  uVar65 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2e2d0);
  func_0x000107c5a49c(uVar66);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar65);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar66 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef2d6e0);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar66);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar65);
  uVar66 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f10d2c0);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar66);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar65);
  uVar66 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f10d2f0);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar66);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar65);
  uVar66 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f063e20);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar66);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar65);
  uVar66 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef1ac90);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar66);
  uVar66 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar65 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1c970);
  func_0x000107c5a49c(uVar66);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar65);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar65);
  uVar66 = uVar67;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar66);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar66 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f10d320);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar66);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar65);
  uVar66 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f10d350);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar66);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar65);
  uVar66 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef32650);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar66);
  uVar66 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar66);
  uVar65 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(uVar66);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar65);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar65);
  uVar66 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef2dd00);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar66);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar66 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f10d380);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar66);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar65);
  uVar66 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f0b02c0);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar66);
  uVar66 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar65 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(uVar66);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar65);
  uVar66 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar66);
  uVar65 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef20500);
  func_0x000107c5a49c(uVar66);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar65);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar65);
  uVar66 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2a4b0);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar66);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar65);
  uVar66 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef1e070);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar66);
  uVar66 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar66);
  uVar65 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef120a0);
  func_0x000107c5a49c(uVar66);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar65);
  uVar66 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar66);
  uVar65 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef32670);
  func_0x000107c5a49c(uVar66);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar65);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar65);
  uVar66 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef2d2e0);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar66);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar65);
  uVar66 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef2a530);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar66);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar65);
  uVar66 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00ad40);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar66);
  uVar66 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar66);
  uVar65 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f10d3a0);
  func_0x000107c5a49c(uVar66);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar43);
  func_0x000107c61170(uVar65);
  uVar66 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar65 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1a530);
  func_0x000107c5a49c(uVar66);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar65);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar65);
  uVar66 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f051710);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar66);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar65);
  uVar66 = 0xd000000000000031;
  func_0x000107c5fadc(0xd000000000000031,0x800000010f052200);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar66);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar65);
  uVar66 = uVar68;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef2dcc0);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar66);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar65);
  uVar66 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efc4520);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar66);
  uVar66 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar66);
  uVar65 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef27e80);
  func_0x000107c5a49c(uVar66);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar65);
  uVar66 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar66);
  uVar65 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a7f0);
  func_0x000107c5a49c(uVar66);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar50);
  func_0x000107c61170(uVar65);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar65);
  uVar66 = uVar68;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f10d3c0);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar51);
  func_0x000107c61170(uVar66);
  uVar66 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar66);
  uVar65 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(uVar66);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar65);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar65);
  uVar66 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef3c720);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar53);
  func_0x000107c61170(uVar66);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar65);
  uVar66 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar66);
  uVar66 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar66);
  uVar65 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2fd80);
  func_0x000107c5a49c(uVar66);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar55);
  func_0x000107c61170(uVar65);
  uVar66 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar65 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef32790);
  func_0x000107c5a49c(uVar66);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar56);
  func_0x000107c61170(uVar65);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar65);
  uVar66 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f10d3e0);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar66);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar65);
  uVar66 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef226b0);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar66);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar65);
  uVar66 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010effecb0);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar59);
  func_0x000107c61170(uVar66);
  uVar66 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar66);
  uVar65 = 0x767265536b636564;
  func_0x000107c5fadc(0x767265536b636564,0xec00000073656369);
  func_0x000107c5a49c(uVar66);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar60);
  func_0x000107c61170(uVar65);
  uVar66 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar66);
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(uVar66);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar61);
  func_0x000107c61170(uVar67);
  uVar66 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar66);
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef2e260);
  func_0x000107c5a49c(uVar66);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar62);
  func_0x000107c61170(uVar68);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar66 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f10d410);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar63);
  func_0x000107c61170(uVar66);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar65);
  uVar66 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f10d430);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar64);
  func_0x000107c61170(uVar66);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  uVar67 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174(uVar65);
  func_0x000107c61174(uVar67);
  uVar66 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f10d460);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar67);
  func_0x000107c61170(uVar66);
  uVar66 = *(undefined8 *)(param_2 + 0x10);
  uVar65 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174(uVar66);
  func_0x000107c61174(uVar65);
  uVar67 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1ace0);
  func_0x000107c5a49c(uVar66);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar67);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  uVar67 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174(uVar65);
  func_0x000107c61174(uVar67);
  uVar66 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f10d490);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar67);
  func_0x000107c61170(uVar66);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  uVar67 = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar66 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef327b0);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar67);
  func_0x000107c61170(uVar66);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  uVar67 = *(undefined8 *)(param_2 + 0x38);
  func_0x000107c61174(uVar65);
  func_0x000107c61174(uVar67);
  uVar66 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f03f0f0);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar67);
  func_0x000107c61170(uVar66);
  uVar66 = *(undefined8 *)(param_2 + 0x10);
  uVar65 = *(undefined8 *)(param_2 + 0x40);
  func_0x000107c61174(uVar66);
  func_0x000107c61174(uVar65);
  uVar67 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f03f120);
  func_0x000107c5a49c(uVar66);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar67);
  uVar66 = *(undefined8 *)(param_2 + 0x10);
  uVar65 = *(undefined8 *)(param_2 + 0x48);
  func_0x000107c61174(uVar66);
  func_0x000107c61174(uVar65);
  uVar67 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12670);
  func_0x000107c5a49c(uVar66);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar67);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  uVar67 = *(undefined8 *)(param_2 + 0x50);
  func_0x000107c61174();
  func_0x000107c61174(uVar67);
  uVar66 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2b760);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar67);
  func_0x000107c61170(uVar66);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  uVar67 = *(undefined8 *)(param_2 + 0x58);
  func_0x000107c61174(uVar65);
  func_0x000107c61174();
  uVar66 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef32810);
  func_0x000107c5a49c(uVar65);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar67);
  func_0x000107c61170(uVar66);
  uVar66 = *(undefined8 *)(param_2 + 0x10);
  uVar65 = *(undefined8 *)(param_2 + 0x60);
  func_0x000107c61174(uVar66);
  func_0x000107c61174(uVar65);
  uVar67 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f075b90);
  func_0x000107c5a49c(uVar66);
  func_0x000107c61170(uVar66);
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar67);
  uVar65 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  uVar66 = uVar65;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar65);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar30);
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
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar49);
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
  func_0x000107c61574(uStack_268);
  func_0x000107c61574(uStack_270);
  func_0x000107c61574(uStack_278);
  func_0x000107c61574(uStack_280);
  func_0x000107c61574(uStack_288);
  func_0x000107c61574(uStack_290);
  func_0x000107c61574(uStack_298);
  func_0x000107c61574(uStack_2a0);
  func_0x000107c61574(uStack_2a8);
  func_0x000107c61574(uStack_2b0);
  *(undefined8 *)(param_2 + 600) = uVar66;
  *param_1 = param_2;
  return;
}



/* Entry: 102d9ff74; end: 102da004f;  */

void FUN_102d9ff74(void)

{
  long unaff_x20;
  
  FUN_102d9d0c8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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


