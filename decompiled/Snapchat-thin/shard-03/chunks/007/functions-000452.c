/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102b66800; end: 102b66833;  */

void FUN_102b66800(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b66834; end: 102b6687b; -[SCSCLensProcessingCarouselServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b66834(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ef8ab8);
  func_0x000107c61610(param_1 + _DAT_112ef8ac0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ef8ac8));
  return;
}



/* Entry: 102b6687c; end: 102b6689b;  */

void FUN_102b6687c(void)

{
  func_0x000107c61168(&PTR_PTR_112ef8b10);
  return;
}



/* Entry: 102b6689c; end: 102b668a7; -[SCSCLensProcessingLegacyServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b6689c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef8b78;
  func_0x000107c61428(param_1 + _DAT_112ef8b78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b668a8; end: 102b668b3; -[SCSCLensProcessingLegacyServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b668a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef8b78;
  func_0x000107c61428(param_1 + _DAT_112ef8b78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b668b4; end: 102b668bf; -[SCSCLensProcessingLegacyServicesSaberServiceProvider viewfinderScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b668b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef8b80;
  func_0x000107c61428(param_1 + _DAT_112ef8b80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b668c0; end: 102b66903;  */

void FUN_102b668c0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102b66904; end: 102b6690f; -[SCSCLensProcessingLegacyServicesSaberServiceProvider setViewfinderScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b66904(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef8b80;
  func_0x000107c61428(param_1 + _DAT_112ef8b80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b66910; end: 102b66963;  */

void FUN_102b66910(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b66964; end: 102b66b77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102b66964(void)

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
    func_0x000107c5df78();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000102b64c3c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112ef8668);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ef8b88);
      *(long *)(unaff_x20 + _DAT_112ef8b88) = lVar4;
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
                      "ViewfinderScopeGraphBridge/SCSCLensProcessingLegacyServicesSaberServiceProvider.swift"
                      ,0x55,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b66a90);
  (*pcVar1)();
}



/* Entry: 102b66b78; end: 102b66bab; -[SCSCLensProcessingLegacyServicesSaberServiceProvider provide] */

void FUN_102b66b78(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102b66964();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b66bac; end: 102b66bdf; -[SCSCLensProcessingLegacyServicesSaberServiceProvider __safeProvide] */

void FUN_102b66bac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102b66a90();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b66be0; end: 102b66c23; -[SCSCLensProcessingLegacyServicesSaberServiceProvider end] */

void FUN_102b66be0(undefined8 param_1)

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



/* Entry: 102b66c24; end: 102b66dbb;  */

void FUN_102b66c24(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0f0a9b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000022,0x800000010f0f5650,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ViewfinderScopeGraphBridge/SCSCLensProcessingLegacyServicesSaberServiceProvider.swift"
                            ,0x55,2,0x42,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102b66dbc);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a5b0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102b66dbc; end: 102b66e67; -[SCSCLensProcessingLegacyServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_102b66dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102b66c24(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102b66e68; end: 102b66edb; -[SCSCLensProcessingLegacyServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b66e68(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ef8b78,0);
  func_0x000107c61614(param_1 + _DAT_112ef8b80,0);
  *(undefined8 *)(param_1 + _DAT_112ef8b88) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b66edc; end: 102b66f0f;  */

void FUN_102b66edc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b66f10; end: 102b66f57; -[SCSCLensProcessingLegacyServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b66f10(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ef8b78);
  func_0x000107c61610(param_1 + _DAT_112ef8b80);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ef8b88));
  return;
}



/* Entry: 102b66f58; end: 102b66f77;  */

void FUN_102b66f58(void)

{
  func_0x000107c61168(&PTR_PTR_112ef8bd0);
  return;
}



/* Entry: 102b66f78; end: 102b670a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102b66f78(void)

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
    func_0x000107c5df78();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000100b96298();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112ef8670);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ef8c48);
      *(long *)(unaff_x20 + _DAT_112ef8c48) = lVar4;
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
                      "ViewfinderScopeGraphBridge/SCSCLensProcessingLensModeFactoryServicesSaberServiceProvider.swift"
                      ,0x5e,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b670a4);
  (*pcVar1)();
}



/* Entry: 102b670a4; end: 102b670d7; -[SCSCLensProcessingLensModeFactoryServicesSaberServiceProvider provide] */

void FUN_102b670a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102b66f78();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b670d8; end: 102b6711b; -[SCSCLensProcessingLensModeFactoryServicesSaberServiceProvider end] */

void FUN_102b670d8(undefined8 param_1)

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



/* Entry: 102b6711c; end: 102b6714f;  */

void FUN_102b6711c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b67150; end: 102b67197; -[SCSCLensProcessingLensModeFactoryServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b67150(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ef8c38);
  func_0x000107c61610(param_1 + _DAT_112ef8c40);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ef8c48));
  return;
}



/* Entry: 102b67198; end: 102b671b7;  */

void FUN_102b67198(void)

{
  func_0x000107c61168(&PTR_PTR_112ef8c90);
  return;
}



/* Entry: 102b671b8; end: 102b672e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102b671b8(void)

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
    func_0x000107c5df78();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000100b9910c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112ef8690);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ef8d08);
      *(long *)(unaff_x20 + _DAT_112ef8d08) = lVar4;
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
                      "ViewfinderScopeGraphBridge/SCSCLensProcessingServicesSaberServiceProvider.swift"
                      ,0x4f,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b672e4);
  (*pcVar1)();
}



/* Entry: 102b672e4; end: 102b67317; -[SCSCLensProcessingServicesSaberServiceProvider provide] */

void FUN_102b672e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102b671b8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b67318; end: 102b6735b; -[SCSCLensProcessingServicesSaberServiceProvider end] */

void FUN_102b67318(undefined8 param_1)

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



/* Entry: 102b6735c; end: 102b6738f;  */

void FUN_102b6735c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b67390; end: 102b673d7; -[SCSCLensProcessingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b67390(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ef8cf8);
  func_0x000107c61610(param_1 + _DAT_112ef8d00);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ef8d08));
  return;
}



/* Entry: 102b673d8; end: 102b673f7;  */

void FUN_102b673d8(void)

{
  func_0x000107c61168(&PTR_PTR_112ef8d50);
  return;
}



/* Entry: 102b673f8; end: 102b67403; -[SCSCLensProcessingTouchesScopeServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b673f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef8db8;
  func_0x000107c61428(param_1 + _DAT_112ef8db8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b67404; end: 102b6740f; -[SCSCLensProcessingTouchesScopeServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b67404(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef8db8;
  func_0x000107c61428(param_1 + _DAT_112ef8db8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b67410; end: 102b6741b; -[SCSCLensProcessingTouchesScopeServicesSaberServiceProvider viewfinderScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b67410(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef8dc0;
  func_0x000107c61428(param_1 + _DAT_112ef8dc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b6741c; end: 102b6745f;  */

void FUN_102b6741c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102b67460; end: 102b6746b; -[SCSCLensProcessingTouchesScopeServicesSaberServiceProvider setViewfinderScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b67460(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef8dc0;
  func_0x000107c61428(param_1 + _DAT_112ef8dc0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b6746c; end: 102b674bf;  */

void FUN_102b6746c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b674c0; end: 102b676d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102b674c0(void)

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
    func_0x000107c5df78();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000102b64ec8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112ef86a0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ef8dc8);
      *(long *)(unaff_x20 + _DAT_112ef8dc8) = lVar4;
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
                      "ViewfinderScopeGraphBridge/SCSCLensProcessingTouchesScopeServicesSaberServiceProvider.swift"
                      ,0x5b,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b675ec);
  (*pcVar1)();
}



/* Entry: 102b676d4; end: 102b67707; -[SCSCLensProcessingTouchesScopeServicesSaberServiceProvider provide] */

void FUN_102b676d4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102b674c0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b67708; end: 102b6773b; -[SCSCLensProcessingTouchesScopeServicesSaberServiceProvider __safeProvide] */

void FUN_102b67708(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102b675ec();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b6773c; end: 102b6777f; -[SCSCLensProcessingTouchesScopeServicesSaberServiceProvider end] */

void FUN_102b6773c(undefined8 param_1)

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



/* Entry: 102b67780; end: 102b67917;  */

void FUN_102b67780(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0f0a9b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000022,0x800000010f0f5650,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ViewfinderScopeGraphBridge/SCSCLensProcessingTouchesScopeServicesSaberServiceProvider.swift"
                            ,0x5b,2,0x42,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102b67918);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a5b0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102b67918; end: 102b679c3; -[SCSCLensProcessingTouchesScopeServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_102b67918(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102b67780(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102b679c4; end: 102b67a37; -[SCSCLensProcessingTouchesScopeServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b679c4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ef8db8,0);
  func_0x000107c61614(param_1 + _DAT_112ef8dc0,0);
  *(undefined8 *)(param_1 + _DAT_112ef8dc8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b67a38; end: 102b67a6b;  */

void FUN_102b67a38(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b67a6c; end: 102b67ab3; -[SCSCLensProcessingTouchesScopeServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b67a6c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ef8db8);
  func_0x000107c61610(param_1 + _DAT_112ef8dc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ef8dc8));
  return;
}



/* Entry: 102b67ab4; end: 102b67ad3;  */

void FUN_102b67ab4(void)

{
  func_0x000107c61168(&PTR_PTR_112ef8e10);
  return;
}



/* Entry: 102b67ad4; end: 102b67c4b;  */

/* WARNING: Possible PIC construction at 0x000102b67b3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b67bd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b67b40) */
/* WARNING: Removing unreachable block (ram,0x000102b67bd8) */
/* WARNING: Removing unreachable block (ram,0x000102b67bf0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b67ad4(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ef8e80);
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



/* Entry: 102b67c4c; end: 102b67c53;  */

void FUN_102b67c4c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102b67c54; end: 102b67c87; -[SCSCViewfinderScopedServicesSaberEntryPoint end] */

void FUN_102b67c54(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102b67ad4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102b67c88; end: 102b67cbb;  */

void FUN_102b67c88(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b67cbc; end: 102b67cf3; -[SCSCViewfinderScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b67cbc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ef8e78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef8e80));
  return;
}



/* Entry: 102b67cf4; end: 102b67d13;  */

void FUN_102b67cf4(void)

{
  func_0x000107c61168(&PTR_PTR_11288f738);
  return;
}



/* Entry: 102b67d14; end: 102b67e17;  */

undefined8 FUN_102b67d14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x0001006c8660(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000100694390(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  func_0x000107c61174();
  uVar2 = uVar1;
  func_0x0001006c8850();
  func_0x000107c42c20(param_2);
  func_0x00010069281c(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  uVar3 = uVar1;
  func_0x0001006c88b4();
  func_0x000107c42c20(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  return unaff_x20;
}



/* Entry: 102b67e18; end: 102b67e33;  */

void FUN_102b67e18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b67e34; end: 102b67eb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b67e34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ef8f50);
  *(undefined8 *)(param_1 + _DAT_112ef8f50) = param_2;
  func_0x000107c61170(uVar2);
  puVar1 = (undefined8 *)(param_1 + _DAT_112ef8f58);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61174(param_2);
  func_0x000107c6142c(uVar2);
  func_0x000107c61434(param_4);
  return;
}



/* Entry: 102b67eb4; end: 102b67ffb; -[_TtC13LensVenueImpl16LensVenueManager notifyVenuePickedWithVenue:options:forLensId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b67eb4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined1 auStack_90 [16];
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = PTR___sSSN_11034da80;
  func_0x000107c5fc54(param_5);
  func_0x000107c5faec();
  lStack_80 = param_2;
  uStack_78 = param_4;
  uStack_70 = param_6;
  puStack_68 = puVar1;
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  func_0x000100087bd4(0x102b681d8,auStack_90,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61434(puVar1);
  func_0x000107c61434(param_5);
  func_0x000107c6071c();
  func_0x000100b9b8a4(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_4);
  func_0x000103eb335c(param_1,param_6,puVar1,param_4,param_5);
  func_0x000107c4d664(*(undefined8 *)(param_2 + _DAT_112ef8f48));
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_2);
  func_0x000107c6142c(puVar1);
  func_0x000107c6142c(param_5);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 102b67ffc; end: 102b6808f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b67ffc(undefined8 *param_1,long param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = ((ulong *)(param_2 + _DAT_112ef8f58))[1];
  if ((uVar1 == 0) ||
     ((uVar2 = *(ulong *)(param_2 + _DAT_112ef8f58), uVar2 != param_3 || uVar1 != param_4 &&
      (func_0x000107c605b8(), (uVar2 & 1) == 0)))) {
    *param_1 = 0;
  }
  else {
    *param_1 = *(undefined8 *)(param_2 + _DAT_112ef8f50);
    func_0x000107c61174();
  }
  return;
}



/* Entry: 102b68090; end: 102b6812b; -[_TtC13LensVenueImpl16LensVenueManager getVenueForLensId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b68090(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c5faec();
  uStack_50 = param_1;
  uStack_48 = param_3;
  uStack_40 = param_2;
  func_0x000107c61174(param_1);
  uVar1 = 0x112ef8f90;
  func_0x0001000285a8(0x112ef8f90,&UNK_10db28318);
  func_0x000100087bd4(&uStack_38,FUN_102b681bc,auStack_60,uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_38);
  return;
}



/* Entry: 102b6812c; end: 102b6815f;  */

void FUN_102b6812c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b68160; end: 102b681bb; -[_TtC13LensVenueImpl16LensVenueManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b68160(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ef8f48));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ef8f50));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ef8f58 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ef8f60));
  return;
}



/* Entry: 102b681bc; end: 102b681f3;  */

void FUN_102b681bc(void)

{
  long unaff_x20;
  
  FUN_102b67ffc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 102b681f4; end: 102b684d7;  */

undefined8
FUN_102b681f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001006c616c(param_1,param_2,param_3,param_4);
  return unaff_x20;
}



/* Entry: 102b684d8; end: 102b68797;  */

/* WARNING: Possible PIC construction at 0x000102b68524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b68560: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b68528) */
/* WARNING: Removing unreachable block (ram,0x000102b6852c) */
/* WARNING: Removing unreachable block (ram,0x000102b68564) */
/* WARNING: Removing unreachable block (ram,0x000102b68550) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b684d8(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x18) + _DAT_113074f68);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5dd78();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 102b68798; end: 102b687b3;  */

void FUN_102b68798(long param_1,long param_2)

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



/* Entry: 102b687b4; end: 102b68897;  */

void FUN_102b687b4(undefined4 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined4 uVar5;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  if (lVar4 == 0) {
    uVar5 = 0x1e;
  }
  else {
    uVar3 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010f0f5c50);
    lVar1 = lVar4;
    func_0x000107c49810();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    if (lVar1 == 0) {
      uVar5 = 0x1e;
    }
    else {
      lVar2 = lVar1;
      func_0x000107c49804();
      uVar5 = (undefined4)lVar2;
      func_0x000107c61170(lVar1);
    }
    uVar3 = 0xd000000000000025;
    func_0x000107c5fadc(0xd000000000000025,0x800000010efb0260);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar3);
  }
  *param_1 = uVar5;
  *(char *)(param_1 + 1) = (char)lVar4;
  return;
}



/* Entry: 102b68898; end: 102b688cb;  */

void FUN_102b68898(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b688cc; end: 102b688e7;  */

void FUN_102b688cc(void)

{
  return;
}



/* Entry: 102b688e8; end: 102b68937;  */

void FUN_102b688e8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000102b68588();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 102b68938; end: 102b6894f;  */

void FUN_102b68938(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    (*(code *)0x102b68588)();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 102b68950; end: 102b689a3;  */

void FUN_102b68950(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    (*param_3)();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 102b689a4; end: 102b689af;  */

void FUN_102b689a4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    (*(code *)0x102b686e8)();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 102b689b0; end: 102b68a03;  */

void FUN_102b689b0(undefined8 param_1,code *param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    (*param_2)();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 102b68a04; end: 102b68a07;  */

void FUN_102b68a04(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000102b68588();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 102b68a08; end: 102b68a6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b68a08(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ef9050) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ef9058) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b68a6c; end: 102b68ae3; -[SCPlainBuffersAudioHandler initWithAudioDataSource:configurationFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b68a6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ef9050) = param_3;
  *(undefined8 *)(param_1 + _DAT_112ef9058) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 102b68ae4; end: 102b68b47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b68ae4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ef9058);
  func_0x000107c40980(uVar1,param_2,2);
  func_0x000107c61180();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ef9050);
  if (lVar2 != 0) {
    func_0x000107c615f0(lVar2);
    func_0x000107c5bbd0();
    func_0x000107c615e8(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102b68b48; end: 102b68b6f; -[SCPlainBuffersAudioHandler startAudioStreaming] */

void FUN_102b68b48(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102b68ae4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b68b70; end: 102b68b87; -[SCPlainBuffersAudioHandler stopAudioStreaming] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b68b70(long param_1)

{
  if (*(long *)(param_1 + _DAT_112ef9050) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c256b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112ef9050),PTR_s_stopStreaming_112673500);
    return;
  }
  return;
}



/* Entry: 102b68b88; end: 102b68be7; -[SCPlainBuffersAudioHandler init] */

void FUN_102b68b88(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPlainBuffersDataSource.PlainBuffersAudioHandler",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b68bb4);
  (*pcVar1)();
}



/* Entry: 102b68be8; end: 102b68c1f; -[SCPlainBuffersAudioHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b68c04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b68c08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b68be8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ef9050));
  return;
}



/* Entry: 102b68c20; end: 102b68c3f;  */

void FUN_102b68c20(void)

{
  func_0x000107c61168(&PTR_PTR_11288f8c8);
  return;
}



/* Entry: 102b68c40; end: 102b68d6f;  */

void FUN_102b68c40(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61170(*param_2);
  uStack_40 = 0;
  lStack_38 = 0;
  func_0x000107c5fae4(param_1,&uStack_40);
  lVar1 = lStack_38;
  if (lStack_38 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uStack_40;
    func_0x000107c5fadc(uStack_40,lStack_38);
    func_0x000107c6142c(lVar1);
  }
  *param_2 = uVar2;
  return;
}



/* Entry: 102b68d70; end: 102b68daf;  */

void FUN_102b68d70(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 102b68db0; end: 102b68dc3;  */

void FUN_102b68db0(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105a40c8;
  if (lRam0000000112ef9088 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112ef9088 = param_1;
  }
  return;
}



/* Entry: 102b68dc4; end: 102b68e07;  */

void FUN_102b68dc4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = param_2[1];
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 102b68e08; end: 102b68e8b;  */

void FUN_102b68e08(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x112ef90a8;
  FUN_102b68d70(0x112ef90a8,FUN_102b68db0,&UNK_10db284cc);
  uVar2 = 0x112ef90b0;
  FUN_102b68d70(0x112ef90b0,FUN_102b68db0,&UNK_10db2846c);
                    /* WARNING: Could not recover jumptable at 0x00010bdb96bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss20_SwiftNewtypeWrapperPsSHRzSH8RawValueSYRpzrlE20_toCustomAnyHashables0hI0VSgyF_11034e980
  )(param_1,param_2,uVar1,uVar2,PTR___sSSSHsWP_11034da90);
  return;
}



/* Entry: 102b68e8c; end: 102b68ee3;  */

void FUN_102b68e8c(void)

{
  FUN_102b68d70(0x112ef9090,FUN_102b68db0,&UNK_10db28430);
  return;
}



/* Entry: 102b68ee4; end: 102b68f5b;  */

undefined8 FUN_102b68ee4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c5fbbc();
  func_0x000107c6142c(param_2);
  return uVar1;
}



/* Entry: 102b68f5c; end: 102b6904f;  */

undefined1 * FUN_102b68f5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c6068c(auStack_78,param_1);
  puVar2 = auStack_78;
  func_0x000107c5fb58(puVar2,uVar1,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  return puVar2;
}



/* Entry: 102b69050; end: 102b6907b;  */

void FUN_102b69050(void)

{
  FUN_102b68d70(0x112ef90a0,FUN_102b68db0,&UNK_10db284a0);
  return;
}



/* Entry: 102b6907c; end: 102b690bf;  */

void FUN_102b6907c(long param_1,long *param_2,long param_3)

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



/* Entry: 102b690c0; end: 102b690e7;  */

void FUN_102b690c0(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*unaff_x20);
  return;
}



/* Entry: 102b690e8; end: 102b6912f; -[SCPlainBuffersCaptureHandler captureHandlerDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b690e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef90b8;
  func_0x000107c61428(param_1 + _DAT_112ef90b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102b69130; end: 102b69187; -[SCPlainBuffersCaptureHandler setCaptureHandlerDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b69130(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef90b8;
  func_0x000107c61428(param_1 + _DAT_112ef90b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102b69188; end: 102b691b7;  */

void FUN_102b69188(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_102b691b8(param_1);
  return;
}



/* Entry: 102b691b8; end: 102b692d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b691b8(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112ef90b8,0);
  lVar1 = unaff_x20 + _DAT_112ef90c0;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ef90c8) = 0;
  lVar1 = unaff_x20 + _DAT_112ef90d0;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  lVar1 = _DAT_112ef90d8;
  uVar3 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ef90e0) = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ef90e8);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ef90f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef90f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef9100) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef9108) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b692d4; end: 102b69407;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102b692d4(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  
  lVar2 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar1 = _DAT_112ef90f8;
  puVar3 = *(undefined **)(unaff_x20 + _DAT_112ef90f8);
  puVar4 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    (**(code **)(lVar6 + 0x68))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
               *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,lVar2);
    puVar4 = PTR_PTR_1126ae790;
    func_0x000107c610f8();
    uVar5 = 0xd000000000000025;
    func_0x000107c5fadc(0xd000000000000025,0x800000010f0f5df0);
    func_0x000107c5f800();
    func_0x000107c470d0();
    func_0x000107c61170(uVar5);
    (**(code **)(lVar6 + 8))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar4;
    func_0x000107c61174(puVar4);
    func_0x000107c615e8(uVar5);
    puVar3 = (undefined *)0x0;
  }
  func_0x000107c615f0(puVar3);
  return puVar4;
}



/* Entry: 102b69408; end: 102b69547;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102b69408(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  lVar1 = _DAT_112ef9100;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112ef9100);
  puVar5 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    lVar3 = 0x112ef9150;
    func_0x0001000285a8(0x112ef9150,&UNK_10db28670);
    func_0x000107c61534();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)PTR__kCIContextCacheIntermediates_11034ad08;
    *(undefined **)(lVar3 + 0x40) = PTR___sSbN_11034dd40;
    *(undefined1 *)(lVar3 + 0x28) = 0;
    func_0x000107c61174();
    lVar4 = lVar3;
    func_0x0001010fe1c8(lVar3);
    func_0x000107c61588(lVar3);
    FUN_102b6b694((undefined8 *)(lVar3 + 0x20));
    puVar5 = PTR__OBJC_CLASS___CIContext_1126b3120;
    func_0x000107c610f8();
    uVar6 = 0;
    func_0x0001010f6448(0);
    uVar7 = uVar6;
    FUN_102b6b6dc();
    lVar3 = lVar4;
    func_0x000107c5f9dc(lVar4,uVar6,PTR___sypN_11034f1a8 + 8,uVar7);
    func_0x000107c6142c(lVar4);
    func_0x000107c47c98();
    func_0x000107c61170(lVar3);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar5;
    func_0x000107c61174(puVar5);
    func_0x000107c61170(uVar7);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar5;
}



/* Entry: 102b69548; end: 102b695bf; -[SCPlainBuffersCaptureHandler basicCaptureConfigurationForQualityLevel:] */

/* WARNING: Removing unreachable block (ram,0x000102b695a0) */

void FUN_102b69548(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x0001043cd088(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar2 = uVar1;
  func_0x0001043cb5d0();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}


