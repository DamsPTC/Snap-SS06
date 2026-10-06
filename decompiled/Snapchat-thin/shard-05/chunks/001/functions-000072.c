/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103acd4f4; end: 103acd513;  */

void FUN_103acd4f4(void)

{
  func_0x000107c61168(&PTR_PTR_112fe7ef8);
  return;
}



/* Entry: 103acd514; end: 103acd51f; -[SCSCLensProcessingSnapRendererScopedMemoriesSnapRendererQCServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103acd514(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe7f60;
  func_0x000107c61428(param_1 + _DAT_112fe7f60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103acd520; end: 103acd52b; -[SCSCLensProcessingSnapRendererScopedMemoriesSnapRendererQCServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103acd520(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe7f60;
  func_0x000107c61428(param_1 + _DAT_112fe7f60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103acd52c; end: 103acd537; -[SCSCLensProcessingSnapRendererScopedMemoriesSnapRendererQCServicesSaberServiceProvider lensProcessingSnapRendererScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103acd52c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe7f68;
  func_0x000107c61428(param_1 + _DAT_112fe7f68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103acd538; end: 103acd57b;  */

void FUN_103acd538(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103acd57c; end: 103acd587; -[SCSCLensProcessingSnapRendererScopedMemoriesSnapRendererQCServicesSaberServiceProvider setLensProcessingSnapRendererScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103acd57c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe7f68;
  func_0x000107c61428(param_1 + _DAT_112fe7f68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103acd588; end: 103acd5db;  */

void FUN_103acd588(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103acd5dc; end: 103acd7ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103acd5dc(void)

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
    func_0x000107c4b370();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103acb75c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fe7c58);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fe7f70);
      *(long *)(unaff_x20 + _DAT_112fe7f70) = lVar4;
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
                      "LensProcessingSnapRendererScopeGraphBridge/SCSCLensProcessingSnapRendererScopedMemoriesSnapRendererQCServicesSaberServiceProvider.swift"
                      ,0x87,2,0x2e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103acd708);
  (*pcVar1)();
}



/* Entry: 103acd7f0; end: 103acd823; -[SCSCLensProcessingSnapRendererScopedMemoriesSnapRendererQCServicesSaberServiceProvider provide] */

void FUN_103acd7f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103acd5dc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103acd824; end: 103acd857; -[SCSCLensProcessingSnapRendererScopedMemoriesSnapRendererQCServicesSaberServiceProvider __safeProvide] */

void FUN_103acd824(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103acd708();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103acd858; end: 103acd89b; -[SCSCLensProcessingSnapRendererScopedMemoriesSnapRendererQCServicesSaberServiceProvider end] */

void FUN_103acd858(undefined8 param_1)

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



/* Entry: 103acd89c; end: 103acda33;  */

void FUN_103acd89c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffce) || (param_3 != -0x7ffffffef0e63c70)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000032,0x800000010f19c390,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "LensProcessingSnapRendererScopeGraphBridge/SCSCLensProcessingSnapRendererScopedMemoriesSnapRendererQCServicesSaberServiceProvider.swift"
                            ,0x87,2,0x43,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103acda34);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c55e28();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103acda34; end: 103acdadf; -[SCSCLensProcessingSnapRendererScopedMemoriesSnapRendererQCServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103acda34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103acd89c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103acdae0; end: 103acdb53; -[SCSCLensProcessingSnapRendererScopedMemoriesSnapRendererQCServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103acdae0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fe7f60,0);
  func_0x000107c61614(param_1 + _DAT_112fe7f68,0);
  *(undefined8 *)(param_1 + _DAT_112fe7f70) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103acdb54; end: 103acdb87;  */

void FUN_103acdb54(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103acdb88; end: 103acdbcf; -[SCSCLensProcessingSnapRendererScopedMemoriesSnapRendererQCServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103acdb88(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fe7f60);
  func_0x000107c61610(param_1 + _DAT_112fe7f68);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fe7f70));
  return;
}



/* Entry: 103acdbd0; end: 103acdbef;  */

void FUN_103acdbd0(void)

{
  func_0x000107c61168(&PTR_PTR_112fe7fb8);
  return;
}



/* Entry: 103acdbf0; end: 103acdbfb; -[SCSCLensProcessingSnapRendererScopedMemoriesSnapRendererServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103acdbf0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe8020;
  func_0x000107c61428(param_1 + _DAT_112fe8020,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103acdbfc; end: 103acdc07; -[SCSCLensProcessingSnapRendererScopedMemoriesSnapRendererServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103acdbfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe8020;
  func_0x000107c61428(param_1 + _DAT_112fe8020,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103acdc08; end: 103acdc13; -[SCSCLensProcessingSnapRendererScopedMemoriesSnapRendererServicesSaberServiceProvider lensProcessingSnapRendererScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103acdc08(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe8028;
  func_0x000107c61428(param_1 + _DAT_112fe8028,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103acdc14; end: 103acdc57;  */

void FUN_103acdc14(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103acdc58; end: 103acdc63; -[SCSCLensProcessingSnapRendererScopedMemoriesSnapRendererServicesSaberServiceProvider setLensProcessingSnapRendererScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103acdc58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe8028;
  func_0x000107c61428(param_1 + _DAT_112fe8028,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103acdc64; end: 103acdcb7;  */

void FUN_103acdc64(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103acdcb8; end: 103acdecb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103acdcb8(void)

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
    func_0x000107c4b370();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103acb888();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fe7c60);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fe8030);
      *(long *)(unaff_x20 + _DAT_112fe8030) = lVar4;
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
                      "LensProcessingSnapRendererScopeGraphBridge/SCSCLensProcessingSnapRendererScopedMemoriesSnapRendererServicesSaberServiceProvider.swift"
                      ,0x85,2,0x2e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103acdde4);
  (*pcVar1)();
}



/* Entry: 103acdecc; end: 103acdeff; -[SCSCLensProcessingSnapRendererScopedMemoriesSnapRendererServicesSaberServiceProvider provide] */

void FUN_103acdecc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103acdcb8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103acdf00; end: 103acdf33; -[SCSCLensProcessingSnapRendererScopedMemoriesSnapRendererServicesSaberServiceProvider __safeProvide] */

void FUN_103acdf00(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103acdde4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103acdf34; end: 103acdf77; -[SCSCLensProcessingSnapRendererScopedMemoriesSnapRendererServicesSaberServiceProvider end] */

void FUN_103acdf34(undefined8 param_1)

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



/* Entry: 103acdf78; end: 103ace10f;  */

void FUN_103acdf78(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffce) || (param_3 != -0x7ffffffef0e63c70)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000032,0x800000010f19c390,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "LensProcessingSnapRendererScopeGraphBridge/SCSCLensProcessingSnapRendererScopedMemoriesSnapRendererServicesSaberServiceProvider.swift"
                            ,0x85,2,0x43,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ace110);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c55e28();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103ace110; end: 103ace1bb; -[SCSCLensProcessingSnapRendererScopedMemoriesSnapRendererServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103ace110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103acdf78(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103ace1bc; end: 103ace22f; -[SCSCLensProcessingSnapRendererScopedMemoriesSnapRendererServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ace1bc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fe8020,0);
  func_0x000107c61614(param_1 + _DAT_112fe8028,0);
  *(undefined8 *)(param_1 + _DAT_112fe8030) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ace230; end: 103ace263;  */

void FUN_103ace230(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ace264; end: 103ace2ab; -[SCSCLensProcessingSnapRendererScopedMemoriesSnapRendererServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ace264(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fe8020);
  func_0x000107c61610(param_1 + _DAT_112fe8028);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fe8030));
  return;
}



/* Entry: 103ace2ac; end: 103ace2cb;  */

void FUN_103ace2ac(void)

{
  func_0x000107c61168(&PTR_PTR_112fe8078);
  return;
}



/* Entry: 103ace2cc; end: 103ace2d7; -[SCSCSnapRendererLensEffectProcessingMetadataApplyingFactorySaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ace2cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe80e0;
  func_0x000107c61428(param_1 + _DAT_112fe80e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ace2d8; end: 103ace2e3; -[SCSCSnapRendererLensEffectProcessingMetadataApplyingFactorySaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ace2d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe80e0;
  func_0x000107c61428(param_1 + _DAT_112fe80e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103ace2e4; end: 103ace2ef; -[SCSCSnapRendererLensEffectProcessingMetadataApplyingFactorySaberServiceProvider lensProcessingSnapRendererScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ace2e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe80e8;
  func_0x000107c61428(param_1 + _DAT_112fe80e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ace2f0; end: 103ace333;  */

void FUN_103ace2f0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103ace334; end: 103ace33f; -[SCSCSnapRendererLensEffectProcessingMetadataApplyingFactorySaberServiceProvider setLensProcessingSnapRendererScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ace334(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe80e8;
  func_0x000107c61428(param_1 + _DAT_112fe80e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103ace340; end: 103ace393;  */

void FUN_103ace340(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103ace394; end: 103ace5a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103ace394(void)

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
    func_0x000107c4b370();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103acb9b4();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fe7c70);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fe80f0);
      *(long *)(unaff_x20 + _DAT_112fe80f0) = lVar4;
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
                      "LensProcessingSnapRendererScopeGraphBridge/SCSCSnapRendererLensEffectProcessingMetadataApplyingFactorySaberServiceProvider.swift"
                      ,0x80,2,0x2e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ace4c0);
  (*pcVar1)();
}



/* Entry: 103ace5a8; end: 103ace5db; -[SCSCSnapRendererLensEffectProcessingMetadataApplyingFactorySaberServiceProvider provide] */

void FUN_103ace5a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103ace394();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103ace5dc; end: 103ace60f; -[SCSCSnapRendererLensEffectProcessingMetadataApplyingFactorySaberServiceProvider __safeProvide] */

void FUN_103ace5dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103ace4c0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103ace610; end: 103ace653; -[SCSCSnapRendererLensEffectProcessingMetadataApplyingFactorySaberServiceProvider end] */

void FUN_103ace610(undefined8 param_1)

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



/* Entry: 103ace654; end: 103ace7eb;  */

void FUN_103ace654(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffce) || (param_3 != -0x7ffffffef0e63c70)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000032,0x800000010f19c390,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "LensProcessingSnapRendererScopeGraphBridge/SCSCSnapRendererLensEffectProcessingMetadataApplyingFactorySaberServiceProvider.swift"
                            ,0x80,2,0x43,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ace7ec);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c55e28();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103ace7ec; end: 103ace897; -[SCSCSnapRendererLensEffectProcessingMetadataApplyingFactorySaberServiceProvider setValue:forIvarName:] */

void FUN_103ace7ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103ace654(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103ace898; end: 103ace90b; -[SCSCSnapRendererLensEffectProcessingMetadataApplyingFactorySaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ace898(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fe80e0,0);
  func_0x000107c61614(param_1 + _DAT_112fe80e8,0);
  *(undefined8 *)(param_1 + _DAT_112fe80f0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ace90c; end: 103ace93f;  */

void FUN_103ace90c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ace940; end: 103ace987; -[SCSCSnapRendererLensEffectProcessingMetadataApplyingFactorySaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ace940(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fe80e0);
  func_0x000107c61610(param_1 + _DAT_112fe80e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fe80f0));
  return;
}



/* Entry: 103ace988; end: 103ace9a7;  */

void FUN_103ace988(void)

{
  func_0x000107c61168(&PTR_PTR_112fe8138);
  return;
}



/* Entry: 103ace9a8; end: 103aceb1f;  */

/* WARNING: Possible PIC construction at 0x000103acea10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103aceaa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103acea14) */
/* WARNING: Removing unreachable block (ram,0x000103aceaac) */
/* WARNING: Removing unreachable block (ram,0x000103aceac4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ace9a8(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112fe81a8);
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



/* Entry: 103aceb20; end: 103aceb27;  */

void FUN_103aceb20(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 103aceb28; end: 103aceb5b; -[SCSCLensProcessingSnapRendererScopedServicesSaberEntryPoint end] */

void FUN_103aceb28(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103ace9a8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103aceb5c; end: 103aceb8f;  */

void FUN_103aceb5c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103aceb90; end: 103acebc7; -[SCSCLensProcessingSnapRendererScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aceb90(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fe81a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe81a8));
  return;
}



/* Entry: 103acebc8; end: 103acebe7;  */

void FUN_103acebc8(void)

{
  func_0x000107c61168(&PTR_PTR_112924b20);
  return;
}



/* Entry: 103acebe8; end: 103acec1b;  */

undefined8 FUN_103acebe8(undefined8 param_1)

{
  (*(code *)(undefined *)0x103ad021c)();
  return param_1;
}



/* Entry: 103acec1c; end: 103aceca3; -[_TtC48ExternalMusicOffscreenPlaybackEventAnnouncerImpl44ExternalMusicOffscreenPlaybackEventAnnouncer playbackEventDidUpdateWithEvent:] */

void FUN_103acec1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c6157c(param_1);
  FUN_103ad0a00(&uStack_58,param_3);
  uStack_78 = uStack_50;
  uStack_80 = uStack_58;
  uStack_68 = uStack_40;
  uStack_70 = uStack_48;
  uStack_60 = uStack_38;
  func_0x000100087c34(&uStack_80);
  func_0x000107c61170(param_3);
  FUN_103acebe8(&uStack_58);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 103aceca4; end: 103aced8f; -[_TtC48ExternalMusicOffscreenPlaybackEventAnnouncerImpl44ExternalMusicOffscreenPlaybackEventAnnouncer playbackNeedsPreparingWithEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aceca4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(undefined8 *)(param_3 + _DAT_112fe8548);
  uVar2 = *(undefined8 *)(param_3 + _DAT_112fe8550);
  uVar3 = *(undefined8 *)(param_3 + _DAT_112fe8558);
  uStack_68 = *(undefined8 *)(param_3 + _DAT_112fe8540);
  uVar1 = ((undefined8 *)(param_3 + _DAT_112fe8540))[1];
  uStack_60 = uVar1;
  uStack_50 = uVar2;
  uStack_48 = uVar3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c61434(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000100087c34(&uStack_68);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c6142c(uVar1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 103aced90; end: 103acedbb;  */

void FUN_103aced90(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103acedbc; end: 103acedd3;  */

void FUN_103acedbc(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + 0x10));
  return;
}



/* Entry: 103acedd4; end: 103acedf3;  */

void FUN_103acedd4(void)

{
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 103acedf4; end: 103acee93;  */

void FUN_103acedf4(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0;
  func_0x000100c4d388();
  func_0x000107c613fc();
  func_0x0001000285a8(0x112fe81d8,&UNK_10dc4f580);
  func_0x000107c613fc();
  uVar2 = 1;
  func_0x00010008747c();
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  func_0x0001000285a8(0x112fe81e0,&UNK_10dc4f690);
  func_0x000107c613fc();
  uVar2 = 1;
  func_0x00010008747c();
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  *param_1 = lVar1;
  return;
}



/* Entry: 103acee94; end: 103aceecf;  */

void FUN_103acee94(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  func_0x000100c4d388();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_1106cc5a8;
  *param_1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar2);
  return;
}



/* Entry: 103aceed0; end: 103aceeeb;  */

void FUN_103aceed0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 103aceeec; end: 103acf0f3;  */

void FUN_103aceeec(undefined8 *param_1)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  func_0x0001000285a8(0x112fe8290,&UNK_10dc4f630);
  func_0x000107c613fc();
  pcVar1 = FUN_103acedf4;
  func_0x0001000bdd8c(FUN_103acedf4,0);
  uVar4 = 0x112fe8298;
  func_0x0001000285a8(0x112fe8298,&UNK_10dc4f638);
  pcVar2 = FUN_103acee94;
  func_0x0001000cb480(FUN_103acee94,0,uVar4);
  uVar4 = 0x112fe82a0;
  func_0x0001000285a8(0x112fe82a0,&UNK_10dc4f640);
  pcVar3 = FUN_103aceed0;
  func_0x0001000cb480(FUN_103aceed0,0,uVar4);
  uVar4 = 0;
  func_0x000100c462d8(0);
  func_0x000107c610f8();
  func_0x000100c4d4e0(pcVar2,pcVar3,uVar4);
  func_0x000107c61574(pcVar1);
  *param_1 = pcVar2;
  return;
}



/* Entry: 103acf0f4; end: 103acf293;  */

/* WARNING: Possible PIC construction at 0x000103acf174: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103acf200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103acf25c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103acf1d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103acf204) */
/* WARNING: Removing unreachable block (ram,0x000103acf218) */
/* WARNING: Removing unreachable block (ram,0x000103acf228) */
/* WARNING: Removing unreachable block (ram,0x000103acf234) */
/* WARNING: Removing unreachable block (ram,0x000103acf23c) */
/* WARNING: Removing unreachable block (ram,0x000103acf220) */
/* WARNING: Removing unreachable block (ram,0x000103acf260) */
/* WARNING: Removing unreachable block (ram,0x000103acf224) */
/* WARNING: Removing unreachable block (ram,0x000103acf26c) */
/* WARNING: Removing unreachable block (ram,0x000103acf178) */
/* WARNING: Removing unreachable block (ram,0x000103acf18c) */
/* WARNING: Removing unreachable block (ram,0x000103acf19c) */
/* WARNING: Removing unreachable block (ram,0x000103acf1a8) */
/* WARNING: Removing unreachable block (ram,0x000103acf1b0) */
/* WARNING: Removing unreachable block (ram,0x000103acf194) */
/* WARNING: Removing unreachable block (ram,0x000103acf1d4) */
/* WARNING: Removing unreachable block (ram,0x000103acf1d8) */
/* WARNING: Removing unreachable block (ram,0x000103acf290) */
/* WARNING: Removing unreachable block (ram,0x000103acf1ec) */

void FUN_103acf0f4(undefined *param_1)

{
  code *pcVar1;
  
  func_0x000107e64684();
  func_0x000107c61180();
  if (param_1 == (undefined *)0x0) {
    param_1 = PTR_PTR_1126d8d40;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  func_0x000107c4e21c();
  func_0x000107c61180();
  if (param_1 != (undefined *)0x0) {
    func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103acf290);
  (*pcVar1)();
}



/* Entry: 103acf294; end: 103acf5cb; -[SCDreamsSnapRendererPluginMetadataApplier applyProcessingMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103acf294(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fe8380);
  lVar6 = puVar1[1];
  if (lVar6 != 0) {
    uVar2 = puVar1[2];
    uVar3 = puVar1[3];
    uVar7 = *puVar1;
    puVar4 = &UNK_1106cc798;
    func_0x000107c613fc(&UNK_1106cc798,0x30,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar7;
    *(long *)(puVar4 + 0x18) = lVar6;
    *(undefined8 *)(puVar4 + 0x20) = uVar2;
    *(undefined8 *)(puVar4 + 0x28) = uVar3;
    uStack_60 = 0x103acfa9c;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1010c3770;
    puStack_68 = &UNK_1106cc7b0;
    puStack_58 = puVar4;
    func_0x000107c60bc4(&puStack_80);
    puVar4 = puStack_58;
    func_0x000107c615f0(param_3);
    func_0x000107c61174(param_1);
    FUN_103acfaa8(uVar7,lVar6,uVar2,uVar3);
    func_0x000107c61574(puVar4);
    func_0x000107c5d618(param_3);
    func_0x000107c615e8(param_3);
    func_0x000107c61170(param_1);
    func_0x000107c60bd0(ppuVar5);
  }
  return;
}



/* Entry: 103acf5cc; end: 103acf78b;  */

undefined8 FUN_103acf5cc(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  lVar5 = unaff_x20;
  func_0x000107c50300();
  func_0x000107c61180();
  lVar3 = lVar5;
  func_0x000107c4e33c();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  lVar5 = lVar3;
  func_0x000107c5f9e8(lVar3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c61170(lVar3);
  if (*(long *)(lVar5 + 0x10) == 0) {
    uVar7 = 0;
    lVar3 = 0;
  }
  else {
    func_0x000107c61434(lVar5);
    lVar3 = 0x64496b636170;
    uVar6 = 0;
    func_0x000100029284();
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
      lVar3 = 0;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x38) + lVar3 * 0x10);
      uVar7 = *puVar1;
      lVar3 = puVar1[1];
      func_0x000107c61434(lVar3);
    }
    func_0x000107c6142c(lVar5);
  }
  func_0x000107c6142c(lVar5);
  func_0x000107c50300();
  func_0x000107c61180();
  lVar5 = unaff_x20;
  func_0x000107c4e33c();
  func_0x000107c61180();
  func_0x000107c61170(unaff_x20);
  lVar4 = lVar5;
  func_0x000107c5f9e8(lVar5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c61170(lVar5);
  if (*(long *)(lVar4 + 0x10) != 0) {
    func_0x000107c61434(lVar4);
    lVar5 = 0x6574616c706d6574;
    uVar6 = 0xea00000000006449;
    func_0x000100029284();
    if ((uVar6 & 1) != 0) {
      func_0x000107c61434(*(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar5 * 0x10 + 8));
    }
    func_0x000107c6142c(lVar4);
  }
  func_0x000107c6142c(lVar4);
  uVar2 = 0;
  if (lVar3 != 0) {
    uVar2 = uVar7;
  }
  return uVar2;
}



/* Entry: 103acf78c; end: 103acf7eb; -[SCDreamsSnapRendererPluginMetadataApplier init] */

void FUN_103acf78c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DreamsSnapRendererPluginMetadataApplyingFactoryProvider.DreamsSnapRendererPluginMetadataApplier"
                      ,0x5f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103acf7b8);
  (*pcVar1)();
}



/* Entry: 103acf7ec; end: 103acf87f; -[SCDreamsSnapRendererPluginMetadataApplier .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103acf7ec(long param_1)

{
  undefined8 *puVar1;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fe8370 + 8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fe8378));
  puVar1 = (undefined8 *)(param_1 + _DAT_112fe8380);
  func_0x000103acf850(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe8388));
  return;
}



/* Entry: 103acf880; end: 103acf89f;  */

void FUN_103acf880(void)

{
  func_0x000107c61168(&PTR_PTR_112924be0);
  return;
}



/* Entry: 103acf8a0; end: 103acf92f;  */

long FUN_103acf8a0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103acf930; end: 103acf99b;  */

undefined8 * FUN_103acf930(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103acf99c; end: 103acf9df;  */

undefined8 * FUN_103acf99c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 103acf9e0; end: 103acfaa7;  */

int FUN_103acf9e0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103acfaa8; end: 103acfad7;  */

/* WARNING: Possible PIC construction at 0x000103acfac0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103acfac4) */

void FUN_103acfaa8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
    return;
  }
  return;
}



/* Entry: 103acfad8; end: 103acfadf;  */

void FUN_103acfad8(long param_1,long param_2)

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



/* Entry: 103acfae0; end: 103acfc43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103acfae0(long param_1,long param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long *plVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  func_0x0001000d224c(&lStack_58);
  if (lStack_58 != 0) {
    lVar3 = lStack_58;
    func_0x000108c2bec4();
    if (((int)lVar3 != 0) && (lVar3 = param_1, func_0x000107c5db44(), (int)lVar3 != 0)) {
      func_0x000107c4b1dc();
      func_0x000107c61180();
      if (param_1 != 0) {
        lVar4 = param_1;
        func_0x000107c5faec();
        func_0x000107c61170(param_1);
        uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112fe83b8);
        lVar5 = 0;
        FUN_103acf880();
        lVar6 = lVar5;
        func_0x000107c610f8();
        puVar1 = (undefined8 *)(lVar6 + _DAT_112fe8380);
        puVar1[1] = 0;
        *puVar1 = 0;
        puVar1[3] = 0;
        puVar1[2] = 0;
        lVar3 = _DAT_112fe8388;
        puVar7 = PTR_PTR_1126ae810;
        func_0x000107c610f8();
        func_0x000107c453e4();
        *(undefined **)(lVar6 + lVar3) = puVar7;
        plVar8 = (long *)(lVar6 + _DAT_112fe8370);
        *plVar8 = lVar4;
        plVar8[1] = param_2;
        *(undefined8 *)(lVar6 + _DAT_112fe8378) = uVar9;
        puVar7 = PTR_s_init_1125d9248;
        lStack_68 = lVar6;
        lStack_60 = lVar5;
        func_0x000107c6157c(uVar9);
        plVar8 = &lStack_68;
        func_0x000107c61154(plVar8,puVar7);
        func_0x000107c61180();
        func_0x000103acefd4();
        func_0x000107c615e8(lStack_58);
        func_0x000107c61170(plVar8);
        return plVar8;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103acfc44);
      (*pcVar2)();
    }
    func_0x000107c615e8(lStack_58);
  }
  return (long *)0x0;
}



/* Entry: 103acfc44; end: 103acfc9f; -[_TtC55DreamsSnapRendererPluginMetadataApplyingFactoryProvider47DreamsSnapRendererPluginMetadataApplyingFactory createProcessingMetadataApplierWithLensEffectMetadataProvider:] */

void FUN_103acfc44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103acfae0(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103acfca0; end: 103acfcff; -[_TtC55DreamsSnapRendererPluginMetadataApplyingFactoryProvider47DreamsSnapRendererPluginMetadataApplyingFactory init] */

void FUN_103acfca0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DreamsSnapRendererPluginMetadataApplyingFactoryProvider.DreamsSnapRendererPluginMetadataApplyingFactory"
                      ,0x67,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103acfccc);
  (*pcVar1)();
}



/* Entry: 103acfd00; end: 103acfd37; -[_TtC55DreamsSnapRendererPluginMetadataApplyingFactoryProvider47DreamsSnapRendererPluginMetadataApplyingFactory .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103acfd1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103acfd20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103acfd00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fe83b8));
  return;
}



/* Entry: 103acfd38; end: 103acfd77;  */

void FUN_103acfd38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 103acfd78; end: 103acfd93;  */

/* WARNING: Possible PIC construction at 0x000103acfd84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103acfd88) */

void FUN_103acfd78(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103acfd94; end: 103acfe03;  */

void FUN_103acfd94(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103acfe04; end: 103acff0b; -[ExternalMusicOffscreenPlaybackEventServices setPlaybackEventNotifierObjc:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103acfe04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe84d8;
  func_0x000107c61428(param_1 + _DAT_112fe84d8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103acff0c; end: 103acff6b; -[ExternalMusicOffscreenPlaybackEventServices init] */

void FUN_103acff0c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ExternalMusicOffscreenPlaybackEventServices.ExternalMusicOffscreenPlaybackEventServices"
                      ,0x57,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103acff38);
  (*pcVar1)();
}



/* Entry: 103acff6c; end: 103acffb3; -[ExternalMusicOffscreenPlaybackEventServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103acff88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103acff8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103acff6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fe84d0));
  return;
}



/* Entry: 103acffb4; end: 103acffc7;  */

bool FUN_103acffb4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103acffc8; end: 103ad0073;  */

void FUN_103acffc8(void)

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



/* Entry: 103ad0074; end: 103ad0077;  */

void FUN_103ad0074(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe8510 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc4f850;
  func_0x000107c61520(&UNK_10dc4f850,&UNK_1106cc8f0);
  puRam0000000112fe8510 = puVar1;
  return;
}



/* Entry: 103ad0078; end: 103ad00b7;  */

void FUN_103ad0078(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe8510 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc4f850;
  func_0x000107c61520(&UNK_10dc4f850,&UNK_1106cc8f0);
  puRam0000000112fe8510 = puVar1;
  return;
}



/* Entry: 103ad00b8; end: 103ad0223;  */

int FUN_103ad00b8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103ad0134;
        goto LAB_103ad0118;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103ad0118:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_103ad0134:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103ad0224; end: 103ad025f;  */

undefined8 * FUN_103ad0224(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 103ad0260; end: 103ad02c3;  */

undefined8 * FUN_103ad0260(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 103ad02c4; end: 103ad030f;  */

undefined8 * FUN_103ad02c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 103ad0310; end: 103ad03ab;  */

int FUN_103ad0310(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103ad03ac; end: 103ad03db;  */

/* WARNING: Possible PIC construction at 0x000103ad03c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ad03cc) */

void FUN_103ad03ac(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 103ad03dc; end: 103ad04b3;  */

undefined8 * FUN_103ad03dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[4];
  param_1[4] = uVar2;
  func_0x000107c61434();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  return param_1;
}



/* Entry: 103ad04b4; end: 103ad0507;  */

undefined8 * FUN_103ad04b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  func_0x000107c61170(param_1[3]);
  uVar2 = param_1[4];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  func_0x000107c61170(uVar2);
  return param_1;
}



/* Entry: 103ad0508; end: 103ad05af;  */

int FUN_103ad0508(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}


