/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1027b1ba8; end: 1027b1c77;  */

undefined8 FUN_1027b1ba8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112ebf100,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_1027b1c78();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1027b1c78; end: 1027b1c97;  */

void FUN_1027b1c78(void)

{
  func_0x000107c61168(&PTR_PTR_112861cc8);
  return;
}



/* Entry: 1027b1c98; end: 1027b1cb3;  */

void FUN_1027b1c98(undefined8 param_1)

{
  func_0x0001000285a8(0x112ebf108,&UNK_10dadbd48);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1027b1d20,param_1);
  return;
}



/* Entry: 1027b1cb4; end: 1027b1d1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b1cb4(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1027b1c78();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ebf110) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1027b1d20; end: 1027b1d27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b1d20(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1027b1c78();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112ebf110) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1027b1d28; end: 1027b1d73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b1d28(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebf110) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027b1d74; end: 1027b1dd3; -[_TtC26AddToGroupScopeGraphBridge34AddToGroupScopeGraphBridgeServices init] */

void FUN_1027b1d74(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AddToGroupScopeGraphBridge.AddToGroupScopeGraphBridgeServices",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027b1da0);
  (*pcVar1)();
}



/* Entry: 1027b1dd4; end: 1027b1de3; -[_TtC26AddToGroupScopeGraphBridge34AddToGroupScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b1dd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebf110));
  return;
}



/* Entry: 1027b1de4; end: 1027b1e6f;  */

void FUN_1027b1de4(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1027b1e24,0);
  return;
}



/* Entry: 1027b1e70; end: 1027b1e8b;  */

void FUN_1027b1e70(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1027b1edc,param_1);
  return;
}



/* Entry: 1027b1e8c; end: 1027b1edb;  */

void FUN_1027b1e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 1027b1edc; end: 1027b1f0f;  */

void FUN_1027b1edc(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1027b1f10; end: 1027b1f17;  */

undefined8 FUN_1027b1f10(void)

{
  return 0x1b;
}



/* Entry: 1027b1f18; end: 1027b208f;  */

void FUN_1027b1f18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11054cf98;
  func_0x000107c613fc(&UNK_11054cf98,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1027b2090,puVar1);
  return;
}



/* Entry: 1027b2090; end: 1027b2097;  */

void FUN_1027b2090(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112ebf100,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ebf100,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11054d070;
  func_0x000107c613fc(&UNK_11054d070,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1027b2164;
  func_0x00010058fa64(0x1027b2164,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1027b2098; end: 1027b20f3;  */

void FUN_1027b2098(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ebf100,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ebf100,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1027b20f4; end: 1027b216b;  */

undefined ** FUN_1027b20f4(void)

{
  return &PTR_DAT_113066778;
}



/* Entry: 1027b216c; end: 1027b21b3; -[SCAddToGroupScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b216c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ebf168;
  func_0x000107c61428(param_1 + _DAT_112ebf168,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1027b21b4; end: 1027b220b; -[SCAddToGroupScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b21b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ebf168;
  func_0x000107c61428(param_1 + _DAT_112ebf168,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1027b220c; end: 1027b2253; -[SCAddToGroupScopeGraphBridgeSaberEntryPoint sCCreateChatSelectionScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b220c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ebf170;
  func_0x000107c61428(param_1 + _DAT_112ebf170,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1027b2254; end: 1027b225f; -[SCAddToGroupScopeGraphBridgeSaberEntryPoint setSCCreateChatSelectionScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b2254(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ebf170;
  func_0x000107c61428(param_1 + _DAT_112ebf170,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1027b2260; end: 1027b22a7; -[SCAddToGroupScopeGraphBridgeSaberEntryPoint addToGroupScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b2260(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ebf178;
  func_0x000107c61428(param_1 + _DAT_112ebf178,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1027b22a8; end: 1027b22b3; -[SCAddToGroupScopeGraphBridgeSaberEntryPoint setAddToGroupScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b22a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ebf178;
  func_0x000107c61428(param_1 + _DAT_112ebf178,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1027b22b4; end: 1027b2313;  */

void FUN_1027b22b4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 1027b2314; end: 1027b24cf;  */

/* WARNING: Possible PIC construction at 0x0001027b242c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027b2450: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027b2460: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027b24a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027b2464) */
/* WARNING: Removing unreachable block (ram,0x0001027b2454) */
/* WARNING: Removing unreachable block (ram,0x0001027b2430) */
/* WARNING: Removing unreachable block (ram,0x0001027b24a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b2314(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c50cb8();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c3d8f4();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_1027b1930();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_1027b1ba8();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1027b24d0);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112ebf090) = lVar5;
      *(long *)(lVar3 + _DAT_112ebf098) = unaff_x20;
      lStack_80 = lVar3;
      lStack_78 = lVar4;
      func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1027b24d0; end: 1027b24f7; -[SCAddToGroupScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1027b24d0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1027b2314();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1027b24f8; end: 1027b253b; -[SCAddToGroupScopeGraphBridgeSaberEntryPoint end] */

void FUN_1027b24f8(undefined8 param_1)

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



/* Entry: 1027b253c; end: 1027b273f;  */

void FUN_1027b253c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdf) || (param_3 != -0x7ffffffef0f436f0)) {
      uVar2 = 0xd000000000000021;
      func_0x000107c605b8(0xd000000000000021,0x800000010f0bc910,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000029;
        if (((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0f436c0)) &&
           (func_0x000107c605b8(0xd000000000000029,0x800000010f0bc940,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "AddToGroupScopeGraphBridge/SCAddToGroupScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x4c,2,0x34,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1027b2740);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c524b8();
        goto LAB_1027b25c8;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58260();
  }
LAB_1027b25c8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1027b2740; end: 1027b27eb; -[SCAddToGroupScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1027b2740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1027b253c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1027b27ec; end: 1027b2863; -[SCAddToGroupScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b27ec(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ebf168,0);
  *(undefined8 *)(param_1 + _DAT_112ebf170) = 0;
  *(undefined8 *)(param_1 + _DAT_112ebf178) = 0;
  *(undefined8 *)(param_1 + _DAT_112ebf180) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027b2864; end: 1027b2897;  */

void FUN_1027b2864(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1027b2898; end: 1027b28ef; -[SCAddToGroupScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001027b28c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027b28c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b2898(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ebf168);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ebf170));
  return;
}



/* Entry: 1027b28f0; end: 1027b290f;  */

void FUN_1027b28f0(void)

{
  func_0x000107c61168(&PTR_PTR_112861d88);
  return;
}



/* Entry: 1027b2910; end: 1027b2957; -[SCSCAddToGroupScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b2910(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ebf1b0;
  func_0x000107c61428(param_1 + _DAT_112ebf1b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1027b2958; end: 1027b29af; -[SCSCAddToGroupScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b2958(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ebf1b0;
  func_0x000107c61428(param_1 + _DAT_112ebf1b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1027b29b0; end: 1027b2a87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b29b0(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_1027b1b88();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ebf0c8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1027b2a88);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ebf0d0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ebf1b8);
    *(long **)(unaff_x20 + _DAT_112ebf1b8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1027b2a88; end: 1027b2aaf; -[SCSCAddToGroupScopedServicesSaberEntryPoint begin] */

void FUN_1027b2a88(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1027b29b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1027b2ab0; end: 1027b2c27;  */

/* WARNING: Possible PIC construction at 0x0001027b2b18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027b2bb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027b2b1c) */
/* WARNING: Removing unreachable block (ram,0x0001027b2bb4) */
/* WARNING: Removing unreachable block (ram,0x0001027b2bcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b2ab0(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ebf1b8);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1027b2c28; end: 1027b2c2f;  */

void FUN_1027b2c28(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1027b2c30; end: 1027b2c63; -[SCSCAddToGroupScopedServicesSaberEntryPoint end] */

void FUN_1027b2c30(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1027b2ab0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1027b2c64; end: 1027b2d83;  */

void FUN_1027b2c64(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "AddToGroupScopeGraphBridge/SCSCAddToGroupScopedServicesSaberEntryPoint.swift"
                        ,0x4c,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1027b2d84);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1027b2d84; end: 1027b2e2f; -[SCSCAddToGroupScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1027b2d84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1027b2c64(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1027b2e30; end: 1027b2e8f; -[SCSCAddToGroupScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b2e30(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ebf1b0,0);
  *(undefined8 *)(param_1 + _DAT_112ebf1b8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027b2e90; end: 1027b2ec3;  */

void FUN_1027b2e90(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1027b2ec4; end: 1027b2efb; -[SCSCAddToGroupScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b2ec4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ebf1b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ebf1b8));
  return;
}



/* Entry: 1027b2efc; end: 1027b2f1b;  */

void FUN_1027b2efc(void)

{
  func_0x000107c61168(&PTR_PTR_112861e58);
  return;
}



/* Entry: 1027b2f1c; end: 1027b2f87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b2f1c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1027b3310();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ebf1f0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1027b2f88; end: 1027b2ff3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b2f88(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebf1f0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027b2ff4; end: 1027b3053; -[_TtC49CancelMenuActionSheetScopedFactoryServiceProvider37SCCancelMenuActionSheetScopedServices init] */

void FUN_1027b2ff4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CancelMenuActionSheetScopedFactoryServiceProvider.SCCancelMenuActionSheetScopedServices"
                      ,0x57,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027b3020);
  (*pcVar1)();
}



/* Entry: 1027b3054; end: 1027b3063; -[_TtC49CancelMenuActionSheetScopedFactoryServiceProvider37SCCancelMenuActionSheetScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b3054(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebf1f0));
  return;
}



/* Entry: 1027b3064; end: 1027b30cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b3064(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11054d288;
  func_0x000107c613fc(&UNK_11054d288,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1027b33a8,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1027b30d0; end: 1027b316b;  */

void FUN_1027b30d0(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11054d198;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11054d198;
  return;
}



/* Entry: 1027b316c; end: 1027b31a3;  */

void FUN_1027b316c(long *param_1)

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



/* Entry: 1027b31a4; end: 1027b31ab;  */

undefined8 FUN_1027b31a4(void)

{
  return 0x1b;
}



/* Entry: 1027b31ac; end: 1027b32df;  */

void FUN_1027b31ac(undefined8 *param_1)

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
  puVar1 = &UNK_11054d2b0;
  func_0x000107c613fc(&UNK_11054d2b0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1027b3380;
  func_0x00010058fa64(FUN_1027b3380,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1027b32e0; end: 1027b330f;  */

undefined ** FUN_1027b32e0(void)

{
  return &PTR_DAT_113066898;
}



/* Entry: 1027b3310; end: 1027b332f;  */

void FUN_1027b3310(void)

{
  func_0x000107c61168(&PTR_PTR_112861f18);
  return;
}



/* Entry: 1027b3330; end: 1027b337f;  */

undefined1  [16] FUN_1027b3330(void)

{
  return ZEXT816(0x11054d1e8);
}



/* Entry: 1027b3380; end: 1027b33a7;  */

void FUN_1027b3380(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1027b33a8; end: 1027b33ab;  */

void FUN_1027b33a8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1027b33ac; end: 1027b3453;  */

/* WARNING: Possible PIC construction at 0x0001027b343c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027b3440) */

void FUN_1027b33ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_11054d338;
  func_0x000107c613fc(&UNK_11054d338,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  uVar2 = 0x112ebf260;
  func_0x0001000285a8(0x112ebf260,&UNK_10dadc208);
  func_0x000107c613fc();
  pcVar3 = FUN_1027b384c;
  func_0x0001000841fc(FUN_1027b384c,puVar1,uVar2);
  func_0x000100084214(&UNK_10dadc1d0,0x33,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1027b3454; end: 1027b346b;  */

/* WARNING: Possible PIC construction at 0x0001027b343c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027b3440) */

void FUN_1027b3454(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = &UNK_11054d338;
  func_0x000107c613fc(&UNK_11054d338,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  uVar3 = 0x112ebf260;
  func_0x0001000285a8(0x112ebf260,&UNK_10dadc208);
  func_0x000107c613fc();
  pcVar4 = FUN_1027b384c;
  func_0x0001000841fc(FUN_1027b384c,puVar2,uVar3);
  func_0x000100084214(&UNK_10dadc1d0,0x33,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1027b346c; end: 1027b384b;  */

void FUN_1027b346c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  char *pcVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uStack_68;
  
  uVar13 = *param_2;
  func_0x0001000285a8(0x112ebf268,&UNK_10dadc210);
  puVar1 = &uStack_68;
  uStack_68 = uVar13;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x0001027b4c0c();
  pcVar3 = "SCFriendActionSheetScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCFriendActionSheetScopeExposerSubjectServiceProvider",0x35,2);
  FUN_1027b4c58();
  func_0x000100082720("SCGroupActionSheetScopeExposerSubjectServiceProvider",0x34,2);
  puVar4 = puVar2;
  FUN_1027b4c4c();
  func_0x000100082720("SCFriendActionSheetScopeExposerObservableServiceProvider",0x38,2);
  pcVar5 = pcVar3;
  FUN_1027b4ce4();
  func_0x000100082720("SCGroupActionSheetScopeExposerObservableServiceProvider",0x37,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar6 = FUN_1027b316c;
  func_0x0001000823a8(FUN_1027b316c,0);
  func_0x000100082720("SCCancelMenuActionSheetScopedServicesCleanupRelayServiceProvider",0x40,2);
  puVar7 = puVar2;
  FUN_1027b4a60(puVar2,pcVar3);
  func_0x000100082720("CancelMenuActionSheetScopeGraphBridgeServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112ebf270,&UNK_10dadc220);
  puVar8 = &UNK_11054d360;
  func_0x000107c613fc(&UNK_11054d360,0x38,7);
  *(undefined8 **)(puVar8 + 0x10) = puVar1;
  *(undefined8 *)(puVar8 + 0x18) = param_3;
  *(undefined8 *)(puVar8 + 0x20) = param_4;
  *(undefined8 **)(puVar8 + 0x28) = puVar4;
  *(char **)(puVar8 + 0x30) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(pcVar5);
  uVar13 = 0x1027b3854;
  func_0x0001000823a8(0x1027b3854,puVar8);
  func_0x000100082720("SCCancelMenuActionSheetEntryPointWrapperServiceProvider",0x37,2);
  func_0x0001000285a8(0x112ebf278,&UNK_10dadc228);
  puVar8 = &UNK_11054d388;
  func_0x000107c613fc(&UNK_11054d388,0x30,7);
  *(undefined8 **)(puVar8 + 0x10) = puVar1;
  *(undefined8 **)(puVar8 + 0x18) = puVar7;
  *(undefined8 *)(puVar8 + 0x20) = uVar13;
  *(code **)(puVar8 + 0x28) = pcVar6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar7);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(pcVar6);
  uVar9 = 0x1027b3864;
  func_0x0001000823a8(0x1027b3864,puVar8);
  func_0x000100082720("SCCancelMenuActionSheetScopeInitializationPluginRegistryServiceProvider",0x47
                      ,2);
  func_0x0001000285a8(0x112ebf1f8,&UNK_10dadbf60);
  func_0x000107c6157c(uVar9);
  uVar10 = 0x1027b3870;
  func_0x0001000823a8(0x1027b3870,uVar9);
  func_0x000100082720("SCCancelMenuActionSheetScopeInitializationServiceProvider",0x39,2);
  func_0x0001000285a8(0x112ebf1e8,&UNK_10dadbf50);
  func_0x000107c6157c(uVar10);
  uVar11 = 0x1027b3878;
  func_0x0001000823a8(0x1027b3878,uVar10);
  func_0x000100082720("SCCancelMenuActionSheetScopedServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar8 = &UNK_11054d3b0;
  func_0x000107c613fc(&UNK_11054d3b0,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar11;
  *(code **)(puVar8 + 0x18) = pcVar6;
  func_0x000107c6157c(pcVar6);
  pcVar12 = FUN_1027b38ac;
  func_0x0001000823a8(FUN_1027b38ac,puVar8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(uVar13);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar10);
  func_0x000100082720("SCCancelMenuActionSheetScopeEntryPointProvider",0x2e,2);
  *param_1 = pcVar12;
  return;
}



/* Entry: 1027b384c; end: 1027b387f;  */

void FUN_1027b384c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  char *pcVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uStack_68;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar13 = *param_2;
  func_0x0001000285a8(0x112ebf268,&UNK_10dadc210);
  puVar1 = &uStack_68;
  uStack_68 = uVar13;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x0001027b4c0c();
  pcVar3 = "SCFriendActionSheetScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCFriendActionSheetScopeExposerSubjectServiceProvider",0x35,2);
  FUN_1027b4c58();
  func_0x000100082720("SCGroupActionSheetScopeExposerSubjectServiceProvider",0x34,2);
  puVar4 = puVar2;
  FUN_1027b4c4c();
  func_0x000100082720("SCFriendActionSheetScopeExposerObservableServiceProvider",0x38,2);
  pcVar5 = pcVar3;
  FUN_1027b4ce4();
  func_0x000100082720("SCGroupActionSheetScopeExposerObservableServiceProvider",0x37,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar6 = FUN_1027b316c;
  func_0x0001000823a8(FUN_1027b316c,0);
  func_0x000100082720("SCCancelMenuActionSheetScopedServicesCleanupRelayServiceProvider",0x40,2);
  puVar7 = puVar2;
  FUN_1027b4a60(puVar2,pcVar3);
  func_0x000100082720("CancelMenuActionSheetScopeGraphBridgeServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112ebf270,&UNK_10dadc220);
  puVar8 = &UNK_11054d360;
  func_0x000107c613fc(&UNK_11054d360,0x38,7);
  *(undefined8 **)(puVar8 + 0x10) = puVar1;
  *(undefined8 *)(puVar8 + 0x18) = uVar9;
  *(undefined8 *)(puVar8 + 0x20) = uVar10;
  *(undefined8 **)(puVar8 + 0x28) = puVar4;
  *(char **)(puVar8 + 0x30) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(pcVar5);
  uVar9 = 0x1027b3854;
  func_0x0001000823a8(0x1027b3854,puVar8);
  func_0x000100082720("SCCancelMenuActionSheetEntryPointWrapperServiceProvider",0x37,2);
  func_0x0001000285a8(0x112ebf278,&UNK_10dadc228);
  puVar8 = &UNK_11054d388;
  func_0x000107c613fc(&UNK_11054d388,0x30,7);
  *(undefined8 **)(puVar8 + 0x10) = puVar1;
  *(undefined8 **)(puVar8 + 0x18) = puVar7;
  *(undefined8 *)(puVar8 + 0x20) = uVar9;
  *(code **)(puVar8 + 0x28) = pcVar6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar7);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar6);
  uVar10 = 0x1027b3864;
  func_0x0001000823a8(0x1027b3864,puVar8);
  func_0x000100082720("SCCancelMenuActionSheetScopeInitializationPluginRegistryServiceProvider",0x47
                      ,2);
  func_0x0001000285a8(0x112ebf1f8,&UNK_10dadbf60);
  func_0x000107c6157c(uVar10);
  uVar13 = 0x1027b3870;
  func_0x0001000823a8(0x1027b3870,uVar10);
  func_0x000100082720("SCCancelMenuActionSheetScopeInitializationServiceProvider",0x39,2);
  func_0x0001000285a8(0x112ebf1e8,&UNK_10dadbf50);
  func_0x000107c6157c(uVar13);
  uVar11 = 0x1027b3878;
  func_0x0001000823a8(0x1027b3878,uVar13);
  func_0x000100082720("SCCancelMenuActionSheetScopedServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar8 = &UNK_11054d3b0;
  func_0x000107c613fc(&UNK_11054d3b0,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar11;
  *(code **)(puVar8 + 0x18) = pcVar6;
  func_0x000107c6157c(pcVar6);
  pcVar12 = FUN_1027b38ac;
  func_0x0001000823a8(FUN_1027b38ac,puVar8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar13);
  func_0x000100082720("SCCancelMenuActionSheetScopeEntryPointProvider",0x2e,2);
  *param_1 = pcVar12;
  return;
}



/* Entry: 1027b3880; end: 1027b38ab;  */

void FUN_1027b3880(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1027b38ac; end: 1027b38b3;  */

void FUN_1027b38ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11054d198;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11054d198;
  return;
}



/* Entry: 1027b38b4; end: 1027b3f8b;  */

void FUN_1027b38b4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  FUN_1027b40dc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  func_0x0001000285a8(0x112e4cce0,&UNK_10da46da0);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar7 = uStack_80;
  func_0x000107c6157c(uStack_80);
  func_0x00010017da58();
  puVar3 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x18) = puVar3;
  func_0x0001000285a8(0x112e51db0,&UNK_10dadc230);
  func_0x000107c610f8();
  uVar7 = uStack_88;
  func_0x000107c6157c(uStack_88);
  func_0x00010017da58();
  puVar4 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x20) = puVar4;
  puVar5 = PTR_PTR_1126aaf28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar5;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f0bcc40);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(puVar5);
  uVar7 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef2b6f0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar5);
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef134e0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(puVar5);
  func_0x000107c61174(puVar3);
  uVar7 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef35990);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(puVar5);
  func_0x000107c61174(puVar4);
  uVar7 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef359b0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c3e740(puVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uStack_80);
  func_0x000107c61574(uStack_88);
  *param_1 = param_2;
  return;
}



/* Entry: 1027b3f8c; end: 1027b3fcf;  */

void FUN_1027b3f8c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1027b3fd0; end: 1027b3fd7;  */

undefined8 FUN_1027b3fd0(void)

{
  return 0x1b;
}



/* Entry: 1027b3fd8; end: 1027b405b;  */

void FUN_1027b3fd8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1027b411c,param_2,FUN_1027b4120,param_2,FUN_1027b4148,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1027b405c; end: 1027b40ab;  */

undefined8 FUN_1027b405c(void)

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



/* Entry: 1027b40ac; end: 1027b40db;  */

undefined ** FUN_1027b40ac(void)

{
  return &PTR_DAT_113066898;
}



/* Entry: 1027b40dc; end: 1027b40fb;  */

void FUN_1027b40dc(void)

{
  func_0x000107c61168(&PTR_PTR_112ebf2e8);
  return;
}



/* Entry: 1027b40fc; end: 1027b411f;  */

undefined1  [16] FUN_1027b40fc(void)

{
  return ZEXT816(0x11054d408);
}



/* Entry: 1027b4120; end: 1027b4147;  */

void FUN_1027b4120(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1027b4148; end: 1027b414f;  */

undefined8 FUN_1027b4148(void)

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



/* Entry: 1027b4150; end: 1027b418b;  */

void FUN_1027b4150(undefined8 *param_1,undefined8 param_2)

{
  FUN_1027b418c();
  func_0x0001000a7f38("SCCancelMenuActionSheetScopeInitializationPluginRegistryServiceProvider",0x47
                      ,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1027b418c; end: 1027b4377;  */

void FUN_1027b418c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d0c8;
  ppuVar4 = &PTR_DAT_113066898;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_11054d458;
  func_0x000107c613fc(&UNK_11054d458,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112ebf368;
  func_0x0001000285a8(0x112ebf368,&UNK_10dadc390);
  func_0x0001000a6ee8(&UNK_11054d710,
                      "CancelMenuActionSheetScopeGraphBridgeScopeInitializationPluginKey",0x41,2,
                      FUN_1027b4378,puVar2,uVar3,&UNK_11054d710,&PTR_DAT_112ebf408);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11054d408,
                      "SCCancelMenuActionSheetEntryPointWrapperScopeInitializationPluginKey",0x44,2,
                      FUN_1027b442c,param_3,uVar3,&UNK_11054d408,&PTR_DAT_112ebf280);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_11054d480;
  func_0x000107c613fc(&UNK_11054d480,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11054d228,
                      "SCCancelMenuActionSheetScopedServicesScopeInitializationPluginKey",0x41,2,
                      FUN_1027b44dc,puVar2,uVar3,&UNK_11054d228,&PTR_DAT_112ebf200);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112ebf370;
  func_0x0001000285a8(0x112ebf370,&UNK_10dadc398);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1027b4378; end: 1027b43b7;  */

void FUN_1027b4378(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001027b4d84(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("CancelMenuActionSheetScopeGraphBridgeScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1027b43b8; end: 1027b442b;  */

void FUN_1027b43b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1027b4518;
  func_0x0001000823a8(0x1027b4518,param_3);
  func_0x000100082720("SCCancelMenuActionSheetEntryPointWrapperScopeInitializationPluginProvider",
                      0x49,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1027b442c; end: 1027b4433;  */

void FUN_1027b442c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1027b4518;
  func_0x0001000823a8();
  func_0x000100082720("SCCancelMenuActionSheetEntryPointWrapperScopeInitializationPluginProvider",
                      0x49,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1027b4434; end: 1027b44db;  */

void FUN_1027b4434(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11054d4a8;
  func_0x000107c613fc(&UNK_11054d4a8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1027b4510;
  func_0x0001000823a8(FUN_1027b4510,puVar1);
  func_0x000100082720("SCCancelMenuActionSheetScopedServicesScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1027b44dc; end: 1027b44e3;  */

void FUN_1027b44dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11054d4a8;
  func_0x000107c613fc(&UNK_11054d4a8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1027b4510;
  func_0x0001000823a8(FUN_1027b4510,puVar3);
  func_0x000100082720("SCCancelMenuActionSheetScopedServicesScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1027b44e4; end: 1027b450f;  */

void FUN_1027b44e4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1027b4510; end: 1027b451f;  */

void FUN_1027b4510(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11054d2b0;
  func_0x000107c613fc(&UNK_11054d2b0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1027b3380;
  func_0x00010058fa64(FUN_1027b3380,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1027b4520; end: 1027b4637;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1027b4520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar4 = auStack_70;
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_1027b4970();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_58);
    uVar1 = uStack_58;
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_3;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112ebf378) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112ebf380) = param_4;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1027b4638);
  (*pcVar2)();
}



/* Entry: 1027b4638; end: 1027b4697; -[_TtC37CancelMenuActionSheetScopeGraphBridge52CancelMenuActionSheetScopeGraphBridgeSaberEntryPoint init] */

void FUN_1027b4638(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CancelMenuActionSheetScopeGraphBridge.CancelMenuActionSheetScopeGraphBridgeSaberEntryPoint"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027b4664);
  (*pcVar1)();
}



/* Entry: 1027b4698; end: 1027b46cf; -[_TtC37CancelMenuActionSheetScopeGraphBridge52CancelMenuActionSheetScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001027b46b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027b46b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b4698(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ebf378));
  return;
}



/* Entry: 1027b46d0; end: 1027b46f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b46d0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ebf380),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ebf378));
  return;
}



/* Entry: 1027b46f8; end: 1027b4717;  */

void FUN_1027b46f8(void)

{
  func_0x000107c61168(&PTR_PTR_112861fd8);
  return;
}



/* Entry: 1027b4718; end: 1027b479f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1027b4718(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebf3b0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ebf3b8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1027b47a0);
  (*pcVar2)();
}



/* Entry: 1027b47a0; end: 1027b4887;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1027b47a0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ebf3b0);
  *(undefined **)(unaff_x20 + _DAT_112ebf3b0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ebf3b8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ebf3b8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11054d5c8;
  func_0x000107c613fc(&UNK_11054d5c8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1027b488c,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1027b4888; end: 1027b4893;  */

void FUN_1027b4888(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1027b4894; end: 1027b48f3; -[_TtC37CancelMenuActionSheetScopeGraphBridge52SCCancelMenuActionSheetScopedServicesSaberEntryPoint init] */

void FUN_1027b4894(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CancelMenuActionSheetScopeGraphBridge.SCCancelMenuActionSheetScopedServicesSaberEntryPoint"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027b48c0);
  (*pcVar1)();
}



/* Entry: 1027b48f4; end: 1027b492b; -[_TtC37CancelMenuActionSheetScopeGraphBridge52SCCancelMenuActionSheetScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027b48f4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ebf3b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ebf3b0));
  return;
}



/* Entry: 1027b492c; end: 1027b492f;  */

void FUN_1027b492c(void)

{
  return;
}



/* Entry: 1027b4930; end: 1027b494f;  */

void FUN_1027b4930(void)

{
  FUN_1027b47a0();
  return;
}



/* Entry: 1027b4950; end: 1027b496f;  */

void FUN_1027b4950(void)

{
  func_0x000107c61168(&PTR_PTR_1128620a0);
  return;
}



/* Entry: 1027b4970; end: 1027b4a3f;  */

undefined8 FUN_1027b4970(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112ebf3e8,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_1027b4a40();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1027b4a40; end: 1027b4a5f;  */

void FUN_1027b4a40(void)

{
  func_0x000107c61168(&PTR_PTR_112862168);
  return;
}


