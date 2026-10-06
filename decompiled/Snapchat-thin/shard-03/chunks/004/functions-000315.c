/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1028fc6b4; end: 1028fc6bf; -[SCSCScanMetadataServicesSaberEntryPoint setScanScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fc6b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ecc1c8;
  func_0x000107c61428(param_1 + _DAT_112ecc1c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1028fc6c0; end: 1028fc713;  */

void FUN_1028fc6c0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1028fc714; end: 1028fc75b; -[SCSCScanMetadataServicesSaberEntryPoint sCScanMetadataServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fc714(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ecc1d0;
  func_0x000107c61428(param_1 + _DAT_112ecc1d0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1028fc75c; end: 1028fc7bf; -[SCSCScanMetadataServicesSaberEntryPoint setSCScanMetadataServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fc75c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ecc1d0;
  func_0x000107c61428(param_1 + _DAT_112ecc1d0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1028fc7c0; end: 1028fc943;  */

/* WARNING: Possible PIC construction at 0x0001028fc8c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028fc8d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028fc8ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028fc8c4) */
/* WARNING: Removing unreachable block (ram,0x0001028fc8d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fc7c0(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c51888();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c51250();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_1028f9f4c();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112ecc088);
        *(undefined8 *)(lVar2 + _DAT_112ecbeb0) = uVar6;
        *(long *)(lVar2 + _DAT_112ecbeb8) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112ecbeb8);
        func_0x000100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1028fc944; end: 1028fc96b; -[SCSCScanMetadataServicesSaberEntryPoint begin] */

void FUN_1028fc944(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1028fc7c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028fc96c; end: 1028fc9af; -[SCSCScanMetadataServicesSaberEntryPoint end] */

void FUN_1028fc96c(undefined8 param_1)

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



/* Entry: 1028fc9b0; end: 1028fcbb3;  */

void FUN_1028fc9b0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef0f35430)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001c,0x800000010f0cabd0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd00000000000001d;
        if (((param_2 != -0x2fffffffffffffe3) || (param_3 != -0x7ffffffef0f353a0)) &&
           (func_0x000107c605b8(0xd00000000000001d,0x800000010f0cac60,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "ScanScopeGraphBridge/SCSCScanMetadataServicesSaberEntryPoint.swift",
                              0x42,2,0x4c,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1028fcbb4);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c587f8();
        goto LAB_1028fca3c;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58c1c();
  }
LAB_1028fca3c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1028fcbb4; end: 1028fcc5f; -[SCSCScanMetadataServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1028fcbb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1028fc9b0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1028fcc60; end: 1028fccdf; -[SCSCScanMetadataServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fcc60(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ecc1c0,0);
  func_0x000107c61614(param_1 + _DAT_112ecc1c8,0);
  *(undefined8 *)(param_1 + _DAT_112ecc1d0) = 0;
  *(undefined8 *)(param_1 + _DAT_112ecc1d8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028fcce0; end: 1028fcd13;  */

void FUN_1028fcce0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028fcd14; end: 1028fcd6b; -[SCSCScanMetadataServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028fcd50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028fcd54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fcd14(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ecc1c0);
  func_0x000107c61610(param_1 + _DAT_112ecc1c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecc1d0));
  return;
}



/* Entry: 1028fcd6c; end: 1028fcd8b;  */

void FUN_1028fcd6c(void)

{
  func_0x000107c61168(&PTR_PTR_11286e9a8);
  return;
}



/* Entry: 1028fcd8c; end: 1028fcd97; -[SCSCScanViewModelLoggingServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fcd8c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ecc208;
  func_0x000107c61428(param_1 + _DAT_112ecc208,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028fcd98; end: 1028fcda3; -[SCSCScanViewModelLoggingServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fcd98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ecc208;
  func_0x000107c61428(param_1 + _DAT_112ecc208,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1028fcda4; end: 1028fcdaf; -[SCSCScanViewModelLoggingServicesSaberEntryPoint scanScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fcda4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ecc210;
  func_0x000107c61428(param_1 + _DAT_112ecc210,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028fcdb0; end: 1028fcdf3;  */

void FUN_1028fcdb0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1028fcdf4; end: 1028fcdff; -[SCSCScanViewModelLoggingServicesSaberEntryPoint setScanScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fcdf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ecc210;
  func_0x000107c61428(param_1 + _DAT_112ecc210,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1028fce00; end: 1028fce53;  */

void FUN_1028fce00(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1028fce54; end: 1028fce9b; -[SCSCScanViewModelLoggingServicesSaberEntryPoint sCScanViewModelLoggingServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fce54(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ecc218;
  func_0x000107c61428(param_1 + _DAT_112ecc218,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1028fce9c; end: 1028fceff; -[SCSCScanViewModelLoggingServicesSaberEntryPoint setSCScanViewModelLoggingServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fce9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ecc218;
  func_0x000107c61428(param_1 + _DAT_112ecc218,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1028fcf00; end: 1028fd083;  */

/* WARNING: Possible PIC construction at 0x0001028fd000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028fd010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028fd02c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028fd004) */
/* WARNING: Removing unreachable block (ram,0x0001028fd014) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fcf00(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c51888();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c51268();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_1028fa104();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112ecc0a8);
        *(undefined8 *)(lVar2 + _DAT_112ecbee8) = uVar6;
        *(long *)(lVar2 + _DAT_112ecbef0) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112ecbef0);
        func_0x000100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1028fd084; end: 1028fd0ab; -[SCSCScanViewModelLoggingServicesSaberEntryPoint begin] */

void FUN_1028fd084(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1028fcf00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028fd0ac; end: 1028fd0ef; -[SCSCScanViewModelLoggingServicesSaberEntryPoint end] */

void FUN_1028fd0ac(undefined8 param_1)

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



/* Entry: 1028fd0f0; end: 1028fd2f3;  */

void FUN_1028fd0f0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef0f35430)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001c,0x800000010f0cabd0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000025;
        if (((param_2 != -0x2fffffffffffffdb) || (param_3 != -0x7ffffffef0f35330)) &&
           (func_0x000107c605b8(0xd000000000000025,0x800000010f0cacd0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "ScanScopeGraphBridge/SCSCScanViewModelLoggingServicesSaberEntryPoint.swift"
                              ,0x4a,2,0x4c,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1028fd2f4);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58810();
        goto LAB_1028fd17c;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58c1c();
  }
LAB_1028fd17c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1028fd2f4; end: 1028fd39f; -[SCSCScanViewModelLoggingServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1028fd2f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1028fd0f0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1028fd3a0; end: 1028fd41f; -[SCSCScanViewModelLoggingServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fd3a0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ecc208,0);
  func_0x000107c61614(param_1 + _DAT_112ecc210,0);
  *(undefined8 *)(param_1 + _DAT_112ecc218) = 0;
  *(undefined8 *)(param_1 + _DAT_112ecc220) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028fd420; end: 1028fd453;  */

void FUN_1028fd420(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028fd454; end: 1028fd4ab; -[SCSCScanViewModelLoggingServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028fd490: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028fd494) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fd454(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ecc208);
  func_0x000107c61610(param_1 + _DAT_112ecc210);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecc218));
  return;
}



/* Entry: 1028fd4ac; end: 1028fd4cb;  */

void FUN_1028fd4ac(void)

{
  func_0x000107c61168(&PTR_PTR_11286ea78);
  return;
}



/* Entry: 1028fd4cc; end: 1028fd4d7; -[SCSCSnapcodeActionHandlerServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fd4cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ecc250;
  func_0x000107c61428(param_1 + _DAT_112ecc250,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028fd4d8; end: 1028fd4e3; -[SCSCSnapcodeActionHandlerServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fd4d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ecc250;
  func_0x000107c61428(param_1 + _DAT_112ecc250,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1028fd4e4; end: 1028fd4ef; -[SCSCSnapcodeActionHandlerServicesSaberEntryPoint scanScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fd4e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ecc258;
  func_0x000107c61428(param_1 + _DAT_112ecc258,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028fd4f0; end: 1028fd533;  */

void FUN_1028fd4f0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1028fd534; end: 1028fd53f; -[SCSCSnapcodeActionHandlerServicesSaberEntryPoint setScanScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fd534(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ecc258;
  func_0x000107c61428(param_1 + _DAT_112ecc258,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1028fd540; end: 1028fd593;  */

void FUN_1028fd540(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1028fd594; end: 1028fd5db; -[SCSCSnapcodeActionHandlerServicesSaberEntryPoint sCSnapcodeActionHandlerServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fd594(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ecc260;
  func_0x000107c61428(param_1 + _DAT_112ecc260,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1028fd5dc; end: 1028fd63f; -[SCSCSnapcodeActionHandlerServicesSaberEntryPoint setSCSnapcodeActionHandlerServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fd5dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ecc260;
  func_0x000107c61428(param_1 + _DAT_112ecc260,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1028fd640; end: 1028fd7c3;  */

/* WARNING: Possible PIC construction at 0x0001028fd740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028fd750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028fd76c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028fd744) */
/* WARNING: Removing unreachable block (ram,0x0001028fd754) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fd640(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c51888();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c51318();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_1028fa2bc();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112ecc0b0);
        *(undefined8 *)(lVar2 + _DAT_112ecbf20) = uVar6;
        *(long *)(lVar2 + _DAT_112ecbf28) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112ecbf28);
        func_0x000100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1028fd7c4; end: 1028fd7eb; -[SCSCSnapcodeActionHandlerServicesSaberEntryPoint begin] */

void FUN_1028fd7c4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1028fd640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028fd7ec; end: 1028fd82f; -[SCSCSnapcodeActionHandlerServicesSaberEntryPoint end] */

void FUN_1028fd7ec(undefined8 param_1)

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



/* Entry: 1028fd830; end: 1028fda33;  */

void FUN_1028fd830(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef0f35430)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001c,0x800000010f0cabd0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffda) || (param_3 != -0x7ffffffef0f352b0)) &&
           (func_0x000107c605b8(0xd000000000000026,0x800000010f0cad50,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "ScanScopeGraphBridge/SCSCSnapcodeActionHandlerServicesSaberEntryPoint.swift"
                              ,0x4b,2,0x4c,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1028fda34);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c588c0();
        goto LAB_1028fd8bc;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58c1c();
  }
LAB_1028fd8bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1028fda34; end: 1028fdadf; -[SCSCSnapcodeActionHandlerServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1028fda34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1028fd830(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1028fdae0; end: 1028fdb5f; -[SCSCSnapcodeActionHandlerServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fdae0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ecc250,0);
  func_0x000107c61614(param_1 + _DAT_112ecc258,0);
  *(undefined8 *)(param_1 + _DAT_112ecc260) = 0;
  *(undefined8 *)(param_1 + _DAT_112ecc268) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028fdb60; end: 1028fdb93;  */

void FUN_1028fdb60(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028fdb94; end: 1028fdbeb; -[SCSCSnapcodeActionHandlerServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028fdbd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028fdbd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fdb94(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ecc250);
  func_0x000107c61610(param_1 + _DAT_112ecc258);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecc260));
  return;
}



/* Entry: 1028fdbec; end: 1028fdc0b;  */

void FUN_1028fdbec(void)

{
  func_0x000107c61168(&PTR_PTR_11286eb48);
  return;
}



/* Entry: 1028fdc0c; end: 1028fdc17; -[SCSCScanResultsScopeServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fdc0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ecc298;
  func_0x000107c61428(param_1 + _DAT_112ecc298,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028fdc18; end: 1028fdc23; -[SCSCScanResultsScopeServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fdc18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ecc298;
  func_0x000107c61428(param_1 + _DAT_112ecc298,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1028fdc24; end: 1028fdc2f; -[SCSCScanResultsScopeServicesSaberServiceProvider scanScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fdc24(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ecc2a0;
  func_0x000107c61428(param_1 + _DAT_112ecc2a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028fdc30; end: 1028fdc73;  */

void FUN_1028fdc30(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1028fdc74; end: 1028fdc7f; -[SCSCScanResultsScopeServicesSaberServiceProvider setScanScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fdc74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ecc2a0;
  func_0x000107c61428(param_1 + _DAT_112ecc2a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1028fdc80; end: 1028fdcd3;  */

void FUN_1028fdc80(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1028fdcd4; end: 1028fdee7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1028fdcd4(void)

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
    func_0x000107c51888();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001028fa36c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112ecc0a0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ecc2a8);
      *(long *)(unaff_x20 + _DAT_112ecc2a8) = lVar4;
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
                      "ScanScopeGraphBridge/SCSCScanResultsScopeServicesSaberServiceProvider.swift",
                      0x4b,2,0x39,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028fde00);
  (*pcVar1)();
}



/* Entry: 1028fdee8; end: 1028fdf1b; -[SCSCScanResultsScopeServicesSaberServiceProvider provide] */

void FUN_1028fdee8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1028fdcd4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1028fdf1c; end: 1028fdf4f; -[SCSCScanResultsScopeServicesSaberServiceProvider __safeProvide] */

void FUN_1028fdf1c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001028fde00();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1028fdf50; end: 1028fdf93; -[SCSCScanResultsScopeServicesSaberServiceProvider end] */

void FUN_1028fdf50(undefined8 param_1)

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



/* Entry: 1028fdf94; end: 1028fe12b;  */

void FUN_1028fdf94(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef0f35430)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001c,0x800000010f0cabd0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ScanScopeGraphBridge/SCSCScanResultsScopeServicesSaberServiceProvider.swift"
                            ,0x4b,2,0x4e,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1028fe12c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58c1c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1028fe12c; end: 1028fe1d7; -[SCSCScanResultsScopeServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1028fe12c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1028fdf94(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1028fe1d8; end: 1028fe24b; -[SCSCScanResultsScopeServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fe1d8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ecc298,0);
  func_0x000107c61614(param_1 + _DAT_112ecc2a0,0);
  *(undefined8 *)(param_1 + _DAT_112ecc2a8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028fe24c; end: 1028fe27f;  */

void FUN_1028fe24c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028fe280; end: 1028fe2c7; -[SCSCScanResultsScopeServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fe280(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ecc298);
  func_0x000107c61610(param_1 + _DAT_112ecc2a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ecc2a8));
  return;
}



/* Entry: 1028fe2c8; end: 1028fe2e7;  */

void FUN_1028fe2c8(void)

{
  func_0x000107c61168(&PTR_PTR_112ecc2f0);
  return;
}



/* Entry: 1028fe2e8; end: 1028fe32f; -[SCSCScanScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fe2e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ecc358;
  func_0x000107c61428(param_1 + _DAT_112ecc358,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028fe330; end: 1028fe387; -[SCSCScanScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fe330(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ecc358;
  func_0x000107c61428(param_1 + _DAT_112ecc358,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1028fe388; end: 1028fe45f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fe388(undefined8 param_1,long param_2)

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
    FUN_1028fa640();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ecc028) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1028fe460);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ecc030);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ecc360);
    *(long **)(unaff_x20 + _DAT_112ecc360) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1028fe460; end: 1028fe487; -[SCSCScanScopedServicesSaberEntryPoint begin] */

void FUN_1028fe460(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1028fe388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028fe488; end: 1028fe5ff;  */

/* WARNING: Possible PIC construction at 0x0001028fe4f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028fe588: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028fe4f4) */
/* WARNING: Removing unreachable block (ram,0x0001028fe58c) */
/* WARNING: Removing unreachable block (ram,0x0001028fe5a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fe488(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ecc360);
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



/* Entry: 1028fe600; end: 1028fe607;  */

void FUN_1028fe600(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1028fe608; end: 1028fe63b; -[SCSCScanScopedServicesSaberEntryPoint end] */

void FUN_1028fe608(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1028fe488();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1028fe63c; end: 1028fe75b;  */

void FUN_1028fe63c(long param_1,long param_2,long param_3)

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
                        "ScanScopeGraphBridge/SCSCScanScopedServicesSaberEntryPoint.swift",0x40,2,
                        0x44,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1028fe75c);
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



/* Entry: 1028fe75c; end: 1028fe807; -[SCSCScanScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1028fe75c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1028fe63c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1028fe808; end: 1028fe867; -[SCSCScanScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fe808(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ecc358,0);
  *(undefined8 *)(param_1 + _DAT_112ecc360) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028fe868; end: 1028fe89b;  */

void FUN_1028fe868(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028fe89c; end: 1028fe8d3; -[SCSCScanScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fe89c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ecc358);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecc360));
  return;
}



/* Entry: 1028fe8d4; end: 1028fe8f3;  */

void FUN_1028fe8d4(void)

{
  func_0x000107c61168(&PTR_PTR_11286ec60);
  return;
}



/* Entry: 1028fe8f4; end: 1028fe95f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fe8f4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1028fece8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ecc398) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1028fe960; end: 1028fe9cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fe960(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecc398) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028fe9cc; end: 1028fea2b; -[_TtC39ScanResultsScopedFactoryServiceProvider27SCScanResultsScopedServices init] */

void FUN_1028fe9cc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ScanResultsScopedFactoryServiceProvider.SCScanResultsScopedServices",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028fe9f8);
  (*pcVar1)();
}



/* Entry: 1028fea2c; end: 1028fea3b; -[_TtC39ScanResultsScopedFactoryServiceProvider27SCScanResultsScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fea2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ecc398));
  return;
}



/* Entry: 1028fea3c; end: 1028feaa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028fea3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105699f8;
  func_0x000107c613fc(&UNK_1105699f8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1028fedc4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1028feaa8; end: 1028feb43;  */

void FUN_1028feaa8(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110569908;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110569908;
  return;
}



/* Entry: 1028feb44; end: 1028feb7b;  */

void FUN_1028feb44(long *param_1)

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



/* Entry: 1028feb7c; end: 1028feb83;  */

undefined8 FUN_1028feb7c(void)

{
  return 0x1b;
}



/* Entry: 1028feb84; end: 1028fecb7;  */

void FUN_1028feb84(undefined8 *param_1)

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
  puVar1 = &UNK_110569a20;
  func_0x000107c613fc(&UNK_110569a20,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1028fed9c;
  func_0x00010058fa64(FUN_1028fed9c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1028fecb8; end: 1028fece7;  */

undefined ** FUN_1028fecb8(void)

{
  return &PTR_DAT_112ecc6d0;
}



/* Entry: 1028fece8; end: 1028fed07;  */

void FUN_1028fece8(void)

{
  func_0x000107c61168(&PTR_PTR_11286ed20);
  return;
}



/* Entry: 1028fed08; end: 1028fed57;  */

undefined1  [16] FUN_1028fed08(void)

{
  return ZEXT816(0x110569958);
}



/* Entry: 1028fed58; end: 1028fed9b;  */

void FUN_1028fed58(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ecc400 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ab898;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ecc400 = puVar1;
  return;
}



/* Entry: 1028fed9c; end: 1028fedc3;  */

void FUN_1028fed9c(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1028fedc4; end: 1028fedc7;  */

void FUN_1028fedc4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1028fedc8; end: 1028fef37;  */

void FUN_1028fedc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ecc408,&UNK_10daf0430);
  puVar1 = &UNK_110569a60;
  func_0x000107c613fc(&UNK_110569a60,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_1028fef38,puVar1);
  return;
}



/* Entry: 1028fef38; end: 1028fef53;  */

/* WARNING: Possible PIC construction at 0x0001028fef0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028fef1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028fef10) */
/* WARNING: Removing unreachable block (ram,0x0001028fef20) */

void FUN_1028fef38(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar4 = &UNK_110569aa8;
  func_0x000107c613fc(&UNK_110569aa8,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  uVar5 = 0x112ecc410;
  func_0x0001000285a8(0x112ecc410,&UNK_10daf0470);
  func_0x000107c613fc();
  pcVar6 = FUN_1028ff3c0;
  func_0x0001000841fc(FUN_1028ff3c0,puVar4,uVar5);
  func_0x000100084214(&UNK_10daf0440,0x29,2);
  *param_1 = pcVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1028fef54; end: 1028ff3bf;  */

void FUN_1028fef54(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 *puVar6;
  char *pcVar7;
  code *pcVar8;
  char *pcVar9;
  undefined *puVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_68;
  
  uVar14 = *param_2;
  func_0x0001000285a8(0x112ecc418,&UNK_10daf0478);
  puVar1 = &uStack_68;
  uStack_68 = uVar14;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x000102900c7c();
  pcVar3 = "SCUnifiedPublicProfilesPresenterScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCUnifiedPublicProfilesPresenterScopeExposerSubjectServiceProvider",0x42,2);
  FUN_102900cd8();
  pcVar4 = "WebBrowsingScopeExposerSubjectServiceProvider";
  func_0x000100082720("WebBrowsingScopeExposerSubjectServiceProvider",0x2d,2);
  func_0x000102900d68();
  func_0x000100082720("SCScanResultsViewModelProviderScopeExposerSubjectServiceProvider",0x40,2);
  pcVar5 = pcVar4;
  FUN_102900a18(pcVar4,puVar2,pcVar3);
  func_0x000100082720("ScanResultsScopeGraphBridgeServicesServiceProvider",0x32,2);
  puVar6 = puVar2;
  FUN_102900cbc();
  func_0x000100082720("SCUnifiedPublicProfilesPresenterScopeExposerObservableServiceProvider",0x45,2
                     );
  pcVar7 = pcVar3;
  FUN_102900d18();
  func_0x000100082720("WebBrowsingScopeExposerObservableServiceProvider",0x30,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar8 = FUN_1028feb44;
  func_0x0001000823a8(FUN_1028feb44,0);
  func_0x000100082720("SCScanResultsScopedServicesCleanupRelayServiceProvider",0x36,2);
  pcVar9 = pcVar4;
  FUN_102900df8();
  func_0x000100082720("SCScanResultsViewModelProviderScopeExposerObservableServiceProvider",0x43,2);
  func_0x0001000285a8(0x112ecc420,&UNK_10daf0490);
  puVar10 = &UNK_110569ad0;
  func_0x000107c613fc(&UNK_110569ad0,0x50,7);
  *(undefined8 **)(puVar10 + 0x10) = puVar1;
  *(undefined8 *)(puVar10 + 0x18) = param_3;
  *(undefined8 *)(puVar10 + 0x20) = param_4;
  *(undefined8 *)(puVar10 + 0x28) = param_5;
  *(undefined8 *)(puVar10 + 0x30) = param_6;
  *(char **)(puVar10 + 0x38) = pcVar7;
  *(char **)(puVar10 + 0x40) = pcVar9;
  *(undefined8 **)(puVar10 + 0x48) = puVar6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(pcVar7);
  func_0x000107c6157c(pcVar9);
  func_0x000107c6157c(puVar6);
  uVar14 = 0x1028ff3cc;
  func_0x0001000823a8(0x1028ff3cc,puVar10);
  func_0x000100082720("SCScanResultsEntryPointWrapperServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112ecc428,&UNK_10daf0480);
  puVar10 = &UNK_110569af8;
  func_0x000107c613fc(&UNK_110569af8,0x30,7);
  *(undefined8 *)(puVar10 + 0x10) = uVar14;
  *(undefined8 **)(puVar10 + 0x18) = puVar1;
  *(code **)(puVar10 + 0x20) = pcVar8;
  *(char **)(puVar10 + 0x28) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(pcVar8);
  func_0x000107c6157c(pcVar5);
  pcVar11 = FUN_1028ff41c;
  func_0x0001000823a8(FUN_1028ff41c,puVar10);
  func_0x000100082720("SCScanResultsScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112ecc3a0,&UNK_10daf0240);
  func_0x000107c6157c(pcVar11);
  uVar12 = 0x1028ff428;
  func_0x0001000823a8(0x1028ff428,pcVar11);
  func_0x000100082720("SCScanResultsScopeInitializationServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112ecc390,&UNK_10daf0230);
  func_0x000107c6157c(uVar12);
  uVar13 = 0x1028ff430;
  func_0x0001000823a8(0x1028ff430,uVar12);
  func_0x000100082720("SCScanResultsScopedServicesServiceProvider",0x2a,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar10 = &UNK_110569b20;
  func_0x000107c613fc(&UNK_110569b20,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = uVar13;
  *(code **)(puVar10 + 0x18) = pcVar8;
  func_0x000107c6157c(pcVar8);
  uVar13 = 0x1028ff438;
  func_0x0001000823a8(0x1028ff438,puVar10);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(uVar14);
  func_0x000107c61574(pcVar11);
  func_0x000107c61574(uVar12);
  func_0x000100082720("SCScanResultsScopeEntryPointProvider",0x24,2);
  *param_1 = uVar13;
  return;
}



/* Entry: 1028ff3c0; end: 1028ff3df;  */

void FUN_1028ff3c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 *puVar7;
  char *pcVar8;
  code *pcVar9;
  char *pcVar10;
  undefined *puVar11;
  undefined8 uVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long unaff_x20;
  undefined8 uStack_68;
  
  uVar12 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar16 = *param_2;
  func_0x0001000285a8(0x112ecc418,&UNK_10daf0478);
  puVar2 = &uStack_68;
  uStack_68 = uVar16;
  func_0x0001000838ec();
  puVar3 = puVar2;
  func_0x000102900c7c();
  pcVar4 = "SCUnifiedPublicProfilesPresenterScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCUnifiedPublicProfilesPresenterScopeExposerSubjectServiceProvider",0x42,2);
  FUN_102900cd8();
  pcVar5 = "WebBrowsingScopeExposerSubjectServiceProvider";
  func_0x000100082720("WebBrowsingScopeExposerSubjectServiceProvider",0x2d,2);
  func_0x000102900d68();
  func_0x000100082720("SCScanResultsViewModelProviderScopeExposerSubjectServiceProvider",0x40,2);
  pcVar6 = pcVar5;
  FUN_102900a18(pcVar5,puVar3,pcVar4);
  func_0x000100082720("ScanResultsScopeGraphBridgeServicesServiceProvider",0x32,2);
  puVar7 = puVar3;
  FUN_102900cbc();
  func_0x000100082720("SCUnifiedPublicProfilesPresenterScopeExposerObservableServiceProvider",0x45,2
                     );
  pcVar8 = pcVar4;
  FUN_102900d18();
  func_0x000100082720("WebBrowsingScopeExposerObservableServiceProvider",0x30,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar9 = FUN_1028feb44;
  func_0x0001000823a8(FUN_1028feb44,0);
  func_0x000100082720("SCScanResultsScopedServicesCleanupRelayServiceProvider",0x36,2);
  pcVar10 = pcVar5;
  FUN_102900df8();
  func_0x000100082720("SCScanResultsViewModelProviderScopeExposerObservableServiceProvider",0x43,2);
  func_0x0001000285a8(0x112ecc420,&UNK_10daf0490);
  puVar11 = &UNK_110569ad0;
  func_0x000107c613fc(&UNK_110569ad0,0x50,7);
  *(undefined8 **)(puVar11 + 0x10) = puVar2;
  *(undefined8 *)(puVar11 + 0x18) = uVar12;
  *(undefined8 *)(puVar11 + 0x20) = uVar15;
  *(undefined8 *)(puVar11 + 0x28) = uVar14;
  *(undefined8 *)(puVar11 + 0x30) = uVar1;
  *(char **)(puVar11 + 0x38) = pcVar8;
  *(char **)(puVar11 + 0x40) = pcVar10;
  *(undefined8 **)(puVar11 + 0x48) = puVar7;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(pcVar8);
  func_0x000107c6157c(pcVar10);
  func_0x000107c6157c(puVar7);
  uVar12 = 0x1028ff3cc;
  func_0x0001000823a8(0x1028ff3cc,puVar11);
  func_0x000100082720("SCScanResultsEntryPointWrapperServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112ecc428,&UNK_10daf0480);
  puVar11 = &UNK_110569af8;
  func_0x000107c613fc(&UNK_110569af8,0x30,7);
  *(undefined8 *)(puVar11 + 0x10) = uVar12;
  *(undefined8 **)(puVar11 + 0x18) = puVar2;
  *(code **)(puVar11 + 0x20) = pcVar9;
  *(char **)(puVar11 + 0x28) = pcVar6;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(pcVar9);
  func_0x000107c6157c(pcVar6);
  pcVar13 = FUN_1028ff41c;
  func_0x0001000823a8(FUN_1028ff41c,puVar11);
  func_0x000100082720("SCScanResultsScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112ecc3a0,&UNK_10daf0240);
  func_0x000107c6157c(pcVar13);
  uVar14 = 0x1028ff428;
  func_0x0001000823a8(0x1028ff428,pcVar13);
  func_0x000100082720("SCScanResultsScopeInitializationServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112ecc390,&UNK_10daf0230);
  func_0x000107c6157c(uVar14);
  uVar15 = 0x1028ff430;
  func_0x0001000823a8(0x1028ff430,uVar14);
  func_0x000100082720("SCScanResultsScopedServicesServiceProvider",0x2a,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar11 = &UNK_110569b20;
  func_0x000107c613fc(&UNK_110569b20,0x20,7);
  *(undefined8 *)(puVar11 + 0x10) = uVar15;
  *(code **)(puVar11 + 0x18) = pcVar9;
  func_0x000107c6157c(pcVar9);
  uVar15 = 0x1028ff438;
  func_0x0001000823a8(0x1028ff438,puVar11);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(pcVar13);
  func_0x000107c61574(uVar14);
  func_0x000100082720("SCScanResultsScopeEntryPointProvider",0x24,2);
  *param_1 = uVar15;
  return;
}



/* Entry: 1028ff3e0; end: 1028ff41b;  */

void FUN_1028ff3e0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1028ff41c; end: 1028ff43f;  */

void FUN_1028ff41c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102900100(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCScanResultsScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1028ff440; end: 1028ffecf;  */

void FUN_1028ff440(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
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
  FUN_102900050();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x30) = uStack_70;
  *(undefined8 *)(param_2 + 0x38) = uStack_78;
  *(undefined8 *)(param_2 + 0x40) = uStack_80;
  *(undefined8 *)(param_2 + 0x48) = uStack_88;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar10 = uStack_90;
  func_0x000107c6157c(uStack_90);
  func_0x00010017da58();
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(param_2 + 0x18) = puVar5;
  func_0x0001000285a8(0x112ecc430,&UNK_10daf04a0);
  func_0x000107c610f8();
  uVar10 = uStack_98;
  func_0x000107c6157c(uStack_98);
  func_0x00010025a71c();
  puVar6 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(param_2 + 0x20) = puVar6;
  func_0x0001000285a8(0x112ebb0b8,&UNK_10dad3a00);
  func_0x000107c610f8();
  uVar10 = uStack_a0;
  func_0x000107c6157c(uStack_a0);
  func_0x00010017da58();
  puVar7 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar10);
  *(undefined **)(param_2 + 0x28) = puVar7;
  puVar8 = PTR_PTR_1126ab8a0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar8;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f0cb0e0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f0ca360);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef19df0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000031;
  func_0x000107c5fadc(0xd000000000000031,0x800000010f0cb100);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar8);
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(puVar8);
  func_0x000107c61174(puVar5);
  uVar10 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12670);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f0cb140);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f0cb170);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c3e740(puVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uStack_90);
  func_0x000107c61574(uStack_98);
  func_0x000107c61574(uStack_a0);
  *param_1 = param_2;
  return;
}



/* Entry: 1028ffed0; end: 1028fff43;  */

void FUN_1028ffed0(void)

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



/* Entry: 1028fff44; end: 1028fff4b;  */

undefined8 FUN_1028fff44(void)

{
  return 0x1b;
}


