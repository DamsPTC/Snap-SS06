/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1031ca1a0; end: 1031ca227;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1031ca1a0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1031ca560();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f4a228) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f4a230) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031ca228);
  (*pcVar1)();
}



/* Entry: 1031ca228; end: 1031ca287; -[_TtC29ContactUpsellScopeGraphBridge44ContactUpsellScopeGraphBridgeSaberEntryPoint init] */

void FUN_1031ca228(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContactUpsellScopeGraphBridge.ContactUpsellScopeGraphBridgeSaberEntryPoint",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031ca254);
  (*pcVar1)();
}



/* Entry: 1031ca288; end: 1031ca2bf; -[_TtC29ContactUpsellScopeGraphBridge44ContactUpsellScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031ca2a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031ca2a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031ca288(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4a228));
  return;
}



/* Entry: 1031ca2c0; end: 1031ca2e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031ca2c0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f4a230),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f4a228));
  return;
}



/* Entry: 1031ca2e8; end: 1031ca307;  */

void FUN_1031ca2e8(void)

{
  func_0x000107c61168(&PTR_PTR_1128c0af0);
  return;
}



/* Entry: 1031ca308; end: 1031ca38f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1031ca308(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f4a260) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f4a268);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1031ca390);
  (*pcVar2)();
}



/* Entry: 1031ca390; end: 1031ca477;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1031ca390(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f4a260);
  *(undefined **)(unaff_x20 + _DAT_112f4a260) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f4a268);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f4a268))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11061e950;
  func_0x000107c613fc(&UNK_11061e950,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1031ca47c,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1031ca478; end: 1031ca483;  */

void FUN_1031ca478(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1031ca484; end: 1031ca4e3; -[_TtC29ContactUpsellScopeGraphBridge44SCContactUpsellScopedServicesSaberEntryPoint init] */

void FUN_1031ca484(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContactUpsellScopeGraphBridge.SCContactUpsellScopedServicesSaberEntryPoint",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031ca4b0);
  (*pcVar1)();
}



/* Entry: 1031ca4e4; end: 1031ca51b; -[_TtC29ContactUpsellScopeGraphBridge44SCContactUpsellScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031ca4e4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f4a268));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4a260));
  return;
}



/* Entry: 1031ca51c; end: 1031ca51f;  */

void FUN_1031ca51c(void)

{
  return;
}



/* Entry: 1031ca520; end: 1031ca53f;  */

void FUN_1031ca520(void)

{
  FUN_1031ca390();
  return;
}



/* Entry: 1031ca540; end: 1031ca55f;  */

void FUN_1031ca540(void)

{
  func_0x000107c61168(&PTR_PTR_1128c0bb8);
  return;
}



/* Entry: 1031ca560; end: 1031ca62f;  */

undefined8 FUN_1031ca560(void)

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
  
  func_0x000107c61428(0x112f4a298,&uStack_40,0x20,0);
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
    FUN_1031ca630();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1031ca630; end: 1031ca64f;  */

void FUN_1031ca630(void)

{
  func_0x000107c61168(&PTR_PTR_1128c0c80);
  return;
}



/* Entry: 1031ca650; end: 1031ca6bb;  */

void FUN_1031ca650(void)

{
  func_0x0001000285a8(0x112f4a2a0,&UNK_10db98848);
  func_0x0001000823a8(0x1031ca690,0);
  return;
}



/* Entry: 1031ca6bc; end: 1031ca6f7; -[_TtC29ContactUpsellScopeGraphBridge37ContactUpsellScopeGraphBridgeServices init] */

void FUN_1031ca6bc(undefined8 param_1)

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



/* Entry: 1031ca6f8; end: 1031ca72b;  */

void FUN_1031ca6f8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031ca72c; end: 1031ca75f; -[_TtC18ContactUpsellScope20SCContactUpsellScope contactUpsellScopeGraphBridgeServices] */

void FUN_1031ca72c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1031ca560();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1031ca760; end: 1031ca7eb; -[_TtC18ContactUpsellScope20SCContactUpsellScope setContactUpsellScopeGraphBridgeServices:] */

void FUN_1031ca760(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112f4a298,auStack_48,0x20,0);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61188();
  func_0x000107c614a8(auStack_48);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1031ca7ec; end: 1031ca7f3;  */

undefined8 FUN_1031ca7ec(void)

{
  return 0x1b;
}



/* Entry: 1031ca7f4; end: 1031ca96b;  */

void FUN_1031ca7f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11061e998;
  func_0x000107c613fc(&UNK_11061e998,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1031ca96c,puVar1);
  return;
}



/* Entry: 1031ca96c; end: 1031ca973;  */

void FUN_1031ca96c(undefined8 *param_1)

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
  func_0x000107c61428(0x112f4a298,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f4a298,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11061ea30;
  func_0x000107c613fc(&UNK_11061ea30,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1031caa20;
  func_0x00010058fa64(0x1031caa20,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1031ca974; end: 1031ca9cf;  */

void FUN_1031ca974(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f4a298,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f4a298,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1031ca9d0; end: 1031caa27;  */

undefined ** FUN_1031ca9d0(void)

{
  return &PTR_DAT_113066928;
}



/* Entry: 1031caa28; end: 1031caa6f; -[SCContactUpsellScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031caa28(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f4a2f8;
  func_0x000107c61428(param_1 + _DAT_112f4a2f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031caa70; end: 1031caac7; -[SCContactUpsellScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031caa70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f4a2f8;
  func_0x000107c61428(param_1 + _DAT_112f4a2f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1031caac8; end: 1031cab0f; -[SCContactUpsellScopeGraphBridgeSaberEntryPoint contactUpsellScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031caac8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f4a300;
  func_0x000107c61428(param_1 + _DAT_112f4a300,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1031cab10; end: 1031cab73; -[SCContactUpsellScopeGraphBridgeSaberEntryPoint setContactUpsellScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031cab10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f4a300;
  func_0x000107c61428(param_1 + _DAT_112f4a300,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1031cab74; end: 1031caca7;  */

/* WARNING: Possible PIC construction at 0x0001031cac2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031cac48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031cac64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031cac30) */
/* WARNING: Removing unreachable block (ram,0x0001031cac4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031cab74(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c40350();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1031ca2e8();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1031ca560();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031caca8);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112f4a228) = lVar5;
    *(long *)(lVar4 + _DAT_112f4a230) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1031caca8; end: 1031caccf; -[SCContactUpsellScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1031caca8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1031cab74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1031cacd0; end: 1031cad13; -[SCContactUpsellScopeGraphBridgeSaberEntryPoint end] */

void FUN_1031cacd0(undefined8 param_1)

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



/* Entry: 1031cad14; end: 1031caeab;  */

void FUN_1031cad14(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef0ed1b10)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002c,0x800000010f12e4f0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ContactUpsellScopeGraphBridge/SCContactUpsellScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x52,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1031caeac);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c537c8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1031caeac; end: 1031caf57; -[SCContactUpsellScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1031caeac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1031cad14(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1031caf58; end: 1031cafc3; -[SCContactUpsellScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031caf58(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f4a2f8,0);
  *(undefined8 *)(param_1 + _DAT_112f4a300) = 0;
  *(undefined8 *)(param_1 + _DAT_112f4a308) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031cafc4; end: 1031caff7;  */

void FUN_1031cafc4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031caff8; end: 1031cb03f; -[SCContactUpsellScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031cb024: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031cb028) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031caff8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f4a2f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4a300));
  return;
}



/* Entry: 1031cb040; end: 1031cb05f;  */

void FUN_1031cb040(void)

{
  func_0x000107c61168(&PTR_PTR_1128c0d30);
  return;
}



/* Entry: 1031cb060; end: 1031cb0a7; -[SCSCContactUpsellScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031cb060(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f4a338;
  func_0x000107c61428(param_1 + _DAT_112f4a338,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031cb0a8; end: 1031cb0ff; -[SCSCContactUpsellScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031cb0a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f4a338;
  func_0x000107c61428(param_1 + _DAT_112f4a338,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1031cb100; end: 1031cb1d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031cb100(undefined8 param_1,long param_2)

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
    FUN_1031ca540();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f4a260) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1031cb1d8);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f4a268);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f4a340);
    *(long **)(unaff_x20 + _DAT_112f4a340) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1031cb1d8; end: 1031cb1ff; -[SCSCContactUpsellScopedServicesSaberEntryPoint begin] */

void FUN_1031cb1d8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1031cb100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1031cb200; end: 1031cb377;  */

/* WARNING: Possible PIC construction at 0x0001031cb268: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031cb300: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031cb26c) */
/* WARNING: Removing unreachable block (ram,0x0001031cb304) */
/* WARNING: Removing unreachable block (ram,0x0001031cb31c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031cb200(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f4a340);
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



/* Entry: 1031cb378; end: 1031cb37f;  */

void FUN_1031cb378(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1031cb380; end: 1031cb3b3; -[SCSCContactUpsellScopedServicesSaberEntryPoint end] */

void FUN_1031cb380(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1031cb200();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1031cb3b4; end: 1031cb4d3;  */

void FUN_1031cb3b4(long param_1,long param_2,long param_3)

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
                        "ContactUpsellScopeGraphBridge/SCSCContactUpsellScopedServicesSaberEntryPoint.swift"
                        ,0x52,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1031cb4d4);
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



/* Entry: 1031cb4d4; end: 1031cb57f; -[SCSCContactUpsellScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1031cb4d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1031cb3b4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1031cb580; end: 1031cb5df; -[SCSCContactUpsellScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031cb580(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f4a338,0);
  *(undefined8 *)(param_1 + _DAT_112f4a340) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031cb5e0; end: 1031cb613;  */

void FUN_1031cb5e0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031cb614; end: 1031cb64b; -[SCSCContactUpsellScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031cb614(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f4a338);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4a340));
  return;
}



/* Entry: 1031cb64c; end: 1031cb66b;  */

void FUN_1031cb64c(void)

{
  func_0x000107c61168(&PTR_PTR_1128c0df8);
  return;
}



/* Entry: 1031cb66c; end: 1031cb7df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031cb66c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f4a370) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f4a378) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031cb7e0; end: 1031cb813;  */

void FUN_1031cb7e0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031cb814; end: 1031cb86b; -[_TtC13ContactUpsell23ContactUpsellEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031cb830: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031cb834) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031cb814(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4a370));
  return;
}



/* Entry: 1031cb86c; end: 1031cb873;  */

undefined8 FUN_1031cb86c(void)

{
  return 0;
}



/* Entry: 1031cb874; end: 1031cb877; -[_TtC13ContactUpsell23ContactUpsellEntryPoint addContactsButtonTapped] */

void FUN_1031cb874(void)

{
  return;
}



/* Entry: 1031cb878; end: 1031cb87b; -[_TtC13ContactUpsell23ContactUpsellEntryPoint openSystemContactTapped] */

void FUN_1031cb878(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  
  lVar10 = 0x112d36580;
  puVar4 = &UNK_10d9016d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = &stack0xffffffffffffffb0 + -extraout_x8;
  uVar1 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(uVar1 - 8);
  uVar2 = uVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000103e709dc();
  uVar2 = uVar2 & 0xffffffffffff;
  if (((ulong)puVar4 & 0x2000000000000000) != 0) {
    uVar2 = (ulong)puVar4 >> 0x38 & 0xf;
  }
  if (uVar2 == 0) {
    func_0x000107c6142c(puVar4);
  }
  else {
    func_0x000107c5edd0(puVar11);
    func_0x000107c6142c(puVar4);
    puVar3 = puVar11;
    (**(code **)(lVar12 + 0x30))(puVar11,1,uVar1);
    if ((int)puVar3 != 1) {
      (**(code **)(lVar12 + 0x20))(lVar10,puVar11,uVar1);
      puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
      func_0x000107c5a9c4();
      func_0x000107c61180();
      puVar5 = puVar4;
      func_0x000107c5ed90();
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
      uVar7 = 0;
      func_0x000100dfa6ec(0);
      uVar8 = 0x112d377a8;
      FUN_1031cba98(0x112d377a8,&UNK_10d901780);
      puVar9 = puVar6;
      func_0x000107c5f9dc(puVar6,uVar7,PTR___sypN_11034f1a8 + 8,uVar8);
      func_0x000107c6142c(puVar6);
      func_0x000107c4de70(puVar4);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar9);
      (**(code **)(lVar12 + 8))(lVar10,uVar1);
      return;
    }
    func_0x0001000293e4(puVar11);
  }
  puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  func_0x000107c517a4();
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 1031cb87c; end: 1031cba77;  */

void FUN_1031cb87c(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  
  lVar10 = 0x112d36580;
  puVar4 = &UNK_10d9016d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = &stack0xffffffffffffffb0 + -extraout_x8;
  uVar1 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(uVar1 - 8);
  uVar2 = uVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000103e709dc();
  uVar2 = uVar2 & 0xffffffffffff;
  if (((ulong)puVar4 & 0x2000000000000000) != 0) {
    uVar2 = (ulong)puVar4 >> 0x38 & 0xf;
  }
  if (uVar2 == 0) {
    func_0x000107c6142c(puVar4);
  }
  else {
    func_0x000107c5edd0(puVar11);
    func_0x000107c6142c(puVar4);
    puVar3 = puVar11;
    (**(code **)(lVar12 + 0x30))(puVar11,1,uVar1);
    if ((int)puVar3 != 1) {
      (**(code **)(lVar12 + 0x20))(lVar10,puVar11,uVar1);
      puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
      func_0x000107c5a9c4();
      func_0x000107c61180();
      puVar5 = puVar4;
      func_0x000107c5ed90();
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
      uVar7 = 0;
      func_0x000100dfa6ec(0);
      uVar8 = 0x112d377a8;
      FUN_1031cba98(0x112d377a8,&UNK_10d901780);
      puVar9 = puVar6;
      func_0x000107c5f9dc(puVar6,uVar7,PTR___sypN_11034f1a8 + 8,uVar8);
      func_0x000107c6142c(puVar6);
      func_0x000107c4de70(puVar4);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar9);
      (**(code **)(lVar12 + 8))(lVar10,uVar1);
      return;
    }
    func_0x0001000293e4(puVar11);
  }
  puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  func_0x000107c517a4();
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 1031cba78; end: 1031cba97;  */

void FUN_1031cba78(void)

{
  func_0x000107c61168(&PTR_PTR_1128c0eb8);
  return;
}



/* Entry: 1031cba98; end: 1031cbad7;  */

void FUN_1031cba98(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x000100dfa6ec(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 1031cbad8; end: 1031cbb43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031cbad8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1031cbecc();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f4a3b0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1031cbb44; end: 1031cbbaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031cbb44(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f4a3b0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031cbbb0; end: 1031cbc0f; -[_TtC50ContentProductPlaybackScopedFactoryServiceProvider38SCContentProductPlaybackScopedServices init] */

void FUN_1031cbbb0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContentProductPlaybackScopedFactoryServiceProvider.SCContentProductPlaybackScopedServices"
                      ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031cbbdc);
  (*pcVar1)();
}



/* Entry: 1031cbc10; end: 1031cbc1f; -[_TtC50ContentProductPlaybackScopedFactoryServiceProvider38SCContentProductPlaybackScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031cbc10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f4a3b0));
  return;
}



/* Entry: 1031cbc20; end: 1031cbc8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031cbc20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11061ece8;
  func_0x000107c613fc(&UNK_11061ece8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1031cbf64,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1031cbc8c; end: 1031cbd27;  */

void FUN_1031cbc8c(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11061ebf8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11061ebf8;
  return;
}



/* Entry: 1031cbd28; end: 1031cbd5f;  */

void FUN_1031cbd28(long *param_1)

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



/* Entry: 1031cbd60; end: 1031cbd67;  */

undefined8 FUN_1031cbd60(void)

{
  return 0x1b;
}



/* Entry: 1031cbd68; end: 1031cbe9b;  */

void FUN_1031cbd68(undefined8 *param_1)

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
  puVar1 = &UNK_11061ed10;
  func_0x000107c613fc(&UNK_11061ed10,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1031cbf3c;
  func_0x00010058fa64(FUN_1031cbf3c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1031cbe9c; end: 1031cbecb;  */

undefined ** FUN_1031cbe9c(void)

{
  return &PTR_DAT_113066940;
}



/* Entry: 1031cbecc; end: 1031cbeeb;  */

void FUN_1031cbecc(void)

{
  func_0x000107c61168(&PTR_PTR_1128c0f80);
  return;
}



/* Entry: 1031cbeec; end: 1031cbf3b;  */

undefined1  [16] FUN_1031cbeec(void)

{
  return ZEXT816(0x11061ec48);
}



/* Entry: 1031cbf3c; end: 1031cbf63;  */

void FUN_1031cbf3c(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1031cbf64; end: 1031cbf67;  */

void FUN_1031cbf64(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1031cbf68; end: 1031cc113;  */

/* WARNING: Possible PIC construction at 0x0001031cc07c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031cc08c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031cc09c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031cc0ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031cc0bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031cc0cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031cc0dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031cc0ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031cc0e0) */
/* WARNING: Removing unreachable block (ram,0x0001031cc0d0) */
/* WARNING: Removing unreachable block (ram,0x0001031cc0c0) */
/* WARNING: Removing unreachable block (ram,0x0001031cc0b0) */
/* WARNING: Removing unreachable block (ram,0x0001031cc0a0) */
/* WARNING: Removing unreachable block (ram,0x0001031cc090) */
/* WARNING: Removing unreachable block (ram,0x0001031cc080) */
/* WARNING: Removing unreachable block (ram,0x0001031cc0f0) */

void FUN_1031cbf68(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_11061ed98;
  func_0x000107c613fc(&UNK_11061ed98,0x90,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  uVar2 = 0x112f4a420;
  func_0x0001000285a8(0x112f4a420,&UNK_10db98cc8);
  func_0x000107c613fc();
  uVar3 = 0x1031cc740;
  func_0x0001000841fc(0x1031cc740,puVar1,uVar2);
  func_0x000100084214(&UNK_10db98c90,0x34,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1031cc114; end: 1031cc157;  */

void FUN_1031cc114(void)

{
  long unaff_x20;
  
  FUN_1031cbf68(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 1031cc158; end: 1031cc167;  */

undefined1  [16] FUN_1031cc158(void)

{
  return ZEXT816(0x11061ed78);
}



/* Entry: 1031cc168; end: 1031cc6a3;  */

void FUN_1031cc168(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  char *pcVar5;
  code *pcVar6;
  undefined *puVar7;
  code *pcVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 auStack_70 [2];
  
  uVar13 = *param_2;
  func_0x0001000285a8(0x112f4a428,&UNK_10db98cd0);
  puVar1 = auStack_70;
  auStack_70[0] = uVar13;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x0001031cef4c();
  pcVar3 = "SCDiscoverFeedUpNextV2PlaybackSessionScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCDiscoverFeedUpNextV2PlaybackSessionScopeExposerSubjectServiceProvider",0x47
                      ,2);
  FUN_1031cef98();
  func_0x000100082720("SCOperaSessionScopeExposerSubjectServiceProvider",0x30,2);
  puVar4 = puVar2;
  FUN_1031cef8c();
  func_0x000100082720("SCDiscoverFeedUpNextV2PlaybackSessionScopeExposerObservableServiceProvider",
                      0x4a,2);
  pcVar5 = pcVar3;
  FUN_1031cf024();
  func_0x000100082720("SCOperaSessionScopeExposerObservableServiceProvider",0x33,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar6 = FUN_1031cbd28;
  func_0x0001000823a8(FUN_1031cbd28,0);
  func_0x000100082720("SCContentProductPlaybackScopedServicesCleanupRelayServiceProvider",0x41,2);
  func_0x0001000285a8(0x112f4a430,&UNK_10db98ce0);
  puVar7 = &UNK_11061edc0;
  func_0x000107c613fc(&UNK_11061edc0,0xa8,7);
  *(undefined8 **)(puVar7 + 0x10) = puVar1;
  *(undefined8 *)(puVar7 + 0x18) = param_3;
  *(undefined8 *)(puVar7 + 0x20) = param_4;
  *(undefined8 *)(puVar7 + 0x28) = param_5;
  *(undefined8 *)(puVar7 + 0x30) = param_6;
  *(undefined8 *)(puVar7 + 0x38) = param_7;
  *(undefined8 *)(puVar7 + 0x40) = param_8;
  *(undefined8 *)(puVar7 + 0x48) = param_9;
  *(undefined8 *)(puVar7 + 0x50) = param_10;
  *(undefined8 *)(puVar7 + 0x58) = param_11;
  *(undefined8 *)(puVar7 + 0x60) = param_12;
  *(undefined8 *)(puVar7 + 0x68) = param_13;
  *(undefined8 *)(puVar7 + 0x70) = param_14;
  *(undefined8 *)(puVar7 + 0x78) = param_15;
  *(undefined8 *)(puVar7 + 0x80) = param_16;
  *(undefined8 *)(puVar7 + 0x88) = param_17;
  *(undefined8 *)(puVar7 + 0x90) = param_18;
  *(char **)(puVar7 + 0x98) = pcVar5;
  *(undefined8 **)(puVar7 + 0xa0) = puVar4;
  func_0x000107c6157c(puVar1);
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
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(pcVar5);
  func_0x000107c6157c(puVar4);
  uVar13 = 0x1031cc78c;
  func_0x0001000823a8(0x1031cc78c,puVar7);
  func_0x000100082720("SCContentProductPlaybackEntryPointWrapperServiceProvider",0x38,2);
  func_0x0001000285a8(0x112f4a438,&UNK_10db98ce8);
  func_0x000107c6157c(uVar13);
  pcVar8 = FUN_1031cc7d8;
  func_0x0001000823a8(FUN_1031cc7d8,uVar13);
  func_0x000100082720("SCContentProductPlaybackDataServicesServiceProvider",0x33,2);
  pcVar9 = pcVar8;
  FUN_1031cece8(pcVar8,puVar2,pcVar3);
  func_0x000100082720("ContentProductPlaybackScopeGraphBridgeServicesServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112f4a440,&UNK_10db98cf0);
  puVar7 = &UNK_11061ede8;
  func_0x000107c613fc(&UNK_11061ede8,0x30,7);
  *(undefined8 **)(puVar7 + 0x10) = puVar1;
  *(code **)(puVar7 + 0x18) = pcVar9;
  *(undefined8 *)(puVar7 + 0x20) = uVar13;
  *(code **)(puVar7 + 0x28) = pcVar6;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(pcVar9);
  func_0x000107c6157c(pcVar6);
  uVar10 = 0x1031cc7e0;
  func_0x0001000823a8(0x1031cc7e0,puVar7);
  func_0x000100082720("SCContentProductPlaybackScopeInitializationPluginRegistryServiceProvider",
                      0x48,2);
  func_0x0001000285a8(0x112f4a3b8,&UNK_10db98a20);
  func_0x000107c6157c(uVar10);
  uVar11 = 0x1031cc7ec;
  func_0x0001000823a8(0x1031cc7ec,uVar10);
  func_0x000100082720("SCContentProductPlaybackScopeInitializationServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112f4a3a8,&UNK_10db98a10);
  func_0x000107c6157c(uVar11);
  uVar12 = 0x1031cc7f4;
  func_0x0001000823a8(0x1031cc7f4,uVar11);
  func_0x000100082720("SCContentProductPlaybackScopedServicesServiceProvider",0x35,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar7 = &UNK_11061ee10;
  func_0x000107c613fc(&UNK_11061ee10,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar12;
  *(code **)(puVar7 + 0x18) = pcVar6;
  func_0x000107c6157c(pcVar6);
  uVar12 = 0x1031cc7fc;
  func_0x0001000823a8(0x1031cc7fc,puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(uVar13);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar11);
  func_0x000100082720("SCContentProductPlaybackScopeEntryPointProvider",0x2f,2);
  *param_1 = uVar12;
  return;
}



/* Entry: 1031cc6a4; end: 1031cc7d7;  */

void FUN_1031cc6a4(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1031cc7d8; end: 1031cc803;  */

void FUN_1031cc7d8(undefined8 *param_1)

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



/* Entry: 1031cc804; end: 1031cdf5f;  */

void FUN_1031cc804(long *param_1,long param_2)

{
  code *pcVar1;
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
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
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
  FUN_1031ce19c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  *(undefined8 *)(param_2 + 0x38) = uStack_80;
  *(undefined8 *)(param_2 + 0x40) = uStack_88;
  *(undefined8 *)(param_2 + 0x48) = uStack_90;
  *(undefined8 *)(param_2 + 0x50) = uStack_98;
  *(undefined8 *)(param_2 + 0x58) = uStack_a0;
  *(undefined8 *)(param_2 + 0x60) = uStack_a8;
  *(undefined8 *)(param_2 + 0x68) = uStack_b0;
  *(undefined8 *)(param_2 + 0x70) = uStack_b8;
  *(undefined8 *)(param_2 + 0x78) = uStack_c0;
  *(undefined8 *)(param_2 + 0x80) = uStack_c8;
  *(undefined8 *)(param_2 + 0x88) = uStack_d0;
  *(undefined8 *)(param_2 + 0x90) = uStack_d8;
  *(undefined8 *)(param_2 + 0x98) = uStack_e0;
  *(undefined8 *)(param_2 + 0xa0) = uStack_e8;
  *(undefined8 *)(param_2 + 0xa8) = uStack_f0;
  func_0x0001000285a8(0x112e4a000,&UNK_10da41b80);
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
  func_0x000107c61174(uStack_e0);
  uVar16 = uStack_e8;
  func_0x000107c61174();
  uVar17 = uStack_f0;
  func_0x000107c61174(uStack_f0);
  uVar20 = uStack_f8;
  func_0x000107c6157c(uStack_f8);
  func_0x00010017da58();
  puVar18 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar20);
  *(undefined **)(param_2 + 0x18) = puVar18;
  func_0x0001000285a8(0x112e4c888,&UNK_10da47820);
  func_0x000107c610f8();
  uVar20 = uStack_100;
  func_0x000107c6157c(uStack_100);
  func_0x00010017da58();
  puVar18 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar20);
  *(undefined **)(param_2 + 0x20) = puVar18;
  puVar18 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x28) = puVar18;
  puVar18 = PTR_PTR_1126acd98;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar18;
  func_0x000107c61174();
  uVar19 = auStack_70[0];
  func_0x000107c61174();
  uVar20 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f12e880);
  func_0x000107c5a49c(puVar18);
  func_0x000107c61170(puVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar18);
  func_0x000107c61170(puVar18);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd00000000000001a;
  uVar20 = uVar21;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f0a40b0);
  func_0x000107c5a49c(puVar18);
  func_0x000107c61170(puVar18);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = uVar21;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f11a0a0);
  func_0x000107c5a49c(puVar18);
  func_0x000107c61170(puVar18);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174(puVar18);
  uVar20 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef27e80);
  func_0x000107c5a49c(puVar18);
  func_0x000107c61170(puVar18);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174(puVar18);
  uVar20 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(puVar18);
  func_0x000107c61170(puVar18);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar20);
  uVar22 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f007170);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000019;
  uVar20 = uVar21;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f051690);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f007150);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00aef0);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a7f0);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = uVar21;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f03f0a0);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar20);
  func_0x000107c61174(uVar14);
  func_0x000107c61174(uVar22);
  uVar20 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f051740);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar20);
  func_0x000107c61174(uVar15);
  func_0x000107c61174(uVar22);
  uVar20 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f052120);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar20);
  func_0x000107c61174(uVar16);
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef32630);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar20);
  uVar22 = *(undefined8 *)(param_2 + 0x10);
  lVar23 = *(long *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar20 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f12e8a0);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(uVar20);
  uVar20 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174(uVar22);
  func_0x000107c61174(uVar20);
  uVar21 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f03f140);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  uVar21 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174(uVar22);
  func_0x000107c61174(uVar21);
  uVar20 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0517b0);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar20);
  func_0x000107c3e740(uVar22);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar23 != 0) {
    func_0x000107c61170(uVar19);
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
    func_0x000107c61574(uStack_f8);
    func_0x000107c61574(uStack_100);
    *(long *)(param_2 + 0xb0) = lVar23;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031cd464);
  (*pcVar1)();
}



/* Entry: 1031cdf60; end: 1031ce03b;  */

void FUN_1031cdf60(void)

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



/* Entry: 1031ce03c; end: 1031ce08f;  */

void FUN_1031ce03c(undefined8 *param_1)

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



/* Entry: 1031ce090; end: 1031ce097;  */

undefined8 FUN_1031ce090(void)

{
  return 0x1b;
}



/* Entry: 1031ce098; end: 1031ce11b;  */

void FUN_1031ce098(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1031ce1ec,param_2,FUN_1031ce1f0,param_2,FUN_1031ce218,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1031ce11c; end: 1031ce16b;  */

undefined8 FUN_1031ce11c(void)

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



/* Entry: 1031ce16c; end: 1031ce19b;  */

undefined ** FUN_1031ce16c(void)

{
  return &PTR_DAT_113066940;
}



/* Entry: 1031ce19c; end: 1031ce1bb;  */

void FUN_1031ce19c(void)

{
  func_0x000107c61168(&PTR_PTR_112f4a4b0);
  return;
}



/* Entry: 1031ce1bc; end: 1031ce1ef;  */

undefined1  [16] FUN_1031ce1bc(void)

{
  return ZEXT816(0x11061ee68);
}



/* Entry: 1031ce1f0; end: 1031ce217;  */

void FUN_1031ce1f0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1031ce218; end: 1031ce21f;  */

undefined8 FUN_1031ce218(void)

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



/* Entry: 1031ce220; end: 1031ce25b;  */

void FUN_1031ce220(undefined8 *param_1,undefined8 param_2)

{
  FUN_1031ce25c();
  func_0x0001000a7f38("SCContentProductPlaybackScopeInitializationPluginRegistryServiceProvider",
                      0x48,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1031ce25c; end: 1031ce447;  */

void FUN_1031ce25c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d1e0;
  ppuVar4 = &PTR_DAT_113066940;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_11061eed8;
  func_0x000107c613fc(&UNK_11061eed8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112f4a5b0;
  func_0x0001000285a8(0x112f4a5b0,&UNK_10db98f20);
  func_0x0001000a6ee8(&UNK_11061f1b0,
                      "ContentProductPlaybackScopeGraphBridgeScopeInitializationPluginKey",0x42,2,
                      FUN_1031ce448,puVar2,uVar3,&UNK_11061f1b0,&PTR_DAT_112f4a690);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11061ee88,
                      "SCContentProductPlaybackEntryPointWrapperScopeInitializationPluginKey",0x45,2
                      ,FUN_1031ce4fc,param_3,uVar3,&UNK_11061ee88,&PTR_DAT_112f4a448);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_11061ef00;
  func_0x000107c613fc(&UNK_11061ef00,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11061ec88,
                      "SCContentProductPlaybackScopedServicesScopeInitializationPluginKey",0x42,2,
                      FUN_1031ce5ac,puVar2,uVar3,&UNK_11061ec88,&PTR_DAT_112f4a3c0);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112f4a5b8;
  func_0x0001000285a8(0x112f4a5b8,&UNK_10db98f28);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1031ce448; end: 1031ce487;  */

void FUN_1031ce448(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1031cf0c4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("ContentProductPlaybackScopeGraphBridgeScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1031ce488; end: 1031ce4fb;  */

void FUN_1031ce488(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1031ce5e8;
  func_0x0001000823a8(0x1031ce5e8,param_3);
  func_0x000100082720("SCContentProductPlaybackEntryPointWrapperScopeInitializationPluginProvider",
                      0x4a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1031ce4fc; end: 1031ce503;  */

void FUN_1031ce4fc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1031ce5e8;
  func_0x0001000823a8();
  func_0x000100082720("SCContentProductPlaybackEntryPointWrapperScopeInitializationPluginProvider",
                      0x4a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1031ce504; end: 1031ce5ab;  */

void FUN_1031ce504(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11061ef28;
  func_0x000107c613fc(&UNK_11061ef28,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1031ce5e0;
  func_0x0001000823a8(FUN_1031ce5e0,puVar1);
  func_0x000100082720("SCContentProductPlaybackScopedServicesScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1031ce5ac; end: 1031ce5b3;  */

void FUN_1031ce5ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11061ef28;
  func_0x000107c613fc(&UNK_11061ef28,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1031ce5e0;
  func_0x0001000823a8(FUN_1031ce5e0,puVar3);
  func_0x000100082720("SCContentProductPlaybackScopedServicesScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1031ce5b4; end: 1031ce5df;  */

void FUN_1031ce5b4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1031ce5e0; end: 1031ce5ef;  */

void FUN_1031ce5e0(undefined8 *param_1)

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
  puVar1 = &UNK_11061ed10;
  func_0x000107c613fc(&UNK_11061ed10,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1031cbf3c;
  func_0x00010058fa64(FUN_1031cbf3c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}


