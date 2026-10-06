/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1037e5074; end: 1037e520b;  */

void FUN_1037e5074(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e95d20)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010f16a2e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CmpUserNavigationScopeGraphBridge/SCPromoteSnapServicesSaberServiceProvider.swift"
                            ,0x51,2,0x31,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1037e520c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53504();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1037e520c; end: 1037e52b7; -[SCPromoteSnapServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1037e520c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1037e5074(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1037e52b8; end: 1037e532b; -[SCPromoteSnapServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037e52b8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f97bb8,0);
  func_0x000107c61614(param_1 + _DAT_112f97bc0,0);
  *(undefined8 *)(param_1 + _DAT_112f97bc8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037e532c; end: 1037e535f;  */

void FUN_1037e532c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037e5360; end: 1037e53a7; -[SCPromoteSnapServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037e5360(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f97bb8);
  func_0x000107c61610(param_1 + _DAT_112f97bc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f97bc8));
  return;
}



/* Entry: 1037e53a8; end: 1037e53c7;  */

void FUN_1037e53a8(void)

{
  func_0x000107c61168(&PTR_PTR_112f97c10);
  return;
}



/* Entry: 1037e53c8; end: 1037e544f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1037e53c8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100acf014();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f97c78) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f97c80) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037e5450);
  (*pcVar1)();
}



/* Entry: 1037e5450; end: 1037e54af; -[_TtC33ComUserNavigationScopeGraphBridge48ComUserNavigationScopeGraphBridgeSaberEntryPoint init] */

void FUN_1037e5450(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComUserNavigationScopeGraphBridge.ComUserNavigationScopeGraphBridgeSaberEntryPoint"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037e547c);
  (*pcVar1)();
}



/* Entry: 1037e54b0; end: 1037e54e7; -[_TtC33ComUserNavigationScopeGraphBridge48ComUserNavigationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037e54cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037e54d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037e54b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f97c78));
  return;
}



/* Entry: 1037e54e8; end: 1037e550f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037e54e8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f97c80),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f97c78));
  return;
}



/* Entry: 1037e5510; end: 1037e5573;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1037e5510(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f98000);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1037e5574; end: 1037e557b;  */

void FUN_1037e5574(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1037e557c; end: 1037e559f;  */

void FUN_1037e557c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037e55a0; end: 1037e55bf;  */

void FUN_1037e55a0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1037e55c0; end: 1037e5623;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1037e55c0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f98008);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1037e5624; end: 1037e562b;  */

void FUN_1037e5624(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1037e562c; end: 1037e56cb;  */

void FUN_1037e562c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037e56cc; end: 1037e56eb;  */

void FUN_1037e56cc(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1037e56ec; end: 1037e574f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1037e56ec(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f98010);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1037e5750; end: 1037e5757;  */

void FUN_1037e5750(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1037e5758; end: 1037e57f7;  */

void FUN_1037e5758(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037e57f8; end: 1037e5817;  */

void FUN_1037e57f8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1037e5818; end: 1037e587b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1037e5818(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f98018);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1037e587c; end: 1037e5883;  */

void FUN_1037e587c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1037e5884; end: 1037e5923;  */

void FUN_1037e5884(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037e5924; end: 1037e5943;  */

void FUN_1037e5924(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1037e5944; end: 1037e59cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037e5944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f98000) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f98008) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f98010) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f98018) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037e59d0; end: 1037e5a2f; -[_TtC33ComUserNavigationScopeGraphBridge41ComUserNavigationScopeGraphBridgeServices init] */

void FUN_1037e59d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComUserNavigationScopeGraphBridge.ComUserNavigationScopeGraphBridgeServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037e59fc);
  (*pcVar1)();
}



/* Entry: 1037e5a30; end: 1037e5ae3; -[_TtC33ComUserNavigationScopeGraphBridge41ComUserNavigationScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037e5a4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037e5a6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037e5a50) */
/* WARNING: Removing unreachable block (ram,0x0001037e5a70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037e5a30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f98000));
  return;
}



/* Entry: 1037e5ae4; end: 1037e5b1b;  */

undefined1  [16] FUN_1037e5ae4(void)

{
  return ZEXT816(0x110697418);
}



/* Entry: 1037e5b1c; end: 1037e5b5f; -[SCComUserNavigationScopeGraphBridgeSaberEntryPoint end] */

void FUN_1037e5b1c(undefined8 param_1)

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



/* Entry: 1037e5b60; end: 1037e5b93;  */

void FUN_1037e5b60(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037e5b94; end: 1037e5bdb; -[SCComUserNavigationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037e5bc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037e5bc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037e5b94(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f98070);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f98078));
  return;
}



/* Entry: 1037e5bdc; end: 1037e5bfb;  */

void FUN_1037e5bdc(void)

{
  func_0x000107c61168(&PTR_PTR_1128eeb68);
  return;
}



/* Entry: 1037e5bfc; end: 1037e5d27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037e5bfc(void)

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
    func_0x000107c3fdf8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000100b7fa7c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f98000);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f980c0);
      *(long *)(unaff_x20 + _DAT_112f980c0) = lVar4;
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
                      "ComUserNavigationScopeGraphBridge/SCSCCommerceImmediateLaunchServicesSaberServiceProvider.swift"
                      ,0x5f,2,0x1e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037e5d28);
  (*pcVar1)();
}



/* Entry: 1037e5d28; end: 1037e5d5b; -[SCSCCommerceImmediateLaunchServicesSaberServiceProvider provide] */

void FUN_1037e5d28(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1037e5bfc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037e5d5c; end: 1037e5d9f; -[SCSCCommerceImmediateLaunchServicesSaberServiceProvider end] */

void FUN_1037e5d5c(undefined8 param_1)

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



/* Entry: 1037e5da0; end: 1037e5dd3;  */

void FUN_1037e5da0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037e5dd4; end: 1037e5e1b; -[SCSCCommerceImmediateLaunchServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037e5dd4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f980b0);
  func_0x000107c61610(param_1 + _DAT_112f980b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f980c0));
  return;
}



/* Entry: 1037e5e1c; end: 1037e5e3b;  */

void FUN_1037e5e1c(void)

{
  func_0x000107c61168(&PTR_PTR_112f98108);
  return;
}



/* Entry: 1037e5e3c; end: 1037e5e47; -[SCSCCommerceOperaPluginServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037e5e3c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f98170;
  func_0x000107c61428(param_1 + _DAT_112f98170,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037e5e48; end: 1037e5e53; -[SCSCCommerceOperaPluginServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037e5e48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f98170;
  func_0x000107c61428(param_1 + _DAT_112f98170,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037e5e54; end: 1037e5e5f; -[SCSCCommerceOperaPluginServicesSaberServiceProvider comUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037e5e54(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f98178;
  func_0x000107c61428(param_1 + _DAT_112f98178,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037e5e60; end: 1037e5ea3;  */

void FUN_1037e5e60(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1037e5ea4; end: 1037e5eaf; -[SCSCCommerceOperaPluginServicesSaberServiceProvider setComUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037e5ea4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f98178;
  func_0x000107c61428(param_1 + _DAT_112f98178,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037e5eb0; end: 1037e5f03;  */

void FUN_1037e5eb0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037e5f04; end: 1037e6117;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037e5f04(void)

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
    func_0x000107c3fdf8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001037e5650();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f98008);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f98180);
      *(long *)(unaff_x20 + _DAT_112f98180) = lVar4;
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
                      "ComUserNavigationScopeGraphBridge/SCSCCommerceOperaPluginServicesSaberServiceProvider.swift"
                      ,0x5b,2,0x1e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037e6030);
  (*pcVar1)();
}



/* Entry: 1037e6118; end: 1037e614b; -[SCSCCommerceOperaPluginServicesSaberServiceProvider provide] */

void FUN_1037e6118(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1037e5f04();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037e614c; end: 1037e617f; -[SCSCCommerceOperaPluginServicesSaberServiceProvider __safeProvide] */

void FUN_1037e614c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001037e6030();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037e6180; end: 1037e61c3; -[SCSCCommerceOperaPluginServicesSaberServiceProvider end] */

void FUN_1037e6180(undefined8 param_1)

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



/* Entry: 1037e61c4; end: 1037e635b;  */

void FUN_1037e61c4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e959d0)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010f16a630,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ComUserNavigationScopeGraphBridge/SCSCCommerceOperaPluginServicesSaberServiceProvider.swift"
                            ,0x5b,2,0x33,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1037e635c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c535ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1037e635c; end: 1037e6407; -[SCSCCommerceOperaPluginServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1037e635c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1037e61c4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1037e6408; end: 1037e647b; -[SCSCCommerceOperaPluginServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037e6408(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f98170,0);
  func_0x000107c61614(param_1 + _DAT_112f98178,0);
  *(undefined8 *)(param_1 + _DAT_112f98180) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037e647c; end: 1037e64af;  */

void FUN_1037e647c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037e64b0; end: 1037e64f7; -[SCSCCommerceOperaPluginServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037e64b0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f98170);
  func_0x000107c61610(param_1 + _DAT_112f98178);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f98180));
  return;
}



/* Entry: 1037e64f8; end: 1037e6517;  */

void FUN_1037e64f8(void)

{
  func_0x000107c61168(&PTR_PTR_112f981c8);
  return;
}



/* Entry: 1037e6518; end: 1037e6523; -[SCSCCommerceOperaServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037e6518(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f98230;
  func_0x000107c61428(param_1 + _DAT_112f98230,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037e6524; end: 1037e652f; -[SCSCCommerceOperaServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037e6524(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f98230;
  func_0x000107c61428(param_1 + _DAT_112f98230,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037e6530; end: 1037e653b; -[SCSCCommerceOperaServicesSaberServiceProvider comUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037e6530(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f98238;
  func_0x000107c61428(param_1 + _DAT_112f98238,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037e653c; end: 1037e657f;  */

void FUN_1037e653c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1037e6580; end: 1037e658b; -[SCSCCommerceOperaServicesSaberServiceProvider setComUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037e6580(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f98238;
  func_0x000107c61428(param_1 + _DAT_112f98238,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037e658c; end: 1037e65df;  */

void FUN_1037e658c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037e65e0; end: 1037e67f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037e65e0(void)

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
    func_0x000107c3fdf8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001037e577c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f98010);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f98240);
      *(long *)(unaff_x20 + _DAT_112f98240) = lVar4;
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
                      "ComUserNavigationScopeGraphBridge/SCSCCommerceOperaServicesSaberServiceProvider.swift"
                      ,0x55,2,0x1e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037e670c);
  (*pcVar1)();
}



/* Entry: 1037e67f4; end: 1037e6827; -[SCSCCommerceOperaServicesSaberServiceProvider provide] */

void FUN_1037e67f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1037e65e0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037e6828; end: 1037e685b; -[SCSCCommerceOperaServicesSaberServiceProvider __safeProvide] */

void FUN_1037e6828(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001037e670c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037e685c; end: 1037e689f; -[SCSCCommerceOperaServicesSaberServiceProvider end] */

void FUN_1037e685c(undefined8 param_1)

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



/* Entry: 1037e68a0; end: 1037e6a37;  */

void FUN_1037e68a0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e959d0)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010f16a630,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ComUserNavigationScopeGraphBridge/SCSCCommerceOperaServicesSaberServiceProvider.swift"
                            ,0x55,2,0x33,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1037e6a38);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c535ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1037e6a38; end: 1037e6ae3; -[SCSCCommerceOperaServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1037e6a38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1037e68a0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1037e6ae4; end: 1037e6b57; -[SCSCCommerceOperaServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037e6ae4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f98230,0);
  func_0x000107c61614(param_1 + _DAT_112f98238,0);
  *(undefined8 *)(param_1 + _DAT_112f98240) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037e6b58; end: 1037e6b8b;  */

void FUN_1037e6b58(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037e6b8c; end: 1037e6bd3; -[SCSCCommerceOperaServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037e6b8c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f98230);
  func_0x000107c61610(param_1 + _DAT_112f98238);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f98240));
  return;
}



/* Entry: 1037e6bd4; end: 1037e6bf3;  */

void FUN_1037e6bd4(void)

{
  func_0x000107c61168(&PTR_PTR_112f98288);
  return;
}



/* Entry: 1037e6bf4; end: 1037e6bff; -[SCSCCommerceShoppingLensLaunchServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037e6bf4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f982f0;
  func_0x000107c61428(param_1 + _DAT_112f982f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037e6c00; end: 1037e6c0b; -[SCSCCommerceShoppingLensLaunchServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037e6c00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f982f0;
  func_0x000107c61428(param_1 + _DAT_112f982f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037e6c0c; end: 1037e6c17; -[SCSCCommerceShoppingLensLaunchServicesSaberServiceProvider comUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037e6c0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f982f8;
  func_0x000107c61428(param_1 + _DAT_112f982f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037e6c18; end: 1037e6c5b;  */

void FUN_1037e6c18(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1037e6c5c; end: 1037e6c67; -[SCSCCommerceShoppingLensLaunchServicesSaberServiceProvider setComUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037e6c5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f982f8;
  func_0x000107c61428(param_1 + _DAT_112f982f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037e6c68; end: 1037e6cbb;  */

void FUN_1037e6c68(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037e6cbc; end: 1037e6ecf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037e6cbc(void)

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
    func_0x000107c3fdf8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001037e58a8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f98018);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f98300);
      *(long *)(unaff_x20 + _DAT_112f98300) = lVar4;
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
                      "ComUserNavigationScopeGraphBridge/SCSCCommerceShoppingLensLaunchServicesSaberServiceProvider.swift"
                      ,0x62,2,0x1e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037e6de8);
  (*pcVar1)();
}



/* Entry: 1037e6ed0; end: 1037e6f03; -[SCSCCommerceShoppingLensLaunchServicesSaberServiceProvider provide] */

void FUN_1037e6ed0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1037e6cbc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037e6f04; end: 1037e6f37; -[SCSCCommerceShoppingLensLaunchServicesSaberServiceProvider __safeProvide] */

void FUN_1037e6f04(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001037e6de8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037e6f38; end: 1037e6f7b; -[SCSCCommerceShoppingLensLaunchServicesSaberServiceProvider end] */

void FUN_1037e6f38(undefined8 param_1)

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



/* Entry: 1037e6f7c; end: 1037e7113;  */

void FUN_1037e6f7c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e959d0)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010f16a630,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ComUserNavigationScopeGraphBridge/SCSCCommerceShoppingLensLaunchServicesSaberServiceProvider.swift"
                            ,0x62,2,0x33,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1037e7114);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c535ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1037e7114; end: 1037e71bf; -[SCSCCommerceShoppingLensLaunchServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1037e7114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1037e6f7c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1037e71c0; end: 1037e7233; -[SCSCCommerceShoppingLensLaunchServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037e71c0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f982f0,0);
  func_0x000107c61614(param_1 + _DAT_112f982f8,0);
  *(undefined8 *)(param_1 + _DAT_112f98300) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037e7234; end: 1037e7267;  */

void FUN_1037e7234(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037e7268; end: 1037e72af; -[SCSCCommerceShoppingLensLaunchServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037e7268(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f982f0);
  func_0x000107c61610(param_1 + _DAT_112f982f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f98300));
  return;
}



/* Entry: 1037e72b0; end: 1037e72cf;  */

void FUN_1037e72b0(void)

{
  func_0x000107c61168(&PTR_PTR_112f98348);
  return;
}



/* Entry: 1037e72d0; end: 1037e731b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037e72d0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f983b8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037e731c; end: 1037e74b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1037e731c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 in_x5;
  ulong in_x6;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  undefined *apuStack_78 [2];
  undefined8 uStack_68;
  
  uVar1 = 0;
  func_0x000100c70ba8(0);
  func_0x000107c5fc48(param_2,uVar1);
  uVar1 = 0;
  if (in_x6 >> 0x3c < 0xf) {
    func_0x000107c5ee20(in_x5,in_x6);
    uVar1 = in_x5;
  }
  if (in_stack_00000008 == 0) {
    in_stack_00000000 = 0;
  }
  else {
    func_0x000107c5fadc(in_stack_00000000,in_stack_00000008);
  }
  uVar4 = 0;
  if (in_stack_00000018 != 0) {
    func_0x000107c5fadc(in_stack_00000010,in_stack_00000018);
    uVar4 = in_stack_00000010;
  }
  uVar3 = 0;
  if (in_stack_00000028 != 0) {
    func_0x000107c5fadc(in_stack_00000020,in_stack_00000028);
    uVar3 = in_stack_00000020;
  }
  puVar2 = PTR_PTR_1126ad280;
  func_0x000107c610f8();
  func_0x000107c48f60();
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(in_stack_00000000);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  apuStack_78[0] = puVar2;
  func_0x00010008a7c8(&uStack_68,apuStack_78);
  func_0x000100083b20(apuStack_78);
  func_0x000107c61574(uStack_68);
  func_0x000107c615e8(apuStack_78[0]);
  return puVar2;
}



/* Entry: 1037e74b8; end: 1037e7703; -[_TtC32SCShoppingLensLauncherScopeProxy35SCShoppingLensLauncherScopeServices buildWithUIContainer:lenses:selectedProductId:replySnapSource:shoppingLensLaunchSource:preloadedShowcaseResponse:dpaCtaViewModel:launchSourceAdId:launchSourceAdServeItemId:launchSourceTrackId:skipCameraLaunch:delegate:] */

void FUN_1037e74b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,long param_10,long param_11,long param_12,undefined1 param_13,
                  undefined4 param_14,undefined8 param_15)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  uVar1 = 0;
  func_0x000100c70ba8();
  func_0x000107c5fc54();
  if (param_8 == 0) {
    func_0x000107c615f0(param_3);
    func_0x000107c61174(param_9);
    func_0x000107c61174(param_10);
    func_0x000107c61174(param_11);
    func_0x000107c61174(param_12);
    func_0x000107c615f0(param_15);
    func_0x000107c61174(param_1);
    uStack_b8 = 0xf000000000000000;
    uStack_b0 = 0;
    uVar2 = uVar1;
    uVar1 = uStack_b8;
  }
  else {
    func_0x000107c615f0(param_3);
    func_0x000107c61174(param_9);
    func_0x000107c61174(param_10);
    func_0x000107c61174(param_11);
    func_0x000107c61174(param_12);
    func_0x000107c615f0(param_15);
    func_0x000107c61174(param_1);
    lVar6 = param_8;
    func_0x000107c61174(param_8);
    func_0x000107c5ee30();
    uVar2 = uVar1;
    func_0x000107c61170(lVar6);
    uStack_b0 = param_8;
  }
  if (param_10 == 0) {
    lVar6 = 0;
    uVar7 = 0;
  }
  else {
    lVar6 = param_10;
    func_0x000107c5faec();
    uVar3 = uVar2;
    func_0x000107c61170(param_10);
    uVar7 = uVar2;
    uVar2 = uVar3;
  }
  if (param_11 == 0) {
    lVar4 = 0;
    uVar3 = 0;
    uVar8 = uVar2;
  }
  else {
    lVar4 = param_11;
    func_0x000107c5faec();
    uVar8 = uVar2;
    func_0x000107c61170(param_11);
    uVar3 = uVar2;
  }
  if (param_12 == 0) {
    lVar5 = 0;
    uVar8 = 0;
  }
  else {
    lVar5 = param_12;
    func_0x000107c5faec();
    func_0x000107c61170(param_12);
  }
  uVar2 = param_3;
  FUN_1037e731c(param_3,param_4,param_5,param_6,param_7,uStack_b0,uVar1,param_9,lVar6,uVar7,lVar4,
                uVar3,lVar5,uVar8,param_13);
  func_0x000107c6142c(uVar8);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar7);
  func_0x0001000b44c0(uStack_b0,uVar1);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_9);
  func_0x000107c615e8(param_15);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1037e7704; end: 1037e7737;  */

void FUN_1037e7704(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037e7738; end: 1037e7767; -[_TtC32SCShoppingLensLauncherScopeProxy35SCShoppingLensLauncherScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037e7738(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f983b8));
  return;
}



/* Entry: 1037e7768; end: 1037e77ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1037e7768(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100acf664();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f98400) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f98408) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037e77f0);
  (*pcVar1)();
}



/* Entry: 1037e77f0; end: 1037e784f; -[_TtC37ContextUserNavigationScopeGraphBridge52ContextUserNavigationScopeGraphBridgeSaberEntryPoint init] */

void FUN_1037e77f0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextUserNavigationScopeGraphBridge.ContextUserNavigationScopeGraphBridgeSaberEntryPoint"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037e781c);
  (*pcVar1)();
}



/* Entry: 1037e7850; end: 1037e7887; -[_TtC37ContextUserNavigationScopeGraphBridge52ContextUserNavigationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037e786c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037e7870) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037e7850(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f98400));
  return;
}



/* Entry: 1037e7888; end: 1037e78af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037e7888(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f98408),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f98400));
  return;
}



/* Entry: 1037e78b0; end: 1037e7913;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1037e78b0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f98ed8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1037e7914; end: 1037e791b;  */

void FUN_1037e7914(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1037e791c; end: 1037e79bb;  */

void FUN_1037e791c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}


