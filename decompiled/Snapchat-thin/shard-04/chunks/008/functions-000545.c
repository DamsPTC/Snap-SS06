/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10391b950; end: 10391b95f;  */

undefined1  [16] FUN_10391b950(void)

{
  return ZEXT816(0x1106acee8);
}



/* Entry: 10391b960; end: 10391b96f; -[_TtC35MemoriesSnapDocProvisionServicesAPI32MemoriesSnapDocProvisionServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391b960(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fae550));
  return;
}



/* Entry: 10391b970; end: 10391b9f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10391b970(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100ad3c84();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fae580) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fae588) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10391b9f8);
  (*pcVar1)();
}



/* Entry: 10391b9f8; end: 10391ba57; -[_TtC35MusicUserNavigationScopeGraphBridge50MusicUserNavigationScopeGraphBridgeSaberEntryPoint init] */

void FUN_10391b9f8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MusicUserNavigationScopeGraphBridge.MusicUserNavigationScopeGraphBridgeSaberEntryPoint"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10391ba24);
  (*pcVar1)();
}



/* Entry: 10391ba58; end: 10391ba8f; -[_TtC35MusicUserNavigationScopeGraphBridge50MusicUserNavigationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010391ba74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010391ba78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391ba58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fae580));
  return;
}



/* Entry: 10391ba90; end: 10391bab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391ba90(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fae588),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fae580));
  return;
}



/* Entry: 10391bab8; end: 10391bb1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10391bab8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fae698);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10391bb1c; end: 10391bb23;  */

void FUN_10391bb1c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10391bb24; end: 10391bbc3;  */

void FUN_10391bb24(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10391bbc4; end: 10391bc2f;  */

void FUN_10391bbc4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10391bc30; end: 10391bc8f; -[_TtC35MusicUserNavigationScopeGraphBridge43MusicUserNavigationScopeGraphBridgeServices init] */

void FUN_10391bc30(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MusicUserNavigationScopeGraphBridge.MusicUserNavigationScopeGraphBridgeServices"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10391bc5c);
  (*pcVar1)();
}



/* Entry: 10391bc90; end: 10391bc9f; -[_TtC35MusicUserNavigationScopeGraphBridge43MusicUserNavigationScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391bc90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fae698));
  return;
}



/* Entry: 10391bca0; end: 10391bcfb;  */

void FUN_10391bca0(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112fae688,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112fae688,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 10391bcfc; end: 10391bd33;  */

undefined1  [16] FUN_10391bcfc(void)

{
  return ZEXT816(0x1106ad020);
}



/* Entry: 10391bd34; end: 10391bd77; -[SCMusicUserNavigationScopeGraphBridgeSaberEntryPoint end] */

void FUN_10391bd34(undefined8 param_1)

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



/* Entry: 10391bd78; end: 10391bdab;  */

void FUN_10391bd78(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10391bdac; end: 10391bdf3; -[SCMusicUserNavigationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010391bdd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010391bddc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391bdac(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fae6f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fae6f8));
  return;
}



/* Entry: 10391bdf4; end: 10391be13;  */

void FUN_10391bdf4(void)

{
  func_0x000107c61168(&PTR_PTR_1128fff48);
  return;
}



/* Entry: 10391be14; end: 10391be1f; -[SCSCMusicFeatureLaunchServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391be14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fae730;
  func_0x000107c61428(param_1 + _DAT_112fae730,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10391be20; end: 10391be2b; -[SCSCMusicFeatureLaunchServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391be20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fae730;
  func_0x000107c61428(param_1 + _DAT_112fae730,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10391be2c; end: 10391be37; -[SCSCMusicFeatureLaunchServicesSaberServiceProvider musicUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391be2c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fae738;
  func_0x000107c61428(param_1 + _DAT_112fae738,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10391be38; end: 10391be7b;  */

void FUN_10391be38(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10391be7c; end: 10391be87; -[SCSCMusicFeatureLaunchServicesSaberServiceProvider setMusicUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391be7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fae738;
  func_0x000107c61428(param_1 + _DAT_112fae738,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10391be88; end: 10391bedb;  */

void FUN_10391be88(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10391bedc; end: 10391c0ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10391bedc(void)

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
    func_0x000107c4d2bc();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010391bb48();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fae698);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fae740);
      *(long *)(unaff_x20 + _DAT_112fae740) = lVar4;
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
                      "MusicUserNavigationScopeGraphBridge/SCSCMusicFeatureLaunchServicesSaberServiceProvider.swift"
                      ,0x5c,2,0x1c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10391c008);
  (*pcVar1)();
}



/* Entry: 10391c0f0; end: 10391c123; -[SCSCMusicFeatureLaunchServicesSaberServiceProvider provide] */

void FUN_10391c0f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10391bedc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10391c124; end: 10391c157; -[SCSCMusicFeatureLaunchServicesSaberServiceProvider __safeProvide] */

void FUN_10391c124(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010391c008();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10391c158; end: 10391c19b; -[SCSCMusicFeatureLaunchServicesSaberServiceProvider end] */

void FUN_10391c158(undefined8 param_1)

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



/* Entry: 10391c19c; end: 10391c333;  */

void FUN_10391c19c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0e8a280)) {
      uVar2 = 0xd00000000000002b;
      func_0x000107c605b8(0xd00000000000002b,0x800000010f175d80,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MusicUserNavigationScopeGraphBridge/SCSCMusicFeatureLaunchServicesSaberServiceProvider.swift"
                            ,0x5c,2,0x31,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10391c334);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c568a4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10391c334; end: 10391c3df; -[SCSCMusicFeatureLaunchServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_10391c334(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10391c19c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10391c3e0; end: 10391c453; -[SCSCMusicFeatureLaunchServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391c3e0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fae730,0);
  func_0x000107c61614(param_1 + _DAT_112fae738,0);
  *(undefined8 *)(param_1 + _DAT_112fae740) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10391c454; end: 10391c487;  */

void FUN_10391c454(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10391c488; end: 10391c4cf; -[SCSCMusicFeatureLaunchServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391c488(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fae730);
  func_0x000107c61610(param_1 + _DAT_112fae738);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fae740));
  return;
}



/* Entry: 10391c4d0; end: 10391c4ef;  */

void FUN_10391c4d0(void)

{
  func_0x000107c61168(&PTR_PTR_112fae788);
  return;
}



/* Entry: 10391c4f0; end: 10391c577;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10391c4f0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100ad42cc();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fae7f0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fae7f8) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10391c578);
  (*pcVar1)();
}



/* Entry: 10391c578; end: 10391c5d7; -[_TtC34MyaiUserNavigationScopeGraphBridge49MyaiUserNavigationScopeGraphBridgeSaberEntryPoint init] */

void FUN_10391c578(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyaiUserNavigationScopeGraphBridge.MyaiUserNavigationScopeGraphBridgeSaberEntryPoint"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10391c5a4);
  (*pcVar1)();
}



/* Entry: 10391c5d8; end: 10391c60f; -[_TtC34MyaiUserNavigationScopeGraphBridge49MyaiUserNavigationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010391c5f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010391c5f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391c5d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fae7f0));
  return;
}



/* Entry: 10391c610; end: 10391c637;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391c610(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fae7f8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fae7f0));
  return;
}



/* Entry: 10391c638; end: 10391c69b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10391c638(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fae9d8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10391c69c; end: 10391c6a3;  */

void FUN_10391c69c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10391c6a4; end: 10391c743;  */

void FUN_10391c6a4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10391c744; end: 10391c763;  */

void FUN_10391c744(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10391c764; end: 10391c7c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10391c764(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fae9e0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10391c7c8; end: 10391c7cf;  */

void FUN_10391c7c8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10391c7d0; end: 10391c86f;  */

void FUN_10391c7d0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10391c870; end: 10391c88f;  */

void FUN_10391c870(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10391c890; end: 10391c8f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391c890(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fae9d8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fae9e0) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10391c8f4; end: 10391c953; -[_TtC34MyaiUserNavigationScopeGraphBridge42MyaiUserNavigationScopeGraphBridgeServices init] */

void FUN_10391c8f4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyaiUserNavigationScopeGraphBridge.MyaiUserNavigationScopeGraphBridgeServices"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10391c920);
  (*pcVar1)();
}



/* Entry: 10391c954; end: 10391c9e7; -[_TtC34MyaiUserNavigationScopeGraphBridge42MyaiUserNavigationScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010391c970: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010391c974) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391c954(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fae9d8));
  return;
}



/* Entry: 10391c9e8; end: 10391ca1f;  */

undefined1  [16] FUN_10391c9e8(void)

{
  return ZEXT816(0x1106ad1e8);
}



/* Entry: 10391ca20; end: 10391ca63; -[SCMyaiUserNavigationScopeGraphBridgeSaberEntryPoint end] */

void FUN_10391ca20(undefined8 param_1)

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



/* Entry: 10391ca64; end: 10391ca97;  */

void FUN_10391ca64(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10391ca98; end: 10391cadf; -[SCMyaiUserNavigationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010391cac4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010391cac8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391ca98(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112faea38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112faea40));
  return;
}



/* Entry: 10391cae0; end: 10391caff;  */

void FUN_10391cae0(void)

{
  func_0x000107c61168(&PTR_PTR_1129001e8);
  return;
}



/* Entry: 10391cb00; end: 10391cb0b; -[SCMyAIInteractiveResultStoreServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391cb00(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112faea78;
  func_0x000107c61428(param_1 + _DAT_112faea78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10391cb0c; end: 10391cb17; -[SCMyAIInteractiveResultStoreServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391cb0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112faea78;
  func_0x000107c61428(param_1 + _DAT_112faea78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10391cb18; end: 10391cb23; -[SCMyAIInteractiveResultStoreServicesSaberServiceProvider myaiUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391cb18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112faea80;
  func_0x000107c61428(param_1 + _DAT_112faea80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10391cb24; end: 10391cb67;  */

void FUN_10391cb24(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10391cb68; end: 10391cb73; -[SCMyAIInteractiveResultStoreServicesSaberServiceProvider setMyaiUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391cb68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112faea80;
  func_0x000107c61428(param_1 + _DAT_112faea80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10391cb74; end: 10391cbc7;  */

void FUN_10391cb74(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10391cbc8; end: 10391cddb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10391cbc8(void)

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
    func_0x000107c4d3d0();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010391c6c8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fae9d8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112faea88);
      *(long *)(unaff_x20 + _DAT_112faea88) = lVar4;
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
                      "MyaiUserNavigationScopeGraphBridge/SCMyAIInteractiveResultStoreServicesSaberServiceProvider.swift"
                      ,0x61,2,0x1d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10391ccf4);
  (*pcVar1)();
}



/* Entry: 10391cddc; end: 10391ce0f; -[SCMyAIInteractiveResultStoreServicesSaberServiceProvider provide] */

void FUN_10391cddc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10391cbc8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10391ce10; end: 10391ce43; -[SCMyAIInteractiveResultStoreServicesSaberServiceProvider __safeProvide] */

void FUN_10391ce10(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010391ccf4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10391ce44; end: 10391ce87; -[SCMyAIInteractiveResultStoreServicesSaberServiceProvider end] */

void FUN_10391ce44(undefined8 param_1)

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



/* Entry: 10391ce88; end: 10391d01f;  */

void FUN_10391ce88(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef0e89fd0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002a,0x800000010f176030,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MyaiUserNavigationScopeGraphBridge/SCMyAIInteractiveResultStoreServicesSaberServiceProvider.swift"
                            ,0x61,2,0x32,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10391d020);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c56938();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10391d020; end: 10391d0cb; -[SCMyAIInteractiveResultStoreServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_10391d020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10391ce88(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10391d0cc; end: 10391d13f; -[SCMyAIInteractiveResultStoreServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391d0cc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112faea78,0);
  func_0x000107c61614(param_1 + _DAT_112faea80,0);
  *(undefined8 *)(param_1 + _DAT_112faea88) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10391d140; end: 10391d173;  */

void FUN_10391d140(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10391d174; end: 10391d1bb; -[SCMyAIInteractiveResultStoreServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391d174(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112faea78);
  func_0x000107c61610(param_1 + _DAT_112faea80);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112faea88));
  return;
}



/* Entry: 10391d1bc; end: 10391d1db;  */

void FUN_10391d1bc(void)

{
  func_0x000107c61168(&PTR_PTR_112faead0);
  return;
}



/* Entry: 10391d1dc; end: 10391d1e7; -[SCMyAIInteractiveShareStoreServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391d1dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112faeb38;
  func_0x000107c61428(param_1 + _DAT_112faeb38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10391d1e8; end: 10391d1f3; -[SCMyAIInteractiveShareStoreServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391d1e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112faeb38;
  func_0x000107c61428(param_1 + _DAT_112faeb38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10391d1f4; end: 10391d1ff; -[SCMyAIInteractiveShareStoreServicesSaberServiceProvider myaiUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391d1f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112faeb40;
  func_0x000107c61428(param_1 + _DAT_112faeb40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10391d200; end: 10391d243;  */

void FUN_10391d200(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10391d244; end: 10391d24f; -[SCMyAIInteractiveShareStoreServicesSaberServiceProvider setMyaiUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391d244(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112faeb40;
  func_0x000107c61428(param_1 + _DAT_112faeb40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10391d250; end: 10391d2a3;  */

void FUN_10391d250(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10391d2a4; end: 10391d4b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10391d2a4(void)

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
    func_0x000107c4d3d0();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010391c7f4();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fae9e0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112faeb48);
      *(long *)(unaff_x20 + _DAT_112faeb48) = lVar4;
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
                      "MyaiUserNavigationScopeGraphBridge/SCMyAIInteractiveShareStoreServicesSaberServiceProvider.swift"
                      ,0x60,2,0x1d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10391d3d0);
  (*pcVar1)();
}



/* Entry: 10391d4b8; end: 10391d4eb; -[SCMyAIInteractiveShareStoreServicesSaberServiceProvider provide] */

void FUN_10391d4b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10391d2a4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10391d4ec; end: 10391d51f; -[SCMyAIInteractiveShareStoreServicesSaberServiceProvider __safeProvide] */

void FUN_10391d4ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010391d3d0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10391d520; end: 10391d563; -[SCMyAIInteractiveShareStoreServicesSaberServiceProvider end] */

void FUN_10391d520(undefined8 param_1)

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



/* Entry: 10391d564; end: 10391d6fb;  */

void FUN_10391d564(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef0e89fd0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002a,0x800000010f176030,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MyaiUserNavigationScopeGraphBridge/SCMyAIInteractiveShareStoreServicesSaberServiceProvider.swift"
                            ,0x60,2,0x32,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10391d6fc);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c56938();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10391d6fc; end: 10391d7a7; -[SCMyAIInteractiveShareStoreServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_10391d6fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10391d564(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10391d7a8; end: 10391d81b; -[SCMyAIInteractiveShareStoreServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391d7a8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112faeb38,0);
  func_0x000107c61614(param_1 + _DAT_112faeb40,0);
  *(undefined8 *)(param_1 + _DAT_112faeb48) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10391d81c; end: 10391d84f;  */

void FUN_10391d81c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10391d850; end: 10391d897; -[SCMyAIInteractiveShareStoreServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391d850(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112faeb38);
  func_0x000107c61610(param_1 + _DAT_112faeb40);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112faeb48));
  return;
}



/* Entry: 10391d898; end: 10391d8ef;  */

void FUN_10391d898(void)

{
  func_0x000107c61168(&PTR_PTR_112faeb90);
  return;
}



/* Entry: 10391d8f0; end: 10391d8f3;  */

char * FUN_10391d8f0(char *param_1,char *param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (*param_1 == *param_2) {
    if (param_1[0x10] == '\x01') {
      if (param_2[0x10] != '\x01') {
        return (char *)0x0;
      }
    }
    else if (param_2[0x10] == '\x01' || *(long *)(param_1 + 8) != *(long *)(param_2 + 8)) {
      return (char *)0x0;
    }
    if (param_1[0x20] == '\x01') {
      if (param_2[0x20] != '\x01') {
        return (char *)0x0;
      }
    }
    else {
      if (param_2[0x20] == '\x01') {
        return (char *)0x0;
      }
      if (*(long *)(param_1 + 0x18) != *(long *)(param_2 + 0x18)) {
        return (char *)0x0;
      }
    }
    uVar1 = *(ulong *)(param_1 + 0x28);
    if (((uVar1 == *(ulong *)(param_2 + 0x28)) &&
        (*(long *)(param_1 + 0x30) == *(long *)(param_2 + 0x30))) ||
       (func_0x000107c605b8(uVar1,*(long *)(param_1 + 0x30),*(ulong *)(param_2 + 0x28),
                            *(long *)(param_2 + 0x30),0), (uVar1 & 1) != 0)) {
      lVar2 = 0;
      func_0x00010391d8b8();
      param_1 = param_1 + *(int *)(lVar2 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdb51e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___s10Foundation4DateV2eeoiySbAC_ACtFZ_110350b90)
                (param_1,param_2 + *(int *)(lVar2 + 0x20));
      return param_1;
    }
  }
  return (char *)0x0;
}



/* Entry: 10391d8f4; end: 10391d9eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391d8f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112faebf8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112faec00);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10391d9ec; end: 10391da1f;  */

void FUN_10391d9ec(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10391da20; end: 10391db4f; -[_TtC34MyAIInteractiveResultStoreServices34MyAIInteractiveResultStoreServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010391da3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010391da40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391da20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112faebf8));
  return;
}



/* Entry: 10391db50; end: 10391dc0f;  */

long * FUN_10391db50(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    *(char *)param_1 = (char)*param_2;
    param_1[1] = param_2[1];
    *(char *)(param_1 + 2) = (char)param_2[2];
    param_1[3] = param_2[3];
    *(char *)(param_1 + 4) = (char)param_2[4];
    lVar4 = param_2[6];
    param_1[5] = param_2[5];
    param_1[6] = lVar4;
    iVar2 = *(int *)(param_3 + 0x20);
    lVar3 = 0;
    func_0x000107c5eea4();
    pcVar6 = *(code **)(*(long *)(lVar3 + -8) + 0x10);
    func_0x000107c61434(lVar4);
    (*pcVar6)((undefined1 *)((long)param_1 + (long)iVar2),
              (undefined1 *)((long)param_2 + (long)iVar2),lVar3);
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar4 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 10391dc10; end: 10391dc53;  */

void FUN_10391dc10(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x30));
  iVar1 = *(int *)(param_2 + 0x20);
  lVar2 = 0;
  func_0x000107c5eea4();
                    /* WARNING: Could not recover jumptable at 0x00010391dc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 10391dc54; end: 10391dce7;  */

undefined1 * FUN_10391dc54(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  param_1[0x10] = param_2[0x10];
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  param_1[0x20] = param_2[0x20];
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  iVar2 = *(int *)(param_3 + 0x20);
  lVar3 = 0;
  func_0x000107c5eea4();
  pcVar4 = *(code **)(*(long *)(lVar3 + -8) + 0x10);
  func_0x000107c61434(uVar1);
  (*pcVar4)(param_1 + iVar2,param_2 + iVar2,lVar3);
  return param_1;
}



/* Entry: 10391dce8; end: 10391de8f;  */

undefined1 * FUN_10391dce8(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar3 = *(undefined8 *)(param_2 + 8);
  param_1[0x10] = param_2[0x10];
  *(undefined8 *)(param_1 + 8) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  param_1[0x20] = param_2[0x20];
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61434();
  func_0x000107c6142c(uVar3);
  iVar1 = *(int *)(param_3 + 0x20);
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 0x18))(param_1 + iVar1,param_2 + iVar1,lVar2);
  return param_1;
}



/* Entry: 10391de90; end: 10391dea7;  */

void FUN_10391de90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10391dea8; end: 10391df2f;  */

void FUN_10391dea8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = &UNK_10dc23700;
  puStack_40 = &UNK_10dc23718;
  puStack_38 = &UNK_10dc23718;
  puStack_30 = &UNK_10dc23730;
  lVar1 = 0x13f;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c6153c(param_1,0x100,5,&puStack_48,param_1 + 0x10);
  }
  return;
}



/* Entry: 10391df30; end: 10391df47;  */

void FUN_10391df30(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010391df44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 8))(param_1,0,0,param_2,param_3);
  return;
}



/* Entry: 10391df48; end: 10391e0e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10391df48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  puVar2 = auStack_70;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112faecc0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112faecc8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112faecd0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  func_0x0001028c05f4(param_7,unaff_x20 + _DAT_112faecd8);
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_7);
  return puVar2;
}



/* Entry: 10391e0e8; end: 10391e11b;  */

void FUN_10391e0e8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10391e11c; end: 10391e1eb; -[_TtC33MyAIInteractiveShareStoreServices33MyAIInteractiveShareStoreServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391e11c(long param_1)

{
  long lVar1;
  
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112faecc0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112faecc8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112faecd0));
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_112faecd8))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112faecd8));
  return;
}


