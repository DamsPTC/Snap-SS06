/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101c5bb44; end: 101c5bb63;  */

void FUN_101c5bb44(void)

{
  func_0x000107c61168(&PTR_PTR_1127fd770);
  return;
}



/* Entry: 101c5bb64; end: 101c5bbaf;  */

void FUN_101c5bb64(undefined8 param_1)

{
  func_0x0001000285a8(0x112e0c6f8,&UNK_10d9e67b8);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101c5bc1c,param_1);
  return;
}



/* Entry: 101c5bbb0; end: 101c5bc1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5bbb0(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_101c5bb44();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e0c700) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 101c5bc1c; end: 101c5bc23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5bc1c(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_101c5bb44();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112e0c700) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 101c5bc24; end: 101c5bc6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5bc24(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e0c700) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101c5bc70; end: 101c5bccf; -[_TtC34ExternalShareSheetScopeGraphBridge42ExternalShareSheetScopeGraphBridgeServices init] */

void FUN_101c5bc70(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ExternalShareSheetScopeGraphBridge.ExternalShareSheetScopeGraphBridgeServices"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c5bc9c);
  (*pcVar1)();
}



/* Entry: 101c5bcd0; end: 101c5bce7; -[_TtC34ExternalShareSheetScopeGraphBridge42ExternalShareSheetScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5bcd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e0c700));
  return;
}



/* Entry: 101c5bce8; end: 101c5be5f;  */

void FUN_101c5bce8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11045e4e8;
  func_0x000107c613fc(&UNK_11045e4e8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101c5be60,puVar1);
  return;
}



/* Entry: 101c5be60; end: 101c5be67;  */

void FUN_101c5be60(undefined8 *param_1)

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
  func_0x000107c61428(0x112e0c6f0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e0c6f0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11045e580;
  func_0x000107c613fc(&UNK_11045e580,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101c5bf14;
  func_0x00010058fa64(0x101c5bf14,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101c5be68; end: 101c5bec3;  */

void FUN_101c5be68(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e0c6f0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e0c6f0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101c5bec4; end: 101c5bf1b;  */

undefined ** FUN_101c5bec4(void)

{
  return &PTR_DAT_112e0c8a0;
}



/* Entry: 101c5bf1c; end: 101c5bf63; -[SCExternalShareSheetScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5bf1c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e0c758;
  func_0x000107c61428(param_1 + _DAT_112e0c758,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101c5bf64; end: 101c5bfbb; -[SCExternalShareSheetScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5bf64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e0c758;
  func_0x000107c61428(param_1 + _DAT_112e0c758,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101c5bfbc; end: 101c5c003; -[SCExternalShareSheetScopeGraphBridgeSaberEntryPoint externalShareSheetScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5bfbc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e0c760;
  func_0x000107c61428(param_1 + _DAT_112e0c760,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101c5c004; end: 101c5c067; -[SCExternalShareSheetScopeGraphBridgeSaberEntryPoint setExternalShareSheetScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5c004(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e0c760;
  func_0x000107c61428(param_1 + _DAT_112e0c760,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101c5c068; end: 101c5c19b;  */

/* WARNING: Possible PIC construction at 0x000101c5c120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c5c13c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c5c158: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c5c124) */
/* WARNING: Removing unreachable block (ram,0x000101c5c140) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5c068(void)

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
  func_0x000107c42cd8();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_101c5b6d0();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_101c5ba74();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101c5c19c);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e0c5b0) = lVar5;
    *(long *)(lVar4 + _DAT_112e0c5b8) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101c5c19c; end: 101c5c1c3; -[SCExternalShareSheetScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101c5c19c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101c5c068();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101c5c1c4; end: 101c5c207; -[SCExternalShareSheetScopeGraphBridgeSaberEntryPoint end] */

void FUN_101c5c1c4(undefined8 param_1)

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



/* Entry: 101c5c208; end: 101c5c39f;  */

void FUN_101c5c208(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffcf) || (param_3 != -0x7ffffffef0ff9ea0)) {
      uVar2 = 0xd000000000000031;
      func_0x000107c605b8(0xd000000000000031,0x800000010f006160,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ExternalShareSheetScopeGraphBridge/SCExternalShareSheetScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x5c,2,0x30,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c5c3a0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c54824();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101c5c3a0; end: 101c5c44b; -[SCExternalShareSheetScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101c5c3a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101c5c208(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101c5c44c; end: 101c5c4b7; -[SCExternalShareSheetScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5c44c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e0c758,0);
  *(undefined8 *)(param_1 + _DAT_112e0c760) = 0;
  *(undefined8 *)(param_1 + _DAT_112e0c768) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101c5c4b8; end: 101c5c4eb;  */

void FUN_101c5c4b8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101c5c4ec; end: 101c5c533; -[SCExternalShareSheetScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101c5c518: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c5c51c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5c4ec(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e0c758);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e0c760));
  return;
}



/* Entry: 101c5c534; end: 101c5c553;  */

void FUN_101c5c534(void)

{
  func_0x000107c61168(&PTR_PTR_1127fd830);
  return;
}



/* Entry: 101c5c554; end: 101c5c55f; -[SCSCExternalShareSheetScopedOffPlatformShareOnMainCameraPreviewServiceSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5c554(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e0c798;
  func_0x000107c61428(param_1 + _DAT_112e0c798,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101c5c560; end: 101c5c56b; -[SCSCExternalShareSheetScopedOffPlatformShareOnMainCameraPreviewServiceSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5c560(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e0c798;
  func_0x000107c61428(param_1 + _DAT_112e0c798,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101c5c56c; end: 101c5c577; -[SCSCExternalShareSheetScopedOffPlatformShareOnMainCameraPreviewServiceSaberServiceProvider externalShareSheetScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5c56c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e0c7a0;
  func_0x000107c61428(param_1 + _DAT_112e0c7a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101c5c578; end: 101c5c5bb;  */

void FUN_101c5c578(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101c5c5bc; end: 101c5c5c7; -[SCSCExternalShareSheetScopedOffPlatformShareOnMainCameraPreviewServiceSaberServiceProvider setExternalShareSheetScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5c5bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e0c7a0;
  func_0x000107c61428(param_1 + _DAT_112e0c7a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101c5c5c8; end: 101c5c61b;  */

void FUN_101c5c5c8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101c5c61c; end: 101c5c82f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101c5c61c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c42cd4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000101c5b780();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112e0c700);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e0c7a8);
      *(long *)(unaff_x20 + _DAT_112e0c7a8) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "ExternalShareSheetScopeGraphBridge/SCSCExternalShareSheetScopedOffPlatformShareOnMainCameraPreviewServiceSaberServiceProvider.swift"
                      ,0x83,2,0x21,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c5c748);
  (*pcVar1)();
}



/* Entry: 101c5c830; end: 101c5c863; -[SCSCExternalShareSheetScopedOffPlatformShareOnMainCameraPreviewServiceSaberServiceProvider provide] */

void FUN_101c5c830(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101c5c61c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101c5c864; end: 101c5c897; -[SCSCExternalShareSheetScopedOffPlatformShareOnMainCameraPreviewServiceSaberServiceProvider __safeProvide] */

void FUN_101c5c864(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101c5c748();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101c5c898; end: 101c5c8db; -[SCSCExternalShareSheetScopedOffPlatformShareOnMainCameraPreviewServiceSaberServiceProvider end] */

void FUN_101c5c898(undefined8 param_1)

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



/* Entry: 101c5c8dc; end: 101c5ca73;  */

void FUN_101c5c8dc(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef0ff9d70)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002a,0x800000010f006290,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ExternalShareSheetScopeGraphBridge/SCSCExternalShareSheetScopedOffPlatformShareOnMainCameraPreviewServiceSaberServiceProvider.swift"
                            ,0x83,2,0x36,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c5ca74);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c54820();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101c5ca74; end: 101c5cb1f; -[SCSCExternalShareSheetScopedOffPlatformShareOnMainCameraPreviewServiceSaberServiceProvider setValue:forIvarName:] */

void FUN_101c5ca74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101c5c8dc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101c5cb20; end: 101c5cb93; -[SCSCExternalShareSheetScopedOffPlatformShareOnMainCameraPreviewServiceSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5cb20(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e0c798,0);
  func_0x000107c61614(param_1 + _DAT_112e0c7a0,0);
  *(undefined8 *)(param_1 + _DAT_112e0c7a8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101c5cb94; end: 101c5cbc7;  */

void FUN_101c5cb94(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101c5cbc8; end: 101c5cc0f; -[SCSCExternalShareSheetScopedOffPlatformShareOnMainCameraPreviewServiceSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5cbc8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e0c798);
  func_0x000107c61610(param_1 + _DAT_112e0c7a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e0c7a8));
  return;
}



/* Entry: 101c5cc10; end: 101c5cc2f;  */

void FUN_101c5cc10(void)

{
  func_0x000107c61168(&PTR_PTR_112e0c7f0);
  return;
}



/* Entry: 101c5cc30; end: 101c5cc77; -[SCSCExternalShareSheetScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5cc30(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e0c858;
  func_0x000107c61428(param_1 + _DAT_112e0c858,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101c5cc78; end: 101c5cccf; -[SCSCExternalShareSheetScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5cc78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e0c858;
  func_0x000107c61428(param_1 + _DAT_112e0c858,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101c5ccd0; end: 101c5cda7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5ccd0(undefined8 param_1,long param_2)

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
    FUN_101c5ba54();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e0c6b8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101c5cda8);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e0c6c0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e0c860);
    *(long **)(unaff_x20 + _DAT_112e0c860) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101c5cda8; end: 101c5cdcf; -[SCSCExternalShareSheetScopedServicesSaberEntryPoint begin] */

void FUN_101c5cda8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101c5ccd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101c5cdd0; end: 101c5cf47;  */

/* WARNING: Possible PIC construction at 0x000101c5ce38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c5ced0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c5ce3c) */
/* WARNING: Removing unreachable block (ram,0x000101c5ced4) */
/* WARNING: Removing unreachable block (ram,0x000101c5ceec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5cdd0(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e0c860);
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



/* Entry: 101c5cf48; end: 101c5cf4f;  */

void FUN_101c5cf48(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101c5cf50; end: 101c5cf83; -[SCSCExternalShareSheetScopedServicesSaberEntryPoint end] */

void FUN_101c5cf50(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101c5cdd0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101c5cf84; end: 101c5d0a3;  */

void FUN_101c5cf84(long param_1,long param_2,long param_3)

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
                        "ExternalShareSheetScopeGraphBridge/SCSCExternalShareSheetScopedServicesSaberEntryPoint.swift"
                        ,0x5c,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101c5d0a4);
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



/* Entry: 101c5d0a4; end: 101c5d14f; -[SCSCExternalShareSheetScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101c5d0a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101c5cf84(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101c5d150; end: 101c5d1af; -[SCSCExternalShareSheetScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5d150(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e0c858,0);
  *(undefined8 *)(param_1 + _DAT_112e0c860) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101c5d1b0; end: 101c5d1e3;  */

void FUN_101c5d1b0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101c5d1e4; end: 101c5d21b; -[SCSCExternalShareSheetScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5d1e4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e0c858);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e0c860));
  return;
}



/* Entry: 101c5d21c; end: 101c5d23b;  */

void FUN_101c5d21c(void)

{
  func_0x000107c61168(&PTR_PTR_1127fd940);
  return;
}



/* Entry: 101c5d23c; end: 101c5d2a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5d23c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001002b0770();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e0c898) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101c5d2a4; end: 101c5d2ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5d2a4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e0c898) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101c5d2f0; end: 101c5d3fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101c5d2f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *apuStack_68 [2];
  undefined8 uStack_58;
  
  puVar1 = PTR_PTR_1126a8cb0;
  func_0x000107c610f8();
  uVar2 = 0;
  FUN_101c5d788(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = uVar2;
  func_0x000100120cb0();
  func_0x000107c5fe08(param_2,uVar2,uVar3);
  func_0x000107c5fc48(param_3,uVar2);
  func_0x000107c48f90();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  apuStack_68[0] = puVar1;
  func_0x00010008a7c8(&uStack_58,apuStack_68);
  func_0x000100083b20(apuStack_68);
  func_0x000107c61574(uStack_58);
  func_0x000107c615e8(apuStack_68[0]);
  return puVar1;
}



/* Entry: 101c5d3fc; end: 101c5d4ef; -[_TtC30SCExternalShareSheetScopeProxy33SCExternalShareSheetScopeServices buildWithUIContainer:shareOptions:shareOptionsOrder:shareSource:delegate:] */

void FUN_101c5d3fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  FUN_101c5d788(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar2 = uVar1;
  func_0x000100120cb0();
  func_0x000107c5fe10(param_4,uVar1,uVar2);
  func_0x000107c5fc54(param_5,uVar1);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_7);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_101c5d2f0(param_3,param_4,param_5,param_6,param_7);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_7);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_4);
  func_0x000107c6142c(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101c5d4f0; end: 101c5d64b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_101c5d4f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *apuStack_88 [2];
  undefined8 uStack_78;
  
  puVar1 = PTR_PTR_1126a8cb0;
  func_0x000107c610f8();
  uVar2 = 0;
  FUN_101c5d788(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = uVar2;
  func_0x000100120cb0();
  func_0x000107c5fe08(param_3,uVar2,uVar3);
  func_0x000107c5fc48(param_4,uVar2);
  uVar3 = 0;
  FUN_101c5d788(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
  func_0x000107c5fc48(param_7,uVar3);
  func_0x000107c494e8(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_7);
  apuStack_88[0] = puVar1;
  func_0x00010008a7c8(&uStack_78,apuStack_88);
  func_0x000100083b20(apuStack_88);
  func_0x000107c61574(uStack_78);
  func_0x000107c615e8(apuStack_88[0]);
  return puVar1;
}



/* Entry: 101c5d64c; end: 101c5d787; -[_TtC30SCExternalShareSheetScopeProxy33SCExternalShareSheetScopeServices buildWithViewContainer:shareOptions:shareOptionsOrder:shareSource:delegate:shareSheetBottomPaddingSpace:dismissDisabledRects:] */

void FUN_101c5d64c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  FUN_101c5d788(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar2 = uVar1;
  func_0x000100120cb0();
  func_0x000107c5fe10(param_5,uVar1,uVar2);
  func_0x000107c5fc54(param_6,uVar1);
  uVar2 = 0;
  FUN_101c5d788(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
  func_0x000107c5fc54(param_9,uVar2);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_8);
  func_0x000107c61174(param_2);
  uVar2 = param_4;
  FUN_101c5d4f0(param_1,param_4,param_5,param_6,param_7,param_8,param_9);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_8);
  func_0x000107c61170(param_2);
  func_0x000107c6142c(param_5);
  func_0x000107c6142c(param_6);
  func_0x000107c6142c(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101c5d788; end: 101c5d7c7;  */

void FUN_101c5d788(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101c5d7c8; end: 101c5d7fb;  */

void FUN_101c5d7c8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101c5d7fc; end: 101c5d82b; -[_TtC30SCExternalShareSheetScopeProxy33SCExternalShareSheetScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5d7fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e0c898));
  return;
}



/* Entry: 101c5d82c; end: 101c5d833; -[_TtC40SimpleSnapchatExperimentServicesProvider46SimpleSnapchatExperimentServicesImplementation setNotificationCenterOnCamera:] */

void FUN_101c5d82c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 101c5d834; end: 101c5d83f; -[_TtC40SimpleSnapchatExperimentServicesProvider46SimpleSnapchatExperimentServicesImplementation notificationCenterOnDiscoverFeed] */

uint FUN_101c5d834(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000107c6157c();
  uVar1 = (uint)uVar2;
  FUN_101c5d840();
  func_0x000107c61574(param_1);
  return uVar1 & 1;
}



/* Entry: 101c5d840; end: 101c5d8b7;  */

uint FUN_101c5d840(void)

{
  undefined8 uVar1;
  uint uVar2;
  long unaff_x20;
  
  uVar2 = (uint)*(byte *)(unaff_x20 + 0x29);
  if (*(byte *)(unaff_x20 + 0x29) == 2) {
    uVar2 = (uint)*(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = 0xd000000000000029;
    func_0x000107c5fadc(0xd000000000000029,0x800000010f0063a0);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar1);
    *(char *)(unaff_x20 + 0x29) = (char)uVar2;
  }
  return uVar2 & 1;
}



/* Entry: 101c5d8b8; end: 101c5d8bf; -[_TtC40SimpleSnapchatExperimentServicesProvider46SimpleSnapchatExperimentServicesImplementation setNotificationCenterOnDiscoverFeed:] */

void FUN_101c5d8b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x29) = param_3;
  return;
}



/* Entry: 101c5d8c0; end: 101c5d8cb; -[_TtC40SimpleSnapchatExperimentServicesProvider46SimpleSnapchatExperimentServicesImplementation notificationCenterOnFriendsFeed] */

uint FUN_101c5d8c0(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000107c6157c();
  uVar1 = (uint)uVar2;
  FUN_101c5d8cc();
  func_0x000107c61574(param_1);
  return uVar1 & 1;
}



/* Entry: 101c5d8cc; end: 101c5d943;  */

uint FUN_101c5d8cc(void)

{
  undefined8 uVar1;
  uint uVar2;
  long unaff_x20;
  
  uVar2 = (uint)*(byte *)(unaff_x20 + 0x2a);
  if (*(byte *)(unaff_x20 + 0x2a) == 2) {
    uVar2 = (uint)*(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010f0063d0);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar1);
    *(char *)(unaff_x20 + 0x2a) = (char)uVar2;
  }
  return uVar2 & 1;
}



/* Entry: 101c5d944; end: 101c5d94b; -[_TtC40SimpleSnapchatExperimentServicesProvider46SimpleSnapchatExperimentServicesImplementation setNotificationCenterOnFriendsFeed:] */

void FUN_101c5d944(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x2a) = param_3;
  return;
}



/* Entry: 101c5d94c; end: 101c5d957; -[_TtC40SimpleSnapchatExperimentServicesProvider46SimpleSnapchatExperimentServicesImplementation notificationCenterBadgeCountEnabled] */

uint FUN_101c5d94c(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000107c6157c();
  uVar1 = (uint)uVar2;
  FUN_101c5d958();
  func_0x000107c61574(param_1);
  return uVar1 & 1;
}



/* Entry: 101c5d958; end: 101c5d9cf;  */

uint FUN_101c5d958(void)

{
  undefined8 uVar1;
  uint uVar2;
  long unaff_x20;
  
  uVar2 = (uint)*(byte *)(unaff_x20 + 0x2b);
  if (*(byte *)(unaff_x20 + 0x2b) == 2) {
    uVar2 = (uint)*(undefined8 *)(unaff_x20 + 0x18);
    uVar1 = 0xd000000000000027;
    func_0x000107c5fadc(0xd000000000000027,0x800000010f006400);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar1);
    *(char *)(unaff_x20 + 0x2b) = (char)uVar2;
  }
  return uVar2 & 1;
}



/* Entry: 101c5d9d0; end: 101c5d9d7; -[_TtC40SimpleSnapchatExperimentServicesProvider46SimpleSnapchatExperimentServicesImplementation setNotificationCenterBadgeCountEnabled:] */

void FUN_101c5d9d0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x2b) = param_3;
  return;
}



/* Entry: 101c5d9d8; end: 101c5da13; -[_TtC40SimpleSnapchatExperimentServicesProvider46SimpleSnapchatExperimentServicesImplementation ffHeaderScrollResetThreshold] */

undefined8 FUN_101c5d9d8(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c6157c();
  FUN_101c5da14();
  func_0x000107c61574(param_2);
  return param_1;
}



/* Entry: 101c5da14; end: 101c5daa7;  */

ulong FUN_101c5da14(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  ulong uVar3;
  
  if (*(char *)(unaff_x20 + 0x30) == '\x01') {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = 0xd000000000000020;
    func_0x000107c5fadc(0xd000000000000020,0x800000010f006430);
    uVar3 = 0x3f333333;
    func_0x000107c436e4(uVar2);
    func_0x000107c61170(uVar1);
    *(int *)(unaff_x20 + 0x2c) = (int)uVar3;
    *(undefined1 *)(unaff_x20 + 0x30) = 0;
  }
  else {
    uVar3 = (ulong)*(uint *)(unaff_x20 + 0x2c);
  }
  return uVar3;
}



/* Entry: 101c5daa8; end: 101c5dab3; -[_TtC40SimpleSnapchatExperimentServicesProvider46SimpleSnapchatExperimentServicesImplementation setFfHeaderScrollResetThreshold:] */

void FUN_101c5daa8(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x2c) = param_1;
  *(undefined1 *)(param_2 + 0x30) = 0;
  return;
}



/* Entry: 101c5dab4; end: 101c5dae7;  */

void FUN_101c5dab4(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c5dae8; end: 101c5daf7;  */

undefined1  [16] FUN_101c5dae8(void)

{
  return ZEXT816(0x11045e7b0);
}



/* Entry: 101c5daf8; end: 101c5e03f;  */

void FUN_101c5daf8(void)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  uint uVar15;
  undefined *puVar16;
  undefined *puVar17;
  long unaff_x20;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puStack_68;
  
  lVar5 = unaff_x20;
  func_0x000107c44a2c();
  if ((int)lVar5 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c4e8d8();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101c5e03c);
      (*pcVar3)();
    }
    lVar6 = lVar5;
    func_0x000107c4e928();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar6 != 0) {
      puStack_68 = (undefined *)0x0;
      uVar7 = 0;
      FUN_101c5e334(0,0x112d55598,&PTR_PTR_1126b25d0);
      func_0x000107c5fc50(lVar6,&puStack_68,uVar7);
      func_0x000107c61170(lVar6);
      puVar16 = puStack_68;
      if (puStack_68 != (undefined *)0x0) {
        puVar17 = (undefined *)((ulong)puStack_68 & 0xffffffffffffff8);
        if ((ulong)puStack_68 >> 0x3e == 0) {
          puVar19 = *(undefined **)(puVar17 + 0x10);
          puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          puVar19 = puStack_68;
          if (-1 < (long)puStack_68) {
            puVar19 = puVar17;
          }
          func_0x000107c60480();
          puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        PTR___swiftEmptyArrayStorage_11034f1c8 = puVar18;
        if (puVar19 != (undefined *)0x0) {
          puVar9 = (undefined *)0x0;
          do {
            while( true ) {
              if (((ulong)puVar16 & 0xc000000000000001) == 0) {
                if (*(undefined **)(puVar17 + 0x10) <= puVar9) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x101c5dcf0);
                  (*pcVar3)();
                }
                puVar8 = *(undefined **)(puVar16 + (long)puVar9 * 8 + 0x20);
                func_0x000107c61174();
              }
              else {
                puVar8 = puVar9;
                FUN_101c5e040(puVar9,puVar16,&PTR_PTR_1126b25d0,0x112d55598);
              }
              puVar10 = puVar9 + 1;
              if (SCARRY8((long)puVar9,1)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101c5dcec);
                (*pcVar3)();
              }
              puVar20 = puVar8;
              func_0x000107c4abb4();
              if ((int)puVar20 == 1) break;
LAB_101c5dbc8:
              func_0x000107c61170(puVar8);
              puVar9 = puVar9 + 1;
              if (puVar10 == puVar19) goto LAB_101c5dd0c;
            }
            puVar20 = puVar8;
            func_0x000107c4c930();
            func_0x000107c61180();
            if (puVar20 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101c5e030);
              (*pcVar3)();
            }
            puVar21 = puVar20;
            func_0x000107c3e240();
            func_0x000107c61170(puVar20);
            if ((int)puVar21 != 5) goto LAB_101c5dbc8;
            puVar9 = puVar18;
            func_0x000107c61558();
            puStack_68 = puVar18;
            if (((ulong)puVar9 & 1) == 0) {
              FUN_101a17c14(0,*(long *)(puVar18 + 0x10) + 1,1);
            }
            uVar2 = *(ulong *)(puStack_68 + 0x10);
            if (*(ulong *)(puStack_68 + 0x18) >> 1 <= uVar2) {
              FUN_101a17c14(1 < *(ulong *)(puStack_68 + 0x18),uVar2 + 1,1);
            }
            *(ulong *)(puStack_68 + 0x10) = uVar2 + 1;
            *(undefined **)(puStack_68 + uVar2 * 8 + 0x20) = puVar8;
            puVar18 = puStack_68;
            puVar9 = puVar10;
          } while (puVar10 != puVar19);
        }
LAB_101c5dd0c:
        func_0x000107c6142c(puVar16);
        uVar15 = (uint)((ulong)puVar18 >> 0x3e) & 1;
        if ((long)puVar18 < 0) {
          uVar15 = 1;
        }
        if (uVar15 == 1) {
          puVar16 = puVar18;
          func_0x000107c60480();
        }
        else {
          puVar16 = *(undefined **)(puVar18 + 0x10);
        }
        if (puVar16 != (undefined *)0x0) {
          func_0x000107c4ca10();
          func_0x000107c61180();
          if (unaff_x20 != 0) {
            puStack_68 = (undefined *)0x0;
            uVar7 = 0;
            FUN_101c5e334(0,0x112d512f8,&PTR_PTR_1126b25d8);
            func_0x000107c5fc50(unaff_x20,&puStack_68,uVar7);
            func_0x000107c61170(unaff_x20);
            puVar16 = puStack_68;
            if (puStack_68 != (undefined *)0x0) {
              if (uVar15 == 0) {
                puVar17 = *(undefined **)(puVar18 + 0x10);
              }
              else {
                puVar17 = puVar18;
                func_0x000107c60480();
              }
              if (puVar17 != (undefined *)0x0) {
                puVar19 = (undefined *)0x0;
                puVar8 = (undefined *)((ulong)puVar16 & 0xffffffffffffff8);
                puVar9 = puVar16;
                if (-1 < (long)puVar16) {
                  puVar9 = puVar8;
                }
                do {
                  if (((ulong)puVar18 & 0xc000000000000001) == 0) {
                    if (*(undefined **)(puVar18 + 0x10) <= puVar19) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x101c5e02c);
                      (*pcVar3)();
                    }
                    puVar10 = *(undefined **)(puVar18 + (long)puVar19 * 8 + 0x20);
                    func_0x000107c61174();
                  }
                  else {
                    puVar10 = puVar19;
                    FUN_101c5e040(puVar19,puVar18,&PTR_PTR_1126b25d0,0x112d55598);
                  }
                  bVar4 = SCARRY8((long)puVar19,1);
                  puVar19 = puVar19 + 1;
                  if (bVar4) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x101c5e028);
                    (*pcVar3)();
                  }
                  puVar20 = puVar10;
                  func_0x000107c4c930();
                  func_0x000107c61180();
                  if (puVar20 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x101c5e040);
                    (*pcVar3)();
                  }
                  puVar21 = puVar20;
                  func_0x000107c44984();
                  func_0x000107c61170(puVar20);
                  if ((int)puVar21 == 0) {
LAB_101c5dfa0:
                    func_0x000107c6142c(puVar16);
                    func_0x000107c61170(puVar10);
                    goto LAB_101c5dffc;
                  }
                  if ((ulong)puVar16 >> 0x3e != 0) {
                    puVar20 = puVar9;
                    func_0x000107c60480();
                    if (puVar20 != (undefined *)0x0) goto LAB_101c5de48;
                    goto LAB_101c5dfa0;
                  }
                  puVar20 = *(undefined **)(puVar8 + 0x10);
                  if (puVar20 == (undefined *)0x0) goto LAB_101c5dfa0;
LAB_101c5de48:
                  puVar21 = (undefined *)0x0;
                  while( true ) {
                    if (((ulong)puVar16 & 0xc000000000000001) == 0) {
                      if (*(undefined **)(puVar8 + 0x10) <= puVar21) {
                    /* WARNING: Does not return */
                        pcVar3 = (code *)SoftwareBreakpoint(1,0x101c5dfd8);
                        (*pcVar3)();
                      }
                      puVar11 = *(undefined **)(puVar16 + (long)puVar21 * 8 + 0x20);
                      func_0x000107c61174();
                    }
                    else {
                      puVar11 = puVar21;
                      FUN_101c5e040(puVar21,puVar16,&PTR_PTR_1126b25d8,0x112d512f8);
                    }
                    puVar1 = puVar21 + 1;
                    if (SCARRY8((long)puVar21,1)) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x101c5dfd4);
                      (*pcVar3)();
                    }
                    puVar12 = puVar11;
                    func_0x000107c4c9b4();
                    puVar13 = puVar10;
                    func_0x000107c4c930();
                    func_0x000107c61180();
                    if (puVar13 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x101c5e034);
                      (*pcVar3)();
                    }
                    puVar14 = puVar13;
                    func_0x000107c4c99c();
                    func_0x000107c61180();
                    func_0x000107c61170(puVar13);
                    if (puVar14 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x101c5e038);
                      (*pcVar3)();
                    }
                    puVar13 = puVar14;
                    func_0x000107c4c9b4();
                    func_0x000107c61170(puVar14);
                    if (puVar12 == puVar13) break;
                    func_0x000107c61170(puVar11);
                    puVar21 = puVar21 + 1;
                    if (puVar1 == puVar20) goto LAB_101c5dfa0;
                  }
                  puVar20 = puVar11;
                  func_0x000107c4ca5c();
                  if ((int)puVar20 == 2) {
                    func_0x000107c61170(puVar10);
                    func_0x000107c61170(puVar11);
                  }
                  else {
                    puVar20 = puVar11;
                    func_0x000107c4ca5c();
                    func_0x000107c61170(puVar10);
                    func_0x000107c61170(puVar11);
                    if ((int)puVar20 != 3) {
                      func_0x000107c61574(puVar18);
                      func_0x000107c6142c(puVar16);
                      return;
                    }
                  }
                } while (puVar19 != puVar17);
              }
              func_0x000107c61574(puVar18);
              func_0x000107c6142c(puVar16);
              return;
            }
          }
        }
LAB_101c5dffc:
        func_0x000107c61574(puVar18);
      }
    }
  }
  return;
}



/* Entry: 101c5e040; end: 101c5e1fb;  */

ulong FUN_101c5e040(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101c5e124);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101c5e128);
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
  FUN_101c5e334(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101c5e1fc);
  (*pcVar2)();
}



/* Entry: 101c5e1fc; end: 101c5e333;  */

undefined1  [16] FUN_101c5e1fc(long *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dStack_50;
  double dStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  dVar6 = (double)param_1[3];
  dVar7 = (double)param_1[4];
  if ((dVar6 <= 0.0) || (dVar7 <= 0.0)) {
    uStack_40 = 0;
    uStack_38 = 0xe000000000000000;
    func_0x000107c602fc(0x1d);
    func_0x000107c5fb78(0x69537265646e6572,0xeb0000000020657a);
    uVar2 = 0;
    dStack_50 = dVar6;
    dStack_48 = dVar7;
    func_0x000100f6e330(0);
    func_0x000107c603d0(&dStack_50,&uStack_40,uVar2,PTR___ss26DefaultStringInterpolationVN_11034ec00
                        ,PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c5fb78(0xd000000000000010,0x800000010f006460);
    goto LAB_101c5e320;
  }
  lVar3 = *param_1;
  uVar1 = (uint)((ulong)param_1[1] >> 0x20);
  uVar5 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if ((param_1[1] & 0xff000000000000U) == 0) goto LAB_101c5e2f8;
    }
    else {
      lVar4 = (long)(int)lVar3;
      lVar3 = lVar3 >> 0x20;
LAB_101c5e2f0:
      if (lVar4 == lVar3) goto LAB_101c5e2f8;
    }
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    if (uVar5 == 2) {
      lVar4 = *(long *)(lVar3 + 0x10);
      lVar3 = *(long *)(lVar3 + 0x18);
      goto LAB_101c5e2f0;
    }
LAB_101c5e2f8:
    uStack_38 = 0x800000010f006480;
    uStack_40 = 0xd000000000000014;
  }
LAB_101c5e320:
  auVar8._8_8_ = uStack_38;
  auVar8._0_8_ = uStack_40;
  return auVar8;
}



/* Entry: 101c5e334; end: 101c5e373;  */

void FUN_101c5e334(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101c5e374; end: 101c5e43f;  */

void FUN_101c5e374(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "onRootEntityLoaded()";
  func_0x0001000c10c0("onRootEntityLoaded()");
  func_0x000107c61180();
  puVar2 = &UNK_11045e8c8;
  func_0x000107c613fc(&UNK_11045e8c8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  uStack_40 = 0x101c5ea3c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11045e980;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 101c5e440; end: 101c5e4bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5e440(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112e0c9c0;
    func_0x000107c61618();
    func_0x000107c61170(param_1);
    if (lVar1 != 0) {
      if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
        (**(code **)(lVar1 + 0x18))();
      }
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 101c5e4c0; end: 101c5e4e7; -[_TtC27SnapPlaybackViewServiceImpl25SnapPlaybackActionHandler onRootEntityLoaded] */

void FUN_101c5e4c0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101c5e374();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101c5e4e8; end: 101c5e68f;  */

void FUN_101c5e4e8(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  pcVar1 = "onSnapDocParseFailed(withReason:)";
  func_0x0001000c10c0("onSnapDocParseFailed(withReason:)");
  func_0x000107c61180();
  puVar2 = &UNK_11045e8c8;
  func_0x000107c613fc(&UNK_11045e8c8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_11045e940;
  func_0x000107c613fc(&UNK_11045e940,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  uStack_50 = 0x101c5ea30;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11045e958;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61434(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 101c5e690; end: 101c5e6eb; -[_TtC27SnapPlaybackViewServiceImpl25SnapPlaybackActionHandler onSnapDocParseFailedWithReason:] */

void FUN_101c5e690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_101c5e4e8(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101c5e6ec; end: 101c5e7f3;  */

void FUN_101c5e6ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  pcVar1 = "onPlayerStateChange(withTimestampMs:playControl:playState:)";
  func_0x0001000c10c0("onPlayerStateChange(withTimestampMs:playControl:playState:)");
  func_0x000107c61180();
  puVar2 = &UNK_11045e8c8;
  func_0x000107c613fc(&UNK_11045e8c8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_11045e8f0;
  func_0x000107c613fc(&UNK_11045e8f0,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined8 *)(puVar3 + 0x28) = param_3;
  pcStack_60 = FUN_101c5ea04;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_11045e908;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 101c5e7f4; end: 101c5e8f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5e7f4(undefined8 param_1,double param_2,double param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_48,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    lVar2 = param_4 + _DAT_112e0c9c0;
    func_0x000107c61618();
    func_0x000107c61170(param_4);
    if (lVar2 != 0) {
      func_0x000107c615e8(lVar2);
      if (param_2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c5e8e8);
        (*pcVar1)();
      }
      if (9.223372036854776e+18 <= param_2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c5e8ec);
        (*pcVar1)();
      }
      if ((0x7fefffffffffffff < (ulong)ABS(param_2)) || (0x7fefffffffffffff < (ulong)ABS(param_3)))
      {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c5e8f0);
        (*pcVar1)();
      }
      if (param_3 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c5e8f4);
        (*pcVar1)();
      }
      if (9.223372036854776e+18 <= param_3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c5e8f8);
        (*pcVar1)();
      }
    }
  }
  return;
}



/* Entry: 101c5e8f8; end: 101c5e947; -[_TtC27SnapPlaybackViewServiceImpl25SnapPlaybackActionHandler onPlayerStateChangeWithTimestampMs:playControl:playState:] */

void FUN_101c5e8f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  FUN_101c5e6ec(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 101c5e948; end: 101c5e99f; -[_TtC27SnapPlaybackViewServiceImpl25SnapPlaybackActionHandler init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5e948(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = param_1 + _DAT_112e0c9c0;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101c5e9a0; end: 101c5e9d3;  */

void FUN_101c5e9a0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101c5e9d4; end: 101c5e9e3; -[_TtC27SnapPlaybackViewServiceImpl25SnapPlaybackActionHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101c5e9d4(long param_1)

{
  param_1 = param_1 + _DAT_112e0c9c0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101c5e9e4; end: 101c5ea03;  */

void FUN_101c5e9e4(void)

{
  func_0x000107c61168(&PTR_PTR_1127fdac0);
  return;
}



/* Entry: 101c5ea04; end: 101c5ea43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c5ea04(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  double dVar4;
  double dVar5;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  dVar4 = *(double *)(unaff_x20 + 0x20);
  dVar5 = *(double *)(unaff_x20 + 0x28);
  func_0x000107c61428(*(undefined8 *)(unaff_x20 + 0x18),lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar2 = lVar3 + _DAT_112e0c9c0;
    func_0x000107c61618();
    func_0x000107c61170(lVar3);
    if (lVar2 != 0) {
      func_0x000107c615e8(lVar2);
      if (dVar4 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c5e8e8);
        (*pcVar1)();
      }
      if (9.223372036854776e+18 <= dVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c5e8ec);
        (*pcVar1)();
      }
      if ((0x7fefffffffffffff < (ulong)ABS(dVar4)) || (0x7fefffffffffffff < (ulong)ABS(dVar5))) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c5e8f0);
        (*pcVar1)();
      }
      if (dVar5 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c5e8f4);
        (*pcVar1)();
      }
      if (9.223372036854776e+18 <= dVar5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101c5e8f8);
        (*pcVar1)();
      }
    }
  }
  return;
}



/* Entry: 101c5ea44; end: 101c5ea67;  */

undefined8 FUN_101c5ea44(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101c5ea68; end: 101c5ea77;  */

void FUN_101c5ea68(long param_1,long param_2)

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



/* Entry: 101c5ea78; end: 101c5eadb;  */

void FUN_101c5ea78(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c5eadc; end: 101c5ed4b;  */

void FUN_101c5eadc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100214a84(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar2 = puVar1;
  func_0x000107c5f9dc();
  func_0x000107c6142c(puVar1);
  pcStack_90 = FUN_101c5ed4c;
  puStack_88 = (undefined *)0x0;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1000f6b44;
  puStack_98 = &UNK_11045e9e8;
  ppuVar3 = &puStack_b0;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c40c2c(uVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(puVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126c49d8;
  func_0x000107c610f8(PTR_PTR_1126c49d8);
  func_0x000107c495d0(uVar5,uVar6);
  puVar2 = PTR_PTR_1126a8cc8;
  func_0x000107c610f8(PTR_PTR_1126a8cc8);
  func_0x000107c482f8();
  func_0x000107c61170(puVar1);
  func_0x000107c56984(puVar2);
  func_0x000107c52168(puVar2);
  puVar1 = &UNK_11045ea20;
  func_0x000107c613fc(&UNK_11045ea20,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  pcStack_90 = (code *)0x101c5ee64;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = (undefined *)0x101c5edb0;
  puStack_98 = &UNK_11045ea38;
  ppuVar3 = &puStack_b0;
  puStack_88 = puVar1;
  func_0x000107c60bc4(ppuVar3);
  puVar1 = puStack_88;
  func_0x000107c6157c(param_4);
  func_0x000107c61574(puVar1);
  func_0x000107c56cc8(puVar2);
  func_0x000107c60bd0(ppuVar3);
  FUN_101c5ee6c();
  puVar1 = PTR_PTR_1126a8cd0;
  func_0x000107c610f8();
  func_0x000107c49520();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170();
  func_0x000101c5eabc();
  func_0x000107c613fc();
  *(undefined **)(param_1 + 0x10) = puVar1;
  return;
}



/* Entry: 101c5ed4c; end: 101c5ed4f;  */

void FUN_101c5ed4c(void)

{
  return;
}



/* Entry: 101c5ed50; end: 101c5edfb;  */

void FUN_101c5ed50(long param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000101c5ea9c();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = param_1;
  func_0x000107c61174(param_1);
  (*param_2)(lVar1,&PTR_DAT_11045e9d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(lVar1);
  return;
}


