/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10220394c; end: 102203967;  */

void FUN_10220394c(undefined8 param_1)

{
  func_0x0001000285a8(0x112e649b8,&UNK_10da6f228);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1022039d4,param_1);
  return;
}



/* Entry: 102203968; end: 1022039d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102203968(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_10220392c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e649c0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1022039d4; end: 1022039db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022039d4(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_10220392c();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112e649c0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1022039dc; end: 102203a27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022039dc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e649c0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102203a28; end: 102203a87; -[_TtC21RemixScopeGraphBridge29RemixScopeGraphBridgeServices init] */

void FUN_102203a28(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("RemixScopeGraphBridge.RemixScopeGraphBridgeServices",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102203a54);
  (*pcVar1)();
}



/* Entry: 102203a88; end: 102203a97; -[_TtC21RemixScopeGraphBridge29RemixScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102203a88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e649c0));
  return;
}



/* Entry: 102203a98; end: 102203b23;  */

void FUN_102203a98(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102203ad8,0);
  return;
}



/* Entry: 102203b24; end: 102203b3f;  */

void FUN_102203b24(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102203b90,param_1);
  return;
}



/* Entry: 102203b40; end: 102203b8f;  */

void FUN_102203b40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 102203b90; end: 102203bc3;  */

void FUN_102203b90(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102203bc4; end: 102203bcb;  */

undefined8 FUN_102203bc4(void)

{
  return 0x1b;
}



/* Entry: 102203bcc; end: 102203d43;  */

void FUN_102203bcc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104e36e8;
  func_0x000107c613fc(&UNK_1104e36e8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102203d44,puVar1);
  return;
}



/* Entry: 102203d44; end: 102203d4b;  */

void FUN_102203d44(undefined8 *param_1)

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
  func_0x000107c61428(0x112e649b0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e649b0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104e37c0;
  func_0x000107c613fc(&UNK_1104e37c0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102203e18;
  func_0x00010058fa64(0x102203e18,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102203d4c; end: 102203da7;  */

void FUN_102203d4c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e649b0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e649b0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102203da8; end: 102203e1f;  */

undefined ** FUN_102203da8(void)

{
  return &PTR_DAT_112fae000;
}



/* Entry: 102203e20; end: 102203e67; -[SCRemixScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102203e20(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e64a18;
  func_0x000107c61428(param_1 + _DAT_112e64a18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102203e68; end: 102203ebf; -[SCRemixScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102203e68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e64a18;
  func_0x000107c61428(param_1 + _DAT_112e64a18,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102203ec0; end: 102203f07; -[SCRemixScopeGraphBridgeSaberEntryPoint sCCameraUIScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102203ec0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e64a20;
  func_0x000107c61428(param_1 + _DAT_112e64a20,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102203f08; end: 102203f13; -[SCRemixScopeGraphBridgeSaberEntryPoint setSCCameraUIScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102203f08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e64a20;
  func_0x000107c61428(param_1 + _DAT_112e64a20,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102203f14; end: 102203f5b; -[SCRemixScopeGraphBridgeSaberEntryPoint remixScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102203f14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e64a28;
  func_0x000107c61428(param_1 + _DAT_112e64a28,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102203f5c; end: 102203f67; -[SCRemixScopeGraphBridgeSaberEntryPoint setRemixScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102203f5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e64a28;
  func_0x000107c61428(param_1 + _DAT_112e64a28,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102203f68; end: 102203fc7;  */

void FUN_102203f68(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 102203fc8; end: 102204183;  */

/* WARNING: Possible PIC construction at 0x0001022040e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102204104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102204114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102204158: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102204118) */
/* WARNING: Removing unreachable block (ram,0x000102204108) */
/* WARNING: Removing unreachable block (ram,0x0001022040e4) */
/* WARNING: Removing unreachable block (ram,0x00010220415c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102203fc8(void)

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
  func_0x000107c50b40();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c4fdec();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_1022035e4();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_10220385c();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102204184);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112e64940) = lVar5;
      *(long *)(lVar3 + _DAT_112e64948) = unaff_x20;
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



/* Entry: 102204184; end: 1022041ab; -[SCRemixScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102204184(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102203fc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1022041ac; end: 1022041ef; -[SCRemixScopeGraphBridgeSaberEntryPoint end] */

void FUN_1022041ac(undefined8 param_1)

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



/* Entry: 1022041f0; end: 1022043f3;  */

void FUN_1022041f0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef0faf8f0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000016,0x800000010f050710,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffdc) || (param_3 != -0x7ffffffef0f8e8c0)) &&
           (func_0x000107c605b8(0xd000000000000024,0x800000010f071740,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "RemixScopeGraphBridge/SCRemixScopeGraphBridgeSaberEntryPoint.swift",
                              0x42,2,0x34,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1022043f4);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c57cb8();
        goto LAB_10220427c;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c580e8();
  }
LAB_10220427c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1022043f4; end: 10220449f; -[SCRemixScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1022043f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1022041f0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1022044a0; end: 102204517; -[SCRemixScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022044a0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e64a18,0);
  *(undefined8 *)(param_1 + _DAT_112e64a20) = 0;
  *(undefined8 *)(param_1 + _DAT_112e64a28) = 0;
  *(undefined8 *)(param_1 + _DAT_112e64a30) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102204518; end: 10220454b;  */

void FUN_102204518(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10220454c; end: 1022045a3; -[SCRemixScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102204578: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010220457c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10220454c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e64a18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e64a20));
  return;
}



/* Entry: 1022045a4; end: 1022045c3;  */

void FUN_1022045a4(void)

{
  func_0x000107c61168(&PTR_PTR_11282a6f8);
  return;
}



/* Entry: 1022045c4; end: 10220460b; -[SCSCRemixScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022045c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e64a60;
  func_0x000107c61428(param_1 + _DAT_112e64a60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10220460c; end: 102204663; -[SCSCRemixScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10220460c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e64a60;
  func_0x000107c61428(param_1 + _DAT_112e64a60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102204664; end: 10220473b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102204664(undefined8 param_1,long param_2)

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
    FUN_10220383c();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e64978) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10220473c);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e64980);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e64a68);
    *(long **)(unaff_x20 + _DAT_112e64a68) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 10220473c; end: 102204763; -[SCSCRemixScopedServicesSaberEntryPoint begin] */

void FUN_10220473c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102204664();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102204764; end: 1022048db;  */

/* WARNING: Possible PIC construction at 0x0001022047cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102204864: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022047d0) */
/* WARNING: Removing unreachable block (ram,0x000102204868) */
/* WARNING: Removing unreachable block (ram,0x000102204880) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102204764(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e64a68);
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



/* Entry: 1022048dc; end: 1022048e3;  */

void FUN_1022048dc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1022048e4; end: 102204917; -[SCSCRemixScopedServicesSaberEntryPoint end] */

void FUN_1022048e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102204764();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102204918; end: 102204a37;  */

void FUN_102204918(long param_1,long param_2,long param_3)

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
                        "RemixScopeGraphBridge/SCSCRemixScopedServicesSaberEntryPoint.swift",0x42,2,
                        0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102204a38);
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



/* Entry: 102204a38; end: 102204ae3; -[SCSCRemixScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102204a38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102204918(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102204ae4; end: 102204b43; -[SCSCRemixScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102204ae4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e64a60,0);
  *(undefined8 *)(param_1 + _DAT_112e64a68) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102204b44; end: 102204b77;  */

void FUN_102204b44(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102204b78; end: 102204baf; -[SCSCRemixScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102204b78(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e64a60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e64a68));
  return;
}



/* Entry: 102204bb0; end: 102204bcf;  */

void FUN_102204bb0(void)

{
  func_0x000107c61168(&PTR_PTR_11282a7c8);
  return;
}



/* Entry: 102204bd0; end: 102204c8b;  */

void FUN_102204bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1104e38a0;
  func_0x000107c613fc(&UNK_1104e38a0,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  *(undefined8 *)(puVar1 + 0x30) = param_2;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102204c8c,puVar1);
  return;
}



/* Entry: 102204c8c; end: 102204ddf;  */

void FUN_102204c8c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar7 = &puStack_90;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x0001000a0a8c(0);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar6 = &UNK_1104e38e8;
  func_0x000107c613fc(&UNK_1104e38e8,0x38,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar2;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  *(undefined8 *)(puVar6 + 0x30) = uVar8;
  pcStack_70 = FUN_102204e34;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101443eec;
  puStack_78 = &UNK_1104e3900;
  puStack_68 = puVar6;
  func_0x000107c60bc4(&puStack_90);
  puVar6 = puStack_68;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar8);
  func_0x000107c61574(puVar6);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  puVar6 = puVar5;
  func_0x000100a0dc54(puVar5,0xd000000000000020,0x800000010f071810);
  func_0x000107c61170(puVar5);
  *param_1 = puVar6;
  return;
}



/* Entry: 102204de0; end: 102204def;  */

undefined1  [16] FUN_102204de0(void)

{
  return ZEXT816(0x1104e38c8);
}



/* Entry: 102204df0; end: 102204e33;  */

void FUN_102204df0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102204e34; end: 10220503f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102204e34(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x000100083b20(&lStack_58);
  lVar3 = lStack_58;
  lVar2 = lStack_58;
  func_0x000107c444a4();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    func_0x000100083b20(&lStack_58);
    lVar2 = lStack_58;
    lVar4 = lStack_58;
    func_0x000107c5b4b0();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102205040);
      (*pcVar1)();
    }
    lVar2 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar2 != 0) {
      func_0x000100083b20(&lStack_58);
      lVar4 = lStack_58;
      lVar5 = lStack_58;
      func_0x000107c421c8(lStack_58);
      func_0x000107c61180();
      puVar6 = PTR_PTR_1126d1fd0;
      func_0x000107c610f8(PTR_PTR_1126d1fd0);
      func_0x000107c4660c();
      func_0x000107c61170(lVar5);
      func_0x000100083b20(&lStack_58);
      uVar7 = *(undefined8 *)(lStack_58 + _DAT_11307e6a8);
      func_0x000107c61174(uVar7);
      func_0x000107c61170(lStack_58);
      func_0x000100083b20(&uStack_60);
      uVar8 = uStack_60;
      func_0x000107c5b6b8(uStack_60);
      func_0x000107c61180();
      func_0x000107c61170(uStack_60);
      lVar5 = lVar3;
      func_0x000107c4f91c(lVar3);
      func_0x000107c61180();
      puVar9 = PTR_PTR_1126d1fc8;
      func_0x000107c610f8(PTR_PTR_1126d1fc8);
      func_0x000107c47034();
      func_0x000107c61170(lVar5);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(puVar6);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(lVar4);
      return puVar9;
    }
    func_0x000107c61170(lVar3);
  }
  return (undefined *)0x0;
}



/* Entry: 102205040; end: 102205067;  */

void FUN_102205040(long param_1,long param_2)

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



/* Entry: 102205068; end: 102205097;  */

void FUN_102205068(void)

{
  FUN_1022051ec();
  return;
}



/* Entry: 102205098; end: 1022050a3;  */

void FUN_102205098(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1022050a4,param_1);
  return;
}



/* Entry: 1022050a4; end: 1022050d3;  */

void FUN_1022050a4(void)

{
  FUN_1022051ec();
  return;
}



/* Entry: 1022050d4; end: 1022050df;  */

void FUN_1022050d4(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1022050e0,param_1);
  return;
}



/* Entry: 1022050e0; end: 10220510f;  */

void FUN_1022050e0(void)

{
  FUN_1022051ec();
  return;
}



/* Entry: 102205110; end: 10220511b;  */

void FUN_102205110(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10220511c,param_1);
  return;
}



/* Entry: 10220511c; end: 10220514b;  */

void FUN_10220511c(void)

{
  FUN_1022051ec();
  return;
}



/* Entry: 10220514c; end: 102205157;  */

void FUN_10220514c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102205158,param_1);
  return;
}



/* Entry: 102205158; end: 102205187;  */

void FUN_102205158(void)

{
  FUN_1022051ec();
  return;
}



/* Entry: 102205188; end: 102205193;  */

void FUN_102205188(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1022052f4,param_1);
  return;
}



/* Entry: 102205194; end: 1022051eb;  */

void FUN_102205194(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 1022051ec; end: 1022052f3;  */

void FUN_1022051ec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar2 = &puStack_80;
  uVar5 = param_3;
  func_0x0001000a0a8c(0);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101443eec;
  uStack_68 = param_4;
  uStack_60 = param_3;
  uStack_58 = param_2;
  func_0x000107c60bc4(&puStack_80);
  uVar3 = uStack_58;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar3);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  uVar3 = *param_5;
  func_0x000107c5faec(uVar3);
  puVar4 = puVar1;
  func_0x000100a0dc54(puVar1,uVar3,uVar5);
  func_0x000107c61170(puVar1);
  func_0x000107c6142c(uVar5);
  *param_1 = puVar4;
  return;
}



/* Entry: 1022052f4; end: 102205323;  */

void FUN_1022052f4(void)

{
  FUN_1022051ec();
  return;
}



/* Entry: 102205324; end: 102205383;  */

undefined1  [16] FUN_102205324(void)

{
  return ZEXT816(0x1104e39b8);
}



/* Entry: 102205384; end: 1022053cb;  */

undefined8 FUN_102205384(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c615f0(uVar1);
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1022053cc; end: 1022053e7;  */

void FUN_1022053cc(long param_1,long param_2)

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



/* Entry: 1022053e8; end: 1022053ff;  */

void FUN_1022053e8(void)

{
  FUN_102205384();
  return;
}



/* Entry: 102205400; end: 10220543b;  */

void FUN_102205400(long param_1,long param_2)

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



/* Entry: 10220543c; end: 1022054df;  */

void FUN_10220543c(long *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x0001003239ec();
  func_0x000107c613fc();
  uVar2 = uStack_48;
  func_0x000107c5dbd4(uStack_48);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126aa238;
  func_0x000107c610f8();
  func_0x000107c4944c();
  func_0x000107c615e8(uVar2);
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61170(uStack_48);
    *(undefined **)(param_2 + 0x10) = puVar3;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022054e0);
  (*pcVar1)();
}



/* Entry: 1022054e0; end: 1022054e7;  */

void FUN_1022054e0(long *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x0001003239ec();
  func_0x000107c613fc();
  uVar2 = uStack_48;
  func_0x000107c5dbd4(uStack_48);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126aa238;
  func_0x000107c610f8();
  func_0x000107c4944c();
  func_0x000107c615e8(uVar2);
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61170(uStack_48);
    *(undefined **)(unaff_x20 + 0x10) = puVar3;
    *param_1 = unaff_x20;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022054e0);
  (*pcVar1)();
}



/* Entry: 1022054e8; end: 10220556b;  */

long FUN_1022054e8(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar2 = param_1;
  func_0x000107c5dbd4(param_1);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126aa238;
  func_0x000107c610f8();
  func_0x000107c4944c();
  func_0x000107c615e8(uVar2);
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61170(param_1);
    *(undefined **)(unaff_x20 + 0x10) = puVar3;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10220556c);
  (*pcVar1)();
}



/* Entry: 10220556c; end: 10220558f;  */

void FUN_10220556c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102205590; end: 10220559f;  */

undefined1  [16] FUN_102205590(void)

{
  return ZEXT816(0x1104e3b68);
}



/* Entry: 1022055a0; end: 102205643;  */

void FUN_1022055a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1104e3c08;
  func_0x000107c613fc(&UNK_1104e3c08,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_102205644,puVar1);
  return;
}



/* Entry: 102205644; end: 10220571f;  */

void FUN_102205644(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_PTR_1126aa240;
  func_0x000107c61168();
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000107c40a58(puVar1,param_3,uStack_58,uStack_60,uStack_68,uStack_70);
  func_0x000107c61180();
  func_0x000107c61170(uStack_70);
  func_0x000107c61170(uStack_68);
  func_0x000107c61170(uStack_60);
  func_0x000107c61170(uStack_58);
  *param_1 = puVar1;
  return;
}



/* Entry: 102205720; end: 10220572f;  */

undefined1  [16] FUN_102205720(void)

{
  return ZEXT816(0x1104e3c30);
}



/* Entry: 102205730; end: 1022057af;  */

void FUN_102205730(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1104e3cd0;
  func_0x000107c613fc(&UNK_1104e3cd0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1022057b0,puVar1);
  return;
}



/* Entry: 1022057b0; end: 10220599b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022057b0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  func_0x000100083b20(&puStack_80);
  puVar1 = puStack_80;
  func_0x000100083b20(&puStack_80);
  puVar2 = puStack_80;
  func_0x000107c5b6b8();
  func_0x000107c61180();
  func_0x000107c61170(puStack_80);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar4 = &UNK_1104e3d18;
  uVar9 = 0x18;
  func_0x000107c613fc(&UNK_1104e3d18,0x18,7);
  *(undefined **)(puVar4 + 0x10) = puVar2;
  pcStack_60 = FUN_1022059ac;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_10152d4c0;
  puStack_68 = &UNK_1104e3d30;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  puVar4 = puStack_58;
  func_0x000107c61174(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  lVar6 = *(long *)(puVar1 + _DAT_113091ad8);
  func_0x000107c5d984();
  func_0x000107c61180();
  if (lVar6 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar9);
  }
  puVar4 = puVar3;
  func_0x0001003db5f0(puVar3,lVar6);
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  puVar7 = PTR_PTR_1126aa248;
  func_0x000107c610f8();
  func_0x000107c48b9c();
  func_0x0001000a0a8c(0);
  func_0x000107c61174();
  puVar8 = puVar7;
  func_0x000104494b00();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
  *param_1 = puVar8;
  return;
}



/* Entry: 10220599c; end: 1022059ab;  */

undefined1  [16] FUN_10220599c(void)

{
  return ZEXT816(0x1104e3cf8);
}



/* Entry: 1022059ac; end: 1022059c7;  */

void FUN_1022059ac(void)

{
  long unaff_x20;
  
  func_0x000107c5c734(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1022059c8; end: 1022059e3;  */

void FUN_1022059c8(long param_1,long param_2)

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



/* Entry: 1022059e4; end: 102205b03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022059e4(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_112e64b40;
  func_0x000107c61428(unaff_x20 + _DAT_112e64b40,auStack_58,0,0);
  lVar2 = unaff_x20 + lVar2;
  func_0x000107c61618();
  if (lVar2 == 0) {
    if (param_3 != (code *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x000107c466bc();
      (*param_3)();
      func_0x000107c61170(puVar4);
    }
  }
  else {
    ppuVar3 = (undefined **)0x0;
    if (param_3 != (code *)0x0) {
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_100ff4e10;
      puStack_70 = &UNK_1104e3dd8;
      ppuVar3 = &puStack_88;
      pcStack_68 = param_3;
      uStack_60 = param_4;
      func_0x000107c60bc4(ppuVar3);
      uVar1 = uStack_60;
      func_0x000107c6157c(param_4);
      func_0x000107c61574(uVar1);
    }
    func_0x000107c4ab94(lVar2);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 102205b04; end: 102205b1f;  */

void FUN_102205b04(long param_1,long param_2)

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



/* Entry: 102205b20; end: 102205d33; -[_TtC26PageLauncherImplementation17PageLauncherProxy launchWithCommand:uiContainer:completion:] */

/* WARNING: Possible PIC construction at 0x000102205bc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102205bc4) */

void FUN_102205b20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  if (param_5 == 0) {
    puVar1 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = &UNK_1104e3f00;
    func_0x000107c613fc(&UNK_1104e3f00,0x18,7);
    *(long *)(puVar1 + 0x10) = param_5;
    uVar2 = 0x102206794;
  }
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_1022059e4(param_3,param_4,uVar2,puVar1);
  func_0x000100ceab98(uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102205d34; end: 102205df3; -[_TtC26PageLauncherImplementation17PageLauncherProxy launchWithPayload:completion:] */

void FUN_102205d34(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_50 [32];
  
  func_0x000107c60bc4();
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    uVar1 = 0;
  }
  else {
    puVar2 = &UNK_1104e3ed8;
    func_0x000107c613fc(&UNK_1104e3ed8,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    uVar1 = 0x102206780;
  }
  func_0x000102205be4(auStack_50,uVar1,puVar2);
  func_0x000100ceab98(uVar1,puVar2);
  func_0x000107c61170(param_1);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102205df4; end: 102205f9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102205df4(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112e64b40;
  func_0x000107c61428(unaff_x20 + _DAT_112e64b40,auStack_58,0,0);
  puVar3 = (undefined *)(unaff_x20 + lVar1);
  func_0x000107c61618();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c466bc();
    if (param_3 != (code *)0x0) {
      puVar5 = puVar3;
      func_0x000107c61174(puVar3);
      (*param_3)(puVar3);
      func_0x000107c61170(puVar5);
    }
    puVar5 = PTR_PTR_1126ae560;
    func_0x000107c610f8(PTR_PTR_1126ae560);
    func_0x000107c453e4();
    func_0x000107c61174(puVar3);
    puVar6 = puVar3;
    func_0x000107c5ed2c();
    func_0x000107c61170(puVar3);
    func_0x000107c3fef8(puVar5);
    func_0x000107c61170(puVar6);
    puVar6 = puVar5;
    func_0x000107c43bf4(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar5);
  }
  else {
    ppuVar4 = (undefined **)0x0;
    if (param_3 != (code *)0x0) {
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_100ff4e14;
      puStack_70 = &UNK_1104e3e28;
      ppuVar4 = &puStack_88;
      pcStack_68 = param_3;
      uStack_60 = param_4;
      func_0x000107c60bc4(ppuVar4);
      uVar2 = uStack_60;
      func_0x000107c6157c(param_4);
      func_0x000107c61574(uVar2);
    }
    puVar6 = puVar3;
    func_0x000107c4ab44(puVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(puVar3);
  }
  return puVar6;
}



/* Entry: 102205fa0; end: 10220626f; -[_TtC26PageLauncherImplementation17PageLauncherProxy launchForResultWithCommand:uiContainer:completion:] */

void FUN_102205fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  if (param_5 == 0) {
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar2 = &UNK_1104e3eb0;
    func_0x000107c613fc(&UNK_1104e3eb0,0x18,7);
    *(long *)(puVar2 + 0x10) = param_5;
    uVar3 = 0x102206748;
  }
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102205df4(param_3,param_4,uVar3,puVar2);
  func_0x000100ceab98(uVar3,puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102206270; end: 102206337; -[_TtC26PageLauncherImplementation17PageLauncherProxy launchInteractivelyWithPayload:completion:] */

void FUN_102206270(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_50 [32];
  
  puVar1 = auStack_50;
  func_0x000107c60bc4();
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  if (param_4 == 0) {
    puVar3 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar3 = &UNK_1104e3e88;
    func_0x000107c613fc(&UNK_1104e3e88,0x18,7);
    *(long *)(puVar3 + 0x10) = param_4;
    uVar2 = 0x102206740;
  }
  func_0x000102206070(auStack_50,uVar2,puVar3);
  func_0x000100ceab98(uVar2,puVar3);
  func_0x000107c61170(param_1);
  func_0x000100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 102206338; end: 10220644b; -[_TtC26PageLauncherImplementation17PageLauncherProxy launchPageWithComposerPageLaunchPayload:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102206338(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112e64b40;
  func_0x000107c61428(param_1 + _DAT_112e64b40,auStack_58,0,0);
  puVar2 = (undefined *)(param_1 + lVar1);
  func_0x000107c61618();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126b1588;
    func_0x000107c610f8(PTR_PTR_1126b1588);
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_1);
    func_0x000107c453e4(puVar3);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c466bc();
    puVar4 = puVar2;
    func_0x000107c5ed2c();
    func_0x000107c61170(puVar2);
    func_0x000107c43b70(puVar3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar4);
  }
  else {
    puVar3 = puVar2;
    func_0x000107c4ab70();
    func_0x000107c61180();
    func_0x000107c615e8(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10220644c; end: 1022065a3; -[_TtC26PageLauncherImplementation17PageLauncherProxy launchWithPageLaunchCommand:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10220644c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_58 [24];
  
  uVar2 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c5ee30(param_3);
  func_0x000107c61170(uVar2);
  lVar1 = _DAT_112e64b40;
  func_0x000107c61428(param_1 + _DAT_112e64b40,auStack_58,0,0);
  puVar3 = (undefined *)(param_1 + lVar1);
  func_0x000107c61618();
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126b1588;
    func_0x000107c610f8(PTR_PTR_1126b1588);
    func_0x000107c453e4();
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c466bc();
    puVar5 = puVar3;
    func_0x000107c5ed2c();
    func_0x000107c61170(puVar3);
    func_0x000107c43b70(puVar4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar5);
    func_0x00010006c090(param_3,param_2);
  }
  else {
    uVar2 = param_3;
    func_0x000107c5ee20(param_3,param_2);
    puVar4 = puVar3;
    func_0x000107c4ab98(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x00010006c090(param_3,param_2);
    func_0x000107c615e8(puVar3);
    func_0x000107c61170(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1022065a4; end: 1022066fb; -[_TtC26PageLauncherImplementation17PageLauncherProxy launchForResultWithPageLaunchCommand:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022065a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_58 [24];
  
  uVar2 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c5ee30(param_3);
  func_0x000107c61170(uVar2);
  lVar1 = _DAT_112e64b40;
  func_0x000107c61428(param_1 + _DAT_112e64b40,auStack_58,0,0);
  puVar3 = (undefined *)(param_1 + lVar1);
  func_0x000107c61618();
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126b1588;
    func_0x000107c610f8(PTR_PTR_1126b1588);
    func_0x000107c453e4();
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c466bc();
    puVar5 = puVar3;
    func_0x000107c5ed2c();
    func_0x000107c61170(puVar3);
    func_0x000107c43b70(puVar4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar5);
    func_0x00010006c090(param_3,param_2);
  }
  else {
    uVar2 = param_3;
    func_0x000107c5ee20(param_3,param_2);
    puVar4 = puVar3;
    func_0x000107c4ab48(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x00010006c090(param_3,param_2);
    func_0x000107c615e8(puVar3);
    func_0x000107c61170(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1022066fc; end: 10220672f;  */

void FUN_1022066fc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102206730; end: 10220674f; -[_TtC26PageLauncherImplementation17PageLauncherProxy .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102206730(long param_1)

{
  param_1 = param_1 + _DAT_112e64b40;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102206750; end: 102206773;  */

undefined8 FUN_102206750(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102206774; end: 102206797;  */

void FUN_102206774(long param_1,long param_2)

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



/* Entry: 102206798; end: 1022067ff;  */

long FUN_102206798(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c57544();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return unaff_x20;
}



/* Entry: 102206800; end: 102206847;  */

void FUN_102206800(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102206848; end: 102206873;  */

undefined ** FUN_102206848(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 102206874; end: 102206963;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102206874(long param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c613fc();
  *(long *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  lVar1 = _DAT_112e64b40;
  func_0x000107c61428(param_1 + _DAT_112e64b40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_2);
  return unaff_x20;
}



/* Entry: 102206964; end: 10220699b;  */

undefined1  [16] FUN_102206964(void)

{
  return ZEXT816(0);
}


