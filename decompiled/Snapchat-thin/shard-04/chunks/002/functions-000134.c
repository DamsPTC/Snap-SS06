/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1031c17f4; end: 1031c187b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1031c17f4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1031c1bb4();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f498c0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f498c8) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031c187c);
  (*pcVar1)();
}



/* Entry: 1031c187c; end: 1031c18db; -[_TtC32ChatMediaPreviewScopeGraphBridge47ChatMediaPreviewScopeGraphBridgeSaberEntryPoint init] */

void FUN_1031c187c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatMediaPreviewScopeGraphBridge.ChatMediaPreviewScopeGraphBridgeSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031c18a8);
  (*pcVar1)();
}



/* Entry: 1031c18dc; end: 1031c1913; -[_TtC32ChatMediaPreviewScopeGraphBridge47ChatMediaPreviewScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031c18f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031c18fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c18dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f498c0));
  return;
}



/* Entry: 1031c1914; end: 1031c193b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c1914(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f498c8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f498c0));
  return;
}



/* Entry: 1031c193c; end: 1031c195b;  */

void FUN_1031c193c(void)

{
  func_0x000107c61168(&PTR_PTR_1128bfc78);
  return;
}



/* Entry: 1031c195c; end: 1031c19e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1031c195c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f498f8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f49900);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1031c19e4);
  (*pcVar2)();
}



/* Entry: 1031c19e4; end: 1031c1acb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1031c19e4(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f498f8);
  *(undefined **)(unaff_x20 + _DAT_112f498f8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f49900);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f49900))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11061d4a0;
  func_0x000107c613fc(&UNK_11061d4a0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1031c1ad0,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1031c1acc; end: 1031c1ad7;  */

void FUN_1031c1acc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1031c1ad8; end: 1031c1b37; -[_TtC32ChatMediaPreviewScopeGraphBridge45ChatMediaPreviewScopedServicesSaberEntryPoint init] */

void FUN_1031c1ad8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatMediaPreviewScopeGraphBridge.ChatMediaPreviewScopedServicesSaberEntryPoint"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031c1b04);
  (*pcVar1)();
}



/* Entry: 1031c1b38; end: 1031c1b6f; -[_TtC32ChatMediaPreviewScopeGraphBridge45ChatMediaPreviewScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c1b38(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f49900));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f498f8));
  return;
}



/* Entry: 1031c1b70; end: 1031c1b73;  */

void FUN_1031c1b70(void)

{
  return;
}



/* Entry: 1031c1b74; end: 1031c1b93;  */

void FUN_1031c1b74(void)

{
  FUN_1031c19e4();
  return;
}



/* Entry: 1031c1b94; end: 1031c1bb3;  */

void FUN_1031c1b94(void)

{
  func_0x000107c61168(&PTR_PTR_1128bfd40);
  return;
}



/* Entry: 1031c1bb4; end: 1031c1c83;  */

undefined8 FUN_1031c1bb4(void)

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
  
  func_0x000107c61428(0x112f49930,&uStack_40,0x20,0);
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
    FUN_1031c1c84();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1031c1c84; end: 1031c1ca3;  */

void FUN_1031c1c84(void)

{
  func_0x000107c61168(&PTR_PTR_1128bfe08);
  return;
}



/* Entry: 1031c1ca4; end: 1031c1d0f;  */

void FUN_1031c1ca4(void)

{
  func_0x0001000285a8(0x112f49938,&UNK_10db97508);
  func_0x0001000823a8(0x1031c1ce4,0);
  return;
}



/* Entry: 1031c1d10; end: 1031c1d4b; -[_TtC32ChatMediaPreviewScopeGraphBridge40ChatMediaPreviewScopeGraphBridgeServices init] */

void FUN_1031c1d10(undefined8 param_1)

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



/* Entry: 1031c1d4c; end: 1031c1d7f;  */

void FUN_1031c1d4c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031c1d80; end: 1031c1d87;  */

undefined8 FUN_1031c1d80(void)

{
  return 0x1b;
}



/* Entry: 1031c1d88; end: 1031c1eff;  */

void FUN_1031c1d88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11061d4e8;
  func_0x000107c613fc(&UNK_11061d4e8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1031c1f00,puVar1);
  return;
}



/* Entry: 1031c1f00; end: 1031c1f07;  */

void FUN_1031c1f00(undefined8 *param_1)

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
  func_0x000107c61428(0x112f49930,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f49930,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11061d580;
  func_0x000107c613fc(&UNK_11061d580,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1031c1fb4;
  func_0x00010058fa64(0x1031c1fb4,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1031c1f08; end: 1031c1f63;  */

void FUN_1031c1f08(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f49930,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f49930,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1031c1f64; end: 1031c1fbb;  */

undefined ** FUN_1031c1f64(void)

{
  return &PTR_DAT_113066598;
}



/* Entry: 1031c1fbc; end: 1031c2003; -[SCChatMediaPreviewScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c1fbc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f49990;
  func_0x000107c61428(param_1 + _DAT_112f49990,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031c2004; end: 1031c205b; -[SCChatMediaPreviewScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c2004(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f49990;
  func_0x000107c61428(param_1 + _DAT_112f49990,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1031c205c; end: 1031c20a3; -[SCChatMediaPreviewScopeGraphBridgeSaberEntryPoint chatMediaPreviewScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c205c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f49998;
  func_0x000107c61428(param_1 + _DAT_112f49998,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1031c20a4; end: 1031c2107; -[SCChatMediaPreviewScopeGraphBridgeSaberEntryPoint setChatMediaPreviewScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c20a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f49998;
  func_0x000107c61428(param_1 + _DAT_112f49998,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1031c2108; end: 1031c223b;  */

/* WARNING: Possible PIC construction at 0x0001031c21c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031c21dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031c21f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031c21c4) */
/* WARNING: Removing unreachable block (ram,0x0001031c21e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c2108(void)

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
  func_0x000107c3f8b8();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1031c193c();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1031c1bb4();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031c223c);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112f498c0) = lVar5;
    *(long *)(lVar4 + _DAT_112f498c8) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1031c223c; end: 1031c2263; -[SCChatMediaPreviewScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1031c223c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1031c2108();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1031c2264; end: 1031c22a7; -[SCChatMediaPreviewScopeGraphBridgeSaberEntryPoint end] */

void FUN_1031c2264(undefined8 param_1)

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



/* Entry: 1031c22a8; end: 1031c243f;  */

void FUN_1031c22a8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef0ed2c30)) {
      uVar2 = 0xd00000000000002f;
      func_0x000107c605b8(0xd00000000000002f,0x800000010f12d3d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ChatMediaPreviewScopeGraphBridge/SCChatMediaPreviewScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x58,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1031c2440);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53394();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1031c2440; end: 1031c24eb; -[SCChatMediaPreviewScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1031c2440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1031c22a8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1031c24ec; end: 1031c2557; -[SCChatMediaPreviewScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c24ec(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f49990,0);
  *(undefined8 *)(param_1 + _DAT_112f49998) = 0;
  *(undefined8 *)(param_1 + _DAT_112f499a0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031c2558; end: 1031c258b;  */

void FUN_1031c2558(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031c258c; end: 1031c25d3; -[SCChatMediaPreviewScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031c25b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031c25bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c258c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f49990);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f49998));
  return;
}



/* Entry: 1031c25d4; end: 1031c25f3;  */

void FUN_1031c25d4(void)

{
  func_0x000107c61168(&PTR_PTR_1128bfeb8);
  return;
}



/* Entry: 1031c25f4; end: 1031c263b; -[SCChatMediaPreviewScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c25f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f499d0;
  func_0x000107c61428(param_1 + _DAT_112f499d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031c263c; end: 1031c2693; -[SCChatMediaPreviewScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c263c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f499d0;
  func_0x000107c61428(param_1 + _DAT_112f499d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1031c2694; end: 1031c276b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c2694(undefined8 param_1,long param_2)

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
    FUN_1031c1b94();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f498f8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1031c276c);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f49900);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f499d8);
    *(long **)(unaff_x20 + _DAT_112f499d8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1031c276c; end: 1031c2793; -[SCChatMediaPreviewScopedServicesSaberEntryPoint begin] */

void FUN_1031c276c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1031c2694();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1031c2794; end: 1031c290b;  */

/* WARNING: Possible PIC construction at 0x0001031c27fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031c2894: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031c2800) */
/* WARNING: Removing unreachable block (ram,0x0001031c2898) */
/* WARNING: Removing unreachable block (ram,0x0001031c28b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c2794(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f499d8);
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



/* Entry: 1031c290c; end: 1031c2913;  */

void FUN_1031c290c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1031c2914; end: 1031c2947; -[SCChatMediaPreviewScopedServicesSaberEntryPoint end] */

void FUN_1031c2914(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1031c2794();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1031c2948; end: 1031c2a67;  */

void FUN_1031c2948(long param_1,long param_2,long param_3)

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
                        "ChatMediaPreviewScopeGraphBridge/SCChatMediaPreviewScopedServicesSaberEntryPoint.swift"
                        ,0x56,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1031c2a68);
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



/* Entry: 1031c2a68; end: 1031c2b13; -[SCChatMediaPreviewScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1031c2a68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1031c2948(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1031c2b14; end: 1031c2b73; -[SCChatMediaPreviewScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c2b14(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f499d0,0);
  *(undefined8 *)(param_1 + _DAT_112f499d8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031c2b74; end: 1031c2ba7;  */

void FUN_1031c2b74(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031c2ba8; end: 1031c2bdf; -[SCChatMediaPreviewScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c2ba8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f499d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f499d8));
  return;
}



/* Entry: 1031c2be0; end: 1031c2bff;  */

void FUN_1031c2be0(void)

{
  func_0x000107c61168(&PTR_PTR_1128bff80);
  return;
}



/* Entry: 1031c2c00; end: 1031c2d2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1031c2c00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  puVar3 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  lVar1 = _DAT_112f49a10;
  func_0x000107c61614(unaff_x20 + _DAT_112f49a10,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f49a18) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f49a28) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f49a08) = param_2;
  func_0x000107c61604(unaff_x20 + lVar1,param_3);
  puVar2 = PTR_PTR_1126acd68;
  func_0x000107c610f8();
  func_0x000107c615f0(param_2);
  func_0x000107c49520();
  *(undefined **)(unaff_x20 + _DAT_112f49a20) = puVar2;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  uVar4 = *(undefined8 *)(puVar3 + _DAT_112f49a20);
  func_0x000107c61174();
  func_0x000107c5a050(uVar4);
  if (param_1 != 0) {
    FUN_1031c2d2c(param_1);
    func_0x000107c61170(param_1);
  }
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(puVar3);
  return puVar3;
}



/* Entry: 1031c2d2c; end: 1031c2fd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c2d2c(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = _DAT_112f49a18;
  ppuVar5 = &puStack_90;
  ppuVar7 = &puStack_90;
  ppuVar9 = &puStack_90;
  if (*(long *)(unaff_x20 + _DAT_112f49a18) == 0) {
    puVar3 = PTR_PTR_1126acd70;
    func_0x000107c610f8(PTR_PTR_1126acd70);
    func_0x000107c453e4();
    puVar6 = &UNK_11061d660;
    puVar4 = puVar6;
    func_0x000107c613fc(&UNK_11061d660,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_70 = FUN_1031c3a60;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = (code *)&UNK_1000f6b44;
    puStack_78 = &UNK_11061d678;
    puStack_68 = puVar4;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c56c6c(puVar3);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c613fc(&UNK_11061d660,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    pcStack_70 = (code *)0x1031c3aa4;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_1031c3668;
    puStack_78 = &UNK_11061d6a0;
    puStack_68 = puVar6;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c56f4c(puVar3);
    func_0x000107c60bd0(ppuVar7);
    lVar10 = *(long *)(unaff_x20 + _DAT_112f49a08);
    FUN_1031c3ae4(0,0x112f49a58,&PTR_PTR_1126acd68);
    func_0x000107c614e8();
    func_0x000107c40994();
    func_0x000107c61180();
    if (lVar10 == 0) {
      FUN_1031c31a4();
      func_0x000107c61170(puVar3);
    }
    else {
      uVar11 = *(undefined8 *)(unaff_x20 + lVar2);
      *(long *)(unaff_x20 + lVar2) = lVar10;
      func_0x000107c615f4();
      func_0x000107c615e8(uVar11);
      func_0x000107c57f14(lVar10);
      puVar6 = &UNK_11061d660;
      func_0x000107c613fc(&UNK_11061d660,0x18,7);
      func_0x000107c61614(puVar6 + 0x10);
      puVar4 = &UNK_11061d6d8;
      func_0x000107c613fc(&UNK_11061d6d8,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,lVar10);
      func_0x000107c615e8(lVar10);
      puVar8 = &UNK_11061d700;
      func_0x000107c613fc(&UNK_11061d700,0x20,7);
      *(undefined **)(puVar8 + 0x10) = puVar4;
      *(undefined **)(puVar8 + 0x18) = puVar6;
      pcStack_70 = (code *)0x1031c3aac;
      puStack_90 = puVar1;
      uStack_88 = 0x42000000;
      pcStack_80 = (code *)&UNK_1000f6b44;
      puStack_78 = &UNK_11061d718;
      puStack_68 = puVar8;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      func_0x000107c4dc58(lVar10);
      func_0x000107c60bd0(ppuVar9);
      FUN_1031c38a0();
      func_0x000107c61170(puVar3);
      func_0x000107c615e8(lVar10);
    }
  }
  return;
}



/* Entry: 1031c2fd8; end: 1031c30b7; -[_TtC26ChatMediaPreviewEntryPoint37ChatMediaPreviewComposeViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c2fd8(long param_1)

{
  code *pcVar1;
  
  func_0x000107c61614(param_1 + _DAT_112f49a10,0);
  *(undefined8 *)(param_1 + _DAT_112f49a18) = 0;
  *(undefined8 *)(param_1 + _DAT_112f49a28) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "ChatMediaPreviewEntryPoint/ChatMediaPreviewComposeViewController.swift",0x46,
                      2,0x27,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031c3064);
  (*pcVar1)();
}



/* Entry: 1031c30b8; end: 1031c312b; -[_TtC26ChatMediaPreviewEntryPoint37ChatMediaPreviewComposeViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c30b8(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar2 = *(long *)(param_1 + _DAT_112f49a18);
  if (lVar2 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c41848(lVar2);
  }
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031c312c; end: 1031c3193; -[_TtC26ChatMediaPreviewEntryPoint37ChatMediaPreviewComposeViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031c3178: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031c317c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c312c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f49a08));
  FUN_1031c3a3c(param_1 + _DAT_112f49a10);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f49a18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f49a20));
  return;
}



/* Entry: 1031c3194; end: 1031c31a3; -[_TtC26ChatMediaPreviewEntryPoint37ChatMediaPreviewComposeViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c3194(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + _DAT_112f49a20));
  return;
}



/* Entry: 1031c31a4; end: 1031c327f;  */

/* WARNING: Possible PIC construction at 0x0001031c31cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031c31d0) */
/* WARNING: Removing unreachable block (ram,0x0001031c31fc) */
/* WARNING: Removing unreachable block (ram,0x0001031c31e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c31a4(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = _DAT_112f49a18;
  uVar2 = 0;
  if (*(long *)(unaff_x20 + _DAT_112f49a18) != 0) {
    func_0x000107c41848();
    uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar2);
  return;
}



/* Entry: 1031c3280; end: 1031c35a7;  */

void FUN_1031c3280(undefined *param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  char *pcVar9;
  undefined **ppuVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined auStack_78 [24];
  
  puVar7 = auStack_78;
  func_0x000107c61428(param_2 + 0x10,puVar7,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar13 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((ulong)param_1 >> 0x3e == 0) {
      puVar14 = *(undefined **)(puVar13 + 0x10);
    }
    else {
      puVar14 = puVar13;
      if ((undefined *)0x7fffffffffffffff < param_1) {
        puVar14 = param_1;
      }
      func_0x000107c60480();
    }
    puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar14 != (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
      do {
        while( true ) {
          if (((ulong)param_1 & 0xc000000000000001) == 0) {
            if (*(undefined **)(puVar13 + 0x10) <= puVar8) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1031c34b4);
              (*pcVar3)();
            }
            puVar4 = *(undefined **)(param_1 + (long)puVar8 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            puVar4 = puVar8;
            puVar7 = param_1;
            FUN_1031c4430();
          }
          puVar1 = puVar8 + 1;
          if (SCARRY8((long)puVar8,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1031c34b0);
            (*pcVar3)();
          }
          puVar12 = puVar4;
          func_0x000107c4c99c();
          func_0x000107c61180();
          puVar15 = puVar7;
          if (puVar12 != (undefined *)0x0) break;
LAB_1031c3304:
          func_0x000107c61170(puVar4);
          puVar7 = puVar15;
          puVar8 = puVar8 + 1;
          if (puVar1 == puVar14) goto LAB_1031c34d4;
        }
        puVar5 = puVar12;
        func_0x000107c5faec();
        puVar15 = puVar7;
        func_0x000107c61170(puVar12);
        uVar2 = (ulong)puVar5 & 0xffffffffffff;
        if (((ulong)puVar7 & 0x2000000000000000) != 0) {
          uVar2 = (ulong)puVar7 >> 0x38 & 0xf;
        }
        if (uVar2 == 0) {
          func_0x000107c6142c(puVar7);
          goto LAB_1031c3304;
        }
        puVar8 = puVar4;
        func_0x000107c5c960();
        func_0x000107c61180();
        if (puVar8 == (undefined *)0x0) {
          puVar12 = (undefined *)0x0;
          puVar15 = (undefined *)0x0;
        }
        else {
          puVar12 = puVar8;
          func_0x000107c5faec();
          func_0x000107c61170(puVar8);
        }
        uVar6 = 0;
        func_0x000104393e34(0);
        func_0x000107c610f8();
        func_0x000104393e58(puVar5,puVar7,puVar12,puVar15,uVar6);
        func_0x000107c61170(puVar4);
        puVar8 = puStack_b0;
        func_0x000107c61550();
        if ((((int)puVar8 == 0) || ((long)puStack_b0 < 0)) ||
           (puVar8 = puStack_b0, ((ulong)puStack_b0 >> 0x3e & 1) != 0)) {
          if ((ulong)puStack_b0 >> 0x3e == 0) {
            puVar7 = *(undefined **)(((ulong)puStack_b0 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar7 = (undefined *)((ulong)puStack_b0 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puStack_b0) {
              puVar7 = puStack_b0;
            }
            func_0x000107c60480();
          }
          puVar7 = puVar7 + 1;
          puVar8 = (undefined *)0x0;
          FUN_1031c3b24(0,puVar7,1,puStack_b0);
        }
        uVar11 = (ulong)puVar8 & 0xffffffffffffff8;
        uVar2 = *(ulong *)(uVar11 + 0x10);
        puVar4 = (undefined *)(uVar2 + 1);
        puStack_b0 = puVar8;
        if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar2) {
          puStack_b0 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
          puVar7 = puVar4;
          FUN_1031c3b24(puStack_b0,puVar4,1,puVar8);
          uVar11 = (ulong)puStack_b0 & 0xffffffffffffff8;
        }
        *(undefined **)(uVar11 + 0x10) = puVar4;
        *(undefined **)(uVar11 + uVar2 * 8 + 0x20) = puVar5;
        puVar8 = puVar1;
      } while (puVar1 != puVar14);
    }
LAB_1031c34d4:
    pcVar9 = "setViewModel(_:)";
    func_0x0001000c10c0("setViewModel(_:)");
    func_0x000107c61180();
    puVar7 = &UNK_11061d7a0;
    func_0x000107c613fc(&UNK_11061d7a0,0x20,7);
    *(undefined **)(puVar7 + 0x10) = puStack_b0;
    *(long *)(puVar7 + 0x18) = param_2;
    pcStack_88 = FUN_1031c3e30;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_11061d7b8;
    ppuVar10 = &puStack_a8;
    puStack_80 = puVar7;
    func_0x000107c60bc4(ppuVar10);
    puVar7 = puStack_80;
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar7);
    func_0x000107c4e524(pcVar9);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c61170(param_2);
    func_0x000107c615e8(pcVar9);
  }
  return;
}



/* Entry: 1031c35a8; end: 1031c3667;  */

/* WARNING: Possible PIC construction at 0x0001031c360c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031c3610) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c35a8(ulong param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (param_1 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar2 = param_1;
    }
    func_0x000107c60480();
  }
  param_2 = param_2 + _DAT_112f49a10;
  func_0x000107c61618();
  if (uVar2 == 0) {
    if (param_2 == 0) {
      return;
    }
    func_0x000107c42034();
  }
  else {
    if (param_2 == 0) {
      return;
    }
    uVar1 = 0;
    func_0x000104393e34(0);
    func_0x000107c5fc48(param_1,uVar1);
    func_0x000107c5d540(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 1031c3668; end: 1031c384b;  */

void FUN_1031c3668(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0;
  FUN_1031c3ae4(0,0x112f49a60,&PTR_PTR_1126acd78);
  func_0x000107c5fc54(param_2,uVar3);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1031c384c; end: 1031c389f;  */

void FUN_1031c384c(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1031c38a0();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1031c38a0; end: 1031c39ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c38a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  lVar5 = *(long *)(unaff_x20 + _DAT_112f49a18);
  if (lVar5 == 0) {
    return;
  }
  func_0x000107c615f0(lVar5);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1031c39ec);
    (*pcVar1)();
  }
  func_0x000107c438d4();
  func_0x000107c61170(lVar2);
  uVar6 = 0x7fefffffffffffff;
  func_0x000107c4c92c(param_3,0x7fefffffffffffff,lVar5,param_5,0);
  lVar2 = _DAT_112f49a28;
  lVar3 = *(long *)(unaff_x20 + _DAT_112f49a28);
  if (lVar3 == 0) {
    lVar3 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031c39f0);
      (*pcVar1)();
    }
    lVar4 = lVar3;
    func_0x000107c44d9c();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    lVar3 = lVar4;
    func_0x000107c40290(uVar6);
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
    *(long *)(unaff_x20 + lVar2) = lVar3;
    func_0x000107c61170(uVar6);
    lVar3 = *(long *)(unaff_x20 + lVar2);
    if (lVar3 == 0) goto LAB_1031c39cc;
    func_0x000107c61174();
    func_0x000107c521e8();
  }
  else {
    func_0x000107c61174();
    func_0x000107c5378c(uVar6);
  }
  func_0x000107c61170(lVar3);
LAB_1031c39cc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar5);
  return;
}



/* Entry: 1031c39f0; end: 1031c3a3b; -[_TtC26ChatMediaPreviewEntryPoint37ChatMediaPreviewComposeViewController initWithNibName:bundle:] */

void FUN_1031c39f0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatMediaPreviewEntryPoint.ChatMediaPreviewComposeViewController",0x40,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031c3a1c);
  (*pcVar1)();
}



/* Entry: 1031c3a3c; end: 1031c3a5f;  */

undefined8 FUN_1031c3a3c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1031c3a60; end: 1031c3a87;  */

void FUN_1031c3a60(void)

{
  func_0x0001031c379c();
  return;
}



/* Entry: 1031c3a88; end: 1031c3ab3;  */

void FUN_1031c3a88(long param_1,long param_2)

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



/* Entry: 1031c3ab4; end: 1031c3adb;  */

void FUN_1031c3ab4(void)

{
  func_0x0001031c379c();
  return;
}



/* Entry: 1031c3adc; end: 1031c3ae3;  */

void FUN_1031c3adc(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1031c38a0();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1031c3ae4; end: 1031c3b23;  */

void FUN_1031c3ae4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1031c3b24; end: 1031c3c4b;  */

ulong FUN_1031c3b24(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031c3c4c);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1031c3c4c(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031c3c48);
      (*pcVar1)();
    }
    FUN_1031c3ccc(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1031c3c4c; end: 1031c3ccb;  */

undefined * FUN_1031c3c4c(undefined *param_1,undefined *param_2)

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
    func_0x000101ccc938();
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



/* Entry: 1031c3ccc; end: 1031c3dc3;  */

long FUN_1031c3ccc(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1031c3dc0);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1031c3dc4);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x000104393e34(0);
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
      func_0x000104393e34(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1031c3dbc);
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



/* Entry: 1031c3dc4; end: 1031c3e2f;  */

void FUN_1031c3dc4(void)

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
    FUN_1031c3ae4(0,0x112f49a60,&PTR_PTR_1126acd78);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112f49a68;
  plVar5 = (long *)&UNK_10db976f8;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1031c3e30; end: 1031c3e6f;  */

/* WARNING: Possible PIC construction at 0x0001031c360c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031c3610) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c3e30(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if (uVar1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar1) {
      uVar4 = uVar1;
    }
    func_0x000107c60480();
  }
  lVar2 = lVar2 + _DAT_112f49a10;
  func_0x000107c61618();
  if (uVar4 == 0) {
    if (lVar2 == 0) {
      return;
    }
    func_0x000107c42034();
  }
  else {
    if (lVar2 == 0) {
      return;
    }
    uVar3 = 0;
    func_0x000104393e34(0);
    func_0x000107c5fc48(uVar1,uVar3);
    func_0x000107c5d540(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 1031c3e70; end: 1031c3eab;  */

void FUN_1031c3e70(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1031c3eac; end: 1031c3eb7;  */

void FUN_1031c3eac(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1031c3eb8; end: 1031c423f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c3eb8(void)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *apuStack_78 [3];
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar9 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar9 != 0) {
    lVar2 = lVar9;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar9);
    lVar9 = _DAT_1130734b0;
    if (lVar2 != 0) {
      lVar10 = *(long *)(unaff_x20 + 0x10);
      uVar8 = *(ulong *)(lVar10 + _DAT_1130734b0);
      if (uVar8 >> 0x3e == 0) {
        uVar3 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
        puVar12 = PTR_PTR_1126acd80;
      }
      else {
        uVar3 = uVar8 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar8) {
          uVar3 = uVar8;
        }
        func_0x000107c60480();
        puVar12 = PTR_PTR_1126acd80;
      }
      PTR_PTR_1126acd80 = puVar12;
      if (uVar3 == 0) {
        puVar12 = (undefined *)0x0;
      }
      else {
        func_0x000107c610f8();
        func_0x000107c453e4();
        uVar8 = *(ulong *)(lVar10 + lVar9);
        if (uVar8 >> 0x3e == 0) {
          uVar3 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar3 = uVar8 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar8) {
            uVar3 = uVar8;
          }
          func_0x000107c60480();
        }
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (uVar3 != 0) {
          apuStack_78[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x000107c61434(uVar8);
          func_0x0001031c42f0(0,uVar3 & ((long)uVar3 >> 0x3f ^ 0xffffffffffffffffU),0);
          if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1031c4240);
            (*pcVar1)();
          }
          uVar11 = 0;
          do {
            puVar7 = apuStack_78[0];
            if ((uVar8 & 0xc000000000000001) == 0) {
              uVar4 = *(ulong *)(uVar8 + uVar11 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar4 = uVar11;
              func_0x000101cccc0c(uVar11,uVar8);
            }
            puVar5 = PTR_PTR_1126acd78;
            func_0x000107c610f8();
            func_0x000107c453e4();
            if (((undefined8 *)(uVar4 + _DAT_1130735f0))[1] == 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = *(undefined8 *)(uVar4 + _DAT_1130735f0);
              func_0x000107c5fadc(uVar6);
            }
            func_0x000107c59d34(puVar5);
            func_0x000107c61170(uVar6);
            uVar6 = *(undefined8 *)(uVar4 + _DAT_1130735e8);
            func_0x000107c5fadc(uVar6,((undefined8 *)(uVar4 + _DAT_1130735e8))[1]);
            func_0x000107c56420(puVar5);
            func_0x000107c61170(uVar4);
            func_0x000107c61170(uVar6);
            uVar4 = *(ulong *)(puVar7 + 0x10);
            apuStack_78[0] = puVar7;
            if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar4) {
              func_0x0001031c42f0(1 < *(ulong *)(puVar7 + 0x18),uVar4 + 1,1);
            }
            puVar7 = apuStack_78[0];
            uVar11 = uVar11 + 1;
            *(ulong *)(apuStack_78[0] + 0x10) = uVar4 + 1;
            *(undefined **)(apuStack_78[0] + uVar4 * 8 + 0x20) = puVar5;
          } while (uVar3 != uVar11);
          func_0x000107c6142c(uVar8);
        }
        uVar6 = 0;
        FUN_1031c45e4(0);
        puVar5 = puVar7;
        func_0x000107c5fc48(puVar7,uVar6);
        func_0x000107c6142c(puVar7);
        func_0x000107c5338c(puVar12);
        func_0x000107c61170(puVar5);
        func_0x000107c61174(puVar12);
      }
      lVar9 = _DAT_1130734b8;
      func_0x000107c61428(lVar10 + _DAT_1130734b8,apuStack_78,0,0);
      lVar9 = lVar10 + lVar9;
      func_0x000107c61618(lVar9);
      func_0x0001031c3a1c(0);
      func_0x000107c610f8();
      func_0x000107c615f0(lVar2);
      puVar7 = puVar12;
      FUN_1031c2c00(puVar12,lVar2,lVar9);
      uVar6 = *(undefined8 *)(lVar10 + _DAT_1130734a8);
      func_0x000107c615f0(uVar6);
      func_0x000107c3e2c0();
      func_0x000107c615e8(uVar6);
      func_0x000107c61170(puVar7);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(puVar12);
      return;
    }
  }
  lVar2 = _DAT_1130734b8;
  lVar9 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar9 + _DAT_1130734b8,apuStack_78,0,0);
  lVar9 = lVar9 + lVar2;
  func_0x000107c61618();
  if (lVar9 != 0) {
    func_0x000107c42034();
    func_0x000107c615e8(lVar9);
  }
  return;
}



/* Entry: 1031c4240; end: 1031c429b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1031c4240(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c41864(*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_1130734a8),param_2,0);
  return 0;
}



/* Entry: 1031c429c; end: 1031c42bb;  */

void FUN_1031c429c(void)

{
  FUN_1031c3eb8();
  return;
}



/* Entry: 1031c42bc; end: 1031c430b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1031c42bc(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  
  func_0x000107c41864(*(undefined8 *)(*(long *)(*unaff_x20 + 0x10) + _DAT_1130734a8),param_2,0);
  return 0;
}



/* Entry: 1031c430c; end: 1031c442f;  */

undefined * FUN_1031c430c(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1031c4430);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_1031c3dc4();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_1031c45e4(0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1031c4430; end: 1031c45e3;  */

ulong FUN_1031c4430(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1031c4514);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1031c4518);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126acd78;
    func_0x000107c61168(PTR_PTR_1126acd78);
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
    puVar4 = PTR_PTR_1126acd78;
    func_0x000107c61168(PTR_PTR_1126acd78);
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
  FUN_1031c45e4(0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1031c45e4);
  (*pcVar2)();
}



/* Entry: 1031c45e4; end: 1031c4647;  */

void FUN_1031c45e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f49a60 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126acd78;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112f49a60 = puVar1;
  return;
}



/* Entry: 1031c4648; end: 1031c46b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c4648(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1031c4a3c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f49b20) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1031c46b4; end: 1031c471f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c46b4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f49b20) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031c4720; end: 1031c477f; -[_TtC51ContactPermissionResumeScopedFactoryServiceProvider39SCContactPermissionResumeScopedServices init] */

void FUN_1031c4720(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContactPermissionResumeScopedFactoryServiceProvider.SCContactPermissionResumeScopedServices"
                      ,0x5b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031c474c);
  (*pcVar1)();
}



/* Entry: 1031c4780; end: 1031c478f; -[_TtC51ContactPermissionResumeScopedFactoryServiceProvider39SCContactPermissionResumeScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c4780(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f49b20));
  return;
}



/* Entry: 1031c4790; end: 1031c47fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031c4790(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11061d9f0;
  func_0x000107c613fc(&UNK_11061d9f0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1031c4ad4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1031c47fc; end: 1031c4897;  */

void FUN_1031c47fc(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11061d900;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11061d900;
  return;
}



/* Entry: 1031c4898; end: 1031c48cf;  */

void FUN_1031c4898(long *param_1)

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



/* Entry: 1031c48d0; end: 1031c48d7;  */

undefined8 FUN_1031c48d0(void)

{
  return 0x1b;
}



/* Entry: 1031c48d8; end: 1031c4a0b;  */

void FUN_1031c48d8(undefined8 *param_1)

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
  puVar1 = &UNK_11061da18;
  func_0x000107c613fc(&UNK_11061da18,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1031c4aac;
  func_0x00010058fa64(FUN_1031c4aac,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1031c4a0c; end: 1031c4a3b;  */

undefined ** FUN_1031c4a0c(void)

{
  return &PTR_DAT_1130668f8;
}



/* Entry: 1031c4a3c; end: 1031c4a5b;  */

void FUN_1031c4a3c(void)

{
  func_0x000107c61168(&PTR_PTR_1128c0120);
  return;
}



/* Entry: 1031c4a5c; end: 1031c4aab;  */

undefined1  [16] FUN_1031c4a5c(void)

{
  return ZEXT816(0x11061d950);
}



/* Entry: 1031c4aac; end: 1031c4ad3;  */

void FUN_1031c4aac(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1031c4ad4; end: 1031c4ad7;  */

void FUN_1031c4ad4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1031c4ad8; end: 1031c4b7f;  */

/* WARNING: Possible PIC construction at 0x0001031c4b68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031c4b6c) */

void FUN_1031c4ad8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_11061daa0;
  func_0x000107c613fc(&UNK_11061daa0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  uVar2 = 0x112f49b90;
  func_0x0001000285a8(0x112f49b90,&UNK_10db97a08);
  func_0x000107c613fc();
  pcVar3 = FUN_1031c4ea4;
  func_0x0001000841fc(FUN_1031c4ea4,puVar1,uVar2);
  func_0x000100084214(&UNK_10db979d0,0x35,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1031c4b80; end: 1031c4b97;  */

/* WARNING: Possible PIC construction at 0x0001031c4b68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031c4b6c) */

void FUN_1031c4b80(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = &UNK_11061daa0;
  func_0x000107c613fc(&UNK_11061daa0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  uVar3 = 0x112f49b90;
  func_0x0001000285a8(0x112f49b90,&UNK_10db97a08);
  func_0x000107c613fc();
  pcVar4 = FUN_1031c4ea4;
  func_0x0001000841fc(FUN_1031c4ea4,puVar2,uVar3);
  func_0x000100084214(&UNK_10db979d0,0x35,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1031c4b98; end: 1031c4ea3;  */

void FUN_1031c4b98(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar9 = *param_2;
  func_0x0001000285a8(0x112f49b98,&UNK_10db97a10);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1031c5c00();
  func_0x000100082720("ContactPermissionResumeScopeGraphBridgeServicesServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112f49ba0,&UNK_10db97a20);
  puVar3 = &UNK_11061dac8;
  func_0x000107c613fc(&UNK_11061dac8,0x28,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  uVar9 = 0x1031c4eac;
  func_0x0001000823a8(0x1031c4eac,puVar3);
  func_0x000100082720("SCContactPermissionResumeEntryPointWrapperServiceProvider",0x39,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1031c4898;
  func_0x0001000823a8(FUN_1031c4898,0);
  func_0x000100082720("SCContactPermissionResumeScopedServicesCleanupRelayServiceProvider",0x42,2);
  func_0x0001000285a8(0x112f49ba8,&UNK_10db97a18);
  puVar3 = &UNK_11061daf0;
  func_0x000107c613fc(&UNK_11061daf0,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar9;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x1031c4eb8;
  func_0x0001000823a8(0x1031c4eb8,puVar3);
  func_0x000100082720("SCContactPermissionResumeScopeInitializationPluginRegistryServiceProvider",
                      0x49,2);
  func_0x0001000285a8(0x112f49b28,&UNK_10db97750);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x1031c4ec4;
  func_0x0001000823a8(0x1031c4ec4,uVar5);
  func_0x000100082720("SCContactPermissionResumeScopeInitializationServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112f49b18,&UNK_10db97740);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1031c4ecc;
  func_0x0001000823a8(0x1031c4ecc,uVar6);
  func_0x000100082720("SCContactPermissionResumeScopedServicesServiceProvider",0x36,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_11061db18;
  func_0x000107c613fc(&UNK_11061db18,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar8 = FUN_1031c4f00;
  func_0x0001000823a8(FUN_1031c4f00,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCContactPermissionResumeScopeEntryPointProvider",0x30,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 1031c4ea4; end: 1031c4ed3;  */

void FUN_1031c4ea4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *param_2;
  func_0x0001000285a8(0x112f49b98,&UNK_10db97a10);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1031c5c00();
  func_0x000100082720("ContactPermissionResumeScopeGraphBridgeServicesServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112f49ba0,&UNK_10db97a20);
  puVar3 = &UNK_11061dac8;
  func_0x000107c613fc(&UNK_11061dac8,0x28,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar6);
  uVar4 = 0x1031c4eac;
  func_0x0001000823a8(0x1031c4eac,puVar3);
  func_0x000100082720("SCContactPermissionResumeEntryPointWrapperServiceProvider",0x39,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar5 = FUN_1031c4898;
  func_0x0001000823a8(FUN_1031c4898,0);
  func_0x000100082720("SCContactPermissionResumeScopedServicesCleanupRelayServiceProvider",0x42,2);
  func_0x0001000285a8(0x112f49ba8,&UNK_10db97a18);
  puVar3 = &UNK_11061daf0;
  func_0x000107c613fc(&UNK_11061daf0,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar4;
  *(code **)(puVar3 + 0x28) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x1031c4eb8;
  func_0x0001000823a8(0x1031c4eb8,puVar3);
  func_0x000100082720("SCContactPermissionResumeScopeInitializationPluginRegistryServiceProvider",
                      0x49,2);
  func_0x0001000285a8(0x112f49b28,&UNK_10db97750);
  func_0x000107c6157c(uVar6);
  uVar9 = 0x1031c4ec4;
  func_0x0001000823a8(0x1031c4ec4,uVar6);
  func_0x000100082720("SCContactPermissionResumeScopeInitializationServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112f49b18,&UNK_10db97740);
  func_0x000107c6157c(uVar9);
  uVar7 = 0x1031c4ecc;
  func_0x0001000823a8(0x1031c4ecc,uVar9);
  func_0x000100082720("SCContactPermissionResumeScopedServicesServiceProvider",0x36,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_11061db18;
  func_0x000107c613fc(&UNK_11061db18,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar5;
  func_0x000107c6157c(pcVar5);
  pcVar8 = FUN_1031c4f00;
  func_0x0001000823a8(FUN_1031c4f00,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SCContactPermissionResumeScopeEntryPointProvider",0x30,2);
  *param_1 = pcVar8;
  return;
}


