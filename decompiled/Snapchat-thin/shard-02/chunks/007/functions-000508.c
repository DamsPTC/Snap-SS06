/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102153c78; end: 102153e0f;  */

void FUN_102153c78(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef0f9a120)) {
      uVar2 = 0xd00000000000002f;
      func_0x000107c605b8(0xd00000000000002f,0x800000010f065ee0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "LensVideoEditingScopeGraphBridge/SCLensVideoEditingScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x58,2,0x30,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102153e10);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c55f10();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102153e10; end: 102153ebb; -[SCLensVideoEditingScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102153e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102153c78(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102153ebc; end: 102153f27; -[SCLensVideoEditingScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102153ebc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e5bf80,0);
  *(undefined8 *)(param_1 + _DAT_112e5bf88) = 0;
  *(undefined8 *)(param_1 + _DAT_112e5bf90) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102153f28; end: 102153f5b;  */

void FUN_102153f28(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102153f5c; end: 102153fa3; -[SCLensVideoEditingScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102153f88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102153f8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102153f5c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e5bf80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5bf88));
  return;
}



/* Entry: 102153fa4; end: 102153fc3;  */

void FUN_102153fa4(void)

{
  func_0x000107c61168(&PTR_PTR_112820da8);
  return;
}



/* Entry: 102153fc4; end: 102153fcf; -[SCSCLensVideoEditingLoggingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102153fc4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5bfc0;
  func_0x000107c61428(param_1 + _DAT_112e5bfc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102153fd0; end: 102153fdb; -[SCSCLensVideoEditingLoggingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102153fd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5bfc0;
  func_0x000107c61428(param_1 + _DAT_112e5bfc0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102153fdc; end: 102153fe7; -[SCSCLensVideoEditingLoggingServicesSaberServiceProvider lensVideoEditingScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102153fdc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5bfc8;
  func_0x000107c61428(param_1 + _DAT_112e5bfc8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102153fe8; end: 10215402b;  */

void FUN_102153fe8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10215402c; end: 102154037; -[SCSCLensVideoEditingLoggingServicesSaberServiceProvider setLensVideoEditingScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10215402c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5bfc8;
  func_0x000107c61428(param_1 + _DAT_112e5bfc8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102154038; end: 10215408b;  */

void FUN_102154038(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10215408c; end: 10215429f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10215408c(void)

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
    func_0x000107c4b53c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001021531f0();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112e5bf28);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e5bfd0);
      *(long *)(unaff_x20 + _DAT_112e5bfd0) = lVar4;
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
                      "LensVideoEditingScopeGraphBridge/SCSCLensVideoEditingLoggingServicesSaberServiceProvider.swift"
                      ,0x5e,2,0x21,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021541b8);
  (*pcVar1)();
}



/* Entry: 1021542a0; end: 1021542d3; -[SCSCLensVideoEditingLoggingServicesSaberServiceProvider provide] */

void FUN_1021542a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10215408c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1021542d4; end: 102154307; -[SCSCLensVideoEditingLoggingServicesSaberServiceProvider __safeProvide] */

void FUN_1021542d4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001021541b8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102154308; end: 10215434b; -[SCSCLensVideoEditingLoggingServicesSaberServiceProvider end] */

void FUN_102154308(undefined8 param_1)

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



/* Entry: 10215434c; end: 1021544e3;  */

void FUN_10215434c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef0f9a030)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000028,0x800000010f065fd0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "LensVideoEditingScopeGraphBridge/SCSCLensVideoEditingLoggingServicesSaberServiceProvider.swift"
                            ,0x5e,2,0x36,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1021544e4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c55f0c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1021544e4; end: 10215458f; -[SCSCLensVideoEditingLoggingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1021544e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10215434c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102154590; end: 102154603; -[SCSCLensVideoEditingLoggingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102154590(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e5bfc0,0);
  func_0x000107c61614(param_1 + _DAT_112e5bfc8,0);
  *(undefined8 *)(param_1 + _DAT_112e5bfd0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102154604; end: 102154637;  */

void FUN_102154604(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102154638; end: 10215467f; -[SCSCLensVideoEditingLoggingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102154638(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e5bfc0);
  func_0x000107c61610(param_1 + _DAT_112e5bfc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e5bfd0));
  return;
}



/* Entry: 102154680; end: 10215469f;  */

void FUN_102154680(void)

{
  func_0x000107c61168(&PTR_PTR_112e5c018);
  return;
}



/* Entry: 1021546a0; end: 1021546e7; -[SCSCLensVideoEditingScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021546a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e5c080;
  func_0x000107c61428(param_1 + _DAT_112e5c080,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1021546e8; end: 10215473f; -[SCSCLensVideoEditingScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021546e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e5c080;
  func_0x000107c61428(param_1 + _DAT_112e5c080,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102154740; end: 102154817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102154740(undefined8 param_1,long param_2)

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
    FUN_1021534c4();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e5bee0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102154818);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e5bee8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e5c088);
    *(long **)(unaff_x20 + _DAT_112e5c088) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102154818; end: 10215483f; -[SCSCLensVideoEditingScopedServicesSaberEntryPoint begin] */

void FUN_102154818(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102154740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102154840; end: 1021549b7;  */

/* WARNING: Possible PIC construction at 0x0001021548a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102154940: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021548ac) */
/* WARNING: Removing unreachable block (ram,0x000102154944) */
/* WARNING: Removing unreachable block (ram,0x00010215495c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102154840(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e5c088);
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



/* Entry: 1021549b8; end: 1021549bf;  */

void FUN_1021549b8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1021549c0; end: 1021549f3; -[SCSCLensVideoEditingScopedServicesSaberEntryPoint end] */

void FUN_1021549c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102154840();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1021549f4; end: 102154b13;  */

void FUN_1021549f4(long param_1,long param_2,long param_3)

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
                        "LensVideoEditingScopeGraphBridge/SCSCLensVideoEditingScopedServicesSaberEntryPoint.swift"
                        ,0x58,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102154b14);
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



/* Entry: 102154b14; end: 102154bbf; -[SCSCLensVideoEditingScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102154b14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1021549f4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102154bc0; end: 102154c1f; -[SCSCLensVideoEditingScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102154bc0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e5c080,0);
  *(undefined8 *)(param_1 + _DAT_112e5c088) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102154c20; end: 102154c53;  */

void FUN_102154c20(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102154c54; end: 102154c8b; -[SCSCLensVideoEditingScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102154c54(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e5c080);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5c088));
  return;
}



/* Entry: 102154c8c; end: 102154cd7;  */

void FUN_102154c8c(void)

{
  func_0x000107c61168(&PTR_PTR_112820eb8);
  return;
}



/* Entry: 102154cd8; end: 102154ceb;  */

bool FUN_102154cd8(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102154cec; end: 102154d97;  */

void FUN_102154cec(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102154d98; end: 102154f8f;  */

/* WARNING: Removing unreachable block (ram,0x000102154f8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102154d98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112e5c0c0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e5c0c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e5c0d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e5c0d8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e5c0e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e5c0f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e5c0f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e5c100) = 0x3ff0000000000000;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e5c108);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  lVar2 = unaff_x20 + _DAT_112e5c110;
  *(undefined8 *)(lVar2 + 8) = 0;
  func_0x000107c61614(lVar2,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e5c118);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e5c0b8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112e5c0e8) = param_6;
  puVar4 = PTR_s_initWithFrame__1125e2948;
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffffa0,puVar4);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar3);
  func_0x000107c61174();
  func_0x000107c3fa94(puVar4);
  func_0x000107c61180();
  func_0x000107c52b50(puVar3);
  func_0x000107c61170(puVar4);
  ppuVar5 = &PTR____CFConstantStringClassReference_110e21ff8;
  func_0x000107c61174();
  func_0x000107c520f4(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(ppuVar5);
  FUN_102154f90();
  func_0x000107c61170(puVar3);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_6);
  return puVar3;
}



/* Entry: 102154f90; end: 102155677;  */

/* WARNING: Removing unreachable block (ram,0x000102155674) */
/* WARNING: Removing unreachable block (ram,0x000102155670) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102154f90(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined *puVar14;
  long unaff_x20;
  undefined8 uVar15;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112e5c0b8);
  lVar1 = 0;
  FUN_102157650();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112e5c220) = uVar15;
  puVar5 = PTR_s_initWithFrame__1125e2948;
  lStack_70 = lVar2;
  lStack_68 = lVar1;
  func_0x000107c615f0(uVar15);
  plVar3 = &lStack_70;
  func_0x000107c61154(0,0,0,0,plVar3,puVar5);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174();
  func_0x000107c61174();
  puVar5 = puVar4;
  func_0x000107c3fa94(puVar4);
  func_0x000107c61180();
  func_0x000107c52b50(plVar3);
  func_0x000107c61170(puVar5);
  func_0x000107c534b0(plVar3);
  func_0x000107c61170(plVar3);
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112e5c220) = uVar15;
  puVar5 = PTR_s_initWithFrame__1125e2948;
  lStack_80 = lVar2;
  lStack_78 = lVar1;
  func_0x000107c615f0(uVar15);
  plVar6 = &lStack_80;
  func_0x000107c61154(0,0,0,0,plVar6,puVar5);
  func_0x000107c61180();
  func_0x000107c61174();
  puVar5 = puVar4;
  func_0x000107c3fa94(puVar4);
  func_0x000107c61180();
  func_0x000107c52b50(plVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c534b0(plVar6);
  func_0x000107c61170(plVar6);
  lVar1 = 0;
  FUN_102157948();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112e5c250) = uVar15;
  puVar5 = PTR_s_initWithFrame__1125e2948;
  lStack_90 = lVar2;
  lStack_88 = lVar1;
  func_0x000107c615f0(uVar15);
  plVar7 = &lStack_90;
  func_0x000107c61154(0,0,0,0,plVar7,puVar5);
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c3fa94(puVar4);
  func_0x000107c61180();
  func_0x000107c52b50(plVar7);
  func_0x000107c61170(puVar4);
  func_0x000107c534b0(plVar7);
  func_0x000107c61170(plVar7);
  func_0x000107c5a378(plVar3);
  func_0x000107c5a378(plVar6);
  func_0x000107c5a378(plVar7);
  func_0x000107c5a050(plVar3);
  func_0x000107c5a050(plVar6);
  func_0x000107c5a050(plVar7);
  ppuVar8 = &PTR____CFConstantStringClassReference_110e22018;
  func_0x000107c61174();
  func_0x000107c520f4(plVar3);
  func_0x000107c61170(ppuVar8);
  ppuVar8 = &PTR____CFConstantStringClassReference_110e22038;
  func_0x000107c61174();
  func_0x000107c520f4(plVar6);
  func_0x000107c61170(ppuVar8);
  func_0x000107c3d89c();
  func_0x000107c3d89c();
  func_0x000107c3d89c();
  plVar9 = plVar3;
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar2 = unaff_x20;
  func_0x000107c4ace0();
  func_0x000107c61180();
  plVar10 = plVar9;
  func_0x000107c40284(0);
  func_0x000107c61180();
  func_0x000107c61170(plVar9);
  func_0x000107c61170(lVar2);
  plVar9 = plVar6;
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar2 = unaff_x20;
  func_0x000107c4ace0();
  func_0x000107c61180();
  plVar11 = plVar9;
  func_0x000107c40284(0);
  func_0x000107c61180();
  func_0x000107c61170(plVar9);
  func_0x000107c61170(lVar2);
  plVar9 = plVar7;
  func_0x000107c4ace0();
  func_0x000107c61180();
  lVar2 = unaff_x20;
  func_0x000107c4ace0();
  func_0x000107c61180();
  plVar12 = plVar9;
  func_0x000107c40284(0);
  func_0x000107c61180();
  func_0x000107c61170(plVar9);
  func_0x000107c61170(lVar2);
  puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar4 = puVar5;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar4 + 0x18) = 0xf;
  *(undefined8 *)(puVar4 + 0x10) = 7;
  *(long **)(puVar4 + 0x20) = plVar10;
  func_0x000107c61174();
  plVar9 = plVar3;
  func_0x000107c3f764();
  func_0x000107c61180();
  lVar2 = unaff_x20;
  func_0x000107c3f764();
  func_0x000107c61180();
  plVar13 = plVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(plVar9);
  func_0x000107c61170(lVar2);
  *(long **)(puVar4 + 0x28) = plVar13;
  *(long **)(puVar4 + 0x30) = plVar11;
  func_0x000107c61174();
  plVar9 = plVar6;
  func_0x000107c3f764();
  func_0x000107c61180();
  lVar2 = unaff_x20;
  func_0x000107c3f764();
  func_0x000107c61180();
  plVar13 = plVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(plVar9);
  func_0x000107c61170(lVar2);
  *(long **)(puVar4 + 0x38) = plVar13;
  *(long **)(puVar4 + 0x40) = plVar12;
  func_0x000107c61174();
  plVar9 = plVar7;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar2 = unaff_x20;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  plVar13 = plVar9;
  func_0x000107c40284(0xc000000000000000);
  func_0x000107c61180();
  func_0x000107c61170(plVar9);
  func_0x000107c61170(lVar2);
  *(long **)(puVar4 + 0x48) = plVar13;
  plVar9 = plVar7;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar2 = unaff_x20;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  plVar13 = plVar9;
  func_0x000107c40284(0x4000000000000000);
  func_0x000107c61180();
  func_0x000107c61170(plVar9);
  func_0x000107c61170(lVar2);
  *(long **)(puVar4 + 0x50) = plVar13;
  uVar15 = 0;
  FUN_102156804(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar14 = puVar4;
  func_0x000107c5fc48(puVar4,uVar15);
  func_0x000107c61574(puVar4);
  func_0x000107c3d048(puVar5);
  func_0x000107c61170(plVar3);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(plVar7);
  func_0x000107c61170(plVar6);
  lVar1 = 0;
  func_0x00010215663c();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(long **)(lVar2 + 0x10) = plVar3;
  *(long **)(lVar2 + 0x18) = plVar10;
  *(undefined8 *)(lVar2 + 0x28) = 0xbff8000000000000;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112e5c0c0);
  *(long *)(unaff_x20 + _DAT_112e5c0c0) = lVar2;
  func_0x000107c61574(uVar15);
  lVar2 = lVar1;
  func_0x000107c613fc(lVar1,0x6a,7);
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(long **)(lVar2 + 0x10) = plVar6;
  *(long **)(lVar2 + 0x18) = plVar11;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0xbff8000000000000;
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112e5c0c8);
  *(long *)(unaff_x20 + _DAT_112e5c0c8) = lVar2;
  func_0x000107c61574(uVar15);
  func_0x000107c613fc(lVar1,0x6a,7);
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  *(undefined2 *)(lVar1 + 0x68) = 1;
  *(long **)(lVar1 + 0x10) = plVar7;
  *(long **)(lVar1 + 0x18) = plVar12;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0x4014000000000000;
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112e5c0d0);
  *(long *)(unaff_x20 + _DAT_112e5c0d0) = lVar1;
  func_0x000107c61574(uVar15);
  return;
}



/* Entry: 102155678; end: 1021556ab; -[_TtC25SCLensVideoEditingFeature14TrimmerControl initWithCoder:] */

undefined8 FUN_102155678(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10215686c();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 1021556ac; end: 1021556d3; -[_TtC25SCLensVideoEditingFeature14TrimmerControl drawRect:] */

void FUN_1021556ac(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102156964();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021556d4; end: 102155aeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021556d4(double param_1,double param_2,double param_3,double param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  long lStack_c0;
  double dStack_b8;
  long lStack_b0;
  double dStack_a8;
  long lStack_a0;
  double dStack_98;
  
  lVar7 = *(long *)(unaff_x20 + _DAT_112e5c0c0);
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102155ae4);
    (*pcVar1)();
  }
  dVar11 = *(double *)(unaff_x20 + _DAT_112e5c0f8);
  lVar6 = *(long *)(unaff_x20 + _DAT_112e5c0c8);
  lStack_c0 = lVar7;
  dStack_b8 = dVar11;
  if (lVar6 != 0) {
    dVar10 = *(double *)(unaff_x20 + _DAT_112e5c100);
    lVar5 = *(long *)(unaff_x20 + _DAT_112e5c0d0);
    lStack_b0 = lVar6;
    dStack_a8 = dVar10;
    if (lVar5 != 0) {
      dVar9 = *(double *)(unaff_x20 + _DAT_112e5c0f0);
      uVar8 = *(undefined8 *)(lVar7 + 0x10);
      uVar4 = 2;
      lStack_a0 = lVar5;
      dStack_98 = dVar9;
      func_0x000107c61580(lVar7,2);
      func_0x000107c6157c(lVar6);
      func_0x000107c6157c(lVar5);
      func_0x000107c3dc40(uVar8);
      if (param_1 <= 0.0) {
        func_0x000107c61574(lVar7);
      }
      else {
        func_0x000107c3ec60();
        dVar13 = param_1 + 10.0 + *(double *)(lVar7 + 0x28);
        param_2 = *(double *)(lVar7 + 0x20) + param_2 + 10.0;
        param_3 = (param_3 + -20.0) - (*(double *)(lVar7 + 0x28) + *(double *)(lVar7 + 0x38));
        param_4 = (param_4 + -20.0) - (*(double *)(lVar7 + 0x20) + *(double *)(lVar7 + 0x30));
        uVar8 = *(undefined8 *)(lVar7 + 0x18);
        func_0x000107c61174(uVar8);
        dVar12 = dVar13;
        func_0x000107c609c4(dVar13,param_2,param_3,param_4);
        func_0x000107c609cc(dVar13,param_2,param_3,param_4);
        func_0x000107c5378c(dVar12 + dVar11 * dVar13,uVar8);
        func_0x000107c61170(uVar8);
        uVar2 = *(undefined8 *)(lVar7 + 0x10);
        func_0x000107c61174(uVar2);
        uVar8 = uVar2;
        func_0x000107c5fdd8();
        uVar3 = uVar4;
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar4);
        func_0x000107c52104(uVar2);
        func_0x000107c61574(lVar7);
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar8);
        uVar4 = uVar3;
        param_1 = dVar11;
      }
      uVar8 = *(undefined8 *)(lVar6 + 0x10);
      func_0x000107c6157c(lVar6);
      func_0x000107c3dc40(uVar8);
      if (param_1 <= 0.0) {
        func_0x000107c61574(lVar6);
      }
      else {
        func_0x000107c3ec60();
        dVar12 = param_1 + 10.0 + *(double *)(lVar6 + 0x28);
        param_2 = *(double *)(lVar6 + 0x20) + param_2 + 10.0;
        param_3 = (param_3 + -20.0) - (*(double *)(lVar6 + 0x28) + *(double *)(lVar6 + 0x38));
        param_4 = (param_4 + -20.0) - (*(double *)(lVar6 + 0x20) + *(double *)(lVar6 + 0x30));
        uVar8 = *(undefined8 *)(lVar6 + 0x18);
        func_0x000107c61174(uVar8);
        dVar11 = dVar12;
        func_0x000107c609c4(dVar12,param_2,param_3,param_4);
        func_0x000107c609cc(dVar12,param_2,param_3,param_4);
        func_0x000107c5378c(dVar11 + dVar10 * dVar12,uVar8);
        func_0x000107c61170(uVar8);
        uVar2 = *(undefined8 *)(lVar6 + 0x10);
        func_0x000107c61174(uVar2);
        uVar8 = uVar2;
        func_0x000107c5fdd8();
        uVar3 = uVar4;
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar4);
        func_0x000107c52104(uVar2);
        func_0x000107c61574(lVar6);
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar8);
        uVar4 = uVar3;
        param_1 = dVar10;
      }
      uVar8 = *(undefined8 *)(lVar5 + 0x10);
      func_0x000107c6157c(lVar5);
      func_0x000107c3dc40(uVar8);
      if (param_1 <= 0.0) {
        func_0x000107c61574(lVar5);
      }
      else {
        func_0x000107c3ec60();
        dVar10 = param_1 + 10.0 + *(double *)(lVar5 + 0x28);
        dVar12 = *(double *)(lVar5 + 0x20) + param_2 + 10.0;
        dVar13 = (param_3 + -20.0) - (*(double *)(lVar5 + 0x28) + *(double *)(lVar5 + 0x38));
        dVar14 = (param_4 + -20.0) - (*(double *)(lVar5 + 0x20) + *(double *)(lVar5 + 0x30));
        uVar8 = *(undefined8 *)(lVar5 + 0x18);
        func_0x000107c61174(uVar8);
        dVar11 = dVar10;
        func_0x000107c609c4(dVar10,dVar12,dVar13,dVar14);
        func_0x000107c609cc(dVar10,dVar12,dVar13,dVar14);
        func_0x000107c5378c(dVar11 + dVar9 * dVar10,uVar8);
        func_0x000107c61170(uVar8);
        uVar3 = *(undefined8 *)(lVar5 + 0x10);
        func_0x000107c61174(uVar3);
        uVar8 = uVar3;
        func_0x000107c5fdd8(dVar9);
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar4);
        func_0x000107c52104(uVar3);
        func_0x000107c61574(lVar5);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar8);
      }
      uVar4 = 0x112e5c218;
      func_0x0001000285a8(0x112e5c218,&UNK_10da625c0);
      func_0x000107c61408(&lStack_c0,3,uVar4);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102155aec);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102155ae8);
  (*pcVar1)();
}



/* Entry: 102155aec; end: 102155b7f; -[_TtC25SCLensVideoEditingFeature14TrimmerControl layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102155aec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uStack_40;
  ulong uStack_38;
  
  uVar3 = param_5;
  func_0x000107c614f0();
  puVar2 = PTR_s_layoutSubviews_112600e60;
  uStack_40 = param_5;
  uStack_38 = uVar3;
  func_0x000107c61174();
  func_0x000107c61154(&uStack_40,puVar2);
  uVar3 = param_5;
  func_0x000107c438d4();
  puVar1 = (undefined8 *)(param_5 + _DAT_112e5c108);
  func_0x000107c609ac();
  if ((uVar3 & 1) == 0) {
    func_0x000107c438d4(param_5);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    FUN_1021556d4();
  }
  func_0x000107c61170(param_5);
  return;
}



/* Entry: 102155b80; end: 102155ddb;  */

/* WARNING: Possible PIC construction at 0x000102155bd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102155c6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102155cc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102155d1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102155d74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102155d20) */
/* WARNING: Removing unreachable block (ram,0x000102155cc8) */
/* WARNING: Removing unreachable block (ram,0x000102155c70) */
/* WARNING: Removing unreachable block (ram,0x000102155bd4) */
/* WARNING: Removing unreachable block (ram,0x000102155d78) */

void FUN_102155b80(undefined8 param_1)

{
  func_0x000107c5a050();
  func_0x000107c4aba4(param_1);
  func_0x000107c61180();
  func_0x000107c407dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102155ddc; end: 102155e07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102155ddc(long param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + _DAT_112e5c0d0) != 0) {
    uVar2 = 0;
    if ((param_2 & 1) == 0) {
      uVar2 = 0x3ff0000000000000;
    }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uVar2,*(undefined8 *)(*(long *)(param_1 + _DAT_112e5c0d0) + 0x10),
               PTR_s_setAlpha__112637810);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102155e08);
  (*pcVar1)();
}



/* Entry: 102155e08; end: 102155e7b; -[_TtC25SCLensVideoEditingFeature14TrimmerControl beginTrackingWithTouch:withEvent:] */

uint FUN_102155e08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102156d18(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102155e7c; end: 1021560f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102155e7c(double param_1,long param_2)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  if (*(char *)(param_2 + 0x68) != '\x01') {
    dVar10 = *(double *)(param_2 + 0x58);
    dVar8 = *(double *)(param_2 + 0x60);
    dVar12 = *(double *)(param_2 + 0x48);
    dVar11 = *(double *)(param_2 + 0x50);
    cVar1 = *(char *)(param_2 + 0x69);
    param_1 = param_1 + *(double *)(param_2 + 0x40);
    dVar7 = dVar12;
    func_0x000107c609b4(dVar12,dVar11,dVar10,dVar8);
    if (param_1 <= dVar7) {
      dVar7 = dVar12;
      func_0x000107c609c4(dVar12,dVar11,dVar10,dVar8);
      bVar3 = param_1 < dVar7;
    }
    else {
      bVar3 = true;
    }
    *(bool *)(param_2 + 0x69) = bVar3;
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    dVar7 = dVar12;
    func_0x000107c609c4(dVar12,dVar11,dVar10,dVar8);
    func_0x000107c609b4(dVar12,dVar11,dVar10,dVar8);
    if (param_1 <= dVar12) {
      dVar12 = param_1;
    }
    if (dVar12 < dVar7) {
      dVar12 = dVar7;
    }
    func_0x000107c5378c(uVar5);
    if (cVar1 != *(char *)(param_2 + 0x69)) {
      func_0x000107c4e57c(*(undefined8 *)(unaff_x20 + _DAT_112e5c0e8));
    }
    func_0x000107c3ec60();
    dVar9 = dVar12 + 10.0 + *(double *)(param_2 + 0x28);
    dVar11 = *(double *)(param_2 + 0x20) + dVar11 + 10.0;
    dVar10 = (dVar10 + -20.0) - (*(double *)(param_2 + 0x28) + *(double *)(param_2 + 0x38));
    dVar12 = *(double *)(param_2 + 0x20) + *(double *)(param_2 + 0x30);
    dVar8 = (dVar8 + -20.0) - dVar12;
    func_0x000107c40268(uVar5);
    dVar7 = dVar9;
    func_0x000107c609c4(dVar9,dVar11,dVar10,dVar8);
    func_0x000107c609cc(dVar9,dVar11,dVar10,dVar8);
    dVar9 = (dVar12 - dVar7) / dVar9;
    bVar2 = *(byte *)(unaff_x20 + _DAT_112e5c0e0);
    if (bVar2 < 2) {
      if (bVar2 != 0) {
        *(double *)(unaff_x20 + _DAT_112e5c0f8) = dVar9;
        lVar4 = unaff_x20 + _DAT_112e5c110;
        func_0x000107c61618();
        if (lVar4 != 0) {
          pcVar6 = FUN_102159460;
          goto LAB_1021560b8;
        }
      }
    }
    else if (bVar2 == 2) {
      *(double *)(unaff_x20 + _DAT_112e5c100) = dVar9;
      lVar4 = unaff_x20 + _DAT_112e5c110;
      func_0x000107c61618();
      if (lVar4 != 0) {
        pcVar6 = (code *)(undefined *)0x102159468;
LAB_1021560b8:
        FUN_1021591d8(0);
        (*pcVar6)(dVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar4);
        return;
      }
    }
    else {
      *(double *)(unaff_x20 + _DAT_112e5c0f0) = dVar9;
      lVar4 = unaff_x20 + _DAT_112e5c110;
      func_0x000107c61618();
      if (lVar4 != 0) {
        pcVar6 = (code *)(undefined *)0x102159470;
        goto LAB_1021560b8;
      }
    }
  }
  return;
}



/* Entry: 1021560f8; end: 10215616b; -[_TtC25SCLensVideoEditingFeature14TrimmerControl continueTrackingWithTouch:withEvent:] */

uint FUN_1021560f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1021571d0(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10215616c; end: 102156383;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10215616c(void)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long *plVar7;
  long lVar8;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar2 = _DAT_112e5c0e0;
  ppuVar6 = &puStack_80;
  bVar1 = *(byte *)(unaff_x20 + _DAT_112e5c0e0);
  if (bVar1 < 2) {
    if (bVar1 == 0) goto LAB_102156364;
    plVar7 = (long *)&DAT_112e5c0c0;
  }
  else if (bVar1 == 2) {
    plVar7 = (long *)&DAT_112e5c0c8;
  }
  else {
    plVar7 = (long *)&DAT_112e5c0d0;
  }
  if (*(long *)(unaff_x20 + *plVar7) != 0) {
    uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + *plVar7) + 0x10);
    func_0x000107c61174();
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar5 = &UNK_1104d2ff0;
    func_0x000107c613fc(&UNK_1104d2ff0,0x20,7);
    puVar5[0x10] = 0;
    *(undefined8 *)(puVar5 + 0x18) = uVar3;
    pcStack_60 = FUN_102156844;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_1104d3008;
    puStack_58 = puVar5;
    func_0x000107c60bc4(&puStack_80);
    puVar5 = puStack_58;
    func_0x000107c61174(uVar3);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61574(puVar5);
    func_0x000107c3dcd8(0x3fd3333333333333,0,0x3fd3333333333333,0,puVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar3);
    func_0x000107c60bd0(ppuVar6);
    lVar8 = unaff_x20 + _DAT_112e5c110;
    func_0x000107c61618();
    if (lVar8 != 0) {
      FUN_1021591d8(0);
      (*(code *)(undefined *)0x1021594b4)();
      func_0x000107c615e8(lVar8);
    }
    func_0x000107c61170(uVar3);
  }
  bVar1 = *(byte *)(unaff_x20 + lVar2);
  if (bVar1 < 2) {
    if (bVar1 == 0) goto LAB_102156364;
    plVar7 = (long *)&DAT_112e5c0c0;
  }
  else if (bVar1 == 2) {
    plVar7 = (long *)&DAT_112e5c0c8;
  }
  else {
    plVar7 = (long *)&DAT_112e5c0d0;
  }
  lVar8 = *(long *)(unaff_x20 + *plVar7);
  if (lVar8 != 0) {
    *(undefined8 *)(lVar8 + 0x60) = 0;
    *(undefined8 *)(lVar8 + 0x48) = 0;
    *(undefined8 *)(lVar8 + 0x40) = 0;
    *(undefined8 *)(lVar8 + 0x58) = 0;
    *(undefined8 *)(lVar8 + 0x50) = 0;
    *(undefined2 *)(lVar8 + 0x68) = 1;
  }
LAB_102156364:
  *(undefined1 *)(unaff_x20 + lVar2) = 0;
  return;
}



/* Entry: 102156384; end: 1021563ab; -[_TtC25SCLensVideoEditingFeature14TrimmerControl endTrackingWithTouch:withEvent:] */

void FUN_102156384(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10215616c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021563ac; end: 102156433; -[_TtC25SCLensVideoEditingFeature14TrimmerControl cancelTrackingWithEvent:] */

void FUN_1021563ac(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10215616c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102156434; end: 102156483; -[_TtC25SCLensVideoEditingFeature14TrimmerControl accessibilityElements] */

void FUN_102156434(long param_1)

{
  long lVar1;
  
  FUN_102156484();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c5fc48();
    func_0x000107c6142c(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 102156484; end: 10215653f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102156484(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = 0x112d38dc0;
  func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 4;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  if (*(long *)(unaff_x20 + _DAT_112e5c0c0) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10215653c);
    (*pcVar1)();
  }
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e5c0c0) + 0x10);
  uVar3 = 0;
  FUN_102156804(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  *(undefined8 *)(lVar2 + 0x38) = uVar3;
  *(undefined8 *)(lVar2 + 0x20) = uVar5;
  if (*(long *)(unaff_x20 + _DAT_112e5c0c8) != 0) {
    uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e5c0c8) + 0x10);
    *(undefined8 *)(lVar2 + 0x58) = uVar3;
    *(undefined8 *)(lVar2 + 0x40) = uVar4;
    func_0x000107c61174(uVar5);
    func_0x000107c61174(uVar4);
    return lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102156540);
  (*pcVar1)();
}



/* Entry: 102156540; end: 102156543; -[_TtC25SCLensVideoEditingFeature14TrimmerControl setAccessibilityElements:] */

void FUN_102156540(void)

{
  return;
}



/* Entry: 102156544; end: 1021565a3; -[_TtC25SCLensVideoEditingFeature14TrimmerControl initWithFrame:] */

void FUN_102156544(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensVideoEditingFeature.TrimmerControl",0x28,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102156570);
  (*pcVar1)();
}



/* Entry: 1021565a4; end: 10215661b; -[_TtC25SCLensVideoEditingFeature14TrimmerControl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1021565a4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e5c0b8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e5c0c0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e5c0c8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e5c0d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e5c0e8));
  param_1 = param_1 + _DAT_112e5c110;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10215661c; end: 10215665b;  */

void FUN_10215661c(void)

{
  func_0x000107c61168(&PTR_PTR_112820f78);
  return;
}



/* Entry: 10215665c; end: 1021567c3;  */

int FUN_10215665c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1021566d8;
        goto LAB_1021566bc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1021566bc:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_1021566d8:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1021567c4; end: 102156803;  */

void FUN_1021567c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5c210 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da62584;
  func_0x000107c61520(&UNK_10da62584,&UNK_1104d2f58);
  puRam0000000112e5c210 = puVar1;
  return;
}



/* Entry: 102156804; end: 102156843;  */

void FUN_102156804(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102156844; end: 10215686b;  */

void FUN_102156844(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_50 [48];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = 0x3ff199999999999a;
  if ((*(byte *)(unaff_x20 + 0x10) & 1) == 0) {
    uVar2 = 0x3ff0000000000000;
  }
  func_0x000107c6088c(auStack_50,uVar2,uVar2);
  func_0x000107c5a03c(uVar1);
  return;
}



/* Entry: 10215686c; end: 102156963;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10215686c(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112e5c0c0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e5c0c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e5c0d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e5c0d8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e5c0e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e5c0f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e5c0f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e5c100) = 0x3ff0000000000000;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e5c108);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  lVar2 = unaff_x20 + _DAT_112e5c110;
  *(undefined8 *)(lVar2 + 8) = 0;
  func_0x000107c61614(lVar2,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e5c118);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCLensVideoEditingFeature/TrimmerControl.swift",0x2e,2,0x4e,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102156964);
  (*pcVar3)();
}



/* Entry: 102156964; end: 102156d17;  */

/* WARNING: Possible PIC construction at 0x000102156b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102156c70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102156c80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102156c90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102156c84) */
/* WARNING: Removing unreachable block (ram,0x000102156c74) */
/* WARNING: Removing unreachable block (ram,0x000102156b94) */
/* WARNING: Removing unreachable block (ram,0x000102156d0c) */
/* WARNING: Removing unreachable block (ram,0x000102156bac) */
/* WARNING: Removing unreachable block (ram,0x000102156d10) */
/* WARNING: Removing unreachable block (ram,0x000102156bdc) */
/* WARNING: Removing unreachable block (ram,0x000102156d14) */
/* WARNING: Removing unreachable block (ram,0x000102156bf0) */
/* WARNING: Removing unreachable block (ram,0x000102156c94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102156964(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  
  func_0x000107c60ba8();
  func_0x000107c61180();
  if (param_5 == 0) {
    return;
  }
  func_0x000107c3ec60();
  param_1 = param_1 + 10.0;
  param_2 = param_2 + 10.0;
  param_3 = param_3 + -20.0;
  param_4 = param_4 + -20.0;
  func_0x000107c60904(param_5);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112e5c0b8);
  func_0x000107c3fdc0();
  func_0x000107c61180();
  dVar7 = param_1;
  func_0x000107c609c4(param_1,param_2,param_3,param_4);
  dVar8 = param_1;
  func_0x000107c609c8(param_1,param_2,param_3,param_4);
  dVar9 = param_1;
  func_0x000107c609cc(param_1,param_2,param_3,param_4);
  dVar10 = param_1;
  func_0x000107c609b0(param_1,param_2,param_3,param_4);
  lVar2 = _DAT_112e5c0d8;
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112e5c0d8);
  puVar4 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x000107c61168(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  puVar5 = puVar4;
  func_0x000107c3e8b0(dVar7,dVar8,dVar9,dVar10,uVar11);
  func_0x000107c61180();
  func_0x000107c549b0(uVar6);
  func_0x000107c43484(puVar5);
  func_0x000107c6090c(param_5,0x10);
  lVar1 = _DAT_112e5c0c0;
  if (*(long *)(unaff_x20 + _DAT_112e5c0c0) == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102156d04);
    (*pcVar3)();
  }
  func_0x000107c3f74c(*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e5c0c0) + 0x10));
  dVar8 = param_1;
  func_0x000107c609c8(param_1,param_2,param_3,param_4);
  if (*(long *)(unaff_x20 + _DAT_112e5c0c8) == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102156d08);
    (*pcVar3)();
  }
  dVar9 = dVar8;
  func_0x000107c3f74c(*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e5c0c8) + 0x10));
  if (*(long *)(unaff_x20 + lVar1) != 0) {
    dVar10 = dVar9;
    func_0x000107c3f74c(*(undefined8 *)(*(long *)(unaff_x20 + lVar1) + 0x10));
    func_0x000107c609b0(param_1,param_2,param_3,param_4);
    func_0x000107c3e8b0(dVar7,dVar8,dVar9 - dVar10,param_1,*(undefined8 *)(unaff_x20 + lVar2),puVar4
                       );
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c3fa94();
    func_0x000107c61180();
    func_0x000107c549b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102156d0c);
  (*pcVar3)();
}



/* Entry: 102156d18; end: 1021571cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102156d18(double param_1,double param_2,double param_3,double param_4)

{
  double *pdVar1;
  long *plVar2;
  byte bVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  ppuVar7 = &puStack_a0;
  func_0x000107c4b8b8();
  pdVar1 = (double *)(unaff_x20 + _DAT_112e5c118);
  *pdVar1 = param_1;
  pdVar1[1] = param_2;
  plVar2 = (long *)(unaff_x20 + _DAT_112e5c0c0);
  if (*plVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102157180);
    (*pcVar4)();
  }
  func_0x000107c438d4(*(undefined8 *)(*plVar2 + 0x10));
  func_0x000107c609b4();
  lVar8 = _DAT_112e5c0c8;
  if (*pdVar1 <= param_1) {
    if (*plVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102157188);
      (*pcVar4)();
    }
    func_0x000107c438d4(*(undefined8 *)(*plVar2 + 0x10));
    func_0x000107c609c4();
    dVar13 = *pdVar1;
    lVar8 = *plVar2;
    if (dVar13 <= param_1) {
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1021571a4);
        (*pcVar4)();
      }
      *(double *)(lVar8 + 0x40) = dVar13;
    }
    else {
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10215719c);
        (*pcVar4)();
      }
      uVar10 = *(undefined8 *)(lVar8 + 0x18);
      func_0x000107c6157c(lVar8);
      func_0x000107c40268(uVar10);
      *(double *)(lVar8 + 0x40) = param_1;
      func_0x000107c61574(lVar8);
    }
    *(undefined1 *)(unaff_x20 + _DAT_112e5c0e0) = 1;
    func_0x000107c3ec60();
    lVar8 = *plVar2;
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10215718c);
      (*pcVar4)();
    }
    if (*(long *)(unaff_x20 + _DAT_112e5c0c8) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102157190);
      (*pcVar4)();
    }
    dVar12 = dVar13 + 10.0 + *(double *)(lVar8 + 0x20);
    param_1 = param_1 + 10.0 + *(double *)(lVar8 + 0x28);
    param_4 = (param_4 + -20.0) - (*(double *)(lVar8 + 0x20) + *(double *)(lVar8 + 0x30));
    param_3 = param_3 + -20.0;
    dVar14 = param_3 - (*(double *)(lVar8 + 0x28) + *(double *)(lVar8 + 0x38));
    func_0x000107c40268(*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e5c0c8) + 0x18));
    dVar13 = param_1;
    func_0x000107c609c4(param_1,dVar12,dVar14,param_4);
    lVar8 = *plVar2;
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102157194);
      (*pcVar4)();
    }
    dVar13 = (param_3 - dVar13) + -30.0;
  }
  else {
    if (*(long *)(unaff_x20 + _DAT_112e5c0c8) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102157184);
      (*pcVar4)();
    }
    func_0x000107c438d4(*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e5c0c8) + 0x10));
    func_0x000107c609c4();
    lVar9 = _DAT_112e5c0d0;
    dVar12 = *pdVar1;
    if (param_1 <= dVar12) {
      if (*(long *)(unaff_x20 + lVar8) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1021571a0);
        (*pcVar4)();
      }
      func_0x000107c438d4(*(undefined8 *)(*(long *)(unaff_x20 + lVar8) + 0x10));
      func_0x000107c609b4();
      dVar12 = *pdVar1;
      lVar9 = *(long *)(unaff_x20 + lVar8);
      if (param_1 <= dVar12) {
        if (lVar9 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1021571d0);
          (*pcVar4)();
        }
        *(double *)(lVar9 + 0x40) = dVar12;
      }
      else {
        if (lVar9 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1021571cc);
          (*pcVar4)();
        }
        uVar10 = *(undefined8 *)(lVar9 + 0x18);
        func_0x000107c6157c(lVar9);
        func_0x000107c40268(uVar10);
        *(double *)(lVar9 + 0x40) = param_1;
        func_0x000107c61574(lVar9);
      }
      *(undefined1 *)(unaff_x20 + _DAT_112e5c0e0) = 2;
      func_0x000107c3ec60();
      param_1 = param_1 + 10.0;
      dVar12 = dVar12 + 10.0;
      param_4 = param_4 + -20.0;
      func_0x000107c609b4(param_1,dVar12,param_3 + -20.0,param_4);
      lVar9 = *(long *)(unaff_x20 + lVar8);
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1021571b0);
        (*pcVar4)();
      }
      if (*plVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1021571b8);
        (*pcVar4)();
      }
      dVar14 = *(double *)(lVar9 + 0x38);
      dVar15 = *(double *)(lVar9 + 0x28);
      dVar13 = param_1;
      func_0x000107c40268(*(undefined8 *)(*plVar2 + 0x18));
      if (*plVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1021571c0);
        (*pcVar4)();
      }
      dVar11 = dVar13;
      func_0x000107c40268(*(undefined8 *)(*plVar2 + 0x18));
      lVar8 = *(long *)(unaff_x20 + lVar8);
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1021571c8);
        (*pcVar4)();
      }
      dVar13 = ((dVar14 + param_1 + dVar15) - dVar13) + -30.0;
      param_1 = dVar11 + 30.0;
    }
    else {
      if (*(long *)(unaff_x20 + _DAT_112e5c0d0) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102157198);
        (*pcVar4)();
      }
      *(double *)(*(long *)(unaff_x20 + _DAT_112e5c0d0) + 0x40) = dVar12;
      *(undefined1 *)(unaff_x20 + _DAT_112e5c0e0) = 3;
      func_0x000107c3ec60();
      if (*plVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1021571a8);
        (*pcVar4)();
      }
      func_0x000107c40268(*(undefined8 *)(*plVar2 + 0x18));
      if (*(long *)(unaff_x20 + lVar8) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1021571ac);
        (*pcVar4)();
      }
      dVar14 = param_1;
      func_0x000107c40268(*(undefined8 *)(*(long *)(unaff_x20 + lVar8) + 0x18));
      if (*plVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1021571b4);
        (*pcVar4)();
      }
      dVar15 = dVar14;
      func_0x000107c40268(*(undefined8 *)(*plVar2 + 0x18));
      lVar8 = *(long *)(unaff_x20 + lVar9);
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1021571bc);
        (*pcVar4)();
      }
      dVar13 = dVar15;
      func_0x000107c498ec(*(undefined8 *)(lVar8 + 0x10));
      lVar8 = *(long *)(unaff_x20 + lVar9);
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1021571c4);
        (*pcVar4)();
      }
      dVar12 = dVar12 + 10.0;
      param_4 = param_4 + -20.0;
      dVar13 = (dVar14 - dVar15) - dVar13;
    }
  }
  *(double *)(lVar8 + 0x48) = param_1;
  *(double *)(lVar8 + 0x50) = dVar12;
  *(double *)(lVar8 + 0x58) = dVar13;
  *(double *)(lVar8 + 0x60) = param_4;
  *(undefined1 *)(lVar8 + 0x68) = 0;
  bVar3 = *(byte *)(unaff_x20 + _DAT_112e5c0e0);
  if (bVar3 < 2) {
    if (bVar3 == 0) {
      return 1;
    }
    lVar8 = *plVar2;
  }
  else {
    lVar8 = _DAT_112e5c0d0;
    if (bVar3 == 2) {
      lVar8 = _DAT_112e5c0c8;
    }
    lVar8 = *(long *)(unaff_x20 + lVar8);
  }
  if (lVar8 != 0) {
    uVar10 = *(undefined8 *)(lVar8 + 0x10);
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar6 = &UNK_1104d3040;
    func_0x000107c613fc(&UNK_1104d3040,0x20,7);
    puVar6[0x10] = 1;
    *(undefined8 *)(puVar6 + 0x18) = uVar10;
    uStack_80 = 0x1021572b4;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_1104d3058;
    puStack_78 = puVar6;
    func_0x000107c60bc4(&puStack_a0);
    puVar6 = puStack_78;
    func_0x000107c61174(uVar10);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61574(puVar6);
    func_0x000107c3dcd8(0x3fd3333333333333,0,0x3fd3333333333333,0,puVar5);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar10);
    func_0x000107c60bd0(ppuVar7);
  }
  return 1;
}



/* Entry: 1021571d0; end: 102157287;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1021571d0(double param_1,undefined8 param_2)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  
  bVar1 = *(byte *)(unaff_x20 + _DAT_112e5c0e0);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      return 0;
    }
    plVar2 = (long *)&DAT_112e5c0c0;
  }
  else if (bVar1 == 2) {
    plVar2 = (long *)&DAT_112e5c0c8;
  }
  else {
    plVar2 = (long *)&DAT_112e5c0d0;
  }
  lVar3 = *(long *)(unaff_x20 + *plVar2);
  if (lVar3 == 0) {
    return 0;
  }
  func_0x000107c6157c(lVar3);
  func_0x000107c4b8b8(param_2);
  FUN_102155e7c(param_1 - *(double *)(unaff_x20 + _DAT_112e5c118),lVar3);
  func_0x000107c56a10();
  func_0x000107c61574(lVar3);
  return 1;
}



/* Entry: 102157288; end: 1021572ab;  */

undefined8 FUN_102157288(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1021572ac; end: 1021572b7;  */

void FUN_1021572ac(long param_1,long param_2)

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



/* Entry: 1021572b8; end: 10215730f; -[_TtC25SCLensVideoEditingFeature13TrimmerSlider initWithCoder:] */

void FUN_1021572b8(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCLensVideoEditingFeature/TrimmerHelperViews.swift",0x32,2,0x1e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102157310);
  (*pcVar1)();
}



/* Entry: 102157310; end: 10215731f; -[_TtC25SCLensVideoEditingFeature13TrimmerSlider intrinsicContentSize] */

undefined1  [16] FUN_102157310(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4048000000000000;
  auVar1._0_8_ = 0x403c000000000000;
  return auVar1;
}



/* Entry: 102157320; end: 1021575b7;  */

/* WARNING: Possible PIC construction at 0x000102157474: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102157494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021574b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102157548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102157558: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010215754c) */
/* WARNING: Removing unreachable block (ram,0x0001021574bc) */
/* WARNING: Removing unreachable block (ram,0x000102157498) */
/* WARNING: Removing unreachable block (ram,0x000102157478) */
/* WARNING: Removing unreachable block (ram,0x00010215755c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102157320(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  long unaff_x20;
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  func_0x000107c60ba8();
  func_0x000107c61180();
  if (param_5 != 0) {
    param_1 = param_1 + 8.0;
    param_2 = param_2 + 8.0;
    param_3 = param_3 + -16.0;
    param_4 = param_4 + -16.0;
    dVar2 = param_1;
    func_0x000107c609c4(param_1,param_2,param_3,param_4);
    dVar3 = param_1;
    func_0x000107c609c8(param_1,param_2,param_3,param_4);
    dVar4 = param_1;
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    dVar5 = param_1;
    func_0x000107c609b0(param_1,param_2,param_3,param_4);
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    func_0x000107c61168(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    func_0x000107c3e8b0(dVar2,dVar3,dVar4,dVar5,param_1 * 0.5);
    func_0x000107c61180();
    func_0x000107c60904(param_5);
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112e5c220);
    func_0x000107c3fdc0(uVar1,param_6,0xa7);
    func_0x000107c61180();
    func_0x000107c3ab24();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1021575b8; end: 10215760f; -[_TtC25SCLensVideoEditingFeature13TrimmerSlider drawRect:] */

void FUN_1021575b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174();
  FUN_102157320(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 102157610; end: 10215763b; -[_TtC25SCLensVideoEditingFeature13TrimmerSlider initWithFrame:] */

void FUN_102157610(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensVideoEditingFeature.TrimmerSlider",0x27,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10215763c);
  (*pcVar1)();
}



/* Entry: 10215763c; end: 10215763f;  */

void FUN_10215763c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102157640; end: 10215764f; -[_TtC25SCLensVideoEditingFeature13TrimmerSlider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102157640(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e5c220));
  return;
}



/* Entry: 102157650; end: 10215766f;  */

void FUN_102157650(void)

{
  func_0x000107c61168(&PTR_PTR_112821098);
  return;
}



/* Entry: 102157670; end: 1021576c7; -[_TtC25SCLensVideoEditingFeature14ProgressSlider initWithCoder:] */

void FUN_102157670(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCLensVideoEditingFeature/TrimmerHelperViews.swift",0x32,2,0x5f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021576c8);
  (*pcVar1)();
}



/* Entry: 1021576c8; end: 1021576db; -[_TtC25SCLensVideoEditingFeature14ProgressSlider intrinsicContentSize] */

undefined1  [16] FUN_1021576c8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = *(undefined8 *)PTR__UIViewNoIntrinsicMetric_110345e70;
  auVar1._0_8_ = 0x4014000000000000;
  return auVar1;
}



/* Entry: 1021576dc; end: 10215787f;  */

/* WARNING: Possible PIC construction at 0x0001021577dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021577fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102157820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102157838: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102157824) */
/* WARNING: Removing unreachable block (ram,0x000102157800) */
/* WARNING: Removing unreachable block (ram,0x0001021577e0) */
/* WARNING: Removing unreachable block (ram,0x00010215783c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021576dc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  func_0x000107c60ba8();
  func_0x000107c61180();
  if (param_5 != 0) {
    dVar2 = param_1;
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    dVar3 = param_1;
    func_0x000107c609b0(param_1,param_2,param_3,param_4);
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    func_0x000107c61168(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    func_0x000107c3e8b0(0,0,dVar2,dVar3,param_1 * 0.5);
    func_0x000107c61180();
    func_0x000107c60904(param_5);
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112e5c250);
    func_0x000107c3fdc0(uVar1,param_6,0xa7);
    func_0x000107c61180();
    func_0x000107c3ab24();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 102157880; end: 1021578d7; -[_TtC25SCLensVideoEditingFeature14ProgressSlider drawRect:] */

void FUN_102157880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174();
  FUN_1021576dc(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1021578d8; end: 102157937; -[_TtC25SCLensVideoEditingFeature14ProgressSlider initWithFrame:] */

void FUN_1021578d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensVideoEditingFeature.ProgressSlider",0x28,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102157904);
  (*pcVar1)();
}



/* Entry: 102157938; end: 102157947; -[_TtC25SCLensVideoEditingFeature14ProgressSlider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102157938(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e5c250));
  return;
}



/* Entry: 102157948; end: 102157967;  */

void FUN_102157948(void)

{
  func_0x000107c61168(&PTR_PTR_112821158);
  return;
}



/* Entry: 102157968; end: 10215796b;  */

void FUN_102157968(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10215796c; end: 102157c97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10215796c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffff80;
  func_0x000107c614f0();
  lVar1 = _DAT_112e5c280;
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff80,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  puVar4 = puVar3;
  func_0x000107c40510();
  func_0x000107c61180();
  lVar1 = _DAT_112e5c280;
  func_0x000107c3d89c();
  func_0x000107c61170(puVar4);
  func_0x000107c5a050(*(undefined8 *)(puVar3 + lVar1));
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar5 = puVar2;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar5 + 0x18) = 9;
  *(undefined8 *)(puVar5 + 0x10) = 4;
  uVar6 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c4ace0();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c40510(puVar3);
  func_0x000107c61180();
  puVar7 = puVar4;
  func_0x000107c4ace0();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  uVar8 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar7);
  *(undefined8 *)(puVar5 + 0x20) = uVar8;
  uVar6 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c50890();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c40510(puVar3);
  func_0x000107c61180();
  puVar7 = puVar4;
  func_0x000107c50890();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  uVar8 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar7);
  *(undefined8 *)(puVar5 + 0x28) = uVar8;
  uVar6 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c40510(puVar3);
  func_0x000107c61180();
  puVar7 = puVar4;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  uVar8 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar7);
  *(undefined8 *)(puVar5 + 0x30) = uVar8;
  uVar6 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c40510(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar7 = puVar4;
  func_0x000107c3ec1c(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  uVar8 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar7);
  *(undefined8 *)(puVar5 + 0x38) = uVar8;
  uVar8 = 0;
  func_0x000100847984(0);
  puVar9 = puVar5;
  func_0x000107c5fc48(puVar5,uVar8);
  func_0x000107c61574(puVar5);
  func_0x000107c3d048(puVar2);
  func_0x000107c61170(puVar9);
  func_0x000107c53840(*(undefined8 *)(puVar3 + lVar1));
  func_0x000107c61170(puVar3);
  return puVar3;
}



/* Entry: 102157c98; end: 102157cb7; -[_TtC25SCLensVideoEditingFeature25VideoTrimmerThumbnailCell initWithFrame:] */

void FUN_102157c98(void)

{
  FUN_10215796c();
  return;
}



/* Entry: 102157cb8; end: 102157d33; -[_TtC25SCLensVideoEditingFeature25VideoTrimmerThumbnailCell initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102157cb8(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  
  lVar1 = _DAT_112e5c280;
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar3;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCLensVideoEditingFeature/VideoTrimmerThumbnailCell.swift",0x39,2,0x1b,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102157d34);
  (*pcVar2)();
}



/* Entry: 102157d34; end: 102157d9b; -[_TtC25SCLensVideoEditingFeature25VideoTrimmerThumbnailCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102157d34(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_prepareForReuse_112620008;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_30,puVar1);
  func_0x000107c55258(*(undefined8 *)(param_1 + _DAT_112e5c280));
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102157d9c; end: 102157dcf;  */

void FUN_102157d9c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102157dd0; end: 102157ddf; -[_TtC25SCLensVideoEditingFeature25VideoTrimmerThumbnailCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102157dd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e5c280));
  return;
}



/* Entry: 102157de0; end: 102157dff;  */

void FUN_102157de0(void)

{
  func_0x000107c61168(&PTR_PTR_112821218);
  return;
}



/* Entry: 102157e00; end: 102157e63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102157e00(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e5c2d8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e5c2d8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_102157e64();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 102157e64; end: 102157f73;  */

undefined *
FUN_102157e64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (param_5 != 0) {
    func_0x000107c3ec60();
    func_0x000107c61170(param_5);
    FUN_102157f74();
    puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
    func_0x000107c610f8(PTR__OBJC_CLASS___UICollectionView_1126afd20);
    func_0x000107c469ac(param_1,param_2,param_3,param_4);
    func_0x000107c61170(param_5);
    func_0x000107c58cd8(puVar2);
    func_0x000107c53e08(puVar2);
    FUN_102157de0(0);
    func_0x000107c614e8();
    uVar3 = 0xd000000000000019;
    func_0x000107c5fadc(0xd000000000000019,0x800000010f0661a0);
    func_0x000107c4fbd8(puVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c5a050(puVar2);
    return puVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102157f74);
  (*pcVar1)();
}



/* Entry: 102157f74; end: 1021580db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102157f74(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e5c2e0;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112e5c2e0);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c58cd0();
    func_0x000107c566f4(0,puVar3);
    func_0x000107c566fc(0,puVar3);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1021580dc; end: 102158103; -[_TtC25SCLensVideoEditingFeature26VideoTrimmerViewController initWithCoder:] */

void FUN_1021580dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_10215963c();
  return;
}



/* Entry: 102158104; end: 10215854f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102158104(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_loadView_112604be0);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102158230);
    (*pcVar1)();
  }
  func_0x000107c5a050();
  func_0x000107c61170(lVar2);
  func_0x000102158234();
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000102158008();
    func_0x000107c3d89c(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar3);
    lVar2 = _DAT_112e5c2e8;
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e5c2e8);
    func_0x000107c61174(uVar4);
    uVar5 = uVar4;
    FUN_102157e00();
    FUN_102155b80();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    *(undefined ***)(*(long *)(unaff_x20 + lVar2) + _DAT_112e5c110 + 8) = &PTR_DAT_1104d30c0;
    func_0x000107c61604();
    FUN_102158550();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102158234);
  (*pcVar1)();
}



/* Entry: 102158550; end: 1021588c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102158550(undefined8 param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  code *pcVar13;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  plVar1 = (long *)(unaff_x20 + _DAT_112e5c2b8);
  plVar4 = plVar1;
  func_0x0001000a8868(plVar1,plVar1[3]);
  lVar7 = *plVar4;
  lVar10 = lVar7 + _DAT_112e5c650;
  func_0x000107c61428(lVar10,auStack_78,0,0);
  lVar8 = *(long *)(lVar10 + 0x18);
  func_0x0001000a8868(lVar10,lVar8);
  lVar10 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_80 + -extraout_x8;
  puVar2 = puVar9;
  (**(code **)(lVar10 + 0x10))(puVar9);
  FUN_10215be8c();
  (**(code **)(lVar10 + 8))(puVar9,lVar8);
  plVar4 = (long *)&UNK_1104d31a8;
  func_0x000107c613fc(&UNK_1104d31a8,0x18,7);
  func_0x000107c61644(plVar4 + 2,lVar7);
  uVar12 = 0x102159840;
  func_0x0001000bfde0(0x102159840,plVar4,PTR___s12CoreGraphics7CGFloatVN_1103513a8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574();
  FUN_102159848();
  func_0x000104884898();
  func_0x000107c61574(uVar12);
  puVar5 = &UNK_1104d3130;
  puVar3 = puVar5;
  func_0x000107c613fc(&UNK_1104d3130,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  pcVar11 = FUN_102159888;
  puVar6 = puVar3;
  (**(code **)(*plVar4 + 0x60))(FUN_102159888);
  func_0x000107c61574(plVar4);
  func_0x000107c61574(puVar3);
  func_0x000107c614f0(pcVar11);
  lVar10 = _DAT_112e5c2c0;
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112e5c2c0);
  pcVar13 = *(code **)(puVar6 + 0x10);
  func_0x000107c6157c(uVar12);
  (*pcVar13)();
  func_0x000107c615e8(pcVar11);
  func_0x000107c61574(uVar12);
  lVar7 = plVar1[3];
  func_0x0001000a8868(plVar1,lVar7);
  lVar8 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar8 + 0x10))((long)puVar9 - extraout_x8_00);
  plVar4 = (long *)0x0;
  FUN_10215e8fc();
  (*(code *)(undefined *)0x10215ef6c)();
  (**(code **)(lVar8 + 8))((long)puVar9 - extraout_x8_00,lVar7);
  func_0x000107c613fc(&UNK_1104d3130,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  uVar12 = 0x102159890;
  puVar3 = puVar5;
  (**(code **)(*plVar4 + 0x60))(0x102159890);
  func_0x000107c61574(plVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c614f0(uVar12);
  lVar10 = *(long *)(unaff_x20 + lVar10);
  pcVar11 = *(code **)(puVar3 + 0x10);
  func_0x000107c6157c(lVar10);
  (*pcVar11)();
  func_0x000107c615e8(uVar12);
  func_0x000107c61574();
  func_0x000102158008();
  func_0x0001000a8868(plVar1,plVar1[3]);
  FUN_10215e768();
  *(undefined8 *)(lVar10 + _DAT_112e5c0f8) = param_1;
  FUN_1021556d4();
  func_0x000107c61170(lVar10);
  lVar10 = *(long *)(unaff_x20 + _DAT_112e5c2e8);
  func_0x0001000a8868(plVar1,plVar1[3]);
  func_0x00010215e7ec();
  *(undefined8 *)(lVar10 + _DAT_112e5c100) = param_1;
  func_0x000107c61174(lVar10);
  FUN_1021556d4();
  func_0x000107c61170(lVar10);
  return;
}



/* Entry: 1021588c4; end: 1021588eb; -[_TtC25SCLensVideoEditingFeature26VideoTrimmerViewController loadView] */

void FUN_1021588c4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102158104();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021588ec; end: 10215896b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021588ec(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x000102158008();
    func_0x000107c61170(param_2);
    *(undefined8 *)(lVar1 + _DAT_112e5c0f0) = uVar2;
    FUN_1021556d4();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10215896c; end: 102158a9b;  */

void FUN_10215896c(byte *param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  bVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar3 = param_2;
    func_0x000102158008();
    func_0x000107c61170(param_2);
    puVar4 = &UNK_1104d31d0;
    func_0x000107c613fc(&UNK_1104d31d0,0x19,7);
    *(long *)(puVar4 + 0x10) = lVar3;
    puVar4[0x18] = bVar1 ^ 1;
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    uStack_68 = 0x102159898;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_1104d31e8;
    ppuVar6 = &puStack_88;
    puStack_60 = puVar4;
    func_0x000107c60bc4(ppuVar6);
    puVar2 = puStack_60;
    func_0x000107c61174(lVar3);
    func_0x000107c6157c(puVar4);
    func_0x000107c61574(puVar2);
    func_0x000107c3dccc(0x3fc999999999999a,puVar5);
    func_0x000107c61574(puVar4);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 102158a9c; end: 102158c8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102158a9c(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  plVar1 = (long *)(unaff_x20 + _DAT_112e5c2d0);
  func_0x000107c61428(plVar1,auStack_78,0,0);
  plVar5 = plVar1;
  func_0x0001000a8868(plVar1,plVar1[3]);
  dVar12 = *(double *)(*plVar5 + 0x60);
  dVar13 = *(double *)(*plVar5 + 0x68);
  FUN_102157e00();
  func_0x000107c438d4();
  dVar10 = param_3;
  dVar11 = param_4;
  func_0x000107c61170(plVar5);
  lVar3 = _DAT_112e5c2d8;
  bVar4 = false;
  if ((dVar12 == param_3) && (bVar4 = false, !NAN(dVar13) && !NAN(param_4))) {
    bVar4 = dVar13 == param_4;
  }
  if (!bVar4) {
    func_0x000107c438d4(*(undefined8 *)(unaff_x20 + _DAT_112e5c2d8));
    func_0x000107c61428(plVar1,auStack_b8,0x21,0);
    lVar9 = plVar1[3];
    lVar2 = plVar1[4];
    func_0x0001000c6518(plVar1,lVar9);
    (**(code **)(lVar2 + 0x10))(dVar10,dVar11,lVar9,lVar2);
    func_0x000107c614a8(auStack_b8);
    plVar5 = plVar1;
    func_0x0001000a8868(plVar1,plVar1[3]);
    FUN_102159bc0();
    uVar6 = 0;
    func_0x000102159734(0,plVar5);
    lVar9 = _DAT_112e5c2c8;
    func_0x000107c61428(unaff_x20 + _DAT_112e5c2c8,auStack_90,1,0);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar9);
    *(undefined8 *)(unaff_x20 + lVar9) = uVar6;
    func_0x000107c6142c(uVar7);
    FUN_102157f74();
    plVar5 = plVar1;
    func_0x0001000a8868(plVar1,plVar1[3]);
    lVar9 = *plVar5;
    FUN_102159c4c();
    func_0x000107c54678(dVar10 * *(double *)(lVar9 + 0x68),uVar7);
    func_0x000107c61170(uVar7);
    func_0x000107c4fd7c(*(undefined8 *)(unaff_x20 + lVar3));
    FUN_1021597cc(plVar1,auStack_b8);
    func_0x0001000a8868(auStack_b8,uStack_a0);
    puVar8 = &UNK_1104d3108;
    func_0x000107c613fc(&UNK_1104d3108,0x18,7);
    *(long *)(puVar8 + 0x10) = unaff_x20;
    func_0x000107c61174();
    FUN_102159cd8(FUN_102159810,puVar8);
    func_0x000107c61574(puVar8);
    func_0x0001000834e4(auStack_b8);
  }
  return;
}


