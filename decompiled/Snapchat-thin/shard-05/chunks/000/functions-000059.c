/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103aa8cf8; end: 103aa8d93;  */

undefined8 * FUN_103aa8cf8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x000101edf31c(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 103aa8d94; end: 103aa8dd7;  */

undefined8 * FUN_103aa8d94(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x000101edeb30(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 103aa8dd8; end: 103aa8eaf;  */

int FUN_103aa8dd8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfa < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfb;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 6) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103aa8eb0; end: 103aa8f47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aa8eb0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fe22c8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103aa8f48; end: 103aa8fa7; -[SCSendToRankingASTRuntimeServices init] */

void FUN_103aa8f48(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendToRankingASTRuntimeServices.SCSendToRankingASTRuntimeServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103aa8f74);
  (*pcVar1)();
}



/* Entry: 103aa8fa8; end: 103aa8fb7; -[SCSendToRankingASTRuntimeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aa8fa8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fe22c8));
  return;
}



/* Entry: 103aa8fb8; end: 103aa8fc7; -[SCVideoWatermarkServices videoWatermarkServiceObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aa8fb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fe2300));
  return;
}



/* Entry: 103aa8fc8; end: 103aa904b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103aa8fc8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fe22f8) = param_1;
  uVar1 = param_1;
  func_0x000107c6157c();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112fe2300) = uVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 103aa904c; end: 103aa90ab; -[SCVideoWatermarkServices init] */

void FUN_103aa904c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCVideoWatermarkServices.SCVideoWatermarkServices",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103aa9078);
  (*pcVar1)();
}



/* Entry: 103aa90ac; end: 103aa90e3; -[SCVideoWatermarkServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aa90ac(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fe22f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe2300));
  return;
}



/* Entry: 103aa90e4; end: 103aa916b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103aa90e4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100abe548();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fe2330) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fe2338) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103aa916c);
  (*pcVar1)();
}



/* Entry: 103aa916c; end: 103aa91cb; -[_TtC36SigActiveUserSessionScopeGraphBridge51SigActiveUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103aa916c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SigActiveUserSessionScopeGraphBridge.SigActiveUserSessionScopeGraphBridgeSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103aa9198);
  (*pcVar1)();
}



/* Entry: 103aa91cc; end: 103aa9203; -[_TtC36SigActiveUserSessionScopeGraphBridge51SigActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103aa91e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103aa91ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aa91cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe2330));
  return;
}



/* Entry: 103aa9204; end: 103aa922b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aa9204(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fe2338),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fe2330));
  return;
}



/* Entry: 103aa922c; end: 103aa928f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103aa922c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fe2448);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103aa9290; end: 103aa9297;  */

void FUN_103aa9290(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103aa9298; end: 103aa9337;  */

void FUN_103aa9298(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103aa9338; end: 103aa93a3;  */

void FUN_103aa9338(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103aa93a4; end: 103aa9403; -[_TtC36SigActiveUserSessionScopeGraphBridge44SigActiveUserSessionScopeGraphBridgeServices init] */

void FUN_103aa93a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SigActiveUserSessionScopeGraphBridge.SigActiveUserSessionScopeGraphBridgeServices"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103aa93d0);
  (*pcVar1)();
}



/* Entry: 103aa9404; end: 103aa9413; -[_TtC36SigActiveUserSessionScopeGraphBridge44SigActiveUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aa9404(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fe2448));
  return;
}



/* Entry: 103aa9414; end: 103aa946f;  */

void FUN_103aa9414(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112fe2438,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112fe2438,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 103aa9470; end: 103aa94a7;  */

undefined1  [16] FUN_103aa9470(void)

{
  return ZEXT816(0x1106c9a00);
}



/* Entry: 103aa94a8; end: 103aa94eb; -[SCSigActiveUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_103aa94a8(undefined8 param_1)

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



/* Entry: 103aa94ec; end: 103aa951f;  */

void FUN_103aa94ec(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103aa9520; end: 103aa9567; -[SCSigActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103aa954c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103aa9550) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aa9520(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fe24a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe24a8));
  return;
}



/* Entry: 103aa9568; end: 103aa9587;  */

void FUN_103aa9568(void)

{
  func_0x000107c61168(&PTR_PTR_11291fc68);
  return;
}



/* Entry: 103aa9588; end: 103aa9593; -[SCPlatformUIExperimentsServiceSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aa9588(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe24e0;
  func_0x000107c61428(param_1 + _DAT_112fe24e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103aa9594; end: 103aa959f; -[SCPlatformUIExperimentsServiceSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aa9594(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe24e0;
  func_0x000107c61428(param_1 + _DAT_112fe24e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103aa95a0; end: 103aa95ab; -[SCPlatformUIExperimentsServiceSaberServiceProvider sigActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aa95a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe24e8;
  func_0x000107c61428(param_1 + _DAT_112fe24e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103aa95ac; end: 103aa95ef;  */

void FUN_103aa95ac(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103aa95f0; end: 103aa95fb; -[SCPlatformUIExperimentsServiceSaberServiceProvider setSigActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aa95f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe24e8;
  func_0x000107c61428(param_1 + _DAT_112fe24e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103aa95fc; end: 103aa964f;  */

void FUN_103aa95fc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103aa9650; end: 103aa9863;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103aa9650(void)

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
    func_0x000107c5af54();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103aa92bc();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fe2448);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fe24f0);
      *(long *)(unaff_x20 + _DAT_112fe24f0) = lVar4;
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
                      "SigActiveUserSessionScopeGraphBridge/SCPlatformUIExperimentsServiceSaberServiceProvider.swift"
                      ,0x5d,2,0x1c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103aa977c);
  (*pcVar1)();
}



/* Entry: 103aa9864; end: 103aa9897; -[SCPlatformUIExperimentsServiceSaberServiceProvider provide] */

void FUN_103aa9864(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103aa9650();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103aa9898; end: 103aa98cb; -[SCPlatformUIExperimentsServiceSaberServiceProvider __safeProvide] */

void FUN_103aa9898(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103aa977c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103aa98cc; end: 103aa990f; -[SCPlatformUIExperimentsServiceSaberServiceProvider end] */

void FUN_103aa98cc(undefined8 param_1)

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



/* Entry: 103aa9910; end: 103aa9aa7;  */

void FUN_103aa9910(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef0e68b30)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002c,0x800000010f1974d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SigActiveUserSessionScopeGraphBridge/SCPlatformUIExperimentsServiceSaberServiceProvider.swift"
                            ,0x5d,2,0x31,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103aa9aa8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c592a4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103aa9aa8; end: 103aa9b53; -[SCPlatformUIExperimentsServiceSaberServiceProvider setValue:forIvarName:] */

void FUN_103aa9aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103aa9910(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103aa9b54; end: 103aa9bc7; -[SCPlatformUIExperimentsServiceSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aa9b54(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fe24e0,0);
  func_0x000107c61614(param_1 + _DAT_112fe24e8,0);
  *(undefined8 *)(param_1 + _DAT_112fe24f0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103aa9bc8; end: 103aa9bfb;  */

void FUN_103aa9bc8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103aa9bfc; end: 103aa9c43; -[SCPlatformUIExperimentsServiceSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aa9bfc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fe24e0);
  func_0x000107c61610(param_1 + _DAT_112fe24e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fe24f0));
  return;
}



/* Entry: 103aa9c44; end: 103aa9c63;  */

void FUN_103aa9c44(void)

{
  func_0x000107c61168(&PTR_PTR_112fe2538);
  return;
}



/* Entry: 103aa9c64; end: 103aa9ceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103aa9c64(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100abf91c();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fe25a0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fe25a8) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103aa9cec);
  (*pcVar1)();
}



/* Entry: 103aa9cec; end: 103aa9d4b; -[_TtC40SpecengActiveUserSessionScopeGraphBridge55SpecengActiveUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103aa9cec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpecengActiveUserSessionScopeGraphBridge.SpecengActiveUserSessionScopeGraphBridgeSaberEntryPoint"
                      ,0x60,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103aa9d18);
  (*pcVar1)();
}



/* Entry: 103aa9d4c; end: 103aa9d83; -[_TtC40SpecengActiveUserSessionScopeGraphBridge55SpecengActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103aa9d68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103aa9d6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aa9d4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe25a0));
  return;
}



/* Entry: 103aa9d84; end: 103aa9dab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aa9d84(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fe25a8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fe25a0));
  return;
}



/* Entry: 103aa9dac; end: 103aa9e47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103aa9dac(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fe2c90);
  *(undefined8 *)(unaff_x20 + _DAT_112fe25d8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fe25e0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 103aa9e48; end: 103aa9ea7; -[_TtC40SpecengActiveUserSessionScopeGraphBridge44SCSpectaclesAppStatusServicesSaberEntryPoint init] */

void FUN_103aa9e48(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpecengActiveUserSessionScopeGraphBridge.SCSpectaclesAppStatusServicesSaberEntryPoint"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103aa9e74);
  (*pcVar1)();
}



/* Entry: 103aa9ea8; end: 103aa9f3b; -[_TtC40SpecengActiveUserSessionScopeGraphBridge44SCSpectaclesAppStatusServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aa9ea8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fe25d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe25e0));
  return;
}



/* Entry: 103aa9f3c; end: 103aa9f43;  */

undefined8 FUN_103aa9f3c(void)

{
  return 0;
}



/* Entry: 103aa9f44; end: 103aa9fdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103aa9f44(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fe2c98);
  *(undefined8 *)(unaff_x20 + _DAT_112fe2610) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fe2618) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 103aa9fe0; end: 103aaa03f; -[_TtC40SpecengActiveUserSessionScopeGraphBridge38SCSpectaclesAsyncQueuesSaberEntryPoint init] */

void FUN_103aa9fe0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpecengActiveUserSessionScopeGraphBridge.SCSpectaclesAsyncQueuesSaberEntryPoint"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103aaa00c);
  (*pcVar1)();
}



/* Entry: 103aaa040; end: 103aaa0d3; -[_TtC40SpecengActiveUserSessionScopeGraphBridge38SCSpectaclesAsyncQueuesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aaa040(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fe2610));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe2618));
  return;
}



/* Entry: 103aaa0d4; end: 103aaa0db;  */

undefined8 FUN_103aaa0d4(void)

{
  return 0;
}



/* Entry: 103aaa0dc; end: 103aaa177;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103aaa0dc(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fe2cb0);
  *(undefined8 *)(unaff_x20 + _DAT_112fe2648) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fe2650) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 103aaa178; end: 103aaa1d7; -[_TtC40SpecengActiveUserSessionScopeGraphBridge58SCSpectaclesBluetoothCentralManagerServicesSaberEntryPoint init] */

void FUN_103aaa178(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpecengActiveUserSessionScopeGraphBridge.SCSpectaclesBluetoothCentralManagerServicesSaberEntryPoint"
                      ,99,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103aaa1a4);
  (*pcVar1)();
}



/* Entry: 103aaa1d8; end: 103aaa26b; -[_TtC40SpecengActiveUserSessionScopeGraphBridge58SCSpectaclesBluetoothCentralManagerServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aaa1d8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fe2648));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe2650));
  return;
}



/* Entry: 103aaa26c; end: 103aaa273;  */

undefined8 FUN_103aaa26c(void)

{
  return 0;
}



/* Entry: 103aaa274; end: 103aaa30f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103aaa274(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fe2cb8);
  *(undefined8 *)(unaff_x20 + _DAT_112fe2680) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fe2688) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 103aaa310; end: 103aaa36f; -[_TtC40SpecengActiveUserSessionScopeGraphBridge48SCSpectaclesContentStatusServicesSaberEntryPoint init] */

void FUN_103aaa310(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpecengActiveUserSessionScopeGraphBridge.SCSpectaclesContentStatusServicesSaberEntryPoint"
                      ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103aaa33c);
  (*pcVar1)();
}



/* Entry: 103aaa370; end: 103aaa403; -[_TtC40SpecengActiveUserSessionScopeGraphBridge48SCSpectaclesContentStatusServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aaa370(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fe2680));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe2688));
  return;
}



/* Entry: 103aaa404; end: 103aaa40b;  */

undefined8 FUN_103aaa404(void)

{
  return 0;
}



/* Entry: 103aaa40c; end: 103aaa4a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103aaa40c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fe2cc8);
  *(undefined8 *)(unaff_x20 + _DAT_112fe26b8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fe26c0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 103aaa4a8; end: 103aaa507; -[_TtC40SpecengActiveUserSessionScopeGraphBridge54SCSpectaclesNetworkConnectivityServicesSaberEntryPoint init] */

void FUN_103aaa4a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpecengActiveUserSessionScopeGraphBridge.SCSpectaclesNetworkConnectivityServicesSaberEntryPoint"
                      ,0x5f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103aaa4d4);
  (*pcVar1)();
}



/* Entry: 103aaa508; end: 103aaa59b; -[_TtC40SpecengActiveUserSessionScopeGraphBridge54SCSpectaclesNetworkConnectivityServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aaa508(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fe26b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe26c0));
  return;
}



/* Entry: 103aaa59c; end: 103aaa5a3;  */

undefined8 FUN_103aaa59c(void)

{
  return 0;
}



/* Entry: 103aaa5a4; end: 103aaa63f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103aaa5a4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fe2cd0);
  *(undefined8 *)(unaff_x20 + _DAT_112fe26f0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fe26f8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 103aaa640; end: 103aaa69f; -[_TtC40SpecengActiveUserSessionScopeGraphBridge48SCSpectaclesNotificationsServicesSaberEntryPoint init] */

void FUN_103aaa640(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpecengActiveUserSessionScopeGraphBridge.SCSpectaclesNotificationsServicesSaberEntryPoint"
                      ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103aaa66c);
  (*pcVar1)();
}



/* Entry: 103aaa6a0; end: 103aaa733; -[_TtC40SpecengActiveUserSessionScopeGraphBridge48SCSpectaclesNotificationsServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aaa6a0(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fe26f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe26f8));
  return;
}



/* Entry: 103aaa734; end: 103aaa73b;  */

undefined8 FUN_103aaa734(void)

{
  return 0;
}



/* Entry: 103aaa73c; end: 103aaa7d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103aaa73c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fe2ce8);
  *(undefined8 *)(unaff_x20 + _DAT_112fe2728) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fe2730) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 103aaa7d8; end: 103aaa837; -[_TtC40SpecengActiveUserSessionScopeGraphBridge35SCSpectaclesServicesSaberEntryPoint init] */

void FUN_103aaa7d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpecengActiveUserSessionScopeGraphBridge.SCSpectaclesServicesSaberEntryPoint"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103aaa804);
  (*pcVar1)();
}



/* Entry: 103aaa838; end: 103aaa8cb; -[_TtC40SpecengActiveUserSessionScopeGraphBridge35SCSpectaclesServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aaa838(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fe2728));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe2730));
  return;
}



/* Entry: 103aaa8cc; end: 103aaa8d3;  */

undefined8 FUN_103aaa8cc(void)

{
  return 0;
}



/* Entry: 103aaa8d4; end: 103aaa96f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103aaa8d4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fe2cf0);
  *(undefined8 *)(unaff_x20 + _DAT_112fe2760) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fe2768) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 103aaa970; end: 103aaa9cf; -[_TtC40SpecengActiveUserSessionScopeGraphBridge47SCSpectaclesUIAutomationServicesSaberEntryPoint init] */

void FUN_103aaa970(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpecengActiveUserSessionScopeGraphBridge.SCSpectaclesUIAutomationServicesSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103aaa99c);
  (*pcVar1)();
}



/* Entry: 103aaa9d0; end: 103aaaa63; -[_TtC40SpecengActiveUserSessionScopeGraphBridge47SCSpectaclesUIAutomationServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aaa9d0(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fe2760));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe2768));
  return;
}



/* Entry: 103aaaa64; end: 103aaaa6b;  */

undefined8 FUN_103aaaa64(void)

{
  return 0;
}



/* Entry: 103aaaa6c; end: 103aaaacf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103aaaa6c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fe2c88);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103aaaad0; end: 103aaaad7;  */

void FUN_103aaaad0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103aaaad8; end: 103aaab77;  */

void FUN_103aaaad8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103aaab78; end: 103aaab97;  */

void FUN_103aaab78(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103aaab98; end: 103aaabfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103aaab98(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fe2ca0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103aaabfc; end: 103aaac03;  */

void FUN_103aaabfc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103aaac04; end: 103aaaca3;  */

void FUN_103aaac04(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103aaaca4; end: 103aaacc3;  */

void FUN_103aaaca4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103aaacc4; end: 103aaad27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103aaacc4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fe2ca8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103aaad28; end: 103aaad2f;  */

void FUN_103aaad28(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103aaad30; end: 103aaadcf;  */

void FUN_103aaad30(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103aaadd0; end: 103aaadef;  */

void FUN_103aaadd0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103aaadf0; end: 103aaae53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103aaadf0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fe2cc0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103aaae54; end: 103aaae5b;  */

void FUN_103aaae54(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103aaae5c; end: 103aaae7f;  */

void FUN_103aaae5c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103aaae80; end: 103aaae9f;  */

void FUN_103aaae80(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103aaaea0; end: 103aaaf03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103aaaea0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fe2cd8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103aaaf04; end: 103aaaf0b;  */

void FUN_103aaaf04(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103aaaf0c; end: 103aaafab;  */

void FUN_103aaaf0c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103aaafac; end: 103aaafcb;  */

void FUN_103aaafac(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103aaafcc; end: 103aab02f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103aaafcc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fe2ce0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103aab030; end: 103aab037;  */

void FUN_103aab030(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}


