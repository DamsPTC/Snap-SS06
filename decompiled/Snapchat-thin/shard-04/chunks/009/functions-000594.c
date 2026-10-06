/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1039b34cc; end: 1039b356b;  */

void FUN_1039b34cc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039b356c; end: 1039b35d7;  */

void FUN_1039b356c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039b35d8; end: 1039b3637; -[_TtC41ComposerActiveUserSessionScopeGraphBridge49ComposerActiveUserSessionScopeGraphBridgeServices init] */

void FUN_1039b35d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComposerActiveUserSessionScopeGraphBridge.ComposerActiveUserSessionScopeGraphBridgeServices"
                      ,0x5b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039b3604);
  (*pcVar1)();
}



/* Entry: 1039b3638; end: 1039b3647; -[_TtC41ComposerActiveUserSessionScopeGraphBridge49ComposerActiveUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b3638(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fc1528));
  return;
}



/* Entry: 1039b3648; end: 1039b36a3;  */

void FUN_1039b3648(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112fc1518,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112fc1518,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1039b36a4; end: 1039b36db;  */

undefined1  [16] FUN_1039b36a4(void)

{
  return ZEXT816(0x1106b82f8);
}



/* Entry: 1039b36dc; end: 1039b371f; -[SCComposerActiveUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_1039b36dc(undefined8 param_1)

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



/* Entry: 1039b3720; end: 1039b3753;  */

void FUN_1039b3720(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039b3754; end: 1039b379b; -[SCComposerActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039b3780: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039b3784) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b3754(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fc1580);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fc1588));
  return;
}



/* Entry: 1039b379c; end: 1039b37bb;  */

void FUN_1039b379c(void)

{
  func_0x000107c61168(&PTR_PTR_11290e878);
  return;
}



/* Entry: 1039b37bc; end: 1039b37c7; -[SCSCActiveUserScopedValdiRuntimeServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b37bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc15c0;
  func_0x000107c61428(param_1 + _DAT_112fc15c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039b37c8; end: 1039b37d3; -[SCSCActiveUserScopedValdiRuntimeServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b37c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc15c0;
  func_0x000107c61428(param_1 + _DAT_112fc15c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039b37d4; end: 1039b37df; -[SCSCActiveUserScopedValdiRuntimeServicesSaberServiceProvider composerActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b37d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc15c8;
  func_0x000107c61428(param_1 + _DAT_112fc15c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039b37e0; end: 1039b3823;  */

void FUN_1039b37e0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1039b3824; end: 1039b382f; -[SCSCActiveUserScopedValdiRuntimeServicesSaberServiceProvider setComposerActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b3824(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc15c8;
  func_0x000107c61428(param_1 + _DAT_112fc15c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039b3830; end: 1039b3883;  */

void FUN_1039b3830(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039b3884; end: 1039b3a97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1039b3884(void)

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
    func_0x000107c3ff64();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001039b34f0();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fc1528);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fc15d0);
      *(long *)(unaff_x20 + _DAT_112fc15d0) = lVar4;
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
                      "ComposerActiveUserSessionScopeGraphBridge/SCSCActiveUserScopedValdiRuntimeServicesSaberServiceProvider.swift"
                      ,0x6c,2,0x1c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039b39b0);
  (*pcVar1)();
}



/* Entry: 1039b3a98; end: 1039b3acb; -[SCSCActiveUserScopedValdiRuntimeServicesSaberServiceProvider provide] */

void FUN_1039b3a98(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1039b3884();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039b3acc; end: 1039b3aff; -[SCSCActiveUserScopedValdiRuntimeServicesSaberServiceProvider __safeProvide] */

void FUN_1039b3acc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001039b39b0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039b3b00; end: 1039b3b43; -[SCSCActiveUserScopedValdiRuntimeServicesSaberServiceProvider end] */

void FUN_1039b3b00(undefined8 param_1)

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



/* Entry: 1039b3b44; end: 1039b3cdb;  */

void FUN_1039b3b44(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffcf) || (param_3 != -0x7ffffffef0e7ce60)) {
      uVar2 = 0xd000000000000031;
      func_0x000107c605b8(0xd000000000000031,0x800000010f1831a0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ComposerActiveUserSessionScopeGraphBridge/SCSCActiveUserScopedValdiRuntimeServicesSaberServiceProvider.swift"
                            ,0x6c,2,0x31,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1039b3cdc);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53660();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1039b3cdc; end: 1039b3d87; -[SCSCActiveUserScopedValdiRuntimeServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1039b3cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1039b3b44(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1039b3d88; end: 1039b3dfb; -[SCSCActiveUserScopedValdiRuntimeServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b3d88(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fc15c0,0);
  func_0x000107c61614(param_1 + _DAT_112fc15c8,0);
  *(undefined8 *)(param_1 + _DAT_112fc15d0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039b3dfc; end: 1039b3e2f;  */

void FUN_1039b3dfc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039b3e30; end: 1039b3e77; -[SCSCActiveUserScopedValdiRuntimeServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b3e30(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fc15c0);
  func_0x000107c61610(param_1 + _DAT_112fc15c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fc15d0));
  return;
}



/* Entry: 1039b3e78; end: 1039b3e97;  */

void FUN_1039b3e78(void)

{
  func_0x000107c61168(&PTR_PTR_112fc1618);
  return;
}



/* Entry: 1039b3e98; end: 1039b3f1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1039b3e98(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100a9ec58();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fc1680) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fc1688) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039b3f20);
  (*pcVar1)();
}



/* Entry: 1039b3f20; end: 1039b3f7f; -[_TtC40ContextActiveUserSessionScopeGraphBridge55ContextActiveUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_1039b3f20(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextActiveUserSessionScopeGraphBridge.ContextActiveUserSessionScopeGraphBridgeSaberEntryPoint"
                      ,0x60,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039b3f4c);
  (*pcVar1)();
}



/* Entry: 1039b3f80; end: 1039b3fb7; -[_TtC40ContextActiveUserSessionScopeGraphBridge55ContextActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039b3f9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039b3fa0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b3f80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fc1680));
  return;
}



/* Entry: 1039b3fb8; end: 1039b3fdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b3fb8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fc1688),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fc1680));
  return;
}



/* Entry: 1039b3fe0; end: 1039b407b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1039b3fe0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fc1b68);
  *(undefined8 *)(unaff_x20 + _DAT_112fc16b8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fc16c0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1039b407c; end: 1039b40db; -[_TtC40ContextActiveUserSessionScopeGraphBridge45SCContextNotificationsServicesSaberEntryPoint init] */

void FUN_1039b407c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextActiveUserSessionScopeGraphBridge.SCContextNotificationsServicesSaberEntryPoint"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039b40a8);
  (*pcVar1)();
}



/* Entry: 1039b40dc; end: 1039b416f; -[_TtC40ContextActiveUserSessionScopeGraphBridge45SCContextNotificationsServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b40dc(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fc16b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fc16c0));
  return;
}



/* Entry: 1039b4170; end: 1039b4177;  */

undefined8 FUN_1039b4170(void)

{
  return 0;
}



/* Entry: 1039b4178; end: 1039b4213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1039b4178(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fc1b78);
  *(undefined8 *)(unaff_x20 + _DAT_112fc16f0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fc16f8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1039b4214; end: 1039b4273; -[_TtC40ContextActiveUserSessionScopeGraphBridge45SCContextPostStoryDataServicesSaberEntryPoint init] */

void FUN_1039b4214(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextActiveUserSessionScopeGraphBridge.SCContextPostStoryDataServicesSaberEntryPoint"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039b4240);
  (*pcVar1)();
}



/* Entry: 1039b4274; end: 1039b4307; -[_TtC40ContextActiveUserSessionScopeGraphBridge45SCContextPostStoryDataServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b4274(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fc16f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fc16f8));
  return;
}



/* Entry: 1039b4308; end: 1039b430f;  */

undefined8 FUN_1039b4308(void)

{
  return 0;
}



/* Entry: 1039b4310; end: 1039b4373;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039b4310(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fc1b48);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039b4374; end: 1039b437b;  */

void FUN_1039b4374(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039b437c; end: 1039b441b;  */

void FUN_1039b437c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039b441c; end: 1039b443b;  */

void FUN_1039b441c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039b443c; end: 1039b449f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039b443c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fc1b50);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039b44a0; end: 1039b44a7;  */

void FUN_1039b44a0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039b44a8; end: 1039b4547;  */

void FUN_1039b44a8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039b4548; end: 1039b4567;  */

void FUN_1039b4548(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039b4568; end: 1039b45cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039b4568(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fc1b58);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039b45cc; end: 1039b45d3;  */

void FUN_1039b45cc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039b45d4; end: 1039b4673;  */

void FUN_1039b45d4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039b4674; end: 1039b4693;  */

void FUN_1039b4674(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039b4694; end: 1039b46f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039b4694(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fc1b60);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039b46f8; end: 1039b46ff;  */

void FUN_1039b46f8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039b4700; end: 1039b479f;  */

void FUN_1039b4700(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039b47a0; end: 1039b47bf;  */

void FUN_1039b47a0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039b47c0; end: 1039b4823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039b47c0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fc1b70);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039b4824; end: 1039b482b;  */

void FUN_1039b4824(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039b482c; end: 1039b48cb;  */

void FUN_1039b482c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039b48cc; end: 1039b48eb;  */

void FUN_1039b48cc(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039b48ec; end: 1039b49af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b48ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fc1b48) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fc1b50) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fc1b58) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fc1b60) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fc1b68) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112fc1b70) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112fc1b78) = param_7;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039b49b0; end: 1039b4a0f; -[_TtC40ContextActiveUserSessionScopeGraphBridge48ContextActiveUserSessionScopeGraphBridgeServices init] */

void FUN_1039b49b0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextActiveUserSessionScopeGraphBridge.ContextActiveUserSessionScopeGraphBridgeServices"
                      ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039b49dc);
  (*pcVar1)();
}



/* Entry: 1039b4a10; end: 1039b4af3; -[_TtC40ContextActiveUserSessionScopeGraphBridge48ContextActiveUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039b4a2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039b4a4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039b4a6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039b4a50) */
/* WARNING: Removing unreachable block (ram,0x0001039b4a30) */
/* WARNING: Removing unreachable block (ram,0x0001039b4a70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b4a10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fc1b68));
  return;
}



/* Entry: 1039b4af4; end: 1039b4b2b;  */

undefined1  [16] FUN_1039b4af4(void)

{
  return ZEXT816(0x1106b8550);
}



/* Entry: 1039b4b2c; end: 1039b4b6f; -[SCContextActiveUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_1039b4b2c(undefined8 param_1)

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



/* Entry: 1039b4b70; end: 1039b4ba3;  */

void FUN_1039b4b70(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039b4ba4; end: 1039b4beb; -[SCContextActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039b4bd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039b4bd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b4ba4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fc1bd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fc1bd8));
  return;
}



/* Entry: 1039b4bec; end: 1039b4c0b;  */

void FUN_1039b4bec(void)

{
  func_0x000107c61168(&PTR_PTR_11290ecd0);
  return;
}



/* Entry: 1039b4c0c; end: 1039b4c4f; -[SCSCContextNotificationsServicesSaberEntryPoint end] */

void FUN_1039b4c0c(undefined8 param_1)

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



/* Entry: 1039b4c50; end: 1039b4c83;  */

void FUN_1039b4c50(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039b4c84; end: 1039b4cdb; -[SCSCContextNotificationsServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039b4cc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039b4cc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b4c84(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fc1c10);
  func_0x000107c61610(param_1 + _DAT_112fc1c18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fc1c20));
  return;
}



/* Entry: 1039b4cdc; end: 1039b4cfb;  */

void FUN_1039b4cdc(void)

{
  func_0x000107c61168(&PTR_PTR_11290ed98);
  return;
}



/* Entry: 1039b4cfc; end: 1039b4d3f; -[SCSCContextPostStoryDataServicesSaberEntryPoint end] */

void FUN_1039b4cfc(undefined8 param_1)

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



/* Entry: 1039b4d40; end: 1039b4d73;  */

void FUN_1039b4d40(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039b4d74; end: 1039b4dcb; -[SCSCContextPostStoryDataServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039b4db0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039b4db4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b4d74(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fc1c58);
  func_0x000107c61610(param_1 + _DAT_112fc1c60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fc1c68));
  return;
}



/* Entry: 1039b4dcc; end: 1039b4deb;  */

void FUN_1039b4dcc(void)

{
  func_0x000107c61168(&PTR_PTR_11290ee68);
  return;
}



/* Entry: 1039b4dec; end: 1039b4df7; -[SCAIFTopLevelCardsHelperServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b4dec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc1ca0;
  func_0x000107c61428(param_1 + _DAT_112fc1ca0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039b4df8; end: 1039b4e03; -[SCAIFTopLevelCardsHelperServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b4df8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc1ca0;
  func_0x000107c61428(param_1 + _DAT_112fc1ca0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039b4e04; end: 1039b4e0f; -[SCAIFTopLevelCardsHelperServicesSaberServiceProvider contextActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b4e04(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc1ca8;
  func_0x000107c61428(param_1 + _DAT_112fc1ca8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039b4e10; end: 1039b4e53;  */

void FUN_1039b4e10(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1039b4e54; end: 1039b4e5f; -[SCAIFTopLevelCardsHelperServicesSaberServiceProvider setContextActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b4e54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc1ca8;
  func_0x000107c61428(param_1 + _DAT_112fc1ca8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039b4e60; end: 1039b4eb3;  */

void FUN_1039b4e60(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039b4eb4; end: 1039b50c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1039b4eb4(void)

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
    func_0x000107c40548();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001039b43a0();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fc1b48);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fc1cb0);
      *(long *)(unaff_x20 + _DAT_112fc1cb0) = lVar4;
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
                      "ContextActiveUserSessionScopeGraphBridge/SCAIFTopLevelCardsHelperServicesSaberServiceProvider.swift"
                      ,99,2,0x22,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039b4fe0);
  (*pcVar1)();
}



/* Entry: 1039b50c8; end: 1039b50fb; -[SCAIFTopLevelCardsHelperServicesSaberServiceProvider provide] */

void FUN_1039b50c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1039b4eb4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039b50fc; end: 1039b512f; -[SCAIFTopLevelCardsHelperServicesSaberServiceProvider __safeProvide] */

void FUN_1039b50fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001039b4fe0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039b5130; end: 1039b5173; -[SCAIFTopLevelCardsHelperServicesSaberServiceProvider end] */

void FUN_1039b5130(undefined8 param_1)

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



/* Entry: 1039b5174; end: 1039b530b;  */

void FUN_1039b5174(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef0e7c9f0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000030,0x800000010f183610,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ContextActiveUserSessionScopeGraphBridge/SCAIFTopLevelCardsHelperServicesSaberServiceProvider.swift"
                            ,99,2,0x37,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1039b530c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c538d0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1039b530c; end: 1039b53b7; -[SCAIFTopLevelCardsHelperServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1039b530c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1039b5174(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1039b53b8; end: 1039b542b; -[SCAIFTopLevelCardsHelperServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b53b8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fc1ca0,0);
  func_0x000107c61614(param_1 + _DAT_112fc1ca8,0);
  *(undefined8 *)(param_1 + _DAT_112fc1cb0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039b542c; end: 1039b545f;  */

void FUN_1039b542c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039b5460; end: 1039b54a7; -[SCAIFTopLevelCardsHelperServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b5460(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fc1ca0);
  func_0x000107c61610(param_1 + _DAT_112fc1ca8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fc1cb0));
  return;
}



/* Entry: 1039b54a8; end: 1039b54c7;  */

void FUN_1039b54a8(void)

{
  func_0x000107c61168(&PTR_PTR_112fc1cf8);
  return;
}



/* Entry: 1039b54c8; end: 1039b54d3; -[SCSCContextCardsServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b54c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc1d60;
  func_0x000107c61428(param_1 + _DAT_112fc1d60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039b54d4; end: 1039b54df; -[SCSCContextCardsServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b54d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc1d60;
  func_0x000107c61428(param_1 + _DAT_112fc1d60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039b54e0; end: 1039b54eb; -[SCSCContextCardsServicesSaberServiceProvider contextActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b54e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc1d68;
  func_0x000107c61428(param_1 + _DAT_112fc1d68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039b54ec; end: 1039b552f;  */

void FUN_1039b54ec(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1039b5530; end: 1039b553b; -[SCSCContextCardsServicesSaberServiceProvider setContextActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039b5530(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc1d68;
  func_0x000107c61428(param_1 + _DAT_112fc1d68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039b553c; end: 1039b558f;  */

void FUN_1039b553c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039b5590; end: 1039b57a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1039b5590(void)

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
    func_0x000107c40548();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001039b44cc();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fc1b50);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fc1d70);
      *(long *)(unaff_x20 + _DAT_112fc1d70) = lVar4;
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
                      "ContextActiveUserSessionScopeGraphBridge/SCSCContextCardsServicesSaberServiceProvider.swift"
                      ,0x5b,2,0x22,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039b56bc);
  (*pcVar1)();
}



/* Entry: 1039b57a4; end: 1039b57d7; -[SCSCContextCardsServicesSaberServiceProvider provide] */

void FUN_1039b57a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1039b5590();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039b57d8; end: 1039b580b; -[SCSCContextCardsServicesSaberServiceProvider __safeProvide] */

void FUN_1039b57d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001039b56bc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039b580c; end: 1039b584f; -[SCSCContextCardsServicesSaberServiceProvider end] */

void FUN_1039b580c(undefined8 param_1)

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


